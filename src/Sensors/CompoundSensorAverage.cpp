// Decompiled translation unit: src/Sensors/CompoundSensorAverage.cpp

// [0x0063DFD0] Sensors::CompoundSensorAverage::vfunc_14 (13 bytes)
extern "C" void ext_0063DF00();

extern "C" void* __fastcall fn_0063DFD0(char* self) {
    ext_0063DF00();
    return self + 0x38;
}

// [0x0063DFE0] Sensors::CompoundSensorAverage::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_0063DFE0(char* self, int edx_unused, int idx) {
    ext_0063DF00();
    return *(float*)(self + 0x38 + idx * 4);
}
