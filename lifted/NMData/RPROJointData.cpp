// Lifted C++ translation unit: lifted/NMData/RPROJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E4;
extern "C" void ext_005EB920(void* self, int32_t kind, int32_t arg2);

// [0x005EC2A0] NMData::RPROJointData::vfunc_63 (34 bytes)
// @name NMData::RPROJointData::vfunc_63
// @class NMData::RPROJointData
// @summary Returns early if kind equals the stored field; otherwise maps kind 5 to 3 and tail-forwards to NMData::FixedPathJointData::vfunc_63 (ext_005EB920).
// @field NMData::RPROJointData +0x194 int32_t field_0x194
void fn_005EC2A0(void* self, int32_t kind, int32_t arg2) {
    if (kind == lift_field<int32_t>(self, 0x194)) {
        return;
    }
    if (kind == 5) {
        kind = 3;
    }
    ext_005EB920(self, kind, arg2);
}
