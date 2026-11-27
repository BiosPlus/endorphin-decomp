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

// [0x00412B20] MultiTrackView::CompositeEventTrack::vfunc_5 (227 bytes)
namespace lift_00412B20 {
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern uint32_t __cdecl ext_00594000();
// Known callee 0x00597630: Unknown::findValueByKey. ecx = object pointer (from ext_00594000),
// one stack arg = key (self+0x14). Returns the value pointer in eax.
extern void* __thiscall ext_00597630(void* self, uintptr_t key);
// Known callee 0x0041A4F0: sub_0041A4F0 (thiscall, no stack args).
extern void __thiscall ext_0041A4F0(void* self);
// Callee 0x00412720: sub_00412720 (1022B, not yet lifted). thiscall, six stack args.
extern void __thiscall ext_00412720(void* self, uintptr_t a1, uintptr_t a2, uintptr_t a3,
                                        uintptr_t a4, uintptr_t a5, uintptr_t a6);
// Callee 0x0041AB80: sub_0041AB80 (349B, not yet lifted). thiscall, two stack args.
extern void __thiscall ext_0041AB80(void* self, uintptr_t a1, uintptr_t a2);
// Callee 0x00410DD0: sub_00410DD0 (997B, not yet lifted). thiscall, four stack args.
extern void __thiscall ext_00410DD0(void* self, uintptr_t a1, uintptr_t a2, uintptr_t a3,
                                        uintptr_t a4);

// @name MultiTrackView::CompositeEventTrack::vfunc_5
// @class MultiTrackView::CompositeEventTrack
// @summary Looks up a value via ext_00594000/ext_00597630 keyed by self+0x14; if found, runs ext_0041A4F0 on self+0x30+0x1B4 and then seven ext_00412720 calls with (k,flag) pairs, one ext_0041AB80 call, and a final ext_00410DD0 call.
// @field MultiTrackView::CompositeEventTrack +0x14 uint32_t field_0x14
// @field MultiTrackView::CompositeEventTrack +0x30 void* field_0x30
extern void __thiscall fn_00412B20(void* self, uint32_t a1, uint32_t a2) {
    const uintptr_t ebx = ext_00594000();
    const uintptr_t ebp = reinterpret_cast<uintptr_t>(
        ext_00597630(reinterpret_cast<void*>(ebx), lift_field<uint32_t>(self, 0x14)));
    if (ebp == 0) {
        return;
    }

    ext_0041A4F0(static_cast<uint8_t*>(lift_field<void*>(self, 0x30)) + 0x1B4);

    // Seven ext_00412720 calls: (this=self, a1, ebx, ebp, a2, k, flag).
    ext_00412720(self, a1, ebx, ebp, a2, 0, 0);
    ext_00412720(self, a1, ebx, ebp, a2, 2, 0);
    ext_00412720(self, a1, ebx, ebp, a2, 4, 0);
    ext_00412720(self, a1, ebx, ebp, a2, 6, 0);
    ext_00412720(self, a1, ebx, ebp, a2, 0, 1);
    ext_00412720(self, a1, ebx, ebp, a2, 2, 1);
    ext_00412720(self, a1, ebx, ebp, a2, 4, 1);

    ext_0041AB80(static_cast<uint8_t*>(lift_field<void*>(self, 0x30)) + 0x1B4, a1,
                 0x00453C3Cu);

    ext_00410DD0(self, a1, ebx, ebp, a2);
}
} // namespace lift_00412B20

