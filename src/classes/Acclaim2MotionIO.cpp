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
