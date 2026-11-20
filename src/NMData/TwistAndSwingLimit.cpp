// Decompiled translation unit: src/NMData/TwistAndSwingLimit.cpp

// [0x0061F310] NMData::TwistAndSwingLimit::vfunc_15 (274 bytes)
extern "C" void ext_0061EE50();
extern "C" void ext_0061EE70();
extern "C" void ext_0061EE90();
extern "C" void ext_0061EEB0();
extern "C" void ext_0061EED0();
extern "C" void ext_0061EEF0();
extern "C" void ext_0061EF10();
extern "C" void ext_0061EF30();
extern "C" void ext_0061EF50();
extern "C" void ext_0061EF70();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_0061F310(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp+0xc]
        add eax, 0xfffffd5e
        cmp eax, 0xbb
        push esi
        mov dword ptr [esp+0x4], 0x0
        ja L_0061F40E
        movzx eax, byte ptr [eax + 0x61f450]
        jmp dword ptr [4*eax + 0x61f424]
    L_0061F33C:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EE50
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F351:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EE70
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F366:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EE90
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F37B:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EEB0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F390:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EED0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F3A5:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EEF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F3BA:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EF10
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F3CF:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EF30
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F3E4:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EF50
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F3F9:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EF70
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F40E:
        mov esi, dword ptr [esp+0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
