// Lifted C++ translation unit: lifted/leaf/tiny_410000.cpp
#include "lift_compat.h"
extern "C" int mem_0092BD10;
extern "C" int mem_0092C6E8;

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
