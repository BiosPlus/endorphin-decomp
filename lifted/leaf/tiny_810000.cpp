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

// [0x008103A0] sub_008103A0 (17 bytes)
namespace lift_008103A0 {
// @name getNestedFlagBit12
// @summary Returns bit 12 of the 32-bit word at +0x04 of the object referenced by +0x04 of the argument (0 or 1).
// @field Unknown +0x04 uint8_t* next
// @field Unknown +0x04 uint32_t flags
uint32_t fn_008103A0(uint8_t* self) {
    uint8_t* inner = *reinterpret_cast<uint8_t**>(self + 0x04);
    uint32_t flags = *reinterpret_cast<uint32_t*>(inner + 0x04);
    return (flags >> 12) & 1u;
}
} // namespace lift_008103A0

// [0x008102B0] sub_008102B0 (17 bytes)
namespace lift_008102B0 {
// @name Unknown::getFlagBit13ViaField4
// @class Unknown
// @summary Returns bit 13 of the DWORD at +0x04 of the object referenced by the +0x04 pointer of the argument.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 DWORD field_0x04
int fn_008102B0(void* self) {
    // Load self->field_0x04, then its field_0x04 (DWORD), and extract bit 13.
    void* child = lift_field<void*>(self, 0x04);
    DWORD flags = lift_field<DWORD>(child, 0x04);
    return (flags >> 13) & 1;
}
} // namespace lift_008102B0

// [0x00810300] sub_00810300 (17 bytes)
namespace lift_00810300 {
// @name getNestedFlagBit24
// @class (none)
// @summary Follows two pointer hops (self+0x4, then +0x4) and returns bit 24 of the final dword as 0 or 1.
// @field <Unknown> +0x04 void* field_0x04
// @field <Unknown> +0x04 uint32_t field_0x04
uint32_t fn_00810300(void* self) {
    // self (arg0) -> ptr at +0x04 -> dword at +0x04 -> bit 24
    void* a = lift_field<void*>(self, 0x04);
    uint32_t v = lift_field<uint32_t>(a, 0x04);
    return (v >> 24) & 1u;
}
} // namespace lift_00810300

// [0x008103F0]
namespace lift_008103F0 {
// @name getNestedFlagBit11
// @summary Returns bit 11 of the 32-bit word at +0x04 of the object referenced by +0x04 of the argument (0 or 1).
// @field Unknown +0x04 uint8_t* next
// @field Unknown +0x04 uint32_t flags
uint32_t fn_008103F0(uint8_t* self) {
    uint8_t* inner = *reinterpret_cast<uint8_t**>(self + 0x04);
    uint32_t flags = *reinterpret_cast<uint32_t*>(inner + 0x04);
    return (flags >> 11) & 1u;
}
} // namespace lift_008103F0

// [0x00810440] sub_00810440 (17 bytes)
namespace lift_00810440 {
// @name getNestedFlagBit10
// @class Unknown
// @summary Returns bit 10 of the DWORD at +0x04 of the object pointed to by +0x04 of the argument.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 DWORD field_0x04
DWORD fn_00810440(void* self) {
    auto* outer = *reinterpret_cast<BYTE* const*>(static_cast<BYTE*>(self) + 0x04);
    auto* inner = *reinterpret_cast<BYTE* const*>(outer + 0x04);
    DWORD flags = *reinterpret_cast<const DWORD*>(inner + 0x04);
    return (flags >> 10) & 1;
}
} // namespace lift_00810440
