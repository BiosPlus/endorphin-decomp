// Decompiled translation unit: src/leaf/decompiled_6F0000.cpp
// Isolated WIP translation unit for fn_006FA950
extern "C" void ext_006FBC70();
extern "C" void ext_006FC950();
extern "C" void ext_006D2200();
extern "C" void ext_006FC830();

extern "C" void ext_006FC830();
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
extern "C" void ext_006FBC50();
// Isolated WIP translation unit for fn_006F7850
extern "C" void ext_006B9D10();
extern "C" void __fastcall ext_006F8AC0(void* self);

extern "C" void __fastcall ext_006F8AC0(void* self);
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
extern "C" void ext_006B9950();
extern "C" void ext_006F8AD0();

extern "C" void ext_006F8AD0();
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
extern "C" void ext_006EA7C0();
extern "C" char __cdecl ext_006FF730(int ch, const unsigned short* s);
extern "C" unsigned int (__cdecl *mem_00925334)(const wchar_t*);

extern "C" unsigned int (__cdecl *mem_00925334)(const wchar_t*);
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
extern "C" void ext_006C4D70();
extern "C" void __stdcall ext_006C4DB0(int, int, int, int);

extern "C" void __stdcall ext_006C4DB0(int, int, int, int);
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
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();

extern "C" void ext_006D2250();
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
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall fn_006FC8E0(void* self);

extern "C" void __fastcall fn_006FC8E0(void* self);
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
extern "C" void ext_006F9E60();
extern "C" int mem_00B5E438;

extern "C" int mem_00B5E438;
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
extern "C" void ext_00711D40();

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

// [0x006F5B10] sub_006F5B10 (3568 bytes)
extern "C" void ext_006F76F0();
extern "C" void ext_0077FF90();
extern "C" void ext_0077FEF0();
extern "C" int mem_009939D8;
extern "C" int mem_00928E78;
extern "C" __declspec(naked) void __fastcall fn_006F5B10(void* self, int edx_unused, double a1) {
    __asm {
        // ---- block 0 @0x006F5B10 : clamp(a1) -> self+0x2da8, notify id 0x38, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xa8
        _emit   0x2d
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    38h
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
        // ---- block 1 @0x006F5B80 : clamp(a1) -> self+0x2e30, notify id 0x39, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x30
        _emit   0x2e
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    39h
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
        // ---- block 2 @0x006F5BF0 : clamp(a1) -> self+0x2eb8, notify id 0x3a, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xb8
        _emit   0x2e
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    3ah
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
        // ---- block 3 @0x006F5C60 : clamp(a1) -> self+0x2f40, notify id 0x3b, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x40
        _emit   0x2f
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    3bh
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
    }
    __asm {
        // ---- block 4 @0x006F5CD0 : clamp(a1) -> self+0x2fc8, notify id 0x3c, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xc8
        _emit   0x2f
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    3ch
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
        // ---- block 5 @0x006F5D40 : clamp(a1) -> self+0x3050, notify id 0x3d, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x50
        _emit   0x30
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    3dh
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
        // ---- block 6 @0x006F5DB0 : clamp(a1) -> self+0x30d8, notify id 0x3e, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xd8
        _emit   0x30
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    3eh
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
        // ---- block 7 @0x006F5E20 : clamp(a1) -> self+0x3408, notify id 0x8d, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x08
        _emit   0x34
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    8dh
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
    }
    __asm {
        // ---- block 8 @0x006F5E90 : clamp(a1) -> self+0x3490, notify id 0x8e, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x90
        _emit   0x34
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    8eh
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
        // ---- block 9 @0x006F5F00 : clamp(a1) -> self+0x3518, notify id 0x8f, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x18
        _emit   0x35
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    8fh
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
        // ---- block 10 @0x006F5F70 : clamp(a1) -> self+0x35a0, notify id 0x90, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xa0
        _emit   0x35
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    90h
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
        // ---- block 11 @0x006F5FE0 : clamp(a1) -> self+0x3628, notify id 0x91, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x28
        _emit   0x36
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    91h
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
    }
    __asm {
        // ---- block 12 @0x006F6050 : clamp(a1) -> self+0x36b0, notify id 0x92, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xb0
        _emit   0x36
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    92h
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
        // ---- block 13 @0x006F60C0 : clamp(a1) -> self+0x3738, notify id 0x93, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x38
        _emit   0x37
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    93h
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
        // ---- block 14 @0x006F6130 : clamp(a1) -> self+0x37c0, notify id 0x94, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xc0
        _emit   0x37
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    94h
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
        // ---- block 15 @0x006F61A0 : clamp(a1) -> self+0x3848, notify id 0x95, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x48
        _emit   0x38
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    95h
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
    }
    __asm {
        // ---- block 16 @0x006F6210 : clamp(a1) -> self+0x38d0, notify id 0x96, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xd0
        _emit   0x38
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    96h
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
        // ---- block 17 @0x006F6280 : clamp(a1) -> self+0x3958, notify id 0x97, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x58
        _emit   0x39
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    97h
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
        // ---- block 18 @0x006F62F0 : clamp(a1) -> self+0x39e0, notify id 0x98, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xe0
        _emit   0x39
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    98h
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
        // ---- block 19 @0x006F6360 : clamp(a1) -> self+0x3a68, notify id 0x99, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x68
        _emit   0x3a
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    99h
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
    }
    __asm {
        // ---- block 20 @0x006F63D0 : clamp(a1) -> self+0x3af0, notify id 0x9a, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xf0
        _emit   0x3a
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9ah
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
        // ---- block 21 @0x006F6440 : clamp(a1) -> self+0x3b78, notify id 0x9b, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x78
        _emit   0x3b
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9bh
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
        // ---- block 22 @0x006F64B0 : clamp(a1) -> self+0x3c00, notify id 0x9c, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x00
        _emit   0x3c
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9ch
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
        // ---- block 23 @0x006F6520 : clamp(a1) -> self+0x3c88, notify id 0x9d, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x88
        _emit   0x3c
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9dh
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
    }
    __asm {
        // ---- block 24 @0x006F6590 : clamp(a1) -> self+0x3d10, notify id 0x9e, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x10
        _emit   0x3d
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9eh
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
        // ---- block 25 @0x006F6600 : clamp(a1) -> self+0x3d98, notify id 0x9f, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x98
        _emit   0x3d
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    9fh
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
        // ---- block 26 @0x006F6670 : clamp(a1) -> self+0x3e20, notify id 0xa0, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x20
        _emit   0x3e
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    0a0h
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
        // ---- block 27 @0x006F66E0 : clamp(a1) -> self+0x3ea8, notify id 0xa1, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xa8
        _emit   0x3e
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    0a1h
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
    }
    __asm {
        // ---- block 28 @0x006F6750 : clamp(a1) -> self+0x3f30, notify id 0xa2, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x30
        _emit   0x3f
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    0a2h
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
        // ---- block 29 @0x006F67C0 : clamp(a1) -> self+0x3fb8, notify id 0xa3, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0xb8
        _emit   0x3f
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    0a3h
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
        // ---- block 30 @0x006F6830 : clamp(a1) -> self+0x4040, notify id 0xa4, ret 8
        // x87 + short jumps emitted as raw bytes (compiler FP-stack model breaks on this layout)
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 1
        _emit   0x74
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0xD8
        _emit   0x39
        _emit   0x99
        _emit   0x00
        _emit   0xEB
        _emit   0x1D
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDC
        _emit   0x1D
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xDF
        _emit   0xE0
        test    ah, 41h
        _emit   0x75
        _emit   0x08
        _emit   0xDD
        _emit   0x05
        _emit   0x78
        _emit   0x8E
        _emit   0x92
        _emit   0x00
        _emit   0xEB
        _emit   0x04
        _emit   0xDD
        _emit   0x44
        _emit   0x24
        _emit   0x04
        _emit   0xDD
        _emit   0x54
        _emit   0x24
        _emit   0x04
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        _emit   0xDD
        _emit   0x99
        _emit   0x40
        _emit   0x40
        _emit   0x00
        _emit   0x00
        mov     ecx, dword ptr [ecx + 6958h]
        push    0
        push    eax
        push    edx
        push    0a4h
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
        // ---- block 31 @0x006F68A0 : byte arg, field 0x40c8, id 0xa5, callee 0x77FEF0, ret 4
        mov     al, byte ptr [esp + 4]
        xor     edx, edx
        test    al, al
        setne   dl
        mov     byte ptr [ecx + 40c8h], al
        mov     ecx, dword ptr [ecx + 6958h]
        push    edx
        push    0a5h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FEF0
        ret     4
        nop
        nop
        nop
        nop
        // ---- block 32 @0x006F68D0 : int arg, field 0x31e8, id 0xa6, ret 4
        fild    dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 4]
        push    0
        sub     esp, 8
        mov     dword ptr [ecx + 31e8h], eax
        mov     ecx, dword ptr [ecx + 6958h]
        fstp    qword ptr [esp]
        push    0a6h
        call    ext_006F76F0
        mov     ecx, eax
        call    ext_0077FF90
        ret     4
    }
}

// [0x006FE010] sub_006FE010 (16 bytes)
extern "C" void ext_006FE020();
extern "C" __declspec(naked) void __stdcall fn_006FE010(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006FE020
        ret 8
    }
}

