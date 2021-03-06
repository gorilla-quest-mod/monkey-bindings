// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionSetupExtensions
#include "UnityEngine/InputSystem/InputActionSetupExtensions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionMap
  class InputActionMap;
  // Forward declaring type: InputAction
  class InputAction;
  // Forward declaring type: IInputInteraction
  class IInputInteraction;
  // Forward declaring type: InputBinding
  struct InputBinding;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/BindingSyntax");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionSetupExtensions::BindingSyntax/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly UnityEngine.InputSystem.InputActionMap m_ActionMap
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionMap*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_Action
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::InputSystem::InputAction* m_Action;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // readonly System.Int32 m_BindingIndex
    // Size: 0x4
    // Offset: 0x10
    int m_BindingIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BindingSyntax
    constexpr BindingSyntax(::UnityEngine::InputSystem::InputActionMap* m_ActionMap_ = {}, ::UnityEngine::InputSystem::InputAction* m_Action_ = {}, int m_BindingIndex_ = {}) noexcept : m_ActionMap{m_ActionMap_}, m_Action{m_Action_}, m_BindingIndex{m_BindingIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputActionMap m_ActionMap
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionMap*& dyn_m_ActionMap();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_Action
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_Action();
    // Get instance field reference: readonly System.Int32 m_BindingIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_BindingIndex();
    // System.Void .ctor(UnityEngine.InputSystem.InputActionMap map, UnityEngine.InputSystem.InputAction action, System.Int32 bindingIndex)
    // Offset: 0x9AF3B8
    // ABORTED: conflicts with another method.  BindingSyntax(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputAction* action, int bindingIndex);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithName(System.String name)
    // Offset: 0x9AF3C4
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithName(::StringW name);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithPath(System.String path)
    // Offset: 0x9AF3CC
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithPath(::StringW path);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithGroup(System.String group)
    // Offset: 0x9AF3D4
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithGroup(::StringW group);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithGroups(System.String groups)
    // Offset: 0x9AF3DC
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithGroups(::StringW groups);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithInteraction(System.String interaction)
    // Offset: 0x9AF3E4
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithInteraction(::StringW interaction);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithInteractions(System.String interactions)
    // Offset: 0x9AF3EC
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithInteractions(::StringW interactions);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithInteraction()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TInteraction>
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithInteraction() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TInteraction>, ::UnityEngine::InputSystem::IInputInteraction>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteraction");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "WithInteraction", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInteraction>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInteraction>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax, false>(this, ___generic__method);
    }
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithProcessor(System.String processor)
    // Offset: 0x9AF3F4
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithProcessor(::StringW processor);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithProcessors(System.String processors)
    // Offset: 0x9AF3FC
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithProcessors(::StringW processors);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax WithProcessor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TProcessor>
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax WithProcessor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "WithProcessor", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax, false>(this, ___generic__method);
    }
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax Triggering(UnityEngine.InputSystem.InputAction action)
    // Offset: 0x9AF404
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction* action);
    // public UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax To(UnityEngine.InputSystem.InputBinding binding)
    // Offset: 0x9AF40C
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding);
    // public System.Void Erase()
    // Offset: 0x9AF450
    void Erase();
    // UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax get_And()
    // Offset: 0x9AF458
    ::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax get_And();
  }; // UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
  #pragma pack(pop)
  static check_size<sizeof(InputActionSetupExtensions::BindingSyntax), 16 + sizeof(int)> __UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntaxSizeCheck;
  static_assert(sizeof(InputActionSetupExtensions::BindingSyntax) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::BindingSyntax
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithName
// Il2CppName: WithName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithPath
// Il2CppName: WithPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithGroup
// Il2CppName: WithGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithGroup)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithGroups
// Il2CppName: WithGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithGroups)> {
  static const MethodInfo* get() {
    static auto* groups = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groups});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteraction
// Il2CppName: WithInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteraction)> {
  static const MethodInfo* get() {
    static auto* interaction = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interaction});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteractions
// Il2CppName: WithInteractions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteractions)> {
  static const MethodInfo* get() {
    static auto* interactions = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithInteractions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactions});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithInteraction
// Il2CppName: WithInteraction
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessor
// Il2CppName: WithProcessor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessor)> {
  static const MethodInfo* get() {
    static auto* processor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithProcessor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processor});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessors
// Il2CppName: WithProcessors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::StringW)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessors)> {
  static const MethodInfo* get() {
    static auto* processors = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "WithProcessors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processors});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::WithProcessor
// Il2CppName: WithProcessor
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::Triggering
// Il2CppName: Triggering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::UnityEngine::InputSystem::InputAction*)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::Triggering)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "Triggering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::To
// Il2CppName: To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)(::UnityEngine::InputSystem::InputBinding)>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::To)> {
  static const MethodInfo* get() {
    static auto* binding = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBinding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binding});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::Erase
// Il2CppName: Erase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)()>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::Erase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "Erase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::get_And
// Il2CppName: get_And
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax (UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::*)()>(&UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax::get_And)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::BindingSyntax), "get_And", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
