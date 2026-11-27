// Lifted C++ translation unit: lifted/NMData/EffectorGroupData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE68;
extern "C" const char mem_00972450[];
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_0093BF0C[];
// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Constructs a std::string in the caller's hidden return buffer from the C string pointed to by mem_00A9EE68; this is never read (thiscall, one stack arg, ret 4).
std::string* fn_0060D4D0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE68);
    return out;
}

// [0x0060D3A0] NMData::EffectorGroupData::vfunc_22 (53 bytes)
namespace lift_0060D3A0 {
// Base-class copy helper at 0x0060C530 (NMData::EffectorBaseData::vfunc_21).
extern void ext_0060C530(void* self, void* src);
// String-property copy helper at 0x004C1B50 (127 bytes). Original ABI is thiscall
// with a stack-allocated receiver and three stack args; modelled as
// (destination, source value, property key), matching the EffectorBaseData helper.
extern void ext_004C1B50(void* dst, const void* value, const char* key);
// Property-key string literal "m_childEffectorNames" in .rdata.
extern int mem_009723D4;

// @name NMData::EffectorGroupData::vfunc_22
// @class NMData::EffectorGroupData
// @summary Copies the base EffectorBaseData properties from src into self, then copies the m_childEffectorNames string property.
// @field NMData::EffectorGroupData +0x44 undefined field_0x44
void fn_0060D3A0(void* self, void* src, void* arg2, void* arg3) {
    // arg2 and arg3 are forwarded to the base copy in the original ABI but are
    // not consumed by the modelled helper; they are ignored here.
    (void)arg2;
    (void)arg3;

    // Base-class property copy (m_name, m_jointName).
    ext_0060C530(self, src);

    // Copy m_childEffectorNames: dst = self + 0x44, value = src + 0x44.
    uint8_t* dst = static_cast<uint8_t*>(self);
    uint8_t* from = static_cast<uint8_t*>(src);
    ext_004C1B50(dst + 0x44, from + 0x44,
                 reinterpret_cast<const char*>(&mem_009723D4));
}
} // namespace lift_0060D3A0

// [0x0060DB20] NMData::EffectorGroupData::vfunc_0 (96 bytes)
namespace lift_0060DB20 {
// sub_004026E0 (StringArray::ReleaseElements): thiscall, this = sub-object at +0x44, no stack args.
extern void __thiscall ext_004026E0(void* self);
// sub_0060BA10 (ConstructStringsThenCallBase): thiscall, this = self, no stack args.
extern void __thiscall ext_0060BA10(void* self);
// thunk_MFC80_ord_764: cdecl, one stack arg (the object pointer). Used as the delete path.
extern void ext_006A5C5C(void* p);

// @name NMData::EffectorGroupData::vfunc_0
// @class NMData::EffectorGroupData
// @summary Scalar deleting destructor: releases the array at +0x44, runs the base-construct/teardown helper on self, then frees self when bit 0 of the flags argument is set; returns self.
// @field NMData::EffectorGroupData +0x44 uint8_t field_0x44
void* __thiscall fn_0060DB20(void* self, uint32_t flags) {
    ext_004026E0(static_cast<unsigned char*>(self) + 0x44);
    ext_0060BA10(self);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0060DB20

// [0x0060D4D0] NMData::EffectorGroupData::vfunc_8 (35 bytes)
namespace lift_0060D4D0 {
extern const char* mem_00A9EE68;

// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9EE68;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0060D4D0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9EE68);
}
} // namespace lift_0047DB90
} // namespace lift_0060D4D0

// [0x0060D5A0] NMData::EffectorGroupData::vfunc_19 (67 bytes)
namespace lift_0060D5A0 {
// Known callee 0x0060BB50: NMData::EffectorBaseData::vfunc_19 (Clears two std::string members (at +0x04 and +0x20) of the object.)
extern void __thiscall ext_0060BB50(void* self);
// Known callee 0x00406510: Unknown::copyStringRangeTruncate (Copies a std::string range through sub_00406090, destroys the old tail past the new end, stores the new end at this+0x08 and writes {a2, a3} to the sret pair at a1.)
extern uint32_t __thiscall ext_00406510(void* self, void* a1, void* a2, uint32_t a3, void* a4, uint32_t a5);
// RDATA slot 0x00925134: pointer to the CRT invalid-parameter handler (MSVCR80 _invalid_parameter_noinfo).
extern uint32_t mem_00925134;

// @name NMData::EffectorGroupData::vfunc_19
// @class NMData::EffectorGroupData
// @summary Clears the base-class strings, range-checks the string range at this+0x44 against this+0x4c, then calls copyStringRangeTruncate on it.
// @field EffectorGroupData +0x48 uint32_t field_0x48
// @field EffectorGroupData +0x4C uint32_t field_0x4c
void fn_0060D5A0(void* self) {
    ext_0060BB50(self);

    const uint32_t tail = lift_field<uint32_t>(self, 0x4C);
    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);

    void* range = &lift_field<uint8_t>(self, 0x44);
    if (lift_field<uint32_t>(range, 0x4) > tail) {
        invalid_param();
    }
    const uint32_t begin = lift_field<uint32_t>(range, 0x4);
    if (begin > lift_field<uint32_t>(range, 0x8)) {
        invalid_param();
    }

    // sret pair written by the callee; the caller discards it.
    uint32_t sret[2] = {0, 0};
    ext_00406510(range, sret, range, begin, range, tail);
}
} // namespace lift_0060D5A0

// [0x0060D500]
namespace lift_0060D500 {
// @name NMData::EffectorGroupData::vfunc_20
// @class NMData::EffectorGroupData
// @summary Returns (literal_A + this->field_0x04 + literal_B) as a std::string.
// @field NMData::EffectorGroupData +0x04 std::string field_0x04

extern const char mem_00972450[];
extern const char mem_0093BF0C[];
// MSVCP80 IAT slots used by the original (basic_string ctor / operator+ / dtor).
extern void* mem_00924ECC;
extern void* mem_00924FD0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

// Original is __thiscall with a hidden return slot (std::string) as the first
// stack argument; the trailing second stack argument is unused by the body.
// Portable form: self is the EffectorGroupData instance, result is returned by value.
// The MSVCP80 import calls (ctor, operator+ x2, dtor) are expressed with std::string.
std::string NMData_EffectorGroupData_vfunc_20(const void* self) {
    (void)&mem_00924ECC;
    (void)&mem_00924FD0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    std::string a(mem_00972450);
    const std::string& name = lift_field<std::string>(self, 0x04);
    std::string tmp = a + name;
    return tmp + std::string(mem_0093BF0C);
}
} // namespace lift_0060D500
