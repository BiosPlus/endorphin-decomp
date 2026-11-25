// Lifted C++ translation unit: lifted/classes/Acclaim2CharacterIO.cpp
#include "lift_compat.h"
#include <string>

// [0x0056B8C0] Acclaim2CharacterIO::vfunc_48
namespace lift_0056B8C0 {
// IAT slot 0x00924FC0: MSVCP80 std::operator==(const basic_string<char>&, const char*)
extern bool (*mem_00924FC0)(const void* lhs, const char* rhs);
// .rdata float constant 2.0f at 0x00955998
extern const float mem_00955998;
// .rdata C string literal at 0x009590C0 (compared against the std::string at +0xAC)
extern const char mem_009590C0[];

// @name Acclaim2CharacterIO::vfunc_48
// @class Acclaim2CharacterIO
// @summary Returns 1 when the float at +0x46C is >= 2.0 (ordered) and the string at +0xAC equals the literal at 0x009590C0; otherwise 0.
// @field Acclaim2CharacterIO +0xAC std::string field_0xac
// @field Acclaim2CharacterIO +0x46C float field_0x46c
int fn_0056B8C0(void* self) {
    const float threshold = mem_00955998;
    const float value = lift_field<float>(self, 0x46C);
    // NaN compares false here, matching the original jp (unordered) branch.
    if (!(threshold <= value)) {
        return 0;
    }
    const void* name = &lift_field<uint8_t>(self, 0xAC);
    return mem_00924FC0(name, mem_009590C0) ? 1 : 0;
}
} // namespace lift_0056B8C0
