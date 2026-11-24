// Lifted C++ translation unit: lifted/classes/PoseTool.cpp
#include "lift_compat.h"

// [0x00545120] PoseTool::vfunc_23 (29 bytes)
namespace lift_00545120 {
// @name PoseTool::vfunc_23
// @class PoseTool
// @summary Forwards to the sub-object at +0x88 via its vtable slot 34, then tail-calls this's vtable slot 26.
// @field PoseTool +0x88 void* field_0x88
void fn_00545120(void* self) {
    void* sub = lift_field<void*>(self, 0x88);

    // Slot at vtable offset 0x88 (index 34) on the sub-object, called with sub as `this`.
    void** subVtable = *reinterpret_cast<void***>(sub);
    auto subFn = reinterpret_cast<void (*)(void*)>(subVtable[0x88 / sizeof(void*)]);
    subFn(sub);

    // Slot at vtable offset 0x68 (index 26) on self, tail-called with self as `this`.
    void** selfVtable = *reinterpret_cast<void***>(self);
    auto tailFn = reinterpret_cast<void (*)(void*)>(selfVtable[0x68 / sizeof(void*)]);
    tailFn(self);
}
} // namespace lift_00545120

// [0x00545140] PoseTool::vfunc_24 (38 bytes)
namespace lift_00545140 {
// @name PoseTool::vfunc_24
// @class PoseTool
// @summary Auto-lifted identical-shape clone of 0x00544070 (ForceApplicationTool::vfunc_24).
// @field PoseTool +0x88 void* field_0x88
namespace lift_00544070 {
// @name ForceApplicationTool::vfunc_24
// @class ForceApplicationTool
// @summary Calls virtual method at +0x74 on this and tail-calls virtual method at +0x3c on field_0x88 if non-null
// @field ForceApplicationTool +0x88 void* field_0x88


void __thiscall fn_00545140(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x74 / 4])(self);

    void* field_0x88 = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x88);
    if (field_0x88 != nullptr) {
        uint32_t* obj_vtable = *reinterpret_cast<uint32_t**>(field_0x88);
        reinterpret_cast<void(__thiscall*)(void*)>(obj_vtable[0x8C / 4])(field_0x88);
    }
}
} // namespace lift_00544070
} // namespace lift_00545140

// [0x00545170] PoseTool::vfunc_25 (38 bytes)
namespace lift_00545170 {
// @name PoseTool::vfunc_25
// @class PoseTool
// @summary Auto-lifted identical-shape clone of 0x00544070 (ForceApplicationTool::vfunc_24).
// @field PoseTool +0x88 void* field_0x88
namespace lift_00544070 {
// @name ForceApplicationTool::vfunc_24
// @class ForceApplicationTool
// @summary Calls virtual method at +0x74 on this and tail-calls virtual method at +0x3c on field_0x88 if non-null
// @field ForceApplicationTool +0x88 void* field_0x88


void __thiscall fn_00545170(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x74 / 4])(self);

    void* field_0x88 = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x88);
    if (field_0x88 != nullptr) {
        uint32_t* obj_vtable = *reinterpret_cast<uint32_t**>(field_0x88);
        reinterpret_cast<void(__thiscall*)(void*)>(obj_vtable[0x90 / 4])(field_0x88);
    }
}
} // namespace lift_00544070
} // namespace lift_00545170
