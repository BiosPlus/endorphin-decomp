// Lifted C++ translation unit: lifted/leaf/tiny_780000.cpp
#include "lift_compat.h"

// [0x0078CBD0] sub_0078CBD0 (4 bytes)
// @name sub_0078CBD0
// @class UnknownObject
// @summary Increments the 32-bit counter at offset +0x1C of the object passed in ecx; no other effect.
// @field UnknownObject +0x1c int32_t field_0x1c
extern "C" void __fastcall fn_0078CBD0(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x1C);
    ++(*counter);
}
