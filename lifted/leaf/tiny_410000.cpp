// Lifted C++ translation unit: lifted/leaf/tiny_410000.cpp
#include "lift_compat.h"
extern "C" int mem_0092BD10;
extern "C" int mem_0092C6E8;
extern "C" DWORD mem_0092D020;
extern "C" int mem_0092D778;
extern "C" int mem_0092DA8C;

// [0x00410350] sub_00410350 (6 bytes)
// @name GetStringConstant_00410350
// @summary Returns the address of the read-only string constant "$aj".
extern "C" const char* __cdecl fn_00410350() {
    return reinterpret_cast<const char*>(&mem_0092BD10);
}

// [0x00414240]
// @name sub_00414240
// @summary Returns the address of the constant string "`KE" stored in .rdata (mem_0092C418).
extern "C" const char* __cdecl fn_00414240() {
    return reinterpret_cast<const char*>(0x0092C418);
}

// [0x00415580] sub_00415580 (6 bytes)
// @name sub_00415580
// @summary Returns the address of the read-only string constant "$aj" stored in .rdata (mem_0092C6E8).
extern "C" const char* __cdecl fn_00415580() {
    return reinterpret_cast<const char*>(&mem_0092C6E8);
}

// [0x00416B60] Returns a pointer to the string constant ",bj".
#include "lift_compat.h"

// @name GetStringConstant_00416B60
// @summary Returns the address of the static string constant ",bj" (mem_0092CAEC).
extern "C" const char* __cdecl fn_00416B60() {
    return ",bj";
}

// [0x00417300] Returns a pointer to the constant string ",bj" in .rdata.
#include "lift_compat.h"

// @name GetStringConstant_00417300
// @summary Returns the address of the constant string ",bj" (mem_0092CD54).
extern "C" const char* fn_00417300() {
    return reinterpret_cast<const char*>(0x0092CD54);
}

// [0x00419700] sub_00419700 (6 bytes)
// @name sub_00419700
// @summary Returns the address of the read-only global mem_0092D020 (initialised to 0x006A5FCE); leaf getter with no side effects.
extern "C" const DWORD* fn_00419700(void) {
    return &mem_0092D020;
}

// [0x0041B580] sub_0041B580 (6 bytes)
// @name sub_0041B580
// @summary Returns the address of the read-only string constant ".cj" stored in .rdata (mem_0092D778).
extern "C" const char* __cdecl fn_0041B580() {
    return reinterpret_cast<const char*>(&mem_0092D778);
}

// [0x0041BFA0] sub_0041BFA0 (6 bytes)
// @name GetStringConstant_0041BFA0
// @summary Returns the address of the read-only string constant ",bj" stored in .rdata (mem_0092DA8C).
extern "C" const char* __cdecl fn_0041BFA0() {
    return reinterpret_cast<const char*>(&mem_0092DA8C);
}
