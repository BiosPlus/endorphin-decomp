// Lifted C++ translation unit: lifted/leaf/tiny_4C0000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;
#include <cstdint>

// [0x004C0EA0] sub_004C0EA0 (8 bytes)
// @name sub_004C0EA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x170.
extern "C" void __fastcall fn_004C0EA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x170);
    target(self);
}

// [0x004C0FE0] sub_004C0FE0 (8 bytes)
// @name sub_004C0FE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x114.
extern "C" void __fastcall fn_004C0FE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x114);
    target(self);
}

// [0x004C1710] sub_004C1710 (8 bytes)
// @name sub_004C1710
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x110.
extern "C" void __fastcall fn_004C1710(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x110);
    target(self);
}

// [0x004C6F50] sub_004C6F50 (12 bytes)
// @name sub_004C6F50
// @summary This-adjustor thunk: adjusts `this` by +0x180 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_004C6F50(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x180);
}

// [0x004CA560] sub_004CA560 (8 bytes)
// @name sub_004CA560
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x160.
extern "C" void __fastcall fn_004CA560(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x160);
    target(self);
}

// [0x004CE570] sub_004CE570 (13 bytes)
// @name sub_004CE570
// @summary Setter storing float argument into field at offset +0x18C.
extern "C" void __fastcall fn_004CE570(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x18C) = value;
}

// [0x004C4DC0] sub_004C4DC0 (10 bytes)
namespace lift_004C4DC0 {
// @name sub_004C4DC0
// @summary Auto-lifted identical-shape clone of 0x006B0480 (GWCCategoryWithButtonsItem::vfunc_11).
namespace lift_006B0480 {
extern uint32_t mem_read32(uint32_t addr);

// @name GWCCategoryWithButtonsItem::vfunc_11
// @class GWCCategoryWithButtonsItem
// @summary Tail-call virtual dispatch to vtable slot 10 (+0x28) on this.
// @field GWCCategoryWithButtonsItem +0x00 uint32_t vtable
void __thiscall fn_004C4DC0(uint32_t ecx) {
    uint32_t vtable = mem_read32(ecx);
    uint32_t target = mem_read32(vtable + 0x114);
    typedef void (__thiscall *vfunc_t)(uint32_t);
    ((vfunc_t)(uintptr_t)target)(ecx);
}
} // namespace lift_006B0480
} // namespace lift_004C4DC0

// [0x004CA300] sub_004CA300 (10 bytes)
namespace lift_004CA300 {
// @name sub_004CA300
// @summary Auto-lifted identical-shape clone of 0x006B0480 (GWCCategoryWithButtonsItem::vfunc_11).
namespace lift_006B0480 {
extern uint32_t mem_read32(uint32_t addr);

// @name GWCCategoryWithButtonsItem::vfunc_11
// @class GWCCategoryWithButtonsItem
// @summary Tail-call virtual dispatch to vtable slot 10 (+0x28) on this.
// @field GWCCategoryWithButtonsItem +0x00 uint32_t vtable
void __thiscall fn_004CA300(uint32_t ecx) {
    uint32_t vtable = mem_read32(ecx);
    uint32_t target = mem_read32(vtable + 0x140);
    typedef void (__thiscall *vfunc_t)(uint32_t);
    ((vfunc_t)(uintptr_t)target)(ecx);
}
} // namespace lift_006B0480
} // namespace lift_004CA300

// [0x004C0340]
namespace lift_004C0340 {
// @name SetGlobalObjectFlag4IfPresent
// @summary If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.

extern uint8_t* mem_00AE29D0;

// @field Unknown +0x04 uint8_t field_0x04

void fn_004C0340() {
    uint8_t* obj = mem_00AE29D0;
    if (obj != nullptr) {
        obj[0x04] = 1;
    }
}
} // namespace lift_004C0340

// [0x004CCAF0] sub_004CCAF0 (16 bytes)
namespace lift_004CCAF0 {
// @name sub_004CCAF0
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_004CC720(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_004CCAF0(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x180);
    if (sub != 0) {
        ext_004CC720(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_004CCAF0

// [0x004CCB00] sub_004CCB00 (16 bytes)
namespace lift_004CCB00 {
// @name sub_004CCB00
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_004CC9E0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_004CCB00(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x180);
    if (sub != 0) {
        ext_004CC9E0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_004CCB00

// [0x004CB3E0]
namespace lift_004CB3E0 {
// @name Unknown::GetFieldOr0x188Address
// @class Unknown
// @summary Returns (cached field at +0x180) + 0x18 if non-null; otherwise returns the address of the embedded slot at +0x188.
// @field Unknown +0x180 DWORD field_0x180
// @field Unknown +0x188 DWORD field_0x188
DWORD fn_004CB3E0(void* self) {
    DWORD value = lift_field<DWORD>(self, 0x180);
    if (value != 0) {
        return value + 0x18;
    }
    // Address of the slot at +0x188 (lea, not a dereference).
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(self) + 0x188);
}
} // namespace lift_004CB3E0