// [0x006F7710] sub_006F7710 (32 bytes)
extern "C" int mem_00AA970C;

extern "C" int __cdecl fn_006F7710(int idx, int sub) {
    int* base = *(int**)(((int*)&mem_00AA970C) + idx);
    return base[sub * 3];
}

// [0x006F7730] sub_006F7730 (32 bytes)
extern "C" int __cdecl fn_006F7730(int idx, int sub) {
    int* base = *(int**)(((int*)&mem_00AA970C) + idx);
    return base[sub * 3 + 1];
}

// [0x006F7750] sub_006F7750 (32 bytes)
extern "C" int __cdecl fn_006F7750(int idx, int sub) {
    int* base = *(int**)(((int*)&mem_00AA970C) + idx);
    return base[sub * 3 + 2];
}

// [0x006F7930] sub_006F7930 (32 bytes)
// [0x006F7930]
extern "C" __declspec(naked) int __fastcall fn_006F7930(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        push 0
        push 0
        lea edx, [esp + 0xc]
        push 0
        push edx
        call dword ptr [eax + 0x8c]
        ret 4
    }
}

// [0x006F8AF0] sub_006F8AF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F8AF0(void* self) {
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x08
        _emit 0xc6
        _emit 0x40
        _emit 0x04
        _emit 0x01
        _emit 0x88
        _emit 0x48
        _emit 0x05
        _emit 0x88
        _emit 0x48
        _emit 0x06
        _emit 0x88
        _emit 0x48
        _emit 0x07
        _emit 0x88
        _emit 0x48
        _emit 0x08
        ret
    }
}

// [0x006F8B10] sub_006F8B10 (32 bytes)
extern "C" void __fastcall fn_006F8B10(void* self) {
    unsigned char* p = (unsigned char*)self;
    p[4] = 1;
    *(unsigned int*)(p + 0) = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
}

// [0x006F90D0] sub_006F90D0 (32 bytes)
// [0x006F90D0]
extern "C" int mem_00AAB3EC[];

extern "C" __declspec(naked) int __cdecl fn_006F90D0(int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short zero_006F90D0
        cmp eax, 2Ch
        jge short zero_006F90D0
        mov eax, dword ptr [eax*4 + mem_00AAB3EC]
        ret
zero_006F90D0:
        xor eax, eax
        ret
    }
}

// [0x006FA3C0] sub_006FA3C0 (32 bytes)
// [0x006FA3C0]
extern "C" void __fastcall fn_006FA3C0(void* self, int edx_unused, unsigned int a1) {
    unsigned int* f = (unsigned int*)((char*)self + 0x34);
    *f = (*f & 0x87ffffffu) | (a1 << 0x1b);
}

// [0x006F8AD0] sub_006F8AD0 (32 bytes)
extern "C" void ext_006B9E60();
extern "C" __declspec(naked) void __fastcall fn_006F8AD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        add eax, 0x4
        mov dword ptr [esi], ecx
        push eax
        lea ecx, [esi + 0x4]
        call ext_006B9E60
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006F7910] sub_006F7910 (32 bytes)
extern "C" void ext_00711DA0();
extern "C" void ext_00712A20();
extern "C" __declspec(naked) void __fastcall fn_006F7910(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x0
        call ext_00712A20
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_00711DA0
        pop esi
        ret 0x4
    }
}

// [0x006F7950] sub_006F7950 (32 bytes)
extern "C" void ext_006D7E50();
extern "C" void ext_00711DA0();
extern "C" __declspec(naked) void __fastcall fn_006F7950(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x0
        call ext_006D7E50
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_00711DA0
        pop esi
        ret 0x4
    }
}

// [0x006FA3E0] sub_006FA3E0 (32 bytes)
extern "C" void ext_006FA3B0();
extern "C" void ext_006FA3C0();

extern "C" __declspec(naked) void __fastcall fn_006FA3E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006FA3B0
        inc eax
        mov ecx, esi
        push eax
        call ext_006FA3C0
        pop esi
        ret
    }
}

// [0x006FA300] sub_006FA300 (32 bytes)
extern "C" void ext_006FA320();
extern "C" __declspec(naked) void __fastcall fn_006FA300(void* self) {
    __asm {
        push esi
        push 0
        mov esi, ecx
        push 0
        push 0
        push esi
        mov eax, dword ptr [esi]
        push 0x17
        push 0
        call dword ptr [eax + 0x3c]
        mov ecx, esi
        call ext_006FA320
        pop esi
        ret
    }
}

// [0x006FB5A0] sub_006FB5A0 (32 bytes)
extern "C" void ext_006FAF30();

// [0x006FB5A0] sub_006FB5A0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FB5A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push 0
        push ecx
        push 0
        push edx
        call ext_006FAF30
        add esp, 14h
        ret
    }
}

// [0x006FB650] sub_006FB650 (32 bytes)
extern "C" void ext_006FB5A0();
extern "C" __declspec(naked) void __fastcall fn_006FB650(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0Ch]
        push ecx
        call ext_006FB5A0
        add esp, 0Ch
        ret 8
    }
}

// [0x006FB670] sub_006FB670 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FB670(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push edx
        push ecx
        call ext_006FB5A0
        add esp, 0Ch
        ret 8
    }
}

// [0x006FB690] sub_006FB690 (32 bytes)
extern "C" int __cdecl ext_006FB5C0(int, int, void*, int, int);
extern "C" int __fastcall fn_006FB690(void* self, int edx_unused, int a1, int a2, int a3) {
    return ext_006FB5C0(a2, -1, self, a1, a3);
}

// [0x006FB6B0] sub_006FB6B0 (32 bytes)
extern "C" int __fastcall fn_006FB6B0(void* self, int edx_unused, int a1, int a2, int a3) {
    return ext_006FB5C0((int)self, a1, (void*)a2, -1, a3);
}

// [0x006FBC50] sub_006FBC50 (32 bytes)
extern "C" void ext_006FB6D0();

extern "C" void __fastcall fn_006FBC50(void* self, int edx_unused, int a1) {
    typedef void (__cdecl *fn_t)(void*, int);
    ((fn_t)ext_006FB6D0)(self, a1);
}

// [0x006FBC70] sub_006FBC70 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FBC70(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ecx
        push eax
        call ext_006FB6D0
        add esp, 0x8
        ret 0x4
    }
}

extern "C" void ext_006D2130();

// [0x006FCF10] sub_006FCF10 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006FCF10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 0x10
        mov esi, ecx
        push eax
        call ext_006D2130
        lea ecx, [esi + 0x10]
        mov eax, esi
        mov dword ptr [esi + 0x14], ecx
        pop esi
        ret 0x4
    }
}

// [0x006FCF80] sub_006FCF80 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006FCF80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 0x20
        mov esi, ecx
        push eax
        call ext_006D2130
        lea ecx, [esi + 0x10]
        mov eax, esi
        mov dword ptr [esi + 0x14], ecx
        pop esi
        ret 0x4
    }
}

// [0x006FD400] sub_006FD400 (32 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006FD420();

extern "C" __declspec(naked) void* __fastcall fn_006FD400(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006FD420
        test byte ptr [esp + 0x8], 0x1
        je done
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006F8B30] sub_006F8B30 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F8B30(void* self, int edx_unused, const void* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov dl, byte ptr [ecx + 0x4]
        mov byte ptr [eax + 0x4], dl
        mov dl, byte ptr [ecx + 0x5]
        mov byte ptr [eax + 0x5], dl
        mov dl, byte ptr [ecx + 0x6]
        mov byte ptr [eax + 0x6], dl
        mov dl, byte ptr [ecx + 0x7]
        mov byte ptr [eax + 0x7], dl
        mov cl, byte ptr [ecx + 0x8]
        mov byte ptr [eax + 0x8], cl
        ret 0x4
    }
}

// [0x006FA990] sub_006FA990 (48 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006FA990(void* self, int edx_unused, int a1, int a2) {
    __asm {
        test byte ptr [ecx + 0x34], 0x1
        je short L_false_006FA990
        mov ecx, dword ptr [ecx + 0x38]
        mov edx, dword ptr [esp + 0x4]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
        test al, al
        je short L_false_006FA990
        mov al, 0x1
        ret 0x8
L_false_006FA990:
        xor al, al
        ret 0x8
    }
}

// [0x006FA9C0] sub_006FA9C0 (48 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006FA9C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        test byte ptr [ecx + 0x34], 0x2
        je short L_false_006FA9C0
        mov ecx, dword ptr [ecx + 0x38]
        mov edx, dword ptr [esp + 0x4]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
        test al, al
        je short L_false_006FA9C0
        mov al, 0x1
        ret 0x8
L_false_006FA9C0:
        xor al, al
        ret 0x8
    }
}

// [0x006FB520] sub_006FB520 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FB520(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        je fn_006FB520_null
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        ret 4
fn_006FB520_null:
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        ret 4
    }
}

// [0x006FF730] sub_006FF730 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006FF730(int ch, const unsigned short* s) {
    __asm {
        mov edx, dword ptr [esp + 8]
        xor al, al
        test edx, edx
        push esi
        je done
        mov si, word ptr [esp + 8]
loop_top:
        mov cx, word ptr [edx]
        test cx, cx
        je done
        cmp cx, si
        je found
        add edx, 2
        jne loop_top
        pop esi
        ret
found:
        mov al, 1
done:
        pop esi
        ret
    }
}

