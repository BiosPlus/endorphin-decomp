// Lifted C++ translation unit: lifted/NMData/auto_tiny.cpp
#include "lift_compat.h"
// AnimatableTransform::vfunc_9 (0x004F97F0), reached by tail call. Takes its
// `this` pointer in ecx (__fastcall); this thunk supplies the adjusted pointer.
extern "C" void __fastcall ext_004F97F0(void* self);
extern "C" void ext_004C6850(void* self);
extern "C" int mem_00924FDC;

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

// [0x006744A0] NMData::State::vfunc_7 (9 bytes)
// @name NMData::State::vfunc_7
// @class NMData::State
// @summary This-adjustor thunk: offsets this by 0x1c and forwards the call to the function pointer stored at mem_00924FDC.
// @field NMData::State +0x1c void* adjusted_base
extern "C" void __fastcall fn_006744A0(void* self) {
    typedef void (__fastcall* ForwardFn)(void* self);
    char* adjusted = static_cast<char*>(self) + 0x1c;
    ForwardFn target = reinterpret_cast<ForwardFn>(static_cast<uintptr_t>(mem_00924FDC));
    target(adjusted);
}

// [0x004CE8C0] NMData::IncarnationEventData::vfunc_88 (10 bytes)
// @name NMData::IncarnationEventData::vfunc_88
// @class NMData::IncarnationEventData
// @summary Forwards the call to the virtual method at vtable byte offset 0x158 on the same object.
// @field NMData::IncarnationEventData +0x00 void* vtable

// Forwarding target signature: the original thunk does not know or touch the
// callee's arguments; it only swaps in the vtable slot and jumps. The C++
// stand-in takes only `self`, so the callee's extra arguments are not forwarded.
typedef void (*VirtualForwardFn)(void* self);

void fn_004CE8C0(void* self) {
    // vtable pointer is the first dword of the object.
    char* vtable = *reinterpret_cast<char**>(self);
    // Slot at byte offset 0x158 inside the vtable.
    VirtualForwardFn target =
        *reinterpret_cast<VirtualForwardFn*>(vtable + 0x158);
    target(self);
}
