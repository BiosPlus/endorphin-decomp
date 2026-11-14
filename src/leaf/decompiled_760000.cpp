// Decompiled translation unit: src/leaf/decompiled_760000.cpp

extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_00764620();
extern "C" void ext_00764670();
extern "C" void ext_007648B0();
extern "C" void ext_006D9060();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" void ext_00700990();
extern "C" void ext_007009E0();
extern "C" void ext_0076AD20();
extern "C" void ext_0077FB40();
extern "C" void ext_007A64E0();
extern "C" int mem_009252D0;
extern "C" int mem_009939D8;

// [0x007646E0] sub_007646E0 (96 bytes)
extern "C" __declspec(naked) char __fastcall fn_007646E0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     ebp, ecx
        test    edi, edi
        jne     L_nonnull
        pop     edi
        xor     al, al
        pop     ebp
        ret     4
    L_nonnull:
        push    edi
        mov     ecx, ebp
        call    ext_00764620
        test    al, al
        je      L_after_if
        push    edi
        mov     ecx, ebp
        call    ext_00764670
        push    edi
        mov     ecx, ebp
        call    ext_007648B0
    L_after_if:
        push    ebx
        push    esi
        push    0
        mov     ecx, edi
        call    ext_006C2860
        mov     ebx, eax
        xor     esi, esi
        test    ebx, ebx
        jle     L_done
    L_loop:
        push    esi
        mov     ecx, edi
        call    ext_006C28D0
        push    eax
        mov     ecx, ebp
        call    fn_007646E0
        inc     esi
        cmp     esi, ebx
        jl      L_loop
    L_done:
        pop     esi
        pop     ebx
        pop     edi
        mov     al, 1
        pop     ebp
        ret     4
    }
}

// [0x00761230] sub_00761230 (303 bytes)
extern "C" __declspec(naked) char __fastcall fn_00761230(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, ecx
        push    edi
        push    0xaa8e24
        mov     edi, dword ptr [esi + 0xac]
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        push    0xaa91ac
        mov     ecx, edi
        call    ext_007279A0
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaaeb08
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8cc4
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa91b4
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa91ac
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaadb18
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     edi, dword ptr [esi + 0xac]
        push    0xaacd0c
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        push    0x64
        mov     ecx, edi
        call    ext_00727C80
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esp + 0x14]
        call    ext_006D9060
        mov     edi, dword ptr [esi + 0xac]
        push    0xaa9190
        fstp    qword ptr [esp + 0xc]
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_00727FE0
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        pop     edi
        mov     al, 1
        pop     esi
        add     esp, 8
        ret     4
    }
}

// [0x0076A8C0] sub_0076A8C0 (351 bytes)
extern "C" __declspec(naked) void __fastcall fn_0076A8C0(void* self, int edx_unused, int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, const char* name) {
    __asm {
        push    -1
        push    0x8c0880
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        lea     eax, [esp + 0x10]
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x58], ebx
        mov     dword ptr [esp + 0x14], ebx
        call    ext_007A64E0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x84]
        mov     edi, edx
        xor     eax, eax
        mov     byte ptr [ecx + 0xa], bl
        or      ecx, -1
        add     esp, 4
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_76A8C0_long
        mov     edi, edx
        or      ecx, -1
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        jmp     L_76A8C0_after
    L_76A8C0_long:
        mov     eax, dword ptr [esp + 0x10]
        push    0xa
        push    edx
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
    L_76A8C0_after:
        sub     esp, 0x20
        lea     edx, [esp + 0x80]
        mov     ecx, esp
        mov     dword ptr [esp + 0xa0], esp
        push    edx
        call    ext_006D2390
        lea     eax, [esp + 0x34]
        mov     ecx, ebp
        push    eax
        call    ext_0076AD20
        fld     qword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0xc]
        fld     qword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x2c]
        fstp    dword ptr [edx + 0x10]
        fld     qword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x14]
        call    ext_0077FB40
        mov     esi, dword ptr [esp + 0x5c]
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x58], 1
        call    ext_00700990
        fld     qword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x10]
        fstp    dword ptr [edx + 0x18]
        fld     qword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x1c]
        fld     qword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x20]
        mov     ecx, esi
        call    ext_007009E0
        fmul    qword ptr [mem_009939D8]
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x54], bl
        fstp    dword ptr [edx + 0x24]
        mov     esi, dword ptr [esp + 0x10]
        call    ext_006D80A0
        lea     ecx, [esp + 0x60]
        mov     dword ptr [esp + 0x54], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x48
        ret     0x28
    }
}

