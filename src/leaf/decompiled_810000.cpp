// Decompiled translation unit: src/leaf/decompiled_810000.cpp
extern "C" int __cdecl ext_008110F0(int c);
extern "C" void ext_00810C30(void* self);
extern "C" int ext_008113E0(void* self, char* p, int arg3, int one);

extern "C" int ext_008113E0(void* self, char* p, int arg3, int one);
extern "C" __declspec(naked) void __cdecl fn_00810250(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 2
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -3
        ret
    }
}
extern "C" void ext_00810550();
extern "C" void __cdecl ext_00810550();

// [0x00810180] sub_00810180 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810180(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 6
        and eax, 1
        ret
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
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 0x40
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -0x41
        ret
    }
}

// [0x008101C0] sub_008101C0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_008101C0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 4
        and eax, 1
        ret
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
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 0x10
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -0x11
        ret
    }
}

// [0x00810200] sub_00810200 (64 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_00810200(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 3
        and eax, 1
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
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je L1
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 8
        ret
    L1:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -9
        ret
    }
}

// [0x00810270] sub_00810270 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_00810270(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 2
        and eax, 1
        ret
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
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit_810270
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 4
        ret
    clear_bit_810270:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -5
        ret
    }
}

// [0x008110F0] sub_008110F0 (32 bytes)
extern "C" __declspec(naked) int __cdecl fn_008110F0(int c) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x61
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0xc3
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
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00811190] sub_00811190 (32 bytes)
extern "C" void ext_0080FF10();
extern "C" __declspec(naked) void __cdecl fn_00811190(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        push ecx
        call ext_0080FF10
        add esp, 0x8
        ret
    }
}

// [0x00810C30] sub_00810C30 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810C30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x8], eax
        _emit 0xf6
        _emit 0x04
        _emit 0x45
        _emit 0x00
        _emit 0x8e
        _emit 0xab
        _emit 0x00
        _emit 0x08
        je short fn_00810C30_done
    fn_00810C30_loop:
        lea eax, [esp + 0x8]
        push eax
        push esi
        call dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x10]
        add esp, 0x8
        _emit 0xf6
        _emit 0x04
        _emit 0x45
        _emit 0x00
        _emit 0x8e
        _emit 0xab
        _emit 0x00
        _emit 0x08
        jne short fn_00810C30_loop
    fn_00810C30_done:
        pop esi
        ret
    }
}

// [0x008115A0] sub_008115A0 (112 bytes)
extern "C" __declspec(naked) int __cdecl fn_008115A0(void* a1, void* a2, void* a3, unsigned a4, int a5) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebx + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], eax
        xor esi, esi
    loop_top:
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        je skip_max
        cmp esi, ecx
        jge loop_done
    skip_max:
        cmp eax, -1
        je loop_done
        mov edx, dword ptr [esp + 0x1c]
        xor ecx, ecx
        cmp dword ptr [edx + 4*eax], ecx
        mov edx, ebp
        sete cl
        shr edx, 5
        and edx, 1
        xor ecx, edx
        jne loop_done
        test edi, edi
        je skip_store
        mov byte ptr [esi + edi], al
    skip_store:
        lea eax, [esp + 0x14]
        push eax
        push ebx
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 0x1c]
        add esp, 8
        inc esi
        jmp loop_top
    loop_done:
        test edi, edi
        je epilogue
        mov byte ptr [esi + edi], 0
    epilogue:
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    }
}

// [0x00811080] sub_00811080 (112 bytes)
extern "C" __declspec(naked) int __cdecl fn_00811080(const char* s1, unsigned int n, const char* s2, int unused) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        je ret0
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        je ret0
        mov al, byte ptr [esi]
        push ebp
        push edi
        xor edi, edi
        test al, al
        je tail
loop_top:
        cmp byte ptr [ebx], 0x0
        je tail
        cmp edi, dword ptr [esp + 0x18]
        ja tail
        movsx eax, al
        push eax
        call ext_008110F0
        movsx ecx, byte ptr [ebx]
        push ecx
        mov ebp, eax
        call ext_008110F0
        add esp, 0x8
        cmp ebp, eax
        jne tail
        mov al, byte ptr [esi + 0x1]
        inc esi
        inc ebx
        inc edi
        test al, al
        jne loop_top
tail:
        mov eax, dword ptr [esp + 0x18]
        cmp edi, eax
        pop edi
        pop ebp
        je one
        cmp byte ptr [esi], 0x0
        jne ret0
        cmp byte ptr [ebx], 0x0
        jne ret0
one:
        pop esi
        mov eax, 0x1
        pop ebx
        ret
ret0:
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x00811530] sub_00811530 (112 bytes)
extern "C" __declspec(naked) int __cdecl fn_00811530(void* self, char* buf, int arg3, int max) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        push ebp
        call ext_00810C30
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x1c]
        add esp, 0x4
        xor esi, esi
    fn_00811530_loop:
        test ebx, ebx
        je fn_00811530_body
        cmp esi, ebx
        jge fn_00811530_end
    fn_00811530_body:
        mov eax, dword ptr [ebp + 0xc]
        cmp eax, -1
        je fn_00811530_end
        test byte ptr [2 * eax + 0xab8e00], 0x8
        jne fn_00811530_end
        test edi, edi
        je fn_00811530_zero
        lea eax, [esi + edi]
        jmp fn_00811530_call
    fn_00811530_zero:
        xor eax, eax
    fn_00811530_call:
        mov ecx, dword ptr [esp + 0x1c]
        push 0x1
        push ecx
        push eax
        push ebp
        call ext_008113E0
        add esp, 0x10
        test eax, eax
        je fn_00811530_end
        inc esi
        jmp fn_00811530_loop
    fn_00811530_end:
        test edi, edi
        je fn_00811530_ret
        mov byte ptr [esi + edi], 0x0
    fn_00811530_ret:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    }
}

