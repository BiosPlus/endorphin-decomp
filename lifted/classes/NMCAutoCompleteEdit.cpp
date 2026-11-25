// Lifted C++ translation unit: lifted/classes/NMCAutoCompleteEdit.cpp
#include "lift_compat.h"

// [0x006B8470]
namespace lift_006B8470 {
// @name NMCAutoCompleteEdit::vfunc_79
// @class NMCAutoCompleteEdit
// @summary If the embedded subobject pointer at +0x58 is non-null, forward three
//          arguments (plus the field at +0x54) to virtual slot 3 of that subobject
//          and return its result; otherwise return 0.
// @field NMCAutoCompleteEdit +0x54 DWORD field_0x54
// @field NMCAutoCompleteEdit +0x58 void* subobject

using SubobjectSlot3Fn = DWORD(__thiscall*)(void* self, DWORD arg1, DWORD arg2, DWORD fwd, DWORD arg3);

DWORD NMCAutoCompleteEdit_vfunc_79(void* self, DWORD arg1, DWORD arg2, DWORD arg3) {
    void* subobject = lift_field<void*>(self, 0x58);
    if (subobject == nullptr) {
        return 0;
    }
    DWORD fwd = lift_field<DWORD>(self, 0x54);
    void* vtbl = *reinterpret_cast<void**>(subobject);
    auto fn = reinterpret_cast<SubobjectSlot3Fn>(lift_field<void*>(vtbl, 0xc));
    return fn(subobject, arg1, arg2, fwd, arg3);
}
} // namespace lift_006B8470
