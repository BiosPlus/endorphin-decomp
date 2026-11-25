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
// Constructs std::string(1, ch) in-place at `out` (MSVCP80 basic_string(size_type, char) ctor).
extern void ext_std_string_ctor_fill(void* self, uint32_t count, char ch);

// @name AdvXMLParser::CharRef::vfunc_1
// @class AdvXMLParser::CharRef
// @summary Builds a one-character std::string from the byte at this+0x24 into the caller-supplied string slot and returns that slot.
// @field AdvXMLParser::CharRef +0x24 uint8_t field_0x24
void* fn_0063E390(void* self, void* out) {
    const uint8_t ch = static_cast<uint8_t*>(self)[0x24];
    ext_std_string_ctor_fill(out, 1, static_cast<char>(ch));
    return out;
}
} // namespace lift_0063E390

// [0x006409B0] AdvXMLParser::CharRef::vfunc_5 (86 bytes)
namespace lift_006409B0 {
// String literal in .rdata at 0x0097CD10 (prefix text appended first).
extern const char mem_0097CD10[];

// Callee 0x00640960 (74 bytes): formats the signed byte `value` in base `base`
// into `buf` and returns a pointer to the resulting NUL-terminated text.
extern const char* ext_00640960(int32_t value, void* buf, int32_t base);

// MSVCP80 std::basic_string<char>::operator+=(const char*)  (IAT slot 0x00924ED0)
extern void ext_std_string_append_cstr(void* str, const char* s);
// MSVCP80 std::basic_string<char>::operator+=(char)        (IAT slot 0x00924EC0)
extern void ext_std_string_append_char(void* str, char c);

// @name AdvXMLParser::CharRef::vfunc_5
// @class AdvXMLParser::CharRef
// @summary Appends a character-reference body to the string at ctx+0x8 (literal prefix, the decimal form of this+0x24, then ';'), clearing the flag at ctx+0x11 before each append. Returns nothing.
// @field AdvXMLParser::CharRef +0x24 uint8_t field_0x24
void fn_006409B0(void* self, void* ctx) {
    uint8_t* c = static_cast<uint8_t*>(ctx);
    void* str = c + 0x08;

    c[0x11] = 0;
    ext_std_string_append_cstr(str, mem_0097CD10);

    const int32_t value = static_cast<int8_t>(static_cast<uint8_t*>(self)[0x24]);
    uint8_t buf[12];
    const char* digits = ext_00640960(value, buf, 10);

    c[0x11] = 0;
    ext_std_string_append_cstr(str, digits);

    c[0x11] = 0;
    ext_std_string_append_char(str, ';');
}
} // namespace lift_006409B0
