// Decompiled translation unit: src/leaf/decompiled_740000.cpp

// [0x0074AE00] sub_0074AE00 (32 bytes)
// Stores three stack args into self->[0], [4], [8] and zeroes self->[0xC]; ret 0xC.
extern "C" __declspec(naked) void __fastcall fn_0074AE00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], 0x0
        ret 0xc
    }
}

extern "C" void ext_00700980();

// [0x00747570] sub_00747570 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00747570(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov ecx, dword ptr [esp+8]
        push 0
        call ext_00700980
        mov al, 1
        ret 8
    }
}

extern "C" void ext_006D2160();
extern "C" void ext_006B9D70();

// [0x0074B330] sub_0074B330 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074B330(void* self) {
    __asm {
        push -1
        push 0x008BF312
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xd0]
        mov dword ptr [esp + 0x10], 0x3
        call ext_006D2160
        lea ecx, [esi + 0xb8]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006D2160
        lea ecx, [esi + 0xa0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D2160
        lea ecx, [esi + 0x88]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007435A0] sub_007435A0 (144 bytes)
// Stack arg (ret 0, cdecl): returns 1 if s == "Index", 2 if s == "IndexToDirect", else 0.
static const char s_fn007435A0_index[] = "Index";
static const char s_fn007435A0_idx2direct[] = "IndexToDirect";
extern "C" __declspec(naked) int __cdecl fn_007435A0(const char* s) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor ebp, ebp
        mov esi, offset s_fn007435A0_index
        mov ecx, edi
    cmp1_loop:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne cmp1_mis
        test dl, dl
        je cmp1_eq
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne cmp1_mis
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne cmp1_loop
    cmp1_eq:
        xor ecx, ecx
        jmp cmp1_done
    cmp1_mis:
        sbb ecx, ecx
        sbb ecx, -1
    cmp1_done:
        test ecx, ecx
        jne try2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    try2:
        mov esi, offset s_fn007435A0_idx2direct
        mov ecx, edi
    cmp2_loop:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne cmp2_mis
        test dl, dl
        je cmp2_eq
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne cmp2_mis
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne cmp2_loop
    cmp2_eq:
        xor ecx, ecx
        jmp cmp2_done
    cmp2_mis:
        sbb ecx, ecx
        sbb ecx, -1
    cmp2_done:
        test ecx, ecx
        mov eax, 0x2
        je cmp2_out
        mov eax, ebp
    cmp2_out:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00743CB0] sub_00743CB0 (32 bytes)
extern "C" void ext_0079EF70(void*);
extern "C" bool __fastcall fn_00743CB0(void* self) {
    void** p = (void**)((char*)self + 0xb8);
    ext_0079EF70(*p);
    *p = 0;
    return true;
}

// [0x0074AE40] sub_0074AE40 (175 bytes)
// Hand-rolled SEH frame (push -1 / handler / fs:[0] chain), then three
// sub-object initialisations via sub_006D2130. Emitted as naked asm so the
// stack-relative offsets and the frame layout match the original byte-for-byte.
extern "C" void ext_006D2130();

extern "C" __declspec(naked) void __fastcall fn_0074AE40(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push    -1
        push    08bf296h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 18h]
        push    ebp
        mov     ebp, dword ptr [esp + 20h]
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, dword ptr [esp + 20h]
        push    4
        lea     edi, [esi + 14h]
        mov     dword ptr [esi + 10h], ecx
        push    10h
        mov     ecx, edi
        mov     dword ptr [esp + 14h], esi
        mov     byte ptr [esi], 1
        mov     byte ptr [esi + 1], 1
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0ch], ebp
        call    ext_006D2130
        lea     edx, [edi + 10h]
        mov     dword ptr [edi + 14h], edx
        lea     edi, [esi + 2ch]
        push    4
        push    10h
        mov     ecx, edi
        mov     dword ptr [esp + 20h], 0
        call    ext_006D2130
        lea     eax, [edi + 10h]
        mov     dword ptr [edi + 14h], eax
        lea     edi, [esi + 44h]
        push    4
        push    10h
        mov     ecx, edi
        mov     byte ptr [esp + 20h], 1
        call    ext_006D2130
        lea     ecx, [edi + 10h]
        test    ebp, ebp
        mov     dword ptr [edi + 14h], ecx
        jne     short L_true
        mov     byte ptr [esi + 2], 0
        jmp     short L_done
L_true:
        mov     byte ptr [esi + 2], 1
L_done:
        mov     ecx, dword ptr [esp + 10h]
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 10h
        ret     0ch
    }
}

// [0x0074B170] sub_0074B170 (192 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_00784650();
extern "C" void ext_007846D0();
extern "C" __declspec(naked) void __fastcall fn_0074B170(void* self, int edx_unused, int a1_unused, int a2) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    8bf2cbh
        push    eax
        mov     dword ptr fs:[0], esp
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 1ch]
        push    esi
        xor     ebx, ebx
        push    edi
        push    ebx
        mov     edi, ecx
        push    ebp
        call    ext_007846D0
        mov     esi, eax
        cmp     esi, ebx
        jne     L_74B1DC
        push    18h
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 24h], esi
        cmp     esi, ebx
        mov     dword ptr [esp + 18h], ebx
        je      L_74B1C9
        push    4
        push    10h
        mov     ecx, esi
        call    ext_006D2130
        lea     eax, [esi + 10h]
        mov     dword ptr [esi + 14h], eax
        jmp     L_74B1CB
L_74B1C9:
        xor     esi, esi
L_74B1CB:
        push    esi
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esp + 20h], 0ffffffffh
        call    ext_00784650
