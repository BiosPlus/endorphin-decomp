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
extern "C" void ext_006D2170();
extern "C" void ext_006D23F0();

extern "C" void ext_006D23F0();
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
extern "C" void ext_006D9010();
extern "C" void ext_006D90D0();

extern "C" void ext_006D90D0();
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

// [0x00764360] sub_00764360 (90 bytes)
extern "C" void ext_006FF070();
extern "C" void ext_006E7440();
extern "C" int mem_009252A8;

extern "C" __declspec(naked) void __fastcall fn_00764360(void* self, int edx_unused, int a1) {
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, dword ptr [esi + 0xac]
        test    eax, eax
        je      skip_close
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x8]
    skip_close:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        call    ext_006FF070
        push    0xaaeb4c
        push    edi
        call    dword ptr [mem_009252A8]
        add     esp, 0xc
        mov     dword ptr [esi + 0xac], eax
        test    eax, eax
        jne     opened
        push    0x1
        lea     ecx, [esi + 0x8]
        call    ext_006E7440
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    opened:
        push    edi
        lea     ecx, [esi + 0xb4]
        call    ext_006B9EC0
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     4
    }
}

// [0x00764400] sub_00764400 (90 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007ABF40();

extern "C" __declspec(naked) void __fastcall fn_00764400(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7d4
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_007ABF40
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007611C0] sub_007611C0 (94 bytes)
extern "C" void ext_006D91C0();
extern "C" void ext_00761230();
extern "C" void ext_00761360();
extern "C" void ext_00761550();
extern "C" void ext_00761710();

extern "C" __declspec(naked) bool __fastcall fn_007611C0(void* self, int edx_unused, void* arg) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, edi
        call    ext_006D91C0
        cmp     eax, 3
        ja      L_default
        jmp     dword ptr [eax*4 + 0x761220]
    L_case0:
        push    edi
        mov     ecx, esi
        call    ext_00761230
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    L_case1:
        push    edi
        mov     ecx, esi
        call    ext_00761360
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    L_case2:
        push    edi
        mov     ecx, esi
        call    ext_00761550
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    L_case3:
        push    edi
        mov     ecx, esi
        call    ext_00761710
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    L_default:
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    }
}

// [0x00761120] sub_00761120 (136 bytes)
extern "C" __declspec(naked) char __fastcall fn_00761120(void* self, int edx_unused, int a0, int sel) {
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x4
        ja      L_default
        jmp     dword ptr [eax*4 + 0x7611a8]
    L_c0:
        mov     ecx, dword ptr [ecx + 0xac]
        push    0xaae384
        add     ecx, 0x4
        call    ext_007279A0
        mov     al, 0x1
        ret     0x8
    L_c1:
        mov     ecx, dword ptr [ecx + 0xac]
        push    0xaae374
        add     ecx, 0x4
        call    ext_007279A0
        mov     al, 0x1
        ret     0x8
    L_c2:
        mov     ecx, dword ptr [ecx + 0xac]
        push    0xaae368
        add     ecx, 0x4
        call    ext_007279A0
        mov     al, 0x1
        ret     0x8
    L_c3:
        mov     ecx, dword ptr [ecx + 0xac]
        push    0xaae360
        add     ecx, 0x4
        call    ext_007279A0
        mov     al, 0x1
        ret     0x8
    L_c4:
        mov     ecx, dword ptr [ecx + 0xac]
        push    0xaaeb44
        add     ecx, 0x4
        call    ext_007279A0
    L_default:
        mov     al, 0x1
        ret     0x8
    }
}

// [0x007642D0] sub_007642D0 (143 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_00754FA0();
extern "C" void ext_007643C0();
extern "C" void ext_007ABCA0();

extern "C" __declspec(naked) void __fastcall fn_007642D0(void* self) {
    __asm {
        push    -1
        push    0x8bfec0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x996c38
        mov     dword ptr [esp + 0x10], 4
        call    ext_007643C0
        lea     ecx, [esi + 0x174]
        mov     byte ptr [esp + 0x10], 3
        call    ext_007ABCA0
        lea     ecx, [esi + 0x15c]
        mov     byte ptr [esp + 0x10], 2
        call    ext_006D2160
        lea     ecx, [esi + 0x100]
        mov     byte ptr [esp + 0x10], 1
        call    ext_006B9D70
        lea     ecx, [esi + 0xb4]
        mov     byte ptr [esp + 0x10], 0
        call    ext_006B9D70
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    ext_00754FA0
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00760070] sub_00760070 (208 bytes)
extern "C" __declspec(naked) char __fastcall fn_00760070(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebx
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, ecx
        mov     ebp, 1
        mov     eax, dword ptr [edi + 0x1c4]
        test    eax, eax
        je      L_early
        mov     ecx, dword ptr [ebx + 0xac]
        push    esi
        push    0xaae000
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0x1dc]
        xor     esi, esi
        test    ecx, ecx
        jle     L_after_loop
        mov     dword ptr [esp + 0x14], 0xc
    L_loop:
        mov     eax, dword ptr [edi + 0x1ec]
        mov     edx, dword ptr [edi + 0x1c4]
        cmp     ebp, edx
        mov     eax, dword ptr [eax + 4*esi]
        jge     L_else
        mov     ecx, dword ptr [edi + 0x1d4]
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + edx]
        dec     ecx
        cmp     esi, ecx
        jne     L_join
        mov     ecx, dword ptr [esp + 0x14]
        or      edx, -1
        sub     edx, eax
        inc     ebp
        add     ecx, 0xc
        mov     eax, edx
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_join
    L_else:
        dec     ecx
        cmp     esi, ecx
        jne     L_join
        or      ecx, -1
        sub     ecx, eax
        mov     eax, ecx
    L_join:
        mov     ecx, dword ptr [ebx + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [edi + 0x1dc]
        inc     esi
        cmp     esi, ecx
        jl      L_loop
    L_after_loop:
        mov     ecx, dword ptr [ebx + 0xac]
        add     ecx, 4
        call    ext_007283B0
        pop     esi
        pop     edi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    L_early:
        pop     edi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    }
}

// [0x007641D0] sub_007641D0 (217 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_00754F20();
extern "C" void ext_007ABC20();
extern "C" __declspec(naked) void* __fastcall fn_007641D0(void* self, int edx_unused, void* arg) {
    __asm {
        push    -1
        push    0x8bfe72
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x10], esi
        call    ext_00754F20
        xor     ebx, ebx
        push    0xb5d2c0
        lea     ecx, [esi + 0xb4]
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esi + 0xac], ebx
        mov     dword ptr [esi + 0xb0], ebx
        call    ext_006B9D80
        push    0xb5d2c0
        lea     ecx, [esi + 0x100]
        mov     byte ptr [esp + 0x1c], 1
        call    ext_006B9D80
        lea     edi, [esi + 0x15c]
        mov     eax, 1
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 2
        mov     byte ptr [esi + 0x14f], bl
        mov     dword ptr [esi + 0x150], eax
        mov     dword ptr [esi + 0x154], eax
        mov     dword ptr [esi + 0x158], ebx
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     ecx, [esi + 0x174]
        mov     byte ptr [esp + 0x18], 3
        call    ext_007ABC20
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x996c38
        mov     byte ptr [esi + 0x14e], 1
        mov     byte ptr [esi + 0x14c], bl
        mov     byte ptr [esi + 0x14d], 1
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x00763EA0] sub_00763EA0 (176 bytes)
extern "C" void ext_006BC600();
extern "C" void ext_006BC730();
extern "C" void ext_006BC7B0();
extern "C" void ext_0072CF10();
extern "C" void ext_0072FB20();
extern "C" void ext_00759A30();
extern "C" void ext_00759C60();

extern "C" __declspec(naked) void __fastcall fn_00763EA0(void* self, int edx_unused, void* arg) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, edi
        call    ext_006BC730
        test    eax, eax
        jne     short L_00763EDA
        mov     ecx, edi
        call    ext_006BC7B0
        test    eax, eax
        jne     short L_00763EDA
        mov     ecx, dword ptr [esi + 0xb4]
        push    8
        call    ext_0072CF10
        test    al, al
        je      short L_00763F47
        mov     ecx, edi
        call    ext_006BC600
        test    eax, eax
        je      short L_00763F47
    L_00763EDA:
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaad2d8
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     ecx, dword ptr [esi + 0xb4]
        push    8
        call    ext_0072CF10
        test    al, al
        je      short L_00763F14
        push    edi
        mov     ecx, esi
        call    ext_00759A30
    L_00763F14:
        push    edi
        mov     ecx, esi
        call    ext_00759C60
        mov     ecx, edi
        call    ext_006BC7B0
        push    eax
        mov     ecx, esi
        call    ext_0072FB20
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
    L_00763F47:
        pop     edi
        pop     esi
        ret     4
        nop
        nop
        nop
        nop
    }
}

// [0x00763910] sub_00763910 (224 bytes)
extern "C" __declspec(naked) void __fastcall fn_00763910(void* self, int edx_unused, int* a1, int* a2, int* a3) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [eax]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], edi
        jle     L_done
        mov     dword ptr [esp + 0x14], edi
        jmp     L_body
    L_loop:
        mov     edi, dword ptr [esp + 0x14]
    L_body:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     esi, edi
        push    0
        mov     eax, dword ptr [ecx + 0x10]
        mov     ebx, dword ptr [edx + 0x10]
        add     esi, eax
        add     edi, ebx
        mov     ecx, esi
        call    ext_006D23F0
        push    0
        mov     ecx, edi
        mov     ebx, eax
        call    ext_006D23F0
        fld     qword ptr [ebx]
        fcomp   qword ptr [eax]
        fnstsw  ax
        test    ah, 0x40
        je      L_call
        push    1
        mov     ecx, esi
        call    ext_006D23F0
        push    1
        mov     ecx, edi
        mov     ebx, eax
        call    ext_006D23F0
        fld     qword ptr [ebx]
        fcomp   qword ptr [eax]
        fnstsw  ax
        test    ah, 0x40
        je      L_call
        push    2
        mov     ecx, esi
        call    ext_006D23F0
        push    2
        mov     ecx, edi
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [esi]
        fcomp   qword ptr [eax]
        fnstsw  ax
        test    ah, 0x40
        jne     L_next
    L_call:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [esp + 0x1c], eax
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_006D2170
    L_next:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        inc     eax
        add     edx, 0x20
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], edx
        jl      L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}

// [0x00766280] sub_00766280 (336 bytes)
extern "C" void ext_006C2720();
extern "C" void ext_00714570();
extern "C" void ext_00715E10();
extern "C" void ext_00717720();
extern "C" void ext_00717890();
extern "C" void ext_007745C0();

