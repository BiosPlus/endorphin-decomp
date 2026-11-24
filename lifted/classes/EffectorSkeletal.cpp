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