// [0x004105F0]
namespace lift_004105F0 {
// @name MultiTrackView::CompositeEventTrack::vfunc_6
// @class MultiTrackView::CompositeEventTrack
// @summary Displays a context menu for a composite event track item and dispatches the selected command.
// @field MultiTrackView::CompositeEventTrack +0x30 void* field_0x30
// @field MultiTrackView::CompositeEventTrack +0x50 void* field_0x50


void* __thiscall ext_0045E930(void* self, void* arg);
void __thiscall ext_006A616C(void* self, uint32_t hMenu);
int32_t __cdecl ext_00468180(void);
uint8_t __thiscall ext_004409C0(void* self);
int32_t __thiscall ext_004410C0(void* self);
uint8_t __thiscall ext_00442430(void* self);
uint8_t __thiscall ext_004424E0(void* self);
int32_t __thiscall ext_0043C930(void* self, void* menu, void* pt);
void __thiscall ext_004313A0(void* self);
void __thiscall ext_004686A0(void* self, uint32_t arg);
void* __thiscall ext_00468660(void* self);
uint8_t __thiscall ext_00410370(void* self);
void __thiscall ext_00468E80(void* self, void* esi, int32_t ebp, int32_t eax, uint32_t ecx);
void __thiscall ext_00468D60(void* self, void* esi, int32_t ebp);
void __thiscall ext_004409D0(void* self);
void __thiscall ext_004409E0(void* self);
void __thiscall ext_00468DF0(void* self, void* esi, uint32_t flag);
void __thiscall ext_006A5F68(void* self, uint32_t a1, const char* a2, uint32_t a3, uint32_t a4, const char* a5, uint32_t a6, uint32_t a7);
int32_t __thiscall ext_006A5F62(void* self);
void* __thiscall ext_0040BF00(void* self);
void __thiscall ext_006A5F5C(void* self, void* out_str);
void* __cdecl ext_006A6E9E(void* ptr, uint32_t vfdelta, void* src_type, void* dst_type, uint32_t is_ref);
void __thiscall ext_0040BF20(void* self);
void __thiscall ext_006A5F56(void* self);
void __thiscall ext_00486AF0(void* self, void* str);
void __thiscall ext_004805E0(void* self, void* arg);
void __thiscall ext_006A6166(void* self);

extern uint32_t mem_00925630;
extern uint32_t mem_00925638;
extern uint32_t mem_00925634;
extern uint32_t mem_00ACDB40;
extern uint32_t mem_00924FD0;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924300;
extern uint32_t mem_009242F4;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE4;

typedef int32_t (__stdcall *ClientToScreenFn)(void* hwnd, void* lpPoint);
typedef uint32_t (__stdcall *CreatePopupMenuFn)(void);
typedef int32_t (__stdcall *AppendMenuAFn)(uint32_t hMenu, uint32_t uFlags, uint32_t uIDNewItem, const char* lpNewItem);
typedef void* (__cdecl *StdStringConcatFn)(void* out_str, void* s1, void* s2);
typedef const char* (__thiscall *StdStringCStrFn)(void* self);
typedef void (__thiscall *StdStringCtorFn)(void* self, const char* s);
typedef void (__thiscall *StdStringDtorFn)(void* self);
typedef const char* (__thiscall *CStringGetBufferFn)(void* self, int32_t minBufLen);
typedef void (__thiscall *CStringDtorFn)(void* self);

void __thiscall fn_004105F0(void* self, void* arg0, int32_t pt_x, int32_t pt_y) {
    if (!arg0) {
        return;
    }

    int32_t pt[2] = { pt_x, pt_y };
    void* obj = ext_0045E930(lift_field<void*>(self, 0x50), arg0);
    void* view_obj = lift_field<void*>(self, 0x30);
    void* hwnd = lift_field<void*>(view_obj, 0x20);
    ((ClientToScreenFn)mem_00925630)(hwnd, pt);

    uint32_t menu_buf[2] = { 0x0092BD7C, 0 };
    uint32_t hmenu = ((CreatePopupMenuFn)mem_00925638)();
    ext_006A616C(menu_buf, hmenu);

    void* doc = reinterpret_cast<void*>(ext_00468180());
    uint32_t item_type = lift_field<uint32_t>(arg0, 0x08);
    AppendMenuAFn append_menu = (AppendMenuAFn)mem_00925634;

    if (ext_004409C0(arg0) != 0) {
        append_menu(menu_buf[1], 0, 0x6F, reinterpret_cast<const char*>(0x0092BE0C));
    } else {
        append_menu(menu_buf[1], 0, 0x6F, reinterpret_cast<const char*>(0x0092BDFC));
    }

    if (ext_004410C0(arg0) > 1) {
        if (ext_00442430(arg0) != 0) {
            append_menu(menu_buf[1], 0, 0x69, reinterpret_cast<const char*>(0x0092BDE8));
        }
        if (ext_004424E0(arg0) != 0) {
            append_menu(menu_buf[1], 0, 0x6A, reinterpret_cast<const char*>(0x0092BDD0));
        }
    }

    if (item_type == 4) {
        append_menu(menu_buf[1], 0x800, 0, nullptr);
        append_menu(menu_buf[1], 0, 0x6D, reinterpret_cast<const char*>(0x0092BDC0));
        append_menu(menu_buf[1], 0, 0x6C, reinterpret_cast<const char*>(0x0092BDB0));
    }

    append_menu(menu_buf[1], 0x800, 0, nullptr);
    append_menu(menu_buf[1], 0, 0x6E, reinterpret_cast<const char*>(0x0092BD98));

    int32_t cmd = ext_0043C930(lift_field<void*>(self, 0x30), menu_buf, pt);
    switch (cmd) {
        case 0x65: {
            ext_004313A0(reinterpret_cast<void*>(mem_00ACDB40));
            break;
        }
        case 0x66:
        case 0x67: {
            uint8_t str_buf[32];
            uint8_t dlg_buf[480];
            uint8_t guard[4];
            ((StdStringConcatFn)mem_00924FD0)(str_buf, reinterpret_cast<void*>(0x00B593AC), reinterpret_cast<void*>(0x00AD7A88));
            const char* s1 = ((StdStringCStrFn)mem_00924FF0)(str_buf);
            const char* s2 = ((StdStringCStrFn)mem_00924FF0)(reinterpret_cast<void*>(0x00B59240));
            ext_006A5F68(dlg_buf, 0, s2, 0, 0, s1, 0, 0);
            if (ext_006A5F62(dlg_buf) == 1) {
                ext_0040BF00(guard);
                uint32_t cstr_buf[4];
                ext_006A5F5C(dlg_buf, cstr_buf);
                void* casted = ext_006A6E9E(obj, 0, reinterpret_cast<void*>(0x00A2E914), reinterpret_cast<void*>(0x00A2E93C), 0);
                if (casted) {
                    void* sub = reinterpret_cast<uint8_t*>(casted) + 0x19C;
                    void* vt_obj = lift_field<void*>(casted, 0x19C);
                    void* vt = reinterpret_cast<uint8_t*>(vt_obj) + 0x24;
                    const char* txt = ((CStringGetBufferFn)mem_00924300)(cstr_buf, 1);
                    typedef void (__thiscall *Vfn0)(void*, const char*);
                    ((*reinterpret_cast<Vfn0**>(vt))[0])(sub, txt);
                }
                ((CStringDtorFn)mem_009242F4)(cstr_buf);
                ext_0040BF20(guard);
            }
            ext_006A5F56(dlg_buf);
            ((StdStringDtorFn)mem_00924FF4)(str_buf);
            break;
        }
        case 0x68: {
            uint8_t str_buf[32];
            uint8_t dlg_buf[480];
            uint8_t guard[4];
            ((StdStringConcatFn)mem_00924FD0)(str_buf, reinterpret_cast<void*>(0x00B593AC), reinterpret_cast<void*>(0x00AD7A88));
            const char* s1 = ((StdStringCStrFn)mem_00924FF0)(str_buf);
            const char* s2 = ((StdStringCStrFn)mem_00924FF0)(reinterpret_cast<void*>(0x00B59240));
            ext_006A5F68(dlg_buf, 1, s2, 0, 0x1004, s1, 0, 0);
            if (ext_006A5F62(dlg_buf) == 1) {
                ext_0040BF00(guard);
                uint32_t cstr_buf[4];
                ext_006A5F5C(dlg_buf, cstr_buf);
                void* casted = ext_006A6E9E(obj, 0, reinterpret_cast<void*>(0x00A2E914), reinterpret_cast<void*>(0x00A2E93C), 0);
                if (casted) {
                    void* d1 = reinterpret_cast<void*>(ext_00468180());
                    void* d1_14 = lift_field<void*>(d1, 0x14);
                    void* d1_34 = lift_field<void*>(d1_14, 0x34);
                    typedef void (__thiscall *Vfn30)(void*);
                    ((*reinterpret_cast<Vfn30**>(d1_34))[0x30 / 4])(d1_34);

                    void* d2 = reinterpret_cast<void*>(ext_00468180());
                    void* d2_sub = ext_00468660(d2);
                    typedef void (__thiscall *VfnD4)(void*);
                    ((*reinterpret_cast<VfnD4**>(d2_sub))[0xD4 / 4])(d2_sub);

                    const char* txt = ((CStringGetBufferFn)mem_00924300)(cstr_buf, 0);
                    uint8_t tmp_str[32];
                    ((StdStringCtorFn)mem_00924FE4)(tmp_str, txt);
                    ext_00486AF0(casted, tmp_str);
                    ((StdStringDtorFn)mem_00924FF4)(tmp_str);

                    void* d3 = reinterpret_cast<void*>(ext_00468180());
                    void* d3_14 = lift_field<void*>(d3, 0x14);
                    void* d3_34 = lift_field<void*>(d3_14, 0x34);
                    ext_004805E0(d3_34, casted);

                    void* d4 = reinterpret_cast<void*>(ext_00468180());
                    void* d4_sub = ext_00468660(d4);
                    typedef void (__thiscall *VfnB4)(void*);
                    ((*reinterpret_cast<VfnB4**>(d4_sub))[0xB4 / 4])(d4_sub);
                }
                ((CStringDtorFn)mem_009242F4)(cstr_buf);
                ext_0040BF20(guard);
            }
            ext_006A5F56(dlg_buf);
            ((StdStringDtorFn)mem_00924FF4)(str_buf);
            break;
        }
        case 0x69: {
            uint32_t val = lift_field<uint32_t>(obj, 0x15C);
            ext_004686A0(doc, val);
            break;
        }
        case 0x6A: {
            void* sub = ext_00468660(doc);
            typedef int32_t (__thiscall *Vfn9C)(void*);
            int32_t frame = ((*reinterpret_cast<Vfn9C**>(sub))[0x9C / 4])(sub);
            if (ext_00410370(arg0) != 0) {
                int32_t start = lift_field<int32_t>(obj, 0x15C);
                int32_t end = lift_field<int32_t>(obj, 0x160);
                uint32_t track_id = lift_field<uint32_t>(obj, 0x164);
                ext_00468E80(doc, obj, frame, (end - start) + frame, track_id);
            } else {
                ext_00468D60(doc, obj, frame);
            }
            break;
        }
        case 0x6C: {
            ext_004409D0(arg0);
            break;
        }
        case 0x6D: {
            ext_004409E0(arg0);
            break;
        }
        case 0x6E: {
            void* sub = ext_00468660(doc);
            typedef void (__thiscall *Vfn1C4)(void*);
            ((*reinterpret_cast<Vfn1C4**>(sub))[0x1C4 / 4])(sub);
            break;
        }
        case 0x6F: {
            if (obj) {
                uint32_t flag = (lift_field<uint8_t>(obj, 0x17C) == 0) ? 1 : 0;
                ext_00468DF0(doc, obj, flag);
            }
            break;
        }
        default:
            break;
    }

    menu_buf[0] = 0x0092BD7C;
    ext_006A6166(menu_buf);
}
} // namespace lift_004105F0

