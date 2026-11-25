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

// [0x00640DE0] AdvXMLParser::CData::vfunc_5 (87 bytes)
namespace lift_00640DE0 {
// @name AdvXMLParser::CData::vfunc_5
// @class AdvXMLParser::CData
// @summary Auto-lifted identical-shape clone of 0x00640D00 (AdvXMLParser::Comment::Generate).
// @field AdvXMLParser::CData +0x24 std::string m_text
namespace lift_00640D00 {
// @name AdvXMLParser::Comment::Generate
// @class AdvXMLParser::Comment
// @summary Serializes an XML comment node ("<!--" + text + "-->") to the output context.
// @field AdvXMLParser::Comment +0x24 std::string m_text


extern void __thiscall ext_00640CB0(void* ecx);
extern void __thiscall ext_00640940(void* ecx);
extern void __thiscall ext_00640930(void* ecx);

extern uint32_t mem_00924ED0;
extern uint32_t mem_00924FD8;

using StringAppendCStrFn = void* (__thiscall*)(void* self, const char* str);
using StringAppendStrFn = void* (__thiscall*)(void* self, const void* str);

extern void __thiscall fn_00640DE0(void* self, void* ctx) {
    uint8_t* comment = static_cast<uint8_t*>(self);
    uint8_t* out = static_cast<uint8_t*>(ctx);

    ext_00640CB0(out);

    auto append_cstr = reinterpret_cast<StringAppendCStrFn>(mem_00924ED0);
    auto append_str = reinterpret_cast<StringAppendStrFn>(mem_00924FD8);

    out[0x11] = 0;
    append_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x97CD40));

    out[0x11] = 0;
    append_str(*reinterpret_cast<void**>(out + 0x08), comment + 0x24);

    out[0x11] = 0;
    append_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x97CD3C));

    ext_00640940(out);
    ext_00640930(out);
}
} // namespace lift_00640D00
} // namespace lift_00640DE0
