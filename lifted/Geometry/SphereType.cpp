// Lifted C++ translation unit: lifted/Geometry/SphereType.cpp
#include "lift_compat.h"
extern "C" float ext_005B11E0(void* self, int32_t arg);
extern "C" double mem_0095FFC0;

// [0x005B1990] Geometry::SphereType::vfunc_3 (42 bytes)
// @name Geometry::SphereType::vfunc_3
// @class Geometry::SphereType
// @summary Returns the volume of the sphere, (4/3)*pi*r^3, where r is the value returned by ext_005B11E0(self, 0).
float fn_005B1990(void* self) {
    // The original takes one stack argument (ret 4) that is overwritten before use, so it is not modeled here.
    const float radius = ext_005B11E0(self, 0);
    const double k = mem_0095FFC0; // 4/3 * pi
    const double r = static_cast<double>(radius);
    return static_cast<float>(k * r * r * r);
}

// [0x005B4150]
// @name Geometry::SphereType::vfunc_18
// @class Geometry::SphereType
// @summary Dispatches to SphereType helper when tag == 0x2f7 or fallback otherwise, returning arg1

#include "lift_compat.h"

extern "C" void __cdecl ext_005B3FF0(uint32_t, uint32_t);
extern "C" void __cdecl ext_00671F30(uint32_t);

uint32_t __thiscall fn_005B4150(void* /*this*/, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    if (arg2 == 0x2f7) {
        ext_005B3FF0(arg1, arg3);
    } else {
        ext_00671F30(arg1);
    }
    return arg1;
}

// [0x005B1370]
// @name Geometry::SphereType::vfunc_4
// @class Geometry::SphereType
// @summary Computes distance from a point to a sphere surface/center via transformed local coordinates
#include "lift_compat.h"
#include <cmath>
#include <cstdint>

extern void __thiscall ext_00540D60(void* self);
extern float __thiscall ext_005B11E0(void* self, uint32_t arg0);
extern float* __thiscall ext_0053B470(void* self, float* out_vec, float scale);
extern void __thiscall ext_0047FFA0(const void* self, float* out_vec, const float* in_vec);

float __stdcall fn_005B1370(float* out_vec, void* sphere, const float* point) {
    out_vec[0] = point[0];
    out_vec[1] = point[1];
    out_vec[2] = point[2];
    out_vec[3] = point[3];
    ext_00540D60(out_vec);

    float radius = ext_005B11E0(sphere, 0);
    float local_buf[4];
    float* scaled = ext_0053B470(out_vec, local_buf, radius);

    out_vec[0] = scaled[0];
    out_vec[1] = scaled[1];
    out_vec[2] = scaled[2];
    out_vec[3] = 1.0f;

    ext_0047FFA0(point, local_buf, out_vec);

    float len_sq = local_buf[0] * local_buf[0]
                 + local_buf[1] * local_buf[1]
                 + local_buf[2] * local_buf[2];
    return std::sqrt(len_sq);
}

// [0x005B1700]
namespace lift_005B1700 {
extern float __thiscall ext_005B11E0(void* self, uint32_t arg0);
extern double mem_009576E8; // pi (stored as double)

// @name Geometry::SphereType::vfunc_5
// @class Geometry::SphereType
// @summary Returns |pi * r * r| where r = ext_005B11E0(self, 0); the second stack argument is unused.
float __stdcall fn_005B1700(void* self, uint32_t /*unused*/) {
    const float r = ext_005B11E0(self, 0);
    const double rd = static_cast<double>(r);
    // Original order: st0 = pi * r, then st1 = r * st0, rounded to float on store.
    const double pr = mem_009576E8 * rd;
    const float v = static_cast<float>(rd * pr);
    return std::fabs(v);
}
} // namespace lift_005B1700