// [0x00411A80]
namespace lift_00411A80 {
// @name MultiTrackView::CompositeEventTrack::vfunc_7
// @class MultiTrackView::CompositeEventTrack
// @summary Builds and displays the context menu for a composite event track and dispatches the selected command.
// @field MultiTrackView::CompositeEventTrack +0x14 uint32_t field_0x14
// @field MultiTrackView::CompositeEventTrack +0x1C uint8_t field_0x1c
// @field MultiTrackView::CompositeEventTrack +0x30 void* field_0x30
// @field MultiTrackView::CompositeEventTrack +0x37 uint8_t field_0x37


    void* __cdecl ext_00594000(void);
    void* __thiscall ext_00597630(void* self, uint32_t key);
    void* __thiscall ext_00412EC0(void* self, const POINT* pt);
    uint32_t __thiscall ext_00412D70(void* self, void* elem);
    void __thiscall ext_0065D120(void* self);
    void __thiscall ext_006A616C(void* self, void* hMenu);
    void* __cdecl ext_00468180(void);
    int32_t __thiscall ext_00412CC0(void* self);
    uint8_t __thiscall ext_00410390(void* self);
    uint8_t __thiscall ext_005A6130(void* self);
    void __thiscall ext_0059D740(void* self, void* out_vec);
    void* __cdecl ext_00404F00(void* out_str, int32_t value);
    void __cdecl ext_006A5C5C(void* ptr);
    uint32_t __thiscall ext_0043C930(void* self, void* menu, POINT* pt);
    void* __thiscall ext_0042FE90(void* self);
    void* __thiscall ext_0042FE70(void* self, void* item);
    void __thiscall ext_00468F90(void* self, void* arg);
    void __thiscall ext_0043A580(void* self, int32_t arg0, uint32_t arg1);
    void* __thiscall ext_00468660(void* self);
    int32_t __cdecl ext_006A5E60(uint32_t msg_id, uint32_t type, uint32_t parent);
    void __thiscall ext_00469CC0(void* self);
    void __thiscall ext_004684D0(void* self, void* item);
    void __thiscall ext_00468550(void* self, void* item);
    void __thiscall ext_00411680(void* self, uint32_t idx);
    void* __thiscall ext_00412E60(void* self, uint32_t idx);
    int32_t __thiscall ext_00410520(void* self);
    void __thiscall ext_00469E30(void* self, void* item, uint32_t idx);
    void __thiscall ext_004118A0(void* self, uint32_t idx);
    void __thiscall ext_0043DE60(void* self, void* track);
    void __thiscall ext_0043DEA0(void* self, void* track);
    void __thiscall ext_0043DEE0(void* self);
    void __thiscall ext_0043DFB0(void* self);
    void __thiscall ext_00410540(void* self, void* mgr, void* item);
    uint32_t* __thiscall ext_00489320(void* self, uint32_t* out);
    uint32_t* __thiscall ext_00410D10(void* self, uint32_t* out);
    uint8_t __thiscall ext_0049AD40(void* self, const void* other);
    void** __thiscall ext_00492A50(void* self);
    void __thiscall ext_00425E30(void* self);
    void __thiscall ext_00449270(void* self, uint32_t a0, int32_t a1, uint32_t a2);
    float __cdecl ext_00407870(float x);
    int32_t __cdecl ext_006A6DE0(void);
    void __thiscall ext_004490B0(void* self, uint32_t a0, int32_t a1);
    void __thiscall ext_004490D0(void* self, uint32_t a0, int32_t a1);
    int32_t __thiscall ext_006A5FA4(void* self);
    void __thiscall ext_004493C0(void* self);
    void __thiscall ext_006A6166(void* self);

