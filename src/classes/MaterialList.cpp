// Decompiled translation unit: src/classes/MaterialList.cpp

extern "C" void ext_0052AF80();

// [0x0052ED30] MaterialList::vfunc_1 (15 bytes)
extern "C" void __fastcall fn_0052ED30(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *Callee)(int, int);
    ((Callee)ext_0052AF80)(a1, 0);
}

extern "C" int mem_00A9F084;
extern "C" int mem_00924FE4;

// [0x0052ED00] MaterialList::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0052ED00(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F084]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0052A940] MaterialList::vfunc_3 (315 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0052A1C0();
extern "C" void ext_005329A0();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_006404E0();
extern "C" int mem_00A9F838;
extern "C" int mem_00925134;
extern "C" int mem_00A9F06C;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0052A940(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        mov eax, dword ptr [mem_00A9F838]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x44]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, ebp
        call ext_00640110
        push 0x939b2c
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        call ext_00427550
        mov ecx, dword ptr [esi + 0xc]
        mov ebx, dword ptr [ecx]
        lea eax, [esi + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x18], edi
L_a997:
        test edi, edi
        mov esi, dword ptr [eax + 0x4]
        je L_a9a2
        cmp edi, eax
        je L_a9a8
L_a9a2:
        call dword ptr [mem_00925134]
L_a9a8:
        cmp ebx, esi
        je L_aa64
        mov ecx, dword ptr [mem_00A9F06C]
        push ecx
        mov ecx, ebp
        call ext_006404E0
        test edi, edi
        mov esi, eax
        mov dword ptr [esp + 0x10], esi
        jne L_a9ce
        call dword ptr [mem_00925134]
L_a9ce:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_a9d9
        call dword ptr [mem_00925134]
L_a9d9:
        mov edx, dword ptr [mem_00A9F838]
        push edx
        mov ecx, esi
        lea ebp, [ebx + 0xc]
        call ext_00640110
        mov ecx, ebp
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0
        call ext_00640270
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_00924FF4]
        cmp ebx, dword ptr [edi + 0x4]
        jne L_aa39
        call dword ptr [mem_00925134]
L_aa39:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        lea ecx, [ebx + 0x28]
        call ext_005329A0
        lea ecx, [esp + 0x18]
        call ext_0052A1C0
        mov ebx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x4c]
        mov eax, dword ptr [esp + 0x14]
        jmp L_a997
L_aa64:
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 0x4
    }
}
