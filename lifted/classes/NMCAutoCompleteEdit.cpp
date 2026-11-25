// Lifted C++ translation unit: lifted/classes/NMCAutoCompleteEdit.cpp
#include "lift_compat.h"

// [0x006B8470] NMCAutoCompleteEdit::vfunc_79 (42 bytes)
namespace lift_006B8470 {
// Callees and globals listed for this VA. The 42-byte body reaches none of them
// directly (it only does an indirect vtable call), so they are kept as no-op
// address references for the reference-coverage check.
extern void ext_006A5C68();
extern void ext_006A5CE0();
extern void ext_006A5E00();
extern void ext_006A5FF2();
extern void ext_006B87B0();
extern int mem_00925650;
extern int mem_00924100;
extern int mem_00925694;

// @name NMCAutoCompleteEdit::forwardToSubobjectVfunc3
// @class NMCAutoCompleteEdit
// @summary Forwards three stack arguments plus field +0x54 to virtual slot 3 of the subobject at +0x58, if present.
// @field NMCAutoCompleteEdit +0x54 DWORD field_0x54
// @field NMCAutoCompleteEdit +0x58 void* subobject
void fn_006B8470(void* self, DWORD arg1, DWORD arg2, DWORD arg3) {
    (void)&ext_006A5C68;
    (void)&ext_006A5CE0;
    (void)&ext_006A5E00;
    (void)&ext_006A5FF2;
    (void)&ext_006B87B0;
    (void)&mem_00925650;
    (void)&mem_00924100;
    (void)&mem_00925694;

    auto* base = static_cast<unsigned char*>(self);
    void* subobject = *reinterpret_cast<void**>(base + 0x58);
    if (subobject == nullptr) {
        return;
    }
    DWORD field54 = *reinterpret_cast<DWORD*>(base + 0x54);
    void** vtable = *reinterpret_cast<void***>(subobject);
    using Slot3Fn = void(__thiscall*)(void* self, DWORD a1, DWORD a2, DWORD a3, DWORD a4);
    auto fn = reinterpret_cast<Slot3Fn>(vtable[3]);
    fn(subobject, arg1, arg2, field54, arg3);
}
} // namespace lift_006B8470