L_74B1DC:
        mov     edx, dword ptr [esi]
        mov     ebp, dword ptr [esp + 20h]
        lea     ecx, [esp + 24h]
        mov     dword ptr [esp + 24h], ebp
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006D2170
        cmp     byte ptr [ebp], bl
        jne     L_74B1FB
        mov     byte ptr [edi + 14h], bl
L_74B1FB:
        cmp     byte ptr [ebp + 1], bl
        jne     L_74B203
        mov     byte ptr [edi + 15h], bl
L_74B203:
        mov     cl, byte ptr [ebp + 2]
        mov     al, 1
        cmp     cl, bl
        je      L_74B211
        mov     byte ptr [edi + 17h], al
        jmp     L_74B214
L_74B211:
        mov     byte ptr [edi + 16h], bl
L_74B214:
        mov     ecx, dword ptr [edi + 18h]
        inc     ecx
        mov     dword ptr [edi + 18h], ecx
        mov     ecx, dword ptr [esp + 10h]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0ch
        ret     8
    }
}

// [0x007475B0] sub_007475B0 (255 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006D80A0();
extern "C" void ext_0071B7E0();
extern "C" void ext_0071B870();
extern "C" void ext_0071BFB0();
extern "C" void ext_0071C0E0();
extern "C" void ext_0071CE40();
extern "C" void ext_0077FB40();
extern "C" void ext_007AAB70();
extern "C" int mem_00996B98;
extern "C" int mem_00996B90;

extern "C" __declspec(naked) void __fastcall fn_007475B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x008bfd88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0x34]
        push esi
        mov esi, dword ptr [esp + 0x3c]
        fld dword ptr [ebx + 0x30]
        push edi
        mov edi, ecx
        sub esp, 0x8
        mov ecx, esi
        fmul qword ptr [edi + 0xc8]
        fstp qword ptr [esp]
        call ext_0071B7E0
        fld dword ptr [ebx + 0x34]
        fmul qword ptr [edi + 0xc8]
        sub esp, 0x8
        mov ecx, esi
        fmul qword ptr [mem_00996B98]
        fstp qword ptr [esp]
        call ext_0071B870
        fld dword ptr [ebx + 0x28]
        fdivr qword ptr [mem_00996B90]
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071C0E0
        push 0x1
        mov ecx, esi
        call ext_0071BFB0
        lea ecx, [esp + 0xc]
        call ext_0077FB40
        push 0x3c
        mov dword ptr [esp + 0x38], 0x0
        call ext_006A5C62
        mov ecx, dword ptr [edi + 0xbc]
        mov dword ptr [esp + 0x40], eax
        lea eax, [esp + 0x40]
        push eax
        push ecx
        call ext_007AAB70
        mov eax, dword ptr [esp + 0x48]
        add esp, 0xc
        lea edx, [esp + 0xc]
        mov ecx, esi
        fld dword ptr [eax + 0x4]
        push edx
        fstp qword ptr [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [eax + 0xc]
        fstp qword ptr [esp + 0x20]
        call ext_0071CE40
        mov eax, dword ptr [esp + 0x3c]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
    }
}

extern "C" void ext_006B9D80();
extern "C" void ext_006BA370();
extern "C" void ext_006BA570();
extern "C" void ext_006E7460();
extern "C" int mem_0092521C;

// [0x0074F340] sub_0074F340 (496 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074F340(void* self, void* dummy, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bf76b
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0], esp
        sub esp, 0x9c
        test eax, eax
        jne loc_74f37c
        xor al, al
        mov ecx, dword ptr [esp + 0x9c]
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 8

    loc_74f37c:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xb8]
        push edi
        push eax
        lea ebp, [esi + 4]
        lea ebx, [esi + 8]
        lea ecx, [esp + 0x18]
        mov dword ptr [esi], 0
        mov dword ptr [ebp], 0
        mov dword ptr [ebx], 0
        call ext_006B9D80
        push 0xaa9444
        lea eax, [esp + 0x64]
        push 0
        push eax
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xc0], 0
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 1
        call ext_006E7460
        lea ecx, [esp + 0x60]
        mov edi, eax
        mov byte ptr [esp + 0xb4], 0
        call ext_006B9D70
        push esi
        push 0xaa86a4
        push edi
        mov edi, dword ptr [mem_0092521C]
        call edi
        add esp, 0xc
        lea ecx, [esp + 0x14]
        push 0
        push 0xaae7f0
        call ext_006BA370
        test eax, eax
        push 0xaa9444
        push 1
        jl loc_74f44e
        lea ecx, [esp + 0x68]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 2
        call ext_006E7460
        lea ecx, [esp + 0x60]
        mov ebp, eax
        mov byte ptr [esp + 0xb4], 0
        call ext_006B9D70
        jmp loc_74f4cf

    loc_74f44e:
        lea edx, [esp + 0x68]
        lea ecx, [esp + 0x1c]
        push edx
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 3
        call ext_006E7460
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x10], eax
        mov byte ptr [esp + 0xb4], 0
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je loc_74f4db
        push ebp
        push 0xaa86a4
        push eax
        call edi
        add esp, 0xc
        lea eax, [esp + 0x60]
        lea ecx, [esp + 0x14]
        push 0xaa9444
        push 2
        push eax
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 4
        call ext_006E7460
        lea ecx, [esp + 0x60]
        mov ebp, eax
        mov byte ptr [esp + 0xb4], 0
        call ext_006B9D70
        test ebp, ebp
        je loc_74f4db

    loc_74f4cf:
        push ebx
        push 0xaa86a4
        push ebp
        call edi
        add esp, 0xc

    loc_74f4db:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        test eax, eax
        pop ebx
        mov dword ptr [esp + 0xa4], 0xffffffff
        lea ecx, [esp + 4]
        jne loc_74f512
        call ext_006B9D70
        xor al, al
        mov ecx, dword ptr [esp + 0x9c]
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 8

    loc_74f512:
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x9c]
        mov al, 1
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 8
    }
}

