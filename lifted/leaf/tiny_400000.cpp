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
extern "C" const unsigned int mem_0092A794;
extern "C" const unsigned int mem_0092B4B4;

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

// [0x00409630] sub_00409630 (6 bytes)
// @name GetConstant_00409630
// @summary Returns the address of the .rdata constant u32 0x00458430 stored at mem_0092A794.
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_00409630() {
    return &mem_0092A794;
}

// [0x0040D9B0] sub_0040D9B0 (6 bytes)
// @name GetConstant_0040D9B0
// @summary Returns the address of the read-only .rdata u32 constant at mem_0092B4B4 (value 0x0040CDF0).
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_0040D9B0() {
    return &mem_0092B4B4;
}
