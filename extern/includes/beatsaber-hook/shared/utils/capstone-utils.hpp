#pragma once
#include "../../shared/utils/utils.h"
#include "capstone/shared/capstone/capstone.h"
#include "capstone/shared/platform.h"
#include <array>
#include <tuple>
#include <optional>

namespace cs {
csh getHandle();

uint32_t* readb(const uint32_t* addr);

template<arm64_insn... args>
constexpr bool insnMatch(cs_insn* insn) {
    if constexpr (sizeof...(args) > 0) {
        return (((insn->id == args) || ...));
    }
    return false;
};

template<uint32_t nToRetOn, int retCount = -1, size_t szBytes = 4096, class F1, class F2>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNth(const uint32_t* addr, F1&& match, F2&& skip) {
    cs_insn* insn = cs_malloc(getHandle());
    auto ptr = reinterpret_cast<uint64_t>(addr);
    auto instructions = reinterpret_cast<const uint8_t*>(addr);

    int rCount = retCount;
    uint32_t nCalls = nToRetOn;
    size_t sz = szBytes;
    while (sz > 0) {
        bool res = cs_disasm_iter(getHandle(), &instructions, &sz, &ptr, insn);
        if (res) {
            // Valid decode, so lets check to see if it is a match or we need to break.
            if (insn->id == ARM64_INS_RET) {
                if (rCount == 0) {
                    // Early termination!
                    cs_free(insn, 1);
                    SAFE_ABORT_MSG("Could not find: %u call at: %p within: %i rets! Found all of the rets first!", nToRetOn, addr, retCount);
                }
                rCount--;
            } else {
                auto testRes = match(insn);
                if (testRes) {
                    if (nCalls == 1) {
                        cs_free(insn, 1);
                        return testRes;
                    } else {
                        nCalls--;
                    }
                } else if (skip(insn)) {
                    if (nCalls == 1) {
                        std::string name(insn->mnemonic);
                        cs_free(insn, 1);
                        SAFE_ABORT_MSG("Found: %u match, at: %p within: %i rets, but the result was a %s! Cannot compute destination address!", nToRetOn, addr, retCount, name.c_str());
                    } else {
                        nCalls--;
                    }
                }
            }
            // Other instructions are ignored silently
        }
        else {
            // Invalid instructions are ignored silently.
            // In order to skip these properly, we must increment our instructions, ptr, and size accordingly.
            sz -= 4;
            ptr += 4;
            instructions += 4;
        }
    }
    // If we run out of bytes to parse, we fail
    cs_free(insn, 1);
    SAFE_ABORT_MSG("Could not find: %u call at: %p within: %i rets, within size: %zu!", nToRetOn, addr, retCount, szBytes);
}

template<uint32_t nToRetOn, auto match, auto skip, int retCount = -1, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNth(const uint32_t* addr) {
    cs_insn* insn = cs_malloc(getHandle());
    auto ptr = reinterpret_cast<uint64_t>(addr);
    auto instructions = reinterpret_cast<const uint8_t*>(addr);

    int rCount = retCount;
    uint32_t nCalls = nToRetOn;
    size_t sz = szBytes;
    while (sz > 0) {
        bool res = cs_disasm_iter(getHandle(), &instructions, &sz, &ptr, insn);
        __android_log_print(Logging::DEBUG, "QuestHook[" ID "|" VERSION "] capstone", "%p diassemb: %s (rCount: %i, nCalls: %u, sz: %zu)", (void*)ptr, insn->mnemonic, rCount, nCalls, sz);
        if (res) {
            // Valid decode, so lets check to see if it is a match or we need to break.
            if (insn->id == ARM64_INS_RET) {
                if (rCount == 0) {
                    // Early termination!
                    cs_free(insn, 1);
                    SAFE_ABORT_MSG("Could not find: %u call at: %p within: %i rets! Found all of the rets first!", nToRetOn, addr, retCount);
                }
                rCount--;
            } else {
                auto testRes = match(insn);
                if (testRes) {
                    if (nCalls == 1) {
                        cs_free(insn, 1);
                        return testRes;
                    } else {
                        nCalls--;
                    }
                } else if (skip(insn)) {
                    if (nCalls == 1) {
                        std::string name(insn->mnemonic);
                        cs_free(insn, 1);
                        SAFE_ABORT_MSG("Found: %u match, at: %p within: %i rets, but the result was a %s! Cannot compute destination address!", nToRetOn, addr, retCount, name.c_str());
                    } else {
                        nCalls--;
                    }
                }
            }
            // Other instructions are ignored silently
        }
        else {
            // Invalid instructions are ignored silently.
            // In order to skip these properly, we must increment our instructions, ptr, and size accordingly.
            __android_log_print(Logging::WARNING, "QuestHook[" ID "|" VERSION "] capstone", "FAILED PARSE: %p diassemb: 0x%x", (void*)ptr, *(uint32_t*)ptr);
            sz -= 4;
            ptr += 4;
            instructions += 4;
        }
    }
    // If we run out of bytes to parse, we fail
    cs_free(insn, 1);
    SAFE_ABORT_MSG("Could not find: %u call at: %p within: %i rets, within size: %zu!", nToRetOn, addr, retCount, szBytes);
}

std::optional<uint32_t*> blConv(cs_insn* insn);

template<uint32_t nToRetOn, bool includeR = false, int retCount = -1, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNthBl(const uint32_t* addr) {
    if constexpr (includeR) {
        return findNth<nToRetOn, &blConv, &insnMatch<ARM64_INS_BLR>, retCount, szBytes>(addr).value();
    } else {
        return findNth<nToRetOn, &blConv, &insnMatch<>, retCount, szBytes>(addr).value();
    }
}

std::optional<uint32_t*> bConv(cs_insn* insn);

template<uint32_t nToRetOn, bool includeR = false, int retCount = -1, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNthB(const uint32_t* addr) {
    if constexpr (includeR) {
        return findNth<nToRetOn, &bConv, &insnMatch<ARM64_INS_BR>, retCount, szBytes>(addr).value();
    } else {
        return findNth<nToRetOn, &bConv, &insnMatch<>, retCount, szBytes>(addr).value();
    }
}

std::optional<std::tuple<uint32_t*, arm64_reg, uint32_t*>> pcRelConv(cs_insn* insn);

template<uint32_t nToRetOn, int retCount = -1, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNthPcRel(const uint32_t* addr) {
    return findNth<nToRetOn, &pcRelConv, &insnMatch<>, retCount, szBytes>(addr).value();
}

std::optional<std::tuple<uint32_t*, arm64_reg, int64_t>> regMatchConv(cs_insn* match, arm64_reg toMatch);

template<uint32_t nToRetOn, int retCount = -1, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && (szBytes % 4) == 0))
auto findNthReg(const uint32_t* addr, arm64_reg reg) {
    auto lmd = [reg](cs_insn* in) -> std::optional<std::tuple<uint32_t*, arm64_reg, int64_t>> { return regMatchConv(in, reg); };
    return findNth<nToRetOn, retCount, szBytes>(addr, lmd, &insnMatch<>).value();
}

