// Lifted C++ translation unit: lifted/AdvXMLParser/Document.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_006408B0 {
extern void ext_00640840(uint32_t arg);

// @name AdvXMLParser::Document::vfunc_4
// @class AdvXMLParser::Document
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_006408B0(uint32_t arg) {
    ext_00640840(arg);
}
} // namespace lift_006408B0

// [0x0065F5E0] AdvXMLParser::Document::vfunc_1 (34 bytes)
namespace lift_0065F5E0 {
extern const char mem_00928B5D[];

// @name AdvXMLParser::Document::vfunc_1
// @class AdvXMLParser::Document
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_0065F5E0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00928B5D);
    return out;
}
} // namespace lift_0065F5E0

// [0x0063E940] AdvXMLParser::Document::vfunc_3 (23 bytes)
namespace lift_0063E940 {
// @name AdvXMLParser::Document::vfunc_3
// @class AdvXMLParser::Document
// @summary Auto-lifted identical-shape clone of 0x0063E180 (AdvXMLParser::Text::vfunc_3).
namespace lift_0063E180 {
extern uint32_t ext_004701E0(void* self, uint32_t arg);

// @name AdvXMLParser::Text::vfunc_3
// @class AdvXMLParser::Text
// @summary Returns true when the argument equals 3; otherwise forwards the call (same args) to AnimatableTransform::vfunc_13_off_C.
// @field none (this function does not read or write any member of self)
uint32_t fn_0063E940(void* self, uint32_t arg) {
    if (arg == 9) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E940
