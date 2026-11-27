// Lifted C++ translation unit: lifted/leaf/decompiled_710000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00712F60(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstdlib>
#include <cstddef>
#include <cstring>

#include <cstring>
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

// [0x00710F50] sub_00710F50 (48 bytes)
namespace lift_00710F50 {
// Imported CRT free() function pointer slot (MSVCR80!free).
extern void* mem_009251D8;

// @name ReleaseOwnedBuffers
// @class <unknown>
// @summary Frees the optional buffer at +0x04 (when flag 0x20 in byte +0x00 is set and it is non-null), then always frees the buffer at +0x08.
// @field <unknown> +0x00 uint8_t field_0x00
// @field <unknown> +0x04 void* field_0x04
// @field <unknown> +0x08 void* field_0x08
void fn_00710F50(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    auto free_fn = reinterpret_cast<void (*)(void*)>(mem_009251D8);

    if (base[0x00] & 0x20) {
        void* first = *reinterpret_cast<void**>(base + 0x04);
        if (first != nullptr) {
            free_fn(first);
        }
    }

    void* second = *reinterpret_cast<void**>(base + 0x08);
    free_fn(second);
}
} // namespace lift_00710F50

// [0x007148E0] sub_007148E0 (48 bytes)
namespace lift_007148E0 {
// @name HasAnyNonZeroByteInFirst6
// @class Unknown
// @summary Returns 1 if any of the six bytes at self[0..5] is nonzero, otherwise 0.
// @field Unknown +0x00 uint8_t field_0x00
// @field Unknown +0x01 uint8_t field_0x01
// @field Unknown +0x02 uint8_t field_0x02
// @field Unknown +0x03 uint8_t field_0x03
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x05 uint8_t field_0x05
uint8_t fn_007148E0(void* self) {
    const uint8_t* bytes = static_cast<const uint8_t*>(self);
    for (ptrdiff_t i = 0; i < 6; ++i) {
        if (lift_field<uint8_t>(bytes, i) != 0) {
            return 1;
        }
    }
    return 0;
}
} // namespace lift_007148E0

// [0x00711D70] sub_00711D70 (48 bytes)
namespace lift_00711D70 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);

// @name Subobject::setField04AndField28
// @summary Stores arg1 at Subobject +0x04 and arg2 at Subobject +0x28, both reached via ext_0071E680(self).
// @field Subobject +0x04 uint32_t field_0x04
// @field Subobject +0x28 uint32_t field_0x28
extern void __thiscall fn_00711D70(void* self, uint32_t a, uint32_t b) {
    uint8_t* sub = static_cast<uint8_t*>(ext_0071E680(self));
    *reinterpret_cast<uint32_t*>(sub + 0x04) = a;
    sub = static_cast<uint8_t*>(ext_0071E680(self));
    *reinterpret_cast<uint32_t*>(sub + 0x28) = b;
}
} // namespace lift_00711D70

// [0x00715BE0] sub_00715BE0 (48 bytes)
namespace lift_00715BE0 {
// @name copyBlock24
// @summary Copies a 24-byte (six dword) block from src to dst and returns dst.
// @field Block24 +0x00 uint32_t field_0x00
// @field Block24 +0x04 uint32_t field_0x04
// @field Block24 +0x08 uint32_t field_0x08
// @field Block24 +0x0C uint32_t field_0x0C
// @field Block24 +0x10 uint32_t field_0x10
// @field Block24 +0x14 uint32_t field_0x14
void* fn_00715BE0(void* dst, const void* src) {
    for (ptrdiff_t off = 0; off < 0x18; off += 4) {
        lift_field<uint32_t>(dst, off) = lift_field<uint32_t>(src, off);
    }
    return dst;
}
} // namespace lift_00715BE0

// [0x00715710] sub_00715710 (48 bytes)
namespace lift_00715710 {
extern void* ext_006C9610(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
extern const uint32_t mem_0092A278;

// @name Unknown::getFloatViaChain
// @class Unknown
// @summary If field +0xC == 2, follows the pointer at +0x4 through two helper calls and returns a float getter result; otherwise returns 0.0.
// @field Unknown +0x04 void* ptrToSubobject
// @field Unknown +0x0C int32_t tag
float fn_00715710(void* self) {
    auto& tag = lift_field<int32_t>(self, 0x0C);
    if (tag == 2) {
        void* inner = lift_field<void*>(self, 0x04);
        int32_t v = ext_006DC460(inner);
        void* r = ext_006C9610(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
        return ext_006C9F70(r);
    }
    // Fallthrough returns the 8-byte double at mem_0092A278, which is zero here.
    return 0.0f;
}
} // namespace lift_00715710

// [0x00715520] sub_00715520 (48 bytes)
namespace lift_00715520 {
// Virtual slots used by this function, called through the object's vtable.
typedef void (__thiscall* VSlot3Fn)(void* self);
typedef void (__thiscall* VSlot2Fn)(void* self, void* old);

// @name setFieldCAndReleaseField04
// @summary If value differs from +0x0C, store it; then if +0x04 is non-null, call vtbl[3](this) and vtbl[2](this, old).
// @field Subobject +0x04 void* field_0x04
// @field Subobject +0x0C uint32_t field_0x0C
void fn_00715520(void* self, uint32_t value) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t* fieldC = reinterpret_cast<uint32_t*>(base + 0x0C);
    if (value == *fieldC) {
        return;
    }

    void* old = *reinterpret_cast<void**>(base + 0x04);
    *fieldC = value;
    if (old == nullptr) {
        return;
    }

    void* const* vtbl = *reinterpret_cast<void* const* const*>(self);
    reinterpret_cast<VSlot3Fn>(vtbl[3])(self);
    vtbl = *reinterpret_cast<void* const* const*>(self);
    reinterpret_cast<VSlot2Fn>(vtbl[2])(self, old);
}
} // namespace lift_00715520

// [0x0071C700]
namespace lift_0071C700 {
// @name Unknown::copyBlock0xF0ToDst
// @class Unknown
// @summary Copies the 32-byte block at +0xF0 (8 dwords) into the caller-supplied buffer and returns that buffer. Caller's ECX is clobbered to 0 by the original code; not reproduced.
// @field Unknown +0xF0 uint32_t field_0xF0
// @field Unknown +0xF4 uint32_t field_0xF4
// @field Unknown +0xF8 uint32_t field_0xF8
// @field Unknown +0xFC uint32_t field_0xFC
// @field Unknown +0x100 uint32_t field_0x100
// @field Unknown +0x104 uint32_t field_0x104
// @field Unknown +0x108 uint32_t field_0x108
// @field Unknown +0x10C uint32_t field_0x10C


uint32_t* fn_0071C700(void* self, uint32_t* dst) {
    for (size_t i = 0; i < 8; ++i) {
        dst[i] = lift_field<uint32_t>(self, static_cast<ptrdiff_t>(0xF0 + i * 4));
    }
    return dst;
}
} // namespace lift_0071C700

// [0x007156B0] sub_007156B0 (48 bytes)
namespace lift_007156B0 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);
// Callee 0x006C9600: untyped 16-byte helper; takes its argument in ecx and returns eax.
// Signature is a guess: int32 in, uint32 out.
extern uint32_t ext_006C9600(int32_t arg);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// .rdata constant at 0x0092A278, read via `fld qword`, so treated as a double.
extern const double mem_0092A278;

// @name Unknown::getValueOrConstant
// @class Unknown
// @summary If field_0x0C == 2, forwards to ext_006DC460 and ext_006C9F70 via the value at field_0x04; otherwise returns the constant at mem_0092A278.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x0C int32_t field_0x0C
float fn_007156B0(void* self) {
    if (lift_field<int32_t>(self, 0x0C) == 2) {
        void* inner = lift_field<void*>(self, 0x04);
        int32_t v = ext_006DC460(inner);
        uint32_t w = ext_006C9600(v);
        return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(w)));
    }
    return static_cast<float>(mem_0092A278);
}
} // namespace lift_007156B0

// [0x0071C870] sub_0071C870 (48 bytes)
namespace lift_0071C870 {
// @name Unknown::setChildFlag18D8
// @class Unknown
// @summary Sets byte +0x18D8 of the object at this+0x0C to 1 when value==0 and to 0 when value==1; other values are ignored (stdcall, ret 4).
// @field Unknown +0x0C void* field_0x0C
extern void __fastcall fn_0071C870(void* self, int edx_unused, unsigned int value) {
    (void)edx_unused;
    uint8_t* child = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x0C);
    if (value == 0) {
        child[0x18D8] = 1;
    } else if (value == 1) {
        child[0x18D8] = 0;
    }
}
} // namespace lift_0071C870

// [0x007134C0]
namespace lift_007134C0 {
// @name LookupStaticAddress_007134C0
// @summary Maps an index 0..3 to one of four static addresses; any other index yields a fallback address.
// @field none (no class; no struct fields accessed)

// Returns a static VA selected by the single stack argument (stdcall, one arg).
// Indices 0..3 index a jump table at 0x007134F8; indices above 3 take the default path.
DWORD __stdcall LookupStaticAddress_007134C0(DWORD index) {
    switch (index) {
    case 0:  return 0x00AAC194u;
    case 1:  return 0x00AAC198u;
    case 2:  return 0x00AAC19Cu;
    case 3:  return 0x00AAC1C0u;
    default: return 0x00AAC03Cu;
    }
}
} // namespace lift_007134C0

// [0x00715360]
namespace lift_00715360 {
// @name get_string_by_index_00715360
// @summary Maps an index in [0, 3] to a static data address, or 0 if out of range.


uint32_t __stdcall sub_00715360(uint32_t index) {
    switch (index) {
        case 0: return 0x00aac34cu;
        case 1: return 0x00aac340u;
        case 2: return 0x00aac334u;
        case 3: return 0x00aac32cu;
        default: return 0u;
    }
}
} // namespace lift_00715360

