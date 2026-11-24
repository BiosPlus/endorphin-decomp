// Lifted C++ translation unit: lifted/classes/CImageButton.cpp
#include "lift_compat.h"

// [0x00422BC0] CImageButton::vfunc_69 (49 bytes)
namespace lift_00422BC0 {
// Known callee 0x006A5DB2: thunk_MFC80_ord_5073 (IAT jump thunk forwarding to MFC80!ord_5073.)
// Tail-jumped with the original stack arguments, so it receives the same args as this function.
extern LRESULT ext_006A5DB2(void* self, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
// IAT slot holding USER32!InvalidateRect.
extern void* mem_00925688;

using InvalidateRectFn = BOOL(__stdcall*)(void* hWnd, const void* lpRect, BOOL bErase);

// @name CImageButton::vfunc_69
// @class CImageButton
// @summary On WM_MOUSELEAVE (0x2A3) clear the flag at +0x8E and invalidate the window; otherwise forward to the base handler.
// @field CImageButton +0x20 void* field_0x20
// @field CImageButton +0x8E BYTE field_0x8e
LRESULT fn_00422BC0(void* self, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT* pResult) {
    constexpr UINT WM_MOUSELEAVE_MSG = 0x2A3;
    if (msg != WM_MOUSELEAVE_MSG) {
        return ext_006A5DB2(self, msg, wParam, lParam, pResult);
    }

    auto* base = static_cast<std::uint8_t*>(self);
    void* hWnd = *reinterpret_cast<void**>(base + 0x20);
    *(base + 0x8E) = 0;
    reinterpret_cast<InvalidateRectFn>(mem_00925688)(hWnd, nullptr, FALSE);
    return 1;
}
} // namespace lift_00422BC0
