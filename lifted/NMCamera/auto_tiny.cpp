// Lifted C++ translation unit: lifted/NMCamera/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00551A20(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name NMCamera::Perspective::vfunc_3
// @class NMCamera::Perspective
// @summary Stores the double argument (passed on the stack) into the Perspective object at +0xF8.
// @field NMCamera::Perspective +0xF8 double field_0xF8
void fn_005521D0(void* self, double value) {
    // Object-relative store: *(double*)((char*)self + 0xF8) = value;
    double* slot = reinterpret_cast<double*>(static_cast<char*>(self) + 0xF8);
    *slot = value;
}

// [0x00551D80] NMCamera::Orthogonal::vfunc_0 (30 bytes)
// @name NMCamera::Orthogonal::vfunc_0
// @class NMCamera::Orthogonal
// @summary MSVC scalar deleting destructor: calls sub_00551A20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00551D80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00551A20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
