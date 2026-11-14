// Decompiled translation unit: src/leaf/decompiled_6F0000.cpp

// [0x006F9DC0] sub_006F9DC0 (32 bytes)
// Store four stack args into the object: dwords at +0, +4, +8 and a byte at +0xC (ret 0x10).
extern "C" __declspec(naked) void __fastcall fn_006F9DC0(void* self, int edx_unused, int a1, int a2, int a3, unsigned char a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dl, byte ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov byte ptr [eax + 0xc], dl
        ret 0x10
    }
}

// [0x006FA350] sub_006FA350 (32 bytes)
// Returns self if arg0 is 0, 2 or 0xDE1947F3; otherwise returns NULL (ret 8).
extern "C" __declspec(naked) void* __fastcall fn_006FA350(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        je done
        cmp ecx, 0x2
        je done
        xor edx, edx
        cmp ecx, 0xde1947f3
        setne dl
        dec edx
        and eax, edx
    done:
        ret 0x8
    }
}

// [0x006F69B0] sub_006F69B0 (16 bytes)
extern "C" void ext_00782C40(int value);

extern "C" __declspec(naked) void __stdcall fn_006F69B0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C40
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6900] sub_006F6900 (16 bytes)
extern "C" void ext_00782C00();

extern "C" __declspec(naked) void __stdcall fn_006F6900(void* a) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C00
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6940] sub_006F6940 (16 bytes)
extern "C" void ext_00782C80(int value);

extern "C" __declspec(naked) void __stdcall fn_006F6940(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C80
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6B40] sub_006F6B40 (16 bytes)
extern "C" void ext_00782CB0();

extern "C" __declspec(naked) void __stdcall fn_006F6B40(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782CB0
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6E40] sub_006F6E40 (16 bytes)
extern "C" void ext_00782CD0();

extern "C" __declspec(naked) void __stdcall fn_006F6E40(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782CD0
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F79C0] sub_006F79C0 (24 bytes)
extern "C" void ext_00711DA0();
extern "C" __declspec(naked) void __fastcall fn_006F79C0(void* self, int edx_unused, int a1) {
    __asm {
        push 0x0
        call ext_00711DA0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x5dc]
    }
}

// [0x006FA8F0] sub_006FA8F0 (47 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_006FA8F0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov eax, dword ptr [edi + 0x8]
        cmp eax, esi
        je L_same
        test eax, eax
        je L_skip
        mov edx, dword ptr [esi]
        push eax
        call dword ptr [edx + 0x54]
    L_skip:
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        call dword ptr [eax + 0x44]
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    L_same:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006F7970] sub_006F7970 (79 bytes)
// Unit holds two paths: a virtual call at [vtbl+0x8c] with 4 pushed args (ret 8), then
// padding and a cached-value getter that stores into *arg (ret 0x10).
extern "C" __declspec(naked) void __fastcall fn_006F7970(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push 0x0
        push 0x0
        lea edx, [esp + 0xc]
        push 0x0
        push edx
        call dword ptr [eax + 0x8c]
        ret 0x8
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je no_fn
        mov ecx, dword ptr [esi + 0x8]
        call eax
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x80], eax
        pop esi
        mov dword ptr [ecx], eax
        ret 0x10
    no_fn:
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x80]
        pop esi
        mov dword ptr [eax], edx
        ret 0x10
    }
}

// [0x006F7560] sub_006F7560 (80 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006F7560(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x19c]
        test ecx, ecx
        je zero
        mov eax, dword ptr [esi + 0x198]
        test eax, eax
        jne check1
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x8]
        cmp eax, 0x6
        jne check1
        mov eax, dword ptr [esi + 0x19c]
        pop esi
        ret
    check1:
        cmp dword ptr [esi + 0x198], 0x1
        jne zero
        mov ecx, dword ptr [esi + 0x19c]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x8]
        cmp eax, 0x8
        jne zero
        mov eax, dword ptr [esi + 0x19c]
        cmp eax, esi
        jne done
    zero:
        xor eax, eax
    done:
        pop esi
        ret
    }
}

// [0x006F8700] sub_006F8700 (80 bytes)
// Two incremental-link style thunks: each jumps over 11 nop padding to a body.
// Body 1: copy the double at *_HUGE into mem_00B5E260/64.
// Body 2: store -(*_HUGE) into mem_00B5E258.
extern "C" int mem_00925284;
extern "C" int mem_00B5E260;
extern "C" int mem_00B5E264;
extern "C" int mem_00B5E258;
extern "C" __declspec(naked) void __fastcall fn_006F8700(void* self) {
    __asm {
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E260], ecx
        mov dword ptr [mem_00B5E264], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E258]
        ret
    }
}

// [0x006FB550] sub_006FB550 (80 bytes)
// Reverse linear search over 12-byte entries [start, start + count): matches entry.key == *arg->ptr and entry.ptr == arg->ptr.
// Returns index relative to start, or -1 (ret 4).
struct Dec6FB550Entry { int key; int* ptr; int extra; };
struct Dec6FB550Owner { Dec6FB550Entry* items; int start; int count; };
struct Dec6FB550Arg { int pad; int* ptr; };
extern "C" __declspec(naked) int __fastcall fn_006FB550(Dec6FB550Owner* self, int edx_unused, Dec6FB550Arg* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x4]
        lea eax, [eax + edi - 0x1]
        cmp eax, edi
        jl fail
        mov ecx, dword ptr [ecx]
        mov ebx, dword ptr [esp + 0x10]
        lea edx, [eax + 2*eax]
        lea esi, [ecx + 4*edx]
    loop_top:
        test ebx, ebx
        je null_arg
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx]
        jmp cmp_pair
    null_arg:
        xor edx, edx
        xor ecx, ecx
    cmp_pair:
        cmp edx, dword ptr [esi]
        jne next
        cmp ecx, dword ptr [esi + 0x4]
        je found
    next:
        dec eax
        sub esi, 0xc
        cmp eax, edi
        jl fail
        jmp loop_top
    found:
        sub eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    fail:
        pop edi
        pop esi
        or eax, -1
        pop ebx
        ret 0x4
    }
}


