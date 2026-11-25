// Lifted C++ translation unit: lifted/AdvXMLParser/EntityRef.cpp
#include "lift_compat.h"

// [0x00640A10] AdvXMLParser::EntityRef::vfunc_5 (60 bytes)
namespace lift_00640A10 {
// MSVCP80 basic_string operator+= overloads, called through the import thunks.
// ext_std_string_append_char: operator+=(char)           (IAT slot 0x924EC0)
// ext_std_string_append_str:  operator+=(const string&)  (IAT slot 0x924FD8)
extern void ext_std_string_append_char(void* str, char ch);
extern void ext_std_string_append_str(void* str, const void* other);

// @name AdvXMLParser::EntityRef::vfunc_5
// @class AdvXMLParser::EntityRef
// @summary Appends the entity reference "&<name>;" to the std::string pointed to by the argument's +0x08 slot and clears the argument's +0x11 flag byte.
// @field AdvXMLParser::EntityRef +0x04 std::string field_0x04
// Argument (stack, thiscall callee-pops 4): struct with +0x08 = std::string* (output), +0x11 = uint8_t flag.
void fn_00640A10(void* self, void* ctx) {
    void* out = lift_field<void*>(ctx, 0x08);
    lift_field<uint8_t>(ctx, 0x11) = 0;
    ext_std_string_append_char(out, '&');
    lift_field<uint8_t>(ctx, 0x11) = 0;
    void* name = static_cast<uint8_t*>(self) + 0x04;
    ext_std_string_append_str(out, name);
    lift_field<uint8_t>(ctx, 0x11) = 0;
    ext_std_string_append_char(out, ';');
}
} // namespace lift_00640A10
