// Lifted C++ translation unit: lifted/Primitives/Marker.cpp
#include "lift_compat.h"
extern "C" void glPushAttrib(GLbitfield mask);
extern "C" void glLineWidth(GLfloat width);
extern "C" void glPopAttrib(void);
// sub_00538550: thiscall taking (float, DWORD, DWORD) on the stack.
extern "C" void ext_00538550(void* self, float value, uint32_t a, uint32_t b);

extern "C" void ext_00538550(void* self, float value, uint32_t a, uint32_t b);
// @name Primitives::Marker::vfunc_28
// @class Primitives::Marker
// @summary Pushes GL_LINE_BIT, sets line width 2.0, forwards arg to vfunc slot 22 of the subobject at +0x3c, then pops attributes.
// @field Primitives::Marker +0x3c void* field_0x3c
void fn_0053BDD0(void* self, uint32_t arg) {
    glPushAttrib(0x00000004u); // GL_LINE_BIT
    glLineWidth(2.0f);

    void* sub = lift_field<void*>(self, 0x3c);
    void* const* vtbl = *static_cast<void* const* const*>(sub);
    auto fn = reinterpret_cast<void (*)(void*, uint32_t)>(vtbl[0x58 / sizeof(void*)]);
    fn(sub, arg);

    glPopAttrib();
}

// [0x0052F6F0] Primitives::Marker::vfunc_13 (25 bytes)
// @name Primitives::Marker::vfunc_13
// @class Primitives::Marker
// @summary Forwards the float read from *value plus two zero words to sub_00538550 on the subobject at +0x3c.
// @field Primitives::Marker +0x3c void* field_0x3c
void fn_0052F6F0(void* self, const float* value) {
    const float v = *value;
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x3c;
    ext_00538550(sub, v, 0, 0);
}
