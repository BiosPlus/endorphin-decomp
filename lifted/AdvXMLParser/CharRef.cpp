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