// [0x006F2260] sub_006F2260 (48 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F2260(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f83a0
        push 0x6f8550
        push eax
        push edx
        add ecx, 0x6600
        call ext_00711D40
        ret 0x8
    }
}

// [0x006FA400] sub_006FA400 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FA400(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_006FA3B0
        mov esi, eax
        mov ecx, edi
        dec esi
        push esi
        call ext_006FA3C0
        test esi, esi
        jne done
        test dword ptr [edi + 0x34], 0x10000
        je done
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        call dword ptr [eax + 0x4]
done:
        pop edi
        pop esi
        ret
    }
}

// [0x006FDF90] sub_006FDF90 (48 bytes)
extern "C" void ext_006FDFC0();
extern "C" __declspec(naked) void* __fastcall fn_006FDF90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006FDFC0
        xor ecx, ecx
        test eax, eax
        jl short fn_006FDF90_neg
        mov edx, dword ptr [esi + 0x20]
        pop esi
        mov eax, dword ptr [edx + 4*eax]
        ret 0x8
fn_006FDF90_neg:
        mov eax, ecx
        pop esi
        ret 0x8
    }
}

// [0x006F9E60] sub_006F9E60 (48 bytes)
extern "C" void ext_006F9DE0();
extern "C" void ext_006F9E90();
extern "C" int mem_00B5E420;
extern "C" int mem_00B5E41C;

extern "C" __declspec(naked) void __fastcall fn_006F9E60(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B5E420]
        test eax, eax
        jne short done
        call ext_006F9DE0
        mov ecx, dword ptr [mem_00B5E41C]
        test ecx, ecx
        je short done
        call ext_006F9E90
done:
        inc dword ptr [mem_00B5E420]
        ret
    }
}

// [0x006FA430] sub_006FA430 (48 bytes)
extern "C" void ext_006FA5E0();

extern "C" __declspec(naked) void __fastcall fn_006FA430(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esp + 8]
        push edi
        mov edx, dword ptr [esi + 0x1c]
        mov edi, dword ptr [esp + 0xc]
        lea ecx, [esi + 0x1c]
        push eax
        push edx
        mov dword ptr [esp + 0x14], edi
        call ext_006D2170
        push edi
        mov ecx, esi
        call ext_006FA5E0
        pop edi
        pop esi
        ret 4
    }
}

// [0x006FA320] sub_006FA320 (48 bytes)
extern "C" void ext_006FA830();
extern "C" void ext_006FBC90();
extern "C" void ext_006FBCE0();

extern "C" __declspec(naked) void __fastcall fn_006FA320(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x34]
        and eax, 0x8
        cmp al, 0x8
        je skip_006FA320
        call ext_006FBC90
        mov ecx, esi
        call ext_006FBCE0
    skip_006FA320:
        mov ecx, esi
        call ext_006FA830
        pop esi
        ret
    }
}

// [0x006FEFB0] sub_006FEFB0 (64 bytes)
extern "C" int mem_00925278;
extern "C" int mem_009252A0;

extern "C" __declspec(naked) void __cdecl fn_006FEFB0(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je fn_006FEFB0_ret_false
        push 0x3a
        push esi
        call dword ptr [mem_00925278]
        add esp, 0x8
        test eax, eax
        jne fn_006FEFB0_ret_false
        push 0x2
        push 0xaab928
        push esi
        call dword ptr [mem_009252A0]
        add esp, 0xc
        test eax, eax
        je fn_006FEFB0_ret_false
        mov al, 0x1
        pop esi
        ret
    fn_006FEFB0_ret_false:
        xor al, al
        pop esi
        ret
    }
}

// [0x006F8FB0] sub_006F8FB0 (64 bytes)
extern "C" void ext_006F8B30();

extern "C" __declspec(naked) void __fastcall fn_006F8FB0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl   L_false
        cmp eax, 0x2c
        jge  L_false
        lea eax, [eax + 2*eax]
        lea eax, [ecx + 4*eax + 0x3bbc]
        cmp dword ptr [eax], 0x0
        je   L_false
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je   L_true
        push eax
        call ext_006F8B30
L_true:
        mov al, 0x1
        ret 0x8
L_false:
        xor al, al
        ret 0x8
    }
}

// [0x006FA950] sub_006FA950 (64 bytes)
extern "C" void ext_006FA430();

extern "C" __declspec(naked) void __fastcall fn_006FA950(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 38h], eax
        mov eax, dword ptr [ecx + 34h]
        push esi
        mov esi, eax
        and esi, 8
        cmp edx, esi
        pop esi
        je done
        and al, 0F7h
        or eax, edx
        mov dword ptr [ecx + 34h], eax
        and eax, 8
        cmp al, 8
        jne done
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        je done
        push ecx
        mov ecx, eax
        call ext_006FA430
    done:
        ret 8
    }
}

// [0x006F9E90] sub_006F9E90 (64 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);
extern "C" int mem_009241C0;

extern "C" __declspec(naked) void __fastcall fn_006F9E90(void* self) {
    __asm {
        push edi
        mov edi, ecx
        mov al, byte ptr [edi + 0x20]
        test al, al
        jne done
        push esi
        push 0x18
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        test esi, esi
        je fail
        push esi
        call dword ptr [mem_009241C0]
        mov dword ptr [edi + 0x1c], esi
        mov byte ptr [edi + 0x20], 0x1
        pop esi
        pop edi
        ret
fail:
        xor esi, esi
        mov byte ptr [edi + 0x20], 0x1
        mov dword ptr [edi + 0x1c], esi
        pop esi
done:
        pop edi
        ret
    }
}

// [0x006FBD70] sub_006FBD70 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FBD70(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x10]
        lea eax, [eax + 2*eax]
        lea edx, [edx + 4*eax]
        mov eax, dword ptr [edx + 4]
        test eax, eax
        je null_path
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [edx]
        cmp esi, edi
        pop edi
        pop esi
        jne null_path
        mov eax, dword ptr [eax + 4]
        push eax
        call ext_006FBC70
        ret 4
    null_path:
        xor eax, eax
        push eax
        call ext_006FBC70
        ret 4
    }
}

// [0x006FBD30] sub_006FBD30 (64 bytes)
extern "C" void ext_006FBC50();

extern "C" __declspec(naked) void __fastcall fn_006FBD30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov edx, dword ptr [esp + 0x4]
        add eax, edx
        mov edx, dword ptr [ecx + 0x10]
        lea eax, [eax + 2*eax]
        lea edx, [edx + 4*eax]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je short L_miss
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [edx]
        cmp esi, edi
        pop edi
        pop esi
        jne short L_miss
        mov eax, dword ptr [eax + 0x4]
        push eax
        call ext_006FBC50
        ret 0x4
    L_miss:
        xor eax, eax
        push eax
        call ext_006FBC50
        ret 0x4
    }
}

// [0x006FA370] sub_006FA370 (64 bytes)
extern "C" void ext_006FA3B0();
extern "C" void ext_006FA3C0();

extern "C" __declspec(naked) void __fastcall fn_006FA370(void* self, int edx_unused, unsigned int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006FA3B0
        test eax, eax
        je fn_006FA370_else
        mov eax, dword ptr [esi + 0x34]
        or eax, 0x10000
        mov dword ptr [esi + 0x34], eax
        pop esi
        ret 4
fn_006FA370_else:
        push 1
        mov ecx, esi
        call ext_006FA3C0
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x10]
        test esi, esi
        je fn_006FA370_done
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x8]
fn_006FA370_done:
        pop esi
        ret 4
    }
}

// [0x006FDF30] sub_006FDF30 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FDF30(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebp, ebp
        xor esi, esi
        mov ebx, dword ptr [edi + 0x10]
        test ebx, ebx
        jle done_loop
loop_top:
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov ecx, dword ptr [ecx + 4*esi]
        call ext_006FC950
        test eax, eax
        je skip_inc
        inc ebp
skip_inc:
        inc esi
        cmp esi, ebx
        jl loop_top
done_loop:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006FA460] sub_006FA460 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FA460(void* self, int edx_unused, int value) {
    void ext_006D2200();
    __asm {
        mov edx, dword ptr [ecx + 0x1c]
        add ecx, 0x1c
        xor eax, eax
        push esi
        push edi
        test edx, edx
        jle fa460_end
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0xc]
    fa460_loop:
        cmp dword ptr [esi], edi
        je fa460_found
        inc eax
        add esi, 4
        cmp eax, edx
        jl fa460_loop
        pop edi
        pop esi
        ret 4
    fa460_found:
        test eax, eax
        jl fa460_end
        push eax
        call ext_006D2200
    fa460_end:
        pop edi
        pop esi
        ret 4
    }
}