// [0x006FAB40] sub_006FAB40 (207 bytes)
extern "C" __declspec(naked) int __fastcall fn_006FAB40(void* self, int edx_unused, void* other, int limit) {
    __asm {
        sub     esp, 0ch
        or      eax, -1
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 20h]
        test    esi, esi
        push    edi
        jl      L_neg
        mov     edx, dword ptr [esp + 20h]
        mov     eax, dword ptr [edx + 18h]
        cmp     esi, eax
        mov     eax, dword ptr [ecx + 18h]
        jge     L_neg
        test    eax, eax
        mov     dword ptr [esp + 18h], eax
        je      L_neg
        mov     edi, dword ptr [ecx + 14h]
        mov     ecx, dword ptr [ecx + 10h]
        mov     ebx, dword ptr [edx + 10h]
        xor     esi, esi
        mov     dword ptr [esp + 10h], edi
        mov     edi, dword ptr [edx + 14h]
        xor     eax, eax
        mov     dword ptr [esp + 14h], ecx
L_outer:
        mov     edx, dword ptr [esp + 10h]
        lea     ecx, [edx + eax]
        mov     edx, dword ptr [esp + 14h]
        lea     ecx, [ecx + 2*ecx]
        lea     edx, [edx + 4*ecx]
        mov     ecx, dword ptr [edx + 4]
        test    ecx, ecx
        je      L_s0
        mov     ebp, dword ptr [ecx]
        cmp     ebp, dword ptr [edx]
        jne     L_s0
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [esp + 20h], ecx
        jmp     L_s1
L_s0:
        mov     dword ptr [esp + 20h], 0
L_s1:
L_inner:
        lea     ecx, [edi + esi]
        lea     edx, [ecx + 2*ecx]
        mov     ecx, dword ptr [ebx + 4*edx + 4]
        test    ecx, ecx
        lea     edx, [ebx + 4*edx]
        je      L_t0
        mov     ebp, dword ptr [ecx]
        cmp     ebp, dword ptr [edx]
        jne     L_t0
        mov     ecx, dword ptr [ecx + 4]
        jmp     L_t1
L_t0:
        xor     ecx, ecx
L_t1:
        cmp     dword ptr [esp + 20h], ecx
        je      L_found
        inc     esi
        jmp     L_inner
L_found:
        mov     ecx, dword ptr [esp + 24h]
        inc     eax
        inc     esi
        cmp     esi, ecx
        jg      L_dec
        mov     edx, dword ptr [esp + 18h]
        cmp     eax, edx
        jl      L_outer
        cmp     esi, ecx
        jg      L_dec
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, edx
        pop     ebx
        add     esp, 0ch
        ret     8
L_dec:
        dec     eax
L_neg:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0ch
        ret     8
    }
}

// [0x006FCFB0] sub_006FCFB0 (208 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006D80A0();
extern "C" int mem_00925284;
extern "C" int mem_00B5E448;
extern "C" int mem_00B5E44C;
extern "C" double mem_00B5E440;

extern "C" __declspec(naked) void __fastcall fn_006FCFB0(void* self) {
    __asm {
        push -1
        push 0x008BB4F0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        push edi
        mov eax, ecx
        mov ecx, 0x8
        lea esi, [esp + 0x38]
        lea edi, [esp + 0x8]
        mov dword ptr [esp + 0x30], 0x0
        rep movsd
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x8]
        mov byte ptr [esp + 0x30], 0x1
        push edx
        push ecx
        mov ecx, eax
        call ext_006D2170
        lea ecx, [esp + 0x8]
        mov esi, eax
        mov byte ptr [esp + 0x30], 0x0
        call ext_006D80A0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x30], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x20
        __asm _emit 0x90 // nop
        __asm _emit 0x90 // nop
        __asm _emit 0x90 // nop
        __asm _emit 0xe9 __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp +0x0b -> block at +0x90
        __asm _emit 0x90 // nop x11
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E448], ecx
        mov dword ptr [mem_00B5E44C], edx
        ret
        __asm _emit 0x90 // nop x9
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xe9 __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp +0x0b -> block at +0xC0
        __asm _emit 0x90 // nop x11
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E440]
        ret
    }
}

// [0x006FFD60] sub_006FFD60 (288 bytes)
// fgets-like: reads up to n-1 chars from stream into buf, handling CR/LF; returns buf or NULL (cdecl, 3 stack args).
// Includes two trailing _HUGE tail blocks (jmp-thunked) that share the unit's 288-byte range.
extern "C" int mem_0092517C;
extern "C" int mem_00925178;
extern "C" int mem_00925284;
extern "C" int mem_00B5E5E0;
extern "C" int mem_00B5E5E4;
extern "C" int mem_00B5E5D8;
extern "C" __declspec(naked) char* __cdecl fn_006FFD60(char* buf, int n, void* stream) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        test eax, eax
        mov dword ptr [esp + 0x4], edi
        jg body
        xor eax, eax
        pop edi
        pop ecx
        ret
body:
        mov eax, dword ptr [esp + 0x10]
        push ebx
        dec eax
        push ebp
        push esi
        mov dword ptr [esp + 0x1c], eax
        je ret_buf
        mov esi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [mem_0092517C]
        mov ebp, dword ptr [mem_00925178]
loop_top:
        push esi
        call ebx
        add esp, 0x4
        cmp eax, -1
        je eof
        mov byte ptr [edi], al
        mov al, byte ptr [edi]
        inc edi
        cmp al, 0xd
        jne not_cr
        push esi
        call ebx
        add esp, 0x4
        cmp eax, -1
        je ret_buf
        cmp eax, 0xa
        jne unget_c
        cmp dword ptr [esp + 0x1c], 0x1
        jg crlf_store
        push esi
        push 0xa
        call ebp
        add esp, 0x8
        jmp dec_count
not_cr:
        cmp al, 0xa
        je ret_buf
dec_count:
        mov eax, dword ptr [esp + 0x1c]
        dec eax
        mov dword ptr [esp + 0x1c], eax
        jne loop_top
        mov eax, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov byte ptr [edi], 0x0
        pop ebx
        pop edi
        pop ecx
        ret
eof:
        cmp edi, dword ptr [esp + 0x18]
        jne ret_buf
        pop esi
        mov dword ptr [esp + 0xc], 0x0
        mov eax, dword ptr [esp + 0xc]
        pop ebp
        mov byte ptr [edi], 0x0
        pop ebx
        pop edi
        pop ecx
        ret
