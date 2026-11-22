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
