// Decompiled translation unit: src/Sensors/SensorAbsoluteHorizontalVelocity.cpp

#include <math.h>

// [0x005FF1D0] Sensors::SensorAbsoluteHorizontalVelocity::vfunc_14 (13 bytes)
extern "C" void ext_00627280();

extern "C" void* __fastcall fn_005FF1D0(void* self) {
    ext_00627280();
    return (char*)self + 0x30;
}

// [0x00627390] Sensors::SensorAbsoluteHorizontalVelocity::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_00627390(void* self, int edx_unused, int idx) {
    ext_00627280();
    return ((float*)((char*)self + 0x30))[idx];
}

// [0x006272D0] Sensors::SensorAbsoluteHorizontalVelocity::vfunc_17 (47 bytes)
extern "C" float __fastcall fn_006272D0(void* self) {
    ext_00627280();
    return sqrtf(*(float*)((char*)self + 0x30) * *(float*)((char*)self + 0x30)
               + *(float*)((char*)self + 0x38) * *(float*)((char*)self + 0x38));
}
