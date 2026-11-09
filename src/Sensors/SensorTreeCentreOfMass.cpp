// Decompiled translation unit: src/Sensors/SensorTreeCentreOfMass.cpp

extern "C" void ext_006298B0();

// [0x005FF1F0] Sensors::SensorTreeCentreOfMass::vfunc_14 (13 bytes)
extern "C" void* __fastcall fn_005FF1F0(void* self) {
    ext_006298B0();
    return (char*)self + 0x64;
}

// [0x00629A50] Sensors::SensorTreeCentreOfMass::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_00629A50(void* self, int edx_unused, int idx) {
    ext_006298B0();
    return ((float*)((char*)self + 0x64))[idx];
}
