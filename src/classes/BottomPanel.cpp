// Decompiled translation unit: src/classes/BottomPanel.cpp

extern "C" void ext_006A5FE6();
extern "C" void ext_006A5FE0();
extern "C" void ext_006A5FDA();
extern "C" void ext_00465B40();

// [0x00407750] BottomPanel::vfunc_81 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407750(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_006A5FE6
        push edi
        push ebx
        mov ecx, esi
        call ext_006A5FE0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x198]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x1ec]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x240]
        call ext_006A5FDA
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

extern "C" void ext_006A5E00();
extern "C" void ext_006A600A();
extern "C" int mem_00925694;
extern "C" int mem_00925654;
extern "C" int mem_00925650;

// [0x00407990] BottomPanel::vfunc_66 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407990(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        push 0
        mov edi, ecx
        mov eax, dword ptr [edi + 0xd8]
        push 0x407
        push eax
        call ebx
        mov ecx, dword ptr [edi + 0x148]
        push esi
        push 0
        push 0x407
        push ecx
        call ebx
        cmp dword ptr [esi + 4], 0x102
        jne short L_else
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ebp, eax
        test ebp, ebp
        je short L_else
        mov edx, dword ptr [ebp + 0x20]
        push edx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        cmp eax, edi
        jne short L_else
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebp + 0x20]
        push eax
        push ecx
        push 0x102
        push edx
        call ebx
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 4
L_else:
        push esi
        mov ecx, edi
        call ext_006A600A
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00407890] BottomPanel::vfunc_63 (247 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00407890(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x417, p + 0x198);
    ddx(a1, 0x443, (void*)*(int*)(p + 0x2e8));
    ddx(a1, 0x419, p + 0x294);
    ddx(a1, 0x444, (void*)*(int*)(p + 0x2f4));
    ddx(a1, 0x41c, p + 0x1ec);
    ddx(a1, 0x441, (void*)*(int*)(p + 0x2ec));
    ddx(a1, 0x41d, p + 0x240);
    ddx(a1, 0x442, (void*)*(int*)(p + 0x2f0));
    ddx(a1, 0x49d, p + 0x2f8);
    ddx(a1, 0x4a3, p + 0x34c);
    ddx(a1, 0x4a8, p + 0x3a0);
    ddx(a1, 0x4a5, p + 0x3f4);
    ddx(a1, 0x4a4, p + 0x448);
}
