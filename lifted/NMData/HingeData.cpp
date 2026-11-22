// Lifted C++ translation unit: lifted/NMData/HingeData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EF9C;

// [0x005EF8A0] NMData::HingeData::vfunc_59 (35 bytes)
// @name NMData::HingeData::vfunc_59
// @class NMData::HingeData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9EF9C; this is unused.
std::string* fn_005EF8A0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EF9C);
    return out;
}
