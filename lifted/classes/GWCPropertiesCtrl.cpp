// Lifted C++ translation unit: lifted/classes/GWCPropertiesCtrl.cpp
#include "lift_compat.h"

// [0x006A7A60] GWCPropertiesCtrl::vfunc_22 (37 bytes)
namespace lift_006A7A60 {
// Known callee 0x006A5CE0: thunk_MFC80_ord_5200 (IAT jump thunk forwarding to MFC80!ord_5200.)
extern void ext_006A5CE0(void* self);
// Known callee 0x006A5EA2: thunk_MFC80_ord_4115 (IAT jump thunk forwarding to MFC80!ord_4115.)
extern void ext_006A5EA2(void* self, uint32_t a, uint32_t b, uint32_t c);

// @name GWCPropertiesCtrl::vfunc_22
// @class GWCPropertiesCtrl
// @summary Calls two MFC helpers on this (the second with args 0, 0x02000000, 0), then tail-dispatches to the virtual at vtable slot +0x174 (index 93) with this.
// @field GWCPropertiesCtrl +0x00 void* vptr
void fn_006A7A60(void* self) {
    ext_006A5CE0(self);
    ext_006A5EA2(self, 0u, 0x02000000u, 0u);

    void* vtbl = lift_field<void*>(self, 0x00);
    auto target = reinterpret_cast<void(__thiscall*)(void*)>(
        lift_field<void*>(vtbl, 0x174));
    target(self);
}
} // namespace lift_006A7A60
