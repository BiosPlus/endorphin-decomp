// Lifted C++ translation unit: lifted/classes/EditBox.cpp
#include "lift_compat.h"

// [0x004154A0]
namespace lift_004154A0 {
// @name EditBox::PreTranslateMessage
// @class EditBox
// @summary Handles WM_KEYDOWN for Enter (notifying parent and selecting all if modified) and non-Tab keys (marking modified) before forwarding to CEdit::PreTranslateMessage.
// @field EditBox +0x20 void* m_hWnd


#ifndef __stdcall
#define __stdcall
#endif
#ifndef __thiscall
#define __thiscall
#endif

void __thiscall ext_00415430(void* self);
int32_t __thiscall ext_006A5DA0(void* self, void* pMsg);
extern uintptr_t mem_00925694;

using SendMessageFn = int32_t (__stdcall *)(void* hWnd, uint32_t msg, uintptr_t wParam, intptr_t lParam);

int32_t __thiscall fn_004154A0(void* self, void* pMsg) {
    uint32_t message = lift_field<uint32_t>(pMsg, 0x4);
    if (message == 0x100) {
        uint32_t wParam = lift_field<uint32_t>(pMsg, 0x8);
        auto send_message = reinterpret_cast<SendMessageFn>(mem_00925694);
        if (wParam == 0xD) {
            void* hwnd = lift_field<void*>(self, 0x20);
            if (send_message(hwnd, 0xB8, 0, 0) != 0) {
                send_message(lift_field<void*>(self, 0x20), 0xB9, 0, 0);
                ext_00415430(self);
                send_message(lift_field<void*>(self, 0x20), 0xB1, 0, -1);
                send_message(lift_field<void*>(self, 0x20), 0xB7, 0, 0);
            }
            return 1;
        }
        if (wParam != 0x9) {
            send_message(lift_field<void*>(self, 0x20), 0xB9, 1, 0);
        }
    }
    return ext_006A5DA0(self, pMsg);
}
} // namespace lift_004154A0
