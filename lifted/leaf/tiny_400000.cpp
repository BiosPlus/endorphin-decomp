// Lifted C++ translation unit: lifted/leaf/tiny_400000.cpp
#include "lift_compat.h"
extern "C" int mem_00929A44;
extern "C" int mem_00928A98;
extern "C" int mem_0092A0E0;
extern "C" const unsigned int mem_0092A510;
// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.

// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.
// @summary Returns the address of the .rdata constant 0x006A5ED2.
extern "C" int* __cdecl fn_00404C40() {
    return &mem_00929A44;
}

// [0x00401840] sub_00401840 (6 bytes)
// @name sub_00401840
// @class (none)
// @summary Returns the address of the read-only string constant at 0x00928A98.
// (no field offsets accessed)
const char* fn_00401840() {
    return reinterpret_cast<const char*>(&mem_00928A98);
}

// [0x004076E0] sub_004076E0 (6 bytes)
// @name sub_004076E0
// @class (none)
// @summary Returns the address of the .rdata constant 0x006A5FCE at 0x0092A0E0.
// (no field offsets accessed)
extern "C" int* __cdecl fn_004076E0() {
    return &mem_0092A0E0;
}

// [0x00409060]
extern "C" const unsigned int* __cdecl fn_00409060() {
    return reinterpret_cast<const unsigned int*>(&mem_0092A510);
}
