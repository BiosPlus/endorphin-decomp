// Decompiled translation unit: src/Sensors/SensorAbsoluteHorizontalVelocity.cpp

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
