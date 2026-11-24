// Lifted C++ translation unit: lifted/leaf/decompiled_670000.cpp
#include "lift_compat.h"

// [0x006721B0] sub_006721B0 (18 bytes)
namespace lift_006721B0 {
extern void ext_00672000(void* self);

// @name storeArgIntoFirstDword_006721B0
// @summary Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.
// @field field_0x00 DWORD field_0x00 (written from stack arg)
DWORD fn_006721B0(void* self, DWORD value) {
    ext_00672000(self);
    lift_field<DWORD>(self, 0x00) = value;
    return value;
}
} // namespace lift_006721B0

// [0x0067B050] sub_0067B050 (22 bytes)
namespace lift_0067B050 {
extern void ext_0067AE50(void* self);

// @name SubObject::ClearFlagThenVirtualSlot2
// @class Unknown
// @summary Clears the byte flag at +0x04, calls ext_0067AE50 on self, then dispatches virtual slot 2 on self's vtable (tail jump in original).
// @field Unknown +0x04 uint8_t field_0x04
void fn_0067B050(void* self) {
    lift_field<uint8_t>(self, 0x04) = 0;
    ext_0067AE50(self);

    // Original: eax = [self]; edx = [eax + 8]; ecx = self; jmp edx
    void* vtable = lift_field<void*>(self, 0x00);
    auto slot2 = reinterpret_cast<void (*)(void*)>(lift_field<void*>(vtable, 0x08));
    slot2(self);
}
} // namespace lift_0067B050

// [0x00672E50] sub_00672E50 (27 bytes)
namespace lift_00672E50 {
// @name sub_00672E50
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00672C20(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00672E50(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00672C20(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00672E50

// [0x0067F8F0] sub_0067F8F0 (32 bytes)
namespace lift_0067F8F0 {
// @name Unknown::PopBackIfSpanAtLeast4
// @class Unknown
// @summary If the element range [begin, end) spans at least one 4-byte slot, decrement end by 4 (pop back).
// @field Unknown +0x00 uint8_t* field_0x00 (pointer to range-holder struct)
// @field RangeHolder +0x04 uint32_t field_0x04 (range begin)
// @field RangeHolder +0x08 uint32_t field_0x08 (range end)
void fn_0067F8F0(void* self) {
    uint8_t* holder = lift_field<uint8_t*>(self, 0x00);
    uint32_t begin = lift_field<uint32_t>(holder, 0x04);
    if (begin == 0) {
        return;
    }
    uint32_t end = lift_field<uint32_t>(holder, 0x08);
    // Original: esi = (end - begin) sar 2; ZF from that shift decides the branch.
    int32_t span = static_cast<int32_t>(end - begin);
    if ((span >> 2) == 0) {
        return;
    }
    lift_field<uint32_t>(holder, 0x08) = end - 4;
}
} // namespace lift_0067F8F0
