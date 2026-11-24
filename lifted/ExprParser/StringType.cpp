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

// [0x0066B290] ExprParser::StringType::vfunc_3 (71 bytes)
// @name ExprParser::StringType::vfunc_3
// @class ExprParser::StringType
// @summary Returns 1 if the held std::string equals either of two literal strings, else 0 (0 if the string pointer is null).
// @field ExprParser::StringType +0x00 std::string* field_0x00
int fn_0066B290(void* self) {
    auto* const s = *static_cast<std::string**>(self);
    if (s == nullptr) {
        return 0;
    }
    if (std::strcmp(s->c_str(), ext_0092F10C) == 0) {
        return 1;
    }
    if (std::strcmp(s->c_str(), ext_0093A810) == 0) {
        return 1;
    }
    return 0;
}

// [0x0066B320] ExprParser::StringType::vfunc_23 (36 bytes)
// @name ExprParser::StringType::vfunc_23
// @class ExprParser::StringType
// @summary Calls ext_006720E0(self, &arg2->+0x2C, 0) and returns self; arguments 3-5 are unused.
void* fn_0066B320(void* self, void* arg2, [[maybe_unused]] void* arg3,
                  [[maybe_unused]] void* arg4, [[maybe_unused]] void* arg5) {
    void* subobject = static_cast<char*>(arg2) + 0x2C;
    ext_006720E0(self, subobject, 0);
    return self;
}

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

// [0x0066B2E0]
namespace lift_0066B2E0 {
namespace lift_0066B2E0 {
// @name ExprParser::StringType::vfunc_4
// @class ExprParser::StringType
// @summary Fills an output string from a StringType value pointer, or assigns a literal when the value is null.
// @field ExprParser::StringType +0x00 void* field_0x00

// Callee: sub_004276B0 (cdecl, 2 args: value, out).
extern void __cdecl ext_004276B0(uint32_t value, void* out);
// Indirect IAT slot mem_00924FE4 resolves to MSVCP80 basic_string(const char*) ctor (thiscall).
extern void __thiscall ext_00629122(void* self, const char* s);

void* __stdcall fn_0066B2E0(void* out_str, const uint32_t* value_ptr) {
    uint32_t val = *value_ptr;
    if (val != 0) {
        ext_004276B0(val, out_str);
    } else {
        ext_00629122(out_str, reinterpret_cast<const char*>(0x00928B5Du));
    }
    return out_str;
}
} // namespace lift_0066B2E0
} // namespace lift_0066B2E0

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

// [0x0066B410] ExprParser::StringType::vfunc_42 (136 bytes)
namespace lift_0066B410 {
// Known callee 0x0041CEB0: UnknownClass::forwardToSubobjectSlot4 (Calls vtable slot 4 of the subobject at +0x04 with (arg1, self, 0, 0), then returns arg1.)
extern void* ext_0041CEB0(void* self, void* out);

// @name ExprParser::StringType::vfunc_42
// @class ExprParser::StringType
// @summary Renders two stack-passed values into std::string temporaries via ext_0041CEB0 and returns whether the resulting strings are equal.
bool fn_0066B410([[maybe_unused]] void* self, void* arg1, void* arg2) {
    std::string lhs;
    ext_0041CEB0(arg2, &lhs);

    std::string rhs;
    ext_0041CEB0(arg1, &rhs);

    return lhs == rhs;
}
} // namespace lift_0066B410

// [0x0066B350] ExprParser::StringType::vfunc_25 (188 bytes)
namespace lift_0066B350 {
// Known callee 0x0041CEB0: UnknownClass::forwardToSubobjectSlot4 (Calls vtable slot 4 of the subobject at +0x04 with (arg1, self, 0, 0), then returns arg1.)
extern void ext_0041CEB0();
extern void ext_006720E0();
extern int mem_00924FE4;
extern int mem_00924FD0;
extern int mem_00924ECC;
extern int mem_00924FF4;

// @name ExprParser::StringType::vfunc_25
// @class ExprParser::StringType
// @summary Concatenates a string obtained via forwardToSubobjectSlot4 with two literal fragments and stores the result in the output buffer.
// @field ExprParser::StringType +0x00 void* field_0x00
void fn_0066B350(void* self, std::string* result) {
    // forwardToSubobjectSlot4(self, &tmp) returns &tmp, so the forwarded
    // string is the caller-visible temporary populated by the subobject.
    std::string tmp;
    std::string* forwarded = &tmp;

    std::string head;
    std::string combined = head + *forwarded;
    std::string tail;
    *result = combined + tail;

    (void)self;
}
} // namespace lift_0066B350
