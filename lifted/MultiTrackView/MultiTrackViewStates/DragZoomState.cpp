// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/DragZoomState.cpp
#include "lift_compat.h"
// USER32!InvalidateRect, imported through IAT slot mem_00925688.
extern "C" BOOL __stdcall ext_InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);
// USER32!ReleaseCapture, imported through IAT slot mem_009256E0 (tail-jumped in the original).
extern "C" BOOL __stdcall ext_ReleaseCapture(void);

// [0x00443440] MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_2 (23 bytes)
// @name MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::DragZoomState
// @summary Repaints the owner's window (whole client area) and releases mouse capture, ending the drag-zoom gesture.
// @field MultiTrackView::MultiTrackViewStates::DragZoomState +0x08 void* field_0x08
BOOL fn_00443440(void* self) {
    // self->field_0x08 points to an owner object; its window handle lives at +0x20.
    auto* base = static_cast<uint8_t*>(self);
    auto* owner = *reinterpret_cast<uint8_t**>(base + 0x08);
    HWND hwnd = *reinterpret_cast<HWND*>(owner + 0x20);

    ext_InvalidateRect(hwnd, nullptr, TRUE);
    // Original is a tail jump, so the return value is ReleaseCapture's BOOL.
    return ext_ReleaseCapture();
}
