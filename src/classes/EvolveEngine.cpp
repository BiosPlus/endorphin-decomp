// Decompiled translation unit: src/classes/EvolveEngine.cpp

extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067AE20();
extern "C" int mem_009241E0;

extern "C" void ext_00501140();
extern "C" void ext_0065F450();
extern "C" void ext_006721F0();

extern "C" void ext_00435D00();
extern "C" void ext_00491030();
extern "C" void ext_004FDA90();
extern "C" void ext_005030C0();
extern "C" void ext_00504230();
extern "C" void ext_0050E9F0();
extern "C" void ext_005172A0();
extern "C" void ext_006629F0();
extern "C" void ext_006690D0();
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_0066A820();
extern "C" void ext_0066A8B0();
extern "C" void ext_0066AA10();
extern "C" void ext_0066AAB0();
extern "C" void ext_00679C60();
extern "C" void ext_0067AE00();
extern "C" void ext_006955D0();
extern "C" void ext_006AD940();
extern "C" int mem_00AEDC30;
extern "C" int mem_00987B44;
extern "C" int mem_00924ECC;
extern "C" int mem_00AEB918;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FEC;
extern "C" int mem_0092500C;
extern "C" int mem_00924EC4;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E4C;
extern "C" int mem_00925008;
extern "C" int mem_00924E54;
extern "C" int mem_00924E94;
extern "C" int mem_00925004;
extern "C" int mem_00924E58;

