// Decompiled translation unit: src/leaf/decompiled_740000.cpp
extern "C" void ext_006D2160();
extern "C" void ext_006BB0C0();
extern "C" void ext_006BB150();
extern "C" void ext_006D3B50();

extern "C" void ext_006BB150();
extern "C" void ext_006D3B50();
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
extern "C" void ext_006D2170();
extern "C" void ext_006D80A0();

extern "C" void ext_006D80A0();
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
extern "C" void ext_006E7460();
extern "C" void ext_006BA660();

extern "C" void ext_006BA660();
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

// [0x0074F650] sub_0074F650 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_0074F650(void* self, int edx_unused, int a, int b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        test eax, eax
        jge L_pos
        mov edx, eax
        neg edx
        cmp edx, ecx
        jg L_pos
        add eax, ecx
        ret 8
    L_pos:
        test eax, eax
        jle L_neg
        cmp eax, ecx
        jg L_neg
        dec eax
        ret 8
    L_neg:
        or eax, -1
        ret 8
    }
}

// [0x0074F680] sub_0074F680 (48 bytes)
extern "C" __declspec(naked) int __stdcall fn_0074F680(int a, int m, int b) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, ecx
        cdq
        idiv esi
        push edi
        mov eax, ecx
        mov edi, edx
        cdq
        imul edi, dword ptr [esp + 0x10]
        idiv esi
        add eax, edi
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0074F7F0] sub_0074F7F0 (48 bytes)
extern "C" void ext_0074F7A0();
extern "C" int mem_0092529C;
extern "C" __declspec(naked) void __cdecl fn_0074F7F0() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        jle done
        mov edx, dword ptr [esp + 4]
        push offset ext_0074F7A0
        push 10h
        push ecx
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push ecx
        call dword ptr [mem_0092529C]
        add esp, 14h
    done:
        ret
    }
}

// [0x0074B080] sub_0074B080 (48 bytes)
extern "C" void ext_00784620();

// [0x0074B080]
extern "C" __declspec(naked) void* __fastcall fn_0074B080(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x14
        call ext_00784620
        mov al, 1
        mov byte ptr [esi + 0x14], al
        mov byte ptr [esi + 0x15], al
        mov byte ptr [esi + 0x16], al
        xor eax, eax
        mov byte ptr [esi + 0x17], al
        mov dword ptr [esi + 0x18], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0074F820] sub_0074F820 (48 bytes)
extern "C" void ext_0077FAC0();

extern "C" __declspec(naked) int __fastcall fn_0074F820(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x10]
        shl eax, 0x4
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, edx
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_0077FAC0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00747580] sub_00747580 (48 bytes)
extern "C" void ext_007008D0();
extern "C" __declspec(naked) void __fastcall fn_00747580(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 2
        mov ecx, esi
        call ext_00700980
        mov eax, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x3c]
        mov cl, byte ptr [eax + 0x40]
        test cl, cl
        je skip_00747580
        mov ecx, dword ptr [eax + 0x44]
        push ecx
        mov ecx, esi
        call ext_007008D0
skip_00747580:
        mov al, 0x1
        pop esi
        ret 0x8
    }
}

// [0x00747FA0] sub_00747FA0 (48 bytes)
extern "C" void ext_006C27E0();
extern "C" __declspec(naked) void __fastcall fn_00747FA0(void* self, int edx_unused, int a1, int* a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0x4]
        push 0x0
        mov edx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0xa8]
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        call ext_006C27E0
        ret 0x8
    }
}

// [0x00743440] sub_00743440 (64 bytes)
extern "C" void ext_006BA780();

extern "C" __declspec(naked) void __cdecl fn_00743440() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ebx]
        xor esi, esi
        test edi, edi
        jle done_00743440
        mov ebp, dword ptr [esp + 0x14]
loop_00743440:
        mov eax, dword ptr [ebx + 0x10]
        push ebp
        mov ecx, dword ptr [eax + esi*4]
        call ext_006BA780
        test al, al
        jne found_00743440
        inc esi
        cmp esi, edi
        jl loop_00743440
done_00743440:
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret
found_00743440:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0074D800] sub_0074D800 (80 bytes)
extern "C" void ext_006D2250();
extern "C" int mem_00925264;

extern "C" __declspec(naked) bool __fastcall fn_0074D800(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov ebx, dword ptr [edi + 15Ch]
        lea ecx, [edi + 15Ch]
        test ebx, ebx
        mov dword ptr [esp + 0Ch], ecx
        jle SKIP_LOOP
        push ebp
        mov ebp, dword ptr [mem_00925264]
LOOP_TOP:
        mov eax, dword ptr [edi + 16Ch]
        mov ecx, dword ptr [eax + 4*esi]
        push ecx
        call ebp
        add esp, 4
        inc esi
        cmp esi, ebx
        jl LOOP_TOP
        mov ecx, dword ptr [esp + 10h]
        pop ebp
SKIP_LOOP:
        call ext_006D2250
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret
    }
}

// [0x0074AEF0] sub_0074AEF0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074AEF0(void* self) {
    __asm {
        push -1
        push 0x8bf296
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 1
        call ext_006D2160
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x10], 0
        call ext_006D2160
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0074F6B0] sub_0074F6B0 (96 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0074B0B0();
extern "C" void ext_00782D30();
extern "C" void ext_00782EC0();

extern "C" __declspec(naked) void __fastcall fn_0074F6B0(void* self) {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [ecx + 0x124]
        push edi
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 0x8], ecx
        jle done
        push ebx
        push esi
        lea ebx, [ecx + 0x120]
    loop_top:
        push 0x0
        push edi
        mov ecx, ebx
        call ext_00782EC0
        mov esi, eax
        test esi, esi
        je skip
        mov ecx, esi
        call ext_0074B0B0
        push esi
        call ext_006A5C5C
        add esp, 0x4
    skip:
        inc edi
        cmp edi, ebp
        jl loop_top
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebx
    done:
        add ecx, 0x120
        call ext_00782D30
        pop edi
        pop ebp
        pop ecx
        ret
    }
}

// [0x00742E60] sub_00742E60 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_00742E60(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], ecx
        push ebp
        mov eax, dword ptr [ebx]
        push edi
        mov ecx, ebx
        call dword ptr [eax + 0xc]
        mov ebp, eax
        test ebp, ebp
        je L_done
        mov eax, dword ptr [ebp + 0xc0]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jle L_done
        push esi
L_loop:
        mov ecx, dword ptr [ebp + 0xd0]
        mov esi, dword ptr [ecx + 4*edi]
        mov ecx, ebx
        push esi
        call ext_006BB150
        test eax, eax
        jne L_next
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov ecx, dword ptr [edx + 0x4]
        call ext_006D3B50
        test eax, eax
        je L_next
        push eax
        mov ecx, ebx
        call ext_006BB0C0
L_next:
        mov eax, dword ptr [esp + 0x18]
        inc edi
        cmp edi, eax
        jl L_loop
        pop esi
L_done:
        pop edi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x0074B010] sub_0074B010 (112 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0074AE00();
extern "C" void ext_0074AE20();

extern "C" __declspec(naked) void* __fastcall fn_0074B010(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x10], 0x0
        call ext_0074AE00
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esi + 0x3c]
        mov dword ptr [esp + 0x8], edx
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esi + 0x54]
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0xc], edx
        mov edx, dword ptr [ecx + 4*eax]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], edx
        call ext_0074AE20
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov eax, esi
        pop esi
        add esp, 0x14
        ret 0x8
    }
}

// [0x0074B3B0] sub_0074B3B0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074B3B0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8b9338
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x10], 0x0
        test eax, eax
        jge L_pos_0074B3B0
        lea ecx, [esp + 0x18]
        call ext_006D80A0
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    L_pos_0074B3B0:
        mov edx, dword ptr [esi + 0x88]
        lea ecx, [esi + 0x88]
        mov dword ptr [esp + 0x4], eax
        lea eax, [esp + 0x4]
        push eax
        push edx
        call ext_006D2170
        mov eax, dword ptr [esi + 0x64]
        lea ecx, [esp + 0x18]
        inc eax
        mov dword ptr [esi + 0x64], eax
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        mov al, 0x1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00742A70] sub_00742A70 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_00742A70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bdc58
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, dword ptr [esp + 0x6c]
        xor esi, esi
        mov dword ptr [esp + 0x18], esi
        mov ebx, dword ptr [ebp]
        cmp ebx, esi
        jle NOLOOP
    LOOPTOP:
        mov eax, dword ptr [ebp + 0x10]
        lea ecx, [esp + 0x20]
        lea edi, [eax + 4*esi]
        call ext_006E7460
        mov ecx, dword ptr [edi]
        push eax
        call ext_006BA660
        test eax, eax
        je FOUND
        inc esi
        cmp esi, ebx
        jl LOOPTOP
    NOLOOP:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006B9D70
        or eax, -1
    TAIL:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x50
    FOUND:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006B9D70
        mov eax, esi
        jmp TAIL
    }
}

