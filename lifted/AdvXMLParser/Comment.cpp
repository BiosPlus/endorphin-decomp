// Lifted C++ translation unit: lifted/AdvXMLParser/Comment.cpp
#include "lift_compat.h"

// [0x00640D00]
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

extern void __thiscall fn_00640D00(void* self, void* ctx) {
    uint8_t* comment = static_cast<uint8_t*>(self);
    uint8_t* out = static_cast<uint8_t*>(ctx);

    ext_00640CB0(out);

    auto append_cstr = reinterpret_cast<StringAppendCStrFn>(mem_00924ED0);
    auto append_str = reinterpret_cast<StringAppendStrFn>(mem_00924FD8);

    out[0x11] = 0;
    append_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x0097CD2C));

    out[0x11] = 0;
    append_str(*reinterpret_cast<void**>(out + 0x08), comment + 0x24);

    out[0x11] = 0;
    append_cstr(*reinterpret_cast<void**>(out + 0x08), reinterpret_cast<const char*>(0x0097CD28));

    ext_00640940(out);
    ext_00640930(out);
}
} // namespace lift_00640D00
