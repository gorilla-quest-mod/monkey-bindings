// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: CipherAlgorithmType
  struct CipherAlgorithmType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::CipherAlgorithmType, "Mono.Security.Protocol.Tls", "CipherAlgorithmType");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.CipherAlgorithmType
  // [TokenAttribute] Offset: FFFFFFFF
  struct CipherAlgorithmType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CipherAlgorithmType
    constexpr CipherAlgorithmType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Des
    static constexpr const int Des = 0;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Des
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_Des();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Des
    static void _set_Des(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType None
    static constexpr const int None = 1;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType None
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_None();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType None
    static void _set_None(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc2
    static constexpr const int Rc2 = 2;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc2
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_Rc2();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc2
    static void _set_Rc2(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc4
    static constexpr const int Rc4 = 3;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc4
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_Rc4();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rc4
    static void _set_Rc4(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rijndael
    static constexpr const int Rijndael = 4;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rijndael
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_Rijndael();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType Rijndael
    static void _set_Rijndael(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType SkipJack
    static constexpr const int SkipJack = 5;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType SkipJack
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_SkipJack();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType SkipJack
    static void _set_SkipJack(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // static field const value: static public Mono.Security.Protocol.Tls.CipherAlgorithmType TripleDes
    static constexpr const int TripleDes = 6;
    // Get static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType TripleDes
    static ::Mono::Security::Protocol::Tls::CipherAlgorithmType _get_TripleDes();
    // Set static field: static public Mono.Security.Protocol.Tls.CipherAlgorithmType TripleDes
    static void _set_TripleDes(::Mono::Security::Protocol::Tls::CipherAlgorithmType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Mono.Security.Protocol.Tls.CipherAlgorithmType
  #pragma pack(pop)
  static check_size<sizeof(CipherAlgorithmType), 0 + sizeof(int)> __Mono_Security_Protocol_Tls_CipherAlgorithmTypeSizeCheck;
  static_assert(sizeof(CipherAlgorithmType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