extern "C" __declspec(naked) void* __fastcall fn_00766280(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    0x8c0116
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x204
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x220]
        lea     eax, [esp + 0x8c]
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x10], 0
        call    ext_007745C0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x214], 1
        call    ext_00714570
        mov     ecx, edi
        mov     byte ptr [esp + 0x214], 2
        call    ext_006C2720
        test    eax, eax
        je      L_else
        mov     ecx, edi
        call    ext_006C2720
        lea     ecx, [esp + 0x10c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    fn_00766280
        lea     edx, [esp + 0x8c]
        lea     eax, [esp + 0x18c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x114]
        mov     byte ptr [esp + 0x21c], 3
        call    ext_00717890
        push    eax
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x218], 4
        call    ext_00717720
        lea     ecx, [esp + 0x18c]
        mov     byte ptr [esp + 0x214], 3
        call    ext_006D80A0
        lea     ecx, [esp + 0x10c]
        mov     byte ptr [esp + 0x214], 2
        call    ext_006D80A0
        jmp     L_join
    L_else:
        lea     ecx, [esp + 0x8c]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    ext_00717720
    L_join:
        mov     esi, dword ptr [esp + 0x21c]
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, esi
        call    ext_00715E10
        mov     dword ptr [esp + 8], 1
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x214], 1
        call    ext_006D80A0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x214], 0
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x20c]
        mov     eax, esi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x210
        ret     8
    }
}

// [0x00764740] sub_00764740 (368 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA3D0();
extern "C" void ext_006BAA50();
extern "C" void ext_006E7460();
extern "C" void ext_006FE4B0();
extern "C" int mem_009252A8;
extern "C" int mem_0092525C;

extern "C" __declspec(naked) char __fastcall fn_00764740(void* self) {
    __asm {
        push    -1
        push    0x8be2d3
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x98
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 4]
        push    edi
        push    eax
        lea     ecx, [esi + 0xb4]
        call    ext_006BAA50
        lea     edi, [esi + 0x100]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0xac], 0
        call    ext_006B9E60
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0xa8], -1
        call    ext_006B9D70
        push    0
        push    0xaaebb8
        push    0xaaebb0
        mov     ecx, edi
        call    ext_006BA3D0
        test    al, al
        jne     L_open_file
        pop     edi
        pop     esi
        mov     ecx, dword ptr [esp + 0x98]
        mov     dword ptr fs:[0], ecx
        add     esp, 0xa4
        ret

    L_open_file:
        push    0xaaeb4c
        mov     ecx, edi
        call    ext_006E7460
        push    eax
        call    dword ptr [mem_009252A8]
        add     esp, 8
        mov     dword ptr [esi + 0xb0], eax
        test    eax, eax
        jne     L_write_header
        pop     edi
        xor     al, al
        pop     esi
        mov     ecx, dword ptr [esp + 0x98]
        mov     dword ptr fs:[0], ecx
        add     esp, 0xa4
        ret

    L_write_header:
        push    1
        mov     ecx, edi
        call    ext_006E7460
        lea     ecx, [esp + 0x58]
        push    eax
        push    ecx
        call    ext_006FE4B0
        add     esp, 0xc
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0xac], 1
        call    ext_006B9E60
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0xa8], -1
        call    ext_006B9D70
        mov     edx, dword ptr [esi + 0xb0]
        mov     edi, dword ptr [mem_0092525C]
        push    0xaaeb90
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0xb0]
        add     esp, 8
        push    0xaaeb94
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0xb0]
        add     esp, 8
        push    0xaaeb5c
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0xb0]
        add     esp, 8
        push    0xaaeb90
        push    edx
        call    edi
        mov     ecx, dword ptr [esp + 0xa8]
        add     esp, 8
        mov     al, 1
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        add     esp, 0xa4
        ret
    }
}

// [0x0076ABB0] sub_0076ABB0 (368 bytes)
extern "C" void ext_0071CB00();
extern "C" void ext_007A5E50();
extern "C" void ext_007AAA90();
extern "C" void ext_007AAB30();
extern "C" void ext_007AAF80();

extern "C" __declspec(naked) void __fastcall fn_0076ABB0(void* self) {
    __asm {
        push    -1
        push    0x8c08e8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        lea     eax, [esp + 0x10]
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x14], ebx
        call    ext_007A5E50
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x88]
        mov     edi, edx
        xor     eax, eax
        mov     byte ptr [ecx + 0xa], bl
        or      ecx, -1
        add     esp, 4
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_strncpy
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
        jmp     L_after_copy
    L_strncpy:
        mov     eax, dword ptr [esp + 0x10]
        push    0xa
        push    edx
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
    L_after_copy:
        sub     esp, 0x20
        lea     edx, [esp + 0x84]
        mov     ecx, esp
        mov     dword ptr [esp + 0xa4], esp
        push    edx
        call    ext_006D2390
        lea     eax, [esp + 0x38]
        mov     ecx, ebp
        push    eax
        call    ext_0076AD20
        fld     qword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0xc]
        fld     qword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x64]
        fstp    dword ptr [edx + 0x10]
        fld     qword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x14]
        fstp    dword ptr [eax + 0x14]
        call    ext_0071CB00
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        push    edx
        call    ext_007AAA90
        fld     qword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x18]
        fstp    dword ptr [eax + 4]
        fld     qword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 8]
        fld     qword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x18]
        fstp    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ebp + 0xbc]
        push    eax
        push    ecx
        call    ext_007AAF80
        lea     edx, [esp + 0x20]
        push    edx
        call    ext_007AAB30
        mov     esi, dword ptr [esp + 0x20]
        add     esp, 0x10
        lea     ecx, [esp + 0x30]
        call    ext_006D80A0
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x58], -1
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x4c
        ret     0x28
    }
}

// [0x0076AA20] sub_0076AA20 (400 bytes)
extern "C" void ext_00700A00();
extern "C" void ext_007A6660();

extern "C" __declspec(naked) void __fastcall fn_0076AA20(void* self) {
    __asm {
        push    -1
        push    0x8c08a8
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
        mov     dword ptr [esp + 0x58], 1
        mov     dword ptr [esp + 0x14], ebx
        call    ext_007A6660
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xa4]
        mov     edi, edx
        xor     eax, eax
        mov     byte ptr [ecx + 0xa], bl
        or      ecx, -1
        add     esp, 4
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_76aa99
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
        jmp     L_76aab1
    L_76aa99:
        mov     eax, dword ptr [esp + 0x10]
        push    0xa
        push    edx
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
    L_76aab1:
        sub     esp, 0x20
        lea     edx, [esp + 0x80]
        mov     ecx, esp
        mov     dword ptr [esp + 0xc0], esp
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
        mov     byte ptr [esp + 0x58], 2
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
        mov     ecx, esi
        fstp    dword ptr [edx + 0x24]
        call    ext_00700A00
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [esp + 0x54], 1
        mov     ecx, dword ptr [eax + 0x3c]
        fstp    dword ptr [ecx + 0xc]
        mov     esi, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x2c]
        call    ext_006D80A0
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x54], bl
        call    ext_006D80A0
        lea     ecx, [esp + 0x80]
        mov     dword ptr [esp + 0x54], -1
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x48
        ret     0x48
    }
}

// [0x00764460] sub_00764460 (441 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006D37E0();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_00764740();
extern "C" void ext_00764930();
extern "C" void ext_007649B0();
extern "C" void ext_007AA910();
extern "C" int mem_00B61248;
extern "C" int mem_0092525C;
extern "C" __declspec(naked) void __fastcall fn_00764460(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8bf8eb
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x98
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xb8]
        test    edi, edi
        mov     esi, ecx
        je      L_fail
        mov     ecx, dword ptr [mem_00B61248]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        test    al, al
        je      L_fail
        push    2
        mov     ecx, edi
        call    ext_007AA910
        cmp     eax, 1
        push    3
        sete    dl
        mov     ecx, edi
        mov     byte ptr [esi + 0x14c], dl
        call    ext_007AA910
        mov     ecx, dword ptr [esp + 0xb4]
        cmp     eax, 1
        sete    al
        mov     byte ptr [esi + 0x14d], al
        call    ext_006BC370
        mov     ebp, eax
        mov     ecx, esi
        push    ebp
        call    fn_007646E0
        test    al, al
        je      L_ret_false
        mov     ecx, dword ptr [esi + 0xac]
        mov     edi, dword ptr [mem_0092525C]
        push    0xaaeb90
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0xac]
        add     esp, 8
        push    0xaaeb78
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0xac]
        add     esp, 8
        push    0xaaeb5c
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0xac]
        add     esp, 8
        push    0xaaeb90
        push    ecx
        call    edi
        mov     al, byte ptr [esi + 0x14f]
        add     esp, 8
        test    al, al
        je      L_skip_block
        mov     ecx, esi
        call    ext_00764740
        lea     ecx, [esi + 0x100]
        call    ext_006E7460
        mov     edx, dword ptr [esi + 0xac]
        push    eax
        push    0xaaeb50
        push    edx
        call    edi
        add     esp, 0xc
        lea     ecx, [esp + 0xc]
        push    0xaae79c
        call    ext_006E62C0
        mov     eax, dword ptr [esi + 0x174]
        lea     ecx, [esi + 0x174]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xac], 0
        push    edx
        call    dword ptr [eax + 0x8]
        lea     ecx, [esp + 0xc]
        call    ext_006E6340
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    ext_006D37E0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esi + 0x158], eax
        mov     dword ptr [esp + 0xac], 0xffffffff
        call    ext_006DE460
    L_skip_block:
        push    1
        push    ebp
        mov     ecx, esi
        call    ext_007649B0
        mov     eax, dword ptr [esi + 0x158]
        test    eax, eax
        je      L_skip_release
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x80]
        mov     dword ptr [esi + 0x158], 0
    L_skip_release:
        mov     ecx, esi
        call    ext_00764930
        mov     al, 1
        jmp     L_epilogue
    L_fail:
        push    4
        lea     ecx, [esi + 8]
        call    ext_006E7440
    L_ret_false:
        xor     al, al
    L_epilogue:
        mov     ecx, dword ptr [esp + 0xa4]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0xa4
        ret     8
    }
}

// [0x00761550] sub_00761550 (448 bytes)
extern "C" void ext_006D90D0();
extern "C" __declspec(naked) void __fastcall fn_00761550(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    -1
        push    0x8bfd88
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        push    0xaa8e24
        mov     edi, dword ptr [esi + 0xac]
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        push    0xaa9198
        mov     ecx, edi
        call    ext_007279A0
        mov     ecx, edi
        call    ext_007283B0
        mov     edi, dword ptr [esi + 0xac]
        push    0xaaeb08
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        push    0xaa91b4
        mov     ecx, edi
        call    ext_007279A0
        mov     ecx, edi
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
        mov     ebx, dword ptr [ebp + 8]
        mov     ecx, ebx
        call    ext_006D9060
        mov     edi, dword ptr [esi + 0xac]
        push    0xaa9190
        fstp    qword ptr [esp + 0x10]
        add     edi, 4
        mov     ecx, edi
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_00727FE0
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8cec
        add     ecx, 4
        call    ext_007275F0
        lea     edx, [esp + 0x18]
        mov     ecx, ebx
        push    edx
        call    ext_006D90D0
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     dword ptr [esp + 0x48], 0
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x40], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        pop     esi
        mov     al, 1
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}

