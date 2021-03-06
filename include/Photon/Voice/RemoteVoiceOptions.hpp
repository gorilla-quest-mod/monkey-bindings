// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Photon.Voice.ImageFormat
#include "Photon/Voice/ImageFormat.hpp"
// Including type: Photon.Voice.ImageOutputBuf
#include "Photon/Voice/ImageOutputBuf.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: IDecoder
  class IDecoder;
  // Forward declaring type: FrameOut`1<T>
  template<typename T>
  class FrameOut_1;
  // Skipping declaration: OutputType because it is already included!
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: RemoteVoiceOptions
  struct RemoteVoiceOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::RemoteVoiceOptions, "Photon.Voice", "RemoteVoiceOptions");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Photon.Voice.RemoteVoiceOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteVoiceOptions/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Photon::Voice::RemoteVoiceOptions::OutputType
    struct OutputType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Photon.Voice.RemoteVoiceOptions/OutputType
    // [TokenAttribute] Offset: FFFFFFFF
    struct OutputType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OutputType
      constexpr OutputType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Photon.Voice.RemoteVoiceOptions/OutputType None
      static constexpr const int None = 0;
      // Get static field: static public Photon.Voice.RemoteVoiceOptions/OutputType None
      static ::Photon::Voice::RemoteVoiceOptions::OutputType _get_None();
      // Set static field: static public Photon.Voice.RemoteVoiceOptions/OutputType None
      static void _set_None(::Photon::Voice::RemoteVoiceOptions::OutputType value);
      // static field const value: static public Photon.Voice.RemoteVoiceOptions/OutputType Float
      static constexpr const int Float = 1;
      // Get static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Float
      static ::Photon::Voice::RemoteVoiceOptions::OutputType _get_Float();
      // Set static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Float
      static void _set_Float(::Photon::Voice::RemoteVoiceOptions::OutputType value);
      // static field const value: static public Photon.Voice.RemoteVoiceOptions/OutputType Short
      static constexpr const int Short = 2;
      // Get static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Short
      static ::Photon::Voice::RemoteVoiceOptions::OutputType _get_Short();
      // Set static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Short
      static void _set_Short(::Photon::Voice::RemoteVoiceOptions::OutputType value);
      // static field const value: static public Photon.Voice.RemoteVoiceOptions/OutputType Image
      static constexpr const int Image = 3;
      // Get static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Image
      static ::Photon::Voice::RemoteVoiceOptions::OutputType _get_Image();
      // Set static field: static public Photon.Voice.RemoteVoiceOptions/OutputType Image
      static void _set_Image(::Photon::Voice::RemoteVoiceOptions::OutputType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Photon.Voice.RemoteVoiceOptions/OutputType
    #pragma pack(pop)
    static check_size<sizeof(RemoteVoiceOptions::OutputType), 0 + sizeof(int)> __Photon_Voice_RemoteVoiceOptions_OutputTypeSizeCheck;
    static_assert(sizeof(RemoteVoiceOptions::OutputType) == 0x4);
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAAF4D0
    // private System.Action <OnRemoteVoiceRemoveAction>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::Action* OnRemoteVoiceRemoveAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAAF4E0
    // private Photon.Voice.IDecoder <Decoder>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::Photon::Voice::IDecoder* Decoder;
    // Field size check
    static_assert(sizeof(::Photon::Voice::IDecoder*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAAF4F0
    // private Photon.Voice.ImageFormat <OutputImageFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::Photon::Voice::ImageFormat OutputImageFormat;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ImageFormat) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAAF500
    // private Photon.Voice.RemoteVoiceOptions/OutputType <outType>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::Photon::Voice::RemoteVoiceOptions::OutputType outType;
    // Field size check
    static_assert(sizeof(::Photon::Voice::RemoteVoiceOptions::OutputType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAAF510
    // private System.Object <output>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* output;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: RemoteVoiceOptions
    constexpr RemoteVoiceOptions(::System::Action* OnRemoteVoiceRemoveAction_ = {}, ::Photon::Voice::IDecoder* Decoder_ = {}, ::Photon::Voice::ImageFormat OutputImageFormat_ = {}, ::Photon::Voice::RemoteVoiceOptions::OutputType outType_ = {}, ::Il2CppObject* output_ = {}) noexcept : OnRemoteVoiceRemoveAction{OnRemoteVoiceRemoveAction_}, Decoder{Decoder_}, OutputImageFormat{OutputImageFormat_}, outType{outType_}, output{output_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Action <OnRemoteVoiceRemoveAction>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_$OnRemoteVoiceRemoveAction$k__BackingField();
    // Get instance field reference: private Photon.Voice.IDecoder <Decoder>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::IDecoder*& dyn_$Decoder$k__BackingField();
    // Get instance field reference: private Photon.Voice.ImageFormat <OutputImageFormat>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ImageFormat& dyn_$OutputImageFormat$k__BackingField();
    // Get instance field reference: private Photon.Voice.RemoteVoiceOptions/OutputType <outType>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::RemoteVoiceOptions::OutputType& dyn_$outType$k__BackingField();
    // Get instance field reference: private System.Object <output>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$output$k__BackingField();
    // public System.Void SetOutput(System.Action`1<Photon.Voice.FrameOut`1<System.Single>> output)
    // Offset: 0x9A93D8
    void SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<float>*>* output);
    // public System.Void SetOutput(System.Action`1<Photon.Voice.FrameOut`1<System.Int16>> output)
    // Offset: 0x9A93E8
    void SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>* output);
    // public System.Void SetOutput(System.Action`1<Photon.Voice.ImageOutputBuf> output)
    // Offset: 0x9A93F8
    void SetOutput(::System::Action_1<::Photon::Voice::ImageOutputBuf>* output);
    // public System.Action get_OnRemoteVoiceRemoveAction()
    // Offset: 0x9A9408
    ::System::Action* get_OnRemoteVoiceRemoveAction();
    // public System.Void set_OnRemoteVoiceRemoveAction(System.Action value)
    // Offset: 0x9A9410
    void set_OnRemoteVoiceRemoveAction(::System::Action* value);
    // public Photon.Voice.IDecoder get_Decoder()
    // Offset: 0x9A9418
    ::Photon::Voice::IDecoder* get_Decoder();
    // public System.Void set_Decoder(Photon.Voice.IDecoder value)
    // Offset: 0x9A9420
    void set_Decoder(::Photon::Voice::IDecoder* value);
    // public Photon.Voice.ImageFormat get_OutputImageFormat()
    // Offset: 0x9A9428
    ::Photon::Voice::ImageFormat get_OutputImageFormat();
    // public System.Void set_OutputImageFormat(Photon.Voice.ImageFormat value)
    // Offset: 0x9A9430
    void set_OutputImageFormat(::Photon::Voice::ImageFormat value);
    // Photon.Voice.RemoteVoiceOptions/OutputType get_outType()
    // Offset: 0x9A9438
    ::Photon::Voice::RemoteVoiceOptions::OutputType get_outType();
    // private System.Void set_outType(Photon.Voice.RemoteVoiceOptions/OutputType value)
    // Offset: 0x9A9440
    void set_outType(::Photon::Voice::RemoteVoiceOptions::OutputType value);
    // System.Object get_output()
    // Offset: 0x9A9448
    ::Il2CppObject* get_output();
    // private System.Void set_output(System.Object value)
    // Offset: 0x9A9450
    void set_output(::Il2CppObject* value);
  }; // Photon.Voice.RemoteVoiceOptions
  #pragma pack(pop)
  static check_size<sizeof(RemoteVoiceOptions), 24 + sizeof(::Il2CppObject*)> __Photon_Voice_RemoteVoiceOptionsSizeCheck;
  static_assert(sizeof(RemoteVoiceOptions) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::RemoteVoiceOptions::OutputType, "Photon.Voice", "RemoteVoiceOptions/OutputType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::SetOutput
// Il2CppName: SetOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::System::Action_1<::Photon::Voice::FrameOut_1<float>*>*)>(&Photon::Voice::RemoteVoiceOptions::SetOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameOut`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "SetOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::SetOutput
// Il2CppName: SetOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*)>(&Photon::Voice::RemoteVoiceOptions::SetOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameOut`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int16")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "SetOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::SetOutput
// Il2CppName: SetOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::System::Action_1<::Photon::Voice::ImageOutputBuf>*)>(&Photon::Voice::RemoteVoiceOptions::SetOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Photon.Voice", "ImageOutputBuf")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "SetOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction
// Il2CppName: get_OnRemoteVoiceRemoveAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (Photon::Voice::RemoteVoiceOptions::*)()>(&Photon::Voice::RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "get_OnRemoteVoiceRemoveAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction
// Il2CppName: set_OnRemoteVoiceRemoveAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::System::Action*)>(&Photon::Voice::RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "set_OnRemoteVoiceRemoveAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::get_Decoder
// Il2CppName: get_Decoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::IDecoder* (Photon::Voice::RemoteVoiceOptions::*)()>(&Photon::Voice::RemoteVoiceOptions::get_Decoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "get_Decoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::set_Decoder
// Il2CppName: set_Decoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::Photon::Voice::IDecoder*)>(&Photon::Voice::RemoteVoiceOptions::set_Decoder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice", "IDecoder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "set_Decoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::get_OutputImageFormat
// Il2CppName: get_OutputImageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::ImageFormat (Photon::Voice::RemoteVoiceOptions::*)()>(&Photon::Voice::RemoteVoiceOptions::get_OutputImageFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "get_OutputImageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::set_OutputImageFormat
// Il2CppName: set_OutputImageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::Photon::Voice::ImageFormat)>(&Photon::Voice::RemoteVoiceOptions::set_OutputImageFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice", "ImageFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "set_OutputImageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::get_outType
// Il2CppName: get_outType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::RemoteVoiceOptions::OutputType (Photon::Voice::RemoteVoiceOptions::*)()>(&Photon::Voice::RemoteVoiceOptions::get_outType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "get_outType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::set_outType
// Il2CppName: set_outType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::Photon::Voice::RemoteVoiceOptions::OutputType)>(&Photon::Voice::RemoteVoiceOptions::set_outType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice", "RemoteVoiceOptions/OutputType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "set_outType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::get_output
// Il2CppName: get_output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Voice::RemoteVoiceOptions::*)()>(&Photon::Voice::RemoteVoiceOptions::get_output)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "get_output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::RemoteVoiceOptions::set_output
// Il2CppName: set_output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::RemoteVoiceOptions::*)(::Il2CppObject*)>(&Photon::Voice::RemoteVoiceOptions::set_output)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::RemoteVoiceOptions), "set_output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
