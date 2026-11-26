// Lifted C++ translation unit: lifted/classes/InitialVariableValues.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00507450 {
// @name InitialVariableValues::vfunc_15
// @class InitialVariableValues
// @summary Auto-lifted identical-shape clone of 0x0050AA70 (NMData::Task::vfunc_15).
namespace lift_0050AA70 {
// Known callee 0x0050A120: sub_0050A120 (30 bytes, not yet lifted). Called as (out, this).
extern void ext_00505A10(uint32_t* out, void* self);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name NMData::Task::vfunc_15
// @class NMData::Task
// @summary Returns out; if key == 0x386 calls ext_0050A120(out, this), otherwise zeroes out via ext_00671F30.
// (No fields of the object are dereferenced; `self` is only passed through to ext_0050A120.)
// (ecx on entry is the implicit `this`; the stack local it is saved to is dead.)
uint32_t* fn_00507450(void* self, uint32_t* out, uint32_t key) {
    if (key == 0x361) {
        ext_00505A10(out, self);
    } else {
        ext_00671F30(out);
    }
    return out;
}
} // namespace lift_0050AA70
} // namespace lift_00507450

// [0x00507450]
namespace lift_00507450 {
extern DWORD* ext_00505A10(DWORD* dst, DWORD value);
extern void ext_00671F30(uint32_t* out);

// @name InitialVariableValues::GetPropertyValue
// @class InitialVariableValues
// @summary For property id 0x361 stores a reference to this object into the output value; otherwise writes the default/empty value.
uint32_t* __thiscall fn_00507450(void* self, uint32_t* out, uint32_t id) {
    if (id == 0x361) {
        ext_00505A10(reinterpret_cast<DWORD*>(out), static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
        return out;
    }
    ext_00671F30(out);
    return out;
}
} // namespace lift_00507450
