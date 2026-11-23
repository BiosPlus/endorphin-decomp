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
