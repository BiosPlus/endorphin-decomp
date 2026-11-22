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
// [VA] 0x00741450

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

// [0x0074E870] sub_0074E870 (448 bytes)
extern "C" void ext_006D3750();
extern "C" void ext_00717EA0();
extern "C" void ext_00717EC0();
extern "C" void ext_006D7C80();
extern "C" void ext_00718010();
extern "C" void ext_00718020();
extern "C" void ext_006DEEC0();
extern "C" void ext_0074F680();
extern "C" void ext_006D2AA0();
extern "C" void ext_007873F0();
extern "C" void ext_006D80A0();
extern "C" void ext_006FDB00();
extern "C" void ext_007023E0();
extern "C" void ext_006FD740();
extern "C" __declspec(naked) void __fastcall fn_0074E870(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov dword ptr [esp + 0x4], ecx
        cmp dword ptr [esi + 0x4c], 0x3
        jne L_fail
        mov al, byte ptr [esi + 0x58]
        test al, al
        je L_fail
        mov ecx, dword ptr [ecx + 0x4]
        push ebx
        push ebp
        push edi
        call ext_006D3750
        mov ecx, dword ptr [esi + 0x5c]
        mov ebp, eax
        mov eax, dword ptr [esi + 0xa0]
        mov edx, dword ptr [esi + 0x60]
        sub eax, ecx
        dec eax
        mov ebx, eax
        mov eax, dword ptr [esi + 0xb8]
        sub eax, edx
        mov dword ptr [esp + 0x18], ebx
        dec eax
        inc ecx
        inc edx
        mov edi, eax
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x24], edi
        call ext_00717EA0
        push 0x2
        push ebx
        push 0x2
        push edi
        mov ecx, ebp
        call ext_00717EC0
        push 0x3
        push 0x3
        mov ecx, ebp
        call ext_006D7C80
        mov eax, dword ptr [esi + 0xa0]
        mov edi, dword ptr [esi + 0xb8]
        mov ecx, ebp
        mov dword ptr [esp + 0x14], eax
        call ext_00718010
        mov ecx, ebp
        mov dword ptr [esp + 0x50], eax
        call ext_00718020
        xor ecx, ecx
        test edi, edi
        jle L_c1
    L_c0:
        mov edx, dword ptr [esi + 0xc8]
        inc ecx
        cmp ecx, edi
        fld qword ptr [edx + 8*ecx - 0x8]
        mov edx, dword ptr [esp + 0x50]
        fstp qword ptr [edx + 8*ecx - 0x8]
        jl L_c0
    L_c1:
        mov edx, dword ptr [esp + 0x14]
        xor ecx, ecx
        test edx, edx
        jle L_c3
    L_c2:
        mov edi, dword ptr [esi + 0xb0]
        inc ecx
        cmp ecx, edx
        fld qword ptr [edi + 8*ecx - 0x8]
        fstp qword ptr [eax + 8*ecx - 0x8]
        jl L_c2
    L_c3:
        mov ecx, ebp
        call ext_006DEEC0
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [esi + 0x64]
        xor edi, edi
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        jle L_loop_end
        jmp L_loop_body
    L_loop_top:
        mov ebx, dword ptr [esp + 0x18]
    L_loop_body:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        push eax
        push edi
        call ext_0074F680
        mov ecx, dword ptr [esi + 0x98]
        mov ebx, eax
        lea edx, [esp + 0x20]
        mov eax, dword ptr [ecx + 4*edi]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        lea ecx, [eax + 0x174]
        call ext_006D2AA0
        mov edx, dword ptr [esp + 0x50]
        mov ecx, ebx
        shl ecx, 0x5
        push eax
        add ecx, edx
        mov dword ptr [esp + 0x4c], 0x0
        call ext_007873F0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x48], 0xffffffff
        call ext_006D80A0
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl L_loop_top
    L_loop_end:
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je L_s1
        push 0x0
        push eax
        mov ecx, ebp
        call ext_006FDB00
    L_s1:
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        je L_s2
        push 0x1
        call ext_007023E0
        mov ecx, dword ptr [esi + 0x54]
        push 0x0
        push ecx
        mov ecx, ebp
        call ext_006FD740
    L_s2:
        mov eax, ebp
        pop edi
        pop ebp
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 0x4
    L_fail:
        mov ecx, dword ptr [esp + 0x34]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 0x4
        nop
        nop
    }
}

// [0x0074EFF0] sub_0074EFF0 (400 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006BA4D0();
extern "C" void ext_006BA570();
extern "C" void ext_0074AE20();
extern "C" void ext_0074AF50();
extern "C" void ext_0074F340();
extern "C" void ext_0074F650();
extern "C" __declspec(naked) void __fastcall fn_0074EFF0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bf6fe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xac
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        push edi
        push edi
        push edi
        lea ecx, [esp+0x1c]
        call fn_0074AE00
        mov eax, dword ptr [esp+0xd0]
        lea ecx, [esp+0x24]
        push eax
        mov dword ptr [esp+0xc8], edi
        call ext_006B9D80
        push 0xaa9490
        lea ecx, [esp+0x28]
        mov byte ptr [esp+0xc8], 1
        call ext_006BA4D0
        mov ebp, eax
        cmp ebp, 3
        jge L075
    L054:
        lea ecx, [esp+0x24]
        mov byte ptr [esp+0xc4], 0
        call ext_006B9D70
        lea ecx, [esp+0x10]
        call ext_006D80A0
        xor al, al
        jmp L15E
    L075:
        cmp ebp, edi
        jle L142
    L07D:
        push 0xaa9490
        lea ecx, [esp+0x74]
        push edi
        push ecx
        lea ecx, [esp+0x30]
        call ext_006BA570
        mov ecx, eax
        mov byte ptr [esp+0xc4], 2
        call ext_006E7460
        lea edx, [esp+0x10]
        push eax
        push edx
        mov ecx, esi
        call ext_0074F340
        test al, al
        lea ecx, [esp+0x70]
        mov byte ptr [esp+0xc4], 1
        sete bl
        call ext_006B9D70
        test bl, bl
        jne L054
        mov eax, dword ptr [esi+0x174]
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp+0x14]
        push eax
        call ext_0074F650
        mov dword ptr [esp+0x10], eax
        mov al, byte ptr [esi+0x11e]
        test al, al
        je L0F0
        mov eax, dword ptr [esi+0x18c]
        jmp L0F2
    L0F0:
        xor eax, eax
    L0F2:
        mov ecx, dword ptr [esp+0x14]
        push eax
        push ecx
        mov ecx, esi
        call ext_0074F650
        mov edx, dword ptr [esp+0x18]
        mov dword ptr [esp+0x14], eax
        mov eax, dword ptr [esi+0x1a4]
        mov ecx, esi
        push eax
        push edx
        call ext_0074F650
        mov dword ptr [esp+0x18], eax
        sub esp, 0x10
        lea eax, [esp+0x20]
        mov ecx, esp
        mov dword ptr [esp+0x30], esp
        push eax
        call ext_0074AE20
        mov ecx, dword ptr [esp+0xdc]
        call ext_0074AF50
        inc edi
        cmp edi, ebp
        jl L07D
    L142:
        lea ecx, [esp+0x24]
        mov byte ptr [esp+0xc4], 0
        call ext_006B9D70
        lea ecx, [esp+0x10]
        call ext_006D80A0
        mov al, 1
    L15E:
        mov ecx, dword ptr [esp+0xbc]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xb8
        ret 8
    }
}

// [0x0074D430] sub_0074D430 (448 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA220();
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2F10();
extern "C" void ext_006C2F50();
extern "C" void ext_006D3560();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_006E7460();
extern "C" void ext_006FE4B0();
extern "C" void ext_0074E110();
extern "C" void ext_0074F6B0();
extern "C" void ext_00782EC0();
extern "C" int mem_00B5D2C0;
extern "C" int mem_00AAE7A4;
extern "C" __declspec(naked) void __fastcall fn_0074D430(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x008BF546
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xf0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10c]
        push edi
        mov al, byte ptr [esi + 0xfc]
        test al, al
        je short L_else
        call ext_006BC370
        push 0x0
        lea ecx, [esi + 0xb0]
        mov edi, eax
        call ext_006E7460
        push eax
        lea eax, [esp + 0x24]
        push eax
        call ext_006FE4B0
        add esp, 0xc
        push offset mem_00AAE7A4
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x10c], 0x0
        call ext_006BA220
        lea ecx, [esp + 0x1c]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call ext_006D3560
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call ext_006C27E0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x108], 0xffffffff
        call ext_006B9D70
        jmp short L_join
L_else:
        call ext_006BC370
        mov dword ptr [esp + 0x14], eax
L_join:
        mov eax, dword ptr [esi + 0x124]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], offset mem_00B5D2C0
        jle L_after_loop
L_loop:
        lea ecx, [esp + 0x10]
        push ecx
        push ebp
        lea ecx, [esi + 0x120]
        call ext_00782EC0
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x68]
        push edx
        mov ebx, eax
        call ext_006E62C0
        mov eax, dword ptr [esi + 0x100]
        lea ecx, [esi + 0x100]
        lea edx, [esp + 0x68]
        mov dword ptr [esp + 0x108], 0x1
        push edx
        call dword ptr [eax + 0x8]
        lea ecx, [esp + 0x68]
        call ext_006E6340
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call ext_006D3560
        mov edi, eax
        test edi, edi
        je L_skip_call
        push ebx
        mov ecx, esi
        call ext_0074E110
        test eax, eax
        je short L_nomatch
        push eax
        mov ecx, edi
        call ext_006C2F50
        mov al, byte ptr [esi + 0x11e]
        test al, al
        je short L_skip5
        push 0x5
        mov ecx, edi
        call ext_006C2F10
L_skip5:
        mov ecx, dword ptr [esp + 0x14]
        push edi
        call ext_006C27E0
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x108], 0xffffffff
        call ext_006DE460
        mov eax, dword ptr [esp + 0x18]
        inc ebp
        cmp ebp, eax
        jl L_loop
L_after_loop:
        mov ecx, esi
        call ext_0074F6B0
        mov al, 0x1
L_epilogue:
        mov ecx, dword ptr [esp + 0x100]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xfc
        ret 0x4
L_nomatch:
        mov ecx, dword ptr [esi + 0x4]
        push 0x1
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
L_skip_call:
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x108], 0xffffffff
        call ext_006DE460
        xor al, al
        jmp short L_epilogue
    }
}

// [0x007427A0] sub_007427A0 (464 bytes)
extern "C" void ext_006C9AB0();
extern "C" void ext_006C9F60();
extern "C" void ext_006CA0E0();
extern "C" void ext_006CA2D0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CABD0();
extern "C" void ext_006CE720();
extern "C" void ext_006D89C0();
extern "C" void ext_006DAE00();
extern "C" void ext_006DEB50();
extern "C" void ext_006DEEC0();
extern "C" void ext_006DF170();
extern "C" void ext_006E5150();
extern "C" void ext_00722020();

extern "C" __declspec(naked) void __fastcall fn_007427A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x6c
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        je l_no_first
        mov ecx, esi
        call ext_006DEEC0
        mov ecx, dword ptr [ebp + 0xc]
        mov esi, eax
        mov dword ptr [esp + 0x1c], esi
        call ext_006DEEC0
        mov dword ptr [esp + 0xc], eax
        call ext_006CA0E0
        xor edi, edi
        lea ecx, [esp + 0x50]
        mov ebx, eax
        mov dword ptr [esp + 0x58], edi
        mov dword ptr [esp + 0x5c], edi
        call ext_006C9F60
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x20], 0xffffffff
        mov dword ptr [esp + 0x24], 0x7fffffff
        mov dword ptr [esp + 0x28], 0x1
        mov dword ptr [esp + 0x2c], 0x80000000
        mov dword ptr [esp + 0x30], edi
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x14], edi
        call ext_006D89C0
        push eax
        mov ecx, ebx
        call ext_006CA2D0
        mov ecx, esi
        call ext_006CA6A0
        cmp eax, 0x1
        jle l_bail_mid
        mov ecx, dword ptr [esp + 0xc]
        call ext_006CA6A0
        cmp eax, 0x1
        jle l_bail_mid
        lea eax, [esp + 0x28]
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0xc]
        call ext_006E5150
        lea edx, [esp + 0x48]
        push edx
        call ext_00722020
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov esi, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x28]
        add esp, 0x4
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x10], edx
l_loop_top:
        cmp edi, dword ptr [esp + 0x2c]
        jg l_loop_exit
        jl l_loop_body
        cmp esi, dword ptr [esp + 0x28]
        jae l_loop_exit
