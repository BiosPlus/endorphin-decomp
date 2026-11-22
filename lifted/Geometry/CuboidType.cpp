// Lifted C++ translation unit: lifted/Geometry/CuboidType.cpp
#include "lift_compat.h"
extern "C" void ext_00647C30(void* self);
extern "C" uint32_t __thiscall ext_006484C0(uint32_t self, uint32_t arg);
#include <cmath>

// [0x005B1160] Geometry::CuboidType::vfunc_1 (12 bytes)
// @name Geometry::CuboidType::vfunc_1
// @class Geometry::CuboidType
// @summary Auto-lifted identical-shape clone of 0x0066BA30 (ExprParser::ExtROType::vfunc_38).
void fn_005B1160(void* self) {
    ext_00647C30(self);
}

// [0x005B1030] Geometry::CuboidType::vfunc_2 (17 bytes)
// @name Geometry::CuboidType::vfunc_2
// @class Geometry::CuboidType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1030(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484C0(first, second);
}

// [0x005B1680]
// @name Geometry::CuboidType::vfunc_5
// @class Geometry::CuboidType
// @summary Computes a weighted sum of cuboid face areas projected onto a 3D vector

extern "C" float __thiscall ext_005B11E0(void* self, int32_t axis);

extern "C" float __stdcall fn_005B1680(void* cuboid, const float* vec) {
    float a = ext_005B11E0(cuboid, 2);
    float b = ext_005B11E0(cuboid, 1);
    float term0 = std::fabs((a * b) * vec[0]);

    float c = ext_005B11E0(cuboid, 2);
    float d = ext_005B11E0(cuboid, 0);
    float sum1 = term0 + (c * d) * vec[1];

    float e = ext_005B11E0(cuboid, 1);
    float f = ext_005B11E0(cuboid, 0);
    return sum1 + (e * f) * vec[2];
}
