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
