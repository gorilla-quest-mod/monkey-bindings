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
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Forward declaring type: TlsClientHello
  class TlsClientHello;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientHello");
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsClientHello : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage {
    public:
    public:
    // private System.Byte[] random
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> random;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] sessionId
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> sessionId;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int16[] cipherSuites
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<int16_t> cipherSuites;
    // Field size check
    static_assert(sizeof(::ArrayW<int16_t>) == 0x8);
    // private System.Byte[] compressionMethods
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> compressionMethods;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] random
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_random();
    // Get instance field reference: private System.Byte[] sessionId
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_sessionId();
    // Get instance field reference: private System.Int16[] cipherSuites
    [[deprecated("Use field access instead!")]] ::ArrayW<int16_t>& dyn_cipherSuites();
    // Get instance field reference: private System.Byte[] compressionMethods
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_compressionMethods();
    // public System.Void .ctor(Mono.Security.Protocol.Tls.Context context, System.Byte[] buffer)
    // Offset: 0x107A224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsClientHello* New_ctor(::Mono::Security::Protocol::Tls::Context* context, ::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsClientHello*, creationType>(context, buffer)));
    }
    // private System.Void processProtocol(System.Int16 protocol)
    // Offset: 0x107A5C0
    void processProtocol(int16_t protocol);
    // private System.Void selectCipherSuite()
    // Offset: 0x107A2C4
    void selectCipherSuite();
    // private System.Void selectCompressionMethod()
    // Offset: 0x107A410
    void selectCompressionMethod();
    // public override System.Void Update()
    // Offset: 0x107A25C
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::Update()
    void Update();
    // protected override System.Void ProcessAsSsl3()
    // Offset: 0x107A42C
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsSsl3()
    void ProcessAsSsl3();
    // protected override System.Void ProcessAsTls1()
    // Offset: 0x107A43C
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsTls1()
    void ProcessAsTls1();
  }; // Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
  #pragma pack(pop)
  static check_size<sizeof(TlsClientHello), 112 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Protocol_Tls_Handshake_Server_TlsClientHelloSizeCheck;
  static_assert(sizeof(TlsClientHello) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::processProtocol
// Il2CppName: processProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)(int16_t)>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::processProtocol)> {
  static const MethodInfo* get() {
    static auto* protocol = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "processProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocol});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::selectCipherSuite
// Il2CppName: selectCipherSuite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::selectCipherSuite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "selectCipherSuite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::selectCompressionMethod
// Il2CppName: selectCompressionMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::selectCompressionMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "selectCompressionMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::ProcessAsSsl3
// Il2CppName: ProcessAsSsl3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::ProcessAsSsl3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "ProcessAsSsl3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::ProcessAsTls1
// Il2CppName: ProcessAsTls1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello::ProcessAsTls1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello*), "ProcessAsTls1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
