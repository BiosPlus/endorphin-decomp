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
