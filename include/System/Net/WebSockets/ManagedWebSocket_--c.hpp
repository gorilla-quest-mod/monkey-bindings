// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebSockets.ManagedWebSocket
#include "System/Net/WebSockets/ManagedWebSocket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: TimerCallback
  class TimerCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebSockets::ManagedWebSocket::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ManagedWebSocket::$$c*, "System.Net.WebSockets", "ManagedWebSocket/<>c");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebSockets.ManagedWebSocket/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5FA38
  class ManagedWebSocket::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.WebSockets.ManagedWebSocket/<>c <>9
    static ::System::Net::WebSockets::ManagedWebSocket::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.WebSockets.ManagedWebSocket/<>c <>9
    static void _set_$$9(::System::Net::WebSockets::ManagedWebSocket::$$c* value);
    // Get static field: static public System.Action`1<System.Object> <>9__37_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__37_0();
    // Set static field: static public System.Action`1<System.Object> <>9__37_0
    static void _set_$$9__37_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Threading.TimerCallback <>9__37_1
    static ::System::Threading::TimerCallback* _get_$$9__37_1();
    // Set static field: static public System.Threading.TimerCallback <>9__37_1
    static void _set_$$9__37_1(::System::Threading::TimerCallback* value);
    // Get static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__54_0
    static ::System::Action_2<::System::Threading::Tasks::Task*, ::Il2CppObject*>* _get_$$9__54_0();
    // Set static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__54_0
    static void _set_$$9__54_0(::System::Action_2<::System::Threading::Tasks::Task*, ::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__55_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__55_0();
    // Set static field: static public System.Action`1<System.Object> <>9__55_0
    static void _set_$$9__55_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Threading.Tasks.Task> <>9__57_0
    static ::System::Action_1<::System::Threading::Tasks::Task*>* _get_$$9__57_0();
    // Set static field: static public System.Action`1<System.Threading.Tasks.Task> <>9__57_0
    static void _set_$$9__57_0(::System::Action_1<::System::Threading::Tasks::Task*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__60_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__60_0();
    // Set static field: static public System.Action`1<System.Object> <>9__60_0
    static void _set_$$9__60_0(::System::Action_1<::Il2CppObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0xD87CC4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xD87D28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManagedWebSocket::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebSockets::ManagedWebSocket::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManagedWebSocket::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__37_0(System.Object s)
    // Offset: 0xD87D30
    void $_ctor$b__37_0(::Il2CppObject* s);
    // System.Void <.ctor>b__37_1(System.Object s)
    // Offset: 0xD87E44
    void $_ctor$b__37_1(::Il2CppObject* s);
    // System.Void <SendFrameLockAcquiredNonCancelableAsync>b__54_0(System.Threading.Tasks.Task t, System.Object s)
    // Offset: 0xD87EAC
    void $SendFrameLockAcquiredNonCancelableAsync$b__54_0(::System::Threading::Tasks::Task* t, ::Il2CppObject* s);
    // System.Void <SendFrameFallbackAsync>b__55_0(System.Object s)
    // Offset: 0xD88078
    void $SendFrameFallbackAsync$b__55_0(::Il2CppObject* s);
    // System.Void <SendKeepAliveFrameAsync>b__57_0(System.Threading.Tasks.Task p)
    // Offset: 0xD880F4
    void $SendKeepAliveFrameAsync$b__57_0(::System::Threading::Tasks::Task* p);
    // System.Void <ReceiveAsyncPrivate>b__60_0(System.Object s)
    // Offset: 0xD88110
    void $ReceiveAsyncPrivate$b__60_0(::Il2CppObject* s);
  }; // System.Net.WebSockets.ManagedWebSocket/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebSockets::ManagedWebSocket::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$_ctor$b__37_0
// Il2CppName: <.ctor>b__37_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::Il2CppObject*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$_ctor$b__37_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<.ctor>b__37_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$_ctor$b__37_1
// Il2CppName: <.ctor>b__37_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::Il2CppObject*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$_ctor$b__37_1)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<.ctor>b__37_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$SendFrameLockAcquiredNonCancelableAsync$b__54_0
// Il2CppName: <SendFrameLockAcquiredNonCancelableAsync>b__54_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::System::Threading::Tasks::Task*, ::Il2CppObject*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$SendFrameLockAcquiredNonCancelableAsync$b__54_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<SendFrameLockAcquiredNonCancelableAsync>b__54_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, s});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$SendFrameFallbackAsync$b__55_0
// Il2CppName: <SendFrameFallbackAsync>b__55_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::Il2CppObject*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$SendFrameFallbackAsync$b__55_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<SendFrameFallbackAsync>b__55_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$SendKeepAliveFrameAsync$b__57_0
// Il2CppName: <SendKeepAliveFrameAsync>b__57_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::System::Threading::Tasks::Task*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$SendKeepAliveFrameAsync$b__57_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<SendKeepAliveFrameAsync>b__57_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$$c::$ReceiveAsyncPrivate$b__60_0
// Il2CppName: <ReceiveAsyncPrivate>b__60_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$$c::*)(::Il2CppObject*)>(&System::Net::WebSockets::ManagedWebSocket::$$c::$ReceiveAsyncPrivate$b__60_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$$c*), "<ReceiveAsyncPrivate>b__60_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
