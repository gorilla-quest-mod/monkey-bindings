// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineInputProvider
#include "Cinemachine/CinemachineInputProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionReference
  class InputActionReference;
  // Forward declaring type: InputAction
  class InputAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0*, "Cinemachine", "CinemachineInputProvider/<>c__DisplayClass6_0");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineInputProvider/<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AE66BC
  class CinemachineInputProvider::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.InputSystem.InputActionReference actionRef
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::InputSystem::InputActionReference* actionRef;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionReference*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::InputActionReference*
    constexpr operator ::UnityEngine::InputSystem::InputActionReference*() const noexcept {
      return actionRef;
    }
    // Get instance field reference: public UnityEngine.InputSystem.InputActionReference actionRef
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionReference*& dyn_actionRef();
    // public System.Void .ctor()
    // Offset: 0xFCBC18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineInputProvider::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineInputProvider::$$c__DisplayClass6_0*, creationType>()));
    }
    // System.Boolean <ResolveForPlayer>b__0(UnityEngine.InputSystem.InputAction x)
    // Offset: 0xFCBC38
    bool $ResolveForPlayer$b__0(::UnityEngine::InputSystem::InputAction* x);
  }; // Cinemachine.CinemachineInputProvider/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(CinemachineInputProvider::$$c__DisplayClass6_0), 16 + sizeof(::UnityEngine::InputSystem::InputActionReference*)> __Cinemachine_CinemachineInputProvider_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(CinemachineInputProvider::$$c__DisplayClass6_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0::$ResolveForPlayer$b__0
// Il2CppName: <ResolveForPlayer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0::*)(::UnityEngine::InputSystem::InputAction*)>(&Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0::$ResolveForPlayer$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineInputProvider::$$c__DisplayClass6_0*), "<ResolveForPlayer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
