// Lifted C++ translation unit: lifted/leaf/tiny_510000.cpp
#include "lift_compat.h"
extern "C" int mem_00951934;
extern "C" void __fastcall ext_0065F440(void* self);

extern "C" void __fastcall ext_0065F440(void* self);
// @name sub_00511290
// @summary Setter storing float argument into field at offset +0x40.
extern "C" void __fastcall fn_00511290(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x40) = value;
}
extern "C" int mem_0094F084;
extern "C" void __fastcall ext_00503CD0(void* self);

extern "C" void __fastcall ext_00503CD0(void* self);
// @name sub_005112A0
// @summary Setter storing float argument into field at offset +0x44.
extern "C" void __fastcall fn_005112A0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x44) = value;
}
extern "C" void __fastcall ext_00680800(void* self);

// [0x00515820] sub_00515820 (11 bytes)
// @name sub_00515820
// @summary Destructor tail-call: restores vtable mem_00951934 and tail-calls base destructor sub_0065F440.
extern "C" void __fastcall fn_00515820(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00951934;
    ext_0065F440(self);
}

// [0x00517DE0] sub_00517DE0 (11 bytes)
// @name sub_00517DE0
// @summary Destructor tail-call: restores vtable mem_0094F084 and tail-calls base destructor sub_00503CD0.
extern "C" void __fastcall fn_00517DE0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0094F084;
    ext_00503CD0(self);
}

// [0x0051DDD0] sub_0051DDD0 (8 bytes)
// @name sub_0051DDD0
// @summary This-adjustor thunk: adjusts `this` by +0x5C and tail-calls sub_00680800.
extern "C" void __fastcall fn_0051DDD0(void* self) {
    ext_00680800(static_cast<char*>(self) + 0x5C);
}
