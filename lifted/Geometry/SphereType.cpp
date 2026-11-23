// Lifted C++ translation unit: lifted/Geometry/SphereType.cpp
#include "lift_compat.h"
extern "C" float ext_005B11E0(void* self, int32_t arg);
extern "C" double mem_0095FFC0;
#include <cmath>

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

// [0x005B4CD0] Geometry::SphereType::vfunc_16 (359 bytes)
namespace lift_005B4CD0 {
extern void ext_00539AA0(void* self, float* out, void* a2, int32_t a3, void* a4, int32_t a5);
extern void ext_00539FB0(void* self, const float* vertex);
extern float ext_005B11E0(int32_t arg);

// @name Geometry::SphereType::vfunc_16
// @class Geometry::SphereType
// @summary Emits sphere geometry as latitude rings (rings = arg3) of segments (segments = arg4), with ring height step 2r/rings.
// @field Geometry::SphereType +0x04 int32_t field_0x04
// @field Geometry::SphereType +0x08 int32_t field_0x08
void fn_005B4CD0(void* unusedArg1, void* obj, int32_t rings, int32_t segments) {
    (void)unusedArg1;
    constexpr double kTwoPi = 6.2831854820251465;

    const float r1 = ext_005B11E0(0);
    const float r2 = ext_005B11E0(0);
    const float ringStep = (2.0f * r2) / static_cast<float>(rings);

    const int32_t lo = lift_field<int32_t>(obj, 0x04);
    const int32_t hi = lift_field<int32_t>(obj, 0x08);
    // Original: CRT _invalid_parameter_noinfo if lo > hi (the duplicated check is folded into one).
    if (!(lo <= hi)) {
        std::abort();
    }

    float v[3] = {0.0f, 0.0f, 0.0f};
    ext_00539AA0(obj, &v[2], obj, lo, obj, hi);
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;

    if (rings <= 0) {
        return;
    }

    int32_t j = -(rings / 2);
    for (int32_t remaining = rings; remaining != 0; --remaining, ++j) {
        const float t = static_cast<float>(j) * ringStep;
        const float angle = static_cast<float>(std::asin(static_cast<double>(t / r1)));
        const float ringRadius = static_cast<float>(std::cos(static_cast<double>(angle))) * r1;

        if (segments <= 0) {
            continue;
        }

        // Asm stores the ring height t into v[2] here, but the loop below overwrites
        // v[2] before every call, so that store is dead and omitted.
        const float segF = static_cast<float>(segments);
        for (int32_t k = 0; k < segments; ++k) {
            const float theta = static_cast<float>(static_cast<double>(k) * kTwoPi / static_cast<double>(segF));
            v[0] = static_cast<float>(std::cos(static_cast<double>(theta))) * ringRadius;
            v[2] = static_cast<float>(std::sin(static_cast<double>(theta))) * ringRadius;
            ext_00539FB0(obj, v);
        }
    }
}
} // namespace lift_005B4CD0
