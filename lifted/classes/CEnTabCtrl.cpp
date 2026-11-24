// Lifted C++ translation unit: lifted/classes/CEnTabCtrl.cpp
#include "lift_compat.h"

// [0x00416010] CEnTabCtrl::vfunc_85 (46 bytes)
namespace lift_00416010 {
extern int mem_00AC9CD8;  // global flag word (bit 0, bit 1 tested)
extern int mem_00925680;  // IAT slot for USER32!GetSysColor (not used directly; see ext_GetSysColor)

// Out-of-function continuations: the original jumps to these addresses, which
// lie outside this 46-byte body. Their bodies are not part of this lift.
extern int ext_0041603E(void* self, unsigned eaxValue);
extern int ext_0041604C(void* self, unsigned eaxValue);
extern int ext_00416095(void* self, unsigned eaxValue);
extern int ext_GetSysColor(int nIndex);

// @name CEnTabCtrl::vfunc_85
// @class CEnTabCtrl
// @summary Returns GetSysColor(15) when arg is nonzero, flag bit 1 is set, and field +0x58 is -1; otherwise tail-continues to out-of-body code.
// @field CEnTabCtrl +0x58 int32_t field_0x58
int fn_00416010(void* self, int arg) {
    const unsigned flags = static_cast<unsigned>(mem_00AC9CD8);
    const unsigned edxBit1 = flags & 0x2u;
    unsigned eax = flags & 0x1u;

    if (arg == 0) {
        return ext_0041604C(self, eax);
    }
    if (edxBit1 == 0) {
        return ext_0041603E(self, eax);
    }

    eax = static_cast<unsigned>(lift_field<int32_t>(self, 0x58));
    if (static_cast<int32_t>(eax) != -1) {
        return ext_00416095(self, eax);
    }

    // Original: push 0xF; jmp GetSysColor (tail call, stdcall argument replaced).
    return ext_GetSysColor(0xF);
}
} // namespace lift_00416010