// [0x00766040] sub_00766040 (464 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6C99();
extern "C" void ext_006A6D5C();
extern "C" void ext_006D2410();
extern "C" void ext_006D2630();
extern "C" void ext_006D26D0();
extern "C" void ext_006D7A90();
extern "C" void ext_006DEEC0();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF10();
extern "C" void ext_0070D310();
extern "C" __declspec(naked) void __fastcall fn_00766040(void* self, int edx_unused, int a0, int a1, int a2) {
    __asm {
        push    -1
        push    8c00bbh
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 60h
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 80h]
        mov     ecx, esi
        call    ext_0070CF00
        mov     ecx, esi
        mov     dword ptr [esp + 18h], eax
        call    ext_006D7A90
        mov     esi, eax
        mov     ebp, esi
        mov     dword ptr [esp + 10h], esi
        shl     ebp, 5
        mov     dword ptr [esp + 20h], ebp
        lea     eax, [ebp + 4]
        push    eax
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 1ch], eax
        xor     ecx, ecx
        cmp     eax, ecx
        mov     dword ptr [esp + 74h], ecx
        je      L_NULLBUF
        push    6d80a0h
        push    6d2370h
        lea     ebx, [eax + 4]
        push    esi
        push    20h
        push    ebx
        mov     dword ptr [eax], esi
        call    ext_006A6C99
        mov     dword ptr [esp + 0ch], ebx
        jmp     L_AFTERBUF
    L_NULLBUF:
        mov     dword ptr [esp + 0ch], ecx
        mov     ebx, ecx
    L_AFTERBUF:
        mov     esi, dword ptr [esp + 84h]
        mov     ecx, ebp
        mov     edx, ecx
        push    edi
        mov     edi, ebx
        mov     eax, dword ptr [esp + 1ch]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        mov     dword ptr [esp + 78h], 0ffffffffh
        and     ecx, 3
        rep movsb
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 18h], esi
        jle     L_OUTER_DONE
    L_OUTER:
        mov     edi, dword ptr [esp + 84h]
        push    esi
        mov     ecx, edi
        call    ext_0070CF10
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 24h], eax
        call    ext_0070D310
        mov     eax, dword ptr [esp + 14h]
        fstp    qword ptr [esp + 28h]
        test    eax, eax
        jle     L_OUTER_NEXT
        mov     ebp, dword ptr [esp + 88h]
        xor     edi, edi
        mov     esi, ebx
        sub     ebp, ebx
        mov     ebx, eax
    L_INNER:
        lea     eax, [esi + ebp]
        lea     ecx, [esp + 50h]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 28h]
        call    ext_006DEEC0
        mov     ecx, eax
        add     ecx, edi
        call    ext_006D2630
        mov     edx, dword ptr [esp + 2ch]
        mov     ecx, dword ptr [esp + 28h]
        push    edx
        lea     edx, [esp + 34h]
        push    ecx
        push    edx
        mov     ecx, eax
        mov     dword ptr [esp + 84h], 1
        call    ext_006D2410
        lea     ecx, [esp + 50h]
        mov     byte ptr [esp + 78h], 3
        call    ext_006D80A0
        lea     eax, [esp + 30h]
        mov     ecx, esi
        push    eax
        call    ext_006D26D0
        lea     ecx, [esp + 30h]
        mov     dword ptr [esp + 78h], 0ffffffffh
        call    ext_006D80A0
        add     edi, 20h
        add     esi, 20h
        dec     ebx
        jne     L_INNER
        mov     ebx, dword ptr [esp + 10h]
        mov     esi, dword ptr [esp + 18h]
        mov     ebp, dword ptr [esp + 24h]
    L_OUTER_NEXT:
        mov     eax, dword ptr [esp + 1ch]
        inc     esi
        cmp     esi, eax
        mov     dword ptr [esp + 18h], esi
        jl      L_OUTER
    L_OUTER_DONE:
        mov     edi, dword ptr [esp + 88h]
        mov     ecx, ebp
        mov     edx, ecx
        mov     esi, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        test    ebx, ebx
        pop     edi
        je      L_CLEANUP
        mov     eax, dword ptr [ebx - 4]
        lea     esi, [ebx - 4]
        push    6d80a0h
        push    eax
        push    20h
        push    ebx
        call    ext_006A6D5C
        push    esi
        call    ext_006A5C5C
        add     esp, 4
    L_CLEANUP:
        mov     ecx, dword ptr [esp + 6ch]
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 6ch
        ret     0ch
    }
}

// [0x00766920] sub_00766920 (472 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006BC7D0();
extern "C" void ext_006E85D0();
extern "C" void ext_00766B00();
extern "C" void ext_00766E90();
extern "C" void ext_00771AF0();
extern "C" void ext_0077FD70();
extern "C" void ext_007A8FA0();
extern "C" void ext_007AC610();
extern "C" void ext_007AC670();
extern "C" void ext_007AC8D0();
extern "C" void ext_006DABA0();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_00766920(void* self, int edx_unused, int a0, int a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -1
        push    0x8b8bd0
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x40
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x5c]
        mov     esi, ecx
        push    eax
        mov     dword ptr [esi + 0x138], edi
        call    ext_00766B00
        cmp     al, 1
        jne     L_epilogue
        mov     ecx, dword ptr [esi + 0x138]
        call    ext_006BC370
        push    eax
        mov     ecx, esi
        call    ext_00766E90
        mov     al, byte ptr [esi + 0xb2]
        xor     ebx, ebx
        cmp     al, bl
        je      L_else
        lea     ecx, [esp + 0xc]
        call    ext_0077FB40
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x54], ebx
        push    ecx
        mov     ecx, edi
        call    ext_006BC7D0
        mov     ecx, eax
        call    ext_006E85D0
        push    eax
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x58], 1
        call    ext_0077FD70
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x54], bl
        call    ext_006D80A0
        fld     qword ptr [esp + 0xc]
        mov     edx, dword ptr [esi + 0xc0]
        mov     dword ptr [esp + 0x54], 0xffffffff
        fstp    dword ptr [edx + 0x18]
        fld     qword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xc0]
        fstp    dword ptr [eax + 0x1c]
        fld     qword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi + 0xc0]
        fstp    dword ptr [ecx + 0x20]
        lea     ecx, [esp + 0xc]
        call    ext_006D80A0
        jmp     L_after_else
    L_else:
        mov     edx, dword ptr [esi + 0xc0]
        mov     dword ptr [edx + 0x18], ebx
        mov     eax, dword ptr [esi + 0xc0]
        mov     dword ptr [eax + 0x1c], ebx
        mov     ecx, dword ptr [esi + 0xc0]
        mov     dword ptr [ecx + 0x20], ebx
    L_after_else:
        cmp     byte ptr [esi + 0xb5], bl
        je      L_b5_zero
        fld     qword ptr [esi + 0xc8]
        mov     edx, dword ptr [esi + 0xc0]
        fstp    dword ptr [edx]
        jmp     L_after_b5
    L_b5_zero:
        mov     eax, dword ptr [esi + 0xc0]
        mov     dword ptr [eax], 0x3f800000
    L_after_b5:
        mov     ecx, dword ptr [esi + 0xc0]
        mov     eax, 0x40400000
        mov     word ptr [ecx + 0x10], 0x1f4
        mov     edx, dword ptr [esi + 0xc0]
        mov     dword ptr [edx + 0xc], eax
        mov     ecx, dword ptr [esi + 0xc0]
        mov     dword ptr [ecx + 0x14], eax
        mov     edx, dword ptr [esi + 0xc0]
        mov     dword ptr [edx + 0x4], ebx
        mov     eax, dword ptr [esi + 0xc0]
        mov     ecx, dword ptr [esi + 0xbc]
        push    eax
        push    ecx
        call    ext_007A8FA0
        mov     al, byte ptr mem_00B61218
        add     esp, 0x8
        cmp     al, bl
        je      L_path_b
        cmp     byte ptr mem_00B61219, bl
        jne     L_path_b
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x4c
        ret     0x8
    L_path_b:
        lea     edx, [esp + 0x5c]
        mov     dword ptr [esp + 0x5c], ebx
        push    edx
        call    ext_007AC610
        add     esp, 0x4
        lea     ecx, [esi + 0x2f8]
        push    ebx
        push    0x1
        call    ext_006DABA0
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esi + 0xbc]
        push    edx
        push    eax
        call    ext_007AC8D0
        lea     ecx, [esp + 0x64]
        push    ecx
        call    ext_007AC670
        add     esp, 0xc
        mov     ecx, esi
        call    ext_00771AF0
        cmp     al, 1
        jne     L_epilogue
    L_epilogue:
        mov     ecx, dword ptr [esp + 0x4c]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x4c
        ret     0x8
    }
}

// [0x00761360] sub_00761360 (496 bytes)
extern "C" __declspec(naked) void __fastcall fn_00761360(void* self, int edx_unused, int arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        push    -0x1
        push    0x8bfd88
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x2c
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        push    0xaa8e24
        mov     edi, dword ptr [esi + 0xac]
        add     edi, 0x4
        mov     ecx, edi
        call    ext_007275F0
        push    0xaa91a4
        mov     ecx, edi
        call    ext_007279A0
        mov     ecx, edi
        call    ext_007283B0
        mov     edi, dword ptr [esi + 0xac]
        push    0xaaeb08
        add     edi, 0x4
        mov     ecx, edi
        call    ext_007275F0
        push    0xaa91b4
        mov     ecx, edi
        call    ext_007279A0
        mov     ecx, edi
        call    ext_007283B0
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, ebx
        call    ext_006D9010
        mov     edi, dword ptr [esi + 0xac]
        push    0xaa9184
        fstp    qword ptr [esp + 0x10]
        add     edi, 0x4
        mov     ecx, edi
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_00727FE0
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaadb18
        add     ecx, 0x4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_00728410
        mov     edi, dword ptr [esi + 0xac]
        push    0xaacd0c
        add     edi, 0x4
        mov     ecx, edi
        call    ext_007275F0
        push    0x64
        mov     ecx, edi
        call    ext_00727C80
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, ebx
        call    ext_006D9060
        mov     edi, dword ptr [esi + 0xac]
        push    0xaa9190
        fstp    qword ptr [esp + 0x10]
        add     edi, 0x4
        mov     ecx, edi
        call    ext_007275F0
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_00727FE0
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8cec
        add     ecx, 0x4
        call    ext_007275F0
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, ebx
        call    ext_006D90D0
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 0x4
        mov     dword ptr [esp + 0x48], 0x0
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 0x4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_007283B0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x40], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        pop     esi
        mov     al, 0x1
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}

