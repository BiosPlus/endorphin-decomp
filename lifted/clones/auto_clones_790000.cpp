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

// [0x0079BA10]
namespace lift_0079BA10 {
extern uint32_t mem_00B60F58;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalValue
// @summary Checks whether the argument matches any of three global 32-bit values
uint8_t __stdcall sub_0079BA10(uint32_t value) {
    return (value == mem_00B60F58 || value == mem_00B5EB78 || value == mem_00B5E400) ? 1 : 0;
}
} // namespace lift_0079BA10

// [0x0079BB80]
namespace lift_0079BB80 {
// @name copyHugeValueToGlobals_0079BB80
// @summary Copies the 8-byte _HUGE value (pointed to by mem_00925284) into three consecutive 8-byte globals.
// @field none

extern uint32_t mem_00925284;
extern uint32_t mem_00B60FD0;
extern uint32_t mem_00B60FD4;
extern uint32_t mem_00B60FD8;
extern uint32_t mem_00B60FDC;
extern uint32_t mem_00B60FE0;
extern uint32_t mem_00B60FE4;

void sub_0079BB80() {
    const uint32_t* src = reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B60FD0 = lo;
    mem_00B60FD4 = hi;
    mem_00B60FD8 = lo;
    mem_00B60FDC = hi;
    mem_00B60FE0 = lo;
    mem_00B60FE4 = hi;
}
} // namespace lift_0079BB80

// [0x0079BC10] sub_0079BC10 (74 bytes)
namespace lift_0079BC10 {
extern int mem_00925284;
extern int mem_00B61000;
extern int mem_00B61004;
extern int mem_00B61008;
extern int mem_00B6100C;
extern int mem_00B61010;
extern int mem_00B61014;
extern int mem_00B61018;
extern int mem_00B6101C;

// @name CopyHugeToGlobals_0079BC10
// @summary Copies the 8-byte value at the pointer stored in mem_00925284 (MSVCR80 _HUGE) into four consecutive 8-byte globals at 0xB61000..0xB6101C.
void fn_0079BC10(void* self) {
    (void)self;

    // _HUGE is stored as a pointer in .rdata; dereference it to get the 8-byte source.
    const uint32_t* src = reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925284)));

    uint32_t lo = src[0];
    uint32_t hi = src[1];

    // Four identical 8-byte copies into the globals block.
    int* dst = &mem_00B61000;
    for (int i = 0; i < 4; ++i) {
        dst[i * 2 + 0] = static_cast<int>(lo);
        dst[i * 2 + 1] = static_cast<int>(hi);
    }
}
} // namespace lift_0079BC10
