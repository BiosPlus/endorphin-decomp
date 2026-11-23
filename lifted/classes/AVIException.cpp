// Lifted C++ translation unit: lifted/classes/AVIException.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00401DB0] AVIException::vfunc_0 (36 bytes)
namespace lift_00401DB0 {
extern void ext_00401BB0(void* self);
extern void ext_006A5C5C(void* p);
extern char mem_00928F28[];

// @name AVIException::vfunc_0
// @class AVIException
// @summary Auto-lifted identical-shape clone of 0x006204A0 (Sensors::SensorAbsoluteTime::vfunc_0).
// @field AVIException +0x0 void* field_0x00 (vtable pointer)
void* __thiscall fn_00401DB0(void* self, uint8_t flags) {
    auto* s = reinterpret_cast<char*>(self);

    // Install the vtable for this stage of the destruction chain.
    *reinterpret_cast<void**>(s) = reinterpret_cast<void*>(mem_00928F28);

    ext_00401BB0(self);

    if (flags & 0x1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_00401DB0
