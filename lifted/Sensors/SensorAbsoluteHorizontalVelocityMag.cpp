// Lifted C++ translation unit: lifted/Sensors/SensorAbsoluteHorizontalVelocityMag.cpp
#include "lift_compat.h"
#include <cmath>

// [0x00627300] Sensors::SensorAbsoluteHorizontalVelocityMag::vfunc_17 (68 bytes)
namespace lift_00627300 {
extern void ext_00627280(void* self);

// @name Sensors::SensorAbsoluteHorizontalVelocityMag::vfunc_17
// @class Sensors::SensorAbsoluteHorizontalVelocityMag
// @summary Returns the magnitude sqrt(f30^2 + f38^2) of the two horizontal velocity floats, sign-normalized to non-negative.
// @field Sensors::SensorAbsoluteHorizontalVelocityMag +0x30 float field_0x30
// @field Sensors::SensorAbsoluteHorizontalVelocityMag +0x38 float field_0x38
float fn_00627300(void* self) {
    ext_00627280(self);

    const float a = lift_field<float>(self, 0x30);
    const float b = lift_field<float>(self, 0x38);
    float r = std::sqrt(a * a + b * b);
    if (r < 0.0f) {
        r = -r;
    }
    return r;
}
} // namespace lift_00627300
