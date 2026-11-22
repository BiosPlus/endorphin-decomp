// Lifted C++ translation unit: lifted/NMData/HingeData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EF9C;
extern "C" void __thiscall ext_005E29F0(void* self, void* a, void* b);

// [0x005EF8A0] NMData::HingeData::vfunc_59 (35 bytes)
// @name NMData::HingeData::vfunc_59
// @class NMData::HingeData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9EF9C; this is unused.
std::string* fn_005EF8A0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EF9C);
    return out;
}

// [0x005E2A90] NMData::HingeData::vfunc_14 (32 bytes)
// @name NMData::HingeData::vfunc_14
// @class NMData::HingeData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005E2A90(void* self, void* a, void* b) {
    ext_005E29F0(self, a, b);
    return a;
}
