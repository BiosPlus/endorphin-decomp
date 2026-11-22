// Lifted C++ translation unit: lifted/NMData/TopLevelState.cpp
#include "lift_compat.h"
extern "C" void ext_004EBC80(uint32_t value, void* subobject);

// [0x004EBE10] NMData::TopLevelState::vfunc_1 (20 bytes)
// @name NMData::TopLevelState::vfunc_1
// @class NMData::TopLevelState
// @summary Forwards its single stack argument and the address of the subobject at +0x14C to ext_004EBC80.
// @field NMData::TopLevelState +0x14C uint8_t field_0x14C (address only, not read or written here)
void fn_004EBE10(void* self, uint32_t value) {
    void* subobject = static_cast<uint8_t*>(self) + 0x14C;
    ext_004EBC80(value, subobject);
}
