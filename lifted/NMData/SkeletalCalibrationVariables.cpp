// Lifted C++ translation unit: lifted/NMData/SkeletalCalibrationVariables.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097703C[];

// [0x00622380] NMData::SkeletalCalibrationVariables::vfunc_28 (34 bytes)
namespace lift_00622380 {
extern const char mem_0097703C[];

// @name NMData::SkeletalCalibrationVariables::vfunc_28
// @class NMData::SkeletalCalibrationVariables
// @summary Auto-lifted identical-shape clone of 0x006227B0 (NMData::HingeCalibrationVariables::vfunc_28).
namespace lift_006227B0 {
// String literal whose address (0x009770F4) is pushed as the const char* argument.
extern const char mem_0097703C[];
// Import slot for the std::string constructor (MSVCP80); the portable version below replaces the indirect call.
extern int mem_00924FE4;

// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string at the hidden out-pointer from the literal at 0x009770F4 and returns that pointer; the second stack argument is ignored (stdcall, ret 8).
void fn_00622380(std::string* out, void* unused) {
    (void)unused;
    (void)&mem_00924FE4; // original calls the MSVCP80 ctor through this IAT slot
    new (out) std::string(mem_0097703C);
}
} // namespace lift_006227B0
} // namespace lift_00622380
