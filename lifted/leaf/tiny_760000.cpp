// Lifted C++ translation unit: lifted/leaf/tiny_760000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006B9D70(void* self);
extern "C" void __fastcall ext_007642D0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_007641C0
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006B9D70.
extern "C" void __fastcall fn_007641C0(void* self) {
    ext_006B9D70(static_cast<char*>(self) + 0x8);
}
extern "C" void __fastcall ext_00766730(void* self);

// [0x007642B0] sub_007642B0 (30 bytes)
// @name sub_007642B0
// @summary MSVC scalar deleting destructor: calls sub_007642D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007642B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007642D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00766710] sub_00766710 (30 bytes)
// @name sub_00766710
// @summary MSVC scalar deleting destructor: calls sub_00766730 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00766710(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00766730(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007641C0] sub_007641C0 (16 bytes)
namespace lift_007641C0 {
extern void __fastcall ext_006B9D70(void* self);

// @name sub_007641C0
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006B9D70.
extern void __fastcall fn_007641C0(void* self) {
    ext_006B9D70(static_cast<char*>(self) + 0x8);
}
} // namespace lift_007641C0
