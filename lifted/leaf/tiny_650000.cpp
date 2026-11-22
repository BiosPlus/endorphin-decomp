// Lifted C++ translation unit: lifted/leaf/tiny_650000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065F2A0(void* self);
extern "C" int mem_009848CC;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_0065ACB0
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0065F2A0.
extern "C" void __fastcall fn_0065ACB0(void* self) {
    ext_0065F2A0(static_cast<char*>(self) + 0x4);
}
extern "C" int mem_00928E8C;
extern "C" int mem_009849C8;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name sub_0065BB60
// @summary Destructor tail-call: restores vtable mem_009848CC and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_0065BB60(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009848CC;
    ext_0065C660(self);
}
extern "C" int mem_0093BF24;

// [0x0065C660] sub_0065C660 (7 bytes)
// @name sub_0065C660
// @summary Stores address of mem_00928E8C into field at offset +0x0.
extern "C" void __fastcall fn_0065C660(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00928E8C;
}

// [0x0065C7F0] sub_0065C7F0 (11 bytes)
// @name sub_0065C7F0
// @summary Destructor tail-call: restores vtable mem_009849C8 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_0065C7F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009849C8;
    ext_00401BB0(self);
}

// [0x0065F440] sub_0065F440 (7 bytes)
// @name sub_0065F440
// @summary Stores address of mem_0093BF24 into field at offset +0x0.
extern "C" void __fastcall fn_0065F440(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093BF24;
}
