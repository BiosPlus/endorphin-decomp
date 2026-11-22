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
