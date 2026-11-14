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

// [0x007AC840] sub_007AC840 (144 bytes)
extern "C" void ext_007B2B10();
extern "C" void ext_007B2D20();
extern "C" void ext_007B2DF0();
extern "C" void ext_007B2EF0();
extern "C" void ext_007B3380();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_007AC840(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 // lea eax, [esp + 0]
        push esi
        push eax
        mov edx, dword ptr [ecx]
        push edx
        call ext_007B2B10
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0xc]
        add esp, 8
        cmp byte ptr [esi], 0
        lea eax, [esp + 0xc]
        push eax
        push 0xb008
        je loc_7ac8b7
        push ecx
        call ext_007B2EF0
        mov al, byte ptr [mem_00B61218]
        add esp, 0xc
        test al, al
        je loc_7ac888
        mov al, byte ptr [mem_00B61219]
        test al, al
        je loc_7ac8cd
    loc_7ac888:
        mov edx, dword ptr [esp + 0xc]
        push edx
        call ext_007B3380
        mov cl, byte ptr [mem_00B61218]
        add esp, 4
        test cl, cl
        je loc_7ac8a9
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je loc_7ac8cd
    loc_7ac8a9:
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 4], edx
        pop esi
        pop ecx
        ret
    loc_7ac8b7:
        mov edx, dword ptr [ecx + 0x14]
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x18]
        push eax
        call ext_007B2D20
        add esp, 0x10
    loc_7ac8cd:
        pop esi
        pop ecx
        ret
    }
}

// [0x007A65C0] sub_007A65C0 (159 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B3250();
extern "C" int mem_00B61219;
extern "C" int mem_00B61218;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007A65C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        cmp dword ptr [esi], 0
        jne L_1e
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_end
    L_1e:
        mov eax, dword ptr [esi]
        add eax, 38h
        cmp dword ptr [eax], 0
        je L_f1
        push eax
        call ext_007B3250
        add esp, 4
    L_f1:
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_603
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_603:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [mem_009251D8]
        mov eax, dword ptr [eax + 3Ch]
        test eax, eax
        je L_63c
        mov eax, dword ptr [eax + 44h]
        test eax, eax
        je L_61f
        push eax
        call edi
        add esp, 4
    L_61f:
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_631
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_631:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 3Ch]
        push edx
        call edi
        add esp, 4
    L_63c:
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_64e
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_64e:
        mov eax, dword ptr [esi]
        push eax
        call edi
        add esp, 4
        mov dword ptr [esi], 0
    L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x007ADD50] sub_007ADD50 (159 bytes)
extern "C" void ext_007AD660();
extern "C" void ext_007ADDF0();
extern "C" int mem_0092528C;

