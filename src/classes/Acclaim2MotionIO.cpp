// Decompiled translation unit: src/classes/Acclaim2MotionIO.cpp

// [0x0055BBF0] Acclaim2MotionIO::vfunc_48 (42 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0055BBF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0e4h]
        call edx
        test al, 1
        je L_false
        mov eax, dword ptr [esi + 584h]
        mov edx, dword ptr [eax + 0c0h]
        lea ecx, [esi + 584h]
        pop esi
        jmp edx
    L_false:
        xor al, al
        pop esi
        ret
    }
}

// [0x00582B60] Acclaim2MotionIO::vfunc_3 (38 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9ECE8;

extern "C" __declspec(naked) int __fastcall fn_00582B60(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9ECE8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640390
        push    eax
        mov     ecx, esi
        call    ext_00553720
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}

// [0x00583580] Acclaim2MotionIO::vfunc_10 (171 bytes)
extern "C" void ext_00406FC0();
extern "C" void ext_00558A10();
extern "C" void ext_00559180();
extern "C" void ext_0055D2C0();
extern "C" void ext_0055D600();
extern "C" __declspec(dllimport) bool __fastcall imp_00924fec(void* str);
extern "C" __declspec(dllimport) void __fastcall imp_00924ea8(void* str);

extern "C" void __fastcall fn_00583580(void* self, int /*edx*/, int /*arg1*/) {
    typedef void (__thiscall *FnThisPtr)(void*, void*);
    typedef void (__thiscall *FnThisInt)(void*, int);
    typedef void (__thiscall *FnThisVoid)(void*);

    char* base = (char*)self;
    void* s = base + 0x568;
    if (!imp_00924fec(s)) {
        void* obj_5c = base + 0x5c;
        void* obj_584 = base + 0x584;
        ((FnThisPtr)ext_00558A10)(obj_584, obj_5c);
        ((FnThisInt)ext_00559180)(obj_584, *(int*)(base + 0x418));
        *(int*)(base + 0x998) = *(int*)(base + 0x414);
        *(int*)(base + 0x9a4) = *(int*)(base + 0x420);
        *(int*)(base + 0x9a8) = *(int*)(base + 0x424);
        void* obj_42c = base + 0x42c;
        ((FnThisVoid)ext_0055D600)(obj_42c);
        ((FnThisPtr)(*(void***)obj_584)[10])(obj_584, s);
        ((FnThisInt)ext_0055D2C0)(obj_42c, *(int*)(base + 0x998));
        ((FnThisPtr)ext_00406FC0)(obj_5c, base + 0x5e0);
        imp_00924ea8(s);
    }
}