// [0x00766E90] sub_00766E90 (1919 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C2720();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C3030();
extern "C" void ext_006C3250();
extern "C" void ext_006C32C0();
extern "C" void ext_006C3330();
extern "C" void ext_006C9360();
extern "C" void ext_006CE020();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D23F0();
extern "C" void ext_006D3D70();
extern "C" void ext_006D5090();
extern "C" void ext_006D80A0();
extern "C" void ext_006DC480();
extern "C" void ext_006DEF30();
extern "C" void ext_00700970();
extern "C" void ext_007294F0();
extern "C" void ext_00767610();
extern "C" void ext_0076A8C0();
extern "C" void ext_0076AA20();
extern "C" void ext_0076ABB0();
extern "C" void ext_0076B1E0();
extern "C" void ext_0076C1F0();
extern "C" void ext_0076CED0();
extern "C" void ext_0076EBB0();
extern "C" void ext_0079FCC0();
extern "C" void ext_007A01F0();
extern "C" void ext_007A0C40();
extern "C" void ext_007A12F0();
extern "C" void ext_007A1940();
extern "C" void ext_007A1C80();
extern "C" void ext_007A24A0();
extern "C" void ext_007A2BE0();
extern "C" void ext_007A5EF0();
extern "C" void ext_007A6010();
extern "C" void ext_007A65C0();
extern "C" void ext_007A6EC0();
extern "C" void ext_007A7C90();
extern "C" void ext_007ACAC0();
extern "C" int mem_009252A0;
extern "C" int mem_00996C78;