l_loop_body:
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x38]
        push eax
        push edi
        push esi
        push ecx
        mov ecx, dword ptr [ebp + 0xc]
        call ext_006DF170
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x38]
        push edx
        push eax
        lea ecx, [esp + 0x38]
        call ext_006DAE00
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        lea ecx, [esp + 0x48]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DF170
        push 0x0
        push 0x0
        fld qword ptr [esp + 0x48]
        push 0x3eaaaaab
        push 0x3eaaaaab
        push 0x0
        push 0x0
        push 0x0
        push 0x100
        push 0x8
        push ecx
        lea ecx, [esp + 0x78]
        fstp dword ptr [esp]
        push edi
        push esi
        call ext_006C9AB0
        lea edx, [esp + 0x50]
        push 0x0
        push edx
        push edi
        push esi
        mov ecx, ebx
        call ext_006CABD0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x10]
        add esi, ecx
        adc edi, eax
        jmp l_loop_top
l_loop_exit:
        mov ecx, dword ptr [esp + 0x1c]
        push 0x1
        push ebx
        call ext_006CE720
        xor edi, edi
l_bail_mid:
        cmp ebx, edi
        je l_tail_obj
        mov eax, dword ptr [ebx]
        push 0x1
        mov ecx, ebx
        call dword ptr [eax]
        mov ecx, dword ptr [ebp + 0x8]
        push edi
        call ext_006DEB50
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
l_no_first:
        xor edi, edi
l_tail_obj:
        mov ecx, dword ptr [ebp + 0x8]
        push edi
        call ext_006DEB50
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00742B00] sub_00742B00 (528 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7460();
extern "C" void ext_006FE870();
extern "C" void ext_00726610();

extern "C" __declspec(naked) void __fastcall fn_00742B00(void* self) {
    __asm {
        push -1
        push 0x008BEB6D
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x9c
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], 0x0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0xac], 0x2
        call ext_006B9D10
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xac], 0x3
        call ext_006B9D10
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0xac], 0x4
        call ext_006B9950
        test al, al
        jne L_89
        lea ecx, [esp + 0xb8]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00726610
        push eax
        lea ecx, [esp + 0x5c]
        call ext_006B9EC0
L_89:
        lea ecx, [esp + 0x104]
        call ext_006B9950
        test al, al
        jne L_BE
        lea ecx, [esp + 0x104]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00726610
        push eax
        lea ecx, [esp + 0x10]
        call ext_006B9EC0
L_BE:
        lea ecx, [esp + 0x58]
        call ext_006B9950
        test al, al
        jne L_02
        lea ecx, [esp + 0x58]
        call ext_006E7460
        push eax
        call ext_006FE870
        add esp, 0x4
        test al, al
        je L_02
        mov esi, dword ptr [esp + 0xb4]
        lea eax, [esp + 0x58]
        push eax
        mov ecx, esi
        call ext_006B9D20
        mov ebx, 0x1
        mov dword ptr [esp + 0x8], ebx
        jmp L_A0
L_02:
        lea ecx, [esp + 0xc]
        call ext_006B9950
        test al, al
        jne L_3A
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        call ext_006FE870
        add esp, 0x4
        test al, al
        je L_3A
        mov esi, dword ptr [esp + 0xb4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B9D20
        jmp L_97
L_3A:
        lea ecx, [esp + 0xb8]
        call ext_006B9950
        test al, al
        jne L_5F
        mov esi, dword ptr [esp + 0xb4]
        lea edx, [esp + 0x58]
        push edx
        mov ecx, esi
        call ext_006B9D20
        jmp L_97
L_5F:
        lea ecx, [esp + 0x104]
        call ext_006B9950
        test al, al
        jne L_84
        mov esi, dword ptr [esp + 0xb4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006B9D20
        jmp L_97
L_84:
        mov esi, dword ptr [esp + 0xb4]
        push 0x00B5D2C0
        mov ecx, esi
        call ext_006B9D80
L_97:
        mov ebx, 0x1
        mov dword ptr [esp + 0x8], ebx
L_A0:
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xac], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xac], 0x2
        call ext_006B9D70
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0x104]
        mov byte ptr [esp + 0xac], 0x0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xa4]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 0x9c
    }
}

// [0x0074D5F0] sub_0074D5F0 (528 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA4D0();
extern "C" void ext_006BA570();
extern "C" void ext_006D2170();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FE610();
extern "C" int mem_009252A8;

extern "C" __declspec(naked) void __fastcall fn_0074D5F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BF584
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x188
        mov eax, dword ptr [esp + 0x198]
        push ebx
        push ebp
        mov ebp, ecx
        push eax
        lea ecx, [esp + 0x64]
        call ext_006B9D80
        xor ebx, ebx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x198], ebx
        call ext_006B9D10
        push 0x00AA9490
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x19c], 0x1
        mov byte ptr [esp + 0xf], 0x1
        call ext_006BA4D0
        cmp eax, 0x1
        mov dword ptr [esp + 0x10], eax
        jge L_681
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x198], bl
        call ext_006B9D70
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x198], 0xffffffff
        call ext_006B9D70
        xor al, al
        jmp L_7DE
L_681:
        cmp eax, ebx
        jle L_7B5
        push esi
        push edi
        mov edi, dword ptr [mem_009252A8]
L_691:
        push 0x00AA9490
        lea ecx, [esp + 0x150]
        push ebx
        push ecx
        lea ecx, [esp + 0x74]
        call ext_006BA570
        push eax
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x1a4], 0x2
        call ext_006B9E60
        lea ecx, [esp + 0x14c]
        mov byte ptr [esp + 0x1a0], 0x1
        call ext_006B9D70
        push 0x00AAE64C
        lea ecx, [esp + 0x20]
        call ext_006E7460
        push eax
        call edi
        mov esi, eax
        add esp, 0x8
        test esi, esi
        jne L_784
        lea ecx, [ebp + 0xb0]
        call ext_006E7460
        lea edx, [esp + 0x100]
        push eax
        push edx
        call ext_006FE610
        add esp, 0x8
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x1a0], 0x3
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x104]
        call ext_006E7460
        push eax
        lea eax, [esp + 0xbc]
        push eax
        call ext_006FE2A0
        add esp, 0xc
        push 0x00AAE64C
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0x1a4], 0x4
        call ext_006E7460
        push eax
        call edi
        add esp, 0x8
        lea ecx, [esp + 0xb4]
        mov esi, eax
        mov byte ptr [esp + 0x1a0], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x100]
        mov byte ptr [esp + 0x1a0], 0x1
        call ext_006B9D70
        test esi, esi
        je L_7A1
L_784:
        mov eax, dword ptr [ebp + 0x15c]
        lea ecx, [ebp + 0x15c]
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], esi
        push edx
        push eax
        call ext_006D2170
        jmp L_7A6
L_7A1:
        mov byte ptr [esp + 0x13], 0x0
L_7A6:
        mov eax, dword ptr [esp + 0x18]
        inc ebx
        cmp ebx, eax
        jl L_691
        pop edi
        pop esi
L_7B5:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x198], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x198], 0xffffffff
        call ext_006B9D70
        mov al, byte ptr [esp + 0xb]
L_7DE:
        mov ecx, dword ptr [esp + 0x190]
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x194
        ret 0x4
    }
}

// [0x00741450] sub_00741450 (416 bytes)
extern "C" int mem_00993808; /* double 0.017453292519943295 */
extern "C" __declspec(naked) void fn_00741450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [eax + 0x14]
        fld qword ptr [eax]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [eax + 0x8]
        fmul qword ptr [mem_00993808]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [ebp - 0x20], ecx
        lea ecx, [ebp - 0x18]
        mov dword ptr [ebp - 0x1c], edx
        mov dword ptr [ebp + 0x10], ecx
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fsincos
        mov eax, dword ptr [ebp + 0x10]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [mem_00993808]
        lea edx, [ebp - 0x10]
        mov dword ptr [ebp + 0x10], edx
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fsincos
        mov eax, dword ptr [ebp + 0x10]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x20]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [mem_00993808]
        lea eax, [ebp - 0x8]
        mov dword ptr [ebp + 0x10], eax
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fsincos
        mov eax, dword ptr [ebp + 0x10]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x20]
        fmul st, st(1)
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [ebp - 0x18]
        mov eax, dword ptr [ebp + 0x8]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x8]
        fmul qword ptr [ebp - 0x10]
        fst qword ptr [ebp - 0x30]
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ebp - 0x10]
        fst qword ptr [ebp - 0x40]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ebp - 0x20]
        fchs
        fst qword ptr [ebp - 0x38]
        fstp qword ptr [eax + 0x10]
        fld st(0)
        fmul qword ptr [ebp - 0x8]
        fld st(3)
        fmul qword ptr [ebp - 0x18]
        fsubp st(1), st
        fst qword ptr [ebp - 0x20]
        fstp qword ptr [eax + 0x20]
        fmul st, st(2)
        fld qword ptr [ebp - 0x8]
        fmul qword ptr [ebp - 0x18]
        faddp st(1), st
        fst qword ptr [ebp - 0x48]
        fstp qword ptr [eax + 0x28]
        fld qword ptr [ebp - 0x10]
        fmul st, st(1)
        fst qword ptr [ebp - 0x50]
        fstp qword ptr [eax + 0x30]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [ebp - 0x8]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fst qword ptr [ebp - 0x58]
        fstp qword ptr [eax + 0x40]
        fld qword ptr [ebp - 0x28]
        fmulp st(2), st
        fld qword ptr [ebp - 0x8]
        fmul st, st(1)
        mov ecx, dword ptr [ebp + 0x14]
        fsubp st(2), st
        fstp st(0)
        fst qword ptr [eax + 0x48]
        fld qword ptr [ebp - 0x10]
        fmul qword ptr [ebp - 0x18]
        fst qword ptr [eax + 0x50]
        fld qword ptr [ecx]
        fld qword ptr [ebp - 0x30]
        fmul st, st(1)
        fstp qword ptr [eax]
        fld qword ptr [ebp - 0x40]
        fmul st, st(1)
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ebp - 0x38]
        fmul st, st(1)
        fstp qword ptr [eax + 0x10]
        fstp st(0)
        fld qword ptr [ecx + 0x8]
        fld qword ptr [ebp - 0x20]
        fmul st, st(1)
        fstp qword ptr [eax + 0x20]
        fld qword ptr [ebp - 0x48]
        fmul st, st(1)
        fstp qword ptr [eax + 0x28]
        fld qword ptr [ebp - 0x50]
        fmul st, st(1)
        fstp qword ptr [eax + 0x30]
        fstp st(0)
        fld qword ptr [ecx + 0x10]
        fld qword ptr [ebp - 0x58]
        fmul st, st(1)
        mov ecx, dword ptr [ebp + 0xc]
        fstp qword ptr [eax + 0x40]
        fxch st(2)
        fmul st, st(2)
        fstp qword ptr [eax + 0x48]
        fmul st, st(1)
        fstp qword ptr [eax + 0x50]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x60], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x64], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x68], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x6c], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x70], edx
        mov ecx, dword ptr [ecx + 0x14]
        fstp st(0)
        mov dword ptr [eax + 0x74], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00748070] sub_00748070 (544 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2B60();
extern "C" void ext_006C2C60();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_00747FA0();
extern "C" void ext_00787430();
extern "C" void ext_0078CB70();

extern "C" __declspec(naked) void __fastcall fn_00748070(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BF150
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x1c]
        call ext_006D2370
        xor ebp, ebp
        push 0x3ff00000
        push ebp
        push 0x40568000
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x64], ebp
        call ext_00787430
        mov al, byte ptr [esi + 0xb5]
        test al, al
        je L_c8
        mov eax, dword ptr [esi + 0x148]
        jmp L_d1
L_c8:
        mov ecx, dword ptr [esp + 0x4c]
        call ext_006BC370
L_d1:
        mov dword ptr [esp + 0x4c], eax
        mov eax, dword ptr [esi + 0x250]
        cmp eax, ebp
        jbe L_end
L_loop:
        mov ecx, dword ptr [esi + 0x264]
        lea eax, [ecx + 4*ebp]
        mov ecx, dword ptr [ecx + 4*ebp]
        lea edi, [ecx + 0xb]
        or ecx, -1
        mov dword ptr [esp + 0x14], edi
        mov eax, dword ptr [eax]
        add eax, 0x78
        mov dword ptr [esp + 0x10], eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_170
        mov edx, dword ptr [esi + 0x230]
        mov ebx, dword ptr [esp + 0x4c]
        mov ecx, ebx
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        call ext_006C27E0
        mov edi, dword ptr [esp + 0x10]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_141
        mov eax, dword ptr [esi + 0x248]
        mov ecx, ebx
        mov eax, dword ptr [eax + 4*ebp]
        push eax
        jmp L_20f