crlf_store:
        mov eax, dword ptr [esp + 0x10]
        mov byte ptr [edi], 0xa
        inc edi
        pop esi
        pop ebp
        pop ebx
        mov byte ptr [edi], 0x0
        pop edi
        pop ecx
        ret
unget_c:
        push esi
        push eax
        call ebp
        add esp, 0x8
ret_buf:
        mov eax, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov byte ptr [edi], 0x0
        pop ebx
        pop edi
        pop ecx
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E5E0], ecx
        mov dword ptr [mem_00B5E5E4], edx
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E5D8]
        ret
    }
}

// [0x006FBDB0] sub_006FBDB0 (352 bytes)
// cdecl, 6 stack args (plain ret). Walks two object trees (a1/a3 and a2/a4) and calls vfunc 0x10 on the roots and their children.
extern "C" __declspec(naked) bool __cdecl fn_006FBDB0(void* a1, void* a2, void* a3, void* a4, int mode, int a6) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov edx, 0xc
loop_top:
        mov esi, dword ptr [esp + 0x24]
        mov byte ptr [esp + 0x20], 0x0
        cmp esi, edx
        jne not_c
        mov dword ptr [esp + 0x1c], 0xa
        jmp after_map
not_c:
        cmp esi, 0xa
        jne not_a
        mov dword ptr [esp + 0x1c], edx
        mov byte ptr [esp + 0x20], 0x1
        jmp after_map
not_a:
        cmp esi, 0xb
        jne not_b
        mov dword ptr [esp + 0x1c], 0xd
        mov byte ptr [esp + 0x20], 0x1
        jmp after_map
not_b:
        cmp esi, 0xd
        mov dword ptr [esp + 0x1c], 0xb
        je after_map
        mov dword ptr [esp + 0x1c], esi
after_map:
        test ecx, ecx
        je zero_c
        mov eax, dword ptr [ecx + 0x34]
        and eax, 0x8
        cmp al, 0x8
        jne zero_c
        mov ecx, dword ptr [ecx + 0x8]
        jmp got_c
zero_c:
        xor ecx, ecx
got_c:
        test edi, edi
        je zero_a
        mov eax, dword ptr [edi + 0x34]
        and eax, 0x8
        cmp al, 0x8
        jne zero_a
        mov eax, dword ptr [edi + 0x8]
        jmp got_a
zero_a:
        xor eax, eax
got_a:
        test ecx, ecx
        jne have_c
        test eax, eax
        je finish
        mov ecx, ebx
have_c:
        test eax, eax
        mov edi, eax
        jne loop_top
        mov edi, ebp
        jmp loop_top
finish:
        mov al, byte ptr [esp + 0x20]
        test al, al
        mov eax, dword ptr [esp + 0x1c]
        jne fin_have_t
        mov eax, esi
fin_have_t:
        mov edi, dword ptr [esp + 0x28]
        mov edx, dword ptr [ebp]
        push edi
        push 0
        push ebx
        push -1
        push ebp
        push eax
        push 0
        mov ecx, ebp
        call dword ptr [edx + 0x40]
        mov al, byte ptr [esp + 0x20]
        test al, al
        mov eax, esi
        jne q_have_mode
        mov eax, dword ptr [esp + 0x1c]
q_have_mode:
        mov edx, dword ptr [ebx]
        push edi
        push 0
        push ebp
        push -1
        push ebx
        push eax
        push 0
        mov ecx, ebx
        call dword ptr [edx + 0x40]
        mov eax, dword ptr [ebp + 0x1c]
        xor esi, esi
        test eax, eax
        jle p_done
p_loop:
        mov eax, dword ptr [ebp + 0x2c]
        mov ecx, dword ptr [eax + 4 * esi]
        mov al, byte ptr [esp + 0x20]
        test al, al
        mov eax, dword ptr [esp + 0x1c]
        jne p_have_t
        mov eax, dword ptr [esp + 0x24]
p_have_t:
        mov edx, dword ptr [ecx]
        push edi
        push 0
        push ebx
        push -1
        push ebp
        push eax
        push 0
        call dword ptr [edx + 0x40]
        mov eax, dword ptr [ebp + 0x1c]
        inc esi
        cmp esi, eax
        jl p_loop
p_done:
        mov eax, dword ptr [ebx + 0x1c]
        xor esi, esi
        test eax, eax
        jle q_done
q_loop:
        mov eax, dword ptr [ebx + 0x2c]
        mov ecx, dword ptr [eax + 4 * esi]
        mov al, byte ptr [esp + 0x20]
        test al, al
        mov eax, dword ptr [esp + 0x24]
        jne q_have_mode2
        mov eax, dword ptr [esp + 0x1c]
q_have_mode2:
        mov edx, dword ptr [ecx]
        push edi
        push 0
        push ebp
        push -1
        push ebx
        push eax
        push 0
        call dword ptr [edx + 0x40]
        mov eax, dword ptr [ebx + 0x1c]
        inc esi
        cmp esi, eax
        jl q_loop
q_done:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret
    }
}

// [0x006F9B00] sub_006F9B00 (32 bytes)
extern "C" void ext_006BC0F0();
extern "C" void ext_006BC460();
extern "C" int mem_00AAB8D0;

extern "C" void __fastcall fn_006F9B00(void* self) {
    typedef void (__thiscall *Callee0)(void* self);
    typedef void (__thiscall *Callee1)(void* self, void* a);
    char* p = static_cast<char*>(self);
    ((Callee0)ext_006BC0F0)(*(void**)(p + 0xB8));
    ((Callee1)ext_006BC460)(*(void**)(p + 0xB8), &mem_00AAB8D0);
}

// [0x006F6910] sub_006F6910 (48 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" __declspec(naked) void __fastcall fn_006F6910(void* self, int edx_unused, int a1) {
    __asm {
        fild    dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 4]
        push    0
        sub     esp, 8
        mov     dword ptr [ecx + 0x3270], eax
        mov     ecx, dword ptr [ecx + 0x6958]
        fstp    qword ptr [esp]
        push    0xA8
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     4
    }
}

