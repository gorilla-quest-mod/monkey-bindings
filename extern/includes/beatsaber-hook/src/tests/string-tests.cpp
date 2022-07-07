#ifdef TEST_STRING
#include "../../shared/utils/il2cpp-utils.hpp"

static bool test1() {
    using namespace il2cpp_utils;
    static auto cs1 = newcsstr<CreationType::Manual>("test");
    auto cs2 = newcsstr("test2");
    return CRASH_UNLESS(RunMethod<bool>(cs1, "Equals", cs2));
}

#include "../../shared/utils/typedefs-string.hpp"
static_assert(sizeof(StringW) == sizeof(void*));
static_assert(il2cpp_utils::has_il2cpp_conversion<StringW>);
static_assert(sizeof(Il2CppString) == sizeof(ConstString<0>));

#pragma clang diagnostic push
// these warnings are not relevant here because we are causing them "on purpose" so we disable the warnings here
#pragma clang diagnostic ignored "-Wunused-value"
#pragma clang diagnostic ignored "-Wunused-variable"

static void string_view_test(StringW const& s1, std::string_view s2) {
    if (s1 == s2)
    ;

    if (s1 < s2)
    ;
}

static void test2() {
    // construction
    ConstString one("one");
    ConstString two(u"two");
    ConstString copOne(one);
    ConstString moveTwo(std::move(two));
    StringW w1("test1");
    StringW w2(u"test2");
    StringW w3(nullptr);
    StringW w4((void*)nullptr);
    StringW w5((Il2CppString*)nullptr);
    StringW w6(one);
    StringW w7(moveTwo);
    // usage
    one->chars;
    std::string oneS(one);
    std::u16string twoS(moveTwo);
    std::wstring threeS(copOne);
    std::u16string_view fourS(copOne);
    Il2CppString* v1(one);
    if (w1 < w2)
    ;
    if (w3 == w4)
    ;

    w1->chars;
    std::string w1s(w1);
    std::u16string w2s(w2);
    std::wstring w3s(w3);
    std::u16string_view w6s(w6);
    Il2CppString* v2(w1);
    
    if (one == w1)
    ;
    if (w1 == one)
    ;
    if (w1 < "test1")
    ;
    if (w1 == "test1")
    ;

    if (w1 < u"test1")
    ;
    if (w1 == u"test1")
    ;

    if (w1 < w1s)
    ;
    if (w1 == w1s)
    ;

    if (w2 < "test2")
    ;
    if (w2 == "test2")
    ;

    if (w2 != "test1")
    ;

    if (w2 < u"test1")
    ;
    if (w2 < u"test1")
    ;

    string_view_test(w1, w1s);

    w1 + "testappend";
    w2 += "testappendinplace";
    
    w1.starts_with("test");

    w1[0] = 'A';

    for (auto c : w1)
    ;

    for (auto const c : w1)
    ;

    for (auto c : static_cast<std::span<Il2CppChar>>(w1))
    ;

    for (auto const c : static_cast<std::span<Il2CppChar const>>(w1))
    ;

    "testprepend" + w1;

    using namespace il2cpp_utils;
    RunMethod<bool>((Il2CppString*)w1, "Equals", w2);
    RunMethod<bool>((Il2CppString*)w1, "Equals", one);
}
#pragma clang diagnostic pop
#endif