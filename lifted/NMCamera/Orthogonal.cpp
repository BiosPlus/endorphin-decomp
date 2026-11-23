// Lifted C++ translation unit: lifted/NMCamera/Orthogonal.cpp
#include "lift_compat.h"
extern "C" unsigned char __fastcall ext_00546520(void* self, void* edx_unused, void* arg);
extern "C" unsigned char __fastcall ext_00551960(void* self, void* edx_unused, void* arg);
extern "C" void ext_005480D0(uint32_t arg);

// [0x00551AF0] NMCamera::Orthogonal::vfunc_8 (88 bytes)
// @name NMCamera::Orthogonal::vfunc_8
// @class NMCamera::Orthogonal
// @summary Returns 1 if the flag at +0xA0 is set, otherwise 1 only when both sub-checks pass and two float pairs are equal.
// @field NMCamera::Orthogonal +0x30 float field_0x30
// @field NMCamera::Orthogonal +0x34 float field_0x34
// @field NMCamera::Orthogonal +0x3C void* field_0x3c
// @field NMCamera::Orthogonal +0x58 void* field_0x58
// @field NMCamera::Orthogonal +0x68 float field_0x68
// @field NMCamera::Orthogonal +0x6C float field_0x6c
// @field NMCamera::Orthogonal +0x74 void* field_0x74
// @field NMCamera::Orthogonal +0x90 void* field_0x90
// @field NMCamera::Orthogonal +0xA0 int32_t field_0xa0
extern "C" int __fastcall fn_00551AF0(void* self, void* edx_unused) {
    (void)edx_unused;
    auto* base = static_cast<unsigned char*>(self);

    if (*reinterpret_cast<int32_t*>(base + 0xA0) != 0) {
        return 1;
    }

    if (ext_00546520(base + 0x90, nullptr, base + 0x58) == 0) {
        return 0;
    }

    if (ext_00551960(base + 0x74, nullptr, base + 0x3C) == 0) {
        return 0;
    }

    const float f68 = *reinterpret_cast<float*>(base + 0x68);
    const float f30 = *reinterpret_cast<float*>(base + 0x30);
    if (!(f68 == f30)) {
        return 0;
    }

    const float f6c = *reinterpret_cast<float*>(base + 0x6C);
    const float f34 = *reinterpret_cast<float*>(base + 0x34);
    if (!(f6c == f34)) {
        return 0;
    }

    return 1;
}

// [0x00551A10] NMCamera::Orthogonal::vfunc_5 (8 bytes)
// @name NMCamera::Orthogonal::vfunc_5
// @class NMCamera::Orthogonal
// @summary Forwards its single stack argument unchanged to ext_005480D0 and returns (callee pops 4 bytes).
void fn_00551A10(uint32_t arg) {
    ext_005480D0(arg);
}

// [0x00551CB0]
namespace lift_00551CB0 {
extern double ext_005480D0(void* self);
extern int32_t ext_006A6DE0(double val);
extern double mem_00993828;

// @name NMCamera::Orthogonal::vfunc_19
// @class NMCamera::Orthogonal
// @summary Converts normalized/world 2D coordinates to integer screen/viewport coordinates.
// @field NMCamera::Orthogonal +0xB0 double field_0xb0
// @field NMCamera::Orthogonal +0xB8 double field_0xb8
void __thiscall fn_00551CB0(void* self, const float* in_coords, int32_t* out_coords) {
    uint8_t* base = static_cast<uint8_t*>(self);
    double d_b0 = *reinterpret_cast<const double*>(base + 0xB0);
    double d_b8 = *reinterpret_cast<const double*>(base + 0xB8);

    double scale = ext_005480D0(self) / d_b8;
    double half = mem_00993828;

    float f_b0 = static_cast<float>(d_b0);
    double x = static_cast<double>(f_b0) * half + static_cast<double>(in_coords[0]) / scale + half;
    out_coords[0] = ext_006A6DE0(x);

    float f_b8 = static_cast<float>(d_b8);
    double y = static_cast<double>(f_b8) * half - static_cast<double>(in_coords[1]) / scale + half;
    out_coords[1] = ext_006A6DE0(y);
}
} // namespace lift_00551CB0

// [0x00551A80]
namespace lift_00551A80 {
double __thiscall ext_005480D0(void* self);
extern double mem_00993828;
extern void (__stdcall *mem_00925410)(double left, double right, double bottom, double top, double zNear, double zFar);

// @name NMCamera::Orthogonal::vfunc_4
// @class NMCamera::Orthogonal
// @summary Sets up an orthographic projection matrix via glOrtho using camera aspect and near/far planes
// @field NMCamera::Orthogonal +0xC0 double field_0xc0
// @field NMCamera::Orthogonal +0xC8 double field_0xc8
// @field NMCamera::Orthogonal +0xD0 double field_0xd0
void __thiscall fn_00551A80(void* self) {
    float half_h = static_cast<float>(ext_005480D0(self) * mem_00993828);
    double top = static_cast<double>(half_h);
    double bottom = static_cast<double>(-half_h);
    double aspect = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xC0);
    double zNear = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xD0);
    double zFar = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xC8);
    mem_00925410(bottom * aspect, top * aspect, bottom, top, zNear, zFar);
}
} // namespace lift_00551A80