L_141:
        mov ecx, dword ptr [esi + 0x248]
        lea edx, [esp + 0x10]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        cmp al, 1
        je L_214
        mov eax, dword ptr [esi + 0x248]
        mov ecx, ebx
        mov eax, dword ptr [eax + 4*ebp]
        push eax
        jmp L_20f
L_170:
        mov ecx, dword ptr [esi + 0x230]
        lea edx, [esp + 0x14]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        mov bl, al
        mov eax, dword ptr [esi + 0x248]
        lea ecx, [esp + 0x14]
        mov eax, dword ptr [eax + 4*ebp]
        push ecx
        push eax
        mov ecx, esi
        call ext_00747FA0
        cmp bl, 1
        je L_1b6
        mov edx, dword ptr [esi + 0x230]
        mov ecx, dword ptr [esp + 0x4c]
        mov eax, dword ptr [edx + 4*ebp]
        push eax
        call ext_006C27E0
L_1b6:
        mov edi, dword ptr [esp + 0x10]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne L_1e7
        cmp bl, 1
        jne L_201
        mov ecx, dword ptr [esi + 0x248]
        lea edx, [esp + 0x14]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        cmp al, bl
        je L_214
        jmp L_201
L_1e7:
        mov ecx, dword ptr [esi + 0x248]
        lea edx, [esp + 0x10]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, esi
        push eax
        call ext_00747FA0
        cmp al, 1
        je L_214
L_201:
        mov eax, dword ptr [esi + 0x248]
        mov ecx, dword ptr [esp + 0x4c]
        mov eax, dword ptr [eax + 4*ebp]
        push eax
L_20f:
        call ext_006C27E0
L_214:
        mov ecx, dword ptr [esi + 0x248]
        mov edx, dword ptr [esi + 0x230]
        mov eax, dword ptr [ecx + 4*ebp]
        mov ecx, dword ptr [edx + 4*ebp]
        push eax
        call ext_006C2B60
        sub esp, 0x20
        lea eax, [esp + 0x3c]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push eax
        call ext_006D2390
        push ebp
        lea ecx, [esi + 0x220]
        mov byte ptr [esp + 0x68], 0
        call ext_0078CB70
        mov ecx, eax
        call ext_006C2C60
        mov eax, dword ptr [esi + 0x250]
        inc ebp
        cmp ebp, eax
        jb L_loop
L_end:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x44], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov fs:[0], ecx
        pop ebx
        add esp, 0x38
        ret 4
        nop
        nop
    }
}

// [0x0074B440] sub_0074B440 (688 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA4D0();
extern "C" void ext_006BA570();
extern "C" int mem_0092521C;
extern "C" __declspec(naked) void __fastcall fn_0074B440(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bf346
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x104
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0xe]
        push edi
        push eax
        mov edi, ecx
        push 0xaae648
        push esi
        mov dword ptr [esp + 0x28], edi
        call dword ptr [mem_0092521C]
        add esp, 0xc
        lea ecx, [esp + 0x78]
        push esi
        call ext_006B9D80
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x118], 0x0
        call ext_006B9D10
        push 0xaa9490
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0x11c], 0x1
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        call ext_006BA4D0
        mov ebx, eax
        cmp ebx, 0x2
        jge L_50a
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x118], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0x118], -0x1
        call ext_006B9D70
        xor al, al
        mov ecx, dword ptr [esp + 0x110]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
L_50a:
        mov esi, 0xaae644
        lea eax, [esp + 0x12]
L_513:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_537
        test cl, cl
        je L_533
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_537
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_513
L_533:
        xor eax, eax
        jmp L_53c
L_537:
        sbb eax, eax
        sbb eax, -0x1
L_53c:
        test eax, eax
        jne L_5d5
        mov esi, 0x1
        cmp ebx, esi
        jle L_6a3
        add edi, 0xa0
L_557:
        push 0xaa9490
        lea eax, [esp + 0xc8]
        push esi
        push eax
        lea ecx, [esp + 0x84]
        call ext_006BA570
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x11c], 0x2
        call ext_006B9E60
        lea ecx, [esp + 0xc4]
        mov byte ptr [esp + 0x118], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0x14]
        push ecx
        push 0xaae640
        lea ecx, [esp + 0x34]
        call ext_006E7460
        push eax
        call dword ptr [mem_0092521C]
        fld qword ptr [esp + 0x20]
        mov eax, dword ptr [edi]
        add esp, 0xc
        lea edx, [esp + 0x1c]
        mov ecx, edi
        push edx
        push eax
        fstp qword ptr [esp + 0x24]
        call ext_006D2170
        inc esi
        cmp esi, ebx
        jl L_557
        jmp L_6a3
L_5d5:
        mov edi, 0xaae63c
        lea esi, [esp + 0x12]
L_5de:
        mov cl, byte ptr [esi]
        mov dl, byte ptr [edi]
        mov al, cl
        cmp cl, dl
        jne L_606
        test al, al
        je L_602
        mov dl, byte ptr [esi + 0x1]
        mov cl, byte ptr [edi + 0x1]
        mov al, dl
        cmp dl, cl
        jne L_606
        add esi, 0x2
        add edi, 0x2
        test al, al
        jne L_5de
L_602:
        xor eax, eax
        jmp L_60b
L_606:
        sbb eax, eax
        sbb eax, -0x1
L_60b:
        test eax, eax
        jne L_6a3
        mov esi, 0x1
        cmp ebx, esi
        jle L_6a3
        mov eax, dword ptr [esp + 0x1c]
        lea edi, [eax + 0xb8]
L_62a:
        push 0xaa9490
        lea ecx, [esp + 0xc8]
        push esi
        push ecx
        lea ecx, [esp + 0x84]
        call ext_006BA570
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x11c], 0x3
        call ext_006B9E60
        lea ecx, [esp + 0xc4]
        mov byte ptr [esp + 0x118], 0x1
        call ext_006B9D70
        lea edx, [esp + 0x14]
        lea ecx, [esp + 0x2c]
        push edx
        push 0xaae640
        call ext_006E7460
        push eax
        call dword ptr [mem_0092521C]
        fld qword ptr [esp + 0x20]
        mov eax, dword ptr [edi]
        add esp, 0xc
        lea ecx, [esp + 0x24]
        push ecx
        push eax
        fstp qword ptr [esp + 0x2c]
        mov ecx, edi
        call ext_006D2170
        inc esi
        cmp esi, ebx
        jl L_62a
L_6a3:
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x118], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0x118], -0x1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x110]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00743750] sub_00743750 (851 bytes)
extern "C" void ext_0072CF30();
extern "C" void ext_006D2130();

extern "C" __declspec(naked) void __fastcall fn_00743750(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BECAE
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
        lea edi, [esi + 0xe0]
        xor ebx, ebx
        push 0x4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x20], ebx
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0xf8]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x1
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x114]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x2
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x12c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x3
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x150]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x4
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x170]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x5
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x188]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x6
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x1a0]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x7
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x1bc]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x8
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x1d8]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x9
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x1f0]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xa
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x208]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xb
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x220]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xc
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x238]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xd
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x254]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xe
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x270]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xf
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x28c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x10
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x2a4]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x11
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x2bc]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x12
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x2d4]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x13
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x2ec]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x14
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x304]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x15
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov eax, esi
        mov dword ptr [edi + 0x14], ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0x00996B60
        mov dword ptr [esi + 0xb8], ebx
        mov dword ptr [esi + 0xbc], ebx
        mov dword ptr [esi + 0xc0], ebx
        mov dword ptr [esi + 0x148], ebx
        mov dword ptr [esi + 0xdc], ebx
        mov dword ptr [esi + 0x110], ebx
        mov dword ptr [esi + 0x288], ebx
        mov dword ptr [esi + 0x250], ebx
        mov dword ptr [esi + 0x1b8], ebx
        mov dword ptr [esi + 0x144], ebx
        mov dword ptr [esi + 0x1d4], ebx
        mov dword ptr [esi + 0x16c], ebx
        mov dword ptr [esi + 0x26c], ebx
        mov dword ptr [esi + 0x14c], ebx
        mov dword ptr [esi + 0x168], ebx
        mov byte ptr [esi + 0xac], 0x1
        mov byte ptr [esi + 0xad], 0x1
        mov byte ptr [esi + 0xae], 0x1
        mov byte ptr [esi + 0xaf], 0x1
        mov byte ptr [esi + 0xb0], 0x1
        mov byte ptr [esi + 0xb1], 0x1
        mov byte ptr [esi + 0xb2], bl
        mov byte ptr [esi + 0xb3], 0x1
        mov byte ptr [esi + 0xb4], 0x1
        mov byte ptr [esi + 0xb5], bl
        mov byte ptr [esi + 0xb6], 0x1
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0074FA50] sub_0074FA50 (853 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA220();
extern "C" void ext_006BC370();
extern "C" void ext_006C27E0();
extern "C" void ext_006D3560();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_006FE4B0();
extern "C" void ext_0074FDB0();
extern "C" void ext_00750110();
extern "C" void ext_00750570();
extern "C" void ext_00750940();
extern "C" void ext_007515F0();
extern "C" void ext_007AA910();
extern "C" void ext_007AC510();
extern "C" int mem_00B61260;
extern "C" int mem_00925184;

extern "C" __declspec(naked) void __fastcall fn_0074FA50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov ebp, ecx
        push 0x4d8
        mov byte ptr [esp + 0x17], bl
        mov dword ptr [esp + 0x18], ebx
        call ext_006A5C62
        mov edi, eax
        mov eax, dword ptr [ebp]
        add esp, 0x4
        mov ecx, ebp
        call dword ptr [eax + 0xc]
        test al, al
        jne L_AB
        push 0x3
        lea ecx, [ebp + 0x8]
        call ext_006E7440
    L_A9D:
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_D8E
    L_AB:
        mov esi, dword ptr [esp + 0x78]
        cmp esi, ebx
        je L_D84
        mov eax, dword ptr [mem_00B61260]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test al, al
        je L_D84
        mov ecx, esi
        call ext_007AC510
        push 0x4
        mov ecx, esi
        mov dword ptr [ebp + 0x120], eax
        call ext_007AA910
        cmp eax, 0x1
        push 0x1
        sete cl
        mov byte ptr [ebp + 0x124], cl
        mov ecx, esi
        call ext_007AA910
        mov ecx, dword ptr [esp + 0x74]
        cmp eax, 0x1
        sete al
        cmp al, bl
        mov byte ptr [ebp + 0x125], al
        je L_B6F
        call ext_006BC370
        push ebx
        lea ecx, [ebp + 0xb0]
        mov esi, eax
        call ext_006E7460
        lea edx, [esp + 0x1c]
        push eax
        push edx
        call ext_006FE4B0
        add esp, 0xc
        push 0x00AAE7A4
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x70], ebx
        call ext_006BA220
        lea ecx, [esp + 0x18]
        call ext_006E7460
        mov ecx, dword ptr [ebp + 0x4]
        push eax
        call ext_006D3560
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x78], eax
        call ext_006C27E0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call ext_006B9D70
        jmp L_B78
    L_B6F:
        call ext_006BC370
        mov dword ptr [esp + 0x74], eax
    L_B78:
        lea eax, [esp + 0x14]
        push edi
        push eax
        mov ecx, ebp
        call ext_007515F0
        test al, al
        je L_A9D
        mov esi, 0x00AAE818
        mov eax, edi
    L_S1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_N1
        cmp cl, bl
        je L_E1
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_N1
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne L_S1
    L_E1:
        xor eax, eax
        jmp L_D1
    L_N1:
        sbb eax, eax
        sbb eax, -1
    L_D1:
        cmp eax, ebx
        je L_CF9
        cmp dword ptr [esp + 0x14], ebx
        jne L_B78
        mov esi, 0x00AAE810
        mov eax, edi
    L_S2:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_N2
        cmp cl, bl
        je L_E2
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_N2
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne L_S2
    L_E2:
        xor eax, eax
        jmp L_D2
    L_N2:
        sbb eax, eax
        sbb eax, -1
    L_D2:
        cmp eax, ebx
        jne L_B78
        lea eax, [esp + 0x14]
        push edi
        push eax
        mov ecx, ebp
        call ext_007515F0
        test al, al
        je L_A9D
        cmp dword ptr [esp + 0x14], 0x2
        jne L_B78
        mov esi, 0x00AAE808
        mov eax, edi
    L_S3:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_N3
        cmp cl, bl
        je L_E3
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_N3
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne L_S3
    L_E3:
        xor eax, eax
        jmp L_D3
    L_N3:
        sbb eax, eax
        sbb eax, -1
    L_D3:
        cmp eax, ebx
        jne L_C69
        mov ecx, ebp
        call ext_0074FDB0
        cmp dword ptr [esp + 0x14], 0x2
        jne L_B78
    L_C69:
        mov esi, 0x00AAE800
        mov eax, edi
    L_S4:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_N4
        cmp cl, bl
        je L_E4
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_N4
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne L_S4
    L_E4:
        xor eax, eax
        jmp L_D4
    L_N4:
        sbb eax, eax
        sbb eax, -1
    L_D4:
        cmp eax, ebx
        jne L_CC0
        mov eax, dword ptr [ebp + 0xac]
        push eax
        call dword ptr [mem_00925184]
        mov dword ptr [ebp + 0x100], eax
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x4
        cmp eax, 0x2
        jne L_B78
    L_CC0:
        mov esi, 0x00AAE7F4
        mov eax, edi
    L_S5:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_N5
        cmp cl, bl
        je L_E5
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_N5
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne L_S5
    L_E5:
        xor eax, eax
        jmp L_D5
    L_N5:
        sbb eax, eax
        sbb eax, -1
    L_D5:
        cmp eax, ebx
        je L_D09
        jmp L_B78
    L_CF9:
        push edi
        call ext_006A5C5C
        add esp, 0x4
        mov al, 0x1
        jmp L_D90
    L_D09:
        mov eax, dword ptr [ebp + 0x120]
        cmp eax, 0x1
        jne L_D2F
        mov eax, dword ptr [esp + 0x74]
        mov ecx, ebp
        push eax
        call ext_00750110
        push edi
        mov bl, al
        call ext_006A5C5C
        add esp, 0x4
        mov al, bl
        jmp L_D90
    L_D2F:
        cmp eax, ebx
        jne L_D4E
        mov ecx, dword ptr [esp + 0x74]
        push ecx
        mov ecx, ebp
        call ext_00750570
        push edi
        mov bl, al
        call ext_006A5C5C
        add esp, 0x4
        mov al, bl
        jmp L_D90
    L_D4E:
        cmp eax, 0x2
        jne L_D73
        mov edx, dword ptr [esp + 0x74]
        push 0x00AAE7F4
        push edx
        mov ecx, ebp
        call ext_00750940
        push edi
        mov bl, al
        call ext_006A5C5C
        add esp, 0x4
        mov al, bl
        jmp L_D90
    L_D73:
        mov bl, byte ptr [esp + 0x13]
        push edi
        call ext_006A5C5C
        add esp, 0x4
        mov al, bl
        jmp L_D90
    L_D84:
        push 0x6
        lea ecx, [ebp + 0x8]
        call ext_006E7440
    L_D8E:
        xor al, al
    L_D90:
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0x8
    }
}

