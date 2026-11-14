// Decompiled translation unit: src/classes/VMCActionApp.cpp

// [0x00464740] VMCActionApp::vfunc_23 (22 bytes)
extern "C" void ext_00439FD0();
extern "C" void ext_006A69A6();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_00464740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00439FD0
        mov ecx, esi
        pop esi
        jmp ext_006A69A6
    }
}

// [0x00465010] VMCActionApp::vfunc_26 (148 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469530();
extern "C" void ext_006799F0();
extern "C" void ext_00679A30();
extern "C" void ext_00679A40();
extern "C" void ext_006A69B8();
extern "C" void ext_006A6C87();
extern "C" int mem_008812AE;
extern "C" int mem_00AD6594;
extern "C" int mem_00AD6590;
extern "C" int mem_009166C0;

extern "C" __declspec(naked) void __fastcall fn_00465010(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008812AE
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00AD6594], al
        push esi
        mov esi, ecx
        jne short skip_init_00465010
        or dword ptr [mem_00AD6594], eax
        mov ecx, offset mem_00AD6590
        mov dword ptr [esp + 0Ch], 0
        call ext_006799F0
        push offset mem_009166C0
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0Ch], 0FFFFFFFFh
skip_init_00465010:
        mov ecx, offset mem_00AD6590
        call ext_00679A30
        push 0
        push 4
        call ext_00465B30
        mov ecx, eax
        call ext_00469530
        mov ecx, offset mem_00AD6590
        call ext_00679A40
        mov eax, dword ptr [esp + 14h]
        push eax
        mov ecx, esi
        call ext_006A69B8
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0Ch
        ret 4
    }
}

extern "C" void ext_004650B0();
extern "C" void ext_00464710();
extern "C" void ext_006A6A00();
extern "C" int mem_00ACDB40;

// [0x00465850] VMCActionApp::vfunc_24 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465850(void* self) {
    __asm {
        cmp     dword ptr [mem_00ACDB40], 0
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0Ch]
        mov     esi, ecx
        je      short L_done
        push    edi
        call    ext_004650B0
        push    edi
        mov     ecx, esi
        call    ext_00464710
    L_done:
        push    edi
        mov     ecx, esi
        call    ext_006A6A00
        pop     edi
        pop     esi
        ret     4
    }
}