// [0x00766730] sub_00766730 (415 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_006FC2B0();
extern "C" void ext_00754FA0();
extern "C" __declspec(naked) void __fastcall fn_00766730(void* self) {
    __asm {
        push -1
        push 0x8c037e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x996c58
        mov dword ptr [esp + 0x10], 0x15
        call ext_006FC2B0
        lea ecx, [esi + 0x2d8]
        mov byte ptr [esp + 0x10], 20
        call ext_006D2160
        lea ecx, [esi + 0x2c0]
        mov byte ptr [esp + 0x10], 19
        call ext_006D2160
        lea ecx, [esi + 0x2a8]
        mov byte ptr [esp + 0x10], 18
        call ext_006D2160
        lea ecx, [esi + 0x290]
        mov byte ptr [esp + 0x10], 17
        call ext_006D2160
        lea ecx, [esi + 0x278]
        mov byte ptr [esp + 0x10], 16
        call ext_006D2160
        lea ecx, [esi + 0x25c]
        mov byte ptr [esp + 0x10], 15
        call ext_006D2160
        lea ecx, [esi + 0x240]
        mov byte ptr [esp + 0x10], 14
        call ext_006D2160
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x10], 13
        call ext_006D2160
        lea ecx, [esi + 0x20c]
        mov byte ptr [esp + 0x10], 12
        call ext_006D2160
        lea ecx, [esi + 0x1f4]
        mov byte ptr [esp + 0x10], 11
        call ext_006D2160
        lea ecx, [esi + 0x1dc]
        mov byte ptr [esp + 0x10], 10
        call ext_006D2160
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x10], 9
        call ext_006D2160
        lea ecx, [esi + 0x1a8]
        mov byte ptr [esp + 0x10], 8
        call ext_006D2160
        lea ecx, [esi + 0x18c]
        mov byte ptr [esp + 0x10], 7
        call ext_006D2160
        lea ecx, [esi + 0x174]
        mov byte ptr [esp + 0x10], 6
        call ext_006D2160
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x10], 5
        call ext_006D2160
        lea ecx, [esi + 0x140]
        mov byte ptr [esp + 0x10], 4
        call ext_006D2160
        mov byte ptr [esp + 0x10], 3
        lea ecx, [esi + 0x120]
        call ext_006D2160
        lea ecx, [esi + 0x108]
        mov byte ptr [esp + 0x10], 2
        call ext_006D2160
        lea ecx, [esi + 0xec]
        mov byte ptr [esp + 0x10], 1
        call ext_006D2160
        lea ecx, [esi + 0xd4]
        mov byte ptr [esp + 0x10], 0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00754FA0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00765E20] sub_00765E20 (544 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA220();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FE4B0();
extern "C" void ext_006FE610();
extern "C" void ext_006FE870();
extern "C" int mem_009252A8;
extern "C" int mem_00925208;
extern "C" int mem_009252AC;
extern "C" int mem_00925268;
extern "C" int mem_009251D8;
extern "C" int mem_00925264;

extern "C" __declspec(naked) char __fastcall fn_00765E20(void* self, int edx_unused, void* arg) {
    __asm {
        push    -1
        push    0x8c008e
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xe8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        lea     ecx, [esi + 0xb4]
        call    ext_006E7460
        push    eax
        lea     eax, [esp + 0xb0]
        push    eax
        call    ext_006FE610
        mov     ebx, dword ptr [esp + 0x110]
        push    1
        lea     ecx, [esp + 0x6c]
        push    ebx
        push    ecx
        mov     dword ptr [esp + 0x114], 0
        call    ext_006FE4B0
        add     esp, 0x14
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x100], 1
        call    ext_006E7460
        push    eax
        lea     ecx, [esp + 0xb0]
        call    ext_006E7460
        lea     edx, [esp + 0x18]
        push    eax
        push    edx
        call    ext_006FE2A0
        add     esp, 0xc
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x100], 2
        call    ext_006E7460
        push    eax
        call    ext_006FE870
        add     esp, 4
        test    al, al
        jne     L_fe4
        mov     ebp, dword ptr [mem_009252A8]
        push    0xaab92c
        push    ebx
        call    ebp
        mov     edi, eax
        add     esp, 8
        test    edi, edi
        jne     L_efa
        add     esi, 0x60
        push    0xaaec8c
        mov     ecx, esi
        call    ext_006BA220
        push    ebx
        jmp     L_7e
    L_efa:
        push    0xaab934
        lea     ecx, [esp + 0x18]
        call    ext_006E7460
        push    eax
        call    ebp
        mov     ebx, eax
        add     esp, 8
        test    ebx, ebx
        jne     L_f19
        add     esi, 0x60
        jmp     L_f68
    L_f19:
        push    0x400
        call    dword ptr [mem_00925208]
        mov     ebp, dword ptr [mem_009252AC]
        push    edi
        mov     esi, eax
        push    0x400
        push    1
        push    esi
        call    ebp
        add     esp, 0x14
        test    eax, eax
        jle     L_f5b
    L_f3e:
        push    ebx
        push    eax
        push    1
        push    esi
        call    dword ptr [mem_00925268]
        push    edi
        push    0x400
        push    1
        push    esi
        call    ebp
        add     esp, 0x20
        test    eax, eax
        jg      L_f3e
    L_f5b:
        test    byte ptr [edi + 0xc], 0x10
        jne     L_fce
        mov     eax, dword ptr [esp + 0x10]
        lea     esi, [eax + 0x60]
    L_f68:
        push    0xaaec6c
        mov     ecx, esi
        call    ext_006BA220
        lea     ecx, [esp + 0x14]
        call    ext_006E7460
        push    eax
    L_7e:
        mov     ecx, esi
        call    ext_006BA220
        push    0xaaec68
        mov     ecx, esi
        call    ext_006BA220
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x100], 1
        call    ext_006B9D70
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x100], 0
        call    ext_006B9D70
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0x100], 0xffffffff
        call    ext_006B9D70
        xor     al, al
        jmp     L_end
    L_fce:
        push    esi
        call    dword ptr [mem_009251D8]
        mov     esi, dword ptr [mem_00925264]
        push    edi
        call    esi
        push    ebx
        call    esi
        add     esp, 0xc
    L_fe4:
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x100], 1
        call    ext_006B9D70
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x100], 0
        call    ext_006B9D70
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0x100], 0xffffffff
        call    ext_006B9D70
        mov     al, 1
    L_end:
        mov     ecx, dword ptr [esp + 0xf8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0xf4
        ret     4
    }
}

// [0x00763F50] sub_00763F50 (555 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9F80();
extern "C" void ext_006BA780();
extern "C" void ext_006BA890();
extern "C" void ext_006BA920();
extern "C" void ext_006E7090();
extern "C" __declspec(naked) void __fastcall fn_00763F50(void* self) {
    __asm {
        push -1
        push 0x8bfe35
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x218
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, [esp+0x14]
        mov ebp, 2
        call ext_006B9D10
        xor eax, eax
        mov dword ptr [esp+0x230], eax
        mov dword ptr [esp+0x10], eax
        jmp L_chk
    L_top:
        mov eax, dword ptr [esp+0x10]
    L_chk:
        cmp eax, 4
        ja L_body
        jmp dword ptr [eax*4 + 0x76417c]
    L_c0:
        mov ebp, 1
        jmp L_body
    L_c1:
        mov ebp, 2
        jmp L_body
    L_c2:
        mov ebp, 3
        jmp L_body
    L_c3:
        mov ebp, 4
        jmp L_body
    L_c4:
        mov ebp, 5
    L_body:
        push 0xaae558
        lea ecx, [esp+0x148]
        call ext_006B9D80
        mov esi, eax
        push ebp
        mov byte ptr [esp+0x234], 1
        call ext_006E7090
        add esp, 4
        lea ecx, [esp+0xf8]
        push eax
        call ext_006B9D80
        mov edi, eax
        push 0xaae554
        lea ecx, [esp+0x194]
        mov byte ptr [esp+0x234], 2
        call ext_006B9D80
        push edi
        push eax
        lea eax, [esp+0xb4]
        mov byte ptr [esp+0x238], 3
        push eax
        call ext_006B9F80
        push esi
        lea ecx, [esp+0x1ec]
        push eax
        push ecx
        mov byte ptr [esp+0x248], 4
        call ext_006B9F80
        add esp, 0x18
        push eax
        lea ecx, [esp+0x18]
        mov byte ptr [esp+0x234], 5
        call ext_006B9E60
        lea ecx, [esp+0x1dc]
        mov byte ptr [esp+0x230], 4
        call ext_006B9D70
        lea ecx, [esp+0xac]
        mov byte ptr [esp+0x230], 3
        call ext_006B9D70
        lea ecx, [esp+0x190]
        mov byte ptr [esp+0x230], 2
        call ext_006B9D70
        lea ecx, [esp+0xf8]
        mov byte ptr [esp+0x230], 1
        call ext_006B9D70
        lea ecx, [esp+0x144]
        mov byte ptr [esp+0x230], 0
        call ext_006B9D70
        lea ecx, [esp+0x14]
        call ext_006B99C0
        mov esi, dword ptr [esp+0x238]
        lea edx, [esp+0x60]
        push eax
        push edx
        mov ecx, esi
        call ext_006BA920
        lea ecx, [esp+0x14]
        mov byte ptr [esp+0x230], 6
        push ecx
        mov ecx, eax
        call ext_006BA780
        lea ecx, [esp+0x60]
        mov bl, al
        mov byte ptr [esp+0x230], 0
        call ext_006B9D70
        test bl, bl
        jne L_hit
        mov eax, dword ptr [esp+0x10]
        inc eax
        cmp eax, 5
        mov dword ptr [esp+0x10], eax
        jl L_top
        jmp L_end
    L_hit:
        mov ecx, esi
        call ext_006B99C0
        lea ecx, [esp+0x14]
        mov edi, eax
        call ext_006B99C0
        sub edi, eax
        lea edx, [esp+0x60]
        push edi
        push edx
        mov ecx, esi
        call ext_006BA890
        push eax
        mov ecx, esi
        mov byte ptr [esp+0x234], 7
        call ext_006B9E60
        lea ecx, [esp+0x60]
        mov byte ptr [esp+0x230], 0
        call ext_006B9D70
    L_end:
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0x230], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp+0x228]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x224
        ret
    }
}

// [0x00760490] sub_00760490 (624 bytes)
extern "C" void ext_006D7A90();
extern "C" void ext_0075D520();
extern "C" void ext_0075F810();
extern "C" void ext_0075F9A0();
extern "C" void ext_0075FBC0();
extern "C" void ext_0075FD20();
extern "C" void ext_0075FE30();
extern "C" void ext_00760070();
extern "C" void ext_00760140();
extern "C" void ext_007601E0();

