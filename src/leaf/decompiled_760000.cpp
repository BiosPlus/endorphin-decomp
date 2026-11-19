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
extern "C" void ext_006D2A30();
extern "C" void ext_006C3030();
extern "C" void ext_006B9D80();
extern "C" int __cdecl ext_0079EC50(int, int);
extern "C" void ext_006B9EC0();
extern "C" int mem_00925264;

extern "C" int mem_00925264;
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

// [0x00761710] sub_00761710 (16 bytes)
extern "C" void ext_00761230();
extern "C" __declspec(naked) void __stdcall fn_00761710(void* arg) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00761230
        ret 0x4
    }
}

// [0x00766210] sub_00766210 (48 bytes)
extern "C" void ext_006D2A30();
extern "C" __declspec(naked) void __stdcall fn_00766210(void* self, double scale) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        xor esi, esi
loop_00766218:
        mov ecx, edi
        call ext_006D2A30
        fld qword ptr [esp+0x10]
        fmul qword ptr [eax+esi]
        add eax, esi
        add esi, 8
        cmp esi, 0x80
        fstp qword ptr [eax]
        jl loop_00766218
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x007648F0] sub_007648F0 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_007648F0(void* self, int edx_unused, int a, int b) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [ecx + 0x15c]
        xor eax, eax
        push edi
        test esi, esi
        jle done
        mov edx, dword ptr [ecx + 0x16c]
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        mov ecx, dword ptr [edx]
        cmp dword ptr [ecx], edi
        jne next
        cmp dword ptr [ecx + 0x4], ebx
        je found
    next:
        inc eax
        add edx, 0x4
        cmp eax, esi
        jl loop_top
    done:
        or eax, -1
    found:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x00766240] sub_00766240 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00766240(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        xor     esi, esi
loop_top:
        mov     ecx, ebp
        call    ext_006D2A30
        mov     ecx, ebx
        lea     edi, [eax + esi]
        call    ext_006D2A30
        fld     qword ptr [eax + esi]
        fadd    qword ptr [edi]
        add     esi, 8
        cmp     esi, 0x80
        fstp    qword ptr [edi]
        jl      loop_top
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}

// [0x007648B0] sub_007648B0 (64 bytes)
extern "C" void ext_006C3030();
extern "C" void ext_006FD480();
extern "C" void ext_006FD980();
extern "C" __declspec(naked) char __fastcall fn_007648B0(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        call ext_006C3030
        mov esi, eax
        push 0x0
        mov ecx, esi
        call ext_006FD980
        test eax, eax
        jg set_flag
        push 0x0
        mov ecx, esi
        call ext_006FD480
        test eax, eax
        jle done_noset
set_flag:
        mov al, 0x1
        mov byte ptr [edi + 0x14f], al
        pop edi
        pop esi
        ret 0x4
done_noset:
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00764620] sub_00764620 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00764620(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        call ext_006C3030
        mov esi, eax
        test esi, esi
        jne L_764636
        xor al, al
        pop esi
        ret 4
L_764636:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        cmp eax, 4
        jne L_764647
        mov al, 1
        pop esi
        ret 4
L_764647:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx]
        cmp eax, 5
        jne L_764658
        mov al, 1
        pop esi
        ret 4
L_764658:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        cmp eax, 6
        pop esi
        sete al
        ret 4
    }
}

// [0x00763E40] sub_00763E40 (96 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00784750();

extern "C" __declspec(naked) void __fastcall fn_00763E40(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov esi, dword ptr [ebx + 0xc8]
        test esi, esi
        je L_second
        lea edi, [ebx + 0xc4]
L_loop1:
        dec esi
        push 0
        push esi
        mov ecx, edi
        call ext_00784750
        push eax
        call ext_006A5C5C
        add esp, 4
        test esi, esi
        jne L_loop1
L_second:
        mov esi, dword ptr [ebx + 0xdc]
        test esi, esi
        je L_done
        lea edi, [ebx + 0xd8]
L_loop2:
        dec esi
        push 0
        push esi
        mov ecx, edi
        call ext_00784750
        push eax
        call ext_006A5C5C
        add esp, 4
        test esi, esi
        jne L_loop2
L_done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00764670] sub_00764670 (112 bytes)
extern "C" void ext_006D3D70();
extern "C" void ext_006D5090();
extern "C" void ext_007294F0();

