// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/DragZoomState.cpp
#include "lift_compat.h"
// USER32!InvalidateRect, imported through IAT slot mem_00925688.
extern "C" BOOL __stdcall ext_InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);
// USER32!ReleaseCapture, imported through IAT slot mem_009256E0 (tail-jumped in the original).
extern "C" BOOL __stdcall ext_ReleaseCapture(void);

// [0x00443440] MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_2 (23 bytes)
namespace lift_00443440 {
// Win32 import slots (IAT entries) used by the original thunk.
extern void* mem_00925688; // USER32!InvalidateRect
extern void* mem_009256E0; // USER32!ReleaseCapture

// @name MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::DragZoomState
// @summary Invalidates the window of the owner object, then releases mouse capture.
// @field MultiTrackView::MultiTrackViewStates::DragZoomState +0x08 void* field_0x08
BOOL fn_00443440(void* self) {
    void* owner = lift_field<void*>(self, 0x08);
    HWND hwnd = lift_field<HWND>(owner, 0x20);

    auto invalidateRect = reinterpret_cast<BOOL (*)(HWND, const RECT*, BOOL)>(mem_00925688);
    invalidateRect(hwnd, nullptr, TRUE);

    auto releaseCapture = reinterpret_cast<BOOL (*)(void)>(mem_009256E0);
    return releaseCapture();
}
} // namespace lift_00443440

// [0x00443460] MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_7 (158 bytes)
namespace lift_00443460 {
// Known callee 0x0043CDD0: pixelToTime (thiscall, self + int x -> double)
extern double ext_0043CDD0(void* self, INT x);
// Known callee 0x0043DD60: Unknown::clampAndDispatchFloatPair (thiscall, self + double arg1 + double arg2)
extern void ext_0043DD60(void* self, double arg1, double arg2);
// Known callee 0x0041C880: StateManager::setStateByIndex (thiscall, self + index)
extern UCHAR ext_0041C880(void* self, UINT index);

// USER32!InvalidateRect, imported through IAT slot mem_00925688.
extern void* mem_00925688;
// Read-only double constant 1.0 in .rdata.
extern const double mem_0092A270;

// @name MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::DragZoomState
// @summary If flags bit 4 is set and the two pixel positions span more than 1.0 time unit, clamps the pair and invalidates the owner window; then switches the state manager to index 0.
// @field MultiTrackView::MultiTrackViewStates::DragZoomState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::DragZoomState +0x08 void* field_0x08
UCHAR fn_00443460(void* self, DWORD flags, INT arg2, INT arg3) {
    (void)arg3;

    void* stateMgr = lift_field<void*>(self, 0x04);
    void* owner = lift_field<void*>(self, 0x08);

    if ((flags & 0x4) != 0) {
        // [[self+4]+0xC] is a dword inside the state manager object.
        INT anchor = lift_field<INT>(stateMgr, 0x0C);
        double t1 = ext_0043CDD0(owner, anchor);
        double t2 = ext_0043CDD0(owner, arg2);

        // Order the pair: lo = min, hi = max. Unordered (NaN) keeps t1 first.
        double lo = t1;
        double hi = t2;
        if (t1 > t2) {
            lo = t2;
            hi = t1;
        }

        // Proceed only if (hi - lo) > 1.0 strictly.
        if ((hi - lo) > mem_0092A270) {
            ext_0043DD60(owner, lo, hi);

            auto invalidateRect = reinterpret_cast<BOOL(*)(HWND, const RECT*, BOOL)>(mem_00925688);
            HWND hwnd = lift_field<HWND>(owner, 0x20);
            invalidateRect(hwnd, nullptr, TRUE);
        }
    }

    ext_0041C880(stateMgr, 0);
    return 1;
}
} // namespace lift_00443460
