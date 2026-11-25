// Lifted C++ translation unit: lifted/classes/RigEditor.cpp
#include "lift_compat.h"

// [0x00453F50]
namespace lift_00453F50 {
// @name RigEditor::PreTranslateMessage
// @class RigEditor
// @summary Handles WM_KEYDOWN (VK_RETURN and forwarding to global handler) and WM_LBUTTONDOWN before delegating to CDialog::PreTranslateMessage.

extern uint8_t mem_00ACDB40[];
extern void __thiscall ext_00453C80(uint32_t self, uint32_t nChar, uint32_t nRepCnt, uint32_t nFlags);
extern int __thiscall ext_006A5F7A(uint32_t self, uint32_t pMsg);
extern void __thiscall ext_006A60D0(uint32_t self);

extern int __thiscall fn_00453F50(uint32_t self, uint32_t pMsg) {
    uint32_t message = *reinterpret_cast<uint32_t*>(pMsg + 0x4);
    if (message == 0x100) {
        if (*reinterpret_cast<uint32_t*>(pMsg + 0x8) == 0xd) {
            ext_00453C80(self, 0xd, 1, 0);
            return 1;
        }
        uint32_t obj = *reinterpret_cast<uint32_t*>(mem_00ACDB40);
        uint32_t vtable = *reinterpret_cast<uint32_t*>(obj);
        auto vfunc = reinterpret_cast<int (__thiscall*)(uint32_t, uint32_t)>(
            *reinterpret_cast<uint32_t*>(vtable + 0x108));
        if (vfunc(obj, pMsg) != 0) {
            return 1;
        }
    } else if (message == 0x201) {
        ext_006A60D0(self);
    }
    return ext_006A5F7A(self, pMsg);
}
} // namespace lift_00453F50
