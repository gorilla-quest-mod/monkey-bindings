// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineCollider
#include "Cinemachine/CinemachineCollider.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineCollider::VcamExtraState);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineCollider::VcamExtraState*, "Cinemachine", "CinemachineCollider/VcamExtraState");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineCollider/VcamExtraState
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineCollider::VcamExtraState : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 m_previousDisplacement
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_previousDisplacement;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_previousDisplacementCorrection
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 m_previousDisplacementCorrection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single colliderDisplacement
    // Size: 0x4
    // Offset: 0x28
    float colliderDisplacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean targetObscured
    // Size: 0x1
    // Offset: 0x2C
    bool targetObscured;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: targetObscured and: occlusionStartTime
    char __padding3[0x3] = {};
    // public System.Single occlusionStartTime
    // Size: 0x4
    // Offset: 0x30
    float occlusionStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: occlusionStartTime and: debugResolutionPath
    char __padding4[0x4] = {};
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> debugResolutionPath
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* debugResolutionPath;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private System.Single m_SmoothedDistance
    // Size: 0x4
    // Offset: 0x40
    float m_SmoothedDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_SmoothedTime
    // Size: 0x4
    // Offset: 0x44
    float m_SmoothedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Vector3 m_previousDisplacement
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_previousDisplacement();
    // Get instance field reference: public UnityEngine.Vector3 m_previousDisplacementCorrection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_previousDisplacementCorrection();
    // Get instance field reference: public System.Single colliderDisplacement
    [[deprecated("Use field access instead!")]] float& dyn_colliderDisplacement();
    // Get instance field reference: public System.Boolean targetObscured
    [[deprecated("Use field access instead!")]] bool& dyn_targetObscured();
    // Get instance field reference: public System.Single occlusionStartTime
    [[deprecated("Use field access instead!")]] float& dyn_occlusionStartTime();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> debugResolutionPath
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_debugResolutionPath();
    // Get instance field reference: private System.Single m_SmoothedDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_SmoothedDistance();
    // Get instance field reference: private System.Single m_SmoothedTime
    [[deprecated("Use field access instead!")]] float& dyn_m_SmoothedTime();
    // public System.Void AddPointToDebugPath(UnityEngine.Vector3 p)
    // Offset: 0x134AF4C
    void AddPointToDebugPath(::UnityEngine::Vector3 p);
    // public System.Single ApplyDistanceSmoothing(System.Single distance, System.Single smoothingTime)
    // Offset: 0x1349A24
    float ApplyDistanceSmoothing(float distance, float smoothingTime);
    // public System.Void UpdateDistanceSmoothing(System.Single distance, System.Single smoothingTime)
    // Offset: 0x1349998
    void UpdateDistanceSmoothing(float distance, float smoothingTime);
    // public System.Void ResetDistanceSmoothing(System.Single smoothingTime)
    // Offset: 0x1349B0C
    void ResetDistanceSmoothing(float smoothingTime);
    // public System.Void .ctor()
    // Offset: 0x134C66C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineCollider::VcamExtraState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineCollider::VcamExtraState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineCollider::VcamExtraState*, creationType>()));
    }
  }; // Cinemachine.CinemachineCollider/VcamExtraState
  #pragma pack(pop)
  static check_size<sizeof(CinemachineCollider::VcamExtraState), 68 + sizeof(float)> __Cinemachine_CinemachineCollider_VcamExtraStateSizeCheck;
  static_assert(sizeof(CinemachineCollider::VcamExtraState) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineCollider::VcamExtraState::AddPointToDebugPath
// Il2CppName: AddPointToDebugPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineCollider::VcamExtraState::*)(::UnityEngine::Vector3)>(&Cinemachine::CinemachineCollider::VcamExtraState::AddPointToDebugPath)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineCollider::VcamExtraState*), "AddPointToDebugPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineCollider::VcamExtraState::ApplyDistanceSmoothing
// Il2CppName: ApplyDistanceSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineCollider::VcamExtraState::*)(float, float)>(&Cinemachine::CinemachineCollider::VcamExtraState::ApplyDistanceSmoothing)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* smoothingTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineCollider::VcamExtraState*), "ApplyDistanceSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance, smoothingTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineCollider::VcamExtraState::UpdateDistanceSmoothing
// Il2CppName: UpdateDistanceSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineCollider::VcamExtraState::*)(float, float)>(&Cinemachine::CinemachineCollider::VcamExtraState::UpdateDistanceSmoothing)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* smoothingTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineCollider::VcamExtraState*), "UpdateDistanceSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance, smoothingTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineCollider::VcamExtraState::ResetDistanceSmoothing
// Il2CppName: ResetDistanceSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineCollider::VcamExtraState::*)(float)>(&Cinemachine::CinemachineCollider::VcamExtraState::ResetDistanceSmoothing)> {
  static const MethodInfo* get() {
    static auto* smoothingTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineCollider::VcamExtraState*), "ResetDistanceSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{smoothingTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineCollider::VcamExtraState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
