// Decompiled translation unit: src/NMData/HingeLimit.cpp

extern "C" void ext_005B1870();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

// [0x006120D0] NMData::HingeLimit::vfunc_0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006120D0(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0
        call ext_005B1870
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        test byte ptr [esp + 0x18], 0x1
        je L_0061211C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0061211C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0061F130] NMData::HingeLimit::vfunc_15 (232 bytes)
extern "C" void ext_0061ED50();
extern "C" void ext_0061ED70();
extern "C" void ext_0061ED90();
extern "C" void ext_0061EDB0();
extern "C" void ext_0061EDD0();
extern "C" void ext_0061EDF0();
extern "C" void ext_0061EE10();
extern "C" void ext_0061EE30();
extern "C" void ext_00671F30();
extern "C" __declspec(naked) void __fastcall fn_0061F130(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp+0xc]
        add eax, 0xfffffd55
        cmp eax, 0xc4
        push esi
        mov dword ptr [esp+0x4], 0x0
        ja L_0061F204
        movzx eax, byte ptr [eax + 0x61f23c]
        jmp dword ptr [4*eax + 0x61f218]
    L_0061F15C:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061ED50
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F171:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061ED70
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F186:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061ED90
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F19B:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EDB0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F1B0:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EDD0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F1C5:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EDF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F1DA:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EE10
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F1EF:
        mov esi, dword ptr [esp+0xc]
        push ecx
        push esi
        call ext_0061EE30
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0061F204:
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
