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

// [0x00449EC0]
namespace lift_00449EC0 {
// @name ReloadCharacterDialog::OnOK
// @class ReloadCharacterDialog
// @summary Validates dialog data, checks if the character file exists, shows an error message if missing, or calls CDialog::OnOK.
// @field ReloadCharacterDialog +0x78 CString m_filename


extern int fn_006629B0(void* self);
extern int __cdecl ext_006629B0(void* self);
extern int __cdecl ext_006A5E60(const char* lpszText, uint32_t nType, uint32_t nIDHelp);
extern void __thiscall ext_006A5FB0(void* self);
extern int __thiscall ext_006A608E(void* self, int bSaveAndValidate);

extern uintptr_t mem_00924300;
extern uintptr_t mem_00924FE4;
extern uintptr_t mem_00924FF4;
extern char mem_00933BC8[];

void __thiscall fn_00449EC0(void* self) {
    ext_006A608E(self, 1);

    using GetStringFn = const char* (__thiscall*)(void*);
    const char* path = reinterpret_cast<GetStringFn>(mem_00924300)(
        reinterpret_cast<uint8_t*>(self) + 0x78);

    alignas(4) uint8_t str_buf[32]{};
    using StdStringCtorFn = void* (__thiscall*)(void*, const char*);
    using StdStringDtorFn = void (__thiscall*)(void*);

    void* str_obj = reinterpret_cast<StdStringCtorFn>(mem_00924FE4)(str_buf, path);
    int exists = ext_006629B0(str_obj);
    bool missing = (static_cast<uint8_t>(exists) == 0);
    reinterpret_cast<StdStringDtorFn>(mem_00924FF4)(str_buf);

    if (missing) {
        ext_006A5E60(mem_00933BC8, 0, 0);
        return;
    }

    ext_006A5FB0(self);
}
} // namespace lift_00449EC0
