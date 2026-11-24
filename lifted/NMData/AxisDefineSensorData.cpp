// Lifted C++ translation unit: lifted/NMData/AxisDefineSensorData.cpp
#include "lift_compat.h"
#include <cstring>
extern "C" const DWORD* ext_00480920();
// sub_00661650: thiscall with no stack args.
extern "C" void ext_00661650(void* self);
// AnimatableTransform::vfunc_13: thiscall with (arg1, arg2) on the stack.
extern "C" void ext_006619B0(void* self, void* arg1, uint32_t arg2);

extern "C" void ext_00661650(void* self);
// AnimatableTransform::vfunc_13: thiscall with (arg1, arg2) on the stack.
extern "C" void ext_006619B0(void* self, void* arg1, uint32_t arg2);
// @summary Fetches a 64-byte (16 x DWORD) block via ext_00480920 and copies it into the caller-supplied destination buffer.
void fn_0060F0B0(void* dst) {
    const DWORD* src = ext_00480920();
    std::memcpy(dst, src, 16 * sizeof(DWORD));
}
extern "C" void ext_0062CC10(void* arg, void* tm);
#include <string>

// [0x0058F6B0] NMData::AxisDefineSensorData::vfunc_14 (54 bytes)
// @name NMData::AxisDefineSensorData::vfunc_14
// @class NMData::AxisDefineSensorData
// @summary Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).
// No direct field accesses; self and arg1 are only passed through to callees.
void* fn_0058F6B0(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x199) {
        ext_00661650(arg1);
    } else {
        ext_006619B0(self, arg1, arg2);
    }
    return arg1;
}

// [0x0062CC60] NMData::AxisDefineSensorData::vfunc_8 (37 bytes)
// @name NMData::AxisDefineSensorData::vfunc_8
// @class NMData::AxisDefineSensorData
// @summary Forwards the stack argument and the sub-object at +0x154 to ext_0062CC10, then returns the argument.
// @field NMData::AxisDefineSensorData +0x154 void* field_0x154
void* __thiscall fn_0062CC60(void* self, void* arg) {
    void* tm = reinterpret_cast<uint8_t*>(self) + 0x154;
    ext_0062CC10(arg, tm);
    return arg;
}

// [0x0060E7B0] NMData::AxisDefineSensorData::vfunc_2 (47 bytes)
namespace lift_0060E7B0 {
extern void* __stdcall ext_006798D0(void* a0, void* a1, uint32_t a2, void* a3);
extern void __thiscall ext_00679030(void* self);

// @name NMData::AxisDefineSensorData::vfunc_2
// @class NMData::AxisDefineSensorData
// @summary Passes the arguments plus this->field_0x170 to ext_006798D0, hands its result to ext_00679030, and returns the first argument.
// @field NMData::AxisDefineSensorData +0x170 void* field_0x170
void* fn_0060E7B0(void* self, void* arg1, uint32_t arg2) {
    void* sub = lift_field<void*>(self, 0x170);
    void* result = ext_006798D0(arg1, sub, arg2, self);
    ext_00679030(result);
    return arg1;
}
} // namespace lift_0060E7B0

// [0x0060F420] NMData::AxisDefineSensorData::vfunc_61 (122 bytes)
namespace lift_0060F420 {
extern void ext_005DF5C0(void* self);
extern int mem_00924FC8;
extern int mem_00924FE0;
extern const char mem_0096F57C[];
extern const char mem_0096F568[];
extern const char mem_0096F554[];
extern const char mem_0096F540[];

// @name NMData::AxisDefineSensorData::vfunc_61
// @class NMData::AxisDefineSensorData
// @summary Gates on the string at +0x154 matching one of the literals; if so, copies the string at +0x180 and forwards to ext_005DF5C0 on arg2+0x598.
// @field NMData::AxisDefineSensorData +0x154 std::string field_0x154
// @field NMData::AxisDefineSensorData +0x180 std::string field_0x180
void fn_0060F420(void* self, void* arg1, void* arg2) {
    (void)arg1;

    std::string& key = lift_field<std::string>(self, 0x154);
    if (key != mem_0096F57C && key != mem_0096F568 && key != mem_0096F554 && key == mem_0096F540) {
        std::string tmp(lift_field<std::string>(self, 0x180));
        (void)tmp;
        ext_005DF5C0(static_cast<uint8_t*>(arg2) + 0x598);
    }
}
} // namespace lift_0060F420