extern "C" __declspec(naked) void __fastcall fn_007ADD50(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr [esp + 0x10]
        push edi
        test ecx, ecx
        je loc_7adde8
        mov eax, dword ptr [ebp]
        test eax, eax
        je loc_7add6e
        mov edi, dword ptr [eax + 0x4]
        jmp loc_7add70
    loc_7add6e:
        xor edi, edi
    loc_7add70:
        xor esi, esi
        test edi, edi
        jle loc_7adde8
        lea ebx, [eax + 0xc]
    loc_7add79:
        cmp ebx, ecx
        je loc_7add8c
        inc esi
        add ebx, 0x4
        cmp esi, edi
        jl loc_7add79
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    loc_7add8c:
        test eax, eax
        je loc_7add9d
        cmp dword ptr [eax + 0x8], 0x1
        jle loc_7add9d
        mov ecx, ebp
        call ext_007ADDF0
    loc_7add9d:
        mov eax, dword ptr [ebx]
        test eax, eax
        je loc_7addb7
        mov edx, dword ptr [eax + 0x8]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x8], edx
        test ecx, ecx
        jne loc_7addb7
        mov ecx, ebx
        call ext_007AD660
    loc_7addb7:
        lea ecx, [esi + 0x1]
        mov eax, dword ptr [ebp]
        mov edx, ecx
        shl edx, 0x1e
        sub edx, ecx
        lea ecx, [eax + 4*esi + 0x10]
        add edx, edi
        shl edx, 0x2
        push edx
        lea edx, [eax + 4*esi + 0xc]
        push ecx
        push edx
        call dword ptr [mem_0092528C]
        mov eax, dword ptr [ebp]
        add esp, 0xc
        mov dword ptr [eax + 4*edi + 0x8], 0
    loc_7adde8:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x007AD590] sub_007AD590 (48 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_007AD590(void* self, int edx_unused, unsigned char flag) {
    __asm {
        mov dword ptr [ecx], 9989f0h
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
        mov al, byte ptr [esp + 4]
        push esi
        mov esi, ecx
        test al, 1
        mov dword ptr [esi], 9989f0h
        je done
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x007ABB30] sub_007ABB30 (175 bytes)
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CD350();
extern "C" int mem_0092A278;

extern "C" __declspec(naked) double __fastcall fn_007ABB30(void* self, int edx_unused, void* a1, void* a2, int a3, int a4, void* a5) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x1c
        mov     eax, dword ptr [ebp + 0x14]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        cmp     esi, eax
        push    edi
        jl      loc_7abb55
        fld     qword ptr [mem_0092A278]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14

    loc_7abb55:
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0xc], 0

    loc_7abb6d:
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        call    ext_006CA020
        mov     ecx, eax
        call    ext_006C9F00
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [eax]
        mov     ebx, dword ptr [eax + 0x4]
        push    esi
        call    ext_006CA020
        mov     ecx, eax
        call    ext_006C9E80
        fstp    qword ptr [esp + 0x18]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        push    edi
        call    ext_006CD350
        fsub    qword ptr [esp + 0x18]
        fld     st(0)
        fmulp   st(1), st
        fcom    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7abbc8
        mov     edx, dword ptr [ebp + 0x18]
        fstp    qword ptr [esp + 0x10]
        mov     dword ptr [edx], esi
        jmp     loc_7abbca

    loc_7abbc8:
        fstp    st(0)

    loc_7abbca:
        mov     eax, dword ptr [ebp + 0x14]
        inc     esi
        cmp     esi, eax
        jl      loc_7abb6d
        fld     qword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}

// [0x007AF240] sub_007AF240 (176 bytes)
extern "C" void ext_007AF200();

extern "C" __declspec(naked) void __cdecl fn_007AF240(void* self, unsigned int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebx + 0x34]
        test eax, eax
        je L_zero_007AF240
        mov eax, dword ptr [ebx + 0x30]
        test eax, eax
        je L_zero_007AF240
        mov ecx, dword ptr [ebx + 0x38]
        test ecx, ecx
        je L_zero_007AF240
        cmp word ptr [ebx + 0x72], 0x1
        jne L_slow_007AF240
        cmp word ptr [ebx + 0x46], 0x6
        jne L_slow_007AF240
        mov ecx, dword ptr [ebx + 0xc]
        test ch, 0x40
        jne L_slow_007AF240
        push esi
        push edi
        xor edi, edi
        xor edx, edx
        mov di, word ptr [ebx + 0xe4]
        xor esi, esi
        mov si, word ptr [ebx + 0xe6]
        lea eax, [edi + eax - 0x1]
        div edi
        mov edx, dword ptr [esp + 0x14]
        mov ecx, eax
        xor eax, eax
        mov ax, word ptr [ebx + 0x40]
        imul ecx, eax
        lea eax, [esi + edx - 0x1]
        xor edx, edx
        div esi
        imul ecx, edi
        add ecx, 0x7
        xor edx, edx
        shr ecx, 0x3
        imul eax, esi
        imul esi, edi
        imul ecx, eax
        mov eax, ecx
        pop edi
        div esi
        pop esi
        lea ecx, [ecx + 2 * eax]
        mov eax, dword ptr [ebx + 0x38]
        imul eax, ecx
        pop ebx
        ret
    L_slow_007AF240:
        push ebx
        call ext_007AF200
        mov ecx, eax
        mov eax, dword ptr [ebx + 0x38]
        imul ecx, dword ptr [esp + 0x10]
        add esp, 0x4
        imul eax, ecx
        pop ebx
        ret
    L_zero_007AF240:
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007ADBF0] sub_007ADBF0 (272 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD3F0();
extern "C" void ext_007ADD00();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007ADBF0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx]
        test eax, eax
        je L_7ADC09
        cmp dword ptr [eax + 0x8], 0x1
        jle L_7ADC09
        mov ecx, ebx
        call ext_007ADDF0
L_7ADC09:
        mov edx, dword ptr [ebx]
        test edx, edx
        je L_7ADC14
        mov esi, dword ptr [edx + 0x4]
        jmp L_7ADC16
