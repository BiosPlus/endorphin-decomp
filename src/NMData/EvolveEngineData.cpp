// Decompiled translation unit: src/NMData/EvolveEngineData.cpp

// [0x004FDA70] NMData::EvolveEngineData::vfunc_7 (21 bytes)
extern "C" void ext_004FD870();
extern "C" void ext_0050E990();

extern "C" __declspec(naked) void __fastcall fn_004FDA70(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, ecx
        lea ecx, [edx + 0xc]
        call ext_004FD870
        lea ecx, [edx + 0x2c]
        call ext_0050E990
        ret 0x4
    }
}
