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
