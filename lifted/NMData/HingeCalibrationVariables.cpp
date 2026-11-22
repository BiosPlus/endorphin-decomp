// Lifted C++ translation unit: lifted/NMData/HingeCalibrationVariables.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x009770F4 (contents not recovered).
extern "C" const char mem_009770F4[];

// [0x006227B0] NMData::HingeCalibrationVariables::vfunc_28 (34 bytes)
// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string from the literal at 0x009770F4 in the caller's result slot (first stack argument) and returns that slot. The incoming this (ecx) is overwritten and unused.
void* fn_006227B0(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009770F4);
    return dst;
}
