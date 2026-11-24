// Lifted C++ translation unit: lifted/leaf/decompiled_4E0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_004E7E90 {
// @name Unknown::initDefaults
// @class Unknown
// @summary Zeroes the state words at +0x04..+0x10 and the flag byte at +0x1C, then sets +0x14 to 1 and +0x18 to 2.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint8_t field_0x1C
void fn_004E7E90(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 1;
    lift_field<uint32_t>(self, 0x18) = 2;
    lift_field<uint8_t>(self, 0x1C) = 0;
}
} // namespace lift_004E7E90

// [0x004E31A0] sub_004E31A0 (41 bytes)
namespace lift_004E31A0 {
// @name sub_004E31A0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00490760(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_004E31A0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00490760(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_004E31A0

// [0x004ECA40]
namespace lift_004ECA40 {
extern uint32_t mem_00925134;

// @name Vector8::operator[]
// @class Vector8
// @summary Bounds-checked element access for an 8-byte-stride vector
// @field Vector8 +0x04 uint32_t begin
// @field Vector8 +0x08 uint32_t end
uint32_t __thiscall sub_004ECA40(void* self, uint32_t index) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t begin = *reinterpret_cast<uint32_t*>(base + 0x4);
    if (begin == 0) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    } else {
        uint32_t end = *reinterpret_cast<uint32_t*>(base + 0x8);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 3);
        if (index >= count) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
    }
    uint32_t ptr = *reinterpret_cast<uint32_t*>(base + 0x4);
    return ptr + index * 8u;
}
} // namespace lift_004ECA40