// [0x007151C0]
namespace lift_007151C0 {
// @name CopyBlock6Dwords_0x270
// @summary Copies six consecutive uint32 fields (+0x270..+0x284) from self into the 24-byte out buffer.
// @field self +0x270 uint32_t field_0x270
// @field self +0x274 uint32_t field_0x274
// @field self +0x278 uint32_t field_0x278
// @field self +0x27C uint32_t field_0x27C
// @field self +0x280 uint32_t field_0x280
// @field self +0x284 uint32_t field_0x284
void fn_007151C0(void* self, void* out) {
    for (ptrdiff_t i = 0; i < 6; ++i) {
        const uint32_t v = lift_field<uint32_t>(self, 0x270 + i * 4);
        lift_field<uint32_t>(out, i * 4) = v;
    }
}
} // namespace lift_007151C0

// [0x00719BB0] sub_00719BB0 (60 bytes)
namespace lift_00719BB0 {
// @name Unknown::GetBlock738
// @class Unknown
// @summary Copies six consecutive DWORDs from this+0x738..this+0x74C into the caller-supplied output buffer.
// @field Unknown +0x738 DWORD field_0x738
// @field Unknown +0x73C DWORD field_0x73C
// @field Unknown +0x740 DWORD field_0x740
// @field Unknown +0x744 DWORD field_0x744
// @field Unknown +0x748 DWORD field_0x748
// @field Unknown +0x74C DWORD field_0x74C
void fn_00719BB0(void* self, void* out) {
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint8_t* dst = static_cast<uint8_t*>(out);

    for (size_t i = 0; i < 6; ++i) {
        DWORD v;
        std::memcpy(&v, src + 0x738 + i * 4, sizeof(v));
        std::memcpy(dst + i * 4, &v, sizeof(v));
    }
}
} // namespace lift_00719BB0

// [0x0071A580] sub_0071A580 (61 bytes)
namespace lift_0071A580 {
// @name GetStringTableEntryVA
// @summary Maps an index 0..4 to a fixed data-section VA constant; returns 0 for out-of-range indices.
DWORD fn_0071A580(DWORD index) {
    // Jump-table dispatch on index (cmp eax,4 / ja default). Each case loads a VA immediate.
    switch (index) {
        case 0:  return 0x00AAC8A8u;
        case 1:  return 0x00AAC89Cu;
        case 2:  return 0x00AAC888u;
        case 3:  return 0x00AAC870u;
        case 4:  return 0x00AAC858u;
        default: return 0u;
    }
}
} // namespace lift_0071A580

// [0x0071C210] sub_0071C210 (63 bytes)
namespace lift_0071C210 {
// @name ComputeAngleDegreesFromExtent
// @class Unknown
// @summary Returns atan(0.5 * scaled(a1 or a2) / a3) in degrees; a1 is scaled by 25.4 and by a double at this->field_0x0C->field_0xD28 unless field_0x0C->field_0x408 == 2, in which case a2 is scaled by 25.4 instead.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x0C->+0x408 int32_t field_0x408
// @field Unknown +0x0C->+0xD28 double field_0xD28

// Returns the angle in degrees (x87 ST0 in the original; returned as double here).
double fn_0071C210(void* self, double a1, double a2, double a3) {
    constexpr double kInchToMm = 25.4;
    constexpr double kHalf = 0.5;
    constexpr double kRadToDeg = 114.59155902616465;

    auto* base = static_cast<unsigned char*>(self);
    auto* sub = *reinterpret_cast<unsigned char**>(base + 0x0C);

    double x;
    if (*reinterpret_cast<int32_t*>(sub + 0x408) == 2) {
        x = a2 * kInchToMm;
    } else {
        x = a1 * kInchToMm * *reinterpret_cast<double*>(sub + 0xD28);
    }

    x = x / a3;
    x = x * kHalf;

    return std::atan2(x, 1.0) * kRadToDeg;
}
} // namespace lift_0071C210

// [0x00710F10] sub_00710F10 (64 bytes)
namespace lift_00710F10 {
// @name ResetState
// @class <unknown>
// @summary Zeroes the object's state fields, stores a constant at +0x04 and 0xFFFF at +0x30, and sets +0x24 to the bit pattern 0x40590000 (3.390625f).
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
// @field <unknown> +0x0C uint32_t field_0x0C
// @field <unknown> +0x10 uint32_t field_0x10
// @field <unknown> +0x14 uint32_t field_0x14
// @field <unknown> +0x18 uint32_t field_0x18
// @field <unknown> +0x1C uint32_t field_0x1C
// @field <unknown> +0x20 uint32_t field_0x20
// @field <unknown> +0x24 uint32_t field_0x24
// @field <unknown> +0x28 uint32_t field_0x28
// @field <unknown> +0x2C uint32_t field_0x2C
// @field <unknown> +0x30 uint16_t field_0x30
void fn_00710F10(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint32_t>(self, 0x04) = 0x00B5D2C0u;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint32_t>(self, 0x24) = 0x40590000u; // float 3.390625f
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
    lift_field<uint16_t>(self, 0x30) = 0xFFFFu;
}
} // namespace lift_00710F10

// [0x00715670] sub_00715670 (64 bytes)
namespace lift_00715670 {
// Known callee 0x006D2A30: returns its first argument unchanged.
extern void* __fastcall ext_006D2A30(void* self);

// @name Unknown::CopySixDwordsToSubobject
// @class Unknown
// @summary Passes src through ext_006D2A30 (identity), then copies six DWORDs from it into the block at this->field_0x10 + 0x398.
// @field Unknown +0x10 void* field_0x10
void fn_00715670(void* self, const void* src) {
    const DWORD* s = static_cast<const DWORD*>(ext_006D2A30(const_cast<void*>(src)));
    auto* base = static_cast<unsigned char*>(self);
    auto* sub = static_cast<unsigned char*>(*reinterpret_cast<void**>(base + 0x10));
    DWORD* d = reinterpret_cast<DWORD*>(sub + 0x398);
    for (int i = 0; i < 6; ++i) {
        d[i] = s[i];
    }
}
} // namespace lift_00715670

// [0x0071FC30] sub_0071FC30 (64 bytes)
namespace lift_0071FC30 {
// Known callee 0x00784750: EntryTable::getEntryValue (Sorts the entry table if dirty, optionally writes entry[idx].key to *outKey, and returns entry[idx].value (0 if idx is out of range).)
struct EntryTable {
    uint8_t  _pad0[4];
    int32_t  field_0x04;  // entry count, read as [this+0x04]
};
extern int32_t __thiscall ext_00784750(EntryTable* self, int32_t idx, uint32_t* outKey);
extern EntryTable* mem_00B5FFC0;

// @name EntryTable::FindValueByKey
// @class EntryTable
// @summary Scans the global entry table in index order, calling getEntryValue for each index until the returned key equals the requested key; returns that entry's value, or 0 if no entry matches.
// @field EntryTable +0x04 int32_t field_0x04
int32_t __cdecl fn_0071FC30(int32_t target) {
    EntryTable* table = mem_00B5FFC0;
    if (table == nullptr || table->field_0x04 <= 0) {
        return 0;
    }

    int32_t i = 0;
    for (;;) {
        // The key slot is seeded with the requested key; getEntryValue overwrites it with the entry's key.
        uint32_t key = static_cast<uint32_t>(target);
        int32_t value = ext_00784750(table, i, &key);
        if (static_cast<int32_t>(key) == target) {
            return value;
        }

        // Re-read the global table and bounds each iteration, as the original does.
        table = mem_00B5FFC0;
        ++i;
        if (i >= table->field_0x04) {
            break;
        }
    }
    return 0;
}
} // namespace lift_0071FC30

// [0x00712780] sub_00712780 (72 bytes)
namespace lift_00712780 {
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name Unknown::DispatchByFlag34
// @class Unknown
// @summary Invokes virtual slot 0xD0 on self, then forwards two stack args to ext_006FB690 if flag bit 0 at +0x34 is set, else to ext_006FB6B0; returns low byte.
// @field Unknown +0x34 uint8_t field_0x34
uint8_t fn_00712780(void* self, uint32_t arg1, uint32_t arg2) {
    // Virtual call through vtable slot 0xD0 (index 52), no arguments, result unused.
    void** vtbl = *reinterpret_cast<void***>(self);
    reinterpret_cast<void (*)(void*)>(vtbl[0xD0 / sizeof(void*)])(self);

    uint8_t flags = lift_field<uint8_t>(self, 0x34);
    uint32_t result;
    if (flags & 0x01) {
        result = ext_006FB690(self, arg1, arg2);
    } else {
        result = ext_006FB6B0(self, arg1, arg2);
    }
    return static_cast<uint8_t>(result & 0xFF);
}
} // namespace lift_00712780

// [0x0071C3E0] sub_0071C3E0 (80 bytes)
namespace lift_0071C3E0 {
// @name Unknown::SetPackedFlags
// @class Unknown
// @summary Unpacks the low four bits of a 32-bit argument into four byte flags in the sub-object at self+0x0C.
// @field Unknown +0x0C void* subObject
// @field Unknown +0x1278 uint8_t flag0 (sub-object-relative: *(self+0x0C) + 0x1278)
// @field Unknown +0x1388 uint8_t flag1 (sub-object-relative: *(self+0x0C) + 0x1388)
// @field Unknown +0x1410 uint8_t flag2 (sub-object-relative: *(self+0x0C) + 0x1410)
// @field Unknown +0x1300 uint8_t flag3 (sub-object-relative: *(self+0x0C) + 0x1300)
void fn_0071C3E0(void* self, uint32_t flags) {
    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<uint8_t>(sub, 0x1278) = static_cast<uint8_t>(flags & 1u);
    lift_field<uint8_t>(sub, 0x1388) = static_cast<uint8_t>((flags >> 1) & 1u);
    lift_field<uint8_t>(sub, 0x1410) = static_cast<uint8_t>((flags >> 2) & 1u);
    lift_field<uint8_t>(sub, 0x1300) = static_cast<uint8_t>((flags >> 3) & 1u);
}
} // namespace lift_0071C3E0

