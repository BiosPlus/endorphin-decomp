// Lifted C++ translation unit: lifted/leaf/decompiled_710000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00712F60(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>

// [0x00712F40] sub_00712F40 (32 bytes)
// @name sub_00712F40
// @summary MSVC scalar deleting destructor: calls sub_00712F60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00712F40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00712F60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00713750] sub_00713750 (12 bytes)
namespace lift_00713750 {
// @name sub_00713750
// @summary Auto-lifted identical-shape clone of 0x006D2CA0 (forwardMem006D2CB0_006D2CA0).
namespace lift_006D2CA0 {
extern uint32_t ext_006A6C87(uint32_t arg);
extern int mem_00713760;

// @name forwardMem006D2CB0_006D2CA0
// @summary Pushes the address of mem_006D2CB0 as a single cdecl argument, calls sub_006A6C87, and returns its result unchanged.
uint32_t fn_00713750() {
    const uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00713760));
    return ext_006A6C87(arg);
}
} // namespace lift_006D2CA0
} // namespace lift_00713750

// [0x00713810] sub_00713810 (12 bytes)
namespace lift_00713810 {
// @name sub_00713810
// @summary Auto-lifted identical-shape clone of 0x006D2CA0 (forwardMem006D2CB0_006D2CA0).
namespace lift_006D2CA0 {
extern uint32_t ext_006A6C87(uint32_t arg);
extern int mem_00713820;

// @name forwardMem006D2CB0_006D2CA0
// @summary Pushes the address of mem_006D2CB0 as a single cdecl argument, calls sub_006A6C87, and returns its result unchanged.
uint32_t fn_00713810() {
    const uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00713820));
    return ext_006A6C87(arg);
}
} // namespace lift_006D2CA0
} // namespace lift_00713810

// [0x00714570] sub_00714570 (16 bytes)
namespace lift_00714570 {
// @name sub_00714570
// @summary Auto-lifted identical-shape clone of 0x006B9D10 (Unknown::InitAndReturnSelf).
namespace lift_006B9D10 {
// @name Unknown::InitAndReturnSelf
// @class Unknown
// @summary Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.

class Unknown;

// External callee: sub_006B9910 (Unknown::sub_006B9910), __thiscall-style, takes this in ecx.
extern void ext_00714580(Unknown* ecx);

// Lifted from 0x006B9D10: push esi; mov esi, ecx; call sub_006B9910; mov eax, esi; pop esi; ret
Unknown* fn_00714570(Unknown* ecx) {
    Unknown* esi = ecx;
    ext_00714580(ecx);
    return esi;
}
} // namespace lift_006B9D10
} // namespace lift_00714570

// [0x00711BA0]
namespace lift_00711BA0 {
// @name getSubobjectField_0x18
// @summary Calls fn_0071E680 on self and returns the double at offset +0x18 of the returned subobject.
// @field Subobject +0x18 double field_0x18


extern void* __fastcall fn_0071E680(void* self);

extern double __fastcall fn_00711BA0(void* self) {
    void* sub = fn_0071E680(self);
    return *reinterpret_cast<const double*>(static_cast<const uint8_t*>(sub) + 0x18);
}
} // namespace lift_00711BA0

// [0x00711BB0] sub_00711BB0 (16 bytes)
namespace lift_00711BB0 {
// @name sub_00711BB0
// @summary Auto-lifted identical-shape clone of 0x00711BA0 (getSubobjectField_0x18).
namespace lift_00711BA0 {
// @name getSubobjectField_0x18
// @summary Calls fn_0071E680 on self and returns the double at offset +0x18 of the returned subobject.
// @field Subobject +0x18 double field_0x18


extern void* __fastcall fn_0071E680(void* self);

extern double __fastcall fn_00711BB0(void* self) {
    void* sub = fn_0071E680(self);
    return *reinterpret_cast<const double*>(static_cast<const uint8_t*>(sub) + 0x20);
}
} // namespace lift_00711BA0
} // namespace lift_00711BB0

// [0x00711FD0]
namespace lift_00711FD0 {
// @name getSubobjectField_0x40_0x08
// @summary Calls fn_0071E680(self) and returns the 32-bit value at offset +0x08 of the returned pointer.
// @field Subobject +0x08 uint32_t field_0x08


extern void* __fastcall ext_0071E680(void* self);

extern uint32_t __fastcall fn_00711FD0(void* self) {
    uint8_t* subobj = static_cast<uint8_t*>(ext_0071E680(self));
    return *reinterpret_cast<const uint32_t*>(subobj + 0x08);
}
} // namespace lift_00711FD0

