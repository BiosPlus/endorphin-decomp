// Lifted C++ translation unit: lifted/classes/GuiBaseElement.cpp
#include "lift_compat.h"

// [0x004EBA00] GuiBaseElement::vfunc_14 (82 bytes)
namespace lift_004EBA00 {
extern double mem_0094B868;

// @name GuiBaseElement::vfunc_14
// @class GuiBaseElement
// @summary Builds a rect {x-c, y-c, x+c, y+c} around the point (x, y) and dispatches it to vtable slot 13 on self.
// @field GuiBaseElement +0x00 void* vptr
void fn_004EBA00(void* self, const float* pt) {
    const float x = pt[0];
    const float y = pt[1];
    const double c = mem_0094B868;

    float rect[4];
    rect[0] = static_cast<float>(x - c);
    rect[1] = static_cast<float>(y - c);
    rect[2] = static_cast<float>(x + c);
    rect[3] = static_cast<float>(y + c);

    void** vtbl = lift_field<void**>(self, 0);
    using VFn = void (*)(void* self, const float* rect);
    VFn fn = reinterpret_cast<VFn>(vtbl[0x34 / sizeof(void*)]);
    fn(self, rect);
}
} // namespace lift_004EBA00

// [0x004EBA60]
namespace lift_004EBA60 {
extern void* __thiscall ext_00596660(void* this_ptr, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
extern uint32_t mem_00925134;

// @name GuiBaseElement::vfunc_15
// @class GuiBaseElement
// @summary Validates the [begin, end) span stored at +0x4/+0x8 and erases that range from the element's vector; always returns false
// @field GuiBaseElement +0x04 uint32_t field_0x04
// @field GuiBaseElement +0x08 uint32_t field_0x08
bool __stdcall sub_004EBA60(void* self, uint32_t unused_arg) {
    using InvalidParamFn = void (*)();
    auto invalid_parameter = [] {
        reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134))();
    };

    uint32_t end = lift_field<uint32_t>(self, 0x8);
    if (lift_field<uint32_t>(self, 0x4) > end) {
        invalid_parameter();
    }
    uint32_t begin = lift_field<uint32_t>(self, 0x4);
    if (begin > lift_field<uint32_t>(self, 0x8)) {
        invalid_parameter();
    }

    uint32_t out_iter[2] = {0, 0};
    ext_00596660(self, out_iter, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), begin,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), end);
    return false;
}
} // namespace lift_004EBA60
