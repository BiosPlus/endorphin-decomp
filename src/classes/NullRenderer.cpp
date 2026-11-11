// Decompiled translation unit: src/classes/NullRenderer.cpp

extern "C" void ext_0065C5F0();
extern "C" void ext_006A6C87();
extern "C" int mem_00AF0BA0;
extern "C" int mem_00AF0B9C;

// [0x0053F570] NullRenderer::vfunc_118 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053F570(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0089682e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AF0BA0], al
        jne L_done
        or dword ptr [mem_00AF0BA0], eax
        mov ecx, offset mem_00AF0B9C
        mov dword ptr [esp + 8], 0
        call ext_0065C5F0
        push 0x0091aa90
        call ext_006A6C87
        add esp, 4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AF0B9C
        mov dword ptr fs:[0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x0052EE20] NullRenderer::vfunc_102 (139 bytes)
extern "C" void ext_00537A30();
extern "C" void ext_00537B10();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_0052EE20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x894cc6
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push 0x44
        call ext_006A5C62
        add esp, 0x4
        test esi, esi
        mov dword ptr [esp + 0x14], eax
        je L_52EE72
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je L_52EE97
        push esi
        mov ecx, eax
        call ext_00537B10
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    L_52EE72:
        test eax, eax
        mov dword ptr [esp + 0xc], 0x1
        je L_52EE97
        mov ecx, eax
        call ext_00537A30
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    L_52EE97:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    }
}
