// Lifted C++ translation unit: lifted/Primitives/Hinge.cpp
#include "lift_compat.h"
// glPushAttrib (OPENGL32, stdcall).
extern "C" void (*mem_0092546C)(unsigned int mask);
// glLineWidth (OPENGL32, stdcall).
extern "C" void (*mem_00925520)(float width);
// glPushMatrix (OPENGL32, stdcall).
extern "C" void (*mem_00925414)(void);
// glPopMatrix (OPENGL32, stdcall).
extern "C" void (*mem_00925404)(void);
// glPopAttrib (OPENGL32, stdcall).
extern "C" void (*mem_0092552C)(void);
// glRotatef (OPENGL32, stdcall; angle, x, y, z).
extern "C" void (*mem_009254CC)(float angle, float x, float y, float z);
// glTranslatef (OPENGL32, stdcall; x, y, z).
extern "C" void (*mem_009253D0)(float x, float y, float z);
// glBegin (OPENGL32, stdcall).
extern "C" void (*mem_00925490)(unsigned int mode);
// glEnd (OPENGL32, stdcall).
extern "C" void (*mem_00925488)(void);
// glVertex3f (OPENGL32, stdcall).
extern "C" void (*mem_0092548C)(float x, float y, float z);
// glNormal3f (OPENGL32, stdcall).
extern "C" void (*mem_009254AC)(float x, float y, float z);
// Rotation angle constant: 90.0f.
extern "C" const float mem_00955A30;
// Axis component constant: -1.0f.
extern "C" const float mem_0093F7B8;
// Double-precision scale factors applied to field_0x3c.
extern "C" const double mem_00955A38; // 0.04
extern "C" const double mem_00955C58; // 0.85
extern "C" const double mem_00955C60; // 0.166
extern "C" const double mem_00955C68; // 0.133
extern "C" const double mem_00955C70; // 0.116
extern "C" const double mem_00955C78; // 0.033
extern "C" const double mem_0092C528; // 0.001
extern "C" void ext_0053A930();
extern "C" int mem_009553B0;