// [0x0074FDB0] sub_0074FDB0 (864 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_007515F0();
extern "C" void ext_00782D90();
extern "C" __declspec(naked) void __fastcall fn_0074FDB0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x14], ecx
        push 0x4d8
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A5C62
        push 0x4d8
        mov ebp, eax
        call ext_006A5C62
        mov edi, dword ptr [esp + 0x18]
        add esp, 0x8
        mov ebx, eax
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x1
L_FDF2:
        test edi, edi
        jne L_FE2E
        mov esi, 0xaae834
        mov eax, ebp
L_FDFD:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_FE21
        test cl, cl
        je L_FE1D
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_FE21
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_FDFD
L_FE1D:
        xor eax, eax
        jmp L_FE26
L_FE21:
        sbb eax, eax
        sbb eax, -0x1
L_FE26:
        test eax, eax
        je L_D7
L_FE2E:
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x10]
        push ebp
        push eax
        call ext_007515F0
        test al, al
        je L_F0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        jne L_FE2E
        mov esi, 0xaae82c
        mov eax, ebp
L_FE54:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_FE78
        test cl, cl
        je L_FE74
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_FE78
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_FE54
L_FE74:
        xor eax, eax
        jmp L_FE7D
L_FE78:
        sbb eax, eax
        sbb eax, -0x1
L_FE7D:
        test eax, eax
        jne L_FDF2
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x10]
        push ebp
        push eax
        call ext_007515F0
        test al, al
        je L_F0
        mov edi, dword ptr [esp + 0x10]
        cmp edi, 0x2
        jne L_0082
        mov esi, 0xaae824
        mov eax, ebp
L_FEB0:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_FED4
        test cl, cl
        je L_FED0
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_FED4
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_FEB0
L_FED0:
        xor eax, eax
        jmp L_FED9
L_FED4:
        sbb eax, eax
        sbb eax, -0x1
L_FED9:
        test eax, eax
        jne L_0082
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x10]
        push ebp
        push eax
        call ext_007515F0
        test al, al
        je L_F0
L_FEF8:
        mov edi, dword ptr [esp + 0x10]
L_FEFC:
        test edi, edi
        jne L_006A
        mov esi, 0xaae81c
        mov eax, ebp
L_FF0B:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_FF2F
        test cl, cl
        je L_FF2B
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_FF2F
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_FF0B
L_FF2B:
        xor eax, eax
        jmp L_FF34
L_FF2F:
        sbb eax, eax
        sbb eax, -0x1
L_FF34:
        test eax, eax
        je L_FDF2
        mov esi, 0xaae824
        mov eax, ebp
L_FF43:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_FF67
        test cl, cl
        je L_FF63
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_FF67
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_FF43
L_FF63:
        xor eax, eax
        jmp L_FF6C
L_FF67:
        sbb eax, eax
        sbb eax, -0x1
L_FF6C:
        test eax, eax
        jne L_006A
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x10]
        push ebp
        push eax
        call ext_007515F0
        test al, al
        je L_F0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je L_0018
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x92
        __asm _emit 0x00
L_FF9D:
        mov eax, edi
        sub eax, 0x2
        je L_FFD4
        sub eax, 0x3c
        je L_FFC2
        sub eax, 0xe4
        jne L_FFF9
        lea ecx, [esp + 0x1c]
        push ecx
        push 0xaa86a4
        push ebp
        call esi
        add esp, 0xc
        jmp L_FFF9
L_FFC2:
        lea edx, [esp + 0x18]
        push edx
        push 0xaa86a4
        push ebp
        call esi
        add esp, 0xc
        jmp L_FFF9
L_FFD4:
        mov edi, ebp
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x92
        __asm _emit 0x00
L_FFF9:
        lea ecx, [esp + 0x10]
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        call ext_007515F0
        test al, al
        je L_F0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        jne L_FF9D
L_0018:
        mov esi, 0xb5d2c0
        mov eax, ebx
L_001F:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_0043
        test cl, cl
        je L_003F
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_0043
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_001F
L_003F:
        xor eax, eax
        jmp L_0048
L_0043:
        sbb eax, eax
        sbb eax, -0x1
L_0048:
        test eax, eax
        je L_FEFC
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ebx
        add ecx, 0x128
        call ext_00782D90
        jmp L_FEF8
L_006A:
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [esp + 0x10]
        push ebp
        push edx
        call ext_007515F0
        test al, al
        je L_F0
        jmp L_FEF8
L_0082:
        test edi, edi
        jne L_00BE
        mov esi, 0xaae81c
        mov eax, ebp
L_008D:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_00B1
        test cl, cl
        je L_00AD
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_00B1
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_008D
L_00AD:
        xor eax, eax
        jmp L_00B6
L_00B1:
        sbb eax, eax
        sbb eax, -0x1
L_00B6:
        test eax, eax
        je L_FDF2
L_00BE:
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x10]
        push ebp
        push eax
        call ext_007515F0
        test al, al
        je L_F0
        mov edi, dword ptr [esp + 0x10]
        jmp L_0082
L_D7:
        push ebp
        call ext_006A5C5C
        push ebx
        call ext_006A5C5C
        add esp, 0x8
        mov al, 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_F0:
        push ebp
        call ext_006A5C5C
        push ebx
        call ext_006A5C5C
        add esp, 0x8
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x0074A300] sub_0074A300 (880 bytes)
extern "C" void ext_006C31E0();
extern "C" void ext_006C9500();
extern "C" void ext_006C9B70();
extern "C" void ext_006CA020();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_006DA370();
extern "C" void ext_006DC480();
extern "C" void ext_00700B10();
extern "C" void ext_007AB2F0();
extern "C" void ext_007AB370();
extern "C" void ext_007AB450();
extern "C" void ext_007AB740();
extern "C" __declspec(naked) void __fastcall fn_0074A300(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008BF276
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xdc
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x50], esi
        mov dword ptr [esp + 0x2c], 0x80000000
        call ext_006D2370
        mov ebx, dword ptr [ebp + 0xc]
        xor edi, edi
        cmp ebx, 1
        mov dword ptr [esp + 0xf0], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        jbe L_544
        mov al, byte ptr [esi + 0xae]
        test al, al
        je L_544
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov ecx, eax
        call ext_006C9500
        mov esi, eax
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_006CA500
        test ebx, ebx
        jbe L_4DF
        mov ecx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x28], eax
        lea esi, [ecx + 0x8]
L_398:
        mov eax, dword ptr [esi - 0x8]
        mov ecx, dword ptr [esp + 0x2c]
        cmp eax, ecx
        jle L_4C4
        mov edx, dword ptr [esp + 0x28]
        push 0x6
        push 0x0
        push eax
        fld dword ptr [edx]
        push 0x0
        push 0x0
        fstp qword ptr [esp + 0x68]
        push 0x0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x44], eax
        call ext_006DA370
        xor ebx, ebx
        lea ecx, [esp + 0x30]
        push ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 0x1
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 0x2
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 0x4], ebx
        mov bx, word ptr [esi - 0x4]
        test bl, 0x1
        je L_421
        fld dword ptr [esi]
        push 0x0
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
L_421:
        test bl, 0x2
        je L_445
        fld dword ptr [esi + 0x4]
        push 0x1
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
L_445:
        test bl, 0x4
        je L_469
        fld dword ptr [esi + 0x8]
        push 0x2
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
L_469:
        mov ecx, dword ptr [esp + 0x10]
        push edi
        call ext_006CA020
        push 0x2
        lea ecx, [esp + 0x34]
        mov ebx, eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        fstp dword ptr [esp]
        fld qword ptr [esp + 0x60]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006C9B70
        mov ebx, dword ptr [ebp + 0xc]
L_4C4:
        mov edx, dword ptr [esp + 0x28]
        inc edi
        add edx, 0x4
        add esi, 0x1c
        cmp edi, ebx
        mov dword ptr [esp + 0x28], edx
        jb L_398
        mov esi, dword ptr [esp + 0x10]
L_4DF:
        push ebx
        mov ecx, esi
        call ext_006CA540
        mov edx, dword ptr [esp + 0x50]
        mov al, byte ptr [edx + 0xb2]
        test al, al
        je L_63F
        lea ecx, [esp + 0x60]
        call ext_007AB2F0
        push 0x3ff00000
        push 0x0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xf8], 0x1
        call ext_007AB740
        lea eax, [esp + 0x10]
        push 0x1
        push eax
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x18], esi
        call ext_007AB450
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xf0], 0x0
        call ext_007AB370
        jmp L_63F
L_544:
        mov esi, dword ptr [ebp + 0x8]
        mov ecx, esi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9500
        mov ebx, eax
        push 0x1
        mov ecx, ebx
        call ext_006CA500
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov edi, eax
        mov eax, dword ptr [ebp + 0x14]
        test eax, eax
        push 0x2
        lea ecx, [esp + 0x34]
        je L_5D3
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        fstp dword ptr [esp]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C31E0
        test eax, eax
        je L_636
        mov edx, dword ptr [ebp + 0x14]
        sub esp, 0x8
        fld dword ptr [edx]
        fstp qword ptr [esp]
        jmp L_628
L_5D3:
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push 0x42340000
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C31E0
        test eax, eax
        je L_636
        push 0x40468000
        push 0x0
L_628:
        mov ecx, esi
        call ext_006C31E0
        mov ecx, eax
        call ext_00700B10
L_636:
        push 0x1
        mov ecx, ebx
        call ext_006CA540
