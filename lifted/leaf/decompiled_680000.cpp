// Lifted C++ translation unit: lifted/leaf/decompiled_680000.cpp
#include "lift_compat.h"

// [0x006829E0] sub_006829E0 (20 bytes)
namespace lift_006829E0 {
// Known callee 0x0066B080: sub_0066B080 (Auto-lifted identical-shape clone of 0x004D0B60 (GetTableEntry28Address).)
extern void* ext_0066B080(uint32_t index);

// @name VTableDispatch::GetTableEntry28ViaSlot30
// @class VTableDispatch
// @summary Loads the object at this+0x28, calls its vtable slot at +0x30 to obtain an index, and returns GetTableEntry28Address(index).
// @field VTableDispatch +0x28 void* target
void* fn_006829E0(void* self) {
    void* target = lift_field<void*>(self, 0x28);
    void* vtable = lift_field<void*>(target, 0x00);
    using Slot30 = uint32_t (__thiscall*)(void* self);
    Slot30 slot = reinterpret_cast<Slot30>(lift_field<void*>(vtable, 0x30));
    uint32_t index = slot(target);
    return ext_0066B080(index);
}
} // namespace lift_006829E0

// [0x006813B0] sub_006813B0 (27 bytes)
namespace lift_006813B0 {
// @name sub_006813B0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_006812A0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_006813B0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_006812A0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_006813B0

// [0x00687510] sub_00687510 (33 bytes)
namespace lift_00687510 {
// @name sub_00687510
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_00687510(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x28;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_00687510

// [0x00682E20] sub_00682E20 (33 bytes)
namespace lift_00682E20 {
// @name Unknown::computeScaledDeltaDiv128
// @class Unknown
// @summary Returns 0 if field_0x04 is 0; otherwise returns (field_0x08 - field_0x04) scaled by a signed reciprocal multiply and divided by 128 with round-toward-zero correction.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00682E20(void* self) {
    const int32_t a = lift_field<int32_t>(self, 0x04);
    if (a == 0) {
        return 0;
    }

    const int32_t delta = lift_field<int32_t>(self, 0x08) - a;

    // Signed 32x32 -> 64 multiply (imul), keep the high dword.
    const int64_t prod = static_cast<int64_t>(static_cast<int32_t>(0xDD67C8A7u)) *
                         static_cast<int64_t>(delta);
    int32_t hi = static_cast<int32_t>(static_cast<uint64_t>(prod) >> 32);
    hi = static_cast<int32_t>(static_cast<uint32_t>(hi) + static_cast<uint32_t>(delta));

    // Arithmetic shift by 7, then add 1 if the result was negative.
    const int32_t t = hi >> 7;
    return static_cast<int32_t>(t + static_cast<int32_t>(static_cast<uint32_t>(t) >> 31));
}
} // namespace lift_00682E20

// [0x0068BC00] sub_0068BC00 (36 bytes)
namespace lift_0068BC00 {
extern DWORD ext_005111E0(void* self, DWORD* count);

// @name DecrementAndForwardAt0x10
// @summary If the count argument is nonzero, decrement it and forward the decremented count (by pointer) to ext_005111E0 on this+0x10; otherwise return 0.
// @field Unknown +0x10 void* field_0x10 (address only; this+0x10 passed as the this-pointer to ext_005111E0)
DWORD fn_0068BC00(void* self, DWORD count) {
    if (count == 0) {
        return 0;
    }
    count -= 1;
    return ext_005111E0(static_cast<uint8_t*>(self) + 0x10, &count);
}
} // namespace lift_0068BC00
