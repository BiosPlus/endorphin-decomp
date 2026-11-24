// Lifted C++ translation unit: lifted/classes/ForceApplicationTool.cpp
#include "lift_compat.h"

// [0x00544070]
namespace lift_00544070 {
// @name ForceApplicationTool::vfunc_24
// @class ForceApplicationTool
// @summary Calls virtual method at +0x74 on this and tail-calls virtual method at +0x3c on field_0x88 if non-null
// @field ForceApplicationTool +0x88 void* field_0x88


void __thiscall fn_00544070(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x74 / 4])(self);

    void* field_0x88 = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x88);
    if (field_0x88 != nullptr) {
        uint32_t* obj_vtable = *reinterpret_cast<uint32_t**>(field_0x88);
        reinterpret_cast<void(__thiscall*)(void*)>(obj_vtable[0x3c / 4])(field_0x88);
    }
}
} // namespace lift_00544070

// [0x00544040] ForceApplicationTool::vfunc_23 (37 bytes)
namespace lift_00544040 {
// @name ForceApplicationTool::vfunc_23
// @class ForceApplicationTool
// @summary If the held object at +0x88 is non-null, invoke its vmethod[14](1), then tail-dispatch this->vmethod[26]().
// @field ForceApplicationTool +0x88 void* field_0x88

typedef void (*VMethod1)(void* self, int arg);
typedef void (*VMethod0)(void* self);

// [0x00544040]
void ForceApplicationTool_vfunc_23(void* self) {
    void* held = lift_field<void*>(self, 0x88);
    if (held != nullptr) {
        void** held_vt = *reinterpret_cast<void***>(held);
        reinterpret_cast<VMethod1>(held_vt[0x38 / sizeof(void*)])(held, 1);
    }
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VMethod0>(vt[0x68 / sizeof(void*)])(self);
}
} // namespace lift_00544040
