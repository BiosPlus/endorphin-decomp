// Decompiled translation unit: src/classes/RotateTool.cpp

// [0x00546760] RotateTool::vfunc_29 (31 bytes)
extern "C" void ext_005528A0();

extern "C" __declspec(naked) void __fastcall fn_00546760(void* self) {
    __asm {
        cmp byte ptr [ecx + 0xe4], 0x0
        je short not_set
        add ecx, 0xb8
        jmp ext_005528A0
    not_set:
        add ecx, 0x98
        jmp ext_005528A0
    }
}

// [0x00546780] RotateTool::vfunc_28 (92 bytes)
extern "C" void ext_00552860();

extern "C" __declspec(naked) void __fastcall fn_00546780(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp eax, 0x5
        push esi
        mov esi, ecx
        jne short not_five
        xor al, al
        mov byte ptr [esi + 0xe4], al
        mov byte ptr [esi + 0xe5], al
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        pop esi
        ret 0x8
    not_five:
        cmp byte ptr [esi + 0xe4], 0x0
        push eax
        je short not_flag
        lea ecx, [esi + 0xb8]
        call ext_00552860
        pop esi
        ret 0x8
    not_flag:
        lea ecx, [esi + 0x98]
        call ext_00552860
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        mov ecx, esi
        call edx
        pop esi
        ret 0x8
    }
}
