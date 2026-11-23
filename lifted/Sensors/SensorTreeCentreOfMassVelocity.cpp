// Lifted C++ translation unit: lifted/Sensors/SensorTreeCentreOfMassVelocity.cpp
#include "lift_compat.h"
#include <cstring>

// [0x005FF200] Sensors::SensorTreeCentreOfMassVelocity::vfunc_14 (51 bytes)
namespace lift_005FF200 {
extern void ext_00629B10();

// @name Sensors::SensorTreeCentreOfMassVelocity::vfunc_14
// @class Sensors::SensorTreeCentreOfMassVelocity
// @summary Calls the base sensor update, then copies the 3-float vector at +0x60 to +0x70.
// @field Sensors::SensorTreeCentreOfMassVelocity +0x60 float field_0x60
// @field Sensors::SensorTreeCentreOfMassVelocity +0x64 float field_0x64
// @field Sensors::SensorTreeCentreOfMassVelocity +0x68 float field_0x68
// @field Sensors::SensorTreeCentreOfMassVelocity +0x70 float field_0x70
// @field Sensors::SensorTreeCentreOfMassVelocity +0x74 float field_0x74
// @field Sensors::SensorTreeCentreOfMassVelocity +0x78 float field_0x78
void fn_005FF200(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    ext_00629B10();

    float v[3];
    std::memcpy(&v[0], base + 0x60, sizeof(float));
    std::memcpy(&v[1], base + 0x64, sizeof(float));
    std::memcpy(&v[2], base + 0x68, sizeof(float));

    std::memcpy(base + 0x70, &v[0], sizeof(float));
    std::memcpy(base + 0x74, &v[1], sizeof(float));
    std::memcpy(base + 0x78, &v[2], sizeof(float));
}
} // namespace lift_005FF200
