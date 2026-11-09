// Decompiled translation unit: src/Sensors/SensorAbsoluteOrientation.cpp

// [0x006274F0] Sensors::SensorAbsoluteOrientation::vfunc_15 (29 bytes)
extern "C" void ext_00647F20();

typedef void (__thiscall *SubFn)(void* self, void* arg);

extern "C" void* __fastcall fn_006274F0(char* self) {
    char* a = *(char**)(self + 0x28);
    char* b = *(char**)(a + 0x158);
    char* c = *(char**)(b + 0xac);
    void* arg = self + 0x30;
    ((SubFn)&ext_00647F20)(c, arg);
    return arg;
}
