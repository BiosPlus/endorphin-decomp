// Lifted C++ translation unit: lifted/leaf/decompiled_810000.cpp
#include "lift_compat.h"

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
