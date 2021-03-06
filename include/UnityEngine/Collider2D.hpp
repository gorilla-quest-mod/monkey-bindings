// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider2D
  class Collider2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Collider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Collider2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: A8773C
  // [RequiredByNativeCodeAttribute] Offset: A8773C
  // [NativeHeaderAttribute] Offset: A8773C
  class Collider2D : public ::UnityEngine::Behaviour {
    public:
    // public UnityEngine.Vector2 get_offset()
    // Offset: 0x1B48C40
    ::UnityEngine::Vector2 get_offset();
    // public UnityEngine.Rigidbody2D get_attachedRigidbody()
    // Offset: 0x1B48CE8
    ::UnityEngine::Rigidbody2D* get_attachedRigidbody();
    // public System.Boolean OverlapPoint(UnityEngine.Vector2 point)
    // Offset: 0x1B48D28
    bool OverlapPoint(::UnityEngine::Vector2 point);
    // private System.Void get_offset_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B48C98
    void get_offset_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Boolean OverlapPoint_Injected(ref UnityEngine.Vector2 point)
    // Offset: 0x1B48D80
    bool OverlapPoint_Injected(ByRef<::UnityEngine::Vector2> point);
  }; // UnityEngine.Collider2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Collider2D::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Collider2D::*)()>(&UnityEngine::Collider2D::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::get_attachedRigidbody
// Il2CppName: get_attachedRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody2D* (UnityEngine::Collider2D::*)()>(&UnityEngine::Collider2D::get_attachedRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "get_attachedRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::OverlapPoint
// Il2CppName: OverlapPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider2D::*)(::UnityEngine::Vector2)>(&UnityEngine::Collider2D::OverlapPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "OverlapPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::get_offset_Injected
// Il2CppName: get_offset_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Collider2D::get_offset_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "get_offset_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider2D::OverlapPoint_Injected
// Il2CppName: OverlapPoint_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Collider2D::OverlapPoint_Injected)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider2D*), "OverlapPoint_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
