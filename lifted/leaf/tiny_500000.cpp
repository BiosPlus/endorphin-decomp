// Lifted C++ translation unit: lifted/leaf/tiny_500000.cpp
#include "lift_compat.h"
extern "C" int mem_00950A74;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_0050F990
// @summary Stores address of mem_00950A74 into field at offset +0x0.
extern "C" void __fastcall fn_0050F990(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00950A74;
}

// [0x00508BA0] sub_00508BA0 (19 bytes)
// @name sub_00508BA0
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00508BA0(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x28);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x2C);
    const int32_t diff = end - begin;
    return diff >> 2;
}