extern "C" __declspec(naked) void __fastcall fn_00764670(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006C3030
        mov edi, eax
        mov ecx, edi
        mov eax, dword ptr [edi]
        call dword ptr [eax]
        cmp eax, 0x5
        je L_match
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx]
        cmp eax, 0x6
        je L_match
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        cmp eax, 0x4
        jne L_fail
        cmp byte ptr [esi + 0x14c], 0x1
        je L_match
    L_fail:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_match:
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3D70
        mov edi, eax
        push ebx
        mov ecx, edi
        call ext_007294F0
        mov ecx, dword ptr [esi + 0x4]
        push edi
        call ext_006D5090
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x00764930] sub_00764930 (128 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9EC0();
extern "C" void ext_006D2250();
extern "C" void ext_007641C0();
extern "C" int mem_00925264; /* u32 0x00627D9E */
extern "C" __declspec(naked) char __fastcall fn_00764930(void* self) {
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     ebp, dword ptr [esi + 0x15c]
        test    ebp, ebp
        jle     L_after_loop
        push    ebx
    L_loop:
        mov     eax, dword ptr [esi + 0x16c]
        mov     ebx, dword ptr [eax + 4*edi]
        test    ebx, ebx
        je      L_skip
        mov     ecx, ebx
        call    ext_007641C0
        push    ebx
        call    ext_006A5C5C
        add     esp, 4
    L_skip:
        inc     edi
        cmp     edi, ebp
        jl      L_loop
        pop     ebx
    L_after_loop:
        lea     ecx, [esi + 0x15c]
        call    ext_006D2250
        mov     eax, dword ptr [esi + 0xb0]
        test    eax, eax
        je      L_no_file
        push    eax
        call    dword ptr [mem_00925264]
        add     esp, 4
        lea     ecx, [esi + 0x100]
        mov     dword ptr [esi + 0xb0], 0
        push    0xb5d2c0
        call    ext_006B9EC0
    L_no_file:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        ret
    }
}

// [0x00763A70] sub_00763A70 (128 bytes)
extern "C" void ext_00763A70();
extern "C" void ext_006C30A0();
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" void ext_0070DCC0();
extern "C" void ext_0070DD00();
extern "C" __declspec(naked) void __fastcall fn_00763A70(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        mov ebx, ecx
        xor edi, edi
        push edi
        mov ecx, esi
        call ext_006C2860
        test eax, eax
        jle L_done_loop
L_loop1:
        push edi
        mov ecx, esi
        call ext_006C28D0
        push eax
        mov ecx, ebx
        call ext_00763A70
        push 0
        mov ecx, esi
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop1
L_done_loop:
        mov ecx, esi
        call ext_006C30A0
        test eax, eax
        je L_epilogue
        push ebp
        mov ecx, esi
        call ext_006C30A0
        mov ecx, esi
        mov ebp, eax
        call ext_006DC550
        mov ebx, eax
        xor edi, edi
        test ebx, ebx
        jle L_done_loop2
L_loop2:
        push edi
        mov ecx, esi
        call ext_006DC510
        push eax
        mov ecx, ebp
        call ext_0070DCC0
        inc edi
        cmp edi, ebx
        jl L_loop2
L_done_loop2:
        mov ecx, ebp
        call ext_0070DD00
        pop ebp
L_epilogue:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x007639F0] sub_007639F0 (128 bytes)
extern "C" void ext_006C30A0();
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" void ext_0070DC80();
extern "C" void ext_0070DD00();
extern "C" void ext_007639F0();
extern "C" __declspec(naked) void __fastcall fn_007639F0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     ebx, ecx
        xor     edi, edi
        mov     ecx, esi
        push    edi
        call    ext_006C2860
        test    eax, eax
        jle     L_done
    L_loop:
        push    edi
        mov     ecx, esi
        call    ext_006C28D0
        push    eax
        mov     ecx, ebx
        call    ext_007639F0
        push    0
        mov     ecx, esi
        inc     edi
        call    ext_006C2860
        cmp     edi, eax
        jl      L_loop
    L_done:
        mov     ecx, esi
        call    ext_006C30A0
        test    eax, eax
        je      L_end
        mov     ecx, esi
        call    ext_006C30A0
        mov     ebx, eax
        mov     ecx, ebx
        call    ext_0070DD00
        mov     ecx, esi
        call    ext_006DC550
        mov     ebp, eax
        xor     edi, edi
        test    ebp, ebp
        jle     L_end
    L_loop2:
        push    edi
        mov     ecx, esi
        call    ext_006DC510
        push    eax
        mov     ecx, ebx
        call    ext_0070DC80
        inc     edi
        cmp     edi, ebp
        jl      L_loop2
    L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}

