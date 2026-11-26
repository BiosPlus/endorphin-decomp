// Lifted C++ translation unit: lifted/clones/auto_clones_770000.cpp
#include "lift_compat.h"

// [0x007747B0] sub_007747B0 (36 bytes)
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B605C8;
extern double mem_00B605D0;
extern double mem_00B605D8;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_007747B0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B605C8 = -huge;
    mem_00B605D0 = -huge;
    mem_00B605D8 = -huge;
}
} // namespace lift_007747B0

// [0x00774760]
namespace lift_00774760 {
extern uint32_t* mem_00925284;
extern uint32_t mem_00B605B0;
extern uint32_t mem_00B605B4;
extern uint32_t mem_00B605B8;
extern uint32_t mem_00B605BC;
extern uint32_t mem_00B605C0;
extern uint32_t mem_00B605C4;

// @name initHugeVectorGlobals
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.
void __cdecl sub_00774760() {
    uint32_t* huge_ptr = mem_00925284;
    mem_00B605B0 = huge_ptr[0];
    mem_00B605B4 = huge_ptr[1];
    mem_00B605B8 = huge_ptr[0];
    mem_00B605BC = huge_ptr[1];
    mem_00B605C0 = huge_ptr[0];
    mem_00B605C4 = huge_ptr[1];
}
} // namespace lift_00774760

// [0x0077F760] sub_0077F760 (74 bytes)
namespace lift_0077F760 {
extern uint32_t mem_00925284;  // holds address of _HUGE (MSVCR80.dll) double value
extern uint32_t mem_00B60760;
extern uint32_t mem_00B60764;
extern uint32_t mem_00B60768;
extern uint32_t mem_00B6076C;
extern uint32_t mem_00B60770;
extern uint32_t mem_00B60774;
extern uint32_t mem_00B60778;
extern uint32_t mem_00B6077C;

// @name CopyHugeToGlobals_0077F760
// @summary Copies the 8-byte _HUGE value into four consecutive 8-byte globals (b60760..b6077C).
// @field none
void fn_0077F760(void) {
    const uint32_t* huge = reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = huge[0];
    const uint32_t hi = huge[1];

    mem_00B60760 = lo;
    mem_00B60764 = hi;
    mem_00B60768 = lo;
    mem_00B6076C = hi;
    mem_00B60770 = lo;
    mem_00B60774 = hi;
    mem_00B60778 = lo;
    mem_00B6077C = hi;
}
} // namespace lift_0077F760

// [0x007747F0] sub_007747F0 (74 bytes)
namespace lift_007747F0 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B605E0;
extern uint32_t mem_00B605E4;
extern uint32_t mem_00B605E8;
extern uint32_t mem_00B605EC;
extern uint32_t mem_00B605F0;
extern uint32_t mem_00B605F4;
extern uint32_t mem_00B605F8;
extern uint32_t mem_00B605FC;

// @name CopyHugeValueToGlobals_007747F0
// @summary Copies the 8-byte value pointed to by the _HUGE pointer into four consecutive 8-byte globals (0xB605E0..0xB605FC).
void fn_007747F0() {
    // mem_00925284 holds the address of the MSVCR _HUGE double.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    // Four 8-byte copies, each re-reading the source as the original did.
    mem_00B605E0 = src[0];
    mem_00B605E4 = src[1];
    mem_00B605E8 = src[0];
    mem_00B605EC = src[1];
    mem_00B605F0 = src[0];
    mem_00B605F4 = src[1];
    mem_00B605F8 = src[0];
    mem_00B605FC = src[1];
}
} // namespace lift_007747F0

// [0x0077F720] sub_0077F720 (36 bytes)
namespace lift_0077F720 {
// Global holding the address of a double constant (HUGE_VAL-style value in .rdata).
extern uint32_t mem_00925284;
// Destination globals (doubles).
extern double mem_00B60748;
extern double mem_00B60750;
extern double mem_00B60758;
// Other referenced globals from the original stub (type not recovered; not touched by this function).
extern int mem_00B605B0;
extern int mem_00B605B4;
extern int mem_00B605B8;
extern int mem_00B605BC;
extern int mem_00B605C0;
extern int mem_00B605C4;
extern int mem_00B60730;
extern int mem_00B60734;
extern int mem_00B60738;
extern int mem_00B6073C;
extern int mem_00B60740;
extern int mem_00B60744;

// @name initNegatedHugeGlobals_0077F720
// @summary Loads the double pointed to by global mem_00925284 and stores its negation into the three globals mem_00B60748, mem_00B60750 and mem_00B60758.
// @field none
void fn_0077F720(void) {
    const double* src = reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60748 = -*src; // fld [eax]; fchs; fstp [0xB60748]
    mem_00B60750 = -*src; // fld [eax]; fchs; fstp [0xB60750]
    mem_00B60758 = -*src; // fld [eax]; fchs; fstp [0xB60758]

    // Original stub referenced these globals; this function never reads or writes them.
    // Only the address is taken so the reference is retained without any effect.
    (void)&mem_00B605B0; (void)&mem_00B605B4; (void)&mem_00B605B8; (void)&mem_00B605BC;
    (void)&mem_00B605C0; (void)&mem_00B605C4; (void)&mem_00B60730; (void)&mem_00B60734;
    (void)&mem_00B60738; (void)&mem_00B6073C; (void)&mem_00B60740; (void)&mem_00B60744;
}
} // namespace lift_0077F720

// [0x0077F6D0] sub_0077F6D0 (57 bytes)
namespace lift_0077F6D0 {
// @name sub_0077F6D0
// @summary Auto-lifted identical-shape clone of 0x0072D210 (copyHugeConstantToGlobals_0072D210).
namespace lift_0072D210 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B60730;
extern uint32_t mem_00B60734;
extern uint32_t mem_00B60738;
extern uint32_t mem_00B6073C;
extern uint32_t mem_00B60740;
extern uint32_t mem_00B60744;
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
void __cdecl fn_0077F6D0(void)
{
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B60730 = src[0];
    mem_00B60734 = src[1];
    mem_00B60738 = src[0];
    mem_00B6073C = src[1];
    mem_00B60740 = src[0];
    mem_00B60744 = src[1];

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
} // namespace lift_0077F6D0
