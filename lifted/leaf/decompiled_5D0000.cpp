// Lifted C++ translation unit: lifted/leaf/decompiled_5D0000.cpp
#include "lift_compat.h"

// [0x005D06D0] sub_005D06D0 (14 bytes)
namespace lift_005D06D0 {
// @name sub_005D06D0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005D06D0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 0u);
}
} // namespace lift_00611160
} // namespace lift_005D06D0

// [0x005D07E0] sub_005D07E0 (12 bytes)
namespace lift_005D07E0 {
extern uint32_t ext_005CFCB0();
// Known callee 0x005CFCC0: sub_005CFCC0 (Auto-lifted identical-shape clone of 0x004CE810 (Unknown::GetRecordByIndex).)
extern void* ext_005CFCC0(uint32_t index);

// @name Unknown::GetRecordByCurrentIndex
// @class Unknown
// @summary Obtains an index from helper 0x005CFCB0 and returns the record at that index via 0x005CFCC0.
void* fn_005D07E0() {
    uint32_t index = ext_005CFCB0();
    return ext_005CFCC0(index);
}
} // namespace lift_005D07E0
