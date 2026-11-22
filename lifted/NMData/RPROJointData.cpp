// Lifted C++ translation unit: lifted/NMData/RPROJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E4;

// [0x00584FD0] NMData::RPROJointData::vfunc_59 (35 bytes)
// @name NMData::RPROJointData::vfunc_59
// @class NMData::RPROJointData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9F1E4; this is unused.
std::string* fn_00584FD0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F1E4);
    return out;
}
