// Lifted C++ translation unit: lifted/ASFData/Bone.cpp
#include "lift_compat.h"

// [0x00569FD0]
namespace lift_00569FD0 {
// @name ASFData::Bone::vfunc_1
// @class ASFData::Bone
// @summary Checks whether field_0x1E0 is zero and the pointer range [0x28, 0x2C) is empty.
// @field ASFData::Bone +0x1E0 uint32_t field_0x1E0
// @field ASFData::Bone +0x28 uint32_t field_0x28
// @field ASFData::Bone +0x2C uint32_t field_0x2C
uint32_t __thiscall fn_00569FD0(void* self) {
    if (lift_field<uint32_t>(self, 0x1E0) != 0) {
        return 0;
    }
    uint32_t begin = lift_field<uint32_t>(self, 0x28);
    if (begin == 0) {
        return 1;
    }
    uint32_t end = lift_field<uint32_t>(self, 0x2C);
    if ((static_cast<int32_t>(end - begin) >> 2) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00569FD0
