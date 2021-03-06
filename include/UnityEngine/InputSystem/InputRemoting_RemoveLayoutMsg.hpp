// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting
#include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/RemoveLayoutMsg");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputRemoting/RemoveLayoutMsg
  // [TokenAttribute] Offset: FFFFFFFF
  class InputRemoting::RemoveLayoutMsg : public ::Il2CppObject {
    public:
    // static public UnityEngine.InputSystem.InputRemoting/Message Create(System.String layoutName)
    // Offset: 0xD3937C
    static ::UnityEngine::InputSystem::InputRemoting::Message Create(::StringW layoutName);
    // static public System.Void Process(UnityEngine.InputSystem.InputRemoting receiver, UnityEngine.InputSystem.InputRemoting/Message msg)
    // Offset: 0xD381A8
    static void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting::Message msg);
  }; // UnityEngine.InputSystem.InputRemoting/RemoveLayoutMsg
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting::Message (*)(::StringW)>(&UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg::Create)> {
  static const MethodInfo* get() {
    static auto* layoutName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layoutName});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting::Message)>(&UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg::Process)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting/Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::RemoveLayoutMsg*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver, msg});
  }
};
