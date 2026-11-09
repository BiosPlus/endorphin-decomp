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

// [0x004BED30] NMData::EvolveEngineData::vfunc_6 (35 bytes)
extern "C" int mem_00A9EEA0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004BED30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EEA0]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
