// Decompiled translation unit: src/classes/RigEditorAddRenameDialog.cpp

// [0x0044FD90] RigEditorAddRenameDialog::vfunc_63 (151 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0044FD90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4f1, p + 0xd4);
    ddx(a1, 0x4f2, p + 0x128);
    ddx(a1, 0x4f3, p + 0x17c);
    ddx(a1, 0x81b5, p + 0x1d0);
    ddx(a1, 0x81b6, p + 0x224);
    ddx(a1, 0x4f0, p + 0x278);
    ddx(a1, 0x1, p + 0x2cc);
    ddx(a1, 0x2, p + 0x340);
}

// [0x0044FE30] RigEditorAddRenameDialog::vfunc_89 (214 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A6E9E();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_0044FE30(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        push edi
        mov edi, ecx
        je L_else
        push 0x0
        push 0xa2e4d8
        push 0xa2e034
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e474
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e01c
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_else
    L_then:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x3bc]
        jmp L_join
    L_else:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x3b4]
    L_join:
        test eax, eax
        jne L_nonnull
        pop edi
        pop esi
        ret 0xc
    L_nonnull:
        mov eax, dword ptr [eax+0x4]
        pop edi
        pop esi
        ret 0xc
    }
}
