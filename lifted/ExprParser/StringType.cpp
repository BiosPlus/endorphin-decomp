// Lifted C++ translation unit: lifted/ExprParser/StringType.cpp
#include "lift_compat.h"
#include <string>
// Known callee 0x00671840 (28B): called with the holder pointer, return ignored.
extern "C" void ext_00671840(void* self);
#include <cstdlib>
#include <cstring>
// String literals referenced by the original code (contents not recovered here).
extern const char ext_0092F10C[];
extern const char ext_0093A810[];

// String literals referenced by the original code (contents not recovered here).
extern const char ext_0092F10C[];
extern const char ext_0093A810[];
// @summary Call helper ext_00671840(self), then assign value to the std::string referenced by self->+0x00; returns that string by reference.
// @field ExprParser::StringType +0x00 void* field_0x00
std::string& fn_006718A0(void* self, const std::string& value) {
    ext_00671840(self);
    auto* str = static_cast<std::string*>(lift_field<void*>(self, 0x00));
    return *str = value;
}
// Known callee 0x006720E0 (43B): called with the holder as implicit this, a
// pointer to the +0x2C subobject of arg2, and a zero flag.
extern "C" void ext_006720E0(void* self, void* subobject, int flag);

// pointer to the +0x2C subobject of arg2, and a zero flag.
extern "C" void ext_006720E0(void* self, void* subobject, int flag);
// @class ExprParser::StringType
// @summary Returns atof() of the held std::string as a float, or 0.0f if the string pointer is null.
// @field ExprParser::StringType +0x00 std::string* field_0x00
float fn_0066B240(void* self) {
    auto* str = lift_field<std::string*>(self, 0);
    if (!str)
        return 0.0f;
    return static_cast<float>(std::atof(str->c_str()));
}
#include <new>

// [0x0066B200]
namespace lift_0066B200 {
// @name ExprParser::StringType::vfunc_0
// @class ExprParser::StringType
// @summary Converts or formats a StringType value pointer into an output string object.

extern void __thiscall ext_006720E0(void* self, uint32_t value);
extern void __thiscall ext_0041CE40(void* self, uint32_t str_addr);

void* __stdcall fn_0066B200(void* out_str, const uint32_t* value_ptr) {
    uint32_t val = *value_ptr;
    if (val != 0) {
        ext_006720E0(out_str, val);
    } else {
        ext_0041CE40(out_str, 0x00928B5Du);
    }
    return out_str;
}
} // namespace lift_0066B200

// [0x0066CFD0]
namespace lift_0066CFD0 {
// @name ExprParser::StringType::vfunc_18
// @class ExprParser::StringType
// @summary Lazily initializes and returns a static string/type name object at 0x00B59670.

extern uint32_t mem_00B59678;
extern uint8_t mem_00B59670[];

extern void* __thiscall ext_0041CE40(void* self, uint32_t arg);
extern int __cdecl ext_006A6C87(uint32_t func);

uint32_t __thiscall fn_0066CFD0(void* self, uint32_t arg1) {
    (void)self;
    (void)arg1;

    if ((mem_00B59678 & 1u) == 0u) {
        mem_00B59678 |= 1u;
        ext_0041CE40(mem_00B59670, 0x00928B5Du);
        ext_006A6C87(0x00921790u);
    }

    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B59670));
}
} // namespace lift_0066CFD0

