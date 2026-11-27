// Lifted C++ translation unit: lifted/classes/HotkeyEditDialog.cpp
#include "lift_compat.h"

// [0x00422130] HotkeyEditDialog::vfunc_66 (153 bytes)
namespace lift_00422130 {
// Known callee 0x006A5F7A: thunk_MFC80_ord_5203 (IAT jump thunk forwarding to MFC80!ord_5203.)
extern void ext_006A5F7A();
extern int mem_009255F4;  // IAT slot: USER32!GetKeyState
extern int mem_00925694;  // IAT slot: USER32!SendMessageA

// @name HotkeyEditDialog::vfunc_66
// @class HotkeyEditDialog
// @summary WM_KEYDOWN handler: forwards key plus Shift/Ctrl/Alt state to the edit control (WM_USER+1), else defers to the base class.
// @field HotkeyEditDialog +0x94 HWND field_0x94
int fn_00422130(void* self, void* msg) {
    const uint32_t message = lift_field<uint32_t>(msg, 4);
    if (message != 0x100) {  // WM_KEYDOWN
        ext_006A5F7A();
        return 0;
    }

    const uint32_t vkey = lift_field<uint32_t>(msg, 8);
    // Original: (vkey - 8) must be <= 0x88 (unsigned), otherwise defer to base.
    if (vkey - 8u > 0x88u) {
        ext_006A5F7A();
        return 0;
    }

    // NOTE: the jump-table targets at 0x4221CC/0x4221D8 could not be read, so the
    // per-key case mapping is unverified. In-range keys are treated as handled here.
    using GetKeyStateFn = int16_t(*)(int);
    using SendMessageFn = intptr_t(*)(void*, uint32_t, uintptr_t, intptr_t);
    auto get_key_state = reinterpret_cast<GetKeyStateFn>(static_cast<uintptr_t>(mem_009255F4));
    auto send_message = reinterpret_cast<SendMessageFn>(static_cast<uintptr_t>(mem_00925694));

    uint32_t modifiers = 0;
    if (get_key_state(0x12) < 0) modifiers |= 0x4;  // VK_MENU  -> Alt
    if (get_key_state(0x11) < 0) modifiers |= 0x2;  // VK_CONTROL
    if (get_key_state(0x10) < 0) modifiers |= 0x1;  // VK_SHIFT

    void* edit_hwnd = lift_field<void*>(self, 0x94);
    const uintptr_t wparam = ((modifiers & 0xFFu) << 8) | (vkey & 0xFFu);
    send_message(edit_hwnd, 0x401, wparam, 0);
    return 1;
}
} // namespace lift_00422130