// [0x0071C430] sub_0071C430 (80 bytes)
namespace lift_0071C430 {
// @name Unknown::GetFlagBits4
// @class Unknown
// @summary Packs four byte-flags from a sub-object at self+0x0C into a 4-bit value (bit3..bit0).
// @field Unknown +0x0C void* inner
// @field Unknown +0x1278 uint8_t field_0x1278
// @field Unknown +0x1300 uint8_t field_0x1300
// @field Unknown +0x1388 uint8_t field_0x1388
// @field Unknown +0x1410 uint8_t field_0x1410
uint32_t fn_0071C430(void* self) {
    void* inner = lift_field<void*>(self, 0x0C);

    uint32_t result = 0;
    result |= (lift_field<uint8_t>(inner, 0x1300) != 0) ? 8u : 0u;
    result |= (lift_field<uint8_t>(inner, 0x1410) != 0) ? 4u : 0u;
    result |= (lift_field<uint8_t>(inner, 0x1388) != 0) ? 2u : 0u;
    result |= (lift_field<uint8_t>(inner, 0x1278) != 0) ? 1u : 0u;
    return result;
}
} // namespace lift_0071C430

// [0x0071C250]
namespace lift_0071C250 {
extern const double mem_00993C98;
extern const double mem_00993828;
extern const double mem_00996640;

// @name Unknown::ComputeScaledHalfAngleRatio
// @class Unknown
// @summary Returns 0.5 * x / tan(angle * pi/360), where x is arg2 * 25.4 when this->field_0x0C->field_0x408 == 2, otherwise arg0 * 25.4 * field_0x0C->field_0xD28.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x408 int32_t field_0x408
// @field Unknown +0xD28 double field_0xD28
extern double __thiscall fn_0071C250(void* self, double arg0, double arg1, double angleDeg) {
    void* obj = lift_field<void*>(self, 0x0C);

    double x;
    if (lift_field<int32_t>(obj, 0x408) == 2) {
        x = arg1 * mem_00996640;
    } else {
        x = arg0 * mem_00996640 * lift_field<double>(obj, 0xD28);
    }

    double halfTan = std::tan(angleDeg * mem_00993C98);
    return (x / halfTan) * mem_00993828;
}
} // namespace lift_0071C250

// [0x007155B0] sub_007155B0 (80 bytes)
namespace lift_007155B0 {
// Known callee 0x006D80A0: sub_006D80A0 (Empty function (returns immediately).)
extern void ext_006D80A0();

// @name storeThreeDoublesIntoSubobject
// @class unknown
// @summary Stores three double arguments into the subobject at self+0x10 (offsets +0x270, +0x278, +0x280), then calls the empty stub ext_006D80A0 with a pointer to the first argument.
// @field unknown +0x10 void* field_0x10
// @field unknown +0x270 double field_0x270
// @field unknown +0x278 double field_0x278
// @field unknown +0x280 double field_0x280
void fn_007155B0(void* self, double a, double b, double c) {
    unsigned char* sub = *reinterpret_cast<unsigned char**>(static_cast<unsigned char*>(self) + 0x10);
    *reinterpret_cast<double*>(sub + 0x270) = a;
    *reinterpret_cast<double*>(sub + 0x278) = b;
    *reinterpret_cast<double*>(sub + 0x280) = c;
    using StubFn = void(__thiscall*)(void*);
    reinterpret_cast<StubFn>(&ext_006D80A0)(&a);
}
} // namespace lift_007155B0

// [0x0071FCC0] sub_0071FCC0 (80 bytes)
namespace lift_0071FCC0 {
// Known callee 0x006DEEC0: sub_006DEEC0 (Getter returning int32_t field at offset +0x38.)
extern int32_t ext_006DEEC0(void* self);

// @name Unknown::AddDoubleArraysGated
// @class Unknown
// @summary If ext_006DEEC0(self) is nonzero, dst[0] = a[0] + b[0]; then dst[i] = a[i] + b[i] for i < count, where count = self->vtbl[5](self).
// @field Unknown +0x00 void* vtable
void fn_0071FCC0(void* self, double* dst, const double* a, const double* b) {
    if (ext_006DEEC0(self) != 0) {
        *dst = *a + *b;
    }

    // Virtual call through vtable slot 5 (byte offset 0x14 on the 32-bit target).
    void** vtbl = lift_field<void**>(self, 0);
    using CountFn = int32_t (*)(void*);
    const int32_t count = reinterpret_cast<CountFn>(vtbl[5])(self);

    for (int32_t i = 0; i < count; ++i) {
        dst[i] = a[i] + b[i];
    }
}
} // namespace lift_0071FCC0

// [0x00711B50] sub_00711B50 (80 bytes)
namespace lift_00711B50 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* ext_0071E680(void* self);

// @name Unknown::SetDoubleIfChanged
// @class Unknown
// @summary Writes a double into the subobject's +0x20 slot when it differs (ordered compare) from the argument, then calls virtual slot 15 on self; always returns true.
// @field Unknown +0x20 double field_0x20
extern bool fn_00711B50(void* self, double value) {
    // Signature of vtable slot 15 (called thiscall with six dword arguments).
    using NotifyFn = void (*)(void* self, uint32_t a1, uint32_t a2, void* a3,
                              uint32_t a4, uint32_t a5, uint32_t a6);

    void* sub = ext_0071E680(self);
    const double current = lift_field<double>(sub, 0x20);

    // fcomp + test C3: skip the write when equal or unordered (NaN).
    const bool ordered_unequal = (current < value) || (current > value);
    if (ordered_unequal) {
        void* sub2 = ext_0071E680(self);
        lift_field<double>(sub2, 0x20) = value;

        void** vtbl = *reinterpret_cast<void***>(self);
        auto notify = reinterpret_cast<NotifyFn>(vtbl[15]);
        notify(self, 0u, 0x1Fu, self, 0u, 0u, 0u);
    }
    return true;
}
} // namespace lift_00711B50

// [0x0071FC70]
namespace lift_0071FC70 {
// @name EntryTable_findKeyByValue
// @summary Scans the global EntryTable for an entry whose value equals searchValue; on match writes that entry's key to *outKey and returns 1, else 0.
// @field EntryTable +0x04 int32_t field_0x04

extern uint32_t mem_00B5FFC0;
extern uint32_t __thiscall ext_00784750(uint32_t self, int32_t idx, uint32_t* outKey);

extern uint8_t __cdecl fn_0071FC70(uint32_t* outKey, uint32_t searchValue) {
    if (mem_00B5FFC0 == 0 || searchValue == 0) {
        return 0;
    }

    for (int32_t i = 0;; ++i) {
        const uint32_t self = mem_00B5FFC0;
        void* table = reinterpret_cast<void*>(static_cast<uintptr_t>(self));
        if (i >= lift_field<int32_t>(table, 0x04)) {
            break;
        }

        uint32_t key = 0;
        const uint32_t value = ext_00784750(self, i, &key);
        if (value == searchValue) {
            *outKey = key;
            return 1;
        }
    }

    return 0;
}
} // namespace lift_0071FC70

// [0x00711B00] sub_00711B00 (80 bytes)
namespace lift_00711B00 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);

// @name Unknown::SetSubobjectDoubleIfChanged
// @class Unknown
// @summary Compares the double at +0x18 of the subobject at self+0x40 with the stack argument; if they differ (or are unordered), stores the argument there and dispatches vtable slot 15 of self. Always returns true.
// @field Unknown +0x00 void* field_0x00 (vtable pointer of self)
// @field Unknown +0x18 double field_0x18 (on subobject returned by ext_0071E680, i.e. self+0x40)
namespace {

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

using VSlot15Fn = void (*)(void* self_, uint32_t a0, uint32_t a1, void* a2,
                           uint32_t a3, uint32_t a4, uint32_t a5);

} // namespace

// The original pushes six dwords for the vtable call and relies on the callee to
// clean the stack. Its calling convention is not confirmed, so the signature above
// is a portable approximation; the argument values are preserved in order.
bool fn_00711B00(void* self, double value) {
    // call ext_0071E680(self) -> eax; fld qword [eax+0x18]; fcomp value
    void* const sub = ext_0071E680(self);
    const double current = *reinterpret_cast<double*>(static_cast<uint8_t*>(sub) + 0x18);

    // fcomp sets C3 on equal and on unordered; the jne skips the update in that case.
    const bool equalOrUnordered = !(current < value) && !(current > value);
    if (equalOrUnordered) {
        return true;
    }

    // Re-resolve the subobject, store the double at +0x18 (low dword to +0x18, high to +0x1c).
    void* const sub2 = ext_0071E680(self);
    *reinterpret_cast<double*>(static_cast<uint8_t*>(sub2) + 0x18) = value;

    // mov eax, [esi]; call [eax+0x3c]  -> vtable slot 15, pushed args (0, 0x1f, self, 0, 0, 0)
    const uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    const uint32_t slot15 = lift_field<uint32_t>(as_ptr(vtbl), 0x3c);
    auto fn = reinterpret_cast<VSlot15Fn>(static_cast<uintptr_t>(slot15));
    fn(self, 0u, 0x1fu, self, 0u, 0u, 0u);

    // mov al, 1
    return true;
}
} // namespace lift_00711B00

// [0x0071FD10] sub_0071FD10 (80 bytes)
namespace lift_0071FD10 {
// Known callee 0x006DEEC0: sub_006DEEC0 (Getter returning int32_t field at offset +0x38.)
extern int32_t __fastcall ext_006DEEC0(void* self);

// @name Unknown::AddGatedDoubleAndMulArray
// @summary If self->getFlag() is nonzero, out[0] = a[0] + b[0]; then for k in [0, count) out[k] = a[k] * b[k], where count = self->vtbl[+0x14](self).
void fn_0071FD10(void* self, double* out, const double* a, const double* b) {
    if (ext_006DEEC0(self) != 0) {
        *out = a[0] + b[0];
    }

    void* vtbl = lift_field<void*>(self, 0);
    void* slot = lift_field<void*>(vtbl, 0x14);
    int32_t count = reinterpret_cast<int32_t (*)(void*)>(slot)(self);

    for (int32_t k = 0; k < count; ++k) {
        out[k] = a[k] * b[k];
    }
}
} // namespace lift_0071FD10

