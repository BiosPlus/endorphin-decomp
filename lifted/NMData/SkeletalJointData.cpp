// Lifted C++ translation unit: lifted/NMData/SkeletalJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F280;
#include <cstring>
extern "C" void ext_00661650(void* self);
extern "C" void ext_005E29F0(void* self, void* arg1, uint32_t arg2);

extern "C" void ext_00661650(void* self);
extern "C" void ext_005E29F0(void* self, void* arg1, uint32_t arg2);
// @class NMData::SkeletalJointData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9F280; this is unused.
std::string* fn_005F02B0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F280);
    return out;
}

// [0x005E0970] NMData::SkeletalJointData::vfunc_60 (50 bytes)
// @name NMData::SkeletalJointData::countTrueVfunc55
// @class NMData::SkeletalJointData
// @summary Calls virtual slot 55 (0xDC) on self for indices 0..5 and returns how many calls returned true.
// @field NMData::SkeletalJointData +0x00 void** vtable
int32_t fn_005E0970(void* self) {
    int32_t count = 0;
    for (int32_t i = 0; i < 6; ++i) {
        void** vtbl = *reinterpret_cast<void***>(self);
        if (reinterpret_cast<bool (*)(void*, int32_t)>(vtbl[0xDC / 4])(self, i)) {
            ++count;
        }
    }
    return count;
}

// [0x005E2A50] NMData::SkeletalJointData::vfunc_14 (52 bytes)
// @name NMData::SkeletalJointData::vfunc_14
// @class NMData::SkeletalJointData
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_005E2A50(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x47) {
        ext_00661650(arg1);
    } else {
        ext_005E29F0(self, arg1, arg2);
    }
    return arg1;
}
