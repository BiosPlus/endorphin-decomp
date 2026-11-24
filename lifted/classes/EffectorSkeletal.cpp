// Lifted C++ translation unit: lifted/classes/EffectorSkeletal.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006944D0(uint32_t self, uint32_t arg);

// [0x00630C90] EffectorSkeletal::vfunc_31 (17 bytes)
// @name EffectorSkeletal::vfunc_31
// @class EffectorSkeletal
// @summary Auto-lifted identical-shape clone of 0x005B10B0 (Geometry::FrustumType::vfunc_2).
uint32_t __stdcall fn_00630C90(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006944D0(first, second);
}

// [0x006310F0] EffectorSkeletal::vfunc_19 (12 bytes)
namespace lift_006310F0 {
extern uint32_t __thiscall ext_00630370(uint32_t self, uint32_t arg);
extern uint32_t __thiscall ext_00630DD0(uint32_t self);

// @name EffectorSkeletal::vfunc_19
// @class EffectorSkeletal
// @summary Calls ext_00630370(self, 7), then tail-forwards self to ext_00630DD0 and returns its result.
uint32_t __thiscall fn_006310F0(uint32_t self) {
    // push 7                -> argument 7 for ext_00630370
    // call ext_00630370     -> `this` (ecx) is passed through unchanged
    // jmp  ext_00630DD0     -> tail call; result left in eax
    // The function never reads self's fields directly, so no @field lines.
    ext_00630370(self, 7);
    return ext_00630DD0(self);
}
} // namespace lift_006310F0

// [0x00630D00] EffectorSkeletal::vfunc_18 (58 bytes)
namespace lift_00630D00 {
// @name EffectorSkeletal::vfunc_18
// @class EffectorSkeletal
// @summary Calls two helpers on sub-objects at +0x2C/+0x90, pushes the float at +0xF0 to a helper, then tail-dispatches vtable slot 0x74 on self.
// @field EffectorSkeletal +0x00 void* field_0x00
// @field EffectorSkeletal +0x2C void* field_0x2C
// @field EffectorSkeletal +0x90 void* field_0x90
// @field EffectorSkeletal +0xF0 float field_0xF0

// Callee conventions: __thiscall (ecx = this), stack args callee-cleaned.
extern void* __thiscall ext_006035D0(void* self, void* arg);
extern void __thiscall ext_00630CB0(void* self, float value);
extern void* __thiscall ext_006305A0(void* self);
extern void __thiscall ext_006304B0(void* self, const void* value);

void* fn_00630D00(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    // ecx = this+0x90, arg = this+0x2C
    ext_006035D0(base + 0x90, base + 0x2C);

    float v = *reinterpret_cast<float*>(base + 0xF0);
    ext_00630CB0(self, v);

    void* p = ext_006305A0(self);
    ext_006304B0(self, p);

    // Tail-dispatch: jmp [[self] + 0x74] with ecx = self.
    void* vptr = *reinterpret_cast<void**>(base);
    void* target = *reinterpret_cast<void**>(static_cast<unsigned char*>(vptr) + 0x74);
    using Slot = void* (__thiscall*)(void* self_);
    return reinterpret_cast<Slot>(target)(self);
}
} // namespace lift_00630D00
