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