extern "C" void ext_006FB650();
extern "C" void ext_006FC200();
extern "C" void ext_00708000();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726A40();
extern "C" void ext_0079C410();
extern "C" int mem_009252D0;
extern "C" int mem_00B5EB78;

// [0x00741F20] sub_00741F20 (720 bytes)
extern "C" __declspec(naked) void __fastcall fn_00741F20(void* self) {
    __asm {
        sub esp, 0x20
        push ebp
        mov ebp, ecx
        push 0x00aae594
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_7421e9
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je loc_7421db
        mov ecx, dword ptr [ebp + 0xac]
        push 0x00aae58c
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_7421cd
        push ebx
        mov ebx, dword ptr [mem_009252D0]
        push esi
        push edi

    loc_741f7b:
        mov ecx, dword ptr [ebp + 0xac]
        push 0x1f
        add ecx, 0x4
        call ext_00726A40
        push eax
        lea eax, [esp + 0x18]
        push eax
        call ebx
        add esp, 0xc
        mov esi, 0x00aae588
        lea eax, [esp + 0x10]

    loc_741f9f:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_741fc3
        test cl, cl
        je loc_741fbf
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_741fc3
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne loc_741f9f

    loc_741fbf:
        xor eax, eax
        jmp loc_741fc8

    loc_741fc3:
        sbb eax, eax
        sbb eax, -0x1

    loc_741fc8:
        test eax, eax
        jne loc_742067
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726A40
        mov ecx, dword ptr [ebp + 0xac]
        push eax
        call ext_0079C410
        test eax, eax
        je loc_742017
        mov edx, dword ptr [eax]
        push 0x0
        push 0xde1947f3
        mov ecx, eax
        call dword ptr [edx]
        mov esi, eax
        test esi, esi
        je loc_742017
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        je loc_742017
        mov edi, esi
        jmp loc_742019

    loc_742017:
        xor edi, edi

    loc_742019:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726A40
        mov ecx, dword ptr [ebp + 0xac]
        push eax
        call ext_0079C410
        test eax, eax
        je loc_742060
        mov edx, dword ptr [eax]
        push 0x0
        push 0xde1947f3
        mov ecx, eax
        call dword ptr [edx]
        mov esi, eax
        test esi, esi
        je loc_742060
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        jne loc_742183

    loc_742060:
        xor esi, esi
        jmp loc_742183

    loc_742067:
        mov esi, 0x00aae584
        lea eax, [esp + 0x10]

    loc_742070:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_742094
        test cl, cl
        je loc_742090
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_742094
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne loc_742070

    loc_742090:
        xor eax, eax
        jmp loc_742099

    loc_742094:
        sbb eax, eax
        sbb eax, -0x1

    loc_742099:
        test eax, eax
        je loc_7421a1
        mov esi, 0x00aae580
        lea eax, [esp + 0x10]

    loc_7420aa:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_7420ce
        test cl, cl
        je loc_7420ca
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_7420ce
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne loc_7420aa

    loc_7420ca:
        xor eax, eax
        jmp loc_7420d3

    loc_7420ce:
        sbb eax, eax
        sbb eax, -0x1

    loc_7420d3:
        test eax, eax
        jne loc_7421a1
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726A40
        mov ecx, dword ptr [ebp + 0xac]
        push eax
        call ext_0079C410
        test eax, eax
        je loc_742122
        mov edx, dword ptr [eax]
        push 0x0
        push 0xde1947f3
        mov ecx, eax
        call dword ptr [edx]
        mov esi, eax
        test esi, esi
        je loc_742122
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        je loc_742122
        mov edi, esi
        jmp loc_742124

    loc_742122:
        xor edi, edi

    loc_742124:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726A40
        mov ecx, dword ptr [ebp + 0xac]
        push eax
        call ext_0079C410
        test eax, eax
        je loc_74217f
        mov edx, dword ptr [eax]
        push 0x0
        push 0xde1947f3
        mov ecx, eax
        call dword ptr [edx]
        mov esi, eax
        test esi, esi
        je loc_74217f
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        je loc_74217f
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726A40
        push eax
        mov ecx, esi
        call ext_00708000
        jmp loc_742181

    loc_74217f:
        xor eax, eax

    loc_742181:
        mov esi, eax

    loc_742183:
        test edi, edi
        je loc_7421a1
        test esi, esi
        je loc_7421a1
        push edi
        mov ecx, esi
        call ext_006FC200
        test al, al
        jne loc_7421a1
        push 0x0
        push edi
        mov ecx, esi
        call ext_006FB650

    loc_7421a1:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0xac]
        push 0x00aae58c
        add ecx, 0x4
        call ext_00726770
        test al, al
        jne loc_741f7b
        pop edi
        pop esi
        pop ebx

    loc_7421cd:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_007268D0

    loc_7421db:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726840

    loc_7421e9:
        mov al, 0x1
        pop ebp
        add esp, 0x20
        ret
    }
}

extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA0C0();
extern "C" void ext_006BA780();

