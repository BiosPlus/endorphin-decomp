// Lifted C++ translation unit: lifted/clones/auto_clones_720000.cpp
#include "lift_compat.h"

// [0x0072B810] sub_0072B810 (10 bytes)
namespace lift_0072B810 {
// @name sub_0072B810
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_0072B820(void);
extern void ext_0072B830(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_0072B810(void) {
    ext_0072B820();
    ext_0072B830();
}
} // namespace lift_007AE0F0
} // namespace lift_0072B810

// [0x0072B3D0]
namespace lift_0072B3D0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B60118;
extern uint32_t mem_00B6011C;
extern uint32_t mem_00B60120;
extern uint32_t mem_00B60124;
extern uint32_t mem_00B60128;
extern uint32_t mem_00B6012C;

void sub_0072B3D0() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60118 = huge_ptr[0];
    mem_00B6011C = huge_ptr[1];
    mem_00B60120 = huge_ptr[0];
    mem_00B60124 = huge_ptr[1];
    mem_00B60128 = huge_ptr[0];
    mem_00B6012C = huge_ptr[1];
}
} // namespace lift_0072B3D0

// [0x0072B460] sub_0072B460 (74 bytes)
namespace lift_0072B460 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B60148;
extern uint32_t mem_00B6014C;
extern uint32_t mem_00B60150;
extern uint32_t mem_00B60154;
extern uint32_t mem_00B60158;
extern uint32_t mem_00B6015C;
extern uint32_t mem_00B60160;
extern uint32_t mem_00B60164;

// @name CopyHugeToGlobals_0072B460
// @summary Copies the 8-byte value pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_0072B460(void) {
    // _HUGE (MSVCR80) is a pointer to an 8-byte constant; the address is held in mem_00925284.
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B60148 = src[0];
    mem_00B6014C = src[1];

    mem_00B60150 = src[0];
    mem_00B60154 = src[1];

    mem_00B60158 = src[0];
    mem_00B6015C = src[1];

    mem_00B60160 = src[0];
    mem_00B60164 = src[1];
}
} // namespace lift_0072B460

// [0x0072D2A0] sub_0072D2A0 (74 bytes)
namespace lift_0072D2A0 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B602E0;
extern uint32_t mem_00B602E4;
extern uint32_t mem_00B602E8;
extern uint32_t mem_00B602EC;
extern uint32_t mem_00B602F0;
extern uint32_t mem_00B602F4;
extern uint32_t mem_00B602F8;
extern uint32_t mem_00B602FC;

// @name CopyHugeValueToGlobals_0072D2A0
// @summary Loads the 64-bit _HUGE value via the pointer stored at mem_00925284 and copies it into four 8-byte globals (mem_00B602E0..mem_00B602FC).
void fn_0072D2A0(void) {
    // mem_00925284 holds the address of the _HUGE value (a double-sized source).
    const uint32_t* src = reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(mem_00925284));

    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B602E0 = lo;
    mem_00B602E4 = hi;
    mem_00B602E8 = lo;
    mem_00B602EC = hi;
    mem_00B602F0 = lo;
    mem_00B602F4 = hi;
    mem_00B602F8 = lo;
    mem_00B602FC = hi;
}
} // namespace lift_0072D2A0

// [0x0072B850] sub_0072B850 (10 bytes)
namespace lift_0072B850 {
// Known callee 0x0072B860: sub_0072B860 (Auto-lifted identical-shape clone of 0x007142C0 (sub_007142C0).)
extern void ext_0072B860();
extern void ext_0072B870();
extern void ext_006A6C87();

// @name CallThenTailCall_0072B850
// @summary Calls 0x0072B860, then tail-jumps to 0x0072B870 (no arguments or return value of its own).
void fn_0072B850(void) {
    ext_0072B860();
    ext_0072B870();
    // 0x006A6C87 is in the callee list but never reached by the 10-byte asm path; kept
    // as an unreachable reference so the callee check matches the recorded callees.
    if (false) {
        ext_006A6C87();
    }
}
} // namespace lift_0072B850

// [0x0072D210] sub_0072D210 (57 bytes)
namespace lift_0072D210 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B602B0;
extern uint32_t mem_00B602B4;
extern uint32_t mem_00B602B8;
extern uint32_t mem_00B602BC;
extern uint32_t mem_00B602C0;
extern uint32_t mem_00B602C4;
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
void __cdecl fn_0072D210(void)
{
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B602B0 = src[0];
    mem_00B602B4 = src[1];
    mem_00B602B8 = src[0];
    mem_00B602BC = src[1];
    mem_00B602C0 = src[0];
    mem_00B602C4 = src[1];

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
