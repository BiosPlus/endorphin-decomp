// Lifted C++ translation unit: lifted/NMData/SkeletalCalibrationVariables.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097703C[];

// [0x00622380] NMData::SkeletalCalibrationVariables::vfunc_28 (34 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_28
// @class NMData::SkeletalCalibrationVariables
// @summary Auto-lifted identical-shape clone of 0x006227B0 (NMData::HingeCalibrationVariables::vfunc_28).
void* fn_00622380(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_0097703C);
    return dst;
}
