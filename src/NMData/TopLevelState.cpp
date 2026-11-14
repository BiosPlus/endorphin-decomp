// Decompiled translation unit: src/NMData/TopLevelState.cpp

// [0x004EBE10] NMData::TopLevelState::vfunc_1 (20 bytes)
extern "C" void ext_004EBC80();

extern "C" __declspec(naked) void __fastcall fn_004EBE10(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 4]
        lea eax, [ecx + 0x14c]
        push eax
        push edx
        call ext_004EBC80
        ret 4
    }
}

// [0x004EBD50] NMData::TopLevelState::vfunc_3 (189 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0049DBF0();
extern "C" void ext_00640110();
extern "C" void ext_006826D0();
extern "C" void ext_00682860();
extern "C" void ext_006828F0();
extern "C" int mem_00B5A0B8;
extern "C" int mem_00AA23C8;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_004EBD50(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88ed68
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        cmp dword ptr [mem_00B5A0B8], 0x0
        push edi
        mov edi, ecx
        je L_else
        push ebx
        push esi
        lea ecx, [esp + 0xc]
        call ext_00682860
        lea esi, [edi + 0x14c]
        push esi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x38], 0x0
        call ext_006826D0
        mov eax, dword ptr [mem_00AA23C8]
        mov ebx, dword ptr [esp + 0x3c]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, esi
        mov dword ptr [esp + 0x3c], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00427550
        push ebx
        mov ecx, edi
        call ext_0049DBF0
        lea ecx, [esp + 0xc]
        mov esi, eax
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_006828F0
        mov eax, esi
        pop esi
        pop ebx
        pop edi
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    L_else:
        mov ecx, dword ptr [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_0049DBF0
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}
