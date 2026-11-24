// Lifted C++ translation unit: lifted/leaf/decompiled_6C0000.cpp
#include "lift_compat.h"

// [0x006CA060] sub_006CA060 (13 bytes)
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
