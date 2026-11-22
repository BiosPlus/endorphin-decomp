// Lifted C++ translation unit: lifted/NMData/FluidObjectData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Static std::string object at VA 0x00B44944 (copied into the sret buffer).
extern "C" const std::string mem_00B44944;

// [0x005C3270] NMData::FluidObjectData::vfunc_62 (34 bytes)
// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
void* __thiscall fn_005C3270(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00B44944);
    return out;
}