// [0x00583630] Acclaim2MotionIO::vfunc_14 (878 bytes)
extern "C" void ext_00581D90();
extern "C" void ext_0057BB20();
extern "C" void ext_005828C0();
extern "C" void ext_00430EF0();
extern "C" void ext_00421C00();
extern "C" void ext_005557A0();
extern "C" void ext_00662D00();
extern "C" void ext_00663690();
extern "C" void ext_006629B0();
extern "C" int mem_00924EA8;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00955998;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00583630(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0089ee1ah
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 6ch
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 46ch]
        mov     ecx, edi
        call    ext_00581D90
        push    edi
        lea     ecx, [esp + 60h]
        call    ext_0057BB20
        mov     ebx, dword ptr [esp + 8ch]
        push    ebx
        lea     ecx, [esp + 60h]
        mov     dword ptr [esp + 88h], 0
        call    ext_005828C0
        lea     edi, [esi + 568h]
        mov     ecx, edi
        call    dword ptr [mem_00924EA8]
        lea     ebp, [esi + 530h]
        mov     ecx, ebp
        call    dword ptr [mem_00924FEC]
        test    al, al
        jne     L_583777
        lea     ecx, [esp + 24h]
        call    dword ptr [mem_00924FE8]
        push    0
        lea     eax, [esp + 28h]
        push    eax
        mov     ecx, ebx
        mov     byte ptr [esp + 8ch], 1
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ext_00663690
        push    ebp
        lea     ecx, [esp + 34h]
        push    ecx
        lea     edx, [esp + 54h]
        push    edx
        call    ext_00662D00
        add     esp, 18h
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 88h], 2
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 40h]
        mov     byte ptr [esp + 84h], 1
        call    dword ptr [mem_00924FF4]
        push    edi
        call    ext_006629B0
        add     esp, 4
        test    al, al
        je      L_58375D
        mov     eax, dword ptr [esi + 584h]
        mov     edx, dword ptr [eax + 38h]
        lea     ecx, [esi + 584h]
        push    edi
        call    edx
        lea     edi, [esi + 27ch]
        push    edi
        lea     ebp, [esi + 800h]
        push    ebp
        mov     ecx, esi
        call    ext_005557A0
        mov     eax, dword ptr [ebp]
        mov     ebx, dword ptr [edi]
        mov     edx, dword ptr [eax + 24h]
        mov     ecx, ebp
        add     ebx, 5ch
        call    edx
        push    eax
        mov     eax, dword ptr [ebx]
        mov     ecx, edi
        call    eax
        lea     ecx, [esi + 5e0h]
        push    ecx
        lea     ecx, [esi + 5ch]
        call    ext_00406FC0
        jmp     L_583765
    L_58375D:
        mov     ecx, edi
        call    dword ptr [mem_00924EA8]
    L_583765:
        lea     ecx, [esp + 24h]
        mov     byte ptr [esp + 84h], 0
        call    dword ptr [mem_00924FF4]
    L_583777:
        cmp     byte ptr [esi + 4d4h], 0
        je      L_583797
        fild    dword ptr [esi + 4c8h]
        fstp    dword ptr [esp + 8ch]
        fld     dword ptr [esp + 8ch]
        fstp    dword ptr [esi + 64h]
    L_583797:
        fld     dword ptr [mem_00955998]
        fcomp   dword ptr [esi + 46ch]
        fnstsw  ax
        test    ah, 41h
        jp      L_5838EC
        mov     ecx, dword ptr [esi + 4d0h]
        fld1
        mov     eax, dword ptr [esi + 4cch]
        fstp    dword ptr [esi + 6ch]
        mov     dword ptr [esi + 60h], ecx
        mov     ecx, dword ptr [esi + 414h]
        test    ecx, ecx
        mov     dword ptr [esi + 5ch], eax
        mov     dword ptr [esi + 68h], eax
        je      L_5838EC
        mov     edx, dword ptr [ecx + 160h]
        mov     eax, dword ptr [edx + 24h]
        add     ecx, 160h
        call    eax
        mov     ebx, dword ptr [esi + 4f4h]
        cmp     ebx, dword ptr [esi + 4f8h]
        lea     edi, [esi + 4f0h]
        mov     dword ptr [esp + 8ch], eax
        jbe     L_583808
        call    dword ptr [mem_00925134]
    L_583808:
        mov     ebp, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebp
        mov     dword ptr [esp + 20h], ebx
        jbe     L_58381A
        call    dword ptr [mem_00925134]
    L_58381A:
        test    edi, edi
        je      L_583822
        cmp     edi, edi
        je      L_583828
    L_583822:
        call    dword ptr [mem_00925134]
    L_583828:
        cmp     ebx, ebp
        je      L_5838EC
        test    edi, edi
        jne     L_58383A
        call    dword ptr [mem_00925134]
    L_58383A:
        cmp     ebx, dword ptr [edi + 8]
        jb      L_583845
        call    dword ptr [mem_00925134]
    L_583845:
        mov     ebp, dword ptr [ebx + 8]
        test    ebp, ebp
        lea     edi, [ebx + 4]
        je      L_5838CB
        mov     ebx, dword ptr [edi + 8]
        mov     ecx, ebx
        sub     ecx, ebp
        mov     eax, 92492493h
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     ecx, edx
        shr     ecx, 1fh
        add     ecx, edx
        mov     dword ptr [esp + 10h], ebx
        je      L_5838C7
        cmp     ebp, ebx
        jbe     L_583879
        call    dword ptr [mem_00925134]
    L_583879:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_583887
        call    dword ptr [mem_00925134]
    L_583887:
        mov     ebp, dword ptr [edi + 4]
        cmp     ebp, dword ptr [edi + 8]
        jbe     L_583895
        call    dword ptr [mem_00925134]
    L_583895:
        mov     edx, dword ptr [esp + 8ch]
        push    edx
        push    ebx
        push    ebp
        mov     dword ptr [esp + 24h], ebp
        call    ext_00430EF0
        add     esp, 0ch
        test    edi, edi
        mov     ebx, eax
        je      L_5838B5
        cmp     edi, edi
        je      L_5838BB
    L_5838B5:
        call    dword ptr [mem_00925134]
    L_5838BB:
        cmp     ebx, dword ptr [esp + 10h]
        mov     ebx, dword ptr [esp + 20h]
        je      L_5838D0
        jmp     L_5838CB
    L_5838C7:
        mov     ebx, dword ptr [esp + 20h]
    L_5838CB:
        fld     dword ptr [ebx]
        fstp    dword ptr [esi + 6ch]
    L_5838D0:
        cmp     ebx, dword ptr [esi + 4f8h]
        lea     edi, [esi + 4f0h]
        jb      L_5838E4
        call    dword ptr [mem_00925134]
    L_5838E4:
        add     ebx, 14h
        jmp     L_583808
    L_5838EC:
        cmp     byte ptr [esi + 4c1h], 0
        je      L_583918
        fld     dword ptr [esi + 4ach]
        mov     eax, dword ptr [esi + 4b4h]
        fstp    dword ptr [esp + 8ch]
        mov     dword ptr [esi + 84h], eax
        fld     dword ptr [esp + 8ch]
        fstp    dword ptr [esi + 7ch]
    L_583918:
        cmp     byte ptr [esi + 4c0h], 0
        je      L_583947
        fld     dword ptr [esi + 4b0h]
        mov     eax, dword ptr [esi + 4b8h]
        fstp    dword ptr [esp + 8ch]
        mov     dword ptr [esi + 88h], eax
        fld     dword ptr [esp + 8ch]
        fstp    dword ptr [esi + 80h]
    L_583947:
        cmp     byte ptr [esi + 4c2h], 0
        je      L_583973
        fld     dword ptr [esi + 4a8h]
        mov     eax, dword ptr [esi + 4bch]
        fstp    dword ptr [esp + 8ch]
        mov     dword ptr [esi + 8ch], eax
        fld     dword ptr [esp + 8ch]
        fstp    dword ptr [esi + 78h]
    L_583973:
        lea     ecx, [esp + 5ch]
        mov     dword ptr [esp + 84h], 0ffffffffh
        call    ext_00421C00
        mov     ecx, dword ptr [esp + 7ch]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 78h
        ret     4
    }
}

