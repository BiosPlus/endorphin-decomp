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
