// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaNetworkJoinTrigger
  class GorillaNetworkJoinTrigger;
  // Forward declaring type: GorillaComputer
  class GorillaComputer;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message
  class Message;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LoginResult
  class LoginResult;
  // Forward declaring type: GetPhotonAuthenticationTokenResult
  class GetPhotonAuthenticationTokenResult;
  // Forward declaring type: GetPlayerProfileResult
  class GetPlayerProfileResult;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Completed forward declares
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: PlayFabAuthenticator
  class PlayFabAuthenticator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::PlayFabAuthenticator);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::PlayFabAuthenticator*, "GorillaNetworking", "PlayFabAuthenticator");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0xA1
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.PlayFabAuthenticator
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabAuthenticator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GorillaNetworking::PlayFabAuthenticator::$$c
    class $$c;
    // Nested type: ::GorillaNetworking::PlayFabAuthenticator::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    public:
    // public System.Boolean isTestAccount
    // Size: 0x1
    // Offset: 0x18
    bool isTestAccount;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isTestAccount and: testAccountName
    char __padding0[0x7] = {};
    // public System.String testAccountName
    // Size: 0x8
    // Offset: 0x20
    ::StringW testAccountName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GorillaNetworking.GorillaNetworkJoinTrigger testJoin
    // Size: 0x8
    // Offset: 0x28
    ::GorillaNetworking::GorillaNetworkJoinTrigger* testJoin;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaNetworkJoinTrigger*) == 0x8);
    // public System.String testRoomToJoin
    // Size: 0x8
    // Offset: 0x30
    ::StringW testRoomToJoin;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String testGameMode
    // Size: 0x8
    // Offset: 0x38
    ::StringW testGameMode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _playFabPlayerIdCache
    // Size: 0x8
    // Offset: 0x40
    ::StringW playFabPlayerIdCache;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _displayName
    // Size: 0x8
    // Offset: 0x48
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userID
    // Size: 0x8
    // Offset: 0x50
    ::StringW userID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String orgScopedID
    // Size: 0x8
    // Offset: 0x58
    ::StringW orgScopedID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String userToken
    // Size: 0x8
    // Offset: 0x60
    ::StringW userToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GorillaNetworking.GorillaComputer gorillaComputer
    // Size: 0x8
    // Offset: 0x68
    ::GorillaNetworking::GorillaComputer* gorillaComputer;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaComputer*) == 0x8);
    // private System.Byte[] m_Ticket
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> m_Ticket;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.UInt32 m_pcbTicket
    // Size: 0x4
    // Offset: 0x78
    uint m_pcbTicket;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_pcbTicket and: debugText
    char __padding12[0x4] = {};
    // public UnityEngine.UI.Text debugText
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Text* debugText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public System.Boolean screenDebugMode
    // Size: 0x1
    // Offset: 0x88
    bool screenDebugMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean loginFailed
    // Size: 0x1
    // Offset: 0x89
    bool loginFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loginFailed and: emptyObject
    char __padding15[0x6] = {};
    // public UnityEngine.GameObject emptyObject
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::GameObject* emptyObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Int32 maxLoginAttempts
    // Size: 0x4
    // Offset: 0x98
    int maxLoginAttempts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 currentLoginAttempts
    // Size: 0x4
    // Offset: 0x9C
    int currentLoginAttempts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isModded
    // Size: 0x1
    // Offset: 0xA0
    bool isModded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public GorillaNetworking.PlayFabAuthenticator instance
    static ::GorillaNetworking::PlayFabAuthenticator* _get_instance();
    // Set static field: static public GorillaNetworking.PlayFabAuthenticator instance
    static void _set_instance(::GorillaNetworking::PlayFabAuthenticator* value);
    // Get instance field reference: public System.Boolean isTestAccount
    [[deprecated("Use field access instead!")]] bool& dyn_isTestAccount();
    // Get instance field reference: public System.String testAccountName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_testAccountName();
    // Get instance field reference: public GorillaNetworking.GorillaNetworkJoinTrigger testJoin
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaNetworkJoinTrigger*& dyn_testJoin();
    // Get instance field reference: public System.String testRoomToJoin
    [[deprecated("Use field access instead!")]] ::StringW& dyn_testRoomToJoin();
    // Get instance field reference: public System.String testGameMode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_testGameMode();
    // Get instance field reference: public System.String _playFabPlayerIdCache
    [[deprecated("Use field access instead!")]] ::StringW& dyn__playFabPlayerIdCache();
    // Get instance field reference: private System.String _displayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__displayName();
    // Get instance field reference: public System.String userID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userID();
    // Get instance field reference: private System.String orgScopedID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_orgScopedID();
    // Get instance field reference: private System.String userToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userToken();
    // Get instance field reference: public GorillaNetworking.GorillaComputer gorillaComputer
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaComputer*& dyn_gorillaComputer();
    // Get instance field reference: private System.Byte[] m_Ticket
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_Ticket();
    // Get instance field reference: private System.UInt32 m_pcbTicket
    [[deprecated("Use field access instead!")]] uint& dyn_m_pcbTicket();
    // Get instance field reference: public UnityEngine.UI.Text debugText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_debugText();
    // Get instance field reference: public System.Boolean screenDebugMode
    [[deprecated("Use field access instead!")]] bool& dyn_screenDebugMode();
    // Get instance field reference: public System.Boolean loginFailed
    [[deprecated("Use field access instead!")]] bool& dyn_loginFailed();
    // Get instance field reference: public UnityEngine.GameObject emptyObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_emptyObject();
    // Get instance field reference: public System.Int32 maxLoginAttempts
    [[deprecated("Use field access instead!")]] int& dyn_maxLoginAttempts();
    // Get instance field reference: public System.Int32 currentLoginAttempts
    [[deprecated("Use field access instead!")]] int& dyn_currentLoginAttempts();
    // Get instance field reference: public System.Boolean isModded
    [[deprecated("Use field access instead!")]] bool& dyn_isModded();
    // public System.Void Awake()
    // Offset: 0x1B79A34
    void Awake();
    // private System.Void OculusLoginFail()
    // Offset: 0x1B79BEC
    void OculusLoginFail();
    // private System.Boolean RegularLogin()
    // Offset: 0x1B79C6C
    bool RegularLogin();
    // private System.Void OculusAttemptFail()
    // Offset: 0x1B79D08
    void OculusAttemptFail();
    // private System.Void EntitlementCallback(Oculus.Platform.Message msg)
    // Offset: 0x1B79E14
    void EntitlementCallback(::Oculus::Platform::Message* msg);
    // private System.Void GetOculusUserCallback(Oculus.Platform.Message msg)
    // Offset: 0x1B79F48
    void GetOculusUserCallback(::Oculus::Platform::Message* msg);
    // private System.Void GetOculusOrgScopedIDCallback(Oculus.Platform.Message msg)
    // Offset: 0x1B7A09C
    void GetOculusOrgScopedIDCallback(::Oculus::Platform::Message* msg);
    // public System.Void AuthenticateWithPlayFab()
    // Offset: 0x1B73CDC
    void AuthenticateWithPlayFab();
    // private System.Void RequestPhotonToken(PlayFab.ClientModels.LoginResult obj)
    // Offset: 0x1B7A254
    void RequestPhotonToken(::PlayFab::ClientModels::LoginResult* obj);
    // private System.Void AuthenticateWithPhoton(PlayFab.ClientModels.GetPhotonAuthenticationTokenResult obj)
    // Offset: 0x1B7A3B0
    void AuthenticateWithPhoton(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult* obj);
    // private System.Void OnPlayFabError(PlayFab.PlayFabError obj)
    // Offset: 0x1B7A788
    void OnPlayFabError(::PlayFab::PlayFabError* obj);
    // public System.Void LogMessage(System.String message)
    // Offset: 0x1B7A3AC
    void LogMessage(::StringW message);
    // private System.Void GetPlayerDisplayName(System.String playFabId)
    // Offset: 0x1B7A5E4
    void GetPlayerDisplayName(::StringW playFabId);
    // public System.Void SetDisplayName(System.String playerName)
    // Offset: 0x1B77F84
    void SetDisplayName(::StringW playerName);
    // public System.Void ScreenDebug(System.String debugString)
    // Offset: 0x1B7AEF8
    void ScreenDebug(::StringW debugString);
    // public System.Void ScreenDebugClear()
    // Offset: 0x1B7AFD4
    void ScreenDebugClear();
    // public System.Void .ctor()
    // Offset: 0x1B7B038
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabAuthenticator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::PlayFabAuthenticator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabAuthenticator*, creationType>()));
    }
    // private System.Void <GetPlayerDisplayName>b__33_0(PlayFab.ClientModels.GetPlayerProfileResult result)
    // Offset: 0x1B7B048
    void $GetPlayerDisplayName$b__33_0(::PlayFab::ClientModels::GetPlayerProfileResult* result);
  }; // GorillaNetworking.PlayFabAuthenticator
  #pragma pack(pop)
  static check_size<sizeof(PlayFabAuthenticator), 160 + sizeof(bool)> __GorillaNetworking_PlayFabAuthenticatorSizeCheck;
  static_assert(sizeof(PlayFabAuthenticator) == 0xA1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::OculusLoginFail
// Il2CppName: OculusLoginFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::OculusLoginFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "OculusLoginFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::RegularLogin
// Il2CppName: RegularLogin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::RegularLogin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "RegularLogin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::OculusAttemptFail
// Il2CppName: OculusAttemptFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::OculusAttemptFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "OculusAttemptFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::EntitlementCallback
// Il2CppName: EntitlementCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::Oculus::Platform::Message*)>(&GorillaNetworking::PlayFabAuthenticator::EntitlementCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "EntitlementCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::GetOculusUserCallback
// Il2CppName: GetOculusUserCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::Oculus::Platform::Message*)>(&GorillaNetworking::PlayFabAuthenticator::GetOculusUserCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "GetOculusUserCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::GetOculusOrgScopedIDCallback
// Il2CppName: GetOculusOrgScopedIDCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::Oculus::Platform::Message*)>(&GorillaNetworking::PlayFabAuthenticator::GetOculusOrgScopedIDCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "GetOculusOrgScopedIDCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPlayFab
// Il2CppName: AuthenticateWithPlayFab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPlayFab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "AuthenticateWithPlayFab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::RequestPhotonToken
// Il2CppName: RequestPhotonToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::ClientModels::LoginResult*)>(&GorillaNetworking::PlayFabAuthenticator::RequestPhotonToken)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("PlayFab.ClientModels", "LoginResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "RequestPhotonToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPhoton
// Il2CppName: AuthenticateWithPhoton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*)>(&GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPhoton)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("PlayFab.ClientModels", "GetPhotonAuthenticationTokenResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "AuthenticateWithPhoton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::OnPlayFabError
// Il2CppName: OnPlayFabError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::PlayFabError*)>(&GorillaNetworking::PlayFabAuthenticator::OnPlayFabError)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "OnPlayFabError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::LogMessage
// Il2CppName: LogMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&GorillaNetworking::PlayFabAuthenticator::LogMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "LogMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::GetPlayerDisplayName
// Il2CppName: GetPlayerDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&GorillaNetworking::PlayFabAuthenticator::GetPlayerDisplayName)> {
  static const MethodInfo* get() {
    static auto* playFabId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "GetPlayerDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playFabId});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::SetDisplayName
// Il2CppName: SetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&GorillaNetworking::PlayFabAuthenticator::SetDisplayName)> {
  static const MethodInfo* get() {
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "SetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerName});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::ScreenDebug
// Il2CppName: ScreenDebug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&GorillaNetworking::PlayFabAuthenticator::ScreenDebug)> {
  static const MethodInfo* get() {
    static auto* debugString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "ScreenDebug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{debugString});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::ScreenDebugClear
// Il2CppName: ScreenDebugClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)()>(&GorillaNetworking::PlayFabAuthenticator::ScreenDebugClear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "ScreenDebugClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::PlayFabAuthenticator::$GetPlayerDisplayName$b__33_0
// Il2CppName: <GetPlayerDisplayName>b__33_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::ClientModels::GetPlayerProfileResult*)>(&GorillaNetworking::PlayFabAuthenticator::$GetPlayerDisplayName$b__33_0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("PlayFab.ClientModels", "GetPlayerProfileResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::PlayFabAuthenticator*), "<GetPlayerDisplayName>b__33_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
