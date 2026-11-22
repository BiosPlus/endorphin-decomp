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
extern "C" void ext_0080F070();
extern "C" void ext_00810730();
extern "C" int __cdecl ext_008111B0(void* self, unsigned char* buf, int a, int digits, int base);

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

// [0x008103C0] sub_008103C0 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_008103C0(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4]
        or ch, 0x10
        mov dword ptr [eax + 4], ecx
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        and ch, -0x11
        mov dword ptr [eax + 4], ecx
        ret
    }
}

// [0x008102D0] sub_008102D0 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_008102D0(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4]
        or ch, 0x20
        mov dword ptr [eax + 4], ecx
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        and ch, 0xdf
        mov dword ptr [eax + 4], ecx
        ret
    }
}

// [0x00810410] sub_00810410 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810410(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4]
        or ch, 8
        mov dword ptr [eax + 4], ecx
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        and ch, -9
        mov dword ptr [eax + 4], ecx
        ret
    }
}

// [0x00810490] sub_00810490 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810490(void) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        push edx
        mov edx, dword ptr [eax + 0xc]
        push edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        push eax
        mov eax, dword ptr [esp + 0x18]
        cdq
        push edx
        push eax
        push ecx
        call ext_0080F070
        add esp, 0x1c
        ret
    }
}

// [0x008104C0] sub_008104C0 (45 bytes)
extern "C" __declspec(naked) void __cdecl fn_008104C0(void) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0x10]
        push edx
        mov edx, dword ptr [eax + 0xc]
        push edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        mov edx, dword ptr [esp + 0x14]
        or ah, 0x40
        push eax
        mov eax, dword ptr [ecx]
        push 0
        push edx
        push eax
        call ext_0080F070
        add esp, 0x1c
        ret
    }
}

// [0x008106F0] sub_008106F0 (60 bytes)
extern "C" __declspec(naked) void __cdecl fn_008106F0(void) {
    __asm {
        sub esp, 0xc
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x1c]
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [esp + 0x18]
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x8d
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push 0x0
        push eax
        mov dword ptr [esp + 0x10], edx
        push ecx
        push 0x8116b0
        lea edx, [esp + 0x14]
        push 0x0
        push edx
        call ext_00810730
        add esp, 0x24
        ret
    }
}

// [0x00810660] sub_00810660 (58 bytes)
extern "C" void ext_0080F700();
extern "C" void ext_0080EB80();
extern "C" int mem_00AB6AB0;
extern "C" char mem_00AB6AB8;
extern "C" char mem_00AB6ABC;

extern "C" __declspec(naked) void __cdecl fn_00810660(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0080F700
        add esp, 4
        cmp eax, 1
        mov dword ptr [mem_00AB6AB0], eax
        jne not_one
        mov al, byte ptr [esi]
        pop esi
        mov byte ptr [mem_00AB6AB8], al
        ret
    not_one:
        push esi
        push 3
        push offset mem_00AB6ABC
        mov byte ptr [mem_00AB6AB8], 0
        call ext_0080EB80
        add esp, 12
        pop esi
        ret
    }
}

// [0x00810600] sub_00810600 (89 bytes)
extern "C" int mem_0099F050; /* "(nil)" */
extern "C" __declspec(naked) void __cdecl fn_00810600(void* self, int flag) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        test eax, eax
        jne nonzero_path
        mov al, byte ptr [mem_0099F050]
        mov esi, offset mem_0099F050
        test al, al
        je done
        push edi
        mov edi, dword ptr [esp + 0xc]
    loop_top:
        movsx ecx, al
        mov eax, dword ptr [edi]
        push ecx
        push eax
        inc esi
        call dword ptr [eax]
        mov al, byte ptr [esi]
        add esp, 8
        test al, al
        jne loop_top
        pop edi
        pop esi
        ret
    nonzero_path:
        mov ecx, dword ptr [esp + 8]
        push 0x10
        push -1
        push 0xa
        mov edx, dword ptr [ecx + 4]
        mov edx, dword ptr [edx + 4]
        or edx, 0x6010
        push edx
        cdq
        push edx
        push eax
        mov eax, dword ptr [ecx]
        push eax
        call ext_0080F070
        add esp, 0x1c
    done:
        pop esi
        ret
    }
}