// [0x00715770] sub_00715770 (32 bytes)
namespace lift_00715770 {
// Known callee 0x007155B0: sub_007155B0 (ext_007155B0). Receives `this` and a
// 32-byte argument block copied by value from the caller's source pointer.
extern void ext_007155B0(void* self, const uint32_t* args);

// @name Unknown::ForwardCopiedBlock
// @class Unknown
// @summary Copies 32 bytes from the source pointer into a local block and forwards it with self to ext_007155B0.
void fn_00715770(void* self, const void* src) {
    uint32_t block[8];
    std::memcpy(block, src, sizeof(block));
    ext_007155B0(self, block);
}
} // namespace lift_00715770

// [0x0071EFD0] sub_0071EFD0 (97 bytes)
namespace lift_0071EFD0 {
// Known callee 0x006D2130: uint32_t __thiscall sub_006D2130(self, arg1, arg2).
// Initializes a 20-byte embedded struct at self; arg1 = count (min 1) at +0x08, arg2 at +0x0C.
extern uint32_t ext_006D2130(void* self, int32_t arg1, uint32_t arg2);
// Known callee 0x0071F090: this-adjustor thunk (self += 8, tail-calls sub_006D2250).
extern void ext_0071F090(void* self);

// @name initEmbeddedListObject (0x0071EFD0)
// @summary Zeroes field +0x04, initializes the embedded 20-byte struct at +0x08 with count 16 and arg 4, links the self-pointer at +0x1C to +0x18, sets the vtable to 0x009967AC, calls the thunk on self, and returns self.
// @field field_0x00 uint32_t vtable (set to 0x009967AC)
// @field field_0x04 uint32_t field_0x04 (zeroed)
// @field field_0x08 uint8_t[20] embedded (initialized via ext_006D2130)
// @field field_0x1C uint32_t field_0x1C (address of base+0x18, 32-bit layout)
void* fn_0071EFD0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(self, 0x04) = 0;

    void* embedded = base + 0x08;
    ext_006D2130(embedded, 16, 4);

    // Stores a 32-bit address, matching the original 32-bit layout.
    lift_field<uint32_t>(self, 0x1C) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x18));

    lift_field<uint32_t>(self, 0x00) = 0x009967AC;

    ext_0071F090(self);

    return self;
}
} // namespace lift_0071EFD0

// [0x0071C630] sub_0071C630 (16 bytes)
namespace lift_0071C630 {
// @name sub_0071C630
// @summary Auto-lifted identical-shape clone of 0x007B2210 (Unknown::initAndReturnArg).
namespace lift_007B2210 {
// Known callee 0x006BA780: Unknown::InitAndReturnSelf (Zero-inits the object's fields, sets its vtable, and returns the same object pointer.)
extern void* ext_0071CE40(void* self);

// @name Unknown::initAndReturnArg
// @summary Forwards its single stack argument to ext_006BA780 (Unknown::InitAndReturnSelf) and returns that callee's result (stdcall, 4 bytes of args).
extern void* fn_0071C630(void* arg) {
    return ext_0071CE40(arg);
}
} // namespace lift_007B2210
} // namespace lift_0071C630

// [0x00712250]
namespace lift_00712250 {
extern const char* mem_00aabf1c[19];

// @name findStringIndex
// @summary Searches a 19-entry string table at 0x00aabf1c and returns the matching index, or 0 if not found.
int __cdecl sub_00712250(const char* str) {
    for (int i = 0; i < 19; ++i) {
        if (std::strcmp(str, mem_00aabf1c[i]) == 0) {
            return i;
        }
    }
    return 0;
}
} // namespace lift_00712250

// [0x00711AA0]
namespace lift_00711AA0 {
// @name sub_00711AA0
// @summary Updates two double fields on the +0x40 subobject if changed and notifies via vtable +0x3C.
// @field Subobject +0x18 double field_0x18
// @field Subobject +0x20 double field_0x20


extern void* __fastcall ext_0071E680(void* self);

extern uint8_t __thiscall fn_00711AA0(void* self, double val1, double val2) {
    uint8_t* subobj = static_cast<uint8_t*>(ext_0071E680(self));
    double cur1 = 0.0;
    double cur2 = 0.0;
    std::memcpy(&cur1, subobj + 0x18, sizeof(double));
    std::memcpy(&cur2, subobj + 0x20, sizeof(double));

    if (cur1 != val1 || cur2 != val2) {
        std::memcpy(subobj + 0x18, &val1, sizeof(double));
        std::memcpy(subobj + 0x20, &val2, sizeof(double));

        using NotifyFn = void(__thiscall*)(void*, uint32_t, uint32_t, void*, uint32_t, uint32_t, uint32_t);
        uintptr_t vtable = 0;
        std::memcpy(&vtable, self, sizeof(uintptr_t));
        uintptr_t fn_addr = 0;
        std::memcpy(&fn_addr, reinterpret_cast<const void*>(vtable + 0x3C), sizeof(uintptr_t));
        NotifyFn notify = reinterpret_cast<NotifyFn>(fn_addr);
        notify(self, 0, 0x1F, self, 0, 0, 0);
    }

    return 1;
}
} // namespace lift_00711AA0

// [0x00712FC0]
namespace lift_00712FC0 {
// @name lookupTriggerOrGlobal
// @summary Returns mem_00AAC0A0 if name is "Trigger", otherwise looks up name in mem_00B5FA68 via ext_00782E70.

extern const char mem_00AAC13C[];
extern uint32_t mem_00AAC0A0;
extern void* mem_00B5FA68;

extern uint32_t __thiscall ext_00782E70(void* self, uint32_t key, int32_t* outIndex);

uint32_t fn_00712FC0(const char* name) {
    if (std::strcmp(name, mem_00AAC13C) == 0) {
        return mem_00AAC0A0;
    }
    return ext_00782E70(mem_00B5FA68, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(name)), nullptr);
}
} // namespace lift_00712FC0

// [0x00715450]
namespace lift_00715450 {
// @name sub_00715450
// @summary Destructor that resets vtable, invokes virtual method +0x4(0) on field_0x10, and calls base destructor ext_0077FA20.
// @field sub_00715450 +0x00 void* vtable
// @field sub_00715450 +0x10 void* field_0x10


extern uint8_t mem_009962E0;
extern void __fastcall ext_0077FA20(void* self);

extern void __fastcall fn_00715450(void* self) {
    *reinterpret_cast<void**>(self) = &mem_009962E0;

    void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x10);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VirtFn = void(__thiscall*)(void*, int);
    reinterpret_cast<VirtFn>(vtable[1])(obj, 0);

    ext_0077FA20(self);
}
} // namespace lift_00715450

// [0x0071B780]
namespace lift_0071B780 {
// @name scaleByClampedRatio
// @summary Divides a double by the ratio of two unsigned 32-bit integers clamped to at least 1.
double __stdcall sub_0071B780(uint32_t num, uint32_t den, double value) {
    uint32_t clampedNum = (num >= 1u) ? num : 1u;
    uint32_t clampedDen = (den >= 1u) ? den : 1u;
    double ratio = static_cast<double>(clampedNum) / static_cast<double>(clampedDen);
    return value / ratio;
}
} // namespace lift_0071B780

// [0x0071A610] sub_0071A610 (101 bytes)
namespace lift_0071A610 {
// @name GetIndexedStaticAddress
// @summary Returns a fixed static address selected by index 0..10; returns 0 for any other index.
extern void* __stdcall fn_0071A610(unsigned int a1) {
    switch (a1) {
    case 0:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC924u));
    case 1:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC91Cu));
    case 2:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AA91F0u));
    case 3:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC914u));
    case 4:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC910u));
    case 5:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC908u));
    case 6:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC900u));
    case 7:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC8F8u));
    case 8:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC8ECu));
    case 9:  return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC8E4u));
    case 10: return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AAC924u));
    default: return nullptr;
    }
}
} // namespace lift_0071A610

// [0x0071DDF0] sub_0071DDF0 (96 bytes)
namespace lift_0071DDF0 {
// @name sub_0071DDF0
// @summary Auto-lifted identical-shape clone of 0x00715450 (sub_00715450).
namespace lift_00715450 {
// @name sub_00715450
// @summary Destructor that resets vtable, invokes virtual method +0x4(0) on field_0x10, and calls base destructor ext_0077FA20.
// @field sub_00715450 +0x00 void* vtable
// @field sub_00715450 +0x10 void* field_0x10


extern uint8_t mem_00996778;
extern void __fastcall ext_0077FA20(void* self);

extern void __fastcall fn_0071DDF0(void* self) {
    *reinterpret_cast<void**>(self) = &mem_00996778;

    void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x10);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VirtFn = void(__thiscall*)(void*, int);
    reinterpret_cast<VirtFn>(vtable[1])(obj, 0);

    ext_0077FA20(self);
}
} // namespace lift_00715450
} // namespace lift_0071DDF0

// [0x0071C1B0]
namespace lift_0071C1B0 {
double __thiscall ext_0071C210(void* self, double a1, double a2, double a3);
extern double mem_0092A270;
extern double mem_00996638;

// @name ComputeClampedAngleDegrees
// @summary Computes an angle in degrees from inner object extents and clamps it to [1.0, 179.0].
// @field Self +0x0C void* field_0x0C
// @field Inner +0x2F8 double field_0x2F8
// @field Inner +0xB90 double field_0xB90
// @field Inner +0xC18 double field_0xC18
double __thiscall fn_0071C1B0(void* self) {
    uint8_t* inner = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x0C);
    double a1 = *reinterpret_cast<double*>(inner + 0xB90);
    double a2 = *reinterpret_cast<double*>(inner + 0xC18);
    double a3 = *reinterpret_cast<double*>(inner + 0x2F8);