// [0x00583ED0] Acclaim2MotionIO::vfunc_13 (1472 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00406FC0();
extern "C" void ext_0040ECB0();
extern "C" void ext_00435D00();
extern "C" void ext_00493D90();
extern "C" void ext_004F4E50();
extern "C" void ext_00553760();
extern "C" void ext_00557280();
extern "C" void ext_00566FE0();
extern "C" void ext_0057D7F0();
extern "C" void ext_0057D840();
extern "C" void ext_0057FD60();
extern "C" void ext_0057FE10();
extern "C" void ext_0057FEC0();
extern "C" void ext_00581D90();
extern "C" void ext_00582A20();
extern "C" void ext_00582A70();
extern "C" void ext_00583DD0();
extern "C" void ext_00661E80();
extern "C" void ext_00661F70();
extern "C" void ext_006629B0();
extern "C" void ext_006629F0();
extern "C" void ext_00663690();
extern "C" void ext_0067E110();
extern "C" void ext_006A6DE0();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_0095A0C8;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00955998;
extern "C" int mem_00924EA8;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FE4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00583ED0(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    089ef02h
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 9ch
        push    esi
        mov     esi, ecx
        call    ext_00553760
        test    al, al
        jne     L_583F31
        mov     eax, dword ptr [mem_00924E90]
        mov     ecx, dword ptr [mem_00924FA0]
        push    eax
        push    095978ch
        push    ecx
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        pop     esi
        mov     ecx, dword ptr [esp + 9ch]
        mov     dword ptr fs:[0], ecx
        add     esp, 0a8h
        ret     4
    L_583F31:
        cmp     byte ptr [esi + 214h], 0
        push    ebx
        push    ebp
        push    edi
        lea     edi, [esi + 16ch]
        je      L_5840A2
        lea     edx, [edi + 8ch]
        push    edx
        call    ext_006629B0
        add     esp, 4
        test    al, al
        je      L_5840A2
        lea     ebx, [esi + 1f8h]
        push    ebx
        call    ext_006629B0
        add     esp, 4
        test    al, al
        je      L_583F86
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 38h]
        push    ebx
        mov     ecx, esi
        call    edx
        lea     eax, [esi + 5ch]
        push    eax
        mov     ecx, edi
        call    ext_00406FC0
    L_583F86:
        xor     ebp, ebp
    L_583F88:
        fld     dword ptr [esi + 17ch]
        fstp    dword ptr [esp + 10h]
        fld1
        fcomp   dword ptr [esp + 10h]
        fnstsw  ax
        test    ah, 44h
        jnp     L_584001
        mov     dword ptr [esp + 1ch], ebp
        mov     dword ptr [esp + 20h], ebp
        mov     dword ptr [esp + 24h], ebp
        fld     dword ptr [esi + 17ch]
        mov     eax, dword ptr [esi + 414h]
        fstp    dword ptr [esp + 14h]
        lea     ecx, [eax + 160h]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 24h]
        mov     dword ptr [esp + 0b4h], 4
        call    edx
        push    eax
        lea     ecx, [esp + 1ch]
        call    ext_0040ECB0
        lea     eax, [esp + 14h]
        push    eax
        lea     ecx, [esi + 4f0h]
        call    ext_0057FD60
        lea     ecx, [esp + 18h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    ext_004026E0
    L_584001:
        cmp     dword ptr [esi + 1dch], 1
        jne     L_584354
        mov     ecx, dword ptr [esi + 414h]
        mov     edx, dword ptr [ecx + 8]
        mov     eax, dword ptr [esi + 420h]
        mov     edx, dword ptr [edx + 14h]
        add     ecx, 8
        push    eax
        call    edx
        fld     dword ptr [mem_0095A0C8]
        mov     edi, eax
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        call    ext_00582A70
        test    al, al
        jne     L_584354
        mov     dword ptr [esp + 24h], ebp
        mov     dword ptr [esp + 28h], ebp
        mov     dword ptr [esp + 2ch], ebp
        fld     dword ptr [edi + 30h]
        fstp    dword ptr [esp + 14h]
        mov     ebx, 5
        fld     dword ptr [edi + 34h]
        mov     dword ptr [esp + 0b4h], ebx
        fstp    dword ptr [esp + 18h]
        fld     dword ptr [edi + 38h]
        fstp    dword ptr [esp + 1ch]
        fldz
        fcom    dword ptr [esp + 14h]
        fnstsw  ax
        test    ah, 44h
        jp      L_58428A
        fcom    dword ptr [esp + 18h]
        fnstsw  ax
        test    ah, 44h
        jp      L_58428A
        fcomp   dword ptr [esp + 1ch]
        fnstsw  ax
        test    ah, 44h
        jnp     L_5842B9
        jmp     L_58428C
    L_5840A2:
        lea     ebx, [esi + 46ch]
        mov     ecx, ebx
        call    ext_00581D90
        mov     edi, dword ptr [esi + 414h]
        add     edi, 4ach
        push    edi
        call    ext_006629B0
        add     esp, 4
        test    al, al
        je      L_58415A
        lea     ecx, [esp + 14h]
        call    dword ptr [mem_00924FE8]
        xor     ebp, ebp
        push    ebp
        lea     ecx, [esp + 18h]
        push    ecx
        mov     ecx, dword ptr [esp + 0c4h]
        mov     dword ptr [esp + 0bch], ebp
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ext_00663690
        add     esp, 0ch
        mov     ecx, edi
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 18h]
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     edx, [esp + 3ch]
        push    edx
        call    ext_006629F0
        add     esp, 0ch
        push    eax
        lea     ecx, [esi + 530h]
        mov     byte ptr [esp + 0b8h], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 34h]
        mov     byte ptr [esp + 0b4h], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 14h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    dword ptr [mem_00924FF4]
        jmp     L_58415C
    L_58415A:
        xor     ebp, ebp
    L_58415C:
        mov     eax, 1
        cmp     dword ptr [esi + 564h], eax
        jne     L_584177
        fld     dword ptr [mem_00955998]
        mov     dword ptr [esi + 54ch], eax
        fstp    dword ptr [ebx]
    L_584177:
        lea     edi, [esi + 470h]
        mov     ecx, edi
        call    dword ptr [mem_00924EA8]
        lea     eax, [esi + 8]
        push    eax
        lea     ecx, [esp + 18h]
        push    095a130h
        push    ecx
        call    dword ptr [mem_00924FCC]
        push    0941f08h
        push    eax
        lea     edx, [esp + 48h]
        mov     ebx, 2
        push    edx
        mov     dword ptr [esp + 0cch], ebx
        call    dword ptr [mem_00924ECC]
        add     esp, 18h
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0b8h], 3
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 34h]
        mov     byte ptr [esp + 0b4h], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 14h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    dword ptr [mem_00924FF4]
        fld     dword ptr [esi + 174h]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        call    ext_006A6DE0
        fld     dword ptr [esi + 18ch]
        fstp    dword ptr [esp + 10h]
        mov     dword ptr [esi + 4c8h], eax
        fld     dword ptr [esp + 10h]
        mov     eax, dword ptr [esi + 194h]
        fstp    dword ptr [esi + 4ach]
        mov     dword ptr [esi + 4b4h], eax
        fld     dword ptr [esi + 190h]
        mov     eax, dword ptr [esi + 198h]
        fstp    dword ptr [esp + 10h]
        mov     dword ptr [esi + 4b8h], eax
        fld     dword ptr [esp + 10h]
        mov     eax, dword ptr [esi + 19ch]
        fstp    dword ptr [esi + 4b0h]
        mov     byte ptr [esi + 4d4h], 1
        fld     dword ptr [esi + 188h]
        mov     byte ptr [esi + 4c1h], 1
        fstp    dword ptr [esp + 10h]
        mov     byte ptr [esi + 4c0h], 1
        fld     dword ptr [esp + 10h]
        mov     byte ptr [esi + 4c2h], 1
        fstp    dword ptr [esi + 4a8h]
        mov     dword ptr [esi + 4bch], eax
        jmp     L_583F88
    L_58428A:
        fstp    st(0)
    L_58428C:
        mov     eax, dword ptr [esi + 414h]
        lea     ecx, [eax + 160h]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 24h]
        call    edx
        push    eax
        lea     ecx, [esp + 24h]
        call    ext_0040ECB0
        lea     eax, [esp + 14h]
        push    eax
        lea     ecx, [esi + 500h]
        call    ext_0057FE10
    L_5842B9:
        lea     ecx, [esp + 74h]
        call    ext_0057D7F0
        lea     ecx, [esp + 34h]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0b8h], 6
        call    ext_0067E110
        mov     ecx, eax
        call    ext_00582A20
        test    al, al
        jne     L_584330
        lea     edx, [esp + 74h]
        push    edx
        push    ebp
        mov     ecx, edi
        call    ext_004F4E50
        mov     eax, dword ptr [esi + 414h]
        lea     ecx, [eax + 160h]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 24h]
        call    edx
        push    eax
        lea     ecx, [esp + 0a0h]
        call    ext_0040ECB0
        push    09590f4h
        lea     ecx, [esp + 84h]
        call    dword ptr [mem_00924FD4]
        lea     eax, [esp + 74h]
        push    eax
        lea     ecx, [esi + 510h]
        call    ext_0057FEC0
    L_584330:
        lea     ecx, [esp + 74h]
        mov     byte ptr [esp + 0b4h], bl
        call    ext_00557280
        lea     ecx, [esp + 20h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    ext_004026E0
    L_584354:
        cmp     dword ptr [esi + 424h], 0
        je      L_5843B9
        push    095a114h
        lea     ecx, [esp + 5ch]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [esi + 424h]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0ch]
        lea     eax, [esp + 58h]
        push    eax
        mov     dword ptr [esp + 0b8h], 7
        call    edx
        lea     ecx, [esp + 58h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [esi + 170h]
        mov     ecx, dword ptr [esi + 424h]
        mov     edx, dword ptr [esi + 16ch]
        mov     edi, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edi + 8]
        push    edx
        call    eax
    L_5843B9:
        mov     ecx, dword ptr [esi + 16ch]
        add     ecx, 1
        push    ecx
        mov     ecx, dword ptr [esi + 420h]
        call    ext_00661F70
        mov     ebx, dword ptr [mem_00925134]
    L_5843D4:
        add     ebp, 1
        push    ebp
        mov     ecx, esi
        call    ext_00583DD0
        mov     ecx, dword ptr [esi + 424h]
        test    ecx, ecx
        je      L_5843F1
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    ebp
        call    eax
    L_5843F1:
        mov     ecx, dword ptr [esi + 420h]
        call    ext_00661E80
        test    al, al
        je      L_58442E
        mov     edi, dword ptr [esi + 420h]
        cmp     dword ptr [edi + 8], 0
        jne     L_58440E
        call    ebx
    L_58440E:
        mov     ecx, dword ptr [edi + 8]
        mov     edx, dword ptr [edi + 0ch]
        cmp     edx, dword ptr [ecx + 4]
        jne     L_58441B
        call    ebx
    L_58441B:
        mov     eax, dword ptr [edi + 0ch]
        mov     ecx, dword ptr [esi + 170h]
        mov     eax, dword ptr [eax + 8]
        add     ecx, 1
        cmp     eax, ecx
        jle     L_5843D4
    L_58442E:
        mov     byte ptr [esi + 560h], 1
        add     esi, 46ch
        push    esi
        lea     ecx, [esp + 34h]
        call    ext_00566FE0
        mov     ecx, dword ptr [esp + 0bch]
        push    ecx
        lea     ecx, [esp + 34h]
        mov     dword ptr [esp + 0b8h], 8
        call    ext_0057D840
        lea     ecx, [esp + 30h]
        mov     dword ptr [esp + 0b4h], 0ffffffffh
        call    ext_00493D90
        mov     ecx, dword ptr [esp + 0ach]
        pop     edi
        pop     ebp
        pop     ebx
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0a8h
        ret     4
    }
}

