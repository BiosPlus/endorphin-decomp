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

// [0x00787520] sub_00787520 (36 bytes)
namespace lift_00787520 {
// MSVCR80 _HUGE: pointer to the HUGE_VAL double (original reads it via an import slot at 0x925284).
extern double* ext__HUGE;

extern double mem_00B60B58;
extern double mem_00B60B60;
extern double mem_00B60B68;

// @name initNegHugeGlobals
// @summary Stores -HUGE_VAL into three double globals (mem_00B60B58/60/68).
void fn_00787520(void* self) {
    (void)self;
    const double negHuge = -*ext__HUGE;
    mem_00B60B58 = negHuge;
    mem_00B60B60 = negHuge;
    mem_00B60B68 = negHuge;
}
} // namespace lift_00787520

// [0x00783100] sub_00783100 (41 bytes)
namespace lift_00783100 {
extern uint32_t mem_00B608C8;
extern uint32_t mem_00B608D0;
extern uint32_t mem_00B608CC;
extern uint32_t mem_00B608D4;

// @name init_global_block_B608C8
// @summary Initializes four dwords of the global block at 0xB608C8 (two link pointers, a vtable pointer, and a zeroed tail word).
void fn_00783100(void* self) {
    (void)self;
    mem_00B608C8 = 0x00B608B0u;
    mem_00B608D0 = 0x00AAF38Cu;
    mem_00B608CC = 0x00B608B8u;
    mem_00B608D4 = 0x00000000u;
}
} // namespace lift_00783100

// [0x007844A0] sub_007844A0 (41 bytes)
namespace lift_007844A0 {
extern uint32_t mem_00B60908;
extern uint32_t mem_00B60910;
extern uint32_t mem_00B6090C;
extern uint32_t mem_00B60914;

// @name SetGlobalsInitA_007844A0
// @summary Stores three constant pointers/values into globals mem_00B60908/0C/10 and clears mem_00B60914.
void fn_007844A0(void* self) {
    (void)self;
    mem_00B60908 = 0x00B608ECu;
    mem_00B60910 = 0x00AAF3C0u;
    mem_00B6090C = 0x00B5EB68u;
    mem_00B60914 = 0x00000000u;
}
} // namespace lift_007844A0