    extern void* (__stdcall *mem_00925638)(void); // USER32!CreatePopupMenu
    extern const char* (__thiscall *mem_00924300)(void*); // MFC80!ord_876
    extern int32_t (__stdcall *mem_00925634)(void*, uint32_t, uint32_t, const char*); // USER32!AppendMenuA
    extern void (__thiscall *mem_009242F0)(void*, const char*); // MFC80!ord_304
    extern const char* (__thiscall *mem_00924FF0)(void*); // std::string::c_str
    extern void (__thiscall *mem_00924518)(void*, const char*); // MFC80!ord_911
    extern void (__thiscall *mem_00924FF4)(void*); // std::string::~string
    extern void (__thiscall *mem_009242F4)(void*); // MFC80!ord_578
    extern int32_t (__stdcall *mem_0092562C)(void*, uint32_t, uint32_t); // USER32!SetMenuDefaultItem
    extern int32_t (__stdcall *mem_00925630)(void*, POINT*); // USER32!ClientToScreen
    extern void* mem_00ACDB40;
    extern double mem_00993828;
    extern int32_t (__stdcall *mem_00925688)(void*, void*, int32_t); // USER32!InvalidateRect

void __thiscall fn_00411A80(void* self, POINT pt, int32_t frame) {
    void* doc = ext_00594000();
    void* item = ext_00597630(doc, lift_field<uint32_t>(self, 0x14));
    void* elem = ext_00412EC0(self, &pt);
    uint32_t elem_idx = 0;
    if (elem != nullptr) {
        elem_idx = ext_00412D70(self, elem);
    }

    void* doc2 = ext_00594000();
    ext_0065D120(reinterpret_cast<uint8_t*>(doc2) + 0xFC);

    uint32_t menu_obj[2] = { 0x0092BD7C, 0 };
    void* hMenu = mem_00925638();
    ext_006A616C(menu_obj, hMenu);

    void* mgr = ext_00468180();
    const char* track_name = mem_00924300(reinterpret_cast<uint8_t*>(self) + 0x1C);
    mem_00925634(menu_obj[1] ? reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])) : nullptr, 0x2, 0xFFFFFFFFu, track_name);
    mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);

    void* parent_view = lift_field<void*>(self, 0x30);
    int32_t divider_x = lift_field<int32_t>(parent_view, 0xFC);
    if (pt.x <= divider_x) {
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x75, reinterpret_cast<const char*>(0x0092C170));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x76, reinterpret_cast<const char*>(0x0092C160));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6F, reinterpret_cast<const char*>(0x0092C150));
        if (ext_00412CC0(self) > 1) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x70, reinterpret_cast<const char*>(0x0092C13C));
        }
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        if (lift_field<uint8_t>(self, 0x37) != 0) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x71, reinterpret_cast<const char*>(0x0092C12C));
        } else {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x72, reinterpret_cast<const char*>(0x0092C118));
        }
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x73, reinterpret_cast<const char*>(0x0092C100));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x74, reinterpret_cast<const char*>(0x0092C0E8));

        if (item != nullptr) {
            using PredFn = uint8_t(__thiscall*)(void*);
            void** vtbl = lift_field<void**>(item, 0);
            if (!reinterpret_cast<PredFn>(vtbl[0x28 / 4])(item)) {
                if (lift_field<uint8_t>(item, 0x4E2) != 0) {
                    mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
                    mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x84, reinterpret_cast<const char*>(0x0092C0D0));
                } else {
                    mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
                    mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x83, reinterpret_cast<const char*>(0x0092C0B4));
                }
                mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
                mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x77, reinterpret_cast<const char*>(0x0092BF14));
            }
        }
    } else {
        using PredFn = uint8_t(__thiscall*)(void*);
        void** vtbl = lift_field<void**>(item, 0);
        bool pred1 = reinterpret_cast<PredFn>(vtbl[0x28 / 4])(item) != 0;
        bool pred2 = ext_00410390(item) != 0;
        if (!pred1 && !pred2) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x66, reinterpret_cast<const char*>(0x0092C098));
        } else if (!pred2) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x66, reinterpret_cast<const char*>(0x0092C098));
        }

        if (reinterpret_cast<PredFn>(vtbl[0x28 / 4])(item) == 0 && ext_00410390(item) == 0) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x65, reinterpret_cast<const char*>(0x0092A9B8));
        }
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x68, reinterpret_cast<const char*>(0x0092A9A0));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6D, reinterpret_cast<const char*>(0x0092A98C));

        if ((reinterpret_cast<PredFn>(vtbl[0x28 / 4])(item) == 0 && ext_00410390(item) == 0) || ext_00410390(item) == 0) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6C, reinterpret_cast<const char*>(0x0092A978));
        }

        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x67, reinterpret_cast<const char*>(0x0092C080));
        if (ext_005A6130(item) != 0) {
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x69, reinterpret_cast<const char*>(0x0092C060));
        }
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6A, reinterpret_cast<const char*>(0x0092C048));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6B, reinterpret_cast<const char*>(0x0092C030));

        void* doc3 = ext_00594000();
        void* sub_obj = lift_field<void*>(doc3, 0x26C);
        uint32_t vec_begin = lift_field<uint32_t>(sub_obj, 0x34);
        if (vec_begin != 0) {
            uint32_t vec_end = lift_field<uint32_t>(sub_obj, 0x38);
            int32_t count = static_cast<int32_t>(vec_end - vec_begin) >> 2;
            if (count > 0) {
                mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
                mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x6E, reinterpret_cast<const char*>(0x0092C01C));
            }
        }

        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x79, reinterpret_cast<const char*>(0x0092C008));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x7A, reinterpret_cast<const char*>(0x0092BFF8));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x7B, reinterpret_cast<const char*>(0x0092BFD0));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x7C, reinterpret_cast<const char*>(0x0092BFAC));
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x7D, reinterpret_cast<const char*>(0x0092BF74));

        uint32_t vec_data[4] = { 0, 0, 0, 0 };
        ext_0059D740(item, vec_data);
        if (vec_data[1] != 0 && ((static_cast<int32_t>(vec_data[2] - vec_data[1]) >> 2) != 0)) {
            uint32_t cstr1[1] = { 0 };
            uint32_t cstr2[1] = { 0 };
            uint8_t std_str[32] = {};
            mem_009242F0(cstr1, reinterpret_cast<const char*>(0x0092BF5C));
            ext_00404F00(std_str, frame);
            mem_00924518(cstr1, mem_00924FF0(std_str));
            mem_00924FF4(std_str);

            mem_009242F0(cstr2, reinterpret_cast<const char*>(0x0092BF44));
            ext_00404F00(std_str, frame);
            mem_00924518(cstr2, mem_00924FF0(std_str));
            mem_00924FF4(std_str);

            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x7F, reinterpret_cast<const char*>(0x0092BF34));
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x82, reinterpret_cast<const char*>(0x0092BF20));
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x81, mem_00924300(cstr1));
            mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x80, mem_00924300(cstr2));

            mem_009242F4(cstr2);
            mem_009242F4(cstr1);
        }
        if (vec_data[1] != 0) {
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(vec_data[1])));
        }
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0x800, 0, nullptr);
        mem_00925634(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 0x77, reinterpret_cast<const char*>(0x0092BF14));
    }

    mem_0092562C(reinterpret_cast<void*>(static_cast<uintptr_t>(menu_obj[1])), 0, 1);
    void* hwnd = lift_field<void*>(lift_field<void*>(self, 0x30), 0x20);
    mem_00925630(hwnd, &pt);
    uint32_t cmd = ext_0043C930(lift_field<void*>(self, 0x30), menu_obj, &pt);

    switch (cmd) {
        case 0x65:
            ext_0042FE90(mem_00ACDB40);
            ext_0042FE70(mem_00ACDB40, item);
            break;
        case 0x66:
            ext_0042FE90(mem_00ACDB40);
            break;
        case 0x67:
            ext_00468F90(mgr, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr);
            ext_0043A580(mem_00ACDB40, frame, elem_idx);
            break;
        case 0x68: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t, int32_t, void*, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 2, frame, reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(frame)) + 0x3C, elem_idx, 0);
            break;
        }
        case 0x69: {
            void* target = ext_00468660(mgr);
            using VFn = void*(__thiscall*)(void*, void*, uint32_t, int32_t, void*, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            void* res = reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 6, frame, reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(frame)) + 0x3C, elem_idx, 0);
            ext_00468F90(mgr, res);
            break;
        }
        case 0x6A: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t, int32_t, void*, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 4, frame, reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(frame)) + 0x3C, elem_idx, 0);
            break;
        }
        case 0x6B: {
            void* target = ext_00468660(mgr);
            using VFn = void*(__thiscall*)(void*, void*, uint32_t, int32_t, void*, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            void* res = reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 7, frame, reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(frame)) + 0x3C, elem_idx, 0);
            ext_00468F90(mgr, res);
            break;
        }
        case 0x6C: {
            void* target = ext_00468660(mgr);
            using VFn = void*(__thiscall*)(void*, void*, uint32_t, int32_t, int32_t, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            void* res = reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 0, frame, frame, 0, 0);
            ext_00468F90(mgr, res);
            break;
        }
        case 0x6D: {
            void* target = ext_00468660(mgr);
            using VFn = void*(__thiscall*)(void*, void*, uint32_t, int32_t, void*, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            void* res = reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 9, frame, reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(frame)) + 0xF, 0, 0);
            ext_00468F90(mgr, res);
            break;
        }
        case 0x6E: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t, int32_t, int32_t, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 3, frame, frame, elem_idx, 0);
            break;
        }
        case 0x6F: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t, int32_t, int32_t, uint32_t, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0xE4 / 4])(target, item, 5, frame, frame, elem_idx, 0);
            break;
        }
        case 0x70:
            if (ext_006A5E60(0x0092BED8, 0x104, 0) == 6) {
                ext_00469CC0(mgr);
            }
            break;
        case 0x71:
            ext_004684D0(mgr, item);
            break;
        case 0x72:
            ext_00468550(mgr, item);
            break;
        case 0x73:
            ext_00411680(self, elem_idx + 1);
            break;
        case 0x74: {
            void* el = ext_00412E60(self, elem_idx);
            if (ext_00410520(el) == 0 || ext_006A5E60(0x0092BE90, 0x104, 0) == 6) {
                ext_00469E30(mgr, item, elem_idx);
                ext_004118A0(self, elem_idx);
            }
            break;
        }
        case 0x75:
            ext_0043DE60(lift_field<void*>(self, 0x30), self);
            break;
        case 0x76:
            ext_0043DEA0(lift_field<void*>(self, 0x30), self);
            break;
        case 0x77:
            ext_0043DEE0(lift_field<void*>(self, 0x30));
            break;
        case 0x78:
            ext_0043DFB0(lift_field<void*>(self, 0x30));
            break;
        case 0x79: {
            void* pv = lift_field<void*>(self, 0x30);
            using VFn = void(__thiscall*)(void*);
            void** vtbl = lift_field<void**>(pv, 0);
            reinterpret_cast<VFn>(vtbl[0x144 / 4])(pv);
            break;
        }
        case 0x7A: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0x188 / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr);
            break;
        }
        case 0x7B: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0x18C / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr, 0);
            break;
        }
        case 0x7C: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, uint32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0x18C / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr, 0);
            ext_00410540(self, mgr, item);
            break;
        }
        case 0x7D: {
            void* range_obj = reinterpret_cast<uint8_t*>(doc) + 0x238;
            uint32_t cur[2] = {};
            uint32_t end[2] = {};
            ext_00489320(range_obj, cur);
            while (ext_0049AD40(cur, ext_00410D10(range_obj, end)) != 0) {
                void* obj = *ext_00492A50(cur);
                void* target = ext_00468660(mgr);
                using VFn = void(__thiscall*)(void*, void*, uint32_t);
                void** vtbl = lift_field<void**>(target, 0);
                reinterpret_cast<VFn>(vtbl[0x18C / 4])(target, obj ? reinterpret_cast<uint8_t*>(obj) + 4 : nullptr, 0);
                ext_00425E30(cur);
            }
            break;
        }
        case 0x7E: {
            void* range_obj = reinterpret_cast<uint8_t*>(doc) + 0x238;
            uint32_t cur[2] = {};
            uint32_t end[2] = {};
            ext_00489320(range_obj, cur);
            while (ext_0049AD40(cur, ext_00410D10(range_obj, end)) != 0) {
                void* obj = *ext_00492A50(cur);
                void* target = ext_00468660(mgr);
                using VFn = void(__thiscall*)(void*, void*, uint32_t);
                void** vtbl = lift_field<void**>(target, 0);
                reinterpret_cast<VFn>(vtbl[0x18C / 4])(target, obj ? reinterpret_cast<uint8_t*>(obj) + 4 : nullptr, 0);
                ext_00410540(self, mgr, obj);
                ext_00425E30(cur);
            }
            break;
        }
        case 0x7F:
            if (ext_006A5E60(0x0092BE60, 0x104, 0) == 6) {
                void* target = ext_00468660(mgr);
                using VFn = void(__thiscall*)(void*, void*, uint32_t, int32_t);
                void** vtbl = lift_field<void**>(target, 0);
                reinterpret_cast<VFn>(vtbl[0x190 / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr, 0, -1);
            }
            break;
        case 0x80:
            if (ext_006A5E60(0x0092BE60, 0x104, 0) == 6) {
                void* target = ext_00468660(mgr);
                using VFn = void(__thiscall*)(void*, void*, int32_t, int32_t);
                void** vtbl = lift_field<void**>(target, 0);
                reinterpret_cast<VFn>(vtbl[0x190 / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr, frame, -1);
            }
            break;
        case 0x81: {
            void* target = ext_00468660(mgr);
            using VFn = void(__thiscall*)(void*, void*, int32_t, int32_t);
            void** vtbl = lift_field<void**>(target, 0);
            reinterpret_cast<VFn>(vtbl[0x190 / 4])(target, item ? reinterpret_cast<uint8_t*>(item) + 4 : nullptr, frame, frame);
            break;
        }
        case 0x82: {
            uint8_t dlg[0x160] = {};
            ext_00449270(dlg, 0, frame, 0);
            void* doc4 = ext_00594000();
            float scale = lift_field<float>(doc4, 0x234);
            void* sub_item = reinterpret_cast<uint8_t*>(item) + 4;
            using GetValFn = float(__thiscall*)(void*);
            void** vtbl = lift_field<void**>(sub_item, 0);
            float val = reinterpret_cast<GetValFn>(vtbl[0xE0 / 4])(sub_item);
            ext_00407870(static_cast<float>(val * scale + mem_00993828));
            int32_t rounded = ext_006A6DE0();
            ext_004490B0(dlg, 0, rounded);
            ext_004490D0(dlg, 0, rounded);
            if (ext_006A5FA4(dlg) == 1) {
                void* target = ext_00468660(mgr);
                using VFn = void(__thiscall*)(void*, void*, int32_t, int32_t);
                void** tvtbl = lift_field<void**>(target, 0);
                int32_t p1 = lift_field<int32_t>(dlg, 0x13C);
                int32_t p2 = lift_field<int32_t>(dlg, 0x140);
                reinterpret_cast<VFn>(tvtbl[0x190 / 4])(target, sub_item, p1, p2);
            }
            ext_004493C0(dlg);
            break;
        }
        default:
            break;
    }

    void* hwnd2 = lift_field<void*>(lift_field<void*>(self, 0x30), 0x20);
    mem_00925688(hwnd2, nullptr, 1);
    menu_obj[0] = 0x0092BD7C;
    ext_006A6166(menu_obj);
}
} // namespace lift_00411A80
