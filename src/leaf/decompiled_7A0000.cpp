// Decompiled translation unit: src/leaf/decompiled_7A0000.cpp

// [0x007AA880] sub_007AA880 (111 bytes)
extern "C" void ext_006A6D5C();
extern "C" void ext_006B9D70();
extern "C" void ext_0079BA90();

extern "C" __declspec(naked) void __fastcall fn_007AA880(void* self) {
    __asm {
        push -1
        push 0x8c1af0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9981bc
        lea ecx, [esi + 0x788]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006B9D70
        push 0x6b9d70
        push 0x12
        lea eax, [esi + 0x1dc]
        push 0x4c
        push eax
        mov byte ptr [esp + 0x20], 0x0
        call ext_006A6D5C
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0079BA90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007A0C40] sub_007A0C40 (223 bytes)
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007A0C40(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        test eax, eax
        je done
        mov eax, dword ptr [eax + 0x30]
        push edi
        mov edi, dword ptr [mem_009251D8]
        test eax, eax
        je L34
        push eax
        call edi
        add esp, 0x4
    L34:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x34]
        test eax, eax
        je L50
        push eax
        call edi
        add esp, 0x4
    L50:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x50]
        test eax, eax
        je L54
        push eax
        call edi
        add esp, 0x4
    L54:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x54]
        test eax, eax
        je L60
        push eax
        call edi
        add esp, 0x4
    L60:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x60]
        test eax, eax
        je L64
        push eax
        call edi
        add esp, 0x4
    L64:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x64]
        test eax, eax
        je L98
        push eax
        call edi
        add esp, 0x4
    L98:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x98]
        test eax, eax
        je L9C
        push eax
        call edi
        add esp, 0x4
    L9C:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x9c]
        test eax, eax
        je L70
        push eax
        call edi
        add esp, 0x4
    L70:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x70]
        test eax, eax
        je L74
        push eax
        call edi
        add esp, 0x4
    L74:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x74]
        test eax, eax
        je L40
        push eax
        call edi
        add esp, 0x4
    L40:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x40]
        test eax, eax
        je L44
        push eax
        call edi
        add esp, 0x4
    L44:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x44]
        test eax, eax
        je LFREE
        push eax
        call edi
        add esp, 0x4
    LFREE:
        mov edx, dword ptr [esi]
        push edx
        call edi
        add esp, 0x4
        mov dword ptr [esi], 0x0
        pop edi
    done:
        pop esi
        ret
    }
}

// [0x007AC2B0] sub_007AC2B0 (79 bytes)
extern "C" void ext_007AA880();
extern "C" void ext_007AC300();
extern "C" __declspec(naked) void __fastcall fn_007AC2B0(void* self) {
    __asm {
        push -1
        push 0x008c1be8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x0099850c
        mov dword ptr [esp + 0x10], 0
        call ext_007AC300
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_007AA880
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007AE7D0] sub_007AE7D0 (95 bytes)
extern "C" void ext_006A6C87();
extern "C" void ext_006E73B0();
extern "C" void ext_007641C0();

extern "C" __declspec(naked) void __fastcall fn_007AE7D0(void* self) {
    __asm {
        _emit 0xe8
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe9
        _emit 0x26
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x6a
        _emit 0x05
        _emit 0x68
        _emit 0xe0
        _emit 0x0b
        _emit 0xab
        _emit 0x00
        _emit 0xb9
        _emit 0xb8
        _emit 0x1b
        _emit 0xb6
        _emit 0x00
        call ext_006E73B0
        _emit 0xc3
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
        _emit 0x68
        _emit 0x10
        _emit 0xe8
        _emit 0x7a
        _emit 0x00
        call ext_006A6C87
        _emit 0x59
        _emit 0xc3
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x8a
        _emit 0x0d
        _emit 0x10
        _emit 0x1c
        _emit 0xb6
        _emit 0x00
        _emit 0xb0
        _emit 0x01
        _emit 0x84
        _emit 0xc8
        _emit 0x75
        _emit 0x12
        _emit 0x0a
        _emit 0xc8
        _emit 0x88
        _emit 0x0d
        _emit 0x10
        _emit 0x1c
        _emit 0xb6
        _emit 0x00
        _emit 0xb9
        _emit 0xb8
        _emit 0x1b
        _emit 0xb6
        _emit 0x00
        jmp ext_007641C0
        _emit 0xc3
    }
}

// [0x007A9C80] sub_007A9C80 (96 bytes)
extern "C" void ext_007A9950(void* a1);
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) unsigned int __cdecl fn_007A9C80(void* a1, int a2, unsigned int a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        xor edi, edi
        call ext_007A9950
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_scan
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_ret0
    L_scan:
        mov ecx, dword ptr [esi + 0x10]
        xor eax, eax
        mov esi, dword ptr [ecx]
        test esi, esi
        jbe L_ret0
        mov ecx, dword ptr [ecx + 4]
        mov ebx, dword ptr [esp + 0x1c]
        lea edx, [ecx + 4]
    L_loop:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        jne L_next
        cmp edi, dword ptr [esp + 0x18]
        je L_found
        inc edi
    L_next:
        inc eax
        add edx, 8
        cmp eax, esi
        jb L_loop
    L_ret0:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    L_found:
        mov eax, dword ptr [ecx + 8 * eax + 4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_007A19C0();
extern "C" void ext_007A1A60();
extern "C" void ext_007AA510();
extern "C" void ext_007B27D0();
extern "C" void ext_007B3250();
extern "C" int mem_00B61219;

// [0x007A19E0] sub_007A19E0 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_007A19E0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        mov dword ptr [esp + 0x4], 0x0
        jne L_7a1a05
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7a1a5c
    L_7a1a05:
        lea eax, [esp + 0x4]
        push eax
        push esi
        call ext_007A19C0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x8
        cmp eax, dword ptr [ecx]
        jae L_7a1a4f
        mov ecx, dword ptr [ecx + 0x8]
        lea edx, [esp + 0xc]
        push edx
        push 0xb005
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        push esi
        call ext_007B27D0
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x10
        test eax, eax
        je L_7a1a4f
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push eax
        call ext_007A1A60
        add esp, 0x8
    L_7a1a4f:
        lea edx, [esp + 0x4]
        push edx
        call ext_007B3250
        add esp, 0x4
    L_7a1a5c:
        pop esi
        pop ecx
        ret
    }
}