// [0x006FDEF0] sub_006FDEF0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FDEF0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push edi
        mov eax, dword ptr [ebx + 0x10]
        lea edi, [ebx + 0x10]
        test eax, eax
        je done
        push esi
    loop_top:
        mov ecx, dword ptr [ebx + 0x20]
        mov esi, dword ptr [ecx + eax*4 - 4]
        mov ecx, esi
        call ext_006FC830
        mov edx, dword ptr [edi]
        mov ecx, edi
        dec edx
        push edx
        call ext_006D2200
        test esi, esi
        je skip_release
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [eax]
    skip_release:
        mov eax, dword ptr [edi]
        test eax, eax
        jne loop_top
        pop esi
    done:
        pop edi
        pop ebx
        ret
    }
}

// [0x006F9ED0] sub_006F9ED0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F9ED0(void* self) {
    extern void __cdecl ext_006A5C5C(void* ptr);
    extern void ext_006F9F10();
    extern int mem_00B5E420;
    extern int mem_00B5E41C;
    __asm {
        mov eax, dword ptr [mem_00B5E420]
        dec eax
        mov dword ptr [mem_00B5E420], eax
        jne L_ret
        mov ecx, dword ptr [mem_00B5E41C]
        push esi
        test ecx, ecx
        mov esi, ecx
        je L_clear
        call ext_006F9F10
        push esi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [mem_00B5E41C], 0
        pop esi
    L_ret:
        ret
    }
}

// [0x006FA9F0] sub_006FA9F0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FA9F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 0x34], 0x1
        je short L_fail
        mov ecx, dword ptr [esi + 0x38]
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
        test al, al
        je short L_fail
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        push 0
        push eax
        push edi
        push -1
        push esi
        push 0
        push 0
        mov ecx, esi
        call dword ptr [edx + 0x40]
        test al, al
        je short L_fail
        pop edi
        mov al, 1
        pop esi
        ret 0x8
    L_fail:
        pop edi
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x006F9080] sub_006F9080 (80 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006F9080(void* self, int edx_unused, int a1, int* a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl fail
        cmp eax, 0x2c
        jge fail
        mov edx, dword ptr [esp + 0xc]
        cmp edx, 0x1
        jl fail
        cmp edx, 0xf
        jge fail
        push esi
        lea esi, [8*eax]
        sub esi, eax
        lea eax, [edx + 2*esi - 0x1]
        pop esi
        mov eax, dword ptr [ecx + 4*eax + 0x3dcc]
        test eax, eax
        je fail
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je done
        mov dword ptr [ecx], eax
    done:
        mov al, 0x1
        ret 0xc
    fail:
        xor al, al
        ret 0xc
    }
}

// [0x006FAA40] sub_006FAA40 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FAA40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 0x34], 0x2
        je short L_fail
        mov ecx, dword ptr [esi + 0x38]
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
        test al, al
        je short L_fail
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push edi
        push -0x1
        push esi
        push 0x1
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0x40]
        test al, al
        je short L_fail
        pop edi
        mov al, 0x1
        pop esi
        ret 0x8
    L_fail:
        pop edi
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x006FC200] sub_006FC200 (80 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006FC200(void* self, int edx_unused, void* a1) {
    __asm {
        mov edx, dword ptr [ecx + 0x14]
        push esi
        dec edx
        push edi
        js neg_index
        mov ecx, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0xc]
        lea eax, [edx + 2*edx]
        lea esi, [ecx + 4*eax]
loop_top:
        test edi, edi
        je null_arg
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        jmp have_key
null_arg:
        xor ecx, ecx
        xor eax, eax
have_key:
        cmp ecx, dword ptr [esi]
        jne next_entry
        cmp eax, dword ptr [esi + 0x4]
        je found
next_entry:
        dec edx
        sub esi, 0xc
        test edx, edx
        jge loop_top
neg_index:
        or edx, -1
found:
        cmp edx, -1
        pop edi
        pop esi
        setne al
        ret 0x4
    }
}

// [0x006FBC90] sub_006FBC90 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FBC90(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x14]
        dec esi
        js done
        push ebx
    loop_top:
        mov ecx, dword ptr [edi + 0x10]
        lea eax, [esi + 2*esi]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je skip
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp edx, ebx
        jne skip
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        je skip
        push eax
        mov ecx, edi
        call ext_006FBC70
    skip:
        mov eax, dword ptr [edi + 0x14]
        cmp esi, eax
        jg clamp
        dec esi
        jmp next
    clamp:
        lea esi, [eax - 0x1]
    next:
        test esi, esi
        jge loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x006FBCE0] sub_006FBCE0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FBCE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x18]
        dec edi
        js done
        push ebx
    loop_top:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x10]
        add eax, edi
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je skip
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp edx, ebx
        jne skip
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        je skip
        push eax
        mov ecx, esi
        call ext_006FBC50
    skip:
        mov eax, dword ptr [esi + 0x18]
        cmp edi, eax
        jg clamp
        dec edi
        jmp next
    clamp:
        lea edi, [eax - 1]
    next:
        test edi, edi
        jge loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x006FC8E0] sub_006FC8E0 (80 bytes)
extern "C" void ext_006D2160();
extern "C" __declspec(naked) void __fastcall fn_006FC8E0(void* self) {
    __asm {
        push -1
        push 0x8c1ccb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0
        call ext_006D2160
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006F7850] sub_006F7850 (80 bytes)
// Nested search: for i in 0..11, count = ext_006F7700(i); for j in 0..count-1, if ext_006F7710(i, j) == arg0
// then *arg1 = i, *arg2 = j and return 1. Otherwise return 0.
extern "C" void ext_006F7700();
extern "C" void ext_006F7710();

extern "C" __declspec(naked) void __cdecl fn_006F7850(int value, int* outI, int* outJ) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        xor edi, edi
outer:
        push edi
        call ext_006F7700
        mov ebx, eax
        add esp, 0x4
        xor esi, esi
        test ebx, ebx
        jle next
inner:
        push esi
        push edi
        call ext_006F7710
        add esp, 0x8
        cmp ebp, eax
        je found
        inc esi
        cmp esi, ebx
        jl inner
next:
        inc edi
        cmp edi, 0xc
        jl outer
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
found:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        mov dword ptr [ecx], esi
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret
    }
}

// [0x006F8A70] sub_006F8A70 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F8A70(void* self) {
    __asm {
        push -1
        push 008BDF0Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 4]
        call ext_006B9D10
        mov ecx, esi
        mov dword ptr [esp + 10h], 0
        call ext_006F8AC0
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x006F8EE0] sub_006F8EE0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F8EE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        jl L_fail
        cmp eax, 0xbf
        jge L_fail
        lea eax, [eax + 4*eax]
        shl eax, 0x4
        add eax, ecx
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        lea esi, [eax + 0xc]
        jne L_nonzero
        lea ecx, [eax + 0x10]
        call ext_006B9950
        test al, al
        jne L_fail
    L_nonzero:
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je L_done
        push esi
        call ext_006F8AD0
    L_done:
        mov al, 0x1
        pop esi
        ret 0x8
    L_fail:
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x006FDFC0] sub_006FDFC0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FDFC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        or eax, -1
        xor ebp, ebp
        xor esi, esi
        mov ebx, dword ptr [edi + 0x10]
        test ebx, ebx
        jle zero_count
    loop_top:
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, dword ptr [ecx + 4*esi]
        call ext_006FC950
        test eax, eax
        je next
        cmp ebp, dword ptr [esp + 0x14]
        je found
        inc ebp
    next:
        inc esi
        cmp esi, ebx
        jl loop_top
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret 0x8
    found:
        mov eax, esi
    zero_count:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006FCF30] sub_006FCF30 (80 bytes)
extern "C" void ext_006D2250();
extern "C" void ext_006D89D0();
extern "C" void ext_006FCFA0();
extern "C" void ext_0077FAC0();

// __thiscall with one stack arg (ret 0x4); returns self in eax.
// Naked: the body writes a pointer to its own stack temporary into the
// caller's argument slot ([esp+0x24] after the 0x10 temp reservation), which
// C++ cannot express.
extern "C" __declspec(naked) void* __fastcall fn_006FCF30(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_006D2250
        mov ebx, dword ptr [esp + 0x14]
        xor esi, esi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [edi + 0x8], eax
        mov ebp, dword ptr [ebx]
        test ebp, ebp
        jle done
    loop_top:
        push esi
        mov ecx, ebx
        call ext_006FCFA0
        sub esp, 0x10
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        call ext_0077FAC0
        mov ecx, edi
        call ext_006D89D0
        inc esi
        cmp esi, ebp
        jl loop_top
    done:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006F90F0] sub_006F90F0 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_006F90F0(const char* s) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov edi, 0xaab3ec
    outer_top:
        mov esi, dword ptr [edi]
        mov ecx, eax
    cmp_top:
        mov bl, byte ptr [ecx]
        mov dl, bl
        cmp bl, byte ptr [esi]
        jne cmp_diff
        test dl, dl
        je cmp_end
        mov bl, byte ptr [ecx + 0x1]
        mov dl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne cmp_diff
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne cmp_top
    cmp_end:
        xor ecx, ecx
        jmp cmp_result
    cmp_diff:
        sbb ecx, ecx
        sbb ecx, -1
    cmp_result:
        test ecx, ecx
        je found
        add edi, 0x4
        inc ebp
        cmp edi, 0xaab49c
        jl outer_top
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret
    found:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006FC250] sub_006FC250 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FC250(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x18]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x14]
        lea eax, [eax + edi - 0x1]
        cmp eax, edi
        jl notfound
        mov ecx, dword ptr [ecx + 0x10]
        mov ebx, dword ptr [esp + 0x10]
        lea edx, [eax + 2*eax]
        lea esi, [ecx + 4*edx]
    top:
        test ebx, ebx
        je zero
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx]
        jmp cmpkey
    zero:
        xor edx, edx
        xor ecx, ecx
    cmpkey:
        cmp edx, dword ptr [esi]
        jne next
        cmp ecx, dword ptr [esi + 0x4]
        je found
    next:
        dec eax
        sub esi, 0xc
        cmp eax, edi
        jl notfound
        jmp top
    found:
        sub eax, edi
        pop edi
        cmp eax, -1
        pop esi
        pop ebx
        setne al
        ret 0x4
    notfound:
        or eax, -1
        pop edi
        cmp eax, -1
        pop esi
        pop ebx
        setne al
        ret 0x4
    }
}

