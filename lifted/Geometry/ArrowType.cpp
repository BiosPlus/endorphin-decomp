// Lifted C++ translation unit: lifted/Geometry/ArrowType.cpp
#include "lift_compat.h"

// [0x005B4470]
// @name Geometry::ArrowType::vfunc_18
// @class Geometry::ArrowType
// @summary Dispatches to ext_005B3FF0 when arg2 equals 0x29e, otherwise calls ext_00671F30, returning arg1.

#include "lift_compat.h"

extern "C" void ext_005B3FF0(uint32_t, uint32_t);
extern "C" void ext_00671F30(uint32_t);

uint32_t __stdcall fn_005B4470(uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    if (arg2 == 0x29e) {
        ext_005B3FF0(arg1, arg3);
    } else {
        ext_00671F30(arg1);
    }
    return arg1;
}
