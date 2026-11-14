// Decompiled translation unit: src/classes/AVIIO.cpp

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" int mem_00A9EE78;
extern "C" int mem_00924FE4;

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00401C30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE78]
        push esi
        mov esi, dword ptr [esp+0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp+0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x00402300] AVIIO::vfunc_20 (117 bytes)
extern "C" void ext_00403420();
extern "C" void ext_00553080();
extern "C" void ext_00661A30();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" void ext_0047B170();
extern "C" void ext_0056B670();
extern "C" int mem_00993828;
extern "C" int mem_0092520C;
extern "C" int mem_009575A8;

extern "C" __declspec(naked) void __fastcall fn_00402300(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi+64h]
        mov ecx, dword ptr [esi+420h]
        mov ebx, dword ptr [esi+68h]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        push edi
        fstp qword ptr [esp+0ch]
        call ext_00661A30
        fdivr qword ptr [esp+0ch]
        fimul dword ptr [esp+18h]
        call ext_006A6DE0
        mov edi, eax
        mov eax, dword ptr [esi+470h]
        mov ecx, dword ptr [eax+0c4h]
        sub edi, ebx
        lea ebx, [esi+5ch]
        push ecx
        mov ecx, ebx
        call ext_00553080
        mov ebx, dword ptr [ebx]
        cmp edi, ebx
        mov eax, dword ptr [esi+60h]
        jge short L_hi
        mov edi, ebx
        jmp short L_call
    L_hi:
        cmp edi, eax
        jle short L_call
        mov edi, eax
    L_call:
        mov ecx, dword ptr [esi+470h]
        push edi
        call ext_00403420
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0065CB50] AVIIO::vfunc_4 (328 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0063F750();
extern "C" void ext_00640110();
extern "C" void ext_006405C0();
extern "C" void ext_006408C0();
extern "C" void ext_00640AA0();
extern "C" void ext_006410D0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F8E8;
extern "C" int mem_00B58E14;
extern "C" int mem_00A9F524;
extern "C" int mem_00B53B30;
extern "C" int mem_00B58E00;
extern "C" int mem_00928B5D;
extern "C" int mem_0092F67C;
extern "C" int mem_008B2427;

extern "C" __declspec(naked) void __fastcall fn_0065CB50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push offset mem_008B2427
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x18]
        lea ecx, [esp+0x1c]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        mov dword ptr [esp+0xbc], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+0x3c]
        call ext_006405C0
        lea ecx, [esp+0x1c]
        mov byte ptr [esp+0xbc], 2
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp+0xb0]
        test eax, eax
        jne L_b1
        mov eax, offset mem_00B53B30
L_b1:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx+0xc]
        mov ecx, esi
        call eax
        cmp byte ptr [esp+0xc8], 0
        je L_end
        mov ecx, dword ptr [esp+0xb0]
        test ecx, ecx
        jne L_b2
        mov ecx, offset mem_00B53B30
L_b2:
        mov edx, dword ptr [mem_00A9F8E8]
        push edx
        call ext_00640110
        push 0x12
        push eax
        call ext_00640AA0
        add esp, 8
        cmp dword ptr [mem_00B58E14], 0
        je L_end
        mov ecx, dword ptr [esp+0xb0]
        test ecx, ecx
        jne L_b3
        mov ecx, offset mem_00B53B30
L_b3:
        mov eax, dword ptr [mem_00A9F524]
        push eax
        call ext_00640110
        mov ecx, offset mem_00B58E00
        mov dword ptr [esp+4], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+8]
        call ext_00427550
L_end:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx+0x14]
        mov ecx, esi
        call eax
        test al, al
        pop esi
        mov eax, offset mem_00928B5D
        jne L_c
        mov eax, offset mem_0092F67C
L_c:
        mov ecx, dword ptr [esp+0xc0]
        push 2
        push eax
        push ecx
        lea ecx, [esp+0x10]
        call ext_006408C0
        lea edx, [esp+4]
        push edx
        lea ecx, [esp+0x38]
        call ext_006410D0
        lea ecx, [esp+0x34]
        mov dword ptr [esp+0xb8], -1
        call ext_0063F750
        mov ecx, dword ptr [esp+0xb0]
        mov dword ptr fs:[0], ecx
        add esp, 0xbc
        ret 8
    }
}