// [0x006F8C90] sub_006F8C90 (96 bytes)
extern "C" void ext_006A6D5C();
extern "C" void ext_006F8CF0();
extern "C" __declspec(naked) void __fastcall fn_006F8C90(void* self) {
    __asm {
        push -1
        push 0x8bb299
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x10], 0
        call ext_006F8CF0
        push 0x6f7900
        push 0xbf
        add esi, 0xc
        push 0x50
        push esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006A6D5C
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006F9AA0] sub_006F9AA0 (96 bytes)
extern "C" void ext_006BAC20();
extern "C" __declspec(naked) void __fastcall fn_006F9AA0(void* self) {
    __asm {
        push -1
        push 0x8bb3b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x994fe0
        mov ecx, dword ptr [esi + 0xb4]
        mov edx, dword ptr [esi + 0xb8]
        push 0x1
        push edx
        mov eax, dword ptr [ecx]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [eax + 0x70]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006BAC20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006FD420] sub_006FD420 (96 bytes)
extern "C" void ext_006FDEF0();
extern "C" void ext_006D2160();
extern "C" void ext_0077FA20();
extern "C" int mem_00995184;
extern "C" __declspec(naked) void __fastcall fn_006FD420(void* self) {
    __asm {
        push -1
        push 0x8bb513
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset mem_00995184
        mov dword ptr [esp + 0x10], 1
        call ext_006FDEF0
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006FACA0] sub_006FACA0 (96 bytes)
// Stdcall with 7 stack args (ret 0x1c); first arg is an object pointer.
// Recurses on obj->field4, then calls virtual slot 15 on *obj with args 1..6.
extern "C" __declspec(naked) unsigned char __stdcall fn_006FACA0(void* a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je null_obj
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x2c]
        push edi
        push ebx
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esi + 0x4]
        push eax
        push edx
        call fn_006FACA0
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi]
        push edi
        push ebx
        mov eax, dword ptr [ecx]
        push ebp
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        call dword ptr [eax + 0x3c]
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret 0x1c
    null_obj:
        xor al, al
        pop esi
        ret 0x1c
    }
}

// [0x006FAD90] sub_006FAD90 (96 bytes)
extern "C" void ext_006FAD90();
extern "C" __declspec(naked) void __stdcall fn_006FAD90(void* a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x2c]
        push edi
        push ebx
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esi + 0x4]
        push eax
        push edx
        call ext_006FAD90
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi]
        push edi
        push ebx
        mov eax, dword ptr [ecx]
        push ebp
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        call dword ptr [eax + 0x38]
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret 0x1c
    null_path:
        xor al, al
        pop esi
        ret 0x1c
    }
}

// [0x006F7680] sub_006F7680 (96 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006F7680(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        jl fail
        cmp eax, 0xbf
        jge fail
        lea edx, [eax + 2*eax]
        shl edx, 0x3
        sub edx, eax
        lea eax, [ecx + 8*edx]
        mov ecx, dword ptr [eax + 0x1a0]
        test ecx, ecx
        lea esi, [eax + 0x1a0]
        jne have_slot
        lea ecx, [eax + 0x1a4]
        call ext_006B9950
        test al, al
        jne fail
    have_slot:
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je skip_call
        push esi
        call ext_006EA7C0
    skip_call:
        mov al, 0x1
        pop esi
        ret 0x8
    fail:
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x006F74E0] sub_006F74E0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F74E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push edi
        test eax, eax
        mov dword ptr [esi + 0x198], eax
        jne not_zero
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je clear_ptr
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x8]
        cmp eax, 0x6
        jne clear_ptr
        mov dword ptr [esi + 0x19c], edi
        pop edi
        pop esi
        ret 0x8
    not_zero:
        cmp eax, 0x1
        jne clear_ptr
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je clear_ptr
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0x8]
        cmp eax, 0x8
        jne clear_ptr
        cmp edi, esi
        je clear_ptr
        mov dword ptr [esi + 0x19c], edi
        pop edi
        pop esi
        ret 0x8
    clear_ptr:
        mov dword ptr [esi + 0x19c], 0x0
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006FCD50] sub_006FCD50 (112 bytes)
extern "C" void ext_006D2130();
extern "C" __declspec(naked) void __fastcall fn_006FCD50(void* self) {
    __asm {
        push -1
        push 0x8c1ccb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        push 4
        lea edi, [esi + 8]
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x20]
        push 4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov eax, esi
        mov dword ptr [edi + 0x14], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006FECE0] sub_006FECE0 (112 bytes)
extern "C" int __fastcall ext_006B99C0(void* self);
extern "C" char* __fastcall ext_006E7460(void* self);

// Splits the string in a1 in place at '\\' or '/' separators, storing each piece start in a2.
// Returns (number of separators) - 1, or -1 if the length query fails.
extern "C" __declspec(naked) int __cdecl fn_006FECE0(void* a1, char** a2) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ecx, edi
        xor esi, esi
        xor ebp, ebp
        call ext_006B99C0
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jl fail_6FECE0
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_6FECE0:
        mov ecx, edi
        call ext_006E7460
        cmp byte ptr [eax + esi], 0x5c
        je sep_6FECE0
        mov ecx, edi
        call ext_006E7460
        cmp byte ptr [eax + esi], 0x2f
        jne next_6FECE0
    sep_6FECE0:
        mov ecx, edi
        call ext_006E7460
        mov ecx, edi
        mov byte ptr [eax + esi], 0
        call ext_006E7460
        lea eax, [eax + esi + 1]
        inc ebp
        mov dword ptr [ebx], eax
        add ebx, 4
    next_6FECE0:
        mov eax, dword ptr [esp + 0x14]
        inc esi
        cmp esi, eax
        jle loop_6FECE0
        pop ebx
        pop edi
        lea eax, [ebp - 1]
        pop esi
        pop ebp
        ret
    fail_6FECE0:
        pop edi
        lea eax, [ebp - 1]
        pop esi
        pop ebp
        ret
    }
}

// [0x006FA530] sub_006FA530 (112 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);
extern "C" void ext_006FA030();

extern "C" __declspec(naked) void __fastcall fn_006FA530(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x40
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je zero
        mov ecx, eax
        call ext_006FA030
        mov esi, eax
        jmp after
    zero:
        xor esi, esi
    after:
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006F7470] sub_006F7470 (112 bytes)
extern "C" void __stdcall ext_006BAF60(int a1);
extern "C" void __stdcall ext_006C4DB0(int, int, int, int);
extern "C" void ext_006EA740();
extern "C" void ext_006F8CF0();

extern "C" __declspec(naked) void __fastcall fn_006F7470(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push 0xb5d2c0
        call ext_006BAF60
        mov dword ptr [ebx + 0x198], 0x4
        mov dword ptr [ebx + 0x19c], 0x0
        xor esi, esi
        lea edi, [ebx + 0x1a0]
    loop_top_6F7470:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je skip_6F7470
        push 0x0
        push esi
        push 0x0
        push ebx
        call ext_006C4DB0
    skip_6F7470:
        mov ecx, edi
        call ext_006EA740
        inc esi
        add edi, 0xb8
        cmp esi, 0xbf
        jl loop_top_6F7470
        mov ecx, dword ptr [ebx + 0x8ae8]
        call ext_006F8CF0
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x006FDE80] sub_006FDE80 (112 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);
extern "C" void ext_006FC7E0();
extern "C" void ext_006D2170();