L_7ADC14:
        xor esi, esi
L_7ADC16:
        xor ebp, ebp
        push edi
        test esi, esi
        jle L_7ADC38
        lea ecx, [edx + 0xc]
L_7ADC20:
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_7ADC30
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edi]
        jge L_7ADC38
L_7ADC30:
        inc ebp
        add ecx, 0x4
        cmp ebp, esi
        jl L_7ADC20
L_7ADC38:
        mov eax, esi
        sub eax, ebp
        cmp ebp, esi
        mov dword ptr [esp + 0x10], eax
        jge L_7ADC4F
        mov ecx, dword ptr [edx + 4*esi + 0x8]
        test ecx, ecx
        jne L_7ADC4F
        dec eax
        jmp L_7ADCBC
L_7ADC4F:
        test esi, esi
        mov edi, 0x1
        je L_7ADC5B
        lea edi, [esi + esi]
L_7ADC5B:
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne L_7ADC7E
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
L_7ADC7E:
        mov ecx, dword ptr [ebx]
        lea edx, [4*edi + 0xc]
        push edx
        push ecx
        mov ecx, eax
        call ext_007ADD00
        test esi, esi
        mov dword ptr [ebx], eax
        jne L_7ADCA1
        mov dword ptr [eax + 0x8], 0x1
        mov edx, dword ptr [ebx]
        mov dword ptr [edx], esi
L_7ADCA1:
        mov eax, dword ptr [ebx]
        mov dword ptr [eax + 0x4], edi
        sub edi, esi
        test edi, edi
        jle L_7ADCB8
        mov edx, dword ptr [ebx]
        mov ecx, edi
        xor eax, eax
        lea edi, [edx + 4*esi + 0xc]
        rep stosd
L_7ADCB8:
        mov eax, dword ptr [esp + 0x10]
L_7ADCBC:
        test eax, eax
        pop edi
        jle L_7ADCDA
        mov ecx, dword ptr [ebx]
        shl eax, 0x2
        push eax
        lea edx, [ecx + 4*ebp + 0xc]
        lea eax, [ecx + 4*ebp + 0x10]
        push edx
        push eax
        call dword ptr [mem_0092528C]
        add esp, 0xc
L_7ADCDA:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        lea esi, [ecx + 4*ebp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esi], 0x0
        call ext_007AD3F0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x007AA030] sub_007AA030 (352 bytes)
extern "C" void ext_0079EA90();
extern "C" void ext_0079EAC0();
extern "C" void ext_0079EEC0();
extern "C" void ext_0079EED0();
extern "C" void ext_007AA030();
extern "C" void ext_007AA510();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B52A0();
extern "C" void ext_007B7130();
extern "C" void ext_007B7CE0();
extern "C" void ext_007B7D40();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007AA030(void* a1, int a2) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jne     loc_7aa04b
        push    0x2
        call    ext_007AA510
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
loc_7aa04b:
        mov     eax, dword ptr [edi]
        cmp     eax, 0x80f0
        je      loc_7aa18b
        test    eax, eax
        je      loc_7aa18b
        mov     ebx, dword ptr [esp + 0x18]
        push    ebx
        call    ext_0079EA90
        mov     byte ptr [edi + 0x19], bl
        call    ext_0079EEC0
        push    edi
        mov     ebp, eax
        call    ext_007B3CF0
        mov     al, byte ptr [mem_00B61218]
        add     esp, 0x8
        test    al, al
        je      loc_7aa093
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa093:
        push    ebx
        call    ext_0079EA90
        push    ebp
        call    ext_0079EED0
        mov     al, byte ptr [mem_00B61218]
        add     esp, 0x8
        test    al, al
        je      loc_7aa0b8
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa0b8:
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        call    ext_007B7CE0
        mov     al, byte ptr [mem_00B61218]
        add     esp, 0x8
        test    al, al
        je      loc_7aa0dd
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa0dd:
        push    edi
        call    ext_007B52A0
        mov     al, byte ptr [mem_00B61218]
        add     esp, 0x4
        test    al, al
        je      loc_7aa0fc
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa0fc:
        mov     esi, dword ptr [edi + 0x14]
        test    esi, esi
        je      loc_7aa126
