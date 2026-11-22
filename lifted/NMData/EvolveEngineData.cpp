// Lifted C++ translation unit: lifted/NMData/EvolveEngineData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EEA0;

// [0x004BED30] NMData::EvolveEngineData::vfunc_6 (35 bytes)
// @name NMData::EvolveEngineData::vfunc_6
// @class NMData::EvolveEngineData
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00A9EEA0.
void fn_004BED30(void* self) {
    new (self) std::string(mem_00A9EEA0);
}
