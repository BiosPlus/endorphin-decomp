// Lifted C++ translation unit: lifted/NMData/MetaBodyData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" void __thiscall ext_0058A370(void* self, void* a, void* b);
extern "C" const float* ext_005B11F0(void* self);

// [0x005B64A0] NMData::MetaBodyData::vfunc_2 (32 bytes)
// @name NMData::MetaBodyData::vfunc_2
// @class NMData::MetaBodyData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005B64A0(void* self, void* a, void* b) {
    ext_0058A370(self, a, b);
    return a;
}

// [0x005B6880]
// @name NMData::MetaBodyData::vfunc_6_off_C
// @class NMData::MetaBodyData
// @summary If field_0x14C is non-null, copy the xyz of the vec3 returned by ext_005B11F0(field+0x24) into the out vec4 and zero its w component.
// @field NMData::MetaBodyData +0x14C void* field_0x14C
void fn_005B6880(void* self, float* out) {
    void* p = lift_field<void*>(self, 0x14C);
    if (p == nullptr) {
        return;
    }
    const float* src = ext_005B11F0(static_cast<uint8_t*>(p) + 0x24);
    const float x = src[0];
    const float y = src[1];
    const float z = src[2];
    out[0] = x;
    out[1] = y;
    out[2] = z;
    out[3] = 0.0f;
}
