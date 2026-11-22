// Lifted C++ translation unit: lifted/Geometry/auto_tiny.cpp
#include "lift_compat.h"
extern "C" int mem_00B59400;

// [0x005B1110] Geometry::AnimationType::vfunc_8 (6 bytes)
// @name Geometry::AnimationType::vfunc_8
// @class Geometry::AnimationType
// @summary Returns the address of the global mem_00B59400 (ignores this).
// @field AnimationType +0x00 void* vtable
int* fn_005B1110(void* self) {
    (void)self;
    return &mem_00B59400;
}

// [0x005B1900] Geometry::SphereType::vfunc_9 (9 bytes)
// @name Geometry::SphereType::vfunc_9
// @class Geometry::SphereType
// @summary Loads a single float from the pointer passed as the second stack argument and returns it on the x87 stack (ignores this).
// @field SphereType +0x00 void* vtable
extern "C" float __stdcall fn_005B1900(void* self, const float* value_ptr) {
    (void)self;
    return *value_ptr;
}
