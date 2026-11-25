// Lifted C++ translation unit: lifted/AdvXMLParser/Attribute.cpp
#include "lift_compat.h"

// [0x0063E220] AdvXMLParser::Attribute::vfunc_3 (23 bytes)
namespace lift_0063E220 {
// @name AdvXMLParser::Attribute::vfunc_3
// @class AdvXMLParser::Attribute
// @summary Auto-lifted identical-shape clone of 0x0063E180 (AdvXMLParser::Text::vfunc_3).
namespace lift_0063E180 {
extern uint32_t ext_004701E0(void* self, uint32_t arg);

// @name AdvXMLParser::Text::vfunc_3
// @class AdvXMLParser::Text
// @summary Returns true when the argument equals 3; otherwise forwards the call (same args) to AnimatableTransform::vfunc_13_off_C.
// @field none (this function does not read or write any member of self)
uint32_t fn_0063E220(void* self, uint32_t arg) {
    if (arg == 2) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E220

// [0x00640F50]
namespace lift_00640F50 {
// @name AdvXMLParser::Attribute::vfunc_5
// @class AdvXMLParser::Attribute
// @summary Serializes an XML attribute as name="value" into the output context string and recurses into child nodes.
// @field AdvXMLParser::Attribute +0x04 std::string name


void __thiscall ext_00640EE0(void* self, uint32_t arg);
void* (__thiscall* mem_00924FD8)(void* self, const void* str);
void* (__thiscall* mem_00924ED0)(void* self, const char* cstr);

void __thiscall fn_00640F50(void* self, uint32_t arg) {
    uint8_t* ctx = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(arg));
    uint8_t* attr = static_cast<uint8_t*>(self);

    void* out_str = *reinterpret_cast<void**>(ctx + 0x08);
    ctx[0x11] = 0;
    mem_00924FD8(out_str, attr + 0x04);

    out_str = *reinterpret_cast<void**>(ctx + 0x08);
    ctx[0x11] = 0;
    mem_00924ED0(out_str, reinterpret_cast<const char*>(0x0097CD4C));

    ext_00640EE0(self, arg);

    out_str = *reinterpret_cast<void**>(ctx + 0x08);
    ctx[0x11] = 0;
    mem_00924ED0(out_str, reinterpret_cast<const char*>(0x0092B4A0));
}
} // namespace lift_00640F50
