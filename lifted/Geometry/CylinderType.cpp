// Lifted C++ translation unit: lifted/Geometry/CylinderType.cpp
#include "lift_compat.h"
extern "C" void ext_00647C50(void* self);
extern "C" uint32_t __thiscall ext_00648490(uint32_t self, uint32_t arg);
#include <algorithm>
#include <cmath>
// @name Geometry::CylinderType::vfunc_4
// @class Geometry::CylinderType
// @summary Clamps a 3D point to a cylinder and returns the distance from the original point.
extern "C" float __thiscall ext_005B11E0(void* this_, int index);
extern "C" void __thiscall ext_0047FFA0(const float* this_, float* out_diff, const float* other);

// @class Geometry::CylinderType
// @summary Clamps a 3D point to a cylinder and returns the distance from the original point.
extern "C" float __thiscall ext_005B11E0(void* this_, int index);
extern "C" void __thiscall ext_0047FFA0(const float* this_, float* out_diff, const float* other);
uint32_t __stdcall fn_005B1050(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_00648490(first, second);
}

// [0x005B1740]
// @name Geometry::CylinderType::vfunc_5
// @class Geometry::CylinderType
// @summary Computes projected area of a cylinder along a direction vector
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z

#include "lift_compat.h"
#include <cmath>

extern float __thiscall ext_005B11E0(void* self, int index);
extern double mem_009576E8;

float __thiscall fn_005B1740(void* self, void* geom, const float* dir) {
    (void)self;
    float r = ext_005B11E0(geom, 0);
    float h = ext_005B11E0(geom, 1);

    float sideArea = (r + r) * h;
    float capArea = static_cast<float>((mem_009576E8 * r) * r);
    float termZ = std::fabs(capArea * dir[2]);

    return (dir[0] * sideArea + termZ) + (dir[1] * sideArea);
}

// [0x005B4210]
// @name Geometry::CylinderType::vfunc_18
// @class Geometry::CylinderType
// @summary Dispatches CylinderType factory/type action by selector id and returns arg0

#include "lift_compat.h"

extern "C" {
void ext_005B3FF0(uint32_t, uint32_t);
void ext_005B4010(uint32_t, uint32_t);
void ext_00671F30(uint32_t);
}

uint32_t __thiscall fn_005B4210(void* /*self*/, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    if (arg1 == 0x29e) {
        ext_005B4010(arg0, arg2);
    } else if (arg1 == 0x2f7) {
        ext_005B3FF0(arg0, arg2);
    } else {
        ext_00671F30(arg0);
    }
    return arg0;
}

// [0x005B1420]
extern "C" float __stdcall fn_005B1420(float* out_pt, void* cyl, const float* in_pt)
{
    out_pt[0] = in_pt[0];
    out_pt[1] = in_pt[1];

    float half_height = static_cast<float>(ext_005B11E0(cyl, 1) * 0.5);
    out_pt[2] = std::clamp(in_pt[2], -half_height, half_height);
    out_pt[3] = 1.0f;

    float r = std::sqrt(in_pt[0] * in_pt[0] + in_pt[1] * in_pt[1]);
    float radius = ext_005B11E0(cyl, 0);
    if (radius < r) {
        out_pt[0] = (in_pt[0] / r) * ext_005B11E0(cyl, 0);
        out_pt[1] = (in_pt[1] / r) * ext_005B11E0(cyl, 0);
    }

    float diff[4];
    ext_0047FFA0(in_pt, diff, out_pt);
    return std::sqrt(diff[0] * diff[0] + diff[1] * diff[1] + diff[2] * diff[2]);
}

// [0x005B19F0] Geometry::CylinderType::vfunc_3 (49 bytes)
namespace lift_005B19F0 {
extern float __stdcall ext_005B11E0(int32_t index);
extern const double mem_009576E8;

// @name Geometry::CylinderType::getVolume
// @class Geometry::CylinderType
// @summary Returns pi * r^2 * h, with r = ext_005B11E0(0) and h = ext_005B11E0(1); the stack argument is overwritten and unused.
// @field Geometry::CylinderType (no direct this-relative field accesses)
float __stdcall fn_005B19F0(int32_t unused) {
    (void)unused;
    // Original order of operations: r0 = f(0), r1 = f(1), result = pi * r0 * r0 * r1.
    const float r0 = ext_005B11E0(0);
    const float r1 = ext_005B11E0(1);
    double t = mem_009576E8 * static_cast<double>(r0);
    t = static_cast<double>(r0) * t;
    t = static_cast<double>(r1) * t;
    return static_cast<float>(t);
}
} // namespace lift_005B19F0

// [0x005B4BA0] Geometry::CylinderType::vfunc_16 (299 bytes)
namespace lift_005B4BA0 {
// Callees (signatures inferred from call sites in this function).
extern float ext_005B11E0(void* self, int32_t which);
extern void ext_00539AA0(void* self, float* out, void* a, int32_t b, void* c, int32_t d);
extern void ext_00539FB0(void* self, const float* point);

// @name Geometry::CylinderType::vfunc_16
// @class Geometry::CylinderType
// @summary Tessellates a cylinder: for each height step, emits one point per segment on a circle of radius from self into target.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
void fn_005B4BA0(void* self, void* target, int32_t heightSteps, int32_t segments) {
    constexpr double kTwoPi = 6.2831854820251465; // mem_00955090

    const float radius = ext_005B11E0(self, 0);
    const float height = ext_005B11E0(self, 1);
    const float step = height / static_cast<float>(heightSteps);

    // Original asserts begin <= end via CRT _invalid_parameter_noinfo (indirect call
    // through mem_00925134); the call is a no-op in the portable build.
    const int32_t begin = lift_field<int32_t>(target, 0x04);
    const int32_t end = lift_field<int32_t>(target, 0x08);
    if (begin > end) {
        // _invalid_parameter_noinfo()
    }

    float vec[3];
    ext_00539AA0(target, &vec[2], target, begin, target, end);

    const int32_t ringCount = heightSteps + 1;
    if (ringCount <= 0) {
        return;
    }

    int32_t j = -(heightSteps / 2);
    for (int32_t r = ringCount; r != 0; --r, ++j) {
        vec[0] = 0.0f;
        vec[1] = 0.0f;
        vec[2] = 0.0f;

        const float y = static_cast<float>(j) * step;
        if (segments > 0) {
            const float segF = static_cast<float>(segments);
            vec[2] = y;
            for (int32_t i = 0; i < segments; ++i) {
                const float theta = static_cast<float>(
                    (kTwoPi * static_cast<double>(i)) / static_cast<double>(segF));
                vec[0] = std::cos(theta) * radius;
                vec[1] = std::sin(theta) * radius;
                ext_00539FB0(target, vec);
            }
        }
    }
}
} // namespace lift_005B4BA0
