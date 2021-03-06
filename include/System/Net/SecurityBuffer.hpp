// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.BufferType
#include "System/Net/BufferType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ChannelBinding
  class ChannelBinding;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: SecurityBuffer
  class SecurityBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::SecurityBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SecurityBuffer*, "System.Net", "SecurityBuffer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SecurityBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityBuffer : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x10
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.BufferType type
    // Size: 0x4
    // Offset: 0x14
    ::System::Net::BufferType type;
    // Field size check
    static_assert(sizeof(::System::Net::BufferType) == 0x4);
    // public System.Byte[] token
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> token;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Runtime.InteropServices.SafeHandle unmanagedToken
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::InteropServices::SafeHandle* unmanagedToken;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::SafeHandle*) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x28
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: public System.Net.BufferType type
    [[deprecated("Use field access instead!")]] ::System::Net::BufferType& dyn_type();
    // Get instance field reference: public System.Byte[] token
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_token();
    // Get instance field reference: public System.Runtime.InteropServices.SafeHandle unmanagedToken
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::SafeHandle*& dyn_unmanagedToken();
    // Get instance field reference: public System.Int32 offset
    [[deprecated("Use field access instead!")]] int& dyn_offset();
    // public System.Void .ctor(System.Byte[] data, System.Int32 offset, System.Int32 size, System.Net.BufferType tokentype)
    // Offset: 0xEE3848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityBuffer* New_ctor(::ArrayW<uint8_t> data, int offset, int size, ::System::Net::BufferType tokentype) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SecurityBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityBuffer*, creationType>(data, offset, size, tokentype)));
    }
    // public System.Void .ctor(System.Byte[] data, System.Net.BufferType tokentype)
    // Offset: 0xEE3950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityBuffer* New_ctor(::ArrayW<uint8_t> data, ::System::Net::BufferType tokentype) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SecurityBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityBuffer*, creationType>(data, tokentype)));
    }
    // public System.Void .ctor(System.Int32 size, System.Net.BufferType tokentype)
    // Offset: 0xEE39AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityBuffer* New_ctor(int size, ::System::Net::BufferType tokentype) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SecurityBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityBuffer*, creationType>(size, tokentype)));
    }
    // public System.Void .ctor(System.Security.Authentication.ExtendedProtection.ChannelBinding binding)
    // Offset: 0xEE3A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityBuffer* New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SecurityBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityBuffer*, creationType>(binding)));
    }
  }; // System.Net.SecurityBuffer
  #pragma pack(pop)
  static check_size<sizeof(SecurityBuffer), 40 + sizeof(int)> __System_Net_SecurityBufferSizeCheck;
  static_assert(sizeof(SecurityBuffer) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SecurityBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SecurityBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SecurityBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SecurityBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