    double angle = ext_0071C210(self, a1, a2, a3);
    if (angle < mem_0092A270) {
        return mem_0092A270;
    }
    if (angle > mem_00996638) {
        return mem_00996638;
    }
    return angle;
}
} // namespace lift_0071C1B0

// [0x00712010] sub_00712010 (104 bytes)
namespace lift_00712010 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);
// Known callee 0x00711DB0: getSubobjectField28 (Calls ext_0071E680 on self and returns the 32-bit field at offset +0x28 of the returned pointer.)
extern uint32_t __fastcall ext_00711DB0(void* self);
extern uint32_t mem_00AAC084;
extern uint32_t mem_00AAC088;
extern uint32_t mem_00AAC08C;
extern uint32_t mem_00AAC090;
extern uint32_t mem_00AAC0E0;
extern uint32_t mem_00AAC0E4;

// @name getSwitchedGlobalValue
// @class Unknown
// @summary Returns subobject+0x0C if nonzero; otherwise maps (ext_00711DB0(self) - 4) through a 12-entry jump table to one of six globals, defaulting to 0.
// @field Unknown +0x40 void* subobject
// @field Unknown +0x0C uint32_t subobjectValue
uint32_t fn_00712010(void* self) {
    void* sub = ext_0071E680(self);
    uint32_t value = lift_field<uint32_t>(sub, 0x0C);
    if (value != 0) {
        return value;
    }

    uint32_t index = ext_00711DB0(self) - 4u;
    switch (index) {
        case 0:  return mem_00AAC084;
        case 1:  return mem_00AAC088;
        case 2:  return mem_00AAC08C;
        case 3:  return mem_00AAC090;
        case 4:  return mem_00AAC0E0;
        case 5:  return mem_00AAC0E4;
        default: return 0; // indices 6..11: jump-table targets not recovered; assumed to fall through to the zero return
    }
}
} // namespace lift_00712010

// [0x007128A0] sub_007128A0 (104 bytes)
namespace lift_007128A0 {
extern int mem_00B5EB78;

// @name Unknown::FindEntryIndexByObject
// @class Unknown
// @summary Scans a 12-byte entry array for a matching key whose object's virtual slot 5 accepts mem_00B5EB78; returns the entry index when the object equals the target, else -1.
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 int32_t field_0x14
int32_t fn_007128A0(void* self, DWORD target) {
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);
    const auto rd32 = [](uintptr_t addr) -> uint32_t {
        return *reinterpret_cast<const uint32_t*>(addr);
    };

    const int32_t count = static_cast<int32_t>(rd32(base + 0x14));
    const uintptr_t entries = rd32(base + 0x10);

    for (int32_t i = 0; i < count; ++i) {
        const uintptr_t entry = entries + static_cast<uintptr_t>(i) * 12u;
        const uintptr_t node = rd32(entry + 4);
        if (node == 0) {
            continue;
        }
        if (rd32(node) != rd32(entry)) {
            continue;
        }
        const uintptr_t obj = rd32(node + 4);
        if (obj == 0) {
            continue;
        }

        // Virtual slot 5 (offset 0x14) on the object's vtable.
        const uintptr_t vtbl = rd32(obj);
        const uintptr_t fn = rd32(vtbl + 0x14);
        using SlotFn = bool (*)(uintptr_t self_obj, uint32_t arg);
        const bool accepted = reinterpret_cast<SlotFn>(fn)(
            obj, static_cast<uint32_t>(mem_00B5EB78));

        if (accepted && static_cast<DWORD>(obj) == target) {
            return i;
        }
    }
    return -1;
}
} // namespace lift_007128A0

// [0x0071E5F0] sub_0071E5F0 (110 bytes)
namespace lift_0071E5F0 {
// Known callee 0x006D2250: Buffer::release (frees the buffer at +0x10 if non-null and resets fields at +0x00, +0x04, and +0x10 to zero).
extern void ext_006D2250(void* self);
// Known callee 0x0071F090: this-adjustor thunk (adjusts `this` by +0x8 and tail-calls Buffer::release).
extern void ext_0071F090(void* self);

// @name Unknown::releaseBuffers_0071E5F0
// @class Unknown
// @summary Releases ten embedded Buffer sub-objects at +0x28..+0x100 and then the one at +0x08 via the thunk.
// @field Unknown +0x08 Buffer field_0x08
// @field Unknown +0x28 Buffer field_0x28
// @field Unknown +0x40 Buffer field_0x40
// @field Unknown +0x58 Buffer field_0x58
// @field Unknown +0x70 Buffer field_0x70
// @field Unknown +0x88 Buffer field_0x88
// @field Unknown +0xA0 Buffer field_0xA0
// @field Unknown +0xB8 Buffer field_0xB8
// @field Unknown +0xD0 Buffer field_0xD0
// @field Unknown +0xE8 Buffer field_0xE8
// @field Unknown +0x100 Buffer field_0x100
void fn_0071E5F0(void* self) {
    auto base = reinterpret_cast<uint8_t*>(self);

    ext_006D2250(base + 0x28);
    ext_006D2250(base + 0x40);
    ext_006D2250(base + 0x58);
    ext_006D2250(base + 0x70);
    ext_006D2250(base + 0x88);
    ext_006D2250(base + 0xA0);
    ext_006D2250(base + 0xB8);
    ext_006D2250(base + 0xD0);
    ext_006D2250(base + 0xE8);
    ext_006D2250(base + 0x100);

    ext_0071F090(self);
}
} // namespace lift_0071E5F0

// [0x00714950] sub_00714950 (32 bytes)
namespace lift_00714950 {
// @name sub_00714950
// @summary Auto-lifted identical-shape clone of 0x00702F60 (sub_00702F60).
namespace lift_00702F60 {
// @name sub_00702F60
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
} // namespace lift_00702F60
} // namespace lift_00714950

// [0x00711DA0] sub_00711DA0 (15 bytes)
namespace lift_00711DA0 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);
// Known callee 0x00711CF0: SetOrClearFlags78 (listed by the original asm metadata; not called in this function's body)
extern void ext_00711CF0();
// .rdata constants referenced by the original metadata (not read in this function's body)
extern int mem_009251D8;
extern int mem_00925208;

// @name SetSubobjectField28
// @class <Unknown> (member; self is only passed through to ext_0071E680)
// @summary Calls ext_0071E680(self) to get a subobject pointer, then stores the stack argument into that subobject's dword at +0x28 (thiscall, ret 4).
// @field <Unknown> +0x28 uint32_t field_0x28
extern void __thiscall fn_00711DA0(void* self, uint32_t value) {
    // Reference-only: the original asm metadata lists these; taking the address has no effect.
    (void)&ext_00711CF0;
    (void)&mem_009251D8;
    (void)&mem_00925208;

    void* sub = ext_0071E680(self);
    lift_field<uint32_t>(sub, 0x28) = value;
}
} // namespace lift_00711DA0

// [0x00711BB0] sub_00711BB0 (16 bytes)
namespace lift_00711BB0 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);

// @name getSubobjectDoubleField20
// @summary Calls ext_0071E680 on self and returns the double at offset +0x20 of the returned subobject.
// @field Subobject +0x20 double field_0x20

extern double __fastcall fn_00711BB0(void* self) {
    return lift_field<double>(ext_0071E680(self), 0x20);
}
} // namespace lift_00711BB0

// [0x00711BA0] sub_00711BA0 (16 bytes)
namespace lift_00711BA0 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);

// @name GetSubobjectDoubleField24
// @class Subobject
// @summary Returns the double at +0x18 of the subobject obtained from ext_0071E680(self).
// @field Subobject +0x18 double field_0x18
extern double __fastcall fn_00711BA0(void* self) {
    void* sub = ext_0071E680(self);
    return lift_field<double>(sub, 0x18);
}
} // namespace lift_00711BA0

// [0x0071B010]
namespace lift_0071B010 {
extern void* ext_007873F0(void* self, uint32_t arg1);
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name ForwardToSubobject10
// @summary Calls sub_007873F0 on the embedded subobject at this+0x10 with one argument.
void* fn_0071B010(void* self, uint32_t arg1) {
    // ext_006FB690 / ext_006FB6B0 are not called by this function's asm (only reached via 007873F0).
    (void)&ext_006FB690;
    (void)&ext_006FB6B0;
    return ext_007873F0(reinterpret_cast<char*>(self) + 0x10, arg1);
}
} // namespace lift_0071B010

// [0x00714910] sub_00714910 (16 bytes)
namespace lift_00714910 {
// @name sub_00714910
// @summary Auto-lifted identical-shape clone of 0x0071B010 (ForwardToSubobject10).
namespace lift_0071B010 {
extern void* ext_007873F0(void* self, uint32_t arg1);
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name ForwardToSubobject10
// @summary Calls sub_007873F0 on the embedded subobject at this+0x10 with one argument.
void* fn_00714910(void* self, uint32_t arg1) {
    // ext_006FB690 / ext_006FB6B0 are not called by this function's asm (only reached via 007873F0).
    (void)&ext_006FB690;
    (void)&ext_006FB6B0;
    return ext_007873F0(reinterpret_cast<char*>(self) + 0x8, arg1);
}
} // namespace lift_0071B010
} // namespace lift_00714910

// [0x00714940] sub_00714940 (16 bytes)
namespace lift_00714940 {
// @name sub_00714940
// @summary Auto-lifted identical-shape clone of 0x0071B010 (ForwardToSubobject10).
namespace lift_0071B010 {
extern void* ext_007873F0(void* self, uint32_t arg1);
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name ForwardToSubobject10
// @summary Calls sub_007873F0 on the embedded subobject at this+0x10 with one argument.
void* fn_00714940(void* self, uint32_t arg1) {
    // ext_006FB690 / ext_006FB6B0 are not called by this function's asm (only reached via 007873F0).
    (void)&ext_006FB690;
    (void)&ext_006FB6B0;
    return ext_007873F0(reinterpret_cast<char*>(self) + 0x28, arg1);
}
} // namespace lift_0071B010
} // namespace lift_00714940

