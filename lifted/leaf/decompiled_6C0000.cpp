// Lifted C++ translation unit: lifted/leaf/decompiled_6C0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

#include <cstring>
namespace lift_006CA060 {
// @name sub_006CA060
// @summary Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006CA020(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_006CA060(void* self) {
    return ext_006CA020(self);
}
} // namespace lift_00707980
} // namespace lift_006CA060

// [0x006C3450] sub_006C3450 (32 bytes)
namespace lift_006C3450 {
// @name Unknown::GetEntryAddress
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D18.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D18 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3450(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D18u;
}
} // namespace lift_006C3450

// [0x006C3470] sub_006C3470 (32 bytes)
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3470(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D38u;
}
} // namespace lift_006C3470

// [0x006C3500] sub_006C3500 (32 bytes)
namespace lift_006C3500 {
// @name sub_006C3500
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3500(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D78u;
}
} // namespace lift_006C3470
} // namespace lift_006C3500

// [0x006C3590] sub_006C3590 (32 bytes)
namespace lift_006C3590 {
// @name sub_006C3590
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3590(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D98u;
}
} // namespace lift_006C3470
} // namespace lift_006C3590

// [0x006C35B0] sub_006C35B0 (32 bytes)
namespace lift_006C35B0 {
// @name sub_006C35B0
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C35B0(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1DD8u;
}
} // namespace lift_006C3470
} // namespace lift_006C35B0

// [0x006C9CE0]
namespace lift_006C9CE0 {
// @name Unknown::SetFlag0x100
// @class Unknown
// @summary Copies bit 8 of the stack argument into bit 8 (0x100) of the dword at this+0x10; other bits are preserved.
// @field Unknown +0x10 uint32_t flags

struct Unknown {
    uint8_t pad_0x00[0x10];
    uint32_t flags; // +0x10
};

void Unknown_SetFlag0x100(Unknown* self, uint32_t arg) {
    uint32_t f = self->flags;
    // ((f ^ arg) & 0x100) ^ f  ==  f with bit 8 replaced by bit 8 of arg
    uint32_t edx = ((f ^ arg) & 0x100u) ^ f;
    self->flags = edx;
}
} // namespace lift_006C9CE0

// [0x006C9A90]
namespace lift_006C9A90 {
// @name Unknown::InitDefaults
// @class Unknown
// @summary Zeroes the 0x18-byte state block at this, stores 0.33333334f at +0x04, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14

uint8_t* sub_006C9A90(uint8_t* ecx) {
    uint8_t* self = ecx;

    const uint32_t zero = 0;
    const uint32_t third_bits = 0x3eaaaaabu;
    float third;
    std::memcpy(&third, &third_bits, sizeof(third));

    std::memcpy(self + 0x00, &zero, sizeof(zero));
    std::memcpy(self + 0x04, &third, sizeof(third));
    self[0x08] = 0;
    std::memcpy(self + 0x0C, &zero, sizeof(zero));
    self[0x10] = 0;
    std::memcpy(self + 0x14, &zero, sizeof(zero));

    return self;
}
} // namespace lift_006C9A90

// [0x006C9DA0]
namespace lift_006C9DA0 {
// @name Unknown::SetFlags0x300000
// @class Unknown
// @summary Copies bits 20-21 (0x300000) of the stack argument into the same bits of the dword at this+0x10; other bits are preserved.
// @field Unknown +0x10 uint32_t flags

struct Unknown {
    uint8_t pad_0x00[0x10];
    uint32_t flags; // +0x10
};

void Unknown_SetFlags0x300000(Unknown* self, uint32_t arg) {
    uint32_t f = self->flags;
    // ((f ^ arg) & 0x300000) ^ f  ==  f with bits 20-21 replaced by those of arg
    uint32_t edx = ((f ^ arg) & 0x300000u) ^ f;
    self->flags = edx;
}
} // namespace lift_006C9DA0

// [0x006C9D00]
namespace lift_006C9D00 {
// @name Unknown::SetBits0F00
// @class Unknown
// @summary Replaces bits 8-11 (mask 0xF00) of the dword at this+0x10 with the same bits of the stack argument; all other bits are preserved.
// @field Unknown +0x10 uint32_t field_0x10

struct Unknown {
    uint8_t pad_0x00[0x10];
    uint32_t field_0x10; // +0x10
};

// Convention: this in ECX, one stack argument, callee pops 4 bytes (ret 4).
void Unknown_SetBits0F00(Unknown* self, uint32_t arg) {
    uint32_t eax = self->field_0x10;
    // ((eax ^ arg) & 0xF00) ^ eax == eax with bits 8-11 taken from arg
    uint32_t edx = ((eax ^ arg) & 0x00000F00u) ^ eax;
    self->field_0x10 = edx;
}
} // namespace lift_006C9D00