extern "C" __declspec(naked) void __fastcall fn_00760490(void* self, int edx_unused, int arg) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    ext_006D7A90
        test    eax, eax
        je      L_skip_a
        push    esi
        mov     ecx, edi
        call    ext_0075D520
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaae104
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0x7b
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        push    esi
        mov     ecx, edi
        call    ext_0075F810
        push    esi
        mov     ecx, edi
        call    ext_0075F9A0
        push    esi
        mov     ecx, edi
        call    ext_0075FBC0
        push    esi
        mov     ecx, edi
        call    ext_0075FD20
        push    esi
        mov     ecx, edi
        call    ext_00760070
        push    esi
        mov     ecx, edi
        call    ext_00760140
        push    esi
        mov     ecx, edi
        call    ext_0075FE30
        push    esi
        mov     ecx, edi
        call    ext_007601E0
    L_skip_a:
        mov     eax, dword ptr [esi + 0x1a8]
        mov     ecx, eax
        imul    ecx, dword ptr [esi + 0x1ac]
        test    ecx, ecx
        je      L_epilogue
        test    eax, eax
        je      L_C
        mov     ebx, dword ptr [edi + 0xac]
        mov     ebp, dword ptr [esi + 0x1b0]
        add     ebx, 4
        push    0xaae0c4
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1c0]
        add     ebx, 4
        push    0xaae0bc
        mov     ecx, ebx
        mov     ebp, edx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x1c2]
        add     ebx, 4
        push    0xaae0b4
        mov     ecx, ebx
        mov     ebp, eax
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        mov     ebp, dword ptr [esi + 0x1b8]
        add     ebx, 4
        push    0xaae0ac
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        mov     ebp, dword ptr [esi + 0x1a8]
        add     ebx, 4
        push    0xaae0a4
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
    L_C:
        mov     eax, dword ptr [esi + 0x1ac]
        test    eax, eax
        je      L_epilogue
        mov     ebx, dword ptr [edi + 0xac]
        mov     ebp, dword ptr [esi + 0x1b4]
        add     ebx, 4
        push    0xaae094
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x1c1]
        add     ebx, 4
        mov     ebp, ecx
        push    0xaae08c
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1c3]
        add     ebx, 4
        push    0xaae084
        mov     ecx, ebx
        mov     ebp, edx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        mov     ebp, dword ptr [esi + 0x1bc]
        add     ebx, 4
        push    0xaae07c
        mov     ecx, ebx
        call    ext_007275F0
        push    ebp
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     edi, dword ptr [edi + 0xac]
        mov     esi, dword ptr [esi + 0x1ac]
        add     edi, 4
        push    0xaae074
        mov     ecx, edi
        call    ext_007275F0
        push    esi
        mov     ecx, edi
        call    ext_00727C80
        mov     ecx, edi
        call    ext_007283B0
    L_epilogue:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    }
}

// [0x007601E0] sub_007601E0 (688 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_006FC940();
extern "C" void ext_006FDF90();
extern "C" __declspec(naked) char __fastcall fn_007601E0(void* self, int edx_unused, void* a1) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        push    -1
        push    0x8bcb18
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x54
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0xf], 1
        call    ext_006B9D10
        mov     ebx, dword ptr [ebp + 0x8]
        xor     esi, esi
        push    6
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x70], esi
        mov     dword ptr [esp + 0x18], esi
        call    ext_006FDF90
        test    eax, eax
        je      L76_243
        push    6
        push    esi
        mov     ecx, ebx
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006FC940
        mov     esi, eax
        mov     eax, dword ptr [esi]
        jmp     L76_247
    L76_243:
        mov     eax, dword ptr [esp + 0x10]
    L76_247:
        dec     eax
        je      L76_450
        dec     eax
        jne     L76_427
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jne     L76_269
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebx + 0x1dc]
        cmp     eax, edx
        je      L76_283
    L76_269:
        cmp     ecx, 2
        jne     L76_47A
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [ebx + 0x1dc]
        cmp     eax, ecx
        jne     L76_47A
    L76_283:
        push    0xaae0d4
    L76_288:
        lea     ecx, [esp + 0x18]
        call    ext_006B9EC0
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaae0e4
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaacd0c
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0x64
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        lea     ecx, [esp + 0x14]
        call    ext_006E7460
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaadc2c
        add     ebx, 4
        mov     dword ptr [esp + 0x14], eax
        mov     ecx, ebx
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, ebx
        push    eax
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadc58
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jle     L76_3AB
        xor     ebx, ebx
        mov     dword ptr [esp + 0x10], eax
    L76_330:
        mov     edx, dword ptr [esi + 0x18]
        mov     ecx, ebx
        add     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        push    edx
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebx + ecx + 0xc]
        push    edx
        mov     eax, dword ptr [ebx + ecx + 0x8]
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebx + ecx + 0x14]
        push    edx
        mov     eax, dword ptr [ebx + ecx + 0x10]
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebx + ecx + 0x1c]
        push    edx
        mov     eax, dword ptr [ebx + ecx + 0x18]
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0x20
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L76_330
    L76_3AB:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        cmp     dword ptr [esi + 0x4], 2
        jne     L76_40B
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadc4c
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esi + 0x20]
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jle     L76_3FD
    L76_3DF:
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [ecx + 4*ebx]
        mov     ecx, dword ptr [edi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jl      L76_3DF
    L76_3FD:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
    L76_40B:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
    L76_427:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x68], -1
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x60]
        mov     al, byte ptr [esp + 0xf]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    L76_450:
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jne     L76_461
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebx + 0x28]
        cmp     eax, edx
        je      L76_470
    L76_461:
        cmp     ecx, 2
        jne     L76_47A
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [ebx + 0x28]
        cmp     eax, ecx
        jne     L76_47A
    L76_470:
        push    0xaadfe0
        jmp     L76_288
    L76_47A:
        mov     byte ptr [esp + 0xf], 0
        jmp     L76_427
    }
}

