// Decompiled translation unit: src/Sensors/SensorAbsoluteVelocityAz.cpp

#include <math.h>

extern "C" void ext_00627280();

// [0x00627350] Sensors::SensorAbsoluteVelocityAz::vfunc_17 (31 bytes)
extern "C" float __fastcall fn_00627350(void* self) {
    ((void (__fastcall*)(void*))ext_00627280)(self);
    float a = *(float*)((char*)self + 0x38);
    float b = *(float*)((char*)self + 0x30);
    return (float)atan2((double)a, (double)b);
}
