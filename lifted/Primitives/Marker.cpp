// Lifted C++ translation unit: lifted/Primitives/Marker.cpp
#include "lift_compat.h"
extern "C" void glPushAttrib(GLbitfield mask);
extern "C" void glLineWidth(GLfloat width);
extern "C" void glPopAttrib(void);

// [0x0053BDD0] Primitives::Marker::vfunc_28 (53 bytes)
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