// [0x007421F0] sub_007421F0 (848 bytes)
extern "C" __declspec(naked) void __fastcall fn_007421F0(void* self) {
    __asm {
        push -0x1
        push 0x8beaf7
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x264
        push ebx
        push esi
        mov dword ptr [esp + 0x8], 0x0
        mov ebx, 0x1
        push 0xaa8704
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x278], ebx
        call ext_006B9D80
        lea eax, [esp + 0xc]
        push 0xaa9554
        lea ecx, [esp + 0x224]
        push eax
        push ecx
        mov byte ptr [esp + 0x280], 0x2
        call ext_006BA0C0
        lea edx, [esp + 0x18]
        push 0xaa9544
        lea eax, [esp + 0x198]
        push edx
        push eax
        mov byte ptr [esp + 0x28c], 0x3
        call ext_006BA0C0
        lea ecx, [esp + 0x24]
        push 0xaa9524
        lea edx, [esp + 0x10c]
        push ecx
        push edx
        mov byte ptr [esp + 0x298], 0x4
        call ext_006BA0C0
        lea eax, [esp + 0x30]
        push 0xaa9514
        lea ecx, [esp + 0xcc]
        push eax
        push ecx
        mov byte ptr [esp + 0x2a4], 0x5
        call ext_006BA0C0
        lea edx, [esp + 0x3c]
        push 0xaa9504
        lea eax, [esp + 0x8c]
        push edx
        push eax
        mov byte ptr [esp + 0x2b0], 0x6
        call ext_006BA0C0
        lea ecx, [esp + 0x48]
        push 0xaa94f4
        lea edx, [esp + 0x214]
        push ecx
        push edx
        mov byte ptr [esp + 0x2bc], 0x7
        call ext_006BA0C0
        add esp, 0x48
        lea eax, [esp + 0xc]
        push 0xaa873c
        lea ecx, [esp + 0x140]
        push eax
        push ecx
        mov byte ptr [esp + 0x280], 0x8
        call ext_006BA0C0
        add esp, 0xc
        lea edx, [esp + 0x220]
        lea ecx, [esp + 0x280]
        push edx
        mov byte ptr [esp + 0x278], 0x9
        call ext_006BA780
        test al, al
        je loc_74234a
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa9554
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esp + 0x8], ebx
        jmp loc_742478

    loc_74234a:
        lea eax, [esp + 0x188]
        lea ecx, [esp + 0x280]
        push eax
        call ext_006BA780
        test al, al
        je loc_74237a
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa9544
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_74237a:
        lea ecx, [esp + 0xf0]
        push ecx
        lea ecx, [esp + 0x284]
        call ext_006BA780
        test al, al
        je loc_7423aa
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa9524
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_7423aa:
        lea edx, [esp + 0xa4]
        lea ecx, [esp + 0x280]
        push edx
        call ext_006BA780
        test al, al
        je loc_7423da
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa9514
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_7423da:
        lea eax, [esp + 0x58]
        lea ecx, [esp + 0x280]
        push eax
        call ext_006BA780
        test al, al
        je loc_742404
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa9504
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_742404:
        lea ecx, [esp + 0x1d4]
        push ecx
        lea ecx, [esp + 0x284]
        call ext_006BA780
        test al, al
        je loc_742431
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa94f4
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_742431:
        lea edx, [esp + 0x13c]
        lea ecx, [esp + 0x280]
        push edx
        call ext_006BA780
        test al, al
        je loc_74245e
        mov esi, dword ptr [esp + 0x27c]
        push 0xaa873c
        mov ecx, esi
        call ext_006B9D80
        jmp loc_742474

    loc_74245e:
        mov esi, dword ptr [esp + 0x27c]
        lea eax, [esp + 0x280]
        push eax
        mov ecx, esi
        call ext_006B9D20

    loc_742474:
        mov dword ptr [esp + 0x8], ebx

    loc_742478:
        lea ecx, [esp + 0x13c]
        mov byte ptr [esp + 0x274], 0x8
        call ext_006B9D70
        lea ecx, [esp + 0x1d4]
        mov byte ptr [esp + 0x274], 0x7
        call ext_006B9D70
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x274], 0x6
        call ext_006B9D70
        lea ecx, [esp + 0xa4]
        mov byte ptr [esp + 0x274], 0x5
        call ext_006B9D70
        lea ecx, [esp + 0xf0]
        mov byte ptr [esp + 0x274], 0x4
        call ext_006B9D70
        lea ecx, [esp + 0x188]
        mov byte ptr [esp + 0x274], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x220]
        mov byte ptr [esp + 0x274], 0x2
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x274], bl
        call ext_006B9D70
        lea ecx, [esp + 0x280]
        mov byte ptr [esp + 0x274], 0x0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x26c]
        mov eax, esi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x270
        ret 0x50
    }
}

