// Lifted C++ translation unit: lifted/TriggeredEventMarkers/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004592F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_004593A0(void* self);

// [0x00459A70] TriggeredEventMarkers::IncarnationMarker::vfunc_0 (30 bytes)
// @name TriggeredEventMarkers::IncarnationMarker::vfunc_0
// @class TriggeredEventMarkers::IncarnationMarker
// @summary MSVC scalar deleting destructor: calls sub_004592F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00459A70(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004592F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00459D20] TriggeredEventMarkers::Reticule::vfunc_0 (30 bytes)
// @name TriggeredEventMarkers::Reticule::vfunc_0
// @class TriggeredEventMarkers::Reticule
// @summary MSVC scalar deleting destructor: calls sub_004593A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00459D20(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004593A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