extern "C" int mem_009553B0;
// @name Primitives::Hinge::vfunc_28
// @class Primitives::Hinge
// @summary Draws the hinge's line-segment marker and, when flag 0x20000 is set, its quad outline, then draws two attached sub-objects via vtable slot 0x58 inside a GL attribute/matrix push-pop.
// @field Primitives::Hinge +0x1c uint32_t field_0x1c
// @field Primitives::Hinge +0x3c float field_0x3c
// @field Primitives::Hinge +0x5c subobject field_0x5c
// @field Primitives::Hinge +0xa0 subobject field_0xa0
void fn_0053CB60(void* self) {
    constexpr unsigned int kGlLineBit = 0x4;      // GL_LINE_BIT
    constexpr unsigned int kGlLines = 0x1;        // GL_LINES
    constexpr unsigned int kGlQuads = 0x7;        // GL_QUADS
    constexpr std::uint32_t kFlagQuadOutline = 0x20000u;

    const float r = lift_field<float>(self, 0x3C);

    // Scaled copies of r, computed in double precision and stored as float.
    const float a = static_cast<float>(static_cast<double>(r) * mem_00955C78);
    const float b = static_cast<float>(static_cast<double>(r) * mem_00955C70);
    const float c = static_cast<float>(static_cast<double>(r) * mem_00955C68);
    const float d = static_cast<float>(static_cast<double>(r) * mem_00955C60);

    mem_0092546C(kGlLineBit);
    mem_00925520(1.0f);
    mem_00925414();
    mem_009254CC(mem_00955A30, 0.0f, 1.0f, 0.0f);

    // Line segment along Z.
    mem_00925490(kGlLines);
    mem_0092548C(0.0f, 0.0f, -d);
    mem_0092548C(0.0f, 0.0f, -c);
    mem_0092548C(0.0f, 0.0f, -b);
    mem_0092548C(0.0f, 0.0f, -a);
    mem_0092548C(0.0f, 0.0f, a);
    mem_0092548C(0.0f, 0.0f, b);
    mem_0092548C(0.0f, 0.0f, c);
    mem_0092548C(0.0f, 0.0f, d);
    mem_00925488();

    if (lift_field<std::uint32_t>(self, 0x1C) & kFlagQuadOutline) {
        const float e = static_cast<float>(static_cast<double>(r) * mem_00955A38);
        const float f = static_cast<float>(static_cast<double>(r) * mem_00955C58);
        const float g = static_cast<float>(static_cast<double>(r) * mem_0092C528);

        mem_00925490(kGlQuads);

        mem_009254AC(1.0f, 0.0f, 0.0f);
        mem_0092548C(g, 0.0f, -e);
        mem_0092548C(g, f, -e);
        mem_0092548C(g, f, e);
        mem_0092548C(g, 0.0f, e);

        mem_009254AC(-1.0f, 0.0f, 0.0f);
        mem_0092548C(-g, 0.0f, e);
        mem_0092548C(-g, f, e);
        mem_0092548C(-g, f, -e);
        mem_0092548C(-g, 0.0f, -e);

        mem_009254AC(0.0f, 0.0f, 1.0f);
        mem_0092548C(g, 0.0f, e);
        mem_0092548C(g, f, e);
        mem_0092548C(-g, f, e);
        mem_0092548C(-g, 0.0f, e);

        mem_009254AC(0.0f, 0.0f, -1.0f);
        mem_0092548C(-g, 0.0f, -e);
        mem_0092548C(-g, f, -e);
        mem_0092548C(g, f, -e);
        mem_0092548C(g, 0.0f, -e);

        mem_009254AC(0.0f, -1.0f, 0.0f);
        mem_0092548C(-g, 0.0f, -e);
        mem_0092548C(-g, 0.0f, e);
        mem_0092548C(g, 0.0f, e);
        mem_0092548C(g, 0.0f, -e);

        mem_009254AC(0.0f, 1.0f, 0.0f);
        mem_0092548C(-g, f, -e);
        mem_0092548C(-g, f, e);
        mem_0092548C(g, f, e);
        mem_0092548C(g, f, -e);

        mem_00925488();
    }

    // Sub-object at +0xA0: vtable slot 0x58 with arg 1.
    {
        unsigned char* sub = static_cast<unsigned char*>(self) + 0xA0;
        void* vtbl = lift_field<void*>(sub, 0x00);
        void* slot = lift_field<void*>(vtbl, 0x58);
        auto method = reinterpret_cast<void (*)(void*, int)>(slot);
        method(sub, 1);
    }

    mem_009253D0(0.0f, 0.0f, -d);

    // Sub-object at +0x5C: vtable slot 0x58 with arg 1.
    {
        unsigned char* sub = static_cast<unsigned char*>(self) + 0x5C;
        void* vtbl = lift_field<void*>(sub, 0x00);
        void* slot = lift_field<void*>(vtbl, 0x58);
        auto method = reinterpret_cast<void (*)(void*, int)>(slot);
        method(sub, 1);
    }

    mem_00925404();
    mem_0092552C();
}

// [0x0053BED0] Primitives::Hinge::vfunc_30 (26 bytes)
// @name Primitives::Hinge::vfunc_30
// @class Primitives::Hinge
// @summary Forwards its argument, with the address of a constant .rdata tag, to the shared helper sub_0053A930.
void fn_0053BED0(void* self, uint32_t value) {
    (void)self; // not accessed by this function
    using HelperFn = void (*)(const void* tag, uint32_t value);
    reinterpret_cast<HelperFn>(reinterpret_cast<void*>(&ext_0053A930))(
        static_cast<const void*>(&mem_009553B0), value);
}

