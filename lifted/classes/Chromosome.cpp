// Lifted C++ translation unit: lifted/classes/Chromosome.cpp
#include "lift_compat.h"

// [0x005141D0] Chromosome::vfunc_13 (189 bytes)
namespace lift_005141D0 {
// Callees
extern DWORD ext_00512950();
extern void ext_0055DA20(DWORD self, DWORD a, DWORD b);
extern void ext_00661650(DWORD self, DWORD a);
extern void ext_0046F7D0(DWORD a);

// IAT slot for MSVCP80 operator==(const std::string&, const char*)
extern bool (*mem_00924FC0)(DWORD str, const char* s);
// Rodata C strings compared against arg2 (contents not yet recovered)
extern const char mem_009518F0[];
extern const char mem_009518E4[];
// Lazy-init state: bit 0 of flags guards mem_00AEBE1C
extern DWORD mem_00AEBE20;
extern DWORD mem_00AEBE1C;

// @name Chromosome::vfunc_13
// @class Chromosome
// @summary Compares a name string against two known keys; on the first key lazily initializes a global handle and registers this+4, on the second forwards to 0x661650 with this+0x18, otherwise calls 0x46F7D0. Always returns arg1.
// @field Chromosome +0x04 DWORD field_0x04
// @field Chromosome +0x14 DWORD field_0x14
// @field Chromosome +0x18 DWORD field_0x18
DWORD fn_005141D0(void* self, DWORD arg1, DWORD arg2) {
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);

    if (mem_00924FC0(arg2, mem_009518F0)) {
        if (!(mem_00AEBE20 & 1)) {
            mem_00AEBE20 |= 1;
            mem_00AEBE1C = ext_00512950();
        }
        ext_0055DA20(arg1, mem_00AEBE1C, static_cast<DWORD>(base + 0x04));
        return arg1;
    }

    if (mem_00924FC0(arg2, mem_009518E4)) {
        DWORD addr = (base + 0x14 != 0) ? static_cast<DWORD>(base + 0x18) : 0u;
        ext_00661650(arg1, addr);
        return arg1;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_005141D0