// [0x00742710] sub_00742710 (144 bytes)
extern "C" void ext_006E5150();
extern "C" void ext_00720EA0();
extern "C" void ext_00722020();

extern "C" __declspec(naked) void __fastcall fn_00742710(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x18
        mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x20]
        test ecx, ecx
        mov dword ptr [esp + 0xc], 0xffffffff
        mov dword ptr [esp + 0x10], 0x7fffffff
        mov dword ptr [esp + 0x4], 0x1
        mov dword ptr [esp + 0x8], 0x80000000
        push eax
        je SHORT L_nullthis
        lea edx, [esp + 0x10]
        push edx
        jmp SHORT L_callc
L_nullthis:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
L_callc:
        call ext_006E5150
        push 0x0
        push 0x1
        push 0x0
        lea edx, [esp + 0x20]
        push 0x0
        push edx
        call ext_00722020
        mov ecx, dword ptr [eax + 0x4]
        add esp, 0x4
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        push edx
        push eax
        push 0x10
        push 0x0
        push 0x0
        push esi
        call ext_00720EA0
        add esp, 0x38
        pop esi
        add esp, 0x18
        ret 0x8
    }
}

// [0x00742DD0] sub_00742DD0 (144 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726860();
extern "C" void ext_0072CF10();
extern "C" void ext_00734C90();
extern "C" void ext_00734FA0();
extern "C" void ext_0072FA60();
extern "C" void ext_006BC7C0();
extern "C" void ext_007268D0();
extern "C" void ext_00726840();
extern "C" __declspec(naked) void __fastcall fn_00742DD0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaad2d8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_skip
        mov ecx, dword ptr [esi + 0xb4]
        push edi
        push 0x8
        call ext_0072CF10
        mov edi, dword ptr [esp + 0xc]
        test al, al
        je L_else
        push edi
        mov ecx, esi
        call ext_00734C90
        dec eax
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [esp + 0xc], eax
        jne L_join
L_else:
        push edi
        mov ecx, esi
        call ext_00734FA0
L_join:
        mov ecx, esi
        call ext_0072FA60
        push eax
        mov ecx, edi
        call ext_006BC7C0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
        pop edi
L_skip:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
L_end:
        pop esi
        ret 0x4
    }
}

// [0x00747F00] sub_00747F00 (160 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_00747FA0();

extern "C" __declspec(naked) void __fastcall fn_00747F00(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0xb5]
        test al, al
        je L_nobase
        mov ebp, dword ptr [esi + 0x148]
        jmp L_top
L_nobase:
        mov ecx, dword ptr [esp + 0x10]
        call ext_006BC370
        mov ebp, eax
L_top:
        mov eax, dword ptr [esi + 0x110]
        xor ebx, ebx
        test eax, eax
        jbe L_ret_early
        push edi
L_loop:
        mov eax, dword ptr [esi + 0x124]
        or ecx, -1
        mov edi, dword ptr [eax + 4*ebx]
        xor eax, eax
        add edi, 0xb
        mov dword ptr [esp + 0x14], edi
        repne scasb
        not ecx
        dec ecx
        jne L_nonempty
        mov ecx, dword ptr [esi + 0x13c]
        mov edx, dword ptr [ecx + 4*ebx]
        push edx
        jmp L_call2
L_nonempty:
        mov eax, dword ptr [esi + 0x13c]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov eax, dword ptr [eax + 4*ebx]
        push eax
        call ext_00747FA0
        cmp al, 1
        je L_next
        mov edx, dword ptr [esi + 0x13c]
        mov eax, dword ptr [edx + 4*ebx]
        push eax
L_call2:
        mov ecx, ebp
        call ext_006C27E0
L_next:
        mov eax, dword ptr [esi + 0x110]
        inc ebx
        cmp ebx, eax
        jb L_loop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
L_ret_early:
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        nop
        nop
    }
}

// [0x00747FD0] sub_00747FD0 (160 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_00747FA0();

extern "C" __declspec(naked) void __fastcall fn_00747FD0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0xb5]
        test al, al
        je L_nobase
        mov ebp, dword ptr [esi + 0x148]
        jmp L_top
    L_nobase:
        mov ecx, dword ptr [esp + 0x10]
        call ext_006BC370
        mov ebp, eax
    L_top:
        mov eax, dword ptr [esi + 0x1b8]
        xor ebx, ebx
        test eax, eax
        jbe L_ret_early
        push edi
    L_loop:
        mov eax, dword ptr [esi + 0x1cc]
        or ecx, -1
        mov edi, dword ptr [eax + 4*ebx]
        xor eax, eax
        add edi, 0xb
        mov dword ptr [esp + 0x14], edi
        repne scasb
        not ecx
        dec ecx
        jne L_nonempty
        mov ecx, dword ptr [esi + 0x1b0]
        mov edx, dword ptr [ecx + 4*ebx]
        push edx
        jmp L_callsite
    L_nonempty:
        mov eax, dword ptr [esi + 0x1b0]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov eax, dword ptr [eax + 4*ebx]
        push eax
        call ext_00747FA0
        cmp al, 1
        je L_after
        mov edx, dword ptr [esi + 0x1b0]
        mov eax, dword ptr [edx + 4*ebx]
        push eax
    L_callsite:
        mov ecx, ebp
        call ext_006C27E0
    L_after:
        mov eax, dword ptr [esi + 0x1b8]
        inc ebx
        cmp ebx, eax
        jb L_loop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    L_ret_early:
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x0074AD50] sub_0074AD50 (160 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00782D20();
extern "C" void ext_0079EEF0();
extern "C" void ext_007A8BC0();
extern "C" void ext_007A92B0();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_0074AD50(void* self) {
    __asm {
        push edi
        mov edi, ecx
        lea eax, [edi + 0xc0]
        push eax
        call ext_007A8BC0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_ad78
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_ad78
        xor al, al
        pop edi
        ret
L_ad78:
        lea ecx, [edi + 0xbc]
        push ecx
        call ext_007A92B0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_ad9d
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_ad9d
        xor al, al
        pop edi
        ret
L_ad9d:
        push esi
        mov esi, dword ptr [edi + 0x168]
        test esi, esi
        je L_adb8
        mov ecx, esi
        call ext_00782D20
        push esi
        call ext_006A5C5C
        add esp, 0x4
L_adb8:
        call ext_0079EEF0
        mov dword ptr [edi + 0xb8], 0x0
        mov al, byte ptr [mem_00B61218]
        test al, al
        pop esi
        je L_adde
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_adde
        xor al, al
        pop edi
        ret
L_adde:
        mov al, 0x1
        pop edi
        ret
    }
}

// [0x00743C80] sub_00743C80 (38 bytes)
extern "C" void ext_0079EC50();

extern "C" __declspec(naked) bool __fastcall fn_00743C80(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0xaab92c
        mov esi, ecx
        push edi
        call ext_0079EC50
        add esp, 0x8
        mov dword ptr [esi + 0xb8], eax
        test edi, edi
        pop edi
        pop esi
        setne al
        ret 0x4
    }
}

// [0x0074F7A0] sub_0074F7A0 (70 bytes)
extern "C" __declspec(naked) int __cdecl fn_0074F7A0(const void* a, const void* b) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        push esi
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_diff_edx_esi
        mov edx, dword ptr [eax + 0x8]
        mov esi, dword ptr [ecx + 0x8]
        cmp edx, esi
        jne L_diff_edx_esi
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [ecx + 0x4]
        cmp eax, ecx
        jne L_diff_eax_ecx
        xor eax, eax
        pop esi
        ret
    L_diff_eax_ecx:
        xor edx, edx
        cmp eax, ecx
        setge dl
        dec edx
        pop esi
        and edx, -0x2
        inc edx
        mov eax, edx
        ret
    L_diff_edx_esi:
        xor eax, eax
        cmp edx, esi
        setge al
        dec eax
        pop esi
        and al, -0x2
        inc eax
        ret
    }
}

// [0x0074F990] sub_0074F990 (84 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7440();
extern "C" int mem_009252A8;

