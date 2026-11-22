// Lifted C++ translation unit: lifted/leaf/tiny_450000.cpp
#include "lift_compat.h"
extern "C" int mem_00935E44;
extern "C" int mem_00935E98;

// [0x004543E0] sub_004543E0 (6 bytes)
// @name sub_004543E0
// @summary Returns the address of the read-only constant mem_00935E44 (initialised to 0x006A5FCE).
extern "C" const int* fn_004543E0() {
    return &mem_00935E44;
}

// [0x00454510] sub_00454510 (6 bytes)
// @name GetConstantAddress_00935E98
// @summary Returns the address of the constant global mem_00935E98 (0x00935E98) in eax.
extern "C" void* fn_00454510() {
    return &mem_00935E98;
}