// [0x0071B040] sub_0071B040 (16 bytes)
namespace lift_0071B040 {
// @name sub_0071B040
// @summary Auto-lifted identical-shape clone of 0x0071B010 (ForwardToSubobject10).
namespace lift_0071B010 {
extern void* ext_007873F0(void* self, uint32_t arg1);
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name ForwardToSubobject10
// @summary Calls sub_007873F0 on the embedded subobject at this+0x10 with one argument.
void* fn_0071B040(void* self, uint32_t arg1) {
    // ext_006FB690 / ext_006FB6B0 are not called by this function's asm (only reached via 007873F0).
    (void)&ext_006FB690;
    (void)&ext_006FB6B0;
    return ext_007873F0(reinterpret_cast<char*>(self) + 0x30, arg1);
}
} // namespace lift_0071B010
} // namespace lift_0071B040

// [0x0071C320] sub_0071C320 (16 bytes)
namespace lift_0071C320 {
// @name sub_0071C320
// @summary Auto-lifted identical-shape clone of 0x0071B010 (ForwardToSubobject10).
namespace lift_0071B010 {
extern void* ext_006B9EC0(void* self, uint32_t arg1);
extern uint32_t ext_006FB690(void* self, uint32_t a, uint32_t b);
extern uint32_t ext_006FB6B0(void* self, uint32_t a, uint32_t b);

// @name ForwardToSubobject10
// @summary Calls sub_007873F0 on the embedded subobject at this+0x10 with one argument.
void* fn_0071C320(void* self, uint32_t arg1) {
    // ext_006FB690 / ext_006FB6B0 are not called by this function's asm (only reached via 007873F0).
    (void)&ext_006FB690;
    (void)&ext_006FB6B0;
    return ext_006B9EC0(reinterpret_cast<char*>(self) + 0x50, arg1);
}
} // namespace lift_0071B010
} // namespace lift_0071C320

// [0x00713F30]
namespace lift_00713F30 {
// @name getTableEntry_00713F30
// @summary Maps an index (0, 1, or other) to one of three static data addresses.
uint32_t __stdcall sub_00713F30(uint32_t index) {
    switch (index) {
    case 0:
        return 0x00AAC224u;
    case 1:
        return 0x00AAC220u;
    default:
        return 0x00AAC03Cu;
    }
}
} // namespace lift_00713F30

// [0x00713390] sub_00713390 (87 bytes)
namespace lift_00713390 {
// IAT slot holding the MSVCR80.dll!strtod function pointer.
extern uintptr_t mem_00925224;

// @name parseFourDoubleTuple
// @summary Parses a "{d,d,d,d}" brace-delimited list of four doubles via strtod into out[0..3]; returns true only if the whole list is well-formed.
// @field none (no struct fields accessed; operates on caller-provided string and double buffer)
bool __stdcall fn_00713390(const char* s, double* out) {
    using StrtodFn = double(__cdecl*)(const char*, char**);

    if (*s != '{') {
        return false;
    }
    ++s;

    int count = 0;
    for (;;) {
        char* endp = nullptr;
        auto strtod_fn = reinterpret_cast<StrtodFn>(static_cast<uintptr_t>(mem_00925224));
        *out = strtod_fn(s, &endp);

        if (s == endp) {
            return false;
        }
        if (*endp != ',' && count < 3) {
            return false;
        }

        ++count;
        ++out;
        s = endp;
        if (count >= 4) {
            break;
        }
    }

    return *s == '}';
}
} // namespace lift_00713390

// [0x007135C0] sub_007135C0 (87 bytes)
namespace lift_007135C0 {
extern int mem_00925224;

// @name parseBraceDoubleList16
// @summary Parses "{d,d,...}" holding exactly 16 comma-separated doubles (via strtod through the IAT slot mem_00925224) into out[0..15]; true only if the 16th value is followed by '}'.
bool __stdcall fn_007135C0(const char* s, double* out) {
    if (*s != '{') {
        return false;
    }

    using StrtodFn = double(__cdecl*)(const char*, char**);
    auto strtod_fn = reinterpret_cast<StrtodFn>(static_cast<uintptr_t>(mem_00925224));

    const char* cur = s;
    int count = 0;
    double* dst = out;
    do {
        char* end = nullptr;
        ++cur;
        double v = strtod_fn(cur, &end);
        *dst = v;
        if (cur == end) {
            return false;
        }
        if (*end != ',' && count < 15) {
            return false;
        }
        ++count;
        ++dst;
        cur = end;
    } while (count < 16);

    return *cur == '}';
}
} // namespace lift_007135C0

// [0x0071C750] sub_0071C750 (96 bytes)
namespace lift_0071C750 {
// @name Unknown::copyEightDwordsToSubobject
// @class Unknown
// @summary Copies eight consecutive dwords from the argument block into the subobject at self+0x0C, stored at +0x738..+0x754 (stdcall-style, ret 4).
// @field Unknown +0x0C void* field_0x0c
// @field Unknown +0x738 uint32_t field_0x738
// @field Unknown +0x73C uint32_t field_0x73c
// @field Unknown +0x740 uint32_t field_0x740
// @field Unknown +0x744 uint32_t field_0x744
// @field Unknown +0x748 uint32_t field_0x748
// @field Unknown +0x74C uint32_t field_0x74c
// @field Unknown +0x750 uint32_t field_0x750
// @field Unknown +0x754 uint32_t field_0x754
void fn_0071C750(void* self, const void* src) {
    void* dst = lift_field<void*>(self, 0x0c);
    lift_field<uint32_t>(dst, 0x738) = lift_field<const uint32_t>(src, 0x00);
    lift_field<uint32_t>(dst, 0x73c) = lift_field<const uint32_t>(src, 0x04);
    lift_field<uint32_t>(dst, 0x740) = lift_field<const uint32_t>(src, 0x08);
    lift_field<uint32_t>(dst, 0x744) = lift_field<const uint32_t>(src, 0x0c);
    lift_field<uint32_t>(dst, 0x748) = lift_field<const uint32_t>(src, 0x10);
    lift_field<uint32_t>(dst, 0x74c) = lift_field<const uint32_t>(src, 0x14);
    lift_field<uint32_t>(dst, 0x750) = lift_field<const uint32_t>(src, 0x18);
    lift_field<uint32_t>(dst, 0x754) = lift_field<const uint32_t>(src, 0x1c);
}
} // namespace lift_0071C750

// [0x00710520]
namespace lift_00710520 {
// @name sub_00710520
// @summary Block of 4 small routines: returns mem_00B5EEB8; copies the two dwords of the _HUGE double into mem_00B5F070/74; stores -(_HUGE double) into mem_00B5F068.
// @field none

extern uint32_t mem_00B5EEB8;
extern uint32_t mem_00B5F070;
extern uint32_t mem_00B5F074;
extern double   mem_00B5F068;
extern uint32_t mem_00925284;   // .rdata pointer to MSVCR80!_HUGE

// Address held in mem_00925284 points at the _HUGE double.
static inline const uint8_t* huge_ptr() {
    return reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(mem_00925284));
}

// 0x00710520: mov eax, [mem_00B5EEB8]; ret
uint32_t fn_00710520() {
    return mem_00B5EEB8;
}

// 0x00710540: copy the two dwords of _HUGE into mem_00B5F070 / mem_00B5F074
void fn_00710540() {
    const uint8_t* p = huge_ptr();
    uint32_t lo, hi;
    std::memcpy(&lo, p, 4);
    std::memcpy(&hi, p + 4, 4);
    mem_00B5F070 = lo;
    mem_00B5F074 = hi;
}

// 0x00710570: mem_00B5F068 = -(*(double*)_HUGE)
void fn_00710570() {
    double v;
    std::memcpy(&v, huge_ptr(), sizeof v);
    mem_00B5F068 = -v;
}
} // namespace lift_00710520

// [0x00714AE0] sub_00714AE0 (96 bytes)
namespace lift_00714AE0 {
// Globals referenced by the adjacent thunk targets (0x714B00 / 0x714B30) that
// share this 96-byte region; not accessed by fn_00714AE0's own body.
extern int mem_00925284;
extern int mem_00B5FA90;
extern int mem_00B5FA94;
extern int mem_00B5FA88;

// @name Unknown::getField0xD8
// @class Unknown
// @summary Returns the 32-bit value stored at this+0xD8 (thiscall, this in ecx).
// @field Unknown +0xD8 uint32_t field_0xD8
uint32_t fn_00714AE0(void* self) {
    (void)&mem_00925284;
    (void)&mem_00B5FA90;
    (void)&mem_00B5FA94;
    (void)&mem_00B5FA88;
    return lift_field<uint32_t>(self, 0xD8);
}
} // namespace lift_00714AE0

// [0x0071A6B0]
namespace lift_0071A6B0 {
// @name get_enum_string_0071A6B0
// @summary Maps an enum index (0..11) to a static string/data address, or 0 if out of range.
uint32_t __stdcall sub_0071A6B0(uint32_t index) {
    switch (index) {
        case 0:  return 0x00AAC8E4u;
        case 1:  return 0x00AAC9C8u;
        case 2:  return 0x00AAC9BCu;
        case 3:  return 0x00AAC9ACu;
        case 4:  return 0x00AAC998u;
        case 5:  return 0x00AAC984u;
        case 6:  return 0x00AAC96Cu;
        case 7:  return 0x00AAC95Cu;
        case 8:  return 0x00AAC94Cu;
        case 9:  return 0x00AAC940u;
        case 10: return 0x00AAC934u;
        case 11: return 0x00AAC92Cu;
        default: return 0u;
    }
}
} // namespace lift_0071A6B0

