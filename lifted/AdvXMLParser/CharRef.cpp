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
