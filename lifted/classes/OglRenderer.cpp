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

// [0x005330D0]
namespace lift_005330D0 {
// @name OglRenderer::vfunc_117
// @class OglRenderer
// @summary Clears field_0x30 to 0 while holding the critical section lock returned by vfunc_118.
// @field OglRenderer +0x30 uint32_t field_0x30


extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

void __thiscall fn_005330D0(void* self) {
    void** vtable = *reinterpret_cast<void***>(self);
    using GetLockFn = void* (__thiscall*)(void*);
    auto getLock = reinterpret_cast<GetLockFn>(vtable[0x1D8 / 4]);
    void* lock = getLock(self);
    ext_0065C640(lock);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x30) = 0;
    ext_0065C650(lock);
}
} // namespace lift_005330D0

// [0x00536D00]
namespace lift_00536D00 {
// @name OglRenderer::vfunc_12
// @class OglRenderer
// @summary Toggles the flag byte at this+0xB8 selected by field_0x194 (stride 60) to its logical NOT, then sets field_0x464 to 1.
// @field OglRenderer +0x194 uint32_t field_0x194
// @field OglRenderer +0xB8 uint8_t table_0xB8
// @field OglRenderer +0x464 uint8_t field_0x464

void OglRenderer_vfunc_12(void* self) {
    uint32_t idx = lift_field<uint32_t>(self, 0x194);
    uint32_t stride = idx * 60u; // (idx << 4) - idx, then *4 in addressing = idx * 60
    uint8_t& flag = lift_field<uint8_t>(self, static_cast<ptrdiff_t>(0xB8u + stride));
    flag = static_cast<uint8_t>(flag == 0 ? 1 : 0);
    lift_field<uint8_t>(self, 0x464) = 1;
}
} // namespace lift_00536D00
