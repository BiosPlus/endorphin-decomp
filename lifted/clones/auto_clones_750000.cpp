// Lifted C++ translation unit: lifted/clones/auto_clones_750000.cpp
#include "lift_compat.h"

// [0x007558C0] sub_007558C0 (8 bytes)
namespace lift_007558C0 {
extern void ext_0072CB90(uint32_t arg);

// @name sub_007558C0
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_007558C0(uint32_t arg) {
    ext_0072CB90(arg);
}
} // namespace lift_007558C0

// [0x007551E0]
namespace lift_007551E0 {
// @name initHugeBounds
// @summary Initializes three 64-bit global doubles from MSVCR80!_HUGE


extern uint32_t mem_00925284;
extern uint32_t mem_00B60430;
extern uint32_t mem_00B60434;
extern uint32_t mem_00B60438;
extern uint32_t mem_00B6043C;
extern uint32_t mem_00B60440;
extern uint32_t mem_00B60444;

void sub_007551E0() {
    uintptr_t huge_ptr = static_cast<uintptr_t>(mem_00925284);
    uint32_t lo = *reinterpret_cast<const uint32_t*>(huge_ptr);
    uint32_t hi = *reinterpret_cast<const uint32_t*>(huge_ptr + 4);

    mem_00B60430 = lo;
    mem_00B60434 = hi;

    mem_00B60438 = lo;
    mem_00B6043C = hi;

    mem_00B60440 = lo;
    mem_00B60444 = hi;
}
} // namespace lift_007551E0

// [0x00755270] sub_00755270 (74 bytes)
namespace lift_00755270 {
extern DWORD mem_00925284; // holds address of the MSVCR80 _HUGE double
extern DWORD mem_00B60460;
extern DWORD mem_00B60464;
extern DWORD mem_00B60468;
extern DWORD mem_00B6046C;
extern DWORD mem_00B60470;
extern DWORD mem_00B60474;
extern DWORD mem_00B60478;
extern DWORD mem_00B6047C;

// @name CopyHugeValueToGlobals_00755270
// @summary Copies the 8-byte _HUGE value into four consecutive 8-byte globals.
void fn_00755270(void* self) {
    (void)self;
    const auto* src = reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(mem_00925284));
    const DWORD lo = src[0];
    const DWORD hi = src[1];

    mem_00B60460 = lo;
    mem_00B60464 = hi;
    mem_00B60468 = lo;
    mem_00B6046C = hi;
    mem_00B60470 = lo;
    mem_00B60474 = hi;
    mem_00B60478 = lo;
    mem_00B6047C = hi;
}
} // namespace lift_00755270
