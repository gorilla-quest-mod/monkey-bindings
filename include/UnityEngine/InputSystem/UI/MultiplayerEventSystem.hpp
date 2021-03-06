// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.EventSystem
#include "UnityEngine/EventSystems/EventSystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: MultiplayerEventSystem
  class MultiplayerEventSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::MultiplayerEventSystem*, "UnityEngine.InputSystem.UI", "MultiplayerEventSystem");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.MultiplayerEventSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem {
    public:
    public:
    // [TooltipAttribute] Offset: 0xABB470
    // private UnityEngine.GameObject m_PlayerRoot
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* m_PlayerRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject m_PlayerRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_PlayerRoot();
    // public UnityEngine.GameObject get_playerRoot()
    // Offset: 0xF765D4
    ::UnityEngine::GameObject* get_playerRoot();
    // public System.Void set_playerRoot(UnityEngine.GameObject value)
    // Offset: 0xF765DC
    void set_playerRoot(::UnityEngine::GameObject* value);
    // public System.Void .ctor()
    // Offset: 0xF766D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEventSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::UI::MultiplayerEventSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEventSystem*, creationType>()));
    }
    // protected override System.Void Update()
    // Offset: 0xF765E4
    // Implemented from: UnityEngine.EventSystems.EventSystem
    // Base method: System.Void EventSystem::Update()
    void Update();
  }; // UnityEngine.InputSystem.UI.MultiplayerEventSystem
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEventSystem), 80 + sizeof(::UnityEngine::GameObject*)> __UnityEngine_InputSystem_UI_MultiplayerEventSystemSizeCheck;
  static_assert(sizeof(MultiplayerEventSystem) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::MultiplayerEventSystem::get_playerRoot
// Il2CppName: get_playerRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&UnityEngine::InputSystem::UI::MultiplayerEventSystem::get_playerRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::MultiplayerEventSystem*), "get_playerRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::MultiplayerEventSystem::set_playerRoot
// Il2CppName: set_playerRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)(::UnityEngine::GameObject*)>(&UnityEngine::InputSystem::UI::MultiplayerEventSystem::set_playerRoot)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::MultiplayerEventSystem*), "set_playerRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::MultiplayerEventSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::MultiplayerEventSystem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&UnityEngine::InputSystem::UI::MultiplayerEventSystem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::MultiplayerEventSystem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