L_63F:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xf0], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xe8]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x0074A9E0] sub_0074A9E0 (880 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006DC480();
extern "C" void ext_006C9570();
extern "C" void ext_006CA500();
extern "C" void ext_006DA370();
extern "C" void ext_006D23F0();
extern "C" void ext_006CA020();
extern "C" void ext_006C9B70();
extern "C" void ext_006CA540();
extern "C" void ext_007AB2F0();
extern "C" void ext_007AB740();
extern "C" void ext_007AB450();
extern "C" void ext_007AB370();
extern "C" void ext_006D80A0();
extern "C" void ext_006C3180();
extern "C" void ext_0071CDA0();

extern "C" __declspec(naked) void __fastcall fn_0074A9E0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x008BF276
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xdc
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x50], esi
        mov dword ptr [esp + 0x2c], 0x80000000
        call ext_006D2370
        mov ebx, dword ptr [ebp + 0xc]
        xor edi, edi
        cmp ebx, 0x1
        mov dword ptr [esp + 0xf0], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        jbe J_else
        mov al, byte ptr [esi + 0xae]
        test al, al
        je J_else
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov ecx, eax
        call ext_006C9570
        mov esi, eax
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_006CA500
        test ebx, ebx
        jbe J_after_loop
        mov ecx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x28], eax
        lea esi, [ecx + 0x8]
    J_loop:
        mov eax, dword ptr [esi - 0x8]
        mov ecx, dword ptr [esp + 0x2c]
        cmp eax, ecx
        jle J_loop_cont
        mov edx, dword ptr [esp + 0x28]
        push 0x6
        push 0x0
        push eax
        fld dword ptr [edx]
        push 0x0
        push 0x0
        fstp qword ptr [esp + 0x68]
        push 0x0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x44], eax
        call ext_006DA370
        xor ebx, ebx
        lea ecx, [esp + 0x30]
        push ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 0x1
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 0x2
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 0x4], ebx
        mov bx, word ptr [esi - 0x4]
        test bl, 0x1
        je J_skip1
        fld dword ptr [esi]
        push 0x0
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
    J_skip1:
        test bl, 0x2
        je J_skip2
        fld dword ptr [esi + 0x4]
        push 0x1
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
    J_skip2:
        test bl, 0x4
        je J_skip3
        fld dword ptr [esi + 0x8]
        push 0x2
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
    J_skip3:
        mov ecx, dword ptr [esp + 0x10]
        push edi
        call ext_006CA020
        push 0x2
        lea ecx, [esp + 0x34]
        mov ebx, eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        fstp dword ptr [esp]
        fld qword ptr [esp + 0x60]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006C9B70
        mov ebx, dword ptr [ebp + 0xc]
    J_loop_cont:
        mov edx, dword ptr [esp + 0x28]
        inc edi
        add edx, 0x4
        add esi, 0x1c
        cmp edi, ebx
        mov dword ptr [esp + 0x28], edx
        jb J_loop
        mov esi, dword ptr [esp + 0x10]
    J_after_loop:
        push ebx
        mov ecx, esi
        call ext_006CA540
        mov edx, dword ptr [esp + 0x50]
        mov al, byte ptr [edx + 0xb2]
        test al, al
        je J_end
        lea ecx, [esp + 0x60]
        call ext_007AB2F0
        push 0x3ff00000
        push 0x0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xf8], 0x1
        call ext_007AB740
        lea eax, [esp + 0x10]
        push 0x1
        push eax
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x18], esi
        call ext_007AB450
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xf0], 0x0
        call ext_007AB370
        jmp J_end
    J_else:
        mov esi, dword ptr [ebp + 0x8]
        mov ecx, esi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9570
        mov ebx, eax
        push 0x1
        mov ecx, ebx
        call ext_006CA500
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov edi, eax
        mov eax, dword ptr [ebp + 0x14]
        test eax, eax
        push 0x2
        lea ecx, [esp + 0x34]
        je J_else2
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        fstp dword ptr [esp]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C3180
        test eax, eax
        je J_74AD10
        mov edx, dword ptr [ebp + 0x14]
        sub esp, 0x8
        fld dword ptr [edx]
        fstp qword ptr [esp]
        jmp J_74AD02
    J_else2:
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 0x1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0x0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push 0x0
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C3180
        test eax, eax
        je J_74AD10
        push 0x0
        push 0x0
    J_74AD02:
        mov ecx, esi
        call ext_006C3180
        mov ecx, eax
        call ext_0071CDA0
    J_74AD10:
        push 0x1
        mov ecx, ebx
        call ext_006CA540
    J_end:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xf0], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xe8]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x0074A670] sub_0074A670 (880 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006DC480();
extern "C" void ext_006C9520();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CA020();
extern "C" void ext_006D23F0();
extern "C" void ext_006DA370();
extern "C" void ext_006C9B70();
extern "C" void ext_006C3180();
extern "C" void ext_0071CC10();
extern "C" void ext_006D80A0();
extern "C" void ext_007AB2F0();
extern "C" void ext_007AB740();
extern "C" void ext_007AB450();
extern "C" void ext_007AB370();

extern "C" __declspec(naked) void __fastcall fn_0074A670(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008BF276
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xdc
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x50], esi
        mov dword ptr [esp + 0x2c], 0x80000000
        call ext_006D2370
        mov ebx, dword ptr [ebp + 0xc]
        xor edi, edi
        cmp ebx, 1
        mov dword ptr [esp + 0xf0], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        jbe a670_zero
        mov al, byte ptr [esi + 0xae]
        test al, al
        je a670_zero
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov ecx, eax
        call ext_006C9520
        mov esi, eax
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_006CA500
        test ebx, ebx
        jbe a670_post
        mov ecx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x28], eax
        lea esi, [ecx + 8]
a670_loop:
        mov eax, dword ptr [esi - 8]
        mov ecx, dword ptr [esp + 0x2c]
        cmp eax, ecx
        jle a670_next
        mov edx, dword ptr [esp + 0x28]
        push 6
        push 0
        push eax
        fld dword ptr [edx]
        push 0
        push 0
        fstp qword ptr [esp + 0x68]
        push 0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x44], eax
        call ext_006DA370
        xor ebx, ebx
        lea ecx, [esp + 0x30]
        push ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 1
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        push 2
        lea ecx, [esp + 0x34]
        mov dword ptr [eax + 0x4], ebx
        call ext_006D23F0
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 0x4], ebx
        mov bx, word ptr [esi - 4]
        test bl, 1
        je a670_b1
        fld dword ptr [esi]
        push 0
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
a670_b1:
        test bl, 2
        je a670_b2
        fld dword ptr [esi + 0x4]
        push 1
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
a670_b2:
        test bl, 4
        je a670_b3
        fld dword ptr [esi + 0x8]
        push 2
        lea ecx, [esp + 0x34]
        fstp qword ptr [esp + 0x20]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
a670_b3:
        mov ecx, dword ptr [esp + 0x10]
        push edi
        call ext_006CA020
        push 2
        lea ecx, [esp + 0x34]
        mov ebx, eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        fstp dword ptr [esp]
        fld qword ptr [esp + 0x60]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006C9B70
        mov ebx, dword ptr [ebp + 0xc]
a670_next:
        mov edx, dword ptr [esp + 0x28]
        inc edi
        add edx, 4
        add esi, 0x1c
        cmp edi, ebx
        mov dword ptr [esp + 0x28], edx
        jb a670_loop
        mov esi, dword ptr [esp + 0x10]
a670_post:
        push ebx
        mov ecx, esi
        call ext_006CA540
        mov edx, dword ptr [esp + 0x50]
        mov al, byte ptr [edx + 0xb2]
        test al, al
        je a670_end
        lea ecx, [esp + 0x60]
        call ext_007AB2F0
        push 0x3ff00000
        push 0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xf8], 1
        call ext_007AB740
        lea eax, [esp + 0x10]
        push 1
        push eax
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x18], esi
        call ext_007AB450
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xf0], 0
        call ext_007AB370
        jmp a670_end
a670_zero:
        mov esi, dword ptr [ebp + 0x8]
        mov ecx, esi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9520
        mov ebx, eax
        push 1
        mov ecx, ebx
        call ext_006CA500
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov edi, eax
        mov eax, dword ptr [ebp + 0x14]
        test eax, eax
        push 2
        lea ecx, [esp + 0x34]
        je a670_z2
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        fstp dword ptr [esp]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C3180
        test eax, eax
        je a670_z4
        mov edx, dword ptr [ebp + 0x14]
        sub esp, 8
        fld dword ptr [edx]
        fstp qword ptr [esp]
        jmp a670_z5
a670_z2:
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push 0x42340000
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9B70
        mov ecx, esi
        call ext_006C3180
        test eax, eax
        je a670_z4
        push 0x40468000
        push 0
a670_z5:
        mov ecx, esi
        call ext_006C3180
        mov ecx, eax
        call ext_0071CC10
a670_z4:
        push 1
        mov ecx, ebx
        call ext_006CA540
a670_end:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xf0], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xe8]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x007415F0] sub_007415F0 (1056 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B99C0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006D2390();
extern "C" void ext_006D23F0();
extern "C" void ext_006D2A90();
extern "C" void ext_006D2BD0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006FC9A0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();
extern "C" void ext_00726BE0();
extern "C" void ext_0078D720();

extern "C" __declspec(naked) void __fastcall fn_007415F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x008BEA0E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x4
        push 0x10
        lea ecx, [esp + 0x28]
        call ext_006D2130
        lea eax, [esp + 0x30]
        mov dword ptr [esp + 0x34], eax
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0x40], 0x0
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_7419E3
        mov ecx, dword ptr [esi + 0xac]
        push 0x00AAE518
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_7416A7
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726900
        test eax, eax
        jle L_741699
        mov edi, eax
L_741671:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726AE0
        mov edx, dword ptr [esp + 0x20]
        lea ecx, [esp + 0x10]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x18], eax
        call ext_006D2170
        dec edi
        jne L_741671
L_741699:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
L_7416A7:
        mov ecx, dword ptr [esi + 0xac]
        push 0x00AADFB8
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_7417DC
        mov ecx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0xc]
        lea ebx, [ecx + 0x28]
        lea edi, [eax + 0x28]
        mov ecx, ebx
        call ext_006D2250
        mov edx, dword ptr [edi + 0x8]
        mov dword ptr [ebx + 0x8], edx
        mov eax, dword ptr [edi]
        xor ebx, ebx
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        jle L_741712
L_7416E7:
        push ebx
        mov ecx, edi
        call ext_006D2A90
        sub esp, 0x20
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push eax
        call ext_006D2390
        mov eax, dword ptr [ebp + 0x8]
        lea ecx, [eax + 0x28]
        call ext_006D2BD0
        mov eax, dword ptr [esp + 0xc]
        inc ebx
        cmp ebx, eax
        jl L_7416E7
L_741712:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726900
        mov ecx, eax
        mov eax, 0x55555556
        imul ecx
        mov ecx, edx
        xor ebx, ebx
        shr ecx, 0x1f
        add edx, ecx
        test edx, edx
        mov dword ptr [esp + 0x14], edx
        jle L_7417CE
L_73E:
        mov edx, dword ptr [esp + 0x30]
        mov ecx, dword ptr [ebp + 0x8]
        lea eax, [edx + 4*ebx]
        mov dword ptr [esp + 0xc], eax
        call ext_006DEEC0
        mov ecx, dword ptr [esp + 0xc]
        mov edi, eax
        push 0x0
        mov edx, dword ptr [ecx]
        shl edx, 0x5
        add edi, edx
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0xc], eax
        add ecx, 0x4
        call ext_00726BE0
        mov eax, dword ptr [esp + 0xc]
        push 0x1
        mov ecx, edi
        fadd qword ptr [eax]
        fstp qword ptr [eax]
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0xc], eax
        add ecx, 0x4
        call ext_00726BE0
        mov eax, dword ptr [esp + 0xc]
        push 0x2
        mov ecx, edi
        fadd qword ptr [eax]
        fstp qword ptr [eax]
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov edi, eax
        add ecx, 0x4
        call ext_00726BE0
        fadd qword ptr [edi]
        mov eax, dword ptr [esp + 0x14]
        inc ebx
        cmp ebx, eax
        fstp qword ptr [edi]
        jl L_73E
L_7417CE:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
L_7417DC:
        mov ecx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 0x4
        jne L_7419D5
        mov ebx, dword ptr [ebp + 0x8]
        push 0x0
        mov ecx, ebx
        call ext_006FDF70
        mov edi, eax
        test edi, edi
        mov dword ptr [esp + 0xc], edi
        jne L_741817
        mov ecx, ebx
        call ext_006FDE80
        push eax
        mov ecx, ebx
        call ext_006FDF70
        mov dword ptr [esp + 0xc], eax
        mov edi, eax
