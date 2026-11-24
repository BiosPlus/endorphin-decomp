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
