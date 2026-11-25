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

// [0x0051CDE0]
namespace lift_0051CDE0 {
// @name NMData::QuatChannel::clone
// @class NMData::QuatChannel
// @summary Allocates and copy-constructs a clone of this QuatChannel instance.


void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_0051CD30(void* self, const void* other);

void* __thiscall fn_0051CDE0(const void* self) {
    void* copy = ext_006A5C62(0x64);
    if (copy == nullptr) {
        return nullptr;
    }
    return ext_0051CD30(copy, self);
}
} // namespace lift_0051CDE0
