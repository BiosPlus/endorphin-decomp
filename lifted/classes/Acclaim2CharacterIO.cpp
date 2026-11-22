// Lifted C++ translation unit: lifted/classes/Acclaim2CharacterIO.cpp
#include "lift_compat.h"
#include <string>

// [0x0056B8C0] Acclaim2CharacterIO::vfunc_48 (53 bytes)
// @name Acclaim2CharacterIO::vfunc_48
// @class Acclaim2CharacterIO
// @summary Returns true when the float at +0x46c is ordered and >= 2.0 and the std::string at +0xac equals "all".
// @field Acclaim2CharacterIO +0x46c float field_0x46c
// @field Acclaim2CharacterIO +0xac std::string field_0xac
bool fn_0056B8C0(void* self) {
    // Unordered (NaN) or less-than-2.0 values take the false path.
    const float value = lift_field<float>(self, 0x46c);
    if (!(value >= 2.0f)) {
        return false;
    }

    const std::string& name = lift_field<std::string>(self, 0xac);
    return name == "all";
}
