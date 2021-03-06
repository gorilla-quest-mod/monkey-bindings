// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTrigger
#include "GlobalNamespace/GorillaTrigger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaFlag
  class GorillaFlag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaFlag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaFlag*, "", "GorillaFlag");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: GorillaFlag
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaFlag : public ::GlobalNamespace::GorillaTrigger {
    public:
    public:
    // public System.Boolean isRedFlag
    // Size: 0x1
    // Offset: 0x18
    bool isRedFlag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean isRedFlag
    [[deprecated("Use field access instead!")]] bool& dyn_isRedFlag();
    // public override System.Void OnTriggered()
    // Offset: 0x1B6AC54
    // Implemented from: GorillaTrigger
    // Base method: System.Void GorillaTrigger::OnTriggered()
    void OnTriggered();
    // public System.Void .ctor()
    // Offset: 0x1B6AD88
    // Implemented from: GorillaTrigger
    // Base method: System.Void GorillaTrigger::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaFlag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaFlag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaFlag*, creationType>()));
    }
  }; // GorillaFlag
  #pragma pack(pop)
  static check_size<sizeof(GorillaFlag), 24 + sizeof(bool)> __GlobalNamespace_GorillaFlagSizeCheck;
  static_assert(sizeof(GorillaFlag) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaFlag::OnTriggered
// Il2CppName: OnTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaFlag::*)()>(&GlobalNamespace::GorillaFlag::OnTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaFlag*), "OnTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaFlag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
