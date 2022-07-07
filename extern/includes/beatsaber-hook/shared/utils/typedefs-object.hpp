#pragma once

#ifdef HAS_CODEGEN

#ifdef USE_CODEGEN_FIELDS
#define _HAD_CODEGEN_FIELDS
#else
#define USE_CODEGEN_FIELDS
#endif

#include "System/Object.hpp"
#ifndef _HAD_CODEGEN_FIELDS
#undef USE_CODEGEN_FIELDS
#endif

#undef _HAD_CODEGEN_FIELDS

typedef Il2CppClass Il2CppVTable;
struct MonitorData;
struct Il2CppObject : public System::Object {
    union {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
};
#else
typedef Il2CppClass Il2CppVTable;
struct MonitorData;
typedef struct Il2CppObject
{
    union
    {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
} Il2CppObject;
#endif