// Lifted C++ translation unit: lifted/AdvXMLParser/EntityRef.cpp
#include "lift_compat.h"

// [0x00640A10] AdvXMLParser::EntityRef::vfunc_5 (60 bytes)
namespace lift_00640A10 {
// MSVCP80 import slot [0x924EC0]: std::basic_string<char>::operator+=(char) (thiscall).
extern void* (__thiscall* mem_00924EC0)(void* self, char ch);
// MSVCP80 import slot [0x924FD8]: std::basic_string<char>::operator+=(const std::string&) (thiscall).
extern void* (__thiscall* mem_00924FD8)(void* self, const void* str);

// @name AdvXMLParser::EntityRef::vfunc_5
// @class AdvXMLParser::EntityRef
// @summary Appends '&' + this->field_0x04 + ';' to the string at arg+0x08 and clears the byte flag at arg+0x11 before each append (builds an XML entity reference "&<text>;").
// @field AdvXMLParser::EntityRef +0x04 std::string field_0x04
void __thiscall fn_00640A10(void* self, void* arg) {
    uint8_t* a = static_cast<uint8_t*>(arg);

    // Append '&' to *(arg+0x08).
    void* out = lift_field<void*>(a, 0x08);
    lift_field<uint8_t>(a, 0x11) = 0;
    mem_00924EC0(out, '&');

    // Append this->field_0x04 to *(arg+0x08).
    out = lift_field<void*>(a, 0x08);
    lift_field<uint8_t>(a, 0x11) = 0;
    mem_00924FD8(out, static_cast<uint8_t*>(self) + 0x04);

    // Append ';' to *(arg+0x08).
    out = lift_field<void*>(a, 0x08);
    lift_field<uint8_t>(a, 0x11) = 0;
    mem_00924EC0(out, ';');
}
} // namespace lift_00640A10
