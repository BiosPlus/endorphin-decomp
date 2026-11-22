// Lifted C++ translation unit: lifted/NMData/MagnetJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096AFE8.
extern "C" const char mem_0096AFE8[];

// [0x005F0D40] NMData::MagnetJointData::vfunc_59 (34 bytes)
// @name NMData::MagnetJointData::vfunc_59
// @class NMData::MagnetJointData
// @summary Constructs a std::string from the literal at 0x0096AFE8 in the caller's sret buffer and returns that buffer.
void* __thiscall fn_005F0D40(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0096AFE8);
    return out;
}
