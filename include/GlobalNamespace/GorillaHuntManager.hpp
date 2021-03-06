// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaGameManager
#include "GlobalNamespace/GorillaGameManager.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaHuntManager
  class GorillaHuntManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaHuntManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaHuntManager*, "", "GorillaHuntManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: GorillaHuntManager
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaHuntManager : public ::GlobalNamespace::GorillaGameManager/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::GlobalNamespace::GorillaHuntManager::$StartHuntCountdown$d__25
    class $StartHuntCountdown$d__25;
    // Nested type: ::GlobalNamespace::GorillaHuntManager::$HuntEnd$d__28
    class $HuntEnd$d__28;
    public:
    // public System.Single tagDistanceThreshold
    // Size: 0x4
    // Offset: 0xB0
    float tagDistanceThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tagCoolDown
    // Size: 0x4
    // Offset: 0xB4
    float tagCoolDown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32[] currentHuntedArray
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<int> currentHuntedArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Collections.Generic.List`1<Photon.Realtime.Player> currentHunted
    // Size: 0x8
    // Offset: 0xC0
    ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* currentHunted;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*) == 0x8);
    // public System.Int32[] currentTargetArray
    // Size: 0x8
    // Offset: 0xC8
    ::ArrayW<int> currentTargetArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Collections.Generic.List`1<Photon.Realtime.Player> currentTarget
    // Size: 0x8
    // Offset: 0xD0
    ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* currentTarget;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*) == 0x8);
    // public System.Boolean huntStarted
    // Size: 0x1
    // Offset: 0xD8
    bool huntStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean waitingToStartNextHuntGame
    // Size: 0x1
    // Offset: 0xD9
    bool waitingToStartNextHuntGame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean inStartCountdown
    // Size: 0x1
    // Offset: 0xDA
    bool inStartCountdown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inStartCountdown and: countDownTime
    char __padding8[0x1] = {};
    // public System.Int32 countDownTime
    // Size: 0x4
    // Offset: 0xDC
    int countDownTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Double timeHuntGameEnded
    // Size: 0x8
    // Offset: 0xE0
    double timeHuntGameEnded;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Single timeLastSlowTagged
    // Size: 0x4
    // Offset: 0xE8
    float timeLastSlowTagged;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: timeLastSlowTagged and: objRef
    char __padding11[0x4] = {};
    // public System.Object objRef
    // Size: 0x8
    // Offset: 0xF0
    ::Il2CppObject* objRef;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 iterator1
    // Size: 0x4
    // Offset: 0xF8
    int iterator1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterator1 and: tempRandPlayer
    char __padding13[0x4] = {};
    // private Photon.Realtime.Player tempRandPlayer
    // Size: 0x8
    // Offset: 0x100
    ::Photon::Realtime::Player* tempRandPlayer;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Player*) == 0x8);
    // private System.Int32 tempRandIndex
    // Size: 0x4
    // Offset: 0x108
    int tempRandIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 notHuntedCount
    // Size: 0x4
    // Offset: 0x10C
    int notHuntedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 tempTargetIndex
    // Size: 0x4
    // Offset: 0x110
    int tempTargetIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: tempTargetIndex and: tempPlayer
    char __padding17[0x4] = {};
    // private Photon.Realtime.Player tempPlayer
    // Size: 0x8
    // Offset: 0x118
    ::Photon::Realtime::Player* tempPlayer;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Player*) == 0x8);
    // private System.Int32 copyListToArrayIndex
    // Size: 0x4
    // Offset: 0x120
    int copyListToArrayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 copyArrayToListIndex
    // Size: 0x4
    // Offset: 0x124
    int copyArrayToListIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: public System.Single tagDistanceThreshold
    [[deprecated("Use field access instead!")]] float& dyn_tagDistanceThreshold();
    // Get instance field reference: public System.Single tagCoolDown
    [[deprecated("Use field access instead!")]] float& dyn_tagCoolDown();
    // Get instance field reference: public System.Int32[] currentHuntedArray
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_currentHuntedArray();
    // Get instance field reference: public System.Collections.Generic.List`1<Photon.Realtime.Player> currentHunted
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& dyn_currentHunted();
    // Get instance field reference: public System.Int32[] currentTargetArray
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_currentTargetArray();
    // Get instance field reference: public System.Collections.Generic.List`1<Photon.Realtime.Player> currentTarget
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& dyn_currentTarget();
    // Get instance field reference: public System.Boolean huntStarted
    [[deprecated("Use field access instead!")]] bool& dyn_huntStarted();
    // Get instance field reference: public System.Boolean waitingToStartNextHuntGame
    [[deprecated("Use field access instead!")]] bool& dyn_waitingToStartNextHuntGame();
    // Get instance field reference: public System.Boolean inStartCountdown
    [[deprecated("Use field access instead!")]] bool& dyn_inStartCountdown();
    // Get instance field reference: public System.Int32 countDownTime
    [[deprecated("Use field access instead!")]] int& dyn_countDownTime();
    // Get instance field reference: public System.Double timeHuntGameEnded
    [[deprecated("Use field access instead!")]] double& dyn_timeHuntGameEnded();
    // Get instance field reference: public System.Single timeLastSlowTagged
    [[deprecated("Use field access instead!")]] float& dyn_timeLastSlowTagged();
    // Get instance field reference: public System.Object objRef
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_objRef();
    // Get instance field reference: private System.Int32 iterator1
    [[deprecated("Use field access instead!")]] int& dyn_iterator1();
    // Get instance field reference: private Photon.Realtime.Player tempRandPlayer
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Player*& dyn_tempRandPlayer();
    // Get instance field reference: private System.Int32 tempRandIndex
    [[deprecated("Use field access instead!")]] int& dyn_tempRandIndex();
    // Get instance field reference: private System.Int32 notHuntedCount
    [[deprecated("Use field access instead!")]] int& dyn_notHuntedCount();
    // Get instance field reference: private System.Int32 tempTargetIndex
    [[deprecated("Use field access instead!")]] int& dyn_tempTargetIndex();
    // Get instance field reference: private Photon.Realtime.Player tempPlayer
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Player*& dyn_tempPlayer();
    // Get instance field reference: private System.Int32 copyListToArrayIndex
    [[deprecated("Use field access instead!")]] int& dyn_copyListToArrayIndex();
    // Get instance field reference: private System.Int32 copyArrayToListIndex
    [[deprecated("Use field access instead!")]] int& dyn_copyArrayToListIndex();
    // public System.Void UpdateState()
    // Offset: 0x1B6F9E0
    void UpdateState();
    // public System.Void CleanUpHunt()
    // Offset: 0x1B6FCF8
    void CleanUpHunt();
    // public System.Collections.IEnumerator StartHuntCountdown()
    // Offset: 0x1B6FD8C
    ::System::Collections::IEnumerator* StartHuntCountdown();
    // public System.Void StartHunt()
    // Offset: 0x1B70204
    void StartHunt();
    // public System.Void RandomizePlayerList(ref System.Collections.Generic.List`1<Photon.Realtime.Player> listToRandomize)
    // Offset: 0x1B704A8
    void RandomizePlayerList(ByRef<::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*> listToRandomize);
    // public System.Collections.IEnumerator HuntEnd()
    // Offset: 0x1B705C4
    ::System::Collections::IEnumerator* HuntEnd();
    // public System.Void UpdateHuntState()
    // Offset: 0x1B6FDFC
    void UpdateHuntState();
    // private System.Void EndHuntGame()
    // Offset: 0x1B70660
    void EndHuntGame();
    // public System.Boolean IsTargetOf(Photon.Realtime.Player huntingPlayer, Photon.Realtime.Player huntedPlayer)
    // Offset: 0x1B709D0
    bool IsTargetOf(::Photon::Realtime::Player* huntingPlayer, ::Photon::Realtime::Player* huntedPlayer);
    // public Photon.Realtime.Player GetTargetOf(Photon.Realtime.Player player)
    // Offset: 0x1B6F2F4
    ::Photon::Realtime::Player* GetTargetOf(::Photon::Realtime::Player* player);
    // private System.Void CopyHuntDataListToArray()
    // Offset: 0x1B6FF54
    void CopyHuntDataListToArray();
    // private System.Void CopyHuntDataArrayToList()
    // Offset: 0x1B70FFC
    void CopyHuntDataArrayToList();
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched(Photon.Realtime.Player newMasterClient)
    // Offset: 0x1B711E0
    void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);
    // public System.Void CopyRoomDataToLocalData()
    // Offset: 0x1B71354
    void CopyRoomDataToLocalData();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x1B71370
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public override System.String GameMode()
    // Offset: 0x1B6F890
    // Implemented from: GorillaGameManager
    // Base method: System.String GorillaGameManager::GameMode()
    ::StringW GameMode();
    // public override System.Void Awake()
    // Offset: 0x1B6F8D8
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::Awake()
    void Awake();
    // public override System.Boolean LocalCanTag(Photon.Realtime.Player myPlayer, Photon.Realtime.Player otherPlayer)
    // Offset: 0x1B70898
    // Implemented from: GorillaGameManager
    // Base method: System.Boolean GorillaGameManager::LocalCanTag(Photon.Realtime.Player myPlayer, Photon.Realtime.Player otherPlayer)
    bool LocalCanTag(::Photon::Realtime::Player* myPlayer, ::Photon::Realtime::Player* otherPlayer);
    // public override System.Void ReportTag(Photon.Realtime.Player taggedPlayer, Photon.Realtime.Player taggingPlayer)
    // Offset: 0x1B70AA8
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::ReportTag(Photon.Realtime.Player taggedPlayer, Photon.Realtime.Player taggingPlayer)
    void ReportTag(::Photon::Realtime::Player* taggedPlayer, ::Photon::Realtime::Player* taggingPlayer);
    // public override System.Void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    // Offset: 0x1B70DE0
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);
    // public override System.Void NewVRRig(Photon.Realtime.Player player, System.Int32 vrrigPhotonViewID, System.Boolean didntDoTutorial)
    // Offset: 0x1B70E00
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::NewVRRig(Photon.Realtime.Player player, System.Int32 vrrigPhotonViewID, System.Boolean didntDoTutorial)
    void NewVRRig(::Photon::Realtime::Player* player, int vrrigPhotonViewID, bool didntDoTutorial);
    // public override System.Void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0x1B70EC8
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
    // public override System.Void ReportTagRPC(Photon.Realtime.Player taggedPlayer, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x1B7135C
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::ReportTagRPC(Photon.Realtime.Player taggedPlayer, Photon.Pun.PhotonMessageInfo info)
    void ReportTagRPC(::Photon::Realtime::Player* taggedPlayer, ::Photon::Pun::PhotonMessageInfo info);
    // public override System.Int32 MyMatIndex(Photon.Realtime.Player forPlayer)
    // Offset: 0x1B71F10
    // Implemented from: GorillaGameManager
    // Base method: System.Int32 GorillaGameManager::MyMatIndex(Photon.Realtime.Player forPlayer)
    int MyMatIndex(::Photon::Realtime::Player* forPlayer);
    // public override System.Single[] LocalPlayerSpeed()
    // Offset: 0x1B71FA4
    // Implemented from: GorillaGameManager
    // Base method: System.Single[] GorillaGameManager::LocalPlayerSpeed()
    ::ArrayW<float> LocalPlayerSpeed();
    // public override System.Void InfrequentUpdate()
    // Offset: 0x1B72160
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::InfrequentUpdate()
    void InfrequentUpdate();
    // public System.Void .ctor()
    // Offset: 0x1B72304
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaHuntManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaHuntManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaHuntManager*, creationType>()));
    }
  }; // GorillaHuntManager
  #pragma pack(pop)
  static check_size<sizeof(GorillaHuntManager), 292 + sizeof(int)> __GlobalNamespace_GorillaHuntManagerSizeCheck;
  static_assert(sizeof(GorillaHuntManager) == 0x128);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::UpdateState
