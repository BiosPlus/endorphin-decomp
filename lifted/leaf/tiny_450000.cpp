// Lifted C++ translation unit: lifted/leaf/tiny_450000.cpp
#include "lift_compat.h"
extern "C" int mem_00935E44;
extern "C" int mem_00935E98;
extern "C" int mem_00936C08;
extern "C" int mem_0093652C;
extern "C" void __fastcall ext_00455EB0(void* self);

extern "C" void __fastcall ext_00455EB0(void* self);
// @name sub_004543E0
// @summary Returns the address of the read-only constant mem_00935E44 (initialised to 0x006A5FCE).
extern "C" const int* fn_004543E0() {
    return &mem_00935E44;
}
extern "C" int mem_00936CA0;
extern "C" int mem_00936F50;
extern "C" int mem_0093712C;
extern "C" void __fastcall ext_00454BA0(void* self);

extern "C" void __fastcall ext_00454BA0(void* self);
// @name GetConstantAddress_00935E98
// @summary Returns the address of the constant global mem_00935E98 (0x00935E98) in eax.
extern "C" void* fn_00454510() {
    return &mem_00935E98;
}
extern "C" int mem_00937394;
extern "C" void __fastcall ext_004584B0(void* self);
extern "C" int mem_009375C8;
extern "C" int mem_00937924;
extern "C" void __fastcall ext_0043BBD0(void* self);

extern "C" void __fastcall ext_0043BBD0(void* self);
// @name sub_00455BD0
// @summary Returns the address of the read-only constant mem_00936C08 (initialised to 0x006A5FCE).
extern "C" const int* fn_00455BD0() {
    return &mem_00936C08;
}
extern "C" int mem_00937934;
extern "C" void __fastcall ext_004406C0(void* self);

extern "C" void __fastcall ext_004406C0(void* self);
// @name sub_00454BA0
// @summary Destructor tail-call: restores vtable mem_0093652C and tail-calls base destructor sub_00455EB0.
extern "C" void __fastcall fn_00454BA0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093652C;
    ext_00455EB0(self);
}
extern "C" int mem_0093794C;
extern "C" int mem_00937BEC;
extern "C" int mem_00937D4C;
extern "C" void __fastcall ext_006A681A(void* self);

extern "C" void __fastcall ext_006A681A(void* self);
// @name sub_00455450
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x164.
extern "C" void __fastcall fn_00455450(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x164);
    target(self);
}
extern "C" int mem_00937E88;
extern "C" int mem_00937FC8;
extern "C" void __fastcall ext_0045E700(void* self);
extern "C" void __fastcall ext_0045E690(void* self);
#include <cstdint>

// [0x00455BE0] sub_00455BE0 (6 bytes)
// @name sub_00455BE0
// @summary Returns address of global mem_00936CA0.
extern "C" void* __cdecl fn_00455BE0(void) {
    return &mem_00936CA0;
}

// [0x00457F50] sub_00457F50 (6 bytes)
// @name sub_00457F50
// @summary Returns address of global mem_00936F50.
extern "C" void* __cdecl fn_00457F50(void) {
    return &mem_00936F50;
}

// [0x00458200] sub_00458200 (11 bytes)
// @name sub_00458200
// @summary Destructor tail-call: restores vtable mem_0093712C and tail-calls base destructor sub_00454BA0.
extern "C" void __fastcall fn_00458200(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093712C;
    ext_00454BA0(self);
}

// [0x004584E0] sub_004584E0 (7 bytes)
// @name sub_004584E0
// @summary Stores address of mem_00937394 into field at offset +0x0.
extern "C" void __fastcall fn_004584E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937394;
}

// [0x00458690] sub_00458690 (8 bytes)
// @name sub_00458690
// @summary Member forwarding thunk: loads subobject pointer at +0x54 and tail-calls sub_004584B0.
extern "C" void __fastcall fn_00458690(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x54);
    ext_004584B0(delegate_obj);
}

// [0x004589E0] sub_004589E0 (6 bytes)
// @name sub_004589E0
// @summary Returns address of global mem_009375C8.
extern "C" void* __cdecl fn_004589E0(void) {
    return &mem_009375C8;
}

// [0x00459250] sub_00459250 (11 bytes)
// @name sub_00459250
// @summary Destructor tail-call: restores vtable mem_00937924 and tail-calls base destructor sub_0043BBD0.
extern "C" void __fastcall fn_00459250(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937924;
    ext_0043BBD0(self);
}

// [0x004592F0] sub_004592F0 (11 bytes)
// @name sub_004592F0
// @summary Destructor tail-call: restores vtable mem_00937934 and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_004592F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937934;
    ext_004406C0(self);
}

// [0x004593A0] sub_004593A0 (11 bytes)
// @name sub_004593A0
// @summary Destructor tail-call: restores vtable mem_0093794C and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_004593A0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093794C;
    ext_004406C0(self);
}

