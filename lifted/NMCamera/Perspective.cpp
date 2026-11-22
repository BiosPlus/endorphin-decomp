// Lifted C++ translation unit: lifted/NMCamera/Perspective.cpp
#include "lift_compat.h"

// [0x005522B0]
// @name NMCamera::Perspective::vfunc_20
// @class NMCamera::Perspective
// @summary Writes a 4-float vector to arg3 derived from the two ints at arg1, the float at arg2, a virtual query (vtable slot 5), and the doubles at this+0xB0/0xB8/0xC0.
// @field NMCamera::Perspective +0xB0 double field_0xB0
// @field NMCamera::Perspective +0xB8 double field_0xB8
// @field NMCamera::Perspective +0xC0 double field_0xC0

void fn_005522B0(void* self, const int32_t* arg1, const float* arg2, float* arg3) {
    using VSlot5Fn = double (*)(void* self, const void* arg);

    // Virtual query: vtable slot 5 (offset 0x14) called with arg2.
    void** vtbl = lift_field<void**>(self, 0);
    VSlot5Fn query = reinterpret_cast<VSlot5Fn>(vtbl[5]);
    const double r = query(self, arg2);

    // a = (float)(r * 0.5)
    const float a = static_cast<float>(r * 0.5);

    // p = (2 * arg1[1]) / field_0xB8
    const double i1 = static_cast<double>(arg1[1]);
    const double f_b8 = lift_field<double>(self, 0xB8);
    const double p = (2.0 * i1) / f_b8;

    // v1 = (float)((1 - p) * a)
    const float v1 = static_cast<float>((1.0 - p) * static_cast<double>(a));

    // v2 = *arg2
    const float v2 = *arg2;

    // rr = (2 * arg1[0]) / field_0xB0
    const double i0 = static_cast<double>(arg1[0]);
    const double f_b0 = lift_field<double>(self, 0xB0);
    const double rr = (2.0 * i0) / f_b0;

    // ac = (float)(a * field_0xC0)
    const double f_c0 = lift_field<double>(self, 0xC0);
    const float ac = static_cast<float>(static_cast<double>(a) * f_c0);

    // g = (float)((rr - 1) * ac)
    const float g = static_cast<float>((rr - 1.0) * static_cast<double>(ac));

    arg3[0] = g;
    arg3[1] = v1;
    arg3[2] = v2;
    arg3[3] = 1.0f;
}
