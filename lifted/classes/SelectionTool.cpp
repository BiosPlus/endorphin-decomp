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

// [0x0053F6C0]
namespace lift_0053F6C0 {
// @name SelectionTool::vfunc_31
// @class SelectionTool
// @summary Renders the selection tool's subobject at +0x98 with its transform matrix when not in GL_SELECT mode and sub_005434C0 returns 0
// @field SelectionTool +0x04 float[16] field_0x04
// @field SelectionTool +0x98 void* field_0x98


uint8_t ext_005434C0(void* self);
extern uint32_t mem_00925424;
extern uint32_t mem_00925438;
extern uint32_t mem_00925414;
extern uint32_t mem_009253C8;
extern uint32_t mem_00925404;
extern uint32_t mem_00925418;

void fn_0053F6C0(void* self, uint32_t render_mode, uint32_t arg1) {
    (void)arg1;
    if (render_mode == 0x1C02) {
        return;
    }
    if (ext_005434C0(self) != 0) {
        return;
    }

    auto glIsEnabled_fn = reinterpret_cast<uint8_t(__stdcall*)(uint32_t)>(mem_00925424);
    auto glDisable_fn = reinterpret_cast<void(__stdcall*)(uint32_t)>(mem_00925438);
    auto glPushMatrix_fn = reinterpret_cast<void(__stdcall*)()>(mem_00925414);
    auto glMultMatrixf_fn = reinterpret_cast<void(__stdcall*)(const float*)>(mem_009253C8);
    auto glPopMatrix_fn = reinterpret_cast<void(__stdcall*)()>(mem_00925404);
    auto glEnable_fn = reinterpret_cast<void(__stdcall*)(uint32_t)>(mem_00925418);

    uint8_t lighting_enabled = glIsEnabled_fn(0x0B50);
    if (lighting_enabled) {
        glDisable_fn(0x0B50);
    }

    glPushMatrix_fn();
    auto* base = static_cast<uint8_t*>(self);
    glMultMatrixf_fn(reinterpret_cast<const float*>(base + 0x04));

    void* subobj = base + 0x98;
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(subobj);
    auto vfunc_22 = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtable[22]);
    vfunc_22(subobj, 1);

    glPopMatrix_fn();

    if (lighting_enabled) {
        glEnable_fn(0x0B50);
    }
}
} // namespace lift_0053F6C0
