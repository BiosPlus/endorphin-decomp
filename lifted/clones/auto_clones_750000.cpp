// Lifted C++ translation unit: lifted/clones/auto_clones_750000.cpp
#include "lift_compat.h"
#include <string>

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

// [0x007558C0] sub_007558C0 (8 bytes)
namespace lift_007558C0 {
extern void ext_0072CB90(uint32_t arg);

// @name sub_007558C0
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_007558C0(uint32_t arg) {
    ext_0072CB90(arg);
}
} // namespace lift_007558C0