// [0x00465540] VMCActionApp::vfunc_22 (730 bytes)
extern "C" void ext_00426960();
extern "C" void ext_00426A00();
extern "C" void ext_0042F920();
extern "C" void ext_00435B50();
extern "C" void ext_0044B070();
extern "C" void ext_004616F0();
extern "C" void ext_00461C70();
extern "C" void ext_004652C0();
extern "C" void ext_004658A0();
extern "C" void ext_004675B0();
extern "C" void ext_0046FAD0();
extern "C" void ext_00504A70();
extern "C" void ext_00662F20();
extern "C" void ext_006A3F80();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5E72();
extern "C" void ext_006A6886();
extern "C" void ext_006A6892();
extern "C" void ext_006A6898();
extern "C" void ext_006A69DC();
extern "C" void ext_006A69E2();
extern "C" void ext_006A69E8();
extern "C" void ext_006A69EE();
extern "C" void ext_006A69F4();
extern "C" void ext_006A69FA();
extern "C" int mem_00924240;
extern "C" int mem_00924064;
extern "C" int mem_00924FE4;
extern "C" int mem_009251D8;
extern "C" int mem_00924FF0;
extern "C" int mem_00925238;
extern "C" int mem_00924FD4;
extern "C" int mem_0092568C;
extern "C" int mem_00ACDB40;
extern "C" int mem_00924FF4;
extern "C" int mem_00925668;
extern "C" __declspec(naked) void __fastcall fn_00465540(void* self) {
    __asm {
        push -1
        push 0x881361
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        push ebx
        push ebp
        push esi
        push edi
        push 0x939b3c
        push 0
        push 0
        mov esi, ecx
        call dword ptr [mem_00924240]
        call dword ptr [mem_00924064]
        mov ecx, esi
        call ext_006A69FA
        push 0x939b2c
        mov ecx, esi
        call ext_006A69F4
        push 0x939b08
        lea ecx, [esp+0x18]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi+0x68]
        push eax
        mov dword ptr [esp+0xbc], 0
        call dword ptr [mem_009251D8]
        add esp, 4
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_00925238]
        add esp, 4
        push 0x939b08
        mov ecx, 0xb58e00
        mov dword ptr [esi+0x68], eax
        call dword ptr [mem_00924FD4]
        push 0xa
        mov ecx, esi
        call ext_006A69EE
        push 0x6c
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp+0x10], edi
        test edi, edi
        mov byte ptr [esp+0xb8], 1
        je L_465626
        call ext_0044B070
        mov ebp, eax
        call ext_0042F920
        mov ebx, eax
        call ext_004658A0
        push ebp
        push ebx
        push eax
        push 0x83
        mov ecx, edi
        call ext_006A6898
        mov dword ptr [edi], 0x939484
        jmp L_465628
    L_465626:
        xor edi, edi
    L_465628:
        push 0x20
        mov byte ptr [esp+0xbc], 0
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+0x10], eax
        test eax, eax
        mov byte ptr [esp+0xb8], 2
        je L_465653
        mov ecx, eax
        call ext_004675B0
        jmp L_465655
    L_465653:
        xor eax, eax
    L_465655:
        push edi
        mov ecx, esi
        mov byte ptr [esp+0xbc], 0
        mov dword ptr [esi+0x58], eax
        call ext_006A69E8
        or ebp, -1
        push ebp
        call ext_006A3F80
        add esp, 4
        mov ecx, esi
        call ext_004652C0
        mov ecx, dword ptr [esi+0x4c]
        push ecx
        mov ecx, dword ptr [esi+0x20]
        call ext_006A5E72
        mov eax, dword ptr [esi+0x20]
        mov edx, dword ptr [eax+0x20]
        push edx
        call dword ptr [mem_0092568C]
        mov byte ptr [esi+0xa4], 1
        call ext_00662F20
        mov eax, dword ptr [mem_00ACDB40]
        mov edi, dword ptr [eax+0x100]
        lea ecx, [esp+0x30]
        call ext_00426960
        mov bl, 3
        push 0
        lea ecx, [esp+0x34]
        mov byte ptr [esp+0xbc], bl
        call ext_00426A00
        test al, al
        jne L_465700
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00435B50
        lea ecx, [esp+0x30]
        mov byte ptr [esp+0xb8], 0
        call ext_00504A70
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0xb8], ebp
        call dword ptr [mem_00924FF4]
        xor eax, eax
        jmp L_465801
    L_465700:
        push 0x1ca4
        push 0xad7cb8
        push 0xad7c9c
        lea ecx, [esp+0x80]
        call ext_004616F0
        push 0
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0xbc], 4
        call ext_00461C70
        test edi, edi
        je L_465745
        mov ecx, dword ptr [edi+0x20]
        push 0x105
        push 0
        push 0
        push ecx
        call dword ptr [mem_00925668]
    L_465745:
        lea ecx, [esp+0x4c]
        call ext_006A6886
        mov dword ptr [esp+0x4c], 0x93945c
        mov dword ptr [esp+0x70], esi
        lea edx, [esp+0x4c]
        push edx
        mov ecx, esi
        mov byte ptr [esp+0xbc], 5
        call ext_006A69E2
        lea eax, [esp+0x4c]
        push eax
        mov ecx, esi
        call ext_006A69DC
        test eax, eax
        mov byte ptr [esp+0xb8], 4
        lea ecx, [esp+0x4c]
        jne L_4657C5
        call ext_006A6892
        lea ecx, [esp+0x74]
        mov byte ptr [esp+0xb8], bl
        call ext_0046FAD0
        lea ecx, [esp+0x30]
        mov byte ptr [esp+0xb8], 0
        call ext_00504A70
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0xb8], ebp
        call dword ptr [mem_00924FF4]
        xor eax, eax
        jmp L_465801
    L_4657C5:
        call ext_006A6892
        lea ecx, [esp+0x74]
        mov byte ptr [esp+0xb8], bl
        call ext_0046FAD0
        lea ecx, [esp+0x30]
        mov byte ptr [esp+0xb8], 0
        call ext_00504A70
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0xb8], ebp
        call dword ptr [mem_00924FF4]
        mov eax, 1
    L_465801:
        mov ecx, dword ptr [esp+0xb0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xac
        ret
    }
}
