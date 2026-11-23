// Lifted C++ translation unit: lifted/leaf/decompiled_500000.cpp
#include "lift_compat.h"

// [0x00508310] sub_00508310 (93 bytes)
namespace lift_00508310 {
// @name sub_00508310
// @summary Auto-lifted identical-shape clone of 0x0051C6D0 (NMData::RealChannel::vfunc_4).
namespace lift_0051C6D0 {
// @name NMData::RealChannel::vfunc_4
// @class NMData::RealChannel
// @summary Auto-lifted identical-shape clone of 0x0051CDE0 (NMData::QuatChannel::clone).
namespace lift_0051CDE0 {
// @name NMData::QuatChannel::clone
// @class NMData::QuatChannel
// @summary Allocates and copy-constructs a clone of this QuatChannel instance.


void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_005082B0(void* self, const void* other);

void* __thiscall fn_00508310(const void* self) {
    void* copy = ext_006A5C62(0x30);
    if (copy == nullptr) {
        return nullptr;
    }
    return ext_005082B0(copy, self);
}
} // namespace lift_0051CDE0
} // namespace lift_0051C6D0
} // namespace lift_00508310
