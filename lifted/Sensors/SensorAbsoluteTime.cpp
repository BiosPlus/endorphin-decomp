// Lifted C++ translation unit: lifted/Sensors/SensorAbsoluteTime.cpp
#include "lift_compat.h"
#include <cstdint>
// Base-class destructor body (0x005FF040), invoked with `this` in ECX.
extern "C" void ext_005FF040(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Used as the heap-free step of the scalar deleting destructor; takes one pointer argument.
extern "C" void ext_006A5C5C(void* p);
// Vtable installed at the start of the destructor (intermediate class vtable, 0x00976C34).
extern "C" char mem_00976C34[];

// [0x006204A0] Sensors::SensorAbsoluteTime::vfunc_0 (36 bytes)
// @name Sensors::SensorAbsoluteTime::vfunc_0
// @class Sensors::SensorAbsoluteTime
// @summary Scalar deleting destructor: resets the vptr, runs the base destructor, frees the object when flags bit 0 is set, and returns this.
// @field Sensors::SensorAbsoluteTime +0x00 void* field_0x00 (vtable pointer)
void* __thiscall fn_006204A0(void* self, uint8_t flags) {
    auto* s = reinterpret_cast<char*>(self);

    // Install the vtable for this stage of the destruction chain.
    *reinterpret_cast<void**>(s) = reinterpret_cast<void*>(mem_00976C34);

    ext_005FF040(self);

    if (flags & 0x1) {
        ext_006A5C5C(self);
    }

    return self;
}
