// Lifted C++ translation unit: lifted/classes/ResizeTool.cpp
#include "lift_compat.h"

// [0x00545B50] ResizeTool::vfunc_26 (45 bytes)
namespace lift_00545B50 {
// @name ResizeTool::vfunc_26
// @class ResizeTool
// @summary Calls the virtual at vtable+0x80 on self, then initializes the float/int fields at +0xB0..+0xBC to 3 and 1.0f.
// @field ResizeTool +0xB0 int32_t field_0xB0
// @field ResizeTool +0xB4 float field_0xB4
// @field ResizeTool +0xB8 float field_0xB8
// @field ResizeTool +0xBC float field_0xBC
void fn_00545B50(void* self) {
    using VirtFn = void (*)(void*);

    // Virtual call through vtable slot at byte offset 0x80.
    void* vtbl = lift_field<void*>(self, 0);
    VirtFn fn = lift_field<VirtFn>(vtbl, 0x80);
    fn(self);

    lift_field<int32_t>(self, 0xB0) = 3;
    const float one = 1.0f;
    lift_field<float>(self, 0xB4) = one;
    lift_field<float>(self, 0xB8) = one;
    lift_field<float>(self, 0xBC) = one;
}
} // namespace lift_00545B50