// [0x00743CD0] sub_00743CD0 (3408 bytes)
extern "C" void ext_006D2300();
extern "C" void ext_006E7440();
extern "C" void ext_0074AD50();
extern "C" void ext_0079F230();
extern "C" void ext_0079F790();
extern "C" void ext_0079FD60();
extern "C" void ext_0079FDA0();
extern "C" void ext_007A0470();
extern "C" void ext_007A0D40();
extern "C" void ext_007A1670();
extern "C" void ext_007A19A0();
extern "C" void ext_007A19E0();
extern "C" void ext_007A1DC0();
extern "C" void ext_007A2560();
extern "C" void ext_007A2580();
extern "C" void ext_007A34F0();
extern "C" void ext_007A4BE0();
extern "C" void ext_007A5F20();
extern "C" void ext_007A5F80();
extern "C" void ext_007A67C0();
extern "C" void ext_007A6850();
extern "C" void ext_007A6950();
extern "C" void ext_007A7390();
extern "C" void ext_007A7400();
extern "C" void ext_007A8B20();
extern "C" void ext_007A8C00();
extern "C" void ext_007A9230();
extern "C" void ext_007AA190();
extern "C" void ext_007AA910();
extern "C" void ext_007AAA20();
extern "C" int mem_00B61168;
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;
extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __fastcall fn_00743CD0(void* self) {
    __asm {
        push esi
        call ext_0079F230
        mov esi, eax
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x128]
        mov eax, esi
        pop esi
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        xor ebp, ebp
        push edi
        cmp esi, ebp
        mov ebx, ecx
        je L_00743D12
        mov ecx, dword ptr [mem_00B61168]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        jne L_00743D21
    L_00743D12:
        push 0x6
        lea ecx, [ebx + 0x8]
        call ext_006E7440
        jmp L_00743E14
    L_00743D21:
        push 0x8
        mov ecx, esi
        call ext_007AA910
        cmp eax, 0x1
        push 0x7
        sete dl
        mov ecx, esi
        mov byte ptr [ebx + 0xac], dl
        call ext_007AA910
        cmp eax, 0x1
        push 0x9
        sete al
        mov ecx, esi
        mov byte ptr [ebx + 0xad], al
        call ext_007AA910
        cmp eax, 0x1
        push 0xa
        sete cl
        mov byte ptr [ebx + 0xae], cl
        mov ecx, esi
        call ext_007AA910
        cmp eax, 0x1
        push 0xb
        sete dl
        mov ecx, esi
        mov byte ptr [ebx + 0xaf], dl
        call ext_007AA910
        cmp eax, 0x1
        push 0xc
        sete al
        mov ecx, esi
        mov byte ptr [ebx + 0xb0], al
        call ext_007AA910
        cmp eax, 0x1
        push 0xf
        sete cl
        mov byte ptr [ebx + 0xb1], cl
        mov ecx, esi
        call ext_007AA910
        cmp eax, 0x1
        push 0xd
        sete dl
        mov ecx, esi
        mov byte ptr [ebx + 0xb2], dl
        call ext_007AA910
        cmp eax, 0x1
        push 0x10
        sete al
        mov ecx, esi
        mov byte ptr [ebx + 0xb3], al
        call ext_007AA910
        cmp eax, 0x1
        push 0x1
        sete cl
        mov byte ptr [ebx + 0xb4], cl
        mov ecx, esi
        call ext_007AA910
        cmp eax, 0x1
        push 0xe
        sete dl
        mov ecx, esi
        mov byte ptr [ebx + 0xb5], dl
        call ext_007AA910
        cmp eax, 0x1
        push 0xaae5dc
        sete al
        mov ecx, esi
        mov byte ptr [ebx + 0xb6], al
        call ext_007AAA20
    L_00743E14:
        mov al, byte ptr [ebx + 0xb6]
        test al, al
        je L_00743E34
        mov dword ptr [ebx + 0xc8], 0x851eb852
        mov dword ptr [ebx + 0xcc], 0x400451eb
        jmp L_00743E44
    L_00743E34:
        mov dword ptr [ebx + 0xc8], ebp
        mov dword ptr [ebx + 0xcc], 0x3ff00000
    L_00743E44:
        lea edi, [ebx + 0xbc]
        push edi
        call ext_007A9230
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_00743E6E
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_00743E6E
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_00743E6E:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ebx + 0xb8]
        push ecx
        push edx
        call ext_007AA190
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_00743E9B
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_00743E9B
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_00743E9B:
        lea esi, [ebx + 0xc0]
        push esi
        call ext_007A8B20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_00743EC5
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_00743EC5
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_00743EC5:
        mov eax, dword ptr [edi]
        push esi
        push eax
        call ext_007A8C00
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_00743EEC
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_00743EEC
    L_00743EE3:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_00743EEC:
        mov ecx, dword ptr [esi]
        fld dword ptr [ecx]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        jne L_00743F0B
        fld dword ptr [ecx]
        fmul qword ptr [ebx + 0xc8]
        fstp qword ptr [ebx + 0xc8]
    L_00743F0B:
        add ecx, 0x18
        lea edx, [ebx + 0xd0]
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov ecx, dword ptr [ecx + 0x8]
        mov dword ptr [edx + 0x8], ecx
        mov edx, dword ptr [edi]
        push edx
        call ext_007A7390
        add esp, 0x4
        cmp eax, ebp
        mov dword ptr [ebx + 0xdc], eax
        jbe L_00743FE2
        push eax
        lea ecx, [ebx + 0xe0]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0xdc]
        lea ecx, [ebx + 0xf8]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0xdc]
        xor eax, eax
        cmp ecx, ebp
        jbe L_00743F86
    L_00743F67:
        mov ecx, dword ptr [ebx + 0xf0]
        inc eax
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov edx, dword ptr [ebx + 0x108]
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0xdc]
        cmp eax, ecx
        jb L_00743F67
    L_00743F86:
        mov eax, dword ptr [ebx + 0xdc]
        xor esi, esi
        cmp eax, ebp
        jbe L_00743FE2
    L_00743F92:
        mov eax, dword ptr [ebx + 0xf0]
        lea edx, [esp + 0x18]
        push edx
        push esi
        mov ecx, dword ptr [eax + 4*esi]
        mov eax, dword ptr [ebx + 0xbc]
        push eax
        mov dword ptr [esp + 0x24], ecx
        call ext_007A7400
        mov ecx, dword ptr [ebx + 0xf0]
        mov edx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [ecx + 4*esi], edx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00743FD7
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00743FD7:
        mov eax, dword ptr [ebx + 0xdc]
        inc esi
        cmp esi, eax
        jb L_00743F92
    L_00743FE2:
        mov al, byte ptr [ebx + 0xb0]
        test al, al
        je L_00744181
        mov eax, dword ptr [ebx + 0xbc]
        push eax
        call ext_007A67C0
        add esp, 0x4
        cmp eax, ebp
        mov dword ptr [ebx + 0x16c], eax
        jbe L_007440B2
        push eax
        lea ecx, [ebx + 0x170]
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x16c]
        push ecx
        lea ecx, [ebx + 0x188]
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x16c]
        xor eax, eax
        cmp ecx, ebp
        jbe L_00744056
    L_00744037:
        mov edx, dword ptr [ebx + 0x180]
        inc eax
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x198]
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x16c]
        cmp eax, ecx
        jb L_00744037
    L_00744056:
        mov eax, dword ptr [ebx + 0x16c]
        xor esi, esi
        cmp eax, ebp
        jbe L_007440B2
    L_00744062:
        mov edx, dword ptr [ebx + 0x180]
        lea ecx, [esp + 0x18]
        push ecx
        push esi
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_007A6850
        mov eax, dword ptr [ebx + 0x180]
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [eax + 4*esi], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007440A7
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_007440A7:
        mov eax, dword ptr [ebx + 0x16c]
        inc esi
        cmp esi, eax
        jb L_00744062
    L_007440B2:
        mov eax, dword ptr [ebx + 0x1d4]
        cmp eax, ebp
        jbe L_00744181
        push eax
        lea ecx, [ebx + 0x1d8]
        call ext_006D2300
        mov edx, dword ptr [ebx + 0x1d4]
        lea ecx, [ebx + 0x1f0]
        push edx
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x1d4]
        lea ecx, [ebx + 0x208]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x1d4]
        xor eax, eax
        cmp ecx, ebp
        jbe L_00744125
    L_007440FC:
        mov ecx, dword ptr [ebx + 0x1e8]
        inc eax
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov edx, dword ptr [ebx + 0x200]
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x218]
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x1d4]
        cmp eax, ecx
        jb L_007440FC
    L_00744125:
        mov eax, dword ptr [ebx + 0x1d4]
        xor esi, esi
        cmp eax, ebp
        jbe L_00744181
    L_00744131:
        mov edx, dword ptr [ebx + 0x1e8]
        lea ecx, [esp + 0x18]
        push ecx
        push esi
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_007A6950
        mov eax, dword ptr [ebx + 0x1e8]
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [eax + 4*esi], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744176
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744176:
        mov eax, dword ptr [ebx + 0x1d4]
        inc esi
        cmp esi, eax
        jb L_00744131
    L_00744181:
        mov al, byte ptr [ebx + 0xb1]
        test al, al
        je L_0074426D
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        call ext_007A5F20
        add esp, 0x4
        cmp eax, ebp
        mov dword ptr [ebx + 0x26c], eax
        jbe L_0074426D
        push eax
        lea ecx, [ebx + 0x270]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x26c]
        lea ecx, [ebx + 0x2a4]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x26c]
        push ecx
        lea ecx, [ebx + 0x2bc]
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x26c]
        xor eax, eax
        cmp ecx, ebp
        jbe L_00744211
    L_007441E8:
        mov edx, dword ptr [ebx + 0x280]
        inc eax
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x2b4]
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov edx, dword ptr [ebx + 0x2cc]
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x26c]
        cmp eax, ecx
        jb L_007441E8
    L_00744211:
        mov eax, dword ptr [ebx + 0x26c]
        xor esi, esi
        cmp eax, ebp
        jbe L_0074426D
    L_0074421D:
        mov eax, dword ptr [ebx + 0x280]
        lea edx, [esp + 0x18]
        push edx
        push esi
        mov ecx, dword ptr [eax + 4*esi]
        mov eax, dword ptr [ebx + 0xbc]
        push eax
        mov dword ptr [esp + 0x24], ecx
        call ext_007A5F80
        mov ecx, dword ptr [ebx + 0x280]
        mov edx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [ecx + 4*esi], edx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744262
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744262:
        mov eax, dword ptr [ebx + 0x26c]
        inc esi
        cmp esi, eax
        jb L_0074421D
    L_0074426D:
        mov eax, dword ptr [ebx + 0xbc]
        push eax
        call ext_007A34F0
        add esp, 0x4
        cmp eax, ebp
        mov dword ptr [ebx + 0x14c], eax
        jbe L_00744313
        push eax
        lea ecx, [ebx + 0x150]
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x14c]
        xor eax, eax
        cmp ecx, ebp
        jbe L_007442B7
    L_007442A2:
        mov ecx, dword ptr [ebx + 0x160]
        inc eax
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x14c]
        cmp eax, ecx
        jb L_007442A2
    L_007442B7:
        mov eax, dword ptr [ebx + 0x14c]
        xor esi, esi
        cmp eax, ebp
        jbe L_00744313
    L_007442C3:
        mov edx, dword ptr [ebx + 0x160]
        lea ecx, [esp + 0x18]
        push ecx
        push esi
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_007A4BE0
        mov eax, dword ptr [ebx + 0x160]
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [eax + 4*esi], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744308
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744308:
        mov eax, dword ptr [ebx + 0x14c]
        inc esi
        cmp esi, eax
        jb L_007442C3
    L_00744313:
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        call ext_007A2560
        add esp, 0x4
        cmp eax, ebp
        mov dword ptr [ebx + 0x110], eax
        jbe L_007443DE
        push eax
        lea ecx, [ebx + 0x114]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x110]
        lea ecx, [ebx + 0x12c]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x110]
        xor eax, eax
        cmp ecx, ebp
        jbe L_00744379
    L_0074435A:
        mov ecx, dword ptr [ebx + 0x124]
        inc eax
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov edx, dword ptr [ebx + 0x13c]
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x110]
        cmp eax, ecx
        jb L_0074435A
    L_00744379:
        mov eax, dword ptr [ebx + 0x110]
        xor esi, esi
        cmp eax, ebp
        jbe L_007444BF
    L_00744389:
        mov eax, dword ptr [ebx + 0x124]
        lea edx, [esp + 0x18]
        push edx
        push esi
        mov ecx, dword ptr [eax + 4*esi]
        mov eax, dword ptr [ebx + 0xbc]
        push eax
        mov dword ptr [esp + 0x24], ecx
        call ext_007A2580
        mov ecx, dword ptr [ebx + 0x124]
        mov edx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [ecx + 4*esi], edx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007443CE
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_007443CE:
        mov eax, dword ptr [ebx + 0x110]
        inc esi
        cmp esi, eax
        jb L_00744389
        jmp L_007444BF
    L_007443DE:
        mov eax, dword ptr [ebx + 0xdc]
        cmp eax, ebp
        jbe L_007444BF
        push eax
        lea ecx, [ebx + 0x114]
        mov dword ptr [ebx + 0x110], eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x110]
        lea ecx, [ebx + 0x12c]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x110]
        xor eax, eax
        cmp ecx, ebp
        jbe L_0074443B
    L_0074441C:
        mov ecx, dword ptr [ebx + 0x124]
        inc eax
        mov dword ptr [ecx + 4*eax - 0x4], ebp
        mov edx, dword ptr [ebx + 0x13c]
        mov dword ptr [edx + 4*eax - 0x4], ebp
        mov ecx, dword ptr [ebx + 0x110]
        cmp eax, ecx
        jb L_0074441C
    L_0074443B:
        mov eax, dword ptr [ebx + 0x110]
        test eax, eax
        jbe L_007444BF
    L_00744445:
        mov eax, dword ptr [ebx + 0x124]
        push 0x0
        push 0x0
        push 0x0
        mov ecx, dword ptr [eax + 4*ebp]
        push 0x0
        lea edx, [esp + 0x28]
        push 0x0
        push edx
        mov dword ptr [esp + 0x30], ecx
        call ext_007A1DC0
        mov eax, dword ptr [ebx + 0xf0]
        or ecx, -0x1
        add esp, 0x18
        mov edi, dword ptr [eax + 4*ebp]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x18]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0x124]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 4*ebp], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007444B4
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_007444B4:
        mov eax, dword ptr [ebx + 0x110]
        inc ebp
        cmp ebp, eax
        jb L_00744445
    L_007444BF:
        mov al, byte ptr [ebx + 0xb0]
        test al, al
        je L_00744820
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        call ext_007A19A0
        add esp, 0x4
        mov dword ptr [ebx + 0x1b8], eax
        test eax, eax
        jbe L_00744587
        push eax
        lea ecx, [ebx + 0x1bc]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x16c]
        lea ecx, [ebx + 0x1a0]
        push eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x1b8]
        xor esi, esi
        test eax, eax
        jbe L_0074465B
    L_00744518:
        mov ecx, dword ptr [ebx + 0x1cc]
        mov dword ptr [ecx + 4*esi], 0x0
        mov edx, dword ptr [ebx + 0x1b0]
        mov dword ptr [edx + 4*esi], 0x0
        mov eax, dword ptr [ebx + 0x1cc]
        lea edx, [esp + 0x18]
        mov ecx, dword ptr [eax + 4*esi]
        mov eax, dword ptr [ebx + 0xbc]
        push edx
        push esi
        push eax
        mov dword ptr [esp + 0x24], ecx
        call ext_007A19E0
        mov ecx, dword ptr [ebx + 0x1cc]
        mov edx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [ecx + 4*esi], edx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744577
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744577:
        mov eax, dword ptr [ebx + 0x1b8]
        inc esi
        cmp esi, eax
        jb L_00744518
        jmp L_0074465B
    L_00744587:
        mov eax, dword ptr [ebx + 0x16c]
        test eax, eax
        jbe L_0074465B
        push eax
        lea ecx, [ebx + 0x1bc]
        mov dword ptr [ebx + 0x1b8], eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x16c]
        lea ecx, [ebx + 0x1a0]
        push eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x1b8]
        xor ebp, ebp
        test eax, eax
        jbe L_0074465B
    L_007445C9:
        mov ecx, dword ptr [ebx + 0x1cc]
        push 0x0
        push 0x0
        mov dword ptr [ecx + 4*ebp], 0x0
        mov edx, dword ptr [ebx + 0x1b0]
        mov dword ptr [edx + 4*ebp], 0x0
        mov eax, dword ptr [ebx + 0x1cc]
        lea edx, [esp + 0x20]
        mov ecx, dword ptr [eax + 4*ebp]
        push edx
        mov dword ptr [esp + 0x24], ecx
        call ext_007A1670
        mov eax, dword ptr [ebx + 0x180]
        or ecx, -0x1
        add esp, 0xc
        mov edi, dword ptr [eax + 4*ebp]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x18]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0x1cc]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 4*ebp], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_0074464C
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_0074464C:
        mov eax, dword ptr [ebx + 0x1b8]
        inc ebp
        cmp ebp, eax
        jb L_007445C9
    L_0074465B:
        mov eax, dword ptr [ebx + 0x250]
        test eax, eax
        jbe L_00744725
        push eax
        lea ecx, [ebx + 0x254]
        call ext_006D2300
        mov edx, dword ptr [ebx + 0x250]
        lea ecx, [ebx + 0x220]
        push edx
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x250]
        lea ecx, [ebx + 0x238]
        push eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x250]
        xor esi, esi
        test eax, eax
        jbe L_00744820
    L_007446A9:
        mov ecx, dword ptr [ebx + 0x264]
        mov dword ptr [ecx + 4*esi], 0x0
        mov edx, dword ptr [ebx + 0x230]
        mov dword ptr [edx + 4*esi], 0x0
        mov eax, dword ptr [ebx + 0x248]
        mov dword ptr [eax + 4*esi], 0x0
        mov ecx, dword ptr [ebx + 0x264]
        lea eax, [esp + 0x18]
        mov edx, dword ptr [ecx + 4*esi]
        mov ecx, dword ptr [ebx + 0xbc]
        push eax
        push esi
        push ecx
        mov dword ptr [esp + 0x24], edx
        call ext_007A0D40
        mov edx, dword ptr [ebx + 0x264]
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [edx + 4*esi], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744715
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744715:
        mov eax, dword ptr [ebx + 0x250]
        inc esi
        cmp esi, eax
        jb L_007446A9
        jmp L_00744820
    L_00744725:
        mov eax, dword ptr [ebx + 0x1d4]
        test eax, eax
        jbe L_00744820
        push eax
        lea ecx, [ebx + 0x254]
        mov dword ptr [ebx + 0x250], eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x1d4]
        push ecx
        lea ecx, [ebx + 0x220]
        call ext_006D2300
        mov edx, dword ptr [ebx + 0x1d4]
        lea ecx, [ebx + 0x238]
        push edx
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x250]
        xor ebp, ebp
        test eax, eax
        jbe L_00744820
    L_00744779:
        mov eax, dword ptr [ebx + 0x264]
        push 0x0
        push 0x0
        push 0x0
        mov dword ptr [eax + 4*ebp], 0x0
        mov ecx, dword ptr [ebx + 0x230]
        push 0x0
        push 0x0
        mov dword ptr [ecx + 4*ebp], 0x0
        mov edx, dword ptr [ebx + 0x248]
        push 0x0
        mov dword ptr [edx + 4*ebp], 0x0
        mov eax, dword ptr [ebx + 0x264]
        lea edx, [esp + 0x30]
        mov ecx, dword ptr [eax + 4*ebp]
        push edx
        mov dword ptr [esp + 0x34], ecx
        call ext_007A0470
        mov eax, dword ptr [ebx + 0x1e8]
        or ecx, -0x1
        add esp, 0x1c
        mov edi, dword ptr [eax + 4*ebp]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x18]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0x264]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 4*ebp], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_00744811
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_00744811:
        mov eax, dword ptr [ebx + 0x250]
        inc ebp
        cmp ebp, eax
        jb L_00744779
    L_00744820:
        mov al, byte ptr [ebx + 0xb1]
        test al, al
        je L_007449FE
        mov edx, dword ptr [ebx + 0xbc]
        push edx
        call ext_0079FD60
        add esp, 0x4
        mov dword ptr [ebx + 0x288], eax
        test eax, eax
        jbe L_00744907
        push eax
        lea ecx, [ebx + 0x28c]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x288]
        lea ecx, [ebx + 0x2d4]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebx + 0x288]
        push ecx
        lea ecx, [ebx + 0x2ec]
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x288]
        xor esi, esi
        test eax, eax
        jbe L_007449FE
    L_0074488B:
        mov edx, dword ptr [ebx + 0x29c]
        mov dword ptr [edx + 4*esi], 0x0
        mov eax, dword ptr [ebx + 0x2e4]
        mov dword ptr [eax + 4*esi], 0x0
        mov ecx, dword ptr [ebx + 0x2fc]
        mov dword ptr [ecx + 4*esi], 0x0
        mov edx, dword ptr [ebx + 0x29c]
        lea ecx, [esp + 0x18]
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ebx + 0xbc]
        push ecx
        push esi
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_0079FDA0
        mov eax, dword ptr [ebx + 0x29c]
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov dword ptr [eax + 4*esi], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007448F7
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_007448F7:
        mov eax, dword ptr [ebx + 0x288]
        inc esi
        cmp esi, eax
        jb L_0074488B
        jmp L_007449FE
    L_00744907:
        mov eax, dword ptr [ebx + 0x26c]
        test eax, eax
        jbe L_007449FE
        push eax
        lea ecx, [ebx + 0x28c]
        mov dword ptr [ebx + 0x288], eax
        call ext_006D2300
        mov edx, dword ptr [ebx + 0x288]
        lea ecx, [ebx + 0x2d4]
        push edx
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x288]
        lea ecx, [ebx + 0x2ec]
        push eax
        call ext_006D2300
        mov eax, dword ptr [ebx + 0x288]
        xor ebp, ebp
        test eax, eax
        jbe L_007449FE
    L_0074495B:
        mov ecx, dword ptr [ebx + 0x29c]
        push 0x0
        push 0x0
        push 0x0
        mov dword ptr [ecx + 4*ebp], 0x0
        mov edx, dword ptr [ebx + 0x2e4]
        push 0x0
        mov dword ptr [edx + 4*ebp], 0x0
        mov eax, dword ptr [ebx + 0x2fc]
        mov dword ptr [eax + 4*ebp], 0x0
        mov ecx, dword ptr [ebx + 0x29c]
        lea eax, [esp + 0x28]
        mov edx, dword ptr [ecx + 4*ebp]
        push eax
        mov dword ptr [esp + 0x2c], edx
        call ext_0079F790
        mov ecx, dword ptr [ebx + 0x280]
        xor eax, eax
        add esp, 0x14
        mov edi, dword ptr [ecx + 4*ebp]
        or ecx, -0x1
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x18]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0x29c]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 4*ebp], ecx
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007449EF
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_00743EE3
    L_007449EF:
        mov eax, dword ptr [ebx + 0x288]
        inc ebp
        cmp ebp, eax
        jb L_0074495B
    L_007449FE:
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0x1c]
        cmp al, 0x1
        jne L_00744A19
        mov ecx, ebx
        call ext_0074AD50
        cmp al, 0x1
        jne L_00744A19
    L_00744A19:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}
