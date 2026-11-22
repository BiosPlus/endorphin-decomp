// Lifted C++ translation unit: lifted/NMData/EffectorSkeletalData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x0097778C (contents not recovered).
extern "C" const char mem_0097778C[];
// .rdata string literal at 0x009777A0 (contents not recovered).
extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];
// @summary Constructs a std::string from the literal at 0x0097778C in the caller's result slot (first stack argument) and returns that slot. The incoming this (ecx) is overwritten and unused.
void* fn_00626820(void* self, void* dst) {
    (void)self;
    new (dst) std::string(mem_0097778C);
    return dst;
}

// [0x00626850] NMData::EffectorSkeletalData::vfunc_20 (157 bytes)
// @name NMData::EffectorSkeletalData::vfunc_20
// @class NMData::EffectorSkeletalData
// @summary Builds into the caller's result slot (first stack argument) the std::string concatenation: literal at 0x009777A0 + this->field_0x04 + literal at 0x0093BF0C, and returns that slot. The second stack argument is unused.
// @field NMData::EffectorSkeletalData +0x04 std::string field_0x04
void* fn_00626850(void* self, void* dst, int unused_arg) {
    (void)unused_arg;
    auto* field_0x04 = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    new (dst) std::string(std::string(mem_009777A0) + *field_0x04 + mem_0093BF0C);
    return dst;
}
