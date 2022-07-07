#pragma once

#include "typedefs-object.hpp"

#ifdef HAS_CODEGEN

#ifdef USE_CODEGEN_FIELDS
#define _HAD_CODEGEN_FIELDS
#else
#define USE_CODEGEN_FIELDS
#endif

#include "System/Delegate.hpp"
#ifndef _HAD_CODEGEN_FIELDS
#undef USE_CODEGEN_FIELDS
#endif

#undef _HAD_CODEGEN_FIELDS

// self-typedef'd in il2cpp-class-internals.h
struct Il2CppDelegate : public System::Delegate {};
#endif
// Already included in manual il2cpp typedefs

#ifdef HAS_CODEGEN

#ifdef USE_CODEGEN_FIELDS
#define _HAD_CODEGEN_FIELDS
#else
#define USE_CODEGEN_FIELDS
#endif

#include "System/MulticastDelegate.hpp"
#ifndef _HAD_CODEGEN_FIELDS
#undef USE_CODEGEN_FIELDS
#endif

#undef _HAD_CODEGEN_FIELDS

typedef System::MulticastDelegate Il2CppMulticastDelegate;
typedef System::MulticastDelegate MulticastDelegate;
#else
// System.MulticastDelegate
typedef struct MulticastDelegate : Il2CppDelegate {
    ::Array<Il2CppDelegate*>* delegates;
} MulticastDelegate;
#endif

#ifndef HAS_CODEGEN
// System.DelegateData
typedef struct DelegateData : Il2CppObject {
    Il2CppReflectionType* target_type;
    Il2CppString* method_name;
    bool curied_first_arg;
} DelegateData;
#endif