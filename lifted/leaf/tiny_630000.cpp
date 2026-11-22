// Lifted C++ translation unit: lifted/leaf/tiny_630000.cpp
#include "lift_compat.h"
extern "C" int mem_0097CC34;

// [0x0063E970] sub_0063E970 (7 bytes)
// @name sub_0063E970
// @summary Stores address of mem_0097CC34 into field at offset +0x0.
extern "C" void __fastcall fn_0063E970(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0097CC34;
}
