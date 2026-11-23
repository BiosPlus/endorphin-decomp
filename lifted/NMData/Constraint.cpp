// Lifted C++ translation unit: lifted/NMData/Constraint.cpp
#include "lift_compat.h"
// Lazily-initialised static triple (x, y, z) plus a one-shot init flag word.
extern "C" uint32_t mem_00AE5598;  // init flag; bit 0 = "defaults initialised"
extern "C" float    mem_00AE558C;  // default component 0
extern "C" float    mem_00AE5590;  // default component 1
extern "C" float    mem_00AE5594;  // default component 2
extern "C" void* ext_00640390(void* self, uint32_t a, uint32_t b, void* c);
extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;

extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;
// @class NMData::Constraint
// @summary Writes a constant 3-float vector (0,0,0 on first use) to the caller-supplied return buffer.
void fn_0061D250(float* out) {
    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE5598 |= 1u;
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
    }
    out[0] = mem_00AE558C;
    out[1] = mem_00AE5590;
    out[2] = mem_00AE5594;
}

// Callee signatures are inferred from the call sites (unverified):
//   ext_00640390: thiscall-style; `this` is the stack argument, then 3 pushed args.
//   ext_0067F040: one pointer argument.
extern "C" void* ext_00640390(void* self, uint32_t a, uint32_t b, void* c);
extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;

// [0x00611270] NMData::Constraint::vfunc_22 (42 bytes)
// @name NMData::Constraint::vfunc_22
// @class NMData::Constraint
// @summary Calls a method on the argument object with a global value and this's +0x154 sub-object, forwards the result to ext_0067F040, and returns the argument.
// @field NMData::Constraint +0x154 uint8_t field_0x154
void* fn_00611270(void* self, void* other) {
    void* field = &lift_field<uint8_t>(self, 0x154);
    void* result = ext_00640390(other, mem_00A9EDEC, 0u, field);
    ext_0067F040(result);
    return other;
}
