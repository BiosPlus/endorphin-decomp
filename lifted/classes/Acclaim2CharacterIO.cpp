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

// [0x0056B770] Acclaim2CharacterIO::vfunc_3 (131 bytes)
namespace lift_0056B770 {
// Known callee 0x00553720: NMFileIO::vfunc_3 (Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.)
extern void* ext_00553720(void* self, void* arg);
extern uint32_t ext_0063F530(void* self, uint32_t value, uint32_t flags, uint32_t flag2);
extern void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern uint32_t mem_00A9ECE8;

// @name Acclaim2CharacterIO::vfunc_3
// @class Acclaim2CharacterIO
// @summary Queries ext_0063F530 with the global mem_00A9ECE8; if the result is one of five status codes it is normalized to 0xB53B30 and, when matched, ext_00640390 result is forwarded to NMFileIO::vfunc_3 on this. Returns the argument.
// @field Acclaim2CharacterIO +0x00 void* vtable (no direct field access; self is only passed through to ext_00553720)
void* fn_0056B770(void* self, void* arg) {
    const uint32_t value = mem_00A9ECE8;
    uint32_t status = ext_0063F530(arg, value, 0, 1);

    // Normalize a set of known status codes to 0xB53B30.
    if (status == 0xB53A34u || status == 0xB53B30u || status == 0xB53AB0u ||
        status == 0xB53A70u || status == 0xB53AF0u) {
        status = 0xB53B30u;
    }

    // Forward the converted result only for the recognized status codes.
    if (status == 0xB53A34u || status == 0xB53B30u || status == 0xB53AB0u ||
        status == 0xB53A70u || status == 0xB53AF0u) {
        void* result = ext_00640390(arg, mem_00A9ECE8, 0);
        ext_00553720(self, result);
    }

    return arg;
}
} // namespace lift_0056B770
