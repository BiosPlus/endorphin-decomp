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

// [0x0063E670] AdvXMLParser::CData::vfunc_1 (33 bytes)
namespace lift_0063E670 {
// @name AdvXMLParser::CData::vfunc_1
// @class AdvXMLParser::CData
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
// @field AdvXMLParser::CData +0x20 DWORD field_0x20
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_0063E670(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x24;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_0063E670
