// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaReporter
  class GorillaReporter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaReporter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaReporter*, "", "GorillaReporter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GorillaReporter
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaReporter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GorillaReporter::$CheckReports$d__28
    class $CheckReports$d__28;
    public:
    // private System.Boolean _sendReport
    // Size: 0x1
    // Offset: 0x18
    bool sendReport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sendReport and: suspiciousPlayerId
    char __padding0[0x7] = {};
    // private System.String _suspiciousPlayerId
    // Size: 0x8
    // Offset: 0x20
    ::StringW suspiciousPlayerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _suspiciousPlayerName
    // Size: 0x8
    // Offset: 0x28
    ::StringW suspiciousPlayerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _suspiciousReason
    // Size: 0x8
    // Offset: 0x30
    ::StringW suspiciousReason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> reportedPlayers
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::StringW>* reportedPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Byte roomSize
    // Size: 0x1
    // Offset: 0x40
    uint8_t roomSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: roomSize and: lastCheck
    char __padding5[0x3] = {};
    // public System.Single lastCheck
    // Size: 0x4
    // Offset: 0x44
    float lastCheck;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single checkCooldown
    // Size: 0x4
    // Offset: 0x48
    float checkCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single userDecayTime
    // Size: 0x4
    // Offset: 0x4C
    float userDecayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Photon.Realtime.Player currentMasterClient
    // Size: 0x8
    // Offset: 0x50
    ::Photon::Realtime::Player* currentMasterClient;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Player*) == 0x8);
    // public System.Boolean testAssault
    // Size: 0x1
    // Offset: 0x58
    bool testAssault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: testAssault and: lowestActorNumber
    char __padding10[0x3] = {};
    // private System.Int32 lowestActorNumber
    // Size: 0x4
    // Offset: 0x5C
    int lowestActorNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public GorillaReporter instance
    static ::GlobalNamespace::GorillaReporter* _get_instance();
    // Set static field: static public GorillaReporter instance
    static void _set_instance(::GlobalNamespace::GorillaReporter* value);
    // static field const value: static private System.Byte ReportAssault
    static constexpr const uint8_t ReportAssault = 8u;
    // Get static field: static private System.Byte ReportAssault
    static uint8_t _get_ReportAssault();
    // Set static field: static private System.Byte ReportAssault
    static void _set_ReportAssault(uint8_t value);
    // Get instance field reference: private System.Boolean _sendReport
    [[deprecated("Use field access instead!")]] bool& dyn__sendReport();
    // Get instance field reference: private System.String _suspiciousPlayerId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__suspiciousPlayerId();
    // Get instance field reference: private System.String _suspiciousPlayerName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__suspiciousPlayerName();
    // Get instance field reference: private System.String _suspiciousReason
    [[deprecated("Use field access instead!")]] ::StringW& dyn__suspiciousReason();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> reportedPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_reportedPlayers();
    // Get instance field reference: public System.Byte roomSize
    [[deprecated("Use field access instead!")]] uint8_t& dyn_roomSize();
    // Get instance field reference: public System.Single lastCheck
    [[deprecated("Use field access instead!")]] float& dyn_lastCheck();
    // Get instance field reference: public System.Single checkCooldown
    [[deprecated("Use field access instead!")]] float& dyn_checkCooldown();
    // Get instance field reference: public System.Single userDecayTime
    [[deprecated("Use field access instead!")]] float& dyn_userDecayTime();
    // Get instance field reference: public Photon.Realtime.Player currentMasterClient
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Player*& dyn_currentMasterClient();
    // Get instance field reference: public System.Boolean testAssault
    [[deprecated("Use field access instead!")]] bool& dyn_testAssault();
    // Get instance field reference: private System.Int32 lowestActorNumber
    [[deprecated("Use field access instead!")]] int& dyn_lowestActorNumber();
    // private System.Boolean get_sendReport()
    // Offset: 0x1B7ECB8
    bool get_sendReport();
    // private System.Void set_sendReport(System.Boolean value)
    // Offset: 0x1B7ECC0
    void set_sendReport(bool value);
    // private System.String get_suspiciousPlayerId()
    // Offset: 0x1B7ECD8
    ::StringW get_suspiciousPlayerId();
    // private System.Void set_suspiciousPlayerId(System.String value)
    // Offset: 0x1B7ECE0
    void set_suspiciousPlayerId(::StringW value);
    // private System.String get_suspiciousPlayerName()
    // Offset: 0x1B7ED4C
    ::StringW get_suspiciousPlayerName();
    // private System.Void set_suspiciousPlayerName(System.String value)
    // Offset: 0x1B7ED54
    void set_suspiciousPlayerName(::StringW value);
    // private System.String get_suspiciousReason()
    // Offset: 0x1B7EDC0
    ::StringW get_suspiciousReason();
    // private System.Void set_suspiciousReason(System.String value)
    // Offset: 0x1B7EDC8
    void set_suspiciousReason(::StringW value);
    // private System.Void Start()
    // Offset: 0x1B7EE34
    void Start();
    // public System.Void SendReport(System.String susReason, System.String susId, System.String susNick)
    // Offset: 0x1B7E460
    void SendReport(::StringW susReason, ::StringW susId, ::StringW susNick);
    // private System.Collections.IEnumerator CheckReports()
    // Offset: 0x1B7EF50
    ::System::Collections::IEnumerator* CheckReports();
    // private System.Int32 LowestActorNumber()
    // Offset: 0x1B7EFEC
    int LowestActorNumber();
    // public System.Void .ctor()
    // Offset: 0x1B7F0C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaReporter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaReporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaReporter*, creationType>()));
    }
  }; // GorillaReporter
  #pragma pack(pop)
  static check_size<sizeof(GorillaReporter), 92 + sizeof(int)> __GlobalNamespace_GorillaReporterSizeCheck;
  static_assert(sizeof(GorillaReporter) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::get_sendReport
// Il2CppName: get_sendReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::get_sendReport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "get_sendReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::set_sendReport
// Il2CppName: set_sendReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)(bool)>(&GlobalNamespace::GorillaReporter::set_sendReport)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "set_sendReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::get_suspiciousPlayerId
// Il2CppName: get_suspiciousPlayerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::get_suspiciousPlayerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "get_suspiciousPlayerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::set_suspiciousPlayerId
// Il2CppName: set_suspiciousPlayerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)(::StringW)>(&GlobalNamespace::GorillaReporter::set_suspiciousPlayerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "set_suspiciousPlayerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::get_suspiciousPlayerName
// Il2CppName: get_suspiciousPlayerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::get_suspiciousPlayerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "get_suspiciousPlayerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::set_suspiciousPlayerName
// Il2CppName: set_suspiciousPlayerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)(::StringW)>(&GlobalNamespace::GorillaReporter::set_suspiciousPlayerName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "set_suspiciousPlayerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::get_suspiciousReason
// Il2CppName: get_suspiciousReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::get_suspiciousReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "get_suspiciousReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::set_suspiciousReason
// Il2CppName: set_suspiciousReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)(::StringW)>(&GlobalNamespace::GorillaReporter::set_suspiciousReason)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "set_suspiciousReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::SendReport
// Il2CppName: SendReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaReporter::*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::GorillaReporter::SendReport)> {
  static const MethodInfo* get() {
    static auto* susReason = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* susId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* susNick = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "SendReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{susReason, susId, susNick});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::CheckReports
// Il2CppName: CheckReports
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::CheckReports)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "CheckReports", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::LowestActorNumber
// Il2CppName: LowestActorNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GorillaReporter::*)()>(&GlobalNamespace::GorillaReporter::LowestActorNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaReporter*), "LowestActorNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaReporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
