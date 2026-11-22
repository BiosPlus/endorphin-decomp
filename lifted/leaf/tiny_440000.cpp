// Lifted C++ translation unit: lifted/leaf/tiny_440000.cpp
#include "lift_compat.h"
extern "C" int mem_0093226C;
extern "C" int mem_00932B50;
extern "C" int mem_00932E14;
extern "C" int mem_009331C8;
extern "C" int mem_009334E0;

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

// [0x00447DA0] sub_00447DA0 (6 bytes)
// @name GetStringLiteral_00447DA0
// @summary Returns the address of the read-only string literal ",bj" (mem_00932E14).
const char* fn_00447DA0(void) {
    return reinterpret_cast<const char*>(&mem_00932E14);
}

// [0x00447F90] sub_00447F90 (6 bytes)
// @name GetConstantAddress_00447F90
// @summary Returns the address of the read-only 32-bit constant at mem_009331C8 (.rdata).
extern "C" const unsigned int* __cdecl fn_00447F90() {
    return reinterpret_cast<const unsigned int*>(&mem_009331C8);
}

// [0x00448F20] sub_00448F20 (6 bytes)
// @name GetStringLiteral_00448F20
// @summary Returns the address of the read-only string "$aj" in .rdata.
extern "C" const char* __cdecl fn_00448F20() {
    return reinterpret_cast<const char*>(&mem_009334E0);
}
