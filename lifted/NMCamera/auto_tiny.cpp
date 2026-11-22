// Lifted C++ translation unit: lifted/NMCamera/auto_tiny.cpp
#include "lift_compat.h"

// [0x005521D0] NMCamera::Perspective::vfunc_3 (13 bytes)
// @name NMCamera::Perspective::vfunc_3
// @class NMCamera::Perspective
// @summary Stores the double argument (passed on the stack) into the Perspective object at +0xF8.
// @field NMCamera::Perspective +0xF8 double field_0xF8
void fn_005521D0(void* self, double value) {
    // Object-relative store: *(double*)((char*)self + 0xF8) = value;
    double* slot = reinterpret_cast<double*>(static_cast<char*>(self) + 0xF8);
    *slot = value;
}
