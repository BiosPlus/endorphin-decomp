// Lifted C++ translation unit: lifted/leaf/decompiled_5C0000.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x005CF3E0] sub_005CF3E0 (58 bytes)
namespace lift_005CF3E0 {
// @name sub_005CF3E0
// @summary Auto-lifted identical-shape clone of 0x0048DE30 (NMData::DesiredPoseEventData::vfunc_87).
namespace lift_0048DE30 {
// @name NMData::DesiredPoseEventData::vfunc_87
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004CD090 (NMData::MetaBodyConstraintData::vfunc_87).
// @field NMData::DesiredPoseEventData +0x234 void* field_0x234
namespace lift_004CD090 {
// @name NMData::MetaBodyConstraintData::vfunc_87
// @class NMData::MetaBodyConstraintData
// @summary Cleans up, destroys, and clears the subobject at +0x180 if non-null.
// @field NMData::MetaBodyConstraintData +0x180 void* field_0x180


extern void __thiscall ext_00647CA0(void* self);
extern void __thiscall ext_00648300(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void __thiscall fn_005CF3E0(void* self) {
    void* obj = lift_field<void*>(self, 0xAC);
    if (obj != nullptr) {
        ext_00647CA0(obj);
        void* obj2 = lift_field<void*>(self, 0xAC);
        if (obj2 != nullptr) {
            ext_00648300(obj2);
            ext_006A5C5C(obj2);
        }
        lift_field<void*>(self, 0xAC) = nullptr;
    }
}
} // namespace lift_004CD090
} // namespace lift_0048DE30
} // namespace lift_005CF3E0

// [0x005CF930] sub_005CF930 (14 bytes)
namespace lift_005CF930 {
// @name sub_005CF930
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005CF930(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 1u);
}
} // namespace lift_00611160
} // namespace lift_005CF930
