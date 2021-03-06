// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaParent
  class GorillaParent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaParent*, "", "GorillaParent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: GorillaParent
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaParent : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject tagUI
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* tagUI;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject playerParent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* playerParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject vrrigParent
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* vrrigParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Collections.Generic.List`1<VRRig> vrrigs
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>* vrrigs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,VRRig> vrrigDict
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::Player*, ::GlobalNamespace::VRRig*>* vrrigDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Photon::Realtime::Player*, ::GlobalNamespace::VRRig*>*) == 0x8);
    // private System.Int32 i
    // Size: 0x4
    // Offset: 0x40
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public GorillaParent instance
    static ::GlobalNamespace::GorillaParent* _get_instance();
    // Set static field: static public GorillaParent instance
    static void _set_instance(::GlobalNamespace::GorillaParent* value);
    // Get instance field reference: public UnityEngine.GameObject tagUI
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_tagUI();
    // Get instance field reference: public UnityEngine.GameObject playerParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_playerParent();
    // Get instance field reference: public UnityEngine.GameObject vrrigParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_vrrigParent();
    // Get instance field reference: public System.Collections.Generic.List`1<VRRig> vrrigs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*& dyn_vrrigs();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,VRRig> vrrigDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::Player*, ::GlobalNamespace::VRRig*>*& dyn_vrrigDict();
    // Get instance field reference: private System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // public System.Void Awake()
    // Offset: 0x1B7B20C
    void Awake();
    // public System.Void Update()
    // Offset: 0x1B7B334
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1B7B428
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaParent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaParent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaParent*, creationType>()));
    }
  }; // GorillaParent
  #pragma pack(pop)
  static check_size<sizeof(GorillaParent), 64 + sizeof(int)> __GlobalNamespace_GorillaParentSizeCheck;
  static_assert(sizeof(GorillaParent) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaParent::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaParent::*)()>(&GlobalNamespace::GorillaParent::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaParent*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaParent::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaParent::*)()>(&GlobalNamespace::GorillaParent::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaParent*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaParent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
