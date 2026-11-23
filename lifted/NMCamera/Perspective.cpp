// Lifted C++ translation unit: lifted/NMCamera/Perspective.cpp
#include "lift_compat.h"
// Callee 0x006A6DE0: takes the x87 top-of-stack value as a double and returns a
// 32-bit integer in eax (round/convert helper; callers pre-add the half offset).
extern "C" int32_t ext_006A6DE0(double rounded);
// Constant 0.5 (double) in .rdata.
extern "C" const double mem_00993828;

// 32-bit integer in eax (round/convert helper; callers pre-add the half offset).
extern "C" int32_t ext_006A6DE0(double rounded);
// Constant 0.5 (double) in .rdata.
extern "C" const double mem_00993828;
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

// [0x00552340] NMCamera::Perspective::vfunc_19 (128 bytes)
// @name NMCamera::Perspective::vfunc_19
// @class NMCamera::Perspective
// @summary Maps a float triple (in[0], in[1], in[2]) to two rounded ints (out[0], out[1]) using +0xB0/+0xB8 scale terms and virtual slot 5 applied to in[2].
// @field NMCamera::Perspective +0xB0 double field_0xB0
// @field NMCamera::Perspective +0xB8 double field_0xB8
void fn_00552340(void* self, const float* in, int32_t* out) {
    // Virtual slot 5 (offset 0x14) on this. Takes a float* and returns a double.
    // Portable stand-in for the thiscall vtable dispatch.
    using VSlot5 = double (*)(void* self, const float* arg);
    void** vtable = *static_cast<void***>(self);
    const VSlot5 slot5 = reinterpret_cast<VSlot5>(vtable[5]);

    const float z = in[2];
    const double scaled = slot5(self, &z) / lift_field<double>(self, 0xB8);
    const float t1 = static_cast<float>(scaled);

    // out[0] = (int)(in[0] / t1 + (float)field_B0 * 0.5 + 0.5)
    const double c0 = static_cast<double>(static_cast<float>(lift_field<double>(self, 0xB0)));
    const double q0 = static_cast<double>(in[0]) / static_cast<double>(t1);
    const double x0 = q0 + c0 * mem_00993828 + mem_00993828;
    out[0] = ext_006A6DE0(x0);

    // out[1] = (int)(0.5 + (float)field_B8 * 0.5 - in[1] / t1)
    const double d1 = static_cast<double>(static_cast<float>(lift_field<double>(self, 0xB8)));
    const double q1 = static_cast<double>(in[1]) / static_cast<double>(t1);
    const double x1 = mem_00993828 + (d1 * mem_00993828 - q1);
    out[1] = ext_006A6DE0(x1);
}

// [0x00552270]
namespace lift_00552270 {
// @name NMCamera::Perspective::vfunc_4
// @class NMCamera::Perspective
// @summary Applies the perspective projection matrix using gluPerspective.
// @field NMCamera::Perspective +0xC0 double field_0xC0

extern double __fastcall ext_005481A0(void* self);
extern double __fastcall ext_005481C0(void* self);
extern void __stdcall ext_0063E048(double fovy, double aspect, double zNear, double zFar);

void __fastcall fn_00552270(void* self) {
    double zFar = ext_005481A0(self);
    double zNear = ext_005481C0(self);
    double aspect = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xC0);
    void** vtable = *reinterpret_cast<void***>(self);
    typedef double (__fastcall *vfunc_9_t)(void*);
    double fovy = reinterpret_cast<vfunc_9_t>(vtable[9])(self);
    ext_0063E048(fovy, aspect, zNear, zFar);
}
} // namespace lift_00552270
