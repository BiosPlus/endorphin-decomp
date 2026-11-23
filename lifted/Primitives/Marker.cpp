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

// [0x0052FF70] Primitives::Marker::vfunc_0 (96 bytes)
namespace lift_0052FF70 {
// Member sub-object destructor at this+0x3C (thiscall, this passed as first arg).
extern void ext_00532B40(void* self);
// Base-class destructor body for Primitives::Marker (thiscall).
extern void ext_0053A810(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Used as operator delete(void*) in the scalar deleting destructor path.
extern void ext_006A5C5C(void* p);

// @name Primitives::Marker::vfunc_0
// @class Primitives::Marker
// @summary Scalar deleting destructor: destroys the +0x3C sub-object and base, then frees self when flags bit 0 is set.
// @field Primitives::Marker +0x3c void* field_0x3c
void fn_0052FF70(void* self, unsigned int flags) {
    ext_00532B40(static_cast<uint8_t*>(self) + 0x3C);
    ext_0053A810(self);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
}
} // namespace lift_0052FF70

// [0x0053D320]
namespace lift_0053D320 {
// @name Primitives::Marker::vfunc_25
// @class Primitives::Marker
// @summary Initializes marker flags and sets its size/radius from arg0 or arg1+0xb8
// @field Primitives::Marker +0x08 uint32_t field_0x08
// @field Primitives::Marker +0x1c uint32_t field_0x1c
// @field Primitives::Marker +0x3c void* field_0x3c


    float __thiscall ext_005B11E0(void* self, uint32_t a1);
    void __thiscall ext_00538550(void* self, float a1, uint32_t a2, uint32_t a3);
    extern uint32_t mem_00993838;

void __thiscall fn_0053D320(void* self, void* arg0, uint8_t* arg1, uint32_t arg2) {
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(p + 0x08) = arg2;

    uint32_t flags = *reinterpret_cast<uint32_t*>(p + 0x1C);
    flags = (flags & ~0x4Bu) | 0x40000u;
    *reinterpret_cast<uint32_t*>(p + 0x1C) = flags;

    float zero = *reinterpret_cast<const float*>(&mem_00993838);
    float val = ext_005B11E0(arg0, 0);
    float out_val;
    if (val > zero) {
        out_val = ext_005B11E0(arg0, 0);
    } else {
        out_val = *reinterpret_cast<const float*>(arg1 + 0xB8);
    }

    ext_00538550(p + 0x3C, out_val, 0, 0);
}
} // namespace lift_0053D320
