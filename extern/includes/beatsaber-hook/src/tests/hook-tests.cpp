// #define TEST_HOOK
#ifdef TEST_HOOK
#pragma clang diagnostic push
// these warnings are not relevant here because we are causing them "on purpose" so we disable the warnings here
#pragma clang diagnostic ignored "-Wunused-value"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#include "../../shared/utils/hooking.hpp"

MAKE_HOOK(test, 0x0, void, int arg) {
    throw il2cpp_utils::RunMethodException("lol rekt", nullptr);
}
#pragma clang diagnostic pop
#endif