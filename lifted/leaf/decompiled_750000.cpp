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

// [0x00757D60] sub_00757D60 (96 bytes)
namespace lift_00757D60 {
// Known callee 0x006B9D20: Unknown::initOrCopy_006B9D20 (Initializes self; if ext_006B9940(obj) is nonzero, passes ext_006E7460(obj) as src and ext_006B99C0(obj) as len to ext_006B9B40, otherwise calls ext_006B9920. Returns self.)
extern void* __thiscall ext_006B9D20(void* self, void* obj);
// Known callee 0x006B9D70: sub_006B9D70 (Pure jump thunk forwarding to sub_006B9970.)
extern void __thiscall ext_006B9D70(void* self);

// SEH scope-table/handler address pushed by the original prologue (frame boilerplate, kept as a metadata reference only).
extern int mem_008C1B08;

// @name Unknown::initWithByValueArg_00757D60
// @class Unknown
// @summary Stores the first DWORD of a by-value 0x50-byte argument into +0x00, initializes the sub-object at +0x04 from the remaining 0x4C bytes, then destroys the argument; returns this (thiscall, ret 0x50).
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 BYTE field_0x04
// Calling convention: thiscall, self in ecx. The 0x50-byte argument is passed by value on the stack;
// `arg` is its address (arg[0..3] = first DWORD, arg[4..0x4F] = the 0x4C-byte tail). Callee pops 0x50 bytes.
// The original SEH frame (fs:[0] push/restore, try state 0 -> -1) is dropped; cleanup is the explicit destructor call below.
void* __thiscall fn_00757D60(void* self, void* arg) {
    (void)&mem_008C1B08;

    // self->field_0x00 = first DWORD of the by-value argument.
    lift_field<DWORD>(self, 0x00) = *static_cast<DWORD*>(arg);

    // Initialize sub-object at self+4 from the argument tail (arg+4).
    ext_006B9D20(static_cast<uint8_t*>(self) + 0x04, static_cast<uint8_t*>(arg) + 0x04);

    // Destroy the by-value argument.
    ext_006B9D70(arg);

    return self;
}
} // namespace lift_00757D60
