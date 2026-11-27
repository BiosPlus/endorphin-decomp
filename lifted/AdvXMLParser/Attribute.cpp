// Lifted C++ translation unit: lifted/AdvXMLParser/Attribute.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0063E220] AdvXMLParser::Attribute::vfunc_3 (23 bytes)
namespace lift_0063E220 {
// @name AdvXMLParser::Attribute::vfunc_3
// @class AdvXMLParser::Attribute
// @summary Auto-lifted identical-shape clone of 0x0063E940 (AdvXMLParser::Document::vfunc_3).
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
uint32_t fn_0063E220(void* self, uint32_t arg) {
    if (arg == 2) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E940
} // namespace lift_0063E220

// [0x00640F50] AdvXMLParser::Attribute::vfunc_5 (74 bytes)
namespace lift_00640F50 {
// Known callee 0x00640EE0: AdvXMLParser::NodeContainer::vfunc_5
extern void __thiscall ext_00640EE0(void* self, void* arg);

extern uint32_t mem_00924FD8;
extern uint32_t mem_00924ED0;
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00925134;

// std::string::operator=(const std::string&) and std::string::operator=(const char*)
using StringAssignStrFn = void* (__thiscall*)(void* self, const void* str);
using StringAssignCStrFn = void* (__thiscall*)(void* self, const char* str);

// @name AdvXMLParser::Attribute::vfunc_5
// @class AdvXMLParser::Attribute
// @summary Assigns this attribute's name into the string held at arg+0x08, clears arg+0x11, calls NodeContainer::vfunc_5(arg) on self, then assigns a constant string to the same string at arg+0x08.
// @field AdvXMLParser::Attribute +0x04 std::string name
void fn_00640F50(void* self, void* arg) {
    uint8_t* attr = static_cast<uint8_t*>(self);
    uint8_t* out = static_cast<uint8_t*>(arg);

    auto assign_str = reinterpret_cast<StringAssignStrFn>(mem_00924FD8);
    auto assign_cstr = reinterpret_cast<StringAssignCStrFn>(mem_00924ED0);

    out[0x11] = 0;
    assign_str(*reinterpret_cast<void**>(out + 0x08), attr + 0x04);

    out[0x11] = 0;
    assign_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x97CD4C));

    ext_00640EE0(attr, out);

    out[0x11] = 0;
    assign_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x92B4A0));

    // Metadata-only references: present in the original RDATA table, not dereferenced here.
    (void)&mem_00924FE8;
    (void)&mem_00924FF4;
    (void)&mem_00925134;
}
} // namespace lift_00640F50
