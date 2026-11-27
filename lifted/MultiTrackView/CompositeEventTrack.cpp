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

// [0x004104A0] MultiTrackView::CompositeEventTrack::vfunc_1 (52 bytes)
namespace lift_004104A0 {
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern int32_t __cdecl ext_00594000();
// Callee 0x00597630: sub_00597630 (99B, not yet lifted). ecx = int32 key, returns object pointer in eax.
extern void* __thiscall ext_00597630(void* self);
// Callee 0x0059DC50: sub_0059DC50 (7B, not yet lifted). ecx = object pointer, returns uint32 in eax.
extern uint32_t __thiscall ext_0059DC50(void* self);
// Callee 0x0052ADA0: sub_0052ADA0 (16B, not yet lifted). ecx = this, one stack arg, returns int32 in eax.
extern int32_t __thiscall ext_0052ADA0(void* self, uint32_t arg);
// Global pointer loaded into esi (mem_00AED9D0 = 0x00AED9D0).
extern void* mem_00AED9D0;

// @name MultiTrackView::CompositeEventTrack::vfunc_1
// @class MultiTrackView::CompositeEventTrack
// @summary Looks up an object via ext_00594000/ext_00597630; if both the global pointer and the object are non-null, forwards ext_0059DC50's result to ext_0052ADA0 on the global and returns its value, else returns 0.
// @field MultiTrackView::CompositeEventTrack +0x14 uint32_t field_0x14
extern int32_t __thiscall fn_004104A0(void* self) {
    // The original reads self+0x14 and pushes it, but ext_00594000 takes no args and the
    // pushed value is not consumed by the lifted data flow (same treatment as fn_004104E0).
    (void)lift_field<uint32_t>(self, 0x14);

    void* global_obj = mem_00AED9D0;
    const int32_t key = ext_00594000();
    void* obj = ext_00597630(reinterpret_cast<void*>(static_cast<intptr_t>(key)));

    if (global_obj == nullptr || obj == nullptr) {
        return 0;
    }

    const uint32_t token = ext_0059DC50(obj);
    return ext_0052ADA0(global_obj, token);
}
} // namespace lift_004104A0

