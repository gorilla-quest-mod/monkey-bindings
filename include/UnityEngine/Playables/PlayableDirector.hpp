// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.IExposedPropertyTable
#include "UnityEngine/IExposedPropertyTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: PropertyName
  struct PropertyName;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableDirector
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A963B4
  // [RequiredByNativeCodeAttribute] Offset: A963B4
  // [NativeHeaderAttribute] Offset: A963B4
  class PlayableDirector : public ::UnityEngine::Behaviour/*, public ::UnityEngine::IExposedPropertyTable*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA96424
    // [CompilerGeneratedAttribute] Offset: 0xA96424
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* played;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA96460
    // [DebuggerBrowsableAttribute] Offset: 0xA96460
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* paused;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA9649C
    // [DebuggerBrowsableAttribute] Offset: 0xA9649C
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* stopped;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::IExposedPropertyTable
    operator ::UnityEngine::IExposedPropertyTable() noexcept {
      return *reinterpret_cast<::UnityEngine::IExposedPropertyTable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_played();
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_paused();
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_stopped();
    // public UnityEngine.Playables.DirectorWrapMode get_extrapolationMode()
    // Offset: 0x1B5D044
    ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();
    // public UnityEngine.Playables.PlayableAsset get_playableAsset()
    // Offset: 0x1B5D0C4
    ::UnityEngine::Playables::PlayableAsset* get_playableAsset();
    // public System.Void set_time(System.Double value)
    // Offset: 0x1B5D1AC
    void set_time(double value);
    // public System.Double get_time()
    // Offset: 0x1B5D1FC
    double get_time();
    // public System.Double get_duration()
    // Offset: 0x1B5D23C
    double get_duration();
    // public System.Void Play()
    // Offset: 0x1B5D27C
    void Play();
    // public System.Void Stop()
    // Offset: 0x1B5D2BC
    void Stop();
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0x1B5D2FC
    ::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid);
    // public UnityEngine.Object GetGenericBinding(UnityEngine.Object key)
    // Offset: 0x1B5D3B0
    ::UnityEngine::Object* GetGenericBinding(::UnityEngine::Object* key);
    // private UnityEngine.Playables.DirectorWrapMode GetWrapMode()
    // Offset: 0x1B5D084
    ::UnityEngine::Playables::DirectorWrapMode GetWrapMode();
    // private UnityEngine.ScriptableObject Internal_GetPlayableAsset()
    // Offset: 0x1B5D16C
    ::UnityEngine::ScriptableObject* Internal_GetPlayableAsset();
    // private System.Void SendOnPlayableDirectorPlay()
    // Offset: 0x1B5D400
    void SendOnPlayableDirectorPlay();
    // private System.Void SendOnPlayableDirectorPause()
    // Offset: 0x1B5D464
    void SendOnPlayableDirectorPause();
    // private System.Void SendOnPlayableDirectorStop()
    // Offset: 0x1B5D4C8
    void SendOnPlayableDirectorStop();
    // private UnityEngine.Object GetReferenceValue_Injected(ref UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0x1B5D358
    ::UnityEngine::Object* GetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ByRef<bool> idValid);
  }; // UnityEngine.Playables.PlayableDirector
  #pragma pack(pop)
  static check_size<sizeof(PlayableDirector), 40 + sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*)> __UnityEngine_Playables_PlayableDirectorSizeCheck;
  static_assert(sizeof(PlayableDirector) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::get_extrapolationMode
// Il2CppName: get_extrapolationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::DirectorWrapMode (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::get_extrapolationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "get_extrapolationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::get_playableAsset
// Il2CppName: get_playableAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableAsset* (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::get_playableAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "get_playableAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)(double)>(&UnityEngine::Playables::PlayableDirector::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::GetReferenceValue
// Il2CppName: GetReferenceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName, ByRef<bool>)>(&UnityEngine::Playables::PlayableDirector::GetReferenceValue)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine", "PropertyName")->byval_arg;
    static auto* idValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "GetReferenceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, idValid});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::GetGenericBinding
// Il2CppName: GetGenericBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(&UnityEngine::Playables::PlayableDirector::GetGenericBinding)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "GetGenericBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::GetWrapMode
// Il2CppName: GetWrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::DirectorWrapMode (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::GetWrapMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "GetWrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset
// Il2CppName: Internal_GetPlayableAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScriptableObject* (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "Internal_GetPlayableAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay
// Il2CppName: SendOnPlayableDirectorPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause
// Il2CppName: SendOnPlayableDirectorPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop
// Il2CppName: SendOnPlayableDirectorStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected
// Il2CppName: GetReferenceValue_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::Playables::PlayableDirector::*)(ByRef<::UnityEngine::PropertyName>, ByRef<bool>)>(&UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine", "PropertyName")->this_arg;
    static auto* idValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "GetReferenceValue_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, idValid});
  }
};
