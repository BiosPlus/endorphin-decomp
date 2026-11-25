// Lifted C++ translation unit: lifted/NMData/SecondaryTwistAndSwingConstraint.cpp
#include "lift_compat.h"
#include <cstring>
extern "C" void ext_00661650(void* self);
extern "C" void ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D750(void* self, void* owner);

#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D750(void* self, void* owner);
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_00611830(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x159) {
        ext_00661650(arg1);
    } else {
        ext_0058F6B0(self, arg1, arg2);
    }
    return arg1;
}

// [0x0061F990] sub_0061F990 (102 bytes)
namespace lift_0061F990 {
extern uint32_t ext_005DF1F0(void* self, DWORD arg2);
extern void* ext_0061EFD0(void* dst, DWORD value);
extern void* ext_0061EFF0(void* dst, DWORD value);
extern void* ext_0061F010(void* dst, DWORD value);

// @name NMData::SecondaryTwistAndSwingConstraint::vfunc_15
// @class NMData::SecondaryTwistAndSwingConstraint
// @summary Dispatches on arg2 (0x33B, 0x33E, 0x356) to one of three helpers, otherwise forwards to AnimatableTransform::vfunc_15; always returns self.
void* fn_0061F990(void* self, DWORD arg2) {
    // The original passes the live ECX register at entry as the helper's
    // value argument; that register is not recoverable in portable C++.
    // Zero is used here as a placeholder.
    DWORD value = 0;

    if (arg2 == 0x33B) {
        ext_0061EFF0(self, value);
    } else if (arg2 == 0x33E) {
        ext_0061F010(self, value);
    } else if (arg2 == 0x356) {
        ext_0061EFD0(self, value);
    } else {
        ext_005DF1F0(self, arg2);
    }
    return self;
}
} // namespace lift_0061F990
