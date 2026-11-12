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