L_741817:
        mov ecx, edi
        call ext_006B99C0
        mov ebx, eax
        test ebx, ebx
        jne L_741882
        push 0x38
        call ext_006A5C62
        mov ebx, eax
        add esp, 0x4
        mov dword ptr [esp + 0x18], ebx
        test ebx, ebx
        mov byte ptr [esp + 0x40], 0x1
        je L_741873
        lea edi, [ebx + 0x8]
        push 0x20
        push 0x10
        mov ecx, edi
        mov dword ptr [ebx], 0x0
        mov dword ptr [ebx + 0x4], 0x0
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        push 0x10
        lea ecx, [ebx + 0x20]
        mov byte ptr [esp + 0x44], 0x2
        call ext_0078D720
        mov edi, dword ptr [esp + 0xc]
        jmp L_741875
L_741873:
        xor ebx, ebx
L_741875:
        push ebx
        mov ecx, edi
        mov byte ptr [esp + 0x44], 0x0
        call ext_006FC9A0
L_741882:
        mov ecx, dword ptr [ebp + 0xc]
        lea edi, [ebx + 0x8]
        mov dword ptr [ebx], 0x1
        push 0x0
        mov dword ptr [ebx + 0x4], 0x0
        mov dword ptr [esp + 0x1c], edi
        call ext_006FDF70
        mov ecx, eax
        call ext_006B99C0
        mov ecx, edi
        lea ebx, [eax + 0x8]
        call ext_006D2250
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0xc], 0x0
        mov dword ptr [edi + 0x8], edx
        mov eax, dword ptr [ebx]
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jle L_7418FC
L_7418C9:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, ebx
        push eax
        call ext_006D2A90
        sub esp, 0x20
        mov ecx, esp
        mov dword ptr [esp + 0x3c], esp
        push eax
        call ext_006D2390
        mov ecx, edi
        call ext_006D2BD0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0xc], eax
        jl L_7418C9
L_7418FC:
        cmp dword ptr [edi], 0x0
        je L_7419D5
        mov ecx, dword ptr [esi + 0xac]
        push 0x00AADC44
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_7419D5
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726900
        mov ecx, eax
        mov eax, 0x55555556
        imul ecx
        mov ecx, edx
        xor ebx, ebx
        shr ecx, 0x1f
        add edx, ecx
        test edx, edx
        mov dword ptr [esp + 0xc], edx
        jle L_7419C7
L_741948:
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x18]
        push 0x0
        mov edi, dword ptr [edx + 4*ebx]
        mov ecx, dword ptr [eax + 0x10]
        shl edi, 0x5
        add edi, ecx
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0x14], eax
        add ecx, 0x4
        call ext_00726BE0
        mov eax, dword ptr [esp + 0x14]
        push 0x1
        mov ecx, edi
        fadd qword ptr [eax]
        fstp qword ptr [eax]
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0x14], eax
        add ecx, 0x4
        call ext_00726BE0
        mov eax, dword ptr [esp + 0x14]
        push 0x2
        mov ecx, edi
        fadd qword ptr [eax]
        fstp qword ptr [eax]
        call ext_006D23F0
        mov ecx, dword ptr [esi + 0xac]
        mov edi, eax
        add ecx, 0x4
        call ext_00726BE0
        fadd qword ptr [edi]
        mov eax, dword ptr [esp + 0xc]
        inc ebx
        cmp ebx, eax
        fstp qword ptr [edi]
        jl L_741948
L_7419C7:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
L_7419D5:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
L_7419E3:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00749EB0] sub_00749EB0 (1104 bytes)
extern "C" void ext_006C3070();
extern "C" void ext_006C31E0();
extern "C" void ext_006C9490();
extern "C" void ext_006C94B0();
extern "C" void ext_006C94D0();
extern "C" void ext_006C9B70();
extern "C" void ext_006CA020();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006D80A0();
extern "C" void ext_006DA370();
extern "C" void ext_006DC480();
extern "C" void ext_00700A40();
extern "C" void ext_00715770();
extern "C" void ext_0077FB40();
extern "C" void ext_0077FC70();
extern "C" void ext_007AB2F0();
extern "C" void ext_007AB370();
extern "C" void ext_007AB450();
extern "C" void ext_007AB740();

extern "C" __declspec(naked) void __fastcall fn_00749EB0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x008BF256
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10c
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x50], esi
        mov dword ptr [esp + 0x24], 0x80000000
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        call ext_0077FB40
        mov dword ptr [esp + 0x120], edi
        mov edi, dword ptr [ebp + 0xc]
        cmp edi, 0x1
        jbe L_else
        mov al, byte ptr [esi + 0xae]
        test al, al
        je L_else
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov esi, eax
        mov ecx, esi
        call ext_006C9490
        mov ebx, eax
        mov ecx, esi
        mov dword ptr [esp + 0x4c], ebx
        call ext_006C94B0
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        call ext_006C94D0
        mov esi, eax
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x30], esi
        call ext_006CA500
        mov ecx, dword ptr [esp + 0x20]
        push edi
        call ext_006CA500
        push edi
        mov ecx, esi
        call ext_006CA500
        xor esi, esi
        test edi, edi
        jbe L_after_loop
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x14]
        add eax, 0x8
        add ecx, 0x8
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x28], ecx
L_loop_top:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx - 0x8]
        mov edx, dword ptr [esp + 0x24]
        cmp eax, edx
        jle L_loop_cont
        fld dword ptr [ecx - 0x8]
        push 0x6
        push 0x0
        fstp qword ptr [esp + 0x80]
        fld dword ptr [ecx - 0x4]
        push eax
        push 0x0
        fstp qword ptr [esp + 0x90]
        fld dword ptr [ecx]
        push 0x0
        push 0x0
        fstp qword ptr [esp + 0xa0]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x3c], eax
        call ext_006DA370
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x30], 0x0
        mov dword ptr [esp + 0x34], 0x0
        mov dword ptr [esp + 0x38], 0x0
        mov ax, word ptr [ecx - 0x4]
        mov dword ptr [esp + 0x3c], 0x0
        test al, 0x1
        mov dword ptr [esp + 0x40], 0x0
        mov dword ptr [esp + 0x44], 0x0
        je L_t1
        fld dword ptr [ecx]
        fstp qword ptr [esp + 0x30]
L_t1:
        test al, 0x2
        je L_t2
        fld dword ptr [ecx + 0x4]
        fstp qword ptr [esp + 0x38]
L_t2:
        test al, 0x4
        je L_t3
        fld dword ptr [ecx + 0x8]
        fstp qword ptr [esp + 0x40]
L_t3:
        push esi
        mov ecx, ebx
        call ext_006CA020
        fld qword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x54]
        fld qword ptr [esp + 0x38]
        mov edi, dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x48]
        fld qword ptr [esp + 0x30]
        mov ebx, dword ptr [esp + 0x48]
        push edi
        fstp dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x20]
        push ebx
        fld qword ptr [esp + 0x80]
        push ecx
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push edx
        push ecx
        mov ecx, eax
        call ext_006C9B70
        mov ecx, dword ptr [esp + 0x20]
        push esi
        call ext_006CA020
        mov edx, dword ptr [esp + 0x1c]
        push edi
        fld qword ptr [esp + 0x84]
        push ebx
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push ecx
        push edx
        mov ecx, eax
        call ext_006C9B70
        mov ecx, dword ptr [esp + 0x2c]
        push esi
        call ext_006CA020
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        fld qword ptr [esp + 0x88]
        push edi
        push ebx
        push ecx
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push edx
        push ecx
        mov ecx, eax
        call ext_006C9B70
        mov ebx, dword ptr [esp + 0x4c]
        mov edi, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [esp + 0x28]
L_loop_cont:
        mov edx, dword ptr [esp + 0x18]
        inc esi
        add ecx, 0xc
        add edx, 0x1c
        cmp esi, edi
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x18], edx
        jb L_loop_top
L_after_loop:
        push edi
        mov ecx, ebx
        call ext_006CA540
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        call ext_006CA540
        push edi
        mov edi, dword ptr [esp + 0x30]
        mov ecx, edi
        call ext_006CA540
        mov edx, dword ptr [esp + 0x50]
        mov al, byte ptr [edx + 0xb2]
        test al, al
        je L_end
        lea ecx, [esp + 0x90]
        call ext_007AB2F0
        push 0x3ff00000
        push 0x0
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x128], 0x1
        call ext_007AB740
        lea eax, [esp + 0x30]
        push 0x3
        push eax
        lea ecx, [esp + 0x98]
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], esi
        mov dword ptr [esp + 0x40], edi
        call ext_007AB450
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0x120], 0x0
        call ext_007AB370
        jmp L_end
L_else:
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov edi, eax
        mov ecx, edi
        call ext_006C9490
        mov ecx, edi
        mov esi, eax
        call ext_006C94B0
        mov ecx, edi
        mov ebx, eax
        call ext_006C94D0
        mov edi, eax
        mov eax, dword ptr [ebp + 0x14]
        test eax, eax
        je L_defvec
        fld dword ptr [eax]
        fstp qword ptr [esp + 0x58]
        fld dword ptr [eax + 0x4]
        fstp qword ptr [esp + 0x60]
        fld dword ptr [eax + 0x8]
        fstp qword ptr [esp + 0x68]
        jmp L_e0
L_defvec:
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        lea ecx, [esp + 0x78]
        call ext_0077FC70
L_e0:
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006C31E0
        test eax, eax
        je L_f202
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006C31E0
        mov ecx, eax
        call ext_00700A40
        jmp L_222
L_f202:
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006C3070
        test eax, eax
        je L_222
        mov ecx, dword ptr [ebp + 0x8]
        lea edx, [esp + 0x58]
        push edx
        call ext_006C3070
        mov ecx, eax
        call ext_00715770
L_222:
        push 0x1
        mov ecx, esi
        call ext_006CA500
        push 0x0
        mov ecx, esi
        call ext_006CA020
        fld qword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push 0x0
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push ecx
        push edx
        mov ecx, eax
        call ext_006C9B70
        push 0x1
        mov ecx, esi
        call ext_006CA540
        push 0x1
        mov ecx, ebx
        call ext_006CA500
        push 0x0
        mov ecx, ebx
        call ext_006CA020
        fld qword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push 0x0
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push ecx
        push edx
        mov ecx, eax
        call ext_006C9B70
        push 0x1
        mov ecx, ebx
        call ext_006CA540
        push 0x1
        mov ecx, edi
        call ext_006CA500
        push 0x0
        mov ecx, edi
        call ext_006CA020
        fld qword ptr [esp + 0x68]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push 0x0
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push ecx
        push edx
        mov ecx, eax
        call ext_006C9B70
        push 0x1
        mov ecx, edi
        call ext_006CA540
L_end:
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x120], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x118]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x00744A20] sub_00744A20 (1312 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BC370();
extern "C" void ext_006BC7D0();
extern "C" void ext_006BC7E0();
extern "C" void ext_006BC800();
extern "C" void ext_006BCE00();
extern "C" void ext_006C27E0();
extern "C" void ext_006C32F0();
extern "C" void ext_006D2370();
extern "C" void ext_006D3560();
extern "C" void ext_006D80A0();
extern "C" void ext_006DA370();
extern "C" void ext_006E7460();
extern "C" void ext_006E7FC0();
extern "C" void ext_006E7FD0();
extern "C" void ext_006E7FE0();
extern "C" void ext_006E7FF0();
extern "C" void ext_006E8000();
extern "C" void ext_006E8010();
extern "C" void ext_006E8020();
extern "C" void ext_006E8580();
extern "C" void ext_006F9B30();
extern "C" void ext_0071CE40();
extern "C" void ext_00744F40();
extern "C" void ext_007476B0();
extern "C" void ext_00747F00();
extern "C" void ext_00747FD0();
extern "C" void ext_00748070();
extern "C" void ext_00748290();
extern "C" void ext_00748440();
extern "C" void ext_00748590();
extern "C" void ext_007486D0();
extern "C" void ext_00748890();
extern "C" void ext_0077FB40();
extern "C" void ext_00787430();
extern "C" void ext_007AAB70();

extern "C" __declspec(naked) void __fastcall fn_00744A20(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008BEE52
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x19c
        push ebx
        mov ebx, ecx
        push esi
        push edi
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x18], -1
        mov dword ptr [esp + 0x1c], 0x7fffffff
        mov dword ptr [esp + 0x10], 1
        mov dword ptr [esp + 0x14], 0x80000000
        call ext_0077FB40
        mov al, byte ptr [ebx + 0xb3]
        mov dword ptr [esp + 0x1b0], 0
        test al, al
        je L744AA4
        fld dword ptr [ebx + 0xd0]
        fstp qword ptr [esp + 0x24]
        fld dword ptr [ebx + 0xd4]
        fstp qword ptr [esp + 0x2c]
        fld dword ptr [ebx + 0xd8]
        fstp qword ptr [esp + 0x34]
        jmp L744AD4
L744AA4:
        mov dword ptr [esp + 0x24], 0
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esp + 0x2c], 0
        mov dword ptr [esp + 0x30], 0
        mov dword ptr [esp + 0x34], 0
        mov dword ptr [esp + 0x38], 0
