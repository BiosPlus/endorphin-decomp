// Lifted C++ translation unit: lifted/leaf/tiny_570000.cpp
#include "lift_compat.h"
extern "C" int mem_0095993C;
extern "C" void __fastcall ext_0065C660(void* self);

// [0x00574CF0] sub_00574CF0 (11 bytes)
// @name sub_00574CF0
// @summary Destructor tail-call: restores vtable mem_0095993C and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_00574CF0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095993C;
    ext_0065C660(self);
}
