// Lifted C++ translation unit: lifted/AdvXMLParser/CharRef.cpp
#include "lift_compat.h"

// [0x0063E270] AdvXMLParser::CharRef::vfunc_3 (23 bytes)
namespace lift_0063E270 {
// @name AdvXMLParser::CharRef::vfunc_3
// @class AdvXMLParser::CharRef
// @summary Auto-lifted identical-shape clone of 0x0063E180 (AdvXMLParser::Text::vfunc_3).
namespace lift_0063E180 {
extern uint32_t ext_004701E0(void* self, uint32_t arg);

// @name AdvXMLParser::Text::vfunc_3
// @class AdvXMLParser::Text
// @summary Returns true when the argument equals 3; otherwise forwards the call (same args) to AnimatableTransform::vfunc_13_off_C.
// @field none (this function does not read or write any member of self)
uint32_t fn_0063E270(void* self, uint32_t arg) {
    if (arg == 5) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E270

// [0x0063E390] AdvXMLParser::CharRef::vfunc_1 (36 bytes)
namespace lift_0063E390 {
// MSVCP80 import slot [0x92506C]: std::basic_string<char>::basic_string(size_type count, char ch) (thiscall).
extern void (__thiscall* mem_0092506C)(void* self, unsigned int count, char ch);

// @name AdvXMLParser::CharRef::vfunc_1
// @class AdvXMLParser::CharRef
// @summary Constructs a one-character std::string from the CharRef's stored char (+0x24) into the caller's sret buffer and returns that buffer.
// @field AdvXMLParser::CharRef +0x24 uint8_t field_0x24
void* __thiscall fn_0063E390(void* self, void* out) {
    uint8_t ch = lift_field<uint8_t>(self, 0x24);
    mem_0092506C(out, 1u, static_cast<char>(ch));
    return out;
}
} // namespace lift_0063E390

// [0x006409B0] AdvXMLParser::CharRef::vfunc_5 (86 bytes)
namespace lift_006409B0 {
// MSVCP80 import slot [0x924ED0]: std::basic_string<char>::operator+=(const char*) (thiscall).
extern void* (__thiscall* mem_00924ED0)(void* self, const char* s);
// MSVCP80 import slot [0x924EC0]: std::basic_string<char>::operator+=(char) (thiscall).
extern void* (__thiscall* mem_00924EC0)(void* self, char ch);
// .rdata string literal at 0x97CD10 (appended first).
extern const char mem_0097CD10[];
// Helper: converts a character code to text in buf (radix 10); returns a pointer to the result.
extern const char* ext_00640960(int ch, char* buf, int radix);

// @name AdvXMLParser::CharRef::vfunc_5
// @class AdvXMLParser::CharRef
// @summary Builds a character reference string: appends a literal, the decimal form of the CharRef's stored char, then ';' into the caller's string at ctx+0x08; clears the flag at ctx+0x11.
// @field AdvXMLParser::CharRef +0x24 uint8_t field_0x24
void __thiscall fn_006409B0(void* self, void* ctx) {
    char buf[12];

    // Target string object is pointed to by ctx+0x08.
    lift_field<uint8_t>(ctx, 0x11) = 0;
    mem_00924ED0(lift_field<void*>(ctx, 0x08), mem_0097CD10);

    int ch = static_cast<int>(static_cast<int8_t>(lift_field<uint8_t>(self, 0x24)));
    const char* text = ext_00640960(ch, buf, 10);

    lift_field<uint8_t>(ctx, 0x11) = 0;
    mem_00924ED0(lift_field<void*>(ctx, 0x08), text);

    mem_00924EC0(lift_field<void*>(ctx, 0x08), ';');
}
} // namespace lift_006409B0
