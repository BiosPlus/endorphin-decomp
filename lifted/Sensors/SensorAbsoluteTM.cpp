// Lifted C++ translation unit: lifted/Sensors/SensorAbsoluteTM.cpp
#include "lift_compat.h"
// @name Sensors::SensorAbsoluteTM::vfunc_15
// @class Sensors::SensorAbsoluteTM
// @summary Initialises the base sub-object via ext_00627450(self), then calls ext_0067DAD0 on the self+0x60 member with self+0x30 as its argument, and returns self+0x30.
// @field Sensors::SensorAbsoluteTM +0x30 char[0x30] field_0x30 (sub-object; address passed as argument and returned)
// @field Sensors::SensorAbsoluteTM +0x60 char[] field_0x60 (sub-object; used as `this` for ext_0067DAD0)
extern "C" void ext_00627450(void* self);
extern "C" void ext_0067DAD0(void* self, void* arg);
extern void __thiscall ext_00627450(void* self);

// [0x006274B0] Sensors::SensorAbsoluteTM::vfunc_15 (26 bytes)
void* __thiscall fn_006274B0(void* self) {
    auto* s = reinterpret_cast<char*>(self);

    ext_00627450(self);

    void* sub30 = s + 0x30;
    ext_0067DAD0(s + 0x60, sub30);

    return sub30;
}

// [0x00627480]
// @name Sensors::SensorAbsoluteTM::vfunc_14
// @class Sensors::SensorAbsoluteTM
// @summary Calls ext_00627450 on self, then copies three floats from +0x90/+0x94/+0x98 to +0x54/+0x58/+0x5C.
// @field Sensors::SensorAbsoluteTM +0x54 float field_0x54
// @field Sensors::SensorAbsoluteTM +0x58 float field_0x58
// @field Sensors::SensorAbsoluteTM +0x5C float field_0x5C
// @field Sensors::SensorAbsoluteTM +0x90 float field_0x90
// @field Sensors::SensorAbsoluteTM +0x94 float field_0x94
// @field Sensors::SensorAbsoluteTM +0x98 float field_0x98
void __thiscall fn_00627480(void* self) {
    ext_00627450(self);

    lift_field<float>(self, 0x54) = lift_field<float>(self, 0x90);
    lift_field<float>(self, 0x58) = lift_field<float>(self, 0x94);
    lift_field<float>(self, 0x5C) = lift_field<float>(self, 0x98);
}