// [0x006F69C0] sub_006F69C0 (48 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" __declspec(naked) void __fastcall fn_006F69C0(void* self, int edx_unused, int a1) {
    __asm {
        fild    dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 4]
        push    0
        sub     esp, 8
        mov     dword ptr [ecx + 0x2A78], eax
        mov     ecx, dword ptr [ecx + 0x6958]
        fstp    qword ptr [esp]
        push    0xAC
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     4
    }
}

// [0x006FA5A0] sub_006FA5A0 (63 bytes)
extern "C" void ext_006FA4A0();
extern "C" void ext_006FA950();

extern "C" __declspec(naked) void* __fastcall fn_006FA5A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push ebx
        call ext_006FA4A0
        test eax, eax
        jne done
        mov eax, dword ptr [edi]
        push esi
        push ebx
        mov ecx, edi
        call dword ptr [eax + 0x2c]
        mov edx, dword ptr [edi]
        mov esi, eax
        push esi
        mov ecx, edi
        call dword ptr [edx + 0x50]
        push 0x8
        push ebx
        mov ecx, esi
        call ext_006FA950
        mov eax, dword ptr [esi + 0x34]
        or al, 0x10
        mov dword ptr [esi + 0x34], eax
        mov eax, esi
        pop esi
    done:
        pop edi
        pop ebx
        ret 0x4
    }
}

// [0x006F9CD0] sub_006F9CD0 (207 bytes)
extern "C" void ext_006B9E60();

extern "C" __declspec(naked) void* __fastcall fn_006F9CD0(void* self, int edx_unused, const void* other) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_006B9E60
        lea eax, [edi + 0x4c]
        lea ecx, [esi + 0x4c]
        push eax
        call ext_006B9E60
        lea ecx, [edi + 0x98]
        push ecx
        lea ecx, [esi + 0x98]
        call ext_006B9E60
        mov dl, byte ptr [edi + 0xe4]
        mov byte ptr [esi + 0xe4], dl
        mov eax, dword ptr [edi + 0xe8]
        mov dword ptr [esi + 0xe8], eax
        mov ecx, dword ptr [edi + 0xec]
        mov dword ptr [esi + 0xec], ecx
        mov edx, dword ptr [edi + 0xf0]
        mov dword ptr [esi + 0xf0], edx
        mov eax, dword ptr [edi + 0xf4]
        mov dword ptr [esi + 0xf4], eax
        mov ecx, dword ptr [edi + 0xf8]
        mov dword ptr [esi + 0xf8], ecx
        mov edx, dword ptr [edi + 0xfc]
        mov dword ptr [esi + 0xfc], edx
        mov eax, dword ptr [edi + 0x100]
        mov dword ptr [esi + 0x100], eax
        mov ecx, dword ptr [edi + 0x104]
        mov dword ptr [esi + 0x104], ecx
        mov edx, dword ptr [edi + 0x108]
        mov dword ptr [esi + 0x108], edx
        mov eax, dword ptr [edi + 0x10c]
        mov dword ptr [esi + 0x10c], eax
        mov ecx, dword ptr [edi + 0x110]
        mov dword ptr [esi + 0x110], ecx
        mov edx, dword ptr [edi + 0x114]
        mov dword ptr [esi + 0x114], edx
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006F5720] sub_006F5720 (64 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" void ext_00782BA0();
extern "C" __declspec(naked) void __fastcall fn_006F5720(void* self, int edx_unused, int a1) {
    __asm {
        fild dword ptr [esp + 4]
        mov eax, dword ptr [esp + 4]
        push 0
        sub esp, 8
        mov dword ptr [ecx + 2528h], eax
        mov ecx, dword ptr [ecx + 6958h]
        fstp qword ptr [esp]
        push 35h
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 4
        nop
        nop
        nop
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_00782BA0
        add esp, 4
        ret 4
    }
}

extern "C" void __stdcall ext_006FB670(int a1, int a2);
extern "C" void __stdcall ext_006FBF10(int a1, int a2, int a3);

// [0x006FC100] sub_006FC100 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FC100(void* self, int edx_unused, int idx, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x18]
        cmp edx, eax
        jge l_ge
        mov eax, dword ptr [ecx + 0x14]
        add eax, edx
        mov edx, dword ptr [ecx + 0x10]
        lea eax, [eax + 2*eax]
        lea edx, [edx + 4*eax]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je l_null
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [edx]
        cmp esi, edi
        pop edi
        pop esi
        jne l_null
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x4]
        push -0x1
        push edx
        push eax
        call ext_006FBF10
        ret 0x8
    l_null:
        mov edx, dword ptr [esp + 0x8]
        xor eax, eax
        push -0x1
        push edx
        push eax
        call ext_006FBF10
        ret 0x8
    l_ge:
        mov eax, dword ptr [esp + 0x8]
        push 0x0
        push eax
        call ext_006FB670
        ret 0x8
    }
}

extern "C" void ext_006D2130();
extern "C" void ext_0077F9E0();
extern "C" int mem_008BD4A8;
extern "C" int mem_00995184;

// [0x006FD3A0] sub_006FD3A0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FD3A0(void* self) {
    __asm {
        push -0x1
        push offset mem_008BD4A8
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_0077F9E0
        lea edi, [esi + 0x10]
        xor eax, eax
        push 0x4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esi + 0xc], eax
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov eax, esi
        mov dword ptr [edi + 0x14], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], offset mem_00995184
        pop edi
        pop esi
        mov fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006F6950] sub_006F6950 (96 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FEF0();
extern "C" void ext_0077FF90();
extern "C" __declspec(naked) void __fastcall fn_006F6950(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x3160], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0xa7
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        fild dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        sub esp, 0x8
        mov dword ptr [ecx + 0x29f0], eax
        mov ecx, dword ptr [ecx + 0x6958]
        fstp qword ptr [esp]
        push 0xaa
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 0x4
    }
}

// [0x006F6B50] sub_006F6B50 (112 bytes)
extern "C" void ext_00782B30();
extern "C" __declspec(naked) void __fastcall fn_006F6B50(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5828], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0xaf
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x58b0], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0xb0
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782B30
        add esp, 0x4
        ret 0x4
    }
}

// [0x006FF7E0] sub_006FF7E0 (143 bytes)
extern "C" int __cdecl ext_006FF760(const wchar_t* src, const wchar_t* delim);
extern "C" void* __cdecl ext_006A5C62(unsigned int size);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" unsigned int (__cdecl *mem_00925334)(const wchar_t*);
extern "C" wchar_t* (__cdecl *mem_0092515C)(wchar_t*, const wchar_t*);
extern "C" wchar_t* (__cdecl *mem_00925158)(wchar_t*, const wchar_t*);

