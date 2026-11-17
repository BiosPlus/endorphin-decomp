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