// [0x0053BE10] Primitives::Hinge::vfunc_13 (105 bytes)
namespace lift_0053BE10 {
extern void ext_00538550(void* self, float a, int32_t b, int32_t c);
extern void ext_0053A050(void* self, float a, float b, int32_t c, int32_t d);

// @name Primitives::Hinge::vfunc_13
// @class Primitives::Hinge
// @summary Sets the dirty flag and forwards scaled copies of field_0x3c to two sub-objects.
// @field Primitives::Hinge +0x04 uint8_t field_0x04
// @field Primitives::Hinge +0x3C float field_0x3c
// @field Primitives::Hinge +0x5C subobject field_0x5c
// @field Primitives::Hinge +0xA0 subobject field_0xa0
void fn_0053BE10(void* self) {
    const float f = lift_field<float>(self, 0x3C);

    lift_field<uint8_t>(self, 0x04) = 1;

    // The original multiplies by the double constant 0.1 (mem_0092C508) and rounds to float.
    const float a = static_cast<float>(static_cast<double>(f) * 0.1);
    ext_00538550(static_cast<uint8_t*>(self) + 0xA0, a, 0, 0);

    // Second call: scale by 0.05 (mem_00932470) and 2.0 (mem_009559A0, float 2.0),
    // then pass the integer literals 5 and 10.
    const float b = static_cast<float>(static_cast<double>(f) * 0.05);
    const float c = f * 2.0f;
    ext_0053A050(static_cast<uint8_t*>(self) + 0x5C, c, b, 5, 10);
}
} // namespace lift_0053BE10

// [0x0053DC50]
namespace lift_0053DC50 {
// @name Primitives::Hinge::vfunc_25
// @class Primitives::Hinge
// @summary Initializes Hinge primitive flags, scaled dimensions, and registers resource at +0xbc.
// @field Primitives::Hinge +0x1c uint32_t field_0x1c
// @field Primitives::Hinge +0x3c float field_0x3c
// @field Primitives::Hinge +0x5c subobject field_0x5c
// @field Primitives::Hinge +0xa0 subobject field_0xa0
// @field Primitives::Hinge +0xbc subobject field_0xbc

extern void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_00538550(void* self, float arg1, uint32_t arg2, uint32_t arg3);
extern void ext_0053A050(void* self, float arg1, float arg2, uint32_t arg3, uint32_t arg4);
extern void* ext_005371F0();

extern double mem_0092C508;
extern double mem_00932470;
extern double mem_009559A0;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;

void fn_0053DC50(void* self, uint32_t arg1, void* arg2, uint32_t arg3) {
    uint8_t* s = static_cast<uint8_t*>(self);
    ext_0053A610(self, arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(arg2)), arg3);

    uint32_t flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if (flags & 0x40) {
        flags ^= 0x40;
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags;
    }
    flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if (!(flags & 0x4)) {
        flags ^= 0x4;
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags;
    }
    flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if (!(flags & 0x20000)) {
        flags ^= 0x20000;
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags;
    }
    flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if (!(flags & 0x40000)) {
        flags ^= 0x40000;
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags;
    }

    float val = *reinterpret_cast<float*>(static_cast<uint8_t*>(arg2) + 0xb8);
    *reinterpret_cast<float*>(s + 0x3c) = val;

    float scaled_a0 = static_cast<float>(static_cast<double>(val) * mem_0092C508);
    ext_00538550(s + 0xa0, scaled_a0, 0, 0);

    float v3c = *reinterpret_cast<float*>(s + 0x3c);
    float scaled_5c_1 = static_cast<float>(static_cast<double>(v3c) * mem_00932470);
    float scaled_5c_2 = static_cast<float>(static_cast<double>(v3c) * mem_009559A0);
    ext_0053A050(s + 0x5c, scaled_5c_2, scaled_5c_1, 5, 10);

    uint8_t str_buf[32]{};
    reinterpret_cast<void(*)(void*, uint32_t)>(static_cast<uintptr_t>(mem_00924FE4))(str_buf, 0x9349fc);
    void* mgr = ext_005371F0();
    void** vtbl = *reinterpret_cast<void***>(mgr);
    reinterpret_cast<void(*)(void*, void*, void*)>(vtbl[0xcc / 4])(mgr, str_buf, s + 0xbc);
    reinterpret_cast<void(*)(void*)>(static_cast<uintptr_t>(mem_00924FF4))(str_buf);
}
} // namespace lift_0053DC50
