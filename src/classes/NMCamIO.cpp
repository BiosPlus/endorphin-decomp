// Decompiled translation unit: src/classes/NMCamIO.cpp

extern "C" void ext_00640390();
extern "C" void ext_00553720();
extern "C" void ext_00468180();
extern "C" void ext_00476DB0();
extern "C" void ext_00587920();
extern "C" void ext_0058A200();
extern "C" void ext_00594000();
extern "C" void ext_005DDAE0();
extern "C" void ext_005DF5C0();
extern "C" void ext_0065C660();
extern "C" void ext_0067E650();
extern "C" void ext_006A5C62();
extern "C" int mem_00957754;
extern "C" int mem_00B40640;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_0095843C;
extern "C" int mem_00924FE0;

// [0x0055D640] NMCamIO::vfunc_3 (37 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0055D640(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92fe1c
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0055D770] NMCamIO::vfunc_12 (630 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055D770(void* self, int edx_unused, void* a1) {
    __asm {
        push    -0x1
        push    0x89ae21
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        mov     dword ptr [esp + 0x10], esi
        push    0x2c8
        mov     dword ptr [esp + 0x50], ebx
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x4c], 0x1
        je      L_55d7bf
        mov     ecx, eax
        call    ext_005DDAE0
        mov     ebp, eax
        jmp     L_55d7c1
    L_55d7bf:
        xor     ebp, ebp
    L_55d7c1:
        mov     ecx, dword ptr [edi + 0x46c]
        cmp     ebp, ecx
        mov     byte ptr [esp + 0x4c], bl
        je      L_55d7db
        cmp     ecx, ebx
        je      L_55d7db
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    0x1
        call    edx
    L_55d7db:
        mov     dword ptr [edi + 0x46c], ebp
        mov     al, byte ptr [edi + 0x70]
        cmp     al, bl
        jne     L_55d884
        push    0x154
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x4c], 0x2
        je      L_55d811
        mov     ecx, eax
        call    ext_00476DB0
        mov     esi, eax
        jmp     L_55d813
    L_55d811:
        xor     esi, esi
    L_55d813:
        fld     dword ptr [mem_00957754]
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [esi + 0x4]
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        mov     byte ptr [esp + 0x54], bl
        mov     dword ptr [esp + 0x18], esi
        call    eax
        mov     ecx, eax
        call    ext_0067E650
        push    0x95853c
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FE4]
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x5c]
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x50], 0x3
        call    edx
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x4c], bl
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [edi + 0x46c]
        push    0x1
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi + 0x46c], ebx
        call    ext_00587920
    L_55d884:
        call    ext_00468180
        mov     eax, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [eax + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0xb4]
        call    edx
        mov     dword ptr [ebp + 0x158], eax
        mov     dword ptr [esp + 0x18], 0x95841c
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     ecx, dword ptr [esp + 0x54]
        push    ebx
        mov     byte ptr [esp + 0x50], 0x4
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x20]
        call    dword ptr [mem_0095843C]
        fld     dword ptr [edi + 0x6c]
        fstp    dword ptr [esp + 0x54]
        fldz
        fcomp   dword ptr [esp + 0x54]
        fnstsw  ax
        test    ah, 0x44
        jnp     L_55d96f
        mov     esi, 0x3
        jmp     L_55d8f0
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_55d8f0:
        push    esi
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, ebp
        call    ext_0058A200
        sub     esp, 0x1c
        lea     edx, [esp + 0x44]
        mov     ecx, esp
        mov     dword ptr [esp + 0x30], esp
        push    edx
        mov     byte ptr [esp + 0x6c], 0x5
        call    dword ptr [mem_00924FE0]
        mov     byte ptr [esp + 0x68], 0x6
        call    ext_00594000
        mov     eax, dword ptr [eax + 0x26c]
        lea     ecx, [eax + 0x8]
        mov     byte ptr [esp + 0x68], 0x5
        call    ext_005DF5C0
        cmp     eax, ebx
        je      L_55d954
        fld     dword ptr [esp + 0x54]
        mov     edx, dword ptr [eax]
        fld1
        push    ecx
        fdivrp  st(1), st(0)
        mov     ecx, eax
        mov     eax, dword ptr [edx + 0x34]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        call    eax
    L_55d954:
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x4c], 0x4
        call    dword ptr [mem_00924FF4]
        add     esi, 0x1
        cmp     esi, 0x5
        jle     L_55d8f0
        mov     esi, dword ptr [esp + 0x10]
    L_55d96f:
        cmp     byte ptr [edi + 0x70], bl
        push    0x1
        jne     L_55d98d
        mov     eax, esi
        push    eax
        mov     dword ptr [esp + 0x18], ebx
        call    ext_00594000
        mov     ecx, eax
        call    ext_00587920
        mov     esi, ebx
        jmp     L_55d9a6
    L_55d98d:
        mov     eax, dword ptr [edi + 0x46c]
        push    eax
        mov     dword ptr [edi + 0x46c], ebx
        call    ext_00594000
        mov     ecx, eax
        call    ext_00587920
    L_55d9a6:
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x4c], bl
        mov     dword ptr [esp + 0x18], 0x95841c
        call    ext_0065C660
        cmp     esi, ebx
        mov     dword ptr [esp + 0x4c], 0xffffffff
        je      L_55d9d1
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx]
        push    0x1
        mov     ecx, esi
        call    eax
    L_55d9d1:
        mov     ecx, dword ptr [esp + 0x44]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        add     esp, 0x40
        ret     0x4
    }
}
