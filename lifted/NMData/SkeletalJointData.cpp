// Lifted C++ translation unit: lifted/NMData/SkeletalJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F280;

// [0x005F02B0] NMData::SkeletalJointData::vfunc_59 (35 bytes)
// @name NMData::SkeletalJointData::vfunc_59
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