// [0x00810550] sub_00810550 (104 bytes)
extern "C" void ext_0080DD00();
extern "C" void ext_0080ECA0();
extern "C" void ext_008596E0();
extern "C" void ext_00859730();

extern "C" __declspec(naked) int __cdecl fn_00810550(void) {
    __asm {
        push edi
        push 5a00h
        call ext_008596E0
        mov edi, eax
        add esp, 4
        test edi, edi
        jne short L_body
        or eax, -1
        pop edi
        ret
    L_body:
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push eax
        push ecx
        push edi
        push ebx
        push 1
        call ext_0080DD00
        mov esi, eax
        add esp, 14h
        test esi, esi
        jl short L_free
        push edi
        push ebx
        mov ebx, dword ptr [esp + 18h]
        mov edx, dword ptr [ebx]
        push edx
        call ext_0080ECA0
        mov esi, eax
        mov eax, dword ptr [ebx]
        add esp, 0ch
        mov eax, dword ptr [eax + 1ch]
        test eax, eax
        je short L_free
        mov esi, eax
    L_free:
        push edi
        call ext_00859730
        add esp, 4
        mov eax, esi
        pop esi
        pop ebx
        pop edi
        ret
    }
}

// [0x008113E0] sub_008113E0 (262 bytes)
extern "C" __declspec(naked) int __cdecl fn_008113E0(void* self, char* p, int flags, int limit) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0xc], -1
        je exit_one
        mov ebp, dword ptr [esp + 0x20]
    loop_top:
        cmp edi, dword ptr [esp + 0x28]
        jge exit_one
        mov bl, byte ptr [esi + 0xc]
        push 0
        push esi
        call dword ptr [esi + 4]
        mov al, byte ptr [esp + 0x2c]
        add esp, 8
        test al, 0x10
        je store
        cmp bl, 0x5c
        jne store
        mov eax, dword ptr [esi + 0xc]
        lea ecx, [eax - 0x5c]
        cmp ecx, 0x1a
        ja default_esc
        xor edx, edx
        mov dl, byte ptr [ecx + 0x81150c]
        jmp dword ptr [4*edx + 0x8114e8]
    esc_bs:
        mov bl, 0x5c
        jmp store
    esc_a:
        mov bl, 0x07
        jmp store
    esc_b:
        mov bl, 0x08
        jmp store
    esc_f:
        mov bl, 0x0c
        jmp store
    esc_n:
        mov bl, 0x0a
        jmp store
    esc_r:
        mov bl, 0x0d
        jmp store
    esc_t:
        mov bl, 0x09
        jmp store
    esc_v:
        mov bl, 0x0b
        jmp store
    default_esc:
        test byte ptr [eax*2 + 0xab8e00], 4
        je not_digit
        push 8
        push 3
        lea eax, [esp + 0x18]
        push 0
        push eax
        push esi
        call ext_008111B0
        add esp, 0x14
        test eax, eax
        je fail
        mov bl, byte ptr [esp + 0x10]
        jmp store
    not_digit:
        push eax
        call ext_008110F0
        add esp, 4
        cmp eax, 0x58
        jne not_hex
        push 0
        push esi
        call dword ptr [esi + 4]
        push 0x10
        push 2
        lea ecx, [esp + 0x20]
        push 0
        push ecx
        push esi
        call ext_008111B0
        add esp, 0x1c
        test eax, eax
        je fail
        mov bl, byte ptr [esp + 0x10]
        jmp store
    not_hex:
        mov bl, byte ptr [esi + 0xc]
    store:
        test ebp, ebp
        je skip_store
        mov byte ptr [edi + ebp], bl
    skip_store:
        mov eax, dword ptr [esi + 0xc]
        inc edi
        cmp eax, -1
        jne loop_top
    exit_one:
        lea eax, [edi + 1]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    fail:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret
    }
}

