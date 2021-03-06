// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.Context
#include "Mono/Security/Protocol/Tls/Context.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: SslServerStream
  class SslServerStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: ServerContext
  class ServerContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::ServerContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::ServerContext*, "Mono.Security.Protocol.Tls", "ServerContext");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0xF2
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.ServerContext
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerContext : public ::Mono::Security::Protocol::Tls::Context {
    public:
    // Writing base type padding for base size: 0xE1 to desired offset: 0xE8
    char ___base_padding[0x7] = {};
    public:
    // private Mono.Security.Protocol.Tls.SslServerStream sslStream
    // Size: 0x8
    // Offset: 0xE8
    ::Mono::Security::Protocol::Tls::SslServerStream* sslStream;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::SslServerStream*) == 0x8);
    // private System.Boolean request_client_certificate
    // Size: 0x1
    // Offset: 0xF0
    bool request_client_certificate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean clientCertificateRequired
    // Size: 0x1
    // Offset: 0xF1
    bool clientCertificateRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Mono.Security.Protocol.Tls.SslServerStream sslStream
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::SslServerStream*& dyn_sslStream();
    // Get instance field reference: private System.Boolean request_client_certificate
    [[deprecated("Use field access instead!")]] bool& dyn_request_client_certificate();
    // Get instance field reference: private System.Boolean clientCertificateRequired
    [[deprecated("Use field access instead!")]] bool& dyn_clientCertificateRequired();
    // public Mono.Security.Protocol.Tls.SslServerStream get_SslStream()
    // Offset: 0x107F5E0
    ::Mono::Security::Protocol::Tls::SslServerStream* get_SslStream();
    // public System.Boolean get_ClientCertificateRequired()
    // Offset: 0x107F5E8
    bool get_ClientCertificateRequired();
    // public System.Boolean get_RequestClientCertificate()
    // Offset: 0x107F5F0
    bool get_RequestClientCertificate();
    // public System.Void .ctor(Mono.Security.Protocol.Tls.SslServerStream stream, Mono.Security.Protocol.Tls.SecurityProtocolType securityProtocolType, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Boolean requestClientCertificate)
    // Offset: 0x107F5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerContext* New_ctor(::Mono::Security::Protocol::Tls::SslServerStream* stream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, bool requestClientCertificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::ServerContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerContext*, creationType>(stream, securityProtocolType, serverCertificate, clientCertificateRequired, requestClientCertificate)));
    }
  }; // Mono.Security.Protocol.Tls.ServerContext
  #pragma pack(pop)
  static check_size<sizeof(ServerContext), 241 + sizeof(bool)> __Mono_Security_Protocol_Tls_ServerContextSizeCheck;
  static_assert(sizeof(ServerContext) == 0xF2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ServerContext::get_SslStream
// Il2CppName: get_SslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::SslServerStream* (Mono::Security::Protocol::Tls::ServerContext::*)()>(&Mono::Security::Protocol::Tls::ServerContext::get_SslStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ServerContext*), "get_SslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ServerContext::get_ClientCertificateRequired
// Il2CppName: get_ClientCertificateRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::ServerContext::*)()>(&Mono::Security::Protocol::Tls::ServerContext::get_ClientCertificateRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ServerContext*), "get_ClientCertificateRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ServerContext::get_RequestClientCertificate
// Il2CppName: get_RequestClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::ServerContext::*)()>(&Mono::Security::Protocol::Tls::ServerContext::get_RequestClientCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ServerContext*), "get_RequestClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ServerContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
