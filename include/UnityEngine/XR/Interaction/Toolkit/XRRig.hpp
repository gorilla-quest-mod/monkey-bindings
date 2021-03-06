// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.TrackingOriginModeFlags
#include "UnityEngine/XR/TrackingOriginModeFlags.hpp"
// Including type: UnityEngine.XR.TrackingSpaceType
#include "UnityEngine/XR/TrackingSpaceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRInputSubsystem
  class XRInputSubsystem;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRRig
  class XRRig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRRig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRRig*, "UnityEngine.XR.Interaction.Toolkit", "XRRig");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x3E
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRRig
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADDDA0
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class XRRig : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::XRRig::$RepeatInitializeCamera$d__40
    class $RepeatInitializeCamera$d__40;
    public:
    // [TooltipAttribute] Offset: 0xAE0F10
    // private UnityEngine.GameObject m_RigBaseGameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* m_RigBaseGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE0F5C
    // private UnityEngine.GameObject m_CameraFloorOffsetObject
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* m_CameraFloorOffsetObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE0FA8
    // private UnityEngine.GameObject m_CameraGameObject
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* m_CameraGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE0FF4
    // private UnityEngine.XR.TrackingOriginModeFlags m_TrackingOriginMode
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::XR::TrackingOriginModeFlags m_TrackingOriginMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::TrackingOriginModeFlags) == 0x4);
    // [TooltipAttribute] Offset: 0xAE1040
    // private UnityEngine.XR.TrackingSpaceType m_TrackingSpace
    // Size: 0x4
    // Offset: 0x34
    ::UnityEngine::XR::TrackingSpaceType m_TrackingSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::TrackingSpaceType) == 0x4);
    // [TooltipAttribute] Offset: 0xAE108C
    // private System.Single m_CameraYOffset
    // Size: 0x4
    // Offset: 0x38
    float m_CameraYOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_CameraInitialized
    // Size: 0x1
    // Offset: 0x3C
    bool m_CameraInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_CameraInitializing
    // Size: 0x1
    // Offset: 0x3D
    bool m_CameraInitializing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single k_DefaultCameraYOffset
    static constexpr const float k_DefaultCameraYOffset = 1.36144;
    // Get static field: static private System.Single k_DefaultCameraYOffset
    static float _get_k_DefaultCameraYOffset();
    // Set static field: static private System.Single k_DefaultCameraYOffset
    static void _set_k_DefaultCameraYOffset(float value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> s_InputSubsystems
    static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* _get_s_InputSubsystems();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> s_InputSubsystems
    static void _set_s_InputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);
    // Get instance field reference: private UnityEngine.GameObject m_RigBaseGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_RigBaseGameObject();
    // Get instance field reference: private UnityEngine.GameObject m_CameraFloorOffsetObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_CameraFloorOffsetObject();
    // Get instance field reference: private UnityEngine.GameObject m_CameraGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_CameraGameObject();
    // Get instance field reference: private UnityEngine.XR.TrackingOriginModeFlags m_TrackingOriginMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::TrackingOriginModeFlags& dyn_m_TrackingOriginMode();
    // Get instance field reference: private UnityEngine.XR.TrackingSpaceType m_TrackingSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::TrackingSpaceType& dyn_m_TrackingSpace();
    // Get instance field reference: private System.Single m_CameraYOffset
    [[deprecated("Use field access instead!")]] float& dyn_m_CameraYOffset();
    // Get instance field reference: private System.Boolean m_CameraInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_CameraInitialized();
    // Get instance field reference: private System.Boolean m_CameraInitializing
    [[deprecated("Use field access instead!")]] bool& dyn_m_CameraInitializing();
    // public UnityEngine.GameObject get_rig()
    // Offset: 0x1B10B14
    ::UnityEngine::GameObject* get_rig();
    // public System.Void set_rig(UnityEngine.GameObject value)
    // Offset: 0x1B10B1C
    void set_rig(::UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_cameraFloorOffsetObject()
    // Offset: 0x1B10B24
    ::UnityEngine::GameObject* get_cameraFloorOffsetObject();
    // public System.Void set_cameraFloorOffsetObject(UnityEngine.GameObject value)
    // Offset: 0x1B10B2C
    void set_cameraFloorOffsetObject(::UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_cameraGameObject()
    // Offset: 0x1B10D08
    ::UnityEngine::GameObject* get_cameraGameObject();
    // public System.Void set_cameraGameObject(UnityEngine.GameObject value)
    // Offset: 0x1B10D10
    void set_cameraGameObject(::UnityEngine::GameObject* value);
    // public UnityEngine.XR.TrackingOriginModeFlags get_trackingOriginMode()
    // Offset: 0x1B10D18
    ::UnityEngine::XR::TrackingOriginModeFlags get_trackingOriginMode();
    // public System.Void set_trackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags value)
    // Offset: 0x1B10D20
    void set_trackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags value);
    // public UnityEngine.XR.TrackingSpaceType get_trackingSpace()
    // Offset: 0x1B10D7C
    ::UnityEngine::XR::TrackingSpaceType get_trackingSpace();
    // public System.Void set_trackingSpace(UnityEngine.XR.TrackingSpaceType value)
    // Offset: 0x1B10D84
    void set_trackingSpace(::UnityEngine::XR::TrackingSpaceType value);
    // public System.Single get_cameraYOffset()
    // Offset: 0x1B10D8C
    float get_cameraYOffset();
    // public System.Void set_cameraYOffset(System.Single value)
    // Offset: 0x1B10D94
    void set_cameraYOffset(float value);
    // public UnityEngine.Vector3 get_rigInCameraSpacePos()
    // Offset: 0x1B10D9C
    ::UnityEngine::Vector3 get_rigInCameraSpacePos();
    // public UnityEngine.Vector3 get_cameraInRigSpacePos()
    // Offset: 0x1B10DFC
    ::UnityEngine::Vector3 get_cameraInRigSpacePos();
    // public System.Single get_cameraInRigSpaceHeight()
    // Offset: 0x1B10E5C
    float get_cameraInRigSpaceHeight();
    // protected System.Void OnValidate()
    // Offset: 0x1B10E74
    void OnValidate();
    // protected System.Void Awake()
    // Offset: 0x1B10F6C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1B1112C
    void Start();
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1B11130
    void OnDrawGizmos();
    // private System.Void UpgradeTrackingSpaceToTrackingOriginMode()
    // Offset: 0x1B10F34
    void UpgradeTrackingSpaceToTrackingOriginMode();
    // private System.Void TryInitializeCamera()
    // Offset: 0x1B10D28
    void TryInitializeCamera();
    // private System.Collections.IEnumerator RepeatInitializeCamera()
    // Offset: 0x1B113E0
    ::System::Collections::IEnumerator* RepeatInitializeCamera();
    // private System.Boolean SetupCamera()
    // Offset: 0x1B10B34
    bool SetupCamera();
    // private System.Boolean SetupCamera(UnityEngine.XR.XRInputSubsystem subsystem)
    // Offset: 0x1B1147C
    bool SetupCamera(::UnityEngine::XR::XRInputSubsystem* subsystem);
    // private System.Void SetupCameraLegacy(UnityEngine.XR.TrackingSpaceType trackingSpaceType)
    // Offset: 0x1B11654
    void SetupCameraLegacy(::UnityEngine::XR::TrackingSpaceType trackingSpaceType);
    // private System.Void MoveCameraHeight(System.Single y)
    // Offset: 0x1B1171C
    void MoveCameraHeight(float y);
    // public System.Boolean RotateAroundCameraUsingRigUp(System.Single angleDegrees)
    // Offset: 0x1B11808
    bool RotateAroundCameraUsingRigUp(float angleDegrees);
    // public System.Boolean RotateAroundCameraPosition(UnityEngine.Vector3 vector, System.Single angleDegrees)
    // Offset: 0x1B11858
    bool RotateAroundCameraPosition(::UnityEngine::Vector3 vector, float angleDegrees);
    // public System.Boolean MatchRigUp(UnityEngine.Vector3 destinationUp)
    // Offset: 0x1B1198C
    bool MatchRigUp(::UnityEngine::Vector3 destinationUp);
    // public System.Boolean MatchRigUpCameraForward(UnityEngine.Vector3 destinationUp, UnityEngine.Vector3 destinationForward)
    // Offset: 0x1B11B80
    bool MatchRigUpCameraForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);
    // public System.Boolean MatchRigUpRigForward(UnityEngine.Vector3 destinationUp, UnityEngine.Vector3 destinationForward)
    // Offset: 0x1B11D1C
    bool MatchRigUpRigForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);
    // public System.Boolean MoveCameraToWorldLocation(UnityEngine.Vector3 desiredWorldLocation)
    // Offset: 0x1B11E88
    bool MoveCameraToWorldLocation(::UnityEngine::Vector3 desiredWorldLocation);
    // public System.Void .ctor()
    // Offset: 0x1B12050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRRig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRRig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRRig*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1B12064
    static void _cctor();
  }; // UnityEngine.XR.Interaction.Toolkit.XRRig
  #pragma pack(pop)
  static check_size<sizeof(XRRig), 61 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_XRRigSizeCheck;
  static_assert(sizeof(XRRig) == 0x3E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_rig
// Il2CppName: get_rig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_rig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_rig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_rig
// Il2CppName: set_rig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::GameObject*)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_rig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_rig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraFloorOffsetObject
// Il2CppName: get_cameraFloorOffsetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraFloorOffsetObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_cameraFloorOffsetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraFloorOffsetObject
// Il2CppName: set_cameraFloorOffsetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::GameObject*)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraFloorOffsetObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_cameraFloorOffsetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraGameObject
// Il2CppName: get_cameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_cameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraGameObject
// Il2CppName: set_cameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::GameObject*)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraGameObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_cameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_trackingOriginMode
// Il2CppName: get_trackingOriginMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::TrackingOriginModeFlags (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_trackingOriginMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_trackingOriginMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_trackingOriginMode
// Il2CppName: set_trackingOriginMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::XR::TrackingOriginModeFlags)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_trackingOriginMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "TrackingOriginModeFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_trackingOriginMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_trackingSpace
// Il2CppName: get_trackingSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::TrackingSpaceType (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_trackingSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_trackingSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_trackingSpace
// Il2CppName: set_trackingSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::XR::TrackingSpaceType)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_trackingSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "TrackingSpaceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_trackingSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraYOffset
// Il2CppName: get_cameraYOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraYOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_cameraYOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraYOffset
// Il2CppName: set_cameraYOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::set_cameraYOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "set_cameraYOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_rigInCameraSpacePos
// Il2CppName: get_rigInCameraSpacePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_rigInCameraSpacePos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_rigInCameraSpacePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraInRigSpacePos
// Il2CppName: get_cameraInRigSpacePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraInRigSpacePos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_cameraInRigSpacePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraInRigSpaceHeight
// Il2CppName: get_cameraInRigSpaceHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::get_cameraInRigSpaceHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "get_cameraInRigSpaceHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::UpgradeTrackingSpaceToTrackingOriginMode
// Il2CppName: UpgradeTrackingSpaceToTrackingOriginMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::UpgradeTrackingSpaceToTrackingOriginMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "UpgradeTrackingSpaceToTrackingOriginMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::TryInitializeCamera
// Il2CppName: TryInitializeCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::TryInitializeCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "TryInitializeCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::RepeatInitializeCamera
// Il2CppName: RepeatInitializeCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::RepeatInitializeCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "RepeatInitializeCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCamera
// Il2CppName: SetupCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "SetupCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCamera
// Il2CppName: SetupCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::XR::XRInputSubsystem*)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCamera)> {
  static const MethodInfo* get() {
    static auto* subsystem = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRInputSubsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "SetupCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subsystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCameraLegacy
// Il2CppName: SetupCameraLegacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::XR::TrackingSpaceType)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::SetupCameraLegacy)> {
  static const MethodInfo* get() {
    static auto* trackingSpaceType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "TrackingSpaceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "SetupCameraLegacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingSpaceType});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::MoveCameraHeight
// Il2CppName: MoveCameraHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::MoveCameraHeight)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "MoveCameraHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::RotateAroundCameraUsingRigUp
// Il2CppName: RotateAroundCameraUsingRigUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::RotateAroundCameraUsingRigUp)> {
  static const MethodInfo* get() {
    static auto* angleDegrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "RotateAroundCameraUsingRigUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angleDegrees});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::RotateAroundCameraPosition
// Il2CppName: RotateAroundCameraPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::Vector3, float)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::RotateAroundCameraPosition)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angleDegrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "RotateAroundCameraPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector, angleDegrees});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUp
// Il2CppName: MatchRigUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::Vector3)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUp)> {
  static const MethodInfo* get() {
    static auto* destinationUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "MatchRigUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destinationUp});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUpCameraForward
// Il2CppName: MatchRigUpCameraForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUpCameraForward)> {
  static const MethodInfo* get() {
    static auto* destinationUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* destinationForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "MatchRigUpCameraForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destinationUp, destinationForward});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUpRigForward
// Il2CppName: MatchRigUpRigForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::MatchRigUpRigForward)> {
  static const MethodInfo* get() {
    static auto* destinationUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* destinationForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "MatchRigUpRigForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destinationUp, destinationForward});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::MoveCameraToWorldLocation
// Il2CppName: MoveCameraToWorldLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRRig::*)(::UnityEngine::Vector3)>(&UnityEngine::XR::Interaction::Toolkit::XRRig::MoveCameraToWorldLocation)> {
  static const MethodInfo* get() {
    static auto* desiredWorldLocation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), "MoveCameraToWorldLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desiredWorldLocation});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRig::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::XRRig::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRig*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