// [0x006718C0]
namespace lift_006718C0 {
// @name ExprParser::StringType::vfunc_41
// @class ExprParser::StringType
// @summary Assigns a string value from arg2 to the std::string pointed to by arg1.
// @field ExprParser::StringType +0x00 std::string* field_0x00


void __stdcall ext_00671840(void* arg1);
void* __thiscall ext_0041CEB0(void* self, void* out_str);
void* __thiscall ext_006291BE(void* self, const void* other);
void __thiscall ext_00628FF0(void* self);

// MSVCP80!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z
static auto& mem_00924FDC = *reinterpret_cast<void* (__thiscall**)(void*, const void*)>(0x00924FDC);
// MSVCP80!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ
static auto& mem_00924FF4 = *reinterpret_cast<void (__thiscall**)(void*)>(0x00924FF4);

void __thiscall fn_006718C0(void* /*self*/, void* arg1, void* arg2) {
    ext_00671840(arg1);
    alignas(4) uint8_t local_str[28];
    void* str_ptr = ext_0041CEB0(arg2, local_str);
    void* dst_str = *reinterpret_cast<void**>(arg1);
    mem_00924FDC(dst_str, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_006718C0

// [0x00671930]
namespace lift_00671930 {
// @name ExprParser::StringType::vfunc_43
// @class ExprParser::StringType
// @summary Appends a string representation of the second argument to the string value pointed to by the first argument.


extern void __cdecl ext_00671840(void* arg);
extern void* __thiscall ext_0041CEB0(void* self, void* out_str);

extern void* mem_00924FD8;
extern void* mem_00924FF4;

using StringAppendAssignFn = void* (__thiscall*)(void* self, const void* rhs);
using StringDtorFn = void (__thiscall*)(void* self);

void __thiscall fn_00671930(void* self, void* dst, void* src) {
    (void)self;
    ext_00671840(dst);

    alignas(4) uint8_t local_str[0x1C]{};
    void* rhs_str = ext_0041CEB0(src, local_str);

    void* dst_str = *reinterpret_cast<void**>(dst);
    reinterpret_cast<StringAppendAssignFn>(mem_00924FD8)(dst_str, rhs_str);
    reinterpret_cast<StringDtorFn>(mem_00924FF4)(local_str);
}
} // namespace lift_00671930

// [0x0066B4A0]
namespace lift_0066B4A0 {
// @name ExprParser::StringType::vfunc_33
// @class ExprParser::StringType
// @summary Evaluates/concatenates or assigns a string value via vfunc_29 and sub_00698AD0
// @field ExprParser::StringType +0x00 void* vtable


extern void* __thiscall ext_00698AD0(void* self, void* out_str, void* arg3);
extern uintptr_t mem_00924FDC;
extern uintptr_t mem_00924FF4;

void __thiscall fn_0066B4A0(void* self, void* arg1, void* arg2, void* arg3) {
    void** vtable = *reinterpret_cast<void***>(self);
    auto vfunc_29 = reinterpret_cast<void (__thiscall*)(void*, void*)>(vtable[0x74 / 4]);
    vfunc_29(self, arg1);

    uint8_t local_str[0x1C];
    void* res = ext_00698AD0(arg2, local_str, arg3);

    void* dst_str = *reinterpret_cast<void**>(arg1);
    auto str_assign = reinterpret_cast<void* (__thiscall*)(void*, void*)>(mem_00924FDC);
    str_assign(dst_str, res);

    auto str_dtor = reinterpret_cast<void (__thiscall*)(void*)>(mem_00924FF4);
    str_dtor(local_str);
}
} // namespace lift_0066B4A0

// [0x006718A0]
namespace lift_006718A0 {
// @name ExprParser::StringType::vfunc_10
// @class ExprParser::StringType
// @summary Calls ext_00671840 on self, then assigns *src into the std::string referenced by self's first field.
// @field ExprParser::StringType +0x00 std::string* field_0x00

extern void __stdcall ext_00671840(void* self);
// MSVCP80 std::string::operator= import slot, replaced by native std::string assignment below.
extern int mem_00924FDC;

extern void __stdcall fn_006718A0(void* self, const std::string* src) {
    ext_00671840(self);
    std::string* dst = lift_field<std::string*>(self, 0);
    *dst = *src;
    (void)&mem_00924FDC; // keep IAT slot referenced for differential testing
}
} // namespace lift_006718A0

// [0x0066B240]
namespace lift_0066B240 {
// @name ExprParser::StringType::vfunc_1
// @class ExprParser::StringType
// @summary Converts the held std::string to a float via atof; returns 0.0f when the string pointer is null.
// @field ExprParser::StringType +0x00 std::string* field_0x00

extern const char* ext_00924FF0(void* std_string_this); // std::string::c_str (MSVCP80)
extern double ext_009251F0(const char* s);              // atof (MSVCR80)

float __stdcall fn_0066B240(void* self) {
    void* str = lift_field<void*>(self, 0x00);
    if (str == nullptr) {
        return 0.0f;
    }
    const char* s = ext_00924FF0(str);
    return static_cast<float>(ext_009251F0(s));
}
} // namespace lift_0066B240

// [0x0066B2E0]
namespace lift_0066B2E0 {
extern void* ext_004276B0(void* dst, const void* src);
extern const char mem_00928B5D[];
// MSVCP80 basic_string(const char*) import slot; the call is replaced by a portable std::string construction.
extern void* mem_00924FE4;

// @name ExprParser::StringType::vfunc_4
// @class ExprParser::StringType
// @summary If the slot at arg1 holds a non-null string pointer, copy-construct a std::string into arg1 from it; otherwise construct an empty-literal std::string in place. Returns arg1.
// @field ExprParser::StringType +0x00 void* field_0x00
void* fn_0066B2E0(void* self, [[maybe_unused]] void* arg2) {
    void* src = lift_field<void*>(self, 0x00);
    if (src != nullptr) {
        ext_004276B0(self, src);
    } else {
        (void)&mem_00924FE4;
        new (self) std::string(mem_00928B5D);
    }
    return self;
}
} // namespace lift_0066B2E0

// [0x0066B290] ExprParser::StringType::vfunc_3 (71 bytes)
namespace lift_0066B290 {
// @name ExprParser::StringType::vfunc_3
// @class ExprParser::StringType
// @summary Returns true if the referenced std::string equals one of two fixed literals; false if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 std::string* field_0x00
bool fn_0066B290(void* self) {
    // Original: `std::string* s = *(std::string**)self; if (!s) return false;`
    // then compares *s against literal at 0x0092F10C and 0x0093A810 via
    // MSVCP80 operator==(const std::string&, const char*) (address stored at 0x00924FC0).
    using StrEqFn = bool(__cdecl*)(const std::string&, const char*);

    auto* s = *reinterpret_cast<std::string**>(self);
    if (s == nullptr) {
        return false;
    }

    const auto str_eq = *reinterpret_cast<StrEqFn*>(0x00924FC0);
    if (str_eq(*s, reinterpret_cast<const char*>(0x0092F10C))) {
        return true;
    }
    if (str_eq(*s, reinterpret_cast<const char*>(0x0093A810))) {
        return true;
    }
    return false;
}
} // namespace lift_0066B290
