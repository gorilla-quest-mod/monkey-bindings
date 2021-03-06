// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Forward declaring type: TlsClientCertificate
  class TlsClientCertificate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificate");
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsClientCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage {
    public:
    public:
    // private Mono.Security.X509.X509CertificateCollection clientCertificates
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Security::X509::X509CertificateCollection* clientCertificates;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509CertificateCollection*) == 0x8);
    public:
    // Get instance field reference: private Mono.Security.X509.X509CertificateCollection clientCertificates
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509CertificateCollection*& dyn_clientCertificates();
    // public System.Void .ctor(Mono.Security.Protocol.Tls.Context context, System.Byte[] buffer)
    // Offset: 0x1078CE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsClientCertificate* New_ctor(::Mono::Security::Protocol::Tls::Context* context, ::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsClientCertificate*, creationType>(context, buffer)));
    }
    // public System.Boolean get_HasCertificate()
    // Offset: 0x1078EF0
    bool get_HasCertificate();
    // private System.Boolean checkCertificateUsage(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1079808
    bool checkCertificateUsage(::Mono::Security::X509::X509Certificate* cert);
    // private System.Void validateCertificates(Mono.Security.X509.X509CertificateCollection certificates)
    // Offset: 0x10790EC
    void validateCertificates(::Mono::Security::X509::X509CertificateCollection* certificates);
    // public override System.Void Update()
    // Offset: 0x1078D18
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::Update()
    void Update();
    // protected override System.Void ProcessAsSsl3()
    // Offset: 0x1078F1C
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsSsl3()
    void ProcessAsSsl3();
    // protected override System.Void ProcessAsTls1()
    // Offset: 0x1078F2C
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsTls1()
    void ProcessAsTls1();
  }; // Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
  #pragma pack(pop)
  static check_size<sizeof(TlsClientCertificate), 88 + sizeof(::Mono::Security::X509::X509CertificateCollection*)> __Mono_Security_Protocol_Tls_Handshake_Server_TlsClientCertificateSizeCheck;
  static_assert(sizeof(TlsClientCertificate) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::get_HasCertificate
// Il2CppName: get_HasCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::get_HasCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "get_HasCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::checkCertificateUsage
// Il2CppName: checkCertificateUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)(::Mono::Security::X509::X509Certificate*)>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::checkCertificateUsage)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "checkCertificateUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::validateCertificates
// Il2CppName: validateCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)(::Mono::Security::X509::X509CertificateCollection*)>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::validateCertificates)> {
  static const MethodInfo* get() {
    static auto* certificates = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "validateCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificates});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::ProcessAsSsl3
// Il2CppName: ProcessAsSsl3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::ProcessAsSsl3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "ProcessAsSsl3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::ProcessAsTls1
// Il2CppName: ProcessAsTls1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate::ProcessAsTls1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate*), "ProcessAsTls1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
