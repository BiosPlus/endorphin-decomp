// Lifted C++ translation unit: lifted/classes/OglRenderer.cpp
#include "lift_compat.h"

// [0x00536E80]
namespace lift_00536E80 {
// @name OglRenderer::releaseContext
// @class OglRenderer
// @summary Unbinds the current OpenGL context if flag at +0x30 is zero, then leaves the critical section at +0x10
// @field OglRenderer +0x10 void* field_0x10
// @field OglRenderer +0x30 uint32_t field_0x30


extern int (__stdcall* mem_009253E0)(void* hdc, void* hglrc);
extern void __thiscall ext_0065C650(void* self);

void __thiscall fn_00536E80(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint32_t*>(base + 0x30) == 0) {
        mem_009253E0(nullptr, nullptr);
    }
    ext_0065C650(base + 0x10);
}
} // namespace lift_00536E80
