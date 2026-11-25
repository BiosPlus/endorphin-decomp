// Lifted C++ translation unit: lifted/clones/auto_clones_700000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00704BE0] sub_00704BE0 (10 bytes)
namespace lift_00704BE0 {
// @name sub_00704BE0
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_00704BF0(void);
extern void ext_00704C10(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_00704BE0(void) {
    ext_00704BF0();
    ext_00704C10();
}
} // namespace lift_007AE0F0
} // namespace lift_00704BE0

// [0x00702F60] sub_00702F60 (35 bytes)
namespace lift_00702F60 {
// @name sub_00702F60
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006B9D20(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_00702F60(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x1F8);
    ext_006B9D20(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_00702F60

// [0x00701100]
namespace lift_00701100 {
// @name init_huge_vector_globals
// @summary Initializes three 64-bit globals from the MSVCR80 _HUGE double pointer.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5E7D8;
extern uint32_t mem_00B5E7DC;
extern uint32_t mem_00B5E7E0;
extern uint32_t mem_00B5E7E4;
extern uint32_t mem_00B5E7E8;
extern uint32_t mem_00B5E7EC;

void sub_00701100() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5E7D8 = huge_ptr[0];
    mem_00B5E7DC = huge_ptr[1];
    mem_00B5E7E0 = huge_ptr[0];
    mem_00B5E7E4 = huge_ptr[1];
    mem_00B5E7E8 = huge_ptr[0];
    mem_00B5E7EC = huge_ptr[1];
}
} // namespace lift_00701100

// [0x00703C60]
namespace lift_00703C60 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5E9D0;
extern uint32_t mem_00B5E9D4;
extern uint32_t mem_00B5E9D8;
extern uint32_t mem_00B5E9DC;
extern uint32_t mem_00B5E9E0;
extern uint32_t mem_00B5E9E4;

// @name initHugeVec3Globals
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.
void sub_00703C60(void) {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];
    mem_00B5E9D0 = lo;
    mem_00B5E9D4 = hi;
    mem_00B5E9D8 = lo;
    mem_00B5E9DC = hi;
    mem_00B5E9E0 = lo;
    mem_00B5E9E4 = hi;
}
} // namespace lift_00703C60

// [0x0070A2A0]
namespace lift_0070A2A0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit globals (likely a 3D double vector) from MSVCR80!_HUGE.


extern uint32_t* mem_00925284;
extern uint32_t mem_00B5EBC8;
extern uint32_t mem_00B5EBCC;
extern uint32_t mem_00B5EBD0;
extern uint32_t mem_00B5EBD4;
extern uint32_t mem_00B5EBD8;
extern uint32_t mem_00B5EBDC;

void sub_0070A2A0() {
    uint32_t* huge = mem_00925284;
    mem_00B5EBC8 = huge[0];
    mem_00B5EBCC = huge[1];
    mem_00B5EBD0 = huge[0];
    mem_00B5EBD4 = huge[1];
    mem_00B5EBD8 = huge[0];
    mem_00B5EBDC = huge[1];
}
} // namespace lift_0070A2A0

// [0x0070F780]
namespace lift_0070F780 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5EEE0;
extern uint32_t mem_00B5EEE4;
extern uint32_t mem_00B5EEE8;
extern uint32_t mem_00B5EEEC;
extern uint32_t mem_00B5EEF0;
extern uint32_t mem_00B5EEF4;

// @name initHugeDoubleGlobals
// @summary Initializes three 64-bit globals from MSVCR80!_HUGE
void sub_0070F780() {
    const uint32_t* huge = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5EEE0 = huge[0];
    mem_00B5EEE4 = huge[1];
    mem_00B5EEE8 = huge[0];
    mem_00B5EEEC = huge[1];
    mem_00B5EEF0 = huge[0];
    mem_00B5EEF4 = huge[1];
}
} // namespace lift_0070F780

// [0x0070C8E0]
namespace lift_0070C8E0 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5ED48;
extern uint32_t mem_00B5ED4C;
extern uint32_t mem_00B5ED50;
extern uint32_t mem_00B5ED54;
extern uint32_t mem_00B5ED58;
extern uint32_t mem_00B5ED5C;

// @name initHugeBounds
// @summary Initializes three 64-bit global values from MSVCR80.dll!_HUGE.
void sub_0070C8E0() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];

    mem_00B5ED48 = lo;
    mem_00B5ED4C = hi;

    lo = huge_ptr[0];
    hi = huge_ptr[1];
    mem_00B5ED50 = lo;
    mem_00B5ED54 = hi;

    lo = huge_ptr[0];
    hi = huge_ptr[1];
    mem_00B5ED58 = lo;
    mem_00B5ED5C = hi;
}
} // namespace lift_0070C8E0

// [0x0070A330] sub_0070A330 (74 bytes)
namespace lift_0070A330 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5EBF8;
extern uint32_t mem_00B5EBFC;
extern uint32_t mem_00B5EC00;
extern uint32_t mem_00B5EC04;
extern uint32_t mem_00B5EC08;
extern uint32_t mem_00B5EC0C;
extern uint32_t mem_00B5EC10;
extern uint32_t mem_00B5EC14;

// @name CopyHugeValueToGlobals_0070A330
// @summary Reads the 64-bit value pointed to by the global pointer at 0x925284 (MSVCR80 _HUGE) and copies it into five consecutive 64-bit globals at 0xB5EBF8..0xB5EC17, as two 32-bit halves per slot.
void fn_0070A330(void* self) {
    (void)self;
    // The global at mem_00925284 holds the address of the source (_HUGE).
    const uint32_t* src = reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(mem_00925284));

    // Five slots, each receiving the low and high 32-bit words of *src.
    mem_00B5EBF8 = src[0];
    mem_00B5EBFC = src[1];
    mem_00B5EC00 = src[0];
    mem_00B5EC04 = src[1];
    mem_00B5EC08 = src[0];
    mem_00B5EC0C = src[1];
    mem_00B5EC10 = src[0];
    mem_00B5EC14 = src[1];
}
} // namespace lift_0070A330

// [0x0070F810] sub_0070F810 (74 bytes)
namespace lift_0070F810 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5EF10;
extern uint32_t mem_00B5EF14;
extern uint32_t mem_00B5EF18;
extern uint32_t mem_00B5EF1C;
extern uint32_t mem_00B5EF20;
extern uint32_t mem_00B5EF24;
extern uint32_t mem_00B5EF28;
extern uint32_t mem_00B5EF2C;

// @name InitHugeValueGlobals_0070F810
// @summary Copies the 8-byte _HUGE double (via the pointer stored at mem_00925284) into four consecutive 8-byte globals at mem_00B5EF10..mem_00B5EF2C.
void fn_0070F810(void* self) {
    (void)self;

    // mem_00925284 holds the address of MSVCR80 _HUGE (a double).
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    // Each 8-byte destination is written as two 32-bit halves (low, high).
    mem_00B5EF10 = src[0];
    mem_00B5EF14 = src[1];
    mem_00B5EF18 = src[0];
    mem_00B5EF1C = src[1];
    mem_00B5EF20 = src[0];
    mem_00B5EF24 = src[1];
    mem_00B5EF28 = src[0];
    mem_00B5EF2C = src[1];
}
} // namespace lift_0070F810
