// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.RigConstraint`3
#include "UnityEngine/Animations/Rigging/RigConstraint_3.hpp"
// Including type: UnityEngine.Animations.Rigging.DampedTransformJob
#include "UnityEngine/Animations/Rigging/DampedTransformJob.hpp"
// Including type: UnityEngine.Animations.Rigging.DampedTransformData
#include "UnityEngine/Animations/Rigging/DampedTransformData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: DampedTransformJobBinder`1<T>
  template<typename T>
  class DampedTransformJobBinder_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: DampedTransform
  class DampedTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::DampedTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::DampedTransform*, "UnityEngine.Animations.Rigging", "DampedTransform");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Animations.Rigging.DampedTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADA238
  // [HelpURLAttribute] Offset: ADA238
  class DampedTransform : public ::UnityEngine::Animations::Rigging::RigConstraint_3<::UnityEngine::Animations::Rigging::DampedTransformJob, ::UnityEngine::Animations::Rigging::DampedTransformData, ::UnityEngine::Animations::Rigging::DampedTransformJobBinder_1<::UnityEngine::Animations::Rigging::DampedTransformData>*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x115A8A8
    // Implemented from: UnityEngine.Animations.Rigging.RigConstraint`3
    // Base method: System.Void RigConstraint_3::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DampedTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::DampedTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DampedTransform*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.DampedTransform
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::DampedTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