// [0x00582BC0] Acclaim2MotionIO::vfunc_11 (2482 bytes)
extern "C" void ext_00421C00();
extern "C" void ext_00430EF0();
extern "C" void ext_0049EEE0();
extern "C" void ext_00555D70();
extern "C" void ext_005576F0();
extern "C" void ext_0055D0F0();
extern "C" void ext_0055D2C0();
extern "C" void ext_0057BB20();
extern "C" void ext_005828C0();
extern "C" void ext_005A0F70();
extern "C" void ext_00661A10();
extern "C" void ext_00664ED0();
extern "C" void ext_0067E470();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924EA8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FC0;
extern "C" int mem_00925130;

extern "C" __declspec(naked) void __fastcall fn_00582BC0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 089ededh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 7ch
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        or edi, -1
        cmp byte ptr [ebx+560h], 0
        mov dword ptr [esp+10h], ebx
        jne L_582C36
        lea eax, [ebx+46ch]
        push eax
        lea ecx, [esp+70h]
        call ext_0057BB20
        mov ecx, dword ptr [esp+9ch]
        push ecx
        lea ecx, [esp+70h]
        mov dword ptr [esp+98h], 0
        call ext_005828C0
        lea ecx, [ebx+568h]
        call dword ptr [mem_00924EA8]
        lea ecx, [esp+6ch]
        mov dword ptr [esp+94h], edi
        call ext_00421C00
