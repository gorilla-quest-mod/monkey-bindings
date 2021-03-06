// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Animations.Rigging.IRigEffectorHolder
#include "UnityEngine/Animations/Rigging/IRigEffectorHolder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IRigConstraint
  class IRigConstraint;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: Rig
  class Rig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::Rig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::Rig*, "UnityEngine.Animations.Rigging", "Rig");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.Rig
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADA628
  // [HelpURLAttribute] Offset: ADA628
  class Rig : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::Animations::Rigging::IRigEffectorHolder*/ {
    public:
    public:
    // [RangeAttribute] Offset: 0xADB890
    // protected System.Single m_Weight
    // Size: 0x4
    // Offset: 0x18
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Weight and: m_Constraints
    char __padding0[0x4] = {};
    // private UnityEngine.Animations.Rigging.IRigConstraint[] m_Constraints
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> m_Constraints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>) == 0x8);
    // private UnityEngine.Animations.IAnimationJob[] m_Jobs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Animations::IAnimationJob*> m_Jobs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animations::IAnimationJob*>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADB8D0
    // private System.Boolean <isInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IRigEffectorHolder
    operator ::UnityEngine::Animations::Rigging::IRigEffectorHolder() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IRigEffectorHolder*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Single m_Weight
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight();
    // Get instance field reference: private UnityEngine.Animations.Rigging.IRigConstraint[] m_Constraints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>& dyn_m_Constraints();
    // Get instance field reference: private UnityEngine.Animations.IAnimationJob[] m_Jobs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animations::IAnimationJob*>& dyn_m_Jobs();
    // Get instance field reference: private System.Boolean <isInitialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isInitialized$k__BackingField();
    // public System.Boolean Initialize(UnityEngine.Animator animator)
    // Offset: 0x11612A4
    bool Initialize(::UnityEngine::Animator* animator);
    // public System.Void Destroy()
    // Offset: 0x1161670
    void Destroy();
    // public System.Void UpdateConstraints()
    // Offset: 0x1161830
    void UpdateConstraints();
    // public System.Boolean get_isInitialized()
    // Offset: 0x116196C
    bool get_isInitialized();
    // private System.Void set_isInitialized(System.Boolean value)
    // Offset: 0x1161974
    void set_isInitialized(bool value);
    // public System.Single get_weight()
    // Offset: 0x1161980
    float get_weight();
    // public System.Void set_weight(System.Single value)
    // Offset: 0x1161988
    void set_weight(float value);
    // public UnityEngine.Animations.Rigging.IRigConstraint[] get_constraints()
    // Offset: 0x1161A04
    ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> get_constraints();
    // public UnityEngine.Animations.IAnimationJob[] get_jobs()
    // Offset: 0x1161A1C
    ::ArrayW<::UnityEngine::Animations::IAnimationJob*> get_jobs();
    // public System.Void .ctor()
    // Offset: 0x1161A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::Rig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rig*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.Rig
  #pragma pack(pop)
  static check_size<sizeof(Rig), 48 + sizeof(bool)> __UnityEngine_Animations_Rigging_RigSizeCheck;
  static_assert(sizeof(Rig) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::Rig::*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::Rigging::Rig::Initialize)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::UpdateConstraints
// Il2CppName: UpdateConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::UpdateConstraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "UpdateConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::set_isInitialized
// Il2CppName: set_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::Rig::*)(bool)>(&UnityEngine::Animations::Rigging::Rig::set_isInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "set_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::get_weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::set_weight
// Il2CppName: set_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::Rig::*)(float)>(&UnityEngine::Animations::Rigging::Rig::set_weight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "set_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::get_constraints
// Il2CppName: get_constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::get_constraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "get_constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::get_jobs
// Il2CppName: get_jobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::IAnimationJob*> (UnityEngine::Animations::Rigging::Rig::*)()>(&UnityEngine::Animations::Rigging::Rig::get_jobs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::Rig*), "get_jobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::Rig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
