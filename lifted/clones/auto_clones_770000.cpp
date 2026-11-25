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
