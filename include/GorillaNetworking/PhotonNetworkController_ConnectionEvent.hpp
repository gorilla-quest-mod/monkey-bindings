// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.PhotonNetworkController
#include "GorillaNetworking/PhotonNetworkController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::PhotonNetworkController::ConnectionEvent, "GorillaNetworking", "PhotonNetworkController/ConnectionEvent");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.PhotonNetworkController/ConnectionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotonNetworkController::ConnectionEvent/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConnectionEvent
    constexpr ConnectionEvent(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent InitialConnection
    static constexpr const int InitialConnection = 0;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent InitialConnection
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_InitialConnection();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent InitialConnection
    static void _set_InitialConnection(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnConnectedToMaster
    static constexpr const int OnConnectedToMaster = 1;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnConnectedToMaster
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnConnectedToMaster();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnConnectedToMaster
    static void _set_OnConnectedToMaster(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinPublicRoom
    static constexpr const int AttemptJoinPublicRoom = 2;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinPublicRoom
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_AttemptJoinPublicRoom();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinPublicRoom
    static void _set_AttemptJoinPublicRoom(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinSpecificRoom
    static constexpr const int AttemptJoinSpecificRoom = 3;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinSpecificRoom
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_AttemptJoinSpecificRoom();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptJoinSpecificRoom
    static void _set_AttemptJoinSpecificRoom(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptToCreateRoom
    static constexpr const int AttemptToCreateRoom = 4;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptToCreateRoom
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_AttemptToCreateRoom();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent AttemptToCreateRoom
    static void _set_AttemptToCreateRoom(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent Disconnect
    static constexpr const int Disconnect = 5;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent Disconnect
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_Disconnect();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent Disconnect
    static void _set_Disconnect(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinedRoom
    static constexpr const int OnJoinedRoom = 6;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinedRoom
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnJoinedRoom();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinedRoom
    static void _set_OnJoinedRoom(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRoomFailed
    static constexpr const int OnJoinRoomFailed = 7;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRoomFailed
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnJoinRoomFailed();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRoomFailed
    static void _set_OnJoinRoomFailed(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRandomFailed
    static constexpr const int OnJoinRandomFailed = 8;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRandomFailed
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnJoinRandomFailed();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnJoinRandomFailed
    static void _set_OnJoinRandomFailed(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnCreateRoomFailed
    static constexpr const int OnCreateRoomFailed = 9;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnCreateRoomFailed
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnCreateRoomFailed();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnCreateRoomFailed
    static void _set_OnCreateRoomFailed(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnDisconnected
    static constexpr const int OnDisconnected = 10;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnDisconnected
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_OnDisconnected();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent OnDisconnected
    static void _set_OnDisconnected(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FoundFriendToJoin
    static constexpr const int FoundFriendToJoin = 11;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FoundFriendToJoin
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_FoundFriendToJoin();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FoundFriendToJoin
    static void _set_FoundFriendToJoin(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // static field const value: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FollowFriendToPub
    static constexpr const int FollowFriendToPub = 12;
    // Get static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FollowFriendToPub
    static ::GorillaNetworking::PhotonNetworkController::ConnectionEvent _get_FollowFriendToPub();
    // Set static field: static public GorillaNetworking.PhotonNetworkController/ConnectionEvent FollowFriendToPub
    static void _set_FollowFriendToPub(::GorillaNetworking::PhotonNetworkController::ConnectionEvent value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaNetworking.PhotonNetworkController/ConnectionEvent
  #pragma pack(pop)
  static check_size<sizeof(PhotonNetworkController::ConnectionEvent), 0 + sizeof(int)> __GorillaNetworking_PhotonNetworkController_ConnectionEventSizeCheck;
  static_assert(sizeof(PhotonNetworkController::ConnectionEvent) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
