// Lifted C++ translation unit: lifted/NMData/GraphEngineData.cpp
#include "lift_compat.h"

// [0x004B48E0] NMData::GraphEngineData::vfunc_13 (69 bytes)
namespace lift_004B48E0 {
// Callee 0x004B4710 (sub_004B4710): thiscall on the same object, returns a DWORD value.
extern int ext_004B4710(void* self);
// Callee 0x0055DA20 (sub_0055DA20): thiscall on arg1, takes (int value, void* subobject), ret 8.
extern void ext_0055DA20(void* self, int value, void* subobject);
// Global lazy-init flag (bit 0 = initialized/in-progress) and cached value.
extern int mem_00AE0D6C;
extern int mem_00AE0D68;

// @name NMData::GraphEngineData::vfunc_13
// @class NMData::GraphEngineData
// @summary Lazily caches a value from ext_004B4710 in a global on first call, then forwards it with the self+8 subobject to ext_0055DA20 on the second stack argument; returns that second argument.
// @field NMData::GraphEngineData +0x08 void* field_0x08
void* fn_004B48E0(void* self, void* unused_arg0, void* arg1) {
    (void)unused_arg0;

    if ((mem_00AE0D6C & 1) == 0) {
        mem_00AE0D6C |= 1;
        mem_00AE0D68 = ext_004B4710(self);
    }

    void* subobject = static_cast<uint8_t*>(self) + 8;
    ext_0055DA20(arg1, mem_00AE0D68, subobject);
    return arg1;
}
} // namespace lift_004B48E0
