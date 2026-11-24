// Lifted C++ translation unit: lifted/classes/SnapTranslateTool.cpp
#include "lift_compat.h"

// [0x00544D80] SnapTranslateTool::vfunc_26 (31 bytes)
namespace lift_00544D80 {
// @name SnapTranslateTool::vfunc_26
// @class SnapTranslateTool
// @summary Calls virtual slot 32 on self, then tail-dispatches virtual slot 26 on the object stored at +0x9C, passing &field_0x9C as this.
// @field SnapTranslateTool +0x9C void* field_0x9C
// [0x00544D80]
void fn_00544D80(void* self) {
    using VFn = void(__thiscall*)(void*);

    // Virtual slot 32 (vtable offset 0x80) on self.
    void** vtSelf = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vtSelf[32])(self);

    // Virtual slot 26 (vtable offset 0x68) on the object at +0x9C; this = &field_0x9C.
    void* obj = lift_field<void*>(self, 0x9C);
    void** vtObj = *reinterpret_cast<void***>(obj);
    void* thisArg = reinterpret_cast<uint8_t*>(self) + 0x9C;
    reinterpret_cast<VFn>(vtObj[26])(thisArg);
}
} // namespace lift_00544D80
