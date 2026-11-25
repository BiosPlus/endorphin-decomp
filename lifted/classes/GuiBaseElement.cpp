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
