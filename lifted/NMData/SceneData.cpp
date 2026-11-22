// Lifted C++ translation unit: lifted/NMData/SceneData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986584 in .data).
extern "C" const char* mem_00A9F23C;

// [0x0047DB90] NMData::SceneData::vfunc_6 (35 bytes)
// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Constructs a std::string in the out-buffer from the global literal mem_00A9F23C and returns the buffer.
void* fn_0047DB90(void* self) {
    return new (self) std::string(mem_00A9F23C);
}
