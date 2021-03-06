// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel
#include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: MouseModel
  struct MouseModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseModel");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x1A0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.MouseModel
  // [TokenAttribute] Offset: FFFFFFFF
  struct MouseModel/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData
    struct InternalData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.MouseModel/InternalData
    // [TokenAttribute] Offset: FFFFFFFF
    struct InternalData/*, public ::System::ValueType*/ {
      public:
      public:
      // [CompilerGeneratedAttribute] Offset: 0xAE2F94
      // private System.Collections.Generic.List`1<UnityEngine.GameObject> <hoverTargets>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* hoverTargets;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
      // [CompilerGeneratedAttribute] Offset: 0xAE2FA4
      // private UnityEngine.GameObject <pointerTarget>k__BackingField
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::GameObject* pointerTarget;
      // Field size check
      static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
      public:
      // Creating value type constructor for type: InternalData
      constexpr InternalData(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* hoverTargets_ = {}, ::UnityEngine::GameObject* pointerTarget_ = {}) noexcept : hoverTargets{hoverTargets_}, pointerTarget{pointerTarget_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.GameObject> <hoverTargets>k__BackingField
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_$hoverTargets$k__BackingField();
      // Get instance field reference: private UnityEngine.GameObject <pointerTarget>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_$pointerTarget$k__BackingField();
      // public System.Collections.Generic.List`1<UnityEngine.GameObject> get_hoverTargets()
      // Offset: 0x9A20C8
      ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_hoverTargets();
      // public System.Void set_hoverTargets(System.Collections.Generic.List`1<UnityEngine.GameObject> value)
      // Offset: 0x9A20D0
      void set_hoverTargets(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);
      // public UnityEngine.GameObject get_pointerTarget()
      // Offset: 0x9A20D8
      ::UnityEngine::GameObject* get_pointerTarget();
      // public System.Void set_pointerTarget(UnityEngine.GameObject value)
      // Offset: 0x9A20E0
      void set_pointerTarget(::UnityEngine::GameObject* value);
      // public System.Void Reset()
      // Offset: 0x9A20E8
      void Reset();
    }; // UnityEngine.XR.Interaction.Toolkit.UI.MouseModel/InternalData
    #pragma pack(pop)
    static check_size<sizeof(MouseModel::InternalData), 8 + sizeof(::UnityEngine::GameObject*)> __UnityEngine_XR_Interaction_Toolkit_UI_MouseModel_InternalDataSizeCheck;
    static_assert(sizeof(MouseModel::InternalData) == 0x10);
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAE1128
    // private readonly System.Int32 <pointerId>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int pointerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAE1138
    // private System.Boolean <changedThisFrame>k__BackingField
    // Size: 0x1
    // Offset: 0x4
    bool changedThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: changedThisFrame and: deltaPosition
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAE1148
    // private UnityEngine.Vector2 <deltaPosition>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 deltaPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE1158
    // private UnityEngine.Vector2 <scrollDelta>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 scrollDelta;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Position
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_ScrollPosition
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 m_ScrollPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_LeftButton
    // Size: 0x78
    // Offset: 0x28
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_LeftButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel) == 0x78);
    // private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_RightButton
    // Size: 0x78
    // Offset: 0xA0
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_RightButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel) == 0x78);
    // private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_MiddleButton
    // Size: 0x78
    // Offset: 0x118
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_MiddleButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel) == 0x78);
    // private UnityEngine.XR.Interaction.Toolkit.UI.MouseModel/InternalData m_InternalData
    // Size: 0x10
    // Offset: 0x190
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData m_InternalData;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData) == 0x10);
    public:
    // Creating value type constructor for type: MouseModel
    constexpr MouseModel(int pointerId_ = {}, bool changedThisFrame_ = {}, ::UnityEngine::Vector2 deltaPosition_ = {}, ::UnityEngine::Vector2 scrollDelta_ = {}, ::UnityEngine::Vector2 m_Position_ = {}, ::UnityEngine::Vector2 m_ScrollPosition_ = {}, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_LeftButton_ = {}, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_RightButton_ = {}, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_MiddleButton_ = {}, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData m_InternalData_ = {}) noexcept : pointerId{pointerId_}, changedThisFrame{changedThisFrame_}, deltaPosition{deltaPosition_}, scrollDelta{scrollDelta_}, m_Position{m_Position_}, m_ScrollPosition{m_ScrollPosition_}, m_LeftButton{m_LeftButton_}, m_RightButton{m_RightButton_}, m_MiddleButton{m_MiddleButton_}, m_InternalData{m_InternalData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <pointerId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$pointerId$k__BackingField();
    // Get instance field reference: private System.Boolean <changedThisFrame>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$changedThisFrame$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <deltaPosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$deltaPosition$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <scrollDelta>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$scrollDelta$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Vector2 m_ScrollPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_ScrollPosition();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_LeftButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel& dyn_m_LeftButton();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_RightButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel& dyn_m_RightButton();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel m_MiddleButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel& dyn_m_MiddleButton();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.UI.MouseModel/InternalData m_InternalData
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData& dyn_m_InternalData();
    // public System.Int32 get_pointerId()
    // Offset: 0x9A1DDC
    int get_pointerId();
    // public System.Boolean get_changedThisFrame()
    // Offset: 0x9A1DE4
    bool get_changedThisFrame();
    // private System.Void set_changedThisFrame(System.Boolean value)
    // Offset: 0x9A1DEC
    void set_changedThisFrame(bool value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x9A1DF8
    ::UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0x9A1E00
    void set_position(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_deltaPosition()
    // Offset: 0x9A1E08
    ::UnityEngine::Vector2 get_deltaPosition();
    // private System.Void set_deltaPosition(UnityEngine.Vector2 value)
    // Offset: 0x9A1E10
    void set_deltaPosition(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_scrollPosition()
    // Offset: 0x9A1E18
    ::UnityEngine::Vector2 get_scrollPosition();
    // public System.Void set_scrollPosition(UnityEngine.Vector2 value)
    // Offset: 0x9A1E20
    void set_scrollPosition(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_scrollDelta()
    // Offset: 0x9A1E28
    ::UnityEngine::Vector2 get_scrollDelta();
    // private System.Void set_scrollDelta(UnityEngine.Vector2 value)
    // Offset: 0x9A1E30
    void set_scrollDelta(::UnityEngine::Vector2 value);
    // public UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel get_leftButton()
    // Offset: 0x9A1E38
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_leftButton();
    // public System.Void set_leftButton(UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel value)
    // Offset: 0x9A1E48
    void set_leftButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);
    // public System.Void set_leftButtonPressed(System.Boolean value)
    // Offset: 0x9A1EA4
    void set_leftButtonPressed(bool value);
    // public UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel get_rightButton()
    // Offset: 0x9A1EF4
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_rightButton();
    // public System.Void set_rightButton(UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel value)
    // Offset: 0x9A1F04
    void set_rightButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);
    // public System.Void set_rightButtonPressed(System.Boolean value)
    // Offset: 0x9A1F60
    void set_rightButtonPressed(bool value);
    // public UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel get_middleButton()
    // Offset: 0x9A1FB0
    ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_middleButton();
    // public System.Void set_middleButton(UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel value)
    // Offset: 0x9A1FC0
    void set_middleButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);
    // public System.Void set_middleButtonPressed(System.Boolean value)
    // Offset: 0x9A201C
    void set_middleButtonPressed(bool value);
    // public System.Void .ctor(System.Int32 pointerId)
    // Offset: 0x9A206C
    MouseModel(int pointerId);
    // public System.Void OnFrameFinished()
    // Offset: 0x9A2074
    void OnFrameFinished();
    // public System.Void CopyTo(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x9A207C
    void CopyTo(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void CopyFrom(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x9A2084
    void CopyFrom(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.XR.Interaction.Toolkit.UI.MouseModel
  #pragma pack(pop)
  static check_size<sizeof(MouseModel), 400 + sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData)> __UnityEngine_XR_Interaction_Toolkit_UI_MouseModelSizeCheck;
  static_assert(sizeof(MouseModel) == 0x1A0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::InternalData, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseModel/InternalData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_pointerId
// Il2CppName: get_pointerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_pointerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_pointerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_changedThisFrame
// Il2CppName: get_changedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_changedThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_changedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_changedThisFrame
// Il2CppName: set_changedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_changedThisFrame)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_changedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_deltaPosition
// Il2CppName: get_deltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_deltaPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_deltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_deltaPosition
// Il2CppName: set_deltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_deltaPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_deltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_scrollPosition
// Il2CppName: get_scrollPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_scrollPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_scrollPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_scrollPosition
// Il2CppName: set_scrollPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_scrollPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_scrollPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_scrollDelta
// Il2CppName: get_scrollDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_scrollDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_scrollDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_scrollDelta
// Il2CppName: set_scrollDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_scrollDelta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_scrollDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_leftButton
// Il2CppName: get_leftButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_leftButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_leftButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_leftButton
// Il2CppName: set_leftButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_leftButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_leftButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_leftButtonPressed
// Il2CppName: set_leftButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_leftButtonPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_leftButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_rightButton
// Il2CppName: get_rightButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_rightButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_rightButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_rightButton
// Il2CppName: set_rightButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_rightButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_rightButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_rightButtonPressed
// Il2CppName: set_rightButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_rightButtonPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_rightButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_middleButton
// Il2CppName: get_middleButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::get_middleButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "get_middleButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_middleButton
// Il2CppName: set_middleButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_middleButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_middleButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_middleButtonPressed
// Il2CppName: set_middleButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::set_middleButtonPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "set_middleButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::MouseModel
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::OnFrameFinished
// Il2CppName: OnFrameFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::OnFrameFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "OnFrameFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::CopyTo)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::MouseModel::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::MouseModel), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
