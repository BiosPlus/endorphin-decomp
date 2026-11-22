// Lifted C++ translation unit: lifted/NMData/QuatChannel.cpp
#include "lift_compat.h"

// [0x0051C7C0] NMData::QuatChannel::vfunc_16 (32 bytes)
// @name NMData::QuatChannel::vfunc_16
// @class NMData::QuatChannel
// @summary Auto-lifted identical-shape clone of 0x0051BEF0 (NMData::RealChannel::vfunc_16).
// @field NMData::QuatChannel +0x30 int32_t begin
// @field NMData::QuatChannel +0x34 int32_t end
// @field NMData::QuatChannel +0x5C void* field_0x5C
// @field NMData::QuatChannel +0x60 int32_t field_0x60
void fn_0051C7C0(void* self) {
    int32_t begin = lift_field<int32_t>(self, 0x30);
    int32_t end = lift_field<int32_t>(self, 0x34);
    if (static_cast<uint32_t>(begin) > static_cast<uint32_t>(end)) {
        // CRT _invalid_parameter_noinfo: the default handler terminates the process.
        std::abort();
    }
    lift_field<void*>(self, 0x5C) = static_cast<uint8_t*>(self) + 0x2C;
    lift_field<int32_t>(self, 0x60) = begin;
}
