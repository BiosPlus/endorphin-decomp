// Lifted C++ translation unit: lifted/NMData/RealChannel.cpp
#include "lift_compat.h"

// [0x0051BEF0] NMData::RealChannel::vfunc_16 (32 bytes)
// Original: if begin > end (unsigned) calls the CRT invalid-parameter handler (mem_00925134, which terminates by default);
// then stores &self->+0x2C into +0x3C and begin into +0x40.
// @name NMData::RealChannel::vfunc_16
// @class NMData::RealChannel
// @summary Rebinds the self-pointer at +0x3C to +0x2C and copies begin into +0x40, aborting if begin > end.
// @field NMData::RealChannel +0x30 int32_t begin
// @field NMData::RealChannel +0x34 int32_t end
// @field NMData::RealChannel +0x3C void* field_0x3C
// @field NMData::RealChannel +0x40 int32_t field_0x40
void fn_0051BEF0(void* self) {
    int32_t begin = lift_field<int32_t>(self, 0x30);
    int32_t end = lift_field<int32_t>(self, 0x34);
    if (static_cast<uint32_t>(begin) > static_cast<uint32_t>(end)) {
        // CRT _invalid_parameter_noinfo: the default handler terminates the process.
        std::abort();
    }
    lift_field<void*>(self, 0x3C) = static_cast<uint8_t*>(self) + 0x2C;
    lift_field<int32_t>(self, 0x40) = begin;
}
