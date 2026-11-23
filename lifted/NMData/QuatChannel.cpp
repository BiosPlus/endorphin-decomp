// Lifted C++ translation unit: lifted/NMData/QuatChannel.cpp
#include "lift_compat.h"
// External helper sub_0051AE40 (ext_0051AE40). Cdecl-style call with four
// stack words: arg1, this (ecx), arg1 again, and 0.
uint32_t __cdecl ext_0051AE40(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// stack words: arg1, this (ecx), arg1 again, and 0.
uint32_t __cdecl ext_0051AE40(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
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

// [0x0051ADC0] NMData::QuatChannel::vfunc_7 (82 bytes)
// @name NMData::QuatChannel::vfunc_7
// @class NMData::QuatChannel
// @summary Returns the first float (time) of the last 20-byte keyframe in [begin, end), or 0.0f if the range is empty.
// @field NMData::QuatChannel +0x30 int32_t begin
// @field NMData::QuatChannel +0x34 int32_t end
float fn_0051ADC0(void* self) {
    // Keyframe array bounds are stored as 32-bit addresses.
    const int32_t begin = lift_field<int32_t>(self, 0x30);
    if (begin == 0) {
        return 0.0f;
    }

    const int32_t end = lift_field<int32_t>(self, 0x34);

    // Element stride is 20 bytes (signed division by 20).
    const int32_t count = (end - begin) / 20;
    if (count == 0) {
        return 0.0f;
    }

    // Read the leading float of the last keyframe.
    const int32_t last = end - 20;
    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(static_cast<uint32_t>(last)));
}

// [0x0051D8C0]
// @name NMData::QuatChannel::vfunc_8
// @class NMData::QuatChannel
// @summary Calls ext_0051AE40 with this, arg1 and a zero word, then returns arg1 unchanged.
//
// No fields of NMData::QuatChannel are accessed directly; the function only
// passes `this` through to the helper.
uint32_t __thiscall fn_0051D8C0(uint32_t self, uint32_t arg1, uint32_t arg2) {
    (void)arg2;
    ext_0051AE40(arg1, self, arg1, 0);
    return arg1;
}
