// Lifted C++ translation unit: lifted/leaf/tiny_800000.cpp
#include "lift_compat.h"
extern "C" int mem_00AB6B0C;

// [0x0080EFC0] sub_0080EFC0 (16 bytes)
// @name sub_0080EFC0
// @summary Returns address of global mem_00AB6B0C.
extern "C" void* __cdecl fn_0080EFC0(void) {
    return &mem_00AB6B0C;
}

// [0x00803980] sub_00803980 (13 bytes)
namespace lift_00803980 {
// @name fn_00803980 (returns **a - *b)
// @summary Returns the int32 value behind a double pointer (arg0) minus the int32 value behind a pointer (arg1).
// (free function; no class, so no @class or @field entries)
int32_t fn_00803980(int32_t** a, const int32_t* b) {
    return **a - *b;
}
} // namespace lift_00803980
