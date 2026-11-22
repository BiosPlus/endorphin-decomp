// Lifted C++ translation unit: lifted/Sensors/SensorTreeCentreOfMassZ.cpp
#include "lift_compat.h"
extern "C" void ext_006298B0(void* self);

// [0x00629A90] Sensors::SensorTreeCentreOfMassZ::vfunc_17 (13 bytes)
// @name Sensors::SensorTreeCentreOfMassZ::vfunc_17
// @class Sensors::SensorTreeCentreOfMassZ
// @summary Calls the base-class update routine on this, then returns the float at +0x6C.
// @field Sensors::SensorTreeCentreOfMassZ +0x6C float field_0x6C
float fn_00629A90(void* self) {
    ext_006298B0(self);
    return lift_field<float>(self, 0x6C);
}
