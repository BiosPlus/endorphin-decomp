// Lifted C++ translation unit: lifted/leaf/decompiled_430000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00431310 {
extern void ext_006A5EA8(uint32_t arg);

// @name sub_00431310
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_00431310(uint32_t arg) {
    ext_006A5EA8(arg);
}
} // namespace lift_00431310

// [0x00437DC0] sub_00437DC0 (18 bytes)
namespace lift_00437DC0 {
extern void ext_00436FA0(void* arg, int flag);

// @name sub_00437DC0
// @summary Auto-lifted identical-shape clone of 0x005A9960 (NMData::BackGroundData::vfunc_6).
void fn_00437DC0(void* arg) {
    ext_00436FA0(arg, 9632248);
}
} // namespace lift_00437DC0

// [0x00437DE0]
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00437DC0(void* arg);

void fn_00437DE0() {
    ext_00437DC0(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