// [0x00711DB0]
namespace lift_00711DB0 {
extern void* __fastcall ext_0071E680(void* self);

// @name getSubobjectField28
// @summary Calls ext_0071E680 on self and returns the 32-bit field at offset +0x28 of the returned pointer.
extern uint32_t __fastcall fn_00711DB0(void* self) {
    uint8_t* subobj = static_cast<uint8_t*>(ext_0071E680(self));
    return *reinterpret_cast<const uint32_t*>(subobj + 0x28);
}
} // namespace lift_00711DB0

// [0x00712000]
namespace lift_00712000 {
// @name getSubobjectField_00712000
// @summary Calls fn_0071E680(self) and returns the uint32_t at offset +0x4 of the returned subobject.
// @field Subobject +0x04 uint32_t field_0x04

extern void* __fastcall ext_0071E680(void* self);

extern uint32_t __fastcall fn_00712000(void* self) {
    uint8_t* subobj = static_cast<uint8_t*>(ext_0071E680(self));
    return *reinterpret_cast<uint32_t*>(subobj + 0x4);
}
} // namespace lift_00712000

// [0x0071B010]
namespace lift_0071B010 {
extern uint32_t __thiscall ext_007873F0(void* self, uint32_t arg1);

// @name adjustThisAndForward_0071B010
// @summary Adjusts the this pointer by +0x10 and forwards the argument to sub_007873F0.
// @field unknown +0x10 uint8_t[] field_0x10
uint32_t __thiscall sub_0071B010(void* self, uint32_t arg1) {
    return ext_007873F0(reinterpret_cast<uint8_t*>(self) + 0x10, arg1);
}
} // namespace lift_0071B010

// [0x00712240] sub_00712240 (16 bytes)
namespace lift_00712240 {
// Known callee 0x00711DB0: getSubobjectField28 (Calls ext_0071E680 on self and returns the 32-bit field at offset +0x28 of the returned pointer.)
extern uint32_t __fastcall ext_00711DB0(void* self);
// Lookup table of u32 entries at 0x00AABF1C (first entry 0x00AAC034).
extern const uint32_t mem_00AABF1C[];

// @name getTableEntryBySubobjectField28
// @summary Returns mem_00AABF1C[getSubobjectField28(self)].
extern uint32_t __fastcall fn_00712240(void* self) {
    uint32_t index = ext_00711DB0(self);
    return mem_00AABF1C[index];
}
} // namespace lift_00712240

// [0x0071C330] sub_0071C330 (32 bytes)
namespace lift_0071C330 {
// @name sub_0071C330
// @summary Auto-lifted identical-shape clone of 0x007008F0 (Unknown::GetSubObjectValue).
namespace lift_007008F0 {
// Known callee 0x006B9950: sub_006B9950 (returns a bool-like flag in al; takes this in ecx)
extern uint8_t ext_006B9950(void* self);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t ext_006E7460(void* self);

// @name Unknown::GetSubObjectValue
// @class Unknown
// @summary Passes the embedded sub-object at +0x10 to a flag check; returns 0 if the flag is set, otherwise the sub-object's int32 getter value.
// @field Unknown +0x10 <embedded object> field_0x10
int32_t fn_0071C330(void* self) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x50;
    if (ext_006B9950(sub) != 0) {
        return 0;
    }
    return ext_006E7460(sub);
}
} // namespace lift_007008F0
} // namespace lift_0071C330

