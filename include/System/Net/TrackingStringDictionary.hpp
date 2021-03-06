// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.StringDictionary
#include "System/Collections/Specialized/StringDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: TrackingStringDictionary
  class TrackingStringDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TrackingStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TrackingStringDictionary*, "System.Net", "TrackingStringDictionary");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TrackingStringDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5F7EC
  class TrackingStringDictionary : public ::System::Collections::Specialized::StringDictionary {
    public:
    public:
    // private System.Boolean isChanged
    // Size: 0x1
    // Offset: 0x18
    bool isChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isReadOnly
    // Size: 0x1
    // Offset: 0x19
    bool isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept = delete;
    // Get instance field reference: private System.Boolean isChanged
    [[deprecated("Use field access instead!")]] bool& dyn_isChanged();
    // Get instance field reference: private System.Boolean isReadOnly
    [[deprecated("Use field access instead!")]] bool& dyn_isReadOnly();
    // System.Void .ctor(System.Boolean isReadOnly)
    // Offset: 0xC6FD90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackingStringDictionary* New_ctor(bool isReadOnly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TrackingStringDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackingStringDictionary*, creationType>(isReadOnly)));
    }
    // System.Boolean get_IsChanged()
    // Offset: 0xC6FDC0
    bool get_IsChanged();
    // System.Void set_IsChanged(System.Boolean value)
    // Offset: 0xC6FDC8
    void set_IsChanged(bool value);
    // System.Void .ctor()
    // Offset: 0xC6FD68
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackingStringDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TrackingStringDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackingStringDictionary*, creationType>()));
    }
    // public override System.Void Add(System.String key, System.String value)
    // Offset: 0xC6FDD4
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Add(System.String key, System.String value)
    void Add(::StringW key, ::StringW value);
    // public override System.Void Clear()
    // Offset: 0xC6FE98
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Clear()
    void Clear();
    // public override System.Void Remove(System.String key)
    // Offset: 0xC6FF44
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Remove(System.String key)
    void Remove(::StringW key);
    // public override System.String get_Item(System.String key)
    // Offset: 0xC70000
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.String StringDictionary::get_Item(System.String key)
    ::StringW get_Item(::StringW key);
    // public override System.Void set_Item(System.String key, System.String value)
    // Offset: 0xC70008
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::set_Item(System.String key, System.String value)
    void set_Item(::StringW key, ::StringW value);
  }; // System.Net.TrackingStringDictionary
  #pragma pack(pop)
  static check_size<sizeof(TrackingStringDictionary), 25 + sizeof(bool)> __System_Net_TrackingStringDictionarySizeCheck;
  static_assert(sizeof(TrackingStringDictionary) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::get_IsChanged
// Il2CppName: get_IsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TrackingStringDictionary::*)()>(&System::Net::TrackingStringDictionary::get_IsChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "get_IsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::set_IsChanged
// Il2CppName: set_IsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingStringDictionary::*)(bool)>(&System::Net::TrackingStringDictionary::set_IsChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "set_IsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingStringDictionary::*)(::StringW, ::StringW)>(&System::Net::TrackingStringDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingStringDictionary::*)()>(&System::Net::TrackingStringDictionary::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingStringDictionary::*)(::StringW)>(&System::Net::TrackingStringDictionary::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::TrackingStringDictionary::*)(::StringW)>(&System::Net::TrackingStringDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingStringDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingStringDictionary::*)(::StringW, ::StringW)>(&System::Net::TrackingStringDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingStringDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