// [0x007ACAC0] sub_007ACAC0 (143 bytes)
extern "C" void ext_007AC960();
extern "C" int mem_00998870;
extern "C" int mem_00998872;
extern "C" int mem_00998874;
extern "C" int mem_00998876;
extern "C" int mem_00998878;
extern "C" int mem_0099887A;
extern "C" int mem_0099887C;

extern "C" __declspec(naked) void __cdecl fn_007ACAC0(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je L_done
        mov eax, dword ptr [esi]
        test eax, eax
        je L_done
        mov cx, word ptr [mem_00998870]
        push ecx
        push eax
        call ext_007AC960
        mov dx, word ptr [mem_00998872]
        mov eax, dword ptr [esi]
        push edx
        push eax
        call ext_007AC960
        mov cx, word ptr [mem_00998874]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        call ext_007AC960
        mov ax, word ptr [mem_00998876]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        call ext_007AC960
        mov dx, word ptr [mem_00998878]
        mov eax, dword ptr [esi]
        push edx
        push eax
        call ext_007AC960
        mov cx, word ptr [mem_0099887A]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        call ext_007AC960
        mov ax, word ptr [mem_0099887C]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        call ext_007AC960
        mov edx, dword ptr [esi]
        push edx
        call dword ptr [mem_009251D8]
        add esp, 0x3c
    L_done:
        mov dword ptr [esi], 0x0
        pop esi
        ret
    }
}

// [0x007AD6B0] sub_007AD6B0 (143 bytes)
extern "C" void ext_0078D130();
extern "C" void ext_00872828();
extern "C" int mem_00B6167C;

extern "C" __declspec(naked) void __fastcall fn_007AD6B0(void* self) {
    __asm {
        push -1
        push 0x8c1c08
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0xe0
        _emit 0x89
        _emit 0x99
        _emit 0x00
        mov eax, dword ptr [esp + 0x14]
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x00
        push eax
        push edx
        mov dword ptr [esp + 0x14], 0
        call ext_0078D130
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4

        nop
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

        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr [ebp - 0x8], 0
        mov dword ptr [ebp - 0x4], 0x40400000
        fld1
        fld qword ptr [ebp - 0x8]
        fyl2x
        fstp qword ptr [ebp - 0x10]
        fld qword ptr [ebp - 0x10]
        call ext_00872828
        mov dword ptr [mem_00B6167C], eax
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007A67C0] sub_007A67C0 (144 bytes)
extern "C" void ext_007A9360();
extern "C" void ext_007AA510();
extern "C" void ext_007B2D80();

extern "C" __declspec(naked) void __cdecl fn_007A67C0(void* p) {
    __asm {
        push ecx
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor ebx, ebx
        test edi, edi
        jne short L_7a67e6
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        jne short L_7a67e6
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret

    L_7a67e6:
        push edi
        call ext_007A9360
        mov eax, dword ptr [edi + 8]
        add esp, 4
        test eax, eax
        jne short L_7a67fa
        pop edi
        pop ebx
        pop ecx
        ret

    L_7a67fa:
        mov ecx, dword ptr [eax]
        push esi
        xor esi, esi
        test ecx, ecx
        jbe short L_7a6849

    L_7a6803:
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 0x14]
        push ecx
        push 0x4600
        mov eax, dword ptr [edx + esi * 8 + 4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        test eax, eax
        je short L_7a6841
        lea ecx, [esp + 0xc]
        push ecx
        push 0x4610
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        jne short L_7a6841
        inc ebx

    L_7a6841:
        mov eax, dword ptr [edi + 8]
        inc esi
        cmp esi, dword ptr [eax]
        jb short L_7a6803

    L_7a6849:
        pop esi
        mov eax, ebx
        pop edi
        pop ebx
        pop ecx
        ret
    }
}
