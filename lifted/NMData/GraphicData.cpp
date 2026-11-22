// Lifted C++ translation unit: lifted/NMData/GraphicData.cpp
#include "lift_compat.h"
// Known callee 0x0058F6B0: NMData::AxisDefineSensorData::vfunc_14 (Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).)
extern "C" void ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// Known callee 0x00661650 (35B): sub_00661650, thiscall-style with one stack argument.
extern "C" void ext_00661650(void* self, void* arg);

// [0x0061FF40] NMData::GraphicData::vfunc_14 (60 bytes)
// @name NMData::GraphicData::vfunc_14
// @class NMData::GraphicData
// @summary If arg2 == 0x9C, forwards arg1 to sub_00661650 with the subobject at this+0x154; otherwise forwards (arg1, arg2) to AxisDefineSensorData::vfunc_14. Always returns arg1.
// @field NMData::GraphicData +0x154 uint8_t field_0x154 (address of subobject only; not read or written here)
void* fn_0061FF40(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x9C) {
        void* sub = static_cast<uint8_t*>(self) + 0x154;
        ext_00661650(arg1, sub);
    } else {
        ext_0058F6B0(self, arg1, arg2);
    }
    return arg1;
}
