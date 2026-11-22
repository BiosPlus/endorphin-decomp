// Lifted C++ translation unit: lifted/Sensors/SensorTreeCentreOfMassX.cpp
#include "lift_compat.h"
extern "C" void ext_006298B0(void* self);

// [0x00629A70]
// @name Sensors::SensorTreeCentreOfMassX::vfunc_17
// @class Sensors::SensorTreeCentreOfMassX
// @summary Calls the base-class update routine (ext_006298B0) on self, then returns the float at +0x64.
// @field Sensors::SensorTreeCentreOfMassX +0x64 float field_0x64
float fn_00629A70(void* self) {
    ext_006298B0(self);
    return *reinterpret_cast<float*>(static_cast<unsigned char*>(self) + 0x64);
}