L744AD4:
        sub esp, 0x20
        mov ecx, 8
        lea esi, [esp + 0x44]
        mov edi, esp
        rep movsd
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8580
        lea ecx, [esp + 0x44]
        call ext_0077FB40
        push 0x3c
        mov byte ptr [esp + 0x1b4], 1
        call ext_006A5C62
        mov ecx, dword ptr [ebx + 0xbc]
        mov dword ptr [esp + 0x24], eax
        lea eax, [esp + 0x24]
        push eax
        push ecx
        call ext_007AAB70
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0xc
        lea edx, [esp + 0x44]
        mov ecx, esi
        fld dword ptr [eax + 4]
        push edx
        fstp qword ptr [esp + 0x48]
        fld dword ptr [eax + 8]
        fstp qword ptr [esp + 0x50]
        fld dword ptr [eax + 0xc]
        fstp qword ptr [esp + 0x58]
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8000
        mov ecx, eax
        call ext_0071CE40
        lea eax, [esp + 0x44]
        mov ecx, esi
        push eax
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E7FE0
        mov ecx, eax
        call ext_0071CE40
        lea ecx, [esp + 0x44]
        push ecx
        mov ecx, esi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E7FF0
        mov ecx, eax
        call ext_0071CE40
        lea edx, [esp + 0x44]
        mov ecx, esi
        push edx
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8020
        mov ecx, eax
        call ext_0071CE40
        lea eax, [esp + 0x44]
        mov ecx, esi
        push eax
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E7FC0
        mov ecx, eax
        call ext_0071CE40
        lea ecx, [esp + 0x44]
        push ecx
        mov ecx, esi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8010
        mov ecx, eax
        call ext_0071CE40
        lea edx, [esp + 0x44]
        mov ecx, esi
        push edx
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E7FD0
        mov ecx, eax
        call ext_0071CE40
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_006A5C5C
        mov al, byte ptr [ebx + 0xad]
        add esp, 4
        test al, al
        je L744C1E
        mov ecx, ebx
        call ext_00744F40
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
L744C1E:
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx + 0x20]
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
        mov ecx, ebx
        call ext_007476B0
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
        mov al, byte ptr [ebx + 0xb5]
        test al, al
        je L744CD9
        mov ecx, dword ptr [ebx + 4]
        push 0x00AAE5EC
        call ext_006D3560
        push eax
        mov ecx, esi
        mov dword ptr [ebx + 0x148], eax
        call ext_006BC370
        mov ecx, eax
        call ext_006C27E0
        lea ecx, [esp + 0x70]
        call ext_006D2370
        mov eax, dword ptr [ebx + 0xc8]
        mov ecx, dword ptr [ebx + 0xcc]
        mov dword ptr [esp + 0x64], eax
        mov dword ptr [esp + 0x68], ecx
        push 0x3ff00000
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x68]
        push 0
        push eax
        push ecx
        push eax
        push ecx
        push eax
        push ecx
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0x1d0], 2
        call ext_00787430
        mov ecx, dword ptr [ebx + 0x148]
        lea edx, [esp + 0x70]
        push edx
        call ext_006C32F0
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x1b0], 1
        call ext_006D80A0
L744CD9:
        push esi
        mov ecx, ebx
        call ext_00747F00
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
        push esi
        mov ecx, ebx
        call ext_00747FD0
        push esi
        mov ecx, ebx
        call ext_00748070
        push esi
        mov ecx, ebx
        call ext_00748290
        mov ecx, ebx
        call ext_00748440
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
        mov ecx, ebx
        call ext_00748590
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        jne L744D2E
        mov ecx, ebx
        call ext_007486D0
        cmp al, 1
        mov byte ptr [esp + 0xf], al
        je L744D6E
L744D2E:
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x1b0], 0
        call ext_006D80A0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x1b0], -1
        call ext_006D80A0
        mov al, byte ptr [esp + 0xf]
        mov ecx, dword ptr [esp + 0x1a8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
L744D6E:
        mov ecx, ebx
        call ext_00748890
        mov bl, al
        cmp bl, 1
        je L744DBA
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x1b0], 0
        call ext_006D80A0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x1b0], -1
        call ext_006D80A0
        mov al, bl
        mov ecx, dword ptr [esp + 0x1a8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
L744DBA:
        mov ecx, esi
        call ext_006BC370
        mov edx, dword ptr [eax]
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x30]
        lea ecx, [esp + 0x90]
        call ext_006F9B30
        push 0x00AAE5DC
        lea ecx, [esp + 0x94]
        mov byte ptr [esp + 0x1b4], 3
        call ext_006B9EC0
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        cmp eax, 1
        jne L744E0C
        cmp edx, 0x80000000
        je L744E1F
L744E0C:
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, -1
        jne L744E58
        cmp dword ptr [esp + 0x1c], 0x7fffffff
        jne L744E58
L744E1F:
        push 6
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x30]
        call ext_006DA370
        push 6
        push 0
        push 0x96
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x28]
        call ext_006DA370
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
L744E58:
        mov edi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x184], edx
        mov dword ptr [esp + 0x194], edx
        lea edx, [esp + 0x90]
        mov dword ptr [esp + 0x178], ecx
        mov dword ptr [esp + 0x188], ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x180], edi
        mov dword ptr [esp + 0x184], eax
        mov dword ptr [esp + 0x190], edi
        mov dword ptr [esp + 0x194], eax
        call ext_006BCE00
        lea ecx, [esp + 0x90]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_006BC800
        lea ecx, [esp + 0x128]
        mov byte ptr [esp + 0x1b0], 5
        call ext_006B9D70
        lea ecx, [esp + 0xdc]
        mov byte ptr [esp + 0x1b0], 4
        call ext_006B9D70
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0x1b0], 1
        call ext_006B9D70
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x1b0], 0
        call ext_006D80A0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x1b0], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x1a8]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00741A10] sub_00741A10 (1263 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9F80();
extern "C" void ext_006BA1C0();
extern "C" void ext_006BA6C0();
extern "C" void ext_006BB0C0();
extern "C" void ext_006D3B00();
extern "C" void ext_006D80A0();
extern "C" void ext_006E6850();
extern "C" void ext_006E6880();
extern "C" void ext_006E68B0();
extern "C" void ext_006E6970();
extern "C" void ext_006E69A0();
extern "C" void ext_006E6D70();
extern "C" void ext_006E7000();
extern "C" void ext_006E70E0();
extern "C" void ext_006E7150();
extern "C" void ext_006E7460();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AA0();
extern "C" void ext_00726B40();
extern "C" void ext_00726BE0();
extern "C" void ext_00726C20();
extern "C" void ext_0077FB70();
extern "C" void ext_0079D6D0();
extern "C" int mem_00925284;

extern "C" __declspec(naked) void __fastcall fn_00741A10(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x8bea75
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x27c
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        je L_1EE6
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae570
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_1EE6
L_1A64:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_1EBD
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae564
        add ecx, 0x4
        push 0xaa8e74
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0xc4]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 0x4
        push 0xaa8e24
        mov dword ptr [esp + 0x298], 0x0
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x78]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 0x4
        push 0xaae55c
        mov byte ptr [esp + 0x298], 0x1
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x110]
        call ext_006B9D80
        push 0xaa9494
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0x294], 0x2
        call ext_006BA6C0
        test eax, eax
        je L_1BDD
        push 0xaae558
        lea ecx, [esp + 0x240]
        call ext_006B9D80
        mov edi, eax
        push 0xaae554
        lea ecx, [esp + 0x1a8]
        mov byte ptr [esp + 0x294], 0x3
        call ext_006B9D80
        lea ecx, [esp + 0x74]
        lea edx, [esp + 0x1f0]
        push ecx
        push eax
        push edx
        mov byte ptr [esp + 0x29c], 0x4
        call ext_006B9F80
        push edi
        push eax
        lea eax, [esp + 0x16c]
        mov byte ptr [esp + 0x2a4], 0x5
        push eax
        call ext_006B9F80
        add esp, 0x18
        push eax
        lea ecx, [esp + 0xc4]
        mov byte ptr [esp + 0x294], 0x6
        call ext_006BA1C0
        lea ecx, [esp + 0x158]
        mov byte ptr [esp + 0x290], 0x5
        call ext_006B9D70
        lea ecx, [esp + 0x1f0]
        mov byte ptr [esp + 0x290], 0x4
        call ext_006B9D70
        lea ecx, [esp + 0x1a4]
        mov byte ptr [esp + 0x290], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x23c]
        mov byte ptr [esp + 0x290], 0x2
        call ext_006B9D70
L_1BDD:
        lea ecx, [esp + 0x10c]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x78]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0xc8]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call ext_006D3B00
        mov edi, eax
        test edi, edi
        je L_1E73
        push 0x1
        push 0x2
        mov ecx, edi
        call ext_006E6D70
        push 0x1
        push 0x1
        mov ecx, edi
        call ext_006E6D70
        mov ecx, dword ptr [ebp + 0x8]
        push edi
        call ext_006BB0C0
        mov ecx, edi
        call ext_006E7000
        dec eax
        cmp eax, 0x4
        ja L_1E07
        jmp dword ptr [eax * 4 + 0x741f00]
L_1C4A:
        mov ecx, dword ptr [esi + 0xac]
        push 0x0
        add ecx, 0x4
        push 0xaae54c
        call ext_00726B40
        test eax, eax
        setne cl
        mov byte ptr [esp + 0x20], cl
        mov ecx, edi
        mov edx, dword ptr [esp + 0x20]
        push edx
        call ext_006E6850
        jmp L_1E07
L_1C79:
        mov ecx, dword ptr [esi + 0xac]
        push 0x0
        push 0x0
        push 0xaae54c
        add ecx, 0x4
        call ext_00726C20
        fstp qword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_006E6880
        jmp L_1E07
L_1CAA:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae54c
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_1E07
        mov ebx, dword ptr [esi + 0xac]
        lea edx, [esp + 0x3c]
        add ebx, 0x4
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0xc], 0x3
L_1CDE:
        mov ecx, ebx
        call ext_00726BE0
        mov eax, dword ptr [esp + 0x14]
        fstp qword ptr [eax]
        add eax, 0x8
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0xc]
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne L_1CDE
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov eax, dword ptr [esp + 0x50]
        mov ecx, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x48]
        push 0x3ff00000
        push 0x0
        push eax
        mov eax, dword ptr [esp + 0x50]
        push ecx
        mov ecx, dword ptr [esp + 0x50]
        push edx
        mov edx, dword ptr [esp + 0x50]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 0x74]
        call ext_0077FB70
        lea eax, [esp + 0x54]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 0x294], 0x7
        call ext_006E68B0
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0x290], 0x2
        call ext_006D80A0
        jmp L_1E07
L_1D63:
        mov ecx, dword ptr [esi + 0xac]
        push 0x0
        push 0xaae54c
        add ecx, 0x4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006E6970
        jmp L_1E07
L_1D85:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae54c
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_1E07
        mov ebx, dword ptr [esi + 0xac]
        lea ecx, [esp + 0x24]
        add ebx, 0x4
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x14], 0x3
L_1DB5:
        mov ecx, ebx
        call ext_00726BE0
        mov eax, dword ptr [esp + 0xc]
        fstp qword ptr [eax]
        add eax, 0x8
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esp + 0x14]
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L_1DB5
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov edx, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x30]
        push edx
        mov edx, dword ptr [esp + 0x30]
        push eax
        mov eax, dword ptr [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_006E69A0
L_1E07:
        mov edx, dword ptr [mem_00925284]
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 0x8
        add ecx, 0x4
        fld qword ptr [edx]
        fchs
        fstp qword ptr [esp]
        push 0xaae548
        call ext_00726C20
        mov eax, dword ptr [mem_00925284]
        fstp qword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push 0xaae544
        add ecx, 0x4
        call ext_00726C20
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        fstp qword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006E70E0
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, edi
        call ext_006E7150
L_1E73:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
        lea ecx, [esp + 0x10c]
        mov byte ptr [esp + 0x290], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0x290], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0xc0]
        mov dword ptr [esp + 0x290], 0xffffffff
        call ext_006B9D70
