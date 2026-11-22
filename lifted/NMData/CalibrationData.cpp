// Lifted C++ translation unit: lifted/NMData/CalibrationData.cpp
#include "lift_compat.h"
// Known callee 0x006720E0: sub_006720E0 (43B) - string construct/assign from (src, flag).
extern "C" void ext_006720E0(void* self, void* src, int flag);

// [0x005A7260] NMData::CalibrationData::vfunc_2 (32 bytes)
// Original (ret 8): calls 0x006720E0 with ecx = target and (self+4, 0), then returns target.
// The original also pushes the saved esi as a stack word; that word is not modelled here.
// @name NMData::CalibrationData::vfunc_2
// @class NMData::CalibrationData
// @summary Calls ext_006720E0 on the target object with (self+4, 0) and returns the target.
void* fn_005A7260(void* self, void* target, uint32_t /*arg2, unused*/) {
    ext_006720E0(target, static_cast<uint8_t*>(self) + 4, 0);
    return target;
}
