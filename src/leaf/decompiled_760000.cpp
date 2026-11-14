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
