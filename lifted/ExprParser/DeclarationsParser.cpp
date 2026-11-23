// Lifted C++ translation unit: lifted/ExprParser/DeclarationsParser.cpp
#include "lift_compat.h"

// [0x00672EC0]
namespace lift_00672EC0 {
extern void __thiscall ext_0040ECB0(void* self, uint32_t elem);

// @name ExprParser::DeclarationsParser::vfunc_7
// @class ExprParser::DeclarationsParser
// @summary Iterates over declarations vector at +0x4 and calls ext_0040ECB0 on each 0x20-byte element
// @field ExprParser::DeclarationsParser +0x8 uint32_t field_0x08
// @field ExprParser::DeclarationsParser +0xC uint32_t field_0x0C
extern void __thiscall fn_00672EC0(void* self, void* arg0) {
    uint32_t it = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x8);
    uint32_t end = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0xC);
    while (it != end) {
        ext_0040ECB0(arg0, it);
        it += 0x20;
        end = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0xC);
    }
}
} // namespace lift_00672EC0
