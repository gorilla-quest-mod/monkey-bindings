// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineComponentBase
#include "Cinemachine/CinemachineComponentBase.hpp"
// Including type: Cinemachine.CinemachinePathBase/PositionUnits
#include "Cinemachine/CinemachinePathBase_PositionUnits.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CameraState
  struct CameraState;
  // Skipping declaration: CinemachinePathBase because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineTrackedDolly
  class CinemachineTrackedDolly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineTrackedDolly);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineTrackedDolly*, "Cinemachine", "CinemachineTrackedDolly");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineTrackedDolly
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: AE5EC0
  // [AddComponentMenu] Offset: AE5EC0
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  class CinemachineTrackedDolly : public ::Cinemachine::CinemachineComponentBase {
    public:
    // Nested type: ::Cinemachine::CinemachineTrackedDolly::CameraUpMode
    struct CameraUpMode;
    // Nested type: ::Cinemachine::CinemachineTrackedDolly::AutoDolly
    struct AutoDolly;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Cinemachine.CinemachineTrackedDolly/CameraUpMode
    // [TokenAttribute] Offset: FFFFFFFF
    // [DocumentationSortingAttribute] Offset: AE65F8
    struct CameraUpMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CameraUpMode
      constexpr CameraUpMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Default
      static constexpr const int Default = 0;
      // Get static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Default
      static ::Cinemachine::CinemachineTrackedDolly::CameraUpMode _get_Default();
      // Set static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Default
      static void _set_Default(::Cinemachine::CinemachineTrackedDolly::CameraUpMode value);
      // static field const value: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Path
      static constexpr const int Path = 1;
      // Get static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Path
      static ::Cinemachine::CinemachineTrackedDolly::CameraUpMode _get_Path();
      // Set static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode Path
      static void _set_Path(::Cinemachine::CinemachineTrackedDolly::CameraUpMode value);
      // static field const value: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode PathNoRoll
      static constexpr const int PathNoRoll = 2;
      // Get static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode PathNoRoll
      static ::Cinemachine::CinemachineTrackedDolly::CameraUpMode _get_PathNoRoll();
      // Set static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode PathNoRoll
      static void _set_PathNoRoll(::Cinemachine::CinemachineTrackedDolly::CameraUpMode value);
      // static field const value: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTarget
      static constexpr const int FollowTarget = 3;
      // Get static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTarget
      static ::Cinemachine::CinemachineTrackedDolly::CameraUpMode _get_FollowTarget();
      // Set static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTarget
      static void _set_FollowTarget(::Cinemachine::CinemachineTrackedDolly::CameraUpMode value);
      // static field const value: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTargetNoRoll
      static constexpr const int FollowTargetNoRoll = 4;
      // Get static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTargetNoRoll
      static ::Cinemachine::CinemachineTrackedDolly::CameraUpMode _get_FollowTargetNoRoll();
      // Set static field: static public Cinemachine.CinemachineTrackedDolly/CameraUpMode FollowTargetNoRoll
      static void _set_FollowTargetNoRoll(::Cinemachine::CinemachineTrackedDolly::CameraUpMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Cinemachine.CinemachineTrackedDolly/CameraUpMode
    #pragma pack(pop)
    static check_size<sizeof(CinemachineTrackedDolly::CameraUpMode), 0 + sizeof(int)> __Cinemachine_CinemachineTrackedDolly_CameraUpModeSizeCheck;
    static_assert(sizeof(CinemachineTrackedDolly::CameraUpMode) == 0x4);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.CinemachineTrackedDolly/AutoDolly
    // [TokenAttribute] Offset: FFFFFFFF
    // [DocumentationSortingAttribute] Offset: AE660C
    struct AutoDolly/*, public ::System::ValueType*/ {
      public:
      public:
      // [TooltipAttribute] Offset: 0xAEC7BC
      // public System.Boolean m_Enabled
      // Size: 0x1
      // Offset: 0x0
      bool m_Enabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: m_Enabled and: m_PositionOffset
      char __padding0[0x3] = {};
      // [TooltipAttribute] Offset: 0xAEC7F4
      // public System.Single m_PositionOffset
      // Size: 0x4
      // Offset: 0x4
      float m_PositionOffset;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // [TooltipAttribute] Offset: 0xAEC82C
      // public System.Int32 m_SearchRadius
      // Size: 0x4
      // Offset: 0x8
      int m_SearchRadius;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // [FormerlySerializedAsAttribute] Offset: 0xAEC864
      // [TooltipAttribute] Offset: 0xAEC864
      // public System.Int32 m_SearchResolution
      // Size: 0x4
      // Offset: 0xC
      int m_SearchResolution;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AutoDolly
      constexpr AutoDolly(bool m_Enabled_ = {}, float m_PositionOffset_ = {}, int m_SearchRadius_ = {}, int m_SearchResolution_ = {}) noexcept : m_Enabled{m_Enabled_}, m_PositionOffset{m_PositionOffset_}, m_SearchRadius{m_SearchRadius_}, m_SearchResolution{m_SearchResolution_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean m_Enabled
      [[deprecated("Use field access instead!")]] bool& dyn_m_Enabled();
      // Get instance field reference: public System.Single m_PositionOffset
      [[deprecated("Use field access instead!")]] float& dyn_m_PositionOffset();
      // Get instance field reference: public System.Int32 m_SearchRadius
      [[deprecated("Use field access instead!")]] int& dyn_m_SearchRadius();
      // Get instance field reference: public System.Int32 m_SearchResolution
      [[deprecated("Use field access instead!")]] int& dyn_m_SearchResolution();
      // public System.Void .ctor(System.Boolean enabled, System.Single positionOffset, System.Int32 searchRadius, System.Int32 stepsPerSegment)
      // Offset: 0x9B19CC
      // ABORTED: conflicts with another method.  AutoDolly(bool enabled, float positionOffset, int searchRadius, int stepsPerSegment);
    }; // Cinemachine.CinemachineTrackedDolly/AutoDolly
    #pragma pack(pop)
    static check_size<sizeof(CinemachineTrackedDolly::AutoDolly), 12 + sizeof(int)> __Cinemachine_CinemachineTrackedDolly_AutoDollySizeCheck;
    static_assert(sizeof(CinemachineTrackedDolly::AutoDolly) == 0x10);
    public:
    // [TooltipAttribute] Offset: 0xAEA554
    // public Cinemachine.CinemachinePathBase m_Path
    // Size: 0x8
    // Offset: 0x50
    ::Cinemachine::CinemachinePathBase* m_Path;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachinePathBase*) == 0x8);
    // [TooltipAttribute] Offset: 0xAEA58C
    // public System.Single m_PathPosition
    // Size: 0x4
    // Offset: 0x58
    float m_PathPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEA5C4
    // public Cinemachine.CinemachinePathBase/PositionUnits m_PositionUnits
    // Size: 0x4
    // Offset: 0x5C
    ::Cinemachine::CinemachinePathBase::PositionUnits m_PositionUnits;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachinePathBase::PositionUnits) == 0x4);
    // [TooltipAttribute] Offset: 0xAEA5FC
    // public UnityEngine.Vector3 m_PathOffset
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 m_PathOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [RangeAttribute] Offset: 0xAEA634
    // [TooltipAttribute] Offset: 0xAEA634
    // public System.Single m_XDamping
    // Size: 0x4
    // Offset: 0x6C
    float m_XDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAEA688
    // [TooltipAttribute] Offset: 0xAEA688
    // public System.Single m_YDamping
    // Size: 0x4
    // Offset: 0x70
    float m_YDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAEA6DC
    // [TooltipAttribute] Offset: 0xAEA6DC
    // public System.Single m_ZDamping
    // Size: 0x4
    // Offset: 0x74
    float m_ZDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEA730
    // public Cinemachine.CinemachineTrackedDolly/CameraUpMode m_CameraUp
    // Size: 0x4
    // Offset: 0x78
    ::Cinemachine::CinemachineTrackedDolly::CameraUpMode m_CameraUp;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineTrackedDolly::CameraUpMode) == 0x4);
    // [RangeAttribute] Offset: 0xAEA768
    // [TooltipAttribute] Offset: 0xAEA768
    // public System.Single m_PitchDamping
    // Size: 0x4
    // Offset: 0x7C
    float m_PitchDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAEA7BC
    // [TooltipAttribute] Offset: 0xAEA7BC
    // public System.Single m_YawDamping
    // Size: 0x4
    // Offset: 0x80
    float m_YawDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAEA810
    // [TooltipAttribute] Offset: 0xAEA810
    // public System.Single m_RollDamping
    // Size: 0x4
    // Offset: 0x84
    float m_RollDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEA864
    // public Cinemachine.CinemachineTrackedDolly/AutoDolly m_AutoDolly
    // Size: 0x10
    // Offset: 0x88
    ::Cinemachine::CinemachineTrackedDolly::AutoDolly m_AutoDolly;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineTrackedDolly::AutoDolly) == 0x10);
    // private System.Single m_PreviousPathPosition
    // Size: 0x4
    // Offset: 0x98
    float m_PreviousPathPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion m_PreviousOrientation
    // Size: 0x10
    // Offset: 0x9C
    ::UnityEngine::Quaternion m_PreviousOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 m_PreviousCameraPosition
    // Size: 0xC
    // Offset: 0xAC
    ::UnityEngine::Vector3 m_PreviousCameraPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public Cinemachine.CinemachinePathBase m_Path
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachinePathBase*& dyn_m_Path();
    // Get instance field reference: public System.Single m_PathPosition
    [[deprecated("Use field access instead!")]] float& dyn_m_PathPosition();
    // Get instance field reference: public Cinemachine.CinemachinePathBase/PositionUnits m_PositionUnits
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachinePathBase::PositionUnits& dyn_m_PositionUnits();
    // Get instance field reference: public UnityEngine.Vector3 m_PathOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_PathOffset();
    // Get instance field reference: public System.Single m_XDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_XDamping();
    // Get instance field reference: public System.Single m_YDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_YDamping();
    // Get instance field reference: public System.Single m_ZDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_ZDamping();
    // Get instance field reference: public Cinemachine.CinemachineTrackedDolly/CameraUpMode m_CameraUp
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineTrackedDolly::CameraUpMode& dyn_m_CameraUp();
    // Get instance field reference: public System.Single m_PitchDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_PitchDamping();
    // Get instance field reference: public System.Single m_YawDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_YawDamping();
    // Get instance field reference: public System.Single m_RollDamping
    [[deprecated("Use field access instead!")]] float& dyn_m_RollDamping();
    // Get instance field reference: public Cinemachine.CinemachineTrackedDolly/AutoDolly m_AutoDolly
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineTrackedDolly::AutoDolly& dyn_m_AutoDolly();
    // Get instance field reference: private System.Single m_PreviousPathPosition
    [[deprecated("Use field access instead!")]] float& dyn_m_PreviousPathPosition();
    // Get instance field reference: private UnityEngine.Quaternion m_PreviousOrientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_m_PreviousOrientation();
    // Get instance field reference: private UnityEngine.Vector3 m_PreviousCameraPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_PreviousCameraPosition();
    // private UnityEngine.Quaternion GetCameraOrientationAtPathPoint(UnityEngine.Quaternion pathOrientation, UnityEngine.Vector3 up)
    // Offset: 0x1383884
    ::UnityEngine::Quaternion GetCameraOrientationAtPathPoint(::UnityEngine::Quaternion pathOrientation, ::UnityEngine::Vector3 up);
    // private UnityEngine.Vector3 get_AngularDamping()
    // Offset: 0x1382EC4
    ::UnityEngine::Vector3 get_AngularDamping();
    // public override System.Boolean get_IsValid()
    // Offset: 0x1382D48
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Boolean CinemachineComponentBase::get_IsValid()
    bool get_IsValid();
    // public override Cinemachine.CinemachineCore/Stage get_Stage()
    // Offset: 0x1382DD8
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: Cinemachine.CinemachineCore/Stage CinemachineComponentBase::get_Stage()
    ::Cinemachine::CinemachineCore::Stage get_Stage();
    // public override System.Single GetMaxDampTime()
    // Offset: 0x1382DE0
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Single CinemachineComponentBase::GetMaxDampTime()
    float GetMaxDampTime();
    // public override System.Void MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x1382F94
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    void MutateCameraState(ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x1383B2C
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineTrackedDolly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineTrackedDolly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineTrackedDolly*, creationType>()));
    }
  }; // Cinemachine.CinemachineTrackedDolly
  #pragma pack(pop)
  static check_size<sizeof(CinemachineTrackedDolly), 172 + sizeof(::UnityEngine::Vector3)> __Cinemachine_CinemachineTrackedDollySizeCheck;
  static_assert(sizeof(CinemachineTrackedDolly) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineTrackedDolly::AutoDolly, "Cinemachine", "CinemachineTrackedDolly/AutoDolly");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineTrackedDolly::CameraUpMode, "Cinemachine", "CinemachineTrackedDolly/CameraUpMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::GetCameraOrientationAtPathPoint
// Il2CppName: GetCameraOrientationAtPathPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Cinemachine::CinemachineTrackedDolly::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&Cinemachine::CinemachineTrackedDolly::GetCameraOrientationAtPathPoint)> {
  static const MethodInfo* get() {
    static auto* pathOrientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* up = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "GetCameraOrientationAtPathPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pathOrientation, up});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::get_AngularDamping
// Il2CppName: get_AngularDamping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Cinemachine::CinemachineTrackedDolly::*)()>(&Cinemachine::CinemachineTrackedDolly::get_AngularDamping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "get_AngularDamping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineTrackedDolly::*)()>(&Cinemachine::CinemachineTrackedDolly::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::get_Stage
// Il2CppName: get_Stage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineCore::Stage (Cinemachine::CinemachineTrackedDolly::*)()>(&Cinemachine::CinemachineTrackedDolly::get_Stage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "get_Stage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::GetMaxDampTime
// Il2CppName: GetMaxDampTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineTrackedDolly::*)()>(&Cinemachine::CinemachineTrackedDolly::GetMaxDampTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "GetMaxDampTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::MutateCameraState
// Il2CppName: MutateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineTrackedDolly::*)(ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineTrackedDolly::MutateCameraState)> {
  static const MethodInfo* get() {
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineTrackedDolly*), "MutateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curState, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineTrackedDolly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