L_582C36:
        cmp byte ptr [ebx+4c1h], 0
        je L_582C5C
        fld dword ptr [ebx+4ach]
        mov eax, dword ptr [ebx+4b4h]
        fstp dword ptr [esp+1ch]
        mov dword ptr [ebx+84h], eax
        fld dword ptr [esp+1ch]
        fstp dword ptr [ebx+7ch]
L_582C5C:
        cmp byte ptr [ebx+4c0h], 0
        je L_582C85
        fld dword ptr [ebx+4b0h]
        mov eax, dword ptr [ebx+4b8h]
        fstp dword ptr [esp+1ch]
        mov dword ptr [ebx+88h], eax
        fld dword ptr [esp+1ch]
        fstp dword ptr [ebx+80h]
L_582C85:
        cmp byte ptr [ebx+4c2h], 0
        je L_582CAB
        fld dword ptr [ebx+4a8h]
        mov eax, dword ptr [ebx+4bch]
        fstp dword ptr [esp+1ch]
        mov dword ptr [ebx+8ch], eax
        fld dword ptr [esp+1ch]
        fstp dword ptr [ebx+78h]
L_582CAB:
        cmp dword ptr [ebx+438h], 0
        jne L_582CD2
        mov edx, dword ptr [ebx+418h]
        push edx
        lea ecx, [ebx+42ch]
        call ext_0055D2C0
        mov eax, dword ptr [ebx+418h]
        mov dword ptr [ebx+414h], eax
L_582CD2:
        cmp dword ptr [ebx+424h], 0
        je L_582DAB
        push 095a0fch
        lea ecx, [esp+70h]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx+424h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx+0ch]
        lea eax, [esp+6ch]
        push eax
        mov dword ptr [esp+98h], 1
        call edx
        lea ecx, [esp+6ch]
        mov dword ptr [esp+94h], edi
        call dword ptr [mem_00924FF4]
        cmp byte ptr [ebx+114h], 0
        mov edx, dword ptr [ebx+4c4h]
        je L_582D5B
        mov eax, dword ptr [ebx+10ch]
        mov esi, dword ptr [ebx+110h]
        mov ecx, dword ptr [ebx+108h]
        lea ebp, [edx-1]
        imul ebp, eax
        lea eax, [esi+3]
        imul eax, edx
        add ebp, ecx
        mov ecx, dword ptr [ebx+424h]
        mov edx, dword ptr [ecx]
        add eax, ebp
        push eax
        mov eax, dword ptr [edx+8]
        jmp L_582D6A
L_582D5B:
        mov ecx, dword ptr [ebx+424h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+8]
        lea edx, [edx+2*edx]
        push edx
L_582D6A:
        push 0
        call eax
        push 095a0e0h
        lea ecx, [esp+70h]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx+424h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx+0ch]
        lea eax, [esp+6ch]
        push eax
        mov dword ptr [esp+98h], 2
        call edx
        lea ecx, [esp+6ch]
        mov dword ptr [esp+94h], edi
        call dword ptr [mem_00924FF4]
L_582DAB:
        fld dword ptr [ebx+64h]
        push ecx
        mov ecx, dword ptr [ebx+420h]
        fstp dword ptr [esp+20h]
        fld dword ptr [esp+20h]
        fstp dword ptr [esp]
        call ext_00661A10
        mov ecx, dword ptr [ebx+414h]
        mov eax, dword ptr [ecx+160h]
        mov edx, dword ptr [eax+24h]
        add ecx, 160h
        call edx
        mov dword ptr [esp+18h], eax
        mov eax, dword ptr [ebx+0cch]
        cmp eax, 1
        je L_582DF7
        test eax, eax
        jne L_58305E
        mov ebx, dword ptr [esp+10h]
L_582DF7:
        mov ecx, dword ptr [ebx+414h]
        mov eax, dword ptr [ecx+8]
        mov edx, dword ptr [ebx+420h]
        mov eax, dword ptr [eax+0ch]
        add ecx, 8
        push edx
        call eax
        mov esi, dword ptr [ebx+504h]
        cmp esi, dword ptr [ebx+508h]
        mov dword ptr [esp+14h], eax
        jbe L_582E27
        call dword ptr [mem_00925134]
L_582E27:
        mov ebp, esi
        mov dword ptr [esp+30h], ebp
        __asm _emit 08dh
        __asm _emit 049h
        __asm _emit 000h
L_582E30:
        mov esi, dword ptr [ebx+508h]
        cmp dword ptr [ebx+504h], esi
        lea edi, [ebx+500h]
        jbe L_582E4A
        call dword ptr [mem_00925134]
L_582E4A:
        test edi, edi
        je L_582E52
        cmp edi, edi
        je L_582E58
L_582E52:
        call dword ptr [mem_00925134]
L_582E58:
        cmp ebp, esi
        je L_582F32
        test edi, edi
        jne L_582E6A
        call dword ptr [mem_00925134]
