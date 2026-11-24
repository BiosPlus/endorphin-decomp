// Lifted C++ translation unit: lifted/AdvXMLParser/Element.cpp
#include "lift_compat.h"

// [0x0063E3C0]
namespace lift_0063E3C0 {
extern uint32_t ext_004701E0(uint32_t arg);

// @name AdvXMLParser::Element::vfunc_3
// @class AdvXMLParser::Element
// @summary Single-argument virtual forwarder: returns 1 unchanged, otherwise tail-calls AnimatableTransform::vfunc_13_off_C with the same argument.
// (No this-relative fields are accessed, so no @field lines.)
uint32_t fn_0063E3C0(uint32_t arg) {
    if (arg == 1) {
        return arg;
    }
    return ext_004701E0(arg);
}
} // namespace lift_0063E3C0
