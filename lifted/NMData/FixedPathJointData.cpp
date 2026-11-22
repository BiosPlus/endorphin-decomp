// Lifted C++ translation unit: lifted/NMData/FixedPathJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096B92C.
extern "C" const char mem_0096B92C[];

// [0x005EFF60] NMData::FixedPathJointData::vfunc_59 (34 bytes)
// @name NMData::FixedPathJointData::vfunc_59
// @class NMData::FixedPathJointData
// @summary Constructs a std::string from the literal at 0x0096B92C in the caller's sret buffer and returns that buffer.
void* __thiscall fn_005EFF60(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0096B92C);
    return out;
}