extern "C" __declspec(naked) void __fastcall fn_0074F990(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je skip_close
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x8]
skip_close:
        mov edi, dword ptr [esp + 0xc]
        push 0xaae64c
        push edi
        call dword ptr [mem_009252A8]
        add esp, 0x8
        mov dword ptr [esi + 0xac], eax
        test eax, eax
        jne opened
        push 0x3
        lea ecx, [esi + 0x8]
        call ext_006E7440
        pop edi
        xor al, al
        pop esi
        ret 0x4
opened:
        push edi
        lea ecx, [esi + 0xb0]
        call ext_006B9EC0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0074B950] sub_0074B950 (94 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007ABF40();
extern "C" __declspec(naked) void __fastcall fn_0074B950(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7d4
        call ext_006A5C62
        add esp, 0x4
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je short L_null_74B950
        mov ecx, eax
        call ext_007ABF40
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    L_null_74B950:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0074F9F0] sub_0074F9F0 (94 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007AC1C0();
extern "C" __declspec(naked) void __fastcall fn_0074F9F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7d8
        call ext_006A5C62
        add esp, 0x4
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je null_path
        mov ecx, eax
        call ext_007AC1C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0074F910] sub_0074F910 (127 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_0072CFB0();
extern "C" void ext_007721B0();
extern "C" void ext_00782D20();
extern "C" void ext_007ABCA0();

extern "C" __declspec(naked) void __fastcall fn_0074F910(void* self) {
    __asm {
        push -1
        push 0x008BF832
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00996BBC
        mov dword ptr [esp + 0x10], 0x3
        call ext_007721B0
        lea ecx, [esi + 0x128]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00782D20
        lea ecx, [esi + 0x104]
        mov byte ptr [esp + 0x10], 0x1
        call ext_007ABCA0
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0072CFB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0074F710] sub_0074F710 (134 bytes)
extern "C" int mem_00925290;
extern "C" int mem_00925298;
extern "C" void ext_0074F7A0();

extern "C" __declspec(naked) void __fastcall fn_0074F710(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        push edi
        mov edi, dword ptr [esp + 0x18]
        cmp eax, dword ptr [edi]
        jne L_skip_grow
        add eax, 0xa
        mov dword ptr [ecx], eax
        shl eax, 0x4
        push eax
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [mem_00925290]
        add esp, 0x8
        mov dword ptr [esi], eax
L_skip_grow:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esp + 0x1c]
        push 0x74f7a0
        shl ecx, 0x4
        add ecx, eax
        mov eax, dword ptr [edx]
        push 0x10
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [edx + 0xc]
        mov dword ptr [ecx + 0xc], edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi]
        mov ecx, eax
        shl ecx, 0x4
        mov dword ptr [ecx + edx + 0xc], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi]
        mov ecx, eax
        shl ecx, 0x4
        inc eax
        mov ebx, dword ptr [ecx + edx + 0xc]
        mov dword ptr [edi], eax
        push eax
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [mem_00925298]
        add esp, 0x10
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0074F850] sub_0074F850 (156 bytes)
extern "C" void ext_0072CF30();
extern "C" void ext_006B9D80();
extern "C" void ext_007ABC20();
extern "C" void ext_00782D00();
extern "C" __declspec(naked) void __fastcall fn_0074F850(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BF7F4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_0072CF30
        xor edi, edi
        push 0x00B5D2C0
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esi + 0xac], edi
        call ext_006B9D80
        lea ecx, [esi + 0x104]
        mov byte ptr [esp + 0x14], 0x1
        mov dword ptr [esi + 0xfc], edi
        mov dword ptr [esi + 0x100], edi
        call ext_007ABC20
        push 0x14
        lea ecx, [esi + 0x128]
        mov byte ptr [esp + 0x18], 0x2
        call ext_00782D00
        lea edi, [esi + 0x13c]
        mov ecx, 0x100
        xor eax, eax
        mov dword ptr [esi], 0x00996BBC
        rep stosd
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00742540] sub_00742540 (176 bytes)
extern "C" void ext_006E5EC0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AE0();
extern "C" void ext_00726B40();
extern "C" void ext_00784650();

extern "C" __declspec(naked) void __fastcall fn_00742540(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0xaae5a4
        mov ecx, esi
        call ext_00726770
        test al, al
        je L_end
        mov ecx, esi
        call ext_00726860
        test al, al
        je L_dd
        push 0x0
        push 0xaacd0c
        mov ecx, esi
        call ext_00726B40
        push 0xaae5a0
        mov ecx, esi
        call ext_00726770
        test al, al
        je L_d6
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push edi
L_loop:
        mov ecx, esi
        call ext_00726AE0
        mov ecx, esi
        mov edi, eax
        call ext_00726860
        test al, al
        je L_bd
        push 0x0
        push 0x0
        push esi
        call ext_006E5EC0
        add esp, 0xc
        test eax, eax
        je L_b6
        push eax
        push edi
        mov ecx, ebx
        call ext_00784650
L_b6:
        mov ecx, esi
        call ext_007268D0
L_bd:
        mov ecx, esi
        call ext_00726840
        push 0xaae5a0
        mov ecx, esi
        call ext_00726770
        test al, al
        jne L_loop
        pop edi
        pop ebx
L_d6:
        mov ecx, esi
        call ext_007268D0
L_dd:
        mov ecx, esi
        call ext_00726840
L_end:
        pop esi
        ret 0x8
    }
}

// [0x0074AF50] sub_0074AF50 (192 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074AF50(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x008B9338
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esp + 0x18]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x10], ecx
        jge L_body
        lea ecx, [esp + 0x18]
        call ext_006D80A0
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
L_body:
        cmp dword ptr [esp + 0x20], ecx
        jge L_skip1
        mov byte ptr [esi], cl
L_skip1:
        cmp dword ptr [esp + 0x1c], ecx
        jge L_skip2
        mov byte ptr [esi + 0x1], cl
L_skip2:
        mov edx, dword ptr [esi + 0x14]
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x4], eax
        lea eax, [esp + 0x4]
        push eax
        push edx
        call ext_006D2170
        mov eax, dword ptr [esp + 0x20]
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x4], eax
        lea edx, [esp + 0x4]
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [esi + 0x2c]
        mov dword ptr [esp + 0x4], edx
        lea eax, [esp + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        push edx
        call ext_006D2170
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esp + 0x18]
        inc eax
        mov dword ptr [esi + 0x4], eax
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        mov al, 0x1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0074B0B0] sub_0074B0B0 (192 bytes)
extern "C" void ext_0074AEF0();
extern "C" void ext_006A5C5C();
extern "C" void ext_00784750();
extern "C" void ext_00784640();
extern "C" __declspec(naked) void __fastcall fn_0074B0B0(void* self) {
    __asm {
        push -1
        push 0x008BF2A8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        mov dword ptr [esp + 0x8], ecx
        mov eax, dword ptr [ecx + 0x4]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x4], ebx
        jle L_done_neg
        push ebp
        push esi
        push edi
    L_loop:
        push 0
        push ebx
        call ext_00784750
        mov edi, eax
        xor esi, esi
        mov ebp, dword ptr [edi]
        test ebp, ebp
        jle L_skip_inner
    L_inner:
        mov eax, dword ptr [edi + 0x10]
        mov ebx, dword ptr [eax + 4*esi]
        test ebx, ebx
        je L_inner_next
        mov ecx, ebx
        call ext_0074AEF0
        push ebx
        call ext_006A5C5C
        add esp, 0x4
    L_inner_next:
        inc esi
        cmp esi, ebp
        jl L_inner
        mov ebx, dword ptr [esp + 0x10]
    L_skip_inner:
        test edi, edi
        je L_skip_free
        mov ecx, edi
        call ext_006D2160
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_skip_free:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        inc ebx
        cmp ebx, eax
        mov dword ptr [esp + 0x10], ebx
        jl L_loop
        pop edi
        pop esi
        pop ebp
    L_done_neg:
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00784640
        mov ecx, dword ptr [esp + 0x10]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x00742D10] sub_00742D10 (192 bytes)
extern "C" void ext_00725E40();
extern "C" void ext_0079E8A0();
extern "C" __declspec(naked) void __fastcall fn_00742D10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bdc58
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0xc], 0x0
        mov cl, byte ptr [eax + 0x1ec]
        test cl, cl
        je L_fail
        lea ecx, [esp + 0x14]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00725E40
        test al, al
        jne L_fail
        mov ecx, dword ptr [esi + 0xac]
        push 0x10
        push ecx
        call ext_0079E8A0
        mov edx, dword ptr [esi + 0xac]
        add esp, 0x8
        mov al, byte ptr [edx + 0x1ec]
        test al, al
        je L_fail
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006B9D70
        xor al, al
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0x4c
    L_fail:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4]
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0x4c
    }
}

