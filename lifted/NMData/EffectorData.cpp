// Lifted C++ translation unit: lifted/NMData/EffectorData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE64;

// [0x0060BBF0] NMData::EffectorData::vfunc_8 (35 bytes)
// @name NMData::EffectorData::vfunc_8
// @class NMData::EffectorData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9EE64; this is unused.
std::string* fn_0060BBF0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE64);
    return out;
}
