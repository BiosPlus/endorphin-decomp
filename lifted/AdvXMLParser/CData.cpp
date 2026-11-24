// Lifted C++ translation unit: lifted/AdvXMLParser/CData.cpp
#include "lift_compat.h"

// [0x0063E870] AdvXMLParser::CData::vfunc_3 (23 bytes)
namespace lift_0063E870 {
// @name AdvXMLParser::CData::vfunc_3
// @class AdvXMLParser::CData
// @summary Auto-lifted identical-shape clone of 0x0063E180 (AdvXMLParser::Text::vfunc_3).
namespace lift_0063E180 {
extern uint32_t ext_004701E0(void* self, uint32_t arg);

// @name AdvXMLParser::Text::vfunc_3
// @class AdvXMLParser::Text
// @summary Returns true when the argument equals 3; otherwise forwards the call (same args) to AnimatableTransform::vfunc_13_off_C.
// @field none (this function does not read or write any member of self)
uint32_t fn_0063E870(void* self, uint32_t arg) {
    if (arg == 4) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E870