L_1EBD:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae570
        add ecx, 0x4
        call ext_00726770
        test al, al
        jne L_1A64
L_1EE6:
        mov ecx, dword ptr [esp + 0x288]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// Switch jump table for fn_00741A10 (VA 0x00741F00); emitted as its own COMDAT so it
// sits right after the function and stays outside its 1263-byte body.
extern "C" __declspec(naked) void __cdecl fn_00741F00_jt() {
    __asm {
        _emit 0x4a
        _emit 0x1c
        _emit 0x74
        _emit 0x00
        _emit 0x79
        _emit 0x1c
        _emit 0x74
        _emit 0x00
        _emit 0xaa
        _emit 0x1c
        _emit 0x74
        _emit 0x00
        _emit 0x63
        _emit 0x1d
        _emit 0x74
        _emit 0x00
        _emit 0x85
        _emit 0x1d
        _emit 0x74
        _emit 0x00
    }
}

// [0x00749950] sub_00749950 (1376 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006DC480();
extern "C" void ext_006C9430();
extern "C" void ext_006C9450();
extern "C" void ext_006C9470();
extern "C" void ext_006CA500();
extern "C" void ext_006D23F0();
extern "C" void ext_006DA370();
extern "C" void ext_006CA020();
extern "C" void ext_006C9B70();
extern "C" void ext_006CD330();
extern "C" void ext_006C32F0();
extern "C" void ext_006CA540();
extern "C" void ext_007AB2F0();
extern "C" void ext_007AB740();
extern "C" void ext_007AB450();
extern "C" void ext_007AB370();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void __fastcall fn_00749950(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008BF231
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xfc
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x7c], esi
        mov dword ptr [esp + 0x38], 0x80000000
        call ext_006D2370
        xor edi, edi
        lea ecx, [esp + 0x5c]
        mov dword ptr [esp + 0x110], edi
        call ext_006D2370
        mov dword ptr [esp + 0x2c], edi
        mov dword ptr [esp + 0x30], edi
        mov edi, dword ptr [ebp + 0xc]
        mov byte ptr [esp + 0x110], 1
        cmp edi, 1
        jbe L_d44
        mov al, byte ptr [esi + 0xae]
        test al, al
        je L_d44
        mov ecx, dword ptr [ebp + 0x8]
        call ext_006DC480
        mov esi, eax
        mov ecx, esi
        call ext_006C9430
        mov ebx, eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], ebx
        call ext_006C9450
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        call ext_006C9470
        mov esi, eax
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x2c], esi
        call ext_006CA500
        mov ecx, dword ptr [esp + 0x24]
        push edi
        call ext_006CA500
        push edi
        mov ecx, esi
        call ext_006CA500
        xor esi, esi
        test edi, edi
        jbe L_cb3
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x14]
        lea edi, [eax + 0x8]
        lea ebx, [ecx + 0x4]
L_loop:
        mov eax, dword ptr [edi - 0x8]
        mov ecx, dword ptr [esp + 0x38]
        cmp eax, ecx
        jle L_9b
        fld dword ptr [ebx - 0x4]
        push 0
        lea ecx, [esp + 0x40]
        fstp qword ptr [esp + 0x10]
        mov dword ptr [esp + 0x3c], eax
        call ext_006D23F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax], edx
        push 1
        mov dword ptr [eax + 0x4], ecx
        lea ecx, [esp + 0x40]
        fld dword ptr [ebx + 0x4]
        fstp qword ptr [esp + 0x10]
        call ext_006D23F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax], edx
        push 2
        mov dword ptr [eax + 0x4], ecx
        lea ecx, [esp + 0x40]
        fld dword ptr [ebx]
        fstp qword ptr [esp + 0x10]
        call ext_006D23F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax], edx
        push 6
        push 0
        mov dword ptr [eax + 0x4], ecx
        mov eax, dword ptr [edi - 0x8]
        push eax
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x44]
        call ext_006DA370
        push 0
        lea ecx, [esp + 0x60]
        call ext_006D23F0
        mov dword ptr [eax], 0
        push 1
        lea ecx, [esp + 0x60]
        mov dword ptr [eax + 0x4], 0
        call ext_006D23F0
        mov dword ptr [eax], 0
        push 2
        lea ecx, [esp + 0x60]
        mov dword ptr [eax + 0x4], 0
        call ext_006D23F0
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], 0
        mov ax, word ptr [edi - 0x4]
        test al, 1
        mov dword ptr [esp + 0xc], eax
        je L_b22
        fld dword ptr [edi]
        push 0
        lea ecx, [esp + 0x60]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov eax, dword ptr [esp + 0xc]
L_b22:
        test al, 2
        je L_b49
        fld dword ptr [edi + 0x4]
        push 1
        lea ecx, [esp + 0x60]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov eax, dword ptr [esp + 0xc]
L_b49:
        test al, 4
        je L_b6c
        fld dword ptr [edi + 0x8]
        push 2
        lea ecx, [esp + 0x60]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
L_b6c:
        mov ecx, dword ptr [esp + 0x34]
        push esi
        call ext_006CA020
        push 2
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x10], eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x60]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x64]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x48]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x38]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        push edx
        push eax
        call ext_006C9B70
        mov ecx, dword ptr [esp + 0x24]
        push esi
        call ext_006CA020
        push 2
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x10], eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x60]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x64]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x48]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        mov edx, dword ptr [esp + 0x38]
        push ecx
        mov ecx, dword ptr [esp + 0x40]
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        call ext_006C9B70
        mov ecx, dword ptr [esp + 0x28]
        push esi
        call ext_006CA020
        push 2
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x10], eax
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x60]
        fstp dword ptr [esp]
        push 1
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x64]
        fstp dword ptr [esp]
        push 0
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        lea ecx, [esp + 0x48]
        fstp dword ptr [esp]
        push 2
        call ext_006D23F0
        fld qword ptr [eax]
        mov eax, dword ptr [esp + 0x3c]
        push ecx
        mov ecx, dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        call ext_006C9B70
L_9b:
        mov eax, dword ptr [ebp + 0xc]
        inc esi
        add ebx, 0xc
        add edi, 0x1c
        cmp esi, eax
        jb L_loop
        mov ebx, dword ptr [esp + 0x34]
        mov edi, eax
L_cb3:
        push edi
        mov ecx, ebx
        call ext_006CA540
        mov esi, dword ptr [esp + 0x24]
        push edi
        mov ecx, esi
        call ext_006CA540
        push edi
        mov edi, dword ptr [esp + 0x2c]
        mov ecx, edi
        call ext_006CA540
        mov edx, dword ptr [esp + 0x7c]
        mov al, byte ptr [edx + 0xb2]
        test al, al
        je L_e6d
        lea ecx, [esp + 0x80]
        call ext_007AB2F0
        push 0x3ff00000
        push 0
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0x118], 2
        call ext_007AB740
        lea eax, [esp + 0x14]
        push 3
        push eax
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_007AB450
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0x110], 1
        call ext_007AB370
        jmp L_e6d
L_d44:
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        call ext_006DC480
        mov esi, eax
        mov ecx, esi
        call ext_006C9430
        mov ecx, esi
        mov ebx, eax
        call ext_006C9450
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        call ext_006C9470
        mov esi, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x28], eax
        test esi, esi
        je L_dd4
        fld dword ptr [esi]
        push 0
        lea ecx, [esp + 0x40]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax], ecx
        push 1
        lea ecx, [esp + 0x40]
        mov dword ptr [eax + 0x4], edx
        fld dword ptr [esi + 0x8]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax], ecx
        push 2
        lea ecx, [esp + 0x40]
        mov dword ptr [eax + 0x4], edx
        fld dword ptr [esi + 0x4]
        fstp qword ptr [esp + 0x18]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        jmp L_e15
L_dd4:
        push 0
        lea ecx, [esp + 0x40]
        call ext_006D23F0
        mov dword ptr [eax], 0
        mov esi, 0x3ff00000
        push 1
        lea ecx, [esp + 0x40]
        mov dword ptr [eax + 0x4], esi
        call ext_006D23F0
        mov dword ptr [eax], 0
        push 2
        lea ecx, [esp + 0x40]
        mov dword ptr [eax + 0x4], esi
        call ext_006D23F0
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], esi
L_e15:
        push 0
        lea ecx, [esp + 0x40]
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        call ext_006CD330
        push 1
        lea ecx, [esp + 0x40]
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_006CD330
        push 2
        lea ecx, [esp + 0x40]
        call ext_006D23F0
        fld qword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        fstp dword ptr [esp]
        call ext_006CD330
        lea eax, [esp + 0x3c]
        mov ecx, edi
        push eax
        call ext_006C32F0
L_e6d:
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x110], 0
        call ext_006D80A0
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x110], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x108]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x00742ED0] sub_00742ED0 (1392 bytes)
extern "C" void ext_006DC480();
extern "C" void ext_006C9360();
extern "C" void ext_006BB0B0();
extern "C" void ext_006BB120();
extern "C" void ext_006E6E60();
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" void ext_006DE7C0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006C9F70();
extern "C" void ext_006E69A0();
extern "C" void ext_006E6880();
extern "C" void ext_00708000();
extern "C" void ext_006BB1A0();

extern "C" __declspec(naked) void __fastcall fn_00742ED0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x6c
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        call ext_006DC480
        test eax, eax
        je L_end
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        test eax, eax
        je L_end
        mov ecx, edi
        call ext_006BB0B0
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0xc], 0x0
        jle L_094
L_loop1:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, edi
        push eax
        call ext_006BB120
        lea ecx, [esp + 0x2c]
        mov ebx, eax
        push ecx
        mov ecx, ebx
        call ext_006E6E60
        mov ecx, eax
        mov dword ptr [esp + 0x80], 0x0
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        lea ecx, [esp + 0x2c]
        mov esi, eax
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006B9D70
        test esi, esi
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], 0x0
        je L_307f
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x3
        jne L_2058
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_2ff3
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x14]
L_2ff3:
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_3012
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x24]
L_3012:
        mov eax, dword ptr [esi]
        push 0x2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_3031
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x1c]
L_3031:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call ext_006E69A0
        jmp L_307f
L_2058:
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        je L_307f
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, ebx
        call ext_006E6880
L_307f:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0xc], eax
        jl L_loop1
L_094:
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0xc]
        mov ebx, eax
        test ebx, ebx
        mov dword ptr [esp + 0xc], ebx
        je L_end
        push 0x00AA88EC
        mov ecx, ebx
        call ext_00708000
        test eax, eax
        je L_71d1
        push 0x00AA88EC
        mov ecx, edi
        call ext_006BB1A0
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        je L_71d1
        push 0x00AA8CB8
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je L_71d1
        push 0x00AA8CAC
        mov ecx, eax
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        je L_71d1
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x3
        jne L_71d1
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_615c
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x14]
L_615c:
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_617b
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x24]
L_617b:
        mov eax, dword ptr [esi]
        push 0x2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_619a
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x1c]
L_619a:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push eax
        call ext_006E69A0
L_71d1:
        push 0x00AA88DC
        mov ecx, ebx
        call ext_00708000
        test eax, eax
        je L_72f9
        push 0x00AA88DC
        mov ecx, edi
        call ext_006BB1A0
        mov ebx, eax
        test ebx, ebx
        je L_72f5
        push 0x00AA8CB8
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je L_72f5
        push 0x00AA8C9C
        mov ecx, eax
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        je L_72f5
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x3
        jne L_72f5
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_7292
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x14]
L_7292:
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_72b1
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x24]
L_72b1:
        mov eax, dword ptr [esi]
        push 0x2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_72d0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x1c]
L_72d0:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call ext_006E69A0
L_72f5:
        mov ebx, dword ptr [esp + 0xc]
L_72f9:
        push 0x00AA88D0
        mov ecx, ebx
        call ext_00708000
        test eax, eax
        je L_end
        push 0x00AA88D0
        mov ecx, edi
        call ext_006BB1A0
        mov ebx, eax
        test ebx, ebx
        je L_end
        push 0x00AA8CB8
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je L_end
        push 0x00AA8C98
        mov ecx, eax
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        je L_end
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x3
        jne L_end
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x3ff00000
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x3ff00000
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x3ff00000
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_33ba
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x14]
L_33ba:
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_33d9
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x24]
L_33d9:
        mov eax, dword ptr [esi]
        push 0x2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L_33f8
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [esp + 0x1c]
L_33f8:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call ext_006E69A0
L_end:
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
