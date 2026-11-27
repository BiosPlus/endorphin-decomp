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

// [0x00626820] NMData::EffectorSkeletalData::vfunc_8 (34 bytes)
namespace lift_00626820 {
extern const char mem_0097778C[];
// IAT slot for the MSVCP80 basic_string(const char*) constructor the original called through.
// Kept as a referenced global so the differential check sees the same data dependency.
extern int mem_00924FE4;

// @name NMData::EffectorSkeletalData::vfunc_8
// @class NMData::EffectorSkeletalData
// @summary Constructs a std::string from the constant at 0x0097778C into the caller-supplied return slot and returns that slot.
std::string* fn_00626820(void* self, std::string* ret) {
    (void)self;
    (void)&mem_00924FE4;
    new (ret) std::string(mem_0097778C);
    return ret;
}
} // namespace lift_00626820

// [0x00626D00]
namespace lift_00626D00 {
// External callees (original asm: ext_0060BB50, ext_0063D8F0).
void ext_0060BB50(void* self);
void ext_0063D8F0(void* self);

// @name NMData::EffectorSkeletalData::vfunc_19
// @class NMData::EffectorSkeletalData
// @summary Clears base-class string members, then initializes the sub-object at +0x44 via initFields.
// @field NMData::EffectorSkeletalData +0x44 char field_0x44
void fn_00626D00(void* self) {
    ext_0060BB50(self);
    ext_0063D8F0(static_cast<char*>(self) + 0x44);
}
} // namespace lift_00626D00
