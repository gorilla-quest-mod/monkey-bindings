// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: SortingHelpers
  class SortingHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.SortingHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class SortingHelpers : public ::Il2CppObject {
    public:
    // static public System.Void Sort(System.Collections.Generic.IList`1<T> hits, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Sort(::System::Collections::Generic::IList_1<T>* hits, ::System::Collections::Generic::IComparer_1<T>* comparer) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.XR.Interaction.Toolkit", "SortingHelpers", "Sort", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hits), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, hits, comparer);
    }
  }; // UnityEngine.XR.Interaction.Toolkit.SortingHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SortingHelpers::Sort
// Il2CppName: Sort
// Cannot write MetadataGetter for generic methods!
