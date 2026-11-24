// Lifted C++ translation unit: lifted/leaf/tiny_7E0000.cpp
#include "lift_compat.h"

// [0x007EFED0]
namespace lift_007EFED0 {
extern uint32_t mem_00AB2BD0;

// @name clearFlag_00AB2BD0
// @summary Clears the 32-bit global flag at 0x00AB2BD0 to zero.
void sub_007EFED0() {
    mem_00AB2BD0 = 0;
}
} // namespace lift_007EFED0

// [0x007EFEF0]
namespace lift_007EFEF0 {
extern uint32_t mem_00AB2BD8;

// @name resetFlag_00AB2BD8
// @summary Clears global flag mem_00AB2BD8 to 0

void sub_007EFEF0() {
    mem_00AB2BD8 = 0;
}
} // namespace lift_007EFEF0

// [0x007EFEE0] sub_007EFEE0 (14 bytes)
namespace lift_007EFEE0 {
extern uint32_t mem_00AB2BD4;

// @name Unknown::clearGlobalFlagAndReturnZero
// @summary Stores 0 to the global dword at 0x00AB2BD4, then zeroes the low word of EAX (AX) as the return value.
// @field none
extern uint16_t fn_007EFEE0(void) {
    mem_00AB2BD4 = 0u;
    return 0u; // xor ax, ax
}
} // namespace lift_007EFEE0
