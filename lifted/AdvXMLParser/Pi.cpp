// Lifted C++ translation unit: lifted/AdvXMLParser/Pi.cpp
#include "lift_compat.h"

// [0x0063E6A0] AdvXMLParser::Pi::vfunc_3 (23 bytes)
namespace lift_0063E6A0 {
// @name AdvXMLParser::Pi::vfunc_3
// @class AdvXMLParser::Pi
// @summary Auto-lifted identical-shape clone of 0x0063E180 (AdvXMLParser::Text::vfunc_3).
namespace lift_0063E180 {
extern uint32_t ext_004701E0(void* self, uint32_t arg);

// @name AdvXMLParser::Text::vfunc_3
// @class AdvXMLParser::Text
// @summary Returns true when the argument equals 3; otherwise forwards the call (same args) to AnimatableTransform::vfunc_13_off_C.
// @field none (this function does not read or write any member of self)
uint32_t fn_0063E6A0(void* self, uint32_t arg) {
    if (arg == 7) {
        return 1;
    }
    // Original code stores eax (== arg) back to the argument slot before the tail jump,
    // which is a no-op, so the forwarded arguments are unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E180
} // namespace lift_0063E6A0

// [0x00640D60] sub_00640D60 (123 bytes)
namespace lift_00640D60 {
// Known callee 0x00640CB0: Unknown::IncrementAndFlushOnce (__thiscall, ecx = node).
extern void ext_00640CB0(void* self);
// Known callee 0x00640940: Unknown::AppendNewlineOnce (__thiscall, ecx = node).
extern void ext_00640940(void* self);
// Known callee 0x00640930: decrements counter at +0x0C, sets flag at +0x10 (__thiscall, ecx = node).
extern void ext_00640930(void* self);
// IAT slot for MSVCP80 basic_string<char>::operator+=(const char*); holds the runtime address.
extern uint32_t mem_00924ED0;
// IAT slot for MSVCP80 basic_string<char>::operator+=(const std::string&); holds the runtime address.
extern uint32_t mem_00924FD8;
// IAT slot for MSVCP80 basic_string<char>::operator+=(char); holds the runtime address.
extern uint32_t mem_00924EC0;
// Rdata string literals pushed by the original code (0x97CD38 and 0x97CD34).
// Their contents are not recovered here; they are referenced by address only.

// @name AdvXMLParser::Pi::vfunc_5
// @class AdvXMLParser::Pi
// @summary Appends the Pi's text pieces (literal, self string at +0x04, optional space + string at +0x24 when +0x38 is nonzero, closing literal) onto the string held by node+0x08, then runs the node's newline and counter helpers.
// @field AdvXMLParser::Pi +0x04 void* field_0x04
// @field AdvXMLParser::Pi +0x24 void* field_0x24
// @field AdvXMLParser::Pi +0x38 uint32_t field_0x38
// @field AdvXMLParser::Pi +0x08 void* field_0x08
// @field AdvXMLParser::Pi +0x11 uint8_t field_0x11
extern void __thiscall fn_00640D60(void* self, void* node) {
    using AppendCStrFn = void(__thiscall*)(void* str, const char* s);
    using AppendStrFn = void(__thiscall*)(void* str, const void* other);
    using AppendCharFn = void(__thiscall*)(void* str, char c);

    auto append_cstr = reinterpret_cast<AppendCStrFn>(static_cast<uintptr_t>(mem_00924ED0));
    auto append_str = reinterpret_cast<AppendStrFn>(static_cast<uintptr_t>(mem_00924FD8));
    auto append_char = reinterpret_cast<AppendCharFn>(static_cast<uintptr_t>(mem_00924EC0));

    ext_00640CB0(node);

    void* str = lift_field<void*>(node, 0x08);
    lift_field<uint8_t>(node, 0x11) = 0;
    append_cstr(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x97CD38)));

    str = lift_field<void*>(node, 0x08);
    lift_field<uint8_t>(node, 0x11) = 0;
    append_str(str, static_cast<uint8_t*>(self) + 0x04);

    if (lift_field<uint32_t>(self, 0x38) != 0) {
        str = lift_field<void*>(node, 0x08);
        lift_field<uint8_t>(node, 0x11) = 0;
        append_char(str, ' ');

        str = lift_field<void*>(node, 0x08);
        lift_field<uint8_t>(node, 0x11) = 0;
        append_str(str, static_cast<uint8_t*>(self) + 0x24);
    }

    str = lift_field<void*>(node, 0x08);
    lift_field<uint8_t>(node, 0x11) = 0;
    append_cstr(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x97CD34)));

    ext_00640940(node);
    ext_00640930(node);
}
} // namespace lift_00640D60
