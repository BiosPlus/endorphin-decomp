// Lifted C++ translation unit: lifted/Geometry/SphylType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484A0(uint32_t self, uint32_t arg);
#include <cmath>
extern "C" float __thiscall ext_005B11E0(void* self, int index);
extern "C" const double mem_009576E8;

extern "C" float __thiscall ext_005B11E0(void* self, int index);
extern "C" const double mem_009576E8;
// @class Geometry::SphylType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1070(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484A0(first, second);
}

// [0x005B17B0]
// @name Geometry::SphylType::vfunc_5
// @class Geometry::SphylType
// @summary Computes projected area of a sphyl along a direction vector.
float __stdcall fn_005B17B0(void* geom, const float* dir) {
    float r = ext_005B11E0(geom, 0);
    double pi_r2 = mem_009576E8 * static_cast<double>(r) * static_cast<double>(r);
    float h = ext_005B11E0(geom, 1);

    float side_area = static_cast<float>(2.0 * static_cast<double>(r) * static_cast<double>(h) + pi_r2);
    float cap_area = static_cast<float>(pi_r2);
    float z_proj = std::fabs(dir[2] * cap_area);

    return dir[0] * side_area + z_proj + dir[1] * side_area;
}

// [0x005B1A30]
namespace lift_005B1A30 {
// @name Geometry::SphylType::computeVolume
// @class Geometry::SphylType
// @summary Computes the volume of a sphyl (capsule) from its radius and length.


double __thiscall ext_005B11E0(void* self, int index);
extern double mem_0095FFC8;
extern double mem_009576E8;

float __stdcall fn_005B1A30(void* arg0) {
    float r = static_cast<float>(ext_005B11E0(arg0, 0));
    double h = ext_005B11E0(arg0, 1);
    double vol = (mem_009576E8 * static_cast<double>(r) * static_cast<double>(r)) *
                 (h + mem_0095FFC8 * static_cast<double>(r));
    return static_cast<float>(vol);
}
} // namespace lift_005B1A30
