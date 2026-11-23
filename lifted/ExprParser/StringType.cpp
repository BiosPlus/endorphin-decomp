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