loc_7aa103:
        push    ebx
        push    esi
        call    ext_007AA030
        mov     al, byte ptr [mem_00B61218]
        add     esp, 0x8
        test    al, al
        je      loc_7aa11f
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa11f:
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jne     loc_7aa103
loc_7aa126:
        push    ebx
        call    ext_0079EA90
        add     esp, 0x4
        call    ext_0079EEC0
        mov     ecx, dword ptr [edi + 0x4]
        mov     esi, eax
        sub     esi, ebp
        cmp     esi, ecx
        je      loc_7aa14c
        push    eax
        push    ebp
        call    ext_007B7D40
        add     esp, 0x8
        mov     dword ptr [edi + 0x4], esi
loc_7aa14c:
        push    ebx
        call    ext_0079EAC0
        mov     ecx, dword ptr [eax + 0x8]
        add     esp, 0x4
        cmp     ecx, 0x3
        jne     loc_7aa160
        mov     byte ptr [edi + 0x18], bl
loc_7aa160:
        mov     al, byte ptr [mem_00B61218]
        test    al, al
        je      loc_7aa172
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7aa18b
loc_7aa172:
        mov     dl, byte ptr [edi + 0x18]
        push    edx
        call    ext_0079EAC0
        add     esp, 0x4
        test    eax, eax
        je      loc_7aa18b
        push    edi
        call    ext_007B7130
        add     esp, 0x4
loc_7aa18b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}

// [0x007A3210] sub_007A3210 (511 bytes)
extern "C" void ext_007A3170(void* a1);
extern "C" int mem_00925208;
extern "C" int mem_00997C31;
extern "C" __declspec(naked) void __cdecl fn_007A3210(void** pp) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0Ch]
        xor ebx, ebx
        cmp dword ptr [esi], ebx
        jne short L_has_mem
        push 8B4h
        call dword ptr [mem_00925208]
        add esp, 4
        mov dword ptr [esi], eax
L_has_mem:
        mov eax, dword ptr [esi]
        mov byte ptr [eax], bl
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 1Ch], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 18h], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 14h], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 24h], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 20h], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 34h], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 30h], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 2Ch], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 38h], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 3Ch], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 40h], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 44h], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 4Ch], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 50h], 3F800000h
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 54h], 3
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00997C31]
        mov byte ptr [eax + 58h], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00997C31]
        mov byte ptr [edx + 60h], al
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997C31]
        mov byte ptr [ecx + 59h], dl
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00997C31]
        mov byte ptr [eax + 5Ah], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00997C31]
        mov byte ptr [edx + 5Bh], al
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997C31]
        mov byte ptr [ecx + 5Ch], dl
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00997C31]
        mov byte ptr [eax + 820h], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00997C31]
        mov byte ptr [edx + 5Dh], al
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997C31]
        mov byte ptr [ecx + 5Eh], dl
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00997C31]
        mov byte ptr [eax + 5Fh], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00997C31]
        mov byte ptr [edx + 824h], al
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997C31]
        mov byte ptr [ecx + 825h], dl
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 828h], 64h
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 82Ch], 1
        mov edx, dword ptr [esi]
        add edx, 64h
        push edx
        call ext_007A3170
        mov eax, dword ptr [esi]
        add eax, 0E8h
        push eax
        call ext_007A3170
        mov ecx, dword ptr [esi]
        add ecx, 16Ch
        push ecx
        call ext_007A3170
        mov edx, dword ptr [esi]
        add edx, 1F0h
        push edx
        call ext_007A3170
        mov eax, dword ptr [esi]
        add eax, 274h
        push eax
        call ext_007A3170
        mov ecx, dword ptr [esi]
        add ecx, 2F8h
        push ecx
        call ext_007A3170
        mov edx, dword ptr [esi]
        add edx, 79Ch
        push edx
        call ext_007A3170
        mov eax, dword ptr [esi]
        add eax, 830h
        push eax
        call ext_007A3170
        mov ecx, dword ptr [esi]
        add ecx, 37Ch
        push ecx
        call ext_007A3170
        mov edx, dword ptr [esi]
        add edx, 400h
        push edx
        call ext_007A3170
        mov eax, dword ptr [esi]
        add eax, 484h
        push eax
        call ext_007A3170
        mov ecx, dword ptr [esi]
        add ecx, 508h
        push ecx
        call ext_007A3170
        mov edx, dword ptr [esi]
        add edx, 58Ch
        push edx
        call ext_007A3170
        mov eax, dword ptr [esi]
        add eax, 610h
        push eax
        call ext_007A3170
        mov ecx, dword ptr [esi]
        add ecx, 694h
        push ecx
        call ext_007A3170
        mov edx, dword ptr [esi]
        add edx, 718h
        push edx
        call ext_007A3170
        add esp, 40h
        xor ax, ax
        pop esi
        pop ebx
        ret
    }
}

