// Lifted C++ translation unit: lifted/leaf/decompiled_870000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>

#include <string>
#include <cstring>
// @summary Epilogue fragment: pops saved edi, esi and ebx from the stack; no portable C++ equivalent for the register restore, so the body is empty.
void fn_00870E86(void* self) {
    // Intentionally empty. The three instructions are `pop edi; pop esi; pop ebx`,
    // which restore callee-saved registers from the caller's frame. They have no
    // observable effect expressible in portable C++; the frame they belong to is
    // not part of this 3-byte range.
    (void)self;
}

// [0x008703F0] sub_008703F0 (111 bytes)
namespace lift_008703F0 {
// @name sub_008703F0
// @summary Auto-lifted identical-shape clone of 0x0049FC80 (NMData::State::vfunc_7_off_10).
namespace lift_0049FC80 {
// @name NMData::State::vfunc_7_off_10
// @class NMData::State
// @summary Iterates over vector at +0x10C, calls vfunc +0x24 on each element, and passes result to sub_0040ECB0
// @field NMData::State +0x10C void* field_0x10C


extern void __thiscall ext_0040ECB0(uint32_t self, uint32_t arg);

void __thiscall fn_008703F0(uint32_t self, uint32_t arg0) {
    uintptr_t vec = (uintptr_t)self + 0x4;
    uint32_t it = *(uint32_t*)(vec + 0x4);
    while (it != *(uint32_t*)(vec + 0x8)) {
        uint32_t elem = *(uint32_t*)(uintptr_t)it;
        uint32_t vtable = *(uint32_t*)(uintptr_t)elem;
        typedef uint32_t (__thiscall *vfunc_t)(uint32_t);
        vfunc_t vfunc = (vfunc_t)(uintptr_t)(*(uint32_t*)(uintptr_t)(vtable + 0x24));
        uint32_t res = vfunc(elem);
        ext_0040ECB0(arg0, res);
        it += 4;
    }
}
} // namespace lift_0049FC80
} // namespace lift_008703F0
