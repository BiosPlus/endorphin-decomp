// Lifted C++ translation unit: lifted/NMData/PoseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986778 in .data).
extern "C" const char* mem_00A9F1A4;

// [0x0048C120] NMData::PoseData::vfunc_6 (35 bytes)
namespace lift_0048C120 {
extern const char* mem_00A9F1A4;
// IAT slot for MSVCP80 basic_string(const char*, allocator) ctor; the portable
// std::string constructor below replaces the indirect call through this slot.
extern const void* mem_00924FE4;

// @name NMData::PoseData::vfunc_6
// @class NMData::PoseData
// @summary Constructs a std::string in caller-provided storage from the global string literal pointer mem_00A9F1A4 and returns it.
// (no PoseData fields are accessed; the original `this` (ecx) is clobbered and unused)
std::string* fn_0048C120(void* self, std::string* out) {
    (void)self;
    (void)&mem_00924FE4; // keep IAT slot reference (differential-test anchor)
    new (out) std::string(mem_00A9F1A4);
    return out;
}
} // namespace lift_0048C120
