// Lifted C++ translation unit: lifted/classes/RenderView.cpp
#include "lift_compat.h"

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
namespace lift_0044BF40 {
extern void* mem_00ACDB40;

extern BOOL GetWindowRect(HWND hWnd, RECT* lpRect);

// @name RenderView::vfunc_28
// @class RenderView
// @summary Gets the window rect of the global view's window into the caller's RECT when the RenderView's flag at +0x6C is set.
// @field RenderView +0x6c uint8_t field_0x6c
BOOL fn_0044BF40(void* self, RECT* rect, DWORD /*unused*/) {
    // Flag at +0x6C gates the call. The zero-flag branch (je 0x44BF61) targets
    // the byte just past this 33-byte function, which is not part of this lift.
    // Assumed here to return FALSE without touching rect; verify against the binary.
    if (lift_field<uint8_t>(self, 0x6c) == 0) {
        return FALSE;
    }

    // Global object pointer; its +0x20 slot holds the HWND to query.
    void* global = mem_00ACDB40;
    HWND hwnd = lift_field<HWND>(global, 0x20);

    // Original tail-jumps to GetWindowRect(hwnd, rect) and returns its result.
    return GetWindowRect(hwnd, rect);
}
} // namespace lift_0044BF40
