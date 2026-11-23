// Lifted C++ translation unit: lifted/NMData/RealChannel.cpp
#include "lift_compat.h"
// Invalid-parameter handler pointer (MSVCR80 _invalid_parameter_noinfo), loaded from the IAT slot.
extern "C" void (*mem_00925134)();

extern "C" void (*mem_00925134)();
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
float fn_0051AB80(void* self) {
    const uint32_t begin = static_cast<uint32_t>(lift_field<int32_t>(self, 0x30));
    const uint32_t end   = static_cast<uint32_t>(lift_field<int32_t>(self, 0x34));

    // Empty when begin is null, or when (end - begin) >> 3 == 0.
    if (begin == 0) {
        return 0.0f;
    }
    const int32_t count = static_cast<int32_t>(end - begin) >> 3;
    if (count == 0) {
        return 0.0f;
    }

    // Guard checks; the original calls the invalid-parameter handler and then continues.
    if (begin > end) {
        mem_00925134();
    }
    if (end <= begin) {
        mem_00925134();
    }
    const uint32_t last = end - 8;
    if (last >= end) {
        mem_00925134();
    }

    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(last));
}
// Callee takes two stack arguments (caller cleans up with add esp,8).
extern "C" void ext_0051AE20(void* self, uint32_t arg2);

extern "C" void ext_0051AE20(void* self, uint32_t arg2);
// @name NMData::RealChannel::vfunc_13
// @class NMData::RealChannel
// @summary Multiplies the float at +4 of each 8-byte entry in the [begin, end) range by the scale argument.
// @field RealChannel +0x30 int32_t begin
// @field RealChannel +0x34 int32_t end
void fn_0051ABD0(void* self, float scale) {
    // The MSVCRT _invalid_parameter_noinfo guard calls in the original are
    // invariant checks (begin <= end, cur < end) and are omitted here.
    uint32_t cur = lift_field<uint32_t>(self, 0x30);
    const uint32_t end = lift_field<uint32_t>(self, 0x34);

    while (cur != end) {
        float* value = reinterpret_cast<float*>(static_cast<uintptr_t>(cur) + 4);
        *value = *value * scale;
        cur += 8;
    }
}

// [0x0051BA70] NMData::RealChannel::vfunc_6 (160 bytes)
// @name NMData::RealChannel::vfunc_6
// @class NMData::RealChannel
// @summary Removes every 8-byte (float key, float value) entry whose key lies in [lo, hi] (inclusive), compacting the array in order; aborts if begin > end.
// @field NMData::RealChannel +0x30 uint8_t* begin
// @field NMData::RealChannel +0x34 uint8_t* end
void fn_0051BA70(void* self, float lo, float hi) {
    uint8_t*  cur  = lift_field<uint8_t*>(self, 0x30);
    uint8_t*& last = lift_field<uint8_t*>(self, 0x34);

    if (cur > last) {
        // CRT _invalid_parameter_noinfo path: treated as fatal.
        std::abort();
    }

    while (cur != last) {
        if (cur >= last) {
            std::abort();
        }

        const float key = lift_field<float>(cur, 0);

        // Ordered comparisons are false for NaN, so NaN keys are kept.
        if (lo <= key && key <= hi) {
            // Erase the entry at cur by shifting the tail down one slot.
            std::memmove(cur, cur + 8, static_cast<size_t>(last - (cur + 8)));
            last -= 8;
        } else {
            cur += 8;
        }
    }
}

// [0x0051AED0] NMData::RealChannel::vfunc_8 (31 bytes)
// @name NMData::RealChannel::vfunc_8
// @class NMData::RealChannel
// @summary Forwards self and the entry ecx value to ext_0051AE20, then returns self.
//
// Notes:
//  - Stdcall-style (ret 8): the second stack argument is never read.
//  - ecx at entry is pushed as the callee's second argument. The original code
//    then zeroes a saved-ecx stack slot before popping, so ecx is 0 on return.
//    That clobber is not modelled here.
void* fn_0051AED0(void* self, uint32_t ecx_in) {
    ext_0051AE20(self, ecx_in);
    return self;
}