// [0x0067AF30] EvolveEngine::vfunc_2 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067AF30(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov byte ptr [esi + 0x4], 0x0
        call ext_0067AE20
        test al, al
        je done
        mov eax, dword ptr [esi + 0xc]
        mov eax, dword ptr [eax + 0x10]
        push eax
        call dword ptr [mem_009241E0]
        mov esi, dword ptr [esi + 0xc]
        mov dword ptr [esi + 0x10], 0x0
    done:
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005013A0] EvolveEngine::vfunc_2_off_10 (73 bytes)
extern "C" __declspec(naked) void __fastcall fn_005013A0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x68]
        mov dword ptr [esp + 0xc], 0x0
        call ext_00501140
        test eax, eax
        je loc_5013d4
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    loc_5013d4:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0065F450
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005032D0] EvolveEngine::vfunc_1 (1266 bytes)
extern "C" __declspec(naked) void __fastcall fn_005032D0(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x40
        push    -0x1
        push    0x891792
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x224
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     dword ptr [esp + 0x7c], offset mem_00AEDC30
        mov     byte ptr [mem_00AEDC30], 0x1
        push    0x2
        mov     dword ptr [esp + 0x240], 0x0
        call    ext_0067AE00
        mov     ecx, esi
        call    ext_005030C0
        mov     eax, dword ptr [mem_00987B44]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    ext_0066A720
        mov     ecx, dword ptr [esi + 0x14]
        mov     edi, dword ptr [ecx + 0x1c]
        lea     ecx, [esi + 0x44]
        mov     byte ptr [esp + 0x23c], 0x1
        call    ext_0050E9F0
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        mov     ebx, dword ptr [mem_00924ECC]
        mov     byte ptr [mem_00AEB918], 0x0
        fstp    qword ptr [esp + 0x58]
        cmp     byte ptr [esi + 0x4], 0x0
        je      lbl_50373B
    lbl_503367:
        mov     ecx, esi
        call    ext_004FDA90
        test    al, al
        lea     ebp, [esi + 0x44]
        mov     ecx, ebp
        setne   byte ptr [esp + 0x43]
        call    ext_0050E9F0
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esi + 0x14]
        fst     qword ptr [esp + 0x80]
        fld     qword ptr [esp + 0x58]
        fsub    st(1), st(0)
        fdivp   st(1), st(0)
        fabs
        fld     dword ptr [ecx + 0x10]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnp     lbl_5033C0
        add     edi, 0x1
        cmp     edi, dword ptr [ecx + 0x1c]
        jge     lbl_5033C0
        cmp     byte ptr [esp + 0x43], 0x0
        je      lbl_5033C0
        cmp     byte ptr [ecx + 0x2a], 0x0
        je      lbl_50371A
    lbl_5033C0:
        mov     edi, dword ptr [esi + 0x58]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x44], 0x0
        call    ext_0050E9F0
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    edi
        lea     edx, [esp + 0x54]
        push    0x94eff4
        push    edx
        call    ext_0066A8B0
        add     esp, 0x14
        mov     ecx, ebp
        call    ext_006AD940
        mov     edi, eax
        test    edi, edi
        je      lbl_50370B
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, edi
        call    ext_005172A0
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [mem_00924FA0]
        push    ecx
        push    edx
        call    ext_00435D00
        mov     ecx, dword ptr [mem_00924E90]
        add     esp, 0x8
        push    ecx
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        lea     ecx, [esi + 0x8c]
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    ext_0066AA10
        mov     eax, dword ptr [esi + 0x58]
        push    eax
        lea     edx, [esp + 0x4c]
        push    0x94efec
        push    edx
        call    ext_0066A820
        mov     eax, dword ptr [esp + 0x54]
        add     esp, 0xc
        push    eax
        lea     ecx, [esp + 0x8c]
        call    dword ptr [mem_00924FE4]
        push    0x94ef64
        lea     ecx, [esp + 0x8c]
        push    ecx
        lea     edx, [esp + 0xc8]
        push    edx
        mov     byte ptr [esp + 0x248], 0x2
        call    ebx
        add     esp, 0xc
        mov     ebp, dword ptr [edi]
        push    0x1
        lea     ecx, [esp + 0xc4]
        mov     byte ptr [esp + 0x240], 0x3
        add     ebp, 0x24
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     eax, dword ptr [ebp]
        mov     ecx, edi
        call    eax
        call    ext_006690D0
        lea     ecx, [esp + 0xc0]
        mov     ebp, eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [ebp + 0x48]
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x68]
        push    ecx
        call    ext_006629F0
        add     esp, 0xc
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x23c], 0x4
        call    dword ptr [mem_00924FEC]
        test    al, al
        jne     lbl_503547
        push    0x0
        lea     ecx, [esp + 0x64]
        call    dword ptr [mem_0092500C]
        cmp     byte ptr [eax], 0x5c
        jne     lbl_503547
        mov     edx, dword ptr [mem_00924EC4]
        mov     eax, dword ptr [edx]
        push    eax
        push    0x1
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0x6c]
        call    dword ptr [mem_00925120]
        push    eax
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x240], 0x5
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0xdc]
        mov     byte ptr [esp + 0x23c], 0x4
        call    dword ptr [mem_00924FF4]
    lbl_503547:
        mov     eax, dword ptr [esi + 0x14]
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [eax + 0x110]
        call    dword ptr [mem_00924FDC]
        push    0x1
        push    0x2
        lea     ecx, [esp + 0x100]
        call    dword ptr [mem_00924E4C]
        fldz
        mov     ecx, dword ptr [esi + 0x48]
        lea     eax, [esp + 0xf8]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    edi
        mov     byte ptr [esp + 0x24c], 0x6
        call    ext_00504230
        push    0x94efe4
        lea     ecx, [esp + 0x8c]
        push    ecx
        lea     edx, [esp + 0xe4]
        push    edx
        call    ebx
        add     esp, 0xc
        push    0x1
        push    0x40
        push    0x12
        mov     ecx, eax
        mov     byte ptr [esp + 0x248], 0x7
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x188]
        call    dword ptr [mem_00925008]
        lea     ecx, [esp + 0xdc]
        mov     byte ptr [esp + 0x23c], 0x9
        call    dword ptr [mem_00924FF4]
        lea     eax, [esp + 0xa4]
        push    eax
        lea     ecx, [esp + 0xfc]
        call    dword ptr [mem_00924E54]
        mov     ecx, dword ptr [mem_00924E90]
        push    ecx
        push    eax
        lea     edx, [esp + 0x180]
        push    edx
        mov     byte ptr [esp + 0x248], 0xa
        call    dword ptr [mem_00924E94]
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        lea     ecx, [esp + 0xa4]
        mov     byte ptr [esp + 0x23c], 0x9
        call    dword ptr [mem_00924FF4]
        lea     eax, [esp + 0xa4]
        push    eax
        lea     ecx, [esp + 0xfc]
        call    dword ptr [mem_00924E54]
        mov     ecx, eax
        mov     byte ptr [esp + 0x23c], 0xb
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    ext_0066AA10
        lea     ecx, [esp + 0xa4]
        mov     byte ptr [esp + 0x23c], 0x9
        call    dword ptr [mem_00924FF4]
        push    0x8
        lea     ecx, [esp + 0x4c]
        call    ext_0066AAB0
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [mem_00924FA0]
        push    ecx
        push    edx
        call    ext_00435D00
        mov     ecx, dword ptr [mem_00924E90]
        add     esp, 0x8
        push    ecx
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        lea     ecx, [esp + 0x178]
        mov     byte ptr [esp + 0x23c], 0x6
        call    dword ptr [mem_00925004]
        lea     ecx, [esp + 0xf8]
        mov     byte ptr [esp + 0x23c], 0x4
        call    dword ptr [mem_00924E58]
        lea     ecx, [esp + 0x60]
        mov     byte ptr [esp + 0x23c], 0x3
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc0]
        mov     byte ptr [esp + 0x23c], 0x2
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x88]
        mov     byte ptr [esp + 0x23c], 0x1
        call    dword ptr [mem_00924FF4]
    lbl_50370B:
        fld     qword ptr [esp + 0x80]
        mov     edi, dword ptr [esp + 0x44]
        fstp    qword ptr [esp + 0x58]
    lbl_50371A:
        cmp     byte ptr [esi + 0x4], 0x0
        je      lbl_50372C
        mov     ecx, dword ptr [esi + 0x18]
        test    ecx, ecx
        je      lbl_50372C
        call    ext_00491030
    lbl_50372C:
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [edx + 0x20]
        test    eax, eax
        jle     lbl_50373B
        cmp     dword ptr [esi + 0x58], eax
        jge     lbl_50374E
    lbl_50373B:
        cmp     byte ptr [esp + 0x43], 0x0
        je      lbl_50375B
        cmp     byte ptr [esi + 0x4], 0x0
        jne     lbl_503367
        jmp     lbl_50375B
    lbl_50374E:
        push    0x94efa0
        call    ext_00679C60
        add     esp, 0x4
    lbl_50375B:
        call    ext_006955D0
        mov     byte ptr [eax + 0x9d4], 0x0
        mov     eax, dword ptr [mem_00924E90]
        mov     ecx, dword ptr [mem_00924FA0]
        push    eax
        push    0x94ef8c
        push    ecx
        call    ext_00435D00
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        mov     edx, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [edx + 0x8]
        lea     ecx, [esi + 0x1c]
        call    eax
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x23c], 0x0
        call    ext_0066A760
        mov     ecx, dword ptr [esp + 0x234]
        pop     edi
        mov     byte ptr [mem_00AEDC30], 0x0
        mov     dword ptr fs:[0], ecx
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
