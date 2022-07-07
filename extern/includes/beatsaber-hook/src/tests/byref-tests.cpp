#ifdef TEST_BYREF
#include "../../shared/utils/byref.hpp"
#include "../../shared/utils/il2cpp-utils.hpp"
#include "../../shared/utils/typedefs.h"
#include <cassert>

static_assert(il2cpp_utils::has_il2cpp_conversion<ByRef<int>>);
static_assert(il2cpp_utils::has_il2cpp_conversion<ByRef<const int>>);
static_assert(il2cpp_utils::has_il2cpp_conversion<const ByRef<int>>);
static_assert(il2cpp_utils::has_il2cpp_conversion<const ByRef<const int>>);

static void test() {
    MethodInfo inf;
    int x = 3;
    il2cpp_utils::RunMethod((Il2CppClass*)nullptr, &inf, byref(x));
    il2cpp_utils::RunMethodThrow((Il2CppClass*)nullptr, &inf, byref(x));
    il2cpp_utils::RunMethodThrow(&x, &inf);
    il2cpp_utils::RunStaticMethod(&inf, byref(x));
    il2cpp_utils::ExtractIndependentType<ByRef<int>>();
    il2cpp_utils::ExtractIndependentType<int>();
    const ByRef<int> testit(x);
    il2cpp_utils::RunMethodRethrow((Il2CppClass*)nullptr, &inf, testit);
    il2cpp_utils::RunMethodRethrow((Il2CppClass*)nullptr, &inf, byref(x));
    assert(il2cpp_utils::ExtractIndependentType<int&>() == il2cpp_utils::ExtractIndependentType<ByRef<int>>());
    il2cpp_utils::raise(il2cpp_utils::RunMethodException("test", nullptr));
}
#endif
