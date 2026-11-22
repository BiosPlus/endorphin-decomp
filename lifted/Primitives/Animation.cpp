// Lifted C++ translation unit: lifted/Primitives/Animation.cpp
#include "lift_compat.h"

// [0x0053AE20] Primitives::Animation::vfunc_11 (32 bytes)
// Original (ret 8): allSet = ((flags & mask) == mask); if (allSet != (uint8)set) flags ^= mask.
// @name Primitives::Animation::vfunc_11
// @class Primitives::Animation
// @summary Toggles the mask bits in the flags word at +0x1C when "all mask bits set" disagrees with the low byte of set.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
void fn_0053AE20(void* self, uint32_t mask, uint8_t set) {
    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    uint8_t allSet = ((flags & mask) == mask) ? 1 : 0;
    if (allSet != set) {
        flags ^= mask;
        lift_field<uint32_t>(self, 0x1C) = flags;
    }
}