// [0x007663D0] sub_007663D0 (829 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_00754F20();
extern "C" __declspec(naked) void __fastcall fn_007663D0(void* self, int edx_unused, int a0) {
    __asm {
        push    -1
        push    0x8c0240
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x10], esi
        call    ext_00754F20
        lea     edi, [esi + 0xd4]
        xor     ebx, ebx
        push    4
        push    0x10
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0xec]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 1
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x108]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 2
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x120]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 3
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x140]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 4
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x15c]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 5
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x174]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 6
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x18c]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 7
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x1a8]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 8
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x1c4]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 9
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x1dc]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xa
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x1f4]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xb
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x20c]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xc
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x224]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xd
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x240]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xe
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x25c]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0xf
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x278]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0x10
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x290]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0x11
        call    ext_006D2130
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        lea     edi, [esi + 0x2a8]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0x12
        call    ext_006D2130
        lea     ecx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], ecx
        lea     edi, [esi + 0x2c0]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0x13
        call    ext_006D2130
        lea     edx, [edi + 0x10]
        mov     dword ptr [edi + 0x14], edx
        lea     edi, [esi + 0x2d8]
        push    4
        push    0x10
        mov     ecx, edi
        mov     byte ptr [esp + 0x20], 0x14
        call    ext_006D2130
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [edi + 0x10]
        mov     dword ptr [edi + 0x14], eax
        mov     dword ptr [esi + 0x2f0], ebx
        mov     dword ptr [esi + 0x2f4], ebx
        mov     dword ptr [esi + 0x2f8], ebx
        mov     dword ptr [esi + 0x2fc], ebx
        mov     dword ptr [esi], 0x996c58
        mov     dword ptr [esi + 0xb8], ebx
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0xc0], ebx
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0x104], ebx
        mov     dword ptr [esi + 0x274], ebx
        mov     dword ptr [esi + 0x23c], ebx
        mov     dword ptr [esi + 0x1a4], ebx
        mov     dword ptr [esi + 0x138], ebx
        mov     dword ptr [esi + 0x1c0], ebx
        mov     dword ptr [esi + 0x158], ebx
        mov     dword ptr [esi + 0x258], ebx
        mov     byte ptr [esi + 0x300], 1
        mov     byte ptr [esi + 0xac], 1
        mov     byte ptr [esi + 0xad], 1
        mov     byte ptr [esi + 0xae], 1
        mov     byte ptr [esi + 0xaf], 1
        mov     byte ptr [esi + 0xb0], 1
        mov     byte ptr [esi + 0xb1], 1
        mov     byte ptr [esi + 0xb2], 1
        mov     byte ptr [esi + 0xb4], bl
        mov     byte ptr [esi + 0xb5], 1
        mov     byte ptr [esi + 0xb3], bl
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x00765AE0] sub_00765AE0 (832 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_006FE4B0();
extern "C" void ext_00702200();
extern "C" void ext_00702700();
extern "C" void ext_0070C060();
extern "C" void ext_0070C130();
extern "C" void ext_0070C200();
extern "C" void ext_0070C370();
extern "C" void ext_0070C3A0();
extern "C" void ext_00765E20();
extern "C" int mem_0092525C;
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __fastcall fn_00765AE0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        push    -1
        push    0x8c0057
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x114
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xb0]
        test    eax, eax
        jne     L_00765AE0_print
        xor     al, al
        mov     ecx, dword ptr [esp + 0x120]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_00765AE0_print:
        mov     ebx, dword ptr [mem_0092525C]
        push    0xaad034
        push    eax
        call    ebx
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [edi + 0xb0]
        add     esp, 8
        push    eax
        push    0xaaec5c
        push    ecx
        call    ebx
        mov     esi, dword ptr [ebp + 0x10]
        add     esp, 0xc
        test    esi, esi
        je      L_00765AE0_after
        mov     ecx, esi
        call    ext_00702700
        test    eax, eax
        jne     L_00765AE0_after
        mov     ecx, esi
        call    ext_00702200
        push    eax
        mov     ecx, edi
        call    ext_00765E20
        push    1
        mov     ecx, esi
        call    ext_00702200
        lea     edx, [esp + 0xd8]
        push    eax
        push    edx
        call    ext_006FE4B0
        add     esp, 0xc
        lea     ecx, [esp + 0xd4]
        mov     dword ptr [esp + 0x128], 0
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [edi + 0xb0]
        push    0xaaec50
        push    eax
        call    ebx
        add     esp, 0xc
        lea     ecx, [esp + 0xd4]
        mov     dword ptr [esp + 0x128], 0xffffffff
        call    ext_006B9D70
    L_00765AE0_after:
        mov     esi, dword ptr [ebp + 0xc]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    ext_0070C060
        mov     dword ptr [esp + 0xc], eax
        lea     edx, [esp + 0x34]
        mov     ecx, esi
        push    edx
        mov     dword ptr [esp + 0x12c], 1
        call    ext_0070C060
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x54]
        mov     ecx, esi
        push    eax
        mov     byte ptr [esp + 0x12c], 2
        call    ext_0070C060
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [edi + 0xb0]
        push    edx
        push    eax
        push    0xaaec40
        push    ecx
        call    ebx
        add     esp, 0x20
        lea     ecx, [esp + 0x54]
        call    ext_006D80A0
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x128], 1
        call    ext_006D80A0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x128], 0xffffffff
        call    ext_006D80A0
        lea     edx, [esp + 0x54]
        mov     ecx, esi
        push    edx
        call    ext_0070C130
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x34]
        mov     ecx, esi
        push    eax
        mov     dword ptr [esp + 0x12c], 3
        call    ext_0070C130
        mov     dword ptr [esp + 0xc], eax
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x128], 4
        push    ecx
        mov     ecx, esi
        call    ext_0070C130
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [edi + 0xb0]
        push    edx
        push    eax
        push    0xaaec30
        push    ecx
        call    ebx
        add     esp, 0x20
        lea     ecx, [esp + 0x14]
        call    ext_006D80A0
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x128], 3
        call    ext_006D80A0
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x128], 0xffffffff
        call    ext_006D80A0
        lea     edx, [esp + 0x94]
        mov     ecx, esi
        push    edx
        call    ext_0070C200
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0xb4]
        mov     ecx, esi
        push    eax
        mov     dword ptr [esp + 0x12c], 5
        call    ext_0070C200
        mov     dword ptr [esp + 0xc], eax
        lea     ecx, [esp + 0x74]
        mov     byte ptr [esp + 0x128], 6
        push    ecx
        mov     ecx, esi
        call    ext_0070C200
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [edi + 0xb0]
        push    edx
        push    eax
        push    0xaaec20
        push    ecx
        call    ebx
        add     esp, 0x20
        lea     ecx, [esp + 0x74]
        call    ext_006D80A0
        lea     ecx, [esp + 0xb4]
        mov     byte ptr [esp + 0x128], 5
        call    ext_006D80A0
        lea     ecx, [esp + 0x94]
        mov     dword ptr [esp + 0x128], 0xffffffff
        call    ext_006D80A0
        mov     edx, dword ptr [edi + 0xb0]
        push    0xaaec14
        push    edx
        call    ebx
        add     esp, 8
        mov     ecx, esi
        call    ext_0070C3A0
        fmul    qword ptr [mem_009334D8]
        mov     eax, dword ptr [edi + 0xb0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0xaaec0c
        push    eax
        call    ebx
        add     esp, 0x10
        mov     ecx, esi
        call    ext_0070C370
        mov     ecx, dword ptr [edi + 0xb0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0xaaec04
        push    ecx
        call    ebx
        mov     ecx, dword ptr [esp + 0x130]
        add     esp, 0x10
        mov     al, 1
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}

// [0x00763AF0] sub_00763AF0 (848 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B99C0();
extern "C" void ext_006C9FD0();
extern "C" void ext_006D55F0();
extern "C" void ext_006DCB60();
extern "C" void ext_006E8E20();
extern "C" void ext_006E9000();
extern "C" void ext_00784650();

extern "C" __declspec(naked) void __fastcall fn_00763AF0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x8], ecx
        push    esi
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        xor     ebx, ebx
        call    ext_006B99C0
        mov     ecx, eax
        call    ext_006C9FD0
        mov     ebp, eax
        test    ebp, ebp
        jle     L_763C53
    L_763B15:
        push    0x4
        call    ext_006A5C62
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        mov     edi, eax
        push    ebx
        call    ext_006B99C0
        mov     ecx, eax
        call    ext_006E9000
        mov     esi, eax
        push    0xaa8ca8
        push    0xaa8d90
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763B7D
        push    0xaa8ca4
        push    0xaa8d90
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763B7D
        push    0xaa8ca0
        push    0xaa8d90
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763B7D
        xor     eax, eax
        jmp     L_763B82
    L_763B7D:
        mov     eax, 0x1
    L_763B82:
        push    0xaa8ca8
        push    0xaa8d9c
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi], al
        call    ext_006DCB60
        test    al, al
        jne     L_763BCD
        push    0xaa8ca4
        push    0xaa8d9c
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763BCD
        push    0xaa8ca0
        push    0xaa8d9c
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763BCD
        xor     eax, eax
        jmp     L_763BD2
    L_763BCD:
        mov     eax, 0x1
    L_763BD2:
        push    0xaa8ca8
        push    0xaa8da8
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x1], al
        call    ext_006DCB60
        test    al, al
        jne     L_763C1E
        push    0xaa8ca4
        push    0xaa8da8
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763C1E
        push    0xaa8ca0
        push    0xaa8da8
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763C1E
        xor     eax, eax
        jmp     L_763C23
    L_763C1E:
        mov     eax, 0x1
    L_763C23:
        push    0xaa8db0
        push    0x0
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x2], al
        call    ext_006DCB60
        mov     byte ptr [edi + 0x3], al
        mov     eax, dword ptr [esp + 0x10]
        push    edi
        push    esi
        lea     ecx, [eax + 0xc4]
        call    ext_00784650
        inc     ebx
        cmp     ebx, ebp
        jl      L_763B15
    L_763C53:
        mov     ecx, dword ptr [esp + 0x18]
        xor     ebx, ebx
        call    ext_006B99C0
        mov     ecx, eax
        call    ext_006D55F0
        mov     ebp, eax
        test    ebp, ebp
        jle     L_763E2C
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, 0xd8
        mov     dword ptr [esp + 0x10], ecx
    L_763C7D:
        push    0x7
        call    ext_006A5C62
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        mov     edi, eax
        push    ebx
        call    ext_006B99C0
        mov     ecx, eax
        call    ext_006E8E20
        mov     esi, eax
        push    0xaa8ca8
        push    0xaa8dc4
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763CE5
        push    0xaa8ca4
        push    0xaa8dc4
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763CE5
        push    0xaa8ca0
        push    0xaa8dc4
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763CE5
        xor     eax, eax
        jmp     L_763CEA
    L_763CE5:
        mov     eax, 0x1
    L_763CEA:
        push    0xaa8ca8
        push    0xaa8dcc
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi], al
        call    ext_006DCB60
        test    al, al
        jne     L_763D35
        push    0xaa8ca4
        push    0xaa8dcc
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763D35
        push    0xaa8ca0
        push    0xaa8dcc
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763D35
        xor     eax, eax
        jmp     L_763D3A
    L_763D35:
        mov     eax, 0x1
    L_763D3A:
        push    0xaa8ca8
        push    0xaa8dd4
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x1], al
        call    ext_006DCB60
        test    al, al
        jne     L_763D86
        push    0xaa8ca4
        push    0xaa8dd4
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763D86
        push    0xaa8ca0
        push    0xaa8dd4
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763D86
        xor     eax, eax
        jmp     L_763D8B
    L_763D86:
        mov     eax, 0x1
    L_763D8B:
        push    0xaa8ca8
        push    0xaa8db8
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x2], al
        call    ext_006DCB60
        test    al, al
        jne     L_763DD7
        push    0xaa8ca4
        push    0xaa8db8
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763DD7
        push    0xaa8ca0
        push    0xaa8db8
        push    0x0
        mov     ecx, esi
        call    ext_006DCB60
        test    al, al
        jne     L_763DD7
        xor     eax, eax
        jmp     L_763DDC
    L_763DD7:
        mov     eax, 0x1
    L_763DDC:
        push    0xaa8de0
        push    0x0
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x3], al
        call    ext_006DCB60
        push    0xaa8de8
        push    0x0
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x4], al
        call    ext_006DCB60
        push    0xaa8df8
        push    0x0
        push    0x0
        mov     ecx, esi
        mov     byte ptr [edi + 0x6], al
        call    ext_006DCB60
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov     byte ptr [edi + 0x5], al
        call    ext_00784650
        inc     ebx
        cmp     ebx, ebp
        jl      L_763C7D
    L_763E2C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}

// [0x00766B00] sub_00766B00 (912 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006BC370();
extern "C" void ext_006BAC80();
extern "C" void ext_006D55F0();
extern "C" void ext_006D5600();
extern "C" void ext_006D5620();
extern "C" void ext_006DA370();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6320();
extern "C" void ext_006E6340();
extern "C" void ext_006E7440();
extern "C" void ext_006E9420();
extern "C" void ext_00771B90();
extern "C" void ext_00771C10();
extern "C" void ext_00771E00();
extern "C" void ext_007A8B20();
extern "C" void ext_007A9230();
extern "C" void ext_007AA300();
extern "C" void ext_007AA910();
extern "C" int mem_00B61168;
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) char __fastcall fn_00766B00(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8c03ae
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x108
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, dword ptr [esi + 0x138]
        call    ext_006BC370
        mov     edi, dword ptr [esp + 0x124]
        xor     ebp, ebp
        cmp     edi, ebp
        mov     dword ptr [esi + 0x13c], eax
        je      L_after_vt
        mov     ecx, dword ptr [mem_00B61168]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        test    al, al
        jne     L_flags
    L_after_vt:
        push    4
        lea     ecx, [esi + 8]
        call    ext_006E7440
        jmp     L_766c31
    L_flags:
        push    8
        mov     ecx, edi
        call    ext_007AA910
        cmp     eax, 1
        push    7
        sete    dl
        mov     ecx, edi
        mov     byte ptr [esi + 0xac], dl
        call    ext_007AA910
        cmp     eax, 1
        push    9
        sete    al
        mov     ecx, edi
        mov     byte ptr [esi + 0xad], al
        call    ext_007AA910
        cmp     eax, 1
        push    0xa
        sete    cl
        mov     byte ptr [esi + 0xae], cl
        mov     ecx, edi
        call    ext_007AA910
        cmp     eax, 1
        push    0xb
        sete    dl
        mov     ecx, edi
        mov     byte ptr [esi + 0xaf], dl
        call    ext_007AA910
        cmp     eax, 1
        push    0xc
        sete    al
        mov     ecx, edi
        mov     byte ptr [esi + 0xb0], al
        call    ext_007AA910
        cmp     eax, 1
        push    0xd
        sete    cl
        mov     byte ptr [esi + 0xb1], cl
        mov     ecx, edi
        call    ext_007AA910
        cmp     eax, 1
        push    1
        sete    dl
        mov     ecx, edi
        mov     byte ptr [esi + 0xb2], dl
        call    ext_007AA910
        cmp     eax, 1
        push    0xe
        sete    al
        mov     ecx, edi
        mov     byte ptr [esi + 0xb4], al
        call    ext_007AA910
        cmp     eax, 1
        push    0x11
        sete    cl
        mov     byte ptr [esi + 0xb5], cl
        mov     ecx, edi
        call    ext_007AA910
        cmp     eax, 1
        sete    dl
        mov     byte ptr [esi + 0xb3], dl
    L_766c31:
        mov     al, byte ptr [esi + 0xb5]
        test    al, al
        je      L_766c51
        mov     dword ptr [esi + 0xc8], 0xc993264d
        mov     dword ptr [esi + 0xcc], 0x3fd93264
        jmp     L_766c61
    L_766c51:
        mov     dword ptr [esi + 0xc8], ebp
        mov     dword ptr [esi + 0xcc], 0x3ff00000
    L_766c61:
        lea     edi, [esi + 0xbc]
        push    edi
        call    ext_007A9230
        mov     al, byte ptr [mem_00B61218]
        add     esp, 4
        test    al, al
        je      L_766c89
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        jne     L_766c89
        xor     al, al
        jmp     L_end
    L_766c89:
        mov     eax, dword ptr [edi]
        push    1
        push    eax
        call    ext_007AA300
        mov     al, byte ptr [mem_00B61218]
        add     esp, 8
        test    al, al
        je      L_766caf
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        jne     L_766caf
        xor     al, al
        jmp     L_end
    L_766caf:
        lea     ecx, [esi + 0xc0]
        push    ecx
        call    ext_007A8B20
        mov     al, byte ptr [mem_00B61218]
        add     esp, 4
        test    al, al
        je      L_766cd7
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        jne     L_766cd7
        xor     al, al
        jmp     L_end
    L_766cd7:
        mov     ecx, dword ptr [esi + 0x13c]
        push    ebx
        push    1
        call    ext_006C2860
        lea     ecx, [esp + 0x18]
        call    ext_00771B90
        push    0xb5d2c0
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x124], ebp
        call    ext_006E62C0
        mov     ecx, dword ptr [esi + 4]
        mov     byte ptr [esp + 0x120], 1
        call    ext_006D55F0
        mov     ebx, eax
        xor     edi, edi
        cmp     ebx, ebp
        jbe     L_766d5d
    L_766d1b:
        mov     ecx, dword ptr [esi + 4]
        push    edi
        call    ext_006D5600
        mov     ebp, eax
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        lea     ecx, [esp + 0x50]
        call    ext_006E6320
        lea     edx, [esp + 0x4c]
        push    0xa
        push    edx
        lea     ecx, [esp + 0x20]
        call    ext_00771E00
        lea     ecx, [esp + 0x4c]
        call    ext_006E6340
        push    eax
        mov     ecx, ebp
        call    ext_006BAC80
        inc     edi
        cmp     edi, ebx
        jb      L_766d1b
    L_766d5d:
        lea     ecx, [esp + 0xe4]
        call    ext_00771B90
        mov     ecx, dword ptr [esi + 4]
        mov     byte ptr [esp + 0x120], 2
        call    ext_006E9420
        mov     ebx, eax
        xor     edi, edi
        test    ebx, ebx
        jbe     L_766dc3
    L_766d81:
        mov     ecx, dword ptr [esi + 4]
        push    edi
        call    ext_006D5620
        mov     ebp, eax
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        lea     ecx, [esp + 0x50]
        call    ext_006E6320
        lea     eax, [esp + 0x4c]
        push    0xf
        push    eax
        lea     ecx, [esp + 0x20]
        call    ext_00771E00
        lea     ecx, [esp + 0x4c]
        call    ext_006E6340
        push    eax
        mov     ecx, ebp
        call    ext_006BAC80
        inc     edi
        cmp     edi, ebx
        jb      L_766d81
    L_766dc3:
        mov     cl, byte ptr [esi + 0xae]
        mov     byte ptr [esi + 0x300], cl
        mov     ecx, dword ptr [esi + 0x138]
        call    ext_006BC370
        mov     edx, dword ptr [eax]
        lea     edi, [esi + 0x2f8]
        lea     ebp, [esi + 0x2f0]
        push    edi
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x30]
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [edi]
        cmp     eax, ecx
        pop     ebx
        jne     L_766e37
        mov     ecx, dword ptr [ebp + 4]
        mov     eax, dword ptr [edi + 4]
        cmp     ecx, eax
        jne     L_766e37
        xor     eax, eax
        mov     byte ptr [esi + 0x300], 0
        push    eax
        push    eax
        push    0x64
        push    eax
        push    eax
        mov     dword ptr [ebp], eax
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [ebp + 4], eax
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], eax
        call    ext_006DA370
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi], edx
        mov     dword ptr [edi + 4], eax
    L_766e37:
        lea     ecx, [esp + 0xe0]
        mov     byte ptr [esp + 0x11c], 1
        call    ext_00771C10
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x11c], 0
        call    ext_006DE460
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x11c], 0xffffffff
        call    ext_00771C10
        mov     al, 1
    L_end:
        mov     ecx, dword ptr [esp + 0x114]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x114
        ret     4
        nop
        nop
        nop
        nop
    }
}

