// Lifted C++ translation unit: lifted/classes/RenderView.cpp
#include "lift_compat.h"

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
namespace lift_0044BF40 {
// Global pointer at 0x00ACDB40; its +0x20 slot holds the window handle.
extern void* mem_00ACDB40;

// IAT slot holding the address of USER32!GetWindowRect (0x00925690).
extern void* mem_00925690;

// @name RenderView::vfunc_28
// @class RenderView
// @summary If field_0x6c is set, fills rect via GetWindowRect on the window handle at *(mem_00ACDB40 + 0x20); otherwise returns FALSE.
// @field RenderView +0x6C uint8_t field_0x6c
BOOL fn_0044BF40(void* self, RECT* rect) {
    if (lift_field<uint8_t>(self, 0x6C) == 0) {
        return FALSE;
    }
    HWND hwnd = lift_field<HWND>(mem_00ACDB40, 0x20);
    auto get_window_rect = reinterpret_cast<BOOL (*)(HWND, RECT*)>(mem_00925690);
    return get_window_rect(hwnd, rect);
}
} // namespace lift_0044BF40
