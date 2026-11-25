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

// [0x006410D0]
namespace lift_006410D0 {
// @name AdvXMLParser::Document::vfunc_5
// @class AdvXMLParser::Document
// @summary Serializes the XML declaration header using version/encoding strings, appends a newline, and delegates to NodeContainer::vfunc_5.
// @field AdvXMLParser::Document +0x3C std::string field_0x3C
// @field AdvXMLParser::Document +0x58 std::string field_0x58


extern void __thiscall ext_00640940(void* self);
extern void __thiscall ext_00640EE0(void* self, uint32_t arg);

extern uint32_t mem_00924ED0;
extern uint32_t mem_00924FD8;

extern void __thiscall fn_006410D0(void* self, void* ctx) {
    auto* doc = static_cast<uint8_t*>(self);
    auto* out = static_cast<uint8_t*>(ctx);

    using AppendCStrFn = void* (__thiscall*)(void*, const char*);
    using AppendStrFn = void* (__thiscall*)(void*, const void*);

    auto append_cstr = reinterpret_cast<AppendCStrFn>(static_cast<uintptr_t>(mem_00924ED0));
    auto append_str = reinterpret_cast<AppendStrFn>(static_cast<uintptr_t>(mem_00924FD8));

    auto get_str = [out]() -> void* {
        return *reinterpret_cast<void**>(out + 0x08);
    };

    out[0x11] = 0;
    append_cstr(get_str(), reinterpret_cast<const char*>(0x0097CD6C));

    out[0x11] = 0;
    append_str(get_str(), doc + 0x3C);

    out[0x11] = 0;
    append_cstr(get_str(), reinterpret_cast<const char*>(0x0097CD5C));

    out[0x11] = 0;
    append_str(get_str(), doc + 0x58);

    out[0x11] = 0;
    append_cstr(get_str(), reinterpret_cast<const char*>(0x0097CD58));

    ext_00640940(ctx);
    ext_00640EE0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ctx)));
}
} // namespace lift_006410D0
