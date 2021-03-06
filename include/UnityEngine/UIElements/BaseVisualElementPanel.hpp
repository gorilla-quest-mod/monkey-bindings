// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.IPanel
#include "UnityEngine/UIElements/IPanel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: RepaintData
  class RepaintData;
  // Forward declaring type: ElementUnderPointer
  class ElementUnderPointer;
  // Forward declaring type: IMGUIContainer
  class IMGUIContainer;
  // Forward declaring type: FocusController
  class FocusController;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
  // Forward declaring type: EventDispatcher
  class EventDispatcher;
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: DispatchMode
  struct DispatchMode;
  // Forward declaring type: ContextType
  struct ContextType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventInterests
  struct EventInterests;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseVisualElementPanel
  class BaseVisualElementPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualElementPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualElementPanel*, "UnityEngine.UIElements", "BaseVisualElementPanel");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BaseVisualElementPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseVisualElementPanel : public ::Il2CppObject/*, public ::UnityEngine::UIElements::IPanel*/ {
    public:
    public:
    // private System.Single m_PixelsPerPoint
    // Size: 0x4
    // Offset: 0x10
    float m_PixelsPerPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAA005C
    // [DebuggerBrowsableAttribute] Offset: 0xAA005C
    // private System.Boolean <duringLayoutPhase>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool duringLayoutPhase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: duringLayoutPhase and: repaintData
    char __padding1[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xAA0098
    // [CompilerGeneratedAttribute] Offset: 0xAA0098
    // private UnityEngine.UIElements.RepaintData <repaintData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::RepaintData* repaintData;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::RepaintData*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xAA00D4
    // [CompilerGeneratedAttribute] Offset: 0xAA00D4
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: m_TopElementUnderPointers
    char __padding3[0x7] = {};
    // UnityEngine.UIElements.ElementUnderPointer m_TopElementUnderPointers
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ElementUnderPointer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IPanel
    operator ::UnityEngine::UIElements::IPanel() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IPanel*>(this);
    }
    // Get instance field reference: private System.Single m_PixelsPerPoint
    [[deprecated("Use field access instead!")]] float& dyn_m_PixelsPerPoint();
    // Get instance field reference: private System.Boolean <duringLayoutPhase>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$duringLayoutPhase$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.RepaintData <repaintData>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::RepaintData*& dyn_$repaintData$k__BackingField();
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // Get instance field reference: UnityEngine.UIElements.ElementUnderPointer m_TopElementUnderPointers
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ElementUnderPointer*& dyn_m_TopElementUnderPointers();
    // public UnityEngine.EventInterests get_IMGUIEventInterests()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::EventInterests get_IMGUIEventInterests();
    // public UnityEngine.ScriptableObject get_ownerObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::ScriptableObject* get_ownerObject();
    // public System.Int32 get_IMGUIContainersCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_IMGUIContainersCount();
    // public UnityEngine.UIElements.IMGUIContainer get_rootIMGUIContainer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();
    // public UnityEngine.UIElements.FocusController get_focusController()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::FocusController* get_focusController();
    // public System.Void Dispose()
    // Offset: 0xD3E144
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD3E1C4
    void Dispose(bool disposing);
    // public System.Void Repaint(UnityEngine.Event e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Repaint(::UnityEngine::Event* e);
    // public System.Void ValidateLayout()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ValidateLayout();
    // System.Void set_pixelsPerPoint(System.Single value)
    // Offset: 0xD3E344
    void set_pixelsPerPoint(float value);
    // System.Boolean get_duringLayoutPhase()
    // Offset: 0xD3E43C
    bool get_duringLayoutPhase();
    // System.UInt32 get_version()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint get_version();
    // System.Void OnVersionChanged(UnityEngine.UIElements.VisualElement ele, UnityEngine.UIElements.VersionChangeType changeTypeFlag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag);
    // UnityEngine.UIElements.RepaintData get_repaintData()
    // Offset: 0xD3E444
    ::UnityEngine::UIElements::RepaintData* get_repaintData();
    // public UnityEngine.UIElements.VisualElement get_visualTree()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::VisualElement* get_visualTree();
    // public UnityEngine.UIElements.EventDispatcher get_dispatcher()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();
    // System.Void SendEvent(UnityEngine.UIElements.EventBase e, UnityEngine.UIElements.DispatchMode dispatchMode)
    // Offset: 0xD3E44C
    void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);
    // public UnityEngine.UIElements.ContextType get_contextType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::ContextType get_contextType();
    // public UnityEngine.UIElements.VisualElement Pick(UnityEngine.Vector2 point)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);
    // System.Boolean get_disposed()
    // Offset: 0xD3E674
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0xD3E67C
    void set_disposed(bool value);
    // UnityEngine.UIElements.VisualElement GetTopElementUnderPointer(System.Int32 pointerId)
    // Offset: 0xD3E688
    ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int pointerId);
    // System.Void SetElementUnderPointer(UnityEngine.UIElements.VisualElement newElementUnderPointer, UnityEngine.UIElements.EventBase triggerEvent)
    // Offset: 0xD3E6DC
    void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, ::UnityEngine::UIElements::EventBase* triggerEvent);
    // System.Void ClearCachedElementUnderPointer(UnityEngine.UIElements.EventBase triggerEvent)
    // Offset: 0xD3E700
    void ClearCachedElementUnderPointer(::UnityEngine::UIElements::EventBase* triggerEvent);
    // System.Void CommitElementUnderPointers()
    // Offset: 0xD3E72C
    void CommitElementUnderPointers();
  }; // UnityEngine.UIElements.BaseVisualElementPanel
  #pragma pack(pop)
  static check_size<sizeof(BaseVisualElementPanel), 40 + sizeof(::UnityEngine::UIElements::ElementUnderPointer*)> __UnityEngine_UIElements_BaseVisualElementPanelSizeCheck;
  static_assert(sizeof(BaseVisualElementPanel) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIEventInterests
// Il2CppName: get_IMGUIEventInterests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventInterests (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIEventInterests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_IMGUIEventInterests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_ownerObject
// Il2CppName: get_ownerObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScriptableObject* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_ownerObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_ownerObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIContainersCount
// Il2CppName: get_IMGUIContainersCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIContainersCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_IMGUIContainersCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_rootIMGUIContainer
// Il2CppName: get_rootIMGUIContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IMGUIContainer* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_rootIMGUIContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_rootIMGUIContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_focusController
// Il2CppName: get_focusController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_focusController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_focusController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&UnityEngine::UIElements::BaseVisualElementPanel::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::Repaint
// Il2CppName: Repaint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::Event*)>(&UnityEngine::UIElements::BaseVisualElementPanel::Repaint)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "Repaint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::ValidateLayout
// Il2CppName: ValidateLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::ValidateLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "ValidateLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::set_pixelsPerPoint
// Il2CppName: set_pixelsPerPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(float)>(&UnityEngine::UIElements::BaseVisualElementPanel::set_pixelsPerPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "set_pixelsPerPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_duringLayoutPhase
// Il2CppName: get_duringLayoutPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_duringLayoutPhase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_duringLayoutPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::OnVersionChanged
// Il2CppName: OnVersionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::BaseVisualElementPanel::OnVersionChanged)> {
  static const MethodInfo* get() {
    static auto* ele = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* changeTypeFlag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "OnVersionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ele, changeTypeFlag});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_repaintData
// Il2CppName: get_repaintData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::RepaintData* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_repaintData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_repaintData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_visualTree
// Il2CppName: get_visualTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_visualTree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_visualTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_dispatcher
// Il2CppName: get_dispatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_dispatcher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_dispatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::SendEvent
// Il2CppName: SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode)>(&UnityEngine::UIElements::BaseVisualElementPanel::SendEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* dispatchMode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DispatchMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, dispatchMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_contextType
// Il2CppName: get_contextType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_contextType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_contextType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::Pick
// Il2CppName: Pick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::BaseVisualElementPanel::Pick)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "Pick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&UnityEngine::UIElements::BaseVisualElementPanel::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::GetTopElementUnderPointer
// Il2CppName: GetTopElementUnderPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::BaseVisualElementPanel::*)(int)>(&UnityEngine::UIElements::BaseVisualElementPanel::GetTopElementUnderPointer)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "GetTopElementUnderPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::SetElementUnderPointer
// Il2CppName: SetElementUnderPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::BaseVisualElementPanel::SetElementUnderPointer)> {
  static const MethodInfo* get() {
    static auto* newElementUnderPointer = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* triggerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "SetElementUnderPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newElementUnderPointer, triggerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::ClearCachedElementUnderPointer
// Il2CppName: ClearCachedElementUnderPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::BaseVisualElementPanel::ClearCachedElementUnderPointer)> {
  static const MethodInfo* get() {
    static auto* triggerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "ClearCachedElementUnderPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triggerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVisualElementPanel::CommitElementUnderPointers
// Il2CppName: CommitElementUnderPointers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&UnityEngine::UIElements::BaseVisualElementPanel::CommitElementUnderPointers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVisualElementPanel*), "CommitElementUnderPointers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
