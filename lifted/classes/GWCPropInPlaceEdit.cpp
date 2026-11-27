// Lifted C++ translation unit: lifted/classes/GWCPropInPlaceEdit.cpp
#include "lift_compat.h"

// [0x006B0D30]
namespace lift_006B0D30 {
extern int __thiscall ext_006A5DA0(void* self, void* pMsg);
extern void* __stdcall ext_006A5E00(void* hWnd);
extern void* __thiscall ext_006A60D0(void* self);

extern uintptr_t mem_009255A0;
extern uintptr_t mem_00925650;

// @name GWCPropInPlaceEdit::PreTranslateMessage
// @class GWCPropInPlaceEdit
// @summary Handles keydown messages (Escape, Return, Tab, Up/Down) to transfer focus to parent or forward to CEdit::PreTranslateMessage.
// @field GWCPropInPlaceEdit +0x20 void* m_hWnd
extern int __thiscall fn_006B0D30(void* self, void* pMsg) {
    uint32_t message = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(pMsg) + 0x4);
    if (message == 0x100) {
        uint32_t wParam = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(pMsg) + 0x8);
        using PeekMessageAFn = int(__stdcall*)(void*, void*, uint32_t, uint32_t, uint32_t);
        using GetParentFn = void*(__stdcall*)(void*);

        switch (wParam) {
            case 0x0D: // VK_RETURN
            case 0x1B: // VK_ESCAPE
            {
                auto peekMessage = reinterpret_cast<PeekMessageAFn>(mem_009255A0);
                peekMessage(pMsg, nullptr, 0, 0, 1);
                void* hWnd = lift_field<void*>(self, 0x20);
                auto getParent = reinterpret_cast<GetParentFn>(mem_00925650);
                void* hParent = getParent(hWnd);
                void* pParent = ext_006A5E00(hParent);
                ext_006A60D0(pParent);
                return 1;
            }
            case 0x09: // VK_TAB
            case 0x26: // VK_UP
            case 0x28: // VK_DOWN
            {
                void* hWnd = lift_field<void*>(self, 0x20);
                auto getParent = reinterpret_cast<GetParentFn>(mem_00925650);
                void* hParent = getParent(hWnd);
                void* pParent = ext_006A5E00(hParent);
                ext_006A60D0(pParent);
                return 0;
            }
            default:
                break;
        }
    }
    return ext_006A5DA0(self, pMsg);
}
} // namespace lift_006B0D30