extern "C" __declspec(naked) bool __cdecl fn_006FF7E0(wchar_t* dst, int index, const wchar_t* src, const wchar_t* delim) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebp
        push esi
        push edi
        test eax, eax
        je L_ret_false
        mov ebp, dword ptr [esp + 0x14]
        mov word ptr [eax], 0x0
        test ebp, ebp
        jl L_ret_false
        mov esi, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        push esi
        push edi
        call ext_006FF760
        add esp, 0x8
        cmp ebp, eax
        jge L_ret_false
        push ebx
        push edi
        call dword ptr [mem_00925334]
        lea eax, [eax + eax + 0x2]
        push eax
        call ext_006A5C62
        mov ebx, eax
        push edi
        push ebx
        call dword ptr [mem_0092515C]
        mov edi, dword ptr [mem_00925158]
        push esi
        push ebx
        call edi
        add esp, 0x18
        test ebp, ebp
        jle L_after_loop
    L_loop:
        push esi
        push 0x0
        call edi
        add esp, 0x8
        dec ebp
        jne L_loop
    L_after_loop:
        test eax, eax
        je L_free
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_0092515C]
        add esp, 0x8
    L_free:
        push ebx
        call ext_006A5C5C
        add esp, 0x4
        xor al, al
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    L_ret_false:
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret
    }
}

extern "C" void ext_007831E0();
extern "C" void ext_00783270();
extern "C" void ext_007833B0();
extern "C" void ext_007833F0();

// [0x006FE870] sub_006FE870 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_006FE870() {
    __asm {
        push    -1
        push    0x008BB578
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        push    edi
        lea     ecx, [esp + 4]
        call    ext_007831E0
        mov     edi, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x64], 0
        test    edi, edi
        je      L_cleanup_false
        push    ebx
        push    esi
        mov     esi, 0x00B5D2C0
        mov     eax, edi
    L_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_strcmp_diff
        test    cl, cl
        je      L_strcmp_eq
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_strcmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_strcmp_loop
    L_strcmp_eq:
        xor     eax, eax
        jmp     L_strcmp_done
    L_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    L_strcmp_done:
        pop     esi
        pop     ebx
        test    eax, eax
        je      L_cleanup_false
        push    0x00AAB92C
        push    edi
        lea     ecx, [esp + 0xC]
        call    ext_007833B0
        test    al, al
        je      L_cleanup_false
        lea     ecx, [esp + 4]
        call    ext_007833F0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 0x64], -1
        call    ext_00783270
        mov     al, 1
        pop     edi
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret
    L_cleanup_false:
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 0x64], -1
        call    ext_00783270
        mov     ecx, dword ptr [esp + 0x5C]
        xor     al, al
        pop     edi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret
    }
}

// [0x006FE1C0] sub_006FE1C0 (223 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006D91C0();
extern "C" void ext_006E8F70();
extern "C" void ext_006E9150();
extern "C" void ext_006FDF70();
extern "C" void ext_00715550();

extern "C" __declspec(naked) void __fastcall fn_006FE1C0(void* self) {
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        je      L_6fe29a
        push    esi
        call    ext_006D91C0
        xor     esi, esi
        mov     dword ptr [esp + 0x10], eax
        test    eax, eax
        mov     dword ptr [esp + 0xc], esi
        jle     L_6fe292
        push    ebp
        push    edi
    L_6fe1eb:
        push    esi
        mov     ecx, ebx
        call    ext_006FDF70
        mov     ecx, eax
        call    ext_006BC380
        push    esi
        mov     ecx, ebx
        mov     edi, eax
        call    ext_006FDF70
        mov     ecx, eax
        call    ext_00715550
        test    edi, edi
        mov     dword ptr [esp + 0x10], eax
        je      L_6fe244
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        je      L_6fe223
        cmp     ecx, 0x2
        je      L_6fe223
        xor     ebp, ebp
        jmp     L_6fe226
    L_6fe223:
        mov     ebp, dword ptr [edi + 0x8]
    L_6fe226:
        xor     esi, esi
        test    ebp, ebp
        jle     L_6fe244
    L_6fe22c:
        mov     eax, dword ptr [edi + 0x18]
        mov     ecx, dword ptr [eax + 4*esi]
        push    ecx
        mov     ecx, dword ptr [ebx + 0xc]
        call    ext_006E8F70
        inc     esi
        cmp     esi, ebp
        jl      L_6fe22c
        mov     eax, dword ptr [esp + 0x10]
    L_6fe244:
        test    eax, eax
        je      L_6fe27b
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        je      L_6fe258
        cmp     ecx, 0x2
        je      L_6fe258
        xor     edi, edi
        jmp     L_6fe25b
    L_6fe258:
        mov     edi, dword ptr [eax + 0x8]
    L_6fe25b:
        xor     esi, esi
        test    edi, edi
        jle     L_6fe27b
        jmp     L_6fe267
    L_6fe263:
        mov     eax, dword ptr [esp + 0x10]
    L_6fe267:
        mov     edx, dword ptr [eax + 0x18]
        mov     ecx, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [edx + 4*esi]
        push    eax
        call    ext_006E9150
        inc     esi
        cmp     esi, edi
        jl      L_6fe263
    L_6fe27b:
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], esi
        jl      L_6fe1eb
        pop     edi
        pop     ebp
    L_6fe292:
        mov     dword ptr [ebx + 0xc], 0x0
        pop     esi
    L_6fe29a:
        pop     ebx
        add     esp, 0xc
        ret
    }
}

// [0x006F52F0] sub_006F52F0 (240 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" void ext_00782B10();
extern "C" int mem_0092A278;
extern "C" int mem_00993BE0;
extern "C" __declspec(naked) void __fastcall fn_006F52F0(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov byte ptr [ecx + 0x160], al
        ret 0x4
        nop
        nop
        nop
        mov al, byte ptr [esp + 0x4]
        mov byte ptr [ecx + 0x1e8], al
        ret 0x4
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x270], eax
        mov dword ptr [ecx + 0x274], edx
        ret 0x8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        fld qword ptr [mem_0092A278]
        fcomp qword ptr [esp + 0x4]
        fnstsw ax
        test ah, 0x41
        jne short L_006F5349
        fld qword ptr [mem_0092A278]
        jmp short L_006F5366
