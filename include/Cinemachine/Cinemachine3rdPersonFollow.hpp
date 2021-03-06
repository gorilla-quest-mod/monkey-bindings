// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineComponentBase
#include "Cinemachine/CinemachineComponentBase.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CameraState
  struct CameraState;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: Cinemachine3rdPersonFollow
  class Cinemachine3rdPersonFollow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::Cinemachine3rdPersonFollow);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::Cinemachine3rdPersonFollow*, "Cinemachine", "Cinemachine3rdPersonFollow");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.Cinemachine3rdPersonFollow
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AE5B14
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  class Cinemachine3rdPersonFollow : public ::Cinemachine::CinemachineComponentBase {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAE8C1C
    // public UnityEngine.Vector3 Damping
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 Damping;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xAE8C54
    // [TooltipAttribute] Offset: 0xAE8C54
    // public UnityEngine.Vector3 ShoulderOffset
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 ShoulderOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xAE8CB4
    // public System.Single VerticalArmLength
    // Size: 0x4
    // Offset: 0x68
    float VerticalArmLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAE8CEC
    // [RangeAttribute] Offset: 0xAE8CEC
    // public System.Single CameraSide
    // Size: 0x4
    // Offset: 0x6C
    float CameraSide;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAE8D40
    // public System.Single CameraDistance
    // Size: 0x4
    // Offset: 0x70
    float CameraDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xAE8D78
    // [TooltipAttribute] Offset: 0xAE8D78
    // public UnityEngine.LayerMask CameraCollisionFilter
    // Size: 0x4
    // Offset: 0x74
    ::UnityEngine::LayerMask CameraCollisionFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // [TooltipAttribute] Offset: 0xAE8DD8
    // public System.String IgnoreTag
    // Size: 0x8
    // Offset: 0x78
    ::StringW IgnoreTag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0xAE8E24
    // public System.Single CameraRadius
    // Size: 0x4
    // Offset: 0x80
    float CameraRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 PreviousFollowTargetPosition
    // Size: 0xC
    // Offset: 0x84
    ::UnityEngine::Vector3 PreviousFollowTargetPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single PreviousHeadingAngle
    // Size: 0x4
    // Offset: 0x90
    float PreviousHeadingAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Vector3 Damping
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Damping();
    // Get instance field reference: public UnityEngine.Vector3 ShoulderOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_ShoulderOffset();
    // Get instance field reference: public System.Single VerticalArmLength
    [[deprecated("Use field access instead!")]] float& dyn_VerticalArmLength();
    // Get instance field reference: public System.Single CameraSide
    [[deprecated("Use field access instead!")]] float& dyn_CameraSide();
    // Get instance field reference: public System.Single CameraDistance
    [[deprecated("Use field access instead!")]] float& dyn_CameraDistance();
    // Get instance field reference: public UnityEngine.LayerMask CameraCollisionFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_CameraCollisionFilter();
    // Get instance field reference: public System.String IgnoreTag
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IgnoreTag();
    // Get instance field reference: public System.Single CameraRadius
    [[deprecated("Use field access instead!")]] float& dyn_CameraRadius();
    // Get instance field reference: private UnityEngine.Vector3 PreviousFollowTargetPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_PreviousFollowTargetPosition();
    // Get instance field reference: private System.Single PreviousHeadingAngle
    [[deprecated("Use field access instead!")]] float& dyn_PreviousHeadingAngle();
    // private System.Void OnValidate()
    // Offset: 0x13403D0
    void OnValidate();
    // private System.Void Reset()
    // Offset: 0x13404A8
    void Reset();
    // private System.Void PositionCamera(ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x1340930
    void PositionCamera(ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // public System.Void GetRigPositions(out UnityEngine.Vector3 root, out UnityEngine.Vector3 shoulder, out UnityEngine.Vector3 hand)
    // Offset: 0x1341200
    void GetRigPositions(ByRef<::UnityEngine::Vector3> root, ByRef<::UnityEngine::Vector3> shoulder, ByRef<::UnityEngine::Vector3> hand);
    // private UnityEngine.Vector3 PullTowardsStartOnCollision(in UnityEngine.Vector3 rayStart, in UnityEngine.Vector3 rayEnd, in UnityEngine.LayerMask filter, System.Single radius)
    // Offset: 0x13413FC
    ::UnityEngine::Vector3 PullTowardsStartOnCollision(ByRef<::UnityEngine::Vector3> rayStart, ByRef<::UnityEngine::Vector3> rayEnd, ByRef<::UnityEngine::LayerMask> filter, float radius);
    // public override System.Boolean get_IsValid()
    // Offset: 0x1340574
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Boolean CinemachineComponentBase::get_IsValid()
    bool get_IsValid();
    // public override Cinemachine.CinemachineCore/Stage get_Stage()
    // Offset: 0x13406BC
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: Cinemachine.CinemachineCore/Stage CinemachineComponentBase::get_Stage()
    ::Cinemachine::CinemachineCore::Stage get_Stage();
    // public override System.Single GetMaxDampTime()
    // Offset: 0x13406C4
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Single CinemachineComponentBase::GetMaxDampTime()
    float GetMaxDampTime();
    // public override System.Void MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x1340758
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    void MutateCameraState(ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x13415E8
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cinemachine3rdPersonFollow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::Cinemachine3rdPersonFollow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cinemachine3rdPersonFollow*, creationType>()));
    }
  }; // Cinemachine.Cinemachine3rdPersonFollow
  #pragma pack(pop)
  static check_size<sizeof(Cinemachine3rdPersonFollow), 144 + sizeof(float)> __Cinemachine_Cinemachine3rdPersonFollowSizeCheck;
  static_assert(sizeof(Cinemachine3rdPersonFollow) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Cinemachine3rdPersonFollow::*)()>(&Cinemachine::Cinemachine3rdPersonFollow::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Cinemachine3rdPersonFollow::*)()>(&Cinemachine::Cinemachine3rdPersonFollow::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::PositionCamera
// Il2CppName: PositionCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Cinemachine3rdPersonFollow::*)(ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::Cinemachine3rdPersonFollow::PositionCamera)> {
  static const MethodInfo* get() {
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "PositionCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curState, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::GetRigPositions
// Il2CppName: GetRigPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Cinemachine3rdPersonFollow::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Cinemachine::Cinemachine3rdPersonFollow::GetRigPositions)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* shoulder = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "GetRigPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, shoulder, hand});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::PullTowardsStartOnCollision
// Il2CppName: PullTowardsStartOnCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Cinemachine::Cinemachine3rdPersonFollow::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::LayerMask>, float)>(&Cinemachine::Cinemachine3rdPersonFollow::PullTowardsStartOnCollision)> {
  static const MethodInfo* get() {
    static auto* rayStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rayEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->this_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "PullTowardsStartOnCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rayStart, rayEnd, filter, radius});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::Cinemachine3rdPersonFollow::*)()>(&Cinemachine::Cinemachine3rdPersonFollow::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::get_Stage
// Il2CppName: get_Stage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineCore::Stage (Cinemachine::Cinemachine3rdPersonFollow::*)()>(&Cinemachine::Cinemachine3rdPersonFollow::get_Stage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "get_Stage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::GetMaxDampTime
// Il2CppName: GetMaxDampTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::Cinemachine3rdPersonFollow::*)()>(&Cinemachine::Cinemachine3rdPersonFollow::GetMaxDampTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "GetMaxDampTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::MutateCameraState
// Il2CppName: MutateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Cinemachine3rdPersonFollow::*)(ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::Cinemachine3rdPersonFollow::MutateCameraState)> {
  static const MethodInfo* get() {
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Cinemachine3rdPersonFollow*), "MutateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curState, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Cinemachine3rdPersonFollow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
