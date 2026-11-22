// Lifted C++ translation unit: lifted/leaf/decompiled_7A0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007AD590(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x007AD5C0] sub_007AD5C0 (32 bytes)
// @name sub_007AD5C0
// @summary MSVC scalar deleting destructor: calls sub_007AD590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AD5C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AD590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
