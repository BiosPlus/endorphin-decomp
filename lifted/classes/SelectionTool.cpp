// Lifted C++ translation unit: lifted/classes/SelectionTool.cpp
#include "lift_compat.h"

// [0x0053F660] sub_0053F660 (37 bytes)
namespace lift_0053F660 {
// @name SelectionTool::vfunc_22
// @class SelectionTool
// @summary Forwards a call through the object at +0x88 (vtable slot 16) unless the object is null or the flags argument has bits 0x11 set; always returns TRUE.
// @field SelectionTool +0x88 void* field_0x88

// Thiscall with one stack-argument pair (callee cleans 8 bytes: `ret 0x8`).
// `self` is the SelectionTool instance (ecx); `arg0` is unused; `flags` is the
// second stack argument, tested against 0x11.
BOOL SelectionTool_vfunc_22(void* self, DWORD arg0, DWORD flags) {
    (void)arg0;
    void* child = lift_field<void*>(self, 0x88);
    if (child != nullptr && (flags & 0x11u) == 0) {
        // Virtual call via vtable slot 0x40 / 4 == 16 on the child object (no arguments).
        void** vtbl = *reinterpret_cast<void***>(child);
        using VMethod = void (*)(void*);
        reinterpret_cast<VMethod>(vtbl[16])(child);
    }
    return TRUE;
}
} // namespace lift_0053F660
