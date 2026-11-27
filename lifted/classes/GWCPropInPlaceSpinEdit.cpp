// Lifted C++ translation unit: lifted/classes/GWCPropInPlaceSpinEdit.cpp
#include "lift_compat.h"

// [0x006B6720]
namespace lift_006B6720 {
// @name GWCPropInPlaceSpinEdit::vfunc_66
// @class GWCPropInPlaceSpinEdit
// @summary Redirects WM_KEYDOWN messages to the embedded child control's HWND before calling base PreTranslateMessage.
// @field GWCPropInPlaceSpinEdit +0x20 uint32_t m_hWnd
// @field GWCPropInPlaceSpinEdit +0xa8 uint8_t field_0xa8
// @field GWCPropInPlaceSpinEdit +0xc8 uint32_t field_0xc8

extern void __thiscall ext_006A5DA0(void* self, void* pMsg);
extern void __thiscall ext_006A663A(void* self, void* pWnd);
extern void* __stdcall ext_006A5E00(void* hWnd);
extern void __thiscall ext_006A60D0(void* self);
extern uintptr_t mem_00925650;

extern void __thiscall fn_006B6720(void* self, void* pMsg) {
    uint32_t* msg = reinterpret_cast<uint32_t*>(pMsg);
    if (msg[1] == 0x100u) {
        uint8_t* sub = reinterpret_cast<uint8_t*>(self) + 0xa8;
        if (sub != nullptr) {
            msg[0] = lift_field<uint32_t>(sub, 0x20);
        } else {
            msg[0] = 0;
        }
    }
    ext_006A5DA0(self, pMsg);
    return;

    // Unreachable block at 0x006B6750..0x006B6793 included in disassembly range
    void* pWnd = pMsg;
    ext_006A663A(self, pWnd);
    uint32_t wndHwnd = pWnd ? lift_field<uint32_t>(pWnd, 0x20) : 0;
    uint8_t* sub = reinterpret_cast<uint8_t*>(self) + 0xa8;
    uint32_t subHwnd = sub ? lift_field<uint32_t>(sub, 0x20) : 0;
    void* target = self;
    if (wndHwnd == subHwnd) {
        using GetParentFn = void* (__stdcall*)(uint32_t);
        auto getParent = reinterpret_cast<GetParentFn>(mem_00925650);
        void* parentHwnd = getParent(lift_field<uint32_t>(self, 0x20));
        target = ext_006A5E00(parentHwnd);
    }
    ext_006A60D0(target);
}
} // namespace lift_006B6720
