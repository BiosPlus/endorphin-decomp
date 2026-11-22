// Lifted C++ translation unit: lifted/leaf/tiny_4B0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004AFF30(void* self);
extern "C" int mem_0094200C;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_004B01B0
// @summary This-adjustor thunk: adjusts `this` by +0x200 and tail-calls sub_004AFF30.
extern "C" void __fastcall fn_004B01B0(void* self) {
    ext_004AFF30(static_cast<char*>(self) + 0x200);
}
extern "C" void __fastcall ext_004BBC20(void* self);

// [0x004B0840] sub_004B0840 (11 bytes)
// @name sub_004B0840
// @summary Destructor tail-call: restores vtable mem_0094200C and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_004B0840(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0094200C;
    ext_0065C660(self);
}

// [0x004B0EC0] sub_004B0EC0 (10 bytes)
// @name sub_004B0EC0
// @summary Setter storing float argument into field at offset +0x2C.
extern "C" void __fastcall fn_004B0EC0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x2C) = value;
}

// [0x004BBF50] sub_004BBF50 (8 bytes)
// @name sub_004BBF50
// @summary This-adjustor thunk: adjusts `this` by +0x60 and tail-calls sub_004BBC20.
extern "C" void __fastcall fn_004BBF50(void* self) {
    ext_004BBC20(static_cast<char*>(self) + 0x60);
}
