// Lifted C++ translation unit: lifted/NMData/EffectorGroupData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE68;

// [0x0060D4D0] NMData::EffectorGroupData::vfunc_8 (35 bytes)
// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Constructs a std::string in the caller's hidden return buffer from the C string pointed to by mem_00A9EE68; this is never read (thiscall, one stack arg, ret 4).
std::string* fn_0060D4D0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE68);
    return out;
}
