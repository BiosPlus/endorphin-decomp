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
