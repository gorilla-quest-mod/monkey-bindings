// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRDeviceDescriptor
  class XRDeviceDescriptor;
  // Forward declaring type: XRFeatureDescriptor
  struct XRFeatureDescriptor;
}
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputDeviceDescription
  struct InputDeviceDescription;
  // Forward declaring type: InputControlLayout
  class InputControlLayout;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputDeviceExecuteCommandDelegate
  class InputDeviceExecuteCommandDelegate;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRLayoutBuilder
  class XRLayoutBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRLayoutBuilder*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XR.XRLayoutBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLayoutBuilder : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::XR::XRLayoutBuilder::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    public:
    // private System.String parentLayout
    // Size: 0x8
    // Offset: 0x10
    ::StringW parentLayout;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String interfaceName
    // Size: 0x8
    // Offset: 0x18
    ::StringW interfaceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.InputSystem.XR.XRDeviceDescriptor descriptor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* descriptor;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*) == 0x8);
    public:
    // Get instance field reference: private System.String parentLayout
    [[deprecated("Use field access instead!")]] ::StringW& dyn_parentLayout();
    // Get instance field reference: private System.String interfaceName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_interfaceName();
    // Get instance field reference: private UnityEngine.InputSystem.XR.XRDeviceDescriptor descriptor
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::XR::XRDeviceDescriptor*& dyn_descriptor();
    // static private System.UInt32 GetSizeOfFeature(UnityEngine.InputSystem.XR.XRFeatureDescriptor featureDescriptor)
    // Offset: 0x1AA36CC
    static uint GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor);
    // static private System.String SanitizeString(System.String original, System.Boolean allowPaths)
    // Offset: 0x1AA3738
    static ::StringW SanitizeString(::StringW original, bool allowPaths);
    // static System.String OnFindLayoutForDevice(ref UnityEngine.InputSystem.Layouts.InputDeviceDescription description, System.String matchedLayout, UnityEngine.InputSystem.LowLevel.InputDeviceExecuteCommandDelegate executeCommandDelegate)
    // Offset: 0x1AA38B0
    static ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);
    // static private System.String ConvertPotentialAliasToName(UnityEngine.InputSystem.Layouts.InputControlLayout layout, System.String nameOrAlias)
    // Offset: 0x1AA3C98
    static ::StringW ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::StringW nameOrAlias);
    // private UnityEngine.InputSystem.Layouts.InputControlLayout Build()
    // Offset: 0x1AA3E00
    ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();
    // public System.Void .ctor()
    // Offset: 0x1AA3C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLayoutBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::XRLayoutBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLayoutBuilder*, creationType>()));
    }
  }; // UnityEngine.InputSystem.XR.XRLayoutBuilder
  #pragma pack(pop)
  static check_size<sizeof(XRLayoutBuilder), 32 + sizeof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*)> __UnityEngine_InputSystem_XR_XRLayoutBuilderSizeCheck;
  static_assert(sizeof(XRLayoutBuilder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature
// Il2CppName: GetSizeOfFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature)> {
  static const MethodInfo* get() {
    static auto* featureDescriptor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.XR", "XRFeatureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "GetSizeOfFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{featureDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString
// Il2CppName: SanitizeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* allowPaths = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "SanitizeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, allowPaths});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice
// Il2CppName: OnFindLayoutForDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->this_arg;
    static auto* matchedLayout = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* executeCommandDelegate = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputDeviceExecuteCommandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "OnFindLayoutForDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description, matchedLayout, executeCommandDelegate});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName
// Il2CppName: ConvertPotentialAliasToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::StringW)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName)> {
  static const MethodInfo* get() {
    static auto* layout = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputControlLayout")->byval_arg;
    static auto* nameOrAlias = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "ConvertPotentialAliasToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layout, nameOrAlias});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
