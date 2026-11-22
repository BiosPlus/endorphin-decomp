// Lifted C++ translation unit: lifted/leaf/tiny_440000.cpp
#include "lift_compat.h"
extern "C" int mem_0093226C;
extern "C" int mem_00932B50;

// [0x00440680] sub_00440680 (6 bytes)
// @name GetStringLiteral_00440680
// @summary Returns the address of the read-only string "$aj" in .rdata.
extern "C" const char* __cdecl fn_00440680() {
    return reinterpret_cast<const char*>(&mem_0093226C);
}

// [0x004473D0] sub_004473D0 (6 bytes)
// @name GetStringLiteral_004473D0
// @summary Returns the address of the read-only string "`KE" in .rdata.
extern "C" const char* __cdecl fn_004473D0() {
    return reinterpret_cast<const char*>(&mem_00932B50);
}
