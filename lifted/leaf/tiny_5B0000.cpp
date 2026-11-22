// Lifted C++ translation unit: lifted/leaf/tiny_5B0000.cpp
#include "lift_compat.h"
extern "C" int mem_0095F7EC;

// [0x005B1140] sub_005B1140 (7 bytes)
// @name sub_005B1140
// @summary Stores address of mem_0095F7EC into field at offset +0x0.
extern "C" void __fastcall fn_005B1140(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095F7EC;
}

// [0x005B6600] sub_005B6600 (8 bytes)
// @name sub_005B6600
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x100.
extern "C" void __fastcall fn_005B6600(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x100);
    target(self);
}
