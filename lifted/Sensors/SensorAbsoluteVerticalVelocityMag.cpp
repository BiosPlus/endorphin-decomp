// Lifted C++ translation unit: lifted/Sensors/SensorAbsoluteVerticalVelocityMag.cpp
#include "lift_compat.h"
// sub_00627280: base-class update routine invoked on `this` before the read.
extern "C" void ext_00627280(void* self);

// [0x006272B0] Sensors::SensorAbsoluteVerticalVelocityMag::vfunc_17 (27 bytes)
// @name SensorAbsoluteVerticalVelocityMag::vfunc_17
// @class Sensors::SensorAbsoluteVerticalVelocityMag
// @summary Calls the base update routine, then returns the magnitude (absolute value) of the float at +0x34.
// @field Sensors::SensorAbsoluteVerticalVelocityMag +0x34 float field_0x34
float fn_006272B0(void* self) {
    ext_00627280(self);
    auto* base = static_cast<unsigned char*>(self);
    const float value = *reinterpret_cast<const float*>(base + 0x34);
    // Matches the x87 sequence: fcomp against 0.0 then fchs when value < 0.
    // NaN compares false and returns the value unchanged, as in the original.
    return (value < 0.0f) ? -value : value;
}
