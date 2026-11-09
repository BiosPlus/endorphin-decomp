// Decompiled translation unit: src/Sensors/SensorAbsoluteShoulderAlpha.cpp

extern "C" void ext_006293D0();

// [0x00629430] Sensors::SensorAbsoluteShoulderAlpha::vfunc_17 (13 bytes)
extern "C" float __fastcall fn_00629430(void* self) {
    ext_006293D0();
    return *(float*)((char*)self + 0x30);
}

// [0x00629410] Sensors::SensorAbsoluteShoulderAlpha::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_00629410(void* self, int edx_unused, int idx) {
    ext_006293D0();
    return *(float*)((char*)self + 0x30 + idx * 4);
}
