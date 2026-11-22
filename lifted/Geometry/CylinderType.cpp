// Lifted C++ translation unit: lifted/Geometry/CylinderType.cpp
#include "lift_compat.h"
extern "C" void ext_00647C50(void* self);
extern "C" uint32_t __thiscall ext_00648490(uint32_t self, uint32_t arg);

// [0x005B1170] Geometry::CylinderType::vfunc_1 (12 bytes)
// @name Geometry::CylinderType::vfunc_1
// @class Geometry::CylinderType
// @summary Auto-lifted identical-shape clone of 0x0066BA30 (ExprParser::ExtROType::vfunc_38).
void fn_005B1170(void* self) {
    ext_00647C50(self);
}

// [0x005B1050] Geometry::CylinderType::vfunc_2 (17 bytes)
// @name Geometry::CylinderType::vfunc_2
// @class Geometry::CylinderType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
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