// [0x00558080] AVIIO::vfunc_33 (316 bytes)
extern "C" __declspec(naked) void __fastcall fn_00558080(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        fild dword ptr [ebp+8]
        push ebx
        push esi
        push edi
        fstp dword ptr [esp+0x38]
        sub esp, 8
        fld dword ptr [esp+0x40]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        faddp st(1), st
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp+0x44]
        add esp, 8
        fld dword ptr [esp+0x3c]
        call ext_006A6DE0
        mov esi, 1
        mov edi, eax
        cmp edi, esi
        mov dword ptr [esp+0x3c], esi
        jl L_end
        mov ebx, dword ptr [ebp+0xc]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
        fld dword ptr [esp+0x38]
        sub esp, 8
        fidiv dword ptr [esp+0x44]
        fstp dword ptr [esp+0x3c]
        fld dword ptr [esp+0x3c]
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        fstp st(0)
        fld qword ptr [mem_009575A8]
        sub esp, 8
        fstp qword ptr [esp+8]
        fld dword ptr [esp+0x44]
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        fstp dword ptr [esp+0x4c]
        fld dword ptr [esp+0x4c]
        sub esp, 8
        fstp qword ptr [esp+8]
        fld dword ptr [esp+0x4c]
        fstp qword ptr [esp]
        call ext_0056B670
        fld dword ptr [esp+0x4c]
        add esp, 0x18
        sub esp, 8
        test al, al
        fstp qword ptr [esp]
        je L_else
        call dword ptr [mem_0092520C]
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        add esp, 8
        lea eax, [esp+0x3c]
        push eax
        jmp L_call
    L_else:
        call ext_006A6E92
        fstp dword ptr [esp+0x44]
        fld qword ptr [mem_009575A8]
        sub esp, 0x10
        fstp qword ptr [esp+0x10]
        fld dword ptr [esp+0x54]
        fstp qword ptr [esp+8]
        fld dword ptr [esp+0x4c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je L_next
        fld dword ptr [esp+0x3c]
        lea ecx, [esp+0x3c]
        push ecx
    L_call:
        mov ecx, ebx
        fstp dword ptr [esp+0x40]
        call ext_0047B170
    L_next:
        add esi, 1
        cmp esi, edi
        mov dword ptr [esp+0x3c], esi
        jle L_loop
    L_end:
        pop edi
        pop esi
        or eax, -1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x0065C6D0] AVIIO::vfunc_9 (146 bytes)
extern "C" void ext_00663110();
extern "C" void ext_00663470();
extern "C" void ext_00663DB0();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0065C6D0(void* self, int edx_unused, void* a1, bool a2) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        push    edi
        mov     esi, ecx
        call    ext_00663DB0
        add     esp, 4
        lea     ecx, [esp + 8]
        call    dword ptr [mem_00924FE8]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x10]
        push    1
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], 0
        call    edx
        cmp     byte ptr [esp + 0x38], 0
        je      L_else
        lea     eax, [esp + 8]
        push    eax
        push    edi
        call    ext_00663470
        jmp     L_end
    L_else:
        lea     ecx, [esp + 8]
        push    ecx
        push    edi
        call    ext_00663110
    L_end:
        add     esp, 8
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     8
    }
}