// [0x0076ADB0] sub_0076ADB0 (928 bytes)
extern "C" void ext_006C4220();
extern "C" void ext_006D80A0();
extern "C" int mem_00993808;
extern "C" int mem_0092A270;
extern "C" int mem_00993CA0;
extern "C" int mem_00993C88;
extern "C" int mem_009324A8;
extern "C" int mem_00993828;
extern "C" int mem_0092A278;
extern "C" int mem_0092C510;
extern "C" __declspec(naked) void __fastcall fn_0076ADB0(void* self, int edx_unused, void* a0, double d0, int i0, int i1, int i2, int i3, int p0, int p1) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x8c08c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x100
        fld     qword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp - 0x2c], eax
        mov     eax, dword ptr [ebp + 0x18]
        mov     dword ptr [ebp - 0x28], ecx
        fmul    qword ptr [mem_00993808]
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x4], 0
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x10], ecx
        fstp    qword ptr [ebp - 0x44]
        fld     qword ptr [ebp - 0x44]
        fsincos
        mov     eax, dword ptr [ebp - 0x10]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x4c]
        fld     qword ptr [ebp - 0x4c]
        fstp    qword ptr [ebp - 0x5c]
        fld     qword ptr [ebp - 0x1c]
        fmul    qword ptr [mem_00993808]
        lea     edx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x10], edx
        fstp    qword ptr [ebp - 0x44]
        fld     qword ptr [ebp - 0x44]
        fsincos
        mov     eax, dword ptr [ebp - 0x10]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x4c]
        fld     qword ptr [ebp - 0x4c]
        fstp    qword ptr [ebp - 0x1c]
        fld     qword ptr [ebp - 0x2c]
        fmul    qword ptr [mem_00993808]
        lea     eax, [ebp - 0x24]
        mov     dword ptr [ebp - 0x10], eax
        fstp    qword ptr [ebp - 0x44]
        fld     qword ptr [ebp - 0x44]
        fsincos
        mov     eax, dword ptr [ebp - 0x10]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x4c]
        fld     qword ptr [ebp - 0x4c]
        fld     qword ptr [ebp - 0x5c]
        fld     qword ptr [ebp - 0x1c]
        fmul    st, st(1)
        fld     qword ptr [ebp - 0x1c]
        fmul    qword ptr [ebp - 0x34]
        fstp    qword ptr [ebp - 0x2c]
        fld     qword ptr [ebp - 0x24]
        fmul    qword ptr [ebp - 0x3c]
        fstp    qword ptr [ebp - 0xe4]
        fld     st(2)
        fmul    qword ptr [ebp - 0x3c]
        fstp    qword ptr [ebp - 0xdc]
        fld     qword ptr [ebp - 0x1c]
        fchs
        fstp    qword ptr [ebp - 0xd4]
        fld     st(0)
        fmul    qword ptr [ebp - 0x24]
        fld     st(3)
        fmul    qword ptr [ebp - 0x34]
        fsubp   st(1), st
        fstp    qword ptr [ebp - 0xc4]
        fmul    st, st(2)
        fld     qword ptr [ebp - 0x24]
        fmul    qword ptr [ebp - 0x34]
        faddp   st(1), st
        fstp    qword ptr [ebp - 0xbc]
        fld     qword ptr [ebp - 0x3c]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0xb4]
        fld     qword ptr [ebp - 0x2c]
        fmul    qword ptr [ebp - 0x24]
        fld     st(2)
        fmul    st, st(2)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0xa4]
        fld     qword ptr [ebp - 0x2c]
        fmul    st, st(2)
        fld     qword ptr [ebp - 0x24]
        fmul    st, st(2)
        fsubp   st(1), st
        fstp    qword ptr [ebp - 0x9c]
        fstp    st(0)
        fstp    st(0)
        fld     qword ptr [ebp - 0x3c]
        fmul    qword ptr [ebp - 0x34]
        fst     qword ptr [ebp - 0x94]
        fadd    qword ptr [ebp - 0xbc]
        fld     st(0)
        fadd    qword ptr [ebp - 0xe4]
        fadd    qword ptr [mem_0092A270]
        fmul    qword ptr [mem_00993CA0]
        fst     qword ptr [ebp - 0x14]
        fcomp   qword ptr [mem_00993C88]
        fnstsw  ax
        test    ah, 0x41
        jne     L_neg
        fstp    st(0)
        fld     qword ptr [ebp - 0x14]
        fsqrt
        fst     qword ptr [ebp - 0xec]
        fdivr   qword ptr [mem_00993CA0]
        fst     qword ptr [ebp - 0x14]
        fld     qword ptr [ebp - 0xb4]
        fsub    qword ptr [ebp - 0x9c]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x104]
        fld     qword ptr [ebp - 0xa4]
        fsub    qword ptr [ebp - 0xd4]
        fmulp   st(1), st
        fld     qword ptr [ebp - 0xdc]
        fsub    qword ptr [ebp - 0xc4]
        fmul    qword ptr [ebp - 0x14]
        jmp     L_B009
    L_neg:
        fmul    qword ptr [mem_009324A8]
        mov     dword ptr [ebp - 0xec], 0
        mov     dword ptr [ebp - 0xe8], 0
        fld     st(0)
        fcomp   qword ptr [mem_00993C88]
        fnstsw  ax
        test    ah, 0x41
        jne     L_AFAE
        fsqrt
        fst     qword ptr [ebp - 0x104]
        fdivr   qword ptr [mem_00993828]
        fst     qword ptr [ebp - 0x14]
        fmul    qword ptr [ebp - 0xdc]
        fld     qword ptr [ebp - 0xd4]
        fmul    qword ptr [ebp - 0x14]
        jmp     L_B009
    L_AFAE:
        fstp    st(0)
        fld     qword ptr [mem_0092A270]
        fsub    qword ptr [ebp - 0x94]
        mov     dword ptr [ebp - 0x104], 0
        mov     dword ptr [ebp - 0x100], 0
        fmul    qword ptr [mem_00993828]
        fld     st(0)
        fcomp   qword ptr [mem_00993C88]
        fnstsw  ax
        test    ah, 0x41
        jne     L_AFFB
        fsqrt
        fst     qword ptr [ebp - 0x14]
        fld     qword ptr [mem_00993828]
        fdiv    qword ptr [ebp - 0x14]
        fmul    qword ptr [ebp - 0xb4]
        jmp     L_B009
    L_AFFB:
        fstp    st(0)
        fld     qword ptr [mem_0092A278]
        fld     qword ptr [mem_0092A270]
    L_B009:
        fchs
        fld     qword ptr [ebp - 0x104]
        fld     qword ptr [ebp - 0xec]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(4)
        fmul    st, st(5)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fld     st(0)
        fcomp   qword ptr [mem_0092A278]
        fnstsw  ax
        test    ah, 0x40
        jne     L_B042
        fdivr   qword ptr [mem_0092C510]
    L_B042:
        fld     st(0)
        fmul    st, st(3)
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [ebp - 0xe4]
        push    ecx
        push    edx
        fstp    qword ptr [ebp - 0x2c]
        fld     st(0)
        fmul    st, st(4)
        fstp    qword ptr [ebp - 0x1c]
        fmul    st, st(4)
        fstp    qword ptr [ebp - 0x14]
        fld     st(0)
        fmul    qword ptr [ebp - 0x2c]
        fstp    qword ptr [ebp - 0x4c]
        fld     st(0)
        fmul    qword ptr [ebp - 0x1c]
        fstp    qword ptr [ebp - 0x5c]
        fmul    qword ptr [ebp - 0x14]
        fstp    qword ptr [ebp - 0x54]
        fld     qword ptr [ebp - 0x2c]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x10c]
        fld     qword ptr [ebp - 0x1c]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x2c]
        fld     qword ptr [ebp - 0x14]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x64]
        fstp    st(0)
        fld     qword ptr [ebp - 0x1c]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x44]
        fld     qword ptr [ebp - 0x14]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x1c]
        fstp    st(0)
        fmul    qword ptr [ebp - 0x14]
        fld     qword ptr [mem_0092A270]
        fsub    qword ptr [ebp - 0x44]
        fsub    st, st(1)
        fstp    qword ptr [ebp - 0xe4]
        fld     qword ptr [ebp - 0x2c]
        fadd    qword ptr [ebp - 0x54]
        fstp    qword ptr [ebp - 0xdc]
        fld     qword ptr [ebp - 0x64]
        fsub    qword ptr [ebp - 0x5c]
        fstp    qword ptr [ebp - 0xd4]
        fld     qword ptr [ebp - 0x2c]
        fsub    qword ptr [ebp - 0x54]
        fstp    qword ptr [ebp - 0xc4]
        fld     qword ptr [mem_0092A270]
        fsub    qword ptr [ebp - 0x10c]
        fst     qword ptr [ebp - 0x54]
        fsub    st, st(1)
        fstp    qword ptr [ebp - 0xbc]
        fstp    st(0)
        fld     qword ptr [ebp - 0x1c]
        fadd    qword ptr [ebp - 0x4c]
        fstp    qword ptr [ebp - 0xb4]
        fld     qword ptr [ebp - 0x64]
        fadd    qword ptr [ebp - 0x5c]
        fstp    qword ptr [ebp - 0xa4]
        fld     qword ptr [ebp - 0x1c]
        fsub    qword ptr [ebp - 0x4c]
        fstp    qword ptr [ebp - 0x9c]
        fld     qword ptr [ebp - 0x54]
        fsub    qword ptr [ebp - 0x44]
        fstp    qword ptr [ebp - 0x94]
        call    ext_006C4220
        add     esp, 0x8
        lea     ecx, [ebp + 0xc]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr fs:[0], ecx
        mov     esp, ebp
        pop     ebp
        ret     0x24
    }
}

