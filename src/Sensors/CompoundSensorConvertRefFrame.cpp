// Decompiled translation unit: src/Sensors/CompoundSensorConvertRefFrame.cpp

extern "C" void ext_0063DE30();

// [0x0063DED0] Sensors::CompoundSensorConvertRefFrame::vfunc_14 (13 bytes)
extern "C" void* __fastcall fn_0063DED0(void* self) {
    ext_0063DE30();
    return (char*)self + 0x38;
}

// [0x0063DEE0] Sensors::CompoundSensorConvertRefFrame::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_0063DEE0(void* self, int edx_unused, int idx) {
    ext_0063DE30();
    return ((float*)((char*)self + 0x38))[idx];
}