// [0x0076AD20] sub_0076AD20 (144 bytes)
extern "C" void ext_006D23F0();
extern "C" __declspec(naked) void __fastcall fn_0076AD20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8c08e8
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push 0x0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006D23F0
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        push 0x1
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esi + 0x4], edx
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        push 0x2
        mov dword ptr [esi + 0x10], ecx
        lea ecx, [esp + 0x1c]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x14], edx
        call ext_006D23F0
        fld qword ptr [eax]
        fchs
        fstp qword ptr [esi + 0x8]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x4]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x24
    }
}

// [0x0076B150] sub_0076B150 (144 bytes)
extern "C" void ext_006D23F0();

extern "C" __declspec(naked) void __fastcall fn_0076B150(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 008C08E8h
        push eax
        mov fs:[0], esp
        push esi
        push 0
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+10h], 0
        call ext_006D23F0
        mov esi, dword ptr [esp+14h]
        mov ecx, dword ptr [eax]
        push 1
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax+4]
        lea ecx, [esp+1Ch]
        mov dword ptr [esi+4], edx
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        push 2
        mov dword ptr [esi+10h], ecx
        lea ecx, [esp+1Ch]
        mov edx, dword ptr [eax+4]
        mov dword ptr [esi+14h], edx
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp+0Ch], 0FFFFFFFFh
        mov dword ptr [esi+8], ecx
        lea ecx, [esp+18h]
        mov edx, dword ptr [eax+4]
        mov dword ptr [esi+0Ch], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp+4]
        pop esi
        mov fs:[0], ecx
        add esp, 0Ch
        ret 24h
    }
}

// [0x00760140] sub_00760140 (160 bytes)
extern "C" __declspec(naked) char __fastcall fn_00760140(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    edi
        mov     edi, dword ptr [ebx + 0x1c4]
        mov     ebp, ecx
        test    edi, edi
        jg      L_nonzero
        pop     edi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
L_nonzero:
        mov     ecx, dword ptr [ebx + 0x1d4]
        mov     eax, 1
        cmp     edi, eax
        push    esi
        mov     edx, dword ptr [ecx + 0x8]
        jle     L_done
        add     ecx, 0x14
L_scan:
        cmp     dword ptr [ecx], edx
        jne     L_mismatch
        inc     eax
        add     ecx, 0xc
        cmp     eax, edi
        jl      L_scan
        pop     esi
        pop     edi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
L_mismatch:
        mov     ecx, dword ptr [ebp + 0xac]
        push    0xaadc90
        add     ecx, 0x4
        call    ext_007275F0
        test    edi, edi
        jle     L_after_loop
        xor     esi, esi
L_call_loop:
        mov     eax, dword ptr [ebx + 0x1d4]
        mov     ecx, dword ptr [esi + eax + 0x8]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xac]
        add     ecx, 0x4
        call    ext_00727C80
        add     esi, 0xc
        dec     edi
        jne     L_call_loop
L_after_loop:
        mov     ecx, dword ptr [ebp + 0xac]
        add     ecx, 0x4
        call    ext_007283B0
L_done:
        pop     esi
        pop     edi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00766900] sub_00766900 (22 bytes)
extern "C" void ext_0079F230();

extern "C" __declspec(naked) void* __fastcall fn_00766900(void* self) {
    __asm {
        push esi
        call ext_0079F230
        mov esi, eax
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x128]
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00764190] sub_00764190 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00764190(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edx
        mov dword ptr [esi + 0x4], ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esi], eax
        call ext_006B9D80
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x007668D0] sub_007668D0 (38 bytes)
extern "C" __declspec(naked) bool __fastcall fn_007668D0(void* self, void* /*edx*/, int arg1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x0c]
        push 0x00aab934
        mov esi, ecx
        push edi
        call ext_0079EC50
        add esp, 8
        mov dword ptr [esi + 0xb8], eax
        test edi, edi
        pop edi
        pop esi
        setne al
        ret 4
    }
}

// [0x007643C0] sub_007643C0 (62 bytes)
extern "C" __declspec(naked) bool __fastcall fn_007643C0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi + 0xac]
        test    eax, eax
        je      L_skip_fclose
        push    eax
        call    dword ptr [mem_00925264]
        add     esp, 4
        mov     edi, eax
    L_skip_fclose:
        push    0xb5d2c0
        lea     ecx, [esi + 0xb4]
        mov     dword ptr [esi + 0xac], 0
        call    ext_006B9EC0
        test    edi, edi
        pop     edi
        pop     esi
        sete    al
        ret
    }
}
