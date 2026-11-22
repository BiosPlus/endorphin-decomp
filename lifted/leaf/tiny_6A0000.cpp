// Lifted C++ translation unit: lifted/leaf/tiny_6A0000.cpp
#include "lift_compat.h"

// [0x006AD950] sub_006AD950 (5 bytes)
// @name fn_006AD950
// @class UnknownObject
// @summary Increments the 32-bit counter at offset +0x38 of the object passed in ecx.
// @field UnknownObject +0x38 int32_t field_0x38
void fn_006AD950(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x38);
    ++(*counter);
}
