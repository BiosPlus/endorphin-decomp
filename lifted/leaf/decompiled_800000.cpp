// Lifted C++ translation unit: lifted/leaf/decompiled_800000.cpp
#include "lift_compat.h"

// [0x0080FC40]
namespace lift_0080FC40 {
extern uint32_t ext_008596E0(uint32_t size);

// @name GlobalAllocZeroWrapper
// @summary Forwards its single uint32_t size argument to ext_008596E0 (GlobalAllocZeroFlags clone) and returns the result.
uint32_t fn_0080FC40(uint32_t size) {
    return ext_008596E0(size);
}
} // namespace lift_0080FC40

// [0x0080B530] sub_0080B530 (16 bytes)
namespace lift_0080B530 {
// Known callee 0x008596E0: sub_008596E0 (Auto-lifted identical-shape clone of 0x0079AF40 (GlobalAllocZeroFlags).)
extern uint32_t ext_008596E0(uint32_t size);

// @name sub_0080B530_forwardAllocZeroFlags
// @summary Forwards its single cdecl uint32_t argument unchanged to ext_008596E0 and returns that call's result.
// (No struct field accesses, so no @class or @field lines.)
extern uint32_t fn_0080B530(uint32_t size) {
    return ext_008596E0(size);
}
} // namespace lift_0080B530
