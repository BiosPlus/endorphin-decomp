// Lifted C++ translation unit: lifted/MultiTrackView/CompositeEventTrack.cpp
#include "lift_compat.h"
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern "C" int32_t __cdecl ext_00594000();
// Callee 0x00597630: sub_00597630 (99B, not yet lifted). Called with ecx = int32 result from
// ext_00594000 and returns a pointer in eax, so modelled as thiscall returning an object pointer.
extern "C" void* __thiscall ext_00597630(void* self);
#include <string>

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

// [0x00410B50] MultiTrackView::CompositeEventTrack::vfunc_8 (439 bytes)
namespace lift_00410B50 {
// @name MultiTrackView::CompositeEventTrack::vfunc_8
// @class MultiTrackView::CompositeEventTrack
// @summary Builds a result object for a vector of marker objects; if the flag is clear and the vector is non-empty, allocates a 0x48-byte object labelled "Move markers", then runs each marker through a per-element setup/update pipeline.
// @field MultiTrackView::CompositeEventTrack +0x50 void* field_0x50

// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8; result unused.)
extern int32_t ext_00468180();
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT thunk to MFC80!ord_762; used as operator new.)
extern void* ext_006A5C62(size_t size);
// Known callee 0x00665DC0: Unknown::Construct (thiscall; initialises self from a string, returns self.)
extern void* ext_00665DC0(void* self, const void* arg1, uint32_t arg2);
// Known callee 0x00441020: GetStringLiteral_00440680 (thiscall; returns const char* "$aj".)
extern const char* ext_00441020(void* self);
// Known callee 0x00441040: Unknown::addConstantAndTruncateToInt (thiscall; returns int32 truncated sum.)
extern int32_t ext_00441040(void* self);
// Known callee 0x004407A0: sub_004407A0 (thiscall; returns int32.)
extern int32_t ext_004407A0(void* self);
// Known callee 0x0045E930: sub_0045E930 (this-adjustor thunk, +0x258; one stack arg.)
extern void* ext_0045E930(void* self, void* arg);
// Known callee 0x00594000: sub_00594000 (returns a global pointer-sized value; object base used for +0x26C.)
extern void* ext_00594000();
// Known callee 0x0048F870: sub_0048F870 (thiscall with five stack args.)
extern void* ext_0048F870(void* self, void* a1, const char* a2, int32_t a3, int32_t a4, int32_t a5);
// Known callee 0x00666570: sub_00666570 (thiscall with one stack arg.)
extern void ext_00666570(void* self, void* arg);

extern int mem_0092BE1C;
extern int mem_00924FE4;
extern int mem_00924FF4;
extern int mem_00925134;

void* fn_00410B50(void* self, void* vec, uint8_t flag) {
    // IAT / CRT data slots referenced by the original asm (string ctor/dtor, _invalid_parameter).
    // The C++ std::string and bounds handling below replace them; kept as metadata-only refs.
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    (void)&mem_00925134;

    // Early out: flag set, or vector is empty.
    if (flag != 0) {
        return nullptr;
    }
    void** begin = lift_field<void**>(vec, 0x04);
    if (begin == nullptr || begin == lift_field<void**>(vec, 0x08)) {
        return nullptr;
    }

    (void)ext_00468180();

    void* result = nullptr;
    void* obj = ext_006A5C62(0x48);
    if (obj != nullptr) {
        std::string label(reinterpret_cast<const char*>(&mem_0092BE1C));
        result = ext_00665DC0(obj, &label, 0);
    }

    for (void** it = begin;; ++it) {
        void** end = lift_field<void**>(vec, 0x08);
        if (it == end) {
            break;
        }

        void* marker = *it;
        const char* tag = ext_00441020(marker);
        int32_t trunc = ext_00441040(marker);
        int32_t slot = ext_004407A0(marker);

        void* owner = lift_field<void*>(self, 0x50);
        void* r = ext_0045E930(owner, marker);
        if (r != nullptr) {
            void* nobj = ext_006A5C62(0x50);
            void* ret48 = nullptr;
            if (nobj != nullptr) {
                void* g = ext_00594000();
                int32_t val = lift_field<int32_t>(g, 0x26C);
                ret48 = ext_0048F870(nobj, r, tag, trunc, slot, val);
            }
            ext_00666570(result, ret48);
        }
    }

    return result;
}
} // namespace lift_00410B50

// [0x00410460] MultiTrackView::CompositeEventTrack::vfunc_11 (58 bytes)
namespace lift_00410460 {
extern int32_t ext_00468180(void);
extern int32_t ext_0043CEB0(int32_t arg);
extern void ext_004686A0(void* self, int32_t arg);
extern void* ext_00468660(void* self);
// Metadata-only references (CALLEES list / RDATA_CONSTANTS); the disassembly never calls or reads these.
extern void ext_004407A0();
extern void ext_00441020();
extern void ext_00441040();
extern void ext_0045E930();
extern void ext_0048F870();
extern void ext_00665DC0();
extern void ext_00666570();
extern void ext_006A5C62();
extern int mem_00924FE4;
extern int mem_00924FF4;
extern int mem_0092BE1C;

// @name MultiTrackView::CompositeEventTrack::vfunc_11
// @class MultiTrackView::CompositeEventTrack
// @summary Calls ext_004686A0 on the object from ext_00468180 with ext_0043CEB0(arg2), then invokes vtable slot 0x98 with 5 on the object returned by ext_00468660.
// @field MultiTrackView::CompositeEventTrack +0x30 void* field_0x30
void fn_00410460(void* self, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
    (void)arg0;
    (void)arg1;
    (void)arg3;

    // Loaded into ecx before a cdecl-style call that does not consume it; value is unused.
    (void)lift_field<void*>(self, 0x30);

    // Address-only references to metadata callees/globals; no call or read happens.
    (void)&ext_004407A0;
    (void)&ext_00441020;
    (void)&ext_00441040;
    (void)&ext_0045E930;
    (void)&ext_0048F870;
    (void)&ext_00665DC0;
    (void)&ext_00666570;
    (void)&ext_006A5C62;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    (void)&mem_0092BE1C;

    void* const owner = reinterpret_cast<void*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(ext_00468180())));
    const int32_t scaled = ext_0043CEB0(arg2);
    ext_004686A0(owner, scaled);

    void* const obj = ext_00468660(owner);
    void* const vptr = lift_field<void*>(obj, 0);
    auto const vfn = reinterpret_cast<void (*)(void*, int32_t)>(lift_field<void*>(vptr, 0x98));
    vfn(obj, 5);
}
} // namespace lift_00410460