// [0x007AD9A0] sub_007AD9A0 (592 bytes)
extern "C" void ext_007AD3F0();
extern "C" void ext_007AD5E0();
extern "C" void ext_007ADD50();
extern "C" void ext_007ADDF0();
extern "C" __declspec(naked) void __fastcall fn_007AD9A0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [ebp + 0x10]
        mov dword ptr [ebp - 0x8], ecx
        push esi
        mov eax, dword ptr [ebx]
        xor ecx, ecx
        cmp eax, ecx
        push edi
        mov byte ptr [ebp - 0x1], 0x0
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], ecx
        jne L9D6
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        jmp L9E7
L9D6:
        mov eax, dword ptr [eax]
        mov byte ptr [ebp - 0x1], 0x1
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0x1c], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x18], edx
L9E7:
        mov eax, dword ptr [ebp + 0xc]
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [esi]
        mov dword ptr [ebp + 0x8], ecx
        mov edx, dword ptr [ebp - 0x1c]
        mov ecx, dword ptr [ebp + 0x8]
        xor eax, eax
        sub edx, ecx
        setg al
        dec eax
        and eax, edx
        add eax, ecx
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        lea esi, [edx + ecx - 0x1]
        mov edx, dword ptr [ebp - 0x1c]
        mov ecx, dword ptr [ebp - 0x18]
        mov dword ptr [ebp - 0x1c], eax
        lea edi, [ecx + edx - 0x1]
        xor edx, edx
        cmp edi, esi
        setl dl
        dec edx
        mov ecx, edx
        and edx, edi
        not ecx
        and ecx, esi
        or ecx, edx
        mov edx, dword ptr [ebx]
        sub ecx, eax
        inc ecx
        mov dword ptr [ebp - 0x18], ecx
        mov edx, dword ptr [edx]
        mov esi, dword ptr [edx]
        cmp eax, esi
        jl LA51
        mov edx, dword ptr [edx + 0x4]
        lea eax, [ecx + eax - 0x1]
        lea edx, [edx + esi - 0x1]
        cmp eax, edx
        jg LA51
        mov eax, 0x1
        jmp LA53
LA51:
        xor eax, eax
LA53:
        mov esi, dword ptr [ebp - 0x8]
        test al, al
        mov edi, dword ptr [esi]
        sete al
        test edi, edi
        mov byte ptr [ebp + 0xb], al
        je LA97
        cmp dword ptr [edi + 0x8], 0x1
        jle LA97
        test al, al
        jne LA75
        mov al, byte ptr [ebp - 0x1]
        test al, al
        je LAA8
LA75:
        mov ecx, esi
        call ext_007ADDF0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [ebp + 0xc]
        sub eax, edi
        sar eax, 0x2
        shl eax, 0x2
        add edx, eax
        add ecx, eax
        mov al, byte ptr [ebp + 0xb]
        mov dword ptr [ebx], edx
        mov dword ptr [ebp + 0xc], ecx
LA97:
        test al, al
        je LAA8
        lea ecx, [ebp - 0x1c]
        push 0x0
        push ecx
        mov ecx, dword ptr [ebx]
        call ext_007AD3F0
LAA8:
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, edx
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [edx]
        cmp eax, ecx
        mov dword ptr [ebp - 0x10], ebx
        mov dword ptr [ebp - 0xc], eax
        je LBD4
        mov ecx, dword ptr [eax]
        cmp ecx, ebx
        je LBD4
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp + 0x8], eax
        mov eax, dword ptr [ebx]
        xor esi, esi
        mov edi, eax
        sub edi, edx
        mov edx, eax
        sub eax, edx
        mov edx, dword ptr [ecx + 0x8]
        cmp edx, 0x1
        mov dword ptr [ebp + 0x10], eax
        jg LAFF
        mov edx, dword ptr [ebp - 0x8]
        mov edx, dword ptr [edx]
        test edx, edx
        je LBA1
        cmp dword ptr [edx + 0x8], 0x1
        jle LBA1
