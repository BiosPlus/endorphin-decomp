// Lifted C++ translation unit: lifted/classes/UndoHistoryDialog.cpp
#include "lift_compat.h"

// [0x00460FB0] UndoHistoryDialog::vfunc_0_off_78 (141 bytes)
namespace lift_00460FB0 {
// Known callee 0x00404F00: formatIntToString (Formats an integer into a stack buffer via _snprintf and constructs a std::string.)
// __cdecl: void* sub_00404F00(void* out_str, int32_t value); returns out_str.
extern void* ext_00404F00(void* out_str, int32_t value);
// Known callee 0x006A5F50: thunk_MFC80_ord_6067 (IAT jump thunk forwarding to MFC80!ord_6067.)
// __thiscall with one stack argument (callee cleans up the argument).
extern void ext_006A5F50(void* self, const char* text);
// IAT slots: function pointers are read from these addresses.
extern void* mem_00924FF0; // MSVCP80 std::string::c_str   (__thiscall, returns const char*)
extern void* mem_00924FF4; // MSVCP80 std::string::~string (__thiscall)
extern void* mem_0092568C; // USER32 UpdateWindow          (__stdcall, returns BOOL)

// @name UndoHistoryDialog::vfunc_0_off_78
// @class UndoHistoryDialog
// @summary On command 0x43E, increments the counter at +0x200, formats it to a string, passes its c_str to the object at +0xB0, then calls UpdateWindow on the window at +0xD0.
// @field UndoHistoryDialog +0x200 int32_t field_0x200
// @field UndoHistoryDialog +0xB0 uint8_t field_0xb0
// @field UndoHistoryDialog +0xD0 HWND field_0xd0
void fn_00460FB0(void* self, uint32_t id) {
    using CStrFn = const char* (__thiscall*)(void* str);
    using StrDtorFn = void(__thiscall*)(void* str);
    using UpdateWindowFn = int(__stdcall*)(void* hwnd);

    if (id != 0x43E) {
        return;
    }

    int32_t& counter = lift_field<int32_t>(self, 0x200);
    counter += 1;
    int32_t value = counter;

    // Storage for the std::string constructed by formatIntToString.
    alignas(8) unsigned char strStorage[32];
    void* str = ext_00404F00(strStorage, value);

    const char* text = reinterpret_cast<CStrFn>(mem_00924FF0)(str);
    ext_006A5F50(static_cast<uint8_t*>(self) + 0xB0, text);

    reinterpret_cast<StrDtorFn>(mem_00924FF4)(strStorage);

    void* hwnd = lift_field<void*>(self, 0xD0);
    reinterpret_cast<UpdateWindowFn>(mem_0092568C)(hwnd);
}
} // namespace lift_00460FB0

// [0x00461040] UndoHistoryDialog::vfunc_1_off_78 (147 bytes)
namespace lift_00461040 {
// Known callee 0x00404F00: formatIntToString (Formats an integer into a stack buffer via _snprintf and constructs a std::string.)
// __cdecl: void* sub_00404F00(void* out_str, int32_t value); returns out_str.
extern void* ext_00404F00(void* out_str, int32_t value);
// Known callee 0x006A5F50: thunk_MFC80_ord_6067 (IAT jump thunk forwarding to MFC80!ord_6067.)
// __thiscall with one stack argument (callee cleans up the argument).
extern void ext_006A5F50(void* self, const char* text);
// IAT slots: function pointers are read from these addresses.
extern void* mem_00924FF0; // MSVCP80 std::string::c_str   (__thiscall, returns const char*)
extern void* mem_00924FF4; // MSVCP80 std::string::~string (__thiscall)
extern void* mem_0092568C; // USER32 UpdateWindow          (__stdcall, returns BOOL)

// @name UndoHistoryDialog::vfunc_1_off_78
// @class UndoHistoryDialog
// @summary On command 0x43E, if the counter at +0x200 is positive, decrements it, formats it to a string, passes its c_str to the object at +0xB0, then calls UpdateWindow on the window at +0xD0.
// @field UndoHistoryDialog +0x200 int32_t field_0x200
// @field UndoHistoryDialog +0xB0 uint8_t field_0xb0
// @field UndoHistoryDialog +0xD0 HWND field_0xd0
void fn_00461040(void* self, uint32_t id) {
    using CStrFn = const char* (__thiscall*)(void* str);
    using StrDtorFn = void(__thiscall*)(void* str);
    using UpdateWindowFn = int(__stdcall*)(void* hwnd);

    if (id != 0x43E) {
        return;
    }

    int32_t& counter = lift_field<int32_t>(self, 0x200);
    if (counter <= 0) {
        return;
    }
    counter -= 1;
    int32_t value = counter;

    // Storage for the std::string constructed by formatIntToString.
    alignas(8) unsigned char strStorage[32];
    void* str = ext_00404F00(strStorage, value);

    const char* text = reinterpret_cast<CStrFn>(mem_00924FF0)(str);
    ext_006A5F50(static_cast<uint8_t*>(self) + 0xB0, text);

    reinterpret_cast<StrDtorFn>(mem_00924FF4)(strStorage);

    void* hwnd = lift_field<void*>(self, 0xD0);
    reinterpret_cast<UpdateWindowFn>(mem_0092568C)(hwnd);
}
} // namespace lift_00461040