L_006F5349:
        fld qword ptr [esp + 0x4]
        fld qword ptr [mem_00993BE0]
        fcomp qword ptr [esp + 0x4]
        fnstsw ax
        test ah, 0x1
        je short L_006F5366
        fstp st(0)
        fld qword ptr [mem_00993BE0]
L_006F5366:
        fst qword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        fstp qword ptr [ecx + 0x2f8]
        mov ecx, dword ptr [ecx + 0x6958]
        push 0x0
        push eax
        push edx
        push 0x0
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 0x8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        fild dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        sub esp, 0x8
        mov dword ptr [ecx + 0x380], eax
        mov ecx, dword ptr [ecx + 0x6958]
        fstp qword ptr [esp]
        push 0x1
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 0x4
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782B10
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6BC0] sub_006F6BC0 (256 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FEF0();
extern "C" void ext_00782B60();

extern "C" __declspec(naked) void __fastcall fn_006F6BC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5a48], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x4c
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5b58], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x4d
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5c68], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x4e
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5d78], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x4f
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5e88], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x50
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782B60
        add esp, 0x4
        ret 0x4
    }
}

extern "C" void __stdcall ext_006C4DB0(int, int, int, int);
extern "C" void __fastcall ext_006F8AC0(void* self);
extern "C" void __fastcall ext_006F8B10(void* self);

// [0x006F8CF0] sub_006F8CF0 (272 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F8CF0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr [edi + 0x4], 0x0
        mov byte ptr [edi + 0x9], 0x0
        mov byte ptr [edi + 0xa], 0x0
        lea esi, [edi + 0xc]
    L_loop1:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_skip1
        mov eax, dword ptr [edi]
        push 0x0
        push ebx
        push 0x1
        push eax
        call ext_006C4DB0
        mov ecx, esi
        call ext_006F8AC0
    L_skip1:
        inc ebx
        add esi, 0x50
        cmp ebx, 0xbf
        jl L_loop1

        lea ebp, [edi + 0x3bbc]
        xor ebx, ebx
        lea esi, [edi + 0x3dcc]
        mov dword ptr [esp + 0x10], ebp
        jmp L_loop2_entry
    L_loop2_top:
        mov ebp, dword ptr [esp + 0x10]
    L_loop2_entry:
        mov ecx, dword ptr [ebp]
        test ecx, ecx
        je L_skip2
        mov edx, dword ptr [edi]
        push 0x0
        push ebx
        push 0x2
        push edx
        call ext_006C4DB0
    L_skip2:
        mov ecx, ebp
        call ext_006F8B10
        xor ebp, ebp
    L_loop3:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_skip3
        mov eax, dword ptr [edi]
        push ebp
        push ebx
        push 0x3
        push eax
        call ext_006C4DB0
        mov dword ptr [esi], 0x0
    L_skip3:
        inc ebp
        add esi, 0x4
        cmp ebp, 0xe
        jl L_loop3

        mov ecx, dword ptr [esp + 0x10]
        inc ebx
        add ecx, 0xc
        cmp ebx, 0x2c
        mov dword ptr [esp + 0x10], ecx
        jl L_loop2_top

        mov byte ptr [edi + 0x3bc1], 0x1
        mov byte ptr [edi + 0x3bc2], 0x1
        mov byte ptr [edi + 0x3bcd], 0x1
        mov byte ptr [edi + 0x3bce], 0x1
        mov byte ptr [edi + 0x3bcf], 0x1
        mov byte ptr [edi + 0x3bd0], 0x1
        mov byte ptr [edi + 0x3bd9], 0x1
        mov byte ptr [edi + 0x3bda], 0x1
        mov byte ptr [edi + 0x3bdb], 0x1
        mov byte ptr [edi + 0x3bdc], 0x1
        mov byte ptr [edi + 0x3be5], 0x1
        mov byte ptr [edi + 0x3be7], 0x1
        mov byte ptr [edi + 0x3bf1], 0x1
        mov byte ptr [edi + 0x3bf3], 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x006F69F0] sub_006F69F0 (336 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F69F0(void* self) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x2968], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0xab
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop

        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5470], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0x7d
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5580], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0x80
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop

        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5608], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0x81
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop

        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5690], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0x82
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop

        mov al, byte ptr [esp + 0x4]
        xor edx, edx
        test al, al
        setne dl
        mov byte ptr [ecx + 0x5718], al
        mov ecx, dword ptr [ecx + 0x6958]
        push edx
        push 0x83
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop

        fild dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        sub esp, 0x8
        mov dword ptr [ecx + 0x57a0], eax
        mov ecx, dword ptr [ecx + 0x6958]
        fstp qword ptr [esp]
        push 0x84
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 0x4
    }
}

// [0x006F6CC0] sub_006F6CC0 (384 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F6CC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x5f98], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x51
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6130], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x53
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6240], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x54
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6350], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x55
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6460], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x56
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6570], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x57
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x6680], eax
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        push 0x58
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FEF0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        fild dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        sub esp, 0x8
        mov dword ptr [ecx + 0x2390], eax
        mov ecx, dword ptr [ecx + 0x6958]
        fstp qword ptr [esp]
        push 0xae
        call ext_006F76F0
        mov ecx, eax
        call ext_0077FF90
        ret 0x4
    }
}