// [0x0071C2E0] sub_0071C2E0 (32 bytes)
namespace lift_0071C2E0 {
// @name sub_0071C2E0
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_0071C2E0(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x9C;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_0071C2E0

// [0x0071C6E0] sub_0071C6E0 (32 bytes)
namespace lift_0071C6E0 {
// @name sub_0071C6E0
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_0077FD70(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_0071C6E0(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0xF0;
    return ext_0077FD70(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_0071C6E0

// [0x00714880] sub_00714880 (32 bytes)
namespace lift_00714880 {
// @name CopyFirstThreeBytesOut
// @summary Copies the first three bytes at src (ecx) to three caller-supplied byte destinations (stdcall, ret 0xC).
void fn_00714880(const BYTE* src /* ecx */, BYTE* dst0 /* [esp+4] */, BYTE* dst1 /* [esp+8] */, BYTE* dst2 /* [esp+0xC] */) {
    dst0[0] = src[0];
    dst1[0] = src[1];
    dst2[0] = src[2];
}
} // namespace lift_00714880

// [0x00711D20] sub_00711D20 (32 bytes)
namespace lift_00711D20 {
// @name Unknown::TestMaskedFieldAt0x78
// @class Unknown
// @summary Returns true when (this->field_0x78 & mask) is nonzero, else false.
// @field Unknown +0x78 DWORD field_0x78
bool fn_00711D20(void* self, DWORD mask) {
    const DWORD field = *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x78);
    return (field & mask) != 0;
}
} // namespace lift_00711D20

// [0x00711DC0] sub_00711DC0 (32 bytes)
namespace lift_00711DC0 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);

// @name Unknown::SetSubObjectAt0x0C
// @class Unknown
// @summary Fetches the subobject via ext_0071E680(self) and stores the stack argument at its +0x0C.
// @field Unknown +0x0C uint32_t field_0x0C (accessed on the subobject returned by ext_0071E680)
extern void __fastcall fn_00711DC0(void* self, uint32_t value) {
    uint8_t* sub = static_cast<uint8_t*>(ext_0071E680(self));
    *reinterpret_cast<uint32_t*>(sub + 0x0C) = value;
}
} // namespace lift_00711DC0

// [0x00711A20] sub_00711A20 (32 bytes)
namespace lift_00711A20 {
// @name Unknown::CompareArgWithSubObjectField
// @class Unknown
// @summary Returns 1 if the stack argument differs from the first DWORD of the subobject at self+0x40, else 0.
// @field Unknown +0x00 uint32_t field_0x00 (on subobject returned by ext_0071E680, i.e. self+0x40)

extern void* __fastcall ext_0071E680(void* self);

extern uint8_t __thiscall fn_00711A20(void* self, uint32_t arg) {
    // Call sub-object getter (ecx = self passed through), then compare arg
    // against the DWORD at the start of the returned subobject.
    uint32_t* sub = static_cast<uint32_t*>(ext_0071E680(self));
    uint32_t field = *sub;
    return static_cast<uint8_t>(arg != field);
}
} // namespace lift_00711A20

// [0x00711BC0] sub_00711BC0 (32 bytes)
namespace lift_00711BC0 {
// @name Unknown::InvokeSubObjectSlot0
// @class Unknown
// @summary Loads the sub-object at this+0x8; if it is null returns 0, otherwise calls its vtable slot 0 with (0, 0x98ABD146) and returns the result.
// @field Unknown +0x08 void* subObject
DWORD fn_00711BC0(void* self) {
    void* sub = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x8);
    if (sub == nullptr) {
        return 0;
    }
    // Virtual call: vtable pointer is at sub+0, slot 0 is the first entry.
    void* const* vtable = *reinterpret_cast<void* const* const*>(sub);
    using Slot0Fn = DWORD (__thiscall*)(void* self, DWORD arg0, DWORD arg1);
    Slot0Fn fn = reinterpret_cast<Slot0Fn>(vtable[0]);
    return fn(sub, 0, 0x98ABD146u);
}
} // namespace lift_00711BC0

// [0x007148A0] sub_007148A0 (32 bytes)
namespace lift_007148A0 {
// @name Unknown::SetThreeByteFields
// @class Unknown
// @summary Stores three byte arguments into this object at +0x03, +0x04 and +0x05 (callee pops 12 bytes).
// @field Unknown +0x03 uint8_t field_0x03
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x05 uint8_t field_0x05
void fn_007148A0(void* self, uint8_t arg0, uint8_t arg1, uint8_t arg2) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    obj[0x03] = arg0;
    obj[0x04] = arg1;
    obj[0x05] = arg2;
}
} // namespace lift_007148A0

// [0x007148C0] sub_007148C0 (32 bytes)
namespace lift_007148C0 {
// @name Unknown::CopyBytes3To5Out
// @class Unknown
// @summary Copies object bytes +0x03, +0x04, +0x05 to three caller-supplied BYTE* out-pointers (thiscall, ret 0xC).
// @field Unknown +0x03 BYTE field_0x03
// @field Unknown +0x04 BYTE field_0x04
// @field Unknown +0x05 BYTE field_0x05
void fn_007148C0(void* self, BYTE* out0, BYTE* out1, BYTE* out2) {
    *out0 = lift_field<BYTE>(self, 0x03);
    *out1 = lift_field<BYTE>(self, 0x04);
    *out2 = lift_field<BYTE>(self, 0x05);
}
} // namespace lift_007148C0

// [0x00714920] sub_00714920 (32 bytes)
namespace lift_00714920 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006D2390(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x08) as its stack argument, then returns arg.
// @field Unknown +0x08 BYTE field_0x08
void* fn_00714920(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x08);
    ext_006D2390(arg, sub_addr);
    return arg;
}
} // namespace lift_00714920
