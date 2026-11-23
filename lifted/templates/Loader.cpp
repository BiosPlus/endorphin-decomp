// Lifted C++ translation unit: lifted/templates/Loader.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x004947E0] Loader<NMData::RigRoot>::vfunc_0 (36 bytes)
namespace lift_004947E0 {
extern void ext_0065C660(void* self);
extern void ext_006A5C5C(void* p);
extern char mem_0093EB28[];

// @name Loader<NMData::RigRoot>::vfunc_0
// @class Loader<NMData::RigRoot>
// @summary Auto-lifted identical-shape clone of 0x006204A0 (Sensors::SensorAbsoluteTime::vfunc_0).
// @field Loader<NMData::RigRoot> +0x0 void* field_0x00 (vtable pointer)
void* __thiscall fn_004947E0(void* self, uint8_t flags) {
    auto* s = reinterpret_cast<char*>(self);

    // Install the vtable for this stage of the destruction chain.
    *reinterpret_cast<void**>(s) = reinterpret_cast<void*>(mem_0093EB28);

    ext_0065C660(self);

    if (flags & 0x1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_004947E0

// [0x0055D680] Loader<NMData::CameraData>::vfunc_0 (36 bytes)
namespace lift_0055D680 {
extern void ext_0065C660(void* self);
extern void ext_006A5C5C(void* p);
extern char mem_0095841C[];

// @name Loader<NMData::CameraData>::vfunc_0
// @class Loader<NMData::CameraData>
// @summary Auto-lifted identical-shape clone of 0x006204A0 (Sensors::SensorAbsoluteTime::vfunc_0).
// @field Loader<NMData::CameraData> +0x0 void* field_0x00 (vtable pointer)
void* __thiscall fn_0055D680(void* self, uint8_t flags) {
    auto* s = reinterpret_cast<char*>(self);

    // Install the vtable for this stage of the destruction chain.
    *reinterpret_cast<void**>(s) = reinterpret_cast<void*>(mem_0095841C);

    ext_0065C660(self);

    if (flags & 0x1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_0055D680
