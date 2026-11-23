// Lifted C++ translation unit: lifted/NMData/EffectorGroupData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE68;
extern "C" const char mem_00972450[];
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_0093BF0C[];
// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Constructs a std::string in the caller's hidden return buffer from the C string pointed to by mem_00A9EE68; this is never read (thiscall, one stack arg, ret 4).
std::string* fn_0060D4D0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE68);
    return out;
}

// [0x0060D500] NMData::EffectorGroupData::vfunc_20 (157 bytes)
// @name NMData::EffectorGroupData::vfunc_20
// @class NMData::EffectorGroupData
// @summary Builds the string "<prefix>" + this->field_0x04 + "<suffix>" into the caller's hidden return buffer (thiscall, two stack args, ret 8; the second stack arg is never read).
// @field NMData::EffectorGroupData +0x04 std::string field_0x04
std::string* fn_0060D500(void* self, std::string* out, int unused) {
    (void)unused;
    auto* name = reinterpret_cast<std::string*>(static_cast<unsigned char*>(self) + 0x04);
    std::string prefix(mem_00972450);
    std::string head = prefix + *name;
    new (out) std::string(head + std::string(mem_0093BF0C));
    return out;
}

// [0x0060D3A0] NMData::EffectorGroupData::vfunc_22 (53 bytes)
namespace lift_0060D3A0 {
// Base-class copy helper at 0x0060C530 (NMData::EffectorBaseData::vfunc_21).
extern void ext_0060C530(void* self, void* src);
// String-property copy helper at 0x004C1B50 (127 bytes). Original ABI is thiscall
// with a stack-allocated receiver and three stack args; modelled as
// (destination, source value, property key), matching the EffectorBaseData helper.
extern void ext_004C1B50(void* dst, const void* value, const char* key);
// Property-key string literal "m_childEffectorNames" in .rdata.
extern int mem_009723D4;

// @name NMData::EffectorGroupData::vfunc_22
// @class NMData::EffectorGroupData
// @summary Copies the base EffectorBaseData properties from src into self, then copies the m_childEffectorNames string property.
// @field NMData::EffectorGroupData +0x44 undefined field_0x44
void fn_0060D3A0(void* self, void* src, void* arg2, void* arg3) {
    // arg2 and arg3 are forwarded to the base copy in the original ABI but are
    // not consumed by the modelled helper; they are ignored here.
    (void)arg2;
    (void)arg3;

    // Base-class property copy (m_name, m_jointName).
    ext_0060C530(self, src);

    // Copy m_childEffectorNames: dst = self + 0x44, value = src + 0x44.
    uint8_t* dst = static_cast<uint8_t*>(self);
    uint8_t* from = static_cast<uint8_t*>(src);
    ext_004C1B50(dst + 0x44, from + 0x44,
                 reinterpret_cast<const char*>(&mem_009723D4));
}
} // namespace lift_0060D3A0
