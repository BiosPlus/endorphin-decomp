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

// [0x0077F720] sub_0077F720 (36 bytes)
namespace lift_0077F720 {
extern uint32_t mem_00925284;   // holds address of the CRT _HUGE double (.rdata pointer)
extern double mem_00B60748;
extern double mem_00B60750;
extern double mem_00B60758;

// @name NegateHugeIntoGlobals
// @summary Stores -_HUGE (negated CRT HUGE_VAL) into three global doubles.
void fn_0077F720() {
    const double huge =
        *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60748 = -huge;
    mem_00B60750 = -huge;
    mem_00B60758 = -huge;
}
} // namespace lift_0077F720

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

// [0x0077F6D0]
namespace lift_0077F6D0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit double globals from MSVCR80.dll!_HUGE.

extern uint32_t mem_00925284;
extern uint32_t mem_00B60730;
extern uint32_t mem_00B60734;
extern uint32_t mem_00B60738;
extern uint32_t mem_00B6073C;
extern uint32_t mem_00B60740;
extern uint32_t mem_00B60744;

void sub_0077F6D0() {
    const uint32_t* huge = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60730 = huge[0];
    mem_00B60734 = huge[1];
    mem_00B60738 = huge[0];
    mem_00B6073C = huge[1];
    mem_00B60740 = huge[0];
    mem_00B60744 = huge[1];
}
} // namespace lift_0077F6D0
