// Lifted C++ translation unit: lifted/classes/Acclaim2CharacterIO.cpp
#include "lift_compat.h"
#include <string>

// [0x0056B8C0] Acclaim2CharacterIO::vfunc_48
namespace lift_0056B8C0 {
// IAT slot 0x00924FC0: MSVCP80 std::operator==(const basic_string<char>&, const char*)
extern bool (*mem_00924FC0)(const void* lhs, const char* rhs);
// .rdata float constant 2.0f at 0x00955998
extern const float mem_00955998;
// .rdata C string literal at 0x009590C0 (compared against the std::string at +0xAC)
extern const char mem_009590C0[];

// @name Acclaim2CharacterIO::vfunc_48
// @class Acclaim2CharacterIO
// @summary Returns 1 when the float at +0x46C is >= 2.0 (ordered) and the string at +0xAC equals the literal at 0x009590C0; otherwise 0.
// @field Acclaim2CharacterIO +0xAC std::string field_0xac
// @field Acclaim2CharacterIO +0x46C float field_0x46c
int fn_0056B8C0(void* self) {
    const float threshold = mem_00955998;
    const float value = lift_field<float>(self, 0x46C);
    // NaN compares false here, matching the original jp (unordered) branch.
    if (!(threshold <= value)) {
        return 0;
    }
    const void* name = &lift_field<uint8_t>(self, 0xAC);
    return mem_00924FC0(name, mem_009590C0) ? 1 : 0;
}
} // namespace lift_0056B8C0

// [0x0056B770] Acclaim2CharacterIO::vfunc_3 (131 bytes)
namespace lift_0056B770 {
// Known callee 0x00553720: NMFileIO::vfunc_3 (Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.)
extern void* ext_00553720(void* self, void* arg);
extern uint32_t ext_0063F530(void* self, uint32_t value, uint32_t flags, uint32_t flag2);
extern void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern uint32_t mem_00A9ECE8;

// @name Acclaim2CharacterIO::vfunc_3
// @class Acclaim2CharacterIO
// @summary Queries ext_0063F530 with the global mem_00A9ECE8; if the result is one of five status codes it is normalized to 0xB53B30 and, when matched, ext_00640390 result is forwarded to NMFileIO::vfunc_3 on this. Returns the argument.
// @field Acclaim2CharacterIO +0x00 void* vtable (no direct field access; self is only passed through to ext_00553720)
void* fn_0056B770(void* self, void* arg) {
    const uint32_t value = mem_00A9ECE8;
    uint32_t status = ext_0063F530(arg, value, 0, 1);

    // Normalize a set of known status codes to 0xB53B30.
    if (status == 0xB53A34u || status == 0xB53B30u || status == 0xB53AB0u ||
        status == 0xB53A70u || status == 0xB53AF0u) {
        status = 0xB53B30u;
    }

    // Forward the converted result only for the recognized status codes.
    if (status == 0xB53A34u || status == 0xB53B30u || status == 0xB53AB0u ||
        status == 0xB53A70u || status == 0xB53AF0u) {
        void* result = ext_00640390(arg, mem_00A9ECE8, 0);
        ext_00553720(self, result);
    }

    return arg;
}
} // namespace lift_0056B770

