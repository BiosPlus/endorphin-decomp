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
