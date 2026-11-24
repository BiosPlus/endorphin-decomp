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

// [0x004CB400] sub_004CB400 (21 bytes)
namespace lift_004CB400 {
// @name Unknown::ResolveFieldOrOffset
// @class Unknown
// @summary Returns this+0x180 pointer advanced by 0x24 if non-null, else the address of this+0x194.
// @field Unknown +0x180 void* field_0x180
// @field Unknown +0x194 void* field_0x194
void* fn_004CB400(void* self) {
    void* p = lift_field<void*>(self, 0x180);
    if (p != nullptr) {
        return static_cast<uint8_t*>(p) + 0x24;
    }
    return static_cast<uint8_t*>(self) + 0x194;
}
} // namespace lift_004CB400

// [0x004CE810] sub_004CE810 (23 bytes)
namespace lift_004CE810 {
// Table of 28-byte records at 0x00AE5290.
extern uint8_t mem_00AE5290[];

// @name Unknown::GetRecordByIndex
// @summary Returns the address of record `index` in the 28-byte-stride table at 0x00AE5290 (stdcall, ret 4).
// (no @class / @field: the function touches no struct fields)
void* __stdcall fn_004CE810(uint32_t index) {
    // ecx = 8*eax - eax = 7*index; eax = 4*ecx + 0xAE5290 = 28*index + 0xAE5290
    return mem_00AE5290 + static_cast<size_t>(index) * 28u;
}
} // namespace lift_004CE810

// [0x004CA570] sub_004CA570 (31 bytes)
namespace lift_004CA570 {
extern void* mem_00AE29D0;

// @name Unknown::SetIndexClamped0To4
// @class Unknown
// @summary Stores arg if it is in 0..4 into this+0x184, then sets byte +4 of the global object at mem_00AE29D0 (if non-null) to 1.
// @field Unknown +0x184 DWORD field_0x184
void __thiscall fn_004CA570(void* self, DWORD value) {
    if (value > 4) {
        return;
    }
    lift_field<DWORD>(self, 0x184) = value;
    void* obj = mem_00AE29D0;
    if (obj != nullptr) {
        lift_field<BYTE>(obj, 4) = 1;
    }
}
} // namespace lift_004CA570
