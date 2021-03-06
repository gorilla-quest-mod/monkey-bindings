// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetUserDataResult
  class GetUserDataResult;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass112_0");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/<>c__DisplayClass112_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AF2020
  class CosmeticsController::$$c__DisplayClass112_0 : public ::Il2CppObject {
    public:
    public:
    // public GorillaNetworking.CosmeticsController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GorillaNetworking::CosmeticsController* $$4__this;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController*) == 0x8);
    // public System.Boolean clearLock
    // Size: 0x1
    // Offset: 0x18
    bool clearLock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public GorillaNetworking.CosmeticsController <>4__this
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean clearLock
    [[deprecated("Use field access instead!")]] bool& dyn_clearLock();
    // public System.Void .ctor()
    // Offset: 0x1BC4810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::$$c__DisplayClass112_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::$$c__DisplayClass112_0*, creationType>()));
    }
    // System.Void <GetOculusPurchaseLockAttempt>b__0(PlayFab.ClientModels.GetUserDataResult result)
    // Offset: 0x1BC7C78
    void $GetOculusPurchaseLockAttempt$b__0(::PlayFab::ClientModels::GetUserDataResult* result);
    // System.Void <GetOculusPurchaseLockAttempt>b__1(PlayFab.PlayFabError error)
    // Offset: 0x1BC7D94
    void $GetOculusPurchaseLockAttempt$b__1(::PlayFab::PlayFabError* error);
  }; // GorillaNetworking.CosmeticsController/<>c__DisplayClass112_0
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::$$c__DisplayClass112_0), 24 + sizeof(bool)> __GorillaNetworking_CosmeticsController_$$c__DisplayClass112_0SizeCheck;
  static_assert(sizeof(CosmeticsController::$$c__DisplayClass112_0) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::$GetOculusPurchaseLockAttempt$b__0
// Il2CppName: <GetOculusPurchaseLockAttempt>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::*)(::PlayFab::ClientModels::GetUserDataResult*)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::$GetOculusPurchaseLockAttempt$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("PlayFab.ClientModels", "GetUserDataResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0*), "<GetOculusPurchaseLockAttempt>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::$GetOculusPurchaseLockAttempt$b__1
// Il2CppName: <GetOculusPurchaseLockAttempt>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::*)(::PlayFab::PlayFabError*)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0::$GetOculusPurchaseLockAttempt$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass112_0*), "<GetOculusPurchaseLockAttempt>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
