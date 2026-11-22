// Lifted C++ translation unit: lifted/leaf/tiny_7B0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007B22B0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x007B2290] sub_007B2290 (30 bytes)
// @name sub_007B2290
// @summary MSVC scalar deleting destructor: calls sub_007B22B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007B2290(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007B22B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
