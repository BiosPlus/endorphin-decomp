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

// [0x006224A0] NMData::SkeletalCalibrationVariables::vfunc_26 (310 bytes)
namespace lift_006224A0 {
// Known callee 0x006404E0: sub_006404E0 (224B). Thiscall-style: this = arg1 (ecx), one stack arg, returns object pointer in eax.
extern void* ext_006404E0(void* self, uint32_t a);
// Known callee 0x0067EF60: sub_0067EF60 (107B). cdecl, four args: (obj, float, uint32, uint32), caller cleans.
extern void ext_0067EF60(void* obj, float v, uint32_t a, uint32_t b);

extern int mem_00A9F27C;
extern int mem_00A9F780;
extern int mem_00A9F4AC;
extern int mem_00A9F770;
extern int mem_00A9F9FC;
extern int mem_00A9FA5C;
extern int mem_00A9F9EC;
extern int mem_00A9FA44;
extern int mem_00A9F77C;
extern int mem_00A9F4A8;
extern int mem_00A9F9F4;
extern int mem_00A9F4FC;
extern int mem_00A9FA4C;
extern int mem_00A9F514;

// @name NMData::SkeletalCalibrationVariables::vfunc_26
// @class NMData::SkeletalCalibrationVariables
// @summary Forwards the ten calibration floats of self to sub_0067EF60 on the object returned by sub_006404E0(arg1), then returns that object.
// @field NMData::SkeletalCalibrationVariables +0x04 float field_0x04
// @field NMData::SkeletalCalibrationVariables +0x08 float field_0x08
// @field NMData::SkeletalCalibrationVariables +0x0C float field_0x0c
// @field NMData::SkeletalCalibrationVariables +0x10 float field_0x10
// @field NMData::SkeletalCalibrationVariables +0x14 float field_0x14
// @field NMData::SkeletalCalibrationVariables +0x18 float field_0x18
// @field NMData::SkeletalCalibrationVariables +0x1C float field_0x1c
// @field NMData::SkeletalCalibrationVariables +0x20 float field_0x20
// @field NMData::SkeletalCalibrationVariables +0x24 float field_0x24
// @field NMData::SkeletalCalibrationVariables +0x28 float field_0x28
void* fn_006224A0(void* self, void* arg1) {
    void* obj = ext_006404E0(arg1, static_cast<uint32_t>(mem_00A9F27C));

    ext_0067EF60(obj, lift_field<float>(self, 0x04),
                 static_cast<uint32_t>(mem_00A9F4AC), static_cast<uint32_t>(mem_00A9F780));
    ext_0067EF60(obj, lift_field<float>(self, 0x08),
                 0x00972CD0u, static_cast<uint32_t>(mem_00A9F770));
    ext_0067EF60(obj, lift_field<float>(self, 0x0C),
                 0x00972D14u, static_cast<uint32_t>(mem_00A9F9FC));
    ext_0067EF60(obj, lift_field<float>(self, 0x10),
                 0x00972D24u, static_cast<uint32_t>(mem_00A9FA5C));
    ext_0067EF60(obj, lift_field<float>(self, 0x14),
                 0x00972CE0u, static_cast<uint32_t>(mem_00A9F9EC));
    ext_0067EF60(obj, lift_field<float>(self, 0x18),
                 0x00972CF0u, static_cast<uint32_t>(mem_00A9FA44));
    ext_0067EF60(obj, lift_field<float>(self, 0x24),
                 static_cast<uint32_t>(mem_00A9F4A8), static_cast<uint32_t>(mem_00A9F77C));
    ext_0067EF60(obj, lift_field<float>(self, 0x1C),
                 static_cast<uint32_t>(mem_00A9F4FC), static_cast<uint32_t>(mem_00A9F9F4));
    ext_0067EF60(obj, lift_field<float>(self, 0x20),
                 static_cast<uint32_t>(mem_00A9F514), static_cast<uint32_t>(mem_00A9FA4C));
    ext_0067EF60(obj, lift_field<float>(self, 0x28),
                 0x0097705Cu, 0x00977068u);

    return obj;
}
} // namespace lift_006224A0
