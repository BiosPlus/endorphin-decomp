// Lifted C++ translation unit: lifted/leaf/tiny_810000.cpp
#include "lift_compat.h"

// [0x00810240] sub_00810240 (16 bytes)
namespace lift_00810240 {
// @name getBit1OfNestedField04
// @summary Returns bit 1 of the DWORD at +0x04 of the object referenced by self->field_0x04.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 DWORD field_0x04 (accessed through the pointer loaded from self+0x04)
uint32_t fn_00810240(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    DWORD value = lift_field<DWORD>(inner, 0x04);
    return (value >> 1) & 1u;
}
} // namespace lift_00810240

// [0x008103F0]
namespace lift_008103F0 {
// @name sub_008103F0
// @summary Follows a chain of three pointers (arg+0x4 -> +0x4 -> +0x4) and returns bit 11 of the final dword.
// @field Unknown +0x04 ptr field_0x04 (first hop, arg)
// @field Unknown +0x04 ptr field_0x04 (second hop)
// @field Unknown +0x04 u32 field_0x04 (final dword whose bit 11 is returned)

struct Unknown;

extern uint32_t sub_008103F0(Unknown* arg);
} // namespace lift_008103F0

// [0x00810350]
namespace lift_00810350 {
// @name getNestedFlagBit15
// @summary Returns bit 15 of the uint32 at arg0->+0x4->+0x4 (as 0 or 1).
// @field field_0x04 +0x04 uint32_t inner (pointer loaded from arg0->+0x4)
// @field field_0x04 +0x04 uint32_t flags (dword read from inner->+0x4)

uint32_t sub_00810350(const uint8_t* arg0) {
    const uint8_t* inner = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x4);
    uint32_t flags = *reinterpret_cast<const uint32_t*>(inner + 0x4);
    return (flags >> 15) & 1u;
}
} // namespace lift_00810350
