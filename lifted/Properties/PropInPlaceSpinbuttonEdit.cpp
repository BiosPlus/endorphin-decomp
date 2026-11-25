// Lifted C++ translation unit: lifted/Properties/PropInPlaceSpinbuttonEdit.cpp
#include "lift_compat.h"

// [0x00448920]
namespace lift_00448920 {
// @name Properties::PropInPlaceSpinbuttonEdit::vfunc_66
// @class Properties::PropInPlaceSpinbuttonEdit
// @summary Handles WM_KEYDOWN (0x100) by updating arg1+0x0 from this+0x7c before forwarding to MFC80!ord_5214.
// @field Properties::PropInPlaceSpinbuttonEdit +0x5c uint32_t field_0x5c
// @field Properties::PropInPlaceSpinbuttonEdit +0x7c uint32_t field_0x7c


extern void __thiscall ext_006A5DA0(void* self, uint32_t* arg1);

void __thiscall fn_00448920(void* self, uint32_t* arg1) {
    if (arg1[1] == 0x100) {
        uintptr_t ptr = reinterpret_cast<uintptr_t>(self) + 0x5c;
        uint32_t val = (ptr != 0) ? *reinterpret_cast<const uint32_t*>(ptr + 0x20) : 0;
        arg1[0] = val;
    }
    ext_006A5DA0(self, arg1);
}
} // namespace lift_00448920

// [0x00448B70]
namespace lift_00448B70 {
// @name Properties::PropInPlaceSpinbuttonEdit::vfunc_2_off_54
// @class Properties::PropInPlaceSpinbuttonEdit
// @summary Clears dirty flags and updates the spinbutton edit control text and cached value if the active property matches.
// @field Properties::PropInPlaceSpinbuttonEdit +0x20 uint32_t m_hWnd
// @field Properties::PropInPlaceSpinbuttonEdit +0xC8 void* field_0xc8
// @field Properties::PropInPlaceSpinbuttonEdit +0xCC void* field_0xcc
// @field Properties::PropInPlaceSpinbuttonEdit +0xE0 uint8_t field_0xe0
// @field Properties::PropInPlaceSpinbuttonEdit +0xE4 uint8_t[8] field_0xe4
// @field Properties::PropInPlaceSpinbuttonEdit +0xEC uint32_t field_0xec
// @field Properties::PropInPlaceSpinbuttonEdit +0xF0 uint8_t field_0xf0

    extern uint32_t mem_00B5D200;
    extern uint32_t mem_00925694;

    int32_t __cdecl ext_00665870(void);
    void __thiscall ext_00665890(uint32_t self);
    void* __thiscall ext_006B4440(void* self);
    uint32_t __thiscall ext_006AD940(void* self);
    uint32_t __thiscall ext_006AD180(void* self);
    void* __thiscall ext_0041CF50(void* self, void* other);

using SendMessageAFn = uint32_t(__stdcall*)(uint32_t hWnd, uint32_t msg, uint32_t wParam, uint32_t lParam);

void __thiscall fn_00448B70(void* self, uint32_t /*arg0*/) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint8_t*>(base + 0x9C) = 0;

    int32_t val = ext_00665870();
    ext_00665890(static_cast<uint32_t>(val));

    auto* obj = *reinterpret_cast<uint8_t**>(base + 0x78);
    if (obj != nullptr &&
        *reinterpret_cast<uint32_t*>(obj + 0x19C) == *reinterpret_cast<uint32_t*>(base + 0x98)) {
        void* field74 = *reinterpret_cast<void**>(base + 0x74);
        void* subObj = ext_006B4440(field74);
        uint32_t wParam = ext_006AD940(subObj);

        uint32_t msg = mem_00B5D200;
        uint32_t hWnd = *reinterpret_cast<uint32_t*>(base - 0x34);
        auto sendMessageA = reinterpret_cast<SendMessageAFn>(mem_00925694);
        sendMessageA(hWnd, msg, wParam, 0);

        field74 = *reinterpret_cast<void**>(base + 0x74);
        uint32_t ptr = ext_006AD180(field74);
        ext_0041CF50(base + 0x90, reinterpret_cast<void*>(ptr + 0x40));
    }

    *reinterpret_cast<uint8_t*>(base + 0x8C) = 0;
}
} // namespace lift_00448B70