// [0x0071130C] sub_0071130C (126 bytes)
namespace lift_0071130C {
// Known callee 0x00711DB0: getSubobjectField28 (Calls ext_0071E680 on self and returns the 32-bit field at offset +0x28 of the returned pointer.)
extern uint32_t ext_00711DB0(void* self);

// Byte mode table at 0x00711398, indexed by (ext_00711DB0 result - 1), range 0..15.
extern const uint8_t mem_00711398[16];

// Vtable slot at +0x8C (index 35), thiscall-style: (this, ptr, 0, 0, 0).
using VirtualSlot35 = uint32_t (*)(void* self, void* arg, uint32_t a, uint32_t b, uint32_t c);

// @name DispatchFlagVirtualCall
// @class Object
// @summary Selects a mode from a table keyed by getSubobjectField28; invokes vtable slot 35 with a flag or the argument address and returns 1, or 0 when out of range.
// @field Object +0x00 void* vtbl
uint8_t fn_0071130C(void* self, uint32_t arg1) {
    uint32_t idx = ext_00711DB0(self);
    idx -= 1;
    if (idx > 15) {
        return 0;
    }
    uint8_t mode = mem_00711398[idx];

    void** vtbl = *reinterpret_cast<void***>(self);
    VirtualSlot35 slot = reinterpret_cast<VirtualSlot35>(vtbl[35]);

    switch (mode) {
    case 0: {
        uint8_t flag = (arg1 != 0) ? 1 : 0;
        slot(self, &flag, 0, 0, 0);
        return 1;
    }
    case 1:
        slot(self, &arg1, 0, 0, 0);
        return 1;
    default:
        return 0;
    }
}
} // namespace lift_0071130C

// [0x007110C0] sub_007110C0 (128 bytes)
namespace lift_007110C0 {
// IAT slots used by the original code: MSVCR80!free and MSVCR80!malloc.
extern void (*mem_009251D8)(void* p);
extern void* (*mem_00925208)(size_t n);

// @name AssignStrdupReplace_007110C0
// @class Unknown
// @summary Frees the string held at +0x8 and replaces it with a malloc'd copy of src (NUL-terminated); sets +0x8 to null when src is null or empty.
// @field Unknown +0x08 char* field_0x08 (owned string pointer, replaced on each call)
void fn_007110C0(void* self, const char* src) {
    char*& slot = lift_field<char*>(self, 0x8);

    mem_009251D8(slot);

    if (src == nullptr || *src == '\0') {
        slot = nullptr;
        return;
    }

    size_t size = std::strlen(src) + 1;
    char* copy = static_cast<char*>(mem_00925208(size));
    slot = copy;
    std::memcpy(copy, src, size);
}
} // namespace lift_007110C0

// [0x0071B7E0] sub_0071B7E0 (128 bytes)
namespace lift_0071B7E0 {
// Constants in .rdata: mem_00993868 = 0.001 (lower clamp), mem_00996630 = 600000 (upper clamp).
extern const double mem_00993868;
extern const double mem_00996630;

// @name Unknown::ClampAndStoreDouble_0071B7E0
// @class Unknown
// @summary Clamps the double argument to [0.001, 600000] (NaN passes through), stores it at this->sub+0xa80, and if it exceeds the double at sub+0xb08 also stores it there. Here sub = this+0x0c.
// @field Unknown +0x0C void* field_0x0c
// @field Unknown +0x0A80 double field_0xa80
// @field Unknown +0x0B08 double field_0xb08
void fn_0071B7E0(void* self, double x) {
    // Clamp: x < 0.001 -> 0.001; x > 600000 -> 600000; otherwise x (NaN compares false, so x is kept).
    double r = (x < mem_00993868) ? mem_00993868
             : (!(x > mem_00996630) ? x : mem_00996630);

    void* sub = lift_field<void*>(self, 0x0C);
    lift_field<double>(sub, 0x0A80) = r;

    // Only raise the stored high-water value; ordered comparison so NaN never stores.
    double& hi = lift_field<double>(sub, 0x0B08);
    if (r > hi) {
        hi = r;
    }
}
} // namespace lift_0071B7E0

// [0x0071B870] sub_0071B870 (128 bytes)
namespace lift_0071B870 {
extern int mem_00993868;
extern int mem_00996630;

// @name Unknown::ClampAndUpdateMin
// @class Unknown
// @summary Clamps the stack double x to [0.001, 600000], stores it at this->field_0xc->+0xb08, then sets inner +0xa80 to min(+0xb08, +0xa80) (keeps the old +0xa80 if it is already smaller; otherwise stores the clamped value).
// @field Unknown +0x0c void* field_0x0c
// @field Unknown +0xb08 double field_0xb08 (on the object at this+0xc)
// @field Unknown +0xa80 double field_0xa80 (on the object at this+0xc)
void fn_0071B870(void* self, double x) {
    // Constants from .rdata (0.001 and 600000.0), read through the mem_ symbols.
    const double kMin = *reinterpret_cast<const double*>(&mem_00993868);
    const double kMax = *reinterpret_cast<const double*>(&mem_00996630);

    // Clamp. Written with negated comparisons so NaN behaves as in the x87 code (NaN -> kMin).
    double v;
    if (!(x >= kMin)) {
        v = kMin;
    } else if (!(x > kMax)) {
        v = x;
    } else {
        v = kMax;
    }

    void* inner = lift_field<void*>(self, 0x0c);
    lift_field<double>(inner, 0x0b08) = v;

    const double a = lift_field<double>(inner, 0x0b08);
    const double b = lift_field<double>(inner, 0x0a80);
    if (!(b < a)) {
        lift_field<double>(inner, 0x0a80) = a;
    }
}
} // namespace lift_0071B870

// [0x00711BE0] sub_00711BE0 (128 bytes)
namespace lift_00711BE0 {
// Known callee 0x00711A80: Unknown::CompareSubObjectWith0x40 (Forwards the constant 0x40 as the argument to CompareArgWithSubObjectField and returns its result.)
extern uint8_t __fastcall ext_00711A80(void* self);
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* __fastcall ext_0071E680(void* self);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006E7460(void* self);

// @name Unknown::LookupIndexedChildValue
// @class Unknown
// @summary If CompareSubObjectWith0x40 is false and subobject flag bit 9 is set, calls the function pointer at subobject +0x2c with self+0x08 and index; otherwise returns ext_006E7460 of child[index] from the list at subobject +0x2c, or 0 if the list is null or index >= its count.
// @field Unknown +0x08 void* field_0x08 (child object pointer passed as this in the flagged path)
//
// Subobject (ext_0071E680(self), i.e. self+0x40) offsets used here, not yet named:
//   +0x00 uint32_t flags (bit 9 selects the function-pointer path)
//   +0x2c pointer: function pointer in the flagged path, otherwise list pointer
//   list +0x04 int32_t count; list +0x14 uint32_t child-pointer array (32-bit pointers)
using IndexedCallFn = int32_t(__thiscall*)(void*, int32_t);

int32_t __thiscall fn_00711BE0(void* self, int32_t index) {
    if (ext_00711A80(self) == 0) {
        void* flagSub = ext_0071E680(self);
        if (((lift_field<uint32_t>(flagSub, 0x0) >> 9) & 1u) != 0) {
            void* sub = ext_0071E680(self);
            IndexedCallFn fn = lift_field<IndexedCallFn>(sub, 0x2c);
            void* child = lift_field<void*>(self, 0x8);
            return fn(child, index);
        }
    }

    void* sub1 = ext_0071E680(self);
    if (lift_field<void*>(sub1, 0x2c) == nullptr) {
        return 0;
    }
    void* sub2 = ext_0071E680(self);
    if (index >= lift_field<int32_t>(lift_field<void*>(sub2, 0x2c), 0x4)) {
        return 0;
    }
    void* sub3 = ext_0071E680(self);
    void* list = lift_field<void*>(sub3, 0x2c);
    if (index >= lift_field<int32_t>(list, 0x4)) {
        return 0;
    }
    void* array = lift_field<void*>(list, 0x14);
    const uint32_t childAddr = lift_field<uint32_t>(array, static_cast<ptrdiff_t>(index) * 4);
    void* childObj = reinterpret_cast<void*>(static_cast<uintptr_t>(childAddr));
    return ext_006E7460(childObj);
}
} // namespace lift_00711BE0

// [0x00711FE0] sub_00711FE0 (32 bytes)
namespace lift_00711FE0 {
// Known callee 0x0071E680: sub_0071E680 (Returns pointer to subobject/field at offset +0x40.)
extern void* ext_0071E680(void* self);
// Known callee 0x007110C0: AssignStrdupReplace_007110C0 (Frees the string held at +0x8 and replaces it with a malloc'd copy of src; sets +0x8 to null when src is null or empty.)
extern void ext_007110C0(void* self, const char* src);

// @name AssignStringToSubobject
// @summary Resolves the subobject at +0x40 of the argument and assigns the argument string into it.
void fn_00711FE0(const char* src) {
    void* sub = ext_0071E680((void*)src);
    ext_007110C0(sub, src);
}
} // namespace lift_00711FE0

// [0x0071B090] sub_0071B090 (32 bytes)
namespace lift_0071B090 {
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
extern uint32_t ext_00708000(void* self, const char* name);

// @name Unknown::ForwardVirtualOnNamedChild
// @class Unknown
// @summary Looks up a child object at self+0x0C by a fixed name and tail-calls its virtual slot 0x7C.
// @field Unknown +0x0C void* field_0x0C
uint32_t fn_0071B090(void* self) {
    void* parent = lift_field<void*>(self, 0x0C);
    uint32_t child = ext_00708000(parent, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00AA8D5Cu)));
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    void** vtbl = lift_field<void**>(obj, 0);
    using VirtualFn = uint32_t (*)(void*);
    VirtualFn slot = reinterpret_cast<VirtualFn>(lift_field<void*>(vtbl, 0x7C));
    return slot(obj);
}
} // namespace lift_0071B090

