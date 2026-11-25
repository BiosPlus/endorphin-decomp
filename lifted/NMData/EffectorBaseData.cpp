// Lifted C++ translation unit: lifted/NMData/EffectorBaseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097214C[];
extern "C" const char mem_0093BF0C[];
#include <cstring>

// [0x0060C040] NMData::EffectorBaseData::vfunc_2 (44 bytes)
namespace lift_0060C040 {
// @name NMData::EffectorBaseData::vfunc_2
// @class NMData::EffectorBaseData
// @summary Auto-lifted identical-shape clone of 0x0060E7B0 (NMData::AxisDefineSensorData::vfunc_2).
// @field NMData::EffectorBaseData +0x40 void* field_0x40
namespace lift_0060E7B0 {
extern void* __stdcall ext_006798D0(void* a0, void* a1, uint32_t a2, void* a3);
extern void __thiscall ext_00679030(void* self);

// @name NMData::AxisDefineSensorData::vfunc_2
// @class NMData::AxisDefineSensorData
// @summary Passes the arguments plus this->field_0x170 to ext_006798D0, hands its result to ext_00679030, and returns the first argument.
// @field NMData::AxisDefineSensorData +0x170 void* field_0x170
void* fn_0060C040(void* self, void* arg1, uint32_t arg2) {
    void* sub = lift_field<void*>(self, 0x40);
    void* result = ext_006798D0(arg1, sub, arg2, self);
    ext_00679030(result);
    return arg1;
}
} // namespace lift_0060E7B0
} // namespace lift_0060C040
