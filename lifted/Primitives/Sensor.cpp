// Lifted C++ translation unit: lifted/Primitives/Sensor.cpp
#include "lift_compat.h"
// External callee: Primitives::Plane::vfunc_25 (0x0053A610).
// Takes `self` in ECX plus three stack arguments; callee cleans up.
void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053D810] Primitives::Sensor::vfunc_25 (91 bytes)
// @name Primitives::Sensor::vfunc_25
// @class Primitives::Sensor
// @summary Forwards three args to Plane::vfunc_25, normalises flag bits at +0x1C (clear 0x1 and 0x2, set 0x4 and 0x40000), then stores arg3 at +0x08.
// @field Primitives::Sensor +0x08 uint32_t field_0x08
// @field Primitives::Sensor +0x1C uint32_t field_0x1c
void fn_0053D810(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    auto* base = static_cast<uint8_t*>(self);
    uint32_t flags;
    std::memcpy(&flags, base + 0x1C, sizeof(flags));

    flags &= ~0x2u;        // clear bit 1
    flags |= 0x4u;         // set bit 2
    flags |= 0x40000u;     // set bit 18
    flags &= ~0x1u;        // clear bit 0

    std::memcpy(base + 0x1C, &flags, sizeof(flags));
    std::memcpy(base + 0x08, &arg3, sizeof(arg3));
}
