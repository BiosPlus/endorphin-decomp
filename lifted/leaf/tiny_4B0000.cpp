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

// [0x004BF680] sub_004BF680 (20 bytes)
namespace lift_004BF680 {
// @name Unknown::InitStateDefault
// @class Unknown
// @summary Initializes object state: sets dword +0x00 to 0x0C, dword +0x04 to 0, byte +0x08 to 1; returns this in eax.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 uint8_t field_0x08
extern void* __fastcall fn_004BF680(void* self) {
    lift_field<int32_t>(self, 0x00) = 0x0C;
    lift_field<int32_t>(self, 0x04) = 0;
    lift_field<uint8_t>(self, 0x08) = 1;
    return self;
}
} // namespace lift_004BF680
