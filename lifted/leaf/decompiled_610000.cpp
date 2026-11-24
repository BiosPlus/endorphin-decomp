// Lifted C++ translation unit: lifted/leaf/decompiled_610000.cpp
#include "lift_compat.h"

// [0x00611160] sub_00611160 (11 bytes)
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_00611160(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x8u, 3u);
}
} // namespace lift_00611160
