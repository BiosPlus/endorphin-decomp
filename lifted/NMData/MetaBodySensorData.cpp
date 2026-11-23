// Lifted C++ translation unit: lifted/NMData/MetaBodySensorData.cpp
#include "lift_compat.h"
extern "C" void ext_006105E0(void* a, void* b, uint32_t c);

// [0x00610780] NMData::MetaBodySensorData::vfunc_8 (37 bytes)
// @name NMData::MetaBodySensorData::vfunc_8
// @class NMData::MetaBodySensorData
// @summary Forwards the incoming pointer with the address of this+0x154 and a zero flag to ext_006105E0, then returns the incoming pointer.
// @field MetaBodySensorData +0x154 void* field_0x154
void* fn_00610780(void* self, void* arg)
{
    void* sub = static_cast<uint8_t*>(self) + 0x154;
    ext_006105E0(arg, sub, 0u);
    return arg;
}
