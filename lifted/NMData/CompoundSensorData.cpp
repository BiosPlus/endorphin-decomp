// Lifted C++ translation unit: lifted/NMData/CompoundSensorData.cpp
#include "lift_compat.h"
extern "C" void ext_00610730(void* a1, void* subobject);

// [0x006108F0] NMData::CompoundSensorData::vfunc_8 (37 bytes)
// @name NMData::CompoundSensorData::vfunc_8
// @class NMData::CompoundSensorData
// @summary Forwards a1 and the address of the embedded subobject at this+0x154 to ext_00610730, then returns a1.
// @field NMData::CompoundSensorData +0x154 void* field_0x154
void* fn_006108F0(void* self, void* a1) {
    void* subobject = &lift_field<uint8_t>(self, 0x154);
    ext_00610730(a1, subobject);
    return a1;
}
