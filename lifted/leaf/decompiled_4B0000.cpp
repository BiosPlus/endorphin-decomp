// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004B6C90] sub_004B6C90 (34 bytes)
namespace lift_004B6C90 {
extern const char mem_009433E0[];

// @name sub_004B6C90
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004B6C90(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009433E0);
    return dst;
}
} // namespace lift_004B6C90