LAFF:
        mov edx, dword ptr [ebx + 0x4]
        test edx, edx
        mov dword ptr [ebp - 0x14], edx
        jle LBA1
        lea edx, [ebx + 4*eax + 0xc]
        lea ecx, [ecx + 4*edi + 0xc]
        mov dword ptr [ebp + 0x10], edx
LB18:
        mov edx, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ecx]
        or ebx, dword ptr [edx]
        mov edx, dword ptr [ecx]
        cmp ebx, edx
        jne LB40
        mov ebx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp - 0x14]
        inc esi
        inc edi
        add ecx, 0x4
        inc eax
        add ebx, 0x4
        cmp esi, edx
        mov dword ptr [ebp + 0x10], ebx
        jl LB18
        mov dword ptr [ebp + 0x10], eax
        jmp LB9E
LB40:
        mov edx, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr [ebp + 0x10], eax
        mov dword ptr [ebp + 0x8], ecx
        mov edx, dword ptr [edx]
        test edx, edx
        mov dword ptr [ebp - 0x14], edx
        je LB7F
        cmp dword ptr [edx + 0x8], 0x1
        jle LB7F
        mov ecx, dword ptr [ebp - 0x8]
        call ext_007ADDF0
        mov eax, dword ptr [ebp - 0x8]
        mov edx, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [eax]
        sub ecx, edx
        mov edx, dword ptr [ebp - 0xc]
        sar ecx, 0x2
        lea eax, [edx + 4*ecx]
        mov dword ptr [ebp + 0x8], eax
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x8]
LB7F:
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 0x8], 0x1
        jle LB92
        call ext_007AD5E0
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x8]
LB92:
        mov edx, dword ptr [ecx]
        inc esi
        mov dword ptr [ebp + 0x8], ecx
        mov dword ptr [edx + 4*edi + 0xc], ebx
        inc edi
        inc eax
LB9E:
        mov ebx, dword ptr [ebp - 0x10]
LBA1:
        cmp esi, dword ptr [ebx + 0x4]
        jge LBD4
        lea edx, [4*eax + 0xc]
        lea ecx, [4*edi + 0xc]
LBB4:
        mov eax, dword ptr [ebp + 0x8]
        mov edi, dword ptr [ebp + 0xc]
        add edx, 0x4
        mov eax, dword ptr [eax]
        mov edi, dword ptr [edi]
        add eax, ecx
        add ecx, 0x4
        mov edi, dword ptr [edx + edi - 0x4]
        or dword ptr [eax], edi
        mov eax, dword ptr [ebx + 0x4]
        inc esi
        cmp esi, eax
        jl LBB4
LBD4:
        mov al, byte ptr [ebp - 0x1]
        pop edi
        pop esi
        pop ebx
        test al, al
        je LBEA
        mov ecx, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp - 0x8]
        call ext_007ADD50
LBEA:
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x007A01F0] sub_007A01F0 (640 bytes)
extern "C" {
    void ext_007A9BD0();
    void ext_007AA510();
    void ext_007B24C0();
    void ext_007B2530();
    void ext_007B2570();
    void ext_007B25C0();
    void ext_007B2760();
    void ext_007B2910();
    void ext_007B29C0();
    void ext_007B2B10();
    void ext_007B2C20();
    void ext_007B2E50();
    void ext_007B3380();
    extern int mem_00B61218;
    extern int mem_00B61219;
    extern int mem_00925208;
}

