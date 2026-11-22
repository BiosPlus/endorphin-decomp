// Lifted C++ translation unit: lifted/leaf/tiny_400000.cpp
#include "lift_compat.h"
extern "C" int mem_00929A44;
extern "C" int mem_00928A98;
extern "C" int mem_0092A0E0;

// [0x00404C40] sub_00404C40 (6 bytes)
// @name GetConstant_006A5ED2
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
