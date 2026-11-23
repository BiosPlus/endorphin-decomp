// Lifted C++ translation unit: lifted/MultiTrackView/CompositeEventTrack.cpp
#include "lift_compat.h"
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern "C" int32_t __cdecl ext_00594000();
// Callee 0x00597630: sub_00597630 (99B, not yet lifted). Called with ecx = int32 result from
// ext_00594000 and returns a pointer in eax, so modelled as thiscall returning an object pointer.
extern "C" void* __thiscall ext_00597630(void* self);

// [0x004104E0] MultiTrackView::CompositeEventTrack::vfunc_2 (47 bytes)
// @name MultiTrackView::CompositeEventTrack::vfunc_2
// @class MultiTrackView::CompositeEventTrack
// @summary Reads self+0x14 (value is pushed but unused by the callee), resolves an object via ext_00594000/ext_00597630; if its byte flag at +0x4E2 is set and its vtable slot 10 (+0x28) returns false, returns 1, else 0.
// @field MultiTrackView::CompositeEventTrack +0x14 uint32_t field_0x14
// @field Unknown +0x00 void** vptr
// @field Unknown +0x4E2 uint8_t field_0x4E2
extern "C" int32_t __thiscall fn_004104E0(void* self) {
    // The original pushes self+0x14 before calling ext_00594000, which takes no args and
    // does not pop; the pushed value is not modelled (same treatment as NMData::AnimationEventData::vfunc_63).
    (void)lift_field<uint32_t>(self, 0x14);

    const int32_t key = ext_00594000();
    void* obj = ext_00597630(reinterpret_cast<void*>(static_cast<intptr_t>(key)));

    if (lift_field<uint8_t>(obj, 0x4E2) == 0) {
        return 0;
    }

    // Virtual call through vtable slot at +0x28 (index 10), this = obj, result in al.
    void** vtbl = lift_field<void**>(obj, 0x00);
    using VFn = uint8_t (*)(void*);
    const uint8_t r = reinterpret_cast<VFn>(vtbl[10])(obj);
    if (r != 0) {
        return 0;
    }
    return 1;
}
