// Lifted C++ translation unit: lifted/NMData/TwistAndSwingLimit.cpp
#include "lift_compat.h"

// [0x0061F310]
namespace lift_0061F310 {
// @name NMData::TwistAndSwingLimit::vfunc_15
// @class NMData::TwistAndSwingLimit
// @summary Dispatches property/symbol ID to the corresponding TwistAndSwingLimit accessor or default zero initializer.

DWORD* ext_0061EE50(DWORD* dst, void* value);
DWORD* ext_0061EE70(DWORD* dst, void* value);
DWORD* ext_0061EE90(DWORD* dst, void* value);
DWORD* ext_0061EEB0(DWORD* dst, void* value);
DWORD* ext_0061EED0(DWORD* dst, void* value);
DWORD* ext_0061EEF0(DWORD* dst, void* value);
DWORD* ext_0061EF10(DWORD* dst, void* value);
DWORD* ext_0061EF30(DWORD* dst, void* value);
DWORD* ext_0061EF50(DWORD* dst, void* value);
DWORD* ext_0061EF70(DWORD* dst, void* value);
void ext_00671F30(uint32_t* out);

uint32_t* __thiscall fn_0061F310(void* self, uint32_t* out, uint32_t id) {
    switch (id) {
    case 0x2A2: ext_0061EF70(out, self); break;
    case 0x2A6: ext_0061EF10(out, self); break;
    case 0x2F7: ext_0061EEB0(out, self); break;
    case 0x33C: ext_0061EE70(out, self); break;
    case 0x33F: ext_0061EE90(out, self); break;
    case 0x341: ext_0061EF30(out, self); break;
    case 0x345: ext_0061EEF0(out, self); break;
    case 0x357: ext_0061EF50(out, self); break;
    case 0x35B: ext_0061EE50(out, self); break;
    case 0x35D: ext_0061EED0(out, self); break;
    default:    ext_00671F30(out);       break;
    }
    return out;
}
} // namespace lift_0061F310
