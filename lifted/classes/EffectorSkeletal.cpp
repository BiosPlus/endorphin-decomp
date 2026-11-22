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