extern "C" __declspec(naked) void __fastcall fn_00766E90(void* self) {
    __asm {
        push    -0x1
        push    0x8c040f
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0xcc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        xor     esi, esi
        push    edi
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x2c], esi
        call    ext_006D2370
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0xe4], esi
        call    ext_006D2370
        lea     ecx, [esp + 0x9c]
        mov     byte ptr [esp + 0xe4], 0x1
        call    ext_006D2370
        xor     eax, eax
        xor     ecx, ecx
        mov     ebp, dword ptr [esp + 0xec]
        mov     dword ptr [esp + 0x3c], eax
        xor     edx, edx
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x4c], ecx
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x50], ecx
        lea     eax, [esp + 0x3c]
        mov     dword ptr [esp + 0x38], edx
        lea     ecx, [esp + 0x48]
        push    eax
        lea     edx, [esp + 0x34]
        push    ecx
        push    edx
        mov     ecx, ebp
        mov     byte ptr [esp + 0xf0], 0x2
        xor     edi, edi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9360
        mov     ecx, eax
        call    ext_006DEF30
        cmp     dword ptr [esp + 0x30], esi
        je      L_766faf
        cmp     dword ptr [esp + 0x34], esi
        je      L_766faf
        cmp     dword ptr [esp + 0x38], esi
        je      L_766faf
        lea     eax, [esp + 0x30]
        mov     dword ptr [esp + 0x20], 0xffffffff
        mov     dword ptr [esp + 0x10], eax
    L_766f6d:
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x20]
        xor     eax, eax
        push    ecx
        mov     ecx, dword ptr [edx]
        push    eax
        push    edi
        call    ext_006CE020
        fstp    qword ptr [esp + 0x18]
        push    esi
        lea     ecx, [esp + 0x60]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        inc     esi
        add     ecx, 0x4
        cmp     esi, 0x3
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esp + 0x10], ecx
        jl      L_766f6d
        jmp     L_766fbb
    L_766faf:
        lea     eax, [esp + 0x5c]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
    L_766fbb:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        je      L_76702a
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_76702a
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        je      L_76702a
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x20], 0xffffffff
        xor     esi, esi
        mov     dword ptr [esp + 0x10], ecx
    L_766fe5:
        lea     edx, [esp + 0x20]
        xor     eax, eax
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    edi
        mov     ecx, dword ptr [eax]
        call    ext_006CE020
        fstp    qword ptr [esp + 0x18]
        push    esi
        lea     ecx, [esp + 0x80]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        inc     esi
        add     ecx, 0x4
        cmp     esi, 0x3
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esp + 0x10], ecx
        jl      L_766fe5
        jmp     L_767036
    L_76702a:
        lea     eax, [esp + 0x7c]
        mov     ecx, ebp
        push    eax
        call    ext_006C32C0
    L_767036:
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        je      L_7670a5
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        je      L_7670a5
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        je      L_7670a5
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x20], 0xffffffff
        xor     esi, esi
        mov     dword ptr [esp + 0x10], ecx
    L_767060:
        lea     edx, [esp + 0x20]
        xor     eax, eax
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    edi
        mov     ecx, dword ptr [eax]
        call    ext_006CE020
        fstp    qword ptr [esp + 0x18]
        push    esi
        lea     ecx, [esp + 0xa0]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        inc     esi
        add     ecx, 0x4
        cmp     esi, 0x3
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esp + 0x10], ecx
        jl      L_767060
        jmp     L_7670b4
    L_7670a5:
        lea     eax, [esp + 0x9c]
        mov     ecx, ebp
        push    eax
        call    ext_006C3330
    L_7670b4:
        mov     ecx, ebp
        call    ext_006C3030
        test    eax, eax
        je      L_767218
        mov     ecx, ebp
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x4
        je      L_7670fd
        mov     ecx, ebp
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x6
        je      L_7670fd
        mov     ecx, ebp
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x5
        jne     L_767218
    L_7670fd:
        mov     al, byte ptr [ebx + 0xaf]
        test    al, al
        je      L_76758f
        mov     al, byte ptr [ebx + 0xac]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x17], al
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x4
        je      L_767149
        mov     ecx, dword ptr [ebx + 0x4]
        mov     byte ptr [ebx + 0xac], 0x0
        call    ext_006D3D70
        mov     esi, eax
        push    ebp
        mov     ecx, esi
        call    ext_007294F0
        mov     ecx, dword ptr [ebx + 0x4]
        push    esi
        call    ext_006D5090
    L_767149:
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        lea     eax, [esp + 0xa0]
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x7c], esp
        push    eax
        call    ext_006D2390
        sub     esp, 0x20
        lea     edx, [esp + 0xc0]
        mov     ecx, esp
        mov     dword ptr [esp + 0x98], esp
        push    edx
        mov     byte ptr [esp + 0x12c], 0x3
        call    ext_006D2390
        sub     esp, 0x20
        lea     eax, [esp + 0xc0]
        mov     ecx, esp
        mov     dword ptr [esp + 0x7c], esp
        push    eax
        mov     byte ptr [esp + 0x14c], 0x4
        call    ext_006D2390
        mov     ecx, ebp
        mov     byte ptr [esp + 0x148], 0x2
        call    ext_006C3030
        push    eax
        mov     ecx, ebx
        call    ext_00767610
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        je      L_7671df
        mov     ecx, dword ptr [ebx + 0xbc]
        push    eax
        push    ecx
        call    ext_007A7C90
        lea     edx, [esp + 0x30]
        push    edx
        call    ext_007ACAC0
        add     esp, 0xc
    L_7671df:
        push    ebp
        mov     ecx, ebx
        call    ext_0076B1E0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        je      L_767209
        push    eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    eax
        call    ext_007A2BE0
        lea     ecx, [esp + 0x18]
        push    ecx
        call    ext_007A24A0
        add     esp, 0xc
    L_767209:
        mov     dl, byte ptr [esp + 0x17]
        mov     byte ptr [ebx + 0xac], dl
        jmp     L_76758f
    L_767218:
        mov     ecx, ebp
        call    ext_006C3030
        test    eax, eax
        je      L_767385
        mov     ecx, ebp
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x9
        jne     L_767385
        mov     al, byte ptr [ebx + 0xb0]
        test    al, al
        je      L_76758f
        mov     ecx, ebp
        call    ext_006C3030
        mov     esi, eax
        mov     ecx, esi
        call    ext_00700970
        test    eax, eax
        jne     L_7672d4
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        lea     eax, [esp + 0x60]
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x3c], esp
        push    eax
        call    ext_006D2390
        push    esi
        mov     ecx, ebx
        call    ext_0076A8C0
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        je      L_7672a4
        mov     ecx, dword ptr [ebx + 0xbc]
        push    eax
        push    ecx
        call    ext_007A6EC0
        lea     edx, [esp + 0x2c]
        push    edx
        call    ext_007A65C0
        add     esp, 0xc
    L_7672a4:
        push    ebp
        mov     ecx, ebx
        call    ext_0076C1F0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        je      L_76758f
        push    eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    eax
        call    ext_007A1C80
        lea     ecx, [esp + 0x18]
        push    ecx
        call    ext_007A1940
        jmp     L_76758c
    L_7672d4:
        mov     ecx, esi
        call    ext_00700970
        cmp     eax, 0x2
        jne     L_76758f
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        lea     edx, [esp + 0x80]
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x3c], esp
        push    edx
        call    ext_006D2390
        sub     esp, 0x20
        lea     eax, [esp + 0xa0]
        mov     ecx, esp
        mov     dword ptr [esp + 0x98], esp
        push    eax
        mov     byte ptr [esp + 0x12c], 0x6
        call    ext_006D2390
        push    esi
        mov     ecx, ebx
        mov     byte ptr [esp + 0x12c], 0x2
        call    ext_0076AA20
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        je      L_767355
        mov     ecx, dword ptr [ebx + 0xbc]
        push    eax
        push    ecx
        call    ext_007A6EC0
        lea     edx, [esp + 0x2c]
        push    edx
        call    ext_007A65C0
        add     esp, 0xc
    L_767355:
        push    ebp
        mov     ecx, ebx
        call    ext_0076CED0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        je      L_76758f
        push    eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    eax
        call    ext_007A12F0
        lea     ecx, [esp + 0x18]
        push    ecx
        call    ext_007A0C40
        jmp     L_76758c
    L_767385:
        mov     ecx, ebp
        call    ext_006C3030
        test    eax, eax
        je      L_767436
        mov     ecx, ebp
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x7
        jne     L_767436
        mov     al, byte ptr [ebx + 0xb1]
        test    al, al
        je      L_76758f
        mov     ecx, ebp
        call    ext_006C3030
        mov     ecx, ebp
        mov     esi, eax
        call    ext_006BADB0
        push    eax
        lea     eax, [esp + 0x60]
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x3c], esp
        push    eax
        call    ext_006D2390
        push    esi
        mov     ecx, ebx
        call    ext_0076ABB0
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        je      L_767406
        mov     ecx, dword ptr [ebx + 0xbc]
        push    eax
        push    ecx
        call    ext_007A6010
        lea     edx, [esp + 0x34]
        push    edx
        call    ext_007A5EF0
        add     esp, 0xc
    L_767406:
        push    ebp
        mov     ecx, ebx
        call    ext_0076EBB0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        je      L_76758f
        push    eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    eax
        call    ext_007A01F0
        lea     ecx, [esp + 0x18]
        push    ecx
        call    ext_0079FCC0
        jmp     L_76758c
    L_767436:
        push    0x7
        push    0xaaecb0
        mov     ecx, ebp
        call    ext_006BADB0
        mov     esi, dword ptr [mem_009252A0]
        push    eax
        call    esi
        add     esp, 0xc
        test    eax, eax
        jne     L_7674a7
        lea     ecx, [esp + 0xbc]
        call    ext_006D2370
        lea     edx, [esp + 0xbc]
        mov     ecx, ebp
        push    edx
        mov     byte ptr [esp + 0xe8], 0x7
        call    ext_006C3330
        push    0x0
        lea     ecx, [esp + 0xc0]
        call    ext_006D23F0
        fld     qword ptr [eax]
        fmul    qword ptr [mem_00996C78]
        lea     ecx, [esp + 0xbc]
        mov     byte ptr [esp + 0xe4], 0x2
        fstp    qword ptr [ebx + 0xc8]
        call    ext_006D80A0
    L_7674a7:
        mov     ecx, ebp
        call    ext_006C2720
        test    eax, eax
        jne     L_7674c0
        mov     al, byte ptr [ebx + 0xb4]
        test    al, al
        je      L_76758f
    L_7674c0:
        push    0x7
        push    0xaaecb0
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        call    esi
        add     esp, 0xc
        test    eax, eax
        je      L_76758f
        push    ebp
        mov     ecx, ebx
        call    ext_0076B1E0
        mov     edx, eax
        mov     edi, 0xaa9098
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     dword ptr [esp + 0x10], edx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, ebp
        call    ext_006BADB0
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, eax
        xor     eax, eax
        lea     edx, [ecx + 0x34]
        or      ecx, -0x1
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        mov     eax, 0xbf000000
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x40], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x44], eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x48], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, 0x3f000000
        mov     dword ptr [edx + 0x4c], eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x50], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x54], eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_76758f
        push    eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    eax
        call    ext_007A2BE0
        lea     ecx, [esp + 0x18]
        push    ecx
        call    ext_007A24A0
    L_76758c:
        add     esp, 0xc
    L_76758f:
        xor     esi, esi
        mov     ecx, ebp
        push    esi
        call    ext_006C2860
        test    eax, eax
        jle     L_7675bb
    L_76759d:
        push    esi
        mov     ecx, ebp
        call    ext_006C28D0
        push    eax
        mov     ecx, ebx
        call    fn_00766E90
        push    0x0
        mov     ecx, ebp
        inc     esi
        call    ext_006C2860
        cmp     esi, eax
        jl      L_76759d
    L_7675bb:
        lea     ecx, [esp + 0x9c]
        mov     byte ptr [esp + 0xe4], 0x1
        call    ext_006D80A0
        lea     ecx, [esp + 0x7c]
        mov     byte ptr [esp + 0xe4], 0x0
        call    ext_006D80A0
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0xe4], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0xdc]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        add     esp, 0xd8
        ret     0x4
    }
}
