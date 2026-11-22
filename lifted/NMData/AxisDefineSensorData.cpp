// Lifted C++ translation unit: lifted/NMData/AxisDefineSensorData.cpp
#include "lift_compat.h"
#include <cstring>
extern "C" const DWORD* ext_00480920();

// [0x0060F0B0] NMData::AxisDefineSensorData::vfunc_0_off_150 (25 bytes)
// @name NMData::AxisDefineSensorData::vfunc_0_off_150
// @class NMData::AxisDefineSensorData
// @summary Fetches a 64-byte (16 x DWORD) block via ext_00480920 and copies it into the caller-supplied destination buffer.
void fn_0060F0B0(void* dst) {
    const DWORD* src = ext_00480920();
    std::memcpy(dst, src, 16 * sizeof(DWORD));
}
