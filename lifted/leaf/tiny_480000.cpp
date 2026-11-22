// Lifted C++ translation unit: lifted/leaf/tiny_480000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004A66D0(void* self);
extern "C" void __fastcall ext_004A6710(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_004805E0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A66D0.
extern "C" void __fastcall fn_004805E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A66D0(delegate_obj);
}

// [0x004806C0] sub_004806C0 (11 bytes)
// @name sub_004806C0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A6710.
extern "C" void __fastcall fn_004806C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A6710(delegate_obj);
}

// [0x00486C10] sub_00486C10 (13 bytes)
// @name sub_00486C10
// @summary Setter storing float argument into field at offset +0x220.
extern "C" void __fastcall fn_00486C10(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x220) = value;
}

// [0x00488260] sub_00488260 (8 bytes)
// @name sub_00488260
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x144.
extern "C" void __fastcall fn_00488260(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x144);
    target(self);
}

// [0x0048FB60] sub_0048FB60 (19 bytes)
// @name sub_0048FB60
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_0048FB60(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x8);
    const int32_t diff = end - begin;
    return diff >> 3;
}
