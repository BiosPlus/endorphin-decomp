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

// [0x0071B020] sub_0071B020 (32 bytes)
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006D2390(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_0071B020(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x10);
    ext_006D2390(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020

// [0x00714950] sub_00714950 (32 bytes)
namespace lift_00714950 {
// @name sub_00714950
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006D2390(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_00714950(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x28);
    ext_006D2390(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_00714950

// [0x0071B050] sub_0071B050 (32 bytes)
namespace lift_0071B050 {
// @name sub_0071B050
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006D2390(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_0071B050(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x30);
    ext_006D2390(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_0071B050

// [0x00711A60] sub_00711A60 (16 bytes)
namespace lift_00711A60 {
// Known callee 0x00711A20: Unknown::CompareArgWithSubObjectField (Returns 1 if the stack argument differs from the first DWORD of the subobject at self+0x40, else 0.)
extern uint8_t ext_00711A20(void* self, uint32_t arg);

// @name Unknown::CompareOneWithSubObjectField
// @class Unknown
// @summary Forwards the constant 1 to CompareArgWithSubObjectField and returns its result.
uint8_t fn_00711A60(void* self) {
    // push 1; call 0x00711A20; ret  -- callee cleans its stack argument (thiscall),
    // so the caller's stack is unchanged and AL carries the callee's result.
    return ext_00711A20(self, 1u);
}
} // namespace lift_00711A60

// [0x00711A40] sub_00711A40 (16 bytes)
namespace lift_00711A40 {
// Known callee 0x00711A20: Unknown::CompareArgWithSubObjectField (Returns 1 if the stack argument differs from the first DWORD of the subobject at self+0x40, else 0.)
extern uint8_t __thiscall ext_00711A20(void* self, uint32_t arg);

// @name Unknown::CompareArgWithConst8
// @class Unknown
// @summary Compares the constant 8 against the subobject at self+0x40 via ext_00711A20 and returns its result.
// @field Unknown +0x40 void* subObject
extern uint8_t __thiscall fn_00711A40(void* self) {
    return ext_00711A20(self, 8u);
}
} // namespace lift_00711A40

// [0x00711A90] sub_00711A90 (16 bytes)
namespace lift_00711A90 {
// Known callee 0x00711D20: Unknown::TestMaskedFieldAt0x78 (Returns true when (this->field_0x78 & mask) is nonzero, else false.)
extern bool ext_00711D20(void* self, DWORD mask);

// @name Unknown::TestFlag0x08At0x78
// @class Unknown
// @summary Tests bit 0x08 of the flags word at this+0x78 by tail-forwarding to TestMaskedFieldAt0x78 and returns its result.
bool fn_00711A90(void* self) {
    return ext_00711D20(self, 0x8u);
}
} // namespace lift_00711A90

// [0x00711A80] sub_00711A80 (16 bytes)
namespace lift_00711A80 {
// Known callee 0x00711A20: Unknown::CompareArgWithSubObjectField (Returns 1 if the stack argument differs from the first DWORD of the subobject at self+0x40, else 0.)
extern uint8_t ext_00711A20(void* self, uint32_t arg);

// @name Unknown::CompareSubObjectWith0x40
// @class Unknown
// @summary Forwards the constant 0x40 as the argument to CompareArgWithSubObjectField and returns its result.
uint8_t fn_00711A80(void* self) {
    return ext_00711A20(self, 0x40);
}
} // namespace lift_00711A80

// [0x00711A50] sub_00711A50 (16 bytes)
namespace lift_00711A50 {
// Known callee 0x00711A20: Unknown::CompareArgWithSubObjectField
// (Returns 1 if the stack argument differs from the first DWORD of the subobject at self+0x40, else 0.)
extern uint8_t ext_00711A20(void* self, uint32_t arg);

namespace lift_00711A50 {

// @name Unknown::CompareArgWithTwo
// @class Unknown
// @summary Calls 0x00711A20 with self as this and the constant 2 as its stack argument, returning that result.
uint8_t fn_00711A50(void* self) {
    return ext_00711A20(self, 2u);
}

} // namespace lift_00711A50
} // namespace lift_00711A50

// [0x0071C0E0] sub_0071C0E0 (32 bytes)
namespace lift_0071C0E0 {
// @name Unknown::StoreArgPairIntoSubObject
// @class Unknown
// @summary Stores two stack arguments into the sub-object at this+0x0C at offsets +0x2F8 and +0x2FC.
// @field Unknown +0x0C pointer field_0x0C
// @field Unknown +0x2F8 DWORD field_0x2F8 (on sub-object at this+0x0C)
// @field Unknown +0x2FC DWORD field_0x2FC (on sub-object at this+0x0C)
void fn_0071C0E0(uint8_t* self, DWORD arg0, DWORD arg1) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x0C);
    *reinterpret_cast<DWORD*>(sub + 0x2F8) = arg0;
    *reinterpret_cast<DWORD*>(sub + 0x2FC) = arg1;
}
} // namespace lift_0071C0E0

// [0x0071C480] sub_0071C480 (32 bytes)
namespace lift_0071C480 {
// @name Unknown::SetPairAtC_0xFD0
// @class Unknown
// @summary Thiscall with two stack args: stores arg1 and arg2 into the object at this->field_0x0C at offsets +0xFD0 and +0xFD4 (callee-cleans, ret 8).
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0xFD0 uint32_t field_0xFD0 (on the object pointed to by +0x0C)
// @field Unknown +0xFD4 uint32_t field_0xFD4 (on the object pointed to by +0x0C)
void __thiscall fn_0071C480(void* self, uint32_t arg1, uint32_t arg2) {
    auto* obj = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x0C);
    *reinterpret_cast<uint32_t*>(obj + 0xFD0) = arg1;
    *reinterpret_cast<uint32_t*>(obj + 0xFD4) = arg2;
}
} // namespace lift_0071C480

// [0x0071C3B0] sub_0071C3B0 (32 bytes)
namespace lift_0071C3B0 {
// @name Unknown::SetSubObjectPair1520
// @class Unknown
// @summary Loads the sub-object at this+0x0C and stores two stack arguments into its +0x1520/+0x1524 slots.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x1520 DWORD field_0x1520
// @field Unknown +0x1524 DWORD field_0x1524
void fn_0071C3B0(void* self, DWORD arg1, DWORD arg2) {
    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<DWORD>(sub, 0x1520) = arg1;
    lift_field<DWORD>(sub, 0x1524) = arg2;
}
} // namespace lift_0071C3B0

// [0x0071C8A0]
namespace lift_0071C8A0 {
// @name Unknown::IsSubObjectFlag0x18D8Clear
// @class Unknown
// @summary Returns 1 if the byte at subobject+0x18D8 is zero (subobject = this->+0x0C), else 0.
// @field Unknown +0x0C DWORD field_0x0C
// @field Unknown +0x18D8 BYTE field_0x18D8

int __thiscall sub_0071C8A0(void* self) {
    // mov eax, [ecx+0x0C]  -- 32-bit sub-object pointer
    DWORD sub = lift_field<DWORD>(self, 0x0C);

    // mov dl, [eax+0x18D8]; test dl, dl; sete cl
    BYTE flag = lift_field<BYTE>(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)), 0x18D8);

    return flag == 0 ? 1 : 0;
}
} // namespace lift_0071C8A0

// [0x0071C8E0] sub_0071C8E0 (32 bytes)
namespace lift_0071C8E0 {
// @name sub_0071C8E0
// @summary Auto-lifted identical-shape clone of 0x0071C3B0 (Unknown::SetSubObjectPair1520).
namespace lift_0071C3B0 {
// @name Unknown::SetSubObjectPair1520
// @class Unknown
// @summary Loads the sub-object at this+0x0C and stores two stack arguments into its +0x1520/+0x1524 slots.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x1520 DWORD field_0x1520
// @field Unknown +0x1524 DWORD field_0x1524
void fn_0071C8E0(void* self, DWORD arg1, DWORD arg2) {
    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<DWORD>(sub, 0x1C08) = arg1;
    lift_field<DWORD>(sub, 0x1C0C) = arg2;
}
} // namespace lift_0071C3B0
} // namespace lift_0071C8E0

// [0x0071C9B0] sub_0071C9B0 (32 bytes)
namespace lift_0071C9B0 {
// @name sub_0071C9B0
// @summary Auto-lifted identical-shape clone of 0x0071C3B0 (Unknown::SetSubObjectPair1520).
namespace lift_0071C3B0 {
// @name Unknown::SetSubObjectPair1520
// @class Unknown
// @summary Loads the sub-object at this+0x0C and stores two stack arguments into its +0x1520/+0x1524 slots.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x1520 DWORD field_0x1520
// @field Unknown +0x1524 DWORD field_0x1524
void fn_0071C9B0(void* self, DWORD arg1, DWORD arg2) {
    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<DWORD>(sub, 0x1AF8) = arg1;
    lift_field<DWORD>(sub, 0x1AFC) = arg2;
}
} // namespace lift_0071C3B0
} // namespace lift_0071C9B0

// [0x0071C9E0] sub_0071C9E0 (32 bytes)
namespace lift_0071C9E0 {
// @name sub_0071C9E0
// @summary Auto-lifted identical-shape clone of 0x0071C3B0 (Unknown::SetSubObjectPair1520).
namespace lift_0071C3B0 {
// @name Unknown::SetSubObjectPair1520
// @class Unknown
// @summary Loads the sub-object at this+0x0C and stores two stack arguments into its +0x1520/+0x1524 slots.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x1520 DWORD field_0x1520
// @field Unknown +0x1524 DWORD field_0x1524
void fn_0071C9E0(void* self, DWORD arg1, DWORD arg2) {
    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<DWORD>(sub, 0x1A70) = arg1;
    lift_field<DWORD>(sub, 0x1A74) = arg2;
}
} // namespace lift_0071C3B0
} // namespace lift_0071C9E0

// [0x0071F070] sub_0071F070 (32 bytes)
namespace lift_0071F070 {
// @name Unknown::StoreArgAndDispatchSlot2
// @class Unknown
// @summary Stores the stack argument at this+0x4, calls vtable slot 2 on this with that argument, and returns this+0x8.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 uint32_t field_0x04

typedef void(__thiscall* VSlot2Fn)(void* self, uint32_t arg);

// ecx = this; arg = first stack argument (__thiscall, callee-cleans, ret 4).
uint8_t* fn_0071F070(uint8_t* ecx, uint32_t arg) {
    uint8_t* self = ecx;
    *reinterpret_cast<uint32_t*>(self + 0x04) = arg;

    void** vtbl = *reinterpret_cast<void***>(self + 0x00);
    VSlot2Fn slot2 = reinterpret_cast<VSlot2Fn>(vtbl[2]);
    slot2(self, arg);

    return self + 0x08;
}
} // namespace lift_0071F070

// [0x0071A820]
namespace lift_0071A820 {
// @name sub_0071A820 (projectionModeToString)
// @summary Maps a projection mode index (0 or 1) to its name string; returns null for other values.
// @field none

extern const char mem_00AACA78[];  // "Perspective"
extern const char mem_00AACA84[];  // "Orthographic"

// stdcall, one stack argument (ret 4)
const char* sub_0071A820(uint32_t mode) {
    if (mode == 0) {
        return mem_00AACA78;
    }
    if (mode == 1) {
        return mem_00AACA84;
    }
    return nullptr;
}
} // namespace lift_0071A820

// [0x0071A790] sub_0071A790 (33 bytes)
namespace lift_0071A790 {
extern int mem_00AAC9F8;
extern int mem_00AACA10;

// @name GetInterestOrCameraRelativeLabel
// @summary Maps selector 0 to the "Relative to Interest" string address, 1 to "Relative to Camera", and any other value to 0.
// @field Unknown +0x00 uint32_t selector
// Stdcall, one DWORD argument, returns a DWORD (string address or 0).
uint32_t __stdcall fn_0071A790(uint32_t selector) {
    switch (selector) {
        case 0:
            // Address of mem_00AAC9F8 ("Relative to Interest").
            return 0x00AAC9F8u;
        case 1:
            // Address of mem_00AACA10 ("Relative to Camera").
            return 0x00AACA10u;
        default:
            return 0u;
    }
}
} // namespace lift_0071A790

// [0x0071A7F0] sub_0071A7F0 (33 bytes)
namespace lift_0071A7F0 {
extern int mem_00AACA54;
extern int mem_00AACA64;

// @name SafeAreaName
// @summary Maps a safe-area shape id (0 = round, 1 = square) to its display-name string; returns null for other ids.
void* fn_0071A7F0(int shape) {
    switch (shape) {
    case 0:
        return reinterpret_cast<void*>(&mem_00AACA54); // "Round Safe Area"
    case 1:
        return reinterpret_cast<void*>(&mem_00AACA64); // "Square Safe Area"
    default:
        return nullptr;
    }
}
} // namespace lift_0071A7F0

// [0x0071A850] sub_0071A850 (33 bytes)
namespace lift_0071A850 {
// @name sub_0071A850 (selectorToStringPtr)
// @summary Maps selector 0 or 1 to one of two static string pointers; returns null for other values.
// @field none

extern const char mem_00AACA94[];
extern const char mem_00AACAA4[];

// stdcall, one stack argument (ret 4)
const void* sub_0071A850(uint32_t selector) {
    if (selector == 0) {
        return mem_00AACA94;
    }
    if (selector == 1) {
        return mem_00AACAA4;
    }
    return nullptr;
}
} // namespace lift_0071A850

// [0x00713F30]
namespace lift_00713F30 {
extern uint32_t mem_read32(uint32_t addr);

// @name sub_00713F30
// @summary Maps an index (0..3) via jump table to one of three constant addresses, defaulting to 0x00AAC03C.
uint32_t __stdcall sub_00713F30(uint32_t arg0) {
    if (arg0 > 3u) {
        return 0x00AAC03Cu;
    }
    switch (mem_read32(0x00713F58u + arg0 * 4u)) {
    case 0x00713F40u:
        return 0x00AAC224u;
    case 0x00713F48u:
        return 0x00AAC220u;
    default:
        return 0x00AAC03Cu;
    }
}
} // namespace lift_00713F30

// [0x0071A760]
namespace lift_0071A760 {
extern const char mem_00AAC9D8[];
extern const char mem_00AAC9E4[];
extern const char mem_00AAC9EC[];

// @name getMediaModeString
// @summary Returns a display string for a media/display mode enum (0=Disabled, 1=Always, 2=When Media), or nullptr.
const char* __stdcall sub_0071A760(int32_t mode) {
    switch (mode) {
        case 0:
            return mem_00AAC9D8; // "Disabled"
        case 1:
            return mem_00AAC9E4; // "Always"
        case 2:
            return mem_00AAC9EC; // "When Media"
        default:
            return nullptr;
    }
}
} // namespace lift_0071A760

// [0x0071A7C0]
namespace lift_0071A7C0 {
// @name getLayerModeName
// @summary Maps a layer mode enum (0..2) to its display string ("Background", "Foreground", "Background & Forground") or null.


extern const char mem_00AACA24[];
extern const char mem_00AACA30[];
extern const char mem_00AACA3C[];

const char* __stdcall sub_0071A7C0(uint32_t mode) {
    switch (mode) {
        case 0:
            return mem_00AACA24;
        case 1:
            return mem_00AACA30;
        case 2:
            return mem_00AACA3C;
        default:
            return nullptr;
    }
}
} // namespace lift_0071A7C0

// [0x0071A5E0]
namespace lift_0071A5E0 {
// @name getOrientationString
// @summary Maps an orientation enum value (0..2) to its display string or nullptr.


extern const char mem_00AAC8B4[];
extern const char mem_00AAC8CC[];
extern const char mem_00AAC8D8[];

const char* __stdcall sub_0071A5E0(int32_t orientation) {
    switch (orientation) {
        case 0:
            return mem_00AAC8B4;
        case 1:
            return mem_00AAC8CC;
        case 2:
            return mem_00AAC8D8;
        default:
            return nullptr;
    }
}
} // namespace lift_0071A5E0

// [0x00711D40]
namespace lift_00711D40 {
// @name Unknown::storeArgsAndNotifyChild
// @class Unknown
// @summary Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.
// @field Unknown +0x04 uint32_t field_0x04 (on subobject returned by ext_0071E680, i.e. self+0x40)
// @field Unknown +0x10 uint32_t field_0x10 (on subobject returned by ext_0071E680, i.e. self+0x40)
// @field Unknown +0x14 uint32_t field_0x14 (on subobject returned by ext_0071E680, i.e. self+0x40)


extern void* __fastcall ext_0071E680(void* self);

void __thiscall sub_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
    void* sub = ext_0071E680(self);

    // arg2->vtable[0x50 / 4](self)
    uint32_t vtable = lift_field<uint32_t>(arg2, 0x00);
    uint32_t target = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x50);
    using VFunc = void(__thiscall*)(void*, void*);
    VFunc fn = reinterpret_cast<VFunc>(static_cast<uintptr_t>(target));
    fn(arg2, self);

    lift_field<uint32_t>(sub, 0x04) = arg1;
    lift_field<uint32_t>(sub, 0x10) = arg3;
    lift_field<uint32_t>(sub, 0x14) = arg4;
}
} // namespace lift_00711D40

// [0x00711CF0]
namespace lift_00711CF0 {
// @name SetOrClearFlags78
// @summary Sets (flag != 0) or clears (flag == 0) the bits in mask within the dword at +0x78.
// @field field_0x78 +0x78 uint32_t field_0x78 (bits set/cleared by mask)

struct SetOrClearFlags78Self {
    uint8_t pad_0000[0x78];
    uint32_t field_0x78;
};

// __thiscall: this in ecx, args (uint32_t mask, bool flag) on the stack, callee cleans (ret 8).
void SetOrClearFlags78(SetOrClearFlags78Self* self, uint32_t mask, uint8_t flag) {
    if (flag != 0) {
        self->field_0x78 |= mask;
    } else {
        self->field_0x78 &= ~mask;
    }
}
} // namespace lift_00711CF0

// [0x00710F80] sub_00710F80 (48 bytes)
namespace lift_00710F80 {
// @name UnknownBitfield::setOrClearBits
// @summary Sets (flag != 0) or clears (flag == 0) the bits in mask within the DWORD pointed to by target.
// @field <none> accessed directly through a raw DWORD pointer (ecx); no struct layout recovered.
// Original: __thiscall (target in ECX), stack args: mask, flag; callee cleans 8 bytes.
void setOrClearBits(DWORD* target, DWORD mask, BOOLEAN flag) {
    if (flag) {
        *target |= mask;
    } else {
        *target &= ~mask;
    }
}
} // namespace lift_00710F80
