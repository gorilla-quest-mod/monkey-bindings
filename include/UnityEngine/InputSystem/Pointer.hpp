// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputDevice
#include "UnityEngine/InputSystem/InputDevice.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver
#include "UnityEngine/InputSystem/LowLevel/IInputStateCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: Vector2Control
  class Vector2Control;
  // Forward declaring type: AxisControl
  class AxisControl;
  // Forward declaring type: ButtonControl
  class ButtonControl;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEventPtr
  struct InputEventPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: Pointer
  class Pointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pointer*, "UnityEngine.InputSystem", "Pointer");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Pointer
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: AB7564
  // [PreserveAttribute] Offset: FFFFFFFF
  class Pointer : public ::UnityEngine::InputSystem::InputDevice/*, public ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABA664
    // private UnityEngine.InputSystem.Controls.Vector2Control <position>k__BackingField
    // Size: 0x8
    // Offset: 0x150
    ::UnityEngine::InputSystem::Controls::Vector2Control* position;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABA674
    // private UnityEngine.InputSystem.Controls.Vector2Control <delta>k__BackingField
    // Size: 0x8
    // Offset: 0x158
    ::UnityEngine::InputSystem::Controls::Vector2Control* delta;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABA684
    // private UnityEngine.InputSystem.Controls.Vector2Control <radius>k__BackingField
    // Size: 0x8
    // Offset: 0x160
    ::UnityEngine::InputSystem::Controls::Vector2Control* radius;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABA694
    // private UnityEngine.InputSystem.Controls.AxisControl <pressure>k__BackingField
    // Size: 0x8
    // Offset: 0x168
    ::UnityEngine::InputSystem::Controls::AxisControl* pressure;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABA6A4
    // private UnityEngine.InputSystem.Controls.ButtonControl <press>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::ButtonControl* press;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
    operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(this);
    }
    // [CompilerGeneratedAttribute] Offset: 0xABA6B4
    // Get static field: static private UnityEngine.InputSystem.Pointer <current>k__BackingField
    static ::UnityEngine::InputSystem::Pointer* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.Pointer <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::Pointer* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <delta>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$delta$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <radius>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$radius$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <pressure>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$pressure$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <press>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$press$k__BackingField();
    // public UnityEngine.InputSystem.Controls.Vector2Control get_position()
    // Offset: 0xC8E8F8
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_position();
    // private System.Void set_position(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0xC8E900
    void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_delta()
    // Offset: 0xC8E908
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_delta();
    // private System.Void set_delta(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0xC8E910
    void set_delta(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_radius()
    // Offset: 0xC8E918
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_radius();
    // private System.Void set_radius(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0xC8E920
    void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_pressure()
    // Offset: 0xC8E928
    ::UnityEngine::InputSystem::Controls::AxisControl* get_pressure();
    // private System.Void set_pressure(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0xC8E930
    void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_press()
    // Offset: 0xC8E938
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_press();
    // private System.Void set_press(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0xC8E940
    void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // static public UnityEngine.InputSystem.Pointer get_current()
    // Offset: 0xC8E948
    static ::UnityEngine::InputSystem::Pointer* get_current();
    // static System.Void set_current(UnityEngine.InputSystem.Pointer value)
    // Offset: 0xC8E998
    static void set_current(::UnityEngine::InputSystem::Pointer* value);
    // protected System.Void OnNextUpdate()
    // Offset: 0xC852DC
    void OnNextUpdate();
    // protected System.Void OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0xC853D8
    void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // private System.Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
    // Offset: 0xC8E9EC
    void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();
    // private System.Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0xC8E9F0
    void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // private System.Boolean UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent(UnityEngine.InputSystem.InputControl control, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr, ref System.UInt32 offset)
    // Offset: 0xC8E9F4
    bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint> offset);
    // public override System.Void MakeCurrent()
    // Offset: 0xC84DCC
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0xC84F30
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0xC85164
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0xC85468
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Pointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pointer*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Pointer
  #pragma pack(pop)
  static check_size<sizeof(Pointer), 368 + sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*)> __UnityEngine_InputSystem_PointerSizeCheck;
  static_assert(sizeof(Pointer) == 0x178);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Pointer::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_delta
// Il2CppName: get_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::get_delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_delta
// Il2CppName: set_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Pointer::set_delta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_radius
// Il2CppName: set_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Pointer::set_radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_pressure
// Il2CppName: get_pressure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::get_pressure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_pressure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_pressure
// Il2CppName: set_pressure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Pointer::set_pressure)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_pressure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_press
// Il2CppName: get_press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::get_press)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_press
// Il2CppName: set_press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::Pointer::set_press)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Pointer* (*)()>(&UnityEngine::InputSystem::Pointer::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Pointer*)>(&UnityEngine::InputSystem::Pointer::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "Pointer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::OnNextUpdate
// Il2CppName: OnNextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::OnNextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "OnNextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::OnStateEvent
// Il2CppName: OnStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Pointer::OnStateEvent)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "OnStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Pointer::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ByRef<uint>)>(&UnityEngine::InputSystem::Pointer::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, eventPtr, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Pointer::*)()>(&UnityEngine::InputSystem::Pointer::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Pointer*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Pointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
