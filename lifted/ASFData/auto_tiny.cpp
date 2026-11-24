// Lifted C++ translation unit: lifted/ASFData/auto_tiny.cpp
#include "lift_compat.h"

// [0x00569FC0]
namespace lift_00569FC0 {
// @name ASFData::Bone::vfunc_0
// @class ASFData::Bone
// @summary Returns 1 if the dword at this+0x1DC is >= 1, otherwise 0.
// @field ASFData::Bone +0x1DC int32 field_0x1DC

namespace {

struct ASFDataBone_Lift {
    unsigned char _pad[0x1DC];
    int32_t field_0x1DC;
};

} // namespace

// Lifted from ASFData::Bone::vfunc_0: xor eax,eax; cmp [ecx+0x1dc],1; setge al; ret
int32_t __thiscall_ASFData_Bone_vfunc_0(const ASFDataBone_Lift* self) {
    return self->field_0x1DC >= 1 ? 1 : 0;
}
} // namespace lift_00569FC0
