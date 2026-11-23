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
