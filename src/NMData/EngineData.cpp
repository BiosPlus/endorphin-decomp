// Decompiled translation unit: src/NMData/EngineData.cpp

// [0x004BA3B0] NMData::EngineData::vfunc_14 (131 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_004BA1D0();
extern "C" void ext_004BA200();
extern "C" void ext_0055DA20();
extern "C" void ext_00661680();

extern "C" __declspec(naked) void* __fastcall fn_004BA3B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0xa5
        push esi
        mov dword ptr [esp + 0x4], 0
        je L_a5
        sub eax, 0x3e
        je L_e3
        sub eax, 0x3
        je L_e6
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_e6:
        add ecx, 0x70
        push ecx
        call ext_004BA200
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_e3:
        add ecx, 0x60
        push ecx
        call ext_004BA1D0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_a5:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x4
        push ecx
        push 0x3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
