// Lifted C++ translation unit: lifted/classes/NMCAutoCompleteList.cpp
#include "lift_compat.h"

// [0x006B8AB0]
namespace lift_006B8AB0 {
extern uint32_t __stdcall ext_006A5DA0(uint32_t pMsg);
extern uintptr_t mem_009255A0;

// @name NMCAutoCompleteList::PreTranslateMessage
// @class NMCAutoCompleteList
// @summary Forwards non-navigation WM_KEYDOWN messages to a buddy window's HWND after peeking them.
// @field NMCAutoCompleteList +0x20 uint32_t m_hWnd
// @field NMCAutoCompleteList +0x5c uint32_t field_0x5c
uint32_t __thiscall fn_006B8AB0(void* self, uint32_t pMsg) {
    uint32_t* msgPtr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(pMsg));
    if (msgPtr[1] == 0x100) {
        uint32_t wParam = msgPtr[2];
        if (wParam != 0x26 && wParam != 0x28 && wParam != 0x1b) {
            uint8_t* selfBytes = static_cast<uint8_t*>(self);
            uint32_t hWnd = selfBytes ? *reinterpret_cast<uint32_t*>(selfBytes + 0x20) : 0;
            using PeekMessageA_t = int32_t(__stdcall*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
            reinterpret_cast<PeekMessageA_t>(mem_009255A0)(pMsg, hWnd, 0, 0, 1);

            uint32_t buddy = *reinterpret_cast<uint32_t*>(selfBytes + 0x5c);
            if (buddy != 0) {
                uint32_t buddyHwnd = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(buddy) + 0x20);
                msgPtr[0] = buddyHwnd;
            }
            return 0;
        }
    }
    return ext_006A5DA0(pMsg);
}
} // namespace lift_006B8AB0