// [0x00760CD0] sub_00760CD0 (1104 bytes)
extern "C" void ext_006D7A90();
extern "C" void ext_006DEEC0();
extern "C" void ext_006FD980();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_0075D520();
extern "C" void ext_00761120();
extern "C" __declspec(naked) void __fastcall fn_00760CD0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        push    -1
        push    0x8bcceb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xa4
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x30]
        call    ext_00714570
        mov     edi, dword ptr [ebp + 8]
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0xbc], 0
        call    ext_0070E390
        mov     ecx, edi
        call    ext_006D7A90
        test    eax, eax
        je      L_fail
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaa8e24
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaa9158
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        push    edi
        mov     ecx, esi
        call    ext_0075D520
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae350
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0x64
        mov     ecx, ebx
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2c0
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0x1c8]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     edx, dword ptr [edi + 0x1b8]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1bc]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae344
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0x1a8]
        push    ecx
        push    edi
        mov     ecx, esi
        call    ext_00761120
        mov     edx, dword ptr [edi + 0x1ac]
        mov     ecx, esi
        push    edx
        push    edi
        call    ext_00761120
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2ac
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [edi + 0x1b0]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [edi + 0x1b4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2b8
        add     ecx, 4
        call    ext_007275F0
        mov     edx, dword ptr [edi + 0x1b8]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1bc]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae300
        add     ecx, 4
        call    ext_007275F0
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x1c0]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1c1]
        add     ecx, 4
        push    edx
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae33c
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1c2]
        add     ecx, 4
        push    eax
        call    ext_00727C80
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x1c3]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae334
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1c4]
        add     ecx, 4
        push    edx
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1c5]
        add     ecx, 4
        push    eax
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2a4
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, edi
        xor     ebx, ebx
        call    ext_006D7A90
        test    eax, eax
        jle     L_7610A9
        mov     dword ptr [esp + 0xc], ebx
    L_loop:
        mov     ecx, edi
        call    ext_006DEEC0
        add     eax, dword ptr [esp + 0xc]
        fld     qword ptr [eax]
        fld     qword ptr [eax + 8]
        fld     qword ptr [eax + 0x10]
        fld     qword ptr [esp + 0x70]
        fmul    st, st(1)
        fld     qword ptr [esp + 0x50]
        fmul    st, st(3)
        faddp   st(1), st
        fld     qword ptr [esp + 0x30]
        fmul    st, st(4)
        faddp   st(1), st
        fadd    qword ptr [esp + 0x90]
        fstp    qword ptr [esp + 0x10]
        fld     qword ptr [esp + 0x78]
        fmul    st, st(1)
        fld     qword ptr [esp + 0x58]
        fmul    st, st(3)
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        faddp   st(1), st
        fld     qword ptr [esp + 0x3c]
        fmul    st, st(4)
        push    edx
        add     ecx, 4
        faddp   st(1), st
        fadd    qword ptr [esp + 0xa0]
        fstp    qword ptr [esp + 0x20]
        fld     qword ptr [esp + 0x88]
        fmul    st, st(1)
        fld     qword ptr [esp + 0x68]
        fmul    st, st(3)
        faddp   st(1), st
        fld     qword ptr [esp + 0x48]
        fmul    st, st(4)
        faddp   st(1), st
        fadd    qword ptr [esp + 0xa8]
        fstp    qword ptr [esp + 0x28]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, edi
        add     edx, 0x20
        inc     ebx
        mov     dword ptr [esp + 0xc], edx
        call    ext_006D7A90
        cmp     ebx, eax
        jl      L_loop
    L_7610A9:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        push    0
        mov     ecx, edi
        call    ext_006FD980
        mov     esi, dword ptr [esi + 0xac]
        push    0xaadc04
        add     esi, 4
        mov     edi, eax
        mov     ecx, esi
        call    ext_007275F0
        push    edi
        mov     ecx, esi
        call    ext_00727C80
        mov     ecx, esi
        call    ext_007283B0
    L_fail:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0xb8], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0xb0]
        pop     edi
        pop     esi
        mov     al, 1
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}

// [0x00762070] sub_00762070 (1280 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BAA50();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7460();
extern "C" void ext_0070BBD0();
extern "C" void ext_0070BC70();
extern "C" void ext_0070BD10();
extern "C" void ext_0070BDB0();
extern "C" void ext_0070BE80();
extern "C" void ext_0070BF00();
extern "C" void ext_0070BFD0();
extern "C" void ext_007846D0();
extern "C" int mem_009334D8;

extern "C" __declspec(naked) char __fastcall fn_00762070(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x8bfdd0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x74
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x18]
        call    ext_0077FB40
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaad40c
        add     ecx, 4
        mov     dword ptr [esp + 0x90], 0
        call    ext_007275F0
        mov     edi, dword ptr [esp + 0x94]
        mov     ecx, edi
        call    ext_006BADB0
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaacd0c
        add     ebp, 4
        mov     ecx, ebp
        call    ext_007275F0
        push    0x64
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        lea     eax, [esp + 0x38]
        lea     ecx, [edi + 0xf4]
        push    eax
        call    ext_006BAA50
        mov     ecx, eax
        mov     byte ptr [esp + 0x8c], 1
        call    ext_006E7460
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaae4d0
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_007279A0
        mov     ecx, ebp
        call    ext_007283B0
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x8c], 0
        call    ext_006B9D70
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dc4
        add     ecx, 4
        call    ext_007275F0
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    ext_0070BBD0
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dcc
        add     ecx, 4
        call    ext_007275F0
        lea     edx, [esp + 0x18]
        mov     ecx, edi
        push    edx
        call    ext_0070BC70
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dd4
        add     ecx, 4
        call    ext_007275F0
        lea     eax, [esp + 0x18]
        mov     ecx, edi
        push    eax
        call    ext_0070BD10
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8db8
        add     ecx, 4
        call    ext_007275F0
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    ext_0070BDB0
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, edi
        call    ext_0070BF00
        fmul    qword ptr [mem_009334D8]
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaa8df8
        add     ebp, 4
        mov     ecx, ebp
        fstp    qword ptr [esp + 0x14]
        call    ext_007275F0
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, ebp
        call    ext_00727FE0
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_0070BE80
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaa8db0
        fstp    qword ptr [esp + 0x14]
        add     ebp, 4
        mov     ecx, ebp
        call    ext_007275F0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    ext_00727FE0
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_0070BFD0
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaa8de8
        fstp    qword ptr [esp + 0x14]
        add     ebp, 4
        mov     ecx, ebp
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    ext_00727FE0
        mov     ecx, ebp
        call    ext_007283B0
        push    0
        push    edi
        lea     ecx, [esi + 0xd8]
        call    ext_007846D0
        mov     edi, eax
        test    edi, edi
        je      L_end
        mov     al, byte ptr [edi + 3]
        test    al, al
        jne     L_work
        cmp     byte ptr [edi], 0
        jne     L_work
        mov     al, byte ptr [edi + 1]
        test    al, al
        jne     L_work
        mov     al, byte ptr [edi + 2]
        test    al, al
        jne     L_work
        mov     al, byte ptr [edi + 4]
        test    al, al
        jne     L_work
        mov     al, byte ptr [edi + 6]
        test    al, al
        jne     L_work
        mov     al, byte ptr [edi + 5]
        test    al, al
        je      L_end
    L_work:
        mov     dword ptr [esp + 0x10], 0xaaeae8
        mov     dword ptr [esp + 0x14], 0xaaeadc
        lea     ebx, [esp + 0x10]
        mov     ebp, 2
    L_loop:
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_007275F0
        mov     al, byte ptr [edi + 3]
        test    al, al
        je      L_c2
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8db8
        add     ecx, 4
        call    ext_007279A0
    L_c2:
        cmp     byte ptr [edi], 0
        je      L_c3
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dc4
        add     ecx, 4
        call    ext_007279A0
    L_c3:
        mov     al, byte ptr [edi + 1]
        test    al, al
        je      L_c4
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dcc
        add     ecx, 4
        call    ext_007279A0
    L_c4:
        mov     al, byte ptr [edi + 2]
        test    al, al
        je      L_c5
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8dd4
        add     ecx, 4
        call    ext_007279A0
    L_c5:
        mov     al, byte ptr [edi + 4]
        test    al, al
        je      L_c6
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8de0
        add     ecx, 4
        call    ext_007279A0
    L_c6:
        mov     al, byte ptr [edi + 6]
        test    al, al
        je      L_c7
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8de8
        add     ecx, 4
        call    ext_007279A0
    L_c7:
        mov     al, byte ptr [edi + 5]
        test    al, al
        je      L_c8
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8df8
        add     ecx, 4
        call    ext_007279A0
    L_c8:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        add     ebx, 4
        dec     ebp
        jne     L_loop
    L_end:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x8c], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [esp + 0x84]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x80
        ret     4
    }
}
