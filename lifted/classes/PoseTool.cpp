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
