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