template<uint32_t nToRetOn, uint32_t nImmOff, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && nImmOff >= 1 && (szBytes % 4) == 0))
auto getpcaddr(const uint32_t* addr) {
    auto pcrel = findNthPcRel<nToRetOn, -1, szBytes>(addr);
    // addr is in first slot of tuple, reg in second, dst imm in third
    // TODO: decrease size correctly
    auto reginst = findNthReg<nImmOff, -1, szBytes>(std::get<0>(pcrel), std::get<1>(pcrel));
    return std::make_tuple(std::get<0>(reginst), std::get<1>(reginst), reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(std::get<2>(pcrel)) + std::get<2>(reginst)));
}

template<uint32_t nToRetOn, uint32_t nImmOff, int match, size_t szBytes = 4096>
requires ((nToRetOn >= 1 && nImmOff >= 1 && (szBytes % 4) == 0))
auto evalswitch(const uint32_t* addr) {
    // Get matching adr/adrp + offset on register
    auto res = getpcaddr<nToRetOn, nImmOff, szBytes>(addr);
    // Convert destination to the switch table address
    auto switchTable = reinterpret_cast<int32_t*>(std::get<2>(res));
    // Index into switch table, which holds int32s, offset from start of switch table
    auto val = switchTable[match - 1];
    // Add offset to switch table and convert back to pointer type
    return reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(switchTable) + val);
}
}