extern "C" __declspec(naked) void __fastcall fn_006FDE80(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je no_alloc
        mov ecx, eax
        call ext_006FC7E0
        jmp after_alloc
    no_alloc:
        xor eax, eax
    after_alloc:
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x4], eax
        lea edx, [esp + 0x4]
        mov dword ptr [esp + 0x10], 0xffffffff
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006FEFF0] sub_006FEFF0 (128 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00924254;
extern "C" int mem_00B5D2C0;
extern "C" int mem_009252F0;

extern "C" __declspec(naked) void* __fastcall fn_006FEFF0(void* self) {
    __asm {
        sub esp, 0x520
        xor eax, eax
        push esi
        mov dword ptr [esp + 0x4], eax
        mov byte ptr [esp + 0x10c], al
        lea eax, [esp + 0x10c]
        push edi
        push eax
        push 0x417
        call dword ptr [mem_00924254]
        mov cl, byte ptr [mem_00B5D2C0]
        xor eax, eax
        mov byte ptr [esp + 0xc], cl
        mov ecx, 0x40
        lea edi, [esp + 0xd]
        lea edx, [esp + 0x110]
        rep stosd
        stosw
        stosb
        push 0x104
        lea eax, [esp + 0x10]
        push edx
        push eax
        call dword ptr [mem_009252F0]
        mov esi, dword ptr [esp + 0x538]
        add esp, 0xc
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B9D80
        mov eax, esi
        pop edi
        pop esi
        add esp, 0x520
        ret
    }
}

// [0x006FF760] sub_006FF760 (128 bytes)
// Counts maximal runs of chars for which sub_006FF730(ch, arg2) returns 0.
extern "C" __declspec(naked) int __cdecl fn_006FF760(const unsigned short* s, const unsigned short* arg2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        xor ebp, ebp
        call dword ptr [mem_00925334]
        add esp, 0x4
        test esi, esi
        je m760_end
        lea edi, [esi + 2*eax]
        cmp esi, edi
        jae m760_end
        mov ebx, dword ptr [esp + 0x18]
m760_top:
        mov ax, word ptr [esi]
        push ebx
        push eax
        call ext_006FF730
        add esp, 0x8
        test al, al
        jne m760_skip
        inc ebp
        cmp esi, edi
        jae m760_end
m760_run:
        mov cx, word ptr [esi]
        push ebx
        push ecx
        call ext_006FF730
        add esp, 0x8
        test al, al
        jne m760_skip
        add esi, 0x2
        cmp esi, edi
        jae m760_end
        jmp m760_run
m760_skip:
        cmp esi, edi
        jae m760_end
m760_skip_loop:
        mov dx, word ptr [esi]
        push ebx
        push edx
        call ext_006FF730
        add esp, 0x8
        test al, al
        je m760_next
        add esi, 0x2
        cmp esi, edi
        jae m760_end
        jmp m760_skip_loop
m760_next:
        cmp esi, edi
        jb m760_top
m760_end:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006F9DE0] sub_006F9DE0 (128 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);
extern "C" void ext_006D2130();
extern "C" int mem_00B5E41C;

// Lazily allocates a 0x24-byte object (via ext_006A5C62), initialises it with ext_006D2130,
// caches the pointer in mem_00B5E41C, and runs under an SEH frame.
extern "C" __declspec(naked) void __fastcall fn_006F9DE0(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [mem_00B5E41C]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne L_end
        push esi
        push 0x24
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x8], esi
        cmp esi, ebx
        mov dword ptr [esp + 0x14], ebx
        je L_null
        push 0x4
        push 0x10
        mov ecx, esi
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x1c], ebx
        mov byte ptr [esi + 0x20], bl
        jmp L_store
    L_null:
        xor esi, esi
    L_store:
        mov eax, esi
        pop esi
        mov dword ptr [mem_00B5E41C], eax
    L_end:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006F8F30] sub_006F8F30 (128 bytes)
extern "C" void ext_006C4D70();
extern "C" void __stdcall ext_006C4DB0(int, int, int, int);
extern "C" void __fastcall ext_006F8B10(void* self);
extern "C" void ext_006F8B30();

extern "C" __declspec(naked) void __fastcall fn_006F8F30(void* self, int edx_unused, int a0, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        test esi, esi
        jl f8f30_fail
        cmp esi, 0x2c
        jge f8f30_fail
        lea eax, [esi + 2*esi]
        push ebx
        mov ecx, dword ptr [edi + 4*eax + 0x3bbc]
        lea ebx, [edi + 4*eax + 0x3bbc]
        test ecx, ecx
        je f8f30_skip1
        mov edx, dword ptr [edi]
        push 0
        push esi
        push 2
        push edx
        call ext_006C4DB0
    f8f30_skip1:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je f8f30_else
        lea eax, [esp + 0x14]
        mov ecx, ebx
        push eax
        call ext_006F8B30
        mov ecx, dword ptr [edi]
        push 0
        push esi
        push 2
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        call ext_006C4D70
        pop ebx
        pop edi
        mov al, 1
        pop esi
        ret 0x10
    f8f30_else:
        mov ecx, ebx
        call ext_006F8B10
        pop ebx
        pop edi
        mov al, 1
        pop esi
        ret 0x10
    f8f30_fail:
        pop edi
        xor al, al
        pop esi
        ret 0x10
    }
}

// [0x006FAC10] sub_006FAC10 (144 bytes)
extern "C" void ext_006FACA0();

// __thiscall-style body (ret 0x18): forwards six stack args to a->vfunc[15] when a is set and
// (self->flags & 0x10) is clear; otherwise calls sub_006FACA0 with self->m3C->m4 and the args,
// then forwards them to self->m3C->vfunc[15] and returns 1.
extern "C" __declspec(naked) void __fastcall fn_006FAC10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        je fac10_else
        test byte ptr [ecx + 0x34], 0x10
        jne fac10_else
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x3c]
        ret 0x18
    fac10_else:
        push esi
        mov esi, dword ptr [ecx + 0x3c]
        test esi, esi
        je fac10_ret1
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x28]
        push edi
        push ebx
        push ebp
        push edx
        mov edx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push edx
        push eax
        call ext_006FACA0
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi]
        push edi
        push ebx
        mov edx, dword ptr [ecx]
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        call dword ptr [edx + 0x3c]
        pop edi
        pop ebp
        pop ebx
    fac10_ret1:
        mov al, 0x1
        pop esi
        ret 0x18
    }
}

// [0x006FE610] sub_006FE610 (144 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00925278;

// Copies a2 into a 1 KB stack buffer, truncates at the last '/' (else last '\\', else empties it),
// calls sub_006B9D80(a1, buf) with a1 in ecx and returns a1 (cdecl, ret 0).
extern "C" __declspec(naked) void* __cdecl fn_006FE610(void* a1, const char* a2) {
    __asm {
        sub esp, 0x404
        push esi
        push edi
        mov edi, dword ptr [esp + 0x414]
        or ecx, -1
        xor eax, eax
        lea edx, [esp + 0xc]
        repne scasb
        not ecx
        sub edi, ecx
        push 0x2f
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        mov dword ptr [esp + 0xc], 0x0
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov esi, dword ptr [mem_00925278]
        lea ecx, [esp + 0x10]
        push ecx
        call esi
        add esp, 0x8
        test eax, eax
        jne found
        lea edx, [esp + 0xc]
        push 0x5c
        push edx
        call esi
        add esp, 0x8
        test eax, eax
        je notfound
    found:
        mov byte ptr [eax], 0x0
        jmp docall
    notfound:
        mov byte ptr [esp + 0xc], 0x0
    docall:
        mov esi, dword ptr [esp + 0x410]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006B9D80
        mov eax, esi
        pop edi
        pop esi
        add esp, 0x404
        ret
    }
}

// [0x006FAD00] sub_006FAD00 (144 bytes)
extern "C" void ext_006FAD90();
extern "C" __declspec(naked) void __fastcall fn_006FAD00(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        je slow
        test byte ptr [ecx + 0x34], 0x10
        jne slow
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x38]
        ret 0x18
    slow:
        push esi
        mov esi, dword ptr [ecx + 0x3c]
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x28]
        push edi
        push ebx
        push ebp
        push edx
        mov edx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push edx
        push eax
        call ext_006FAD90
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi]
        push edi
        push ebx
        mov edx, dword ptr [ecx]
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        call dword ptr [edx + 0x38]
        pop edi
        pop ebp
        pop ebx
    done:
        mov al, 0x1
        pop esi
        ret 0x18
    }
}

// [0x006F8FF0] sub_006F8FF0 (144 bytes)
// Stores a2 into self->slots[(a3-1) + 14*a1] (slots at +0x3dcc) and calls the two helpers; ret 0xc.
extern "C" __declspec(naked) void __fastcall fn_006F8FF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        test esi, esi
        mov ebp, ecx
        jl fail
        cmp esi, 0x2c
        jge fail
        mov edi, dword ptr [esp + 0x18]
        cmp edi, 0x1
        jl fail
        cmp edi, 0xf
        jge fail
        lea eax, [8*esi]
        dec edi
        sub eax, esi
        push ebx
        lea ecx, [edi + 2*eax]
        lea ebx, [ebp + 4*ecx + 0x3dcc]
        mov ecx, dword ptr [ebp + 4*ecx + 0x3dcc]
        test ecx, ecx
        je skip1
        mov edx, dword ptr [ebp]
        push edi
        push esi
        push 0x3
        push edx
        call ext_006C4DB0
    skip1:
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        je zero
        mov dword ptr [ebx], ecx
        mov eax, dword ptr [ebp]
        push edi
        push esi
        push 0x3
        push eax
        call ext_006C4D70
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        ret 0xc
    zero:
        mov dword ptr [ebx], 0x0
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        ret 0xc
    fail:
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 0xc
    }
}

