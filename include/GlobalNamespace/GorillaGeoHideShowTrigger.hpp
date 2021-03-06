// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaGeoHideShowTrigger
  class GorillaGeoHideShowTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaGeoHideShowTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaGeoHideShowTrigger*, "", "GorillaGeoHideShowTrigger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: GorillaGeoHideShowTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaGeoHideShowTrigger : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    public:
    // public UnityEngine.GameObject[] makeSureThisIsDisabled
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsDisabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] makeSureThisIsEnabled
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsEnabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Boolean lotsOfStuff
    // Size: 0x1
    // Offset: 0x30
    bool lotsOfStuff;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsDisabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsDisabled();
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsEnabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsEnabled();
    // Get instance field reference: public System.Boolean lotsOfStuff
    [[deprecated("Use field access instead!")]] bool& dyn_lotsOfStuff();
    // public override System.Void OnBoxTriggered()
    // Offset: 0x1B6D910
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::OnBoxTriggered()
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x1B6D9D4
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaGeoHideShowTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaGeoHideShowTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaGeoHideShowTrigger*, creationType>()));
    }
  }; // GorillaGeoHideShowTrigger
  #pragma pack(pop)
  static check_size<sizeof(GorillaGeoHideShowTrigger), 48 + sizeof(bool)> __GlobalNamespace_GorillaGeoHideShowTriggerSizeCheck;
  static_assert(sizeof(GorillaGeoHideShowTrigger) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaGeoHideShowTrigger::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaGeoHideShowTrigger::*)()>(&GlobalNamespace::GorillaGeoHideShowTrigger::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaGeoHideShowTrigger*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaGeoHideShowTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