// [0x0074B860] sub_0074B860 (239 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_0072CFB0();
extern "C" void ext_007721B0();
extern "C" void ext_00782D20();
extern "C" void ext_007ABCA0();

extern "C" __declspec(naked) void __fastcall fn_0074B860(void* self) {
    __asm {
        push -1
        push 0x008BF474
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x996ba0
        mov dword ptr [esp + 0x10], 0xa
        call ext_007721B0
        lea ecx, [esi + 0x1bc]
        mov byte ptr [esp + 0x10], 0x9
        call ext_006D2160
        lea ecx, [esi + 0x1a4]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006D2160
        lea ecx, [esi + 0x18c]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006D2160
        lea ecx, [esi + 0x174]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006D2160
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006D2160
        lea ecx, [esi + 0x148]
        mov byte ptr [esp + 0x10], 0x4
        call ext_00782D20
        lea ecx, [esi + 0x134]
        mov byte ptr [esp + 0x10], 0x3
        call ext_00782D20
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00782D20
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x10], 0x1
        call ext_007ABCA0
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0072CFB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0074D170] sub_0074D170 (256 bytes)
extern "C" int mem_00925184;
extern "C" int mem_00AAE638;
extern "C" int mem_009252C4;
extern "C" int mem_0092528C;
extern "C" int mem_009252AC;

extern "C" __declspec(naked) void __cdecl fn_0074D170(void* f) {
    __asm {
        sub esp, 0x404
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x418]
        push edi
        call dword ptr [mem_00925184]
        push 0x0
        push 0x0
        push edi
        mov dword ptr [esp + 0x20], eax
        xor bl, bl
        mov dword ptr [mem_00AAE638], 0x400
        call dword ptr [mem_009252C4]
        mov ebp, dword ptr [mem_0092528C]
        add esp, 0x10
    L_read:
        push edi
        push 0x400
        lea eax, [esp + 0x1c]
        push 0x1
        push eax
        call dword ptr [mem_009252AC]
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je L_eof
        lea ecx, [esp + esi + 0x14]
        lea eax, [esp + 0x14]
        cmp eax, ecx
        lea edx, [esp + 0x14]
        jae L_eof
    L_loop:
        mov ecx, edx
        lea eax, [esp + 0x14]
        sub ecx, eax
        mov al, byte ptr [edx]
        cmp al, 0xa
        je L_nl
        cmp al, 0xd
        je L_nl
        cmp al, 0x5c
        jne L_notbs
        mov bl, 1
        jmp L_adv
    L_notbs:
        inc edx
        jmp L_adv
    L_nl:
        test bl, bl
        jne L_bl
        cmp dword ptr [mem_00AAE638], ecx
        ja L_skipstore
        mov dword ptr [mem_00AAE638], ecx
    L_skipstore:
        sub esi, ecx
        inc edx
        lea ecx, [esi - 0x1]
        push ecx
        push edx
        lea edx, [esp + 0x1c]
        push edx
        call ebp
        add esp, 0xc
        dec esi
        lea edx, [esp + 0x14]
    L_adv:
        lea eax, [esp + esi + 0x14]
        cmp edx, eax
        jb L_loop
    L_eof:
        test byte ptr [edi + 0xc], 0x10
        je L_read
        mov ebx, dword ptr [mem_00AAE638]
        mov ecx, dword ptr [esp + 0x10]
        push 0x0
        add ebx, 0x2
        push ecx
        push edi
        mov dword ptr [mem_00AAE638], ebx
        call dword ptr [mem_009252C4]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x404
        ret
    L_bl:
        lea eax, [esi - 0x1]
        cmp ecx, eax
        jge L_adv
        cmp byte ptr [edx + 0x1], 0xa
        je L_adv
        xor bl, bl
        jmp L_adv
    }
}

// [0x0074B230] sub_0074B230 (256 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006D2130();
extern "C" __declspec(naked) void* __fastcall fn_0074B230(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push -1
        push 0x008BF312
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [esi + 0x4c], ecx
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esi + 0x50], edx
        mov dl, byte ptr [esp + 0x20]
        mov dword ptr [esi + 0x54], ecx
        mov ecx, dword ptr [esp + 0x24]
        xor eax, eax
        mov byte ptr [esi + 0x58], dl
        mov edx, dword ptr [esp + 0x28]
        lea edi, [esi + 0x88]
        mov dword ptr [esi + 0x5c], ecx
        push 0x4
        mov dword ptr [esi + 0x68], eax
        mov dword ptr [esi + 0x70], eax
        mov dword ptr [esi + 0x78], eax
        mov dword ptr [esi + 0x80], eax
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esi + 0x60], edx
        mov dword ptr [esi + 0x64], eax
        mov dword ptr [esi + 0x6c], eax
        mov dword ptr [esi + 0x74], eax
        mov dword ptr [esi + 0x7c], eax
        mov dword ptr [esi + 0x84], eax
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0xa0]
        push 0x8
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0xb8]
        push 0x8
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x2
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0xd0]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x3
        call ext_006D2130
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x18
    }
}

// [0x00742970] sub_00742970 (256 bytes)
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_00715550();
extern "C" __declspec(naked) void __fastcall fn_00742970(void* self, int edx_unused, void* obj) {
    __asm {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebx, ecx
        push 0x3
        mov ecx, edi
        call ext_006FDF30
        cmp eax, 0x1
        jle fn_00742970_end
        push 0x3
        mov ecx, edi
        call ext_006FDF30
        xor esi, esi
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x10], esi
        jle fn_00742970_end
        push ebp
fn_00742970_outer:
        push 0x3
        push esi
        mov ecx, edi
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov ebp, eax
        cmp dword ptr [ebp + 0x4], 0x2
        jne fn_00742970_next
        mov eax, dword ptr [ebx + 0x1b8]
        test eax, eax
        je fn_00742970_next
        mov edx, dword ptr [ebp + 0x20]
        xor ecx, ecx
        test edx, edx
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x10], ecx
        jle fn_00742970_next
        lea esi, [ebp + 0x8]
fn_00742970_jloop:
        mov eax, dword ptr [ebp + 0x30]
        mov edi, dword ptr [eax + 4*ecx]
        mov eax, dword ptr [esi]
        cmp eax, edi
        jg fn_00742970_jnext
fn_00742970_inner:
        cmp eax, dword ptr [ebx + 0x1b8]
        jge fn_00742970_bpath
        mov ecx, dword ptr [ebx + 0x1c8]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x18]
        mov dword ptr [esp + 0x18], edx
        push eax
        push ecx
        jmp fn_00742970_call
fn_00742970_bpath:
        mov edx, dword ptr [ebx + 0x1c8]
        lea ecx, [esp + 0x18]
        push ecx
        mov eax, dword ptr [edx]
        mov edx, dword ptr [esi]
        mov dword ptr [esp + 0x1c], eax
        push edx
fn_00742970_call:
        mov ecx, esi
        call ext_006D2170
        mov eax, dword ptr [esi]
        cmp eax, edi
        jle fn_00742970_inner
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
fn_00742970_jnext:
        inc ecx
        cmp ecx, edx
        mov dword ptr [esp + 0x10], ecx
        jl fn_00742970_jloop
        mov edi, dword ptr [esp + 0x28]
        mov esi, dword ptr [esp + 0x14]
fn_00742970_next:
        mov eax, dword ptr [esp + 0x20]
        inc esi
        cmp esi, eax
        mov dword ptr [esp + 0x14], esi
        jl fn_00742970_outer
        pop ebp
fn_00742970_end:
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}

