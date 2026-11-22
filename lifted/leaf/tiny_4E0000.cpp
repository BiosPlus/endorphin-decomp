// Lifted C++ translation unit: lifted/leaf/tiny_4E0000.cpp
#include "lift_compat.h"
extern "C" int mem_0093F994;

// [0x004EB9D0] sub_004EB9D0 (7 bytes)
// @name sub_004EB9D0
// @summary Stores address of mem_0093F994 into field at offset +0x0.
extern "C" void __fastcall fn_004EB9D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093F994;
}