// [0x0056BD50]
namespace lift_0056BD50 {
void __thiscall ext_0056B360(void* self);
void* __thiscall ext_0057BB20(void* self, void* value);
void __thiscall ext_0056B3F0(void* self, void* arg);
void __thiscall ext_0056BC30(void* self, void* arg1, void* arg2);
void __fastcall ext_00421C00(void* self);

extern void* (__thiscall* mem_00924FE4)(void* self, const char* str);
extern void (__thiscall* mem_00924FF4)(void* self);
extern void (__cdecl* mem_00925134)();
extern float mem_00955998;

// @name Acclaim2CharacterIO::vfunc_14
// @class Acclaim2CharacterIO
// @summary Loads Acclaim2 character data, processes skeleton/nodes based on version, and copies transform/bounds fields.
// @field Acclaim2CharacterIO +0x78 float field_0x78
// @field Acclaim2CharacterIO +0x7c float field_0x7c
// @field Acclaim2CharacterIO +0x80 float field_0x80
// @field Acclaim2CharacterIO +0x84 uint32_t field_0x84
// @field Acclaim2CharacterIO +0x88 uint32_t field_0x88
// @field Acclaim2CharacterIO +0x8c uint32_t field_0x8c
// @field Acclaim2CharacterIO +0x27c uint8_t field_0x27c
// @field Acclaim2CharacterIO +0x46c float field_0x46c
// @field Acclaim2CharacterIO +0x484 void** field_0x484
// @field Acclaim2CharacterIO +0x488 void** field_0x488
// @field Acclaim2CharacterIO +0x490 float field_0x490
// @field Acclaim2CharacterIO +0x494 float field_0x494
// @field Acclaim2CharacterIO +0x498 float field_0x498
// @field Acclaim2CharacterIO +0x49c uint32_t field_0x49c
// @field Acclaim2CharacterIO +0x4a0 uint32_t field_0x4a0
// @field Acclaim2CharacterIO +0x4a4 uint32_t field_0x4a4
int __thiscall fn_0056BD50(void* self, void* arg0) {
    uint8_t* s = static_cast<uint8_t*>(self);
    float* version_ptr = reinterpret_cast<float*>(s + 0x46c);
    ext_0056B360(version_ptr);

    uint8_t local_obj[0x28];
    ext_0057BB20(local_obj, version_ptr);
    ext_0056B3F0(local_obj, arg0);

    void* sub = s + 0x27c;
    using Vfn0 = void (__thiscall*)(void*);
    using Vfn1 = void (__thiscall*)(void*, void*);

    void** sub_vt = *reinterpret_cast<void***>(sub);
    reinterpret_cast<Vfn0>(sub_vt[0x84 / 4])(sub);

    uint8_t tmp_str[0x1c];
    mem_00924FE4(tmp_str, reinterpret_cast<const char*>(0x009590c0));
    sub_vt = *reinterpret_cast<void***>(sub);
    reinterpret_cast<Vfn1>(sub_vt[0x5c / 4])(sub, tmp_str);
    mem_00924FF4(tmp_str);

    if (mem_00955998 > *version_ptr) {
        void** vec_begin = *reinterpret_cast<void***>(s + 0x484);
        void** vec_end = *reinterpret_cast<void***>(s + 0x488);
        if (!vec_begin || (vec_end - vec_begin) == 0) {
            mem_00925134();
        }
        uint8_t* first_elem = static_cast<uint8_t*>(*vec_begin);
        sub_vt = *reinterpret_cast<void***>(sub);
        reinterpret_cast<Vfn1>(sub_vt[0x5c / 4])(sub, first_elem + 8);

        void** inner_begin = *reinterpret_cast<void***>(first_elem + 0x28);
        void** inner_end = *reinterpret_cast<void***>(first_elem + 0x2c);
        for (void** it = inner_begin; it != inner_end; ++it) {
            ext_0056BC30(self, sub, *it);
        }
    } else {
        mem_00924FE4(tmp_str, reinterpret_cast<const char*>(0x009590c0));
        sub_vt = *reinterpret_cast<void***>(sub);
        reinterpret_cast<Vfn1>(sub_vt[0x5c / 4])(sub, tmp_str);
        mem_00924FF4(tmp_str);

        void** vec_begin = *reinterpret_cast<void***>(s + 0x484);
        void** vec_end = *reinterpret_cast<void***>(s + 0x488);
        for (void** it = vec_begin; it != vec_end; ++it) {
            ext_0056BC30(self, sub, *it);
        }
    }

    *reinterpret_cast<float*>(s + 0x78) = *reinterpret_cast<float*>(s + 0x490);
    *reinterpret_cast<float*>(s + 0x7c) = *reinterpret_cast<float*>(s + 0x494);
    *reinterpret_cast<float*>(s + 0x80) = *reinterpret_cast<float*>(s + 0x498);
    *reinterpret_cast<uint32_t*>(s + 0x84) = *reinterpret_cast<uint32_t*>(s + 0x49c);
    *reinterpret_cast<uint32_t*>(s + 0x88) = *reinterpret_cast<uint32_t*>(s + 0x4a0);
    *reinterpret_cast<uint32_t*>(s + 0x8c) = *reinterpret_cast<uint32_t*>(s + 0x4a4);

    ext_00421C00(local_obj);
    return 0;
}
} // namespace lift_0056BD50