// [0x00743480] sub_00743480 (288 bytes)
extern "C" __declspec(naked) int __cdecl fn_00743480(const char* s) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor ebp, ebp
        mov esi, 0xaadfe0
        mov ecx, edi
    L1A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne L1B
        test dl, dl
        je L1C
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne L1B
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L1A
    L1C:
        xor ecx, ecx
        jmp L1D
    L1B:
        sbb ecx, ecx
        sbb ecx, -1
    L1D:
        test ecx, ecx
        jne L2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    L2:
        mov esi, 0xaae0d4
        mov ecx, edi
    L2A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne L2B
        test dl, dl
        je L2C
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne L2B
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L2A
    L2C:
        xor ecx, ecx
        jmp L2D
    L2B:
        sbb ecx, ecx
        sbb ecx, -1
    L2D:
        test ecx, ecx
        jne L3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x2
        pop ebx
        ret
    L3:
        mov esi, 0xaadfd4
        mov ecx, edi
    L3A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne L3B
        test dl, dl
        je L3C
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne L3B
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L3A
    L3C:
        xor ecx, ecx
        jmp L3D
    L3B:
        sbb ecx, ecx
        sbb ecx, -1
    L3D:
        test ecx, ecx
        jne L4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x3
        pop ebx
        ret
    L4:
        mov esi, 0xaadfcc
        mov ecx, edi
    L4A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne L4B
        test dl, dl
        je L4C
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne L4B
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L4A
    L4C:
        xor ecx, ecx
        jmp L4D
    L4B:
        sbb ecx, ecx
        sbb ecx, -1
    L4D:
        test ecx, ecx
        mov eax, 0x4
        je L5
        mov eax, ebp
    L5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00743630] sub_00743630 (288 bytes)
extern "C" __declspec(naked) int __cdecl fn_00743630(const char* p) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor ebp, ebp
        mov esi, 0xaae5d4
        mov ecx, edi
    L1A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne F1
        test dl, dl
        je E1
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne F1
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L1A
    E1:
        xor ecx, ecx
        jmp J1
    F1:
        sbb ecx, ecx
        sbb ecx, -1
    J1:
        test ecx, ecx
        jne N2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    N2:
        mov esi, 0xaabb60
        mov ecx, edi
    L2A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne F2
        test dl, dl
        je E2
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne F2
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L2A
    E2:
        xor ecx, ecx
        jmp J2
    F2:
        sbb ecx, ecx
        sbb ecx, -1
    J2:
        test ecx, ecx
        jne N3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x2
        pop ebx
        ret
    N3:
        mov esi, 0xaabb54
        mov ecx, edi
    L3A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne F3
        test dl, dl
        je E3
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne F3
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L3A
    E3:
        xor ecx, ecx
        jmp J3
    F3:
        sbb ecx, ecx
        sbb ecx, -1
    J3:
        test ecx, ecx
        jne N4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x3
        pop ebx
        ret
    N4:
        mov esi, 0xaae5c8
        mov ecx, edi
    L4A:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne F4
        test dl, dl
        je E4
        mov al, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov dl, al
        cmp al, bl
        jne F4
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L4A
    E4:
        xor ecx, ecx
        jmp J4
    F4:
        sbb ecx, ecx
        sbb ecx, -1
    J4:
        test ecx, ecx
        mov eax, 0x4
        je DONE
        mov eax, ebp
    DONE:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0074F530] sub_0074F530 (288 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D2630();
extern "C" void ext_006D2720();
extern "C" void ext_006D29A0();
extern "C" void ext_006D80A0();
extern "C" void ext_007873F0();

extern "C" __declspec(naked) void __fastcall fn_0074F530(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008BF7BD
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x0
        call ext_006D2370
        mov esi, dword ptr [esp + 0x9c]
        lea eax, [esp + 0x48]
        push esi
        push eax
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x98], 0x1
        call ext_006D2630
        lea ecx, [esp + 0x28]
        push esi
        push ecx
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x98], 0x2
        call ext_006D2630
        lea edx, [esp + 0x28]
        lea eax, [esp + 0x68]
        push edx
        push eax
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x98], 0x3
        call ext_006D2720
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x94], 0x4
        call ext_007873F0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x90], 0x3
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        call ext_006D29A0
        mov esi, dword ptr [esp + 0x98]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov dword ptr [esp + 0x4], 0x1
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x90], 0x2
        call ext_006D80A0
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x90], 0x1
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x90], 0x0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 0x8
    }
}

// [0x007425F0] sub_007425F0 (288 bytes)
extern "C" void ext_006CD320();
extern "C" void ext_006BC600();
extern "C" void ext_00742710();
extern "C" void ext_007427A0();
extern "C" void ext_007425F0();
extern "C" void ext_00722040();
extern "C" void ext_00722190();
extern "C" void ext_00785810();
extern "C" void ext_007858A0();
extern "C" void ext_00785890();
extern "C" __declspec(naked) void __fastcall fn_007425F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008BEB1B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xd4]
        mov ebx, ecx
        push edi
        mov ecx, esi
        mov byte ptr [esp + 0x13], 0x0
        call ext_006CD320
        mov ecx, esi
        mov edi, eax
        call ext_006BC600
        mov ebp, eax
        mov eax, dword ptr [esp + 0xdc]
        test ebp, ebp
        jne short L_keep
        mov ebp, eax
L_keep:
        test edi, edi
        je short L_alt
        push ebp
        push esi
        mov ecx, ebx
        call ext_00742710
        jmp short L_common
L_alt:
        test eax, eax
        je short L_loop_init
        push ebp
        push esi
        mov ecx, ebx
        call ext_007427A0
        mov byte ptr [esp + 0x13], 0x1
L_loop_init:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        xor edi, edi
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        jle short L_after_loop
L_loop:
        mov edx, dword ptr [esi]
        push ebp
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        push eax
        mov ecx, ebx
        call ext_007425F0
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl short L_loop
L_after_loop:
        mov al, byte ptr [esp + 0x13]
        test al, al
        je short L_epilog
L_common:
        mov ecx, 0x7fffffff
        or eax, -1
        mov edi, 0x80000000
        push ecx
        mov edx, 1
        push eax
        push edi
        push edx
        push esi
        call ext_00722040
        add esp, 0x14
        call ext_00722190
        test al, al
        je short L_epilog
        lea ecx, [esp + 0x18]
        call ext_00785810
        push 1
        push esi
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xd8], 0x0
        call ext_007858A0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xd0], -1
        call ext_00785890
L_epilog:
        mov ecx, dword ptr [esp + 0xc8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xc4
        ret 8
    }
}

