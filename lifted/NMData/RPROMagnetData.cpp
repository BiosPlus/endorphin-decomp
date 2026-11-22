// Lifted C++ translation unit: lifted/NMData/RPROMagnetData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E8;

// [0x00584F50] NMData::RPROMagnetData::vfunc_59 (35 bytes)
// @name NMData::RPROMagnetData::vfunc_59
// @class NMData::RPROMagnetData
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00A9F1E8.
void fn_00584F50(void* self) {
    new (self) std::string(mem_00A9F1E8);
}