L_582E6A:
        cmp ebp, dword ptr [edi+8]
        jb L_582E75
        call dword ptr [mem_00925134]
L_582E75:
        mov edi, dword ptr [ebp+10h]
        test edi, edi
        lea esi, [ebp+0ch]
        je L_582EE8
        mov ebx, dword ptr [esi+8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 092492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        je L_582EE8
        cmp edi, ebx
        jbe L_582EA5
        call dword ptr [mem_00925134]
L_582EA5:
        mov ebp, dword ptr [esi+8]
        cmp dword ptr [esi+4], ebp
        jbe L_582EB3
        call dword ptr [mem_00925134]
L_582EB3:
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe L_582EC1
        call dword ptr [mem_00925134]
L_582EC1:
        mov edx, dword ptr [esp+18h]
        push edx
        push ebp
        push edi
        mov dword ptr [esp+34h], edi
        call ext_00430EF0
        add esp, 0ch
        test esi, esi
        mov edi, eax
        je L_582EDE
        cmp esi, esi
        je L_582EE4
L_582EDE:
        call dword ptr [mem_00925134]
L_582EE4:
        cmp edi, ebx
        je L_582F08
L_582EE8:
        mov esi, dword ptr [esp+30h]
        fld dword ptr [esi]
        mov eax, dword ptr [esp+14h]
        fstp dword ptr [eax+30h]
        fld dword ptr [esi+4]
        fstp dword ptr [eax+34h]
        fld dword ptr [esi+8]
        fstp dword ptr [eax+38h]
        fld1
        fstp dword ptr [eax+3ch]
        jmp L_582F0C
L_582F08:
        mov esi, dword ptr [esp+30h]
L_582F0C:
        mov eax, dword ptr [esp+10h]
        add eax, 500h
        cmp esi, dword ptr [eax+8]
        jb L_582F20
        call dword ptr [mem_00925134]
L_582F20:
        mov ebx, dword ptr [esp+10h]
        add esi, 1ch
        mov dword ptr [esp+30h], esi
        mov ebp, esi
        jmp L_582E30
L_582F32:
        mov esi, dword ptr [ebx+514h]
        add ebx, 510h
        cmp esi, dword ptr [ebx+8]
        mov dword ptr [esp+1ch], ebx
        jbe L_582F4D
        call dword ptr [mem_00925134]
L_582F4D:
        mov edi, ebx
        mov dword ptr [esp+30h], esi
L_582F53:
        mov ebp, dword ptr [ebx+8]
        cmp dword ptr [ebx+4], ebp
        jbe L_582F61
        call dword ptr [mem_00925134]
L_582F61:
        test edi, edi
        je L_582F69
        cmp edi, ebx
        je L_582F6F
L_582F69:
        call dword ptr [mem_00925134]
L_582F6F:
        cmp esi, ebp
        je L_58305E
        test edi, edi
        jne L_582F81
        call dword ptr [mem_00925134]
L_582F81:
        cmp esi, dword ptr [edi+8]
        jb L_582F8C
        call dword ptr [mem_00925134]
L_582F8C:
        lea edi, [esi+28h]
        mov esi, dword ptr [edi+4]
        test esi, esi
        __asm _emit 00fh
        __asm _emit 084h
        __asm _emit 07eh
        __asm _emit 000h
        __asm _emit 000h
        __asm _emit 000h
        mov ebx, dword ptr [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 092492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp+20h], ebx
        je L_583018
        cmp esi, ebx
        jbe L_582FC4
        call dword ptr [mem_00925134]
L_582FC4:
        mov ebp, dword ptr [edi+8]
        cmp dword ptr [edi+4], ebp
        jbe L_582FD2
        call dword ptr [mem_00925134]
L_582FD2:
        mov esi, dword ptr [edi+4]
        cmp esi, dword ptr [edi+8]
        jbe L_582FE0
        call dword ptr [mem_00925134]
L_582FE0:
        cmp esi, ebp
        mov dword ptr [esp+28h], esi
        je L_583006
L_582FE8:
        mov ecx, dword ptr [esp+18h]
        push ecx
        push esi
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne L_583002
        add esi, 1ch
        cmp esi, ebp
        jne L_582FE8
L_583002:
        mov ebx, dword ptr [esp+20h]
L_583006:
        test edi, edi
        je L_58300E
        cmp edi, edi
        je L_583014
L_58300E:
        call dword ptr [mem_00925134]
L_583014:
        cmp esi, ebx
        je L_583039
L_583018:
        mov eax, dword ptr [esp+30h]
        push eax
        sub esp, 1ch
        add eax, 0ch
        mov ecx, esp
        mov dword ptr [esp+44h], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+34h]
        call ext_0067E470
L_583039:
        mov edi, dword ptr [esp+1ch]
        mov edx, dword ptr [esp+30h]
        cmp edx, dword ptr [edi+8]
        jb L_58304C
        call dword ptr [mem_00925134]
L_58304C:
        add dword ptr [esp+30h], 38h
        mov ebx, dword ptr [esp+1ch]
        mov esi, dword ptr [esp+30h]
        jmp L_582F53
L_58305E:
        mov edi, dword ptr [esp+10h]
        mov esi, dword ptr [edi+554h]
        add edi, 550h
        xor ebp, ebp
        cmp esi, dword ptr [edi+8]
        mov dword ptr [esp+14h], edi
        jbe L_58307F
        call dword ptr [mem_00925134]
L_58307F:
        mov ebx, esi
        mov dword ptr [esp+28h], ebx
L_583085:
        mov esi, dword ptr [edi+8]
        cmp dword ptr [edi+4], esi
        jbe L_583093
        call dword ptr [mem_00925134]
L_583093:
        test edi, edi
        je L_58309B
        cmp edi, edi
        je L_5830A1
L_58309B:
        call dword ptr [mem_00925134]
L_5830A1:
        cmp ebx, esi
        je L_583545
        test edi, edi
        jne L_5830B3
        call dword ptr [mem_00925134]
