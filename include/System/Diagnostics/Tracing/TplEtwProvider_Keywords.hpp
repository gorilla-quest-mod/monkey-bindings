// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TplEtwProvider
#include "System/Diagnostics/Tracing/TplEtwProvider.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::TplEtwProvider::Keywords);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::TplEtwProvider::Keywords*, "System.Diagnostics.Tracing", "TplEtwProvider/Keywords");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TplEtwProvider/Keywords
  // [TokenAttribute] Offset: FFFFFFFF
  class TplEtwProvider::Keywords : public ::Il2CppObject {
    public:
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords Debug
    static constexpr const int64_t Debug = 1;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords Debug
    static ::System::Diagnostics::Tracing::EventKeywords _get_Debug();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords Debug
    static void _set_Debug(::System::Diagnostics::Tracing::EventKeywords value);
  }; // System.Diagnostics.Tracing.TplEtwProvider/Keywords
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