// [0x006F53E0] sub_006F53E0 (832 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FEF0();
extern "C" void ext_0077FF90();
extern "C" void ext_00782B80();
extern "C" __declspec(naked) void __fastcall fn_006F53E0(void* self) {
    __asm {
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x408], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x2
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	eax, dword ptr [esp + 0x4]
        mov	dword ptr [ecx + 0x518], eax
        mov	ecx, dword ptr [ecx + 0x6958]
        push	eax
        push	0x3
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	eax, dword ptr [esp + 0x4]
        mov	dword ptr [ecx + 0x628], eax
        mov	ecx, dword ptr [ecx + 0x6958]
        push	eax
        push	0x4
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	eax, dword ptr [esp + 0x4]
        mov	dword ptr [ecx + 0x738], eax
        mov	ecx, dword ptr [ecx + 0x6958]
        push	eax
        push	0x5
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	eax, dword ptr [esp + 0x4]
        mov	dword ptr [ecx + 0x848], eax
        mov	ecx, dword ptr [ecx + 0x6958]
        push	eax
        push	0x6
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x958], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x8
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x1b98], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x43
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x1ca8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x44
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x1db8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x45
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x1ec8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x46
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x1fd8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x47
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x20e8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x48
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x21f8], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x49
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x2308], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x4a
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x2418], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x2c
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov	al, byte ptr [esp + 0x4]
        xor	edx, edx
        test	al, al
        setne	dl
        mov	byte ptr [ecx + 0x24a0], al
        mov	ecx, dword ptr [ecx + 0x6958]
        push	edx
        push	0x34
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FEF0
        ret	0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        fild	dword ptr [esp + 0x4]
        mov	eax, dword ptr [esp + 0x4]
        push	0x0
        sub	esp, 0x8
        mov	dword ptr [ecx + 0x1a88], eax
        mov	ecx, dword ptr [ecx + 0x6958]
        fstp	qword ptr [esp]
        push	0x42
        call ext_006F76F0
        mov	ecx, eax
        call ext_0077FF90
        ret	0x4
        nop
        nop
        nop
        mov	eax, dword ptr [esp + 0x4]
        push	eax
        call ext_00782B80
        add	esp, 0x4
        ret	0x4
    }
}

// [0x006FE940] sub_006FE940 (927 bytes)
extern "C" int mem_00B5D2C0;
extern "C" int mem_009252F0;
extern "C" int mem_009251D0;
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9F80();
extern "C" void ext_006BA040();
extern "C" void ext_006BA0C0();
extern "C" void ext_006BA780();
extern "C" void ext_006FE4B0();
extern "C" void ext_006FE6A0();
extern "C" void ext_006FECE0();
extern "C" void ext_006FED50();

extern "C" __declspec(naked) void __fastcall fn_006FE940(void* self) {
    __asm {
        push -1
        push 0x8bb623
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x798
        mov dl, byte ptr [mem_00B5D2C0]
        push ebx
        push esi
        push edi
        mov ecx, 0x40
        xor eax, eax
        lea edi, [esp + 0x291]
        mov byte ptr [esp + 0x290], dl
        rep stosd
        stosw
        stosb
        mov ecx, 0x40
        xor eax, eax
        lea edi, [esp + 0x18d]
        mov byte ptr [esp + 0x18c], dl
        rep stosd
        stosw
        mov esi, dword ptr [mem_009252F0]
        push 0x104
        stosb
        mov eax, dword ptr [esp + 0x7bc]
        lea ecx, [esp + 0x294]
        push eax
        push ecx
        mov dword ptr [esp + 0x18], 0x0
        call esi
        mov edx, dword ptr [esp + 0x7c8]
        push 0x104
        lea eax, [esp + 0x19c]
        push edx
        push eax
        call esi
        add esp, 0x18
        lea ecx, [esp + 0xf4]
        call ext_006B9D10
        mov edi, 0x1
        lea ecx, [esp + 0xa8]
        mov dword ptr [esp + 0x7ac], edi
        call ext_006B9D10
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x7ac], 0x2
        call ext_006B9D10
        lea ecx, [esp + 0x18c]
        lea edx, [esp + 0x10]
        push ecx
        push edx
        mov byte ptr [esp + 0x7b4], 0x3
        call ext_006FE6A0
        mov esi, eax
        lea eax, [esp + 0x298]
        lea ecx, [esp + 0x148]
        push eax
        push ecx
        mov byte ptr [esp + 0x7bc], 0x4
        call ext_006FE6A0
        add esp, 0x10
        push esi
        mov ecx, eax
        mov byte ptr [esp + 0x7b0], 0x5
        call ext_006BA780
        lea ecx, [esp + 0x140]
        mov bl, al
        mov byte ptr [esp + 0x7ac], 0x4
        call ext_006B9D70
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x7ac], 0x3
        call ext_006B9D70
        test bl, bl
        je fail_path
        lea edx, [esp + 0x290]
        push ebp
        lea eax, [esp + 0x14]
        push edx
        push eax
        call ext_006FED50
        add esp, 0x8
        push eax
        lea ecx, [esp + 0xfc]
        mov byte ptr [esp + 0x7b4], 0x6
        call ext_006B9E60
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x7b0], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x190]
        lea edx, [esp + 0x14]
        push ecx
        push edx
        call ext_006FED50
        add esp, 0x8
        push eax
        lea ecx, [esp + 0xb0]
        mov byte ptr [esp + 0x7b4], 0x7
        call ext_006B9E60
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x7b0], 0x3
        call ext_006B9D70
        lea eax, [esp + 0x5a0]
        lea ecx, [esp + 0xf8]
        push eax
        push ecx
        call ext_006FECE0
        mov esi, eax
        lea edx, [esp + 0x3a0]
        lea eax, [esp + 0xb4]
        push edx
        push eax
        call ext_006FECE0
        add esp, 0x10
        xor edi, edi
        test esi, esi
        mov ebp, eax
        jle loop1_exit
        mov ebx, dword ptr [mem_009251D0]
    loop1_top:
        cmp edi, ebp
        jge loop1_exit
        mov ecx, dword ptr [esp + 4*edi + 0x398]
        mov edx, dword ptr [esp + 4*edi + 0x5a0]
        push ecx
        push edx
        call ebx
        add esp, 0x8
        test eax, eax
        jne loop1_exit
        inc edi
        cmp edi, esi
        jl loop1_top
    loop1_exit:
        lea eax, [esi - 0x1]
        cmp edi, eax
        jg loop2_skip
        sub eax, edi
        mov bl, 0x8
        inc eax
        mov esi, eax
    loop2_top:
        lea eax, [esp + 0x60]
        push 0xaab930
        lea ecx, [esp + 0x18]
        push eax
        push ecx
        call ext_006BA0C0
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x7b4], bl
        call ext_006B9E60
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x7b0], 0x3
        call ext_006B9D70
        dec esi
        jne loop2_top
    loop2_skip:
        lea eax, [ebp - 0x1]
        pop ebp
        cmp edi, eax
        jg loop3_skip
        sub eax, edi
        lea esi, [esp + 4*edi + 0x394]
        inc eax
        mov bl, 0x9
        mov edi, eax
    loop3_top:
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x5c]
        push edx
        lea ecx, [esp + 0x144]
        push eax
        push ecx
        call ext_006BA0C0
        push 0x2f
        lea edx, [esp + 0x20]
        push eax
        push edx
        mov byte ptr [esp + 0x7c4], bl
        call ext_006BA040
        add esp, 0x18
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x7b0], 0xa
        call ext_006B9E60
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x7ac], bl
        call ext_006B9D70
        lea ecx, [esp + 0x140]
        mov byte ptr [esp + 0x7ac], 0x3
        call ext_006B9D70
        add esi, 0x4
        dec edi
        jne loop3_top
    loop3_skip:
        lea eax, [esp + 0x18c]
        push 0x1
        lea ecx, [esp + 0x14]
        push eax
        push ecx
        call ext_006FE4B0
        mov esi, dword ptr [esp + 0x7c0]
        lea edx, [esp + 0x68]
        push eax
        push edx
        push esi
        mov byte ptr [esp + 0x7c4], 0xb
        call ext_006B9F80
        add esp, 0x18
        mov dword ptr [esp + 0xc], 0x1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x7ac], 0x3
        call ext_006B9D70
        jmp cleanup
    fail_path:
        mov esi, dword ptr [esp + 0x7b4]
        lea eax, [esp + 0x18c]
        push eax
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esp + 0xc], edi
    cleanup:
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x7ac], 0x2
        call ext_006B9D70
        lea ecx, [esp + 0xa8]
        mov byte ptr [esp + 0x7ac], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0xf4]
        mov byte ptr [esp + 0x7ac], 0x0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x7a4]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x7a4
        ret
    }
}

