// Lifted C++ translation unit: lifted/leaf/tiny_4D0000.cpp
#include "lift_compat.h"

// [0x004D0AE0] sub_004D0AE0 (13 bytes)
// @name sub_004D0AE0
// @summary Setter storing float argument into field at offset +0x194.
extern "C" void __fastcall fn_004D0AE0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x194) = value;
}

// [0x004DDE80] sub_004DDE80 (13 bytes)
// @name sub_004DDE80
// @summary Setter storing float argument into field at offset +0x998.
extern "C" void __fastcall fn_004DDE80(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x998) = value;
}

// [0x004DDE90] sub_004DDE90 (13 bytes)
// @name sub_004DDE90
// @summary Setter storing float argument into field at offset +0x994.
extern "C" void __fastcall fn_004DDE90(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x994) = value;
}

// [0x004DDE00]
namespace lift_004DDE00 {
extern uint32_t mem_00A85D54;

// @name clearFlag_004DDE00
// @summary Clears the low byte flag at mem_00A85D54 to zero.
void sub_004DDE00() {
    *reinterpret_cast<uint8_t*>(&mem_00A85D54) = 0;
}
} // namespace lift_004DDE00

// [0x004DE160]
namespace lift_004DE160 {
// @name sub_004DE160
// @summary Returns (this->field_0x15c - this->field_0x9a0) + 1 as a 32-bit signed value.
// @field self +0x15C int32_t field_0x15c
// @field self +0x9A0 int32_t field_0x9a0

int32_t sub_004DE160(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    int32_t a = *reinterpret_cast<int32_t*>(base + 0x15C);
    int32_t b = *reinterpret_cast<int32_t*>(base + 0x9A0);
    return (a - b) + 1;
}
} // namespace lift_004DE160

// [0x004D0B60] sub_004D0B60 (21 bytes)
namespace lift_004D0B60 {
// @name GetTableEntry28Address
// @class (none)
// @summary Returns the address of entry `index` in a 28-byte-stride table based at 0x00AE5C10 (0xAE5C10 + index * 28).
void* fn_004D0B60(uint32_t index) {
    constexpr uintptr_t kTableBase = 0x00AE5C10u;
    return reinterpret_cast<void*>(kTableBase + static_cast<uintptr_t>(index) * 28u);
}
} // namespace lift_004D0B60
