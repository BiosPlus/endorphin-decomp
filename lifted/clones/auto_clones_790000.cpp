// Lifted C++ translation unit: lifted/clones/auto_clones_790000.cpp
#include "lift_compat.h"

// [0x0079BBD0] sub_0079BBD0 (36 bytes)
namespace lift_0079BBD0 {
// @name sub_0079BBD0
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B60FE8;
extern double mem_00B60FF0;
extern double mem_00B60FF8;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_0079BBD0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60FE8 = -huge;
    mem_00B60FF0 = -huge;
    mem_00B60FF8 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_0079BBD0

// [0x0079B8F0] sub_0079B8F0 (41 bytes)
namespace lift_0079B8F0 {
extern uint32_t mem_00B60F48;
extern uint32_t mem_00B60F50;
extern uint32_t mem_00B60F4C;
extern uint32_t mem_00B60F54;

// @name initGlobalsA_0079B8F0
// @summary Stores three constant addresses and a zero into four DWORD globals (static init).
void fn_0079B8F0(void* self) {
    (void)self;
    mem_00B60F48 = 0x00B60FACu;
    mem_00B60F50 = 0x00AAFE54u;
    mem_00B60F4C = 0x00B5EB50u;
    mem_00B60F54 = 0u;
}
} // namespace lift_0079B8F0

// [0x0079F1D0]
namespace lift_0079F1D0 {
// @name setGlobalsInit_0079F1D0
// @summary Stores four initial values into globals mem_00B61158, mem_00B61160, mem_00B6115C and mem_00B61164.

extern uint32_t mem_00B61158;
extern uint32_t mem_00B61160;
extern uint32_t mem_00B6115C;
extern uint32_t mem_00B61164;

void setGlobalsInit_0079F1D0(void) {
    mem_00B61158 = 0x00B61168u;
    mem_00B61160 = 0x00AAFF80u;
    mem_00B6115C = 0x00B61220u;
    mem_00B61164 = 0x00000000u;
}
} // namespace lift_0079F1D0

// [0x0079B960]
namespace lift_0079B960 {
// Globals written by this initializer (32-bit storage slots).
extern DWORD mem_00B60FB0;
extern DWORD mem_00B60FB4;
extern DWORD mem_00B60FB8;
extern DWORD mem_00B60FBC;

// @name sub_0079B960_initGlobalQuad
// @summary Stores four constant 32-bit values into the mem_00B60FB0..FBC global block.
void sub_0079B960_initGlobalQuad() {
    mem_00B60FB0 = 0x00B60F58u;
    mem_00B60FB8 = 0x00AAFE44u;
    mem_00B60FB4 = 0x00B5EB50u;
    mem_00B60FBC = 0x00000000u;
}
} // namespace lift_0079B960
