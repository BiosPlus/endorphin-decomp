// Lifted C++ translation unit: lifted/NMData/auto_tiny.cpp
#include "lift_compat.h"
// AnimatableTransform::vfunc_9 (0x004F97F0), reached by tail call. Takes its
// `this` pointer in ecx (__fastcall); this thunk supplies the adjusted pointer.
extern "C" void __fastcall ext_004F97F0(void* self);
extern "C" void ext_004C6850(void* self);

// [0x00499B40] NMData::State::vfunc_9_off_10 (8 bytes)
// @name NMData::State::vfunc_9_off_10
// @class NMData::State
// @summary This-adjustor thunk: rebases `this` from the secondary base subobject (-0x8) and tail-calls AnimatableTransform::vfunc_9.
void fn_00499B40(void* self) {
    void* primary_this = reinterpret_cast<uint8_t*>(self) - 0x8;
    ext_004F97F0(primary_this);
}

// [0x004C65B0] NMData::ForceEventData::vfunc_1_off_C (8 bytes)
// @name NMData::ForceEventData::vfunc_1_off_C
// @class NMData::ForceEventData
// @summary This-adjustor thunk: rebases this by -0xC (to the primary base subobject) and tail-forwards to vfunc_0.
void fn_004C65B0(void* self) {
    ext_004C6850(static_cast<char*>(self) - 0xC);
}
