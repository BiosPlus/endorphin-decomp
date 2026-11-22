// Lifted C++ translation unit: lifted/NMData/EffectorGroupData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE68;
extern "C" const char mem_00972450[];
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_0093BF0C[];
// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Constructs a std::string in the caller's hidden return buffer from the C string pointed to by mem_00A9EE68; this is never read (thiscall, one stack arg, ret 4).
std::string* fn_0060D4D0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE68);
    return out;
}

// [0x0060D500] NMData::EffectorGroupData::vfunc_20 (157 bytes)
// @name NMData::EffectorGroupData::vfunc_20
// @class NMData::EffectorGroupData
// @summary Builds the string "<prefix>" + this->field_0x04 + "<suffix>" into the caller's hidden return buffer (thiscall, two stack args, ret 8; the second stack arg is never read).
// @field NMData::EffectorGroupData +0x04 std::string field_0x04
std::string* fn_0060D500(void* self, std::string* out, int unused) {
    (void)unused;
    auto* name = reinterpret_cast<std::string*>(static_cast<unsigned char*>(self) + 0x04);
    std::string prefix(mem_00972450);
    std::string head = prefix + *name;
    new (out) std::string(head + std::string(mem_0093BF0C));
    return out;
}