// [0x008111B0] sub_008111B0 (522 bytes)
extern "C" void ext_00859740();
extern "C" void ext_00859360();
extern "C" __declspec(naked) int __cdecl fn_008111B0(void* a1, void* a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 8
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x6b
        __asm _emit 0xab
        __asm _emit 0x00
        push ebx
        push ebp
        xor ebx, ebx
        xor ebp, ebp
        push esi
        cmp eax, ebx
        push edi
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 10h], ebx
        je L_120A
        push 200h
        push -1
        push 0b73ca0h
        call ext_00859740
        add esp, 0ch
        xor eax, eax
    L_81E2:
        movsx ecx, byte ptr [eax + 99f058h]
        movsx edx, byte ptr [eax + 99f080h]
        mov dword ptr [ecx*4 + 0b73ca0h], eax
        mov dword ptr [edx*4 + 0b73ca0h], eax
        inc eax
        cmp eax, 24h
        jl L_81E2
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x6b
        __asm _emit 0xab
        __asm _emit 0x00
    L_120A:
        mov esi, dword ptr [esp + 1ch]
        push esi
        call ext_00810C30
        mov eax, dword ptr [esp + 28h]
        add esp, 4
        test ah, 40h
        jne L_1247
        mov eax, dword ptr [esi + 0ch]
        cmp eax, 2bh
        jne L_1232
        push ebx
        push esi
        call dword ptr [esi + 4]
        add esp, 8
        jmp L_1247
    L_1232:
        cmp eax, 2dh
        jne L_1247
        push ebx
        push esi
        call dword ptr [esi + 4]
        add esp, 8
        mov dword ptr [esp + 14h], 1
    L_1247:
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esp + 1ch], eax
        mov al, byte ptr [esp + 24h]
        test al, 10h
        je L_12BA
        mov edi, dword ptr [esp + 2ch]
        lea eax, [edi + 1]
        cmp eax, 11h
        ja L_12BA
        xor ecx, ecx
        mov cl, byte ptr [eax + 8113c4h]
        jmp dword ptr [ecx*4 + 8113bch]
    L_1271:
        cmp dword ptr [esi + 0ch], 30h
        jne L_1383
        push 0
        push esi
        call dword ptr [esi + 4]
        mov eax, dword ptr [esi + 0ch]
        add esp, 8
        test eax, eax
        je L_12BA
        cmp edi, 10h
        jne L_129E
        push eax
        call ext_008110F0
        add esp, 4
        cmp eax, 58h
        jmp L_12AF
    L_129E:
        cmp edi, 2
        jne L_12BA
        push eax
        call ext_008110F0
        add esp, 4
        cmp eax, 42h
    L_12AF:
        jne L_12BA
        push 0
        push esi
        call dword ptr [esi + 4]
        add esp, 8
    L_12BA:
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        je L_12D3
        mov edx, dword ptr [esi + 10h]
        mov edi, dword ptr [esp + 1ch]
        sub edx, edi
        cmp edx, eax
        jge L_137B
    L_12D3:
        mov eax, dword ptr [esi + 0ch]
        cmp eax, -1
        je L_137B
        test byte ptr [eax*2 + 0ab8e00h], 8
        jne L_137B
        cmp eax, 80h
        jae L_1332
        mov edi, dword ptr [eax*4 + 0b73ca0h]
        cmp edi, -1
        je L_137B
        mov eax, dword ptr [esp + 2ch]
        cmp edi, eax
        jge L_137B
        cdq
        push edx
        push eax
        push ebp
        push ebx
        call ext_00859360
        mov ecx, eax
        mov eax, edi
        mov ebp, edx
        push 0
        cdq
        add ecx, eax
        push esi
        adc ebp, edx
        mov ebx, ecx
        mov dword ptr [esp + 28h], 1
        call dword ptr [esi + 4]
        add esp, 18h
        jmp L_12BA
    L_1332:
        test dword ptr [esp + 24h], 1000000h
        je L_137B
        __asm _emit 0xa0
        __asm _emit 0xc0
        __asm _emit 0x6a
        __asm _emit 0xab
        __asm _emit 0x00
        xor edi, edi
        test al, al
        je L_136D
    L_1347:
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        je L_136D
        movsx edx, byte ptr [edi + 0ab6ac0h]
        cmp edx, eax
        jne L_136D
        push 0
        push esi
        call dword ptr [esi + 4]
        mov al, byte ptr [edi + 0ab6ac1h]
        add esp, 8
        inc edi
        test al, al
        jne L_1347
    L_136D:
        mov al, byte ptr [edi + 0ab6ac0h]
        test al, al
        je L_12BA
    L_137B:
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        jne L_138D
    L_1383:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret
    L_138D:
        mov edx, dword ptr [esp + 20h]
        test edx, edx
        je L_13AD
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        je L_13A4
        neg ebx
        adc ebp, 0
        neg ebp
    L_13A4:
        mov eax, ebx
        mov ecx, ebp
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
    L_13AD:
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret
    }
}