L_5830B3:
        cmp ebx, dword ptr [edi+8]
        jb L_5830BE
        call dword ptr [mem_00925134]
L_5830BE:
        mov eax, dword ptr [esp+10h]
        mov ecx, dword ptr [eax+424h]
        add ebp, 1
        test ecx, ecx
        mov dword ptr [esp+18h], ebp
        je L_5830DB
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+4]
        push ebp
        call eax
L_5830DB:
        mov ecx, dword ptr [esp+10h]
        mov ecx, dword ptr [ecx+438h]
        test ecx, ecx
        jne L_5830F3
        mov ecx, dword ptr [esp+10h]
        add ecx, 42ch
L_5830F3:
        call ext_0055D0F0
        cmp ebx, dword ptr [edi+8]
        mov ebp, dword ptr [mem_00925134]
        jb L_583105
        call ebp
L_583105:
        mov esi, dword ptr [ebx+20h]
        add ebx, 1ch
        cmp esi, dword ptr [ebx+8]
        jbe L_583112
        call ebp
L_583112:
        mov edi, esi
L_583114:
        mov eax, dword ptr [esp+14h]
        mov edx, dword ptr [esp+28h]
        cmp edx, dword ptr [eax+8]
        mov dword ptr [esp+30h], edi
        jb L_583127
        call ebp
L_583127:
        mov esi, dword ptr [ebx+8]
        cmp dword ptr [ebx+4], esi
        jbe L_583131
        call ebp
L_583131:
        cmp ebx, ebx
        je L_583137
        call ebp
L_583137:
        cmp edi, esi
        je L_5834B2
        cmp edi, dword ptr [ebx+8]
        jb L_583146
        call ebp
L_583146:
        mov eax, dword ptr [esp+10h]
        mov ecx, dword ptr [eax+414h]
        push edi
        call ext_005A0F70
        mov esi, eax
        test esi, esi
        mov dword ptr [esp+20h], esi
        je L_58349C
        cmp edi, dword ptr [ebx+8]
        jb L_58316B
        call ebp
L_58316B:
        mov ecx, dword ptr [esp+10h]
        mov ecx, dword ptr [ecx+414h]
        push edi
        call ext_005A0F70
        test eax, eax
        mov dword ptr [esp+1ch], eax
        je L_58349C
        add esi, 168h
        push esi
        lea ecx, [esp+38h]
        call ext_0049EEE0
        cmp edi, dword ptr [ebx+8]
        mov dword ptr [esp+94h], 3
        jb L_5831A9
        call ebp
L_5831A9:
        mov esi, dword ptr [edi+20h]
        cmp esi, dword ptr [edi+24h]
        jbe L_5831B3
        call ebp
L_5831B3:
        mov eax, dword ptr [esp+28h]
        add eax, 1ch
        cmp edi, dword ptr [eax+8]
        mov ebx, esi
        jb L_5831C3
        call ebp
L_5831C3:
        mov eax, dword ptr [edi+20h]
        test eax, eax
        je L_5831E2
        mov ecx, dword ptr [edi+24h]
        sub ecx, eax
        mov eax, 088888889h
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
L_5831E2:
        mov esi, dword ptr [esp+38h]
        test esi, esi
        mov edx, dword ptr [esp+3ch]
        je L_5831FD
        mov ecx, edx
        sub ecx, esi
        sar ecx, 3
        cmp eax, ecx
        jb L_5834D7
L_5831FD:
        mov eax, dword ptr [esp+10h]
        cmp dword ptr [eax+54ch], 0
        jne L_583270
        cmp esi, edx
        jbe L_583210
        call ebp
L_583210:
        mov edi, dword ptr [esp+3ch]
        cmp dword ptr [esp+38h], edi
        jbe L_58321C
        call ebp
L_58321C:
        cmp esi, edi
        je L_583430
        mov eax, dword ptr [esp+30h]
        add eax, 1ch
        cmp ebx, dword ptr [eax+8]
        jb L_583232
        call ebp
L_583232:
        cmp esi, dword ptr [esp+3ch]
        jb L_58323A
        call ebp
L_58323A:
        lea ecx, [ebx+20h]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esi+4]
        mov eax, dword ptr [esp+34h]
        add eax, 1ch
        add esp, 4
        cmp ebx, dword ptr [eax+8]
        jb L_58325E
        call ebp
L_58325E:
        add ebx, 3ch
        cmp esi, dword ptr [esp+3ch]
        jb L_583269
        call ebp
L_583269:
        add esi, 8
        jmp L_583210
        mov edi, edi
L_583270:
        mov eax, dword ptr [esp+28h]
        add eax, 1ch
        cmp edi, dword ptr [eax+8]
        jb L_58327E
        call ebp
L_58327E:
        mov esi, dword ptr [edi+24h]
        add edi, 1ch
        cmp dword ptr [edi+4], esi
        jbe L_58328B
        call ebp
L_58328B:
        cmp edi, edi
        je L_583291
        call ebp
L_583291:
        cmp ebx, esi
        je L_583430
        cmp ebx, dword ptr [edi+8]
        jb L_5832A0
        call ebp
L_5832A0:
        mov esi, dword ptr [esp+38h]
        cmp esi, dword ptr [esp+3ch]
        jbe L_5832B0
        call ebp
        __asm _emit 08dh
        __asm _emit 064h
        __asm _emit 024h
        __asm _emit 000h
L_5832B0:
        mov edi, dword ptr [esp+3ch]
        cmp dword ptr [esp+38h], edi
        jbe L_5832BC
        call ebp
