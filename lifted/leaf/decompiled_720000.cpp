// Lifted C++ translation unit: lifted/leaf/decompiled_720000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0072D640(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>

// [0x0072D620] sub_0072D620 (32 bytes)
// @name sub_0072D620
// @summary MSVC scalar deleting destructor: calls sub_0072D640 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072D620(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072D640(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072B2F0]
namespace lift_0072B2F0 {
// @name sub_0072B2F0
// @summary Constructor calling base constructor sub_0077F9E0 and setting vtable to 0x00996834
// @field sub_0072B2F0 +0x00 uint32_t vtable


extern uint32_t __thiscall ext_0077F9E0(uint32_t self, uint32_t arg1);
extern void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_0072B2F0(uint32_t self, uint32_t arg1) {
    ext_0077F9E0(self, arg1);
    mem_write32(self, 0x00996834u);
    return self;
}
} // namespace lift_0072B2F0

// [0x0072CB00] sub_0072CB00 (32 bytes)
namespace lift_0072CB00 {
// @name sub_0072CB00
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006B9D20(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_0072CB00(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x18);
    ext_006B9D20(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_0072CB00

// [0x00724FA0] sub_00724FA0 (16 bytes)
namespace lift_00724FA0 {
// @name sub_00724FA0
// @summary Auto-lifted identical-shape clone of 0x00711A90 (Unknown::TestFlag0x08At0x78).
namespace lift_00711A90 {
// Known callee 0x00711D20: Unknown::TestMaskedFieldAt0x78 (Returns true when (this->field_0x78 & mask) is nonzero, else false.)
extern bool ext_00724FE0(void* self, DWORD mask);

// @name Unknown::TestFlag0x08At0x78
// @class Unknown
// @summary Tests bit 0x08 of the flags word at this+0x78 by tail-forwarding to TestMaskedFieldAt0x78 and returns its result.
bool fn_00724FA0(void* self) {
    return ext_00724FE0(self, 0x0u);
}
} // namespace lift_00711A90
} // namespace lift_00724FA0

// [0x00724FB0]
namespace lift_00724FB0 {
// @name Unknown::DecrementClampZero
// @class Unknown
// @summary Returns max(0, this->field_0x194 - 1) as a signed 32-bit value.
// @field Unknown +0x194 int32_t field_0x194

// Reads ecx-relative dword at +0x194, decrements it, and clamps negatives to zero.
uint32_t fn_00724FB0(uint8_t* ecx) {
    int32_t value = *reinterpret_cast<int32_t*>(ecx + 0x194);
    int32_t dec = value - 1;
    return dec > 0 ? static_cast<uint32_t>(dec) : 0u;
}
} // namespace lift_00724FB0

// [0x0072CEB0]
namespace lift_0072CEB0 {
// @name Unknown::SetArray1B8Element
// @class Unknown
// @summary Stores a 32-bit value into slot [index] of a 6-entry int array at this+0x1B8; out-of-range indices are ignored.
// @field Unknown +0x1B8 int32_t field_0x1B8 (int32_t[6] array, indexed 0..5)

void Unknown_SetArray1B8Element(uint8_t* self, int32_t index, int32_t value) {
    if (index < 0 || index >= 6) {
        return;
    }
    int32_t* slots = reinterpret_cast<int32_t*>(self + 0x1B8);
    slots[index] = value;
}
} // namespace lift_0072CEB0

// [0x007266A0]
namespace lift_007266A0 {
// @name Unknown::ForwardSubObject0x250Value
// @class Unknown
// @summary Reads the pointer-sized value at this+0x250; if non-zero, tail-forwards to fn_006BC380 with that value as self, otherwise returns 0.
// @field Unknown +0x250 int32_t field_0x250

extern int32_t __fastcall ext_006BC380(void* self);

extern int32_t __fastcall fn_007266A0(void* self) {
    int32_t v = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x250);
    if (v != 0) {
        return ext_006BC380(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
    }
    return 0;
}
} // namespace lift_007266A0

// [0x0072CED0]
namespace lift_0072CED0 {
// @name Unknown::GetArrayEntry1B8
// @class Unknown
// @summary Returns entry idx (0..5) of the int32 array at this+0x1B8, or 0 if idx is out of range.
// @field Unknown +0x1B8 int32_t[6] field_0x1B8

int32_t Unknown_GetArrayEntry1B8(const uint8_t* self, int32_t idx) {
    if (idx < 0 || idx >= 6) {
        return 0;
    }
    return *reinterpret_cast<const int32_t*>(self + 0x1B8 + 4 * static_cast<uintptr_t>(idx));
}
} // namespace lift_0072CED0

// [0x0072CEF0] sub_0072CEF0 (32 bytes)
namespace lift_0072CEF0 {
// @name Unknown::SetArray1A9Element
// @class Unknown
// @summary Stores a byte into slot [index] of a 13-entry byte array at this+0x1A9; out-of-range indices are ignored.
// @field Unknown +0x1A9 uint8_t field_0x1A9 (uint8_t[13] array, indexed 0..12)
void fn_0072CEF0(uint8_t* self, int32_t index, uint8_t value) {
    if (index < 0 || index >= 13) {
        return;
    }
    self[0x1A9 + index] = value;
}
} // namespace lift_0072CEF0