// [0x008107D0] sub_008107D0 (1079 bytes)
extern "C" void ext_00810C70();
extern "C" void ext_00811530();
extern "C" void ext_008115A0();
extern "C" void ext_00811610();
extern "C" void ext_00859740();

extern "C" const unsigned int jt_008107D0[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

extern "C" __declspec(naked) void __fastcall fn_008107D0(void* self) {
    __asm {
        sub esp, 0x420
        push ebx
        xor eax, eax
        push ebp
        push esi
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x430]
        lea ecx, [esp + 0x14]
        push edi
        push ecx
        push eax
        call dword ptr [eax + 0x4]
        mov edi, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x440]
        add esp, 8
        mov cl, byte ptr [edi + edx]
        test cl, cl
        je L_bcd
        mov ebx, dword ptr [esp + 0x18]
    L_loop:
        mov edx, dword ptr [esp + 0x20]
        cmp ebx, -1
        jne short L_835
        mov esi, dword ptr [esp + 0x43c]
        lea eax, [edx + edx*4]
        lea eax, [eax + eax*8]
        cmp dword ptr [esi + eax*8], 6
        jne L_bdc
    L_835:
        cmp cl, 0x25
        jne L_b72
        mov ecx, dword ptr [esp + 0x438]
        cmp byte ptr [edi + ecx + 1], 0x25
        jne short L_87c
        cmp ebx, 0x25
        jne L_bf2
        mov eax, dword ptr [esp + 0x434]
        lea edx, [esp + 0x18]
        push edx
        push eax
        call dword ptr [eax + 0x4]
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x20]
        add esp, 8
        add edi, 2
        mov dword ptr [esp + 0x14], edi
        jmp L_bbb
    L_87c:
        lea ecx, [edx + edx*4]
        lea eax, [ecx + ecx*8]
        mov ecx, dword ptr [esp + 0x43c]
        lea ecx, [ecx + eax*8]
        cmp dword ptr [ecx], 7
        jne short L_8a7
    L_891:
        mov eax, dword ptr [ecx + 0x168]
        add ecx, 0x168
        inc edx
        cmp eax, 7
        je short L_891
        mov dword ptr [esp + 0x20], edx
    L_8a7:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x43c]
        lea ecx, [ecx + ecx*4]
        lea eax, [ecx + ecx*8]
        mov ecx, dword ptr [edx + eax*8 + 4]
        test ecx, 0x20000
        mov esi, dword ptr [edx + eax*8 + 8]
        lea ebp, [edx + eax*8]
        mov dword ptr [esp + 0x1c], ecx
        je short L_8d9
        lea eax, [esi + esi*4]
        lea eax, [eax + eax*8]
        mov esi, dword ptr [edx + eax*8 + 0x20]
    L_8d9:
        mov edx, dword ptr [ebp + 0x10]
        test ecx, 0x200000
        je short L_8f5
        lea eax, [edx + edx*4]
        lea edx, [eax + eax*8]
        mov eax, dword ptr [esp + 0x43c]
        mov edx, dword ptr [eax + edx*8 + 0x20]
    L_8f5:
        mov eax, dword ptr [ebp]
        dec eax
        cmp eax, 7
        ja L_bf2
        jmp dword ptr [eax*4 + jt_008107D0]
    L_909:
        test edx, edx
        jne short L_912
        mov edx, 0xa
    L_912:
        push edx
        mov edx, dword ptr [esp + 0x438]
        push esi
        push ecx
        lea ecx, [esp + 0x30]
        push ecx
        push edx
        call ext_008111B0
        add esp, 0x14
        test eax, eax
        je L_bcd
        mov eax, dword ptr [esp + 0x1c]
        test eax, 0x8000000
        jne L_b52
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebp + 0x20]
        inc esi
        test ah, 4
        mov dword ptr [esp + 0x10], esi
        je short L_95d
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [ecx], eax
        jmp L_b52
    L_95d:
        test ah, 8
        je short L_96d
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [ecx], edx
        jmp L_b52
    L_96d:
        test ah, 0x10
        je short L_984
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [ecx + 4], edx
        jmp L_b52
    L_984:
        test ah, 1
        je short L_99b
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [ecx + 4], edx
        jmp L_b52
    L_99b:
        test al, 0x80
        je short L_9aa
    L_99f:
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [ecx], eax
        jmp L_b52
    L_9aa:
        test al, 0x20
        je short L_99f
        mov dx, word ptr [esp + 0x24]
        mov word ptr [ecx], dx
        jmp L_b52
    L_9bb:
        test ecx, 0x8000000
        je short L_9da
        push esi
        xor eax, eax
        push ecx
        mov ecx, dword ptr [esp + 0x43c]
        push eax
        push ecx
        call ext_00811530
        jmp L_b04
    L_9da:
        mov eax, dword ptr [ebp + 0x20]
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x43c]
        push eax
        push ecx
        call ext_00811530
        jmp L_b04
    L_9f2:
        mov esi, dword ptr [esp + 0x438]
        cmp byte ptr [edi + esi], 0x5b
        je short L_a0a
    L_9ff:
        inc edi
        mov dword ptr [esp + 0x14], edi
        cmp byte ptr [edi + esi], 0x5b
        jne short L_9ff
    L_a0a:
        push 0x404
        lea edx, [esp + 0x30]
        inc edi
        push 0
        push edx
        mov dword ptr [esp + 0x20], edi
        call ext_00859740
        lea eax, [esp + 0x38]
        lea ecx, [esp + 0x28]
        push eax
        lea edx, [esp + 0x24]
        push ecx
        push edx
        push esi
        call ext_00810C70
        add esp, 0x1c
        test eax, eax
        jl L_bd1
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, 0x8000000
        je short L_a50
        xor eax, eax
        jmp short L_a53
    L_a50:
        mov eax, dword ptr [ebp + 0x20]
    L_a53:
        mov edx, dword ptr [ebp + 8]
        push edx
        mov edx, dword ptr [esp + 0x438]
        push ecx
        lea ecx, [esp + 0x34]
        push ecx
        push eax
        push edx
        call ext_008115A0
        add esp, 0x14
        jmp L_b07
    L_a73:
        mov esi, dword ptr [ebp + 0x20]
        test esi, esi
        je L_b52
        mov eax, dword ptr [esp + 0x434]
        cmp ebx, -1
        mov eax, dword ptr [eax + 0x14]
        je short L_a8e
        dec eax
    L_a8e:
        test ch, 4
        je short L_a9a
        mov dword ptr [esi], eax
        jmp L_b52
    L_a9a:
        test ch, 8
        je short L_aa6
        mov dword ptr [esi], eax
        jmp L_b52
    L_aa6:
        test ch, 0x10
        je short L_ab6
        cdq
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], edx
        jmp L_b52
    L_ab6:
        test ch, 1
        je short L_ac6
        cdq
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], edx
        jmp L_b52
    L_ac6:
        test cl, 0x80
        je short L_ad2
    L_acb:
        mov dword ptr [esi], eax
        jmp L_b52
    L_ad2:
        test cl, 0x20
        je short L_acb
        mov word ptr [esi], ax
        jmp short L_b52
    L_adc:
        test esi, esi
        jne short L_ae5
        mov esi, 1
    L_ae5:
        test ecx, 0x8000000
        je short L_af1
        xor eax, eax
        jmp short L_af4
    L_af1:
        mov eax, dword ptr [ebp + 0x20]
    L_af4:
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x43c]
        push eax
        push ecx
        call ext_008113E0
    L_b04:
        add esp, 0x10
    L_b07:
        test eax, eax
        je L_bcd
        test dword ptr [esp + 0x1c], 0x8000000
        jne short L_b52
        jmp short L_b4e
    L_b1b:
        test ecx, 0x8000000
        je short L_b27
        xor eax, eax
        jmp short L_b2a
    L_b27:
        mov eax, dword ptr [ebp + 0x20]
    L_b2a:
        mov edx, dword ptr [esp + 0x434]
        push ecx
        push eax
        push edx
        call ext_00811610
        add esp, 0xc
        test eax, eax
        je L_bcd
        test dword ptr [esp + 0x1c], 0x8000000
        jne short L_b52
    L_b4e:
        inc dword ptr [esp + 0x10]
    L_b52:
        mov eax, dword ptr [esp + 0x434]
        mov edi, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x14], edi
        mov ebx, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x20]
        inc eax
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x20], eax
        jmp short L_bbb
    L_b72:
        movsx eax, cl
        test byte ptr [eax*2 + 0xab8e00], 8
        je short L_b97
        mov ecx, dword ptr [esp + 0x434]
        push ecx
        call ext_00810C30
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 0x18], ebx
        jmp short L_bb2
    L_b97:
        cmp ebx, eax
        jne short L_bcd
        mov eax, dword ptr [esp + 0x434]
        lea edx, [esp + 0x18]
        push edx
        push eax
        call dword ptr [eax + 0x4]
        mov ebx, dword ptr [esp + 0x20]
        add esp, 8
    L_bb2:
        mov edi, dword ptr [esp + 0x14]
        inc edi
        mov dword ptr [esp + 0x14], edi
    L_bbb:
        mov eax, dword ptr [esp + 0x438]
        mov cl, byte ptr [edi + eax]
        test cl, cl
        jne L_loop
    L_bcd:
        mov eax, dword ptr [esp + 0x10]
    L_bd1:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x420
        ret
    L_bdc:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jg short L_bd1
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        add esp, 0x420
        ret
    L_bf2:
        shl edi, 8
        mov eax, 0xfffffffe
        sub eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x420
        ret
    }
}

