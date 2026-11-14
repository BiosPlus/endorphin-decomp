// Decompiled translation unit: src/classes/RigManager.cpp

// [0x004966A0] RigManager::vfunc_14 (75 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_004952F0();
extern "C" void ext_00496220();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void __fastcall fn_004966A0(void* self) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x14e
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        je L_eq
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_eq:
        call ext_00496220
        add esi, 0x18
        push esi
        call ext_004952F0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
