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

// [0x005526A0] NMCamera::Perspective::vfunc_5 (124 bytes)
namespace lift_005526A0 {
// Known callee 0x005B11E0: ReadFloatArrayElement (thiscall, ret 4). Returns float element `index` of the array at this+0x10.
extern float ext_005B11E0(void* self, int32_t index);
// Known callee 0x005D0670: sub_005D06D0 (ecx = field_0xA0 value). Returns float.
extern float ext_005D0670(uint32_t ecx);
// .rdata double 25.4 (constant)
extern double mem_009574F0;
// global double used when field_0xA0 is null
extern double mem_00AF7AC0;

// @name NMCamera::Perspective::vfunc_5
// @class NMCamera::Perspective
// @summary Returns |value| of a float scaled by 25.4 and divided by a float-array-derived ratio; falls back to 2*arg*global when field_0xA0 is null.
// @field NMCamera::Perspective +0xA0 uint32_t field_0xA0
float fn_005526A0(void* self, const float* arg) {
    const uint32_t a0 = lift_field<uint32_t>(self, 0xA0);

    if (a0 != 0) {
        // thiscall receiver for ext_005B11E0 is field_0xA0 + 0x210
        void* elem_self = reinterpret_cast<void*>(static_cast<uintptr_t>(a0) + 0x210);
        const float v1 = ext_005B11E0(elem_self, 2);

        const double scaled = static_cast<double>(*arg) * static_cast<double>(v1) * mem_009574F0;
        const float r = ext_005D0670(a0);
        const double q = scaled / static_cast<double>(r);
        return std::fabs(static_cast<float>(q));
    }

    const double doubled = static_cast<double>(*arg) + static_cast<double>(*arg);
    return std::fabs(static_cast<float>(doubled * mem_00AF7AC0));
}
} // namespace lift_005526A0

// [0x00552490] NMCamera::Perspective::vfunc_6 (259 bytes)
namespace lift_00552490 {
// Known callee 0x0047FFA0: Vector4Subtract_0047FFA0. out[i] = a[i] - b[i] for i in 0..3.
// Caller reads the result through the returned pointer (eax), so it is modelled as returning out.
extern float* ext_0047FFA0(const float* a, float* out, const float* b);
// Known callee 0x0053B470: sub_0053B470 (56B, thiscall). Takes this=P+0x20, out ptr, scalar -1.0f.
// Caller reads the result through the returned pointer (eax), so it is modelled as returning out.
extern float* ext_0053B470(void* self, float* out, float scale);
// Known callee 0x00540D60: Vec3::normalize. Normalizes the first 3 floats in place, returns this.
extern void* ext_00540D60(float* self);
// .rdata float -1.0f (u32 0xBF800000).
extern const float mem_0093F7B8;
// Global dword passed as the argument to the vtable slot-5 call on the object at field_0xA0+4.
extern int mem_00B40640;

// @name NMCamera::Perspective::vfunc_6
// @class NMCamera::Perspective
// @summary Computes the dot product of (arg - ref) with a normalized camera-space vector (from +0xA0 object or +0x80/+0xE8 fallback), then passes it to virtual slot 5.
// @field NMCamera::Perspective +0x80 float field_0x80[4]
// @field NMCamera::Perspective +0xA0 uint32_t field_0xA0
// @field NMCamera::Perspective +0xE8 float field_0xE8[4]
void fn_00552490(void* self, const float* arg) {
    // Helper: virtual slot 5 on the object at (a0 + 4) with one dword argument; returns eax as a pointer.
    auto vcallSlot5 = [](uint32_t a0) -> float* {
        void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(a0) + 4u);
        void** vtbl = *reinterpret_cast<void***>(obj);
        using Slot5Fn = float* (*)(void* self, uint32_t arg);
        Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
        return fn(obj, static_cast<uint32_t>(mem_00B40640));
    };

    // Stage 1: V = (a0 != 0) ? copy(sub_53B470(P+0x20, -1)) : copy(Vector4Subtract(self+0x80, self+0xE8))
    float tmpA[4] = {};
    float tmpB[4] = {};
    float v[4] = {};
    const uint32_t a0 = lift_field<uint32_t>(self, 0xA0);
    const float* src;
    if (a0 != 0) {
        float* p = vcallSlot5(a0);
        src = ext_0053B470(static_cast<uint8_t*>(static_cast<void*>(p)) + 0x20, tmpA, mem_0093F7B8);
    } else {
        src = ext_0047FFA0(reinterpret_cast<const float*>(static_cast<const uint8_t*>(self) + 0x80),
                           tmpB,
                           reinterpret_cast<const float*>(static_cast<const uint8_t*>(self) + 0xE8));
    }
    for (int i = 0; i < 4; ++i) v[i] = src[i];

    // Normalize v in place (first 3 components).
    ext_00540D60(v);

    // Stage 2: b = (a0 != 0) ? (vcall(a0) + 0x30) : (self + 0xE8); re-read a0 as the original does.
    const uint32_t a0b = lift_field<uint32_t>(self, 0xA0);
    const float* b;
    if (a0b == 0) {
        b = reinterpret_cast<const float*>(static_cast<const uint8_t*>(self) + 0xE8);
    } else {
        float* p = vcallSlot5(a0b);
        b = reinterpret_cast<const float*>(static_cast<uint8_t*>(static_cast<void*>(p)) + 0x30);
    }

    // Stage 3: diff = arg - b (Vector4Subtract(arg, diff, b)).
    float diff[4] = {};
    ext_0047FFA0(arg, diff, b);

    // Stage 4: s = dot4(diff, v). Accumulated in double, matching the x87 sum at default precision.
    const double s = static_cast<double>(diff[0]) * static_cast<double>(v[0])
                   + static_cast<double>(diff[1]) * static_cast<double>(v[1])
                   + static_cast<double>(diff[2]) * static_cast<double>(v[2])
                   + static_cast<double>(diff[3]) * static_cast<double>(v[3]);
    const float sf = static_cast<float>(s);

    // Stage 5: virtual slot 5 on self, called with &sf.
    void** selfVtbl = *reinterpret_cast<void***>(self);
    using SelfSlot5Fn = float (*)(void* self, const float* p);
    SelfSlot5Fn slot5 = reinterpret_cast<SelfSlot5Fn>(selfVtbl[5]);
    (void)slot5(self, &sf);
}
} // namespace lift_00552490
