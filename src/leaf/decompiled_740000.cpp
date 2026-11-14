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
