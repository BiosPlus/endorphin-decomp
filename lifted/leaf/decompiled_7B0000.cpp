// Lifted C++ translation unit: lifted/leaf/decompiled_7B0000.cpp
#include "lift_compat.h"

// [0x007B7084] sub_007B7084 (12 bytes)
namespace lift_007B7084 {
// @name SwitchCaseIndexTable_007B7084
// @summary 12-byte byte-index table indexed by (eax) and used by a jump table dispatch at 0x007B6xxx (mov cl, [eax+0x7B7084]; jmp [ecx*4+0x7B7074]); this is data, not code.
extern const uint8_t mem_007B7084[12] = {
    0x00, 0x03, 0x00, 0x03, 0x03, 0x03,
    0x01, 0x03, 0x02, 0x03, 0x01, 0x03,
};
} // namespace lift_007B7084

// [0x007B5224] sub_007B5224 (16 bytes)
namespace lift_007B5224 {
// The bytes at this address are data, not code: a 16-entry table of small values (0..3).
// No caller references this address in the lifted tree, so the table is preserved as-is.
// @name Table_007B5224_Bytes16
// @summary 16-byte constant lookup table of values 0..3 (data, not executable code)

// Raw bytes at 0x007B5224..0x007B5233, in memory order.
static const uint8_t kTable_007B5224[16] = {
    0x00, 0x03, 0x00, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x03, 0x02, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
};
} // namespace lift_007B5224
