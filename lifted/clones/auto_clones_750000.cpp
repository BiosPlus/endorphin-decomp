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

// [0x007551E0] sub_007551E0 (57 bytes)
namespace lift_007551E0 {
// @name sub_007551E0
// @summary Auto-lifted identical-shape clone of 0x0072D210 (copyHugeConstantToGlobals_0072D210).
namespace lift_0072D210 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B60430;
extern uint32_t mem_00B60434;
extern uint32_t mem_00B60438;
extern uint32_t mem_00B6043C;
extern uint32_t mem_00B60440;
extern uint32_t mem_00B60444;
extern uint32_t mem_00B60148;
extern uint32_t mem_00B6014C;
extern uint32_t mem_00B60150;
extern uint32_t mem_00B60154;
extern uint32_t mem_00B60158;
extern uint32_t mem_00B6015C;
extern uint32_t mem_00B60160;
extern uint32_t mem_00B60164;
extern uint32_t mem_00B602E0;
extern uint32_t mem_00B602E4;
extern uint32_t mem_00B602E8;
extern uint32_t mem_00B602EC;
extern uint32_t mem_00B602F0;
extern uint32_t mem_00B602F4;
extern uint32_t mem_00B602F8;
extern uint32_t mem_00B602FC;

// @name copyHugeConstantToGlobals_0072D210
// @summary Reads the 8-byte value at the pointer stored in mem_00925284 (_HUGE) and copies it into three 8-byte globals at 0x00B602B0, 0x00B602B8 and 0x00B602C0.
void __cdecl fn_007551E0(void)
{
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B60430 = src[0];
    mem_00B60434 = src[1];
    mem_00B60438 = src[0];
    mem_00B6043C = src[1];
    mem_00B60440 = src[0];
    mem_00B60444 = src[1];

    // Other globals referenced by the original asm; no data flow in this path.
    (void)&mem_00B60148;
    (void)&mem_00B6014C;
    (void)&mem_00B60150;
    (void)&mem_00B60154;
    (void)&mem_00B60158;
    (void)&mem_00B6015C;
    (void)&mem_00B60160;
    (void)&mem_00B60164;
    (void)&mem_00B602E0;
    (void)&mem_00B602E4;
    (void)&mem_00B602E8;
    (void)&mem_00B602EC;
    (void)&mem_00B602F0;
    (void)&mem_00B602F4;
    (void)&mem_00B602F8;
    (void)&mem_00B602FC;
}
} // namespace lift_0072D210
} // namespace lift_007551E0