// [0x006F5760] sub_006F5760 (944 bytes)
extern "C" int mem_009939D8;
extern "C" int mem_00928E78;
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" void ext_00782BD0();
extern "C" __declspec(naked) void __fastcall fn_006F5760(void* self, int edx_unused, double a1) {
    __asm {
        // ---- block 0 @0x006F5760 : clamp(a1) -> self+0x25b0, notify id 0x2d, ret 8
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b0_lo
        fld     qword ptr [mem_009939D8]
        jmp     b0_done
    b0_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b0_mid
        fld     qword ptr [mem_00928E78]
        jmp     b0_done
    b0_mid:
        fld     qword ptr [esp + 4]
    b0_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 25b0h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    2dh
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 1 @0x006F57D0 : id 0x2e, field 0x2638
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b1_lo
        fld     qword ptr [mem_009939D8]
        jmp     b1_done
    b1_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b1_mid
        fld     qword ptr [mem_00928E78]
        jmp     b1_done
    b1_mid:
        fld     qword ptr [esp + 4]
    b1_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 2638h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    2eh
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 2 @0x006F5840 : id 0x2f, field 0x26c0
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b2_lo
        fld     qword ptr [mem_009939D8]
        jmp     b2_done
    b2_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b2_mid
        fld     qword ptr [mem_00928E78]
        jmp     b2_done
    b2_mid:
        fld     qword ptr [esp + 4]
    b2_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 26c0h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    2fh
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 3 @0x006F58B0 : id 0x30, field 0x2748
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b3_lo
        fld     qword ptr [mem_009939D8]
        jmp     b3_done
    b3_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b3_mid
        fld     qword ptr [mem_00928E78]
        jmp     b3_done
    b3_mid:
        fld     qword ptr [esp + 4]
    b3_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 2748h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    30h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 4 @0x006F5920 : id 0x31, field 0x27d0
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b4_lo
        fld     qword ptr [mem_009939D8]
        jmp     b4_done
    b4_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b4_mid
        fld     qword ptr [mem_00928E78]
        jmp     b4_done
    b4_mid:
        fld     qword ptr [esp + 4]
    b4_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 27d0h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    31h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 5 @0x006F5990 : id 0x32, field 0x2858
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b5_lo
        fld     qword ptr [mem_009939D8]
        jmp     b5_done
    b5_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b5_mid
        fld     qword ptr [mem_00928E78]
        jmp     b5_done
    b5_mid:
        fld     qword ptr [esp + 4]
    b5_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 2858h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    32h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 6 @0x006F5A00 : id 0x33, field 0x28e0
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_009939D8]
        fnstsw  ax
        test    ah, 1
        je      b6_lo
        fld     qword ptr [mem_009939D8]
        jmp     b6_done
    b6_lo:
        fld     qword ptr [esp + 4]
        fcomp   qword ptr [mem_00928E78]
        fnstsw  ax
        test    ah, 41h
        jne     b6_mid
        fld     qword ptr [mem_00928E78]
        jmp     b6_done
    b6_mid:
        fld     qword ptr [esp + 4]
    b6_done:
        fst     qword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fstp    qword ptr [ecx + 28e0h]
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    33h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 7 @0x006F5A70 : byte arg, field 0x2c10, id 0x37, callee 0x77FEF0, ret 4
        mov     al, byte ptr [esp + 4]
        xor     edx, edx
        test    al, al
        setne   dl
        mov     byte ptr [ecx + 2c10h], al
        mov     ecx, dword ptr [ecx + 6958h]
        push    edx
        push    37h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FEF0
        ret     4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 8 @0x006F5AA0 : byte arg, field 0x2c98, id 0x3f, callee 0x77FEF0, ret 4
        mov     al, byte ptr [esp + 4]
        xor     edx, edx
        test    al, al
        setne   dl
        mov     byte ptr [ecx + 2c98h], al
        mov     ecx, dword ptr [ecx + 6958h]
        push    edx
        push    3fh
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FEF0
        ret     4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        // ---- block 9 @0x006F5AD0 : int arg, field 0x2d20, id 0x40, ret 4
        fild    dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 4]
        push    0
        sub     esp, 8
        mov     dword ptr [ecx + 2d20h], eax
        mov     ecx, dword ptr [ecx + 6958h]
        fstp    qword ptr [esp]
        push    40h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     4
        nop
        nop
        nop
        // ---- block 10 @0x006F5B00 : passthrough to 0x782BD0, ret 4
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    ext_00782BD0
        add     esp, 4
        ret     4
    }
}
