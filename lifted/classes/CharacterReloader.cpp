// Lifted C++ translation unit: lifted/classes/CharacterReloader.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AA020] CharacterReloader::vfunc_10 (37 bytes)
namespace lift_005AA020 {
// @name CharacterReloader::vfunc_10
// @class CharacterReloader
// @summary Copy-constructs a std::string into the caller's return slot from the string at +0x04 of the source argument; returns the slot.
// @field Unknown +0x04 std::string field_0x04
std::string* fn_005AA020(void* self, std::string* out, const uint8_t* src) {
    (void)self;
    new (out) std::string(*reinterpret_cast<const std::string*>(src + 0x04));
    return out;
}
} // namespace lift_005AA020