// [0x0045B670] sub_0045B670 (6 bytes)
// @name sub_0045B670
// @summary Returns address of global mem_00937BEC.
extern "C" void* __cdecl fn_0045B670(void) {
    return &mem_00937BEC;
}

// [0x0045B6B0] sub_0045B6B0 (11 bytes)
// @name sub_0045B6B0
// @summary Destructor tail-call: restores vtable mem_00937D4C and tail-calls base destructor thunk_MFC80_ord_754.
extern "C" void __fastcall fn_0045B6B0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937D4C;
    ext_006A681A(self);
}

// [0x0045C2C0] sub_0045C2C0 (6 bytes)
// @name sub_0045C2C0
// @summary Returns address of global mem_00937E88.
extern "C" void* __cdecl fn_0045C2C0(void) {
    return &mem_00937E88;
}

// [0x0045E4B0] sub_0045E4B0 (6 bytes)
// @name sub_0045E4B0
// @summary Returns address of global mem_00937FC8.
extern "C" void* __cdecl fn_0045E4B0(void) {
    return &mem_00937FC8;
}

// [0x0045E920] sub_0045E920 (11 bytes)
// @name sub_0045E920
// @summary This-adjustor thunk: adjusts `this` by +0x258 and tail-calls sub_0045E700.
extern "C" void __fastcall fn_0045E920(void* self) {
    ext_0045E700(static_cast<char*>(self) + 0x258);
}

// [0x0045E930] sub_0045E930 (11 bytes)
// @name sub_0045E930
// @summary This-adjustor thunk: adjusts `this` by +0x258 and tail-calls sub_0045E690.
extern "C" void __fastcall fn_0045E930(void* self) {
    ext_0045E690(static_cast<char*>(self) + 0x258);
}

// [0x00455BB0] sub_00455BB0 (22 bytes)
namespace lift_00455BB0 {
extern void ext_00455B50();

// @name sub_00455BB0
// @summary Auto-lifted identical-shape clone of 0x004554C0 (MultiTrackView::Frame::vfunc_106).
void fn_00455BB0(void* self) {
    // The original tail-jumps (jmp) to ext_006A60D0; the portable form is a plain call followed by return.
    // Pointers are modeled as 32-bit handles (the target is a 32-bit binary).
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t target = *reinterpret_cast<uint32_t*>(base + 0x144);
    if (target == 0) {
        return;
    }
    // Inner object field at +0x20 (type unknown; field_0x20 by convention).
    auto* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(target));
    if (*reinterpret_cast<uint32_t*>(obj + 0x20) != 0) {
        ext_00455B50();
    }
}
} // namespace lift_00455BB0

// [0x004584B0]
namespace lift_004584B0 {
// @name forwardVirtualSlot3
// @summary Tail-call virtual method at vtable +0xC on member pointer at +0x10
// @field Class +0x10 uint32_t field_0x10


extern uint32_t mem_read32(uint32_t addr);

uint32_t __fastcall sub_004584B0(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t obj = mem_read32(ecx + 0x10);
    uint32_t vtable = mem_read32(obj);
    uint32_t fn_addr = mem_read32(vtable + 0xC);
    using fn_t = uint32_t(__fastcall*)(uint32_t, uint32_t);
    return reinterpret_cast<fn_t>(static_cast<uintptr_t>(fn_addr))(obj, 0);
}
} // namespace lift_004584B0

// [0x004584A0]
namespace lift_004584A0 {
// @name forwardVtableSlot5
// @summary Tail-calls virtual method at vtable offset 0x14 on member at +0x10
// @field unknown +0x10 void* field_0x10


extern uint32_t mem_read32(uint32_t addr);

void sub_004584A0(uint32_t self) {
    uint32_t inner = mem_read32(self + 0x10);
    uint32_t vtable = mem_read32(inner);
    uint32_t fn = mem_read32(vtable + 0x14);
    using Fn = void (*)(uint32_t);
    reinterpret_cast<Fn>(static_cast<uintptr_t>(fn))(inner);
}
} // namespace lift_004584A0

// [0x00454E70] sub_00454E70 (13 bytes)
namespace lift_00454E70 {
// @name ZeroThreeDwordFields_00454E70
// @summary Zeroes the dwords at self+0x0, self+0x4 and self+0x10 and returns self (thiscall, self in ECX).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x10 uint32_t field_0x10
void* fn_00454E70(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    return self;
}
} // namespace lift_00454E70

// [0x0045BBE0]
namespace lift_0045BBE0 {
extern int16_t ext_GetKeyState(int32_t nVirtKey);
extern uint32_t mem_009255F4;

// @name isVkControlDown
// @summary Returns 1 if the Ctrl virtual key (VK_CONTROL, 0x11) is currently held down, else 0.
// (no class / field accesses)
uint32_t fn_0045BBE0() {
    // GetKeyState(VK_CONTROL); the high bit of the returned SHORT is the "key down" flag.
    const uint16_t state = static_cast<uint16_t>(ext_GetKeyState(0x11));
    return static_cast<uint32_t>(state) >> 15;
}
} // namespace lift_0045BBE0
