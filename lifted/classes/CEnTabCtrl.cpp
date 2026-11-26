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