// [0x00748590] sub_00748590 (320 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006C31E0();
extern "C" void ext_006DC6A0();
extern "C" void ext_006E7460();
extern "C" void ext_00700AC0();
extern "C" void ext_00748A00();
extern "C" void ext_00749EB0();
extern "C" int mem_009334D8; /* double 100 */
extern "C" __declspec(naked) void __fastcall fn_00748590(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x1c]
        call ext_006B9D10
        xor edi, edi
        push 0x00AAE5DC
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x74], edi
        call ext_006B9EC0
        cmp dword ptr [esi + 0x1b8], edi
        jbe L_cleanup
    L_loop:
        mov ecx, dword ptr [esi + 0x1b0]
        mov eax, dword ptr [esi + 0x1cc]
        mov ebp, dword ptr [ecx + 4*edi]
        mov ebx, dword ptr [eax + 4*edi]
        lea ecx, [esp + 0x1c]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov edx, dword ptr [esi + 0x1b0]
        lea ecx, [esp + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov dword ptr [esp + 0x14], eax
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call dword ptr [ebp + 0x28]
        mov ecx, dword ptr [ebx + 0x34]
        mov eax, dword ptr [esi + 0x1b0]
        mov edx, dword ptr [ebx + 0x30]
        push ecx
        mov ecx, dword ptr [ebx + 0x28]
        mov eax, dword ptr [eax + 4*edi]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00748A00
        mov edx, dword ptr [esi + 0x1b0]
        mov ecx, dword ptr [ebx + 0x44]
        push ecx
        mov ecx, dword ptr [ebx + 0x38]
        mov eax, dword ptr [edx + 4*edi]
        mov edx, dword ptr [ebx + 0x40]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00749EB0
        mov edx, dword ptr [esi + 0x180]
        mov eax, dword ptr [edx + 4*edi]
        fld dword ptr [eax + 0x24]
        fmul qword ptr [mem_009334D8]
        mov eax, dword ptr [esi + 0x1b0]
        mov ecx, dword ptr [eax + 4*edi]
        fstp qword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        call ext_006C31E0
        mov ecx, eax
        call ext_00700AC0
        mov eax, dword ptr [esi + 0x1b8]
        inc edi
        cmp edi, eax
        jb L_loop
    L_cleanup:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x70], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0074B6F0] sub_0074B6F0 (331 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006D2130();
extern "C" void ext_0072CF30();
extern "C" void ext_00782D00();
extern "C" void ext_007ABC20();

extern "C" __declspec(naked) void __fastcall fn_0074B6F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BF3D6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x10], esi
        call ext_0072CF30
        xor ebx, ebx
        push 0x00B5D2C0
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0xac], ebx
        call ext_006B9D80
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x18], 0x1
        call ext_007ABC20
        push 0x14
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x1c], 0x2
        mov byte ptr [esi + 0x11c], bl
        mov byte ptr [esi + 0x11d], bl
        mov byte ptr [esi + 0x11e], bl
        mov byte ptr [esi + 0x11f], bl
        call ext_00782D00
        push 0x14
        lea ecx, [esi + 0x134]
        mov byte ptr [esp + 0x1c], 0x3
        call ext_00782D00
        push 0x14
        lea ecx, [esi + 0x148]
        mov byte ptr [esp + 0x1c], 0x4
        call ext_00782D00
        lea edi, [esi + 0x15c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x5
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x174]
        push 0x20
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x6
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x18c]
        push 0x10
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x7
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x1a4]
        push 0x20
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x8
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x1bc]
        push 0x20
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x9
        call ext_006D2130
        mov ecx, dword ptr [esp + 0x10]
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        mov dword ptr [esi], 0x00996BA0
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00748440] sub_00748440 (336 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006DC6A0();
extern "C" void ext_006E7460();
extern "C" void ext_00748A00();
extern "C" void ext_00749050();
extern "C" void ext_00749950();
extern "C" __declspec(naked) void __fastcall fn_00748440(void* self) {
    __asm {
        push -1
        push 0x008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x14]
        call ext_006B9D10
        xor ebx, ebx
        push 0x00AAE5DC
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x6c], ebx
        call ext_006B9EC0
        cmp dword ptr [esi + 0x110], ebx
        jbe L_EXIT_FAIL_TRUE
L_LOOP:
        mov ecx, dword ptr [esi + 0x13c]
        mov eax, dword ptr [esi + 0x124]
        mov ebp, dword ptr [ecx + 4*ebx]
        mov edi, dword ptr [eax + 4*ebx]
        lea ecx, [esp + 0x14]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov edx, dword ptr [esi + 0x13c]
        lea ecx, [esp + 0x14]
        mov eax, dword ptr [edx + 4*ebx]
        mov dword ptr [esp + 0x10], eax
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call dword ptr [ebp + 0x28]
        mov ecx, dword ptr [edi + 0x64]
        mov eax, dword ptr [esi + 0x13c]
        mov edx, dword ptr [edi + 0x60]
        push ecx
        mov ecx, dword ptr [edi + 0x58]
        mov eax, dword ptr [eax + 4*ebx]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00748A00
        test al, al
        je L_EXIT_FAIL
        mov edx, dword ptr [esi + 0x13c]
        mov ecx, dword ptr [edi + 0x74]
        push ecx
        mov ecx, dword ptr [edi + 0x68]
        mov eax, dword ptr [edx + 4*ebx]
        mov edx, dword ptr [edi + 0x70]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00749050
        test al, al
        je L_EXIT_FAIL
        mov edx, dword ptr [esi + 0x13c]
        mov ecx, dword ptr [edi + 0x84]
        push ecx
        mov ecx, dword ptr [edi + 0x78]
        mov eax, dword ptr [edx + 4*ebx]
        mov edx, dword ptr [edi + 0x80]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00749950
        test al, al
        je L_EXIT_FAIL
        mov eax, dword ptr [esi + 0x110]
        inc ebx
        cmp ebx, eax
        jb L_LOOP
L_EXIT_FAIL_TRUE:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret
L_EXIT_FAIL:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret
    }
}

// [0x00746020] sub_00746020 (346 bytes)
extern "C" void ext_006D3630();
extern "C" void ext_006D3660();
extern "C" void ext_006D3690();
extern "C" void ext_006D36F0();
extern "C" void ext_00746180();
extern "C" void ext_00747570();
extern "C" void ext_00747580();
extern "C" void ext_007475B0();

extern "C" __declspec(naked) void __fastcall fn_00746020(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0xdc]
        test eax, eax
        jbe L_after1
L_loop1:
        mov eax, dword ptr [esi + 0xf0]
        mov ecx, dword ptr [eax + 4*edi]
        cmp word ptr [ecx + 0xb4], 0
        mov ecx, dword ptr [esi + 0x4]
        jne L_alt1
        call ext_006D36F0
        mov edx, dword ptr [esi + 0x108]
        mov dword ptr [edx + 4*edi], eax
        jmp L_next1
L_alt1:
        call ext_006D36F0
        mov ecx, dword ptr [esi + 0x108]
        mov dword ptr [ecx + 4*edi], eax
        mov edx, dword ptr [esi + 0x108]
        mov ecx, dword ptr [esi + 0xf0]
        mov eax, dword ptr [edx + 4*edi]
        mov edx, dword ptr [ecx + 4*edi]
        push eax
        push edx
        mov ecx, esi
        call ext_00746180
L_next1:
        mov eax, dword ptr [esi + 0xdc]
        inc edi
        cmp edi, eax
        jb L_loop1
L_after1:
        mov eax, dword ptr [esi + 0x16c]
        xor edi, edi
        test eax, eax
        jbe L_after2
L_loop2:
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3690
        mov ecx, dword ptr [esi + 0x198]
        mov dword ptr [ecx + 4*edi], eax
        mov edx, dword ptr [esi + 0x198]
        mov ecx, dword ptr [esi + 0x180]
        mov eax, dword ptr [edx + 4*edi]
        mov edx, dword ptr [ecx + 4*edi]
        push eax
        push edx
        mov ecx, esi
        call ext_00747570
        mov eax, dword ptr [esi + 0x16c]
        inc edi
        cmp edi, eax
        jb L_loop2
L_after2:
        mov eax, dword ptr [esi + 0x1d4]
        xor edi, edi
        test eax, eax
        jbe L_after3
L_loop3:
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3690
        mov ecx, dword ptr [esi + 0x200]
        mov dword ptr [ecx + 4*edi], eax
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3630
        mov edx, dword ptr [esi + 0x218]
        mov dword ptr [edx + 4*edi], eax
        mov eax, dword ptr [esi + 0x200]
        mov edx, dword ptr [esi + 0x1e8]
        mov ecx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [edx + 4*edi]
        push ecx
        push eax
        mov ecx, esi
        call ext_00747580
        mov eax, dword ptr [esi + 0x1d4]
        inc edi
        cmp edi, eax
        jb L_loop3
L_after3:
        mov eax, dword ptr [esi + 0x26c]
        xor edi, edi
        test eax, eax
        jbe L_after4
L_loop4:
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3660
        mov ecx, dword ptr [esi + 0x2b4]
        mov dword ptr [ecx + 4*edi], eax
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3630
        mov edx, dword ptr [esi + 0x2cc]
        mov dword ptr [edx + 4*edi], eax
        mov eax, dword ptr [esi + 0x2b4]
        mov edx, dword ptr [esi + 0x280]
        mov ecx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [edx + 4*edi]
        push ecx
        push eax
        mov ecx, esi
        call ext_007475B0
        mov eax, dword ptr [esi + 0x26c]
        inc edi
        cmp edi, eax
        jb L_loop4
L_after4:
        pop edi
        mov al, 1
        pop esi
        ret
    }
}

