// Lifted C++ translation unit: lifted/Primitives/File.cpp
#include "lift_compat.h"

// [0x0053BD10]
// @name Primitives::File::vfunc_29
// @class Primitives::File
// @summary Resets the animation state, re-initialises the sub-object at +0x3C, then zeroes ten dwords at +0x86C..+0x890.
// @field Primitives::File +0x86C uint32_t field_0x86C
// @field Primitives::File +0x870 uint32_t field_0x870
// @field Primitives::File +0x874 uint32_t field_0x874
// @field Primitives::File +0x878 uint32_t field_0x878
// @field Primitives::File +0x87C uint32_t field_0x87C
// @field Primitives::File +0x880 uint32_t field_0x880
// @field Primitives::File +0x884 uint32_t field_0x884
// @field Primitives::File +0x888 uint32_t field_0x888
// @field Primitives::File +0x88C uint32_t field_0x88C
// @field Primitives::File +0x890 uint32_t field_0x890

extern "C" void ext_0053AD10(void* self);             // Primitives::Animation::vfunc_29 (thiscall, ecx=self)
extern "C" void ext_0054FD10(void* ecx, void* arg);   // sub_0054FD10 (thiscall, ecx=self+0x3C, one stack arg)

void fn_0053BD10(void* self) {
    ext_0053AD10(self);

    auto* base = reinterpret_cast<unsigned char*>(self);
    auto* block = reinterpret_cast<uint32_t*>(base + 0x86C);
    ext_0054FD10(base + 0x3C, block);

    for (int i = 0; i < 10; ++i) {
        block[i] = 0;
    }
}

// [0x0053BD50]
namespace lift_0053BD50 {
// @name Primitives::File::vfunc_28
// @class Primitives::File
// @summary Pushes GL matrix state, enables GL_NORMALIZE, applies glScaled using three floats fetched from the sub-object at +0x20, runs ext_00550FA0 on the +0x3C sub-object with the +0x86C field address, then restores GL state.
// @field Primitives::File +0x20 void* field_0x20
// @field Primitives::File +0x3C uint8_t field_0x3C
// @field Primitives::File +0x86C uint32_t field_0x86C

// Imported OpenGL entry points (IAT slots).
extern void(__stdcall* mem_00925404)(void);                 // glPopMatrix
extern void(__stdcall* mem_00925414)(void);                 // glPushMatrix
extern void(__stdcall* mem_00925418)(GLenum);               // glEnable
extern void(__stdcall* mem_00925438)(GLenum);               // glDisable
extern void(__stdcall* mem_009254D8)(GLdouble, GLdouble, GLdouble); // glScaled

// Internal helpers.
extern float* __thiscall ext_005B11D0(void* self, int arg);  // returns float* for the given index
extern void __thiscall ext_00550FA0(void* self, uint32_t* arg);

static constexpr GLenum kGL_NORMALIZE = 0x0BA1;

void __thiscall fn_0053BD50(void* self, uint32_t /*stack arg, unused, ret 4*/) {
    mem_00925414();
    mem_00925418(kGL_NORMALIZE);

    void* sub = lift_field<void*>(self, 0x20);
    float* r1 = ext_005B11D0(sub, 0);
    float* r2 = ext_005B11D0(sub, 0);
    float* r3 = ext_005B11D0(sub, 0);
    mem_009254D8(static_cast<GLdouble>(*r3),
                 static_cast<GLdouble>(*r2),
                 static_cast<GLdouble>(*r1));

    uint32_t* field = &lift_field<uint32_t>(self, 0x86C);
    ext_00550FA0(&lift_field<uint8_t>(self, 0x3C), field);

    mem_00925438(kGL_NORMALIZE);
    mem_00925404();
}
} // namespace lift_0053BD50
