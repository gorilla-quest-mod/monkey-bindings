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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: SslClientStream
  class SslClientStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: ClientContext
  class ClientContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::ClientContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::ClientContext*, "Mono.Security.Protocol.Tls", "ClientContext");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0xF2
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.ClientContext
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientContext : public ::Mono::Security::Protocol::Tls::Context {
    public:
    // Writing base type padding for base size: 0xE1 to desired offset: 0xE8
    char ___base_padding[0x7] = {};
    public:
    // private Mono.Security.Protocol.Tls.SslClientStream sslStream
    // Size: 0x8
    // Offset: 0xE8
    ::Mono::Security::Protocol::Tls::SslClientStream* sslStream;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::SslClientStream*) == 0x8);
    // private System.Int16 clientHelloProtocol
    // Size: 0x2
    // Offset: 0xF0
    int16_t clientHelloProtocol;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Get instance field reference: private Mono.Security.Protocol.Tls.SslClientStream sslStream
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::SslClientStream*& dyn_sslStream();
    // Get instance field reference: private System.Int16 clientHelloProtocol
    [[deprecated("Use field access instead!")]] int16_t& dyn_clientHelloProtocol();
    // public Mono.Security.Protocol.Tls.SslClientStream get_SslStream()
    // Offset: 0x1072C84
    ::Mono::Security::Protocol::Tls::SslClientStream* get_SslStream();
    // public System.Int16 get_ClientHelloProtocol()
    // Offset: 0x1072C8C
    int16_t get_ClientHelloProtocol();
    // public System.Void set_ClientHelloProtocol(System.Int16 value)
    // Offset: 0x1072C94
    void set_ClientHelloProtocol(int16_t value);
    // public System.Void .ctor(Mono.Security.Protocol.Tls.SslClientStream stream, Mono.Security.Protocol.Tls.SecurityProtocolType securityProtocolType, System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates)
    // Offset: 0x1072C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientContext* New_ctor(::Mono::Security::Protocol::Tls::SslClientStream* stream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::ClientContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientContext*, creationType>(stream, securityProtocolType, targetHost, clientCertificates)));
    }
    // public override System.Void Clear()
    // Offset: 0x1072DC8
    // Implemented from: Mono.Security.Protocol.Tls.Context
    // Base method: System.Void Context::Clear()
    void Clear();
  }; // Mono.Security.Protocol.Tls.ClientContext
  #pragma pack(pop)
  static check_size<sizeof(ClientContext), 240 + sizeof(int16_t)> __Mono_Security_Protocol_Tls_ClientContextSizeCheck;
  static_assert(sizeof(ClientContext) == 0xF2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientContext::get_SslStream
// Il2CppName: get_SslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::SslClientStream* (Mono::Security::Protocol::Tls::ClientContext::*)()>(&Mono::Security::Protocol::Tls::ClientContext::get_SslStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientContext*), "get_SslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientContext::get_ClientHelloProtocol
// Il2CppName: get_ClientHelloProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Mono::Security::Protocol::Tls::ClientContext::*)()>(&Mono::Security::Protocol::Tls::ClientContext::get_ClientHelloProtocol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientContext*), "get_ClientHelloProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientContext::set_ClientHelloProtocol
// Il2CppName: set_ClientHelloProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::ClientContext::*)(int16_t)>(&Mono::Security::Protocol::Tls::ClientContext::set_ClientHelloProtocol)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientContext*), "set_ClientHelloProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::ClientContext::*)()>(&Mono::Security::Protocol::Tls::ClientContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
