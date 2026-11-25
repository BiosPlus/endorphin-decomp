// Lifted C++ translation unit: lifted/clones/auto_clones_780000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>
#include <cstdint>

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

// [0x00784430] sub_00784430 (41 bytes)
namespace lift_00784430 {
extern int mem_00B60918;
extern int mem_00B60920;
extern int mem_00B6091C;
extern int mem_00B60924;

// @name initGlobals_B60918
// @summary Stores two constant pointer-sized values and a zero into four consecutive globals at 0xB60918..0xB60924.
void fn_00784430(void) {
    mem_00B60918 = 0x00B608E8;
    mem_00B60920 = 0x00AAF3CC;
    mem_00B6091C = 0x00B61690;
    mem_00B60924 = 0x00000000;
}
} // namespace lift_00784430

// [0x00785F60]
namespace lift_00785F60 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B609C0;
extern uint32_t mem_00B609C4;
extern uint32_t mem_00B609C8;
extern uint32_t mem_00B609CC;
extern uint32_t mem_00B609D0;
extern uint32_t mem_00B609D4;

// @name initHugeBounds
// @summary Initializes three 64-bit global values from MSVCR80.dll!_HUGE.
void sub_00785F60() {
    const uint32_t* huge = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B609C0 = huge[0];
    mem_00B609C4 = huge[1];
    mem_00B609C8 = huge[0];
    mem_00B609CC = huge[1];
    mem_00B609D0 = huge[0];
    mem_00B609D4 = huge[1];
}
} // namespace lift_00785F60

// [0x00785FF0] sub_00785FF0 (74 bytes)
namespace lift_00785FF0 {
// @name sub_00785FF0
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B609F0;
extern uint32_t mem_00B609F4;
extern uint32_t mem_00B609F8;
extern uint32_t mem_00B609FC;
extern uint32_t mem_00B60A00;
extern uint32_t mem_00B60A04;
extern uint32_t mem_00B60A08;
extern uint32_t mem_00B60A0C;
extern uint32_t mem_00925284;

// @name fn_00785FF0 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B609F0 = lo;
    mem_00B609F4 = hi;
    mem_00B609F8 = lo;
    mem_00B609FC = hi;
    mem_00B60A00 = lo;
    mem_00B60A04 = hi;
    mem_00B60A08 = lo;
    mem_00B60A0C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_00785FF0

// [0x00787560] sub_00787560 (74 bytes)
namespace lift_00787560 {
// @name sub_00787560
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B60B70;
extern uint32_t mem_00B60B74;
extern uint32_t mem_00B60B78;
extern uint32_t mem_00B60B7C;
extern uint32_t mem_00B60B80;
extern uint32_t mem_00B60B84;
extern uint32_t mem_00B60B88;
extern uint32_t mem_00B60B8C;
extern uint32_t mem_00925284;

// @name fn_00787560 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B60B70 = lo;
    mem_00B60B74 = hi;
    mem_00B60B78 = lo;
    mem_00B60B7C = hi;
    mem_00B60B80 = lo;
    mem_00B60B84 = hi;
    mem_00B60B88 = lo;
    mem_00B60B8C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_00787560

// [0x00780270] sub_00780270 (16 bytes)
namespace lift_00780270 {
// @name sub_00780270
// @summary Auto-lifted identical-shape clone of 0x007140F0 (sub_007140F0).
namespace lift_007140F0 {
// @name sub_007140F0
// @summary Auto-lifted identical-shape clone of 0x00780270 (initGlobalArray_00B608A0).
namespace lift_00780270 {
// @name initGlobalArray_00B608A0
// @summary Initializes global array at 0x00B608A0 with 0xB1 (177) elements.


extern uint8_t mem_00B608A0;
extern void* __thiscall ext_00780030(void* self_ptr, int32_t count);

void* fn_00780270() {
    return ext_00780030(&mem_00B608A0, 0xB1);
}
} // namespace lift_00780270
} // namespace lift_007140F0
} // namespace lift_00780270

// [0x007844A0] sub_007844A0 (41 bytes)
namespace lift_007844A0 {
// @name sub_007844A0
// @summary Auto-lifted identical-shape clone of 0x006F9380 (sub_006F9380_initGlobals).
namespace lift_006F9380 {
extern uint32_t mem_00B60908;
extern uint32_t mem_00B60910;
extern uint32_t mem_00B6090C;
extern uint32_t mem_00B60914;

// @name sub_006F9380_initGlobals
// @summary Stores four constant words into globals mem_00B5E248/250/24C/254 (no class context).
void fn_007844A0(void* self) {
    (void)self;
    mem_00B60908 = 0xB608ECu;
    mem_00B60910 = 0xAAF3C0u;
    mem_00B6090C = 0xB5EB68u;
    mem_00B60914 = 0x00000000u;
}
} // namespace lift_006F9380
} // namespace lift_007844A0

// [0x00787520] sub_00787520 (36 bytes)
namespace lift_00787520 {
// @name sub_00787520
// @summary Auto-lifted identical-shape clone of 0x006FFEE0 (SetNegHugeGlobals_006FFEE0).
namespace lift_006FFEE0 {
namespace lift_006FFEE0 {
// mem_00925284 holds the address of MSVCR80 _HUGE (a double, +inf); loaded indirectly.
extern const double* mem_00925284;
extern double mem_00B60B58;
extern double mem_00B60B60;
extern double mem_00B60B68;

// @name SetNegHugeGlobals_006FFEE0
// @summary Sets three global doubles to -_HUGE (negative infinity), loading _HUGE through the pointer stored at mem_00925284.
void fn_00787520() {
    const double* huge = mem_00925284;
    mem_00B60B58 = -*huge;
    mem_00B60B68 = -*huge;
    mem_00B60B60 = -*huge;
}
} // namespace lift_006FFEE0
} // namespace lift_006FFEE0
} // namespace lift_00787520

// [0x0078D2C0] sub_0078D2C0 (8 bytes)
namespace lift_0078D2C0 {
// @name sub_0078D2C0
// @summary Auto-lifted identical-shape clone of 0x0044C9A0 (sub_0044C9A0).
namespace lift_0044C9A0 {
// @name sub_0044C9A0
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_0078D720(void* arg);

void fn_0078D2C0() {
    ext_0078D720(reinterpret_cast<void*>(static_cast<uintptr_t>(16)));
}
} // namespace lift_00437DE0
} // namespace lift_0044C9A0
} // namespace lift_0078D2C0
