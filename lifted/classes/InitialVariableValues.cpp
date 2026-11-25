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

// [0x005272C0] InitialVariableValues::vfunc_25 (76 bytes)
namespace lift_005272C0 {
// @name InitialVariableValues::vfunc_25
// @class InitialVariableValues
// @summary Returns a copy of the string reported by the element at the given index (vtable slot 9).
// @field InitialVariableValues +0x40 void** elemsBegin
// @field InitialVariableValues +0x44 void** elemsEnd
std::string* fn_005272C0(void* self, std::string* out, void* /*unused*/, std::uint32_t index) {
    using StringGetter = const std::string* (*)(void*);

    const std::uintptr_t begin = lift_field<std::uint32_t>(self, 0x40);
    const std::uintptr_t end   = lift_field<std::uint32_t>(self, 0x44);

    // Original: null storage or index past the end -> _invalid_parameter_noinfo (no return).
    if (begin == 0 || index >= (end - begin) / sizeof(void*)) {
        std::abort();
    }

    void* elem = reinterpret_cast<void**>(begin)[index];
    void** vtable = *reinterpret_cast<void***>(elem);
    auto getter = reinterpret_cast<StringGetter>(vtable[0x24 / sizeof(void*)]);
    const std::string* src = getter(elem);

    new (out) std::string(*src);
    return out;
}
} // namespace lift_005272C0