// [0x00748890] sub_00748890 (368 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006DC6A0();
extern "C" void ext_006E7460();
extern "C" void ext_00748A00();
extern "C" void ext_0074A670();
extern "C" void ext_0074A9E0();
extern "C" __declspec(naked) void __fastcall fn_00748890(void* self) {
    __asm {
        push    -1
        push    0x008bcb18
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x50
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esp + 0xc]
        call    ext_006B9D10
        xor     ebx, ebx
        push    0x00aae5dc
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x64], ebx
        call    ext_006B9EC0
        cmp     dword ptr [esi + 0x288], ebx
        jbe     loc_7489d9
        push    ebp
        push    edi
    loc_7488d7:
        mov     ecx, dword ptr [esi + 0x2e4]
        mov     eax, dword ptr [esi + 0x29c]
        mov     ebp, dword ptr [ecx + 4*ebx]
        mov     edi, dword ptr [eax + 4*ebx]
        lea     ecx, [esp + 0x14]
        call    ext_006E7460
        push    eax
        mov     ecx, ebp
        call    ext_006DC6A0
        mov     edx, dword ptr [esi + 0x2e4]
        lea     ecx, [esp + 0x14]
        mov     eax, dword ptr [edx + 4*ebx]
        mov     dword ptr [esp + 0x10], eax
        mov     ebp, dword ptr [eax]
        call    ext_006E7460
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [edi + 0x34]
        mov     eax, dword ptr [esi + 0x2e4]
        mov     edx, dword ptr [edi + 0x30]
        push    ecx
        mov     ecx, dword ptr [edi + 0x28]
        mov     eax, dword ptr [eax + 4*ebx]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    ext_00748A00
        mov     edx, dword ptr [esi + 0x2e4]
        mov     ecx, dword ptr [edi + 0x44]
        push    ecx
        mov     ecx, dword ptr [edi + 0x38]
        mov     eax, dword ptr [edx + 4*ebx]
        mov     edx, dword ptr [edi + 0x40]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    ext_0074A670
        mov     edx, dword ptr [esi + 0x2e4]
        mov     ecx, dword ptr [edi + 0x54]
        push    ecx
        mov     ecx, dword ptr [edi + 0x48]
        mov     eax, dword ptr [edx + 4*ebx]
        mov     edx, dword ptr [edi + 0x50]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    ext_0074A9E0
        mov     edx, dword ptr [esi + 0x2fc]
        lea     ecx, [esp + 0x14]
        mov     ebp, dword ptr [edx + 4*ebx]
        call    ext_006E7460
        push    eax
        mov     ecx, ebp
        call    ext_006DC6A0
        mov     eax, dword ptr [esi + 0x2fc]
        lea     ecx, [esp + 0x14]
        mov     eax, dword ptr [eax + 4*ebx]
        mov     dword ptr [esp + 0x10], eax
        mov     ebp, dword ptr [eax]
        call    ext_006E7460
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [esi + 0x2fc]
        mov     edx, dword ptr [edi + 0x7c]
        push    edx
        mov     edx, dword ptr [edi + 0x70]
        mov     eax, dword ptr [ecx + 4*ebx]
        mov     ecx, dword ptr [edi + 0x78]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_00748A00
        mov     eax, dword ptr [esi + 0x288]
        inc     ebx
        cmp     ebx, eax
        jb      loc_7488d7
        pop     edi
        pop     ebp
    loc_7489d9:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x60], 0xffffffff
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x58]
        pop     esi
        mov     al, 1
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x5c
        ret
    }
}

// [0x00743AD0] sub_00743AD0 (431 bytes)
extern "C" void ext_0072CFB0();
extern "C" void ext_00743CB0();
extern "C" __declspec(naked) void __fastcall fn_00743AD0(void* self) {
    __asm {
        push -1
        push 0x008BEDFC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x996b60
        mov dword ptr [esp + 0x10], 0x16
        call ext_00743CB0
        lea ecx, [esi + 0x304]
        mov byte ptr [esp + 0x10], 0x15
        call ext_006D2160
        lea ecx, [esi + 0x2ec]
        mov byte ptr [esp + 0x10], 0x14
        call ext_006D2160
        lea ecx, [esi + 0x2d4]
        mov byte ptr [esp + 0x10], 0x13
        call ext_006D2160
        lea ecx, [esi + 0x2bc]
        mov byte ptr [esp + 0x10], 0x12
        call ext_006D2160
        lea ecx, [esi + 0x2a4]
        mov byte ptr [esp + 0x10], 0x11
        call ext_006D2160
        lea ecx, [esi + 0x28c]
        mov byte ptr [esp + 0x10], 0x10
        call ext_006D2160
        lea ecx, [esi + 0x270]
        mov byte ptr [esp + 0x10], 0xf
        call ext_006D2160
        lea ecx, [esi + 0x254]
        mov byte ptr [esp + 0x10], 0xe
        call ext_006D2160
        lea ecx, [esi + 0x238]
        mov byte ptr [esp + 0x10], 0xd
        call ext_006D2160
        lea ecx, [esi + 0x220]
        mov byte ptr [esp + 0x10], 0xc
        call ext_006D2160
        lea ecx, [esi + 0x208]
        mov byte ptr [esp + 0x10], 0xb
        call ext_006D2160
        lea ecx, [esi + 0x1f0]
        mov byte ptr [esp + 0x10], 0xa
        call ext_006D2160
        lea ecx, [esi + 0x1d8]
        mov byte ptr [esp + 0x10], 0x9
        call ext_006D2160
        lea ecx, [esi + 0x1bc]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006D2160
        lea ecx, [esi + 0x1a0]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006D2160
        lea ecx, [esi + 0x188]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006D2160
        lea ecx, [esi + 0x170]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006D2160
        mov byte ptr [esp + 0x10], 0x4
        lea ecx, [esi + 0x150]
        call ext_006D2160
        lea ecx, [esi + 0x12c]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006D2160
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006D2160
        lea ecx, [esi + 0xf8]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D2160
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0072CFB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00748290] sub_00748290 (432 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2B60();
extern "C" void ext_00747FA0();


extern "C" __declspec(naked) bool __fastcall fn_00748290(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0xb5]
        test al, al
        je L_NOFLAG
        mov eax, dword ptr [esi + 0x148]
        jmp L_HAVEBASE
L_NOFLAG:
        mov ecx, dword ptr [esp + 0x14]
        call ext_006BC370
L_HAVEBASE:
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esi + 0x288]
        xor ebp, ebp
        test eax, eax
        jbe L_RET1
        push ebx
        push edi
L_LOOP:
        mov ecx, dword ptr [esi + 0x29c]
        mov edi, dword ptr [ecx + 4*ebp]
        lea eax, [ecx + 4*ebp]
        add edi, 0xb
        or ecx, -1
        mov dword ptr [esp + 0x14], edi
        mov edx, dword ptr [eax]
        add edx, 0x58
        xor eax, eax
        mov dword ptr [esp + 0x10], edx
        repne scasb
        not ecx
        dec ecx
        jne L_P1NZ
        mov eax, dword ptr [esi + 0x2e4]
        mov ebx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 4*ebp]
        push ecx
        mov ecx, ebx
        call ext_006C27E0
        mov edi, dword ptr [esp + 0x10]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_P0NZ_A
        mov edx, dword ptr [esi + 0x2fc]
        mov ecx, ebx
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        jmp L_CALL_7483F4
L_P0NZ_A:
        mov ecx, dword ptr [esi + 0x2fc]
        lea edx, [esp + 0x10]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        cmp al, 0x1
        je L_DONE_ITER
        mov eax, dword ptr [esi + 0x2fc]
        mov ecx, dword ptr [eax + 4*ebp]
        push ecx
        mov ecx, ebx
        jmp L_CALL_7483F4
L_P1NZ:
        mov edx, dword ptr [esi + 0x2e4]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        call ext_00747FA0
        mov bl, al
        cmp bl, 0x1
        je L_748385
        mov edx, dword ptr [esi + 0x2e4]
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        call ext_006C27E0
L_748385:
        mov edi, dword ptr [esp + 0x10]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_P0NZ_B
        cmp bl, 0x1
        je L_7483A6
        mov ecx, dword ptr [esi + 0x2fc]
        mov edx, dword ptr [ecx + 4*ebp]
        push edx
        jmp L_7483F0
L_7483A6:
        mov eax, dword ptr [esi + 0x2fc]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov eax, dword ptr [eax + 4*ebp]
        push eax
        call ext_00747FA0
        cmp al, 0x1
        je L_DONE_ITER
        mov edx, dword ptr [esi + 0x2fc]
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        jmp L_7483F0
L_P0NZ_B:
        mov ecx, dword ptr [esi + 0x2fc]
        lea edx, [esp + 0x10]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        cmp al, 0x1
        je L_DONE_ITER
        mov eax, dword ptr [esi + 0x2fc]
        mov ecx, dword ptr [eax + 4*ebp]
        push ecx
L_7483F0:
        mov ecx, dword ptr [esp + 0x20]
L_CALL_7483F4:
        call ext_006C27E0
L_DONE_ITER:
        mov edx, dword ptr [esi + 0x2fc]
        mov ecx, dword ptr [esi + 0x2e4]
        mov eax, dword ptr [edx + 4*ebp]
        mov ecx, dword ptr [ecx + 4*ebp]
        push eax
        call ext_006C2B60
        mov eax, dword ptr [esi + 0x288]
        inc ebp
        cmp ebp, eax
        jb L_LOOP
        pop edi
        pop ebx
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x8
        ret 0x4
L_RET1:
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x8
        ret 0x4
    }
}

// [0x0074D270] sub_0074D270 (448 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA220();
extern "C" void ext_006BA2C0();
extern "C" void ext_006BAAF0();
extern "C" void ext_006E7460();
extern "C" void ext_006FFD60();
extern "C" int mem_00925188;
extern "C" int mem_00AAE638;

