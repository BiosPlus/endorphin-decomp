// Lifted C++ translation unit: lifted/leaf/decompiled_810000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x008113C4] sub_008113C4 (28 bytes)
namespace lift_008113C4 {
// @name FlagTable_008113C4
// @summary 18-byte 0/1 flag table at 0x008113C4 followed by 10 bytes of 0x90 padding; not executable code.

// The bytes at 0x008113C4 disassemble as data, not instructions: 18 bytes of
// 0x00/0x01 values followed by 10 bytes of 0x90 (padding). Lifted here as the
// table itself; the function body is intentionally empty.
static constexpr uint8_t kFlagTable_008113C4[18] = {
    0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
};

void fn_008113C4(void* self) {
    (void)self;
    (void)kFlagTable_008113C4;
}
} // namespace lift_008113C4

// [0x008110F0] sub_008110F0 (32 bytes)
namespace lift_008110F0 {
// @name ToUpperAsciiLowercaseOnly
// @summary Returns c - 0x20 if c is in ['a', 'z'] (signed compare), otherwise c unchanged.
int fn_008110F0(int c) {
    if (c >= 0x61 && c <= 0x7A) {
        c += -0x20;
    }
    return c;
}
} // namespace lift_008110F0

// [0x0081150C] sub_0081150C (36 bytes)
namespace lift_0081150C {
// @name Data_0081150C_byteTable
// @summary 36-byte read-only lookup table (not executable code): 22 index/value bytes followed by 9 0x90 padding bytes.
//
// The bytes at this address are never executed; they are data. They are
// exposed here as a const table plus an accessor so the lift is portable C++20.

namespace {

constexpr std::uint8_t kByteTable_0081150C[36] = {
    0x00, 0x08, 0x08, 0x08, 0x08, 0x01, 0x02, 0x08,
    0x08, 0x03, 0x08, 0x08, 0x08, 0x08, 0x04, 0x08,
    0x08, 0x05, 0x08, 0x06, 0x08, 0x07, 0x90, 0x90,
    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
    0x90, 0x90, 0x90, 0x90,
};

}  // namespace

// Returns the address of the table (never dereferenced by callers here).
const std::uint8_t* fn_0081150C(void* self) {
    (void)self;
    return kByteTable_0081150C;
}
} // namespace lift_0081150C

// [0x00810320]
namespace lift_00810320 {
// @name set_flag_bit_24
// @summary Sets or clears bit 24 (0x01000000) in a nested struct's flags field at +0x04
// @field unknown +0x04 uint32_t field_0x04

extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

void sub_00810320(uint32_t arg1, uint32_t arg2) {
    uint32_t inner = mem_read32(arg1 + 0x4);
    uint32_t flags = mem_read32(inner + 0x4);
    if (arg2 != 0) {
        mem_write32(inner + 0x4, flags | 0x01000000u);
    } else {
        mem_write32(inner + 0x4, flags & 0xFEFFFFFFu);
    }
}
} // namespace lift_00810320
