// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/DragSelectState.cpp
#include "lift_compat.h"
#include <algorithm>

// [0x00443520] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_18 (174 bytes)
namespace lift_00443520 {
// Callee 0x006A6010: thunk_MFC80_ord_5731 (IAT jump thunk; ecx = first arg, one stack arg).
extern void ext_006A6010(void* self, int a0);
// Callee 0x0066A330: Unknown::SetFloat4 (thiscall; four float stack args copied to self+0x00..+0x0C; returns self in eax).
extern void* ext_0066A330(void* self, float a0, float a1, float a2, float a3);
// Callee 0x00419EF0: thiscall, five stack args (first pushed last).
extern void ext_00419EF0(void* self, void* a0, void* a1, void* a2, int a3, int a4);
// Callee 0x00493D90: AddCharacterDialog::vfunc_3 (1 byte body).
extern void ext_00493D90(void* self);
// SEH scope table referenced by the frame setup (not needed by the portable lift).
extern int mem_0087BA58;

// @name MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_18
// @class MultiTrackView::MultiTrackViewStates::DragSelectState
// @summary Notifies the MFC helper with the argument, builds a unit Vector4 and an int4 snapshot from the state at +0x04, invokes the child update routines, and returns false.
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x08 void* field_0x08
bool fn_00443520(void* self, void* arg) {
    (void)mem_0087BA58;

    ext_006A6010(arg, 1);

    // Stack-resident float slots {1.0, 1.0, 1.0, 1.0} from the original frame.
    float frame[4] = {1.0f, 1.0f, 1.0f, 1.0f};

    // Snapshot of four dwords from the struct pointed to by self+0x04.
    uint8_t* state = lift_field<uint8_t*>(self, 0x04);
    int32_t snap[4] = {
        lift_field<int32_t>(state, 0x0C),
        lift_field<int32_t>(state, 0x10),
        lift_field<int32_t>(state, 0x14),
        lift_field<int32_t>(state, 0x18),
    };

    // Vector4 object filled by SetFloat4 with 1.0 in each component.
    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* vecPtr = ext_0066A330(vec, 1.0f, 1.0f, 1.0f, 1.0f);

    // Child update: receiver is self+0x08 + 0x1B4.
    uint8_t* owner = lift_field<uint8_t*>(self, 0x08);
    ext_00419EF0(owner + 0x1B4, arg, &frame[3], vecPtr, 1, 2);

    ext_00493D90(snap);

    return false;
}
} // namespace lift_00443520

// [0x00443750] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_4 (528 bytes)
namespace lift_00443750 {
// Callee 0x0041C880: StateManager::setStateByIndex (Switches the active object at +0x8 to the element at index in the vector at +0x4.)
extern uint8_t ext_0041C880(void* self, uint32_t index);
// Callee 0x0043C9B0: Unknown::forwardVirtual150WithSubobject80 (forwards arg to virtual slot 0x150 on self, passing self+0x80.)
extern uintptr_t ext_0043C9B0(void* self, uintptr_t arg);
// Callee 0x0043CDD0: pixelToTime (converts a client-area pixel x to a time/value).
extern double ext_0043CDD0(void* self, int32_t x);
// Callee 0x0043D620: returns an object pointer (or null) for the sub-object at self; out-param arg.
extern void* ext_0043D620(void* self, int32_t* out);
// Callee 0x0043DD60: Unknown::clampAndDispatchFloatPair (clamps and stores two doubles).
extern void ext_0043DD60(void* self, double arg1, double arg2);
// Callee 0x0043F2E0: fills the selection list from four ints and a list out-pointer.
extern void ext_0043F2E0(void* self, int32_t a0, int32_t a1, int32_t a2, int32_t a3, void* list);
// Callee 0x0043F490: per-element dispatch for a selected object.
extern void ext_0043F490(void* self, void* elem);
// Callee 0x0043F4C0: finalizes the selection list.
extern void ext_0043F4C0(void* self, void* list);
// Callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk, one stack arg).
extern void ext_006A5C5C(void* a0);
// Callee 0x006A60D0: thunk_MFC80_ord_5833 (IAT jump thunk, ecx = this).
extern void ext_006A60D0(void* self);
// Data/IAT slots referenced by the original frame and call sites.
extern int mem_0087BA98;
extern int mem_00925134;
extern void* mem_00925688;

namespace lift_00443750 {
// Local selection list built by ext_0043F2E0 (begin/end/cap live at +0x04/+0x08/+0x0C of the frame slot).
struct SelectList {
    uint32_t reserved;
    void** begin;
    void** end;
    void** cap;
};
} // namespace lift_00443750

// @name MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::DragSelectState
// @summary Maps the two int range args through the view's time conversion, then either dispatches the selection list (flag 0x8, optionally with flag 0x4 scanning) or runs the hit-test fallback, and invalidates the window.
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x08 void* field_0x08
bool fn_00443750(void* self, uint32_t flags, int32_t a, int32_t b) {
    (void)mem_0087BA98;
    (void)mem_00925134;

    lift_00443750::SelectList list{};

    void* obj8 = lift_field<void*>(self, 0x08);
    void* view = lift_field<void*>(self, 0x04);
    int32_t c = lift_field<int32_t>(view, 0x0C);
    int32_t d = lift_field<int32_t>(view, 0x10);

    const bool sel = (flags & 0x8) != 0;

    if (sel && (flags & 0x4) != 0) {
        // Convert both range ends to time and dispatch the clamped pair.
        int32_t mx = std::max(c, a);
        int32_t mn = std::min(c, a);
        double dMax = ext_0043CDD0(obj8, mx);
        double dMin = ext_0043CDD0(obj8, mn);
        ext_0043DD60(obj8, dMin, dMax);
    } else {
        ext_0043F2E0(obj8, c, d, a, b, &list);

        if (sel) {
            for (void** it = list.begin; it != list.end; ++it) {
                ext_0043F490(obj8, *it);
            }
            ext_0043C9B0(obj8, 0);
        } else if ((flags & 0x4) != 0) {
            for (void** it = list.begin; it != list.end; ++it) {
                void* elem = *it;
                if (lift_field<uint8_t>(elem, 0x88) == 0) {
                    ext_0043F490(obj8, elem);
                }
                ext_0043C9B0(obj8, 0);
            }
        } else {
            void* r = ext_0043D620(obj8, &a);
            bool dl = false;
            if (r != nullptr) {
                void** vt = lift_field<void**>(r, 0);
                auto vfn = reinterpret_cast<uint8_t (*)(void*)>(vt[3]);
                dl = (vfn(r) == 0);
            }
            if (dl || list.begin != list.end) {
                ext_0043F4C0(obj8, &list);
                ext_0043C9B0(obj8, 0);
            }
        }
    }

    // Common tail: notify the owner, invalidate the window, and reset the view state.
    ext_006A60D0(obj8);

    void* hwnd = lift_field<void*>(obj8, 0x20);
    using InvalidateRectFn = int(__stdcall*)(void*, const void*, int);
    (*reinterpret_cast<InvalidateRectFn*>(&mem_00925688))(hwnd, nullptr, 1);

    ext_0041C880(view, 0);

    if (list.begin != nullptr) {
        ext_006A5C5C(list.begin);
    }

    return true;
}
} // namespace lift_00443750
