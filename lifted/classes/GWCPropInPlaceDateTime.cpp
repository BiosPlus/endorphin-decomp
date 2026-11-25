// Lifted C++ translation unit: lifted/classes/GWCPropInPlaceDateTime.cpp
#include "lift_compat.h"

// [0x006B4F20]
namespace lift_006B4F20 {
extern uint32_t mem_009255A0; // USER32!PeekMessageA
extern uint32_t mem_00925650; // USER32!GetParent

extern void* __stdcall ext_006A5E00(void* hWnd);
extern void __thiscall ext_006A60D0(void* self);
extern int32_t __thiscall ext_006A5DA0(void* self, void* pMsg);

// @name GWCPropInPlaceDateTime::PreTranslateMessage
// @class GWCPropInPlaceDateTime
// @summary Intercepts Return and Escape keydown messages, removes them from the queue, and moves focus to the parent window.
// @field GWCPropInPlaceDateTime +0x20 void* m_hWnd
extern int32_t __thiscall fn_006B4F20(void* self, void* pMsg) {
    uint32_t msg = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(pMsg) + 0x4);
    if (msg == 0x100) { // WM_KEYDOWN
        uint32_t wParam = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(pMsg) + 0x8);
        if (wParam == 0xD || wParam == 0x1B) { // VK_RETURN || VK_ESCAPE
            using PeekMessageAFn = int32_t(__stdcall*)(void*, void*, uint32_t, uint32_t, uint32_t);
            reinterpret_cast<PeekMessageAFn>(mem_009255A0)(pMsg, nullptr, 0, 0, 1);

            void* hWnd = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x20);
            using GetParentFn = void*(__stdcall*)(void*);
            void* hParent = reinterpret_cast<GetParentFn>(mem_00925650)(hWnd);

            void* pParent = ext_006A5E00(hParent);
            ext_006A60D0(pParent);
            return 1;
        }
    }
    return ext_006A5DA0(self, pMsg);
}
} // namespace lift_006B4F20