L_5832BC:
        cmp esi, edi
        je L_583416
        lea ecx, [ebx+4]
        push ecx
        lea ecx, [esp+48h]
        call dword ptr [mem_00924FE0]
        lea edx, [esp+44h]
        push edx
        mov byte ptr [esp+98h], 6
        call ext_00664ED0
        mov edi, dword ptr [mem_00924FC0]
        lea eax, [esp+48h]
        push 095919ch
        push eax
        call edi
        add esp, 0ch
        test al, al
        je L_58330E
        cmp esi, dword ptr [esp+3ch]
        jb L_583305
        call ebp
L_583305:
        cmp dword ptr [esi], 0
        je L_5833D6
L_58330E:
        lea ecx, [esp+44h]
        push 0959198h
        push ecx
        call edi
        add esp, 8
        test al, al
        je L_583332
        cmp esi, dword ptr [esp+3ch]
        jb L_583329
        call ebp
L_583329:
        cmp dword ptr [esi], 1
        je L_5833D6
L_583332:
        lea edx, [esp+44h]
        push 0959194h
        push edx
        call edi
        add esp, 8
        test al, al
        je L_583356
        cmp esi, dword ptr [esp+3ch]
        jb L_58334D
        call ebp
L_58334D:
        cmp dword ptr [esi], 2
        je L_5833D6
L_583356:
        lea eax, [esp+44h]
        push 0959190h
        push eax
        call edi
        add esp, 8
        test al, al
        je L_583376
        cmp esi, dword ptr [esp+3ch]
        jb L_583371
        call ebp
L_583371:
        cmp dword ptr [esi], 3
        je L_5833D6
L_583376:
        lea ecx, [esp+44h]
        push 095918ch
        push ecx
        call edi
        add esp, 8
        test al, al
        je L_583396
        cmp esi, dword ptr [esp+3ch]
        jb L_583391
        call ebp
L_583391:
        cmp dword ptr [esi], 4
        je L_5833D6
L_583396:
        lea edx, [esp+44h]
        push 0959188h
        push edx
        call edi
        add esp, 8
        test al, al
        je L_5833B6
        cmp esi, dword ptr [esp+3ch]
        jb L_5833B1
        call ebp
L_5833B1:
        cmp dword ptr [esi], 5
        je L_5833D6
L_5833B6:
        lea eax, [esp+44h]
        push 092f1b8h
        push eax
        call edi
        add esp, 8
        test al, al
        je L_5833F4
        cmp esi, dword ptr [esp+3ch]
        jb L_5833D1
        call ebp
L_5833D1:
        cmp dword ptr [esi], 6
        jne L_5833F4
L_5833D6:
        cmp esi, dword ptr [esp+3ch]
        jb L_5833DE
        call ebp
L_5833DE:
        lea ecx, [ebx+20h]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esi+4]
        add esp, 4
L_5833F4:
        lea ecx, [esp+44h]
        mov byte ptr [esp+94h], 3
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [esp+3ch]
        jb L_58340E
        call ebp
L_58340E:
        add esi, 8
        jmp L_5832B0
L_583416:
        mov eax, dword ptr [esp+30h]
        add eax, 1ch
        cmp ebx, dword ptr [eax+8]
        jb L_583424
        call ebp
L_583424:
        mov edi, dword ptr [esp+30h]
        add ebx, 3ch
        jmp L_583270
L_583430:
        mov esi, dword ptr [esp+20h]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx+70h]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp+18h]
        mov edx, dword ptr [esp+1ch]
        test al, al
        lea eax, [esp+34h]
        je L_58345F
        xor esi, esi
        push esi
        push ecx
        mov ecx, dword ptr [esp+18h]
        push esi
        push edx
        push eax
        call ext_00555D70
        jmp L_583470
L_58345F:
        push esi
        push ecx
        mov ecx, dword ptr [esp+18h]
        push 1
        push edx
        push eax
        call ext_00555D70
        xor esi, esi
L_583470:
        mov eax, dword ptr [esp+38h]
        cmp eax, esi
        mov dword ptr [esp+94h], 0ffffffffh
        je L_58348C
        push eax
        call ext_006A5C5C
        add esp, 4
L_58348C:
        mov edi, dword ptr [esp+30h]
        mov dword ptr [esp+38h], esi
        mov dword ptr [esp+3ch], esi
        mov dword ptr [esp+40h], esi
L_58349C:
        mov ebx, dword ptr [esp+28h]
        add ebx, 1ch
        cmp edi, dword ptr [ebx+8]
        jb L_5834AA
        call ebp
L_5834AA:
        add edi, 2ch
        jmp L_583114
L_5834B2:
        mov eax, dword ptr [esp+14h]
        mov ecx, dword ptr [esp+28h]
        cmp ecx, dword ptr [eax+8]
        jb L_5834C1
        call ebp
L_5834C1:
        add dword ptr [esp+28h], 3ch
        mov edi, dword ptr [esp+14h]
        mov ebp, dword ptr [esp+18h]
        mov ebx, dword ptr [esp+28h]
        jmp L_583085
L_5834D7:
        push 095a0cch
        lea ecx, [esp+70h]
        call dword ptr [mem_00924FE4]
        mov esi, eax
        mov ecx, esi
        mov byte ptr [esp+94h], 4
        call dword ptr [mem_00924FF0]
        lea edx, [esp+20h]
        push edx
        lea ecx, [esp+48h]
        mov dword ptr [esp+24h], eax
        call dword ptr [mem_00925130]
        push esi
        lea ecx, [esp+54h]
        mov byte ptr [esp+98h], 5
        mov dword ptr [esp+48h], 0928ef0h
        call dword ptr [mem_00924FE0]
        push 09f8908h
        lea eax, [esp+48h]
        push eax
        mov byte ptr [esp+9ch], 4
        mov dword ptr [esp+4ch], 09570dch
        call ext_006A6DD2
L_583545:
        mov ecx, dword ptr [esp+10h]
        cmp dword ptr [ecx+438h], 0
        jne L_583557
        call ext_005576F0
L_583557:
        mov ecx, dword ptr [esp+8ch]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 88h
        ret 4
    }
}