// [0x0065CCE0] AVIIO::vfunc_2 (912 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0053F5F0();
extern "C" void ext_005577A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0065C770();
extern "C" void ext_0065CCA0();
extern "C" void ext_00698240();
extern "C" void ext_00698390();
extern "C" void ext_006A0670();
extern "C" void ext_006A6DD2();
extern "C" void ext_00870E10();
extern "C" void ext_00870E30();
extern "C" void ext_008726F0();
extern "C" int mem_00A9F8E8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0065CCE0(void* self, int edx_unused, int a1, const char* a2, int a3) {
    __asm {
        push -1
        push 0x8b249d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x9c
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0xb4]
        push esi
        mov esi, dword ptr [esp+0xc0]
        test esi, esi
        push edi
        mov dword ptr [esp+0x10], ecx
        jne L_65CD2D
        mov eax, ebp
        lea edx, [eax+1]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_65CD20:
        mov cl, byte ptr [eax]
        add eax, 1
        test cl, cl
        jne L_65CD20
        sub eax, edx
        mov esi, eax
    L_65CD2D:
        lea ecx, [esp+0x58]
        call ext_00870E10
        push esi
        push ebp
        lea ecx, [esp+0x60]
        mov dword ptr [esp+0xbc], 0
        call ext_008726F0
        mov ebx, eax
        mov dword ptr [esp+0x18], ebx
        cmp dword ptr [ebx+0x78], 0
        mov byte ptr [esp+0xb4], 1
        mov edi, 0xb53b30
        je L_65CD68
        mov edi, dword ptr [ebx+0x78]
    L_65CD68:
        mov eax, dword ptr [mem_00A9F8E8]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_65CFBC
        cmp eax, 0xb53b30
        je L_65CFBC
        cmp eax, 0xb53ab0
        je L_65CFBC
        cmp eax, 0xb53a70
        je L_65CFBC
        cmp eax, 0xb53af0
        je L_65CFBC
        lea ecx, [esp+0x38]
        push ecx
        lea edx, [esp+0x18]
        push edx
        mov dword ptr [esp+0x40], eax
        call ext_0053F5F0
        mov esi, dword ptr [esp+0x1c]
        add esp, 0x8
        cmp esi, 0x12
        jbe L_65CE1F
        lea eax, [esp+0x1c]
        push esi
        push eax
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov byte ptr [esp+0xb4], 2
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+0x40]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp+0x3c]
        push ecx
        push 0xa
        push edi
        lea ecx, [esp+0x84]
        mov byte ptr [esp+0xc0], 3
        call ext_0065C770
        push 0xa14d3c
        lea edx, [esp+0x7c]
        push edx
        call ext_006A6DD2
    L_65CE1F:
        jae L_65CFBC
        push ebp
        lea ecx, [esp+0x40]
        xor bl, bl
        call dword ptr [mem_00924FE4]
        cmp esi, 0x9
        mov byte ptr [esp+0xb4], 4
        jge L_65CE8C
        lea ecx, [esp+0x1c]
        call ext_006A0670
        push 0xb58e1c
        lea ecx, [esp+0x20]
        mov byte ptr [esp+0xb8], 5
        call ext_00698390
        lea ecx, [esp+0x1c]
        call ext_0065CCA0
        test al, al
        je L_65CE7B
        lea eax, [esp+0x3c]
        push eax
        lea ecx, [esp+0x20]
        call ext_00698240
        mov bl, al
    L_65CE7B:
        lea ecx, [esp+0x1c]
        mov byte ptr [esp+0xb4], 4
        call ext_005577A0
    L_65CE8C:
        cmp esi, 0xe
        jge L_65CEDE
        lea ecx, [esp+0x1c]
        call ext_006A0670
        push 0xb58e38
        lea ecx, [esp+0x20]
        mov byte ptr [esp+0xb8], 6
        call ext_00698390
        lea ecx, [esp+0x1c]
        call ext_0065CCA0
        test al, al
        je L_65CECD
        lea ecx, [esp+0x3c]
        push ecx
        lea ecx, [esp+0x20]
        call ext_00698240
        or bl, al
    L_65CECD:
        lea ecx, [esp+0x1c]
        mov byte ptr [esp+0xb4], 4
        call ext_005577A0
    L_65CEDE:
        cmp esi, 0x11
        jge L_65CF30
        lea ecx, [esp+0x1c]
        call ext_006A0670
        push 0xb58e54
        lea ecx, [esp+0x20]
        mov byte ptr [esp+0xb8], 7
        call ext_00698390
        lea ecx, [esp+0x1c]
        call ext_0065CCA0
        test al, al
        je L_65CF1F
        lea edx, [esp+0x3c]
        push edx
        lea ecx, [esp+0x20]
        call ext_00698240
        or bl, al
    L_65CF1F:
        lea ecx, [esp+0x1c]
        mov byte ptr [esp+0xb4], 4
        call ext_005577A0
    L_65CF30:
        test bl, bl
        lea ecx, [esp+0x3c]
        je L_65CFAA
        call dword ptr [mem_00924EAC]
        push eax
        lea ecx, [esp+0x40]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+0x60]
        call ext_008726F0
        mov esi, eax
        mov dword ptr [esp+0x14], esi
        cmp dword ptr [esi+0x78], 0
        mov byte ptr [esp+0xb4], 8
        mov eax, 0xb53b30
        je L_65CF6F
        mov eax, dword ptr [esi+0x78]
    L_65CF6F:
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx+0x4]
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0x1
        mov ecx, esi
        mov byte ptr [esp+0xb8], 4
        call eax
        lea ecx, [esp+0x3c]
        mov byte ptr [esp+0xb4], 1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+0x18]
        mov edx, dword ptr [ecx]
        jmp L_65D031
    L_65CFAA:
        mov byte ptr [esp+0xb4], 1
        call dword ptr [mem_00924FF4]
        mov ebx, dword ptr [esp+0x18]
    L_65CFBC:
        mov eax, dword ptr [esp+0xc0]
        test eax, eax
        je L_65D021
        push 0x1
        push 0x0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_65CFF6
        cmp eax, 0xb53b30
        je L_65CFF6
        cmp eax, 0xb53ab0
        je L_65CFF6
        cmp eax, 0xb53a70
        je L_65CFF6
        cmp eax, 0xb53af0
        jne L_65CFFB
    L_65CFF6:
        mov eax, 0xb53b30
    L_65CFFB:
        cmp eax, 0xb53a34
        je L_65D02D
        cmp eax, 0xb53b30
        je L_65D02D
        cmp eax, 0xb53ab0
        je L_65D02D
        cmp eax, 0xb53a70
        je L_65D02D
        cmp eax, 0xb53af0
        je L_65D02D
        push eax
        jmp L_65D022
    L_65D021:
        push edi
    L_65D022:
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0x4]
        call eax
    L_65D02D:
        mov edx, dword ptr [ebx]
        mov ecx, ebx
    L_65D031:
        mov eax, dword ptr [edx]
        push 0x1
        mov byte ptr [esp+0xb8], 0
        call eax
        lea ecx, [esp+0x58]
        mov dword ptr [esp+0xb4], -1
        call ext_00870E30
        mov ecx, dword ptr [esp+0xac]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xa8
        ret 0xc
    }
}