// [0x00810C70] sub_00810C70 (1040 bytes)
extern "C" void ext_00811080();
extern "C" void ext_00811110();
extern "C" int mem_00AB6B08;
extern "C" __declspec(naked) void __fastcall fn_00810C70(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        mov esi, dword ptr [eax]
        and esi, -0x21
        mov dword ptr [eax], esi
        mov dl, byte ptr [edi + ebp]
        cmp dl, 0x5e
        mov ecx, esi
        jne c99
        or ecx, 0x20
        inc edi
        mov dword ptr [eax], ecx
    c99:
        mov al, byte ptr [edi + ebp]
        mov ebx, dword ptr [esp + 0x20]
        cmp al, 0x5d
        jne cb2
        mov ecx, dword ptr [ebx + 0x174]
        inc ecx
        inc edi
        mov dword ptr [ebx + 0x174], ecx
    cb2:
        cmp byte ptr [edi + ebp], 0x2d
        jne cc6
        mov ecx, dword ptr [ebx + 0xb4]
        inc ecx
        inc edi
        mov dword ptr [ebx + 0xb4], ecx
    cc6:
        mov al, byte ptr [edi + ebp]
        lea esi, [edi + ebp]
        cmp al, 0x5d
        je exit_ok
    cd4:
        test al, al
        je exit_ok
        cmp al, 0x2d
        je l1006
        cmp al, 0x5b
        je cf9
        movsx ecx, al
        lea eax, [ebx + 4*ecx]
        mov ecx, dword ptr [ebx + 4*ecx]
        inc ecx
        mov dword ptr [eax], ecx
        jmp l103f
    cf9:
        mov al, byte ptr [edi + ebp + 1]
        cmp al, 0x2e
        je fe8
        cmp al, 0x3a
        je d82
        cmp al, 0x3d
        je d18
    d0d:
        inc dword ptr [ebx + 0x16c]
        jmp l103f
    d18:
        mov eax, dword ptr [mem_00AB6B08]
        test eax, eax
        je d30
        call ext_00811110
        mov dword ptr [mem_00AB6B08], 0
    d30:
        lea edx, [edi + 2]
    d33:
        mov al, byte ptr [edx + ebp]
        test al, al
        je err
        cmp al, 0x3d
        je d6e
        movsx eax, al
        shl eax, 8
        lea ecx, [eax + 0xb73ea0]
        mov al, byte ptr [eax + 0xb73ea0]
        test al, al
        je d6b
    d58:
        movsx eax, al
        mov esi, dword ptr [ebx + 4*eax]
        lea eax, [ebx + 4*eax]
        inc esi
        inc ecx
        mov dword ptr [eax], esi
        mov al, byte ptr [ecx]
        test al, al
        jne d58
    d6b:
        inc edx
        jmp d33
    d6e:
        mov al, byte ptr [edx + ebp + 1]
        inc edx
        cmp al, 0x5d
        jne err
        mov edi, edx
        jmp l103f
    d82:
        push esi
        push 9
        push 0xab6b24
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je dbb
        mov ecx, ebx
        mov eax, 0xab8e00
    d9d:
        test word ptr [eax], 0x107
        je da6
        inc dword ptr [ecx]
    da6:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl d9d
        add edi, 9
        jmp l103f
    dbb:
        push esi
        push 9
        push 0xab6b30
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je df4
        mov ecx, ebx
        mov eax, 0xab8e00
    dd6:
        test word ptr [eax], 0x103
        je ddf
        inc dword ptr [ecx]
    ddf:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl dd6
        add edi, 9
        jmp l103f
    df4:
        push esi
        push 9
        push 0xab6b3c
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je e2b
        mov ecx, ebx
        mov eax, 0xab8e00
    e0f:
        test byte ptr [eax], 0x20
        je e16
        inc dword ptr [ecx]
    e16:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl e0f
        add edi, 9
        jmp l103f
    e2b:
        push esi
        push 9
        push 0xab6b48
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je e62
        mov ecx, ebx
        mov eax, 0xab8e00
    e46:
        test byte ptr [eax], 0x4
        je e4d
        inc dword ptr [ecx]
    e4d:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl e46
        add edi, 9
        jmp l103f
    e62:
        push esi
        push 9
        push 0xab6b54
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je e9b
        mov ecx, ebx
        mov eax, 0xab8e00
    e7d:
        test word ptr [eax], 0x117
        je e86
        inc dword ptr [ecx]
    e86:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl e7d
        add edi, 9
        jmp l103f
    e9b:
        push esi
        push 9
        push 0xab6b60
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je ed2
        mov ecx, ebx
        mov eax, 0xab8e00
    eb6:
        test byte ptr [eax], 0x2
        je ebd
        inc dword ptr [ecx]
    ebd:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl eb6
        add edi, 9
        jmp l103f
    ed2:
        push esi
        push 9
        push 0xab6b6c
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je f0b
        mov ecx, ebx
        mov eax, 0xab8e00
    eed:
        test word ptr [eax], 0x157
        je ef6
        inc dword ptr [ecx]
    ef6:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl eed
        add edi, 9
        jmp l103f
    f0b:
        push esi
        push 9
        push 0xab6b78
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je f42
        mov ecx, ebx
        mov eax, 0xab8e00
    f26:
        test byte ptr [eax], 0x10
        je f2d
        inc dword ptr [ecx]
    f2d:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl f26
        add edi, 9
        jmp l103f
    f42:
        push esi
        push 9
        push 0xab6b84
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je f79
        mov ecx, ebx
        mov eax, 0xab8e00
    f5d:
        test byte ptr [eax], 0x8
        je f64
        inc dword ptr [ecx]
    f64:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl f5d
        add edi, 9
        jmp l103f
    f79:
        push esi
        push 9
        push 0xab6b90
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je fb0
        mov ecx, ebx
        mov eax, 0xab8e00
    f94:
        test byte ptr [eax], 0x1
        je f9b
        inc dword ptr [ecx]
    f9b:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl f94
        add edi, 9
        jmp l103f
    fb0:
        push esi
        push 0ah
        push 0xab6b9c
        call ext_00811080
        add esp, 0ch
        test eax, eax
        je d0d
        mov ecx, ebx
        mov eax, 0xab8e00
    fcf:
        test byte ptr [eax], 0x80
        je fd6
        inc dword ptr [ecx]
    fd6:
        add eax, 2
        add ecx, 4
        cmp eax, 0xab9000
        jl fcf
        add edi, 0ah
        jmp l103f
    fe8:
        lea ecx, [edi + 2]
    feb:
        mov al, byte ptr [ecx + ebp]
        test al, al
        je err
        cmp al, 0x2e
        je ff9
        inc ecx
        jmp feb
    ff9:
        mov al, byte ptr [ecx + ebp + 1]
        inc ecx
        cmp al, 0x5d
        jne err
        mov edi, ecx
        jmp l103f
    l1006:
        mov cl, byte ptr [edi + ebp - 1]
        mov al, byte ptr [edi + ebp + 1]
        inc edi
        cmp al, 0x5d
        jne l101b
        inc dword ptr [ebx + 0xb4]
        jmp l103f
    l101b:
        test al, al
        je l105d
        cmp cl, al
        jg l106c
        movsx edx, cl
        movsx eax, al
        cmp edx, eax
        jg l103f
        sub eax, edx
        lea ecx, [ebx + 4*edx]
        inc eax
    l1033:
        mov edx, dword ptr [ecx]
        add ecx, 4
        inc edx
        dec eax
        mov dword ptr [ecx - 4], edx
        jne l1033
    l103f:
        inc edi
        mov al, byte ptr [edi + ebp]
        lea esi, [edi + ebp]
        cmp al, 0x5d
        jne cd4
    exit_ok:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    err:
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret
    l105d:
        shl edi, 8
        mov eax, 0xfffffffe
        sub eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    l106c:
        shl edi, 8
        mov eax, 0xfffffff9
        sub eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x008113C4] sub_008113C4 (28 bytes)
// NOTE: bytes at this VA are a 18-byte 0/1 flag table followed by nop padding, not real code.
extern "C" __declspec(naked) void __fastcall fn_008113C4(void* self) {
    __asm {
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
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

// [0x0081150C] sub_0081150C (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_0081150C(void* self) {
    __asm {
        _emit 0x00
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x01
        _emit 0x02
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x03
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x04
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x05
        _emit 0x08
        _emit 0x06
        _emit 0x08
        _emit 0x07
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
}