// Il2CppName: UpdateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::UpdateState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "UpdateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::CleanUpHunt
// Il2CppName: CleanUpHunt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::CleanUpHunt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "CleanUpHunt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::StartHuntCountdown
// Il2CppName: StartHuntCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::StartHuntCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "StartHuntCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::StartHunt
// Il2CppName: StartHunt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::StartHunt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "StartHunt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::RandomizePlayerList
// Il2CppName: RandomizePlayerList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(ByRef<::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>)>(&GlobalNamespace::GorillaHuntManager::RandomizePlayerList)> {
  static const MethodInfo* get() {
    static auto* listToRandomize = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "RandomizePlayerList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listToRandomize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::HuntEnd
// Il2CppName: HuntEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::HuntEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "HuntEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::UpdateHuntState
// Il2CppName: UpdateHuntState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::UpdateHuntState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "UpdateHuntState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::EndHuntGame
// Il2CppName: EndHuntGame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::EndHuntGame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "EndHuntGame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::IsTargetOf
// Il2CppName: IsTargetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::IsTargetOf)> {
  static const MethodInfo* get() {
    static auto* huntingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* huntedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "IsTargetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{huntingPlayer, huntedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::GetTargetOf
// Il2CppName: GetTargetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::GetTargetOf)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "GetTargetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::CopyHuntDataListToArray
// Il2CppName: CopyHuntDataListToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::CopyHuntDataListToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "CopyHuntDataListToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::CopyHuntDataArrayToList
// Il2CppName: CopyHuntDataArrayToList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::CopyHuntDataArrayToList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "CopyHuntDataArrayToList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  static const MethodInfo* get() {
    static auto* newMasterClient = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMasterClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::CopyRoomDataToLocalData
// Il2CppName: CopyRoomDataToLocalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::CopyRoomDataToLocalData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "CopyRoomDataToLocalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GorillaHuntManager::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::GameMode
// Il2CppName: GameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::GameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "GameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::LocalCanTag
// Il2CppName: LocalCanTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::LocalCanTag)> {
  static const MethodInfo* get() {
    static auto* myPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "LocalCanTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{myPlayer, otherPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::ReportTag
// Il2CppName: ReportTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::ReportTag)> {
  static const MethodInfo* get() {
    static auto* taggedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* taggingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "ReportTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taggedPlayer, taggingPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::OnPlayerEnteredRoom
// Il2CppName: OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::NewVRRig
// Il2CppName: NewVRRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*, int, bool)>(&GlobalNamespace::GorillaHuntManager::NewVRRig)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* vrrigPhotonViewID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* didntDoTutorial = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "NewVRRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, vrrigPhotonViewID, didntDoTutorial});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::ReportTagRPC
// Il2CppName: ReportTagRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GorillaHuntManager::ReportTagRPC)> {
  static const MethodInfo* get() {
    static auto* taggedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "ReportTagRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taggedPlayer, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::MyMatIndex
// Il2CppName: MyMatIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaHuntManager::MyMatIndex)> {
  static const MethodInfo* get() {
    static auto* forPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "MyMatIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::LocalPlayerSpeed
// Il2CppName: LocalPlayerSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::LocalPlayerSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "LocalPlayerSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::InfrequentUpdate
// Il2CppName: InfrequentUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHuntManager::*)()>(&GlobalNamespace::GorillaHuntManager::InfrequentUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHuntManager*), "InfrequentUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHuntManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
