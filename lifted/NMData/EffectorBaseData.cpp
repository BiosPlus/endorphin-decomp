// Lifted C++ translation unit: lifted/NMData/EffectorBaseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097214C[];
extern "C" const char mem_0093BF0C[];

// [0x0060BC20] NMData::EffectorBaseData::vfunc_20 (157 bytes)
// @name NMData::EffectorBaseData::vfunc_20
// @class NMData::EffectorBaseData
// @summary Auto-lifted identical-shape clone of 0x00626850 (NMData::EffectorSkeletalData::vfunc_20).
// @field NMData::EffectorBaseData +0x4 std::string field_0x04
void* fn_0060BC20(void* self, void* dst, int unused_arg) {
    (void)unused_arg;
    auto* field_0x04 = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    new (dst) std::string(std::string(mem_0097214C) + *field_0x04 + mem_0093BF0C);
    return dst;
}