// [0x00811110] sub_00811110 (128 bytes)
extern "C" void ext_00811190();

extern "C" __declspec(naked) void __fastcall fn_00811110(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov byte ptr [esp + 0xf], 0
        mov byte ptr [esp + 0xd], 0
        mov dword ptr [esp + 0x10], 0
        xor esi, esi
    outer:
        mov al, byte ptr [esp + 0x10]
        xor edi, edi
        mov byte ptr [esp + 0xe], al
        xor ebx, ebx
    inner:
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0xe]
        push ecx
        push edx
        mov byte ptr [esp + 0x14], bl
        call ext_00811190
        add esp, 8
        test eax, eax
        je skip
        mov byte ptr [esi + edi + 0xb73ea0], bl
        inc edi
    skip:
        inc ebx
        cmp ebx, 0x100
        jl inner
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esi + edi + 0xb73ea0], 0
        add esi, 0x100
        inc edx
        cmp esi, 0x10000
        mov dword ptr [esp + 0x10], edx
        jl outer
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00810730] sub_00810730 (160 bytes)
extern "C" void ext_0080DD00();
extern "C" void ext_008107D0();
extern "C" void ext_008596E0();
extern "C" void ext_00859730();
extern "C" void ext_00859740();
extern "C" __declspec(naked) void __cdecl fn_00810730(void) {
    __asm {
        sub esp, 20h
        push edi
        push 5a00h
        call ext_008596E0
        mov edi, eax
        add esp, 4
        test edi, edi
        jne have_buf
        or eax, -1
        pop edi
        add esp, 20h
        ret
    have_buf:
        push ebx
        push esi
        push 20h
        lea eax, [esp + 10h]
        push 0
        push eax
        call ext_00859740
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 4ch]
        push ecx
        push edx
        push edi
        push ebx
        push 2
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 48h], 0
        call ext_0080DD00
        mov esi, eax
        add esp, 20h
        test esi, esi
        jl skip_a
        push edi
        lea eax, [esp + 10h]
        push ebx
        push eax
        call ext_008107D0
        mov esi, eax
        mov eax, dword ptr [esp + 34h]
        add esp, 0ch
        test eax, eax
        je skip_a
        mov esi, eax
    skip_a:
        push edi
        call ext_00859730
        add esp, 4
        mov eax, esi
        pop esi
        pop ebx
        pop edi
        add esp, 20h
        ret
    }
}

// [0x008105E0] sub_008105E0 (26 bytes)
extern "C" __declspec(naked) void __cdecl fn_008105E0(void) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push 0
        push ecx
        push edx
        call ext_00810550
        add esp, 0x10
        ret
    }
}

// [0x008105C0] sub_008105C0 (26 bytes)
extern "C" __declspec(naked) void __cdecl fn_008105C0(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        lea eax, [esp + 0xc]
        push 0x0
        push eax
        push ecx
        push edx
        call ext_00810550
        add esp, 0x10
        ret
    }
}

// [0x008106D0] sub_008106D0 (21 bytes)
extern "C" void ext_0080EB80();
extern "C" char mem_00AB6AC4;

extern "C" __declspec(naked) void __cdecl fn_008106D0(void* arg0) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push 0x40
        push offset mem_00AB6AC4
        call ext_0080EB80
        add esp, 0xc
        ret
    }
}

// [0x00810520] sub_00810520 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810520() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x0c]
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov eax, dword ptr [esp + 8]
        push 0
        push ecx
        push edx
        push eax
        call ext_00810550
        add esp, 0x14
        ret
    }
}

// [0x008106A0] sub_008106A0 (36 bytes)
extern "C" void ext_0080EB80();
extern "C" void ext_0080F700();
extern "C" int mem_00AB6AB4;
extern "C" int mem_00AB6AC0;

extern "C" __declspec(naked) void __cdecl fn_008106A0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push 3
        push offset mem_00AB6AC0
        call ext_0080EB80
        push offset mem_00AB6AC0
        call ext_0080F700
        add esp, 0x10
        mov dword ptr [mem_00AB6AB4], eax
        ret
    }
}

// [0x008104F0] sub_008104F0 (36 bytes)
extern "C" void ext_0080F600();
extern "C" void __cdecl fn_008104F0(int* a1, int a2) {
    int* e = *(int**)((char*)a1 + 4);
    typedef void (__cdecl *F5)(int, int, int, int, int);
    ((F5)ext_0080F600)(a1[0], a2, e[1], e[2], e[3]);
}

// [0x00810320] sub_00810320 (38 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810320(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 0x1000000
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], 0xfeffffff
        ret
    }
}

// [0x00810460] sub_00810460 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810460(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4]
        or ch, 4
        mov dword ptr [eax + 4], ecx
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        and ch, -5
        mov dword ptr [eax + 4], ecx
        ret
    }
}

// [0x00810370] sub_00810370 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810370(void* self, int flag) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4]
        or ch, 0x80
        mov dword ptr [eax + 4], ecx
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        and ch, 0x7f
        mov dword ptr [eax + 4], ecx
        ret
    }
}
