// Decompiled translation unit: src/NMData/TaskManager.cpp

extern "C" void ext_0050D7C0();

// [0x0050D8B0] NMData::TaskManager::vfunc_1_off_8 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050D8B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0xF8 // add ecx, -0x8
        call ext_0050D7C0
        ret 0x8
    }
}
