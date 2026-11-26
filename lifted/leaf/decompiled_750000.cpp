// Lifted C++ translation unit: lifted/leaf/decompiled_750000.cpp
#include "lift_compat.h"
#include <cstddef>
#include <cstdint>
#include <optional>

// [0x00751368] sub_00751368 (72 bytes)
namespace lift_00751368 {
// @name DataBlob::Lookup00751368
// @summary Static 72-byte lookup table (mostly 0x04 entries, 0x90 padding); not executable code.
void fn_00751368(void* self) {
    (void)self;
    static const unsigned char kTable[] = {
        0x00, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x02, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x03,
        0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
        0x90, 0x90, 0x90, 0x90, 0x90,
    };
    static_assert(sizeof(kTable) == 72, "table must match 72-byte region");
    (void)kTable;
}
} // namespace lift_00751368

// [0x00754FA0]
namespace lift_00754FA0 {
// @name sub_00754FA0_dtor
// @summary Destructor that sets vtable 0x996bf0 and destroys members at +0x60 and +0x8.
// @field +0x00 uintptr_t vftable
// @field +0x08 uint8_t field_0x08
// @field +0x60 uint8_t field_0x60


extern void __fastcall ext_006B9D70(void* self);
extern void __fastcall ext_007641C0(void* self);

extern void __fastcall fn_00754FA0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj) = 0x00996BF0u;
    ext_006B9D70(obj + 0x60);
    ext_007641C0(obj + 0x08);
}
} // namespace lift_00754FA0

// [0x007511F4] sub_007511F4 (60 bytes)
namespace lift_007511F4 {
// @name DataTable_007511F4
// @summary Static 49-byte jump-index lookup table (values 0x00-0x07, filler 0x08) read by the switch at 0x00750FB7; followed by 11 bytes of 0x90 padding. Lookup helper mirrors the switch's index math.

// Table entries i0..i48 at VA 0x007511F4..0x00751224. Bytes 0x00751225..0x0075122F are 0x90 padding (not data).
static constexpr uint8_t kDataTable_007511F4[49] = {
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // i0..i7
    0x01, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // i8..i15
    0x08, 0x08, 0x02, 0x08, 0x08, 0x08, 0x08, 0x08, // i16..i23
    0x08, 0x08, 0x08, 0x08, 0x03, 0x08, 0x08, 0x08, // i24..i31
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, // i32..i39
    0x05, 0x06, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // i40..i47
    0x07,                                           // i48
};

// Switch key -> table byte. Mirrors: idx = key - 2; if (idx > 0x30) out of range; else table[idx].
// Returns std::nullopt when the original code would take the out-of-range branch.
std::optional<uint8_t> fn_007511F4(uint32_t key) {
    const uint32_t idx = key - 2u;  // unsigned wrap matches lea eax,[ecx-2] + unsigned cmp
    if (idx > 0x30u) {
        return std::nullopt;
    }
    return kDataTable_007511F4[idx];
}
} // namespace lift_007511F4
