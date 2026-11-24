// Lifted C++ translation unit: lifted/NMData/InertialBodyData.cpp
#include "lift_compat.h"

// [0x005CE760] NMData::InertialBodyData::vfunc_14 (64 bytes)
namespace lift_005CE760 {
extern void ext_0046F7D0(void* a);
extern void __thiscall ext_00661650(void* self, void* p);

// @name NMData::InertialBodyData::vfunc_14
// @class NMData::InertialBodyData
// @summary If id == 0x9C, forwards this+0x24 to ext_00661650 on a; if id == 0xB7, forwards this to it; otherwise calls ext_0046F7D0(a). Returns a.
extern void* __thiscall fn_005CE760(void* self, void* a, int32_t id) {
    if (id == 0x9C) {
        void* p = static_cast<unsigned char*>(self) + 0x24;
        ext_00661650(a, p);
    } else if (id == 0xB7) {
        ext_00661650(a, self);
    } else {
        ext_0046F7D0(a);
    }
    return a;
}
} // namespace lift_005CE760

// [0x005CF8D0] NMData::InertialBodyData::vfunc_15 (57 bytes)
namespace lift_005CF8D0 {
// Known callee 0x005CF4A0: sub_005CF4A0 (30B, not yet lifted). Called with (this, out).
extern void ext_005CF4A0(void* self, uint32_t* out);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name NMData::InertialBodyData::vfunc_15
// @class NMData::InertialBodyData
// @summary Writes into the output buffer via either the 0x00671F30 helper or the 0x005CF4A0 helper, depending on whether the flag argument equals 0x234; returns the output pointer.
uint32_t* fn_005CF8D0(void* self, uint32_t* out, uint32_t flag) {
    if (flag == 0x234) {
        ext_005CF4A0(self, out);
    } else {
        ext_00671F30(out);
    }
    return out;
}
} // namespace lift_005CF8D0
