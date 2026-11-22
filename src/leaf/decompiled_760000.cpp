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
extern "C" void ext_006A5C62(); extern "C" void ext_006A7256(); extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9EC0(); extern "C" void ext_006BA220(); extern "C" void ext_006BADB0(); extern "C" void ext_006C2720(); extern "C" void ext_006C2BB0(); extern "C" void ext_006C3030(); extern "C" void ext_006C3250(); extern "C" void ext_006C32C0(); extern "C" void ext_006C9340(); extern "C" void ext_006C9370(); extern "C" void ext_006C9390(); extern "C" void ext_006C93B0(); extern "C" void ext_006C93D0(); extern "C" void ext_006C93F0(); extern "C" void ext_006C9410(); extern "C" void ext_006C9520(); extern "C" void ext_006C9570(); extern "C" void ext_006C9B70(); extern "C" void ext_006C9E80(); extern "C" void ext_006CA020(); extern "C" void ext_006CA140(); extern "C" void ext_006CA500(); extern "C" void ext_006CA540(); extern "C" void ext_006CA6A0(); extern "C" void ext_006CD350(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D2300(); extern "C" void ext_006D2370(); extern "C" void ext_006D23F0(); extern "C" void ext_006D2500(); extern "C" void ext_006D2630(); extern "C" void ext_006D26D0(); extern "C" void ext_006D2700(); extern "C" void ext_006D2720(); extern "C" void ext_006D80A0(); extern "C" void ext_006DA370(); extern "C" void ext_006DAB00(); extern "C" void ext_006DABA0(); extern "C" void ext_006DC480(); extern "C" void ext_006E7460(); extern "C" void ext_00714570(); extern "C" void ext_0071B090(); extern "C" void ext_0071BFA0(); extern "C" void ext_0071BFC0(); extern "C" void ext_0071C020(); extern "C" void ext_0071C080(); extern "C" void ext_0071C1B0(); extern "C" void ext_0071CA10(); extern "C" void ext_0071CA40(); extern "C" void ext_007709E0(); extern "C" void ext_007714C0(); extern "C" void ext_007873F0(); extern "C" void ext_00787430(); extern "C" void ext_00789BA0(); extern "C" void ext_0079F790(); extern "C" int mem_00993C98; /* double 0.008726646259971648 */ extern "C" int mem_00993C80; /* double 114.59155902616465 */ extern "C" int mem_00993808; /* double 0.017453292519943295 */ extern "C" int mem_00996C80; /* float -3.6850151e-06 / u32 0xB6774C14 */ extern "C" int mem_00993C68; /* double 90 */ extern "C" int mem_009252D0; /* u32 0x00627E0C */

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

// [0x00760700] sub_00760700 (1488 bytes)
extern "C" void ext_006D3D70();
extern "C" void ext_006D5090();
extern "C" void ext_006D7A90();
extern "C" void ext_006D80A0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006FD980();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_00718030();
extern "C" void ext_00718060();
extern "C" void ext_007180D0();
extern "C" void ext_007180F0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00729730();
extern "C" void ext_0075D520();
extern "C" void ext_008BCCEB();
extern "C" __declspec(naked) void __fastcall fn_00760700(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        push    -1
        push    offset ext_008BCCEB
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
        mov     ebx, dword ptr [ebp + 8]
        mov     dword ptr [esp + 0xb8], 0
        mov     ecx, ebx
        call    ext_007180D0
        test    al, al
        jne     L_760753
        mov     ecx, ebx
        call    ext_007180F0
        test    al, al
        je      L_76078A
    L_760753:
        mov     ecx, dword ptr [esi + 4]
        call    ext_006D3D70
        mov     edi, eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0xc], edi
        call    ext_007180F0
        push    eax
        mov     ecx, ebx
        call    ext_007180D0
        push    eax
        push    ebx
        mov     ecx, edi
        call    ext_00729730
        mov     ecx, dword ptr [esi + 4]
        mov     edi, eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    ext_006D5090
        jmp     L_76078C
    L_76078A:
        mov     edi, ebx
    L_76078C:
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, edi
        call    ext_0070E390
        mov     ecx, edi
        call    ext_006D7A90
        test    eax, eax
        je      L_760C77
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaa8e24
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaac46c
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        push    edi
        mov     ecx, esi
        call    ext_0075D520
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae328
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
        mov     edx, dword ptr [edi + 0x1d8]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1b8]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [edi + 0x1bc]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae31c
        add     ecx, 4
        call    ext_007275F0
        mov     edx, dword ptr [edi + 0x1a8]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1ac]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2ac
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0x1b0]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     edx, dword ptr [edi + 0x1b4]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae2b8
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [edi + 0x1b8]
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [edi + 0x1bc]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae314
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [edi + 0x1c0]
        test    eax, eax
        jne     L_760961
        push    0xaae308
        jmp     L_760972
    L_760961:
        cmp     eax, 1
        jne     L_76096D
        push    0xaae300
        jmp     L_760972
    L_76096D:
        push    0xaae2f8
    L_760972:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007279A0
        mov     eax, dword ptr [edi + 0x1c4]
        test    eax, eax
        jne     L_760991
        push    0xaae308
        jmp     L_7609A2
    L_760991:
        cmp     eax, 1
        jne     L_76099D
        push    0xaae300
        jmp     L_7609A2
    L_76099D:
        push    0xaae2f8
    L_7609A2:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007279A0
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
        jle     L_760ADF
        mov     dword ptr [esp + 0xc], ebx
    L_7609E6:
        mov     ecx, edi
        call    ext_006DEEC0
        mov     ecx, dword ptr [esp + 0xc]
        add     eax, ecx
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
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
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        faddp   st(1), st
        fld     qword ptr [esp + 0x40]
        fmul    st, st(4)
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
        mov     ecx, dword ptr [esi + 0xac]
        push    0x3ff00000
        push    0
        add     ecx, 4
        call    ext_00727FE0
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, edi
        add     edx, 0x20
        inc     ebx
        mov     dword ptr [esp + 0xc], edx
        call    ext_006D7A90
        cmp     ebx, eax
        jl      L_7609E6
    L_760ADF:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae21c
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [edi + 0x1b0]
        xor     ebx, ebx
        test    eax, eax
        jle     L_760B2F
    L_760B0C:
        mov     edx, dword ptr [edi + 0x1d0]
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        mov     eax, dword ptr [edx + 4*ebx]
        push    eax
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1b0]
        inc     ebx
        cmp     ebx, eax
        jl      L_760B0C
    L_760B2F:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae1d4
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [edi + 0x1b4]
        xor     ebx, ebx
        test    eax, eax
        jle     L_760B7F
    L_760B5C:
        mov     ecx, dword ptr [edi + 0x1d4]
        mov     edx, dword ptr [ecx + 4*ebx]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [edi + 0x1b4]
        inc     ebx
        cmp     ebx, eax
        jl      L_760B5C
    L_760B7F:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae190
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [ebp + 8]
        call    ext_00718030
        xor     ebx, ebx
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        jle     L_760BD8
    L_760BB2:
        mov     eax, dword ptr [edi + 0x1c8]
        mov     ecx, dword ptr [eax + 8*ebx + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax + 8*ebx]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0xc]
        inc     ebx
        cmp     ebx, eax
        jl      L_760BB2
    L_760BD8:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae14c
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [ebp + 8]
        call    ext_00718060
        xor     ebx, ebx
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        jle     L_760C31
    L_760C0B:
        mov     eax, dword ptr [edi + 0x1cc]
        mov     ecx, dword ptr [eax + 8*ebx + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax + 8*ebx]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0xc]
        inc     ebx
        cmp     ebx, eax
        jl      L_760C0B
    L_760C31:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        push    0
        mov     ecx, edi
        call    ext_006FD980
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaadc04
        add     ebx, 4
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, ebx
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, ebx
        push    eax
        call    ext_00727C80
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [ebp + 8]
    L_760C77:
        mov     ecx, ebx
        call    ext_007180D0
        test    al, al
        jne     L_760C8D
        mov     ecx, ebx
        call    ext_007180F0
        test    al, al
        je      L_760C96
    L_760C8D:
        mov     ecx, dword ptr [esi + 4]
        push    edi
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x78]
    L_760C96:
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

// [0x00761720] sub_00761720 (2316 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_006E7460();
extern "C" void ext_00702400();
extern "C" void ext_00702420();
extern "C" void ext_00702460();
extern "C" void ext_00702470();
extern "C" void ext_00702480();
extern "C" void ext_00702490();
extern "C" void ext_007025B0();
extern "C" void ext_00702640();
extern "C" void ext_00702700();
extern "C" void ext_00702780();
extern "C" void ext_00702790();
extern "C" void ext_007027C0();
extern "C" void ext_00702A00();
extern "C" void ext_00702A50();
extern "C" void ext_00702AA0();
extern "C" void ext_00702B40();
extern "C" void ext_00703B50();
extern "C" void ext_00703BA0();
extern "C" void ext_00703BD0();
extern "C" void ext_00703BE0();
extern "C" void ext_0071C920();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007846D0();
extern "C" __declspec(naked) void __fastcall fn_00761720(void* self, int edx_unused, int a0) {
    __asm {
        push    -1
        push    0x8bfdb0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x74
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x38]
        call    ext_006B9D10
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x8c], 0
        call    ext_006D2370
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaad404
        add     ecx, 4
        mov     byte ptr [esp + 0x90], 1
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
        mov     ecx, edi
        call    ext_00703BE0
        mov     ecx, eax
        call    ext_006E7460
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaa8e24
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_007279A0
        mov     ecx, ebp
        call    ext_007283B0
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaacd0c
        add     ebp, 4
        mov     ecx, ebp
        call    ext_007275F0
        push    0xca
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_006BADB0
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaae38c
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_007279A0
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00703B50
        mov     ecx, eax
        call    ext_006E7460
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaad214
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_007279A0
        mov     ecx, ebp
        call    ext_007283B0
        push    0xaa8d90
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007275F0
        lea     eax, [esp + 0x18]
        mov     ecx, edi
        push    eax
        call    ext_00702A00
        push    0
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8da8
        add     ecx, 4
        call    ext_007275F0
        lea     eax, [esp + 0x18]
        mov     ecx, edi
        push    eax
        call    ext_00702AA0
        push    0
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae4bc
        add     ecx, 4
        call    ext_007275F0
        push    0
        mov     ecx, edi
        call    ext_00703BA0
        mov     ecx, eax
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        mov     ecx, edi
        call    ext_00703BA0
        mov     ecx, eax
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae4ac
        add     ecx, 4
        call    ext_007275F0
        push    0
        mov     ecx, edi
        call    ext_00703BD0
        mov     ecx, eax
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        mov     ecx, edi
        call    ext_00703BD0
        mov     ecx, eax
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8d9c
        add     ecx, 4
        call    ext_007275F0
        lea     eax, [esp + 0x18]
        mov     ecx, edi
        push    eax
        call    ext_00702A50
        push    0
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    2
        lea     ecx, [esp + 0x1c]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702B40
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaadc6c
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
        mov     ecx, edi
        call    ext_00702420
        sub     eax, 0
        je      L_761B1D
        dec     eax
        je      L_761B01
        mov     ebx, dword ptr [esi + 0xac]
        dec     eax
        jne     L_761B23
        add     ebx, 4
        push    0xaae494
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae478
        jmp     L_761B37
    L_761B01:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae494
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae484
        jmp     L_761B37
    L_761B1D:
        mov     ebx, dword ptr [esi + 0xac]
    L_761B23:
        add     ebx, 4
        push    0xaae494
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaab920
    L_761B37:
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae46c
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, edi
        call    ext_00702460
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, edi
        call    ext_00702470
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, edi
        call    ext_00702480
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, edi
        call    ext_00702490
        mov     ecx, dword ptr [esi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_00727C80
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, edi
        call    ext_007025B0
        cmp     eax, 7
        ja      L_761CA2
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x76
        __asm _emit 0x00
    L_C0:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaab920
        jmp     L_761CBC
    L_C1:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae44c
        jmp     L_761CBC
    L_C2:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabbb4
        jmp     L_761CBC
    L_C3:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabba8
        jmp     L_761CBC
    L_C4:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabb8c
        jmp     L_761CBC
    L_C5:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabb84
        jmp     L_761CBC
    L_C6:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabb9c
        jmp     L_761CBC
    L_761CA2:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae454
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabbc0
    L_761CBC:
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, edi
        call    ext_0071C920
        sub     eax, 0
        je      L_761D14
        dec     eax
        je      L_761CF8
        mov     ebx, dword ptr [esi + 0xac]
        dec     eax
        jne     L_761D1A
        add     ebx, 4
        push    0xaae42c
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaa8ca0
        jmp     L_761D2E
    L_761CF8:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae42c
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaa8ca4
        jmp     L_761D2E
    L_761D14:
        mov     ebx, dword ptr [esi + 0xac]
    L_761D1A:
        add     ebx, 4
        push    0xaae42c
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaa8ca8
    L_761D2E:
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702400
        mov     ebp, dword ptr [esi + 0xac]
        and     eax, 0xff
        add     ebp, 4
        push    0xaae424
        mov     ecx, ebp
        mov     ebx, eax
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702640
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaae414
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702700
        cmp     eax, 5
        ja      L_761E41
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x76
        __asm _emit 0x00
    L_D0:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3f0
        jmp     L_761E5B
    L_D1:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3e4
        jmp     L_761E5B
    L_D2:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3cc
        jmp     L_761E5B
    L_D3:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3b8
        jmp     L_761E5B
    L_D4:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3a8
        jmp     L_761E5B
    L_761E41:
        mov     ebx, dword ptr [esi + 0xac]
        push    0xaae408
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae3fc
    L_761E5B:
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702780
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaae398
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_00702790
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaae3a0
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        mov     ecx, edi
        call    ext_007027C0
        mov     ebp, dword ptr [esi + 0xac]
        push    0xaadc7c
        add     ebp, 4
        mov     ebx, eax
        mov     ecx, ebp
        call    ext_007275F0
        push    ebx
        mov     ecx, ebp
        call    ext_00727C80
        mov     ecx, ebp
        call    ext_007283B0
        push    0
        push    edi
        lea     ecx, [esi + 0xc4]
        call    ext_007846D0
        mov     edi, eax
        test    edi, edi
        je      L_761FCE
        cmp     byte ptr [edi], 0
        jne     L_761F26
        mov     al, byte ptr [edi + 1]
        test    al, al
        jne     L_761F26
        mov     al, byte ptr [edi + 2]
        test    al, al
        jne     L_761F26
        mov     al, byte ptr [edi + 3]
        test    al, al
        je      L_761FCE
    L_761F26:
        mov     dword ptr [esp + 0x10], 0xaaeae8
        mov     dword ptr [esp + 0x14], 0xaaeadc
        lea     ebx, [esp + 0x10]
        mov     ebp, 2
    L_761F3F:
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esi + 0xac]
        push    edx
        add     ecx, 4
        call    ext_007275F0
        cmp     byte ptr [edi], 0
        je      L_761F68
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8d90
        add     ecx, 4
        call    ext_007279A0
    L_761F68:
        mov     al, byte ptr [edi + 1]
        test    al, al
        je      L_761F82
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8d9c
        add     ecx, 4
        call    ext_007279A0
    L_761F82:
        mov     al, byte ptr [edi + 2]
        test    al, al
        je      L_761F9C
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8da8
        add     ecx, 4
        call    ext_007279A0
    L_761F9C:
        mov     al, byte ptr [edi + 3]
        test    al, al
        je      L_761FB6
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaa8db0
        add     ecx, 4
        call    ext_007279A0
    L_761FB6:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        add     ebx, 4
        dec     ebp
        jne     L_761F3F
    L_761FCE:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x8c], 0
        call    ext_006D80A0
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x8c], 0xffffffff
        call    ext_006B9D70
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

// [0x00762570] sub_00762570 (2400 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C4340();
extern "C" void ext_006C4440();
extern "C" void ext_006C5A50();
extern "C" void ext_006C81A0();
extern "C" void ext_006E7460();
extern "C" void ext_00741450();
extern "C" __declspec(naked) char __fastcall fn_00762570(void* self, int edx_unused, int a0) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 0x34c
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jne     L_nonnull
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    L_nonnull:
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadca0
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0x8]
        call    ext_006BADB0
        push    eax
        lea     ecx, [esi + 0xc]
        call    ext_006B9EC0
        mov     ecx, dword ptr [esi + 0x8]
        call    ext_006BADB0
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     eax, dword ptr [esi + 0x58]
        dec     eax
        je      L_604
        dec     eax
        jne     L_62C
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaae528
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaae520
        jmp     L_61E
    L_604:
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaae528
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        push    0xaabb6c
    L_61E:
        mov     ecx, ebx
        call    ext_007279A0
        mov     ecx, ebx
        call    ext_007283B0
    L_62C:
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaad39c
        add     ecx, 4
        call    ext_007275F0
        lea     ecx, [esi + 0xac]
        call    ext_006E7460
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        lea     ecx, [esi + 0xf8]
        call    ext_006E7460
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaae518
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esi + 0x2d0]
        xor     ebx, ebx
        test    eax, eax
        jle     L_6C3
    L_6A0:
        mov     eax, dword ptr [esi + 0x2e0]
        mov     ecx, dword ptr [eax + 4*ebx]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [esi + 0x2d0]
        inc     ebx
        cmp     ebx, eax
        jl      L_6A0
    L_6C3:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaae510
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esi + 0x2d0]
        xor     ebx, ebx
        test    eax, eax
        jle     L_718
    L_6F0:
        mov     edx, dword ptr [esi + 0x2f8]
        mov     eax, dword ptr [edx + 8*ebx + 0x4]
        push    eax
        mov     ecx, dword ptr [edx + 8*ebx]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esi + 0x2d0]
        inc     ebx
        cmp     ebx, eax
        jl      L_6F0
    L_718:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        fld     qword ptr [esi + 0x148]
        fstp    qword ptr [esp + 0xe8]
        fld     qword ptr [esi + 0x150]
        fstp    qword ptr [esp + 0xf0]
        fld     qword ptr [esi + 0x158]
        fstp    qword ptr [esp + 0xf8]
        fld     qword ptr [esi + 0x168]
        fstp    qword ptr [esp + 0x178]
        fld     qword ptr [esi + 0x170]
        fstp    qword ptr [esp + 0x180]
        fld     qword ptr [esi + 0x178]
        fstp    qword ptr [esp + 0x188]
        fld     qword ptr [esi + 0x188]
        fstp    qword ptr [esp + 0x160]
        fld     qword ptr [esi + 0x190]
        fstp    qword ptr [esp + 0x168]
        fld     qword ptr [esi + 0x198]
        lea     edx, [esp + 0x160]
        lea     eax, [esp + 0x178]
        push    edx
        lea     ecx, [esp + 0xec]
        push    eax
        lea     edx, [esp + 0x1e0]
        push    ecx
        push    edx
        fstp    qword ptr [esp + 0x180]
        mov     dword ptr [esp + 0x110], 0x0
        mov     dword ptr [esp + 0x114], 0x3ff00000
        mov     dword ptr [esp + 0x240], 0x0
        mov     dword ptr [esp + 0x244], 0x0
        mov     dword ptr [esp + 0x220], 0x0
        mov     dword ptr [esp + 0x224], 0x0
        mov     dword ptr [esp + 0x200], 0x0
        mov     dword ptr [esp + 0x204], 0x0
        mov     dword ptr [esp + 0x260], 0x0
        mov     dword ptr [esp + 0x264], 0x3ff00000
        call    ext_00741450
        fld     qword ptr [esi + 0x1a8]
        fstp    qword ptr [esp + 0x118]
        fld     qword ptr [esi + 0x1b0]
        fstp    qword ptr [esp + 0x120]
        fld     qword ptr [esi + 0x1b8]
        fstp    qword ptr [esp + 0x128]
        fld     qword ptr [esi + 0x1c8]
        fstp    qword ptr [esp + 0x1a0]
        fld     qword ptr [esi + 0x1d0]
        fstp    qword ptr [esp + 0x1a8]
        fld     qword ptr [esi + 0x1d8]
        fstp    qword ptr [esp + 0x1b0]
        fld     qword ptr [esi + 0x1e8]
        fstp    qword ptr [esp + 0x1b8]
        fld     qword ptr [esi + 0x1f0]
        fstp    qword ptr [esp + 0x1c0]
        fld     qword ptr [esi + 0x1f8]
        fstp    qword ptr [esp + 0x1c8]
        mov     dword ptr [esp + 0x130], 0x0
        mov     dword ptr [esp + 0x134], 0x3ff00000
        mov     dword ptr [esp + 0x340], 0x0
        mov     dword ptr [esp + 0x344], 0x0
        mov     dword ptr [esp + 0x320], 0x0
        lea     eax, [esp + 0x1b8]
        lea     ecx, [esp + 0x1a0]
        push    eax
        lea     edx, [esp + 0x11c]
        push    ecx
        lea     eax, [esp + 0x2f0]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x334], 0x0
        mov     dword ptr [esp + 0x310], 0x0
        mov     dword ptr [esp + 0x314], 0x0
        mov     dword ptr [esp + 0x370], 0x0
        mov     dword ptr [esp + 0x374], 0x3ff00000
        call    ext_00741450
        lea     ecx, [esp + 0x1f8]
        lea     edx, [esp + 0x2f8]
        push    ecx
        lea     eax, [esp + 0x1fc]
        push    edx
        push    eax
        call    ext_006C5A50
        mov     ebx, dword ptr [edi + 0xac]
        add     esp, 0x2c
        add     ebx, 4
        push    0xaa8cb8
        mov     ecx, ebx
        call    ext_007275F0
        lea     eax, [esp + 0x1d8]
        mov     dword ptr [esp + 0x10], 0x10
        mov     dword ptr [esp + 0x14], eax
        jmp     L_984
    L_980:
        mov     eax, dword ptr [esp + 0x14]
    L_984:
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        add     ecx, 8
        dec     eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        jne     L_980
        mov     ecx, ebx
        call    ext_007283B0
        mov     ebx, dword ptr [edi + 0xac]
        push    0xaae500
        add     ebx, 4
        mov     ecx, ebx
        call    ext_007275F0
        lea     eax, [esp + 0x2d8]
        mov     dword ptr [esp + 0x10], 0x10
        mov     dword ptr [esp + 0x14], eax
        jmp     L_9DD
    L_9D9:
        mov     eax, dword ptr [esp + 0x14]
    L_9DD:
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        add     ecx, 8
        dec     eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        jne     L_9D9
        mov     ecx, ebx
        call    ext_007283B0
        mov     eax, dword ptr [esi + 0x5c]
        test    eax, eax
        je      L_D16
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaae4f0
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0x5c]
        call    ext_006BADB0
        push    eax
        lea     ecx, [esi + 0x60]
        call    ext_006B9EC0
        mov     ecx, dword ptr [esi + 0x5c]
        call    ext_006BADB0
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00728410
        fld     qword ptr [esi + 0x208]
        fstp    qword ptr [esp + 0x128]
        fld     qword ptr [esi + 0x210]
        fstp    qword ptr [esp + 0x130]
        fld     qword ptr [esi + 0x218]
        fstp    qword ptr [esp + 0x138]
        fld     qword ptr [esi + 0x228]
        fstp    qword ptr [esp + 0x1c0]
        fld     qword ptr [esi + 0x230]
        fstp    qword ptr [esp + 0x1c8]
        fld     qword ptr [esi + 0x238]
        fstp    qword ptr [esp + 0x1d0]
        fld     qword ptr [esi + 0x248]
        fstp    qword ptr [esp + 0x38]
        fld     qword ptr [esi + 0x250]
        fstp    qword ptr [esp + 0x40]
        fld     qword ptr [esi + 0x258]
        lea     eax, [esp + 0x38]
        lea     ecx, [esp + 0x1c0]
        push    eax
        lea     edx, [esp + 0x12c]
        push    ecx
        lea     eax, [esp + 0x260]
        push    edx
        push    eax
        fstp    qword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x150], 0x0
        mov     dword ptr [esp + 0x154], 0x3ff00000
        mov     dword ptr [esp + 0x2c0], 0x0
        mov     dword ptr [esp + 0x2c4], 0x0
        mov     dword ptr [esp + 0x2a0], 0x0
        mov     dword ptr [esp + 0x2a4], 0x0
        mov     dword ptr [esp + 0x280], 0x0
        mov     dword ptr [esp + 0x284], 0x0
        mov     dword ptr [esp + 0x2e0], 0x0
        mov     dword ptr [esp + 0x2e4], 0x3ff00000
        call    ext_00741450
        fld     qword ptr [esi + 0x1a8]
        fstp    qword ptr [esp + 0x28]
        fld     qword ptr [esi + 0x1b0]
        fstp    qword ptr [esp + 0x30]
        fld     qword ptr [esi + 0x1b8]
        fstp    qword ptr [esp + 0x38]
        fld     qword ptr [esi + 0x1c8]
        fstp    qword ptr [esp + 0x158]
        fld     qword ptr [esi + 0x1d0]
        fstp    qword ptr [esp + 0x160]
        fld     qword ptr [esi + 0x1d8]
        fstp    qword ptr [esp + 0x168]
        fld     qword ptr [esi + 0x1e8]
        fstp    qword ptr [esp + 0x60]
        fld     qword ptr [esi + 0x1f0]
        fstp    qword ptr [esp + 0x68]
        fld     qword ptr [esi + 0x1f8]
        lea     ecx, [esp + 0x158]
        lea     edx, [esp + 0x78]
        push    ecx
        push    edx
        fstp    qword ptr [esp + 0x78]
        mov     dword ptr [esp + 0xd8], 0x0
        mov     dword ptr [esp + 0xdc], 0x0
        mov     dword ptr [esp + 0xb8], 0x0
        mov     dword ptr [esp + 0xbc], 0x0
        mov     dword ptr [esp + 0x98], 0x0
        mov     dword ptr [esp + 0x9c], 0x0
        mov     dword ptr [esp + 0xf8], 0x0
        mov     dword ptr [esp + 0xfc], 0x3ff00000
        call    ext_006C4440
        lea     eax, [esp + 0x68]
        lea     ecx, [esp + 0x80]
        push    eax
        lea     edx, [esp + 0x84]
        push    ecx
        push    edx
        call    ext_006C81A0
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0xec], eax
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0xf0], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0xf4], edx
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0xf8], eax
        mov     dword ptr [esp + 0xfc], ecx
        lea     eax, [esp + 0x27c]
        mov     dword ptr [esp + 0x100], edx
        lea     ecx, [esp + 0x8c]
        push    eax
        lea     edx, [esp + 0x280]
        push    ecx
        push    edx
        call    ext_006C5A50
        mov     ebx, dword ptr [edi + 0xac]
        add     esp, 0x30
        add     ebx, 4
        push    0xaa8cb8
        mov     ecx, ebx
        call    ext_007275F0
        lea     eax, [esp + 0x258]
        mov     dword ptr [esp + 0x10], 0x10
        mov     dword ptr [esp + 0x14], eax
        jmp     L_CCF
    L_CCB:
        mov     eax, dword ptr [esp + 0x14]
    L_CCF:
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    ext_00727FE0
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        add     ecx, 8
        dec     eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        jne     L_CCB
        mov     ecx, ebx
        call    ext_007283B0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
    L_D16:
        mov     al, byte ptr [esi + 0x268]
        test    al, al
        je      L_EA1
        fld     qword ptr [esi + 0x270]
        fstp    qword ptr [esp + 0x18]
        fld     qword ptr [esi + 0x278]
        fstp    qword ptr [esp + 0x20]
        fld     qword ptr [esi + 0x280]
        fstp    qword ptr [esp + 0x28]
        fld     qword ptr [esi + 0x290]
        fstp    qword ptr [esp + 0x38]
        fld     qword ptr [esi + 0x298]
        fstp    qword ptr [esp + 0x40]
        fld     qword ptr [esi + 0x2a0]
        fstp    qword ptr [esp + 0x48]
        fld     qword ptr [esi + 0x2b0]
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x44]
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    edx
        mov     edx, dword ptr [esp + 0x44]
        push    eax
        fstp    qword ptr [esp + 0x60]
        fld     qword ptr [esi + 0x2b8]
        fstp    qword ptr [esp + 0x68]
        fld     qword ptr [esi + 0x2c0]
        push    ecx
        lea     eax, [esp + 0x7c]
        push    edx
        push    eax
        fstp    qword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0xdc], 0x0
        mov     dword ptr [esp + 0xe0], 0x0
        mov     dword ptr [esp + 0xbc], 0x0
        mov     dword ptr [esp + 0xc0], 0x0
        mov     dword ptr [esp + 0x9c], 0x0
        mov     dword ptr [esp + 0xa0], 0x0
        mov     dword ptr [esp + 0xfc], 0x0
        mov     dword ptr [esp + 0x100], 0x3ff00000
        call    ext_006C4340
        lea     ecx, [esp + 0x6c]
        lea     edx, [esp + 0x84]
        push    ecx
        lea     eax, [esp + 0x88]
        push    edx
        push    eax
        call    ext_006C81A0
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x48]
        mov     esi, dword ptr [edi + 0xac]
        mov     dword ptr [esp + 0xf0], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0x28
        mov     dword ptr [esp + 0xcc], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0xd0], eax
        mov     eax, dword ptr [esp + 0x2c]
        add     esi, 4
        mov     dword ptr [esp + 0xd4], ecx
        push    0xaae4e0
        mov     ecx, esi
        mov     dword ptr [esp + 0xdc], edx
        mov     dword ptr [esp + 0xe0], eax
        call    ext_007275F0
        lea     ebx, [esp + 0x68]
        mov     dword ptr [esp + 0x10], 0x10
    L_E7E:
        mov     ecx, dword ptr [ebx + 4]
        mov     edx, dword ptr [ebx]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 8
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_E7E
        mov     ecx, esi
        call    ext_007283B0
    L_EA1:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}

// [0x00762ED0] sub_00762ED0 (2624 bytes)
extern "C" void ext_006E3690();
extern "C" void ext_006E7460();
extern "C" void ext_006FDF90();
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D70();
extern "C" void ext_006C25B0();
extern "C" void ext_006C7B60();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006D23F0();
extern "C" void ext_006D2A90();
extern "C" void ext_006D2BD0();
extern "C" void ext_006D7A90();
extern "C" void ext_00763910();

extern "C" __declspec(naked) void __fastcall fn_00762ED0(void* self, int edx_unused) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        push    -1
        push    0x8c1419
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x164
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [ebp + 0x58]
        mov     dword ptr [esp + 0x178], 0
        lea     ecx, [ebx + 0xd0]
        call    ext_006D2A30
        push    eax
        lea     eax, [esp + 0xf4]
        push    eax
        call    ext_006E3690
        add     esp, 8
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x58], 0
        mov     dword ptr [esp + 0x5c], 0
        push    4
        push    0x10
        mov     dword ptr [esp + 0x58], 0
        mov     dword ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x50], 0
        mov     dword ptr [esp + 0x54], 0
        mov     dword ptr [esp + 0x68], 0
        mov     dword ptr [esp + 0x6c], 0x3ff00000
        mov     dword ptr [esp + 0x98], 0
        mov     dword ptr [esp + 0x9c], 0
        mov     dword ptr [esp + 0x90], 0
        mov     dword ptr [esp + 0x94], 0
        mov     dword ptr [esp + 0x88], 0
        mov     dword ptr [esp + 0x8c], 0
        mov     dword ptr [esp + 0xa0], 0
        mov     dword ptr [esp + 0xa4], 0x3ff00000
        mov     dword ptr [esp + 0x40], 0
        mov     dword ptr [esp + 0x44], 0
        mov     dword ptr [esp + 0x38], 0
        mov     dword ptr [esp + 0x3c], 0
        mov     dword ptr [esp + 0x30], 0
        mov     dword ptr [esp + 0x34], 0
        mov     dword ptr [esp + 0x48], 0
        mov     dword ptr [esp + 0x4c], 0x3ff00000
        mov     dword ptr [esp + 0xb8], 0
        mov     dword ptr [esp + 0xbc], 0
        mov     dword ptr [esp + 0xb0], 0
        mov     dword ptr [esp + 0xb4], 0
        mov     dword ptr [esp + 0xa8], 0
        mov     dword ptr [esp + 0xac], 0
        mov     dword ptr [esp + 0xc0], 0
        mov     dword ptr [esp + 0xc4], 0x3ff00000
        mov     byte ptr [esp + 0x1a], 1
        mov     byte ptr [esp + 0x1b], 1
        call    ext_006D2130
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, dword ptr [ebp + 8]
        mov     byte ptr [esp + 0x178], 1
        call    ext_006D7A90
        mov     ecx, ebx
        mov     esi, eax
        call    ext_006D7A90
        cmp     eax, esi
        je      L_7630a5
        mov     eax, dword ptr [esp + 0x68]
        lea     edx, [esp + 0x14]
        push    edx
        mov     byte ptr [esp + 0x16], 0
        mov     dword ptr [esp + 0x18], 0
        push    eax
        jmp     L_7630d8
    L_7630a5:
        mov     edx, dword ptr [ebp + 8]
        lea     ecx, [esp + 0x68]
        add     edx, 0x28
        push    ecx
        lea     eax, [ebx + 0x28]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_00763910
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jne     L_7630e1
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x12], 0
        push    ecx
        mov     dword ptr [esp + 0x18], 0
        push    0
    L_7630d8:
        lea     ecx, [esp + 0x70]
        call    ext_006D2170
    L_7630e1:
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [esp + 0x68]
        push    0xaabebc
        add     ecx, 4
        mov     dword ptr [esp + 0x1c], edx
        call    ext_007275F0
        lea     ecx, [ebp + 0xc]
        call    ext_006E7460
        mov     ecx, dword ptr [edi + 0xac]
        push    eax
        add     ecx, 4
        call    ext_007279A0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaae518
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x18]
        xor     esi, esi
        test    eax, eax
        jle     L_76315d
    L_76313e:
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [eax + 4*esi]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00727C80
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        cmp     esi, eax
        jl      L_76313e
    L_76315d:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        push    0x20
        push    0x10
        lea     ecx, [esp + 0xe0]
        call    ext_006D2130
        lea     edx, [esp + 0xe8]
        mov     dword ptr [esp + 0xec], edx
        mov     al, byte ptr [esp + 0x12]
        mov     byte ptr [esp + 0x178], 2
        test    al, al
        je      L_763306
        mov     eax, dword ptr [ebp + 8]
        lea     ecx, [esp + 0xd8]
        lea     esi, [eax + 0x28]
        mov     dword ptr [esp + 0x14], esi
        call    ext_006D2250
        mov     ecx, dword ptr [esi + 8]
        mov     eax, dword ptr [esi]
        xor     esi, esi
        mov     dword ptr [esp + 0xe0], ecx
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jle     L_7631f7
    L_7631c9:
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        call    ext_006D2A90
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x3c], esp
        push    eax
        call    ext_006D2390
        lea     ecx, [esp + 0xf8]
        call    ext_006D2BD0
        mov     eax, dword ptr [esp + 0x24]
        inc     esi
        cmp     esi, eax
        jl      L_7631c9
    L_7631f7:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], 0
        test    eax, eax
        jle     L_763306
    L_76320b:
        mov     edx, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0xe8]
        mov     ebx, dword ptr [ebx + 0x38]
        mov     eax, dword ptr [edx + 4*eax]
        shl     eax, 5
        add     ebx, eax
        lea     esi, [ecx + eax]
        lea     ecx, [esp + 0x48]
        push    esi
        call    ext_006C25B0
        lea     edx, [esp + 0x48]
        lea     eax, [esp + 0xf0]
        push    edx
        lea     ecx, [esp + 0x84]
        push    eax
        push    ecx
        call    ext_006C7B60
        add     esp, 0xc
        lea     ecx, [esp + 0x28]
        push    ebx
        call    ext_006C25B0
        lea     edx, [esp + 0x28]
        lea     eax, [esp + 0xf0]
        push    edx
        lea     ecx, [esp + 0xa4]
        push    eax
        push    ecx
        call    ext_006C7B60
        fld     qword ptr [esp + 0x8c]
        fsub    qword ptr [esp + 0xac]
        add     esp, 0xc
        mov     ecx, esi
        push    0
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edx
        push    1
        mov     dword ptr [eax + 4], ecx
        mov     ecx, esi
        fld     qword ptr [esp + 0x8c]
        fsub    qword ptr [esp + 0xac]
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edx
        push    2
        mov     dword ptr [eax + 4], ecx
        mov     ecx, esi
        fld     qword ptr [esp + 0x94]
        fsub    qword ptr [esp + 0xb4]
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edx
        mov     ebx, dword ptr [ebp + 0x58]
        mov     dword ptr [eax + 4], ecx
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        jl      L_76320b
    L_763306:
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadfb8
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x18]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 0x14], esi
        jle     L_7633ed
    L_76332b:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        je      L_7633a6
        mov     edx, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0xe8]
        push    0
        mov     esi, dword ptr [edx + 4*esi]
        shl     esi, 5
        add     esi, ecx
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    2
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        mov     esi, dword ptr [esp + 0x14]
        jmp     L_7633dc
    L_7633a6:
        mov     ecx, dword ptr [edi + 0xac]
        push    0
        push    0
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [edi + 0xac]
        push    0
        push    0
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [edi + 0xac]
        push    0
        push    0
        add     ecx, 4
        call    ext_00727FE0
    L_7633dc:
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], esi
        jl      L_76332b
    L_7633ed:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax]
        cmp     eax, 4
        jne     L_763897
        push    0x20
        push    0x10
        lea     ecx, [esp + 0xc8]
        call    ext_006D2130
        lea     ecx, [esp + 0xd0]
        mov     dword ptr [esp + 0xd4], ecx
        push    1
        push    0
        mov     ecx, ebx
        mov     byte ptr [esp + 0x180], 3
        call    ext_006FDF90
        test    eax, eax
        je      L_7634f1
        push    1
        push    0
        mov     ecx, ebx
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        cmp     dword ptr [eax], 1
        jne     L_7634f1
        push    1
        push    0
        mov     ecx, ebx
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jne     L_7634f1
        push    1
        push    0
        mov     ecx, ebx
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [ebx + 0x28]
        cmp     eax, ecx
        jne     L_7634f1
        mov     esi, dword ptr [ebp + 8]
        push    1
        push    0
        mov     ecx, esi
        call    ext_006FDF90
        test    eax, eax
        je      L_7634f1
        push    1
        push    0
        mov     ecx, esi
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        cmp     dword ptr [eax], 1
        jne     L_7634f1
        push    1
        push    0
        mov     ecx, esi
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jne     L_7634f1
        push    1
        push    0
        mov     ecx, esi
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [esi + 0x28]
        cmp     eax, ecx
        je      L_7634fb
    L_7634f1:
        mov     byte ptr [esp + 0x13], 0
        jmp     L_7637a8
    L_7634fb:
        push    1
        push    0
        mov     ecx, ebx
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        push    1
        push    0
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], eax
        call    ext_006FDF90
        mov     ecx, eax
        call    ext_006B99C0
        lea     ecx, [esp + 0xc0]
        lea     esi, [eax + 8]
        call    ext_006D2250
        mov     edx, dword ptr [esi + 8]
        xor     ebx, ebx
        mov     dword ptr [esp + 0xc8], edx
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jle     L_763574
    L_763548:
        push    ebx
        mov     ecx, esi
        call    ext_006D2A90
        sub     esp, 0x20
        mov     ecx, esp
        mov     dword ptr [esp + 0x3c], esp
        push    eax
        call    ext_006D2390
        lea     ecx, [esp + 0xe0]
        call    ext_006D2BD0
        mov     eax, dword ptr [esp + 0x24]
        inc     ebx
        cmp     ebx, eax
        jl      L_763548
    L_763574:
        mov     eax, dword ptr [esp + 0x18]
        xor     ebx, ebx
        test    eax, eax
        jle     L_7637a8
    L_763582:
        mov     eax, dword ptr [esp + 0x78]
        mov     edx, dword ptr [esp + 0xd0]
        fld     qword ptr [esp + 0x130]
        mov     ecx, dword ptr [eax + 4*ebx]
        mov     eax, dword ptr [esp + 0x14]
        shl     ecx, 5
        mov     eax, dword ptr [eax + 0x18]
        lea     esi, [edx + ecx]
        add     eax, ecx
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x4c], edx
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], edx
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x5c], edx
        fmul    qword ptr [esp + 0x58]
        fld     qword ptr [esp + 0x110]
        fmul    qword ptr [esp + 0x50]
        faddp   st(1), st
        fld     qword ptr [esp + 0xf0]
        fmul    qword ptr [esp + 0x48]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x150]
        fstp    qword ptr [esp + 0x80]
        fld     qword ptr [esp + 0x138]
        fmul    qword ptr [esp + 0x58]
        fld     qword ptr [esp + 0x118]
        fmul    qword ptr [esp + 0x50]
        faddp   st(1), st
        fld     qword ptr [esp + 0xf8]
        fmul    qword ptr [esp + 0x48]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x158]
        fstp    qword ptr [esp + 0x88]
        fld     qword ptr [esp + 0x140]
        fmul    qword ptr [esp + 0x58]
        fld     qword ptr [esp + 0x120]
        fmul    qword ptr [esp + 0x50]
        faddp   st(1), st
        fld     qword ptr [esp + 0x100]
        fmul    qword ptr [esp + 0x48]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x160]
        fstp    qword ptr [esp + 0x90]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], edx
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [esp + 0x130]
        fld     qword ptr [esp + 0x30]
        fmul    qword ptr [esp + 0x110]
        faddp   st(1), st
        fld     qword ptr [esp + 0xf0]
        fmul    qword ptr [esp + 0x28]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x150]
        fstp    qword ptr [esp + 0xa0]
        fld     qword ptr [esp + 0xf8]
        fmul    qword ptr [esp + 0x28]
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [esp + 0x138]
        faddp   st(1), st
        fld     qword ptr [esp + 0x30]
        fmul    qword ptr [esp + 0x118]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x158]
        fstp    qword ptr [esp + 0xa8]
        fld     qword ptr [esp + 0x100]
        fmul    qword ptr [esp + 0x28]
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [esp + 0x140]
        push    0
        mov     ecx, esi
        faddp   st(1), st
        fld     qword ptr [esp + 0x34]
        fmul    qword ptr [esp + 0x124]
        faddp   st(1), st
        fadd    qword ptr [esp + 0x164]
        fstp    qword ptr [esp + 0xb4]
        fld     qword ptr [esp + 0x84]
        fsub    qword ptr [esp + 0xa4]
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], ecx
        push    1
        mov     ecx, esi
        mov     dword ptr [eax + 4], edx
        fld     qword ptr [esp + 0x8c]
        fsub    qword ptr [esp + 0xac]
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], ecx
        push    2
        mov     ecx, esi
        mov     dword ptr [eax + 4], edx
        fld     qword ptr [esp + 0x94]
        fsub    qword ptr [esp + 0xb4]
        fstp    qword ptr [esp + 0x20]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], ecx
        inc     ebx
        mov     dword ptr [eax + 4], edx
        mov     eax, dword ptr [esp + 0x18]
        cmp     ebx, eax
        jl      L_763582
    L_7637a8:
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadc44
        add     ecx, 4
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x18]
        xor     ebx, ebx
        test    eax, eax
        jle     L_763875
    L_7637c9:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        je      L_763832
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0xd0]
        push    0
        mov     esi, dword ptr [eax + 4*ebx]
        shl     esi, 5
        add     esi, ecx
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    1
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [eax]
        add     ecx, 4
        push    edx
        call    ext_00727FE0
        push    2
        mov     ecx, esi
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     edx, dword ptr [eax]
        push    edx
        jmp     L_76385a
    L_763832:
        mov     ecx, dword ptr [edi + 0xac]
        push    0
        push    0
        add     ecx, 4
        call    ext_00727FE0
        mov     ecx, dword ptr [edi + 0xac]
        push    0
        push    0
        add     ecx, 4
        call    ext_00727FE0
        push    0
        push    0
    L_76385a:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x18]
        inc     ebx
        cmp     ebx, eax
        jl      L_7637c9
    L_763875:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        lea     ecx, [esp + 0xc0]
        mov     byte ptr [esp + 0x178], 2
        call    ext_006D2160
    L_763897:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        lea     ecx, [esp + 0xd8]
        mov     byte ptr [esp + 0x178], 1
        call    ext_006D2160
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x178], 0
        call    ext_006D2160
        lea     ecx, [ebp + 0xc]
        mov     dword ptr [esp + 0x178], 0xffffffff
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x170]
        pop     edi
        pop     esi
        mov     al, 1
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x54
    }
}

// [0x0076C1F0] sub_0076C1F0 (3296 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D80A0();
extern "C" void ext_006D2300();
extern "C" void ext_006D23F0();
extern "C" void ext_006DC480();
extern "C" void ext_006C9340();
extern "C" void ext_006DABA0();
extern "C" void ext_006C9370();
extern "C" void ext_006C9390();
extern "C" void ext_006C93B0();
extern "C" void ext_006C9490();
extern "C" void ext_006C94B0();
extern "C" void ext_006C94D0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006DA370();
extern "C" void ext_006C3250();
extern "C" void ext_006A5C62();
extern "C" void ext_006CA140();
extern "C" void ext_006CA500();
extern "C" void ext_006CA020();
extern "C" void ext_006CA540();
extern "C" void ext_006C9B70();
extern "C" void ext_006C3030();
extern "C" void ext_00700990();
extern "C" void ext_007009E0();
extern "C" void ext_006C2720();
extern "C" void ext_006BADB0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA220();
extern "C" void ext_006E7460();
extern "C" void ext_007709E0();
extern "C" void ext_007713B0();
extern "C" void ext_007A1670();
extern "C" void ext_0077FB40();

// [0x0076C1F0] sub_0076C1F0 (3296 bytes)
extern "C" __declspec(naked) int __fastcall fn_0076C1F0(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x8c0ae2
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x134
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ecx, [esp + 0xd4]
        mov     dword ptr [esp + 0x88], esi
        call    ext_006D2370
        xor     ebx, ebx
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0x148], ebx
        call    ext_006D2370
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x148], 1
        call    ext_0077FB40
        push    4
        push    0x10
        lea     ecx, [esp + 0x40]
        mov     byte ptr [esp + 0x150], 2
        mov     dword ptr [esp + 0x14], ebx
        call    ext_006D2130
        lea     eax, [esp + 0x48]
        mov     dword ptr [esp + 0x4c], eax
        push    4
        push    0x10
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x150], 3
        call    ext_006D2130
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x34], ecx
        push    1
        push    0x10
        lea     ecx, [esp + 0x94]
        mov     byte ptr [esp + 0x150], 4
        call    ext_006D2130
        lea     edx, [esp + 0x9c]
        mov     dword ptr [esp + 0xa0], edx
        push    1
        push    0x10
        lea     ecx, [esp + 0x78]
        mov     byte ptr [esp + 0x150], 5
        call    ext_006D2130
        lea     eax, [esp + 0x80]
        mov     dword ptr [esp + 0x84], eax
        mov     ebp, dword ptr [esp + 0x150]
        mov     byte ptr [esp + 0x148], 6
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0xcc], ebx
        mov     dword ptr [esp + 0xd0], ebx
        mov     dword ptr [esp + 0xa4], ebx
        mov     dword ptr [esp + 0xa8], ebx
        jne     L_76C394
        lea     ecx, [esp + 0x70]
        mov     byte ptr [esp + 0x148], 5
        call    ext_006D2160
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x148], 4
        call    ext_006D2160
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x148], 3
        call    ext_006D2160
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x148], 2
        call    ext_006D2160
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x148], 1
        call    ext_006D80A0
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x148], bl
        call    ext_006D80A0
        lea     ecx, [esp + 0xd4]
        mov     dword ptr [esp + 0x148], 0xffffffff
        call    ext_006D80A0
        xor     eax, eax
        jmp     L_76CEB1
    L_76C394:
        push    3
        lea     ecx, [esp + 0x3c]
        call    ext_006D2300
        push    3
        lea     ecx, [esp + 0x90]
        call    ext_006D2300
        push    3
        lea     ecx, [esp + 0x24]
        call    ext_006D2300
        push    3
        lea     ecx, [esp + 0x74]
        call    ext_006D2300
        xor     eax, eax
    L_76C3C5:
        mov     ecx, dword ptr [esp + 0x9c]
        inc     eax
        cmp     eax, 3
        mov     byte ptr [ecx + eax - 1], bl
        mov     edx, dword ptr [esp + 0x80]
        mov     byte ptr [edx + eax - 1], bl
        jl      L_76C3C5
        mov     al, byte ptr [esi + 0x300]
        push    edi
        cmp     al, bl
        je      L_76C9A4
        lea     eax, [esp + 0xa8]
        lea     ecx, [esp + 0xd0]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9340
        push    6
        push    1
        lea     ecx, [esp + 0xb0]
        call    ext_006DABA0
        mov     esi, eax
        mov     ecx, ebp
        inc     esi
        mov     dword ptr [esp + 0x20], esi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9370
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, ebp
        mov     dword ptr [edx], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9390
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx + 4], eax
        mov     ecx, ebp
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C93B0
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, ebp
        mov     dword ptr [edx + 8], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9490
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [ecx], eax
        mov     ecx, ebp
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C94B0
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, ebp
        mov     dword ptr [edx + 4], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C94D0
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [edx]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76C562
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0xd8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 7
        je      L_76C4F9
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C4FB
    L_76C4F9:
        xor     eax, eax
    L_76C4FB:
        mov     ecx, dword ptr [esp + 0x4c]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0xa4]
        mov     byte ptr [edx], 1
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [eax]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov     ecx, dword ptr [ecx]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0xe8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x4c]
        push    1
        mov     ecx, dword ptr [ecx]
        call    ext_006CA540
    L_76C562:
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [edx + 4]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76C62A
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0xd8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 8
        je      L_76C5BB
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C5BD
    L_76C5BB:
        xor     eax, eax
    L_76C5BD:
        mov     ecx, dword ptr [esp + 0x4c]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx + 4], eax
        mov     edx, dword ptr [esp + 0xa4]
        mov     byte ptr [edx + 1], 1
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [eax + 4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov     ecx, dword ptr [ecx + 4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    1
        lea     ecx, [esp + 0xe8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x4c]
        push    1
        mov     ecx, dword ptr [ecx + 4]
        call    ext_006CA540
    L_76C62A:
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [edx + 8]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76C6F2
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0xd8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
        mov     ecx, dword ptr [esp + 0xa0]
        push    0x98
        mov     byte ptr [ecx + 2], 1
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 9
        je      L_76C68E
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C690
    L_76C68E:
        xor     eax, eax
    L_76C690:
        mov     edx, dword ptr [esp + 0x4c]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [edx + 8], eax
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [eax + 8]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov     ecx, dword ptr [ecx + 8]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    2
        lea     ecx, [esp + 0xe8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x4c]
        push    1
        mov     ecx, dword ptr [ecx + 8]
        call    ext_006CA540
    L_76C6F2:
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [edx]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76C7D1
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0x54]
        mov     ecx, ebp
        push    eax
        call    ext_006C3030
        mov     ecx, eax
        call    ext_00700990
        push    ebx
        lea     ecx, [esp + 0xb4]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax], ecx
        push    0x98
        mov     dword ptr [eax + 4], edx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 0xa
        je      L_76C768
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C76A
    L_76C768:
        xor     eax, eax
    L_76C76A:
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x88]
        mov     byte ptr [edx], 1
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [eax]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x34]
        push    ebx
        mov     ecx, dword ptr [ecx]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0xc0]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     ecx, dword ptr [ecx]
        call    ext_006CA540
    L_76C7D1:
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [edx + 4]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76C8B8
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0x54]
        mov     ecx, ebp
        push    eax
        call    ext_006C3030
        mov     ecx, eax
        call    ext_00700990
        push    1
        lea     ecx, [esp + 0xb4]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esp + 0x60]
        mov     dword ptr [eax], ecx
        push    0x98
        mov     dword ptr [eax + 4], edx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 0xb
        je      L_76C849
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C84B
    L_76C849:
        xor     eax, eax
    L_76C84B:
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx + 4], eax
        mov     edx, dword ptr [esp + 0x88]
        mov     byte ptr [edx + 1], 1
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [eax + 4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x34]
        push    ebx
        mov     ecx, dword ptr [ecx + 4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    1
        lea     ecx, [esp + 0xc0]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     ecx, dword ptr [ecx + 4]
        call    ext_006CA540
    L_76C8B8:
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [edx + 8]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76CB66
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    ext_006DA370
        lea     eax, [esp + 0x54]
        mov     ecx, ebp
        push    eax
        call    ext_006C3030
        mov     ecx, eax
        call    ext_00700990
        push    2
        lea     ecx, [esp + 0xb4]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [eax], ecx
        push    0x98
        mov     dword ptr [eax + 4], edx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 0xc
        je      L_76C930
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76C932
    L_76C930:
        xor     eax, eax
    L_76C932:
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [esp + 0x88]
        mov     byte ptr [edx + 2], 1
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [eax + 8]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x34]
        push    ebx
        mov     ecx, dword ptr [ecx + 8]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    2
        lea     ecx, [esp + 0xc0]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     ecx, dword ptr [ecx + 8]
        call    ext_006CA540
        jmp     L_76CB66
    L_76C9A4:
        push    6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x38], 1
        call    ext_006DA370
        lea     edx, [esp + 0xd8]
        mov     ecx, ebp
        push    edx
        call    ext_006C3250
        lea     eax, [esp + 0x54]
        mov     ecx, ebp
        push    eax
        call    ext_006C3030
        mov     ecx, eax
        call    ext_00700990
        push    ebx
        lea     ecx, [esp + 0xb4]
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax], ecx
        push    1
        lea     ecx, [esp + 0xb4]
        mov     dword ptr [eax + 4], edx
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esp + 0x60]
        mov     dword ptr [eax], ecx
        push    2
        lea     ecx, [esp + 0xb4]
        mov     dword ptr [eax + 4], edx
        call    ext_006D23F0
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [eax], ecx
        xor     esi, esi
        mov     dword ptr [eax + 4], edx
    L_76CA30:
        push    0x98
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 0xd
        je      L_76CA56
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76CA58
    L_76CA56:
        xor     eax, eax
    L_76CA58:
        mov     ecx, dword ptr [esp + 0x4c]
        push    0x98
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [ecx + 4 * esi], eax
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x14c], 0xe
        je      L_76CA8D
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76CA8F
    L_76CA8D:
        xor     eax, eax
    L_76CA8F:
        mov     edx, dword ptr [esp + 0x34]
        push    1
        mov     byte ptr [esp + 0x150], 6
        mov     dword ptr [edx + 4 * esi], eax
        mov     eax, dword ptr [esp + 0xa4]
        mov     byte ptr [eax + esi], 1
        mov     ecx, dword ptr [esp + 0x88]
        mov     byte ptr [ecx + esi], 1
        mov     edx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [edx + 4 * esi]
        call    ext_006CA500
        mov     eax, dword ptr [esp + 0x4c]
        push    ebx
        mov     ecx, dword ptr [eax + 4 * esi]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    esi
        lea     ecx, [esp + 0xe8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006C9B70
        mov     eax, dword ptr [esp + 0x4c]
        push    1
        mov     ecx, dword ptr [eax + 4 * esi]
        call    ext_006CA540
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        mov     ecx, dword ptr [ecx + 4 * esi]
        call    ext_006CA500
        mov     edx, dword ptr [esp + 0x34]
        push    ebx
        mov     ecx, dword ptr [edx + 4 * esi]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    esi
        lea     ecx, [esp + 0xc0]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [esp + 0x34]
        push    1
        mov     ecx, dword ptr [edx + 4 * esi]
        call    ext_006CA540
        inc     esi
        cmp     esi, 3
        jl      L_76CA30
        mov     esi, dword ptr [esp + 0x20]
    L_76CB66:
        push    esi
        lea     eax, [esp + 0x14]
        push    esi
        push    eax
        call    ext_007A1670
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
        mov     ecx, ebp
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_76CBC2
        mov     ecx, ebp
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -1
        xor     eax, eax
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
        mov     esi, dword ptr [esp + 0x20]
        jmp     L_76CBE1
    L_76CBC2:
        push    0xa
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
    L_76CBE1:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, ebp
        mov     byte ptr [edx + 0x1f], bl
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        test    eax, eax
        je      L_76CD05
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 4
        je      L_76CC7F
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 5
        je      L_76CC7F
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 6
        je      L_76CC7F
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 9
        je      L_76CC7F
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 7
        jne     L_76CD05
    L_76CC7F:
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x14
        jae     L_76CCD7
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, eax
        xor     eax, eax
        lea     edx, [ecx + 0xb]
        or      ecx, -1
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     L_76CD8B
    L_76CCD7:
        push    0x14
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        add     ecx, 0xb
        push    ecx
        call    dword ptr [mem_009252D0]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     byte ptr [edx + 0x1f], bl
        jmp     L_76CD8F
    L_76CD05:
        lea     ecx, [esp + 0xf8]
        call    ext_006B9D10
        push    0xaaed44
        lea     ecx, [esp + 0xfc]
        mov     byte ptr [esp + 0x150], 0xf
        call    ext_006B9EC0
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        push    eax
        lea     ecx, [esp + 0xfc]
        call    ext_006BA220
        lea     ecx, [esp + 0xf8]
        call    ext_006E7460
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, eax
        xor     eax, eax
        mov     byte ptr [esp + 0x14c], 6
        lea     edx, [ecx + 0xb]
        or      ecx, -1
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        lea     ecx, [esp + 0xf8]
        call    ext_006B9D70
    L_76CD8B:
        mov     esi, dword ptr [esp + 0x20]
    L_76CD8F:
        mov     eax, dword ptr [esp + 0x4c]
        push    esi
        mov     edi, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x34]
        mov     edx, dword ptr [eax + 0x30]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_007709E0
        mov     eax, dword ptr [esp + 0x34]
        push    esi
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x44]
        mov     edx, dword ptr [eax + 0x40]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_007713B0
        mov     al, byte ptr [edi + 0x300]
        pop     edi
        cmp     al, bl
        jne     L_76CE29
        xor     esi, esi
    L_76CDE9:
        mov     eax, dword ptr [esp + 0x9c]
        cmp     byte ptr [eax + esi], bl
        je      L_76CE06
        mov     ecx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [ecx + 4 * esi]
        cmp     ecx, ebx
        je      L_76CE06
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    L_76CE06:
        mov     eax, dword ptr [esp + 0x80]
        cmp     byte ptr [eax + esi], bl
        je      L_76CE23
        mov     ecx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [ecx + 4 * esi]
        cmp     ecx, ebx
        je      L_76CE23
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    L_76CE23:
        inc     esi
        cmp     esi, 3
        jl      L_76CDE9
    L_76CE29:
        mov     esi, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x70]
        mov     byte ptr [esp + 0x148], 5
        call    ext_006D2160
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x148], 4
        call    ext_006D2160
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x148], 3
        call    ext_006D2160
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x148], 2
        call    ext_006D2160
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x148], 1
        call    ext_006D80A0
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x148], bl
        call    ext_006D80A0
        lea     ecx, [esp + 0xd4]
        mov     dword ptr [esp + 0x148], 0xffffffff
        call    ext_006D80A0
        mov     eax, esi
    L_76CEB1:
        mov     ecx, dword ptr [esp + 0x140]
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x140
        ret     4
    }
}

// [0x0076B1E0] sub_0076B1E0 (4112 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2300();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006DA370();
extern "C" void ext_006DABA0();
extern "C" void ext_006DC480();
extern "C" void ext_006DEF30();
extern "C" void ext_006E7460();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9960();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA220();
extern "C" void ext_006BADB0();
extern "C" void ext_006C2720();
extern "C" void ext_006C3030();
extern "C" void ext_006C3250();
extern "C" void ext_006C32C0();
extern "C" void ext_006C3330();
extern "C" void ext_006C9340();
extern "C" void ext_006C9360();
extern "C" void ext_006C9B70();
extern "C" void ext_006CA020();
extern "C" void ext_006CA140();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D80A0();
extern "C" void ext_007709E0();
extern "C" void ext_00770AF0();
extern "C" void ext_00771240();
extern "C" void ext_007A1DC0();
extern "C" int mem_009252A0;

extern "C" __declspec(naked) int __fastcall fn_0076B1E0(void* self, int edx_unused, int arg) {
    __asm {
        push    -1
        push    0x8c0a10
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x164
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ecx, [esp + 0xe4]
        mov     dword ptr [esp + 0x68], esi
        call    ext_006D2370
        xor     ebx, ebx
        lea     ecx, [esp + 0x104]
        mov     dword ptr [esp + 0x178], ebx
        call    ext_006D2370
        lea     ecx, [esp + 0xc4]
        mov     byte ptr [esp + 0x178], 0x1
        call    ext_006D2370
        push    0x4
        push    0x10
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x180], 0x2
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_006D2130
        lea     eax, [esp + 0x5c]
        mov     dword ptr [esp + 0x60], eax
        push    0x4
        push    0x10
        lea     ecx, [esp + 0x24]
        mov     byte ptr [esp + 0x180], 0x3
        call    ext_006D2130
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x30], ecx
        push    0x4
        push    0x10
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x180], 0x4
        call    ext_006D2130
        lea     edx, [esp + 0x44]
        mov     dword ptr [esp + 0x48], edx
        push    0x1
        push    0x10
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x180], 0x5
        call    ext_006D2130
        lea     eax, [esp + 0x94]
        mov     dword ptr [esp + 0x98], eax
        push    0x1
        push    0x10
        lea     ecx, [esp + 0xa4]
        mov     byte ptr [esp + 0x180], 0x6
        call    ext_006D2130
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0xb0], ecx
        push    0x1
        push    0x10
        lea     ecx, [esp + 0x74]
        mov     byte ptr [esp + 0x180], 0x7
        call    ext_006D2130
        lea     edx, [esp + 0x7c]
        mov     dword ptr [esp + 0x80], edx
        mov     ebp, dword ptr [esp + 0x180]
        mov     byte ptr [esp + 0x178], 0x8
        cmp     ebp, ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0xbc], ebx
        mov     dword ptr [esp + 0xc0], ebx
        mov     dword ptr [esp + 0xb4], ebx
        mov     dword ptr [esp + 0xb8], ebx
        jne     L_76B3EC
        lea     ecx, [esp + 0x6c]
        mov     byte ptr [esp + 0x178], 0x7
        call    ext_006D2160
        lea     ecx, [esp + 0x9c]
        mov     byte ptr [esp + 0x178], 0x6
        call    ext_006D2160
        lea     ecx, [esp + 0x84]
        mov     byte ptr [esp + 0x178], 0x5
        call    ext_006D2160
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x178], 0x4
        call    ext_006D2160
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x178], 0x3
        call    ext_006D2160
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0x178], 0x2
        call    ext_006D2160
        lea     ecx, [esp + 0xc4]
        mov     byte ptr [esp + 0x178], 0x1
        call    ext_006D80A0
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x178], bl
        call    ext_006D80A0
        lea     ecx, [esp + 0xe4]
        mov     dword ptr [esp + 0x178], 0xffffffff
        call    ext_006D80A0
        xor     eax, eax
        jmp     L_76C1D3
    L_76B3EC:
        push    0x3
        lea     ecx, [esp + 0x50]
        call    ext_006D2300
        push    0x3
        lea     ecx, [esp + 0x88]
        call    ext_006D2300
        push    0x3
        lea     ecx, [esp + 0x20]
        call    ext_006D2300
        push    0x3
        lea     ecx, [esp + 0xa0]
        call    ext_006D2300
        push    0x3
        lea     ecx, [esp + 0x38]
        call    ext_006D2300
        push    0x3
        lea     ecx, [esp + 0x70]
        call    ext_006D2300
        xor     eax, eax
    L_76B436:
        mov     ecx, dword ptr [esp + 0x94]
        inc     eax
        cmp     eax, 0x3
        mov     byte ptr [ecx + eax - 0x1], bl
        mov     edx, dword ptr [esp + 0xac]
        mov     byte ptr [edx + eax - 0x1], bl
        mov     ecx, dword ptr [esp + 0x7c]
        mov     byte ptr [ecx + eax - 0x1], bl
        jl      L_76B436
        mov     al, byte ptr [esi + 0x300]
        push    edi
        cmp     al, bl
        je      L_76BBBA
        lea     edx, [esp + 0xb8]
        lea     eax, [esp + 0xc0]
        push    edx
        push    eax
        mov     ecx, ebp
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9340
        push    0x6
        push    0x1
        lea     ecx, [esp + 0xc0]
        call    ext_006DABA0
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x30]
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x60]
        push    ecx
        inc     edi
        push    edx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x74], edi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9360
        mov     ecx, eax
        call    ext_006DEF30
        mov     ecx, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [ecx]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B583
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     edx, [esp + 0xe8]
        mov     ecx, ebp
        push    edx
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x9
        je      L_76B51A
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B51C
    L_76B51A:
        xor     eax, eax
    L_76B51C:
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x9c]
        mov     byte ptr [edx], 0x1
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        mov     ecx, dword ptr [ecx]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0xf8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     ecx, dword ptr [ecx]
        call    ext_006CA540
    L_76B583:
        mov     edx, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B64B
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0xe8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xa
        je      L_76B5DC
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B5DE
    L_76B5DC:
        xor     eax, eax
    L_76B5DE:
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [esp + 0x9c]
        mov     byte ptr [edx + 0x1], 0x1
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x1
        lea     ecx, [esp + 0xf8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA540
    L_76B64B:
        mov     edx, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B713
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0xe8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xb
        je      L_76B6A4
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B6A6
    L_76B6A4:
        xor     eax, eax
    L_76B6A6:
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [esp + 0x9c]
        mov     byte ptr [edx + 0x2], 0x1
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x2
        lea     ecx, [esp + 0xf8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA540
    L_76B713:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [edx]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B7D4
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0x108]
        mov     ecx, ebp
        push    eax
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xc
        je      L_76B76B
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B76D
    L_76B76B:
        xor     eax, eax
    L_76B76D:
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0xb4]
        mov     byte ptr [edx], 0x1
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x30]
        push    ebx
        mov     ecx, dword ptr [ecx]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x118]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     ecx, dword ptr [ecx]
        call    ext_006CA540
    L_76B7D4:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B89C
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0x108]
        mov     ecx, ebp
        push    eax
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xd
        je      L_76B82D
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B82F
    L_76B82D:
        xor     eax, eax
    L_76B82F:
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [esp + 0xb4]
        mov     byte ptr [edx + 0x1], 0x1
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x30]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x1
        lea     ecx, [esp + 0x118]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA540
    L_76B89C:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76B964
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0x108]
        mov     ecx, ebp
        push    eax
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xe
        je      L_76B8F5
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B8F7
    L_76B8F5:
        xor     eax, eax
    L_76B8F7:
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [esp + 0xb4]
        mov     byte ptr [edx + 0x2], 0x1
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x30]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x2
        lea     ecx, [esp + 0x118]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x30]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA540
    L_76B964:
        mov     edx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [edx]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76BA25
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0xc8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3330
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0xf
        je      L_76B9BC
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76B9BE
    L_76B9BC:
        xor     eax, eax
    L_76B9BE:
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x84]
        mov     byte ptr [edx], 0x1
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x48]
        push    ebx
        mov     ecx, dword ptr [ecx]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0xd8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     ecx, dword ptr [ecx]
        call    ext_006CA540
    L_76BA25:
        mov     edx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76BAED
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0xc8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3330
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x10
        je      L_76BA7E
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76BA80
    L_76BA7E:
        xor     eax, eax
    L_76BA80:
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [esp + 0x84]
        mov     byte ptr [edx + 0x1], 0x1
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x48]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x1
        lea     ecx, [esp + 0xd8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA540
    L_76BAED:
        mov     edx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA6A0
        cmp     eax, ebx
        jne     L_76BDCE
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    ext_006DA370
        lea     eax, [esp + 0xc8]
        mov     ecx, ebp
        push    eax
        call    ext_006C3330
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x11
        je      L_76BB46
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76BB48
    L_76BB46:
        xor     eax, eax
    L_76BB48:
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [esp + 0x84]
        mov     byte ptr [edx + 0x2], 0x1
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x48]
        push    ebx
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    0x2
        lea     ecx, [esp + 0xd8]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA540
        jmp     L_76BDCE
    L_76BBBA:
        push    0x6
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x80], 0x1
        call    ext_006DA370
        lea     edx, [esp + 0xe8]
        mov     ecx, ebp
        push    edx
        call    ext_006C3250
        lea     eax, [esp + 0x108]
        mov     ecx, ebp
        push    eax
        call    ext_006C32C0
        lea     ecx, [esp + 0xc8]
        push    ecx
        mov     ecx, ebp
        call    ext_006C3330
        xor     esi, esi
    L_76BC04:
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x12
        je      L_76BC2A
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76BC2C
    L_76BC2A:
        xor     eax, eax
    L_76BC2C:
        mov     edx, dword ptr [esp + 0x60]
        push    0x98
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [edx + esi*4], eax
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x13
        je      L_76BC61
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76BC63
    L_76BC61:
        xor     eax, eax
    L_76BC63:
        mov     ecx, dword ptr [esp + 0x30]
        push    0x98
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [ecx + esi*4], eax
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x17c], 0x14
        je      L_76BC98
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_76BC9A
    L_76BC98:
        xor     eax, eax
    L_76BC9A:
        mov     edx, dword ptr [esp + 0x48]
        push    0x1
        mov     byte ptr [esp + 0x180], 0x8
        mov     dword ptr [edx + esi*4], eax
        mov     eax, dword ptr [esp + 0x9c]
        mov     byte ptr [eax + esi], 0x1
        mov     ecx, dword ptr [esp + 0xb4]
        mov     byte ptr [ecx + esi], 0x1
        mov     edx, dword ptr [esp + 0x84]
        mov     byte ptr [edx + esi], 0x1
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax + esi*4]
        call    ext_006CA500
        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        mov     ecx, dword ptr [ecx + esi*4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    esi
        lea     ecx, [esp + 0xf8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [esp + 0x60]
        push    0x1
        mov     ecx, dword ptr [ecx + esi*4]
        call    ext_006CA540
        mov     edx, dword ptr [esp + 0x30]
        push    0x1
        mov     ecx, dword ptr [edx + esi*4]
        call    ext_006CA500
        mov     eax, dword ptr [esp + 0x30]
        push    ebx
        mov     ecx, dword ptr [eax + esi*4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    esi
        lea     ecx, [esp + 0x118]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006C9B70
        mov     eax, dword ptr [esp + 0x30]
        push    0x1
        mov     ecx, dword ptr [eax + esi*4]
        call    ext_006CA540
        mov     ecx, dword ptr [esp + 0x48]
        push    0x1
        mov     ecx, dword ptr [ecx + esi*4]
        call    ext_006CA500
        mov     edx, dword ptr [esp + 0x48]
        push    ebx
        mov     ecx, dword ptr [edx + esi*4]
        call    ext_006CA020
        push    ebx
        push    ebx
        push    ebx
        push    esi
        lea     ecx, [esp + 0xd8]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [esp + 0x48]
        push    0x1
        mov     ecx, dword ptr [edx + esi*4]
        call    ext_006CA540
        inc     esi
        cmp     esi, 0x3
        jl      L_76BC04
        mov     edi, dword ptr [esp + 0x68]
    L_76BDCE:
        push    ebx
        push    ebx
        push    edi
        push    edi
        lea     eax, [esp + 0x28]
        push    edi
        push    eax
        call    ext_007A1DC0
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0x18
        mov     byte ptr [ecx + 0xa], bl
        mov     ecx, ebp
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_76BE29
        mov     ecx, ebp
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x18]
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        jmp     L_76BE48
    L_76BE29:
        push    0xa
        mov     ecx, ebp
        call    ext_006BADB0
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], bl
    L_76BE48:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, ebp
        mov     byte ptr [edx + 0x1f], bl
        call    ext_006C2720
        test    eax, eax
        je      L_76C045
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        test    eax, eax
        je      L_76BF7B
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x4
        je      L_76BEF5
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x5
        je      L_76BEF5
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x6
        je      L_76BEF5
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x9
        je      L_76BEF5
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x7
        jne     L_76BF7B
    L_76BEF5:
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x14
        jae     L_76BF4D
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, eax
        xor     eax, eax
        lea     edx, [ecx + 0xb]
        or      ecx, -0x1
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        jmp     L_76C045
    L_76BF4D:
        push    0x14
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        add     ecx, 0xb
        push    ecx
        call    dword ptr [mem_009252D0]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0xc
        mov     byte ptr [edx + 0x1f], bl
        jmp     L_76C045
    L_76BF7B:
        lea     ecx, [esp + 0x128]
        call    ext_006B9D10
        push    0xaaed44
        lea     ecx, [esp + 0x12c]
        mov     byte ptr [esp + 0x180], 0x15
        call    ext_006B9EC0
        push    0x7
        push    0xaaecb0
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        push    eax
        call    dword ptr [mem_009252A0]
        add     esp, 0xc
        test    eax, eax
        jne     L_76BFE4
        mov     eax, dword ptr [esp + 0x6c]
        cmp     byte ptr [eax + 0xb4], bl
        je      L_76BFD6
        push    0xaaed3c
        jmp     L_76BFF3
    L_76BFD6:
        lea     ecx, [esp + 0x128]
        call    ext_006B9960
        jmp     L_76BFFF
    L_76BFE4:
        mov     ecx, ebp
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        push    eax
    L_76BFF3:
        lea     ecx, [esp + 0x12c]
        call    ext_006BA220
    L_76BFFF:
        lea     ecx, [esp + 0x128]
        call    ext_006E7460
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, eax
        xor     eax, eax
        mov     byte ptr [esp + 0x17c], 0x8
        lea     edx, [ecx + 0xb]
        or      ecx, -0x1
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        lea     ecx, [esp + 0x128]
        call    ext_006B9D70
    L_76C045:
        mov     eax, dword ptr [esp + 0x60]
        mov     esi, dword ptr [esp + 0x68]
        push    esi
        mov     edi, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x64]
        mov     edx, dword ptr [eax + 0x60]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_007709E0
        mov     eax, dword ptr [esp + 0x30]
        push    esi
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x74]
        mov     edx, dword ptr [eax + 0x70]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_00770AF0
        mov     eax, dword ptr [esp + 0x48]
        push    esi
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x84]
        mov     edx, dword ptr [eax + 0x80]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_00771240
        mov     al, byte ptr [edi + 0x300]
        pop     edi
        cmp     al, bl
        jne     L_76C123
        xor     esi, esi
    L_76C0C9:
        mov     eax, dword ptr [esp + 0x94]
        cmp     byte ptr [eax + esi], bl
        je      L_76C0E6
        mov     ecx, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [ecx + esi*4]
        cmp     ecx, ebx
        je      L_76C0E6
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_76C0E6:
        mov     eax, dword ptr [esp + 0xac]
        cmp     byte ptr [eax + esi], bl
        je      L_76C103
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ecx + esi*4]
        cmp     ecx, ebx
        je      L_76C103
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_76C103:
        mov     eax, dword ptr [esp + 0x7c]
        cmp     byte ptr [eax + esi], bl
        je      L_76C11D
        mov     ecx, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [ecx + esi*4]
        cmp     ecx, ebx
        je      L_76C11D
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_76C11D:
        inc     esi
        cmp     esi, 0x3
        jl      L_76C0C9
    L_76C123:
        mov     esi, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x6c]
        mov     byte ptr [esp + 0x178], 0x7
        call    ext_006D2160
        lea     ecx, [esp + 0x9c]
        mov     byte ptr [esp + 0x178], 0x6
        call    ext_006D2160
        lea     ecx, [esp + 0x84]
        mov     byte ptr [esp + 0x178], 0x5
        call    ext_006D2160
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x178], 0x4
        call    ext_006D2160
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x178], 0x3
        call    ext_006D2160
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0x178], 0x2
        call    ext_006D2160
        lea     ecx, [esp + 0xc4]
        mov     byte ptr [esp + 0x178], 0x1
        call    ext_006D80A0
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x178], bl
        call    ext_006D80A0
        lea     ecx, [esp + 0xe4]
        mov     dword ptr [esp + 0x178], 0xffffffff
        call    ext_006D80A0
    L_76C1D3:
        mov     eax, esi
        mov     ecx, dword ptr [esp + 0x170]
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x170
        ret     0x4
    }
}

// [0x007649B0] sub_007649B0 (4400 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C2ED0();
extern "C" void ext_006C3030();
extern "C" void ext_006C3640();
extern "C" void ext_006C3710();
extern "C" void ext_006C3C60();
extern "C" void ext_006CD320();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2300();
extern "C" void ext_006D2390();
extern "C" void ext_006D23F0();
extern "C" void ext_006D2590();
extern "C" void ext_006D2630();
extern "C" void ext_006D29A0();
extern "C" void ext_006D7A90();
extern "C" void ext_006D7AA0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D81F0();
extern "C" void ext_006D8210();
extern "C" void ext_006D8240();
extern "C" void ext_006D8280();
extern "C" void ext_006D8520();
extern "C" void ext_006D8550();
extern "C" void ext_006D8680();
extern "C" void ext_006D86C0();
extern "C" void ext_006D86F0();
extern "C" void ext_006D8940();
extern "C" void ext_006D8980();
extern "C" void ext_006D89D0();
extern "C" void ext_006DE460();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_006E7460();
extern "C" void ext_006FD480();
extern "C" void ext_006FD600();
extern "C" void ext_006FD980();
extern "C" void ext_006FDD40();
extern "C" void ext_00702400();
extern "C" void ext_0070CF00();
extern "C" void ext_00715EB0();
extern "C" void ext_007177C0();
extern "C" void ext_00717920();
extern "C" void ext_00717AD0();
extern "C" void ext_0074F820();
extern "C" void ext_00764190();
extern "C" void ext_007648F0();
extern "C" void ext_007649B0();
extern "C" void ext_00765AE0();
extern "C" void ext_00766040();
extern "C" void ext_00773E10();
extern "C" void ext_00783840();
extern "C" void ext_007873F0();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA3D0();
extern "C" void ext_006BADC0();
extern "C" int mem_0092525C;

extern "C" __declspec(naked) void __fastcall fn_007649B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        push    -0x1
        push    0x8bfff7
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x374
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        call    ext_006C2ED0
        cmp     al, 0x1
        je      short L_7649f1
        cmp     byte ptr [esi + 0x14e], 0x1
        jne     L_765a8a
    L_7649f1:
        mov     ecx, ebx
        call    ext_006C3030
        mov     edi, eax
        test    edi, edi
        je      L_765a8a
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax]
        cmp     eax, 0x4
        jne     L_765a8a
        mov     ecx, edi
        call    ext_006D7A90
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], eax
        call    ext_006D8550
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], eax
        call    ext_006FD980
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esp + 0x54], eax
        call    ext_006FD480
        mov     ecx, edi
        mov     dword ptr [esp + 0x38], eax
        call    ext_006D81F0
        mov     ecx, edi
        mov     dword ptr [esp + 0x54], eax
        call    ext_006D86C0
        mov     ecx, edi
        mov     dword ptr [esp + 0x84], eax
        call    ext_006D8980
        mov     ecx, edi
        mov     dword ptr [esp + 0x5c], eax
        call    ext_006D86F0
        mov     dword ptr [esp + 0x60], eax
        xor     eax, eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x33], 0x0
        mov     byte ptr [esp + 0x23], 0x1
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x40], eax
        call    ext_006D8680
        mov     ecx, edi
        mov     dword ptr [esp + 0x48], eax
        call    ext_006D8940
        mov     ecx, edi
        mov     dword ptr [esp + 0x4c], eax
        call    ext_006DEEC0
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], eax
        call    ext_006D7AA0
        mov     ecx, edi
        mov     dword ptr [esp + 0x44], eax
        call    ext_006D8520
        mov     ecx, dword ptr [esi + 0x150]
        mov     edx, dword ptr [esi + 0x154]
        mov     dword ptr [esp + 0x34], eax
        push    0x0
        lea     eax, [esp + 0x14c]
        mov     dword ptr [esp + 0x8c], ecx
        push    0x0
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x64], edx
        call    ext_006C3640
        push    0x0
        lea     ecx, [esp + 0x12c]
        push    0x0
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x394], 0x0
        call    ext_006C3710
        push    0x0
        lea     edx, [esp + 0x10c]
        push    0x0
        push    edx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x394], 0x1
        call    ext_006C3C60
        lea     eax, [esp + 0x108]
        lea     ecx, [esp + 0x128]
        push    eax
        lea     edx, [esp + 0x14c]
        push    ecx
        mov     byte ptr [esp + 0x390], 0x2
        push    edx
        lea     ecx, [esp + 0x20c]
        call    ext_00715EB0
        lea     eax, [esp + 0x300]
        lea     ecx, [esp + 0x200]
        push    eax
        mov     byte ptr [esp + 0x38c], 0x3
        call    ext_00717920
        lea     ecx, [esp + 0x280]
        mov     byte ptr [esp + 0x388], 0x4
        push    ecx
        mov     ecx, eax
        call    ext_00717AD0
        lea     ecx, [esp + 0x300]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006D80A0
        lea     edx, [esp + 0xac]
        mov     ecx, ebx
        push    edx
        call    ext_006BADC0
        mov     ecx, eax
        mov     byte ptr [esp + 0x388], 0x7
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [esi + 0xac]
        push    0xaaebfc
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006B9D70
        mov     ecx, edi
        call    ext_0070CF00
        test    eax, eax
        jne     short L_764bf3
        mov     ecx, edi
        call    ext_006CD320
        test    eax, eax
        je      L_764dac
    L_764bf3:
        cmp     byte ptr [esi + 0x14d], 0x1
        jne     L_764dac
        push    0x20
        push    0x10
        lea     ecx, [esp + 0x6c]
        call    ext_006D2130
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x78], ecx
        mov     edx, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x64]
        push    edx
        mov     byte ptr [esp + 0x38c], 0x8
        call    ext_006D2300
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jle     L_764cc1
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x44]
        sub     eax, ecx
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0xc], eax
    L_764c59:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x2c]
        add     edx, ecx
        lea     eax, [esp + 0x8c]
        push    edx
        push    eax
        call    ext_006D2590
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x28]
        push    eax
        add     ecx, edx
        mov     byte ptr [esp + 0x38c], 0x9
        call    ext_007873F0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x388], 0x8
        call    ext_006D80A0
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, 0x20
        add     edx, eax
        add     ecx, eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x28], edx
        dec     eax
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0xc], eax
        jne     short L_764c59
    L_764cc1:
        mov     ecx, edi
        call    ext_0070CF00
        test    eax, eax
        je      short L_764ce8
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, esi
        push    eax
        push    edi
        push    ebx
        call    ext_00766040
        mov     ecx, dword ptr [esp + 0x74]
        push    ecx
        push    edi
        push    ebx
        mov     ecx, esi
        call    ext_00766040
    L_764ce8:
        mov     ecx, edi
        call    ext_006CD320
        test    eax, eax
        je      short L_764d1d
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x200]
        push    edx
        push    edi
        push    eax
        mov     ecx, esi
        call    ext_00773E10
        mov     ecx, dword ptr [esp + 0x74]
        lea     edx, [esp + 0x200]
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    ext_00773E10
    L_764d1d:
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jle     short L_764d9b
        mov     ebx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x18]
        sub     eax, ebx
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0xc], ecx
    L_764d3f:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x74]
        add     eax, ebx
        lea     ecx, [esp + 0x8c]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        lea     ecx, [eax + edx]
        call    ext_006D2630
        push    eax
        mov     ecx, ebx
        mov     byte ptr [esp + 0x38c], 0xa
        call    ext_007873F0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x388], 0x8
        call    ext_006D80A0
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0xc]
        add     edx, 0x20
        add     ebx, 0x20
        dec     eax
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0xc], eax
        jne     short L_764d3f
    L_764d9b:
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006D2160
    L_764dac:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jle     L_764e85
        mov     ebx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0xc], eax
    L_764dc0:
        push    ebx
        lea     ecx, [esp + 0x90]
        call    ext_006D2390
        lea     ecx, [esp + 0x8c]
        lea     edx, [esp + 0x64]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x208]
        mov     byte ptr [esp + 0x390], 0xb
        call    ext_007177C0
        push    0x2
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x38c], 0xc
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     edx, dword ptr [eax]
        push    edx
        push    0x1
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        lea     ecx, [esp + 0x70]
        mov     edx, dword ptr [eax]
        push    edx
        push    0x0
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebec
        push    eax
        call    dword ptr [mem_0092525C]
        mov     edx, dword ptr [esi + 0x150]
        add     esp, 0x20
        inc     edx
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esi + 0x150], edx
        mov     byte ptr [esp + 0x388], 0xb
        call    ext_006D80A0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006D80A0
        mov     eax, dword ptr [esp + 0xc]
        add     ebx, 0x20
        dec     eax
        mov     dword ptr [esp + 0xc], eax
        jne     L_764dc0
    L_764e85:
        mov     ebx, dword ptr [esp + 0x34]
        mov     byte ptr [esp + 0x17], 0x0
        test    ebx, ebx
        je      L_765260
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        jne     short L_764f03
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jle     L_765260
        mov     dword ptr [esp + 0xc], eax
    L_764eae:
        push    0x1
        mov     ecx, ebx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     ecx, ebx
        mov     edx, dword ptr [eax]
        push    edx
        push    0x0
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebe0
        push    eax
        call    dword ptr [mem_0092525C]
        mov     edx, dword ptr [esi + 0x154]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x18
        inc     edx
        add     ebx, 0x10
        dec     eax
        mov     dword ptr [esi + 0x154], edx
        mov     dword ptr [esp + 0xc], eax
        jne     short L_764eae
        jmp     L_765260
    L_764f03:
        mov     eax, dword ptr [esp + 0x5c]
        cmp     eax, 0x4
        jne     L_764ffe
        mov     ecx, dword ptr [esp + 0x38]
        push    0x0
        dec     ecx
        push    ecx
        mov     ecx, edi
        call    ext_006FD600
        mov     ecx, eax
        call    ext_00702400
        test    al, al
        mov     eax, dword ptr [esp + 0x24]
        je      short L_764f95
        test    eax, eax
        jle     L_765260
        mov     ebx, dword ptr [esp + 0x34]
        mov     edx, eax
        mov     dword ptr [esp + 0xc], edx
    L_764f40:
        push    0x0
        mov     ecx, ebx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     ecx, ebx
        mov     edx, dword ptr [eax]
        push    edx
        push    0x1
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebe0
        push    eax
        call    dword ptr [mem_0092525C]
        mov     edx, dword ptr [esi + 0x154]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x18
        inc     edx
        add     ebx, 0x10
        dec     eax
        mov     dword ptr [esi + 0x154], edx
        mov     dword ptr [esp + 0xc], eax
        jne     short L_764f40
        jmp     L_765260
    L_764f95:
        test    eax, eax
        jle     L_765260
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0xc], ecx
    L_764fa9:
        push    0x1
        mov     ecx, ebx
        call    ext_006D23F0
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, ebx
        push    edx
        mov     eax, dword ptr [eax]
        push    eax
        push    0x0
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebe0
        push    eax
        call    dword ptr [mem_0092525C]
        mov     edx, dword ptr [esi + 0x154]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x18
        inc     edx
        add     ebx, 0x10
        dec     eax
        mov     dword ptr [esi + 0x154], edx
        mov     dword ptr [esp + 0xc], eax
        jne     short L_764fa9
        jmp     L_765260
    L_764ffe:
        cmp     eax, 0x3
        jne     L_765260
        push    0x10
        push    0x10
        lea     ecx, [esp + 0x6c]
        call    ext_006D2130
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x78], ecx
        mov     eax, dword ptr [esp + 0x54]
        mov     byte ptr [esp + 0x388], 0xd
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x0
        jle     L_765185
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x28], edx
    L_765040:
        mov     eax, dword ptr [esp + 0x28]
        xor     ebx, ebx
        push    ebx
        mov     ecx, dword ptr [eax]
        push    ecx
        mov     ecx, edi
        call    ext_006FD600
        mov     ecx, eax
        call    ext_00702400
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, edi
        push    edx
        mov     byte ptr [esp + 0x1b], al
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x28], ebx
        call    ext_006D8210
        test    eax, eax
        jle     L_765165
        mov     eax, dword ptr [esp + 0x60]
        jmp     short L_765086
    L_76507e:
        mov     eax, dword ptr [esp + 0x60]
        mov     ebx, dword ptr [esp + 0x2c]
    L_765086:
        cmp     eax, 0x1
        jne     short L_76509e
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006D8240
        jmp     short L_7650b4
    L_76509e:
        cmp     eax, 0x2
        jne     short L_7650ba
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_006D8280
    L_7650b4:
        mov     ebx, eax
        mov     dword ptr [esp + 0x2c], ebx
    L_7650ba:
        mov     al, byte ptr [esp + 0x17]
        test    al, al
        je      short L_7650fe
        mov     ecx, dword ptr [esp + 0x34]
        push    0x0
        shl     ebx, 0x4
        add     ebx, ecx
        mov     ecx, ebx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        sub     esp, 0x10
        mov     edx, esp
        mov     dword ptr [esp + 0x20], esp
        mov     eax, dword ptr [eax]
        push    ecx
        push    eax
        push    0x1
        mov     ecx, ebx
        mov     dword ptr [esp + 0x2c], edx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        jmp     short L_765138
    L_7650fe:
        mov     ecx, dword ptr [esp + 0x34]
        push    0x1
        shl     ebx, 0x4
        add     ebx, ecx
        mov     ecx, ebx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        sub     esp, 0x10
        mov     edx, esp
        mov     dword ptr [esp + 0x20], esp
        mov     eax, dword ptr [eax]
        push    ecx
        push    eax
        push    0x0
        mov     ecx, ebx
        mov     dword ptr [esp + 0x2c], edx
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
    L_765138:
        mov     ecx, eax
        call    ext_00783840
        lea     ecx, [esp + 0x74]
        call    ext_006D89D0
        mov     ebx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        inc     ebx
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], ebx
        call    ext_006D8210
        cmp     ebx, eax
        jl      L_76507e
    L_765165:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x54]
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x28], edx
        jl      L_765040
    L_765185:
        mov     eax, dword ptr [esp + 0x64]
        xor     ebx, ebx
        test    eax, eax
        mov     byte ptr [esp + 0x17], 0x1
        jle     L_76524f
    L_765198:
        lea     edx, [esp + 0x8c]
        push    ebx
        push    edx
        lea     ecx, [esp + 0x6c]
        call    ext_0074F820
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0xf8]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x6c]
        mov     byte ptr [esp + 0x390], 0xe
        call    ext_0074F820
        mov     dword ptr [esp + 0xc], eax
        mov     ecx, dword ptr [esp + 0x10]
        push    0x1
        mov     byte ptr [esp + 0x38c], 0xf
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    edx
        push    0x0
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebe0
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0x18
        lea     ecx, [esp + 0xf8]
        mov     byte ptr [esp + 0x388], 0xe
        call    ext_006D80A0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x388], 0xd
        call    ext_006D80A0
        mov     edx, dword ptr [esi + 0x154]
        mov     eax, dword ptr [esp + 0x64]
        inc     edx
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [esi + 0x154], edx
        jl      L_765198
    L_76524f:
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006D2160
    L_765260:
        mov     ebx, dword ptr [esp + 0x44]
        test    ebx, ebx
        je      L_76533d
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jle     L_76533d
        mov     dword ptr [esp + 0xc], eax
    L_76527c:
        push    ebx
        lea     ecx, [esp + 0x90]
        call    ext_006D2390
        lea     ecx, [esp + 0x8c]
        lea     edx, [esp + 0x64]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x288]
        mov     byte ptr [esp + 0x390], 0x10
        call    ext_007177C0
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x388], 0x11
        call    ext_006D29A0
        push    0x2
        lea     ecx, [esp + 0x68]
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     edx, dword ptr [eax]
        push    edx
        push    0x1
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        lea     ecx, [esp + 0x70]
        mov     edx, dword ptr [eax]
        push    edx
        push    0x0
        call    ext_006D23F0
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0xac]
        push    edx
        push    0xaaebd0
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0x20
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x388], 0x10
        call    ext_006D80A0
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006D80A0
        mov     eax, dword ptr [esp + 0xc]
        add     ebx, 0x20
        dec     eax
        mov     dword ptr [esp + 0xc], eax
        jne     L_76527c
    L_76533d:
        mov     edx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x38]
        test    edx, edx
        jg      short L_76534d
        test    ecx, ecx
        jle     short L_765352
    L_76534d:
        mov     byte ptr [esp + 0x33], 0x1
    L_765352:
        test    edx, edx
        jle     short L_765360
        cmp     dword ptr [esp + 0x84], 0x4
        jne     short L_76536b
    L_765360:
        test    ecx, ecx
        jle     short L_765370
        cmp     dword ptr [esp + 0x5c], 0x4
        je      short L_765370
    L_76536b:
        mov     byte ptr [esp + 0x23], 0x0
    L_765370:
        mov     al, byte ptr [esp + 0x33]
        test    al, al
        je      L_765512
        mov     bl, byte ptr [esp + 0x23]
        test    bl, bl
        je      L_765512
        test    ecx, ecx
        jle     short L_7653a3
        mov     ecx, dword ptr [esp + 0x38]
        push    0x0
        dec     ecx
        push    ecx
        mov     ecx, edi
        call    ext_006FD600
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x40], eax
    L_7653a3:
        test    edx, edx
        jle     short L_7653ba
        mov     edx, dword ptr [esp + 0x50]
        push    0x0
        dec     edx
        mov     ecx, edi
        push    edx
        call    ext_006FDD40
        mov     ebx, eax
        jmp     short L_7653c0
    L_7653ba:
        mov     ebx, dword ptr [esi + 0x158]
    L_7653c0:
        lea     eax, [esp + 0xac]
        mov     ecx, ebx
        push    eax
        mov     dword ptr [esp + 0x40], ebx
        call    ext_006BADC0
        push    0x0
        push    0xaae738
        push    0xaa9490
        lea     ecx, [esp + 0xb8]
        mov     byte ptr [esp + 0x394], 0x12
        call    ext_006BA3D0
        lea     ecx, [esp + 0xac]
        call    ext_006E7460
        push    eax
        lea     ecx, [esp + 0x16c]
        call    ext_006E62C0
        mov     ecx, dword ptr [esp + 0x40]
        mov     byte ptr [esp + 0x388], 0x13
        push    ecx
        push    ebx
        mov     ecx, esi
        call    ext_007648F0
        test    eax, eax
        jge     L_7654be
        mov     edx, dword ptr [esi + 0x174]
        lea     ecx, [esi + 0x174]
        lea     eax, [esp + 0x168]
        push    eax
        call    dword ptr [edx + 0x8]
        push    0x54
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        test    eax, eax
        mov     byte ptr [esp + 0x388], 0x14
        je      short L_76547a
        mov     ecx, dword ptr [esp + 0x40]
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x170]
        call    ext_006E6340
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_00764190
        mov     ebx, eax
        jmp     short L_76547c
    L_76547a:
        xor     ebx, ebx
    L_76547c:
        mov     eax, dword ptr [esi + 0x15c]
        lea     ecx, [esi + 0x15c]
        lea     edx, [esp + 0x10]
        mov     byte ptr [esp + 0x388], 0x13
        push    edx
        push    eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    ext_006D2170
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx]
        push    eax
        push    ecx
        lea     ecx, [ebx + 0x8]
        call    ext_006E7460
        push    eax
        mov     ecx, esi
        call    ext_00765AE0
        mov     eax, ebx
        jmp     short L_7654c7
    L_7654be:
        mov     edx, dword ptr [esi + 0x16c]
        mov     eax, dword ptr [edx + eax*4]
    L_7654c7:
        lea     ecx, [eax + 0x8]
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [esi + 0xac]
        push    0xaaebc4
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
        lea     ecx, [esp + 0x168]
        mov     byte ptr [esp + 0x388], 0x12
        call    ext_006DE460
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006B9D70
        jmp     L_765650
    L_765512:
        mov     cl, byte ptr [esi + 0x14f]
        test    cl, cl
        je      L_765650
        test    al, al
        jne     L_765650
        mov     ebx, dword ptr [esi + 0x158]
        lea     ecx, [esp + 0xac]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x40], ebx
        call    ext_006BADC0
        mov     ecx, eax
        mov     byte ptr [esp + 0x388], 0x15
        call    ext_006E7460
        push    eax
        lea     ecx, [esp + 0x16c]
        call    ext_006E62C0
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x388], 0x17
        call    ext_006B9D70
        push    0x0
        push    ebx
        mov     ecx, esi
        call    ext_007648F0
        test    eax, eax
        jge     L_765615
        mov     edx, dword ptr [esi + 0x174]
        lea     ecx, [esi + 0x174]
        lea     eax, [esp + 0x168]
        push    eax
        call    dword ptr [edx + 0x8]
        push    0x54
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        test    eax, eax
        mov     byte ptr [esp + 0x388], 0x18
        je      short L_7655d1
        push    0x0
        push    ebx
        lea     ecx, [esp + 0x170]
        call    ext_006E6340
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_00764190
        mov     ebx, eax
        jmp     short L_7655d3
    L_7655d1:
        xor     ebx, ebx
    L_7655d3:
        mov     eax, dword ptr [esi + 0x15c]
        lea     ecx, [esi + 0x15c]
        lea     edx, [esp + 0x10]
        mov     byte ptr [esp + 0x388], 0x17
        push    edx
        push    eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    ext_006D2170
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx]
        push    eax
        push    ecx
        lea     ecx, [ebx + 0x8]
        call    ext_006E7460
        push    eax
        mov     ecx, esi
        call    ext_00765AE0
        mov     eax, ebx
        jmp     short L_76561e
    L_765615:
        mov     edx, dword ptr [esi + 0x16c]
        mov     eax, dword ptr [edx + eax*4]
    L_76561e:
        lea     ecx, [eax + 0x8]
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [esi + 0xac]
        push    0xaaebc4
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
        lea     ecx, [esp + 0x168]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006DE460
    L_765650:
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x58]
        test    eax, eax
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x18], 0x0
        jle     L_765a20
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x48]
        sub     eax, ecx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [esp + 0x18]
    L_765682:
        push    eax
        mov     ecx, edi
        call    ext_006D8210
        mov     dword ptr [esp + 0x4c], eax
        mov     al, byte ptr [esp + 0x23]
        test    al, al
        jne     L_7658a1
        mov     eax, dword ptr [esp + 0x50]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x1c], ebx
        jg      short L_7656b0
        mov     ebx, dword ptr [esi + 0x158]
        jmp     short L_7656fa
    L_7656b0:
        mov     eax, dword ptr [esp + 0x84]
        cmp     eax, 0x4
        jne     short L_7656c6
        mov     edx, dword ptr [esp + 0x50]
        push    0x0
        dec     edx
        push    edx
        jmp     short L_7656f1
    L_7656c6:
        cmp     eax, 0x3
        jne     short L_7656db
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x28]
        push    0x0
        mov     edx, dword ptr [eax + ecx]
        push    edx
        jmp     short L_7656f1
    L_7656db:
        cmp     eax, 0x1
        jne     short L_7656fa
        mov     eax, dword ptr [esp + 0x18]
        push    0x0
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_006D8240
        push    eax
    L_7656f1:
        mov     ecx, edi
        call    ext_006FDD40
        mov     ebx, eax
    L_7656fa:
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        jle     short L_76572e
        mov     eax, dword ptr [esp + 0x5c]
        cmp     eax, 0x4
        jne     short L_765715
        mov     ecx, dword ptr [esp + 0x38]
        push    0x0
        dec     ecx
        push    ecx
        jmp     short L_765723
    L_765715:
        cmp     eax, 0x3
        jne     short L_76572e
        mov     edx, dword ptr [esp + 0x28]
        push    0x0
        mov     eax, dword ptr [edx]
        push    eax
    L_765723:
        mov     ecx, edi
        call    ext_006FD600
        mov     dword ptr [esp + 0x1c], eax
    L_76572e:
        cmp     ebx, dword ptr [esp + 0x3c]
        jne     short L_765744
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x40]
        cmp     ecx, eax
        je      L_7658a1
    L_765744:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x3c], ebx
        test    ebx, ebx
        mov     dword ptr [esp + 0x40], edx
        je      L_7658a1
        lea     eax, [esp + 0xac]
        mov     ecx, ebx
        push    eax
        call    ext_006BADC0
        push    0x0
        push    0xaae738
        push    0xaa9490
        lea     ecx, [esp + 0xb8]
        mov     byte ptr [esp + 0x394], 0x19
        call    ext_006BA3D0
        lea     ecx, [esp + 0xac]
        call    ext_006E7460
        push    eax
        lea     ecx, [esp + 0x16c]
        call    ext_006E62C0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     byte ptr [esp + 0x388], 0x1a
        push    ecx
        push    ebx
        mov     ecx, esi
        call    ext_007648F0
        test    eax, eax
        jge     L_765852
        mov     edx, dword ptr [esi + 0x174]
        lea     ecx, [esi + 0x174]
        lea     eax, [esp + 0x168]
        push    eax
        call    dword ptr [edx + 0x8]
        push    0x54
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        test    eax, eax
        mov     byte ptr [esp + 0x388], 0x1b
        je      short L_76580e
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x170]
        call    ext_006E6340
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_00764190
        mov     ebx, eax
        jmp     short L_765810
    L_76580e:
        xor     ebx, ebx
    L_765810:
        mov     eax, dword ptr [esi + 0x15c]
        lea     ecx, [esi + 0x15c]
        lea     edx, [esp + 0x10]
        mov     byte ptr [esp + 0x388], 0x1a
        push    edx
        push    eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    ext_006D2170
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx]
        push    eax
        push    ecx
        lea     ecx, [ebx + 0x8]
        call    ext_006E7460
        push    eax
        mov     ecx, esi
        call    ext_00765AE0
        mov     eax, ebx
        jmp     short L_76585b
    L_765852:
        mov     edx, dword ptr [esi + 0x16c]
        mov     eax, dword ptr [edx + eax*4]
    L_76585b:
        lea     ecx, [eax + 0x8]
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [esi + 0xac]
        push    0xaaebc4
        push    eax
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
        lea     ecx, [esp + 0x168]
        mov     byte ptr [esp + 0x388], 0x19
        call    ext_006DE460
        lea     ecx, [esp + 0xac]
        mov     byte ptr [esp + 0x388], 0x6
        call    ext_006B9D70
    L_7658a1:
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaae6f4
        push    ecx
        call    dword ptr [mem_0092525C]
        mov     eax, dword ptr [esp + 0x54]
        add     esp, 0x8
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x1c], ebx
        jle     L_7659eb
    L_7658c8:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_006D8240
        mov     edx, dword ptr [esp + 0x88]
        mov     ecx, dword ptr [esi + 0xac]
        add     eax, edx
        push    eax
        push    0xaa8790
        push    ecx
        call    dword ptr [mem_0092525C]
        mov     eax, dword ptr [esp + 0x50]
        add     esp, 0xc
        test    eax, eax
        jne     short L_76590c
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        je      L_7659d6
    L_76590c:
        mov     edx, dword ptr [esi + 0xac]
        push    0xaa9444
        push    edx
        call    dword ptr [mem_0092525C]
        mov     eax, dword ptr [esp + 0x3c]
        add     esp, 0x8
        test    eax, eax
        je      short L_76599e
        mov     eax, dword ptr [esp + 0x60]
        cmp     eax, 0x1
        jne     short L_765955
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006D8240
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebx, eax
        mov     al, byte ptr [esp + 0x17]
        add     ebx, ecx
        test    al, al
        je      short L_76597f
        jmp     short L_76597b
    L_765955:
        cmp     eax, 0x2
        jne     short L_76597f
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_006D8280
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebx, eax
        mov     al, byte ptr [esp + 0x17]
        add     ebx, ecx
        test    al, al
        je      short L_76597f
    L_76597b:
        mov     ebx, dword ptr [esp + 0x24]
    L_76597f:
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esi + 0xac]
        push    ebx
        inc     edx
        push    0xaa86a4
        push    ecx
        mov     dword ptr [esp + 0x30], edx
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
    L_76599e:
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        je      short L_7659d6
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_006D8240
        mov     edx, dword ptr [esp + 0x88]
        mov     ecx, dword ptr [esi + 0xac]
        add     eax, edx
        push    eax
        push    0xaaebc0
        push    ecx
        call    dword ptr [mem_0092525C]
        add     esp, 0xc
    L_7659d6:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x4c]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jl      L_7658c8
    L_7659eb:
        mov     edx, dword ptr [esi + 0xac]
        push    0xaad034
        push    edx
        call    dword ptr [mem_0092525C]
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x5c]
        add     esp, 0x8
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x28], edx
        jl      L_765682
    L_765a20:
        lea     ecx, [esp + 0x280]
        mov     byte ptr [esp + 0x388], 0x3
        call    ext_006D80A0
        lea     ecx, [esp + 0x200]
        mov     byte ptr [esp + 0x388], 0x2
        call    ext_006D80A0
        lea     ecx, [esp + 0x108]
        mov     byte ptr [esp + 0x388], 0x1
        call    ext_006D80A0
        lea     ecx, [esp + 0x128]
        mov     byte ptr [esp + 0x388], 0x0
        call    ext_006D80A0
        lea     ecx, [esp + 0x148]
        mov     dword ptr [esp + 0x388], 0xffffffff
        call    ext_006D80A0
        mov     ebx, dword ptr [ebp + 0x8]
    L_765a8a:
        mov     al, byte ptr [ebp + 0xc]
        test    al, al
        je      short L_765abf
        push    0x0
        mov     ecx, ebx
        call    ext_006C2860
        xor     edi, edi
        mov     dword ptr [esp + 0x48], eax
        test    eax, eax
        jle     short L_765abf
    L_765aa4:
        push    0x1
        push    edi
        mov     ecx, ebx
        call    ext_006C28D0
        push    eax
        mov     ecx, esi
        call    ext_007649B0
        mov     eax, dword ptr [esp + 0x48]
        inc     edi
        cmp     edi, eax
        jl      short L_765aa4
    L_765abf:
        mov     ecx, dword ptr [esp + 0x380]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}

// [0x00767610] sub_00767610 (7040 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006C4340();
extern "C" void ext_006C81A0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D23F0();
extern "C" void ext_006D2630();
extern "C" void ext_006D2720();
extern "C" void ext_006D2940();
extern "C" void ext_006D29A0();
extern "C" void ext_006D2BD0();
extern "C" void ext_006D37E0();
extern "C" void ext_006D7A90();
extern "C" void ext_006D7AA0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D81F0();
extern "C" void ext_006D8210();
extern "C" void ext_006D8240();
extern "C" void ext_006D8280();
extern "C" void ext_006D82F0();
extern "C" void ext_006D8520();
extern "C" void ext_006D8680();
extern "C" void ext_006D86C0();
extern "C" void ext_006D86F0();
extern "C" void ext_006D8980();
extern "C" void ext_006DEEC0();
extern "C" void ext_006FD480();
extern "C" void ext_006FD600();
extern "C" void ext_006FD980();
extern "C" void ext_006FDB00();
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF70();
extern "C" void ext_0070C010();
extern "C" void ext_0070C0E0();
extern "C" void ext_0070C1B0();
extern "C" void ext_00714570();
extern "C" void ext_00715550();
extern "C" void ext_0074AE20();
extern "C" void ext_00769190();
extern "C" void ext_0076AD20();
extern "C" void ext_0076ADB0();
extern "C" void ext_0076B150();
extern "C" void ext_00771560();
extern "C" void ext_0077FAB0();
extern "C" void ext_0077FB40();
extern "C" void ext_0077FC70();
extern "C" void ext_007873F0();
extern "C" void ext_0078D1F0();
extern "C" void ext_007A3410();
extern "C" void ext_007A4C40();
extern "C" void ext_007ACB50();
extern "C" void ext_007AD100();
extern "C" void ext_007AD1C0();
extern "C" void ext_00872828();

extern "C" __declspec(naked) void __fastcall fn_00767610(void* self, int edx_unused,
    int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12,
    int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25) {
    __asm {
L7610: push ebp
L7611: mov ebp, esp
L7613: and esp, -8
L7616: push -1
L7618: push 0x8c050b
L761D: mov eax, dword ptr fs:[0]
L7623: push eax
L7624: mov dword ptr fs:[0], esp
L762B: sub esp, 0x384
L7631: push ebx
L7632: push esi
L7633: mov esi, ecx
L7635: push edi
L7636: mov dword ptr [esp + 0x84], esi
L763D: mov edi, 2
L7642: lea ecx, [esp + 0x150]
L7649: mov dword ptr [esp + 0x398], edi
L7650: mov dword ptr [esp + 0x78], edi
L7654: call ext_006D2370
L7659: lea ecx, [esp + 0xb8]
L7660: mov byte ptr [esp + 0x398], 3
L7668: call ext_006D2370
L766D: lea ecx, [esp + 0x1b8]
L7674: mov byte ptr [esp + 0x398], 4
L767C: call ext_006D2370
L7681: lea ecx, [esp + 0x1d8]
L7688: mov byte ptr [esp + 0x398], 5
L7690: call ext_006D2370
L7695: lea ecx, [esp + 0x1f8]
L769C: mov byte ptr [esp + 0x398], 6
L76A4: call ext_006D2370
L76A9: lea ecx, [esp + 0xd8]
L76B0: mov byte ptr [esp + 0x398], 7
L76B8: call ext_0077FAB0
L76BD: mov ebx, dword ptr [ebp + 8]
L76C0: xor eax, eax
L76C2: cmp ebx, eax
L76C4: mov byte ptr [esp + 0x398], 8
L76CC: mov dword ptr [esp + 0x34], 0
L76D4: mov dword ptr [esp + 0x38], 0
L76DC: mov dword ptr [esp + 0x54], 0
L76E4: mov dword ptr [esp + 0x58], 0
L76EC: mov dword ptr [esp + 0x7c], 0
L76F4: mov dword ptr [esp + 0x80], 0x3ff00000
L76FF: mov dword ptr [esp + 0x44], 0
L7707: mov dword ptr [esp + 0x48], 0x3ff00000
L770F: jne L77D9
L7715: lea ecx, [esp + 0xd8]
L771C: mov byte ptr [esp + 0x398], 7
L7724: call ext_006D80A0
L7729: lea ecx, [esp + 0x1f8]
L7730: mov byte ptr [esp + 0x398], 6
L7738: call ext_006D80A0
L773D: lea ecx, [esp + 0x1d8]
L7744: mov byte ptr [esp + 0x398], 5
L774C: call ext_006D80A0
L7751: lea ecx, [esp + 0x1b8]
L7758: mov byte ptr [esp + 0x398], 4
L7760: call ext_006D80A0
L7765: lea ecx, [esp + 0xb8]
L776C: mov byte ptr [esp + 0x398], 3
L7774: call ext_006D80A0
L7779: lea ecx, [esp + 0x150]
L7780: mov byte ptr [esp + 0x398], 2
L7788: call ext_006D80A0
L778D: lea ecx, [ebp + 0xc]
L7790: mov byte ptr [esp + 0x398], 1
L7798: call ext_006D80A0
L779D: lea ecx, [ebp + 0x2c]
L77A0: mov byte ptr [esp + 0x398], 0
L77A8: call ext_006D80A0
L77AD: lea ecx, [ebp + 0x4c]
L77B0: mov dword ptr [esp + 0x398], 0xffffffff
L77BB: call ext_006D80A0
L77C0: xor eax, eax
L77C2: mov ecx, dword ptr [esp + 0x390]
L77C9: mov dword ptr fs:[0], ecx
L77D0: pop edi
L77D1: pop esi
L77D2: pop ebx
L77D3: mov esp, ebp
L77D5: pop ebp
L77D6: ret 0x68
L77D9: mov cl, byte ptr [esi + 0xac]
L77DF: mov dword ptr [esp + 0x10], eax
L77E3: test cl, cl
L77E5: mov dword ptr [esp + 0x70], eax
L77E9: je L78E1
L77EF: push eax
L77F0: mov ecx, ebx
L77F2: call ext_006FD480
L77F7: test eax, eax
L77F9: je L78E1
L77FF: mov ecx, ebx
L7801: mov byte ptr [esp + 0x23], 1
L7806: call ext_006D86F0
L780B: cmp eax, edi
L780D: jne L7829
L780F: mov al, byte ptr [esi + 0xb3]
L7815: test al, al
L7817: je L7829
L7819: push ebx
L781A: mov ecx, esi
L781C: call ext_00771560
L7821: push eax
L7822: mov ecx, ebx
L7824: call ext_006D82F0
L7829: mov ecx, ebx
L782B: call ext_006D7AA0
L7830: mov ecx, ebx
L7832: mov dword ptr [esp + 0x60], eax
L7836: call ext_006D81F0
L783B: mov edi, eax
L783D: mov ecx, ebx
L783F: mov dword ptr [esp + 0x64], edi
L7843: call ext_006D7A90
L7848: test edi, edi
L784A: mov dword ptr [esp + 0x30], eax
L784E: je L90C6
L7854: test eax, eax
L7856: je L90C6
L785C: mov edx, dword ptr [esi + 0xd0]
L7862: inc edx
L7863: mov dword ptr [esi + 0xd0], edx
L7869: xor esi, esi
L786B: test edi, edi
L786D: jle L788C
L786F: push esi
L7870: mov ecx, ebx
L7872: call ext_006D8210
L7877: mov ecx, dword ptr [esp + 0x70]
L787B: inc esi
L787C: cmp esi, edi
L787E: lea edx, [ecx + eax - 2]
L7882: mov dword ptr [esp + 0x70], edx
L7886: jl L786F
L7888: mov eax, dword ptr [esp + 0x30]
L788C: mov ecx, dword ptr [esp + 0x70]
L7890: push 0xffff
L7895: push ecx
L7896: lea edx, [esp + 0x18]
L789A: push eax
L789B: push edx
L789C: call ext_007AD1C0
L78A1: mov eax, dword ptr [esp + 0x20]
L78A5: mov edx, dword ptr [ebp + 0x6c]
L78A8: mov edi, edx
L78AA: or ecx, -1
L78AD: mov byte ptr [eax + 0xa], 0
L78B1: xor eax, eax
L78B3: add esp, 0x10
L78B6: repne scasb
L78B8: not ecx
L78BA: dec ecx
L78BB: cmp ecx, 0xa
L78BE: jae L78EB
L78C0: mov edi, edx
L78C2: or ecx, -1
L78C5: repne scasb
L78C7: not ecx
L78C9: sub edi, ecx
L78CB: mov edx, ecx
L78CD: mov esi, edi
L78CF: mov edi, dword ptr [esp + 0x10]
L78D3: shr ecx, 2
L78D6: rep movsd
L78D8: mov ecx, edx
L78DA: and ecx, 3
L78DD: rep movsb
L78DF: jmp L7904
L78E1: mov byte ptr [esp + 0x23], 0
L78E6: jmp L7829
L78EB: mov eax, dword ptr [esp + 0x10]
L78EF: push 0xa
L78F1: push edx
L78F2: push eax
L78F3: call dword ptr [mem_009252D0]
L78F9: mov ecx, dword ptr [esp + 0x1c]
L78FD: add esp, 0xc
L7900: mov byte ptr [ecx + 0xa], 0
L7904: mov eax, 0x84
L7909: mov edx, dword ptr [esp + 0x10]
L790D: add eax, 4
L7910: cmp eax, 0xb4
L7915: mov dword ptr [edx + eax - 4], 0
L791D: jl L7909
L791F: mov ecx, dword ptr [esp + 0x10]
L7923: mov eax, 0x3f800000
L7928: sub esp, 0x20
L792B: mov dword ptr [ecx + 0x84], eax
L7931: mov edx, dword ptr [esp + 0x30]
L7935: mov dword ptr [esp + 0x44], esp
L7939: mov dword ptr [edx + 0x94], eax
L793F: mov ecx, dword ptr [esp + 0x30]
L7943: lea edx, [ebp + 0xc]
L7946: mov dword ptr [ecx + 0xa4], eax
L794C: mov ecx, esp
L794E: push edx
L794F: call ext_006D2390
L7954: mov esi, dword ptr [esp + 0xa4]
L795B: lea eax, [esp + 0x190]
L7962: push eax
L7963: mov ecx, esi
L7965: call ext_0076AD20
L796A: sub esp, 0x20
L796D: lea edx, [ebp + 0x2c]
L7970: mov ecx, esp
L7972: mov dword ptr [esp + 0x44], esp
L7976: push edx
L7977: call ext_006D2390
L797C: lea eax, [esp + 0x1a8]
L7983: mov ecx, esi
L7985: push eax
L7986: call ext_0076ADB0
L798B: sub esp, 0x20
L798E: lea edx, [ebp + 0x4c]
L7991: mov ecx, esp
L7993: mov dword ptr [esp + 0x44], esp
L7997: push edx
L7998: call ext_006D2390
L799D: lea eax, [esp + 0x2b8]
L79A4: mov ecx, esi
L79A6: push eax
L79A7: call ext_0076B150
L79AC: mov ecx, dword ptr [esp + 0x19c]
L79B3: mov edx, dword ptr [esp + 0x198]
L79BA: mov eax, dword ptr [esp + 0x194]
L79C1: push ecx
L79C2: mov ecx, dword ptr [esp + 0x194]
L79C9: push edx
L79CA: mov edx, dword ptr [esp + 0x194]
L79D1: push eax
L79D2: mov eax, dword ptr [esp + 0x194]
L79D9: push ecx
L79DA: push edx
L79DB: lea ecx, [esp + 0x2c4]
L79E2: push eax
L79E3: push ecx
L79E4: call ext_006C4340
L79E9: lea edx, [esp + 0x2b4]
L79F0: lea eax, [esp + 0x2cc]
L79F7: push edx
L79F8: lea ecx, [esp + 0x2d0]
L79FF: push eax
L7A00: push ecx
L7A01: call ext_006C81A0
L7A06: mov edx, dword ptr [esp + 0x198]
L7A0D: mov eax, dword ptr [esp + 0x19c]
L7A14: mov ecx, dword ptr [esp + 0x1a0]
L7A1B: mov dword ptr [esp + 0x338], edx
L7A22: mov edx, dword ptr [esp + 0x1a4]
L7A29: mov dword ptr [esp + 0x33c], eax
L7A30: mov eax, dword ptr [esp + 0x1a8]
L7A37: mov dword ptr [esp + 0x340], ecx
L7A3E: mov ecx, dword ptr [esp + 0x1ac]
L7A45: add esp, 0x28
L7A48: mov dword ptr [esp + 0x31c], edx
L7A4F: mov dword ptr [esp + 0x320], eax
L7A56: mov dword ptr [esp + 0x324], ecx
L7A5D: xor esi, esi
L7A5F: mov dword ptr [esp + 0x4c], 0x84
L7A67: mov eax, 0x55555556
L7A6C: mov edi, 3
L7A71: imul esi
L7A73: mov ecx, edx
L7A75: mov eax, esi
L7A77: shr edx, 0x1f
L7A7A: add ecx, edx
L7A7C: cdq
L7A7D: idiv edi
L7A7F: inc esi
L7A80: lea eax, [edx + ecx*4]
L7A83: mov ecx, dword ptr [esp + 0x10]
L7A87: fld qword ptr [esp + eax*8 + 0x2b0]
L7A8E: mov eax, dword ptr [esp + 0x4c]
L7A92: fstp dword ptr [eax + ecx]
L7A95: add eax, 4
L7A98: cmp eax, 0xb4
L7A9D: mov dword ptr [esp + 0x4c], eax
L7AA1: jl L7A67
L7AA3: mov ecx, ebx
L7AA5: call ext_006DEEC0
L7AAA: mov edi, eax
L7AAC: mov al, byte ptr [esp + 0x23]
L7AB0: test al, al
L7AB2: mov dword ptr [esp + 0x74], edi
L7AB6: je L7C39
L7ABC: mov edx, dword ptr [esp + 0x10]
L7AC0: mov esi, dword ptr [esp + 0x30]
L7AC4: mov ecx, ebx
L7AC6: mov word ptr [edx + 0x20], si
L7ACA: call ext_006D86F0
L7ACF: cmp eax, 1
L7AD2: mov ecx, ebx
L7AD4: jne L7AE4
L7AD6: call ext_006D8520
L7ADB: mov dword ptr [esp + 0x3c], eax
L7ADF: jmp L7C41
L7AE4: call ext_006D86F0
L7AE9: cmp eax, 4
L7AEC: mov dword ptr [esp + 0x3c], 0
L7AF4: jne L7C41
L7AFA: push 0
L7AFC: mov ecx, edi
L7AFE: call ext_006D23F0
L7B03: mov ecx, dword ptr [eax]
L7B05: push 0
L7B07: mov dword ptr [esp + 0x38], ecx
L7B0B: mov ecx, edi
L7B0D: mov edx, dword ptr [eax + 4]
L7B10: mov dword ptr [esp + 0x3c], edx
L7B14: call ext_006D23F0
L7B19: mov ecx, dword ptr [eax]
L7B1B: push 1
L7B1D: mov dword ptr [esp + 0x28], ecx
L7B21: mov ecx, edi
L7B23: mov edx, dword ptr [eax + 4]
L7B26: mov dword ptr [esp + 0x2c], edx
L7B2A: call ext_006D23F0
L7B2F: mov ecx, dword ptr [eax]
L7B31: push 1
L7B33: mov dword ptr [esp + 0x58], ecx
L7B37: mov ecx, edi
L7B39: mov edx, dword ptr [eax + 4]
L7B3C: mov dword ptr [esp + 0x5c], edx
L7B40: call ext_006D23F0
L7B45: mov ecx, dword ptr [eax]
L7B47: cmp esi, 1
L7B4A: mov dword ptr [esp + 0x4c], ecx
L7B4E: mov edx, dword ptr [eax + 4]
L7B51: mov dword ptr [esp + 0x50], edx
L7B55: jle L7C1F
L7B5B: mov eax, dword ptr [esp + 0x30]
L7B5F: add edi, 0x20
L7B62: lea esi, [eax - 1]
L7B65: push 0
L7B67: mov ecx, edi
L7B69: call ext_006D23F0
L7B6E: fld qword ptr [eax]
L7B70: fcomp qword ptr [esp + 0x34]
L7B74: fnstsw ax
L7B76: test ah, 1
L7B79: je L7B91
L7B7B: push 0
L7B7D: mov ecx, edi
L7B7F: call ext_006D23F0
L7B84: mov ecx, dword ptr [eax]
L7B86: mov dword ptr [esp + 0x34], ecx
L7B8A: mov edx, dword ptr [eax + 4]
L7B8D: mov dword ptr [esp + 0x38], edx
L7B91: push 0
L7B93: mov ecx, edi
L7B95: call ext_006D23F0
L7B9A: fld qword ptr [eax]
L7B9C: fcomp qword ptr [esp + 0x24]
L7BA0: fnstsw ax
L7BA2: test ah, 0x41
L7BA5: jne L7BBD
L7BA7: push 0
L7BA9: mov ecx, edi
L7BAB: call ext_006D23F0
L7BB0: mov ecx, dword ptr [eax]
L7BB2: mov dword ptr [esp + 0x24], ecx
L7BB6: mov edx, dword ptr [eax + 4]
L7BB9: mov dword ptr [esp + 0x28], edx
L7BBD: push 1
L7BBF: mov ecx, edi
L7BC1: call ext_006D23F0
L7BC6: fld qword ptr [eax]
L7BC8: fcomp qword ptr [esp + 0x54]
L7BCC: fnstsw ax
L7BCE: test ah, 1
L7BD1: je L7BE9
L7BD3: push 1
L7BD5: mov ecx, edi
L7BD7: call ext_006D23F0
L7BDC: mov ecx, dword ptr [eax]
L7BDE: mov dword ptr [esp + 0x54], ecx
L7BE2: mov edx, dword ptr [eax + 4]
L7BE5: mov dword ptr [esp + 0x58], edx
L7BE9: push 1
L7BEB: mov ecx, edi
L7BED: call ext_006D23F0
L7BF2: fld qword ptr [eax]
L7BF4: fcomp qword ptr [esp + 0x4c]
L7BF8: fnstsw ax
L7BFA: test ah, 0x41
L7BFD: jne L7C15
L7BFF: push 1
L7C01: mov ecx, edi
L7C03: call ext_006D23F0
L7C08: mov ecx, dword ptr [eax]
L7C0A: mov dword ptr [esp + 0x4c], ecx
L7C0E: mov edx, dword ptr [eax + 4]
L7C11: mov dword ptr [esp + 0x50], edx
L7C15: add edi, 0x20
L7C18: dec esi
L7C19: jne L7B65
L7C1F: fld qword ptr [esp + 0x24]
L7C23: fsub qword ptr [esp + 0x34]
L7C27: fstp qword ptr [esp + 0x7c]
L7C2B: fld qword ptr [esp + 0x4c]
L7C2F: fsub qword ptr [esp + 0x54]
L7C33: fstp qword ptr [esp + 0x44]
L7C37: jmp L7C41
L7C39: mov dword ptr [esp + 0x3c], 0
L7C41: mov eax, dword ptr [esp + 0x30]
L7C45: xor edi, edi
L7C47: test eax, eax
L7C49: jle L7F98
L7C4F: mov eax, dword ptr [esp + 0x3c]
L7C53: mov ecx, dword ptr [esp + 0x74]
L7C57: xor esi, esi
L7C59: mov dword ptr [esp + 0x1c], eax
L7C5D: mov dword ptr [esp + 0x40], ecx
L7C61: mov edx, dword ptr [esp + 0x40]
L7C65: lea ecx, [esp + 0xb8]
L7C6C: push edx
L7C6D: call ext_007873F0
L7C72: lea ecx, [esp + 0x218]
L7C79: call ext_00714570
L7C7E: mov eax, dword ptr [ebp + 0x40]
L7C81: mov ecx, dword ptr [ebp + 0x3c]
L7C84: mov edx, dword ptr [ebp + 0x38]
L7C87: push eax
L7C88: mov eax, dword ptr [ebp + 0x34]
L7C8B: push ecx
L7C8C: mov ecx, dword ptr [ebp + 0x30]
L7C8F: push edx
L7C90: mov edx, dword ptr [ebp + 0x2c]
L7C93: push eax
L7C94: push ecx
L7C95: lea eax, [esp + 0x22c]
L7C9C: push edx
L7C9D: push eax
L7C9E: mov byte ptr [esp + 0x3b4], 9
L7CA6: call ext_006C4340
L7CAB: lea ecx, [ebp + 0x4c]
L7CAE: lea edx, [esp + 0x234]
L7CB5: push ecx
L7CB6: lea eax, [esp + 0x238]
L7CBD: push edx
L7CBE: push eax
L7CBF: call ext_006C81A0
L7CC4: fld qword ptr [esp + 0xe0]
L7CCB: fld qword ptr [esp + 0xe8]
L7CD2: fld qword ptr [esp + 0x240]
L7CD9: fmul qword ptr [esp + 0xe0]
L7CE0: fld qword ptr [esp + 0x280]
L7CE7: fmul qword ptr [esp + 0xf0]
L7CEE: mov ecx, dword ptr [ebp + 0xc]
L7CF1: mov edx, dword ptr [ebp + 0x10]
L7CF4: mov eax, dword ptr [ebp + 0x14]
L7CF7: mov dword ptr [esp + 0x2a0], ecx
L7CFE: faddp st(1), st
L7D00: fld qword ptr [esp + 0x260]
L7D07: fmul qword ptr [esp + 0xe8]
L7D0E: mov ecx, dword ptr [ebp + 0x18]
L7D11: add esp, 0x28
L7D14: mov dword ptr [esp + 0x27c], edx
L7D1B: mov edx, dword ptr [ebp + 0x1c]
L7D1E: faddp st(1), st
L7D20: mov dword ptr [esp + 0x280], eax
L7D27: mov eax, dword ptr [ebp + 0x20]
L7D2A: mov dword ptr [esp + 0x284], ecx
L7D31: push 0
L7D33: fadd qword ptr [ebp + 0xc]
L7D36: lea ecx, [esp + 0xbc]
L7D3D: mov dword ptr [esp + 0x28c], edx
L7D44: mov dword ptr [esp + 0x290], eax
L7D4B: fstp qword ptr [esp + 0xbc]
L7D52: fld qword ptr [esp + 0x224]
L7D59: fmul st, st(2)
L7D5B: fld qword ptr [esp + 0x264]
L7D62: fmul qword ptr [esp + 0xcc]
L7D69: faddp st(1), st
L7D6B: fld qword ptr [esp + 0x244]
L7D72: fmul qword ptr [esp + 0xc4]
L7D79: faddp st(1), st
L7D7B: fadd qword ptr [ebp + 0x14]
L7D7E: fstp qword ptr [esp + 0xc4]
L7D85: fld qword ptr [esp + 0x24c]
L7D8C: fmul st, st(1)
L7D8E: fld qword ptr [esp + 0x22c]
L7D95: fmul st, st(3)
L7D97: faddp st(1), st
L7D99: fld qword ptr [esp + 0x26c]
L7DA0: fmul qword ptr [esp + 0xcc]
L7DA7: faddp st(1), st
L7DA9: fadd qword ptr [ebp + 0x1c]
L7DAC: fstp qword ptr [esp + 0xcc]
L7DB3: fstp st(0)
L7DB5: fstp st(0)
L7DB7: call ext_006D23F0
L7DBC: mov dword ptr [esp + 0x24], eax
L7DC0: push 0
L7DC2: lea ecx, [esp + 0x154]
L7DC9: call ext_006D23F0
L7DCE: mov ecx, eax
L7DD0: mov eax, dword ptr [esp + 0x24]
L7DD4: push 2
L7DD6: mov edx, dword ptr [eax]
L7DD8: mov dword ptr [ecx], edx
L7DDA: mov eax, dword ptr [eax + 4]
L7DDD: mov dword ptr [ecx + 4], eax
L7DE0: lea ecx, [esp + 0xbc]
L7DE7: call ext_006D23F0
L7DEC: fld qword ptr [eax]
L7DEE: fchs
L7DF0: fstp qword ptr [esp + 0x24]
L7DF4: push 1
L7DF6: lea ecx, [esp + 0x154]
L7DFD: call ext_006D23F0
L7E02: mov ecx, dword ptr [esp + 0x24]
L7E06: mov edx, dword ptr [esp + 0x28]
L7E0A: mov dword ptr [eax], ecx
L7E0C: push 1
L7E0E: lea ecx, [esp + 0xbc]
L7E15: mov dword ptr [eax + 4], edx
L7E18: call ext_006D23F0
L7E1D: push 2
L7E1F: lea ecx, [esp + 0x154]
L7E26: mov dword ptr [esp + 0x28], eax
L7E2A: call ext_006D23F0
L7E2F: mov ecx, eax
L7E31: mov eax, dword ptr [esp + 0x24]
L7E35: push 0
L7E37: mov edx, dword ptr [eax]
L7E39: mov dword ptr [ecx], edx
L7E3B: mov eax, dword ptr [eax + 4]
L7E3E: mov dword ptr [ecx + 4], eax
L7E41: lea ecx, [esp + 0x154]
L7E48: call ext_006D23F0
L7E4D: mov ecx, dword ptr [esp + 0x10]
L7E51: push 1
L7E53: fld qword ptr [eax]
L7E55: mov edx, dword ptr [ecx + 0x14]
L7E58: lea ecx, [esp + 0x154]
L7E5F: fstp dword ptr [edx + esi]
L7E62: call ext_006D23F0
L7E67: fld qword ptr [eax]
L7E69: mov eax, dword ptr [esp + 0x10]
L7E6D: push 2
L7E6F: mov ecx, dword ptr [eax + 0x14]
L7E72: fstp dword ptr [ecx + esi + 4]
L7E76: lea ecx, [esp + 0x154]
L7E7D: call ext_006D23F0
L7E82: mov edx, dword ptr [esp + 0x10]
L7E86: fld qword ptr [eax]
L7E88: mov eax, dword ptr [edx + 0x14]
L7E8B: fstp dword ptr [eax + esi + 8]
L7E8F: mov al, byte ptr [esp + 0x23]
L7E93: test al, al
L7E95: je L7F5E
L7E9B: mov eax, dword ptr [esp + 0x3c]
L7E9F: test eax, eax
L7EA1: je L7EEB
L7EA3: mov ecx, dword ptr [esp + 0x1c]
L7EA7: push ecx
L7EA8: lea ecx, [esp + 0xdc]
L7EAF: call ext_0074AE20
L7EB4: push 0
L7EB6: lea ecx, [esp + 0xdc]
L7EBD: call ext_006D23F0
L7EC2: mov edx, dword ptr [esp + 0x10]
L7EC6: push 1
L7EC8: fld qword ptr [eax]
L7ECA: mov eax, dword ptr [edx + 0x24]
L7ECD: lea ecx, [esp + 0xdc]
L7ED4: fstp dword ptr [eax + edi*8]
L7ED7: call ext_006D23F0
L7EDC: mov ecx, dword ptr [esp + 0x10]
L7EE0: fld qword ptr [eax]
L7EE2: mov edx, dword ptr [ecx + 0x24]
L7EE5: fstp dword ptr [edx + edi*8 + 4]
L7EE9: jmp L7F5E
L7EEB: mov ecx, ebx
L7EED: call ext_006D86F0
L7EF2: cmp eax, 4
L7EF5: jne L7F41
L7EF7: push 0
L7EF9: lea ecx, [esp + 0xbc]
L7F00: call ext_006D23F0
L7F05: fld qword ptr [eax]
L7F07: fsub qword ptr [esp + 0x34]
L7F0B: mov eax, dword ptr [esp + 0x10]
L7F0F: push 1
L7F11: fdiv qword ptr [esp + 0x80]
L7F18: mov ecx, dword ptr [eax + 0x24]
L7F1B: fstp dword ptr [ecx + edi*8]
L7F1E: lea ecx, [esp + 0xbc]
L7F25: call ext_006D23F0
L7F2A: fld qword ptr [eax]
L7F2C: fsub qword ptr [esp + 0x54]
L7F30: mov edx, dword ptr [esp + 0x10]
L7F34: fdiv qword ptr [esp + 0x44]
L7F38: mov eax, dword ptr [edx + 0x24]
L7F3B: fstp dword ptr [eax + edi*8 + 4]
L7F3F: jmp L7F5E
L7F41: mov ecx, dword ptr [esp + 0x10]
L7F45: mov edx, dword ptr [ecx + 0x24]
L7F48: mov dword ptr [edx + edi*8], 0
L7F4F: mov eax, dword ptr [esp + 0x10]
L7F53: mov ecx, dword ptr [eax + 0x24]
L7F56: mov dword ptr [ecx + edi*8 + 4], 0
L7F5E: lea ecx, [esp + 0x218]
L7F65: mov byte ptr [esp + 0x398], 8
L7F6D: call ext_006D80A0
L7F72: mov eax, dword ptr [esp + 0x40]
L7F76: mov ecx, dword ptr [esp + 0x1c]
L7F7A: add eax, 0x20
L7F7D: inc edi
L7F7E: mov dword ptr [esp + 0x40], eax
L7F82: mov eax, dword ptr [esp + 0x30]
L7F86: add esi, 0xc
L7F89: add ecx, 0x10
L7F8C: cmp edi, eax
L7F8E: mov dword ptr [esp + 0x1c], ecx
L7F92: jl L7C61
L7F98: xor esi, esi
L7F9A: or eax, -1
L7F9D: push 4
L7F9F: push 0x10
L7FA1: lea ecx, [esp + 0x1a8]
L7FA8: mov dword ptr [esp + 0x54], esi
L7FAC: mov dword ptr [esp + 0x84], eax
L7FB3: mov dword ptr [esp + 0x44], eax
L7FB7: mov dword ptr [esp + 0x48], eax
L7FBB: mov dword ptr [esp + 0x24], esi
L7FBF: call ext_006D2130
L7FC4: lea edx, [esp + 0x1b0]
L7FCB: mov dword ptr [esp + 0x1b4], edx
L7FD2: push 4
L7FD4: push 0x10
L7FD6: lea ecx, [esp + 0xa8]
L7FDD: mov byte ptr [esp + 0x3a0], 0xa
L7FE5: mov dword ptr [esp + 0x38], esi
L7FE9: call ext_006D2130
L7FEE: lea eax, [esp + 0xb0]
L7FF5: mov dword ptr [esp + 0xb4], eax
L7FFC: push 4
L7FFE: push 0x10
L8000: lea ecx, [esp + 0x110]
L8007: mov byte ptr [esp + 0x3a0], 0xb
L800F: call ext_006D2130
L8014: lea ecx, [esp + 0x118]
L801B: mov dword ptr [esp + 0x11c], ecx
L8022: push 4
L8024: push 0x10
L8026: lea ecx, [esp + 0x140]
L802D: mov byte ptr [esp + 0x3a0], 0xc
L8035: call ext_006D2130
L803A: lea edx, [esp + 0x148]
L8041: mov dword ptr [esp + 0x14c], edx
L8048: push 4
L804A: push 0x10
L804C: lea ecx, [esp + 0x128]
L8053: mov byte ptr [esp + 0x3a0], 0xd
L805B: call ext_006D2130
L8060: lea eax, [esp + 0x130]
L8067: mov dword ptr [esp + 0x134], eax
L806E: push esi
L806F: mov ecx, ebx
L8071: mov byte ptr [esp + 0x39c], 0xe
L8079: call ext_006FD980
L807E: test eax, eax
L8080: jne L8189
L8086: push esi
L8087: mov ecx, ebx
L8089: call ext_006FD480
L808E: test eax, eax
L8090: jle L8189
L8096: mov ecx, dword ptr [esp + 0x84]
L809D: push 0xaa8cb0
L80A2: mov ecx, dword ptr [ecx + 4]
L80A5: call ext_006D37E0
L80AA: lea ecx, [esp + 0xe8]
L80B1: mov dword ptr [esp + 0x44], eax
L80B5: call ext_0077FB40
L80BA: push 0x3ff00000
L80BF: push esi
L80C0: push 0x3fe2d0e5
L80C5: push 0x60418937
L80CA: push 0x3fe2d0e5
L80CF: push 0x60418937
L80D4: push 0x3fe2d0e5
L80D9: push 0x60418937
L80DE: lea ecx, [esp + 0x108]
L80E5: mov byte ptr [esp + 0x3b8], 0xf
L80ED: call ext_0077FC70
L80F2: sub esp, 0x20
L80F5: mov ecx, 8
L80FA: lea esi, [esp + 0x108]
L8101: mov edi, esp
L8103: rep movsd
L8105: mov ecx, dword ptr [esp + 0x64]
L8109: call ext_0070C010
L810E: sub esp, 0x20
L8111: mov ecx, 8
L8116: lea esi, [esp + 0x108]
L811D: mov edi, esp
L811F: rep movsd
L8121: mov ecx, dword ptr [esp + 0x64]
L8125: call ext_0070C0E0
L812A: push 0x3ff00000
L812F: push 0
L8131: push 0
L8133: push 0
L8135: push 0
L8137: push 0
L8139: push 0
L813B: push 0
L813D: lea ecx, [esp + 0x108]
L8144: call ext_0077FC70
L8149: sub esp, 0x20
L814C: mov ecx, 8
L8151: lea esi, [esp + 0x108]
L8158: mov edi, esp
L815A: rep movsd
L815C: mov esi, dword ptr [esp + 0x64]
L8160: mov ecx, esi
L8162: call ext_0070C1B0
L8167: push 0
L8169: push esi
L816A: mov ecx, ebx
L816C: call ext_006FDB00
L8171: lea ecx, [esp + 0xe8]
L8178: mov byte ptr [esp + 0x398], 0xe
L8180: call ext_006D80A0
L8185: mov esi, dword ptr [esp + 0x4c]
L8189: mov edx, dword ptr [esp + 0x84]
L8190: mov al, byte ptr [edx + 0xad]
L8196: test al, al
L8198: je L81AC
L819A: push 0
L819C: mov ecx, ebx
L819E: call ext_006FD980
L81A3: test eax, eax
L81A5: mov byte ptr [esp + 0x16], 1
L81AA: jne L81B1
L81AC: mov byte ptr [esp + 0x16], 0
L81B1: push 3
L81B3: mov ecx, ebx
L81B5: call ext_006FDF30
L81BA: cmp eax, 1
L81BD: jle L81D2
L81BF: push 0
L81C1: mov ecx, ebx
L81C3: call ext_006FD480
L81C8: cmp eax, 1
L81CB: mov byte ptr [esp + 0x17], 1
L81D0: jg L81D7
L81D2: mov byte ptr [esp + 0x17], 0
L81D7: mov al, byte ptr [esp + 0x16]
L81DB: test al, al
L81DD: je L8470
L81E3: push 0
L81E5: mov ecx, ebx
L81E7: call ext_006FD980
L81EC: shl eax, 2
L81EF: push eax
L81F0: call ext_006A5C62
L81F5: add esp, 4
L81F8: mov edi, eax
L81FA: mov ecx, ebx
L81FC: mov dword ptr [esp + 0x30], edi
L8200: push 0
L8202: mov dword ptr [esp + 0x1c], 0
L820A: call ext_006FD980
L820F: test eax, eax
L8211: jle L82E1
L8217: mov dword ptr [esp + 0x1c], edi
L821B: push 0
L821D: mov ecx, ebx
L821F: call ext_006FD480
L8224: lea eax, [eax*4 + 4]
L822B: push eax
L822C: call ext_006A5C62
L8231: mov ecx, dword ptr [esp + 0x20]
L8235: add esp, 4
L8238: mov dword ptr [esp + 0x44], 0
L8240: mov dword ptr [ecx], eax
L8242: push 0
L8244: mov ecx, ebx
L8246: call ext_006FD480
L824B: test eax, eax
L824D: jl L82BC
L824F: push 0
L8251: mov ecx, ebx
L8253: call ext_006FD480
L8258: lea edx, [eax*4 + 4]
L825F: push edx
L8260: call ext_006A5C62
L8265: mov ecx, dword ptr [esp + 0x20]
L8269: add esp, 4
L826C: xor edi, edi
L826E: mov edx, dword ptr [ecx]
L8270: mov ecx, dword ptr [esp + 0x44]
L8274: push edi
L8275: mov dword ptr [edx + ecx*4], eax
L8278: mov ecx, ebx
L827A: call ext_006FD480
L827F: test eax, eax
L8281: jl L82A6
L8283: mov edx, dword ptr [esp + 0x1c]
L8287: mov ecx, dword ptr [esp + 0x44]
L828B: push 0
L828D: inc edi
L828E: mov eax, dword ptr [edx]
L8290: mov edx, dword ptr [eax + ecx*4]
L8293: mov ecx, ebx
L8295: mov dword ptr [edx + edi*4 - 4], 0
L829D: call ext_006FD480
L82A2: cmp edi, eax
L82A4: jle L8283
L82A6: mov edi, dword ptr [esp + 0x44]
L82AA: push 0
L82AC: inc edi
L82AD: mov ecx, ebx
L82AF: mov dword ptr [esp + 0x48], edi
L82B3: call ext_006FD480
L82B8: cmp edi, eax
L82BA: jle L824F
L82BC: mov edi, dword ptr [esp + 0x18]
L82C0: mov eax, dword ptr [esp + 0x1c]
L82C4: inc edi
L82C5: add eax, 4
L82C8: push 0
L82CA: mov ecx, ebx
L82CC: mov dword ptr [esp + 0x1c], edi
L82D0: mov dword ptr [esp + 0x20], eax
L82D4: call ext_006FD980
L82D9: cmp edi, eax
L82DB: jl L821B
L82E1: mov eax, dword ptr [esp + 0x70]
L82E5: lea ecx, [esp + 0x1a0]
L82EC: push eax
L82ED: call ext_006D2300
L82F2: mov ecx, ebx
L82F4: call ext_006D8680
L82F9: mov dword ptr [esp + 0x1c], eax
L82FD: mov al, byte ptr [esp + 0x17]
L8301: test al, al
L8303: push 0
L8305: mov ecx, ebx
L8307: je L83ED
L830D: call ext_006FDF70
L8312: mov ecx, eax
L8314: call ext_00715550
L8319: mov edi, eax
L831B: lea ecx, [esp + 0xa0]
L8322: add edi, 0x20
L8325: call ext_006D2250
L832A: mov ecx, dword ptr [edi + 8]
L832D: mov dword ptr [esp + 0x44], 0
L8335: mov dword ptr [esp + 0xa8], ecx
L833C: mov eax, dword ptr [edi]
L833E: test eax, eax
L8340: mov dword ptr [esp + 0x34], eax
L8344: jle L837E
L8346: mov edx, dword ptr [edi + 0x10]
L8349: mov eax, dword ptr [esp + 0x44]
L834D: lea ecx, [esp + 0x24]
L8351: mov eax, dword ptr [edx + eax*4]
L8354: mov edx, dword ptr [esp + 0xa0]
L835B: push ecx
L835C: push edx
L835D: lea ecx, [esp + 0xa8]
L8364: mov dword ptr [esp + 0x2c], eax
L8368: call ext_006D2170
L836D: mov eax, dword ptr [esp + 0x44]
L8371: mov ecx, dword ptr [esp + 0x34]
L8375: inc eax
L8376: cmp eax, ecx
L8378: mov dword ptr [esp + 0x44], eax
L837C: jl L8346
L837E: push 1
L8380: mov ecx, ebx
L8382: call ext_006FDF70
L8387: mov ecx, eax
L8389: call ext_00715550
L838E: mov edi, eax
L8390: lea ecx, [esp + 0x108]
L8397: mov dword ptr [esp + 0x24], edi
L839B: call ext_006D2250
L83A0: mov eax, dword ptr [edi + 0x28]
L83A3: mov dword ptr [esp + 0x110], eax
L83AA: mov eax, dword ptr [edi + 0x20]
L83AD: xor edi, edi
L83AF: mov dword ptr [esp + 0x54], eax
L83B3: test eax, eax
L83B5: jle L8452
L83BB: mov ecx, dword ptr [esp + 0x24]
L83BF: mov edx, dword ptr [ecx + 0x30]
L83C2: mov ecx, dword ptr [esp + 0x108]
L83C9: mov eax, dword ptr [edx + edi*4]
L83CC: mov dword ptr [esp + 0x34], eax
L83D0: lea eax, [esp + 0x34]
L83D4: push eax
L83D5: push ecx
L83D6: lea ecx, [esp + 0x110]
L83DD: call ext_006D2170
L83E2: mov eax, dword ptr [esp + 0x54]
L83E6: inc edi
L83E7: cmp edi, eax
L83E9: jl L83BB
L83EB: jmp L8452
L83ED: call ext_006FDF70
L83F2: mov ecx, eax
L83F4: call ext_00715550
L83F9: mov edi, eax
L83FB: lea ecx, [esp + 0xa0]
L8402: mov dword ptr [esp + 0x24], edi
L8406: call ext_006D2250
L840B: mov edx, dword ptr [edi + 0x28]
L840E: mov dword ptr [esp + 0xa8], edx
L8415: mov eax, dword ptr [edi + 0x20]
L8418: xor edi, edi
L841A: mov dword ptr [esp + 0x54], eax
L841E: test eax, eax
L8420: jle L8452
L8422: mov eax, dword ptr [esp + 0x24]
L8426: lea edx, [esp + 0x34]
L842A: push edx
L842B: mov ecx, dword ptr [eax + 0x30]
L842E: mov eax, dword ptr [ecx + edi*4]
L8431: lea ecx, [esp + 0xa4]
L8438: mov dword ptr [esp + 0x38], eax
L843C: mov eax, dword ptr [esp + 0xa4]
L8443: push eax
L8444: call ext_006D2170
L8449: mov eax, dword ptr [esp + 0x54]
L844D: inc edi
L844E: cmp edi, eax
L8450: jl L8422
L8452: mov edi, dword ptr [esp + 0x70]
L8456: lea ecx, [esp + 0x138]
L845D: push edi
L845E: call ext_006D2300
L8463: push edi
L8464: lea ecx, [esp + 0x124]
L846B: call ext_006D2300
L8470: mov eax, dword ptr [esp + 0x64]
L8474: mov dword ptr [esp + 0x18], 0
L847C: test eax, eax
L847E: jle L8AC3
L8484: mov ecx, dword ptr [esp + 0x18]
L8488: push ecx
L8489: mov ecx, ebx
L848B: call ext_006D8210
L8490: mov edi, eax
L8492: push 4
L8494: push 0x10
L8496: lea ecx, [esp + 0xf0]
L849D: mov dword ptr [esp + 0x5c], edi
L84A1: call ext_006D2130
L84A6: lea edx, [esp + 0xf8]
L84AD: mov dword ptr [esp + 0xfc], edx
L84B4: lea eax, [edi - 2]
L84B7: lea ecx, [esp + 0xe8]
L84BE: mov dword ptr [esp + 0x34], eax
L84C2: mov byte ptr [esp + 0x398], 0x10
L84CA: lea eax, [eax + eax*2]
L84CD: push eax
L84CE: call ext_006D2300
L84D3: push 4
L84D5: push 0x10
L84D7: lea ecx, [esp + 0x90]
L84DE: call ext_006D2130
L84E3: lea ecx, [esp + 0x98]
L84EA: mov dword ptr [esp + 0x9c], ecx
L84F1: push edi
L84F2: lea ecx, [esp + 0x8c]
L84F9: mov byte ptr [esp + 0x39c], 0x11
L8501: call ext_006D2300
L8506: mov eax, dword ptr [esp + 0x54]
L850A: xor edi, edi
L850C: test eax, eax
L850E: mov dword ptr [esp + 0x44], edi
L8512: jle L85B5
L8518: mov edx, dword ptr [esp + 0x18]
L851C: push edi
L851D: push edx
L851E: mov ecx, ebx
L8520: call ext_006D8240
L8525: mov ecx, dword ptr [esp + 0x98]
L852C: mov dword ptr [esp + 0x24], eax
L8530: mov dword ptr [ecx + edi*4], eax
L8533: mov ecx, ebx
L8535: call ext_006D86F0
L853A: cmp eax, 2
L853D: jne L85A4
L853F: mov edx, dword ptr [esp + 0x18]
L8543: push edi
L8544: push edx
L8545: mov ecx, ebx
L8547: call ext_006D8280
L854C: mov edi, eax
L854E: mov ecx, ebx
L8550: shl edi, 4
L8553: call ext_006D8520
L8558: add edi, eax
L855A: lea ecx, [esp + 0xd8]
L8561: push edi
L8562: call ext_0074AE20
L8567: push 0
L8569: lea ecx, [esp + 0xdc]
L8570: call ext_006D23F0
L8575: fld qword ptr [eax]
L8577: mov eax, dword ptr [esp + 0x10]
L857B: mov edi, dword ptr [esp + 0x24]
L857F: push 1
L8581: mov ecx, dword ptr [eax + 0x24]
L8584: fstp dword ptr [ecx + edi*8]
L8587: lea ecx, [esp + 0xdc]
L858E: call ext_006D23F0
L8593: mov edx, dword ptr [esp + 0x10]
L8597: fld qword ptr [eax]
L8599: mov eax, dword ptr [edx + 0x24]
L859C: fstp dword ptr [eax + edi*8 + 4]
L85A0: mov edi, dword ptr [esp + 0x44]
L85A4: mov eax, dword ptr [esp + 0x54]
L85A8: inc edi
L85A9: cmp edi, eax
L85AB: mov dword ptr [esp + 0x44], edi
L85AF: jl L8518
L85B5: mov al, byte ptr [esp + 0x16]
L85B9: test al, al
L85BB: je L8614
L85BD: mov ecx, ebx
L85BF: call ext_006D86C0
L85C4: cmp eax, 4
L85C7: jne L85E3
L85C9: mov eax, dword ptr [esp + 0x1c]
L85CD: test eax, eax
L85CF: je L85D9
L85D1: mov ecx, dword ptr [eax]
L85D3: mov dword ptr [esp + 0x7c], ecx
L85D7: jmp L8614
L85D9: mov dword ptr [esp + 0x7c], 0
L85E1: jmp L8614
L85E3: mov ecx, ebx
L85E5: call ext_006D86C0
L85EA: cmp eax, 3
L85ED: jne L8600
L85EF: mov edx, dword ptr [esp + 0x1c]
L85F3: mov eax, dword ptr [esp + 0x18]
L85F7: mov ecx, dword ptr [edx + eax*4]
L85FA: mov dword ptr [esp + 0x7c], ecx
L85FE: jmp L8614
L8600: mov edx, dword ptr [esp + 0x98]
L8607: mov ecx, dword ptr [esp + 0x1c]
L860B: mov eax, dword ptr [edx]
L860D: mov edx, dword ptr [ecx + eax*4]
L8610: mov dword ptr [esp + 0x7c], edx
L8614: mov al, byte ptr [esp + 0x23]
L8618: test al, al
L861A: je L86C5
L8620: mov ecx, ebx
L8622: call ext_006D8980
L8627: cmp eax, 4
L862A: jne L865B
L862C: mov eax, dword ptr [esp + 0xa0]
L8633: test eax, eax
L8635: je L8644
L8637: mov eax, dword ptr [esp + 0xb0]
L863E: mov ecx, dword ptr [eax]
L8640: mov dword ptr [esp + 0x3c], ecx
L8644: mov al, byte ptr [esp + 0x17]
L8648: test al, al
L864A: je L86C5
L864C: mov edx, dword ptr [esp + 0x118]
L8653: mov eax, dword ptr [edx]
L8655: mov dword ptr [esp + 0x40], eax
L8659: jmp L86C5
L865B: mov ecx, ebx
L865D: call ext_006D8980
L8662: cmp eax, 3
L8665: jne L8695
L8667: mov edx, dword ptr [esp + 0xb0]
L866E: mov ecx, dword ptr [esp + 0x18]
L8672: mov eax, dword ptr [edx + ecx*4]
L8675: mov dl, byte ptr [esp + 0x17]
L8679: test dl, dl
L867B: mov dword ptr [esp + 0x3c], eax
L867F: je L86C5
L8681: mov dword ptr [esp + 0x40], eax
L8685: mov eax, dword ptr [esp + 0x118]
L868C: mov ecx, dword ptr [eax + ecx*4]
L868F: mov dword ptr [esp + 0x3c], ecx
L8693: jmp L86C5
L8695: mov edx, dword ptr [esp + 0x98]
L869C: mov ecx, dword ptr [esp + 0xb0]
L86A3: mov eax, dword ptr [edx]
L86A5: shl eax, 2
L86A8: mov edx, dword ptr [ecx + eax]
L86AB: mov cl, byte ptr [esp + 0x17]
L86AF: test cl, cl
L86B1: mov dword ptr [esp + 0x3c], edx
L86B5: je L86C5
L86B7: mov ecx, dword ptr [esp + 0x118]
L86BE: mov edx, dword ptr [ecx + eax]
L86C1: mov dword ptr [esp + 0x40], edx
L86C5: mov eax, dword ptr [esp + 0x54]
L86C9: mov ecx, dword ptr [esp + 0xf8]
L86D0: push eax
L86D1: push ecx
L86D2: call ext_0078D1F0
L86D7: mov eax, dword ptr [esp + 0x3c]
L86DB: add esp, 8
L86DE: test eax, eax
L86E0: jle L8A86
L86E6: mov edx, eax
L86E8: mov dword ptr [esp + 0x44], 0
L86F0: mov dword ptr [esp + 0x24], edx
L86F4: mov eax, dword ptr [esp + 0xf8]
L86FB: mov ecx, dword ptr [esp + 0x44]
L86FF: mov edx, dword ptr [eax + ecx]
L8702: mov edi, dword ptr [eax + ecx + 4]
L8706: mov eax, dword ptr [eax + ecx + 8]
L870A: mov ecx, dword ptr [esp + 0x10]
L870E: mov dword ptr [esp + 0x54], eax
L8712: mov dword ptr [esp + 0x34], edx
L8716: mov eax, dword ptr [ecx + 0xb8]
L871C: mov ecx, dword ptr [esp + 0x98]
L8723: mov dx, word ptr [ecx + edx*4]
L8727: mov word ptr [eax + esi*8], dx
L872B: mov eax, dword ptr [esp + 0x10]
L872F: mov edx, dword ptr [esp + 0x98]
L8736: mov ecx, dword ptr [eax + 0xb8]
L873C: mov ax, word ptr [edx + edi*4]
L8740: mov word ptr [ecx + esi*8 + 2], ax
L8745: mov ecx, dword ptr [esp + 0x10]
L8749: mov eax, dword ptr [esp + 0x98]
L8750: mov edx, dword ptr [ecx + 0xb8]
L8756: mov ecx, dword ptr [esp + 0x54]
L875A: mov ax, word ptr [eax + ecx*4]
L875E: mov word ptr [edx + esi*8 + 4], ax
L8763: mov ecx, dword ptr [esp + 0x10]
L8767: mov edx, dword ptr [ecx + 0xb8]
L876D: mov word ptr [edx + esi*8 + 6], 7
L8774: mov eax, dword ptr [esp + 0x98]
L877B: mov edx, dword ptr [esp + 0x74]
L877F: mov ecx, dword ptr [eax + edi*4]
L8782: shl ecx, 5
L8785: add ecx, edx
L8787: push ecx
L8788: lea ecx, [esp + 0x354]
L878F: push ecx
L8790: mov ecx, dword ptr [esp + 0x3c]
L8794: mov ecx, dword ptr [eax + ecx*4]
L8797: shl ecx, 5
L879A: add ecx, edx
L879C: call ext_006D2630
L87A1: push eax
L87A2: lea ecx, [esp + 0x1dc]
L87A9: mov byte ptr [esp + 0x39c], 0x12
L87B1: call ext_007873F0
L87B6: lea ecx, [esp + 0x350]
L87BD: mov byte ptr [esp + 0x398], 0x11
L87C5: call ext_006D80A0
L87CA: mov eax, dword ptr [esp + 0x98]
L87D1: mov edx, dword ptr [esp + 0x74]
L87D5: mov ecx, dword ptr [eax + edi*4]
L87D8: shl ecx, 5
L87DB: add ecx, edx
L87DD: push ecx
L87DE: lea ecx, [esp + 0x334]
L87E5: push ecx
L87E6: mov ecx, dword ptr [esp + 0x5c]
L87EA: mov ecx, dword ptr [eax + ecx*4]
L87ED: shl ecx, 5
L87F0: add ecx, edx
L87F2: call ext_006D2630
L87F7: push eax
L87F8: lea ecx, [esp + 0x1fc]
L87FF: mov byte ptr [esp + 0x39c], 0x13
L8807: call ext_007873F0
L880C: lea ecx, [esp + 0x330]
L8813: mov byte ptr [esp + 0x398], 0x11
L881B: call ext_006D80A0
L8820: lea edx, [esp + 0x1d8]
L8827: lea eax, [esp + 0x370]
L882E: push edx
L882F: push eax
L8830: lea ecx, [esp + 0x200]
L8837: call ext_006D2720
L883C: push eax
L883D: lea ecx, [esp + 0x1bc]
L8844: mov byte ptr [esp + 0x39c], 0x14
L884C: call ext_007873F0
L8851: mov byte ptr [esp + 0x398], 0x11
L8859: lea ecx, [esp + 0x370]
L8860: call ext_006D80A0
L8865: lea ecx, [esp + 0x1b8]
L886C: call ext_006D29A0
L8871: mov eax, dword ptr [esp + 0x60]
L8875: test eax, eax
L8877: je L8935
L887D: mov ecx, dword ptr [esp + 0x98]
L8884: mov edx, dword ptr [esp + 0x34]
L8888: mov eax, dword ptr [ecx + edx*4]
L888B: mov ecx, dword ptr [esp + 0x60]
L888F: shl eax, 5
L8892: add eax, ecx
L8894: lea ecx, [esp + 0x1b8]
L889B: push eax
L889C: call ext_006D2940
L88A1: test al, al
L88A3: je L8935
L88A9: mov ecx, dword ptr [esp + 0x98]
L88B0: mov eax, dword ptr [esp + 0x60]
L88B4: mov edx, dword ptr [ecx + edi*4]
L88B7: lea ecx, [esp + 0x1b8]
L88BE: shl edx, 5
L88C1: add edx, eax
L88C3: push edx
L88C4: call ext_006D2940
L88C9: test al, al
L88CB: je L8935
L88CD: mov eax, dword ptr [esp + 0x98]
L88D4: mov ecx, dword ptr [esp + 0x54]
L88D8: mov edx, dword ptr [eax + ecx*4]
L88DB: mov eax, dword ptr [esp + 0x60]
L88DF: shl edx, 5
L88E2: add edx, eax
L88E4: lea ecx, [esp + 0x1b8]
L88EB: push edx
L88EC: call ext_006D2940
L88F1: test al, al
L88F3: je L8935
L88F5: mov ecx, dword ptr [esp + 0x78]
L88F9: shl ecx, 1
L88FB: mov eax, ecx
L88FD: cdq
L88FE: test eax, eax
L8900: jne L890C
L8902: cmp edx, 1
L8905: jne L890C
L8907: mov ecx, 2
L890C: mov eax, dword ptr [esp + 0x10]
L8910: mov edx, dword ptr [eax + 0xbc]
L8916: mov dword ptr [edx + esi*4], ecx
L8919: shl ecx, 1
L891B: mov eax, ecx
L891D: mov dword ptr [esp + 0x78], ecx
L8921: cdq
L8922: test eax, eax
L8924: jne L8946
L8926: cmp edx, 1
L8929: jne L8946
L892B: mov dword ptr [esp + 0x78], 2
L8933: jmp L8946
L8935: mov eax, dword ptr [esp + 0x10]
L8939: mov ecx, dword ptr [eax + 0xbc]
L893F: mov dword ptr [ecx + esi*4], 1
L8946: mov al, byte ptr [esp + 0x16]
L894A: test al, al
L894C: je L8A67
L8952: mov edx, dword ptr [esp + 0x1b0]
L8959: mov eax, dword ptr [esp + 0x7c]
L895D: mov edi, dword ptr [esp + 0x40]
L8961: push 0
L8963: mov dword ptr [edx + esi*4], eax
L8966: mov ecx, dword ptr [esp + 0x14c]
L896D: mov eax, dword ptr [esp + 0x40]
L8971: mov dword ptr [ecx + esi*4], eax
L8974: mov edx, dword ptr [esp + 0x134]
L897B: push eax
L897C: mov ecx, ebx
L897E: mov dword ptr [edx + esi*4], edi
L8981: call ext_006FD600
L8986: test eax, eax
L8988: push 0
L898A: push edi
L898B: mov ecx, ebx
L898D: je L89DE
L898F: call ext_006FD600
L8994: test eax, eax
L8996: je L89B8
L8998: mov eax, dword ptr [esp + 0x30]
L899C: mov ecx, dword ptr [esp + 0x7c]
L89A0: mov edx, dword ptr [eax + ecx*4]
L89A3: mov eax, dword ptr [esp + 0x3c]
L89A7: mov ecx, dword ptr [edx + eax*4]
L89AA: lea eax, [ecx + edi*4]
L89AD: mov ecx, dword ptr [ecx + edi*4]
L89B0: inc ecx
L89B1: mov dword ptr [eax], ecx
L89B3: jmp L8A67
L89B8: push 0
L89BA: mov ecx, ebx
L89BC: call ext_006FD480
L89C1: mov edx, dword ptr [esp + 0x30]
L89C5: mov ecx, dword ptr [esp + 0x7c]
L89C9: mov edx, dword ptr [edx + ecx*4]
L89CC: mov ecx, dword ptr [esp + 0x3c]
L89D0: mov edx, dword ptr [edx + ecx*4]
L89D3: mov ecx, dword ptr [edx + eax*4]
L89D6: inc ecx
L89D7: lea eax, [edx + eax*4]
L89DA: mov dword ptr [eax], ecx
L89DC: jmp L8A59
L89DE: call ext_006FD600
L89E3: test eax, eax
L89E5: push 0
L89E7: mov ecx, ebx
L89E9: je L8A21
L89EB: call ext_006FD480
L89F0: mov ecx, dword ptr [esp + 0x30]
L89F4: mov edx, dword ptr [esp + 0x7c]
L89F8: mov ecx, dword ptr [ecx + edx*4]
L89FB: mov edx, dword ptr [ecx + edi*4]
L89FE: mov ecx, dword ptr [edx + eax*4]
L8A01: inc ecx
L8A02: lea eax, [edx + eax*4]
L8A05: mov dword ptr [eax], ecx
L8A07: mov eax, dword ptr [esp + 0x148]
L8A0E: mov dword ptr [eax + esi*4], edi
L8A11: mov ecx, dword ptr [esp + 0x130]
L8A18: mov dword ptr [ecx + esi*4], -1
L8A1F: jmp L8A67
L8A21: call ext_006FD480
L8A26: mov edx, dword ptr [esp + 0x30]
L8A2A: mov esi, eax
L8A2C: mov eax, dword ptr [esp + 0x7c]
L8A30: push 0
L8A32: mov ecx, ebx
L8A34: mov edi, dword ptr [edx + eax*4]
L8A37: call ext_006FD480
L8A3C: mov ecx, dword ptr [edi + esi*4]
L8A3F: mov esi, dword ptr [esp + 0x4c]
L8A43: lea eax, [ecx + eax*4]
L8A46: mov ecx, dword ptr [eax]
L8A48: inc ecx
L8A49: mov dword ptr [eax], ecx
L8A4B: mov edx, dword ptr [esp + 0x148]
L8A52: mov dword ptr [edx + esi*4], -1
L8A59: mov eax, dword ptr [esp + 0x130]
L8A60: mov dword ptr [eax + esi*4], -1
L8A67: mov ecx, dword ptr [esp + 0x44]
L8A6B: mov eax, dword ptr [esp + 0x24]
L8A6F: inc esi
L8A70: add ecx, 0xc
L8A73: dec eax
L8A74: mov dword ptr [esp + 0x4c], esi
L8A78: mov dword ptr [esp + 0x44], ecx
L8A7C: mov dword ptr [esp + 0x24], eax
L8A80: jne L86F4
L8A86: lea ecx, [esp + 0x88]
L8A8D: mov byte ptr [esp + 0x398], 0x10
L8A95: call ext_006D2160
L8A9A: lea ecx, [esp + 0xe8]
L8AA1: mov byte ptr [esp + 0x398], 0xe
L8AA9: call ext_006D2160
L8AAE: mov eax, dword ptr [esp + 0x18]
L8AB2: mov ecx, dword ptr [esp + 0x64]
L8AB6: inc eax
L8AB7: cmp eax, ecx
L8AB9: mov dword ptr [esp + 0x18], eax
L8ABD: jl L8484
L8AC3: mov al, byte ptr [esp + 0x16]
L8AC7: test al, al
L8AC9: je L8FD6
L8ACF: xor esi, esi
L8AD1: push 0x20
L8AD3: push 0x10
L8AD5: lea ecx, [esp + 0x90]
L8ADC: mov dword ptr [esp + 0x24], esi
L8AE0: call ext_006D2130
L8AE5: lea ecx, [esp + 0x98]
L8AEC: mov dword ptr [esp + 0x9c], ecx
L8AF3: lea ecx, [esp + 0xe8]
L8AFA: mov byte ptr [esp + 0x398], 0x15
L8B02: call ext_006D2370
L8B07: push esi
L8B08: mov ecx, ebx
L8B0A: mov byte ptr [esp + 0x39c], 0x16
L8B12: mov dword ptr [esp + 0x1c], esi
L8B16: call ext_006FD980
L8B1B: test eax, eax
L8B1D: jle L8C56
L8B23: mov edx, dword ptr [esp + 0x30]
L8B27: mov dword ptr [esp + 0x4c], edx
L8B2B: xor edi, edi
L8B2D: mov ecx, ebx
L8B2F: push edi
L8B30: mov dword ptr [esp + 0x48], edi
L8B34: call ext_006FD480
L8B39: test eax, eax
L8B3B: jl L8C2D
L8B41: xor esi, esi
L8B43: mov ecx, ebx
L8B45: push esi
L8B46: mov dword ptr [esp + 0x68], esi
L8B4A: call ext_006FD480
L8B4F: test eax, eax
L8B51: jl L8C17
L8B57: mov eax, dword ptr [esp + 0x4c]
L8B5B: mov ecx, dword ptr [eax]
L8B5D: mov edx, dword ptr [ecx + edi*4]
L8B60: cmp dword ptr [edx + esi*4], 0
L8B64: jle L8C01
L8B6A: mov ecx, dword ptr [esp + 0x1c]
L8B6E: push 0
L8B70: fild dword ptr [esp + 0x1c]
L8B74: inc ecx
L8B75: mov dword ptr [esp + 0x20], ecx
L8B79: lea ecx, [esp + 0xec]
L8B80: fstp qword ptr [esp + 0x28]
L8B84: call ext_006D23F0
L8B89: mov ecx, dword ptr [esp + 0x24]
L8B8D: mov edx, dword ptr [esp + 0x28]
L8B91: fild dword ptr [esp + 0x44]
L8B95: mov dword ptr [eax], ecx
L8B97: push 1
L8B99: lea ecx, [esp + 0xec]
L8BA0: fstp qword ptr [esp + 0x28]
L8BA4: mov dword ptr [eax + 4], edx
L8BA7: call ext_006D23F0
L8BAC: mov ecx, dword ptr [esp + 0x24]
L8BB0: mov edx, dword ptr [esp + 0x28]
L8BB4: fild dword ptr [esp + 0x64]
L8BB8: mov dword ptr [eax], ecx
L8BBA: push 2
L8BBC: lea ecx, [esp + 0xec]
L8BC3: fstp qword ptr [esp + 0x68]
L8BC7: mov dword ptr [eax + 4], edx
L8BCA: call ext_006D23F0
L8BCF: mov ecx, dword ptr [esp + 0x64]
L8BD3: mov edx, dword ptr [esp + 0x68]
L8BD7: mov dword ptr [eax], ecx
L8BD9: sub esp, 0x20
L8BDC: mov ecx, esp
L8BDE: mov dword ptr [esp + 0x84], esp
L8BE5: mov dword ptr [eax + 4], edx
L8BE8: lea eax, [esp + 0x108]
L8BEF: push eax
L8BF0: call ext_006D2390
L8BF5: lea ecx, [esp + 0xa8]
L8BFC: call ext_006D2BD0
L8C01: inc esi
L8C02: push 0
L8C04: mov ecx, ebx
L8C06: mov dword ptr [esp + 0x68], esi
L8C0A: call ext_006FD480
L8C0F: cmp esi, eax
L8C11: jle L8B57
L8C17: inc edi
L8C18: push 0
L8C1A: mov ecx, ebx
L8C1C: mov dword ptr [esp + 0x48], edi
L8C20: call ext_006FD480
L8C25: cmp edi, eax
L8C27: jle L8B41
L8C2D: mov esi, dword ptr [esp + 0x18]
L8C31: mov edi, dword ptr [esp + 0x4c]
L8C35: inc esi
L8C36: add edi, 4
L8C39: push 0
L8C3B: mov ecx, ebx
L8C3D: mov dword ptr [esp + 0x1c], esi
L8C41: mov dword ptr [esp + 0x50], edi
L8C45: call ext_006FD980
L8C4A: cmp esi, eax
L8C4C: jl L8B2B
L8C52: mov esi, dword ptr [esp + 0x1c]
L8C56: mov ecx, dword ptr [esp + 0x10]
L8C5A: push 0xfff
L8C5F: mov word ptr [ecx + 0x128], si
L8C66: mov edx, dword ptr [esp + 0x14]
L8C6A: push edx
L8C6B: call ext_007ACB50
L8C70: add esp, 8
L8C73: mov dword ptr [esp + 0x18], 0
L8C7B: test esi, esi
L8C7D: jle L8E2C
L8C83: xor eax, eax
L8C85: mov dword ptr [esp + 0x60], eax
L8C89: mov dword ptr [esp + 0x40], eax
L8C8D: mov eax, dword ptr [esp + 0x98]
L8C94: mov ecx, dword ptr [esp + 0x40]
L8C98: push 0
L8C9A: mov dword ptr [esp + 0x50], 0
L8CA2: lea esi, [eax + ecx]
L8CA5: mov ecx, esi
L8CA7: call ext_006D23F0
L8CAC: fld qword ptr [eax]
L8CAE: call ext_00872828
L8CB3: push 1
L8CB5: mov ecx, esi
L8CB7: mov edi, eax
L8CB9: call ext_006D23F0
L8CBE: fld qword ptr [eax]
L8CC0: call ext_00872828
L8CC5: mov edx, dword ptr [esp + 0x30]
L8CC9: mov dword ptr [esp + 0x64], edi
L8CCD: mov edi, eax
L8CCF: mov eax, dword ptr [esp + 0x64]
L8CD3: mov dword ptr [esp + 0x64], edi
L8CD7: push 2
L8CD9: mov edi, dword ptr [edx + eax*4]
L8CDC: mov ecx, esi
L8CDE: call ext_006D23F0
L8CE3: fld qword ptr [eax]
L8CE5: call ext_00872828
L8CEA: mov ecx, dword ptr [esp + 0x64]
L8CEE: mov edx, dword ptr [edi + ecx*4]
L8CF1: mov ecx, dword ptr [esp + 0x10]
L8CF5: mov edi, dword ptr [edx + eax*4]
L8CF8: mov eax, dword ptr [esp + 0x18]
L8CFC: push edi
L8CFD: push eax
L8CFE: push ecx
L8CFF: call ext_007AD100
L8D04: mov edx, dword ptr [esp + 0x1c]
L8D08: mov esi, dword ptr [esp + 0x6c]
L8D0C: add esp, 0xc
L8D0F: mov eax, dword ptr [edx + 0x12c]
L8D15: mov edx, dword ptr [esp + 0x40]
L8D19: push 2
L8D1B: mov word ptr [eax + esi + 0x12], di
L8D20: mov ecx, dword ptr [esp + 0x9c]
L8D27: lea edi, [ecx + edx]
L8D2A: mov ecx, edi
L8D2C: call ext_006D23F0
L8D31: fld qword ptr [eax]
L8D33: call ext_00872828
L8D38: push eax
L8D39: push 1
L8D3B: mov ecx, edi
L8D3D: call ext_006D23F0
L8D42: fld qword ptr [eax]
L8D44: call ext_00872828
L8D49: push eax
L8D4A: push 0
L8D4C: mov ecx, edi
L8D4E: call ext_006D23F0
L8D53: fld qword ptr [eax]
L8D55: call ext_00872828
L8D5A: mov ecx, dword ptr [esp + 0x8c]
L8D61: push eax
L8D62: push ebx
L8D63: call ext_00769190
L8D68: mov edx, eax
L8D6A: or ecx, -1
L8D6D: mov edi, edx
L8D6F: xor eax, eax
L8D71: mov dword ptr [esp + 0x4c], edx
L8D75: repne scasb
L8D77: not ecx
L8D79: dec ecx
L8D7A: cmp ecx, 0xf
L8D7D: jae L8DB6
L8D7F: mov eax, dword ptr [esp + 0x10]
L8D83: mov ecx, dword ptr [esp + 0x60]
L8D87: mov edi, edx
L8D89: mov esi, dword ptr [eax + 0x12c]
L8D8F: xor eax, eax
L8D91: add esi, ecx
L8D93: or ecx, -1
L8D96: repne scasb
L8D98: not ecx
L8D9A: sub edi, ecx
L8D9C: mov eax, esi
L8D9E: mov edx, ecx
L8DA0: mov esi, edi
L8DA2: mov edi, eax
L8DA4: shr ecx, 2
L8DA7: rep movsd
L8DA9: mov ecx, edx
L8DAB: and ecx, 3
L8DAE: rep movsb
L8DB0: mov esi, dword ptr [esp + 0x60]
L8DB4: jmp L8DDE
L8DB6: mov ecx, dword ptr [esp + 0x10]
L8DBA: push 0xf
L8DBC: push edx
L8DBD: mov edx, dword ptr [ecx + 0x12c]
L8DC3: add edx, esi
L8DC5: push edx
L8DC6: call dword ptr [mem_009252D0]
L8DCC: mov eax, dword ptr [esp + 0x1c]
L8DD0: add esp, 0xc
L8DD3: mov ecx, dword ptr [eax + 0x12c]
L8DD9: mov byte ptr [ecx + esi + 0xf], 0
L8DDE: mov eax, dword ptr [esp + 0x84]
L8DE5: mov edx, dword ptr [esp + 0x4c]
L8DE9: push edx
L8DEA: mov ecx, dword ptr [eax + 0xbc]
L8DF0: push ecx
L8DF1: call ext_007A4C40
L8DF6: lea edx, [esp + 0x54]
L8DFA: push edx
L8DFB: call ext_007A3410
L8E00: mov ecx, dword ptr [esp + 0x4c]
L8E04: mov eax, dword ptr [esp + 0x24]
L8E08: add ecx, 0x20
L8E0B: add esp, 0xc
L8E0E: mov dword ptr [esp + 0x40], ecx
L8E12: mov ecx, dword ptr [esp + 0x1c]
L8E16: inc eax
L8E17: add esi, 0x18
L8E1A: cmp eax, ecx
L8E1C: mov dword ptr [esp + 0x18], eax
L8E20: mov dword ptr [esp + 0x60], esi
L8E24: jl L8C8D
L8E2A: jmp L8E30
L8E2C: mov ecx, dword ptr [esp + 0x1c]
L8E30: xor esi, esi
L8E32: cmp ecx, esi
L8E34: jle L8FAE
L8E3A: mov dword ptr [esp + 0x78], esi
L8E3E: mov dword ptr [esp + 0x24], ecx
L8E42: mov eax, dword ptr [esp + 0x70]
L8E46: xor edi, edi
L8E48: cmp eax, edi
L8E4A: jle L8F91
L8E50: mov dword ptr [esp + 0x64], edi
L8E54: mov eax, dword ptr [esp + 0x1b0]
L8E5B: mov ecx, dword ptr [esp + 0x98]
L8E62: push 0
L8E64: add ecx, esi
L8E66: fild dword ptr [eax + edi*4]
L8E69: fstp qword ptr [esp + 0x38]
L8E6D: call ext_006D23F0
L8E72: fld qword ptr [esp + 0x34]
L8E76: fcomp qword ptr [eax]
L8E78: fnstsw ax
L8E7A: test ah, 0x40
L8E7D: je L8F84
L8E83: mov edx, dword ptr [esp + 0x148]
L8E8A: mov eax, dword ptr [esp + 0x98]
L8E91: push 1
L8E93: fild dword ptr [edx + edi*4]
L8E96: lea ecx, [eax + esi]
L8E99: fstp qword ptr [esp + 0x38]
L8E9D: call ext_006D23F0
L8EA2: fld qword ptr [esp + 0x34]
L8EA6: fcomp qword ptr [eax]
L8EA8: fnstsw ax
L8EAA: test ah, 0x40
L8EAD: jne L8EF7
L8EAF: mov ecx, dword ptr [esp + 0x148]
L8EB6: cmp dword ptr [ecx + edi*4], -1
L8EBA: jne L8F84
L8EC0: mov edx, dword ptr [esp + 0x98]
L8EC7: push 1
L8EC9: lea ecx, [edx + esi]
L8ECC: call ext_006D23F0
L8ED1: push 0
L8ED3: mov ecx, ebx
L8ED5: mov dword ptr [esp + 0x78], eax
L8ED9: call ext_006FD480
L8EDE: mov dword ptr [esp + 0x34], eax
L8EE2: mov eax, dword ptr [esp + 0x74]
L8EE6: fild dword ptr [esp + 0x34]
L8EEA: fcomp qword ptr [eax]
L8EEC: fnstsw ax
L8EEE: test ah, 0x40
L8EF1: je L8F84
L8EF7: mov ecx, dword ptr [esp + 0x130]
L8EFE: mov edx, dword ptr [esp + 0x98]
L8F05: push 2
L8F07: fild dword ptr [ecx + edi*4]
L8F0A: lea ecx, [edx + esi]
L8F0D: fstp qword ptr [esp + 0x38]
L8F11: call ext_006D23F0
L8F16: fld qword ptr [esp + 0x34]
L8F1A: fcomp qword ptr [eax]
L8F1C: fnstsw ax
L8F1E: test ah, 0x40
L8F21: jne L8F62
L8F23: mov eax, dword ptr [esp + 0x130]
L8F2A: cmp dword ptr [eax + edi*4], -1
L8F2E: jne L8F84
L8F30: mov ecx, dword ptr [esp + 0x98]
L8F37: push 2
L8F39: add ecx, esi
L8F3B: call ext_006D23F0
L8F40: push 0
L8F42: mov ecx, ebx
L8F44: mov dword ptr [esp + 0x78], eax
L8F48: call ext_006FD480
L8F4D: mov edx, dword ptr [esp + 0x74]
L8F51: mov dword ptr [esp + 0x34], eax
L8F55: fild dword ptr [esp + 0x34]
L8F59: fcomp qword ptr [edx]
L8F5B: fnstsw ax
L8F5D: test ah, 0x40
L8F60: je L8F84
L8F62: mov eax, dword ptr [esp + 0x10]
L8F66: mov edx, dword ptr [esp + 0x78]
L8F6A: mov ecx, dword ptr [eax + 0x12c]
L8F70: mov eax, dword ptr [esp + 0x64]
L8F74: add eax, 2
L8F77: mov ecx, dword ptr [ecx + edx + 0x14]
L8F7B: mov dword ptr [esp + 0x64], eax
L8F7F: mov word ptr [ecx + eax - 2], di
L8F84: mov eax, dword ptr [esp + 0x70]
L8F88: inc edi
L8F89: cmp edi, eax
L8F8B: jl L8E54
L8F91: mov ecx, dword ptr [esp + 0x78]
L8F95: mov eax, dword ptr [esp + 0x24]
L8F99: add esi, 0x20
L8F9C: add ecx, 0x18
L8F9F: dec eax
L8FA0: mov dword ptr [esp + 0x78], ecx
L8FA4: mov dword ptr [esp + 0x24], eax
L8FA8: jne L8E42
L8FAE: lea ecx, [esp + 0xe8]
L8FB5: mov byte ptr [esp + 0x398], 0x15
L8FBD: call ext_006D80A0
L8FC2: lea ecx, [esp + 0x88]
L8FC9: mov byte ptr [esp + 0x398], 0xe
L8FD1: call ext_006D2160
L8FD6: mov edx, dword ptr [esp + 0x10]
L8FDA: mov al, byte ptr [esp + 0x16]
L8FDE: test al, al
L8FE0: mov byte ptr [edx + 0xf], 1
L8FE4: je L905C
L8FE6: push 0
L8FE8: mov ecx, ebx
L8FEA: mov dword ptr [esp + 0x1c], 0
L8FF2: call ext_006FD980
L8FF7: test eax, eax
L8FF9: jle L904F
L8FFB: mov edi, dword ptr [esp + 0x30]
L8FFF: xor esi, esi
L9001: mov ecx, ebx
L9003: push esi
L9004: call ext_006FD480
L9009: inc eax
L900A: test eax, eax
L900C: jle L902B
L900E: mov eax, dword ptr [edi]
L9010: mov eax, dword ptr [eax + esi*4]
L9013: push eax
L9014: call ext_006A5C5C
L9019: add esp, 4
L901C: mov ecx, ebx
L901E: inc esi
L901F: push 0
L9021: call ext_006FD480
L9026: inc eax
L9027: cmp esi, eax
L9029: jl L900E
L902B: mov eax, dword ptr [edi]
L902D: push eax
L902E: call ext_006A5C5C
L9033: mov esi, dword ptr [esp + 0x1c]
L9037: add esp, 4
L903A: inc esi
L903B: mov ecx, ebx
L903D: push 0
L903F: mov dword ptr [esp + 0x1c], esi
L9043: add edi, 4
L9046: call ext_006FD980
L904B: cmp esi, eax
L904D: jl L8FFF
L904F: mov ecx, dword ptr [esp + 0x30]
L9053: push ecx
L9054: call ext_006A5C5C
L9059: add esp, 4
L905C: mov esi, dword ptr [esp + 0x10]
L9060: lea ecx, [esp + 0x120]
L9067: mov byte ptr [esp + 0x398], 0xd
L906F: call ext_006D2160
L9074: lea ecx, [esp + 0x138]
L907B: mov byte ptr [esp + 0x398], 0xc
L9083: call ext_006D2160
L9088: lea ecx, [esp + 0x108]
L908F: mov byte ptr [esp + 0x398], 0xb
L9097: call ext_006D2160
L909C: lea ecx, [esp + 0xa0]
L90A3: mov byte ptr [esp + 0x398], 0xa
L90AB: call ext_006D2160
L90B0: lea ecx, [esp + 0x1a0]
L90B7: mov byte ptr [esp + 0x398], 8
L90BF: call ext_006D2160
L90C4: jmp L90CA
L90C6: mov esi, dword ptr [esp + 0x10]
L90CA: lea ecx, [esp + 0xd8]
L90D1: mov byte ptr [esp + 0x398], 7
L90D9: call ext_006D80A0
L90DE: lea ecx, [esp + 0x1f8]
L90E5: mov byte ptr [esp + 0x398], 6
L90ED: call ext_006D80A0
L90F2: lea ecx, [esp + 0x1d8]
L90F9: mov byte ptr [esp + 0x398], 5
L9101: call ext_006D80A0
L9106: lea ecx, [esp + 0x1b8]
L910D: mov byte ptr [esp + 0x398], 4
L9115: call ext_006D80A0
L911A: lea ecx, [esp + 0xb8]
L9121: mov byte ptr [esp + 0x398], 3
L9129: call ext_006D80A0
L912E: lea ecx, [esp + 0x150]
L9135: mov byte ptr [esp + 0x398], 2
L913D: call ext_006D80A0
L9142: lea ecx, [ebp + 0xc]
L9145: mov byte ptr [esp + 0x398], 1
L914D: call ext_006D80A0
L9152: lea ecx, [ebp + 0x2c]
L9155: mov byte ptr [esp + 0x398], 0
L915D: call ext_006D80A0
L9162: lea ecx, [ebp + 0x4c]
L9165: mov dword ptr [esp + 0x398], 0xffffffff
L9170: call ext_006D80A0
L9175: mov ecx, dword ptr [esp + 0x390]
L917C: mov eax, esi
L917E: pop edi
L917F: pop esi
L9180: mov dword ptr fs:[0], ecx
L9187: pop ebx
L9188: mov esp, ebp
L918A: pop ebp
L918B: ret 0x68
    }
}

// [0x0076CED0] sub_0076CED0 (7392 bytes)
extern "C" int mem_00925218;
extern "C" int mem_009252D0;
extern "C" int mem_00993808;
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA220();
extern "C" void ext_006BADB0();
extern "C" void ext_006C2720();
extern "C" void ext_006C2BB0();
extern "C" void ext_006C3030();
extern "C" void ext_006C3250();
extern "C" void ext_006C32C0();
extern "C" void ext_006C9340();
extern "C" void ext_006C9370();
extern "C" void ext_006C9390();
extern "C" void ext_006C93B0();
extern "C" void ext_006C93D0();
extern "C" void ext_006C93F0();
extern "C" void ext_006C9410();
extern "C" void ext_006C9490();
extern "C" void ext_006C94B0();
extern "C" void ext_006C94D0();
extern "C" void ext_006C9500();
extern "C" void ext_006C9B70();
extern "C" void ext_006CA020();
extern "C" void ext_006CA140();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CD350();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2300();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D26D0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D9FC0();
extern "C" void ext_006DA370();
extern "C" void ext_006DABA0();
extern "C" void ext_006DC480();
extern "C" void ext_006E7460();
extern "C" void ext_00700990();
extern "C" void ext_00700A00();
extern "C" void ext_00714570();
extern "C" void ext_007709E0();
extern "C" void ext_007713B0();
extern "C" void ext_007714C0();
extern "C" void ext_0077FB40();
extern "C" void ext_007873F0();
extern "C" void ext_00787430();
extern "C" void ext_007A0470();
extern "C" __declspec(naked) void __fastcall fn_0076CED0(void* self, int edx_unused, int a0) {
    __asm {
            L_0076CED0: push ebp
            L_0076CED1: mov ebp, esp
            L_0076CED3: push -0x1
            L_0076CED5: push 0x8c0ca2
            L_0076CEDA: mov eax, dword ptr fs:[0x0]
            L_0076CEE0: push eax
            L_0076CEE1: mov dword ptr fs:[0x0], esp
            L_0076CEE8: sub esp, 0x32c
            L_0076CEEE: push ebx
            L_0076CEEF: push esi
            L_0076CEF0: mov esi, ecx
            L_0076CEF2: push edi
            L_0076CEF3: lea ecx, [ebp - 0x174]
            L_0076CEF9: mov dword ptr [ebp - 0x138], esi
            L_0076CEFF: call ext_006D2370
            L_0076CF04: xor edi, edi
            L_0076CF06: lea ecx, [ebp - 0x1d4]
            L_0076CF0C: mov dword ptr [ebp - 0x4], edi
            L_0076CF0F: call ext_006D2370
            L_0076CF14: lea ecx, [ebp - 0x1b4]
            L_0076CF1A: mov byte ptr [ebp - 0x4], 0x1
            L_0076CF1E: call ext_006D2370
            L_0076CF23: lea ecx, [ebp - 0x1f4]
            L_0076CF29: mov byte ptr [ebp - 0x4], 0x2
            L_0076CF2D: call ext_006D2370
            L_0076CF32: lea ecx, [ebp - 0x104]
            L_0076CF38: mov byte ptr [ebp - 0x4], 0x3
            L_0076CF3C: call ext_0077FB40
            L_0076CF41: push 0x4
            L_0076CF43: push 0x10
            L_0076CF45: lea ecx, [ebp - 0x70]
            L_0076CF48: mov byte ptr [ebp - 0x4], 0x4
            L_0076CF4C: mov dword ptr [ebp - 0x18], edi
            L_0076CF4F: call ext_006D2130
            L_0076CF54: lea eax, [ebp - 0x60]
            L_0076CF57: mov dword ptr [ebp - 0x5c], eax
            L_0076CF5A: push 0x4
            L_0076CF5C: push 0x10
            L_0076CF5E: lea ecx, [ebp - 0x98]
            L_0076CF64: mov byte ptr [ebp - 0x4], 0x5
            L_0076CF68: call ext_006D2130
            L_0076CF6D: lea ecx, [ebp - 0x88]
            L_0076CF73: mov dword ptr [ebp - 0x84], ecx
            L_0076CF79: push 0x4
            L_0076CF7B: push 0x10
            L_0076CF7D: lea ecx, [ebp - 0xb0]
            L_0076CF83: mov byte ptr [ebp - 0x4], 0x6
            L_0076CF87: call ext_006D2130
            L_0076CF8C: lea edx, [ebp - 0xa0]
            L_0076CF92: mov dword ptr [ebp - 0x9c], edx
            L_0076CF98: push 0x4
            L_0076CF9A: push 0x10
            L_0076CF9C: lea ecx, [ebp - 0x58]
            L_0076CF9F: mov byte ptr [ebp - 0x4], 0x7
            L_0076CFA3: call ext_006D2130
            L_0076CFA8: lea eax, [ebp - 0x48]
            L_0076CFAB: mov dword ptr [ebp - 0x44], eax
            L_0076CFAE: push 0x1
            L_0076CFB0: push 0x10
            L_0076CFB2: lea ecx, [ebp - 0x134]
            L_0076CFB8: mov byte ptr [ebp - 0x4], 0x8
            L_0076CFBC: call ext_006D2130
            L_0076CFC1: lea ecx, [ebp - 0x124]
            L_0076CFC7: mov dword ptr [ebp - 0x120], ecx
            L_0076CFCD: push 0x1
            L_0076CFCF: push 0x10
            L_0076CFD1: lea ecx, [ebp - 0x154]
            L_0076CFD7: mov byte ptr [ebp - 0x4], 0x9
            L_0076CFDB: call ext_006D2130
            L_0076CFE0: lea edx, [ebp - 0x144]
            L_0076CFE6: mov dword ptr [ebp - 0x140], edx
            L_0076CFEC: push 0x1
            L_0076CFEE: push 0x10
            L_0076CFF0: lea ecx, [ebp - 0x11c]
            L_0076CFF6: mov byte ptr [ebp - 0x4], 0xa
            L_0076CFFA: call ext_006D2130
            L_0076CFFF: lea eax, [ebp - 0x10c]
            L_0076D005: mov dword ptr [ebp - 0x108], eax
            L_0076D00B: push 0x1
            L_0076D00D: push 0x10
            L_0076D00F: lea ecx, [ebp - 0xe4]
            L_0076D015: mov byte ptr [ebp - 0x4], 0xb
            L_0076D019: call ext_006D2130
            L_0076D01E: lea ecx, [ebp - 0xd4]
            L_0076D024: mov dword ptr [ebp - 0xd0], ecx
            L_0076D02A: mov ebx, dword ptr [ebp + 0x8]
            L_0076D02D: mov byte ptr [ebp - 0x4], 0xc
            L_0076D031: cmp ebx, edi
            L_0076D033: mov dword ptr [ebp - 0x14], edi
            L_0076D036: mov dword ptr [ebp - 0x10], edi
            L_0076D039: mov dword ptr [ebp - 0xc0], edi
            L_0076D03F: mov dword ptr [ebp - 0xbc], edi
            L_0076D045: mov dword ptr [ebp - 0x80], edi
            L_0076D048: mov dword ptr [ebp - 0x7c], edi
            L_0076D04B: jne L_0076D126
            L_0076D051: lea ecx, [ebp - 0xe4]
            L_0076D057: mov byte ptr [ebp - 0x4], 0xb
            L_0076D05B: call ext_006D2160
            L_0076D060: lea ecx, [ebp - 0x11c]
            L_0076D066: mov byte ptr [ebp - 0x4], 0xa
            L_0076D06A: call ext_006D2160
            L_0076D06F: lea ecx, [ebp - 0x154]
            L_0076D075: mov byte ptr [ebp - 0x4], 0x9
            L_0076D079: call ext_006D2160
            L_0076D07E: lea ecx, [ebp - 0x134]
            L_0076D084: mov byte ptr [ebp - 0x4], 0x8
            L_0076D088: call ext_006D2160
            L_0076D08D: lea ecx, [ebp - 0x58]
            L_0076D090: mov byte ptr [ebp - 0x4], 0x7
            L_0076D094: call ext_006D2160
            L_0076D099: lea ecx, [ebp - 0xb0]
            L_0076D09F: mov byte ptr [ebp - 0x4], 0x6
            L_0076D0A3: call ext_006D2160
            L_0076D0A8: lea ecx, [ebp - 0x98]
            L_0076D0AE: mov byte ptr [ebp - 0x4], 0x5
            L_0076D0B2: call ext_006D2160
            L_0076D0B7: lea ecx, [ebp - 0x70]
            L_0076D0BA: mov byte ptr [ebp - 0x4], 0x4
            L_0076D0BE: call ext_006D2160
            L_0076D0C3: lea ecx, [ebp - 0x104]
            L_0076D0C9: mov byte ptr [ebp - 0x4], 0x3
            L_0076D0CD: call ext_006D80A0
            L_0076D0D2: lea ecx, [ebp - 0x1f4]
            L_0076D0D8: mov byte ptr [ebp - 0x4], 0x2
            L_0076D0DC: call ext_006D80A0
            L_0076D0E1: lea ecx, [ebp - 0x1b4]
            L_0076D0E7: mov byte ptr [ebp - 0x4], 0x1
            L_0076D0EB: call ext_006D80A0
            L_0076D0F0: lea ecx, [ebp - 0x1d4]
            L_0076D0F6: mov byte ptr [ebp - 0x4], 0x0
            L_0076D0FA: call ext_006D80A0
            L_0076D0FF: lea ecx, [ebp - 0x174]
            L_0076D105: mov dword ptr [ebp - 0x4], 0xffffffff
            L_0076D10C: call ext_006D80A0
            L_0076D111: pop edi
            L_0076D112: pop esi
            L_0076D113: xor eax, eax
            L_0076D115: pop ebx
            L_0076D116: mov ecx, dword ptr [ebp - 0xc]
            L_0076D119: mov dword ptr fs:[0x0], ecx
            L_0076D120: mov esp, ebp
            L_0076D122: pop ebp
            L_0076D123: ret 0x4
            L_0076D126: push 0x3
            L_0076D128: lea ecx, [ebp - 0x70]
            L_0076D12B: call ext_006D2300
            L_0076D130: push 0x3
            L_0076D132: lea ecx, [ebp - 0x98]
            L_0076D138: call ext_006D2300
            L_0076D13D: push 0x3
            L_0076D13F: lea ecx, [ebp - 0xb0]
            L_0076D145: call ext_006D2300
            L_0076D14A: push 0x3
            L_0076D14C: lea ecx, [ebp - 0x58]
            L_0076D14F: call ext_006D2300
            L_0076D154: push 0x3
            L_0076D156: lea ecx, [ebp - 0x134]
            L_0076D15C: call ext_006D2300
            L_0076D161: push 0x3
            L_0076D163: lea ecx, [ebp - 0x154]
            L_0076D169: call ext_006D2300
            L_0076D16E: push 0x3
            L_0076D170: lea ecx, [ebp - 0x11c]
            L_0076D176: call ext_006D2300
            L_0076D17B: push 0x3
            L_0076D17D: lea ecx, [ebp - 0xe4]
            L_0076D183: call ext_006D2300
            L_0076D188: xor eax, eax
            L_0076D18A: mov edx, dword ptr [ebp - 0x124]
            L_0076D190: inc eax
            L_0076D191: cmp eax, 0x3
            L_0076D194: mov byte ptr [edx + eax - 0x1], 0x0
            L_0076D199: mov ecx, dword ptr [ebp - 0x144]
            L_0076D19F: mov byte ptr [ecx + eax - 0x1], 0x0
            L_0076D1A4: mov edx, dword ptr [ebp - 0x10c]
            L_0076D1AA: mov byte ptr [edx + eax - 0x1], 0x0
            L_0076D1AF: mov ecx, dword ptr [ebp - 0xd4]
            L_0076D1B5: mov byte ptr [ecx + eax - 0x1], 0x0
            L_0076D1BA: jl L_0076D18A
            L_0076D1BC: mov al, byte ptr [esi + 0x300]
            L_0076D1C2: mov byte ptr [ebp + 0xb], 0x0
            L_0076D1C6: test al, al
            L_0076D1C8: je L_0076DADE
            L_0076D1CE: lea edx, [ebp - 0x80]
            L_0076D1D1: lea eax, [ebp - 0xc0]
            L_0076D1D7: push edx
            L_0076D1D8: push eax
            L_0076D1D9: mov ecx, ebx
            L_0076D1DB: call ext_006DC480
            L_0076D1E0: mov ecx, eax
            L_0076D1E2: call ext_006C9340
            L_0076D1E7: push 0x6
            L_0076D1E9: push 0x1
            L_0076D1EB: lea ecx, [ebp - 0x80]
            L_0076D1EE: call ext_006DABA0
            L_0076D1F3: inc eax
            L_0076D1F4: mov ecx, ebx
            L_0076D1F6: mov dword ptr [ebp - 0x30], eax
            L_0076D1F9: call ext_006DC480
            L_0076D1FE: mov ecx, eax
            L_0076D200: call ext_006C9370
            L_0076D205: mov ecx, dword ptr [ebp - 0x60]
            L_0076D208: mov dword ptr [ecx], eax
            L_0076D20A: mov ecx, ebx
            L_0076D20C: call ext_006DC480
            L_0076D211: mov ecx, eax
            L_0076D213: call ext_006C9390
            L_0076D218: mov edx, dword ptr [ebp - 0x60]
            L_0076D21B: mov ecx, ebx
            L_0076D21D: mov dword ptr [edx + 0x4], eax
            L_0076D220: call ext_006DC480
            L_0076D225: mov ecx, eax
            L_0076D227: call ext_006C93B0
            L_0076D22C: mov ecx, dword ptr [ebp - 0x60]
            L_0076D22F: mov dword ptr [ecx + 0x8], eax
            L_0076D232: mov ecx, ebx
            L_0076D234: call ext_006DC480
            L_0076D239: mov ecx, eax
            L_0076D23B: call ext_006C93D0
            L_0076D240: mov edx, dword ptr [ebp - 0x88]
            L_0076D246: mov ecx, ebx
            L_0076D248: mov dword ptr [edx], eax
            L_0076D24A: call ext_006DC480
            L_0076D24F: mov ecx, eax
            L_0076D251: call ext_006C93F0
            L_0076D256: mov ecx, dword ptr [ebp - 0x88]
            L_0076D25C: mov dword ptr [ecx + 0x4], eax
            L_0076D25F: mov ecx, ebx
            L_0076D261: call ext_006DC480
            L_0076D266: mov ecx, eax
            L_0076D268: call ext_006C9410
            L_0076D26D: mov edx, dword ptr [ebp - 0x88]
            L_0076D273: mov ecx, ebx
            L_0076D275: mov dword ptr [edx + 0x8], eax
            L_0076D278: call ext_006DC480
            L_0076D27D: mov ecx, eax
            L_0076D27F: call ext_006C9490
            L_0076D284: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D28A: mov dword ptr [ecx], eax
            L_0076D28C: mov ecx, ebx
            L_0076D28E: call ext_006DC480
            L_0076D293: mov ecx, eax
            L_0076D295: call ext_006C94B0
            L_0076D29A: mov edx, dword ptr [ebp - 0xa0]
            L_0076D2A0: mov ecx, ebx
            L_0076D2A2: mov dword ptr [edx + 0x4], eax
            L_0076D2A5: call ext_006DC480
            L_0076D2AA: mov ecx, eax
            L_0076D2AC: call ext_006C94D0
            L_0076D2B1: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D2B7: mov dword ptr [ecx + 0x8], eax
            L_0076D2BA: mov ecx, ebx
            L_0076D2BC: call ext_006DC480
            L_0076D2C1: mov ecx, eax
            L_0076D2C3: call ext_006C9500
            L_0076D2C8: mov edx, dword ptr [ebp - 0x60]
            L_0076D2CB: mov dword ptr [ebp - 0xc4], eax
            L_0076D2D1: mov ecx, dword ptr [edx]
            L_0076D2D3: call ext_006CA6A0
            L_0076D2D8: cmp eax, edi
            L_0076D2DA: jne L_0076D37B
            L_0076D2E0: push 0x6
            L_0076D2E2: push edi
            L_0076D2E3: push edi
            L_0076D2E4: push edi
            L_0076D2E5: push edi
            L_0076D2E6: push edi
            L_0076D2E7: lea ecx, [ebp - 0x14]
            L_0076D2EA: call ext_006DA370
            L_0076D2EF: lea eax, [ebp - 0x174]
            L_0076D2F5: mov ecx, ebx
            L_0076D2F7: push eax
            L_0076D2F8: call ext_006C3250
            L_0076D2FD: push 0x98
            L_0076D302: call ext_006A5C62
            L_0076D307: add esp, 0x4
            L_0076D30A: mov dword ptr [ebp - 0x20], eax
            L_0076D30D: cmp eax, edi
            L_0076D30F: mov byte ptr [ebp - 0x4], 0xd
            L_0076D313: je L_0076D31E
            L_0076D315: mov ecx, eax
            L_0076D317: call ext_006CA140
            L_0076D31C: jmp L_0076D320
            L_0076D31E: xor eax, eax
            L_0076D320: mov ecx, dword ptr [ebp - 0x60]
            L_0076D323: push 0x1
            L_0076D325: mov byte ptr [ebp - 0x4], 0xc
            L_0076D329: mov dword ptr [ecx], eax
            L_0076D32B: mov edx, dword ptr [ebp - 0x124]
            L_0076D331: mov byte ptr [edx], 0x1
            L_0076D334: mov eax, dword ptr [ebp - 0x60]
            L_0076D337: mov ecx, dword ptr [eax]
            L_0076D339: call ext_006CA500
            L_0076D33E: mov ecx, dword ptr [ebp - 0x60]
            L_0076D341: push edi
            L_0076D342: mov ecx, dword ptr [ecx]
            L_0076D344: call ext_006CA020
            L_0076D349: push edi
            L_0076D34A: push edi
            L_0076D34B: push edi
            L_0076D34C: push edi
            L_0076D34D: lea ecx, [ebp - 0x174]
            L_0076D353: mov esi, eax
            L_0076D355: call ext_006D23F0
            L_0076D35A: fld qword ptr [eax]
            L_0076D35C: mov edx, dword ptr [ebp - 0x10]
            L_0076D35F: mov eax, dword ptr [ebp - 0x14]
            L_0076D362: push ecx
            L_0076D363: mov ecx, esi
            L_0076D365: fstp dword ptr [esp]
            L_0076D368: push edx
            L_0076D369: push eax
            L_0076D36A: call ext_006C9B70
            L_0076D36F: mov ecx, dword ptr [ebp - 0x60]
            L_0076D372: push 0x1
            L_0076D374: mov ecx, dword ptr [ecx]
            L_0076D376: call ext_006CA540
            L_0076D37B: mov edx, dword ptr [ebp - 0x60]
            L_0076D37E: mov ecx, dword ptr [edx + 0x4]
            L_0076D381: call ext_006CA6A0
            L_0076D386: cmp eax, edi
            L_0076D388: jne L_0076D42F
            L_0076D38E: push 0x6
            L_0076D390: push edi
            L_0076D391: push edi
            L_0076D392: push edi
            L_0076D393: push edi
            L_0076D394: push edi
            L_0076D395: lea ecx, [ebp - 0x14]
            L_0076D398: call ext_006DA370
            L_0076D39D: lea eax, [ebp - 0x174]
            L_0076D3A3: mov ecx, ebx
            L_0076D3A5: push eax
            L_0076D3A6: call ext_006C3250
            L_0076D3AB: push 0x98
            L_0076D3B0: call ext_006A5C62
            L_0076D3B5: add esp, 0x4
            L_0076D3B8: mov dword ptr [ebp - 0x20], eax
            L_0076D3BB: cmp eax, edi
            L_0076D3BD: mov byte ptr [ebp - 0x4], 0xe
            L_0076D3C1: je L_0076D3CC
            L_0076D3C3: mov ecx, eax
            L_0076D3C5: call ext_006CA140
            L_0076D3CA: jmp L_0076D3CE
            L_0076D3CC: xor eax, eax
            L_0076D3CE: mov ecx, dword ptr [ebp - 0x60]
            L_0076D3D1: push 0x1
            L_0076D3D3: mov byte ptr [ebp - 0x4], 0xc
            L_0076D3D7: mov dword ptr [ecx + 0x4], eax
            L_0076D3DA: mov edx, dword ptr [ebp - 0x124]
            L_0076D3E0: mov byte ptr [edx + 0x1], 0x1
            L_0076D3E4: mov eax, dword ptr [ebp - 0x60]
            L_0076D3E7: mov ecx, dword ptr [eax + 0x4]
            L_0076D3EA: call ext_006CA500
            L_0076D3EF: mov ecx, dword ptr [ebp - 0x60]
            L_0076D3F2: push edi
            L_0076D3F3: mov ecx, dword ptr [ecx + 0x4]
            L_0076D3F6: call ext_006CA020
            L_0076D3FB: push edi
            L_0076D3FC: push edi
            L_0076D3FD: push edi
            L_0076D3FE: push 0x1
            L_0076D400: lea ecx, [ebp - 0x174]
            L_0076D406: mov esi, eax
            L_0076D408: call ext_006D23F0
            L_0076D40D: fld qword ptr [eax]
            L_0076D40F: mov edx, dword ptr [ebp - 0x10]
            L_0076D412: mov eax, dword ptr [ebp - 0x14]
            L_0076D415: push ecx
            L_0076D416: mov ecx, esi
            L_0076D418: fstp dword ptr [esp]
            L_0076D41B: push edx
            L_0076D41C: push eax
            L_0076D41D: call ext_006C9B70
            L_0076D422: mov ecx, dword ptr [ebp - 0x60]
            L_0076D425: push 0x1
            L_0076D427: mov ecx, dword ptr [ecx + 0x4]
            L_0076D42A: call ext_006CA540
            L_0076D42F: mov edx, dword ptr [ebp - 0x60]
            L_0076D432: mov ecx, dword ptr [edx + 0x8]
            L_0076D435: call ext_006CA6A0
            L_0076D43A: cmp eax, edi
            L_0076D43C: jne L_0076D4E3
            L_0076D442: push 0x6
            L_0076D444: push edi
            L_0076D445: push edi
            L_0076D446: push edi
            L_0076D447: push edi
            L_0076D448: push edi
            L_0076D449: lea ecx, [ebp - 0x14]
            L_0076D44C: call ext_006DA370
            L_0076D451: lea eax, [ebp - 0x174]
            L_0076D457: mov ecx, ebx
            L_0076D459: push eax
            L_0076D45A: call ext_006C3250
            L_0076D45F: push 0x98
            L_0076D464: call ext_006A5C62
            L_0076D469: add esp, 0x4
            L_0076D46C: mov dword ptr [ebp - 0x20], eax
            L_0076D46F: cmp eax, edi
            L_0076D471: mov byte ptr [ebp - 0x4], 0xf
            L_0076D475: je L_0076D480
            L_0076D477: mov ecx, eax
            L_0076D479: call ext_006CA140
            L_0076D47E: jmp L_0076D482
            L_0076D480: xor eax, eax
            L_0076D482: mov ecx, dword ptr [ebp - 0x60]
            L_0076D485: push 0x1
            L_0076D487: mov byte ptr [ebp - 0x4], 0xc
            L_0076D48B: mov dword ptr [ecx + 0x8], eax
            L_0076D48E: mov edx, dword ptr [ebp - 0x124]
            L_0076D494: mov byte ptr [edx + 0x2], 0x1
            L_0076D498: mov eax, dword ptr [ebp - 0x60]
            L_0076D49B: mov ecx, dword ptr [eax + 0x8]
            L_0076D49E: call ext_006CA500
            L_0076D4A3: mov ecx, dword ptr [ebp - 0x60]
            L_0076D4A6: push edi
            L_0076D4A7: mov ecx, dword ptr [ecx + 0x8]
            L_0076D4AA: call ext_006CA020
            L_0076D4AF: push edi
            L_0076D4B0: push edi
            L_0076D4B1: push edi
            L_0076D4B2: push 0x2
            L_0076D4B4: lea ecx, [ebp - 0x174]
            L_0076D4BA: mov esi, eax
            L_0076D4BC: call ext_006D23F0
            L_0076D4C1: fld qword ptr [eax]
            L_0076D4C3: mov edx, dword ptr [ebp - 0x10]
            L_0076D4C6: mov eax, dword ptr [ebp - 0x14]
            L_0076D4C9: push ecx
            L_0076D4CA: mov ecx, esi
            L_0076D4CC: fstp dword ptr [esp]
            L_0076D4CF: push edx
            L_0076D4D0: push eax
            L_0076D4D1: call ext_006C9B70
            L_0076D4D6: mov ecx, dword ptr [ebp - 0x60]
            L_0076D4D9: push 0x1
            L_0076D4DB: mov ecx, dword ptr [ecx + 0x8]
            L_0076D4DE: call ext_006CA540
            L_0076D4E3: mov edx, dword ptr [ebp - 0x88]
            L_0076D4E9: mov ecx, dword ptr [edx]
            L_0076D4EB: call ext_006CA6A0
            L_0076D4F0: cmp eax, edi
            L_0076D4F2: jne L_0076D59F
            L_0076D4F8: push 0x6
            L_0076D4FA: push edi
            L_0076D4FB: push edi
            L_0076D4FC: push edi
            L_0076D4FD: push edi
            L_0076D4FE: push edi
            L_0076D4FF: lea ecx, [ebp - 0x14]
            L_0076D502: call ext_006DA370
            L_0076D507: lea eax, [ebp - 0x1d4]
            L_0076D50D: mov ecx, ebx
            L_0076D50F: push eax
            L_0076D510: call ext_006C32C0
            L_0076D515: push 0x98
            L_0076D51A: call ext_006A5C62
            L_0076D51F: add esp, 0x4
            L_0076D522: mov dword ptr [ebp - 0x20], eax
            L_0076D525: cmp eax, edi
            L_0076D527: mov byte ptr [ebp - 0x4], 0x10
            L_0076D52B: je L_0076D536
            L_0076D52D: mov ecx, eax
            L_0076D52F: call ext_006CA140
            L_0076D534: jmp L_0076D538
            L_0076D536: xor eax, eax
            L_0076D538: mov ecx, dword ptr [ebp - 0x88]
            L_0076D53E: push 0x1
            L_0076D540: mov byte ptr [ebp - 0x4], 0xc
            L_0076D544: mov dword ptr [ecx], eax
            L_0076D546: mov edx, dword ptr [ebp - 0x144]
            L_0076D54C: mov byte ptr [edx], 0x1
            L_0076D54F: mov eax, dword ptr [ebp - 0x88]
            L_0076D555: mov ecx, dword ptr [eax]
            L_0076D557: call ext_006CA500
            L_0076D55C: mov ecx, dword ptr [ebp - 0x88]
            L_0076D562: push edi
            L_0076D563: mov ecx, dword ptr [ecx]
            L_0076D565: call ext_006CA020
            L_0076D56A: push edi
            L_0076D56B: push edi
            L_0076D56C: push edi
            L_0076D56D: push edi
            L_0076D56E: lea ecx, [ebp - 0x1d4]
            L_0076D574: mov esi, eax
            L_0076D576: call ext_006D23F0
            L_0076D57B: fld qword ptr [eax]
            L_0076D57D: mov edx, dword ptr [ebp - 0x10]
            L_0076D580: mov eax, dword ptr [ebp - 0x14]
            L_0076D583: push ecx
            L_0076D584: mov ecx, esi
            L_0076D586: fstp dword ptr [esp]
            L_0076D589: push edx
            L_0076D58A: push eax
            L_0076D58B: call ext_006C9B70
            L_0076D590: mov ecx, dword ptr [ebp - 0x88]
            L_0076D596: push 0x1
            L_0076D598: mov ecx, dword ptr [ecx]
            L_0076D59A: call ext_006CA540
            L_0076D59F: mov edx, dword ptr [ebp - 0x88]
            L_0076D5A5: mov ecx, dword ptr [edx + 0x4]
            L_0076D5A8: call ext_006CA6A0
            L_0076D5AD: cmp eax, edi
            L_0076D5AF: jne L_0076D662
            L_0076D5B5: push 0x6
            L_0076D5B7: push edi
            L_0076D5B8: push edi
            L_0076D5B9: push edi
            L_0076D5BA: push edi
            L_0076D5BB: push edi
            L_0076D5BC: lea ecx, [ebp - 0x14]
            L_0076D5BF: call ext_006DA370
            L_0076D5C4: lea eax, [ebp - 0x1d4]
            L_0076D5CA: mov ecx, ebx
            L_0076D5CC: push eax
            L_0076D5CD: call ext_006C32C0
            L_0076D5D2: push 0x98
            L_0076D5D7: call ext_006A5C62
            L_0076D5DC: add esp, 0x4
            L_0076D5DF: mov dword ptr [ebp - 0x20], eax
            L_0076D5E2: cmp eax, edi
            L_0076D5E4: mov byte ptr [ebp - 0x4], 0x11
            L_0076D5E8: je L_0076D5F3
            L_0076D5EA: mov ecx, eax
            L_0076D5EC: call ext_006CA140
            L_0076D5F1: jmp L_0076D5F5
            L_0076D5F3: xor eax, eax
            L_0076D5F5: mov ecx, dword ptr [ebp - 0x88]
            L_0076D5FB: push 0x1
            L_0076D5FD: mov byte ptr [ebp - 0x4], 0xc
            L_0076D601: mov dword ptr [ecx + 0x4], eax
            L_0076D604: mov edx, dword ptr [ebp - 0x144]
            L_0076D60A: mov byte ptr [edx + 0x1], 0x1
            L_0076D60E: mov eax, dword ptr [ebp - 0x88]
            L_0076D614: mov ecx, dword ptr [eax + 0x4]
            L_0076D617: call ext_006CA500
            L_0076D61C: mov ecx, dword ptr [ebp - 0x88]
            L_0076D622: push edi
            L_0076D623: mov ecx, dword ptr [ecx + 0x4]
            L_0076D626: call ext_006CA020
            L_0076D62B: push edi
            L_0076D62C: push edi
            L_0076D62D: push edi
            L_0076D62E: push 0x1
            L_0076D630: lea ecx, [ebp - 0x1d4]
            L_0076D636: mov esi, eax
            L_0076D638: call ext_006D23F0
            L_0076D63D: fld qword ptr [eax]
            L_0076D63F: mov edx, dword ptr [ebp - 0x10]
            L_0076D642: mov eax, dword ptr [ebp - 0x14]
            L_0076D645: push ecx
            L_0076D646: mov ecx, esi
            L_0076D648: fstp dword ptr [esp]
            L_0076D64B: push edx
            L_0076D64C: push eax
            L_0076D64D: call ext_006C9B70
            L_0076D652: mov ecx, dword ptr [ebp - 0x88]
            L_0076D658: push 0x1
            L_0076D65A: mov ecx, dword ptr [ecx + 0x4]
            L_0076D65D: call ext_006CA540
            L_0076D662: mov edx, dword ptr [ebp - 0x88]
            L_0076D668: mov ecx, dword ptr [edx + 0x8]
            L_0076D66B: call ext_006CA6A0
            L_0076D670: cmp eax, edi
            L_0076D672: jne L_0076D725
            L_0076D678: push 0x6
            L_0076D67A: push edi
            L_0076D67B: push edi
            L_0076D67C: push edi
            L_0076D67D: push edi
            L_0076D67E: push edi
            L_0076D67F: lea ecx, [ebp - 0x14]
            L_0076D682: call ext_006DA370
            L_0076D687: lea eax, [ebp - 0x1d4]
            L_0076D68D: mov ecx, ebx
            L_0076D68F: push eax
            L_0076D690: call ext_006C32C0
            L_0076D695: push 0x98
            L_0076D69A: call ext_006A5C62
            L_0076D69F: add esp, 0x4
            L_0076D6A2: mov dword ptr [ebp - 0x20], eax
            L_0076D6A5: cmp eax, edi
            L_0076D6A7: mov byte ptr [ebp - 0x4], 0x12
            L_0076D6AB: je L_0076D6B6
            L_0076D6AD: mov ecx, eax
            L_0076D6AF: call ext_006CA140
            L_0076D6B4: jmp L_0076D6B8
            L_0076D6B6: xor eax, eax
            L_0076D6B8: mov ecx, dword ptr [ebp - 0x88]
            L_0076D6BE: push 0x1
            L_0076D6C0: mov byte ptr [ebp - 0x4], 0xc
            L_0076D6C4: mov dword ptr [ecx + 0x8], eax
            L_0076D6C7: mov edx, dword ptr [ebp - 0x144]
            L_0076D6CD: mov byte ptr [edx + 0x2], 0x1
            L_0076D6D1: mov eax, dword ptr [ebp - 0x88]
            L_0076D6D7: mov ecx, dword ptr [eax + 0x8]
            L_0076D6DA: call ext_006CA500
            L_0076D6DF: mov ecx, dword ptr [ebp - 0x88]
            L_0076D6E5: push edi
            L_0076D6E6: mov ecx, dword ptr [ecx + 0x8]
            L_0076D6E9: call ext_006CA020
            L_0076D6EE: push edi
            L_0076D6EF: push edi
            L_0076D6F0: push edi
            L_0076D6F1: push 0x2
            L_0076D6F3: lea ecx, [ebp - 0x1d4]
            L_0076D6F9: mov esi, eax
            L_0076D6FB: call ext_006D23F0
            L_0076D700: fld qword ptr [eax]
            L_0076D702: mov edx, dword ptr [ebp - 0x10]
            L_0076D705: mov eax, dword ptr [ebp - 0x14]
            L_0076D708: push ecx
            L_0076D709: mov ecx, esi
            L_0076D70B: fstp dword ptr [esp]
            L_0076D70E: push edx
            L_0076D70F: push eax
            L_0076D710: call ext_006C9B70
            L_0076D715: mov ecx, dword ptr [ebp - 0x88]
            L_0076D71B: push 0x1
            L_0076D71D: mov ecx, dword ptr [ecx + 0x8]
            L_0076D720: call ext_006CA540
            L_0076D725: mov edx, dword ptr [ebp - 0xa0]
            L_0076D72B: mov ecx, dword ptr [edx]
            L_0076D72D: call ext_006CA6A0
            L_0076D732: cmp eax, edi
            L_0076D734: jne L_0076D805
            L_0076D73A: push 0x6
            L_0076D73C: push edi
            L_0076D73D: push edi
            L_0076D73E: push edi
            L_0076D73F: push edi
            L_0076D740: push edi
            L_0076D741: lea ecx, [ebp - 0x14]
            L_0076D744: call ext_006DA370
            L_0076D749: lea eax, [ebp - 0x104]
            L_0076D74F: mov ecx, ebx
            L_0076D751: push eax
            L_0076D752: call ext_006C3030
            L_0076D757: mov ecx, eax
            L_0076D759: call ext_00700990
            L_0076D75E: push edi
            L_0076D75F: lea ecx, [ebp - 0x1b4]
            L_0076D765: call ext_006D23F0
            L_0076D76A: mov ecx, dword ptr [ebp - 0x104]
            L_0076D770: mov edx, dword ptr [ebp - 0x100]
            L_0076D776: mov dword ptr [eax], ecx
            L_0076D778: push 0x98
            L_0076D77D: mov dword ptr [eax + 0x4], edx
            L_0076D780: call ext_006A5C62
            L_0076D785: add esp, 0x4
            L_0076D788: mov dword ptr [ebp - 0x20], eax
            L_0076D78B: cmp eax, edi
            L_0076D78D: mov byte ptr [ebp - 0x4], 0x13
            L_0076D791: je L_0076D79C
            L_0076D793: mov ecx, eax
            L_0076D795: call ext_006CA140
            L_0076D79A: jmp L_0076D79E
            L_0076D79C: xor eax, eax
            L_0076D79E: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D7A4: push 0x1
            L_0076D7A6: mov byte ptr [ebp - 0x4], 0xc
            L_0076D7AA: mov dword ptr [ecx], eax
            L_0076D7AC: mov edx, dword ptr [ebp - 0x10c]
            L_0076D7B2: mov byte ptr [edx], 0x1
            L_0076D7B5: mov eax, dword ptr [ebp - 0xa0]
            L_0076D7BB: mov ecx, dword ptr [eax]
            L_0076D7BD: call ext_006CA500
            L_0076D7C2: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D7C8: push edi
            L_0076D7C9: mov ecx, dword ptr [ecx]
            L_0076D7CB: call ext_006CA020
            L_0076D7D0: push edi
            L_0076D7D1: push edi
            L_0076D7D2: push edi
            L_0076D7D3: push edi
            L_0076D7D4: lea ecx, [ebp - 0x1b4]
            L_0076D7DA: mov esi, eax
            L_0076D7DC: call ext_006D23F0
            L_0076D7E1: fld qword ptr [eax]
            L_0076D7E3: mov edx, dword ptr [ebp - 0x10]
            L_0076D7E6: mov eax, dword ptr [ebp - 0x14]
            L_0076D7E9: push ecx
            L_0076D7EA: mov ecx, esi
            L_0076D7EC: fstp dword ptr [esp]
            L_0076D7EF: push edx
            L_0076D7F0: push eax
            L_0076D7F1: call ext_006C9B70
            L_0076D7F6: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D7FC: push 0x1
            L_0076D7FE: mov ecx, dword ptr [ecx]
            L_0076D800: call ext_006CA540
            L_0076D805: mov edx, dword ptr [ebp - 0xa0]
            L_0076D80B: mov ecx, dword ptr [edx + 0x4]
            L_0076D80E: call ext_006CA6A0
            L_0076D813: cmp eax, edi
            L_0076D815: jne L_0076D8ED
            L_0076D81B: push 0x6
            L_0076D81D: push edi
            L_0076D81E: push edi
            L_0076D81F: push edi
            L_0076D820: push edi
            L_0076D821: push edi
            L_0076D822: lea ecx, [ebp - 0x14]
            L_0076D825: call ext_006DA370
            L_0076D82A: lea eax, [ebp - 0x104]
            L_0076D830: mov ecx, ebx
            L_0076D832: push eax
            L_0076D833: call ext_006C3030
            L_0076D838: mov ecx, eax
            L_0076D83A: call ext_00700990
            L_0076D83F: push 0x1
            L_0076D841: lea ecx, [ebp - 0x1b4]
            L_0076D847: call ext_006D23F0
            L_0076D84C: mov ecx, dword ptr [ebp - 0xfc]
            L_0076D852: mov edx, dword ptr [ebp - 0xf8]
            L_0076D858: mov dword ptr [eax], ecx
            L_0076D85A: push 0x98
            L_0076D85F: mov dword ptr [eax + 0x4], edx
            L_0076D862: call ext_006A5C62
            L_0076D867: add esp, 0x4
            L_0076D86A: mov dword ptr [ebp - 0x20], eax
            L_0076D86D: cmp eax, edi
            L_0076D86F: mov byte ptr [ebp - 0x4], 0x14
            L_0076D873: je L_0076D87E
            L_0076D875: mov ecx, eax
            L_0076D877: call ext_006CA140
            L_0076D87C: jmp L_0076D880
            L_0076D87E: xor eax, eax
            L_0076D880: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D886: push 0x1
            L_0076D888: mov byte ptr [ebp - 0x4], 0xc
            L_0076D88C: mov dword ptr [ecx + 0x4], eax
            L_0076D88F: mov edx, dword ptr [ebp - 0x10c]
            L_0076D895: mov byte ptr [edx + 0x1], 0x1
            L_0076D899: mov eax, dword ptr [ebp - 0xa0]
            L_0076D89F: mov ecx, dword ptr [eax + 0x4]
            L_0076D8A2: call ext_006CA500
            L_0076D8A7: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D8AD: push edi
            L_0076D8AE: mov ecx, dword ptr [ecx + 0x4]
            L_0076D8B1: call ext_006CA020
            L_0076D8B6: push edi
            L_0076D8B7: push edi
            L_0076D8B8: push edi
            L_0076D8B9: push 0x1
            L_0076D8BB: lea ecx, [ebp - 0x1b4]
            L_0076D8C1: mov esi, eax
            L_0076D8C3: call ext_006D23F0
            L_0076D8C8: fld qword ptr [eax]
            L_0076D8CA: mov edx, dword ptr [ebp - 0x10]
            L_0076D8CD: mov eax, dword ptr [ebp - 0x14]
            L_0076D8D0: push ecx
            L_0076D8D1: mov ecx, esi
            L_0076D8D3: fstp dword ptr [esp]
            L_0076D8D6: push edx
            L_0076D8D7: push eax
            L_0076D8D8: call ext_006C9B70
            L_0076D8DD: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D8E3: push 0x1
            L_0076D8E5: mov ecx, dword ptr [ecx + 0x4]
            L_0076D8E8: call ext_006CA540
            L_0076D8ED: mov edx, dword ptr [ebp - 0xa0]
            L_0076D8F3: mov ecx, dword ptr [edx + 0x8]
            L_0076D8F6: call ext_006CA6A0
            L_0076D8FB: cmp eax, edi
            L_0076D8FD: jne L_0076D9D5
            L_0076D903: push 0x6
            L_0076D905: push edi
            L_0076D906: push edi
            L_0076D907: push edi
            L_0076D908: push edi
            L_0076D909: push edi
            L_0076D90A: lea ecx, [ebp - 0x14]
            L_0076D90D: call ext_006DA370
            L_0076D912: lea eax, [ebp - 0x104]
            L_0076D918: mov ecx, ebx
            L_0076D91A: push eax
            L_0076D91B: call ext_006C3030
            L_0076D920: mov ecx, eax
            L_0076D922: call ext_00700990
            L_0076D927: push 0x2
            L_0076D929: lea ecx, [ebp - 0x1b4]
            L_0076D92F: call ext_006D23F0
            L_0076D934: mov ecx, dword ptr [ebp - 0xf4]
            L_0076D93A: mov edx, dword ptr [ebp - 0xf0]
            L_0076D940: mov dword ptr [eax], ecx
            L_0076D942: push 0x98
            L_0076D947: mov dword ptr [eax + 0x4], edx
            L_0076D94A: call ext_006A5C62
            L_0076D94F: add esp, 0x4
            L_0076D952: mov dword ptr [ebp - 0x20], eax
            L_0076D955: cmp eax, edi
            L_0076D957: mov byte ptr [ebp - 0x4], 0x15
            L_0076D95B: je L_0076D966
            L_0076D95D: mov ecx, eax
            L_0076D95F: call ext_006CA140
            L_0076D964: jmp L_0076D968
            L_0076D966: xor eax, eax
            L_0076D968: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D96E: push 0x1
            L_0076D970: mov byte ptr [ebp - 0x4], 0xc
            L_0076D974: mov dword ptr [ecx + 0x8], eax
            L_0076D977: mov edx, dword ptr [ebp - 0x10c]
            L_0076D97D: mov byte ptr [edx + 0x2], 0x1
            L_0076D981: mov eax, dword ptr [ebp - 0xa0]
            L_0076D987: mov ecx, dword ptr [eax + 0x8]
            L_0076D98A: call ext_006CA500
            L_0076D98F: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D995: push edi
            L_0076D996: mov ecx, dword ptr [ecx + 0x8]
            L_0076D999: call ext_006CA020
            L_0076D99E: push edi
            L_0076D99F: push edi
            L_0076D9A0: push edi
            L_0076D9A1: push 0x2
            L_0076D9A3: lea ecx, [ebp - 0x1b4]
            L_0076D9A9: mov esi, eax
            L_0076D9AB: call ext_006D23F0
            L_0076D9B0: fld qword ptr [eax]
            L_0076D9B2: mov edx, dword ptr [ebp - 0x10]
            L_0076D9B5: mov eax, dword ptr [ebp - 0x14]
            L_0076D9B8: push ecx
            L_0076D9B9: mov ecx, esi
            L_0076D9BB: fstp dword ptr [esp]
            L_0076D9BE: push edx
            L_0076D9BF: push eax
            L_0076D9C0: call ext_006C9B70
            L_0076D9C5: mov ecx, dword ptr [ebp - 0xa0]
            L_0076D9CB: push 0x1
            L_0076D9CD: mov ecx, dword ptr [ecx + 0x8]
            L_0076D9D0: call ext_006CA540
            L_0076D9D5: mov ecx, dword ptr [ebp - 0xc4]
            L_0076D9DB: call ext_006CA6A0
            L_0076D9E0: cmp eax, edi
            L_0076D9E2: jne L_0076DA6E
            L_0076D9E8: push 0x6
            L_0076D9EA: push edi
            L_0076D9EB: push edi
            L_0076D9EC: push edi
            L_0076D9ED: push edi
            L_0076D9EE: push edi
            L_0076D9EF: lea ecx, [ebp - 0x14]
            L_0076D9F2: call ext_006DA370
            L_0076D9F7: mov ecx, ebx
            L_0076D9F9: call ext_006C3030
            L_0076D9FE: mov ecx, eax
            L_0076DA00: call ext_00700A00
            L_0076DA05: fstp qword ptr [ebp - 0x2c]
            L_0076DA08: push 0x98
            L_0076DA0D: call ext_006A5C62
            L_0076DA12: add esp, 0x4
            L_0076DA15: mov dword ptr [ebp + 0x8], eax
            L_0076DA18: cmp eax, edi
            L_0076DA1A: mov byte ptr [ebp - 0x4], 0x16
            L_0076DA1E: je L_0076DA2B
            L_0076DA20: mov ecx, eax
            L_0076DA22: call ext_006CA140
            L_0076DA27: mov esi, eax
            L_0076DA29: jmp L_0076DA2D
            L_0076DA2B: xor esi, esi
            L_0076DA2D: push 0x1
            L_0076DA2F: mov ecx, esi
            L_0076DA31: mov byte ptr [ebp - 0x4], 0xc
            L_0076DA35: mov dword ptr [ebp - 0xc4], esi
            L_0076DA3B: mov byte ptr [ebp + 0xb], 0x1
            L_0076DA3F: call ext_006CA500
            L_0076DA44: push edi
            L_0076DA45: mov ecx, esi
            L_0076DA47: call ext_006CA020
            L_0076DA4C: fld qword ptr [ebp - 0x2c]
            L_0076DA4F: mov edx, dword ptr [ebp - 0x10]
            L_0076DA52: push edi
            L_0076DA53: push edi
            L_0076DA54: push edi
            L_0076DA55: push ecx
            L_0076DA56: mov ecx, dword ptr [ebp - 0x14]
            L_0076DA59: fstp dword ptr [esp]
            L_0076DA5C: push edx
            L_0076DA5D: push ecx
            L_0076DA5E: mov ecx, eax
            L_0076DA60: call ext_006C9B70
            L_0076DA65: push 0x1
            L_0076DA67: mov ecx, esi
            L_0076DA69: call ext_006CA540
            L_0076DA6E: push 0x6
            L_0076DA70: push edi
            L_0076DA71: push edi
            L_0076DA72: push edi
            L_0076DA73: push edi
            L_0076DA74: push edi
            L_0076DA75: lea ecx, [ebp - 0x14]
            L_0076DA78: call ext_006DA370
            L_0076DA7D: push 0x98
            L_0076DA82: call ext_006A5C62
            L_0076DA87: add esp, 0x4
            L_0076DA8A: mov dword ptr [ebp - 0x20], eax
            L_0076DA8D: cmp eax, edi
            L_0076DA8F: mov byte ptr [ebp - 0x4], 0x17
            L_0076DA93: je L_0076DAA0
            L_0076DA95: mov ecx, eax
            L_0076DA97: call ext_006CA140
            L_0076DA9C: mov esi, eax
            L_0076DA9E: jmp L_0076DAA2
            L_0076DAA0: xor esi, esi
            L_0076DAA2: push 0x1
            L_0076DAA4: mov ecx, esi
            L_0076DAA6: mov byte ptr [ebp - 0x4], 0xc
            L_0076DAAA: mov dword ptr [ebp - 0x13c], esi
            L_0076DAB0: call ext_006CA500
            L_0076DAB5: push edi
            L_0076DAB6: mov ecx, esi
            L_0076DAB8: call ext_006CA020
            L_0076DABD: mov edx, dword ptr [ebp - 0x10]
            L_0076DAC0: mov ecx, dword ptr [ebp - 0x14]
            L_0076DAC3: push edi
            L_0076DAC4: push edi
            L_0076DAC5: push edi
            L_0076DAC6: push edi
            L_0076DAC7: push edx
            L_0076DAC8: push ecx
            L_0076DAC9: mov ecx, eax
            L_0076DACB: call ext_006C9B70
            L_0076DAD0: push 0x1
            L_0076DAD2: mov ecx, esi
            L_0076DAD4: call ext_006CA540
            L_0076DAD9: jmp L_0076DE15
            L_0076DADE: push 0x6
            L_0076DAE0: push edi
            L_0076DAE1: push edi
            L_0076DAE2: push edi
            L_0076DAE3: push edi
            L_0076DAE4: push edi
            L_0076DAE5: lea ecx, [ebp - 0x14]
            L_0076DAE8: mov dword ptr [ebp - 0x30], 0x1
            L_0076DAEF: call ext_006DA370
            L_0076DAF4: lea edx, [ebp - 0x174]
            L_0076DAFA: mov ecx, ebx
            L_0076DAFC: push edx
            L_0076DAFD: call ext_006C3250
            L_0076DB02: lea eax, [ebp - 0x1d4]
            L_0076DB08: mov ecx, ebx
            L_0076DB0A: push eax
            L_0076DB0B: call ext_006C32C0
            L_0076DB10: lea ecx, [ebp - 0x104]
            L_0076DB16: push ecx
            L_0076DB17: mov ecx, ebx
            L_0076DB19: call ext_006C3030
            L_0076DB1E: mov ecx, eax
            L_0076DB20: call ext_00700990
            L_0076DB25: push edi
            L_0076DB26: lea ecx, [ebp - 0x1b4]
            L_0076DB2C: call ext_006D23F0
            L_0076DB31: mov edx, dword ptr [ebp - 0x104]
            L_0076DB37: mov ecx, dword ptr [ebp - 0x100]
            L_0076DB3D: mov dword ptr [eax], edx
            L_0076DB3F: push 0x1
            L_0076DB41: mov dword ptr [eax + 0x4], ecx
            L_0076DB44: lea ecx, [ebp - 0x1b4]
            L_0076DB4A: call ext_006D23F0
            L_0076DB4F: mov edx, dword ptr [ebp - 0xfc]
            L_0076DB55: mov ecx, dword ptr [ebp - 0xf8]
            L_0076DB5B: mov dword ptr [eax], edx
            L_0076DB5D: push 0x2
            L_0076DB5F: mov dword ptr [eax + 0x4], ecx
            L_0076DB62: lea ecx, [ebp - 0x1b4]
            L_0076DB68: call ext_006D23F0
            L_0076DB6D: mov edx, dword ptr [ebp - 0xf4]
            L_0076DB73: mov ecx, dword ptr [ebp - 0xf0]
            L_0076DB79: mov dword ptr [eax], edx
            L_0076DB7B: mov dword ptr [eax + 0x4], ecx
            L_0076DB7E: mov ecx, ebx
            L_0076DB80: call ext_006C3030
            L_0076DB85: mov ecx, eax
            L_0076DB87: call ext_00700A00
            L_0076DB8C: fstp qword ptr [ebp - 0x2c]
            L_0076DB8F: xor esi, esi
            L_0076DB91: push 0x98
            L_0076DB96: call ext_006A5C62
            L_0076DB9B: add esp, 0x4
            L_0076DB9E: mov dword ptr [ebp + 0x8], eax
            L_0076DBA1: test eax, eax
            L_0076DBA3: mov byte ptr [ebp - 0x4], 0x18
            L_0076DBA7: je L_0076DBB2
            L_0076DBA9: mov ecx, eax
            L_0076DBAB: call ext_006CA140
            L_0076DBB0: jmp L_0076DBB4
            L_0076DBB2: xor eax, eax
            L_0076DBB4: mov edx, dword ptr [ebp - 0x60]
            L_0076DBB7: push 0x98
            L_0076DBBC: mov byte ptr [ebp - 0x4], 0xc
            L_0076DBC0: mov dword ptr [edx + 4*esi], eax
            L_0076DBC3: call ext_006A5C62
            L_0076DBC8: add esp, 0x4
            L_0076DBCB: mov dword ptr [ebp + 0x8], eax
            L_0076DBCE: test eax, eax
            L_0076DBD0: mov byte ptr [ebp - 0x4], 0x19
            L_0076DBD4: je L_0076DBDF
            L_0076DBD6: mov ecx, eax
            L_0076DBD8: call ext_006CA140
            L_0076DBDD: jmp L_0076DBE1
            L_0076DBDF: xor eax, eax
            L_0076DBE1: mov ecx, dword ptr [ebp - 0x88]
            L_0076DBE7: push 0x98
            L_0076DBEC: mov byte ptr [ebp - 0x4], 0xc
            L_0076DBF0: mov dword ptr [ecx + 4*esi], eax
            L_0076DBF3: call ext_006A5C62
            L_0076DBF8: add esp, 0x4
            L_0076DBFB: mov dword ptr [ebp + 0x8], eax
            L_0076DBFE: test eax, eax
            L_0076DC00: mov byte ptr [ebp - 0x4], 0x1a
            L_0076DC04: je L_0076DC0F
            L_0076DC06: mov ecx, eax
            L_0076DC08: call ext_006CA140
            L_0076DC0D: jmp L_0076DC11
            L_0076DC0F: xor eax, eax
            L_0076DC11: mov edx, dword ptr [ebp - 0xa0]
            L_0076DC17: push 0x1
            L_0076DC19: mov byte ptr [ebp - 0x4], 0xc
            L_0076DC1D: mov dword ptr [edx + 4*esi], eax
            L_0076DC20: mov eax, dword ptr [ebp - 0x124]
            L_0076DC26: mov byte ptr [eax + esi], 0x1
            L_0076DC2A: mov ecx, dword ptr [ebp - 0x144]
            L_0076DC30: mov byte ptr [ecx + esi], 0x1
            L_0076DC34: mov edx, dword ptr [ebp - 0x10c]
            L_0076DC3A: mov byte ptr [edx + esi], 0x1
            L_0076DC3E: mov eax, dword ptr [ebp - 0x60]
            L_0076DC41: mov ecx, dword ptr [eax + 4*esi]
            L_0076DC44: call ext_006CA500
            L_0076DC49: mov ecx, dword ptr [ebp - 0x60]
            L_0076DC4C: push 0x0
            L_0076DC4E: mov ecx, dword ptr [ecx + 4*esi]
            L_0076DC51: call ext_006CA020
            L_0076DC56: push 0x0
            L_0076DC58: push 0x0
            L_0076DC5A: push 0x0
            L_0076DC5C: push esi
            L_0076DC5D: lea ecx, [ebp - 0x174]
            L_0076DC63: mov edi, eax
            L_0076DC65: call ext_006D23F0
            L_0076DC6A: fld qword ptr [eax]
            L_0076DC6C: mov edx, dword ptr [ebp - 0x10]
            L_0076DC6F: mov eax, dword ptr [ebp - 0x14]
            L_0076DC72: push ecx
            L_0076DC73: mov ecx, edi
            L_0076DC75: fstp dword ptr [esp]
            L_0076DC78: push edx
            L_0076DC79: push eax
            L_0076DC7A: call ext_006C9B70
            L_0076DC7F: mov ecx, dword ptr [ebp - 0x60]
            L_0076DC82: push 0x1
            L_0076DC84: mov ecx, dword ptr [ecx + 4*esi]
            L_0076DC87: call ext_006CA540
            L_0076DC8C: mov edx, dword ptr [ebp - 0x88]
            L_0076DC92: push 0x1
            L_0076DC94: mov ecx, dword ptr [edx + 4*esi]
            L_0076DC97: call ext_006CA500
            L_0076DC9C: mov eax, dword ptr [ebp - 0x88]
            L_0076DCA2: push 0x0
            L_0076DCA4: mov ecx, dword ptr [eax + 4*esi]
            L_0076DCA7: call ext_006CA020
            L_0076DCAC: push 0x0
            L_0076DCAE: push 0x0
            L_0076DCB0: push 0x0
            L_0076DCB2: push esi
            L_0076DCB3: lea ecx, [ebp - 0x1d4]
            L_0076DCB9: mov edi, eax
            L_0076DCBB: call ext_006D23F0
            L_0076DCC0: fld qword ptr [eax]
            L_0076DCC2: mov edx, dword ptr [ebp - 0x14]
            L_0076DCC5: push ecx
            L_0076DCC6: mov ecx, dword ptr [ebp - 0x10]
            L_0076DCC9: fstp dword ptr [esp]
            L_0076DCCC: push ecx
            L_0076DCCD: push edx
            L_0076DCCE: mov ecx, edi
            L_0076DCD0: call ext_006C9B70
            L_0076DCD5: mov eax, dword ptr [ebp - 0x88]
            L_0076DCDB: push 0x1
            L_0076DCDD: mov ecx, dword ptr [eax + 4*esi]
            L_0076DCE0: call ext_006CA540
            L_0076DCE5: mov ecx, dword ptr [ebp - 0xa0]
            L_0076DCEB: push 0x1
            L_0076DCED: mov ecx, dword ptr [ecx + 4*esi]
            L_0076DCF0: call ext_006CA500
            L_0076DCF5: mov edx, dword ptr [ebp - 0xa0]
            L_0076DCFB: push 0x0
            L_0076DCFD: mov ecx, dword ptr [edx + 4*esi]
            L_0076DD00: call ext_006CA020
            L_0076DD05: push 0x0
            L_0076DD07: push 0x0
            L_0076DD09: push 0x0
            L_0076DD0B: push esi
            L_0076DD0C: lea ecx, [ebp - 0x1b4]
            L_0076DD12: mov edi, eax
            L_0076DD14: call ext_006D23F0
            L_0076DD19: fld qword ptr [eax]
            L_0076DD1B: mov eax, dword ptr [ebp - 0x10]
            L_0076DD1E: push ecx
            L_0076DD1F: mov ecx, dword ptr [ebp - 0x14]
            L_0076DD22: fstp dword ptr [esp]
            L_0076DD25: push eax
            L_0076DD26: push ecx
            L_0076DD27: mov ecx, edi
            L_0076DD29: call ext_006C9B70
            L_0076DD2E: mov edx, dword ptr [ebp - 0xa0]
            L_0076DD34: push 0x1
            L_0076DD36: mov ecx, dword ptr [edx + 4*esi]
            L_0076DD39: call ext_006CA540
            L_0076DD3E: inc esi
            L_0076DD3F: cmp esi, 0x3
            L_0076DD42: jl L_0076DB91
            L_0076DD48: push 0x98
            L_0076DD4D: call ext_006A5C62
            L_0076DD52: add esp, 0x4
            L_0076DD55: mov dword ptr [ebp + 0x8], eax
            L_0076DD58: test eax, eax
            L_0076DD5A: mov byte ptr [ebp - 0x4], 0x1b
            L_0076DD5E: je L_0076DD6B
            L_0076DD60: mov ecx, eax
            L_0076DD62: call ext_006CA140
            L_0076DD67: mov esi, eax
            L_0076DD69: jmp L_0076DD6D
            L_0076DD6B: xor esi, esi
            L_0076DD6D: push 0x1
            L_0076DD6F: mov ecx, esi
            L_0076DD71: mov byte ptr [ebp - 0x4], 0xc
            L_0076DD75: mov dword ptr [ebp - 0xc4], esi
            L_0076DD7B: mov byte ptr [ebp + 0xb], 0x1
            L_0076DD7F: call ext_006CA500
            L_0076DD84: push 0x0
            L_0076DD86: mov ecx, esi
            L_0076DD88: call ext_006CA020
            L_0076DD8D: fld qword ptr [ebp - 0x2c]
            L_0076DD90: mov edx, dword ptr [ebp - 0x14]
            L_0076DD93: push 0x0
            L_0076DD95: push 0x0
            L_0076DD97: push 0x0
            L_0076DD99: push ecx
            L_0076DD9A: mov ecx, dword ptr [ebp - 0x10]
            L_0076DD9D: fstp dword ptr [esp]
            L_0076DDA0: push ecx
            L_0076DDA1: push edx
            L_0076DDA2: mov ecx, eax
            L_0076DDA4: call ext_006C9B70
            L_0076DDA9: push 0x1
            L_0076DDAB: mov ecx, esi
            L_0076DDAD: call ext_006CA540
            L_0076DDB2: push 0x98
            L_0076DDB7: call ext_006A5C62
            L_0076DDBC: add esp, 0x4
            L_0076DDBF: mov dword ptr [ebp - 0x20], eax
            L_0076DDC2: test eax, eax
            L_0076DDC4: mov byte ptr [ebp - 0x4], 0x1c
            L_0076DDC8: je L_0076DDD5
            L_0076DDCA: mov ecx, eax
            L_0076DDCC: call ext_006CA140
            L_0076DDD1: mov esi, eax
            L_0076DDD3: jmp L_0076DDD7
            L_0076DDD5: xor esi, esi
            L_0076DDD7: push 0x1
            L_0076DDD9: mov ecx, esi
            L_0076DDDB: mov byte ptr [ebp - 0x4], 0xc
            L_0076DDDF: mov dword ptr [ebp - 0x13c], esi
            L_0076DDE5: call ext_006CA500
            L_0076DDEA: push 0x0
            L_0076DDEC: mov ecx, esi
            L_0076DDEE: call ext_006CA020
            L_0076DDF3: mov ecx, dword ptr [ebp - 0x10]
            L_0076DDF6: mov edx, dword ptr [ebp - 0x14]
            L_0076DDF9: push 0x0
            L_0076DDFB: push 0x0
            L_0076DDFD: push 0x0
            L_0076DDFF: push 0x0
            L_0076DE01: push ecx
            L_0076DE02: push edx
            L_0076DE03: mov ecx, eax
            L_0076DE05: call ext_006C9B70
            L_0076DE0A: push 0x1
            L_0076DE0C: mov ecx, esi
            L_0076DE0E: call ext_006CA540
            L_0076DE13: xor edi, edi
            L_0076DE15: mov ecx, ebx
            L_0076DE17: call ext_006C2BB0
            L_0076DE1C: mov esi, eax
            L_0076DE1E: cmp esi, edi
            L_0076DE20: mov dword ptr [ebp - 0xc8], esi
            L_0076DE26: je L_0076E1A4
            L_0076DE2C: lea eax, [ebp - 0x80]
            L_0076DE2F: lea ecx, [ebp - 0xc0]
            L_0076DE35: push eax
            L_0076DE36: push ecx
            L_0076DE37: mov ecx, esi
            L_0076DE39: call ext_006DC480
            L_0076DE3E: mov ecx, eax
            L_0076DE40: call ext_006C9340
            L_0076DE45: push 0x6
            L_0076DE47: push 0x1
            L_0076DE49: lea ecx, [ebp - 0x80]
            L_0076DE4C: call ext_006DABA0
            L_0076DE51: mov edx, dword ptr [ebp - 0x138]
            L_0076DE57: inc eax
            L_0076DE58: mov dword ptr [ebp - 0xcc], eax
            L_0076DE5E: mov al, byte ptr [edx + 0x300]
            L_0076DE64: test al, al
            L_0076DE66: je L_0076E0E5
            L_0076DE6C: mov eax, dword ptr [ebp - 0x48]
            L_0076DE6F: mov ecx, esi
            L_0076DE71: mov dword ptr [ebp - 0x1c], eax
            L_0076DE74: call ext_006DC480
            L_0076DE79: mov ecx, eax
            L_0076DE7B: call ext_006C9370
            L_0076DE80: mov ecx, dword ptr [ebp - 0x1c]
            L_0076DE83: mov dword ptr [ecx], eax
            L_0076DE85: mov edx, dword ptr [ebp - 0x48]
            L_0076DE88: add edx, 0x4
            L_0076DE8B: mov ecx, esi
            L_0076DE8D: mov dword ptr [ebp - 0x1c], edx
            L_0076DE90: call ext_006DC480
            L_0076DE95: mov ecx, eax
            L_0076DE97: call ext_006C9390
            L_0076DE9C: mov ecx, dword ptr [ebp - 0x1c]
            L_0076DE9F: mov dword ptr [ecx], eax
            L_0076DEA1: mov edx, dword ptr [ebp - 0x48]
            L_0076DEA4: add edx, 0x8
            L_0076DEA7: mov ecx, esi
            L_0076DEA9: mov dword ptr [ebp - 0x1c], edx
            L_0076DEAC: call ext_006DC480
            L_0076DEB1: mov ecx, eax
            L_0076DEB3: call ext_006C93B0
            L_0076DEB8: mov ecx, dword ptr [ebp - 0x1c]
            L_0076DEBB: mov dword ptr [ecx], eax
            L_0076DEBD: mov edx, dword ptr [ebp - 0x48]
            L_0076DEC0: mov ecx, dword ptr [edx]
            L_0076DEC2: call ext_006CA6A0
            L_0076DEC7: cmp eax, edi
            L_0076DEC9: jne L_0076DF6C
            L_0076DECF: push 0x6
            L_0076DED1: push edi
            L_0076DED2: push edi
            L_0076DED3: push edi
            L_0076DED4: push edi
            L_0076DED5: push edi
            L_0076DED6: lea ecx, [ebp - 0x14]
            L_0076DED9: call ext_006DA370
            L_0076DEDE: lea eax, [ebp - 0x174]
            L_0076DEE4: mov ecx, esi
            L_0076DEE6: push eax
            L_0076DEE7: call ext_006C3250
            L_0076DEEC: push 0x98
            L_0076DEF1: call ext_006A5C62
            L_0076DEF6: add esp, 0x4
            L_0076DEF9: mov dword ptr [ebp - 0x20], eax
            L_0076DEFC: cmp eax, edi
            L_0076DEFE: mov byte ptr [ebp - 0x4], 0x1d
            L_0076DF02: je L_0076DF0D
            L_0076DF04: mov ecx, eax
            L_0076DF06: call ext_006CA140
            L_0076DF0B: jmp L_0076DF0F
            L_0076DF0D: xor eax, eax
            L_0076DF0F: mov ecx, dword ptr [ebp - 0x48]
            L_0076DF12: push 0x1
            L_0076DF14: mov byte ptr [ebp - 0x4], 0xc
            L_0076DF18: mov dword ptr [ecx], eax
            L_0076DF1A: mov edx, dword ptr [ebp - 0xd4]
            L_0076DF20: mov byte ptr [edx], 0x1
            L_0076DF23: mov eax, dword ptr [ebp - 0x48]
            L_0076DF26: mov ecx, dword ptr [eax]
            L_0076DF28: call ext_006CA500
            L_0076DF2D: mov ecx, dword ptr [ebp - 0x48]
            L_0076DF30: push edi
            L_0076DF31: mov ecx, dword ptr [ecx]
            L_0076DF33: call ext_006CA020
            L_0076DF38: push edi
            L_0076DF39: push edi
            L_0076DF3A: push edi
            L_0076DF3B: push edi
            L_0076DF3C: lea ecx, [ebp - 0x174]
            L_0076DF42: mov dword ptr [ebp - 0x1c], eax
            L_0076DF45: call ext_006D23F0
            L_0076DF4A: fld qword ptr [eax]
            L_0076DF4C: mov edx, dword ptr [ebp - 0x10]
            L_0076DF4F: mov eax, dword ptr [ebp - 0x14]
            L_0076DF52: push ecx
            L_0076DF53: mov ecx, dword ptr [ebp - 0x1c]
            L_0076DF56: fstp dword ptr [esp]
            L_0076DF59: push edx
            L_0076DF5A: push eax
            L_0076DF5B: call ext_006C9B70
            L_0076DF60: mov ecx, dword ptr [ebp - 0x48]
            L_0076DF63: push 0x1
            L_0076DF65: mov ecx, dword ptr [ecx]
            L_0076DF67: call ext_006CA540
            L_0076DF6C: mov edx, dword ptr [ebp - 0x48]
            L_0076DF6F: mov ecx, dword ptr [edx + 0x4]
            L_0076DF72: call ext_006CA6A0
            L_0076DF77: cmp eax, edi
            L_0076DF79: jne L_0076E022
            L_0076DF7F: push 0x6
            L_0076DF81: push edi
            L_0076DF82: push edi
            L_0076DF83: push edi
            L_0076DF84: push edi
            L_0076DF85: push edi
            L_0076DF86: lea ecx, [ebp - 0x14]
            L_0076DF89: call ext_006DA370
            L_0076DF8E: lea eax, [ebp - 0x174]
            L_0076DF94: mov ecx, esi
            L_0076DF96: push eax
            L_0076DF97: call ext_006C3250
            L_0076DF9C: push 0x98
            L_0076DFA1: call ext_006A5C62
            L_0076DFA6: add esp, 0x4
            L_0076DFA9: mov dword ptr [ebp - 0x20], eax
            L_0076DFAC: cmp eax, edi
            L_0076DFAE: mov byte ptr [ebp - 0x4], 0x1e
            L_0076DFB2: je L_0076DFBD
            L_0076DFB4: mov ecx, eax
            L_0076DFB6: call ext_006CA140
            L_0076DFBB: jmp L_0076DFBF
            L_0076DFBD: xor eax, eax
            L_0076DFBF: mov ecx, dword ptr [ebp - 0x48]
            L_0076DFC2: push 0x1
            L_0076DFC4: mov byte ptr [ebp - 0x4], 0xc
            L_0076DFC8: mov dword ptr [ecx + 0x4], eax
            L_0076DFCB: mov edx, dword ptr [ebp - 0xd4]
            L_0076DFD1: mov byte ptr [edx + 0x1], 0x1
            L_0076DFD5: mov eax, dword ptr [ebp - 0x48]
            L_0076DFD8: mov ecx, dword ptr [eax + 0x4]
            L_0076DFDB: call ext_006CA500
            L_0076DFE0: mov ecx, dword ptr [ebp - 0x48]
            L_0076DFE3: push edi
            L_0076DFE4: mov ecx, dword ptr [ecx + 0x4]
            L_0076DFE7: call ext_006CA020
            L_0076DFEC: push edi
            L_0076DFED: push edi
            L_0076DFEE: push edi
            L_0076DFEF: push 0x1
            L_0076DFF1: lea ecx, [ebp - 0x174]
            L_0076DFF7: mov dword ptr [ebp - 0x1c], eax
            L_0076DFFA: call ext_006D23F0
            L_0076DFFF: fld qword ptr [eax]
            L_0076E001: mov edx, dword ptr [ebp - 0x10]
            L_0076E004: mov eax, dword ptr [ebp - 0x14]
            L_0076E007: push ecx
            L_0076E008: mov ecx, dword ptr [ebp - 0x1c]
            L_0076E00B: fstp dword ptr [esp]
            L_0076E00E: push edx
            L_0076E00F: push eax
            L_0076E010: call ext_006C9B70
            L_0076E015: mov ecx, dword ptr [ebp - 0x48]
            L_0076E018: push 0x1
            L_0076E01A: mov ecx, dword ptr [ecx + 0x4]
            L_0076E01D: call ext_006CA540
            L_0076E022: mov edx, dword ptr [ebp - 0x48]
            L_0076E025: mov ecx, dword ptr [edx + 0x8]
            L_0076E028: call ext_006CA6A0
            L_0076E02D: cmp eax, edi
            L_0076E02F: mov dword ptr [ebp - 0x20], eax
            L_0076E032: jne L_0076E0DB
            L_0076E038: push 0x6
            L_0076E03A: push edi
            L_0076E03B: push edi
            L_0076E03C: push edi
            L_0076E03D: push edi
            L_0076E03E: push edi
            L_0076E03F: lea ecx, [ebp - 0x14]
            L_0076E042: call ext_006DA370
            L_0076E047: lea eax, [ebp - 0x174]
            L_0076E04D: mov ecx, esi
            L_0076E04F: push eax
            L_0076E050: call ext_006C3250
            L_0076E055: push 0x98
            L_0076E05A: call ext_006A5C62
            L_0076E05F: add esp, 0x4
            L_0076E062: mov dword ptr [ebp - 0x1c], eax
            L_0076E065: cmp eax, edi
            L_0076E067: mov byte ptr [ebp - 0x4], 0x1f
            L_0076E06B: je L_0076E076
            L_0076E06D: mov ecx, eax
            L_0076E06F: call ext_006CA140
            L_0076E074: jmp L_0076E078
            L_0076E076: xor eax, eax
            L_0076E078: mov ecx, dword ptr [ebp - 0x48]
            L_0076E07B: push 0x1
            L_0076E07D: mov byte ptr [ebp - 0x4], 0xc
            L_0076E081: mov dword ptr [ecx + 0x8], eax
            L_0076E084: mov edx, dword ptr [ebp - 0xd4]
            L_0076E08A: mov byte ptr [edx + 0x2], 0x1
            L_0076E08E: mov eax, dword ptr [ebp - 0x48]
            L_0076E091: mov ecx, dword ptr [eax + 0x8]
            L_0076E094: call ext_006CA500
            L_0076E099: mov ecx, dword ptr [ebp - 0x48]
            L_0076E09C: push edi
            L_0076E09D: mov ecx, dword ptr [ecx + 0x8]
            L_0076E0A0: call ext_006CA020
            L_0076E0A5: push edi
            L_0076E0A6: push edi
            L_0076E0A7: push edi
            L_0076E0A8: push 0x2
            L_0076E0AA: lea ecx, [ebp - 0x174]
            L_0076E0B0: mov dword ptr [ebp - 0x1c], eax
            L_0076E0B3: call ext_006D23F0
            L_0076E0B8: fld qword ptr [eax]
            L_0076E0BA: mov edx, dword ptr [ebp - 0x10]
            L_0076E0BD: mov eax, dword ptr [ebp - 0x14]
            L_0076E0C0: push ecx
            L_0076E0C1: mov ecx, dword ptr [ebp - 0x1c]
            L_0076E0C4: fstp dword ptr [esp]
            L_0076E0C7: push edx
            L_0076E0C8: push eax
            L_0076E0C9: call ext_006C9B70
            L_0076E0CE: mov ecx, dword ptr [ebp - 0x48]
            L_0076E0D1: push 0x1
            L_0076E0D3: mov ecx, dword ptr [ecx + 0x8]
            L_0076E0D6: call ext_006CA540
            L_0076E0DB: cmp dword ptr [ebp - 0x20], 0x1
            L_0076E0DF: ja L_0076E5DD
            L_0076E0E5: push 0x6
            L_0076E0E7: push edi
            L_0076E0E8: push edi
            L_0076E0E9: push edi
            L_0076E0EA: push edi
            L_0076E0EB: push edi
            L_0076E0EC: lea ecx, [ebp - 0x2c]
            L_0076E0EF: mov dword ptr [ebp - 0x2c], edi
            L_0076E0F2: mov dword ptr [ebp - 0x28], edi
            L_0076E0F5: call ext_006DA370
            L_0076E0FA: lea edx, [ebp - 0x1f4]
            L_0076E100: mov ecx, esi
            L_0076E102: push edx
            L_0076E103: call ext_006C3250
            L_0076E108: xor esi, esi
            L_0076E10A: jmp L_0076E10E
            L_0076E10C: xor edi, edi
            L_0076E10E: push 0x98
            L_0076E113: call ext_006A5C62
            L_0076E118: add esp, 0x4
            L_0076E11B: mov dword ptr [ebp - 0x20], eax
            L_0076E11E: cmp eax, edi
            L_0076E120: mov byte ptr [ebp - 0x4], 0x20
            L_0076E124: je L_0076E12F
            L_0076E126: mov ecx, eax
            L_0076E128: call ext_006CA140
            L_0076E12D: jmp L_0076E131
            L_0076E12F: xor eax, eax
            L_0076E131: mov ecx, dword ptr [ebp - 0x48]
            L_0076E134: push 0x1
            L_0076E136: mov byte ptr [ebp - 0x4], 0xc
            L_0076E13A: mov dword ptr [ecx + 4*esi], eax
            L_0076E13D: mov edx, dword ptr [ebp - 0xd4]
            L_0076E143: mov byte ptr [edx + esi], 0x1
            L_0076E147: mov eax, dword ptr [ebp - 0x48]
            L_0076E14A: mov ecx, dword ptr [eax + 4*esi]
            L_0076E14D: call ext_006CA500
            L_0076E152: mov ecx, dword ptr [ebp - 0x48]
            L_0076E155: push 0x0
            L_0076E157: mov ecx, dword ptr [ecx + 4*esi]
            L_0076E15A: call ext_006CA020
            L_0076E15F: push 0x0
            L_0076E161: push 0x0
            L_0076E163: push 0x0
            L_0076E165: push esi
            L_0076E166: lea ecx, [ebp - 0x1f4]
            L_0076E16C: mov edi, eax
            L_0076E16E: call ext_006D23F0
            L_0076E173: fld qword ptr [eax]
            L_0076E175: mov edx, dword ptr [ebp - 0x28]
            L_0076E178: mov eax, dword ptr [ebp - 0x2c]
            L_0076E17B: push ecx
            L_0076E17C: mov ecx, edi
            L_0076E17E: fstp dword ptr [esp]
            L_0076E181: push edx
            L_0076E182: push eax
            L_0076E183: call ext_006C9B70
            L_0076E188: mov ecx, dword ptr [ebp - 0x48]
            L_0076E18B: push 0x1
            L_0076E18D: mov ecx, dword ptr [ecx + 4*esi]
            L_0076E190: call ext_006CA540
            L_0076E195: inc esi
            L_0076E196: cmp esi, 0x3
            L_0076E199: jl L_0076E10C
            L_0076E19F: jmp L_0076E5DD
            L_0076E1A4: lea ecx, [ebp - 0x194]
            L_0076E1AA: mov dword ptr [ebp - 0x38], edi
            L_0076E1AD: mov dword ptr [ebp - 0x34], edi
            L_0076E1B0: call ext_006D2370
            L_0076E1B5: lea ecx, [ebp - 0x244]
            L_0076E1BB: mov byte ptr [ebp - 0x4], 0x21
            L_0076E1BF: call ext_006D2370
            L_0076E1C4: lea ecx, [ebp - 0x214]
            L_0076E1CA: mov byte ptr [ebp - 0x4], 0x22
            L_0076E1CE: call ext_006D2370
            L_0076E1D3: lea ecx, [ebp - 0x338]
            L_0076E1D9: mov byte ptr [ebp - 0x4], 0x23
            L_0076E1DD: call ext_00714570
            L_0076E1E2: mov edx, dword ptr [ebp - 0x30]
            L_0076E1E5: mov byte ptr [ebp - 0x4], 0x24
            L_0076E1E9: mov dword ptr [ebp - 0xcc], edx
            L_0076E1EF: xor esi, esi
            L_0076E1F1: push 0x98
            L_0076E1F6: call ext_006A5C62
            L_0076E1FB: add esp, 0x4
            L_0076E1FE: mov dword ptr [ebp - 0x20], eax
            L_0076E201: cmp eax, edi
            L_0076E203: mov byte ptr [ebp - 0x4], 0x25
            L_0076E207: je L_0076E212
            L_0076E209: mov ecx, eax
            L_0076E20B: call ext_006CA140
            L_0076E210: jmp L_0076E214
            L_0076E212: xor eax, eax
            L_0076E214: mov ecx, dword ptr [ebp - 0x48]
            L_0076E217: mov byte ptr [ebp - 0x4], 0x24
            L_0076E21B: mov dword ptr [ecx + 4*esi], eax
            L_0076E21E: mov edx, dword ptr [ebp - 0xd4]
            L_0076E224: mov eax, dword ptr [ebp - 0x30]
            L_0076E227: mov byte ptr [edx + esi], 0x1
            L_0076E22B: mov ecx, dword ptr [ebp - 0x48]
            L_0076E22E: push eax
            L_0076E22F: mov ecx, dword ptr [ecx + 4*esi]
            L_0076E232: call ext_006CA500
            L_0076E237: inc esi
            L_0076E238: cmp esi, 0x3
            L_0076E23B: jl L_0076E1F1
            L_0076E23D: mov ecx, dword ptr [ebp - 0x30]
            L_0076E240: xor eax, eax
            L_0076E242: cmp ecx, edi
            L_0076E244: mov dword ptr [ebp - 0x1c], eax
            L_0076E247: jle L_0076E588
            L_0076E24D: push eax
            L_0076E24E: lea edx, [ebp - 0x2b0]
            L_0076E254: push 0xaaed50
            L_0076E259: push edx
            L_0076E25A: call dword ptr [mem_00925218]
            L_0076E260: add esp, 0xc
            L_0076E263: lea eax, [ebp - 0x2b0]
            L_0076E269: lea ecx, [ebp - 0x38]
            L_0076E26C: push 0x2
            L_0076E26E: push 0x6
            L_0076E270: push eax
            L_0076E271: call ext_006D9FC0
            L_0076E276: push 0x3ff00000
            L_0076E27B: push 0x0
            L_0076E27D: push 0x0
            L_0076E27F: push 0x0
            L_0076E281: push 0x0
            L_0076E283: push 0x0
            L_0076E285: push 0x0
            L_0076E287: push 0x0
            L_0076E289: lea ecx, [ebp - 0x1f4]
            L_0076E28F: call ext_00787430
            L_0076E294: xor esi, esi
            L_0076E296: mov ecx, dword ptr [ebp - 0x34]
            L_0076E299: mov eax, dword ptr [ebp - 0x60]
            L_0076E29C: mov edx, dword ptr [ebp - 0x38]
            L_0076E29F: push 0x0
            L_0076E2A1: push ecx
            L_0076E2A2: mov ecx, dword ptr [eax + 4*esi]
            L_0076E2A5: push edx
            L_0076E2A6: call ext_006CD350
            L_0076E2AB: fstp qword ptr [ebp - 0x40]
            L_0076E2AE: push esi
            L_0076E2AF: lea ecx, [ebp - 0x244]
            L_0076E2B5: call ext_006D23F0
            L_0076E2BA: mov ecx, dword ptr [ebp - 0x40]
            L_0076E2BD: mov edx, dword ptr [ebp - 0x3c]
            L_0076E2C0: mov dword ptr [eax], ecx
            L_0076E2C2: push 0x0
            L_0076E2C4: mov dword ptr [eax + 0x4], edx
            L_0076E2C7: mov eax, dword ptr [ebp - 0x34]
            L_0076E2CA: mov ecx, dword ptr [ebp - 0x38]
            L_0076E2CD: mov edx, dword ptr [ebp - 0x88]
            L_0076E2D3: push eax
            L_0076E2D4: push ecx
            L_0076E2D5: mov ecx, dword ptr [edx + 4*esi]
            L_0076E2D8: call ext_006CD350
            L_0076E2DD: fstp qword ptr [ebp - 0x40]
            L_0076E2E0: push esi
            L_0076E2E1: lea ecx, [ebp - 0x214]
            L_0076E2E7: call ext_006D23F0
            L_0076E2EC: mov ecx, dword ptr [ebp - 0x40]
            L_0076E2EF: mov edx, dword ptr [ebp - 0x3c]
            L_0076E2F2: mov dword ptr [eax], ecx
            L_0076E2F4: inc esi
            L_0076E2F5: cmp esi, 0x3
            L_0076E2F8: mov dword ptr [eax + 0x4], edx
            L_0076E2FB: jl L_0076E296
            L_0076E2FD: fld qword ptr [ebp - 0x214]
            L_0076E303: mov eax, dword ptr [ebp - 0x204]
            L_0076E309: mov ecx, dword ptr [ebp - 0x200]
            L_0076E30F: mov edx, dword ptr [ebp - 0x20c]
            L_0076E315: mov dword ptr [ebp - 0x224], eax
            L_0076E31B: mov eax, dword ptr [ebp - 0x208]
            L_0076E321: mov dword ptr [ebp - 0x220], ecx
            L_0076E327: fmul qword ptr [mem_00993808]
            L_0076E32D: lea ecx, [ebp - 0x2c]
            L_0076E330: mov dword ptr [ebp - 0x21c], edx
            L_0076E336: mov dword ptr [ebp - 0x218], eax
            L_0076E33C: mov dword ptr [ebp - 0x20], ecx
            L_0076E33F: fstp qword ptr [ebp - 0x40]
            L_0076E342: fld qword ptr [ebp - 0x40]
            L_0076E345: fsincos
            L_0076E347: mov eax, dword ptr [ebp - 0x20]
            L_0076E34A: fstp qword ptr [eax]
            L_0076E34C: fstp qword ptr [ebp - 0x26c]
            L_0076E352: fld qword ptr [ebp - 0x26c]
            L_0076E358: fstp qword ptr [ebp - 0x25c]
            L_0076E35E: fld qword ptr [ebp - 0x21c]
            L_0076E364: fmul qword ptr [mem_00993808]
            L_0076E36A: lea edx, [ebp - 0xb8]
            L_0076E370: mov dword ptr [ebp - 0x20], edx
            L_0076E373: fstp qword ptr [ebp - 0x40]
            L_0076E376: fld qword ptr [ebp - 0x40]
            L_0076E379: fsincos
            L_0076E37B: mov eax, dword ptr [ebp - 0x20]
            L_0076E37E: fstp qword ptr [eax]
            L_0076E380: fstp qword ptr [ebp - 0x24c]
            L_0076E386: fld qword ptr [ebp - 0x24c]
            L_0076E38C: fstp qword ptr [ebp - 0x40]
            L_0076E38F: fld qword ptr [ebp - 0x224]
            L_0076E395: fmul qword ptr [mem_00993808]
            L_0076E39B: lea eax, [ebp - 0x78]
            L_0076E39E: mov dword ptr [ebp - 0x20], eax
            L_0076E3A1: fstp qword ptr [ebp - 0x264]
            L_0076E3A7: fld qword ptr [ebp - 0x264]
            L_0076E3AD: fsincos
            L_0076E3AF: mov eax, dword ptr [ebp - 0x20]
            L_0076E3B2: fstp qword ptr [eax]
            L_0076E3B4: fstp qword ptr [ebp - 0x254]
            L_0076E3BA: fld qword ptr [ebp - 0x254]
            L_0076E3C0: fld qword ptr [ebp - 0x25c]
            L_0076E3C6: fld qword ptr [ebp - 0x40]
            L_0076E3C9: fmul st, st(1)
            L_0076E3CB: fld qword ptr [ebp - 0x40]
            L_0076E3CE: fmul qword ptr [ebp - 0x2c]
            L_0076E3D1: fstp qword ptr [ebp - 0x24]
            L_0076E3D4: fld qword ptr [ebp - 0x78]
            L_0076E3D7: fmul qword ptr [ebp - 0xb8]
            L_0076E3DD: fstp qword ptr [ebp - 0x338]
            L_0076E3E3: fld st(2)
            L_0076E3E5: fmul qword ptr [ebp - 0xb8]
            L_0076E3EB: fstp qword ptr [ebp - 0x330]
            L_0076E3F1: fld qword ptr [ebp - 0x40]
            L_0076E3F4: fchs
            L_0076E3F6: fstp qword ptr [ebp - 0x328]
            L_0076E3FC: fld st(0)
            L_0076E3FE: fmul qword ptr [ebp - 0x78]
            L_0076E401: fld st(3)
            L_0076E403: fmul qword ptr [ebp - 0x2c]
            L_0076E406: fsubp st(1), st
            L_0076E408: fstp qword ptr [ebp - 0x318]
            L_0076E40E: fmul st, st(2)
            L_0076E410: fld qword ptr [ebp - 0x78]
            L_0076E413: fmul qword ptr [ebp - 0x2c]
            L_0076E416: faddp st(1), st
            L_0076E418: fstp qword ptr [ebp - 0x310]
            L_0076E41E: fld qword ptr [ebp - 0xb8]
            L_0076E424: fmul st, st(1)
            L_0076E426: fstp qword ptr [ebp - 0x308]
            L_0076E42C: fld qword ptr [ebp - 0x24]
            L_0076E42F: fmul qword ptr [ebp - 0x78]
            L_0076E432: fld st(2)
            L_0076E434: fmul st, st(2)
            L_0076E436: faddp st(1), st
            L_0076E438: fstp qword ptr [ebp - 0x2f8]
            L_0076E43E: fld qword ptr [ebp - 0x24]
            L_0076E441: fmul st, st(2)
            L_0076E443: fld qword ptr [ebp - 0x78]
            L_0076E446: fmul st, st(2)
            L_0076E448: fsubp st(1), st
            L_0076E44A: fstp qword ptr [ebp - 0x2f0]
            L_0076E450: fstp st(0)
            L_0076E452: fstp st(0)
            L_0076E454: fld qword ptr [ebp - 0xb8]
            L_0076E45A: fmul qword ptr [ebp - 0x2c]
            L_0076E45D: fstp qword ptr [ebp - 0x2e8]
            L_0076E463: push 0x3ff00000
            L_0076E468: push 0x0
            L_0076E46A: push 0x0
            L_0076E46C: push 0x0
            L_0076E46E: push 0xc0240000
            L_0076E473: push 0x0
            L_0076E475: push 0x0
            L_0076E477: push 0x0
            L_0076E479: lea ecx, [ebp - 0x194]
            L_0076E47F: call ext_00787430
            L_0076E484: fld qword ptr [ebp - 0x194]
            L_0076E48A: fld qword ptr [ebp - 0x18c]
            L_0076E490: fld qword ptr [ebp - 0x194]
            L_0076E496: fmul qword ptr [ebp - 0x338]
            L_0076E49C: fld qword ptr [ebp - 0x184]
            L_0076E4A2: fmul qword ptr [ebp - 0x2f8]
            L_0076E4A8: lea ecx, [ebp - 0x244]
            L_0076E4AE: push ecx
            L_0076E4AF: lea ecx, [ebp - 0x194]
            L_0076E4B5: faddp st(1), st
            L_0076E4B7: fld qword ptr [ebp - 0x18c]
            L_0076E4BD: fmul qword ptr [ebp - 0x318]
            L_0076E4C3: faddp st(1), st
            L_0076E4C5: fstp qword ptr [ebp - 0x194]
            L_0076E4CB: fld qword ptr [ebp - 0x330]
            L_0076E4D1: fmul st, st(2)
            L_0076E4D3: fld qword ptr [ebp - 0x184]
            L_0076E4D9: fmul qword ptr [ebp - 0x2f0]
            L_0076E4DF: faddp st(1), st
            L_0076E4E1: fld qword ptr [ebp - 0x18c]
            L_0076E4E7: fmul qword ptr [ebp - 0x310]
            L_0076E4ED: faddp st(1), st
            L_0076E4EF: fstp qword ptr [ebp - 0x18c]
            L_0076E4F5: fld qword ptr [ebp - 0x308]
            L_0076E4FB: fmul st, st(1)
            L_0076E4FD: fld qword ptr [ebp - 0x328]
            L_0076E503: fmul st, st(3)
            L_0076E505: faddp st(1), st
            L_0076E507: fld qword ptr [ebp - 0x184]
            L_0076E50D: fmul qword ptr [ebp - 0x2e8]
            L_0076E513: faddp st(1), st
            L_0076E515: fstp qword ptr [ebp - 0x184]
            L_0076E51B: fstp st(0)
            L_0076E51D: fstp st(0)
            L_0076E51F: call ext_006D26D0
            L_0076E524: lea edx, [ebp - 0x194]
            L_0076E52A: lea ecx, [ebp - 0x1f4]
            L_0076E530: push edx
            L_0076E531: call ext_007873F0
            L_0076E536: xor esi, esi
            L_0076E538: mov ecx, dword ptr [ebp - 0x48]
            L_0076E53B: mov eax, dword ptr [ebp - 0x1c]
            L_0076E53E: push eax
            L_0076E53F: mov ecx, dword ptr [ecx + 4*esi]
            L_0076E542: call ext_006CA020
            L_0076E547: push 0x0
            L_0076E549: push 0x0
            L_0076E54B: push 0x0
            L_0076E54D: push esi
            L_0076E54E: lea ecx, [ebp - 0x1f4]
            L_0076E554: mov edi, eax
            L_0076E556: call ext_006D23F0
            L_0076E55B: fld qword ptr [eax]
            L_0076E55D: mov edx, dword ptr [ebp - 0x34]
            L_0076E560: mov eax, dword ptr [ebp - 0x38]
            L_0076E563: push ecx
            L_0076E564: mov ecx, edi
            L_0076E566: fstp dword ptr [esp]
            L_0076E569: push edx
            L_0076E56A: push eax
            L_0076E56B: call ext_006C9B70
            L_0076E570: inc esi
            L_0076E571: cmp esi, 0x3
            L_0076E574: jl L_0076E538
            L_0076E576: mov eax, dword ptr [ebp - 0x1c]
            L_0076E579: mov ecx, dword ptr [ebp - 0x30]
            L_0076E57C: inc eax
            L_0076E57D: cmp eax, ecx
            L_0076E57F: mov dword ptr [ebp - 0x1c], eax
            L_0076E582: jl L_0076E24D
            L_0076E588: mov edi, dword ptr [ebp - 0x30]
            L_0076E58B: xor esi, esi
            L_0076E58D: mov ecx, dword ptr [ebp - 0x48]
            L_0076E590: push edi
            L_0076E591: mov ecx, dword ptr [esi + ecx]
            L_0076E594: call ext_006CA540
            L_0076E599: add esi, 0x4
            L_0076E59C: cmp esi, 0xc
            L_0076E59F: jl L_0076E58D
            L_0076E5A1: lea ecx, [ebp - 0x338]
            L_0076E5A7: mov byte ptr [ebp - 0x4], 0x23
            L_0076E5AB: call ext_006D80A0
            L_0076E5B0: lea ecx, [ebp - 0x214]
            L_0076E5B6: mov byte ptr [ebp - 0x4], 0x22
            L_0076E5BA: call ext_006D80A0
            L_0076E5BF: lea ecx, [ebp - 0x244]
            L_0076E5C5: mov byte ptr [ebp - 0x4], 0x21
            L_0076E5C9: call ext_006D80A0
            L_0076E5CE: lea ecx, [ebp - 0x194]
            L_0076E5D4: mov byte ptr [ebp - 0x4], 0xc
            L_0076E5D8: call ext_006D80A0
            L_0076E5DD: mov edx, dword ptr [ebp - 0xcc]
            L_0076E5E3: mov eax, dword ptr [ebp - 0x30]
            L_0076E5E6: push edx
            L_0076E5E7: push 0x1
            L_0076E5E9: push eax
            L_0076E5EA: push eax
            L_0076E5EB: push eax
            L_0076E5EC: push eax
            L_0076E5ED: lea eax, [ebp - 0x18]
            L_0076E5F0: push eax
            L_0076E5F1: call ext_007A0470
            L_0076E5F6: mov ecx, dword ptr [ebp - 0x18]
            L_0076E5F9: add esp, 0x1c
            L_0076E5FC: mov byte ptr [ecx + 0xa], 0x0
            L_0076E600: mov ecx, ebx
            L_0076E602: call ext_006BADB0
            L_0076E607: mov edi, eax
            L_0076E609: or ecx, -0x1
            L_0076E60C: xor eax, eax
            L_0076E60E: repne scasb
            L_0076E610: not ecx
            L_0076E612: dec ecx
            L_0076E613: cmp ecx, 0xa
            L_0076E616: jae L_0076E641
            L_0076E618: mov ecx, ebx
            L_0076E61A: call ext_006BADB0
            L_0076E61F: mov edi, eax
            L_0076E621: or ecx, -0x1
            L_0076E624: xor eax, eax
            L_0076E626: repne scasb
            L_0076E628: not ecx
            L_0076E62A: sub edi, ecx
            L_0076E62C: mov edx, ecx
            L_0076E62E: mov esi, edi
            L_0076E630: mov edi, dword ptr [ebp - 0x18]
            L_0076E633: shr ecx, 0x2
            L_0076E636: rep movsd
            L_0076E638: mov ecx, edx
            L_0076E63A: and ecx, 0x3
            L_0076E63D: rep movsb
            L_0076E63F: jmp L_0076E65F
            L_0076E641: push 0xa
            L_0076E643: mov ecx, ebx
            L_0076E645: call ext_006BADB0
            L_0076E64A: push eax
            L_0076E64B: mov eax, dword ptr [ebp - 0x18]
            L_0076E64E: push eax
            L_0076E64F: call dword ptr [mem_009252D0]
            L_0076E655: mov ecx, dword ptr [ebp - 0x18]
            L_0076E658: add esp, 0xc
            L_0076E65B: mov byte ptr [ecx + 0xa], 0x0
            L_0076E65F: mov edx, dword ptr [ebp - 0x18]
            L_0076E662: mov ecx, ebx
            L_0076E664: mov byte ptr [edx + 0x1f], 0x0
            L_0076E668: call ext_006C2720
            L_0076E66D: mov ecx, eax
            L_0076E66F: call ext_006C3030
            L_0076E674: test eax, eax
            L_0076E676: je L_0076E77E
            L_0076E67C: mov ecx, ebx
            L_0076E67E: call ext_006C2720
            L_0076E683: mov ecx, eax
            L_0076E685: call ext_006C3030
            L_0076E68A: mov edx, dword ptr [eax]
            L_0076E68C: mov ecx, eax
            L_0076E68E: call dword ptr [edx]
            L_0076E690: cmp eax, 0x4
            L_0076E693: je L_0076E6FD
            L_0076E695: mov ecx, ebx
            L_0076E697: call ext_006C2720
            L_0076E69C: mov ecx, eax
            L_0076E69E: call ext_006C3030
            L_0076E6A3: mov edx, dword ptr [eax]
            L_0076E6A5: mov ecx, eax
            L_0076E6A7: call dword ptr [edx]
            L_0076E6A9: cmp eax, 0x5
            L_0076E6AC: je L_0076E6FD
            L_0076E6AE: mov ecx, ebx
            L_0076E6B0: call ext_006C2720
            L_0076E6B5: mov ecx, eax
            L_0076E6B7: call ext_006C3030
            L_0076E6BC: mov edx, dword ptr [eax]
            L_0076E6BE: mov ecx, eax
            L_0076E6C0: call dword ptr [edx]
            L_0076E6C2: cmp eax, 0x6
            L_0076E6C5: je L_0076E6FD
            L_0076E6C7: mov ecx, ebx
            L_0076E6C9: call ext_006C2720
            L_0076E6CE: mov ecx, eax
            L_0076E6D0: call ext_006C3030
            L_0076E6D5: mov edx, dword ptr [eax]
            L_0076E6D7: mov ecx, eax
            L_0076E6D9: call dword ptr [edx]
            L_0076E6DB: cmp eax, 0x9
            L_0076E6DE: je L_0076E6FD
            L_0076E6E0: mov ecx, ebx
            L_0076E6E2: call ext_006C2720
            L_0076E6E7: mov ecx, eax
            L_0076E6E9: call ext_006C3030
            L_0076E6EE: mov edx, dword ptr [eax]
            L_0076E6F0: mov ecx, eax
            L_0076E6F2: call dword ptr [edx]
            L_0076E6F4: cmp eax, 0x7
            L_0076E6F7: jne L_0076E77E
            L_0076E6FD: mov ecx, ebx
            L_0076E6FF: call ext_006C2720
            L_0076E704: mov ecx, eax
            L_0076E706: call ext_006BADB0
            L_0076E70B: mov edi, eax
            L_0076E70D: or ecx, -0x1
            L_0076E710: xor eax, eax
            L_0076E712: repne scasb
            L_0076E714: not ecx
            L_0076E716: dec ecx
            L_0076E717: cmp ecx, 0x14
            L_0076E71A: jae L_0076E754
            L_0076E71C: mov ecx, ebx
            L_0076E71E: call ext_006C2720
            L_0076E723: mov ecx, eax
            L_0076E725: call ext_006BADB0
            L_0076E72A: mov ecx, dword ptr [ebp - 0x18]
            L_0076E72D: mov edi, eax
            L_0076E72F: xor eax, eax
            L_0076E731: lea edx, [ecx + 0xb]
            L_0076E734: or ecx, -0x1
            L_0076E737: repne scasb
            L_0076E739: not ecx
            L_0076E73B: sub edi, ecx
            L_0076E73D: mov eax, ecx
            L_0076E73F: mov esi, edi
            L_0076E741: mov edi, edx
            L_0076E743: shr ecx, 0x2
            L_0076E746: rep movsd
            L_0076E748: mov ecx, eax
            L_0076E74A: and ecx, 0x3
            L_0076E74D: rep movsb
            L_0076E74F: jmp L_0076E7F6
            L_0076E754: push 0x14
            L_0076E756: mov ecx, ebx
            L_0076E758: call ext_006C2720
            L_0076E75D: mov ecx, eax
            L_0076E75F: call ext_006BADB0
            L_0076E764: mov ecx, dword ptr [ebp - 0x18]
            L_0076E767: push eax
            L_0076E768: add ecx, 0xb
            L_0076E76B: push ecx
            L_0076E76C: call dword ptr [mem_009252D0]
            L_0076E772: mov edx, dword ptr [ebp - 0x18]
            L_0076E775: add esp, 0xc
            L_0076E778: mov byte ptr [edx + 0x1f], 0x0
            L_0076E77C: jmp L_0076E7F6
            L_0076E77E: lea ecx, [ebp - 0x2b8]
            L_0076E784: call ext_006B9D10
            L_0076E789: push 0xaaed44
            L_0076E78E: lea ecx, [ebp - 0x2b8]
            L_0076E794: mov byte ptr [ebp - 0x4], 0x26
            L_0076E798: call ext_006B9EC0
            L_0076E79D: mov ecx, ebx
            L_0076E79F: call ext_006C2720
            L_0076E7A4: mov ecx, eax
            L_0076E7A6: call ext_006BADB0
            L_0076E7AB: push eax
            L_0076E7AC: lea ecx, [ebp - 0x2b8]
            L_0076E7B2: call ext_006BA220
            L_0076E7B7: lea ecx, [ebp - 0x2b8]
            L_0076E7BD: call ext_006E7460
            L_0076E7C2: mov ecx, dword ptr [ebp - 0x18]
            L_0076E7C5: mov edi, eax
            L_0076E7C7: xor eax, eax
            L_0076E7C9: mov byte ptr [ebp - 0x4], 0xc
            L_0076E7CD: lea edx, [ecx + 0xb]
            L_0076E7D0: or ecx, -0x1
            L_0076E7D3: repne scasb
            L_0076E7D5: not ecx
            L_0076E7D7: sub edi, ecx
            L_0076E7D9: mov eax, ecx
            L_0076E7DB: mov esi, edi
            L_0076E7DD: mov edi, edx
            L_0076E7DF: shr ecx, 0x2
            L_0076E7E2: rep movsd
            L_0076E7E4: mov ecx, eax
            L_0076E7E6: and ecx, 0x3
            L_0076E7E9: rep movsb
            L_0076E7EB: lea ecx, [ebp - 0x2b8]
            L_0076E7F1: call ext_006B9D70
            L_0076E7F6: mov esi, dword ptr [ebp - 0xc8]
            L_0076E7FC: test esi, esi
            L_0076E7FE: je L_0076E93A
            L_0076E804: mov ecx, esi
            L_0076E806: call ext_006C3030
            L_0076E80B: test eax, eax
            L_0076E80D: je L_0076E8C3
            L_0076E813: mov ecx, esi
            L_0076E815: call ext_006C3030
            L_0076E81A: mov edx, dword ptr [eax]
            L_0076E81C: mov ecx, eax
            L_0076E81E: call dword ptr [edx]
            L_0076E820: cmp eax, 0x4
            L_0076E823: je L_0076E86D
            L_0076E825: mov ecx, esi
            L_0076E827: call ext_006C3030
            L_0076E82C: mov edx, dword ptr [eax]
            L_0076E82E: mov ecx, eax
            L_0076E830: call dword ptr [edx]
            L_0076E832: cmp eax, 0x5
            L_0076E835: je L_0076E86D
            L_0076E837: mov ecx, esi
            L_0076E839: call ext_006C3030
            L_0076E83E: mov edx, dword ptr [eax]
            L_0076E840: mov ecx, eax
            L_0076E842: call dword ptr [edx]
            L_0076E844: cmp eax, 0x6
            L_0076E847: je L_0076E86D
            L_0076E849: mov ecx, esi
            L_0076E84B: call ext_006C3030
            L_0076E850: mov edx, dword ptr [eax]
            L_0076E852: mov ecx, eax
            L_0076E854: call dword ptr [edx]
            L_0076E856: cmp eax, 0x9
            L_0076E859: je L_0076E86D
            L_0076E85B: mov ecx, esi
            L_0076E85D: call ext_006C3030
            L_0076E862: mov edx, dword ptr [eax]
            L_0076E864: mov ecx, eax
            L_0076E866: call dword ptr [edx]
            L_0076E868: cmp eax, 0x7
            L_0076E86B: jne L_0076E8C3
            L_0076E86D: mov ecx, esi
            L_0076E86F: call ext_006BADB0
            L_0076E874: mov edi, eax
            L_0076E876: or ecx, -0x1
            L_0076E879: xor eax, eax
            L_0076E87B: repne scasb
            L_0076E87D: not ecx
            L_0076E87F: dec ecx
            L_0076E880: cmp ecx, 0x14
            L_0076E883: jae L_0076E89D
            L_0076E885: mov ecx, dword ptr [ebp - 0xc8]
            L_0076E88B: call ext_006BADB0
            L_0076E890: mov ecx, dword ptr [ebp - 0x18]
            L_0076E893: mov edi, eax
            L_0076E895: lea edx, [ecx + 0x78]
            L_0076E898: jmp L_0076E943
            L_0076E89D: push 0x14
            L_0076E89F: mov ecx, esi
            L_0076E8A1: call ext_006BADB0
            L_0076E8A6: mov ecx, dword ptr [ebp - 0x18]
            L_0076E8A9: push eax
            L_0076E8AA: add ecx, 0x78
            L_0076E8AD: push ecx
            L_0076E8AE: call dword ptr [mem_009252D0]
            L_0076E8B4: mov edx, dword ptr [ebp - 0x18]
            L_0076E8B7: add esp, 0xc
            L_0076E8BA: mov byte ptr [edx + 0x1f], 0x0
            L_0076E8BE: jmp L_0076E960
            L_0076E8C3: lea ecx, [ebp - 0x2b8]
            L_0076E8C9: call ext_006B9D10
            L_0076E8CE: push 0xaaed44
            L_0076E8D3: lea ecx, [ebp - 0x2b8]
            L_0076E8D9: mov byte ptr [ebp - 0x4], 0x27
            L_0076E8DD: call ext_006B9EC0
            L_0076E8E2: mov ecx, dword ptr [ebp - 0xc8]
            L_0076E8E8: call ext_006BADB0
            L_0076E8ED: push eax
            L_0076E8EE: lea ecx, [ebp - 0x2b8]
            L_0076E8F4: call ext_006BA220
            L_0076E8F9: lea ecx, [ebp - 0x2b8]
            L_0076E8FF: call ext_006E7460
            L_0076E904: mov ecx, dword ptr [ebp - 0x18]
            L_0076E907: mov edi, eax
            L_0076E909: xor eax, eax
            L_0076E90B: mov byte ptr [ebp - 0x4], 0xc
            L_0076E90F: lea edx, [ecx + 0x78]
            L_0076E912: or ecx, -0x1
            L_0076E915: repne scasb
            L_0076E917: not ecx
            L_0076E919: sub edi, ecx
            L_0076E91B: mov eax, ecx
            L_0076E91D: mov esi, edi
            L_0076E91F: mov edi, edx
            L_0076E921: shr ecx, 0x2
            L_0076E924: rep movsd
            L_0076E926: mov ecx, eax
            L_0076E928: and ecx, 0x3
            L_0076E92B: rep movsb
            L_0076E92D: lea ecx, [ebp - 0x2b8]
            L_0076E933: call ext_006B9D70
            L_0076E938: jmp L_0076E960
            L_0076E93A: mov eax, dword ptr [ebp - 0x18]
            L_0076E93D: lea edi, [eax + 0xb]
            L_0076E940: lea edx, [eax + 0x78]
            L_0076E943: or ecx, -0x1
            L_0076E946: xor eax, eax
            L_0076E948: repne scasb
            L_0076E94A: not ecx
            L_0076E94C: sub edi, ecx
            L_0076E94E: mov eax, ecx
            L_0076E950: mov esi, edi
            L_0076E952: mov edi, edx
            L_0076E954: shr ecx, 0x2
            L_0076E957: rep movsd
            L_0076E959: mov ecx, eax
            L_0076E95B: and ecx, 0x3
            L_0076E95E: rep movsb
            L_0076E960: mov eax, dword ptr [ebp - 0x60]
            L_0076E963: mov edi, dword ptr [ebp - 0x30]
            L_0076E966: push edi
            L_0076E967: mov esi, dword ptr [ebp - 0x138]
            L_0076E96D: mov ecx, dword ptr [eax + 0x8]
            L_0076E970: mov edx, dword ptr [eax + 0x4]
            L_0076E973: mov eax, dword ptr [eax]
            L_0076E975: push ecx
            L_0076E976: push edx
            L_0076E977: push eax
            L_0076E978: mov eax, dword ptr [ebp - 0x18]
            L_0076E97B: mov ecx, dword ptr [eax + 0x34]
            L_0076E97E: mov edx, dword ptr [eax + 0x30]
            L_0076E981: push ecx
            L_0076E982: push edx
            L_0076E983: mov ecx, esi
            L_0076E985: call ext_007709E0
            L_0076E98A: mov eax, dword ptr [ebp - 0xa0]
            L_0076E990: push edi
            L_0076E991: mov ecx, dword ptr [eax + 0x8]
            L_0076E994: mov edx, dword ptr [eax + 0x4]
            L_0076E997: mov eax, dword ptr [eax]
            L_0076E999: push ecx
            L_0076E99A: push edx
            L_0076E99B: push eax
            L_0076E99C: mov eax, dword ptr [ebp - 0x18]
            L_0076E99F: mov ecx, dword ptr [eax + 0x44]
            L_0076E9A2: mov edx, dword ptr [eax + 0x40]
            L_0076E9A5: push ecx
            L_0076E9A6: push edx
            L_0076E9A7: mov ecx, esi
            L_0076E9A9: call ext_007713B0
            L_0076E9AE: mov eax, dword ptr [ebp - 0x18]
            L_0076E9B1: mov ebx, dword ptr [ebp - 0xc4]
            L_0076E9B7: push edi
            L_0076E9B8: push ebx
            L_0076E9B9: mov ecx, dword ptr [eax + 0x54]
            L_0076E9BC: mov edx, dword ptr [eax + 0x50]
            L_0076E9BF: push ecx
            L_0076E9C0: push edx
            L_0076E9C1: mov ecx, esi
            L_0076E9C3: call ext_007714C0
            L_0076E9C8: mov eax, dword ptr [ebp - 0x18]
            L_0076E9CB: push edi
            L_0076E9CC: push ebx
            L_0076E9CD: mov ecx, dword ptr [eax + 0x64]
            L_0076E9D0: mov edx, dword ptr [eax + 0x60]
            L_0076E9D3: push ecx
            L_0076E9D4: push edx
            L_0076E9D5: mov ecx, esi
            L_0076E9D7: call ext_007714C0
            L_0076E9DC: mov eax, dword ptr [ebp - 0x18]
            L_0076E9DF: mov edi, dword ptr [ebp - 0x13c]
            L_0076E9E5: push 0x1
            L_0076E9E7: push edi
            L_0076E9E8: mov ecx, dword ptr [eax + 0x74]
            L_0076E9EB: mov edx, dword ptr [eax + 0x70]
            L_0076E9EE: push ecx
            L_0076E9EF: push edx
            L_0076E9F0: mov ecx, esi
            L_0076E9F2: call ext_007714C0
            L_0076E9F7: mov eax, dword ptr [ebp - 0x48]
            L_0076E9FA: mov ecx, dword ptr [ebp - 0xcc]
            L_0076EA00: push ecx
            L_0076EA01: mov edx, dword ptr [eax + 0x8]
            L_0076EA04: mov ecx, dword ptr [eax + 0x4]
            L_0076EA07: push edx
            L_0076EA08: mov edx, dword ptr [eax]
            L_0076EA0A: mov eax, dword ptr [ebp - 0x18]
            L_0076EA0D: push ecx
            L_0076EA0E: push edx
            L_0076EA0F: mov ecx, dword ptr [eax + 0x9c]
            L_0076EA15: mov edx, dword ptr [eax + 0x98]
            L_0076EA1B: push ecx
            L_0076EA1C: push edx
            L_0076EA1D: mov ecx, esi
            L_0076EA1F: call ext_007709E0
            L_0076EA24: mov al, byte ptr [esi + 0x300]
            L_0076EA2A: test al, al
            L_0076EA2C: jne L_0076EAAC
            L_0076EA2E: xor esi, esi
            L_0076EA30: mov eax, dword ptr [ebp - 0x124]
            L_0076EA36: cmp byte ptr [eax + esi], 0x0
            L_0076EA3A: je L_0076EA4C
            L_0076EA3C: mov ecx, dword ptr [ebp - 0x60]
            L_0076EA3F: mov ecx, dword ptr [ecx + 4*esi]
            L_0076EA42: test ecx, ecx
            L_0076EA44: je L_0076EA4C
            L_0076EA46: mov edx, dword ptr [ecx]
            L_0076EA48: push 0x1
            L_0076EA4A: call dword ptr [edx]
            L_0076EA4C: mov eax, dword ptr [ebp - 0x144]
            L_0076EA52: cmp byte ptr [eax + esi], 0x0
            L_0076EA56: je L_0076EA6B
            L_0076EA58: mov ecx, dword ptr [ebp - 0x88]
            L_0076EA5E: mov ecx, dword ptr [ecx + 4*esi]
            L_0076EA61: test ecx, ecx
            L_0076EA63: je L_0076EA6B
            L_0076EA65: mov edx, dword ptr [ecx]
            L_0076EA67: push 0x1
            L_0076EA69: call dword ptr [edx]
            L_0076EA6B: mov eax, dword ptr [ebp - 0x10c]
            L_0076EA71: cmp byte ptr [eax + esi], 0x0
            L_0076EA75: je L_0076EA8A
            L_0076EA77: mov ecx, dword ptr [ebp - 0xa0]
            L_0076EA7D: mov ecx, dword ptr [ecx + 4*esi]
            L_0076EA80: test ecx, ecx
            L_0076EA82: je L_0076EA8A
            L_0076EA84: mov edx, dword ptr [ecx]
            L_0076EA86: push 0x1
            L_0076EA88: call dword ptr [edx]
            L_0076EA8A: mov eax, dword ptr [ebp - 0xd4]
            L_0076EA90: cmp byte ptr [eax + esi], 0x0
            L_0076EA94: je L_0076EAA6
            L_0076EA96: mov ecx, dword ptr [ebp - 0x48]
            L_0076EA99: mov ecx, dword ptr [ecx + 4*esi]
            L_0076EA9C: test ecx, ecx
            L_0076EA9E: je L_0076EAA6
            L_0076EAA0: mov edx, dword ptr [ecx]
            L_0076EAA2: push 0x1
            L_0076EAA4: call dword ptr [edx]
            L_0076EAA6: inc esi
            L_0076EAA7: cmp esi, 0x3
            L_0076EAAA: jl L_0076EA30
            L_0076EAAC: mov al, byte ptr [ebp + 0xb]
            L_0076EAAF: test al, al
            L_0076EAB1: je L_0076EABF
            L_0076EAB3: test ebx, ebx
            L_0076EAB5: je L_0076EABF
            L_0076EAB7: mov eax, dword ptr [ebx]
            L_0076EAB9: push 0x1
            L_0076EABB: mov ecx, ebx
            L_0076EABD: call dword ptr [eax]
            L_0076EABF: test edi, edi
            L_0076EAC1: je L_0076EACB
            L_0076EAC3: mov edx, dword ptr [edi]
            L_0076EAC5: push 0x1
            L_0076EAC7: mov ecx, edi
            L_0076EAC9: call dword ptr [edx]
            L_0076EACB: mov esi, dword ptr [ebp - 0x18]
            L_0076EACE: lea ecx, [ebp - 0xe4]
            L_0076EAD4: mov byte ptr [ebp - 0x4], 0xb
            L_0076EAD8: call ext_006D2160
            L_0076EADD: lea ecx, [ebp - 0x11c]
            L_0076EAE3: mov byte ptr [ebp - 0x4], 0xa
            L_0076EAE7: call ext_006D2160
            L_0076EAEC: lea ecx, [ebp - 0x154]
            L_0076EAF2: mov byte ptr [ebp - 0x4], 0x9
            L_0076EAF6: call ext_006D2160
            L_0076EAFB: lea ecx, [ebp - 0x134]
            L_0076EB01: mov byte ptr [ebp - 0x4], 0x8
            L_0076EB05: call ext_006D2160
            L_0076EB0A: lea ecx, [ebp - 0x58]
            L_0076EB0D: mov byte ptr [ebp - 0x4], 0x7
            L_0076EB11: call ext_006D2160
            L_0076EB16: lea ecx, [ebp - 0xb0]
            L_0076EB1C: mov byte ptr [ebp - 0x4], 0x6
            L_0076EB20: call ext_006D2160
            L_0076EB25: lea ecx, [ebp - 0x98]
            L_0076EB2B: mov byte ptr [ebp - 0x4], 0x5
            L_0076EB2F: call ext_006D2160
            L_0076EB34: lea ecx, [ebp - 0x70]
            L_0076EB37: mov byte ptr [ebp - 0x4], 0x4
            L_0076EB3B: call ext_006D2160
            L_0076EB40: lea ecx, [ebp - 0x104]
            L_0076EB46: mov byte ptr [ebp - 0x4], 0x3
            L_0076EB4A: call ext_006D80A0
            L_0076EB4F: lea ecx, [ebp - 0x1f4]
            L_0076EB55: mov byte ptr [ebp - 0x4], 0x2
            L_0076EB59: call ext_006D80A0
            L_0076EB5E: lea ecx, [ebp - 0x1b4]
            L_0076EB64: mov byte ptr [ebp - 0x4], 0x1
            L_0076EB68: call ext_006D80A0
            L_0076EB6D: lea ecx, [ebp - 0x1d4]
            L_0076EB73: mov byte ptr [ebp - 0x4], 0x0
            L_0076EB77: call ext_006D80A0
            L_0076EB7C: lea ecx, [ebp - 0x174]
            L_0076EB82: mov dword ptr [ebp - 0x4], 0xffffffff
            L_0076EB89: call ext_006D80A0
            L_0076EB8E: mov ecx, dword ptr [ebp - 0xc]
            L_0076EB91: mov eax, esi
            L_0076EB93: pop edi
            L_0076EB94: pop esi
            L_0076EB95: pop ebx
            L_0076EB96: mov dword ptr fs:[0x0], ecx
            L_0076EB9D: mov esp, ebp
            L_0076EB9F: pop ebp
            L_0076EBA0: ret 0x4
            L_0076EBA3: nop
            L_0076EBA4: nop
            L_0076EBA5: nop
            L_0076EBA6: nop
            L_0076EBA7: nop
            L_0076EBA8: nop
            L_0076EBA9: nop
            L_0076EBAA: nop
            L_0076EBAB: nop
            L_0076EBAC: nop
            L_0076EBAD: nop
            L_0076EBAE: nop
            L_0076EBAF: nop
    }
}

// [0x0076EBB0] sub_0076EBB0 (7728 bytes)
extern "C" __declspec(naked) void __fastcall fn_0076EBB0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x8c0e70
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x3ec
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [ebp - 0x13c]
        mov     dword ptr [ebp - 0x18c], edi
        call    ext_006D2370
        xor     esi, esi
        lea     ecx, [ebp - 0x1ac]
        mov     dword ptr [ebp - 0x4], esi
        call    ext_006D2370
        lea     ecx, [ebp - 0x1ec]
        mov     byte ptr [ebp - 0x4], 0x1
        call    ext_006D2370
        push    0x4
        push    0x10
        lea     ecx, [ebp - 0x94]
        mov     byte ptr [ebp - 0x4], 0x2
        mov     dword ptr [ebp - 0x10], esi
        call    ext_006D2130
        lea     eax, [ebp - 0x84]
        mov     dword ptr [ebp - 0x80], eax
        push    0x4
        push    0x10
        lea     ecx, [ebp - 0xac]
        mov     byte ptr [ebp - 0x4], 0x3
        call    ext_006D2130
        lea     ecx, [ebp - 0x9c]
        mov     dword ptr [ebp - 0x98], ecx
        push    0x4
        push    0x10
        lea     ecx, [ebp - 0x60]
        mov     byte ptr [ebp - 0x4], 0x4
        call    ext_006D2130
        lea     edx, [ebp - 0x50]
        mov     dword ptr [ebp - 0x4c], edx
        push    0x1
        push    0x10
        lea     ecx, [ebp - 0x104]
        mov     byte ptr [ebp - 0x4], 0x5
        mov     dword ptr [ebp - 0x188], esi
        call    ext_006D2130
        lea     eax, [ebp - 0xf4]
        mov     dword ptr [ebp - 0xf0], eax
        push    0x1
        push    0x10
        lea     ecx, [ebp - 0x11c]
        mov     byte ptr [ebp - 0x4], 0x6
        call    ext_006D2130
        lea     ecx, [ebp - 0x10c]
        mov     dword ptr [ebp - 0x108], ecx
        push    0x1
        push    0x10
        lea     ecx, [ebp - 0xe4]
        mov     byte ptr [ebp - 0x4], 0x7
        call    ext_006D2130
        lea     edx, [ebp - 0xd4]
        mov     dword ptr [ebp - 0xd0], edx
        mov     ebx, dword ptr [ebp + 0x8]
        mov     byte ptr [ebp - 0x4], 0x8
        cmp     ebx, esi
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp - 0x70], esi
        mov     dword ptr [ebp - 0x6c], esi
        mov     dword ptr [ebp - 0x48], esi
        mov     dword ptr [ebp - 0x44], esi
        jne     L_0076ed77
        lea     ecx, [ebp - 0xe4]
        mov     byte ptr [ebp - 0x4], 0x7
        call    ext_006D2160
        lea     ecx, [ebp - 0x11c]
        mov     byte ptr [ebp - 0x4], 0x6
        call    ext_006D2160
        lea     ecx, [ebp - 0x104]
        mov     byte ptr [ebp - 0x4], 0x5
        call    ext_006D2160
        lea     ecx, [ebp - 0x60]
        mov     byte ptr [ebp - 0x4], 0x4
        call    ext_006D2160
        lea     ecx, [ebp - 0xac]
        mov     byte ptr [ebp - 0x4], 0x3
        call    ext_006D2160
        lea     ecx, [ebp - 0x94]
        mov     byte ptr [ebp - 0x4], 0x2
        call    ext_006D2160
        lea     ecx, [ebp - 0x1ec]
        mov     byte ptr [ebp - 0x4], 0x1
        call    ext_006D80A0
        lea     ecx, [ebp - 0x1ac]
        mov     byte ptr [ebp - 0x4], 0x0
        call    ext_006D80A0
        lea     ecx, [ebp - 0x13c]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    ext_006D80A0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr fs:[0x0], ecx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_0076ed77:
        push    0x3
        lea     ecx, [ebp - 0x94]
        call    ext_006D2300
        push    0x3
        lea     ecx, [ebp - 0xac]
        call    ext_006D2300
        push    0x3
        lea     ecx, [ebp - 0x60]
        call    ext_006D2300
        push    0x3
        lea     ecx, [ebp - 0x104]
        call    ext_006D2300
        push    0x3
        lea     ecx, [ebp - 0x11c]
        call    ext_006D2300
        push    0x3
        lea     ecx, [ebp - 0xe4]
        call    ext_006D2300
        xor     eax, eax
    L_0076edc4:
        mov     ecx, dword ptr [ebp - 0xf4]
        inc     eax
        cmp     eax, 0x3
        mov     byte ptr [ecx + eax - 0x1], 0x0
        mov     edx, dword ptr [ebp - 0x10c]
        mov     byte ptr [edx + eax - 0x1], 0x0
        mov     ecx, dword ptr [ebp - 0xd4]
        mov     byte ptr [ecx + eax - 0x1], 0x0
        jl      L_0076edc4
        mov     al, byte ptr [edi + 0x300]
        mov     byte ptr [ebp + 0xb], 0x0
        test    al, al
        mov     byte ptr [ebp - 0x26], 0x0
        mov     byte ptr [ebp - 0x19], 0x0
        je      L_0076f5d2
        lea     edx, [ebp - 0x48]
        lea     eax, [ebp - 0x70]
        push    edx
        push    eax
        mov     ecx, ebx
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9340
        push    0x6
        push    0x1
        lea     ecx, [ebp - 0x48]
        call    ext_006DABA0
        inc     eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x40], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9370
        mov     ecx, dword ptr [ebp - 0x84]
        mov     dword ptr [ecx], eax
        mov     ecx, ebx
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9390
        mov     edx, dword ptr [ebp - 0x84]
        mov     ecx, ebx
        mov     dword ptr [edx + 0x4], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C93B0
        mov     ecx, dword ptr [ebp - 0x84]
        mov     dword ptr [ecx + 0x8], eax
        mov     ecx, ebx
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C93D0
        mov     edx, dword ptr [ebp - 0x9c]
        mov     ecx, ebx
        mov     dword ptr [edx], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C93F0
        mov     ecx, dword ptr [ebp - 0x9c]
        mov     dword ptr [ecx + 0x4], eax
        mov     ecx, ebx
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9410
        mov     edx, dword ptr [ebp - 0x9c]
        mov     ecx, ebx
        mov     dword ptr [edx + 0x8], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9520
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x3c], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9570
        mov     dword ptr [ebp - 0x7c], eax
        mov     eax, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [eax]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076ef91
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, ebx
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0x9
        je      L_0076ef28
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076ef2a
    L_0076ef28:
        xor     eax, eax
    L_0076ef2a:
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ebp - 0xf4]
        mov     byte ptr [eax], 0x1
        mov     ecx, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [ecx]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x84]
        push    esi
        mov     ecx, dword ptr [edx]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     ecx, dword ptr [edx]
        call    ext_006CA540
    L_0076ef91:
        mov     eax, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076f054
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, ebx
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xa
        je      L_0076efe5
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076efe7
    L_0076efe5:
        xor     eax, eax
    L_0076efe7:
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [ebp - 0xf4]
        mov     byte ptr [eax + 0x1], 0x1
        mov     ecx, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x84]
        push    esi
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    0x1
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA540
    L_0076f054:
        mov     eax, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076f117
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, ebx
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xb
        je      L_0076f0a8
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f0aa
    L_0076f0a8:
        xor     eax, eax
    L_0076f0aa:
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [ebp - 0xf4]
        mov     byte ptr [eax + 0x2], 0x1
        mov     ecx, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x84]
        push    esi
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    0x2
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA540
    L_0076f117:
        mov     eax, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [eax]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076f1d3
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x1ac]
        push    ecx
        mov     ecx, ebx
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xc
        je      L_0076f16a
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f16c
    L_0076f16a:
        xor     eax, eax
    L_0076f16c:
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ebp - 0x10c]
        mov     byte ptr [eax], 0x1
        mov     ecx, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [ecx]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x9c]
        push    esi
        mov     ecx, dword ptr [edx]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x1ac]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     ecx, dword ptr [edx]
        call    ext_006CA540
    L_0076f1d3:
        mov     eax, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076f296
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x1ac]
        push    ecx
        mov     ecx, ebx
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xd
        je      L_0076f227
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f229
    L_0076f227:
        xor     eax, eax
    L_0076f229:
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [ebp - 0x10c]
        mov     byte ptr [eax + 0x1], 0x1
        mov     ecx, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x9c]
        push    esi
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    0x1
        lea     ecx, [ebp - 0x1ac]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA540
    L_0076f296:
        mov     eax, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA6A0
        cmp     eax, esi
        jne     L_0076f359
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x1ac]
        push    ecx
        mov     ecx, ebx
        call    ext_006C32C0
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xe
        je      L_0076f2ea
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f2ec
    L_0076f2ea:
        xor     eax, eax
    L_0076f2ec:
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [ebp - 0x10c]
        mov     byte ptr [eax + 0x2], 0x1
        mov     ecx, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x9c]
        push    esi
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA020
        push    esi
        push    esi
        push    esi
        push    0x2
        lea     ecx, [ebp - 0x1ac]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA540
    L_0076f359:
        mov     ecx, dword ptr [ebp - 0x3c]
        call    ext_006CA6A0
        mov     edi, eax
        cmp     edi, esi
        jne     L_0076f4a2
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFA0
        cmp     eax, 0x1
        mov     ecx, ebx
        jne     L_0076f3a3
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C1B0
        fstp    qword ptr [ebp - 0x38]
        jmp     L_0076f43b
    L_0076f3a3:
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFA0
        test    eax, eax
        mov     ecx, ebx
        jne     L_0076f3c6
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071CA40
        fstp    qword ptr [ebp - 0x38]
        jmp     L_0076f43b
    L_0076f3c6:
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071CA10
        fstp    qword ptr [ebp - 0xcc]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C080
        fstp    qword ptr [ebp - 0x164]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFC0
        fstp    qword ptr [ebp - 0xc0]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C020
        fdivr   qword ptr [ebp - 0xc0]
        fld     qword ptr [ebp - 0xcc]
        fmul    qword ptr [mem_00993C98]
        fptan
        fstp    st(0)
        fmul    st, st(1)
        fmul    qword ptr [ebp - 0x164]
        fld1
        fpatan
        fmul    qword ptr [mem_00993C80]
        fstp    qword ptr [ebp - 0x38]
        fstp    st(0)
    L_0076f43b:
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp + 0x8], eax
        cmp     eax, esi
        mov     byte ptr [ebp - 0x4], 0xf
        je      L_0076f45e
        mov     ecx, eax
        call    ext_006CA140
        mov     esi, eax
        jmp     L_0076f460
    L_0076f45e:
        xor     esi, esi
    L_0076f460:
        push    0x1
        mov     ecx, esi
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ebp - 0x3c], esi
        mov     byte ptr [ebp + 0xb], 0x1
        call    ext_006CA500
        push    0x0
        mov     ecx, esi
        call    ext_006CA020
        fld     qword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x18]
        push    0x0
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, eax
        call    ext_006C9B70
        push    0x1
        mov     ecx, esi
        jmp     L_0076f541
    L_0076f4a2:
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C080
        fstp    qword ptr [ebp - 0xcc]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFC0
        fstp    qword ptr [ebp - 0xc0]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C020
        fdivr   qword ptr [ebp - 0xc0]
        mov     ecx, dword ptr [ebp - 0x3c]
        push    edi
        fstp    qword ptr [ebp - 0xc0]
        call    ext_006CA500
        xor     esi, esi
        test    edi, edi
        jle     L_0076f53d
    L_0076f4f3:
        mov     ecx, dword ptr [ebp - 0x3c]
        push    esi
        call    ext_006CA020
        mov     ecx, eax
        mov     dword ptr [ebp - 0xb8], eax
        call    ext_006C9E80
        fmul    qword ptr [mem_00993C98]
        push    ecx
        mov     ecx, dword ptr [ebp - 0xb8]
        fptan
        fstp    st(0)
        fmul    qword ptr [ebp - 0xc0]
        fmul    qword ptr [ebp - 0xcc]
        fld1
        fpatan
        fmul    qword ptr [mem_00993C80]
        fstp    dword ptr [esp]
        call    ext_00789BA0
        inc     esi
        cmp     esi, edi
        jl      L_0076f4f3
    L_0076f53d:
        mov     ecx, dword ptr [ebp - 0x3c]
        push    edi
    L_0076f541:
        call    ext_006CA540
        mov     ecx, dword ptr [ebp - 0x7c]
        call    ext_006CA6A0
        test    eax, eax
        jne     L_0076f8d6
        push    0x6
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071B090
        fstp    qword ptr [ebp - 0x68]
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x10
        je      L_0076f599
        mov     ecx, eax
        call    ext_006CA140
        mov     esi, eax
        jmp     L_0076f59b
    L_0076f599:
        xor     esi, esi
    L_0076f59b:
        push    0x1
        mov     ecx, esi
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ebp - 0x7c], esi
        mov     byte ptr [ebp - 0x19], 0x1
        call    ext_006CA500
        push    0x0
        mov     ecx, esi
        call    ext_006CA020
        fld     qword ptr [ebp - 0x68]
        mov     edx, dword ptr [ebp - 0x18]
        push    0x0
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        jmp     L_0076f8c6
    L_0076f5d2:
        push    0x6
        push    esi
        push    esi
        push    esi
        push    esi
        push    esi
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x40], 0x1
        call    ext_006DA370
        lea     eax, [ebp - 0x13c]
        mov     ecx, ebx
        push    eax
        call    ext_006C3250
        lea     ecx, [ebp - 0x1ac]
        push    ecx
        mov     ecx, ebx
        call    ext_006C32C0
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFA0
        cmp     eax, 0x1
        mov     ecx, ebx
        jne     L_0076f62d
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C1B0
        fstp    qword ptr [ebp - 0x38]
        jmp     L_0076f6c5
    L_0076f62d:
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFA0
        test    eax, eax
        mov     ecx, ebx
        jne     L_0076f650
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071CA40
        fstp    qword ptr [ebp - 0x38]
        jmp     L_0076f6c5
    L_0076f650:
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C1B0
        fstp    qword ptr [ebp - 0xcc]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C080
        fstp    qword ptr [ebp - 0x164]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071BFC0
        fstp    qword ptr [ebp - 0xc0]
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071C020
        fdivr   qword ptr [ebp - 0xc0]
        fld     qword ptr [ebp - 0xcc]
        fmul    qword ptr [mem_00993C98]
        fptan
        fstp    st(0)
        fmul    st, st(1)
        fmul    qword ptr [ebp - 0x164]
        fld1
        fpatan
        fmul    qword ptr [mem_00993C80]
        fstp    qword ptr [ebp - 0x38]
        fstp    st(0)
    L_0076f6c5:
        mov     ecx, ebx
        call    ext_006C3030
        mov     ecx, eax
        call    ext_0071B090
        fstp    qword ptr [ebp - 0x68]
        xor     esi, esi
    L_0076f6d8:
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp + 0x8], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x11
        je      L_0076f6f9
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f6fb
    L_0076f6f9:
        xor     eax, eax
    L_0076f6fb:
        mov     edx, dword ptr [ebp - 0x84]
        push    0x98
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 4*esi], eax
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp + 0x8], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x12
        je      L_0076f729
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f72b
    L_0076f729:
        xor     eax, eax
    L_0076f72b:
        mov     ecx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ecx + 4*esi], eax
        mov     edx, dword ptr [ebp - 0xf4]
        mov     byte ptr [edx + esi], 0x1
        mov     eax, dword ptr [ebp - 0x10c]
        mov     byte ptr [eax + esi], 0x1
        mov     ecx, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [ecx + 4*esi]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x84]
        push    0x0
        mov     ecx, dword ptr [edx + 4*esi]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x84]
        push    0x1
        mov     ecx, dword ptr [edx + 4*esi]
        call    ext_006CA540
        mov     eax, dword ptr [ebp - 0x9c]
        push    0x1
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_006CA500
        mov     ecx, dword ptr [ebp - 0x9c]
        push    0x0
        mov     ecx, dword ptr [ecx + 4*esi]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x1ac]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    ext_006C9B70
        mov     ecx, dword ptr [ebp - 0x9c]
        push    0x1
        mov     ecx, dword ptr [ecx + 4*esi]
        call    ext_006CA540
        inc     esi
        cmp     esi, 0x3
        jl      L_0076f6d8
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp + 0x8], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x13
        je      L_0076f82b
        mov     ecx, eax
        call    ext_006CA140
        mov     esi, eax
        jmp     L_0076f82d
    L_0076f82b:
        xor     esi, esi
    L_0076f82d:
        push    0x1
        mov     ecx, esi
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ebp - 0x3c], esi
        mov     byte ptr [ebp + 0xb], 0x1
        call    ext_006CA500
        push    0x0
        mov     ecx, esi
        call    ext_006CA020
        fld     qword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x14]
        push    0x0
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    edx
        push    ecx
        mov     ecx, eax
        call    ext_006C9B70
        push    0x1
        mov     ecx, esi
        call    ext_006CA540
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x14
        je      L_0076f892
        mov     ecx, eax
        call    ext_006CA140
        mov     esi, eax
        jmp     L_0076f894
    L_0076f892:
        xor     esi, esi
    L_0076f894:
        push    0x1
        mov     ecx, esi
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ebp - 0x7c], esi
        mov     byte ptr [ebp - 0x19], 0x1
        call    ext_006CA500
        push    0x0
        mov     ecx, esi
        call    ext_006CA020
        fld     qword ptr [ebp - 0x68]
        mov     edx, dword ptr [ebp - 0x14]
        push    0x0
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    edx
        push    ecx
    L_0076f8c6:
        mov     ecx, eax
        call    ext_006C9B70
        push    0x1
        mov     ecx, esi
        call    ext_006CA540
    L_0076f8d6:
        mov     ecx, ebx
        call    ext_006C2BB0
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [ebp - 0xe8], esi
        je      L_0076fcab
        lea     edx, [ebp - 0x48]
        lea     eax, [ebp - 0x70]
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9340
        push    0x6
        push    0x1
        lea     ecx, [ebp - 0x48]
        call    ext_006DABA0
        mov     ecx, dword ptr [ebp - 0x18c]
        inc     eax
        mov     dword ptr [ebp - 0xb8], eax
        mov     al, byte ptr [ecx + 0x300]
        test    al, al
        je      L_0076fb8e
        mov     ecx, esi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9370
        mov     edx, dword ptr [ebp - 0x50]
        mov     ecx, esi
        mov     dword ptr [edx], eax
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C9390
        mov     ecx, dword ptr [ebp - 0x50]
        mov     dword ptr [ecx + 0x4], eax
        mov     ecx, esi
        call    ext_006DC480
        mov     ecx, eax
        call    ext_006C93B0
        mov     edx, dword ptr [ebp - 0x50]
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [eax]
        call    ext_006CA6A0
        cmp     eax, edi
        jne     L_0076fa19
        push    0x6
        push    edi
        push    edi
        push    edi
        push    edi
        push    edi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, esi
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, edi
        mov     byte ptr [ebp - 0x4], 0x15
        je      L_0076f9b7
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076f9b9
    L_0076f9b7:
        xor     eax, eax
    L_0076f9b9:
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ebp - 0xd4]
        mov     byte ptr [eax], 0x1
        mov     ecx, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ecx]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x50]
        push    0x0
        mov     ecx, dword ptr [edx]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     ecx, dword ptr [edx]
        call    ext_006CA540
    L_0076fa19:
        mov     eax, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_006CA6A0
        test    eax, eax
        jne     L_0076fad1
        push    0x6
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, esi
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x16
        je      L_0076fa6a
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fa6c
    L_0076fa6a:
        xor     eax, eax
    L_0076fa6c:
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [ebp - 0xd4]
        mov     byte ptr [eax + 0x1], 0x1
        mov     ecx, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x50]
        push    0x0
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, edi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_006CA540
    L_0076fad1:
        mov     eax, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [eax + 0x8]
        call    ext_006CA6A0
        test    eax, eax
        jne     L_00770469
        push    0x6
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     ecx, [ebp - 0x13c]
        push    ecx
        mov     ecx, esi
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x17
        je      L_0076fb22
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fb24
    L_0076fb22:
        xor     eax, eax
    L_0076fb24:
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [ebp - 0xd4]
        mov     byte ptr [eax + 0x2], 0x1
        mov     ecx, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ecx + 0x8]
        call    ext_006CA500
        mov     edx, dword ptr [ebp - 0x50]
        push    0x0
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    0x2
        lea     ecx, [ebp - 0x13c]
        mov     esi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        mov     ecx, esi
        call    ext_006C9B70
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     ecx, dword ptr [edx + 0x8]
        call    ext_006CA540
        jmp     L_00770469
    L_0076fb8e:
        push    0x6
        push    edi
        push    edi
        push    edi
        push    edi
        push    edi
        lea     ecx, [ebp - 0x18]
        call    ext_006DA370
        lea     eax, [ebp - 0x13c]
        mov     ecx, esi
        push    eax
        call    ext_006C3250
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, edi
        mov     byte ptr [ebp - 0x4], 0x18
        je      L_0076fbcc
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fbce
    L_0076fbcc:
        xor     eax, eax
    L_0076fbce:
        mov     ecx, dword ptr [ebp - 0x50]
        push    0x98
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [ecx], eax
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, edi
        mov     byte ptr [ebp - 0x4], 0x19
        je      L_0076fbf8
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fbfa
    L_0076fbf8:
        xor     eax, eax
    L_0076fbfa:
        mov     edx, dword ptr [ebp - 0x50]
        push    0x98
        mov     byte ptr [ebp - 0x4], 0x8
        mov     dword ptr [edx + 0x4], eax
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, edi
        mov     byte ptr [ebp - 0x4], 0x1a
        je      L_0076fc25
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fc27
    L_0076fc25:
        xor     eax, eax
    L_0076fc27:
        mov     ecx, dword ptr [ebp - 0x50]
        mov     byte ptr [ebp - 0x4], 0x8
        xor     esi, esi
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [ebp - 0xd4]
        mov     byte ptr [edx], 0x1
        mov     eax, dword ptr [ebp - 0xd4]
        mov     byte ptr [eax + 0x1], 0x1
        mov     ecx, dword ptr [ebp - 0xd4]
        mov     byte ptr [ecx + 0x2], 0x1
    L_0076fc50:
        mov     edx, dword ptr [ebp - 0x50]
        push    0x1
        mov     ecx, dword ptr [edx + 4*esi]
        call    ext_006CA500
        mov     eax, dword ptr [ebp - 0x50]
        push    0x0
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x13c]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [ebp - 0x18]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006C9B70
        mov     eax, dword ptr [ebp - 0x50]
        push    0x1
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_006CA540
        inc     esi
        cmp     esi, 0x3
        jl      L_0076fc50
        jmp     L_00770469
    L_0076fcab:
        lea     ecx, [ebp - 0x184]
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x2c], edi
        call    ext_006D2370
        lea     ecx, [ebp - 0x15c]
        mov     byte ptr [ebp - 0x4], 0x1b
        call    ext_006D2370
        lea     ecx, [ebp - 0x214]
        mov     byte ptr [ebp - 0x4], 0x1c
        call    ext_006D2370
        lea     ecx, [ebp - 0x1cc]
        mov     byte ptr [ebp - 0x4], 0x1d
        call    ext_006D2370
        lea     ecx, [ebp - 0x254]
        mov     byte ptr [ebp - 0x4], 0x1e
        call    ext_006D2370
        lea     ecx, [ebp - 0x234]
        mov     byte ptr [ebp - 0x4], 0x1f
        call    ext_006D2370
        lea     ecx, [ebp - 0x2fc]
        mov     byte ptr [ebp - 0x4], 0x20
        call    ext_00714570
        mov     edi, dword ptr [ebp - 0x40]
        mov     byte ptr [ebp - 0x4], 0x21
        mov     dword ptr [ebp - 0xb8], edi
        xor     esi, esi
    L_0076fd25:
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x22
        je      L_0076fd46
        mov     ecx, eax
        call    ext_006CA140
        jmp     L_0076fd48
    L_0076fd46:
        xor     eax, eax
    L_0076fd48:
        mov     ecx, dword ptr [ebp - 0x50]
        push    edi
        mov     byte ptr [ebp - 0x4], 0x21
        mov     dword ptr [ecx + 4*esi], eax
        mov     edx, dword ptr [ebp - 0xd4]
        mov     byte ptr [edx + esi], 0x1
        mov     eax, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_006CA500
        inc     esi
        cmp     esi, 0x3
        jl      L_0076fd25
        push    0x98
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [ebp - 0x20], eax
        test    eax, eax
        mov     byte ptr [ebp - 0x4], 0x23
        je      L_0076fd95
        mov     ecx, eax
        call    ext_006CA140
        mov     dword ptr [ebp - 0xc4], eax
        jmp     L_0076fd9f
    L_0076fd95:
        mov     dword ptr [ebp - 0xc4], 0x0
    L_0076fd9f:
        mov     esi, dword ptr [ebp - 0x40]
        mov     ecx, dword ptr [ebp - 0xc4]
        push    esi
        mov     byte ptr [ebp - 0x4], 0x21
        mov     dword ptr [ebp - 0x188], ecx
        mov     byte ptr [ebp - 0x26], 0x1
        call    ext_006CA500
        xor     edi, edi
        test    esi, esi
        mov     dword ptr [ebp - 0xec], edi
        jle     L_007703db
    L_0076fdcc:
        push    0x6
        push    0x0
        push    0x0
        push    edi
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x30]
        call    ext_006DAB00
        push    0x3ff00000
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x1ec]
        call    ext_00787430
        xor     esi, esi
    L_0076fe01:
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     eax, dword ptr [ebp - 0x84]
        mov     edx, dword ptr [ebp - 0x30]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [eax + 4*esi]
        push    edx
        call    ext_006CD350
        fstp    qword ptr [ebp - 0x78]
        push    esi
        lea     ecx, [ebp - 0x214]
        call    ext_006D23F0
        mov     ecx, dword ptr [ebp - 0x78]
        mov     edx, dword ptr [ebp - 0x74]
        mov     dword ptr [eax], ecx
        push    0x0
        mov     dword ptr [eax + 0x4], edx
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     edx, dword ptr [ebp - 0x9c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edx + 4*esi]
        call    ext_006CD350
        fstp    qword ptr [ebp - 0x78]
        push    esi
        lea     ecx, [ebp - 0x1cc]
        call    ext_006D23F0
        mov     ecx, dword ptr [ebp - 0x78]
        mov     edx, dword ptr [ebp - 0x74]
        mov     dword ptr [eax], ecx
        inc     esi
        cmp     esi, 0x3
        mov     dword ptr [eax + 0x4], edx
        jl      L_0076fe01
        fld     qword ptr [ebp - 0x1cc]
        mov     eax, dword ptr [ebp - 0x1bc]
        mov     ecx, dword ptr [ebp - 0x1b8]
        mov     edx, dword ptr [ebp - 0x1c4]
        mov     dword ptr [ebp - 0x25c], eax
        mov     eax, dword ptr [ebp - 0x1c0]
        mov     dword ptr [ebp - 0x258], ecx
        fmul    qword ptr [mem_00993808]
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x264], edx
        mov     dword ptr [ebp - 0x260], eax
        mov     dword ptr [ebp - 0x20], ecx
        fstp    qword ptr [ebp - 0x78]
        fld     qword ptr [ebp - 0x78]
        fsincos
        mov     eax, dword ptr [ebp - 0x20]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x32c]
        fld     qword ptr [ebp - 0x32c]
        fstp    qword ptr [ebp - 0x1f4]
        fld     qword ptr [ebp - 0x264]
        fmul    qword ptr [mem_00993808]
        lea     edx, [ebp - 0x68]
        mov     dword ptr [ebp - 0x20], edx
        fstp    qword ptr [ebp - 0x78]
        fld     qword ptr [ebp - 0x78]
        fsincos
        mov     eax, dword ptr [ebp - 0x20]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x31c]
        fld     qword ptr [ebp - 0x31c]
        fstp    qword ptr [ebp - 0x78]
        fld     qword ptr [ebp - 0x25c]
        fmul    qword ptr [mem_00993808]
        lea     eax, [ebp - 0xb4]
        mov     dword ptr [ebp - 0x20], eax
        fstp    qword ptr [ebp - 0x324]
        fld     qword ptr [ebp - 0x324]
        fsincos
        mov     eax, dword ptr [ebp - 0x20]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x304]
        fld     qword ptr [ebp - 0x304]
        fld     qword ptr [ebp - 0x1f4]
        fld     qword ptr [ebp - 0x78]
        fmul    st, st(1)
        fld     qword ptr [ebp - 0x78]
        fmul    qword ptr [ebp - 0x38]
        fstp    qword ptr [ebp - 0x24]
        fld     qword ptr [ebp - 0xb4]
        fmul    qword ptr [ebp - 0x68]
        fstp    qword ptr [ebp - 0x2fc]
        fld     st(2)
        fmul    qword ptr [ebp - 0x68]
        fstp    qword ptr [ebp - 0x2f4]
        fld     qword ptr [ebp - 0x78]
        fchs
        fstp    qword ptr [ebp - 0x2ec]
        fld     st(0)
        fmul    qword ptr [ebp - 0xb4]
        fld     st(3)
        fmul    qword ptr [ebp - 0x38]
        fsubp   st(1), st
        fstp    qword ptr [ebp - 0x2dc]
        fmul    st, st(2)
        fld     qword ptr [ebp - 0xb4]
        fmul    qword ptr [ebp - 0x38]
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x2d4]
        fld     qword ptr [ebp - 0x68]
        fmul    st, st(1)
        fstp    qword ptr [ebp - 0x2cc]
        fld     qword ptr [ebp - 0x24]
        fmul    qword ptr [ebp - 0xb4]
        fld     st(2)
        fmul    st, st(2)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x2bc]
        fld     qword ptr [ebp - 0x24]
        fmul    st, st(2)
        fld     qword ptr [ebp - 0xb4]
        fmul    st, st(2)
        fsubp   st(1), st
        fstp    qword ptr [ebp - 0x2b4]
        fstp    st(0)
        fstp    st(0)
        fld     qword ptr [ebp - 0x68]
        fmul    qword ptr [ebp - 0x38]
        fstp    qword ptr [ebp - 0x2ac]
        push    0x3ff00000
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x40240000
        push    0x0
        lea     ecx, [ebp - 0x184]
        call    ext_00787430
        fld     qword ptr [ebp - 0x184]
        fld     qword ptr [ebp - 0x17c]
        fld     qword ptr [ebp - 0x174]
        fmul    qword ptr [ebp - 0x2bc]
        fld     qword ptr [ebp - 0x17c]
        fmul    qword ptr [ebp - 0x2dc]
        lea     ecx, [ebp - 0x214]
        push    ecx
        lea     ecx, [ebp - 0x184]
        faddp   st(1), st
        fld     qword ptr [ebp - 0x184]
        fmul    qword ptr [ebp - 0x2fc]
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x184]
        fld     qword ptr [ebp - 0x174]
        fmul    qword ptr [ebp - 0x2b4]
        fld     qword ptr [ebp - 0x17c]
        fmul    qword ptr [ebp - 0x2d4]
        faddp   st(1), st
        fld     qword ptr [ebp - 0x2f4]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x17c]
        fld     qword ptr [ebp - 0x174]
        fmul    qword ptr [ebp - 0x2ac]
        fld     qword ptr [ebp - 0x2cc]
        fmul    st, st(2)
        faddp   st(1), st
        fld     qword ptr [ebp - 0x2ec]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x174]
        fstp    st(0)
        fstp    st(0)
        call    ext_006D26D0
        lea     edx, [ebp - 0x184]
        lea     ecx, [ebp - 0x1ec]
        push    edx
        call    ext_007873F0
        push    0x3ff00000
        push    0x0
        push    0x3ff00000
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x15c]
        call    ext_00787430
        push    0x3ff00000
        push    0x0
        push    0x0
        push    0x0
        push    0x3ff00000
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x254]
        call    ext_00787430
        fld     qword ptr [ebp - 0x15c]
        fld     qword ptr [ebp - 0x154]
        fld     qword ptr [ebp - 0x14c]
        fmul    qword ptr [ebp - 0x2bc]
        fld     qword ptr [ebp - 0x154]
        fmul    qword ptr [ebp - 0x2dc]
        faddp   st(1), st
        fld     qword ptr [ebp - 0x15c]
        fmul    qword ptr [ebp - 0x2fc]
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x15c]
        fld     qword ptr [ebp - 0x14c]
        fmul    qword ptr [ebp - 0x2b4]
        fld     qword ptr [ebp - 0x154]
        fmul    qword ptr [ebp - 0x2d4]
        lea     eax, [ebp - 0x254]
        lea     ecx, [ebp - 0x15c]
        push    eax
        faddp   st(1), st
        fld     qword ptr [ebp - 0x2f4]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x154]
        fld     qword ptr [ebp - 0x14c]
        fmul    qword ptr [ebp - 0x2ac]
        fld     qword ptr [ebp - 0x2cc]
        fmul    st, st(2)
        faddp   st(1), st
        fld     qword ptr [ebp - 0x2ec]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    qword ptr [ebp - 0x14c]
        fstp    st(0)
        fstp    st(0)
        call    ext_006D2700
        call    ext_006A7256
        fmul    qword ptr [mem_00996C80]
        lea     ecx, [ebp - 0x214]
        push    ecx
        lea     ecx, [ebp - 0x15c]
        fsubr   qword ptr [mem_00993C68]
        fstp    qword ptr [ebp - 0x24]
        call    ext_006D26D0
        lea     edx, [ebp - 0x254]
        lea     eax, [ebp - 0x3f8]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x184]
        call    ext_006D2720
        push    eax
        lea     ecx, [ebp - 0x234]
        mov     byte ptr [ebp - 0x4], 0x24
        call    ext_007873F0
        lea     ecx, [ebp - 0x3f8]
        mov     byte ptr [ebp - 0x4], 0x21
        call    ext_006D80A0
        lea     ecx, [ebp - 0x15c]
        lea     edx, [ebp - 0x36c]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x234]
        call    ext_006D2630
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x26c], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x268], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [ebp - 0x274], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x270], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     byte ptr [ebp - 0x4], 0x25
        mov     dword ptr [ebp - 0x27c], ecx
        mov     dword ptr [ebp - 0x278], edx
        fld     qword ptr [ebp - 0x27c]
        fmul    st(0), st
        fld     qword ptr [ebp - 0x274]
        fmul    st(0), st
        faddp   st(1), st
        fld     qword ptr [ebp - 0x26c]
        fmul    st(0), st
        faddp   st(1), st
        fsqrt
        fstp    qword ptr [ebp - 0x314]
        fld     qword ptr [ebp - 0x314]
        lea     eax, [ebp - 0x38c]
        lea     ecx, [ebp - 0x234]
        fstp    qword ptr [ebp - 0x1f4]
        push    eax
        call    ext_006D2500
        lea     ecx, [ebp - 0x15c]
        lea     edx, [ebp - 0x34c]
        push    ecx
        push    edx
        mov     ecx, eax
        mov     byte ptr [ebp - 0x4], 0x26
        call    ext_006D2630
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x164], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x160], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [ebp - 0xcc], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0xc8], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0xc0], ecx
        mov     dword ptr [ebp - 0xbc], edx
        fld     qword ptr [ebp - 0xc0]
        fmul    st(0), st
        fld     qword ptr [ebp - 0xcc]
        fmul    st(0), st
        faddp   st(1), st
        fld     qword ptr [ebp - 0x164]
        fmul    st(0), st
        faddp   st(1), st
        fsqrt
        fstp    qword ptr [ebp - 0x30c]
        fld     qword ptr [ebp - 0x30c]
        fcomp   qword ptr [ebp - 0x1f4]
        mov     byte ptr [ebp - 0x25], 0x1
        fnstsw  ax
        test    ah, 0x41
        jne     L_00770308
        mov     byte ptr [ebp - 0x25], 0x0
    L_00770308:
        lea     ecx, [ebp - 0x34c]
        call    ext_006D80A0
        lea     ecx, [ebp - 0x38c]
        mov     byte ptr [ebp - 0x4], 0x25
        call    ext_006D80A0
        lea     ecx, [ebp - 0x36c]
        mov     byte ptr [ebp - 0x4], 0x21
        call    ext_006D80A0
        mov     al, byte ptr [ebp - 0x25]
        test    al, al
        je      L_00770340
        fld     qword ptr [ebp - 0x24]
        fchs
        fstp    qword ptr [ebp - 0x24]
    L_00770340:
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [ebp - 0x30]
        push    0x0
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebp - 0x7c]
        call    ext_006CD350
        fadd    qword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0xc4]
        push    edi
        fstp    qword ptr [ebp - 0x24]
        call    ext_006CA020
        fld     qword ptr [ebp - 0x24]
        mov     edx, dword ptr [ebp - 0x2c]
        push    0x0
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebp - 0x30]
        fstp    dword ptr [esp]
        push    edx
        push    ecx
        mov     ecx, eax
        call    ext_006C9B70
        xor     esi, esi
    L_00770382:
        mov     eax, dword ptr [ebp - 0x50]
        mov     edx, dword ptr [ebp - 0xec]
        push    edx
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_006CA020
        push    0x0
        push    0x0
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x1ec]
        mov     edi, eax
        call    ext_006D23F0
        fld     qword ptr [eax]
        mov     edx, dword ptr [ebp - 0x30]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x2c]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006C9B70
        inc     esi
        cmp     esi, 0x3
        jl      L_00770382
        mov     edi, dword ptr [ebp - 0xec]
        mov     eax, dword ptr [ebp - 0x40]
        inc     edi
        cmp     edi, eax
        mov     dword ptr [ebp - 0xec], edi
        jl      L_0076fdcc
    L_007703db:
        mov     edi, dword ptr [ebp - 0x40]
        xor     esi, esi
    L_007703e0:
        mov     eax, dword ptr [ebp - 0x50]
        push    edi
        mov     ecx, dword ptr [esi + eax]
        call    ext_006CA540
        add     esi, 0x4
        cmp     esi, 0xc
        jl      L_007703e0
        mov     ecx, dword ptr [ebp - 0xc4]
        push    edi
        call    ext_006CA540
        lea     ecx, [ebp - 0x2fc]
        mov     byte ptr [ebp - 0x4], 0x20
        call    ext_006D80A0
        lea     ecx, [ebp - 0x234]
        mov     byte ptr [ebp - 0x4], 0x1f
        call    ext_006D80A0
        lea     ecx, [ebp - 0x254]
        mov     byte ptr [ebp - 0x4], 0x1e
        call    ext_006D80A0
        lea     ecx, [ebp - 0x1cc]
        mov     byte ptr [ebp - 0x4], 0x1d
        call    ext_006D80A0
        lea     ecx, [ebp - 0x214]
        mov     byte ptr [ebp - 0x4], 0x1c
        call    ext_006D80A0
        lea     ecx, [ebp - 0x15c]
        mov     byte ptr [ebp - 0x4], 0x1b
        call    ext_006D80A0
        lea     ecx, [ebp - 0x184]
        mov     byte ptr [ebp - 0x4], 0x8
        call    ext_006D80A0
    L_00770469:
        mov     ecx, dword ptr [ebp - 0xb8]
        mov     eax, dword ptr [ebp - 0x40]
        push    ecx
        push    eax
        push    eax
        lea     edx, [ebp - 0x10]
        push    eax
        push    edx
        call    ext_0079F790
        mov     eax, dword ptr [ebp - 0x10]
        add     esp, 0x14
        mov     ecx, ebx
        mov     byte ptr [eax + 0xa], 0x0
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xa
        jae     L_007704ca
        mov     ecx, ebx
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp - 0x10]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L_007704e8
    L_007704ca:
        push    0xa
        mov     ecx, ebx
        call    ext_006BADB0
        push    eax
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    dword ptr [mem_009252D0]
        mov     ecx, dword ptr [ebp - 0x10]
        add     esp, 0xc
        mov     byte ptr [ecx + 0xa], 0x0
    L_007704e8:
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, ebx
        mov     byte ptr [edx + 0x1f], 0x0
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        test    eax, eax
        je      L_00770607
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x4
        je      L_00770586
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x5
        je      L_00770586
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x6
        je      L_00770586
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x9
        je      L_00770586
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x7
        jne     L_00770607
    L_00770586:
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x14
        jae     L_007705dd
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, eax
        xor     eax, eax
        lea     edx, [ecx + 0xb]
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
        and     ecx, 0x3
        rep     movsb
        jmp     L_0077067f
    L_007705dd:
        push    0x14
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        mov     ecx, dword ptr [ebp - 0x10]
        push    eax
        add     ecx, 0xb
        push    ecx
        call    dword ptr [mem_009252D0]
        mov     edx, dword ptr [ebp - 0x10]
        add     esp, 0xc
        mov     byte ptr [edx + 0x1f], 0x0
        jmp     L_0077067f
    L_00770607:
        lea     ecx, [ebp - 0x3d8]
        call    ext_006B9D10
        push    0xaaed44
        lea     ecx, [ebp - 0x3d8]
        mov     byte ptr [ebp - 0x4], 0x27
        call    ext_006B9EC0
        mov     ecx, ebx
        call    ext_006C2720
        mov     ecx, eax
        call    ext_006BADB0
        push    eax
        lea     ecx, [ebp - 0x3d8]
        call    ext_006BA220
        lea     ecx, [ebp - 0x3d8]
        call    ext_006E7460
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, eax
        xor     eax, eax
        mov     byte ptr [ebp - 0x4], 0x8
        lea     edx, [ecx + 0xb]
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
        and     ecx, 0x3
        rep     movsb
        lea     ecx, [ebp - 0x3d8]
        call    ext_006B9D70
    L_0077067f:
        mov     esi, dword ptr [ebp - 0xe8]
        test    esi, esi
        je      L_007707c3
        mov     ecx, esi
        call    ext_006C3030
        test    eax, eax
        je      L_0077074c
        mov     ecx, esi
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x4
        je      L_007706f6
        mov     ecx, esi
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x5
        je      L_007706f6
        mov     ecx, esi
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x6
        je      L_007706f6
        mov     ecx, esi
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x9
        je      L_007706f6
        mov     ecx, esi
        call    ext_006C3030
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        cmp     eax, 0x7
        jne     L_0077074c
    L_007706f6:
        mov     ecx, esi
        call    ext_006BADB0
        mov     edi, eax
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x14
        jae     L_00770726
        mov     ecx, dword ptr [ebp - 0xe8]
        call    ext_006BADB0
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, eax
        lea     edx, [ecx + 0x58]
        jmp     L_007707cc
    L_00770726:
        push    0x14
        mov     ecx, esi
        call    ext_006BADB0
        mov     ecx, dword ptr [ebp - 0x10]
        push    eax
        add     ecx, 0x58
        push    ecx
        call    dword ptr [mem_009252D0]
        mov     edx, dword ptr [ebp - 0x10]
        add     esp, 0xc
        mov     byte ptr [edx + 0x1f], 0x0
        jmp     L_007707e9
    L_0077074c:
        lea     ecx, [ebp - 0x3d8]
        call    ext_006B9D10
        push    0xaaed44
        lea     ecx, [ebp - 0x3d8]
        mov     byte ptr [ebp - 0x4], 0x28
        call    ext_006B9EC0
        mov     ecx, dword ptr [ebp - 0xe8]
        call    ext_006BADB0
        push    eax
        lea     ecx, [ebp - 0x3d8]
        call    ext_006BA220
        lea     ecx, [ebp - 0x3d8]
        call    ext_006E7460
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, eax
        xor     eax, eax
        mov     byte ptr [ebp - 0x4], 0x8
        lea     edx, [ecx + 0x58]
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
        and     ecx, 0x3
        rep     movsb
        lea     ecx, [ebp - 0x3d8]
        call    ext_006B9D70
        jmp     L_007707e9
    L_007707c3:
        mov     eax, dword ptr [ebp - 0x10]
        lea     edi, [eax + 0xb]
        lea     edx, [eax + 0x58]
    L_007707cc:
        or      ecx, -0x1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
    L_007707e9:
        mov     eax, dword ptr [ebp - 0x84]
        mov     edi, dword ptr [ebp - 0x40]
        push    edi
        mov     esi, dword ptr [ebp - 0x18c]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x34]
        mov     edx, dword ptr [eax + 0x30]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_007709E0
        mov     eax, dword ptr [ebp - 0x3c]
        push    edi
        push    eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x44]
        mov     edx, dword ptr [eax + 0x40]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_007714C0
        mov     ebx, dword ptr [ebp - 0x188]
        push    edi
        test    ebx, ebx
        je      L_00770850
        mov     eax, dword ptr [ebp - 0x10]
        push    ebx
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, dword ptr [eax + 0x50]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_007714C0
        mov     edi, dword ptr [ebp - 0x7c]
        jmp     L_00770866
    L_00770850:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0x7c]
        push    edi
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, dword ptr [eax + 0x50]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_007714C0
    L_00770866:
        mov     eax, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ebp - 0xb8]
        push    ecx
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x10]
        push    ecx
        push    edx
        mov     ecx, dword ptr [eax + 0x7c]
        mov     edx, dword ptr [eax + 0x78]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_007709E0
        mov     al, byte ptr [esi + 0x300]
        test    al, al
        jne     L_007708f9
        xor     esi, esi
    L_00770899:
        mov     eax, dword ptr [ebp - 0xf4]
        cmp     byte ptr [eax + esi], 0x0
        je      L_007708b8
        mov     ecx, dword ptr [ebp - 0x84]
        mov     ecx, dword ptr [ecx + 4*esi]
        test    ecx, ecx
        je      L_007708b8
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_007708b8:
        mov     eax, dword ptr [ebp - 0x10c]
        cmp     byte ptr [eax + esi], 0x0
        je      L_007708d7
        mov     ecx, dword ptr [ebp - 0x9c]
        mov     ecx, dword ptr [ecx + 4*esi]
        test    ecx, ecx
        je      L_007708d7
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_007708d7:
        mov     eax, dword ptr [ebp - 0xd4]
        cmp     byte ptr [eax + esi], 0x0
        je      L_007708f3
        mov     ecx, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ecx + 4*esi]
        test    ecx, ecx
        je      L_007708f3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_007708f3:
        inc     esi
        cmp     esi, 0x3
        jl      L_00770899
    L_007708f9:
        mov     al, byte ptr [ebp + 0xb]
        test    al, al
        je      L_0077090d
        mov     ecx, dword ptr [ebp - 0x3c]
        test    ecx, ecx
        je      L_0077090d
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_0077090d:
        mov     al, byte ptr [ebp - 0x26]
        test    al, al
        je      L_00770920
        test    ebx, ebx
        je      L_00770920
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx]
    L_00770920:
        mov     al, byte ptr [ebp - 0x19]
        test    al, al
        je      L_00770933
        test    edi, edi
        je      L_00770933
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
    L_00770933:
        mov     esi, dword ptr [ebp - 0x10]
        lea     ecx, [ebp - 0xe4]
        mov     byte ptr [ebp - 0x4], 0x7
        call    ext_006D2160
        lea     ecx, [ebp - 0x11c]
        mov     byte ptr [ebp - 0x4], 0x6
        call    ext_006D2160
        lea     ecx, [ebp - 0x104]
        mov     byte ptr [ebp - 0x4], 0x5
        call    ext_006D2160
        lea     ecx, [ebp - 0x60]
        mov     byte ptr [ebp - 0x4], 0x4
        call    ext_006D2160
        lea     ecx, [ebp - 0xac]
        mov     byte ptr [ebp - 0x4], 0x3
        call    ext_006D2160
        lea     ecx, [ebp - 0x94]
        mov     byte ptr [ebp - 0x4], 0x2
        call    ext_006D2160
        lea     ecx, [ebp - 0x1ec]
        mov     byte ptr [ebp - 0x4], 0x1
        call    ext_006D80A0
        lea     ecx, [ebp - 0x1ac]
        mov     byte ptr [ebp - 0x4], 0x0
        call    ext_006D80A0
        lea     ecx, [ebp - 0x13c]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    ext_006D80A0
        mov     ecx, dword ptr [ebp - 0xc]
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        mov     esp, ebp
        pop     ebp
        ret     0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00769190] sub_00769190 (5936 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9DA0();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9F80();
extern "C" void ext_006BA220();
extern "C" void ext_006BADB0();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_006E7460();
extern "C" void ext_006FD600();
extern "C" void ext_006FDD40();
extern "C" void ext_006FE4B0();
extern "C" void ext_00702200();
extern "C" void ext_007025B0();
extern "C" void ext_00702700();
extern "C" void ext_00702780();
extern "C" void ext_007027C0();
extern "C" void ext_00702B40();
extern "C" void ext_00702BE0();
extern "C" void ext_00702C60();
extern "C" void ext_00702D60();
extern "C" void ext_00702E60();
extern "C" void ext_00702EE0();
extern "C" void ext_0070C060();
extern "C" void ext_0070C130();
extern "C" void ext_0070C200();
extern "C" void ext_0070C2D0();
extern "C" void ext_0070C370();
extern "C" void ext_0070C3A0();
extern "C" void ext_00714570();
extern "C" void ext_007718D0();
extern "C" void ext_00787430();
extern "C" void ext_007A3210();
extern "C" int mem_009252D0;
extern "C" int mem_0092A270;
extern "C" int mem_0092A278;
extern "C" int mem_00991558;
extern "C" int mem_00993808;
extern "C" int mem_00993828;
extern "C" int mem_00993CA0;
extern "C" __declspec(naked) void __fastcall fn_00769190(void* self, int edx_unused, int a0, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8c085a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x684
        push ebx
        mov dword ptr [ebp - 0x8c], ecx
        push esi
        xor ebx, ebx
        push edi
        lea ecx, [ebp - 0x1b0]
        mov dword ptr [ebp - 0x10], ebx
        call ext_006B9D10
        mov eax, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x8]
        push ebx
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 0x4], ebx
        call ext_006FDD40
        push ebx
        mov ebx, dword ptr [ebp + 0x10]
        push ebx
        mov ecx, edi
        mov esi, eax
        call ext_006FD600
        mov ecx, dword ptr [ebp + 0x14]
        push 0x0
        push ecx
        mov ecx, edi
        mov dword ptr [ebp + 0x8], eax
        call ext_006FD600
        mov edi, eax
        test edi, edi
        mov dword ptr [ebp + 0x10], edi
        je L_00769221
        mov ecx, edi
        call ext_007025B0
        cmp eax, 0x6
        jne L_00769217
        mov ecx, edi
        call ext_00702700
        test eax, eax
        je L_00769221
    L_00769217:
        mov dword ptr [ebp + 0x10], 0x0
        mov edi, dword ptr [ebp + 0x10]
    L_00769221:
        mov ecx, dword ptr [ebp + 0x8]
        test ecx, ecx
        je L_00769286
        call ext_007025B0
        cmp eax, 0x6
        jne L_0076923E
        mov ecx, dword ptr [ebp + 0x8]
        call ext_00702700
        test eax, eax
        je L_00769245
    L_0076923E:
        test edi, edi
        je L_00769266
        mov dword ptr [ebp + 0x8], edi
    L_00769245:
        mov eax, dword ptr [ebp + 0x8]
        test eax, eax
        je L_00769286
        mov ecx, eax
        call ext_00702200
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_0076926F
        mov dword ptr [ebp + 0x8], eax
        jmp L_00769283
    L_00769266:
        mov dword ptr [ebp + 0x8], 0x0
        jmp L_007692BB
    L_0076926F:
        mov ecx, dword ptr [ebp + 0x8]
        call ext_00702200
        mov ecx, dword ptr [ebp - 0x8c]
        push eax
        call ext_007718D0
    L_00769283:
        mov edi, dword ptr [ebp + 0x10]
    L_00769286:
        test edi, edi
        je L_007692BB
        mov ecx, edi
        call ext_00702200
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_007692A4
        mov dword ptr [ebp + 0x10], eax
        jmp L_007692B8
    L_007692A4:
        mov ecx, dword ptr [ebp + 0x10]
        call ext_00702200
        mov ecx, dword ptr [ebp - 0x8c]
        push eax
        call ext_007718D0
    L_007692B8:
        mov edi, dword ptr [ebp + 0x10]
    L_007692BB:
        lea edx, [ebp - 0x10]
        push edx
        call ext_007A3210
        add esp, 0x4
        test esi, esi
        je L_007694CC
        lea eax, [ebp - 0x80]
        mov ecx, esi
        push eax
        call ext_0070C060
        fld qword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fstp dword ptr [ecx + 0x14]
        lea ecx, [ebp - 0x80]
        call ext_006D80A0
        lea edx, [ebp - 0x80]
        mov ecx, esi
        push edx
        call ext_0070C060
        fld qword ptr [eax + 0x8]
        mov eax, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [eax + 0x18]
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        push ecx
        mov ecx, esi
        call ext_0070C060
        fld qword ptr [eax + 0x10]
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [edx + 0x1c]
        call ext_006D80A0
        lea eax, [ebp - 0x80]
        mov ecx, esi
        push eax
        call ext_0070C130
        fld qword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fstp dword ptr [ecx + 0x20]
        lea ecx, [ebp - 0x80]
        call ext_006D80A0
        lea edx, [ebp - 0x80]
        mov ecx, esi
        push edx
        call ext_0070C130
        fld qword ptr [eax + 0x8]
        mov eax, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [eax + 0x24]
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        push ecx
        mov ecx, esi
        call ext_0070C130
        fld qword ptr [eax + 0x10]
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [edx + 0x28]
        call ext_006D80A0
        lea eax, [ebp - 0x80]
        mov ecx, esi
        push eax
        call ext_0070C200
        fld qword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fstp dword ptr [ecx + 0x2c]
        lea ecx, [ebp - 0x80]
        call ext_006D80A0
        lea edx, [ebp - 0x80]
        mov ecx, esi
        push edx
        call ext_0070C200
        fld qword ptr [eax + 0x8]
        mov eax, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [eax + 0x30]
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        push ecx
        mov ecx, esi
        call ext_0070C200
        fld qword ptr [eax + 0x10]
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x80]
        fstp dword ptr [edx + 0x34]
        call ext_006D80A0
        lea eax, [ebp - 0x21c]
        mov ecx, esi
        push eax
        call ext_0070C200
        mov edi, eax
        lea ecx, [ebp - 0x60]
        mov byte ptr [ebp - 0x4], 0x1
        push ecx
        mov ecx, esi
        call ext_0070C200
        mov dword ptr [ebp - 0x34], eax
        lea edx, [ebp - 0x80]
        mov ecx, esi
        push edx
        mov byte ptr [ebp - 0x4], 0x2
        call ext_0070C200
        fld qword ptr [eax + 0x10]
        mov eax, dword ptr [ebp - 0x34]
        mov ecx, dword ptr [ebp - 0x10]
        fadd qword ptr [eax + 0x8]
        fadd qword ptr [edi]
        fmul qword ptr [mem_00993CA0]
        fstp dword ptr [ecx + 0x3c]
        lea ecx, [ebp - 0x80]
        call ext_006D80A0
        lea ecx, [ebp - 0x60]
        mov byte ptr [ebp - 0x4], 0x1
        call ext_006D80A0
        lea ecx, [ebp - 0x21c]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006D80A0
        mov ecx, esi
        call ext_0070C3A0
        fmul qword ptr [mem_00993828]
        mov edx, dword ptr [ebp - 0x10]
        lea eax, [ebp - 0x60]
        push eax
        mov ecx, esi
        fstp dword ptr [edx + 0x38]
        call ext_0070C2D0
        mov edi, eax
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x3
        push ecx
        mov ecx, esi
        call ext_0070C2D0
        mov dword ptr [ebp - 0x34], eax
        lea edx, [ebp - 0x21c]
        mov ecx, esi
        push edx
        mov byte ptr [ebp - 0x4], 0x4
        call ext_0070C2D0
        fld qword ptr [edi]
        fadd qword ptr [eax]
        mov eax, dword ptr [ebp - 0x34]
        mov ecx, dword ptr [ebp - 0x10]
        fadd qword ptr [eax]
        fmul qword ptr [mem_00991558]
        fstp dword ptr [ecx + 0x4c]
        lea ecx, [ebp - 0x21c]
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x3
        call ext_006D80A0
        lea ecx, [ebp - 0x60]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006D80A0
        mov ecx, esi
        call ext_0070C370
        fsubr qword ptr [mem_0092A270]
        mov edx, dword ptr [ebp - 0x10]
        mov edi, dword ptr [ebp + 0x10]
        fstp dword ptr [edx + 0x44]
        mov eax, dword ptr [ebp - 0x10]
        mov byte ptr [eax + 0x5a], 0x1
    L_007694CC:
        mov eax, dword ptr [ebp + 0x8]
        test eax, eax
        jne L_0076953A
        mov ecx, esi
        call ext_006BADB0
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0xf
        jae L_00769517
        mov ecx, esi
        call ext_006BADB0
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebp - 0x10]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        jmp L_0076A88D
    L_00769517:
        push 0xf
        mov ecx, esi
        call ext_006BADB0
        push eax
        mov eax, dword ptr [ebp - 0x10]
        push eax
        call dword ptr [mem_009252D0]
        mov ecx, dword ptr [ebp - 0x10]
        add esp, 0xc
        mov byte ptr [ecx + 0xf], 0x0
        jmp L_0076A88D
    L_0076953A:
        test edi, edi
        jne L_00769697
        push ebx
        lea ecx, [ebp - 0x2b4]
        call ext_006B9DA0
        mov esi, eax
        push 0xaaed38
        lea ecx, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x5
        call ext_006B9D80
        mov edi, eax
        mov edx, dword ptr [ebp + 0xc]
        lea ecx, [ebp - 0x398]
        push edx
        mov byte ptr [ebp - 0x4], 0x6
        call ext_006B9DA0
        mov dword ptr [ebp - 0x34], eax
        push 0xaaed30
        lea ecx, [ebp - 0x430]
        mov byte ptr [ebp - 0x4], 0x7
        call ext_006B9D80
        mov dword ptr [ebp + 0xc], eax
        mov eax, dword ptr [ebp - 0x8c]
        mov byte ptr [ebp - 0x4], 0x8
        mov ecx, dword ptr [eax + 0xd0]
        push ecx
        lea ecx, [ebp - 0x300]
        call ext_006B9DA0
        mov edx, dword ptr [ebp + 0xc]
        mov byte ptr [ebp - 0x4], 0x9
        push edx
        push eax
        lea eax, [ebp - 0x4c8]
        push eax
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x34]
        lea edx, [ebp - 0x34c]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0xa
        call ext_006B9F80
        push edi
        push eax
        lea eax, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0xb
        push eax
        call ext_006B9F80
        push esi
        lea ecx, [ebp - 0x1fc]
        push eax
        push ecx
        mov byte ptr [ebp - 0x4], 0xc
        call ext_006B9F80
        add esp, 0x30
        push eax
        lea ecx, [ebp - 0x1b0]
        mov byte ptr [ebp - 0x4], 0xd
        call ext_006B9E60
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0xc
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0xb
        call ext_006B9D70
        lea ecx, [ebp - 0x34c]
        mov byte ptr [ebp - 0x4], 0xa
        call ext_006B9D70
        lea ecx, [ebp - 0x4c8]
        mov byte ptr [ebp - 0x4], 0x9
        call ext_006B9D70
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x8
        call ext_006B9D70
        lea ecx, [ebp - 0x430]
        mov byte ptr [ebp - 0x4], 0x7
        call ext_006B9D70
        lea ecx, [ebp - 0x398]
        mov byte ptr [ebp - 0x4], 0x6
        call ext_006B9D70
        lea ecx, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x5
        call ext_006B9D70
        mov byte ptr [ebp - 0x4], 0x0
        lea ecx, [ebp - 0x2b4]
        jmp L_0076987A
    L_00769697:
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [ebp - 0x3e4]
        push edx
        call ext_006B9DA0
        mov esi, eax
        push 0xaa8cac
        lea ecx, [ebp - 0x5ac]
        mov byte ptr [ebp - 0x4], 0xe
        call ext_006B9D80
        mov edi, eax
        push ebx
        lea ecx, [ebp - 0x5f8]
        mov byte ptr [ebp - 0x4], 0xf
        call ext_006B9DA0
        mov dword ptr [ebp - 0x1c], eax
        push 0xaa8cac
        lea ecx, [ebp - 0x560]
        mov byte ptr [ebp - 0x4], 0x10
        call ext_006B9D80
        mov dword ptr [ebp - 0x2c], eax
        mov eax, dword ptr [ebp + 0xc]
        lea ecx, [ebp - 0x164]
        push eax
        mov byte ptr [ebp - 0x4], 0x11
        call ext_006B9DA0
        mov dword ptr [ebp - 0x34], eax
        push 0xaaed30
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x12
        call ext_006B9D80
        mov dword ptr [ebp + 0xc], eax
        mov ecx, dword ptr [ebp - 0x8c]
        mov byte ptr [ebp - 0x4], 0x13
        mov edx, dword ptr [ecx + 0xd0]
        lea ecx, [ebp - 0x34c]
        push edx
        call ext_006B9DA0
        mov ecx, dword ptr [ebp + 0xc]
        lea edx, [ebp - 0x4c8]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x14
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x34]
        lea edx, [ebp - 0x300]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x15
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x2c]
        lea edx, [ebp - 0x430]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x16
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x1c]
        lea edx, [ebp - 0x398]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x17
        call ext_006B9F80
        push edi
        push eax
        lea eax, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x18
        push eax
        call ext_006B9F80
        push esi
        lea ecx, [ebp - 0x2b4]
        push eax
        push ecx
        mov byte ptr [ebp - 0x4], 0x19
        call ext_006B9F80
        add esp, 0x48
        push eax
        lea ecx, [ebp - 0x1b0]
        mov byte ptr [ebp - 0x4], 0x1a
        call ext_006B9E60
        lea ecx, [ebp - 0x2b4]
        mov byte ptr [ebp - 0x4], 0x19
        call ext_006B9D70
        lea ecx, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x18
        call ext_006B9D70
        lea ecx, [ebp - 0x398]
        mov byte ptr [ebp - 0x4], 0x17
        call ext_006B9D70
        lea ecx, [ebp - 0x430]
        mov byte ptr [ebp - 0x4], 0x16
        call ext_006B9D70
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x15
        call ext_006B9D70
        lea ecx, [ebp - 0x4c8]
        mov byte ptr [ebp - 0x4], 0x14
        call ext_006B9D70
        lea ecx, [ebp - 0x34c]
        mov byte ptr [ebp - 0x4], 0x13
        call ext_006B9D70
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x12
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x11
        call ext_006B9D70
        lea ecx, [ebp - 0x560]
        mov byte ptr [ebp - 0x4], 0x10
        call ext_006B9D70
        lea ecx, [ebp - 0x5f8]
        mov byte ptr [ebp - 0x4], 0xf
        call ext_006B9D70
        lea ecx, [ebp - 0x5ac]
        mov byte ptr [ebp - 0x4], 0xe
        call ext_006B9D70
        mov byte ptr [ebp - 0x4], 0x0
        lea ecx, [ebp - 0x3e4]
    L_0076987A:
        call ext_006B9D70
        lea ecx, [ebp - 0x1b0]
        call ext_006B99C0
        cmp eax, 0xf
        jae L_007698C1
        lea ecx, [ebp - 0x1b0]
        call ext_006E7460
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebp - 0x10]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebp - 0x10]
        mov byte ptr [eax + 0xf], 0x0
    L_007698C1:
        mov ecx, dword ptr [ebp + 0x8]
        call ext_00702200
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0xc
        jae L_0076990E
        mov ebx, dword ptr [ebp + 0x8]
        mov ecx, ebx
        call ext_00702200
        mov ecx, dword ptr [ebp - 0x10]
        mov edi, eax
        xor eax, eax
        lea edx, [ecx + 0x64]
        or ecx, -1
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp L_00769CCB
    L_0076990E:
        lea ecx, [ebp - 0x164]
        call ext_006B9D10
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x1b
        call ext_006B9D10
        mov edi, dword ptr [ebp + 0x8]
        push 0x1
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 0x1c
        call ext_00702200
        lea ecx, [ebp - 0x3e4]
        push eax
        push ecx
        call ext_006FE4B0
        add esp, 0xc
        push eax
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x1d
        call ext_006B9E60
        lea ecx, [ebp - 0x3e4]
        mov byte ptr [ebp - 0x4], 0x1c
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        call ext_006B99C0
        cmp eax, 0xc
        jg L_0076998D
        lea ecx, [ebp - 0x164]
        call ext_006E7460
        mov edx, dword ptr [ebp - 0x10]
        add edx, 0x64
        jmp L_00769C84
    L_0076998D:
        push 0xaaed1c
        lea ecx, [ebp - 0xe4]
        call ext_006B9D80
        mov esi, eax
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 0x1e
        call ext_00702200
        push eax
        lea ecx, [ebp - 0x514]
        call ext_006B9D80
        mov edi, eax
        push 0xaaed14
        lea ecx, [ebp - 0x47c]
        mov byte ptr [ebp - 0x4], 0x1f
        call ext_006B9D80
        mov dword ptr [ebp - 0x14], eax
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x644]
        push edx
        mov byte ptr [ebp - 0x4], 0x20
        call ext_006B9D80
        mov dword ptr [ebp - 0x34], eax
        push 0xaaed04
        lea ecx, [ebp - 0x690]
        mov byte ptr [ebp - 0x4], 0x21
        call ext_006B9D80
        mov dword ptr [ebp - 0x2c], eax
        push ebx
        lea ecx, [ebp - 0x34c]
        mov byte ptr [ebp - 0x4], 0x22
        call ext_006B9DA0
        mov dword ptr [ebp - 0x1c], eax
        push 0xaaecd0
        lea ecx, [ebp - 0x4c8]
        mov byte ptr [ebp - 0x4], 0x23
        call ext_006B9D80
        mov dword ptr [ebp + 0xc], eax
        push 0xaaecb8
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x24
        call ext_006B9D80
        lea ecx, [ebp - 0x164]
        lea edx, [ebp - 0x430]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x25
        call ext_006B9F80
        mov ecx, dword ptr [ebp + 0xc]
        lea edx, [ebp - 0x398]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x26
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x1c]
        lea edx, [ebp - 0x268]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x27
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x2c]
        lea edx, [ebp - 0x2b4]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x28
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x34]
        lea edx, [ebp - 0x560]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x29
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x14]
        lea edx, [ebp - 0x5f8]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x2a
        call ext_006B9F80
        add esp, 0x48
        push edi
        push eax
        lea eax, [ebp - 0x5ac]
        mov byte ptr [ebp - 0x4], 0x2b
        push eax
        call ext_006B9F80
        push esi
        lea ecx, [ebp - 0x3e4]
        push eax
        push ecx
        mov byte ptr [ebp - 0x4], 0x2c
        call ext_006B9F80
        add esp, 0x18
        push eax
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x2d
        call ext_006B9E60
        lea ecx, [ebp - 0x3e4]
        mov byte ptr [ebp - 0x4], 0x2c
        call ext_006B9D70
        lea ecx, [ebp - 0x5ac]
        mov byte ptr [ebp - 0x4], 0x2b
        call ext_006B9D70
        lea ecx, [ebp - 0x5f8]
        mov byte ptr [ebp - 0x4], 0x2a
        call ext_006B9D70
        lea ecx, [ebp - 0x560]
        mov byte ptr [ebp - 0x4], 0x29
        call ext_006B9D70
        lea ecx, [ebp - 0x2b4]
        mov byte ptr [ebp - 0x4], 0x28
        call ext_006B9D70
        lea ecx, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x27
        call ext_006B9D70
        lea ecx, [ebp - 0x398]
        mov byte ptr [ebp - 0x4], 0x26
        call ext_006B9D70
        lea ecx, [ebp - 0x430]
        mov byte ptr [ebp - 0x4], 0x25
        call ext_006B9D70
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x24
        call ext_006B9D70
        lea ecx, [ebp - 0x4c8]
        mov byte ptr [ebp - 0x4], 0x23
        call ext_006B9D70
        lea ecx, [ebp - 0x34c]
        mov byte ptr [ebp - 0x4], 0x22
        call ext_006B9D70
        lea ecx, [ebp - 0x690]
        mov byte ptr [ebp - 0x4], 0x21
        call ext_006B9D70
        lea ecx, [ebp - 0x644]
        mov byte ptr [ebp - 0x4], 0x20
        call ext_006B9D70
        lea ecx, [ebp - 0x47c]
        mov byte ptr [ebp - 0x4], 0x1f
        call ext_006B9D70
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x1e
        call ext_006B9D70
        lea ecx, [ebp - 0xe4]
        mov byte ptr [ebp - 0x4], 0x1c
        call ext_006B9D70
        lea ecx, [ebp - 0x1fc]
        call ext_006E7460
        mov edx, dword ptr [ebp - 0x8c]
        push eax
        lea ecx, [edx + 0x60]
        call ext_006BA220
        push ebx
        lea ecx, [ebp - 0x47c]
        call ext_006B9DA0
        mov esi, eax
        push 0xaaed38
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x2e
        call ext_006B9D80
        push esi
        push eax
        lea eax, [ebp - 0xe4]
        mov bl, 0x2f
        push eax
        mov byte ptr [ebp - 0x4], bl
        call ext_006B9F80
        add esp, 0xc
        push eax
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x30
        call ext_006B9E60
        lea ecx, [ebp - 0xe4]
        mov byte ptr [ebp - 0x4], bl
        call ext_006B9D70
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x2e
        call ext_006B9D70
        lea ecx, [ebp - 0x47c]
        mov byte ptr [ebp - 0x4], 0x1c
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        call ext_006E7460
        mov ecx, dword ptr [ebp - 0x10]
        lea edx, [ecx + 0x64]
    L_00769C84:
        mov edi, eax
        or ecx, -1
        xor eax, eax
        mov byte ptr [ebp - 0x4], 0x1b
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebp - 0x10]
        mov byte ptr [ecx + 0x70], 0x0
        lea ecx, [ebp - 0x1fc]
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006B9D70
        mov ebx, dword ptr [ebp + 0x8]
    L_00769CCB:
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, ebx
        mov dword ptr [edx + 0x74], 0x3f800000
        call ext_00702D60
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je L_00769D70
        mov ecx, ebx
        call ext_00702BE0
        fstp qword ptr [ebp - 0x28]
        mov ecx, ebx
        call ext_00702E60
        fdivr qword ptr [ebp - 0x28]
        mov ecx, ebx
        fchs
        fstp qword ptr [ebp - 0x28]
        call ext_00702E60
        fdivr qword ptr [mem_0092A270]
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, ebx
        fsubr qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993828]
        fsubr qword ptr [ebp - 0x28]
        fstp dword ptr [eax + 0x94]
        call ext_00702C60
        fstp qword ptr [ebp - 0x28]
        mov ecx, ebx
        call ext_00702EE0
        fdivr qword ptr [ebp - 0x28]
        mov ecx, ebx
        fchs
        fstp qword ptr [ebp - 0x28]
        call ext_00702EE0
        fdivr qword ptr [mem_0092A270]
        mov ecx, dword ptr [ebp - 0x10]
        fsubr qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993828]
        fsubr qword ptr [ebp - 0x28]
        fchs
        fstp dword ptr [ecx + 0x98]
        jmp L_0076A057
    L_00769D70:
        lea ecx, [ebp - 0x60]
        call ext_006D2370
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x31
        call ext_006D2370
        lea ecx, [ebp - 0x118]
        mov byte ptr [ebp - 0x4], 0x32
        call ext_00714570
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        mov ecx, ebx
        mov byte ptr [ebp - 0x4], 0x33
        call ext_00702C60
        fsub qword ptr [mem_00993828]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x28]
        call ext_00702EE0
        fdivr qword ptr [ebp - 0x28]
        sub esp, 0x8
        mov ecx, ebx
        fchs
        fstp qword ptr [esp]
        call ext_00702BE0
        fsub qword ptr [mem_00993828]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x28]
        call ext_00702E60
        fdivr qword ptr [ebp - 0x28]
        sub esp, 0x8
        lea ecx, [ebp - 0x60]
        fchs
        fstp qword ptr [esp]
        call ext_00787430
        mov ecx, ebx
        call ext_00702D60
        fchs
        fstp qword ptr [ebp - 0x18]
        push 0x2
        lea ecx, [ebp - 0x80]
        call ext_006D23F0
        mov edx, dword ptr [ebp - 0x18]
        mov ecx, dword ptr [ebp - 0x14]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebp - 0x70]
        fld qword ptr [ebp - 0x80]
        mov eax, dword ptr [ebp - 0x6c]
        mov ecx, dword ptr [ebp - 0x78]
        fmul qword ptr [mem_00993808]
        mov dword ptr [ebp - 0x28], edx
        mov edx, dword ptr [ebp - 0x74]
        mov dword ptr [ebp - 0x24], eax
        lea eax, [ebp - 0x30]
        mov dword ptr [ebp - 0x38], ecx
        mov dword ptr [ebp - 0x34], edx
        fstp qword ptr [ebp - 0x98]
        mov dword ptr [ebp + 0xc], eax
        fld qword ptr [ebp - 0x98]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x38]
        fmul qword ptr [mem_00993808]
        lea ecx, [ebp - 0x20]
        mov dword ptr [ebp + 0xc], ecx
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x98]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x28]
        lea edx, [ebp - 0x18]
        mov dword ptr [ebp + 0xc], edx
        fmul qword ptr [mem_00993808]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x38]
        fmul st, st(1)
        fld qword ptr [ebp - 0x38]
        fmul qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x20]
        fstp qword ptr [ebp - 0x118]
        fld st(2)
        fmul qword ptr [ebp - 0x20]
        fstp qword ptr [ebp - 0x110]
        fld qword ptr [ebp - 0x38]
        fchs
        fstp qword ptr [ebp - 0x108]
        fld st(0)
        fmul qword ptr [ebp - 0x18]
        fld st(3)
        fmul qword ptr [ebp - 0x30]
        fsubp st(1), st
        fstp qword ptr [ebp - 0xf8]
        fmul st, st(2)
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x30]
        faddp st(1), st
        fstp qword ptr [ebp - 0xf0]
        fld qword ptr [ebp - 0x20]
        fmul st, st(1)
        fstp qword ptr [ebp - 0xe8]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [ebp - 0x18]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fstp qword ptr [ebp - 0xd8]
        fld qword ptr [ebp - 0x28]
        fmul st, st(2)
        fld qword ptr [ebp - 0x18]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [ebp - 0xd0]
        fstp st(0)
        fstp st(0)
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0xc8]
        fld qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x58]
        fld qword ptr [ebp - 0x60]
        fmul qword ptr [ebp - 0x118]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xd8]
        faddp st(1), st
        fld qword ptr [ebp - 0x58]
        fmul qword ptr [ebp - 0xf8]
        faddp st(1), st
        fadd qword ptr [ebp - 0xb8]
        fstp qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xd0]
        fld qword ptr [ebp - 0x58]
        fmul qword ptr [ebp - 0xf0]
        faddp st(1), st
        fld qword ptr [ebp - 0x110]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [ebp - 0xb0]
        fstp qword ptr [ebp - 0x58]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xc8]
        fld qword ptr [ebp - 0xe8]
        fmul st, st(2)
        faddp st(1), st
        fld qword ptr [ebp - 0x108]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [ebp - 0xa8]
        push 0x0
        lea ecx, [ebp - 0x60]
        fstp qword ptr [ebp - 0x50]
        fstp st(0)
        fstp st(0)
        call ext_006D23F0
        fld qword ptr [eax]
        fsub qword ptr [mem_00993828]
        push 0x1
        lea ecx, [ebp - 0x60]
        fstp qword ptr [eax]
        call ext_006D23F0
        fld qword ptr [eax]
        fsub qword ptr [mem_00993828]
        push 0x0
        lea ecx, [ebp - 0x60]
        fstp qword ptr [eax]
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [ebp - 0x10]
        push 0x1
        lea ecx, [ebp - 0x60]
        fstp dword ptr [eax + 0x94]
        call ext_006D23F0
        fld qword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fchs
        fstp dword ptr [ecx + 0x98]
        mov ecx, ebx
        call ext_00702D60
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x118]
        fchs
        fstp dword ptr [edx + 0x9c]
        mov byte ptr [ebp - 0x4], 0x32
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x31
        call ext_006D80A0
        lea ecx, [ebp - 0x60]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006D80A0
    L_0076A057:
        mov ecx, ebx
        call ext_00702E60
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, ebx
        fstp dword ptr [eax + 0x8c]
        call ext_00702EE0
        mov ecx, dword ptr [ebp - 0x10]
        fstp dword ptr [ecx + 0x90]
        mov ecx, ebx
        call ext_00702780
        test eax, eax
        jne L_0076A08E
        mov edx, dword ptr [ebp - 0x10]
        mov dword ptr [edx + 0x78], 0x1
        jmp L_0076A098
    L_0076A08E:
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [eax + 0x78], 0x2
    L_0076A098:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        je L_0076A88D
        mov ecx, ebx
        call ext_00702200
        mov edi, eax
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0xc
        jae L_0076A0EF
        mov ecx, ebx
        call ext_00702200
        mov ecx, dword ptr [ebp - 0x10]
        mov edi, eax
        xor eax, eax
        lea edx, [ecx + 0x16c]
        or ecx, -1
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp L_0076A4A0
    L_0076A0EF:
        lea ecx, [ebp - 0x164]
        call ext_006B9D10
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x34
        call ext_006B9D10
        push 0x1
        mov ecx, ebx
        mov byte ptr [ebp - 0x4], 0x35
        call ext_00702200
        lea ecx, [ebp - 0xe4]
        push eax
        push ecx
        call ext_006FE4B0
        add esp, 0xc
        push eax
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x36
        call ext_006B9E60
        lea ecx, [ebp - 0xe4]
        mov byte ptr [ebp - 0x4], 0x35
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        call ext_006B99C0
        cmp eax, 0xc
        jle L_0076A445
        push 0xaaed1c
        lea ecx, [ebp - 0x34c]
        call ext_006B9D80
        mov esi, eax
        mov ecx, ebx
        mov byte ptr [ebp - 0x4], 0x37
        call ext_00702200
        push eax
        lea ecx, [ebp - 0x4c8]
        call ext_006B9D80
        mov edi, eax
        push 0xaaed14
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x38
        call ext_006B9D80
        mov dword ptr [ebp - 0x1c], eax
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x430]
        push edx
        mov byte ptr [ebp - 0x4], 0x39
        call ext_006B9D80
        mov dword ptr [ebp - 0x14], eax
        push 0xaaed04
        lea ecx, [ebp - 0x398]
        mov byte ptr [ebp - 0x4], 0x3a
        call ext_006B9D80
        mov dword ptr [ebp + 0x10], eax
        mov eax, dword ptr [ebp + 0x14]
        lea ecx, [ebp - 0x268]
        push eax
        mov byte ptr [ebp - 0x4], 0x3b
        call ext_006B9DA0
        mov dword ptr [ebp + 0x8], eax
        push 0xaaecd0
        lea ecx, [ebp - 0x2b4]
        mov byte ptr [ebp - 0x4], 0x3c
        call ext_006B9D80
        mov dword ptr [ebp + 0xc], eax
        push 0xaaecb8
        lea ecx, [ebp - 0x560]
        mov byte ptr [ebp - 0x4], 0x3d
        call ext_006B9D80
        lea ecx, [ebp - 0x164]
        lea edx, [ebp - 0x5f8]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x3e
        call ext_006B9F80
        mov ecx, dword ptr [ebp + 0xc]
        lea edx, [ebp - 0x5ac]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x3f
        call ext_006B9F80
        mov ecx, dword ptr [ebp + 0x8]
        lea edx, [ebp - 0x3e4]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x40
        call ext_006B9F80
        mov ecx, dword ptr [ebp + 0x10]
        lea edx, [ebp - 0x690]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x41
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x14]
        lea edx, [ebp - 0x644]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x42
        call ext_006B9F80
        mov ecx, dword ptr [ebp - 0x1c]
        lea edx, [ebp - 0x47c]
        push ecx
        push eax
        push edx
        mov byte ptr [ebp - 0x4], 0x43
        call ext_006B9F80
        add esp, 0x48
        push edi
        push eax
        lea eax, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x44
        push eax
        call ext_006B9F80
        push esi
        lea ecx, [ebp - 0xe4]
        push eax
        push ecx
        mov byte ptr [ebp - 0x4], 0x45
        call ext_006B9F80
        add esp, 0x18
        push eax
        lea ecx, [ebp - 0x1fc]
        mov byte ptr [ebp - 0x4], 0x46
        call ext_006B9E60
        lea ecx, [ebp - 0xe4]
        mov byte ptr [ebp - 0x4], 0x45
        call ext_006B9D70
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x44
        call ext_006B9D70
        lea ecx, [ebp - 0x47c]
        mov byte ptr [ebp - 0x4], 0x43
        call ext_006B9D70
        lea ecx, [ebp - 0x644]
        mov byte ptr [ebp - 0x4], 0x42
        call ext_006B9D70
        lea ecx, [ebp - 0x690]
        mov byte ptr [ebp - 0x4], 0x41
        call ext_006B9D70
        lea ecx, [ebp - 0x3e4]
        mov byte ptr [ebp - 0x4], 0x40
        call ext_006B9D70
        lea ecx, [ebp - 0x5ac]
        mov byte ptr [ebp - 0x4], 0x3f
        call ext_006B9D70
        lea ecx, [ebp - 0x5f8]
        mov byte ptr [ebp - 0x4], 0x3e
        call ext_006B9D70
        lea ecx, [ebp - 0x560]
        mov byte ptr [ebp - 0x4], 0x3d
        call ext_006B9D70
        lea ecx, [ebp - 0x2b4]
        mov byte ptr [ebp - 0x4], 0x3c
        call ext_006B9D70
        lea ecx, [ebp - 0x268]
        mov byte ptr [ebp - 0x4], 0x3b
        call ext_006B9D70
        lea ecx, [ebp - 0x398]
        mov byte ptr [ebp - 0x4], 0x3a
        call ext_006B9D70
        lea ecx, [ebp - 0x430]
        mov byte ptr [ebp - 0x4], 0x39
        call ext_006B9D70
        lea ecx, [ebp - 0x300]
        mov byte ptr [ebp - 0x4], 0x38
        call ext_006B9D70
        mov byte ptr [ebp - 0x4], 0x37
        lea ecx, [ebp - 0x4c8]
        call ext_006B9D70
        lea ecx, [ebp - 0x34c]
        mov byte ptr [ebp - 0x4], 0x35
        call ext_006B9D70
        lea ecx, [ebp - 0x1fc]
        call ext_006E7460
        mov edx, dword ptr [ebp - 0x8c]
        push eax
        lea ecx, [edx + 0x60]
        call ext_006BA220
        mov eax, dword ptr [ebp + 0x14]
        lea ecx, [ebp - 0x47c]
        push eax
        call ext_006B9DA0
        mov esi, eax
        push 0xaaed38
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x47
        call ext_006B9D80
        push esi
        lea ecx, [ebp - 0xe4]
        push eax
        push ecx
        mov byte ptr [ebp - 0x4], 0x48
        call ext_006B9F80
        add esp, 0xc
        push eax
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x49
        call ext_006B9E60
        lea ecx, [ebp - 0xe4]
        mov byte ptr [ebp - 0x4], 0x48
        call ext_006B9D70
        lea ecx, [ebp - 0x514]
        mov byte ptr [ebp - 0x4], 0x47
        call ext_006B9D70
        lea ecx, [ebp - 0x47c]
        mov byte ptr [ebp - 0x4], 0x35
        call ext_006B9D70
    L_0076A445:
        lea ecx, [ebp - 0x164]
        call ext_006E7460
        mov edx, dword ptr [ebp - 0x10]
        mov edi, eax
        or ecx, -1
        xor eax, eax
        add edx, 0x16c
        mov byte ptr [ebp - 0x4], 0x34
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebp - 0x10]
        mov byte ptr [ecx + 0x178], 0x0
        lea ecx, [ebp - 0x1fc]
        call ext_006B9D70
        lea ecx, [ebp - 0x164]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006B9D70
    L_0076A4A0:
        mov ecx, ebx
        call ext_00702B40
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, ebx
        fstp dword ptr [edx + 0x17c]
        call ext_007027C0
        dec eax
        jne L_0076A4CF
        mov eax, dword ptr [ebp - 0x10]
        fld dword ptr [eax + 0x17c]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [eax + 0x17c]
    L_0076A4CF:
        mov ecx, ebx
        call ext_00702D60
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je L_0076A562
        mov ecx, ebx
        call ext_00702BE0
        fstp qword ptr [ebp - 0x40]
        mov ecx, ebx
        call ext_00702E60
        fdivr qword ptr [ebp - 0x40]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x40]
        call ext_00702E60
        fdivr qword ptr [mem_0092A270]
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, ebx
        fsubr qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993828]
        fsubr qword ptr [ebp - 0x40]
        fstp dword ptr [eax + 0x19c]
        call ext_00702C60
        fstp qword ptr [ebp - 0x40]
        mov ecx, ebx
        call ext_00702EE0
        fdivr qword ptr [ebp - 0x40]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x40]
        call ext_00702EE0
        fdivr qword ptr [mem_0092A270]
        mov ecx, dword ptr [ebp - 0x10]
        fsubr qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993828]
        fsubr qword ptr [ebp - 0x40]
        fchs
        fstp dword ptr [ecx + 0x1a0]
        jmp L_0076A846
    L_0076A562:
        lea ecx, [ebp - 0x60]
        call ext_006D2370
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x4a
        call ext_006D2370
        lea ecx, [ebp - 0x118]
        mov byte ptr [ebp - 0x4], 0x4b
        call ext_00714570
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        mov ecx, ebx
        mov byte ptr [ebp - 0x4], 0x4c
        call ext_00702C60
        fsub qword ptr [mem_00993828]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x40]
        call ext_00702EE0
        fdivr qword ptr [ebp - 0x40]
        sub esp, 0x8
        mov ecx, ebx
        fchs
        fstp qword ptr [esp]
        call ext_00702BE0
        fsub qword ptr [mem_00993828]
        mov ecx, ebx
        fstp qword ptr [ebp - 0x40]
        call ext_00702E60
        fdivr qword ptr [ebp - 0x40]
        sub esp, 0x8
        lea ecx, [ebp - 0x60]
        fchs
        fstp qword ptr [esp]
        call ext_00787430
        mov ecx, ebx
        call ext_00702D60
        fchs
        fstp qword ptr [ebp - 0x28]
        push 0x2
        lea ecx, [ebp - 0x80]
        call ext_006D23F0
        mov edx, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0x24]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebp - 0x70]
        fld qword ptr [ebp - 0x80]
        mov eax, dword ptr [ebp - 0x6c]
        mov ecx, dword ptr [ebp - 0x78]
        fmul qword ptr [mem_00993808]
        mov dword ptr [ebp - 0x90], edx
        mov edx, dword ptr [ebp - 0x74]
        mov dword ptr [ebp - 0x8c], eax
        lea eax, [ebp - 0x30]
        mov dword ptr [ebp - 0x28], ecx
        mov dword ptr [ebp - 0x24], edx
        fstp qword ptr [ebp - 0x40]
        mov dword ptr [ebp + 0x14], eax
        fld qword ptr [ebp - 0x40]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [mem_00993808]
        lea ecx, [ebp - 0x20]
        mov dword ptr [ebp + 0x14], ecx
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x40]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x90]
        lea edx, [ebp - 0x18]
        mov dword ptr [ebp + 0x14], edx
        fmul qword ptr [mem_00993808]
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x40]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x38]
        fmul st, st(1)
        fld qword ptr [ebp - 0x38]
        fmul qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x20]
        fstp qword ptr [ebp - 0x118]
        fld st(2)
        fmul qword ptr [ebp - 0x20]
        fstp qword ptr [ebp - 0x110]
        fld qword ptr [ebp - 0x38]
        fchs
        fstp qword ptr [ebp - 0x108]
        fld st(0)
        fmul qword ptr [ebp - 0x18]
        fld st(3)
        fmul qword ptr [ebp - 0x30]
        fsubp st(1), st
        fstp qword ptr [ebp - 0xf8]
        fmul st, st(2)
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x30]
        faddp st(1), st
        fstp qword ptr [ebp - 0xf0]
        fld qword ptr [ebp - 0x20]
        fmul st, st(1)
        fstp qword ptr [ebp - 0xe8]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [ebp - 0x18]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fstp qword ptr [ebp - 0xd8]
        fld qword ptr [ebp - 0x28]
        fmul st, st(2)
        fld qword ptr [ebp - 0x18]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [ebp - 0xd0]
        fstp st(0)
        fstp st(0)
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0xc8]
        fld qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x58]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xd8]
        fld qword ptr [ebp - 0x58]
        fmul qword ptr [ebp - 0xf8]
        faddp st(1), st
        fld qword ptr [ebp - 0x60]
        fmul qword ptr [ebp - 0x118]
        faddp st(1), st
        fadd qword ptr [ebp - 0xb8]
        fstp qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xd0]
        fld qword ptr [ebp - 0x58]
        fmul qword ptr [ebp - 0xf0]
        faddp st(1), st
        fld qword ptr [ebp - 0x110]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [ebp - 0xb0]
        fstp qword ptr [ebp - 0x58]
        fld qword ptr [ebp - 0x50]
        fmul qword ptr [ebp - 0xc8]
        fld qword ptr [ebp - 0xe8]
        fmul st, st(2)
        faddp st(1), st
        fld qword ptr [ebp - 0x108]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [ebp - 0xa8]
        push 0x0
        lea ecx, [ebp - 0x60]
        fstp qword ptr [ebp - 0x50]
        fstp st(0)
        fstp st(0)
        call ext_006D23F0
        fld qword ptr [eax]
        fsub qword ptr [mem_00993828]
        push 0x1
        lea ecx, [ebp - 0x60]
        fstp qword ptr [eax]
        call ext_006D23F0
        fld qword ptr [eax]
        fsub qword ptr [mem_00993828]
        push 0x0
        lea ecx, [ebp - 0x60]
        fstp qword ptr [eax]
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [ebp - 0x10]
        push 0x1
        lea ecx, [ebp - 0x60]
        fstp dword ptr [eax + 0x19c]
        call ext_006D23F0
        fld qword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fchs
        fstp dword ptr [ecx + 0x1a0]
        mov ecx, ebx
        call ext_00702D60
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x118]
        fchs
        fstp dword ptr [edx + 0x1a4]
        mov byte ptr [ebp - 0x4], 0x4b
        call ext_006D80A0
        lea ecx, [ebp - 0x80]
        mov byte ptr [ebp - 0x4], 0x4a
        call ext_006D80A0
        lea ecx, [ebp - 0x60]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006D80A0
    L_0076A846:
        mov ecx, ebx
        call ext_00702E60
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, ebx
        fstp dword ptr [eax + 0x194]
        call ext_00702EE0
        mov ecx, dword ptr [ebp - 0x10]
        fstp dword ptr [ecx + 0x198]
        mov ecx, ebx
        call ext_00702780
        test eax, eax
        jne L_0076A880
        mov edx, dword ptr [ebp - 0x10]
        mov dword ptr [edx + 0x180], 0x1
        jmp L_0076A88D
    L_0076A880:
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [eax + 0x180], 0x2
    L_0076A88D:
        mov esi, dword ptr [ebp - 0x10]
        lea ecx, [ebp - 0x1b0]
        mov dword ptr [ebp - 0x4], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret 0x10
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
