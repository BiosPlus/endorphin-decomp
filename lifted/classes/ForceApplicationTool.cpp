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

// [0x005441C0] ForceApplicationTool::vfunc_28 (44 bytes)
namespace lift_005441C0 {
// Known callee 0x00552860: UnknownClass::SetIndexInRange (accepts index within [vfunc_2(), vfunc_3()],
// stores 0.3f and the index on success, else stores -1 as the index).
extern void ext_00552860(void* self, int32_t index);

// @name ForceApplicationTool::vfunc_28
// @class ForceApplicationTool
// @summary Forwards index to embedded helper at +0xB0, then invokes vtable slot 0x70 on the object at +0xA8 with (arg1, arg2).
// @field ForceApplicationTool +0x88 void* field_0x88
// @field ForceApplicationTool +0xA8 void* field_0xA8
// @field ForceApplicationTool +0xB0 uint8_t field_0xB0[0]
void fn_005441C0(void* self, int32_t arg1, int32_t arg2) {
    auto* base = static_cast<uint8_t*>(self);

    // Helper at +0xB0 is passed by address (lea), as this-pointer for ext_00552860.
    ext_00552860(base + 0xB0, arg2);

    // Virtual call: obj = *(this+0xA8); slot 0x70 / sizeof(void*) on its vtable.
    void* obj = *reinterpret_cast<void**>(base + 0xA8);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using VFunc = void (*)(void* self, int32_t a, int32_t b);
    auto fn = reinterpret_cast<VFunc>(vtbl[0x70 / sizeof(void*)]);
    fn(obj, arg1, arg2);
}
} // namespace lift_005441C0
