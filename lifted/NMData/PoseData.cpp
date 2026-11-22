// Lifted C++ translation unit: lifted/NMData/PoseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986778 in .data).
extern "C" const char* mem_00A9F1A4;

// [0x0048C120] NMData::PoseData::vfunc_6 (35 bytes)
// @name NMData::PoseData::vfunc_6
// @class NMData::PoseData
// @summary Constructs a std::string in the out-buffer from the global literal mem_00A9F1A4 and returns the buffer.
void* fn_0048C120(void* self) {
    return new (self) std::string(mem_00A9F1A4);
}