// [0x006F8E50] sub_006F8E50 (144 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006F8E50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        test esi, esi
        jl failed
        cmp esi, 0xbf
        jge failed
        lea eax, [esi + 4*esi]
        push ebx
        shl eax, 0x4
        push ebp
        mov ecx, dword ptr [eax + edi + 0xc]
        lea ebx, [eax + edi + 0xc]
        test ecx, ecx
        je after_first
        mov edx, dword ptr [edi]
        push 0
        push esi
        push 1
        push edx
        call ext_006C4DB0
    after_first:
        mov ebp, dword ptr [esp + 0x18]
        cmp dword ptr [ebp], 0
        jne slow_path
        lea ecx, [ebp + 0x4]
        call ext_006B9950
        test al, al
        je slow_path
        mov ecx, ebx
        call ext_006F8AC0
        pop ebp
        pop ebx
        pop edi
        mov al, 0x1
        pop esi
        ret 0x8
    slow_path:
        push ebp
        mov ecx, ebx
        call ext_006F8AD0
        mov ecx, dword ptr [ebp]
        test ecx, ecx
        je after_second
        mov eax, dword ptr [edi]
        push 0
        push esi
        push 1
        push eax
        call ext_006C4D70
    after_second:
        pop ebp
        pop ebx
        pop edi
        mov al, 0x1
        pop esi
        ret 0x8
    failed:
        pop edi
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x006FB5C0] sub_006FB5C0 (144 bytes)
// Stack args: a1 (table A), a2 (index into A), a3 (table B), a4 (index into B), a5 (forwarded).
// Each table: +0x10 = base of 12-byte entries, +0x14 = offset/count, +0x18 = count (A only).
extern "C" void ext_006FAF30();
extern "C" __declspec(naked) int __cdecl fn_006FB5C0(void* a1, int a2, void* a3, int a4, int a5) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push esi
        xor eax, eax
        xor edx, edx
        push edi
        mov edi, dword ptr [esp + 0x10]
        test ecx, ecx
        jl L_first_done
        cmp ecx, dword ptr [edi + 0x18]
        jge L_first_done
        mov eax, dword ptr [edi + 0x14]
        add eax, ecx
        mov ecx, dword ptr [edi + 0x10]
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_first_zero
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp esi, ebx
        jne L_first_zero
        mov eax, dword ptr [eax + 0x4]
        jmp L_first_done
    L_first_zero:
        xor eax, eax
    L_first_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        test ecx, ecx
        jl L_second_done
        cmp ecx, dword ptr [esi + 0x14]
        jge L_second_done
        lea edx, [ecx + 2*ecx]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [ecx + 4*edx]
        mov ecx, dword ptr [edx + 0x4]
        test ecx, ecx
        je L_second_zero
        mov ebx, dword ptr [ecx]
        push ebp
        mov ebp, dword ptr [edx]
        cmp ebx, ebp
        pop ebp
        jne L_second_zero
        mov edx, dword ptr [ecx + 0x4]
        jmp L_second_done
    L_second_zero:
        xor edx, edx
    L_second_done:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push edx
        push esi
        push eax
        push edi
        call ext_006FAF30
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x006FA790] sub_006FA790 (160 bytes)
extern "C" int mem_00925290; /* u32 0x0062D37A */
extern "C" int mem_0092528C; /* u32 0x0062D370 */
extern "C" __declspec(naked) void __fastcall fn_006FA790(void* self, int edx_unused, int a1, void* a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [eax + ecx + 0x1]
        lea edx, [eax + 2*eax]
        mov eax, dword ptr [esi]
        shl edx, 0x2
        push edx
        push eax
        call dword ptr [mem_00925290]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x8]
        sub ecx, edi
        add esp, 0x8
        add ecx, edx
        mov dword ptr [esi], eax
        js skip_move
        lea ecx, [ecx + 2*ecx]
        lea edx, [edi + 2*edi]
        shl ecx, 0x2
        push ecx
        lea ecx, [eax + 4*edx]
        lea edx, [edi + 2*edi + 0x3]
        push ecx
        lea eax, [eax + 4*edx]
        push eax
        call dword ptr [mem_0092528C]
        add esp, 0xc
    skip_move:
        mov edx, dword ptr [esi]
        lea ecx, [edi + 2*edi]
        shl ecx, 0x2
        mov eax, ecx
        add eax, edx
        mov edx, dword ptr [esp + 0x10]
        test edx, edx
        je null_src
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [edx]
        mov dword ptr [eax], edx
        jmp store_val
    null_src:
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
    store_val:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [ecx + eax + 0x8], edx
        mov eax, dword ptr [esi + 0x4]
        inc eax
        mov dword ptr [esi + 0x4], eax
        pop esi
        ret 0xc
    }
}

// [0x006FE570] sub_006FE570 (160 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00925278;

// Copies the path into a 1 KB stack buffer, finds the extension after the last '.' (must follow the last '/' and '\\'),
// and passes it (or a default literal) to sub_006B9D80 with the path as `this`; returns the path.
extern "C" __declspec(naked) void* __cdecl fn_006FE570(void* a1) {
    __asm {
        sub esp, 0x404
        push esi
        push edi
        mov edi, dword ptr [esp + 0x414]
        or ecx, -1
        xor eax, eax
        lea edx, [esp + 0xc]
        repne scasb
        not ecx
        sub edi, ecx
        push 0x2e
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        mov dword ptr [esp + 0xc], 0
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov edi, dword ptr [mem_00925278]
        lea ecx, [esp + 0x10]
        push ecx
        call edi
        mov esi, eax
        add esp, 0x8
        test esi, esi
        je use_default
        push ebx
        lea edx, [esp + 0x10]
        push 0x2f
        push edx
        call edi
        mov ebx, eax
        lea eax, [esp + 0x18]
        push 0x5c
        push eax
        call edi
        add esp, 0x10
        cmp ebx, esi
        pop ebx
        jae use_default
        cmp eax, esi
        jae use_default
        inc esi
        push esi
        jmp do_call
    use_default:
        push 0xb5d2c0
    do_call:
        mov esi, dword ptr [esp + 0x414]
        mov ecx, esi
        call ext_006B9D80
        mov eax, esi
        pop edi
        pop esi
        add esp, 0x404
        ret
    }
}

// [0x006FCE70] sub_006FCE70 (160 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006FCE70(void* self, int edx_unused, const int* src) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ebp, ecx
        push edi
        mov eax, dword ptr [esi]
        mov dword ptr [ebp], eax
        mov ecx, dword ptr [esi + 0x4]
        lea edi, [ebp + 0x8]
        mov dword ptr [ebp + 0x4], ecx
        mov ecx, edi
        call ext_006D2250
        mov edx, dword ptr [esi + 0x10]
        xor ebx, ebx
        mov dword ptr [edi + 0x8], edx
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jle skip1
    loop1:
        mov eax, dword ptr [esi + 0x18]
        lea edx, [esp + 0x18]
        push edx
        mov ecx, dword ptr [eax + 4*ebx]
        mov eax, dword ptr [edi]
        mov dword ptr [esp + 0x1c], ecx
        push eax
        mov ecx, edi
        call ext_006D2170
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl loop1
    skip1:
        lea edi, [ebp + 0x20]
        mov ecx, edi
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x28]
        xor ebx, ebx
        mov dword ptr [edi + 0x8], ecx
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jle skip2
    loop2:
        mov edx, dword ptr [esi + 0x30]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [edx + 4*ebx]
        mov edx, dword ptr [edi]
        push edx
        mov dword ptr [esp + 0x20], eax
        call ext_006D2170
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl loop2
    skip2:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x006F9B30] sub_006F9B30 (176 bytes)
extern "C" __declspec(naked) void __fastcall fn_006F9B30(void* self) {
    __asm {
        push -1
        push 0x8bb3e3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_006B9D10
        xor edi, edi
        lea ecx, [esi + 0x4c]
        mov dword ptr [esp + 0x14], edi
        call ext_006B9D10
        lea ecx, [esi + 0x98]
        mov byte ptr [esp + 0x14], 0x1
        call ext_006B9D10
        mov byte ptr [esi + 0xe4], 0x1
        mov dword ptr [esi + 0xe8], edi
        mov dword ptr [esi + 0xec], edi
        mov dword ptr [esi + 0xf0], edi
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xf4], edi
        mov dword ptr [esi + 0xf8], edi
        mov dword ptr [esi + 0xfc], edi
        mov dword ptr [esi + 0x100], edi
        mov dword ptr [esi + 0x104], edi
        mov dword ptr [esi + 0x108], edi
        mov dword ptr [esi + 0x10c], edi
        mov dword ptr [esi + 0x114], edi
        mov dword ptr [esi + 0x110], 0x1
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006FAA90] sub_006FAA90 (176 bytes)
extern "C" __declspec(naked) int __fastcall fn_006FAA90(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        or eax, -0x1
        push edi
        test esi, esi
        jl fail_ret
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx + 0x14]
        cmp esi, eax
        mov eax, dword ptr [ecx + 0x14]
        jge fail_ret
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        je fail_ret
        mov edx, dword ptr [edx + 0x10]
        mov edi, dword ptr [ecx + 0x10]
        xor esi, esi
        xor eax, eax
        mov dword ptr [esp + 0x18], edx
outer_loop:
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je b_zero
        mov edx, dword ptr [ecx]
        mov ebx, dword ptr [edi]
        cmp edx, ebx
        jne b_zero
        mov ebx, dword ptr [ecx + 0x4]
        jmp b_done
