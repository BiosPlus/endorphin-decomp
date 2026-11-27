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

// [0x006229C0]
namespace lift_006229C0 {
// Known callee 0x00487A30: helper taking (out buffer, float a, float b); called once per field.
extern void ext_00487A30();
// Key strings passed to the virtual getter (addresses only).
extern int mem_009771E0;
extern int mem_009771CC;
extern int mem_009771B8;
extern int mem_009771A4;
extern int mem_00977190;
extern int mem_00977180;
extern int mem_00977170;
extern int mem_0097715C;
extern int mem_00977148;
extern int mem_0097713C;

// @name NMData::SkeletalCalibrationVariables::vfunc_29
// @class NMData::SkeletalCalibrationVariables
// @summary Reads ten float values from obj via virtual getters and forwards each one with the matching field of self to ext_00487A30.
// @field NMData::SkeletalCalibrationVariables +0x04 float field_0x04
// @field NMData::SkeletalCalibrationVariables +0x08 float field_0x08
// @field NMData::SkeletalCalibrationVariables +0x0c float field_0x0c
// @field NMData::SkeletalCalibrationVariables +0x10 float field_0x10
// @field NMData::SkeletalCalibrationVariables +0x14 float field_0x14
// @field NMData::SkeletalCalibrationVariables +0x18 float field_0x18
// @field NMData::SkeletalCalibrationVariables +0x1c float field_0x1c
// @field NMData::SkeletalCalibrationVariables +0x20 float field_0x20
// @field NMData::SkeletalCalibrationVariables +0x24 float field_0x24
// @field NMData::SkeletalCalibrationVariables +0x28 float field_0x28
static inline void forward_field(void* self, void* obj, ptrdiff_t vtbl_off, const void* key, ptrdiff_t field_off) {
    // Virtual getter: float getter(obj, key), taken from the vtable of obj at byte offset vtbl_off.
    void* vtbl = *reinterpret_cast<void**>(obj);
    auto getter = reinterpret_cast<float (*)(void*, const void*)>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + vtbl_off));
    float value = getter(obj, key);
    float field = lift_field<float>(self, field_off);
    uint8_t out[16] = {};
    reinterpret_cast<void (*)(void*, float, float)>(ext_00487A30)(out, field, value);
}

void fn_006229C0(void* self, void* obj) {
    forward_field(self, obj, 0x1c, &mem_009771E0, 0x08);
    forward_field(self, obj, 0x18, &mem_009771CC, 0x04);
    forward_field(self, obj, 0x38, &mem_009771B8, 0x24);
    forward_field(self, obj, 0x34, &mem_009771A4, 0x20);
    forward_field(self, obj, 0x30, &mem_00977190, 0x1c);
    forward_field(self, obj, 0x2c, &mem_00977180, 0x18);
    forward_field(self, obj, 0x28, &mem_00977170, 0x14);
    forward_field(self, obj, 0x24, &mem_0097715C, 0x10);
    forward_field(self, obj, 0x20, &mem_00977148, 0x0c);
    forward_field(self, obj, 0x3c, &mem_0097713C, 0x28);
}
} // namespace lift_006229C0
