// Lifted C++ translation unit: lifted/classes/NewCharacterDialog.cpp
#include "lift_compat.h"

// [0x0040B780] NewCharacterDialog::vfunc_91 (42 bytes)
namespace lift_0040B780 {
extern void ext_0040A940(void* self);
extern void ext_0040F230(void* self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
extern uint32_t mem_0093A0C8;
extern uint32_t mem_0093A0D0;
extern uint32_t mem_0093A0CC;

// @name NewCharacterDialog::vfunc_91
// @class NewCharacterDialog
// @summary Calls the base-class vfunc_91, then forwards three constants to a sub-object at this+0x49C.
// @field NewCharacterDialog +0x49C uint8_t field_0x49C
void fn_0040B780(void* self) {
    ext_0040A940(self);

    const uint32_t s = mem_0093A0C8;   // .rdata "MOV" pointer
    const uint32_t c = mem_0093A0D0;   // 0x007F7F7F
    const uint32_t w = mem_0093A0CC;   // 0x00FFFFFF

    void* sub = reinterpret_cast<uint8_t*>(self) + 0x49C;
    ext_0040F230(sub, w, s, c, s);
}
} // namespace lift_0040B780