extern "C" __declspec(naked) void __cdecl fn_007A01F0() {
    __asm {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        xor edi, edi
        cmp esi, edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        je L_7A0214
        cmp ebp, edi
        jne L_7A022B
    L_7A0214:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7A0469
    L_7A022B:
        cmp dword ptr [esi], edi
        jne L_7A0246
        push 0x3
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7A0469
    L_7A0246:
        mov eax, dword ptr [esi]
        cmp dword ptr [eax], 0x4d4d
        je L_7A0267
        push 0x3
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7A0469
    L_7A0267:
        mov edx, dword ptr [esi]
        lea ecx, [esp + 0x28]
        push ecx
        push edx
        call ext_007B2B10
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_7A028D
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7A0469
    L_7A028D:
        lea eax, [esp + 0x14]
        push eax
        push 0xb004
        push ebp
        push esi
        call ext_007B29C0
        lea ecx, [esp + 0x20]
        push ecx
        push 0xb003
        push ebp
        push esi
        call ext_007B29C0
        push esi
        call ext_007A9BD0
        mov eax, dword ptr [ebp + 0x70]
        add esp, 0x24
        cmp eax, edi
        jbe L_7A02FD
        mov edx, dword ptr [ebp + 0x78]
        cmp edx, edi
        je L_7A02FD
        mov ecx, dword ptr [ebp + 0x7c]
        cmp ecx, edi
        je L_7A02FD
        mov esi, dword ptr [esp + 0x28]
        push esi
        mov si, word ptr [ebp + 0x82]
        push 0x1
        push esi
        mov si, word ptr [ebp + 0x80]
        push esi
        push ebp
        push ecx
        push edx
        mov dx, word ptr [ebp + 0x74]
        push edx
        push eax
        lea eax, [ebp + 0x58]
        push eax
        call ext_007B2760
        add esp, 0x28
        mov dword ptr [esp + 0x18], eax
    L_7A02FD:
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push 0xb003
        call ext_007B2570
        mov esi, eax
        push esi
        mov dword ptr [esp + 0x18], esi
        call ext_007B2530
        mov ax, word ptr [ebp + 0x24]
        mov cx, word ptr [ebp + 0x22]
        lea edx, [ebp + 0xb]
        push esi
        push edx
        push eax
        push ecx
        push ebp
        call ext_007B24C0
        mov eax, dword ptr [ebp + 0x28]
        add esp, 0x20
        cmp eax, edi
        jbe L_7A0356
        mov edx, dword ptr [ebp + 0x30]
        cmp edx, edi
        je L_7A0356
        mov ecx, dword ptr [ebp + 0x34]
        cmp ecx, edi
        je L_7A0356
        push esi
        push ecx
        push edx
        mov dx, word ptr [ebp + 0x2c]
        push edx
        push eax
        call ext_007B25C0
        add esp, 0x14
    L_7A0356:
        cmp dword ptr [ebp + 0x38], edi
        jbe L_7A041B
        cmp dword ptr [ebp + 0x40], edi
        je L_7A041B
        cmp dword ptr [ebp + 0x44], edi
        je L_7A041B
        lea eax, [esp + 0x24]
        push ebx
        push eax
        mov dword ptr [esp + 0x2c], edi
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [ecx], 0xb023
        mov edx, dword ptr [esp + 0x2c]
        push edx
        call ext_007B3380
        mov ebx, eax
        mov ax, word ptr [ebp + 0x3c]
        mov word ptr [ebx], ax
        mov eax, dword ptr [ebp + 0x38]
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [ebx + 0xc], eax
        lea esi, [eax * 8]
        mov dword ptr [ebx + 0x8], edi
        sub esi, eax
        mov dword ptr [ebx + 0x4], edi
        shl esi, 0x2
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov dword ptr [ebx + 0x10], eax
        mov esi, dword ptr [ebp + 0x40]
        mov edx, ecx
        mov edi, eax
        mov eax, dword ptr [esp + 0x2c]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        lea esi, [eax * 4]
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov dword ptr [ebx + 0x14], eax
        mov esi, dword ptr [ebp + 0x44]
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        call ext_007B2E50
        mov esi, dword ptr [esp + 0x28]
        add esp, 0x18
        xor edi, edi
        pop ebx
    L_7A041B:
        mov edx, dword ptr [ebp + 0x48]
        cmp edx, edi
        jbe L_7A0441
        mov ecx, dword ptr [ebp + 0x50]
        cmp ecx, edi
        je L_7A0441
        mov eax, dword ptr [ebp + 0x54]
        cmp eax, edi
        je L_7A0441
        push esi
        push eax
        mov ax, word ptr [ebp + 0x4c]
        push ecx
        push eax
        push edx
        call ext_007B2910
        add esp, 0x14
    L_7A0441:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, edi
        je L_7A0453
        push eax
        push esi
        call ext_007B2E50
        add esp, 0x8
    L_7A0453:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, edi
        je L_7A0469
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        call ext_007B2E50
        add esp, 0x8
    L_7A0469:
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret
    }
}

