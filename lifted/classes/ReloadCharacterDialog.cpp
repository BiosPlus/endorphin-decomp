// Lifted C++ translation unit: lifted/classes/ReloadCharacterDialog.cpp
#include "lift_compat.h"

// [0x00449F80]
namespace lift_00449F80 {
// @name ReloadCharacterDialog::DoDataExchange
// @class ReloadCharacterDialog
// @summary Exchanges dialog data for ReloadCharacterDialog controls at +0x74 and +0x78.
// @field ReloadCharacterDialog +0x74 uint32_t field_0x74
// @field ReloadCharacterDialog +0x78 uint32_t field_0x78


extern void ext_006A6610(uint32_t pDX, uint32_t nIDC, void* valuePtr);

void __thiscall fn_00449F80(void* self, uint32_t pDX) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    ext_006A6610(pDX, 0x46e, base + 0x74);
    ext_006A6610(pDX, 0x468, base + 0x78);
}
} // namespace lift_00449F80