extern "C" __declspec(naked) void __fastcall fn_0074D270(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008BF51B
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x98
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push eax
        mov byte ptr [eax], bl
        mov eax, dword ptr [esi + 0xac]
        push 0x00AAE72C
        push eax
        call dword ptr [mem_00925188]
        add esp, 0x0c
        cmp eax, 1
        jge L_2BA
        xor al, al
        jmp L_409
L_2BA:
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [mem_00AAE638]
        mov ebp, dword ptr [esp + 0xb8]
        push ecx
        push edx
        push ebp
        call ext_006FFD60
        add esp, 0x0c
        test eax, eax
        jne L_2E3
        xor al, al
        jmp L_409
L_2E3:
        push ebp
        lea ecx, [esp + 0x10]
        call ext_006B9D80
        lea eax, [esp + 0x58]
        push 2
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xb4], ebx
        call ext_006BAAF0
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xb0], 1
        call ext_006B9E60
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0x0c]
        call ext_006B99C0
        dec eax
        lea ecx, [esp + 0x0c]
        push eax
        call ext_006BA2C0
        cmp byte ptr [eax], 0x5c
        jne L_3C9
L_343:
        lea ecx, [esp + 0x0c]
        call ext_006B99C0
        dec eax
        lea ecx, [esp + 0x0c]
        push eax
        call ext_006BA2C0
        mov byte ptr [eax], 0x20
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [mem_00AAE638]
        push ecx
        push edx
        push ebp
        call ext_006FFD60
        add esp, 0x0c
        lea ecx, [esp + 0x0c]
        push ebp
        call ext_006BA220
        lea eax, [esp + 0x58]
        push ebx
        push eax
        lea ecx, [esp + 0x14]
        call ext_006BAAF0
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xb0], 2
        call ext_006B9E60
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0x0c]
        call ext_006B99C0
        dec eax
        lea ecx, [esp + 0x0c]
        push eax
        call ext_006BA2C0
        cmp byte ptr [eax], 0x5c
        je L_343
L_3C9:
        push edi
        lea ecx, [esp + 0x10]
        call ext_006E7460
        mov edi, eax
        or ecx, -1
        xor eax, eax
        mov dword ptr [esp + 0xb0], 0xffffffff
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        lea ecx, [esp + 0x10]
        call ext_006B9D70
        mov al, 1
        pop edi
L_409:
        mov ecx, dword ptr [esp + 0xa4]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa4
        ret 8
    }
}

// [0x0074F180] sub_0074F180 (448 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA4D0();
extern "C" void ext_006BA570();
extern "C" void ext_006D80A0();
extern "C" void ext_006E7460();
extern "C" void ext_0074AE00();
extern "C" void ext_0074AE20();
extern "C" void ext_0074B3B0();
extern "C" void ext_0074F340();
extern "C" void ext_0074F650();
extern "C" int mem_0092521C;

extern "C" __declspec(naked) void __fastcall fn_0074F180(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008BF72E
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xb0
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esp + 0x1c]
        call ext_0074AE00
        mov edi, dword ptr [esp + 0xd4]
        lea ecx, [esp + 0x28]
        push edi
        mov dword ptr [esp + 0xcc], 0x0
        call ext_006B9D80
        push 0x00AA9490
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xcc], 0x1
        call ext_006BA4D0
        mov ebx, eax
        cmp ebx, 0x4
        mov dword ptr [esp + 0x20], ebx
        jge L_BODY
L_FAIL:
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xc8], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x10]
        call ext_006D80A0
        xor al, al
        jmp L_EPILOG
L_BODY:
        mov ebp, dword ptr [esp + 0xd0]
        lea eax, [ebp + 0x80]
        lea ecx, [ebp + 0x78]
        push eax
        lea edx, [ebp + 0x70]
        push ecx
        lea eax, [ebp + 0x68]
        push edx
        push eax
        push 0x00AAE710
        push edi
        call dword ptr [mem_0092521C]
        mov edi, 0x4
        add esp, 0x18
        cmp ebx, edi
        jle L_DONE
L_LOOP:
        push 0x00AA9490
        lea ecx, [esp + 0x78]
        push edi
        push ecx
        lea ecx, [esp + 0x34]
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp + 0xc8], 0x2
        call ext_006E7460
        lea edx, [esp + 0x10]
        push eax
        push edx
        mov ecx, esi
        call ext_0074F340
        test al, al
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0xc8], 0x1
        sete bl
        call ext_006B9D70
        test bl, bl
        jne L_FAIL
        mov eax, dword ptr [esi + 0x174]
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_0074F650
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esi + 0x18c]
        push eax
        push ecx
        mov ecx, esi
        call ext_0074F650
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esi + 0x1a4]
        mov ecx, esi
        push eax
        push edx
        call ext_0074F650
        mov dword ptr [esp + 0x18], eax
        sub esp, 0x10
        lea eax, [esp + 0x20]
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        call ext_0074AE20
        mov ecx, ebp
        call ext_0074B3B0
        mov eax, dword ptr [esp + 0x20]
        inc edi
        cmp edi, eax
        jl L_LOOP
L_DONE:
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xc8], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x10]
        call ext_006D80A0
        mov al, 0x1
L_EPILOG:
        mov ecx, dword ptr [esp + 0xc0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xbc
        ret 0x8
    }
}

// [0x007486D0] sub_007486D0 (448 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006C31E0();
extern "C" void ext_006DC6A0();
extern "C" void ext_006E7460();
extern "C" void ext_00700AC0();
extern "C" void ext_00748A00();
extern "C" void ext_00749EB0();
extern "C" void ext_0074A300();
extern "C" int mem_009334D8; /* double 100 */

extern "C" __declspec(naked) void __fastcall fn_007486D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x1c]
        call ext_006B9D10
        xor edi, edi
        push 0x00aae5dc
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x74], edi
        call ext_006B9EC0
        cmp dword ptr [esi + 0x250], edi
        jbe L_done
    L_loop:
        mov ecx, dword ptr [esi + 0x230]
        mov eax, dword ptr [esi + 0x264]
        mov ebp, dword ptr [ecx + 4*edi]
        mov ebx, dword ptr [eax + 4*edi]
        lea ecx, [esp + 0x1c]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov edx, dword ptr [esi + 0x230]
        lea ecx, [esp + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov dword ptr [esp + 0x14], eax
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call dword ptr [ebp + 0x28]
        mov ecx, dword ptr [ebx + 0x34]
        mov eax, dword ptr [esi + 0x230]
        mov edx, dword ptr [ebx + 0x30]
        push ecx
        mov ecx, dword ptr [ebx + 0x28]
        mov eax, dword ptr [eax + 4*edi]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00748A00
        mov edx, dword ptr [esi + 0x230]
        mov ecx, dword ptr [ebx + 0x44]
        push ecx
        mov ecx, dword ptr [ebx + 0x38]
        mov eax, dword ptr [edx + 4*edi]
        mov edx, dword ptr [ebx + 0x40]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00749EB0
        mov edx, dword ptr [esi + 0x230]
        mov ecx, dword ptr [ebx + 0x54]
        push ecx
        mov ecx, dword ptr [ebx + 0x48]
        mov eax, dword ptr [edx + 4*edi]
        mov edx, dword ptr [ebx + 0x50]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_0074A300
        mov edx, dword ptr [esi + 0x1e8]
        mov eax, dword ptr [edx + 4*edi]
        fld dword ptr [eax + 0x24]
        fmul qword ptr [mem_009334D8]
        mov eax, dword ptr [esi + 0x230]
        mov ecx, dword ptr [eax + 4*edi]
        fstp qword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        call ext_006C31E0
        mov ecx, eax
        call ext_00700AC0
        mov ecx, dword ptr [esi + 0x248]
        mov ebp, dword ptr [ecx + 4*edi]
        lea ecx, [esp + 0x1c]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov edx, dword ptr [esi + 0x248]
        lea ecx, [esp + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov dword ptr [esp + 0x14], eax
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call dword ptr [ebp + 0x28]
        mov ecx, dword ptr [ebx + 0x9c]
        mov eax, dword ptr [esi + 0x248]
        mov edx, dword ptr [ebx + 0x98]
        push ecx
        mov ecx, dword ptr [ebx + 0x90]
        mov eax, dword ptr [eax + 4*edi]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call ext_00748A00
        mov eax, dword ptr [esi + 0x250]
        inc edi
        cmp edi, eax
        jb L_loop
    L_done:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x70], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
