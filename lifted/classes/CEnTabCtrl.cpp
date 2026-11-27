// Lifted C++ translation unit: lifted/classes/CEnTabCtrl.cpp
#include "lift_compat.h"

// [0x00416010] CEnTabCtrl::vfunc_85 (46 bytes)
namespace lift_00416010 {
// Global flag word read on every call (bits 0 and 1 are tested).
extern int mem_00AC9CD8;
// IAT slot holding the address of USER32!GetSysColor.
extern int mem_00925680;

// Tail-call target at 0x0041603E (GetSysColor_BtnFace); discards its argument.
extern DWORD fn_0041603E(int unused);

// @name CEnTabCtrl::vfunc_85
// @class CEnTabCtrl
// @summary Returns GetSysColor(COLOR_BTNFACE) when flag bit 1 is set and field_0x58 is -1; otherwise tail-calls GetSysColor_BtnFace. Two out-of-window branches (0x0041604C, 0x00416095) are unresolved.
// @field CEnTabCtrl +0x58 int32_t field_0x58
extern DWORD fn_00416010(void* self, int arg) {
    const int flags = mem_00AC9CD8;

    if (arg == 0) {
        // Branch to 0x0041604C: target body is outside this 46-byte window.
        return 0;
    }
    if ((flags & 0x2) == 0) {
        return fn_0041603E(arg);
    }
    if (lift_field<int32_t>(self, 0x58) != -1) {
        // Branch to 0x00416095: target body is outside this 46-byte window.
        return 0;
    }
    // Tail-call USER32!GetSysColor(COLOR_BTNFACE = 0xF) through the IAT slot.
    auto pGetSysColor = reinterpret_cast<DWORD(*)(int)>(static_cast<uintptr_t>(mem_00925680));
    return pGetSysColor(0xF);
}
} // namespace lift_00416010

// [0x00415F00] CEnTabCtrl::vfunc_84 (151 bytes)
namespace lift_00415F00 {
// Tail-jump target outside the 151-byte body (je/jne at 0x415F1E).
extern uint32_t ext_00415FDA();
// Lifted callee 0x00415E30: ScaleRgbBytesClamped(packed, scale).
extern uint32_t ext_00415E30(uint32_t packed, float scale_in);
extern int mem_00AC9CD8;     // global flag word
extern void* mem_00925680;   // IAT slot holding USER32!GetSysColor
extern float mem_0092C8C0;   // 1.4f scale constant

// @name CEnTabCtrl::vfunc_84
// @class CEnTabCtrl
// @summary Picks a color (CEnTabCtrl+0x54 or GetSysColor(COLOR_BTNTEXT)) depending on global flags and scales it via fn_00415E30 (scale 1.4).
// @field CEnTabCtrl +0x54 int32_t field_0x54
uint32_t fn_00415F00(void* self, uint32_t arg) {
    const uint32_t flags = static_cast<uint32_t>(mem_00AC9CD8);
    const uint32_t eax = flags & 0x2;
    auto get_sys_color = []() -> uint32_t {
        using GetSysColorFn = uint32_t(__stdcall*)(int);
        return reinterpret_cast<GetSysColorFn>(mem_00925680)(15);
    };

    if (arg != 0) {
        if ((flags & 0x4) == 0) {
            return ext_00415FDA();
        }
        if (eax != 0) {
            const int32_t c = lift_field<int32_t>(self, 0x54);
            const uint32_t color = (c == -1) ? get_sys_color() : static_cast<uint32_t>(c);
            return ext_00415E30(color, mem_0092C8C0);
        }
        return ext_00415E30(get_sys_color(), mem_0092C8C0);
    }

    if ((flags & 0x10) != 0 || (flags & 0x1) == 0) {
        return eax;
    }
    const int32_t c = lift_field<int32_t>(self, 0x54);
    if (c == -1) {
        return get_sys_color();
    }
    // Block at 0x415FB3 is outside the disassembly provided; assumed to mirror the
    // ecx-as-color path above.
    return ext_00415E30(static_cast<uint32_t>(c), mem_0092C8C0);
}
} // namespace lift_00415F00
