// Lifted C++ translation unit: lifted/classes/ProgressDialog.cpp
#include "lift_compat.h"

// [0x00447FA0] ProgressDialog::vfunc_3_off_74 (26 bytes)
namespace lift_00447FA0 {
// Known callee 0x006A5F50: thunk_MFC80_ord_6067 (IAT jump thunk forwarding to MFC80!ord_6067.)
// Takes the receiver (this + 0x58) and one pointer-sized argument (const char*).
extern void ext_006A5F50(void* self, const char* text);
// IAT slot 0x924FF0: MSVCP80 std::basic_string<char>::c_str (thiscall; string object is the receiver).
extern void* mem_00924FF0;

// @name ProgressDialog::vfunc_3_off_74
// @class ProgressDialog
// @summary Converts a std::string argument to a C string and forwards it to the member at +0x58 (ord_6067 thunk).
// @field ProgressDialog +0x58 void* field_0x58
void fn_00447FA0(void* self, void* text) {
    using CStrFn = const char* (*)(void* str);
    const char* cstr = reinterpret_cast<CStrFn>(mem_00924FF0)(text);
    ext_006A5F50(static_cast<char*>(self) + 0x58, cstr);
}
} // namespace lift_00447FA0

// [0x00448000] ProgressDialog::vfunc_63 (46 bytes)
namespace lift_00448000 {
// @name ProgressDialog::vfunc_63
// @class ProgressDialog
// @summary Auto-lifted identical-shape clone of 0x00449F80 (ReloadCharacterDialog::DoDataExchange).
// @field ProgressDialog +0x78 uint32_t field_0x78
// @field ProgressDialog +0xCC uint32_t field_0xCC
namespace lift_00449F80 {
// @name ReloadCharacterDialog::DoDataExchange
// @class ReloadCharacterDialog
// @summary Exchanges dialog data for ReloadCharacterDialog controls at +0x74 and +0x78.
// @field ReloadCharacterDialog +0x74 uint32_t field_0x74
// @field ReloadCharacterDialog +0x78 uint32_t field_0x78


extern void ext_006A5F44(uint32_t pDX, uint32_t nIDC, void* valuePtr);

void __thiscall fn_00448000(void* self, uint32_t pDX) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    ext_006A5F44(pDX, 0x169, base + 0x78);
    ext_006A5F44(pDX, 0x16B, base + 0xCC);
}
} // namespace lift_00449F80
} // namespace lift_00448000

// [0x004481A0]
namespace lift_004481A0 {
extern uint32_t mem_00924FF0;
    extern uint32_t mem_00925694;
    void __thiscall ext_006A5F50(void* pThis, const char* str);

// @name ProgressDialog::vfunc_4_off_74
// @class ProgressDialog
// @summary Updates progress text and advances the progress bar position by a delta.
// @field ProgressDialog +0x24 uint32_t field_0x24
// @field ProgressDialog +0x58 void* field_0x58
void __thiscall fn_004481A0(void* pThis, uint32_t delta, void* text) {
    using c_str_fn = const char* (__thiscall*)(void*);
    using send_msg_fn = uint32_t(__stdcall*)(uint32_t, uint32_t, uint32_t, uint32_t);

    auto c_str = reinterpret_cast<c_str_fn>(mem_00924FF0);
    const char* str = c_str(text);
    ext_006A5F50(reinterpret_cast<uint8_t*>(pThis) + 0x58, str);

    auto send_message = reinterpret_cast<send_msg_fn>(mem_00925694);
    uint32_t hwnd = lift_field<uint32_t>(pThis, 0x24);
    uint32_t pos = send_message(hwnd, 0x408, 0, 0);
    uint32_t new_pos = pos + delta;
    hwnd = lift_field<uint32_t>(pThis, 0x24);
    send_message(hwnd, 0x402, new_pos, 0);
}
} // namespace lift_004481A0
