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
#include <cstdint>

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

// [0x005B1050] Geometry::CylinderType::vfunc_2 (17 bytes)
namespace lift_005B1050 {
extern uint32_t __thiscall ext_00648490(uint32_t self, uint32_t arg);

// @name Geometry::CylinderType::vfunc_2
// @class Geometry::CylinderType
// @summary Auto-lifted identical-shape clone of 0x005B10B0 (Geometry::FrustumType::vfunc_2).
uint32_t __stdcall fn_005B1050(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_00648490(first, second);
}
} // namespace lift_005B1050

// [0x005B1170] Geometry::CylinderType::vfunc_1 (12 bytes)
namespace lift_005B1170 {
// Known callee 0x00647C50: sub_00647C50 (Auto-lifted identical-shape clone of 0x00647BF0 (Unknown::ForwardFloat68ToSubobjectA4).)
extern void ext_00647C50(void* self);

// @name Geometry::CylinderType::vfunc_1
// @class Geometry::CylinderType
// @summary Forwards its single stack argument as the `this` pointer to ext_00647C50 (callee-cleans 4 bytes).
void fn_005B1170(void* self) {
    ext_00647C50(self);
}
} // namespace lift_005B1170

// [0x005B4BA0]
namespace lift_005B4BA0 {
// @name Geometry::CylinderType::vfunc_16
// @class Geometry::CylinderType
// @summary Clears a Float3Vector and refills it with (stacks+1) copies of a slices-point circle of radius params[0] in the XZ plane (y = 0)
// @field Float3Vector +0x04 float* begin
// @field Float3Vector +0x08 float* end

// Layout of the iterator written by Float3Vector::erase (matches leaf decl).
struct CheckedFloat3Iter {
    void* container;
    float* ptr;
};

extern float __thiscall ext_005B11E0(void* self, int index);
extern CheckedFloat3Iter* __thiscall ext_00539AA0(void* self, CheckedFloat3Iter* out_iter, void* first_container, float* first_ptr, void* last_container, float* last_ptr);
extern void __thiscall ext_00539FB0(void* self, const float* value);
extern void* mem_00925134;   // _invalid_parameter_noinfo function pointer
extern double mem_00955090;  // 2*pi (double)

void __stdcall fn_005B4BA0(void* params, void* points, int32_t stacks, int32_t slices) {
    const float radius = ext_005B11E0(params, 0);
    // The asm also reads params[1] and divides by `stacks` into a value that is
    // only ever stored to the z slot and then overwritten before use, so the
    // read is kept for call-order fidelity and the result is discarded.
    (void)ext_005B11E0(params, 1);

    float* begin = lift_field<float*>(points, 0x04);
    float* end = lift_field<float*>(points, 0x08);
    if (reinterpret_cast<std::uintptr_t>(begin) > reinterpret_cast<std::uintptr_t>(end)) {
        // Asm performs this same check twice; one check is equivalent.
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    CheckedFloat3Iter out_iter{};
    ext_00539AA0(points, &out_iter, points, begin, points, end);

    int32_t remaining = stacks + 1;
    if (remaining <= 0) {
        return;
    }
    do {
        if (slices > 0) {
            for (int32_t j = 0; j < slices; ++j) {
                const float phi = static_cast<float>(
                    (static_cast<double>(j) * mem_00955090) / static_cast<double>(slices));
                const float c = static_cast<float>(std::cos(static_cast<double>(phi)));
                const float s = static_cast<float>(std::sin(static_cast<double>(phi)));
                float p[3];
                p[0] = c * radius;
                p[1] = 0.0f;
                p[2] = s * radius;
                ext_00539FB0(points, p);
            }
        }
    } while (--remaining != 0);
}
} // namespace lift_005B4BA0
