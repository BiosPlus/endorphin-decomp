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

// [0x005272C0] InitialVariableValues::vfunc_25 (76 bytes)
namespace lift_005272C0 {
// MSVCR80!_invalid_parameter_noinfo (IAT slot 0x925134)
extern void mem_00925134(void);
// MSVCP80 std::basic_string<char>::basic_string(const basic_string&) (IAT slot 0x924FE0), thiscall
extern void* mem_00924FE0(void* self, const void* src);

// @name InitialVariableValues::vfunc_25
// @class InitialVariableValues
// @summary Copy-constructs the std::string returned by element[index]'s vtable slot 9 into the caller's return buffer.
// @field InitialVariableValues +0x40 void** field_0x40
// @field InitialVariableValues +0x44 void** field_0x44
void* fn_005272C0(void* self, void* out, void* a2, uint32_t index) {
    (void)a2; // third stack argument is passed through unused by this function
    void** begin = lift_field<void**>(self, 0x40);
    void** end = lift_field<void**>(self, 0x44);
    uintptr_t count = (reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) >> 2;

    if (begin == nullptr || static_cast<uintptr_t>(index) >= count) {
        mem_00925134(); // _invalid_parameter_noinfo; does not return in practice
    }

    void* obj = begin[index];
    void** vtable = *reinterpret_cast<void***>(obj);
    // vtable slot at +0x24 => index 9
    auto slot9 = reinterpret_cast<void* (*)(void*)>(vtable[9]);
    const void* src = slot9(obj);

    mem_00924FE0(out, src);
    return out;
}
} // namespace lift_005272C0