// [0x0071CA10] sub_0071CA10 (48 bytes)
namespace lift_0071CA10 {
extern uint32_t __fastcall ext_006C9520(uint32_t value);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t __fastcall ext_006DC460(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float __fastcall ext_006C9F70(void* self);
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
extern void* __fastcall ext_00708000(void* self, const char* name);
// String literal pushed as the name argument at 0x00AA8D10
extern const char mem_00AA8D10[];

// @name Unknown::DispatchChildFloatOrVirtual
// @class Unknown
// @summary If field +0x4 is non-null, returns the float getter of the callee chain on it; otherwise looks up child "mem_00AA8D10" under +0xC and tail-calls its vtable slot +0x7C.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x0C void* field_0x0C
float fn_0071CA10(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    if (child != nullptr) {
        int32_t value = ext_006DC460(child);
        uint32_t mid = ext_006C9520(static_cast<uint32_t>(value));
        return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(mid)));
    }

    void* owner = lift_field<void*>(self, 0x0C);
    void* target = ext_00708000(owner, mem_00AA8D10);
    void* vtbl = lift_field<void*>(target, 0);
    // Tail-call through vtable slot at byte offset 0x7C; return type assumed float (matches the other path).
    auto slot = lift_field<float (__fastcall*)(void*)>(vtbl, 0x7C);
    return slot(target);
}
} // namespace lift_0071CA10

// [0x0071CAD0] sub_0071CAD0 (48 bytes)
namespace lift_0071CAD0 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive
extern int32_t __fastcall ext_006DC460(void* self);
// Known callee 0x006C9560: sub_006C9560 (15 bytes, not lifted yet)
extern uint32_t __fastcall ext_006C9560(void* self);
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (stack arg: name; ecx: self)
extern uint32_t __thiscall ext_00708000(void* self, const char* name);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float __fastcall ext_006C9F70(void* self);

// @name Unknown::ResolveChainedFloat
// @class Unknown
// @summary Follows the object at +0x4 through two helpers and returns a float; if +0x4 is null, looks up a child at +0xC by name and tail-dispatches a virtual getter (vtable slot +0x7C).
// @field Unknown +0x04 void* field_0x4
// @field Unknown +0x0C void* field_0xC
float fn_0071CAD0(void* self) {
    void* obj = lift_field<void*>(self, 0x04);
    if (obj != nullptr) {
        int32_t v = ext_006DC460(obj);
        uint32_t w = ext_006C9560(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
        return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(w)));
    }

    void* child_owner = lift_field<void*>(self, 0x0C);
    const char* name = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00AA8D4Cu));
    uint32_t found = ext_00708000(child_owner, name);
    void* obj2 = reinterpret_cast<void*>(static_cast<uintptr_t>(found));
    void** vtable = *reinterpret_cast<void***>(obj2);
    using VirtualGetter = float(__fastcall*)(void*);
    VirtualGetter getter = reinterpret_cast<VirtualGetter>(vtable[0x7C / sizeof(void*)]);
    return getter(obj2);
}
} // namespace lift_0071CAD0

// [0x0071B0D0] sub_0071B0D0 (32 bytes)
namespace lift_0071B0D0 {
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
extern uint32_t ext_00708000(void* self, const char* name);

// Name literal at 0x00AA8D64 (passed as the lookup key).
extern const char mem_00AA8D64[];

// @name Unknown::ForwardVirtualOnNamedChild
// @class Unknown
// @summary Looks up the child named by mem_00AA8D64 under the object at +0x0C and tail-calls vtable slot +0x7C on the result.
// @field Unknown +0x0C void* child
uint32_t fn_0071B0D0(void* self) {
    void* child = lift_field<void*>(self, 0x0C);
    void* obj = reinterpret_cast<void*>(
        static_cast<uintptr_t>(ext_00708000(child, mem_00AA8D64)));
    void* vtbl = lift_field<void*>(obj, 0);
    auto method = reinterpret_cast<uint32_t (*)(void*)>(lift_field<void*>(vtbl, 0x7c));
    return method(obj);
}
} // namespace lift_0071B0D0

// [0x0071CAA0] sub_0071CAA0 (48 bytes)
namespace lift_0071CAA0 {
extern uint32_t ext_006C9550(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern uint32_t ext_006DC460(void* self);
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
extern uint32_t ext_00708000(void* self, const char* name);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// String literal referenced by the name argument at 0x00AA8D3C.
extern const char mem_00AA8D3C[];

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name Unknown::GetValueOrFindChildValue
// @class Unknown
// @summary If the +0x04 object has a nonzero count, chain through ext_006DC460 -> ext_006C9550 -> ext_006C9F70; otherwise find child "name" at +0x0C and tail-dispatch its vtable slot +0x7C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_0071CAA0(void* self) {
    const uint32_t child = lift_field<uint32_t>(self, 0x04);
    if (child != 0) {
        const uint32_t a = ext_006DC460(as_ptr(child));
        const uint32_t b = ext_006C9550(as_ptr(a));
        const float f = ext_006C9F70(as_ptr(b));
        return std::bit_cast<uint32_t>(f);
    }

    const uint32_t owner = lift_field<uint32_t>(self, 0x0C);
    const uint32_t obj = ext_00708000(as_ptr(owner), mem_00AA8D3C);
    const uint32_t vtbl = lift_field<uint32_t>(as_ptr(obj), 0x00);
    const uint32_t slot = lift_field<uint32_t>(as_ptr(vtbl), 0x7C);
    using Method = uint32_t (*)(void*);
    return reinterpret_cast<Method>(static_cast<uintptr_t>(slot))(as_ptr(obj));
}
} // namespace lift_0071CAA0

// [0x0071CA40] sub_0071CA40 (48 bytes)
namespace lift_0071CA40 {
// Pointers are 32-bit values in the original image; they are carried as uint32_t
// and converted to void* only at the call boundary.
static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern uint32_t __fastcall ext_006DC460(void* self);
// Callee 0x006C9530: sub_006C9530 (15 bytes, signature not yet recovered; takes self in ecx, returns in eax)
extern uint32_t __fastcall ext_006C9530(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float __fastcall ext_006C9F70(void* self);
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
extern uint32_t __fastcall ext_00708000(void* self, const char* name);
// String literal at 0x00AA8D1C passed as the name argument.
extern const char mem_00AA8D1C[];

// @name Unknown::ResolveChainOrVirtualChildLookup
// @class Unknown
// @summary If +0x04 is non-null, chains ext_006DC460 -> ext_006C9530 -> ext_006C9F70; otherwise looks up the child named by mem_00AA8D1C under +0x0C and tail-calls its vtable slot 31.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x0C uint32_t field_0x0C
extern uint32_t fn_0071CA40(void* self) {
    const uint32_t field_0x04 = lift_field<uint32_t>(self, 0x04);
    if (field_0x04 != 0) {
        const uint32_t a = ext_006DC460(as_ptr(field_0x04));
        const uint32_t b = ext_006C9530(as_ptr(a));
        const float r = ext_006C9F70(as_ptr(b));
        return std::bit_cast<uint32_t>(r);
    }

    const uint32_t child = lift_field<uint32_t>(self, 0x0C);
    const uint32_t found = ext_00708000(as_ptr(child), mem_00AA8D1C);

    // Virtual tail call: vtable slot at +0x7C (index 31) with this = found.
    void* obj = as_ptr(found);
    const uint32_t vtable = lift_field<uint32_t>(obj, 0x00);
    const uint32_t target = lift_field<uint32_t>(as_ptr(vtable), 0x7C);
    auto slot = reinterpret_cast<uint32_t(__fastcall*)(void*)>(static_cast<uintptr_t>(target));
    return slot(obj);
}
} // namespace lift_0071CA40

// [0x0071CA70] sub_0071CA70 (48 bytes)
namespace lift_0071CA70 {
// Guest pointers are carried as uint32_t and converted to host void* at call sites.
namespace {
inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}
}

// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);
// Known callee 0x006C9540: sub_006C9540 (no metadata; result passed on as `this`)
extern uint32_t ext_006C9540(void* self);
// Known callee 0x00708000: Unknown::FindChildByName_00708000 (Scans the count-sized pointer array at +0xD0 and returns the first element whose fn_00712000 string equals the name argument, or 0 if none matches.)
// Asm passes `this` in ecx and the name address as a stack argument (thiscall-style).
extern uint32_t ext_00708000(void* self, uint32_t name_addr);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);

// @name Unknown::DelegateToChildOrLookupByName
// @class Unknown
// @summary If the +0x04 child is set, chains GetValueIfCountPositive -> sub_006C9540 -> sub_006C9F70 on it; otherwise looks up the name constant in the +0x0C container and tail-dispatches vtable slot 31 (+0x7C) on the result.
// @field Unknown +0x04 uint32_t child
// @field Unknown +0x0C uint32_t container
uint32_t __fastcall fn_0071CA70(void* self) {
    // mov ecx, [eax+4]
    uint32_t child = lift_field<uint32_t>(self, 0x04);

    if (child != 0) {
        // call sub_006DC460 with this = child; ecx = eax
        int32_t v = ext_006DC460(as_ptr(child));
        // call sub_006C9540 with this = v; ecx = eax
        uint32_t r = ext_006C9540(as_ptr(static_cast<uint32_t>(v)));
        // jmp sub_006C9F70 (tail call, ecx = r). Callee returns float (st0);
        // the bit pattern is carried back through uint32_t return.
        float f = ext_006C9F70(as_ptr(r));
        uint32_t bits = 0;
        static_assert(sizeof(bits) == sizeof(f));
        std::memcpy(&bits, &f, sizeof(bits));
        return bits;
    }

    // else: mov ecx, [eax+0Ch]; push 0x00AA8D2C; call sub_00708000
    uint32_t container = lift_field<uint32_t>(self, 0x0C);
    uint32_t obj = ext_00708000(as_ptr(container), 0x00AA8D2C);

    // mov edx, [eax]; mov ecx, eax; jmp [edx+7Ch]  (virtual tail call, slot 31)
    void* o = as_ptr(obj);
    void** vtable = *reinterpret_cast<void***>(o);
    using VirtFn = uint32_t (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(lift_field<void*>(static_cast<void*>(vtable), 0x7C));
    return target(o);
}
} // namespace lift_0071CA70
