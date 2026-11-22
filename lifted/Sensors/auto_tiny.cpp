// Lifted C++ translation unit: lifted/Sensors/auto_tiny.cpp
#include "lift_compat.h"

// [0x0062B6E0]
// @name Sensors::AxisSensor::vfunc_16
// @class Sensors::AxisSensor
// @summary Returns the float at element `index` of the indexed float array at this+0x30 (thiscall, one stack arg, ret 4).
// @field Sensors::AxisSensor +0x30 float field_0x30
float fn_0062B6E0(void* self, int32_t index) {
    // mov eax, [esp+4] ; fld dword ptr [ecx + 4*eax + 0x30] ; ret 4
    return lift_field<float>(self, 0x30 + static_cast<ptrdiff_t>(index) * 4);
}
