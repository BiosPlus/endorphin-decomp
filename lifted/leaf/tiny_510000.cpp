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

// [0x00515830]
namespace lift_00515830 {
extern uint32_t mem_read32(uint32_t addr);

// @name sub_00515830
// @summary Reads a 32-bit field at +0x30 from the pointer stored at this +0x4.
// @field Unknown +0x04 uint32_t field_0x04
uint32_t __thiscall sub_00515830(uint32_t this_ptr) {
    uint32_t ptr = mem_read32(this_ptr + 0x4);
    return mem_read32(ptr + 0x30);
}
} // namespace lift_00515830

// [0x00515840] sub_00515840 (14 bytes)
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_00508BA0(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_00515840(void* self) {
    void* inner = lift_field<void*>(self, 0x4);
    return ext_00508BA0(static_cast<uint8_t*>(inner) + 0xA4);
}
} // namespace lift_00515840
