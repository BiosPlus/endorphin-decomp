// Lifted C++ translation unit: lifted/classes/EvolvedIndividual.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005171B0]
namespace lift_005171B0 {
extern uint32_t mem_00A9EFC0;
extern uint32_t mem_00AEC0D0;
extern uint32_t mem_00AEC0D4;
extern uint32_t mem_00924FC0;

extern uint32_t ext_005170A0();
extern void ext_0046F7D0(uint32_t out_ptr);
extern uint32_t __thiscall ext_0055DA20(uint32_t self, uint32_t a, uint32_t b);

// @name EvolvedIndividual::vfunc_13_off_C
// @class EvolvedIndividual
// @summary Looks up a property/symbol by name, returning a descriptor pair if matched or an empty descriptor otherwise.
// @field EvolvedIndividual +0x10 uint32_t field_0x10
uint32_t __thiscall fn_005171B0(uint32_t self, uint32_t out_ptr, uint32_t name_str) {
    if ((mem_00AEC0D4 & 1u) == 0u) {
        mem_00AEC0D4 |= 1u;
        mem_00AEC0D0 = ext_005170A0();
    }

    using EqFn = uint8_t(__cdecl*)(uint32_t, uint32_t);
    uint8_t eq = reinterpret_cast<EqFn>(mem_00924FC0)(name_str, mem_00A9EFC0);
    if (eq != 0) {
        ext_0055DA20(out_ptr, mem_00AEC0D0, self + 4u);
        return out_ptr;
    }

    ext_0046F7D0(out_ptr);
    return out_ptr;
}
} // namespace lift_005171B0
