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

// [0x007B6094] sub_007B6094 (19 bytes)
namespace lift_007B6094 {
// @name dataTable_007B6094
// @summary 19-byte constant byte table at 0x007B6094; not executable code (bytes do not decode to a coherent function)

// The 19 bytes at 0x007B6094 are reproduced verbatim as data. They are not
// executable: decoding them yields no valid control flow.
static const uint8_t kDataTable_007B6094[19] = {
    0x00, 0x04, 0x01,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x02, 0x03, 0x03,
};
} // namespace lift_007B6094

// [0x007B617C] sub_007B617C (20 bytes)
namespace lift_007B617C {
// @name DataBytes_007B617C
// @summary Non-executing 20-byte data block (byte-value table 0x00-0x04); no observable logic.
// Note: disassembly decodes as add/lea pairs with no control flow, consistent with table data rather than code.
void fn_007B617C(void* self) {
    (void)self;
}
} // namespace lift_007B617C

// [0x007B04A8] sub_007B04A8 (24 bytes)
namespace lift_007B04A8 {
// @name dataTable_007B04A8
// @class (none)
// @summary Static 12-byte lookup table (00 01 04 04 04 04 04 04 02 04 04 03) followed by 12 bytes of 0x90 padding; not executable code.
// @field none (no class fields accessed)
static const uint8_t kTable_007B04A8[12] = {
    0x00, 0x01, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x02, 0x04, 0x04, 0x03,
};
} // namespace lift_007B04A8
