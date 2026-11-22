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

// [0x0066B240] ExprParser::StringType::vfunc_1 (42 bytes)
// @name ExprParser::StringType::vfunc_1
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
