// Lifted C++ translation unit: lifted/ASFData/Bone.cpp
#include "lift_compat.h"

// [0x00569FD0]
namespace lift_00569FD0 {
// @name ASFData::Bone::vfunc_1
// @class ASFData::Bone
// @summary Returns 1 if field_0x1E0 is zero and the pointer range [0x28, 0x2C) is empty or null, else 0.
// @field ASFData::Bone +0x28 uint32_t field_0x28
// @field ASFData::Bone +0x2C uint32_t field_0x2C
// @field ASFData::Bone +0x1E0 uint32_t field_0x1E0


uint32_t mem_r32(uint32_t addr);

uint32_t fn_00569FD0(uint32_t self) {
    if (mem_r32(self + 0x1E0u) != 0u) {
        return 0u;
    }
    uint32_t begin = mem_r32(self + 0x28u);
    if (begin == 0u) {
        return 1u;
    }
    uint32_t end = mem_r32(self + 0x2Cu);
    if ((static_cast<int32_t>(end - begin) >> 2) != 0) {
        return 0u;
    }
    return 1u;
}
} // namespace lift_00569FD0