// [0x00413020] MultiTrackView::CompositeEventTrack::vfunc_4 (524 bytes)
namespace lift_00413020 {
// Known callee 0x00412F80: findMaxByField28 (Returns the element pointer in the vector at +0x4 with the largest signed int32_t at +0x28, or nullptr if empty.)
extern void* __thiscall ext_00412F80(void* self);
// SetRect import slot (IAT entry); SetRect is inlined below as plain RECT stores.
extern int mem_00925640;
// _invalid_parameter_noinfo import slot: only guards debug-iterator asserts, so it is dropped.
extern int mem_00925134;
// CALLEES listed in metadata but never called by these bytes; declared for reference only.
extern void* __thiscall ext_0043CEB0(void* self);
extern void* __thiscall ext_00468180(void* self);
extern void* __thiscall ext_00468660(void* self);
extern void* __thiscall ext_004686A0(void* self);

// Signature of the virtual slots used below: (this, int32 t, RECT* out).
using VSlotFn = void (*)(void* self, int32_t t, void* out);

// @name MultiTrackView::CompositeEventTrack::vfunc_4
// @class MultiTrackView::CompositeEventTrack
// @summary Sets self's RECT at +0x3c from the 4-int range argument, then walks the child vector at +0x8/+0xc (writing per-child ranges when the +0x37 flag is clear, or using ext_00412F80's result when set), and finally calls vfunc slot 5 on self plus the child vfunc slots 1 and 2 with an accumulating RECT.
// @field MultiTrackView::CompositeEventTrack +0x00 void** vptr
// @field MultiTrackView::CompositeEventTrack +0x08 void** field_0x08
// @field MultiTrackView::CompositeEventTrack +0x0c void** field_0x0c
// @field MultiTrackView::CompositeEventTrack +0x37 uint8_t field_0x37
// @field MultiTrackView::CompositeEventTrack +0x3c RECT field_0x3c
// @field MultiTrackView::CompositeEventTrack +0x4c int32_t field_0x4c
// @field Unknown +0x00 void** vptr
// @field Unknown +0x28 int32_t field_0x28
// @field Unknown +0x30 int32_t field_0x30
// @field Unknown +0x34 int32_t field_0x34
// @field Unknown +0x38 int32_t field_0x38
// @field Unknown +0x3c int32_t field_0x3c
extern void __thiscall fn_00413020(void* self, int32_t t, void* range) {
    // Range argument: [0]=left, [4]=len, [8]=right, [0xc]=bottom-ish, all int32.
    const int32_t a0  = lift_field<int32_t>(range, 0x0);
    const int32_t len = lift_field<int32_t>(range, 0x4);
    const int32_t a8  = lift_field<int32_t>(range, 0x8);
    const int32_t ac  = lift_field<int32_t>(range, 0xc);

    // SetRect(&self->rect, a0, len, a8, self->field_0x4c + len - 1), with SetRect inlined.
    (void)&mem_00925640;
    // Address-only references: keep metadata callees/globals visible; no runtime effect.
    (void)&mem_00925134;
    (void)&ext_0043CEB0;
    (void)&ext_00468180;
    (void)&ext_00468660;
    (void)&ext_004686A0;
    {
        RECT& rc = lift_field<RECT>(self, 0x3c);
        rc.left   = a0;
        rc.top    = len;
        rc.right  = a8;
        rc.bottom = lift_field<int32_t>(self, 0x4c) + len - 1;
    }

    void** const begin = lift_field<void**>(self, 0x08);
    void** const end   = lift_field<void**>(self, 0x0c);

    if (lift_field<uint8_t>(self, 0x37) == 0) {
        // Flag clear: lay out every child in the vector with a running offset.
        int32_t running = len;
        for (void** it = begin; it != end; ++it) {
            void* e = *it;
            lift_field<int32_t>(e, 0x30) = a0;
            lift_field<int32_t>(e, 0x34) = running;
            lift_field<int32_t>(e, 0x38) = a8;
            running += lift_field<int32_t>(e, 0x28);
            lift_field<int32_t>(e, 0x3c) = running - 1;
        }
    } else {
        // Flag set: only the element returned by ext_00412F80 is updated.
        void* found = ext_00412F80(self);
        if (found != nullptr) {
            lift_field<int32_t>(found, 0x30) = a0;
            lift_field<int32_t>(found, 0x34) = len;
            lift_field<int32_t>(found, 0x38) = a8;
            lift_field<int32_t>(found, 0x3c) = lift_field<int32_t>(found, 0x28) + len - 1;
        }
    }

    // Accumulating RECT: left=a0, top=len (running), right=a8, bottom=ac.
    RECT rc{a0, len, a8, ac};

    // Pass 1: child vfunc slot 1 for each child, advancing rc.top by the child's +0x28 when flag clear.
    for (void** it = begin; it != end; ++it) {
        void* e = *it;
        void** evt = lift_field<void**>(e, 0x00);
        reinterpret_cast<VSlotFn>(evt[1])(e, t, &rc);
        if (lift_field<uint8_t>(self, 0x37) == 0) {
            rc.top += lift_field<int32_t>(e, 0x28);
        }
    }

    // Self virtual slot 5 with (t, range).
    void** svt = lift_field<void**>(self, 0x00);
    reinterpret_cast<VSlotFn>(svt[5])(self, t, range);

    // Pass 2: reset rc.top to len, then child vfunc slot 2 for each child.
    rc.top = len;
    for (void** it = begin; it != end; ++it) {
        void* e = *it;
        void** evt = lift_field<void**>(e, 0x00);
        reinterpret_cast<VSlotFn>(evt[2])(e, t, &rc);
        if (lift_field<uint8_t>(self, 0x37) == 0) {
            rc.top += lift_field<int32_t>(e, 0x28);
        }
    }
}
} // namespace lift_00413020
