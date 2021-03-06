// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.PropertyTabScope
#include "System/ComponentModel/PropertyTabScope.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyTabAttribute
  class PropertyTabAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyTabAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyTabAttribute*, "System.ComponentModel", "PropertyTabAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyTabAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5F190
  class PropertyTabAttribute : public ::System::Attribute {
    public:
    public:
    // private System.ComponentModel.PropertyTabScope[] tabScopes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::ComponentModel::PropertyTabScope> tabScopes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ComponentModel::PropertyTabScope>) == 0x8);
    // private System.Type[] tabClasses
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Type*> tabClasses;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.String[] tabClassNames
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> tabClassNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.PropertyTabScope[] tabScopes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::ComponentModel::PropertyTabScope>& dyn_tabScopes();
    // Get instance field reference: private System.Type[] tabClasses
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_tabClasses();
    // Get instance field reference: private System.String[] tabClassNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_tabClassNames();
    // public System.Void .ctor()
    // Offset: 0x122958C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyTabAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyTabAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyTabAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.Type tabClass)
    // Offset: 0x1229608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyTabAttribute* New_ctor(::System::Type* tabClass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyTabAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyTabAttribute*, creationType>(tabClass)));
    }
    // public System.Void .ctor(System.String tabClassName)
    // Offset: 0x1229758
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyTabAttribute* New_ctor(::StringW tabClassName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyTabAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyTabAttribute*, creationType>(tabClassName)));
    }
    // public System.Void .ctor(System.Type tabClass, System.ComponentModel.PropertyTabScope tabScope)
    // Offset: 0x1229610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyTabAttribute* New_ctor(::System::Type* tabClass, ::System::ComponentModel::PropertyTabScope tabScope) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyTabAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyTabAttribute*, creationType>(tabClass, tabScope)));
    }
    // public System.Void .ctor(System.String tabClassName, System.ComponentModel.PropertyTabScope tabScope)
    // Offset: 0x1229760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyTabAttribute* New_ctor(::StringW tabClassName, ::System::ComponentModel::PropertyTabScope tabScope) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyTabAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyTabAttribute*, creationType>(tabClassName, tabScope)));
    }
    // public System.Type[] get_TabClasses()
    // Offset: 0x12298A8
    ::ArrayW<::System::Type*> get_TabClasses();
    // protected System.String[] get_TabClassNames()
    // Offset: 0x1229BD8
    ::ArrayW<::StringW> get_TabClassNames();
    // public System.ComponentModel.PropertyTabScope[] get_TabScopes()
    // Offset: 0x1229C54
    ::ArrayW<::System::ComponentModel::PropertyTabScope> get_TabScopes();
    // public System.Boolean Equals(System.ComponentModel.PropertyTabAttribute other)
    // Offset: 0x1229CFC
    bool Equals(::System::ComponentModel::PropertyTabAttribute* other);
    // protected System.Void InitializeArrays(System.String[] tabClassNames, System.ComponentModel.PropertyTabScope[] tabScopes)
    // Offset: 0x1229EB0
    void InitializeArrays(::ArrayW<::StringW> tabClassNames, ::ArrayW<::System::ComponentModel::PropertyTabScope> tabScopes);
    // protected System.Void InitializeArrays(System.Type[] tabClasses, System.ComponentModel.PropertyTabScope[] tabScopes)
    // Offset: 0x122A108
    void InitializeArrays(::ArrayW<::System::Type*> tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope> tabScopes);
    // private System.Void InitializeArrays(System.String[] tabClassNames, System.Type[] tabClasses, System.ComponentModel.PropertyTabScope[] tabScopes)
    // Offset: 0x1229EBC
    void InitializeArrays(::ArrayW<::StringW> tabClassNames, ::ArrayW<::System::Type*> tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope> tabScopes);
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1229C5C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1229EA8
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.PropertyTabAttribute
  #pragma pack(pop)
  static check_size<sizeof(PropertyTabAttribute), 32 + sizeof(::ArrayW<::StringW>)> __System_ComponentModel_PropertyTabAttributeSizeCheck;
  static_assert(sizeof(PropertyTabAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::get_TabClasses
// Il2CppName: get_TabClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::ComponentModel::PropertyTabAttribute::*)()>(&System::ComponentModel::PropertyTabAttribute::get_TabClasses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "get_TabClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::get_TabClassNames
// Il2CppName: get_TabClassNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::ComponentModel::PropertyTabAttribute::*)()>(&System::ComponentModel::PropertyTabAttribute::get_TabClassNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "get_TabClassNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::get_TabScopes
// Il2CppName: get_TabScopes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::PropertyTabScope> (System::ComponentModel::PropertyTabAttribute::*)()>(&System::ComponentModel::PropertyTabAttribute::get_TabScopes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "get_TabScopes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyTabAttribute::*)(::System::ComponentModel::PropertyTabAttribute*)>(&System::ComponentModel::PropertyTabAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyTabAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::InitializeArrays
// Il2CppName: InitializeArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::StringW>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  static const MethodInfo* get() {
    static auto* tabClassNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* tabScopes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyTabScope"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "InitializeArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tabClassNames, tabScopes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::InitializeArrays
// Il2CppName: InitializeArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::System::Type*>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  static const MethodInfo* get() {
    static auto* tabClasses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* tabScopes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyTabScope"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "InitializeArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tabClasses, tabScopes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::InitializeArrays
// Il2CppName: InitializeArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  static const MethodInfo* get() {
    static auto* tabClassNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* tabClasses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* tabScopes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyTabScope"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "InitializeArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tabClassNames, tabClasses, tabScopes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyTabAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyTabAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyTabAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::PropertyTabAttribute::*)()>(&System::ComponentModel::PropertyTabAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyTabAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