b_zero:
        xor ebx, ebx
b_done:
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [esi + 2*esi]
        lea edx, [edx + 4*ecx]
inner_loop:
        mov ecx, dword ptr [edx + 0x4]
        test ecx, ecx
        je a_zero
        mov ebp, dword ptr [ecx]
        cmp ebp, dword ptr [edx]
        jne a_zero
        mov ecx, dword ptr [ecx + 0x4]
        jmp a_done
a_zero:
        xor ecx, ecx
a_done:
        cmp ebx, ecx
        je matched
        inc esi
        add edx, 0xc
        jmp inner_loop
matched:
        mov ecx, dword ptr [esp + 0x1c]
        inc eax
        add edi, 0xc
        inc esi
        cmp esi, ecx
        jg dec_ret
        mov edx, dword ptr [esp + 0x10]
        cmp eax, edx
        jl outer_loop
        cmp esi, ecx
        jg dec_ret
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ret 0x8
dec_ret:
        dec eax
fail_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x006FC830] sub_006FC830 (176 bytes)
extern "C" __declspec(naked) void __fastcall fn_006FC830(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx

        mov edi, dword ptr [esi + 0x4]
        cmp edi, ebx
        je loc_6FC84E
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC84E:
        mov edi, dword ptr [esi + 0x8]
        cmp edi, ebx
        je loc_6FC865
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC865:
        mov edi, dword ptr [esi + 0xc]
        cmp edi, ebx
        je loc_6FC87C
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC87C:
        mov edi, dword ptr [esi + 0x10]
        cmp edi, ebx
        je loc_6FC893
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC893:
        mov edi, dword ptr [esi + 0x14]
        cmp edi, ebx
        je loc_6FC8AA
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC8AA:
        mov edi, dword ptr [esi + 0x18]
        cmp edi, ebx
        je loc_6FC8C1
        mov ecx, edi
        call fn_006FC8E0
        push edi
        call ext_006A5C5C
        add esp, 0x4

    loc_6FC8C1:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        mov dword ptr [esi + 0x18], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x006FCDC0] sub_006FCDC0 (176 bytes)
extern "C" void ext_006FCFB0();
extern "C" __declspec(naked) void __fastcall fn_006FCDC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov eax, dword ptr [ebx]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], eax
        mov ecx, dword ptr [ebx + 0x4]
        lea edi, [esi + 0x8]
        mov dword ptr [esi + 0x4], ecx
        mov ecx, edi
        call ext_006D2250
        mov edx, dword ptr [ebx + 0x10]
        mov dword ptr [edi + 0x8], edx
        mov eax, dword ptr [ebx + 0x8]
        test eax, eax
        jle skip_loop1
        xor ebp, ebp
        mov dword ptr [esp + 0x18], eax
    loop1:
        mov esi, dword ptr [ebx + 0x18]
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x20
        add esi, ebp
        mov ecx, 0x8
        mov edi, esp
        rep movsd
        lea ecx, [eax + 0x8]
        call ext_006FCFB0
        mov eax, dword ptr [esp + 0x18]
        add ebp, 0x20
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne loop1
        mov esi, dword ptr [esp + 0x10]
    skip_loop1:
        add esi, 0x20
        mov ecx, esi
        call ext_006D2250
        mov ecx, dword ptr [ebx + 0x28]
        xor edi, edi
        mov dword ptr [esi + 0x8], ecx
        mov ebp, dword ptr [ebx + 0x20]
        test ebp, ebp
        jle skip_loop2
    loop2:
        mov edx, dword ptr [ebx + 0x30]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        mov eax, dword ptr [edx + 4 * edi]
        mov edx, dword ptr [esi]
        push edx
        mov dword ptr [esp + 0x20], eax
        call ext_006D2170
        inc edi
        cmp edi, ebp
        jl loop2
    skip_loop2:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x006F3160] sub_006F3160 (19 bytes)
extern "C" void ext_006DC8E0();

extern "C" __declspec(naked) void __fastcall fn_006F3160(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x6958]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x006FA010] sub_006FA010 (21 bytes)
extern "C" int __cdecl ext_006FC3A0_2(int a, int b);
extern "C" int mem_00B5E400;

extern "C" void __cdecl fn_006FA010() {
    mem_00B5E400 = ext_006FC3A0_2(0xb5e3f0, 2);
}

// [0x006F93C0] sub_006F93C0 (21 bytes)
extern "C" int ext_006FC3A0(int a1, int a2);
extern "C" int mem_00B5E240;

extern "C" void __cdecl fn_006F93C0() {
    mem_00B5E240 = ext_006FC3A0(0x00B5E248, -1);
}

// [0x006FC700] sub_006FC700 (21 bytes)
extern "C" __declspec(naked) void __cdecl fn_006FC700() {
    __asm {
        mov eax, dword ptr [mem_00B5E438]
        test eax, eax
        jne skip_init
        call ext_006F9E60
    skip_init:
        inc dword ptr [mem_00B5E438]
        ret
    }
}

// [0x006FC310] sub_006FC310 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(int a, int b);
extern "C" int mem_00B5E3D8;

extern "C" void __cdecl fn_006FC310() {
    mem_00B5E3D8 = ext_006FC3A0(0xb5e3e0, -1);
}

// [0x006FC380] sub_006FC380 (21 bytes)
extern "C" int ext_006FC3A0(int a1, int a2);
extern "C" int mem_00B5E418;

extern "C" void __cdecl fn_006FC380(void) {
    mem_00B5E418 = ext_006FC3A0(0x00B5E408, -1);
}

// [0x006F7370] sub_006F7370 (33 bytes)
extern "C" void ext_006B9D80();

extern "C" __declspec(naked) void* __fastcall fn_006F7370(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaaa374
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006F98A0] sub_006F98A0 (33 bytes)
extern "C" void ext_006B9D80();

extern "C" __declspec(naked) void* __fastcall fn_006F98A0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaab8c0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006F0040] sub_006F0040 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0040(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8bc0
        push 0x6c8c80
        push eax
        push edx
        add ecx, 0x20f0
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F00E0] sub_006F00E0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F00E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c88c0
        push 0x6c8980
        push eax
        push edx
        add ecx, 0x2200
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F01E0] sub_006F01E0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F01E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f7d00
        push 0x6f7ea0
        push eax
        push edx
        add ecx, 0x2420
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0220] sub_006F0220 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0220(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f8040
        push 0x6f81e0
        push eax
        push edx
        add ecx, 0x24a8
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0160] sub_006F0160 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0160(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f8390
        push 0x6f8540
        push eax
        push edx
        add ecx, 0x2310
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F01A0] sub_006F01A0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F01A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f86f0
        push 0x6f7b60
        push eax
        push edx
        add ecx, 0x2398
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F02A0] sub_006F02A0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F02A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f86e0
        push 0x6f7b50
        push eax
        push edx
        add ecx, 0x25b8
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0260] sub_006F0260 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0260(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f8380
        push 0x6f8530
        push eax
        push edx
        add ecx, 0x2530
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0360] sub_006F0360 (34 bytes)
extern "C" void ext_00711D40();
extern "C" void __fastcall fn_006F0360(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x2750, a1, a2, 0x6f8520, 0x6f8370);
}

// [0x006F0320] sub_006F0320 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0320(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f8030
        push 0x6f81d0
        push eax
        push edx
        add ecx, 0x26c8
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F03A0] sub_006F03A0 (34 bytes)
extern "C" void __fastcall fn_006F03A0(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x27d8, a1, a2, 0x6f7b40, 0x6f86d0);
}

// [0x006F02E0] sub_006F02E0 (34 bytes)
extern "C" void __fastcall fn_006F02E0(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x2640, a1, a2, 0x6f7e90, 0x6f7cf0);
}

// [0x006F03E0] sub_006F03E0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F03E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6f7ce0
        push 0x6f7e80
        push eax
        push edx
        add ecx, 0x2860
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0120] sub_006F0120 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006F0120(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8a40
        push 0x6c8b00
        push eax
        push edx
        add ecx, 0x2288
        call ext_00711D40
        ret 0x8
    }
}

// [0x006F0080] sub_006F0080 (34 bytes)
extern "C" void __fastcall fn_006F0080(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x2178, a1, a2, 0x6c8800, 0x6c8d40);
}

// [0x006F0420] sub_006F0420 (34 bytes)
extern "C" void __fastcall fn_006F0420(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x28e8, a1, a2, 0x6f81c0, 0x6f8020);
}

// [0x006F0560] Identical-shape clone of 0x006EFCB0 (34 bytes) - sub_006F0560

extern "C" void ext_00711D40();

extern "C" __declspec(naked) void __fastcall fn_006F0560(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6F8010
        push 0x6F81B0
        push eax
        push edx
        add ecx, 0x2B90
        call ext_00711D40
        ret 0x8
    }
}

// [0x006FD0E0] sub_006FD0E0 (36 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5E468;
extern "C" int mem_00B5E470;
extern "C" int mem_00B5E478;

extern "C" void __cdecl fn_006FD0E0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5E468 = -*p;
    *(double*)&mem_00B5E470 = -*p;
    *(double*)&mem_00B5E478 = -*p;
}