// [0x007AB450] sub_007AB450 (720 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA140();
extern "C" void ext_006CA250();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CE720();
extern "C" void ext_006DADE0();
extern "C" void ext_006E7410();
extern "C" void ext_00785450();
extern "C" void ext_00785480();
extern "C" void ext_007857A0();
extern "C" void ext_007AB760();
extern "C" void ext_007AE190();
extern "C" void ext_007AE1F0();
extern "C" void ext_007AE420();
extern "C" void ext_007AE830();
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __fastcall fn_007AB450(void* self) {
    __asm {
        push -1
        push 0x8c1b4b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x7c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x94]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xa0]
        mov esi, ecx
        push edi
        push ebp
        mov bl, byte ptr [esi + 0x84]
        mov byte ptr [esi + 0x84], 0x0
        call ext_007857A0
        test bl, bl
        mov byte ptr [esp + 0x13], al
        je short L_AB4F4
        cmp edi, 0x1
        jle short L_AB4F4
        lea ecx, [esp + 0x14]
        call ext_007AE190
        lea eax, [esi + 0x10]
        lea ecx, [esp + 0x14]
        push eax
        mov dword ptr [esp + 0x98], 0x0
        call ext_00785450
        lea ecx, [esi + 0x18]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_00785480
        push edi
        push ebp
        lea ecx, [esp + 0x1c]
        call ext_007AE420
        lea ecx, [esp + 0x14]
        mov byte ptr [esi + 0x84], bl
        mov dword ptr [esp + 0x94], 0xffffffff
        call ext_007AE1F0
        mov al, byte ptr [esp + 0x13]
L_AB4F4:
        mov ecx, dword ptr [esp + 0x8c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x88
        ret 0x8
        __asm _emit 0x90
        push -1
        push 0x8c1b76
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x158
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x178]
        mov esi, ecx
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebx
        call ext_006CA6A0
        mov ebp, eax
        cmp ebp, 0x2
        jge short L_56E
        push 0xab080c
        push 0x1
        lea ecx, [esi + 0x20]
        call ext_006E7410
        xor al, al
        jmp near ptr L_EPI2
L_56E:
        lea eax, [esp + 0x30]
        mov ecx, edi
        push eax
        push ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x2c], edx
        mov ecx, edx
        mov edx, dword ptr [eax + 0x4]
        cmp ecx, edx
        jl short L_5B7
        jg short L_5B1
        mov edx, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jbe short L_5B7
L_5B1:
        lea eax, [esp + 0x28]
        jmp short L_5BB
L_5B7:
        lea eax, [esp + 0x10]
L_5BB:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        lea eax, [esp + 0x30]
        dec ebp
        mov dword ptr [esp + 0x20], ecx
        push eax
        push ebp
        mov ecx, edi
        mov dword ptr [esp + 0x2c], edx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esi + 0x18]
        mov dword ptr [esp + 0x2c], edx
        mov edx, dword ptr [esi + 0x1c]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], edx
        mov ecx, edx
        mov edx, dword ptr [eax + 0x4]
        cmp ecx, edx
        jg short L_612
        jl short L_60C
        mov edx, dword ptr [esi + 0x18]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jae short L_612
L_60C:
        lea eax, [esp + 0x10]
        jmp short L_616
L_612:
        lea eax, [esp + 0x28]
L_616:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], ecx
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x1c], edx
        call ext_006DADE0
        fstp qword ptr [esp + 0x10]
        lea ecx, [esp + 0x20]
        call ext_006DADE0
        fsubr qword ptr [esp + 0x10]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        je short L_660
        push 0xab07cc
        push 0x1
        lea ecx, [esi + 0x20]
        call ext_006E7410
        xor al, al
        jmp near ptr L_EPI2
L_660:
        lea ecx, [esp + 0x38]
        call ext_006CA140
        push ebx
        push edi
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x178], ebx
        call ext_006CE720
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esp + 0x24]
        push ecx
        push edx
        lea ecx, [esp + 0x44]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_007AB760
        mov bl, al
        test bl, bl
        je short L_6EF
        lea ecx, [esp + 0xd0]
        call ext_006CA140
        push 0x1
        push edi
        lea ecx, [esp + 0xd8]
        mov byte ptr [esp + 0x178], 0x1
        call ext_006CE720
        lea edx, [esp + 0x38]
        push edi
        lea eax, [esp + 0xd4]
        push edx
        push eax
        call ext_007AE830
        add esp, 0xc
        lea ecx, [esp + 0xd0]
        mov byte ptr [esp + 0x170], 0x0
        call ext_006CA250
L_6EF:
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x170], 0xffffffff
        call ext_006CA250
        mov al, bl
L_EPI2:
        mov ecx, dword ptr [esp + 0x168]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x164
        ret 0x4
    }
}
