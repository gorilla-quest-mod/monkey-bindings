// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionState
  class InputActionState;
  // Forward declaring type: InputControl
  class InputControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputBindingCompositeContext
  struct InputBindingCompositeContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingCompositeContext, "UnityEngine.InputSystem", "InputBindingCompositeContext");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputBindingCompositeContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputBindingCompositeContext/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::InputBindingCompositeContext::DefaultComparer_1<TValue>
    template<typename TValue>
    struct DefaultComparer_1;
    public:
    // UnityEngine.InputSystem.InputActionState m_State
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::InputActionState* m_State;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionState*) == 0x8);
    // System.Int32 m_BindingIndex
    // Size: 0x4
    // Offset: 0x8
    int m_BindingIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputBindingCompositeContext
    constexpr InputBindingCompositeContext(::UnityEngine::InputSystem::InputActionState* m_State_ = {}, int m_BindingIndex_ = {}) noexcept : m_State{m_State_}, m_BindingIndex{m_BindingIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: UnityEngine.InputSystem.InputActionState m_State
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionState*& dyn_m_State();
    // Get instance field reference: System.Int32 m_BindingIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_BindingIndex();
    // public TValue ReadValue(System.Int32 partNumber)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    TValue ReadValue(int partNumber) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TValue>, ::System::IComparable_1<TValue>> && std::is_convertible_v<TValue, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ReadValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(partNumber)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method, partNumber);
    }
    // public TValue ReadValue(System.Int32 partNumber, out UnityEngine.InputSystem.InputControl sourceControl)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    TValue ReadValue(int partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TValue>, ::System::IComparable_1<TValue>> && std::is_convertible_v<TValue, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ReadValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(partNumber), ::il2cpp_utils::ExtractIndependentType<::UnityEngine::InputSystem::InputControl*&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method, partNumber, byref(sourceControl));
    }
    // public TValue ReadValue(System.Int32 partNumber, TComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue, class TComparer>
    TValue ReadValue(int partNumber, TComparer comparer) {
      static_assert(std::is_convertible_v<TValue, ::System::ValueType*>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TComparer>, ::System::Collections::Generic::IComparer_1<TValue>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ReadValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(partNumber), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method, partNumber, comparer);
    }
    // public TValue ReadValue(System.Int32 partNumber, out UnityEngine.InputSystem.InputControl sourceControl, TComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue, class TComparer>
    TValue ReadValue(int partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl, TComparer comparer) {
      static_assert(std::is_convertible_v<TValue, ::System::ValueType*>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TComparer>, ::System::Collections::Generic::IComparer_1<TValue>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ReadValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(partNumber), ::il2cpp_utils::ExtractIndependentType<::UnityEngine::InputSystem::InputControl*&>(), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method, partNumber, byref(sourceControl), comparer);
    }
    // public System.Boolean ReadValueAsButton(System.Int32 partNumber)
    // Offset: 0x9AFFE8
    bool ReadValueAsButton(int partNumber);
  }; // UnityEngine.InputSystem.InputBindingCompositeContext
  #pragma pack(pop)
  static check_size<sizeof(InputBindingCompositeContext), 8 + sizeof(int)> __UnityEngine_InputSystem_InputBindingCompositeContextSizeCheck;
  static_assert(sizeof(InputBindingCompositeContext) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue
// Il2CppName: ReadValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue
// Il2CppName: ReadValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue
// Il2CppName: ReadValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue
// Il2CppName: ReadValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton
// Il2CppName: ReadValueAsButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int)>(&UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton)> {
  static const MethodInfo* get() {
    static auto* partNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputBindingCompositeContext), "ReadValueAsButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partNumber});
  }
};
