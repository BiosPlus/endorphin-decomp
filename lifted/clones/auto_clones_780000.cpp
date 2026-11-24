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

// [0x00780260] sub_00780260 (10 bytes)
namespace lift_00780260 {
// @name sub_00780260
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_00780270(void);
extern void ext_00780280(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_00780260(void) {
    ext_00780270();
    ext_00780280();
}
} // namespace lift_007AE0F0
} // namespace lift_00780260

// [0x00785FB0]
namespace lift_00785FB0 {
// @name negate_huge_into_globals
// @summary Loads the double pointed to by the HUGE constant and stores its negation into three globals.

extern uint32_t mem_00925284;   // .rdata pointer to _HUGE (double)
extern double mem_00B609D8;
extern double mem_00B609E0;
extern double mem_00B609E8;

void negate_huge_into_globals() {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B609D8 = -huge;
    mem_00B609E0 = -huge;
    mem_00B609E8 = -huge;
}
} // namespace lift_00785FB0
