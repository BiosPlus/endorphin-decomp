// Lifted C++ translation unit: lifted/Sensors/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0062B1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name Sensors::AxisSensor::vfunc_16
// @class Sensors::AxisSensor
// @summary Returns the float at element `index` of the indexed float array at this+0x30 (thiscall, one stack arg, ret 4).
// @field Sensors::AxisSensor +0x30 float field_0x30
float fn_0062B6E0(void* self, int32_t index) {
    // mov eax, [esp+4] ; fld dword ptr [ecx + 4*eax + 0x30] ; ret 4
    return lift_field<float>(self, 0x30 + static_cast<ptrdiff_t>(index) * 4);
}
extern "C" void __fastcall ext_0062C450(void* self);

// [0x0062B230] Sensors::SensorIntegral::vfunc_0 (30 bytes)
// @name Sensors::SensorIntegral::vfunc_0
// @class Sensors::SensorIntegral
// @summary MSVC scalar deleting destructor: calls sub_0062B1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0062B230(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0062B1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0062C5E0] Sensors::AxisSensor::vfunc_0 (30 bytes)
// @name Sensors::AxisSensor::vfunc_0
// @class Sensors::AxisSensor
// @summary MSVC scalar deleting destructor: calls sub_0062C450 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0062C5E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0062C450(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
