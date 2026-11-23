// Lifted C++ translation unit: lifted/clones/auto_clones_780000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0078D2C0] sub_0078D2C0 (8 bytes)
namespace lift_0078D2C0 {
// @name sub_0078D2C0
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_0078D720(void* arg);

void fn_0078D2C0() {
    ext_0078D720(reinterpret_cast<void*>(static_cast<uintptr_t>(16)));
}
} // namespace lift_00437DE0
} // namespace lift_0078D2C0

// [0x00784820]
namespace lift_00784820 {
// @name sub_00784820
// @summary Calls sub_00784830 and tail-calls sub_00784840.


extern void ext_00784830();
extern void ext_00784840();

void sub_00784820() {
    ext_00784830();
    ext_00784840();
}
} // namespace lift_00784820
