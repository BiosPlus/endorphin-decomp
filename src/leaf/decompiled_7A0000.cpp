// Decompiled translation unit: src/leaf/decompiled_7A0000.cpp
extern "C" void ext_007AF3A0();
extern "C" void ext_007B9660();

extern "C" void ext_007B9660();
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
extern "C" void ext_007AF800();
extern "C" void ext_007AF8F0();

extern "C" void ext_007AF8F0();
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
extern "C" void ext_007B2D80();
extern "C" void ext_007B2DF0();

extern "C" void ext_007B2DF0();
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
extern "C" void ext_006DEEC0();
extern "C" void ext_007B9360();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();

extern "C" void ext_006B9E60();
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
extern "C" void ext_007A9950();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" int mem_00B61218;
extern "C" int mem_00B61219;
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
extern "C" void ext_007B2CD0();
extern "C" void ext_007B3120();

extern "C" void ext_007B3120();
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
extern "C" void ext_006E7410();
typedef void (__fastcall *fn_006E7410_t)(void* self, int edx, int a1, int a2);

typedef void (__fastcall *fn_006E7410_t)(void* self, int edx, int a1, int a2);
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
extern "C" void ext_007AEC70();
extern "C" void ext_007853D0();
extern "C" void ext_00783270();
extern "C" void ext_007AEC60();

extern "C" void ext_007AEC60();
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
extern "C" void ext_0079B140();
// ext_007AF8F0 is already in shard preamble

// ext_007AF8F0 is already in shard preamble
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
extern "C" void ext_007AA910();
extern "C" void ext_007AB720();
extern "C" void ext_006D2130();
extern "C" void ext_007ABBE0();

extern "C" void ext_007ABBE0();
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
extern "C" int mem_009252A0;
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF60();
extern "C" int mem_00925298;

extern "C" void ext_0079AF60();
extern "C" int mem_00925298;
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
extern "C" unsigned char mem_00998A98[256];
extern "C" int mem_0092522C;
extern "C" void ext_007B2C20();
extern "C" void ext_007B9620();

extern "C" void ext_007B9620();
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

// [0x007AE830] sub_007AE830 (879 bytes)
extern "C" void ext_006C9BF0();
extern "C" void ext_006C9C30();
extern "C" void ext_006C9C40();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9D00();
extern "C" void ext_006C9DC0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA2F0();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CAEF0();
extern "C" void ext_006CDB40();
extern "C" void ext_006CDDB0();
extern "C" int mem_0092520C;
extern "C" int mem_009251DC;

extern "C" __declspec(naked) void __fastcall fn_007AE830(void* self) {
    __asm {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x48]
        push edi
        mov ecx, esi
        call ext_006CA6A0
        mov ebp, dword ptr [esp + 0x50]
        mov edi, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x10], edi
        call ext_006CA6A0
        mov ebx, eax
        test edi, edi
        mov dword ptr [esp + 0x18], ebx
        jle L_7aeb87
        test ebx, ebx
        jle L_7aeb73
        lea eax, [esp + 0x38]
        mov ecx, esi
        push eax
        push 0x0
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 0x40]
        lea eax, [edi - 0x1]
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        lea edx, [esp + 0x30]
        mov ecx, ebp
        push edx
        push 0x0
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        lea eax, [esp + 0x28]
        lea ecx, [ebx - 0x1]
        push eax
        push ecx
        mov ecx, ebp
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x3C]
        cmp eax, ecx
        mov ecx, dword ptr [esp + 0x30]
        jg L_7ae8fb
        jl L_7ae8dd
        cmp ecx, dword ptr [esp + 0x38]
        ja L_7ae8fb
    L_7ae8dd:
        mov edx, dword ptr [esp + 0x2C]
        cmp edx, dword ptr [esp + 0x44]
        jl L_7ae8fb
        jg L_7aeb8b
        mov edx, dword ptr [esp + 0x28]
        cmp edx, dword ptr [esp + 0x40]
        jae L_7aeb8b
    L_7ae8fb:
        push 0x0
        push eax
        push ecx
        mov ecx, esi
        call ext_006CAEF0
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        add esp, 0x8
        call ext_00872828
        mov ecx, dword ptr [esp + 0x28]
        mov ebp, eax
        mov eax, dword ptr [esp + 0x2C]
        push 0x0
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x58], ebp
        call ext_006CAEF0
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_009251DC]
        add esp, 0x8
        call ext_00872828
        sub ebp, eax
        mov dword ptr [esp + 0x14], eax
        add ebp, ebx
        mov ebx, dword ptr [esp + 0x54]
        mov ecx, ebx
        lea edi, [edi + ebp - 0x1]
        mov dword ptr [esp + 0x24], edi
        call ext_006CA2F0
        push edi
        mov ecx, ebx
        call ext_006CA500
        mov eax, dword ptr [esp + 0x4C]
        xor edi, edi
        xor ebp, ebp
        test eax, eax
        jle L_7ae998
    L_7ae976:
        push ebp
        mov ecx, esi
        call ext_006CA020
        push eax
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9BF0
        mov eax, dword ptr [esp + 0x4C]
        inc edi
        inc ebp
        cmp ebp, eax
        jl L_7ae976
    L_7ae998:
        mov eax, dword ptr [esp + 0x18]
        lea edx, [edi - 0x1]
        xor ebp, ebp
        mov dword ptr [esp + 0x54], edx
        test eax, eax
        jle L_7ae9cd
    L_7ae9a9:
        mov ecx, dword ptr [esp + 0x50]
        push ebp
        call ext_006CA020
        push eax
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9BF0
        mov eax, dword ptr [esp + 0x18]
        inc edi
        inc ebp
        cmp ebp, eax
        jl L_7ae9a9
    L_7ae9cd:
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [edi - 0x1]
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [esp + 0x10]
        lea ebp, [ecx + 0x1]
        cmp ebp, eax
        jge L_7aea05
    L_7ae9e3:
        push ebp
        mov ecx, esi
        call ext_006CA020
        push eax
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9BF0
        mov eax, dword ptr [esp + 0x10]
        inc edi
        inc ebp
        cmp ebp, eax
        jl L_7ae9e3
    L_7aea05:
        mov eax, dword ptr [esp + 0x4C]
        lea edi, [eax - 0x1]
        test edi, edi
        jl L_7aea82
        cmp eax, dword ptr [esp + 0x10]
        jge L_7aea82
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 0x8
        jne L_7aea82
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9CD0
        cmp eax, 0x400
        je L_7aea56
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9CD0
        cmp eax, 0xC00
        jne L_7aea82
    L_7aea56:
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        push 0x0
        push edx
        push eax
        mov ecx, esi
        call ext_006CDDB0
        push ecx
        mov ecx, dword ptr [esp + 0x58]
        fstp dword ptr [esp]
        push 0x1
        push ecx
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9DF0
    L_7aea82:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jl L_7aeb5f
        cmp eax, dword ptr [esp + 0x1C]
        jge L_7aeb5f
        push eax
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 0x8
        jne L_7aeb5f
        mov ebp, dword ptr [esp + 0x14]
        mov ecx, esi
        push ebp
        call ext_006CA020
        mov ecx, eax
        call ext_006C9CD0
        cmp eax, 0x400
        je L_7aeae0
        push ebp
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9CD0
        cmp eax, 0xC00
        jne L_7aeb5f
    L_7aeae0:
        mov edx, dword ptr [esp + 0x2C]
        mov eax, dword ptr [esp + 0x28]
        push 0x0
        push edx
        push eax
        mov ecx, esi
        call ext_006CDB40
        mov edi, dword ptr [esp + 0x50]
        push 0x8
        fstp qword ptr [esp + 0x20]
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C40
        push 0xC00
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9D00
        fld qword ptr [esp + 0x1C]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        push 0x0
        push edi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9DF0
        push 0x1
        push ebp
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9DC0
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        push 0x1
        push edi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9DF0
    L_7aeb5f:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, ebx
        call ext_006CA540
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret
    L_7aeb73:
        mov ecx, dword ptr [esp + 0x54]
        push 0x1
        push esi
        call ext_006CE720
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret
    L_7aeb87:
        test ebx, ebx
        jle L_7aeb97
    L_7aeb8b:
        mov ecx, dword ptr [esp + 0x54]
        push 0x1
        push ebp
        call ext_006CE720
    L_7aeb97:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret
    }
}

extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA500();
extern "C" void ext_006CA520();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CAA90();
extern "C" void ext_006CAEF0();
extern "C" void ext_006CD350();
extern "C" void ext_006CE800();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006DBDF0();
extern "C" void ext_006DBE10();
extern "C" void ext_006E7410();
extern "C" void ext_00785440();
extern "C" void ext_00785470();
extern "C" void ext_00789BA0();
extern "C" void ext_00872828();
extern "C" int mem_0092520C;
extern "C" int mem_0092A270;

// [0x007AE420] sub_007AE420 (944 bytes)
extern "C" __declspec(naked) bool __fastcall fn_007AE420(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8c1c2b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xfc
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push 0x4
        push 0x10
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x30], ebx
        call ext_006D2130
        lea eax, [esp + 0x44]
        mov dword ptr [esp + 0x48], eax
        mov eax, dword ptr [ebp + 0xc]
        xor esi, esi
        cmp eax, 0x2
        mov dword ptr [esp + 0x110], esi
        jge short L_007AE4AC
        push 0xab0bb0
        push 0x1
        lea ecx, [ebx + 0x20]
        call ext_006E7410
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x110], 0xffffffff
        call ext_006D2160
        xor al, al
        mov ecx, dword ptr [esp + 0x108]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8

    L_007AE4AC:
        cmp eax, esi
        mov dword ptr [esp + 0x18], esi
        jle L_007AE75B

    L_007AE4B8:
        mov edi, dword ptr [ebp + 0x8]
        or eax, -0x1
        mov dword ptr [esp + esi*4 + 0x68], eax
        mov dword ptr [esp + esi*4 + 0xb8], eax
        mov ecx, dword ptr [edi + esi*4]
        call ext_006CA6A0
        cmp eax, dword ptr [esp + 0x18]
        jle short L_007AE4E3
        mov ecx, dword ptr [edi + esi*4]
        call ext_006CA6A0
        mov dword ptr [esp + 0x18], eax

    L_007AE4E3:
        mov eax, dword ptr [ebp + 0xc]
        inc esi
        cmp esi, eax
        jl short L_007AE4B8

    L_007AE4EB:
        test eax, eax
        jle short L_007AE53E
        mov esi, edi
        mov edi, dword ptr [ebp + 0xc]
        or ebx, -0x1

    L_007AE4F7:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esi]
        call ext_006CA500
        mov eax, 0x7fffffff
        mov ecx, dword ptr [esi]
        push eax
        mov eax, 0x80000000
        push ebx
        push eax
        mov eax, 0x1
        push eax
        call ext_006CE800
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esp + 0x34]
        lea edx, [esp + 0x24]
        lea ecx, [esp + 0x34]
        push edx
        push eax
        call ext_006D2170
        add esi, 0x4
        dec edi
        jne short L_007AE4F7
        mov ebx, dword ptr [esp + 0x28]

    L_007AE53E:
        mov ecx, ebx
        mov esi, 0x1
        mov edi, 0x80000000
        call ext_00785440
        cmp dword ptr [eax], esi
        jne short L_007AE558
        cmp dword ptr [eax + 0x4], edi
        je short L_007AE585

    L_007AE558:
        lea ecx, [esp + 0x1c]
        lea edx, [esp + 0x2c]
        push ecx
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 0x24], 0x1
        mov dword ptr [esp + 0x28], 0x0
        call ext_00785440
        mov ecx, eax
        call ext_006DBE10
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 0x4]

    L_007AE585:
        mov ecx, ebx
        call ext_00785470
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, esi
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x20], edx
        mov eax, edi

    L_007AE5A1:
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], eax
        cmp eax, edx
        jg L_007AE763
        jl short L_007AE5BD
        cmp ecx, dword ptr [esp + 0x1c]
        jae L_007AE763

    L_007AE5BD:
        mov eax, dword ptr [ebp + 0xc]
        or edi, -0x1
        test eax, eax
        mov ebx, 0x7fffffff
        jle L_007AE77C
        mov esi, dword ptr [ebp + 0x8]
        lea ecx, [esp + 0x68]
        sub ecx, esi
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x28], ecx

    L_007AE5E1:
        mov ecx, dword ptr [esi]
        call ext_006CA6A0
        test eax, eax
        je L_007AE68E
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        xor eax, eax
        cmp ecx, 0x1
        jne short L_007AE607
        cmp edx, 0x80000000
        je short L_007AE655

    L_007AE607:
        mov eax, dword ptr [esp + 0x28]
        add eax, esi
        push eax
        push edx
        push ecx
        mov ecx, dword ptr [esi]
        call ext_006CAEF0
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        mov ecx, dword ptr [esi]
        add esp, 0x8
        fstp qword ptr [esp + 0x4c]
        call ext_006CA6A0
        mov dword ptr [esp + 0x24], eax
        fild dword ptr [esp + 0x24]
        fsub qword ptr [mem_0092A270]
        fcom qword ptr [esp + 0x4c]
        fnstsw ax
        test ah, 0x1
        jne short L_007AE650
        fstp st(0)
        fld qword ptr [esp + 0x4c]

    L_007AE650:
        call ext_00872828

    L_007AE655:
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, dword ptr [esi]
        push eax
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov edx, dword ptr [esp + 0x14]
        cmp edx, eax
        jg short L_007AE68E
        jl short L_007AE680
        mov edx, dword ptr [esp + 0x10]
        cmp edx, ecx
        jae short L_007AE68E

    L_007AE680:
        cmp eax, ebx
        jg short L_007AE68E
        jl short L_007AE68A
        cmp ecx, edi
        jae short L_007AE68E

    L_007AE68A:
        mov edi, ecx
        mov ebx, eax

    L_007AE68E:
        mov eax, dword ptr [esp + 0x18]
        add esi, 0x4
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_007AE5E1
        cmp edi, -0x1
        jne short L_007AE6B1
        cmp ebx, 0x7fffffff
        je L_007AE763

    L_007AE6B1:
        cmp ebx, dword ptr [esp + 0x20]
        jg L_007AE763
        jl short L_007AE6C7
        cmp edi, dword ptr [esp + 0x1c]
        ja L_007AE763

    L_007AE6C7:
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], ebx
        xor esi, esi

    L_007AE6D1:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        lea eax, [esp + esi*4 + 0x68]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push ecx
        push edx
        mov ecx, dword ptr [eax + esi*4]
        call ext_006CAA90
        mov edx, dword ptr [esp + 0x14]
        lea ecx, [esp + esi*4 + 0xb8]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        mov edi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + esi*4]
        push edx
        push eax
        call ext_006CD350
        mov edx, dword ptr [ebp + 0x8]
        push ecx
        fstp dword ptr [esp]
        mov ecx, dword ptr [edx + esi*4]
        push edi
        call ext_006CA020
        mov ecx, eax
        call ext_00789BA0
        mov eax, dword ptr [ebp + 0xc]
        inc esi
        cmp esi, eax
        jl short L_007AE6D1
        lea eax, [esp + 0x2c]
        lea ecx, [esp + 0x60]
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x34], 0x1
        mov dword ptr [esp + 0x38], 0x0
        call ext_006DBDF0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        mov eax, dword ptr [eax + 0x4]
        jmp L_007AE5A1

    L_007AE75B:
        mov edi, dword ptr [ebp + 0x8]
        jmp L_007AE4EB

    L_007AE763:
        mov eax, dword ptr [ebp + 0xc]
        test eax, eax
        jle short L_007AE77C
        mov esi, dword ptr [ebp + 0x8]
        mov edi, eax

    L_007AE76F:
        mov ecx, dword ptr [esi]
        call ext_006CA520
        add esi, 0x4
        dec edi
        jne short L_007AE76F

    L_007AE77C:
        mov esi, dword ptr [esp + 0x34]
        test esi, esi
        je short L_007AE79A

    L_007AE784:
        mov edx, dword ptr [esp + 0x44]
        dec esi
        mov ecx, dword ptr [edx + esi*4]
        test ecx, ecx
        je short L_007AE796
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]

    L_007AE796:
        test esi, esi
        jne short L_007AE784

    L_007AE79A:
        lea ecx, [esp + 0x34]
        call ext_006D2250
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x110], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x108]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x007A7530] sub_007A7530 (1728 bytes)
extern "C" void ext_007A74E0();
extern "C" void ext_007AA510();
extern "C" void ext_007AD1C0();
extern "C" void ext_007B2CD0();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2DF0();
extern "C" void ext_007B2F70();
extern "C" void ext_007B3CF0();
extern "C" int mem_00B61219;
extern "C" int mem_00B61218;
extern "C" int mem_0092522C; /* "\n}b" */
extern "C" int mem_00997E70; /* u32 0x00000001 */
extern "C" int mem_00997E71; /* u32 0x02000000 */

extern "C" __declspec(naked) void __fastcall fn_007A7530(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push esi
        mov esi, dword ptr [esp + 0x24]
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [esp + 0x10], ebx
        je L7A7550
        cmp ebp, ebx
        jne L7A7567
L7A7550:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L7A7BE9
L7A7567:
        mov ecx, dword ptr [esi + 0x14]
        lea eax, [esp + 0x28]
        push eax
        push 0x4100
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x34]
        add esp, 0xc
        cmp eax, ebx
        jne L7A759C
        push 0x8
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L7A7BE9
L7A759C:
        push ebx
        push ebx
        push ebx
        push ebp
        call ext_007AD1C0
        lea edx, [esp + 0x1c]
        push edx
        push esi
        call ext_007B2F70
        mov al, byte ptr [mem_00B61218]
        add esp, 0x18
        test al, al
        je L7A75C9
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L7A7BE9
L7A75C9:
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [esp + 0x28]
        push edi
        push eax
        mov edx, dword ptr [ecx + 0x14]
        push 0x4100
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x1c]
        push eax
        call ext_007B3CF0
        mov edi, dword ptr [eax]
        or ecx, -0x1
        xor eax, eax
        add esp, 0x10
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebp]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0x14]
        cmp eax, ebx
        mov dword ptr [esp + 0x28], eax
        je L7A79FA
L7A7621:
        mov ecx, dword ptr [eax]
        add ecx, 0xffffbef0
        cmp ecx, 0x72
        ja L7A79EB
        xor edx, edx
        mov dl, byte ptr [ecx + 0x7a7c18]
        jmp dword ptr [edx*4 + 0x7a7bf0]
L7A7641:
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [eax]
        add esp, 0x4
        mov word ptr [ecx + 0x12], dx
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x14], edx
        mov dword ptr [eax + 0x4], ebx
        jmp L7A79E7
L7A7665:
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [eax]
        add esp, 0x4
        mov word ptr [ecx + 0x18], dx
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x1c], edx
        mov dword ptr [eax + 0x4], ebx
        jmp L7A79E7
L7A7689:
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [eax]
        add esp, 0x4
        mov word ptr [ecx + 0xb4], dx
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0xb8], edx
        mov dword ptr [eax + 0x4], ebx
        mov eax, dword ptr [esp + 0x28]
        cmp dword ptr [eax + 0x14], ebx
        je L7A79EB
        lea ecx, [esp + 0x14]
        mov esi, eax
        push ecx
        push 0x4130
        push eax
        mov dword ptr [esp + 0x2c], esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        cmp eax, ebx
        je L7A77C3
        push eax
        call ext_007A74E0
        mov edx, dword ptr [ebp]
        push 0x18
        mov word ptr [edx + 0x128], ax
        and eax, 0xffff
        push eax
        call dword ptr [mem_0092522C]
        mov ecx, dword ptr [ebp]
        add esp, 0xc
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [ecx + 0x12c], eax
        mov edx, dword ptr [ebp]
        cmp word ptr [edx + 0x128], bx
        jbe L7A77C3
L7A771E:
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [ebp]
        mov edx, eax
        xor eax, eax
        mov esi, dword ptr [ecx + 0x12c]
        mov edi, dword ptr [edx]
        or ecx, -0x1
        add esi, ebx
        repne scasb
        not ecx
        sub edi, ecx
        mov dword ptr [esp + 0x20], esi
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x20]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 0x12c]
        mov cx, word ptr [edx + 0x4]
        mov word ptr [eax + ebx + 0x12], cx
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x12c]
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [ecx + ebx + 0x14], eax
        mov dword ptr [edx + 0x8], 0x0
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x18]
        push ecx
        push 0x4130
        mov eax, dword ptr [edx + 0x10]
        push eax
        call ext_007B2DF0
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esp + 0x28]
        xor edx, edx
        add esp, 0x10
        mov dx, word ptr [ecx + 0x128]
        inc eax
        add ebx, 0x18
        cmp eax, edx
        mov dword ptr [esp + 0x18], eax
        jb L7A771E
        mov esi, dword ptr [esp + 0x20]
        xor ebx, ebx
L7A77C3:
        mov ecx, dword ptr [esi + 0x14]
        lea eax, [esp + 0x14]
        push eax
        push 0x4150
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        cmp eax, ebx
        je L7A77F9
        push eax
        call ext_007B3CF0
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x4]
        add esp, 0x4
        mov dword ptr [edx + 0xbc], ecx
        mov dword ptr [eax + 0x4], ebx
L7A77F9:
        mov eax, dword ptr [esi + 0x14]
        lea edx, [esp + 0x14]
        push edx
        push 0x4190
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        cmp eax, ebx
        je L7A79E7
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [esp + 0x18]
        add esp, 0x4
        mov dword ptr [esp + 0x18], 0x6
        mov edx, dword ptr [ecx + 0xc]
L7A7833:
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [edx]
        or ecx, -0x1
        add edx, 0x4
        lea esi, [ebx + eax + 0xc1]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov dword ptr [esp + 0x20], esi
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x20]
        add ebx, 0x11
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        and ecx, 0x3
        dec eax
        rep movsb
        mov dword ptr [esp + 0x18], eax
        jne L7A7833
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E70]
        xor ebx, ebx
        mov byte ptr [ecx + 0xc0], dl
        mov eax, dword ptr [esp + 0x28]
        jmp L7A79EB
L7A788D:
        push eax
        call ext_007B3CF0
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [ebp]
        add esp, 0x4
        mov eax, dword ptr [eax + 0xc]
        mov dx, word ptr [eax]
        mov word ptr [ecx + 0x20], dx
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x24], edx
        mov dword ptr [eax + 0x4], ebx
        jmp L7A79E7
L7A78B8:
        push eax
        call ext_007B3CF0
        mov eax, dword ptr [esp + 0x2c]
        mov edi, dword ptr [ebp]
        add esp, 0x4
        add edi, 0x84
        mov esi, dword ptr [eax + 0xc]
        mov ecx, 0xc
        rep movsd
        jmp L7A79E7
L7A78DD:
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E70]
        mov byte ptr [ecx + 0x28], dl
        mov eax, dword ptr [esp + 0x28]
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov eax, dword ptr [ecx + 0xc]
        mov cx, word ptr [eax]
        lea esi, [eax + 0x1c]
        mov word ptr [edx + 0x2c], cx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x30], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [edx + 0x34], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0xc]
        mov dword ptr [edx + 0x38], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x10]
        mov dword ptr [edx + 0x3c], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x14]
        mov dword ptr [edx + 0x40], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x18]
        mov dword ptr [edx + 0x44], ecx
        mov edi, dword ptr [ebp]
        add edi, 0x48
        mov ecx, 0xc
        rep movsd
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x4c]
        mov dword ptr [edx + 0x78], ecx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x50]
        mov dword ptr [edx + 0x7c], ecx
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [eax + 0x54]
        mov dword ptr [edx + 0x80], eax
        jmp L7A79E7
L7A796D:
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ebp]
        add esp, 0x4
        add edx, 0x138
        mov eax, dword ptr [ecx + 0xc]
        or ecx, -0x1
        mov edi, dword ptr [eax]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp L7A79E7
L7A79A7:
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax]
        add esp, 0x4
        mov dword ptr [ecx + 0x134], edx
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x148], edx
        mov dword ptr [eax + 0x4], ebx
        jmp L7A79E7
L7A79CC:
        push eax
        call ext_007B3CF0
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov ecx, dword ptr [eax + 0xc]
        mov al, byte ptr [ecx]
        mov byte ptr [edx + 0x127], al
L7A79E7:
        mov eax, dword ptr [esp + 0x28]
L7A79EB:
        mov eax, dword ptr [eax + 0x10]
        cmp eax, ebx
        mov dword ptr [esp + 0x28], eax
        jne L7A7621
L7A79FA:
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x28]
        push ecx
        push 0x4010
        mov eax, dword ptr [edx + 0x14]
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x34]
        add esp, 0xc
        cmp eax, ebx
        pop edi
        je L7A7A2B
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E70]
        mov byte ptr [ecx + 0xb], dl
        jmp L7A7A37
L7A7A2B:
        mov eax, dword ptr [ebp]
        mov cl, byte ptr [mem_00997E71]
        mov byte ptr [eax + 0xb], cl
L7A7A37:
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x24]
        push edx
        push 0x4011
        mov ecx, dword ptr [eax + 0x14]
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7A66
        mov edx, dword ptr [ebp]
        mov al, byte ptr [mem_00997E70]
        mov byte ptr [edx + 0xc], al
        jmp L7A7A72
L7A7A66:
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E71]
        mov byte ptr [ecx + 0xc], dl
L7A7A72:
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [esp + 0x24]
        push eax
        push 0x4012
        mov edx, dword ptr [ecx + 0x14]
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7AA2
        mov eax, dword ptr [ebp]
        mov cl, byte ptr [mem_00997E70]
        mov byte ptr [eax + 0xe], cl
        jmp L7A7AAD
L7A7AA2:
        mov edx, dword ptr [ebp]
        mov al, byte ptr [mem_00997E71]
        mov byte ptr [edx + 0xe], al
L7A7AAD:
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        push ecx
        push 0x4013
        mov eax, dword ptr [edx + 0x14]
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7ADD
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E70]
        mov byte ptr [ecx + 0xd], dl
        jmp L7A7AE9
L7A7ADD:
        mov eax, dword ptr [ebp]
        mov cl, byte ptr [mem_00997E71]
        mov byte ptr [eax + 0xd], cl
L7A7AE9:
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x24]
        push edx
        push 0x4014
        mov ecx, dword ptr [eax + 0x14]
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7B18
        mov edx, dword ptr [ebp]
        mov al, byte ptr [mem_00997E70]
        mov byte ptr [edx + 0xf], al
        jmp L7A7B24
L7A7B18:
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E71]
        mov byte ptr [ecx + 0xf], dl
L7A7B24:
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [esp + 0x24]
        push eax
        push 0x4016
        mov edx, dword ptr [ecx + 0x14]
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7B54
        mov eax, dword ptr [ebp]
        mov cl, byte ptr [mem_00997E70]
        mov byte ptr [eax + 0x11], cl
        jmp L7A7B5F
L7A7B54:
        mov edx, dword ptr [ebp]
        mov al, byte ptr [mem_00997E71]
        mov byte ptr [edx + 0x11], al
L7A7B5F:
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        push ecx
        push 0x4017
        mov eax, dword ptr [edx + 0x14]
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7B8F
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E70]
        mov byte ptr [ecx + 0x10], dl
        jmp L7A7B9B
L7A7B8F:
        mov eax, dword ptr [ebp]
        mov cl, byte ptr [mem_00997E71]
        mov byte ptr [eax + 0x10], cl
L7A7B9B:
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x24]
        push edx
        push 0x4015
        mov ecx, dword ptr [eax + 0x14]
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0xc
        cmp eax, ebx
        je L7A7BCD
        mov edx, dword ptr [ebp]
        mov al, byte ptr [mem_00997E70]
        mov byte ptr [edx + 0x130], al
        jmp L7A7BDC
L7A7BCD:
        mov ecx, dword ptr [ebp]
        mov dl, byte ptr [mem_00997E71]
        mov byte ptr [ecx + 0x130], dl
L7A7BDC:
        lea eax, [esp + 0xc]
        push eax
        call ext_007B2CD0
        add esp, 0x4
L7A7BE9:
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007AA8F0] sub_007AA8F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AA8F0(void* self, int edx_unused, int idx, int val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle skip
        cmp eax, 0x12
        jge skip
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 4*eax + 0xf0], edx
    skip:
        ret 0x8
    }
}

// [0x007AA910] sub_007AA910 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_007AA910(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle short L_ret0
        cmp eax, 0x12
        jge short L_ret0
        mov eax, dword ptr [ecx + 4*eax + 0xf0]
        ret 0x4
L_ret0:
        xor eax, eax
        ret 0x4
    }
}

// [0x007AA930] sub_007AA930 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AA930(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle short skip
        cmp eax, 0x12
        jge short skip
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [eax + ecx + 0x138], dl
    skip:
        ret 0x8
    }
}

// [0x007AA950] sub_007AA950 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AA950(void* self, int edx_unused, int idx, int val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle skip
        cmp eax, 0x12
        jge skip
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 4*eax + 0x14c], edx
    skip:
        ret 0x8
    }
}

// [0x007AA970] sub_007AA970 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AA970(void* self, int edx_unused, int idx, int val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle skip
        cmp eax, 0x12
        jge skip
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 4*eax + 0x194], edx
    skip:
        ret 0x8
    }
}

// [0x007AAA00] sub_007AAA00 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AAA00(void* self, int edx_unused, int idx, int val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jle skip
        cmp eax, 0x12
        jge skip
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 4*eax + 0x734], edx
    skip:
        ret 0x8
    }
}

// [0x007AB720] sub_007AB720 (32 bytes)
extern "C" void ext_007857F0();
extern "C" __declspec(naked) void __fastcall fn_007AB720(void* self) {
    __asm {
        xor eax, eax
        mov dword ptr [ecx + 0x78], eax
        mov dword ptr [ecx + 0x7c], 0x3ff00000
        mov byte ptr [ecx + 0x84], al
        jmp ext_007857F0
    }
}

// [0x007AB740] sub_007AB740 (32 bytes)
extern "C" void __fastcall fn_007AB740(void* self, int edx_unused, int a1, int a2) {
    *(int*)((char*)self + 0x78) = a1;
    *(int*)((char*)self + 0x7c) = a2;
}

// [0x007AC5D0] sub_007AC5D0 (32 bytes)
extern "C" void __cdecl fn_007AC5D0(void* self) {
    int* p = (int*)self;
    p[0] = 0x1e;
    p[1] = 0;
}

extern "C" int mem_00998689; /* u32 0x02000000 */

// [0x007AC5F0] sub_007AC5F0 (32 bytes)
extern "C" void __cdecl fn_007AC5F0(unsigned char* out) {
    out[0] = (unsigned char)mem_00998689;
    *(int*)(out + 4) = 0;
    *(int*)(out + 8) = 0x1e;
}

// [0x007AC670] sub_007AC670 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AC670(void** self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je done
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [esi], 0x0
    done:
        pop esi
        ret
    }
}

// [0x007AEFD0] sub_007AEFD0 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AEFD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x1]
        mov dl, byte ptr [eax]
        mov byte ptr [eax + 0x1], dl
        mov byte ptr [eax], cl
        ret
    }
}

// [0x007AD5C0] sub_007AD5C0 (32 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_007AD590();

extern "C" __declspec(naked) void* __fastcall fn_007AD5C0(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007AD590
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

// [0x007A0D20] sub_007A0D20 (32 bytes)
extern "C" void ext_007B2A60(void* a, int b, void* c);

extern "C" void __cdecl fn_007A0D20(void* a, void* c) {
    ext_007B2A60(a, 0xb007, c);
}

// [0x007A19A0] sub_007A19A0 (32 bytes)
extern "C" void ext_007B2A10();

extern "C" __declspec(naked) void __cdecl fn_007A19A0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0xb005
        push eax
        call ext_007B2A10
        add esp, 8
        ret
    }
}

// [0x007A19C0] sub_007A19C0 (32 bytes)
extern "C" void ext_007B2A60(void* a, int b, void* c);

extern "C" void __cdecl fn_007A19C0(void* a, void* c) {
    ext_007B2A60(a, 0xb005, c);
}

// [0x007A2560] sub_007A2560 (32 bytes)
extern "C" void ext_007B2A10();

extern "C" __declspec(naked) void __cdecl fn_007A2560(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0xb002
        push eax
        call ext_007B2A10
        add esp, 8
        ret
    }
}

// [0x007A5EF0] sub_007A5EF0 (48 bytes)
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007A5EF0(void* pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je done
        mov eax, dword ptr [esi]
        test eax, eax
        je clear
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
    clear:
        mov dword ptr [esi], 0x0
    done:
        pop esi
        ret
    }
}

// [0x007AF010] sub_007AF010 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF010(unsigned char* p, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jbe done
        push esi
        lea esi, [eax + 0x1]
        mov eax, dword ptr [esp + 0x8]
loop_top:
        mov dl, byte ptr [eax]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x1]
        mov byte ptr [eax + 0x1], dl
        mov byte ptr [eax], cl
        add eax, 0x2
        dec esi
        jne loop_top
        pop esi
done:
        ret
    }
}

// [0x007A95C0] sub_007A95C0 (48 bytes)
extern "C" int mem_00998070;

extern "C" __declspec(naked) void __cdecl fn_007A95C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7a95dc
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7a95e4
    L_7a95dc:
        mov al, byte ptr [mem_00998070]
        mov byte ptr [esi + 0x4], al
    L_7a95e4:
        pop esi
        ret
    }
}

// [0x007A9920] sub_007A9920 (48 bytes)
extern "C" int mem_00998070;
extern "C" int mem_00B61219;
extern "C" void ext_007AA510();

extern "C" __declspec(naked) void __cdecl fn_007A9920(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7a993c
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7a9944
    L_7a993c:
        mov al, byte ptr [mem_00998070]
        mov byte ptr [esi + 0x5], al
    L_7a9944:
        pop esi
        ret
    }
}

// [0x007AA3D0] sub_007AA3D0 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AA3D0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jne L_nonnull
        ret
    L_nonnull:
        mov eax, dword ptr [eax]
        test eax, eax
        jne L_nonnull2
        ret
    L_nonnull2:
        mov eax, dword ptr [eax]
        cmp eax, 0x3daa
        je L_ret3
        cmp eax, 0x4d4d
        je L_ret1
        sub eax, 0xc23d
        neg eax
        sbb eax, eax
        and al, -2
        add eax, 2
        ret
    L_ret1:
        mov eax, 1
        ret
    L_ret3:
        mov eax, 3
        ret
    }
}

// [0x007AAB30] sub_007AAB30 (64 bytes)
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007AAB30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        je fn_007AAB30_done
        mov eax, dword ptr [esi]
        push edi
        mov edi, dword ptr [mem_009251D8]
        mov eax, dword ptr [eax]
        test eax, eax
        je fn_007AAB30_skip_inner
        push eax
        call edi
        mov ecx, dword ptr [esi]
        add esp, 4
        mov dword ptr [ecx], 0
fn_007AAB30_skip_inner:
        mov edx, dword ptr [esi]
        push edx
        call edi
        add esp, 4
        mov dword ptr [esi], 0
        pop edi
fn_007AAB30_done:
        pop esi
        ret
    }
}

// [0x007AF040] sub_007AF040 (64 bytes)
// Byte-swaps each 32-bit word in an array of n words (cdecl: ptr, count).
extern "C" __declspec(naked) void __cdecl fn_007AF040(void* p, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jbe done
        push esi
        lea esi, [eax + 0x1]
        mov eax, dword ptr [esp + 0x8]
    loop_top:
        mov dl, byte ptr [eax]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x3]
        mov byte ptr [eax + 0x3], dl
        mov dl, byte ptr [eax + 0x1]
        mov byte ptr [eax], cl
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x2]
        mov byte ptr [eax + 0x2], dl
        mov byte ptr [eax + 0x1], cl
        add eax, 0x4
        dec esi
        jne loop_top
        pop esi
    done:
        ret
    }
}

// [0x007AF200] sub_007AF200 (64 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_007AF200(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 0x34]
        test eax, eax
        je fn007AF200_zero
        mov edx, dword ptr [ecx + 0x30]
        test edx, edx
        je fn007AF200_zero
        xor eax, eax
        mov ax, word ptr [ecx + 0x40]
        imul eax, edx
        cmp word ptr [ecx + 0x72], 1
        jne fn007AF200_round
        xor edx, edx
        mov dx, word ptr [ecx + 0x4e]
        mov ecx, edx
        imul eax, ecx
    fn007AF200_round:
        add eax, 7
        shr eax, 3
        ret
    fn007AF200_zero:
        xor eax, eax
        ret
    }
}

// [0x007AF080] sub_007AF080 (64 bytes)
extern "C" void ext_007AF040();

extern "C" __declspec(naked) void __cdecl fn_007AF080(void* dst, unsigned int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea eax, [edi + edi]
        push eax
        push esi
        call ext_007AF040
        add esp, 0x8
        mov ecx, edi
        dec edi
        test ecx, ecx
        jbe done_007AF080
        lea ecx, [edi + 0x1]
    swap_007AF080:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esi], edx
        mov dword ptr [esi + 0x4], eax
        add esi, 0x8
        dec ecx
        jne swap_007AF080
    done_007AF080:
        pop edi
        pop esi
        ret
    }
}

// [0x007A8BC0] sub_007A8BC0 (64 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007A8BC0(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        jne short L_free
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je short L_end
    L_free:
        mov eax, dword ptr [esi]
        test eax, eax
        je short L_end
        push eax
        call dword ptr [mem_009251D8]
        add esp, 4
        mov dword ptr [esi], 0
    L_end:
        pop esi
        ret
    }
}

// [0x007AF3A0] sub_007AF3A0 (64 bytes)
extern "C" void ext_0079B850();

extern "C" __declspec(naked) int __cdecl fn_007AF3A0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0ch]
        test al, 40h
        jne L_flagged
        xor eax, eax
        pop esi
        ret
    L_flagged:
        test ah, 10h
        je L_call
        and ah, 0efh
        push esi
        mov dword ptr [esi + 0ch], eax
        call dword ptr [esi + 19ch]
        add esp, 4
        test eax, eax
        jne L_call
        pop esi
        ret
    L_call:
        push esi
        call ext_0079B850
        add esp, 4
        pop esi
        ret
    }
}

// [0x007AF3E0] sub_007AF3E0 (64 bytes)
extern "C" void ext_0079AF50();
extern "C" void ext_007AF420();

extern "C" __declspec(naked) void __cdecl fn_007AF3E0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x214]
        test eax, eax
        je fn_007AF3E0_skip
        push eax
        call ext_0079AF50
        add esp, 4
        mov dword ptr [esi + 0x218], 0
fn_007AF3E0_skip:
        push 0x5c
        push 0x998c98
        push esi
        call ext_007AF420
        add esp, 0xc
        pop esi
        ret
    }
}

// [0x007AF360] sub_007AF360 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF360(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 8]
        test eax, eax
        je short L_ret_one
        push esi
        call ext_007AF3A0
        add esp, 4
        test eax, eax
        jne short L_check_flag
        pop esi
        ret
L_check_flag:
        test byte ptr [esi + 0xc], 8
        je short L_ret_one
        push esi
        call ext_007B9660
        add esp, 4
        test eax, eax
        jne short L_ret_one
        pop esi
        ret
L_ret_one:
        mov eax, 1
        pop esi
        ret
    }
}

// [0x007AF5E0] sub_007AF5E0 (64 bytes)
extern "C" void ext_007AF580();
extern "C" void ext_0079B140();

extern "C" __declspec(naked) void __cdecl fn_007AF5E0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push 0
        push edi
        push eax
        call ext_007AF580
        mov esi, eax
        add esp, 0xc
        test esi, esi
        jne short done
        push edi
        push 0xab10a0
        push 0xab108c
        call ext_0079B140
        add esp, 0xc
done:
        mov eax, esi
        pop edi
        pop esi
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
    }
}

// [0x007AF8B0] sub_007AF8B0 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AF8B0(void* a, void* b) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        call ext_007AF8F0
        mov ebx, dword ptr [esp + 0x14]
        mov esi, eax
        push ebx
        call ext_007AF800
        add esp, 8
        test esi, esi
        je not_found
        push edi
        push ebx
        call dword ptr [esi + 8]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret
not_found:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    }
}

// [0x007A34F0] sub_007A34F0 (64 bytes)
extern "C" void ext_007A95F0();
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;

extern "C" __declspec(naked) unsigned int __cdecl fn_007A34F0(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7a3510
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        jne L_7a3510
        xor eax, eax
        pop esi
        ret
    L_7a3510:
        push esi
        call ext_007A95F0
        mov esi, dword ptr [esi + 0xc]
        add esp, 0x4
        test esi, esi
        jne L_7a3524
        xor eax, eax
        pop esi
        ret
    L_7a3524:
        mov eax, dword ptr [esi]
        pop esi
        ret
    }
}

// [0x007AF8F0] sub_007AF8F0 (80 bytes)
extern "C" int mem_00B61C18;
extern "C" int mem_00AB1870;

extern "C" __declspec(naked) void* __cdecl fn_007AF8F0(unsigned short key) {
    __asm {
        mov eax, dword ptr [mem_00B61C18]
        mov cx, word ptr [esp + 0x4]
        test eax, eax
        je L_tail
    L_loop1:
        mov edx, dword ptr [eax + 0x4]
        cmp word ptr [edx + 0x4], cx
        je L_found
        mov eax, dword ptr [eax]
        test eax, eax
        jne L_loop1
    L_tail:
        mov edx, dword ptr [mem_00AB1870]
        mov eax, offset mem_00AB1870
        test edx, edx
        je L_zero
    L_loop2:
        cmp word ptr [eax + 0x4], cx
        je L_ret
        mov edx, dword ptr [eax + 0xc]
        add eax, 0xc
        test edx, edx
        jne L_loop2
    L_zero:
        xor eax, eax
    L_ret:
        ret
    L_found:
        mov eax, dword ptr [eax + 0x4]
        ret
    }
}

// [0x007AE140] sub_007AE140 (80 bytes)
extern "C" int mem_00924198;

extern "C" __declspec(naked) void __cdecl fn_007AE140(char* buf, unsigned long size) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        push ebx
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924198]
        test eax, eax
        je L_fail
        mov al, 0x1
        pop ebx
        ret
    L_fail:
        push esi
        push edi
        mov edi, 0xaac03c
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        xor al, al
        mov edx, ecx
        mov esi, edi
        mov edi, ebx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007AD660] sub_007AD660 (80 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD6B0();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007AD660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        jne done
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne L2
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
    L2:
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, eax
        call ext_007AD6B0
        mov dword ptr [esi], 0x0
    done:
        pop esi
        ret
    }
}

// [0x007ADD00] sub_007ADD00 (80 bytes)
extern "C" void ext_0078D0C0();

extern "C" __declspec(naked) void __fastcall fn_007ADD00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8c1c08
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push eax
        lea eax, [esp + 0x4]
        push edx
        push eax
        mov dword ptr [esp + 0x18], 0x0
        call ext_0078D0C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x007AD540] sub_007AD540 (80 bytes)
extern "C" void ext_0078CF70();

extern "C" __declspec(naked) void __fastcall fn_007AD540(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1c08
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        __asm _emit 0xe0 __asm _emit 0x89 __asm _emit 0x99 __asm _emit 0x00
        mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00
        push eax
        push edx
        mov dword ptr [esp + 0x14], 0x0
        call ext_0078CF70
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90
    }
}

// [0x007A74E0] sub_007A74E0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_007A74E0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        lea eax, [esp + 0x4]
        push esi
        push eax
        push 0x4130
        push ecx
        xor esi, esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x14]
        add esp, 0xc
        test eax, eax
        je done
    loop_top:
        mov eax, dword ptr [eax + 0x10]
        lea edx, [esp + 0x8]
        push edx
        push 0x4130
        push eax
        inc esi
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x14]
        add esp, 0xc
        test eax, eax
        jne loop_top
    done:
        mov eax, esi
        pop esi
        and eax, 0xffff
        ret
    }
}

// [0x007A1940] sub_007A1940 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_007A1940(void** pp) {
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
        je L40
        push eax
        call edi
        add esp, 0x4
    L40:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x40]
        test eax, eax
        je L44
        push eax
        call edi
        add esp, 0x4
    L44:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        test eax, eax
        je LFREE
        push eax
        call edi
        add esp, 0x4
    LFREE:
        mov eax, dword ptr [esi]
        push eax
        call edi
        add esp, 0x4
        mov dword ptr [esi], 0x0
        pop edi
    done:
        pop esi
        ret
    }
}

// [0x007AF580] sub_007AF580 (96 bytes)
extern "C" int mem_00B61C14;

extern "C" __declspec(naked) void __cdecl fn_007AF580(void* self, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [mem_00B61C14]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        test eax, eax
        je L_scan
        cmp dword ptr [eax], ebx
        jne L_scan
        test edi, edi
        je L_ret
        cmp edi, dword ptr [eax + 0x8]
        je L_ret
    L_scan:
        mov eax, dword ptr [esp + 0x10]
        xor ecx, ecx
        mov esi, dword ptr [eax + 0x218]
        test esi, esi
        jle L_zero
        mov edx, dword ptr [eax + 0x214]
    L_loop:
        mov eax, dword ptr [edx]
        cmp dword ptr [eax], ebx
        jne L_next
        test edi, edi
        je L_store
        cmp dword ptr [eax + 0x8], edi
        je L_store
    L_next:
        inc ecx
        add edx, 0x4
        cmp ecx, esi
        jl L_loop
    L_zero:
        xor eax, eax
    L_ret:
        pop edi
        pop esi
        pop ebx
        ret
    L_store:
        pop edi
        pop esi
        mov dword ptr [mem_00B61C14], eax
        pop ebx
        ret
    }
}

// [0x007AE3C0] sub_007AE3C0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AE3C0(void* self, int edx_unused, void* a1, int unused) {
    __asm {
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x68]
        mov ebp, ecx
        mov ecx, edi
        mov dword ptr [esp + 0x10], ebp
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x14]
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle AFTER_LOOP
        lea ebp, [esp + 0x14]
    LOOP_TOP:
        mov edx, dword ptr [edi]
        push esi
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov dword ptr [ebp], eax
        inc esi
        add ebp, 0x4
        cmp esi, ebx
        jl LOOP_TOP
        mov ebp, dword ptr [esp + 0x10]
    AFTER_LOOP:
        mov eax, dword ptr [ebp]
        lea ecx, [esp + 0x14]
        push ebx
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 0x8
    }
}

// [0x007A5F20] sub_007A5F20 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_007A5F20(void* self) {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0xc]
        xor ebx, ebx
        push edi
        call ext_007B9360
        mov eax, dword ptr [edi + 0x8]
        add esp, 0x4
        test eax, eax
        jne L_HAS
        pop edi
        pop ebx
        ret
    L_HAS:
        mov ecx, dword ptr [eax]
        push esi
        xor esi, esi
        test ecx, ecx
        jbe L_END
    L_LOOP:
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x10]
        push ecx
        push 0x4700
        mov eax, dword ptr [edx + esi*8 + 0x4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je L_SKIP
        inc ebx
    L_SKIP:
        mov eax, dword ptr [edi + 0x8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_LOOP
    L_END:
        pop esi
        mov eax, ebx
        pop edi
        pop ebx
        ret
    }
}

// [0x007AC610] sub_007AC610 (96 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007AC5D0();
extern "C" void ext_007AC5F0();
extern "C" int mem_00B61219;
extern "C" int mem_00925208;

extern "C" __declspec(naked) void __cdecl fn_007AC610(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L62C
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je LEND
    L62C:
        cmp dword ptr [esi], 0x0
        jne L655
        push 0x14
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi], eax
        test eax, eax
        jne L655
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je LEND
    L655:
        mov eax, dword ptr [esi]
        push eax
        call ext_007AC5D0
        mov ecx, dword ptr [esi]
        add ecx, 0x8
        push ecx
        call ext_007AC5F0
        add esp, 0x8
    LEND:
        pop esi
        ret
    }
}

// [0x007ABCA0] sub_007ABCA0 (96 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_007ABC10();
extern "C" void ext_007ABD00();

extern "C" __declspec(naked) void __fastcall fn_007ABCA0(void* self) {
    __asm {
        push -1
        push 0x8c1bb3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9983cc
        mov dword ptr [esp + 0x10], 0x1
        call ext_007ABD00
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D2160
        mov ecx, esi
        call ext_007ABC10
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007AA990] sub_007AA990 (112 bytes)
extern "C" void ext_006B9E60();
extern "C" __declspec(naked) void __fastcall fn_007AA990(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8c1b08
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x8], 0x0
        test eax, eax
        jle L_skip
        cmp eax, 0x12
        jge L_skip
        lea edx, [esp + 0x14]
        push edx
        lea edx, [eax + 8*eax]
        lea eax, [eax + 2*edx]
        lea ecx, [ecx + 4*eax + 0x1dc]
        call ext_006B9E60
    L_skip:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006B9D70
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x50
    }
}

// [0x007AAA20] sub_007AAA20 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AAA20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008bcb18
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x12c]
        test al, al
        je DONE
        mov ecx, dword ptr [esp + 0x60]
        push ecx
        lea ecx, [esp + 0x8]
        call ext_006B9D80
        push eax
        lea ecx, [esi + 0x788]
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006B9E60
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], -1
        call ext_006B9D70
    DONE:
        mov ecx, dword ptr [esp + 0x50]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x007A7390] sub_007A7390 (112 bytes)
extern "C" void ext_007A9360();
extern "C" void ext_007B2D80();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) int __cdecl fn_007A7390(void* self) {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0xc]
        xor ebx, ebx
        push edi
        call ext_007A9360
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_HAS
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_HAS
        pop edi
        xor eax, eax
        pop ebx
        ret
    L_HAS:
        mov eax, dword ptr [edi + 0x8]
        test eax, eax
        jne L_NZ
        pop edi
        pop ebx
        ret
    L_NZ:
        mov ecx, dword ptr [eax]
        push esi
        xor esi, esi
        test ecx, ecx
        jbe L_END
    L_LOOP:
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x10]
        push ecx
        push 0x4100
        mov eax, dword ptr [edx + esi*8 + 0x4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je L_SKIP
        inc ebx
    L_SKIP:
        mov eax, dword ptr [edi + 0x8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_LOOP
    L_END:
        pop esi
        mov eax, ebx
        pop edi
        pop ebx
        ret
    }
}

// [0x007A7320] sub_007A7320 (112 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_007A7320(void* self) {
    __asm {
        push ecx
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push eax
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7340
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7382
    L_7340:
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx], edx
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        call ext_007B2E50
        mov edx, dword ptr [esp + 0x8]
        push edx
        call ext_007B3380
        mov cl, byte ptr [mem_00B61218]
        add esp, 0xc
        test cl, cl
        je L_737A
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_7382
    L_737A:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
    L_7382:
        pop ecx
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
    }
}

// [0x007A4B70] sub_007A4B70 (112 bytes)
extern "C" void ext_007B2D80();
extern "C" void ext_007B3CF0();
extern "C" int mem_0093F8F0;
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_007A4B70(void* self) {
    __asm {
        lea eax, [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push 0x30
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x14]
        add esp, 0xc
        test eax, eax
        je L_ALT
        push eax
        call ext_007B3CF0
        movsx ecx, word ptr [eax]
        mov dword ptr [esp + 0xc], ecx
        add esp, 0x4
        fild dword ptr [esp + 0x8]
        pop esi
        fmul dword ptr [mem_0093F8F0]
        ret
    L_ALT:
        lea edx, [esp + 0x8]
        push edx
        push 0x31
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x14]
        add esp, 0xc
        test eax, eax
        je L_DEF
        push eax
        call ext_007B3CF0
        fld dword ptr [eax]
        add esp, 0x4
        pop esi
        ret
    L_DEF:
        fld dword ptr [mem_00993838]
        pop esi
        ret
    }
}

// [0x007AF180] sub_007AF180 (128 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AF180(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x30]
        mov ebx, dword ptr [ecx + 0x34]
        mov esi, dword ptr [ecx + 0x38]
        cmp edi, -1
        jne L_7AF180_a
        mov edi, dword ptr [ecx + 0x24]
    L_7AF180_a:
        cmp ebx, -1
        jne L_7AF180_b
        mov ebx, dword ptr [ecx + 0x28]
    L_7AF180_b:
        cmp esi, -1
        jne L_7AF180_c
        mov esi, dword ptr [ecx + 0x2c]
    L_7AF180_c:
        test edi, edi
        je L_7AF180_zero
        test ebx, ebx
        je L_7AF180_zero
        test esi, esi
        je L_7AF180_zero
        mov eax, dword ptr [ecx + 0x2c]
        xor edx, edx
        lea eax, [eax + esi - 0x1]
        div esi
        mov edx, dword ptr [ecx + 0x28]
        mov esi, eax
        lea eax, [edx + ebx - 0x1]
        xor edx, edx
        div ebx
        xor edx, edx
        imul esi, eax
        mov eax, dword ptr [ecx + 0x24]
        lea eax, [eax + edi - 0x1]
        div edi
        imul esi, eax
        jmp L_7AF180_cont
    L_7AF180_zero:
        xor esi, esi
    L_7AF180_cont:
        cmp word ptr [ecx + 0x72], 0x2
        jne L_7AF180_ret
        xor eax, eax
        pop edi
        mov ax, word ptr [ecx + 0x4e]
        imul eax, esi
        pop esi
        pop ebx
        ret
    L_7AF180_ret:
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007AD5E0] sub_007AD5E0 (128 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD540();
extern "C" void ext_007AD660();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007AD5E0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        cmp dword ptr [eax + 0x8], 0x1
        jle ad5_done
        mov eax, dword ptr [eax + 0x4]
        push ebp
        push esi
        push edi
        lea esi, [4 * eax + 0xc]
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne ad5_L1
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
    ad5_L1:
        push esi
        mov ecx, eax
        call ext_007AD540
        mov ecx, esi
        mov esi, dword ptr [ebx]
        mov ebp, eax
        mov edx, ecx
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x8], edx
        test ecx, ecx
        jne ad5_L2
        mov ecx, ebx
        call ext_007AD660
    ad5_L2:
        mov dword ptr [ebx], ebp
        pop edi
        mov dword ptr [ebp + 0x8], 0x1
        pop esi
        pop ebp
    ad5_done:
        pop ebx
        ret
    }
}

// [0x007A9230] sub_007A9230 (128 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00925208;
extern "C" int mem_00B61219;
extern "C" int mem_00998070;

extern "C" __declspec(naked) void __cdecl fn_007A9230(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp dword ptr [esi], 0x0
        jne LINIT
        push 0x14
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi], eax
        test eax, eax
        jne LINIT
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je LDONE
    LINIT:
        mov eax, dword ptr [esi]
        mov dword ptr [eax], 0x0
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00998070]
        mov byte ptr [ecx + 0x4], dl
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00998070]
        mov byte ptr [eax + 0x5], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00998070]
        mov byte ptr [edx + 0x6], al
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x8], 0x0
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0xc], 0x0
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x10], 0x0
    LDONE:
        pop esi
        ret
    }
}

// [0x007AA510] sub_007AA510 (144 bytes)
extern "C" void ext_007AA5A0();
extern "C" int mem_00998118;
extern "C" int mem_00B61218;
extern "C" int mem_00B61210;
extern "C" int mem_00B61214;

extern "C" __declspec(naked) void __cdecl fn_007AA510(void* arg) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        test ecx, ecx
        je done
        mov al, byte ptr [mem_00998118]
        xor esi, esi
        mov byte ptr [mem_00B61218], al
        mov eax, 0xb61170
    scan:
        cmp dword ptr [eax], 0x0
        je slot_free
        add eax, 0x8
        inc esi
        cmp eax, 0xb61208
        jl scan
        mov eax, dword ptr [mem_00B61210]
        test eax, eax
        jne fail
        push ecx
        mov dword ptr [mem_00B61210], ecx
        call ext_007AA5A0
        add esp, 0x4
        mov dword ptr [mem_00B61214], eax
        pop esi
        ret
    slot_free:
        push ecx
        _emit 0x89
        _emit 0x0c
        _emit 0xf5
        _emit 0x70
        _emit 0x11
        _emit 0xb6
        _emit 0x00
        call ext_007AA5A0
        add esp, 0x4
        _emit 0x89
        _emit 0x04
        _emit 0xf5
        _emit 0x74
        _emit 0x11
        _emit 0xb6
        _emit 0x00
        _emit 0xc7
        _emit 0x04
        _emit 0xf5
        _emit 0x78
        _emit 0x11
        _emit 0xb6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop esi
        ret
    fail:
        push 0x16
        mov dword ptr [mem_00B61210], 0x16
        call ext_007AA5A0
        add esp, 0x4
        mov dword ptr [mem_00B61214], eax
    done:
        pop esi
        ret
    }
}

// [0x007AC8D0] sub_007AC8D0 (144 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007AC690();
extern "C" void ext_007AC840();
extern "C" int mem_00B61219;
extern "C" int mem_00B61218;

extern "C" __declspec(naked) void __cdecl fn_007AC8D0(void* a, void* b) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        test esi, esi
        je L_E2
        test edi, edi
        jne L_F5
    L_E2:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_F5:
        cmp dword ptr [esi], 0x0
        jne L_90D
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_90D:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_932
        cmp eax, 0xc23d
        je L_932
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_932:
        push edi
        push esi
        call ext_007AC690
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_94E
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_94E:
        add edi, 0x8
        push edi
        push esi
        call ext_007AC840
        add esp, 0x8
    L_END:
        pop edi
        pop esi
        ret
    }
}

// [0x007A5F80] sub_007A5F80 (144 bytes)
extern "C" void ext_007A62F0();
extern "C" void ext_007A9360();
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" __declspec(naked) void __fastcall fn_007A5F80(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_call
        test ebp, ebp
        jne L_body
    L_call:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_body:
        push edi
        call ext_007A9360
        mov eax, dword ptr [edi + 0x8]
        add esp, 0x4
        xor esi, esi
        xor ebx, ebx
        cmp dword ptr [eax], 0x0
        jbe L_end
    L_loop:
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x14]
        push ecx
        push 0x4700
        mov eax, dword ptr [edx + 8*esi + 0x4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        test eax, eax
        je L_next
        mov eax, dword ptr [esp + 0x18]
        inc ebx
        lea ecx, [ebx - 0x1]
        cmp ecx, eax
        jne L_next
        mov edx, dword ptr [edi + 0x8]
        push ebp
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [eax + 8*esi + 0x4]
        push ecx
        call ext_007A62F0
        add esp, 0x8
    L_next:
        mov eax, dword ptr [edi + 0x8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_loop
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007A3170] sub_007A3170 (160 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_00997C31;

extern "C" __declspec(naked) void __cdecl fn_007A3170(void* dst, ...) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_store
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_done
    L_store:
        mov byte ptr [esi], bl
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], 0x1
        mov al, byte ptr [mem_00997C31]
        mov byte ptr [esi + 0x18], al
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov cl, byte ptr [mem_00997C31]
        mov byte ptr [esi + 0x24], cl
        mov dl, byte ptr [mem_00997C31]
        mov eax, 0x3f800000
        mov byte ptr [esi + 0x25], dl
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x44], ebx
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x50], eax
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esi + 0x58], eax
        mov dword ptr [esi + 0x60], ebx
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x68], eax
        mov dword ptr [esi + 0x6c], ebx
        mov dword ptr [esi + 0x64], ebx
        mov dword ptr [esi + 0x78], eax
        mov dword ptr [esi + 0x70], ebx
        mov dword ptr [esi + 0x74], ebx
        mov dword ptr [esi + 0x80], ebx
        mov dword ptr [esi + 0x7c], ebx
    L_done:
        pop esi
        pop ebx
        ret
    }
}

// [0x007A5E50] sub_007A5E50 (160 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_00925208;
extern "C" int mem_00997D01;
extern "C" __declspec(naked) void __cdecl fn_007A5E50(void** pp) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_alloc
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_done
    L_alloc:
        cmp dword ptr [esi], ebx
        jne L_init
        push 0x38
        call dword ptr [mem_00925208]
        add esp, 0x4
        cmp eax, ebx
        mov dword ptr [esi], eax
        jne L_init
        push 1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_done
    L_init:
        mov eax, dword ptr [esi]
        mov byte ptr [eax], bl
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0xc], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x10], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x14], ebx
        mov ecx, dword ptr [esi]
        mov eax, 0x3f800000
        mov dword ptr [ecx + 0x18], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x1c], eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x20], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x24], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x28], 0x42340000
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997D01]
        mov byte ptr [ecx + 0x2c], dl
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x30], 0x41200000
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x34], 0x447a0000
    L_done:
        pop esi
        pop ebx
        ret
    }
}

// [0x007AAA90] sub_007AAA90 (160 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_00925208;

extern "C" __declspec(naked) void __cdecl fn_007AAA90(void** pp) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_AAAF
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_END
    L_AAAF:
        cmp dword ptr [esi], ebx
        jne L_AAD7
        push 0x3c
        call dword ptr [mem_00925208]
        add esp, 0x4
        cmp eax, ebx
        mov dword ptr [esi], eax
        jne L_AAD7
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_END
    L_AAD7:
        mov eax, dword ptr [esi]
        mov dword ptr [eax], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0xc], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x8], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x4], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x10], 0x3f000000
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x1c], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x18], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x14], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x28], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x24], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x20], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x34], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x30], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x2c], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x38], ebx
    L_END:
        pop esi
        pop ebx
        ret
    }
}

// [0x007A8B20] sub_007A8B20 (160 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_00925208;

extern "C" __declspec(naked) void __cdecl fn_007A8B20(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L3C
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je LDONE
    L3C:
        cmp dword ptr [esi], 0x0
        jne L65
        push 0x30
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi], eax
        test eax, eax
        jne L65
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je LDONE
    L65:
        mov ecx, dword ptr [esi]
        mov eax, 0x3f800000
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x8], eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0xc], eax
        mov edx, dword ptr [esi]
        mov word ptr [edx + 0x10], 0x200
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x14], 0x40400000
        mov ecx, dword ptr [esi]
        mov eax, 0x3ec8c932
        mov dword ptr [ecx + 0x20], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x1c], eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x18], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x2c], 0x0
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x28], 0x0
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x24], 0x0
    LDONE:
        pop esi
        ret
    }
}

// [0x007A9BE0] sub_007A9BE0 (160 bytes)
extern "C" __declspec(naked) int __cdecl fn_007A9BE0(void* self, const char* name, int len) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        call ext_007A9950
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L03
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L5F
    L03:
        mov eax, dword ptr [esi + 0x10]
        xor ebp, ebp
        mov edx, dword ptr [eax]
        test edx, edx
        jbe L5F
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x14], eax
        mov edi, eax
    L17:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        cmp ecx, eax
        jne L57
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esp + 0x18]
    L2A:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jne L4E
        test cl, cl
        je L4A
        mov bl, byte ptr [eax + 0x1]
        mov cl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne L4E
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L2A
    L4A:
        xor eax, eax
        jmp L53
    L4E:
        sbb eax, eax
        sbb eax, -1
    L53:
        test eax, eax
        je LFOUND
    L57:
        inc ebp
        add edi, 0x8
        cmp ebp, edx
        jb L17
    L5F:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    LFOUND:
        mov edx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov eax, dword ptr [edx + ebp*8 + 0x4]
        pop ebp
        pop ebx
        ret
    }
}

// [0x007A9880] sub_007A9880 (160 bytes)
extern "C" void ext_007A95F0();
extern "C" void ext_007AA510();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) unsigned int __cdecl fn_007A9880(void* a1, unsigned int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_b89c
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_ret0
    L_b89c:
        cmp dword ptr [esi], 0x0
        jne L_b8b4
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_ret0
    L_b8b4:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        cmp eax, 0x3daa
        je L_e0
        cmp eax, 0x4d4d
        je L_e0
        cmp eax, 0xc23d
        je L_e0
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_ret0
    L_e0:
        push esi
        call ext_007A95F0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_fb
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_ret0
    L_fb:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esp + 0xc]
        cmp ecx, dword ptr [eax]
        jae L_ret0
        mov edx, dword ptr [eax + 0x4]
        pop esi
        mov eax, dword ptr [edx + 8 * ecx + 0x4]
        ret
    L_ret0:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007A2580] sub_007A2580 (160 bytes)
extern "C" void ext_007A2620();
extern "C" void ext_007A9C80();
extern "C" void ext_007AA510();
extern "C" __declspec(naked) void __cdecl fn_007A2580(void* a1, int a2, unsigned int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test esi, esi
        je L_err
        test edi, edi
        jne L_ok
    L_err:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_ok:
        cmp dword ptr [esi], 0x0
        jne L_vt
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_vt:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_sig
        cmp eax, 0xc23d
        je L_sig
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_sig:
        mov ecx, dword ptr [esp + 0x10]
        push 0xb002
        push ecx
        push esi
        call ext_007A9C80
        mov cl, byte ptr [mem_00B61218]
        add esp, 0xc
        test cl, cl
        je L_chk
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_end
    L_chk:
        test eax, eax
        je L_end
        push edi
        push eax
        call ext_007A2620
        add esp, 0x8
    L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x007A4BE0] sub_007A4BE0 (96 bytes)
extern "C" void ext_007A3E40();
extern "C" void ext_007A9880();
extern "C" void ext_007AA510();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007A4BE0(void* a1, void* a2, void* a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        jne L_007A4BFC
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_007A4C30
    L_007A4BFC:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        call ext_007A9880
        mov cl, byte ptr [mem_00B61218]
        add esp, 0x8
        test cl, cl
        je L_007A4C22
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_007A4C30
    L_007A4C22:
        test eax, eax
        je L_007A4C30
        push esi
        push eax
        call ext_007A3E40
        add esp, 0x8
    L_007A4C30:
        pop esi
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
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x007AF800] sub_007AF800 (176 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF800(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, 0x71de50
        mov edx, 0x71de50
        mov dword ptr [eax + 0x18c], ecx
        mov dword ptr [eax + 0x194], ecx
        mov dword ptr [eax + 0x19c], ecx
        mov ecx, 0x6d80a0
        mov dword ptr [eax + 0x1b8], ecx
        mov dword ptr [eax + 0x1c0], ecx
        mov ecx, dword ptr [eax + 0xc]
        mov dword ptr [eax + 0x190], edx
        and ch, -0x2
        mov dword ptr [eax + 0x1a0], 0x7af730
        mov dword ptr [eax + 0x1a8], 0x7af7a0
        mov dword ptr [eax + 0x1b0], 0x7af7c0
        mov dword ptr [eax + 0x198], edx
        mov dword ptr [eax + 0x1a4], 0x7af640
        mov dword ptr [eax + 0x1ac], 0x7af6f0
        mov dword ptr [eax + 0x1b4], 0x7af710
        mov dword ptr [eax + 0x1bc], 0x7af7e0
        mov dword ptr [eax + 0x1c4], 0x798800
        mov dword ptr [eax + 0x1c8], 0x7af310
        mov dword ptr [eax + 0xc], ecx
        ret
    }
}

// [0x007A92B0] sub_007A92B0 (176 bytes)
extern "C" __declspec(naked) void __cdecl fn_007A92B0(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        je L_done
        mov eax, dword ptr [esi]
        test eax, eax
        je L_done
        cmp dword ptr [eax], 0
        je L_check8
        push eax
        call ext_007B2CD0
        add esp, 4
    L_check8:
        mov eax, dword ptr [esi]
        add eax, 8
        cmp dword ptr [eax], 0
        je L_checkC
        push eax
        call ext_007B3120
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_checkC
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_done
    L_checkC:
        mov eax, dword ptr [esi]
        add eax, 0xc
        cmp dword ptr [eax], 0
        je L_check10
        push eax
        call ext_007B3120
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_check10
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_done
    L_check10:
        mov eax, dword ptr [esi]
        add eax, 0x10
        cmp dword ptr [eax], 0
        je L_free
        push eax
        call ext_007B3120
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_free
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_done
    L_free:
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [mem_009251D8]
        add esp, 4
        mov dword ptr [esi], 0
    L_done:
        pop esi
        ret
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

// [0x007AF2F0] sub_007AF2F0 (18 bytes)
extern "C" void ext_007AF240();
extern "C" __declspec(naked) void __cdecl fn_007AF2F0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x34]
        push ecx
        push eax
        call ext_007AF240
        add esp, 0x8
        ret
    }
}

// [0x007AEF70] sub_007AEF70 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEF70(void* self) {
    __asm {
        lea ecx, [esp + 0x4]
        call ext_006B9D70
        xor al, al
        ret 0x54
    }
}

// [0x007AF640] sub_007AF640 (19 bytes)
extern "C" void ext_007AF660();
extern "C" __declspec(naked) void __cdecl fn_007AF640(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0xab10c4
        push eax
        call ext_007AF660
        add esp, 0x8
        ret
    }
}

// [0x007AF6F0] sub_007AF6F0 (19 bytes)
extern "C" void ext_007AF660();

extern "C" __declspec(naked) void __cdecl fn_007AF6F0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0xaafccc
        push eax
        call ext_007AF660
        add esp, 0x8
        ret
    }
}

// [0x007AF710] sub_007AF710 (19 bytes)
extern "C" void ext_007AF660();
extern "C" void __cdecl fn_007AF710(void* a1) {
    typedef void (__cdecl *Fn)(void*, int);
    ((Fn)ext_007AF660)(a1, 0xaafcd4);
}

// [0x007AF7A0] sub_007AF7A0 (19 bytes)
extern "C" void ext_007AF750();

extern "C" __declspec(naked) void __cdecl fn_007AF7A0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0xaafccc
        push eax
        call ext_007AF750
        add esp, 0x8
        ret
    }
}

// [0x007AF730] sub_007AF730 (19 bytes)
extern "C" void ext_007AF750();

extern "C" __declspec(naked) void __cdecl fn_007AF730(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0xab10c4
        push eax
        call ext_007AF750
        add esp, 0x8
        ret
    }
}

// [0x007AF7C0] sub_007AF7C0 (19 bytes)
extern "C" void ext_007AF750();
extern "C" void __cdecl fn_007AF7C0(void* a1) {
    typedef void (__cdecl *Fn)(void*, int);
    ((Fn)ext_007AF750)(a1, 0xaafcd4);
}

// [0x007AECD0] sub_007AECD0 (20 bytes)
extern "C" void ext_007AEC70();

extern "C" __declspec(naked) void __stdcall fn_007AECD0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x0
        push eax
        push edx
        call ext_007AEC70
        ret 0x8
    }
}

// [0x007AE3A0] sub_007AE3A0 (20 bytes)
extern "C" bool __fastcall fn_007AE3A0(void* self, int edx, int a1) {
    ((fn_006E7410_t)ext_006E7410)((char*)self + 0x20, edx, 1, 0xab0bb0);
    return false;
}

// [0x007AEBA0] sub_007AEBA0 (29 bytes)
extern "C" void ext_007831E0();
extern "C" __declspec(naked) void* __fastcall fn_007AEBA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007831E0
        xor eax, eax
        mov dword ptr [esi], 0x998a30
        mov dword ptr [esi + 0x58], eax
        mov dword ptr [esi + 0x5c], eax
        mov dword ptr [esi + 0x60], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007AF7E0] sub_007AF7E0 (23 bytes)
extern "C" void ext_0079B140();

extern "C" __declspec(naked) int __cdecl fn_007AF7E0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0xab11d8
        mov ecx, dword ptr [eax]
        push ecx
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        ret
    }
}

// [0x007AEDE0] sub_007AEDE0 (31 bytes)
extern "C" void ext_007AEC70();

extern "C" unsigned char __stdcall fn_007AEDE0(void* p) {
    typedef int (__stdcall *fn_007AEC70_t)(void*, int, int);
    if (((fn_007AEC70_t)ext_007AEC70)(p, 1, 1)) {
        return *(unsigned char*)p;
    }
    return 0;
}

// [0x007AEC30] sub_007AEC30 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEC30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je L_fail
        mov dword ptr [ecx + 0x58], eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x5c], eax
        mov dword ptr [ecx + 0x60], 0x0
        mov al, 0x1
        ret 0x8
    L_fail:
        xor al, al
        ret 0x8
    }
}

// [0x007AF4C0] sub_007AF4C0 (50 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AF4C0(void* a, void* b) {
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [ecx]
        cmp     edx, esi
        je      L_equal
        sbb     eax, eax
        pop     esi
        and     al, 0xfe
        inc     eax
        ret
    L_equal:
        mov     edx, dword ptr [ecx + 0x8]
        mov     esi, dword ptr [eax + 0x8]
        xor     ecx, ecx
        cmp     edx, esi
        setge   cl
        dec     ecx
        pop     esi
        and     ecx, -2
        inc     ecx
        mov     eax, ecx
        ret
    }
}

// [0x007AED60] sub_007AED60 (52 bytes)
extern "C" __declspec(naked) unsigned int __stdcall fn_007AED60(unsigned int* p, unsigned char swap) {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push 0x1
        push 0x4
        push esi
        call ext_007AEC70
        test eax, eax
        je L_ret0
        mov al, byte ptr [ebp + 0xc]
        test al, al
        je L_ret_val
        mov eax, dword ptr [esi]
        mov dword ptr [ebp + 0xc], eax
        mov eax, dword ptr [ebp + 0xc]
        bswap eax
    L_ret_val:
        mov eax, dword ptr [esi]
        pop esi
        pop ebp
        ret 0x8
    L_ret0:
        xor eax, eax
        pop esi
        pop ebp
        ret 0x8
    }
}

// [0x007AEDA0] sub_007AEDA0 (56 bytes)
extern "C" __declspec(naked) unsigned short __stdcall fn_007AEDA0(unsigned short* p, bool flag) {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push 0x1
        push 0x2
        push esi
        call ext_007AEC70
        test eax, eax
        je L_ret0
        mov al, byte ptr [ebp + 0xc]
        test al, al
        je L_ret_val
        mov ax, word ptr [esi]
        mov dword ptr [ebp + 0xc], eax
        mov ax, word ptr [ebp + 0xc]
        xchg al, ah
    L_ret_val:
        mov ax, word ptr [esi]
        pop esi
        pop ebp
        ret 0x8
    L_ret0:
        xor ax, ax
        pop esi
        pop ebp
        ret 0x8
    }
}

// [0x007AE190] sub_007AE190 (58 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007AE190(void* self) {
    __asm {
        push esi
        push 0x5
        push 0x00AB0A98
        mov esi, ecx
        push 0x00AB0AE0
        call ext_007853D0
        mov dword ptr [esi], 0x00998A0C
        mov dword ptr [esi + 0x10], 0x1
        mov dword ptr [esi + 0x14], 0x80000000
        mov dword ptr [esi + 0x18], 0xFFFFFFFF
        mov dword ptr [esi + 0x1C], 0x7FFFFFFF
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007AA7F0] sub_007AA7F0 (57 bytes)
extern "C" int mem_00B61230;
extern "C" int mem_00B60F58;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_007AA7F0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B61230]
        cmp eax, ecx
        jne short L_next1
        mov al, 0x1
        ret 0x4
    L_next1:
        cmp eax, dword ptr [mem_00B60F58]
        jne short L_next2
        mov al, 0x1
        ret 0x4
    L_next2:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_next3
        mov al, 0x1
        ret 0x4
    L_next3:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x007AF310] sub_007AF310 (65 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF310(void* dummy1, int* p1, int* p2) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        cmp dword ptr [ecx], 0x1
        jge L1
        mov dword ptr [ecx], 0x100
    L1:
        mov edx, dword ptr [esp + 0xc]
        cmp dword ptr [edx], 0x1
        jge L2
        mov dword ptr [edx], 0x100
    L2:
        mov eax, dword ptr [ecx]
        test al, 0xf
        je L3
        add eax, 0xf
        shr eax, 0x4
        shl eax, 0x4
        mov dword ptr [ecx], eax
    L3:
        mov eax, dword ptr [edx]
        test al, 0xf
        je L4
        add eax, 0xf
        shr eax, 0x4
        shl eax, 0x4
        mov dword ptr [edx], eax
    L4:
        ret
    }
}

// [0x007AC210] sub_007AC210 (70 bytes)
extern "C" int mem_00B61260;
extern "C" int mem_00B61230;
extern "C" int mem_00B60F58;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_007AC210(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B61260]
        cmp eax, ecx
        jne short L_next1
        mov al, 0x1
        ret 0x4
    L_next1:
        cmp eax, dword ptr [mem_00B61230]
        jne short L_next2
        mov al, 0x1
        ret 0x4
    L_next2:
        cmp eax, dword ptr [mem_00B60F58]
        jne short L_next3
        mov al, 0x1
        ret 0x4
    L_next3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_next4
        mov al, 0x1
        ret 0x4
    L_next4:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x007ABF90] sub_007ABF90 (70 bytes)
extern "C" int mem_00B61248;
extern "C" int mem_00B61230;
extern "C" int mem_00B60F58;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_007ABF90(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B61248]
        cmp eax, ecx
        jne short L_next1
        mov al, 0x1
        ret 0x4
    L_next1:
        cmp eax, dword ptr [mem_00B61230]
        jne short L_next2
        mov al, 0x1
        ret 0x4
    L_next2:
        cmp eax, dword ptr [mem_00B60F58]
        jne short L_next3
        mov al, 0x1
        ret 0x4
    L_next3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_next4
        mov al, 0x1
        ret 0x4
    L_next4:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x007AE020] sub_007AE020 (77 bytes)
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_007AE020(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi], 0
        je L_done
        push ebx
        push esi
        xor esi, esi
    L_loop:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [edi + 0x4]
        mov bl, byte ptr [esi + edx]
        mov ecx, dword ptr [eax + 4*esi]
        lea eax, [eax + 4*esi]
        test bl, bl
        je L_next
        test ecx, ecx
        je L_next
        mov dword ptr [eax], 0
        mov eax, dword ptr [ecx]
        push 0
        call dword ptr [eax + 0x4]
    L_next:
        inc esi
        cmp esi, 0x7
        jl L_loop
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [mem_009251D8]
        push ecx
        call esi
        mov edx, dword ptr [edi + 0x4]
        push edx
        call esi
        add esp, 0x8
        pop esi
        pop ebx
    L_done:
        pop edi
        ret
    }
}

// [0x007AEBE0] sub_007AEBE0 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEBE0(void* self) {
    __asm {
        push -1
        push 0x008c1c48
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x00998a30
        mov dword ptr [esp + 0x10], 0
        call ext_007AEC60
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00783270
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007AEE00] sub_007AEE00 (77 bytes)
extern "C" __declspec(naked) unsigned int __fastcall fn_007AEE00(void* self, int dummy_edx, const void* src, unsigned int size) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov edx, ecx
        test esi, esi
        je L_ret_zero
        mov ebx, dword ptr [edx + 0x58]
        test ebx, ebx
        je L_ret_zero
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [edx + 0x60]
        sub eax, edi
        cmp ecx, eax
        ja L_copy
        mov eax, ecx
    L_copy:
        mov ecx, eax
        add edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [edx + 0x60]
        pop edi
        add ecx, eax
        pop esi
        mov dword ptr [edx + 0x60], ecx
        pop ebx
        ret 8
    L_ret_zero:
        pop esi
        xor eax, eax
        pop ebx
        ret 8
    }
}

// [0x007AEF80] sub_007AEF80 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEF80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8c1c68
        push eax
        mov dword ptr fs:[0], esp
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x5c]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006B9D70
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        xor al, al
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x98
    }
}

// [0x007AF750] sub_007AF750 (79 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AF750(void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ax, word ptr [esi + 0x44]
        push eax
        call ext_007AF8F0
        mov ecx, dword ptr [esp + 0x10]
        add esp, 0x4
        test eax, eax
        push ecx
        je L_null
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esi]
        push edx
        push 0xab11b4
        push eax
        call ext_0079B140
        add esp, 0x10
        or eax, -0x1
        pop esi
        ret
    L_null:
        mov eax, dword ptr [esi]
        xor edx, edx
        mov dx, word ptr [esi + 0x44]
        push edx
        push 0xab117c
        push eax
        call ext_0079B140
        add esp, 0x10
        or eax, -0x1
        pop esi
        ret
    }
}

// [0x007AC510] sub_007AC510 (75 bytes)
extern "C" __declspec(naked) int __fastcall fn_007AC510(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x6
        call ext_007AA910
        sub eax, 0x0
        je L_case0
        dec eax
        je L_case1
        dec eax
        jne L_default
        mov dword ptr [esi + 0x7d4], 0x1
        mov eax, dword ptr [esi + 0x7d4]
        pop esi
        ret
    L_case1:
        mov dword ptr [esi + 0x7d4], 0x2
        mov eax, dword ptr [esi + 0x7d4]
        pop esi
        ret
    L_case0:
        mov dword ptr [esi + 0x7d4], 0x0
    L_default:
        mov eax, dword ptr [esi + 0x7d4]
        pop esi
        ret
    }
}

// [0x007ABD00] sub_007ABD00 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2250();
extern "C" void ext_00772040();

extern "C" __declspec(naked) void __fastcall fn_007ABD00(void* self) {
    __asm {
        push ebx
        lea ebx, [ecx + 0x4]
        push esi
        mov esi, dword ptr [ebx]
        test esi, esi
        je L_7abd2c
        push edi
    L_7abd0c:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [eax + 4*esi]
        test edi, edi
        je L_7abd27
        mov ecx, edi
        call ext_00772040
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_7abd27:
        test esi, esi
        jne L_7abd0c
        pop edi
    L_7abd2c:
        mov ecx, ebx
        call ext_006D2250
        pop esi
        pop ebx
        ret
    }
}

// [0x007AEE50] sub_007AEE50 (83 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEE50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x58]
        test eax, eax
        je L_ret
        mov eax, dword ptr [esp + 0x4]
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        je L_a2
        dec eax
        je L_add
        dec eax
        je L_sub
        xor eax, eax
    L_clamp:
        mov edx, dword ptr [ecx + 0x5c]
        cmp eax, edx
        jle L_store_v
        mov dword ptr [ecx + 0x60], edx
        ret 0x8
    L_sub:
        mov eax, dword ptr [ecx + 0x5c]
        mov edx, dword ptr [esp + 0x8]
        sub eax, edx
        jmp L_test
    L_add:
        mov eax, dword ptr [ecx + 0x60]
        mov edx, dword ptr [esp + 0x8]
        add eax, edx
        jmp L_test
    L_a2:
        mov eax, dword ptr [esp + 0x8]
    L_test:
        test eax, eax
        jge L_clamp
        mov dword ptr [ecx + 0x60], 0x0
        ret 0x8
    L_store_v:
        mov dword ptr [ecx + 0x60], eax
    L_ret:
        ret 0x8
    }
}

// [0x007AB2F0] sub_007AB2F0 (85 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007AB2F0(void* self) {
    __asm {
        push -1
        push 0x8c1b28
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 2
        mov esi, ecx
        push 0xab07ac
        push 0xab07b4
        mov dword ptr [esp + 0x10], esi
        call ext_007853D0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x998398
        call ext_007AB720
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007ABE70] sub_007ABE70 (87 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007ABC20();
extern "C" __declspec(naked) void __fastcall fn_007ABE70(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x1c
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_007ABC20
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007ABC20] sub_007ABC20 (88 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007ABC20(void* self) {
    __asm {
        push -1
        push 0x8c1b88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_007ABBE0
        lea edi, [esi + 0x4]
        push 0x4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x0
        call ext_006D2130
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [esi], 0x9983cc
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007AEC70] sub_007AEC70 (88 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AEC70(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov edx, ecx
        je L_fail
        mov ebx, dword ptr [edx + 0x58]
        test ebx, ebx
        je L_fail
        mov esi, dword ptr [edx + 0x60]
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, dword ptr [esp + 0x14]
        sub eax, esi
        cmp ecx, eax
        jbe L_use_ecx
        mov cl, byte ptr [esp + 0x18]
        test cl, cl
        jne L_fail
        jmp L_copy
    L_use_ecx:
        mov eax, ecx
    L_copy:
        mov ecx, eax
        add esi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [edx + 0x60]
        pop edi
        add ecx, eax
        pop esi
        mov dword ptr [edx + 0x60], ecx
        pop ebx
        ret 0xc
    L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xc
    }
}

// [0x007AEF10] sub_007AEF10 (92 bytes)
extern "C" void ext_006A7270();
extern "C" int mem_009252B8;

extern "C" __declspec(naked) void __cdecl fn_007AEF10(void* self) {
    __asm {
        mov eax, 0x4000
        call ext_006A7270
        push esi
        mov esi, dword ptr [esp + 0x4008]
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je L_done
        mov ecx, dword ptr [esp + 0x400c]
        lea eax, [esp + 0x4010]
        push edi
        push eax
        lea edx, [esp + 0xc]
        push ecx
        push edx
        call dword ptr [mem_009252B8]
        lea edi, [esp + 0x14]
        or ecx, -1
        xor eax, eax
        add esp, 0xc
        repne scasb
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x8]
        not ecx
        dec ecx
        push ecx
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x30]
        pop edi
    L_done:
        pop esi
        add esp, 0x4000
        ret
    }
}

// [0x007A6E8C] sub_007A6E8C (102 bytes)
extern "C" void ext_007A6F00();
extern "C" __declspec(naked) void __fastcall fn_007A6E8C(void* self) {
    __asm {
        _emit 0x00
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x01
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x02
        _emit 0x03
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x04
        _emit 0x05
        _emit 0x06
        _emit 0x07
        _emit 0x0b
        _emit 0x0b
        _emit 0x08
        _emit 0x09
        _emit 0x0a
        nop
        nop

        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        test esi, esi
        je short L_err
        test edi, edi
        jne short L_call
    L_err:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je short L_done
    L_call:
        push edi
        push esi
        call ext_007A6F00
        add esp, 0x8
    L_done:
        pop edi
        pop esi
        ret
    }
}

// [0x007AECF0] sub_007AECF0 (101 bytes)
extern "C" __declspec(naked) char* __fastcall fn_007AECF0(void* self, int edx_unused, char* dst, int maxn) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        test ebx, ebx
        je short L_fail
        mov eax, dword ptr [ecx + 0x58]
        test eax, eax
        je short L_fail
        mov edx, dword ptr [ecx + 0x60]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x5c]
        lea esi, [edx + eax]
        mov eax, dword ptr [esp + 0x18]
        sub edi, edx
        xor edx, edx
        lea ebp, [eax - 0x1]
        test ebp, ebp
        jbe short L_end
        mov eax, ebx
        sub eax, esi
    L_loop:
        cmp edx, edi
        jae short L_end
        mov bl, byte ptr [esi]
        mov byte ptr [eax + esi], bl
        mov bl, byte ptr [esi]
        cmp bl, 0xa
        je short L_nl
        inc edx
        inc esi
        cmp edx, ebp
        jb short L_loop
        jmp short L_end
    L_nl:
        inc edx
    L_end:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        mov byte ptr [edx + eax], 0
        mov esi, dword ptr [ecx + 0x60]
        add esi, edx
        mov dword ptr [ecx + 0x60], esi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    L_fail:
        xor eax, eax
        pop ebx
        ret 0x8
    }
}

// [0x007AF500] sub_007AF500 (105 bytes)
// Switch jump table lives at 0x007AF56C: {0x7AF54A, 0x7AF531, 0x7AF523, 0x7AF563}.
// It is emitted by the separate data-only routine jt_007AF56C below so that the 105-byte
// function body does not swallow it.
extern "C" __declspec(naked) void __cdecl fn_007AF500(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        xor eax, eax
        xor ecx, ecx
        mov ax, word ptr [edx + 0x40]
        mov cx, word ptr [edx + 0x42]
        add eax, 0x7
        shr eax, 0x3
        dec ecx
        cmp ecx, 0x3
        ja L_default
        jmp dword ptr [4*ecx + 0x7af56c]
    L_c:
        xor ecx, ecx
        cmp eax, 0x4
        setne cl
        add ecx, 0xb
        mov eax, ecx
        ret
    L_a:
        cmp eax, 0x1
        jg L_a2
        mov eax, 0x6
        ret
    L_a2:
        xor edx, edx
        cmp eax, 0x2
        setg dl
        add edx, 0x8
        mov eax, edx
        ret
    L_b:
        cmp eax, 0x1
        jg L_b2
        mov eax, 0x1
        ret
    L_b2:
        xor ecx, ecx
        cmp eax, 0x2
        setg cl
        add ecx, 0x3
        mov eax, ecx
        ret
    L_default:
        mov eax, 0x7
        ret
    }
}

// Data-only block holding the jump table at 0x007AF56C (3 bytes of padding, then 4 dwords).
extern "C" __declspec(naked) void __cdecl jt_007AF56C() {
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x4a
        _emit 0xf5
        _emit 0x7a
        _emit 0x00
        _emit 0x31
        _emit 0xf5
        _emit 0x7a
        _emit 0x00
        _emit 0x23
        _emit 0xf5
        _emit 0x7a
        _emit 0x00
        _emit 0x63
        _emit 0xf5
        _emit 0x7a
        _emit 0x00
    }
}

// [0x007ADEC0] sub_007ADEC0 (121 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD660();
extern "C" void ext_007AD6B0();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007ADEC0(void* self) {
    __asm {
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        test eax, eax
        je L_done
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        jne L_done
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        jle L_global
        push ebx
        push esi
        mov esi, 0xc
        mov ebx, eax
    L_loop:
        mov eax, dword ptr [edi]
        mov ecx, esi
        add ecx, eax
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_next
        mov edx, dword ptr [eax + 0x8]
        dec edx
        test edx, edx
        mov dword ptr [eax + 0x8], edx
        jne L_next
        call ext_007AD660
    L_next:
        add esi, 0x4
        dec ebx
        jne L_loop
        pop esi
        pop ebx
    L_global:
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne L_have
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
    L_have:
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, eax
        call ext_007AD6B0
        mov dword ptr [edi], 0x0
    L_done:
        pop edi
        ret
    }
}

// [0x007AE200] sub_007AE200 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_007AE200(void* self) {
    __asm {
        sub esp, 0x54
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x64]
        mov ebx, ecx
        mov eax, dword ptr [edi]
        mov ecx, edi
        mov dword ptr [esp + 0xc], ebx
        call dword ptr [eax + 0x14]
        mov ebp, eax
        cmp ebp, 0x14
        jge L_7ae25d
        push esi
        xor esi, esi
        test ebp, ebp
        jle L_7ae246
        lea ebx, [esp + 0x14]
    L_7ae229:
        mov edx, dword ptr [edi]
        push esi
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov dword ptr [ebx], eax
        inc esi
        add ebx, 0x4
        cmp esi, ebp
        jl L_7ae229
        mov ebx, dword ptr [esp + 0x10]
    L_7ae246:
        mov eax, dword ptr [ebx]
        lea ecx, [esp + 0x14]
        push ebp
        push ecx
        mov ecx, ebx
        call dword ptr [eax + 0x8]
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 0x8
    L_7ae25d:
        push 0xab0af8
        push 0x4
        lea ecx, [ebx + 0x20]
        call ext_006E7410
        pop edi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x54
        ret 0x8
    }
}

// [0x007AF660] sub_007AF660 (134 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AF660(void* a1, void* a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ax, word ptr [edi + 0x44]
        push eax
        call ext_007AF8F0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        je loc_7af6c4
        mov ecx, dword ptr [esi]
        push 0x3
        push 0xab1178
        push ecx
        call dword ptr [mem_009252A0]
        mov edx, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        mov eax, dword ptr [esi]
        push edx
        push eax
        jne loc_7af6ae
        mov ecx, dword ptr [edi]
        push 0xab112c
        push ecx
        call ext_0079B140
        add esp, 0x10
        or eax, -0x1
        pop edi
        pop esi
        ret
    loc_7af6ae:
        mov ecx, dword ptr [edi]
        push 0xab1108
        push ecx
        call ext_0079B140
        add esp, 0x10
        or eax, -0x1
        pop edi
        pop esi
        ret
    loc_7af6c4:
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi]
        xor eax, eax
        push edx
        mov ax, word ptr [edi + 0x44]
        push eax
        push 0xab10d0
        push ecx
        call ext_0079B140
        add esp, 0x10
        or eax, -0x1
        pop edi
        pop esi
        ret
    }
}

// [0x007AA5A0] sub_007AA5A0 (152 bytes)
extern "C" __declspec(naked) int __cdecl fn_007AA5A0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 0x16
        ja L_def
        jmp dword ptr [eax*4 + 0x7AA638]
        mov eax, 0xab076c
        ret
        mov eax, 0xab0738
        ret
        mov eax, 0xab06b0
        ret
        mov eax, 0xab0638
        ret
        mov eax, 0xab05b0
        ret
        mov eax, 0xab055c
        ret
        mov eax, 0xab04f4
        ret
        mov eax, 0xab0458
        ret
        mov eax, 0xab03a4
        ret
        mov eax, 0xab0354
        ret
        mov eax, 0xab030c
        ret
        mov eax, 0xab02dc
        ret
        mov eax, 0xab02a8
        ret
        mov eax, 0xab0274
        ret
        mov eax, 0xab0234
        ret
        mov eax, 0xab01f8
        ret
        mov eax, 0xab01bc
        ret
        mov eax, 0xab0188
        ret
        mov eax, 0xab00d8
        ret
        mov eax, 0xab0080
        ret
        mov eax, 0xab0044
        ret
    L_def:
        mov eax, 0xab0020
        ret
    }
}

// [0x007AF420] sub_007AF420 (151 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF420(char* self, char* items, int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x218]
        test eax, eax
        jle L_alloc
        add eax, edi
        shl eax, 0x2
        push eax
        mov eax, dword ptr [esi + 0x214]
        push eax
        call ext_0079AF60
        add esp, 0x8
        jmp L_after_alloc
    L_alloc:
        lea ecx, [4 * edi]
        push ecx
        call ext_0079AF40
        add esp, 0x4
    L_after_alloc:
        mov edx, dword ptr [esi + 0x218]
        mov dword ptr [esi + 0x214], eax
        test edi, edi
        lea ecx, [eax + 4 * edx]
        jle L_after_loop
        mov eax, dword ptr [esp + 0x10]
        mov edx, edi
    L_loop:
        mov dword ptr [ecx], eax
        add eax, 0x14
        add ecx, 0x4
        dec edx
        jne L_loop
    L_after_loop:
        mov eax, dword ptr [esi + 0x218]
        test eax, eax
        jle L_no_qsort
        mov ecx, dword ptr [esi + 0x214]
        add eax, edi
        push 0x7af4c0
        push 0x4
        push eax
        push ecx
        mov dword ptr [esi + 0x218], eax
        call dword ptr [mem_00925298]
        add esp, 0x10
        pop edi
        pop esi
        ret
    L_no_qsort:
        add eax, edi
        pop edi
        mov dword ptr [esi + 0x218], eax
        pop esi
        ret
    }
}

// [0x007A0D40] sub_007A0D40 (176 bytes)
extern "C" void ext_007A0D20();
extern "C" void ext_007A0DF0();
extern "C" void ext_007AA510();
extern "C" void ext_007B27D0();
extern "C" void ext_007B3250();
extern "C" __declspec(naked) void __cdecl fn_007A0D40(void* a, int b) {
    __asm {
        sub esp, 8
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov dword ptr [esp + 4], 0
        jne L67
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je LE1
    L67:
        lea eax, [esp + 4]
        push esi
        push eax
        push edi
        call ext_007A0D20
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x20]
        add esp, 8
        cmp eax, dword ptr [ecx]
        jae LD3
        mov ecx, dword ptr [ecx + 8]
        lea edx, [esp + 0x14]
        push edx
        push 0xb007
        mov esi, dword ptr [ecx + eax*4]
        push esi
        push edi
        call ext_007B27D0
        mov eax, dword ptr [esp + 0x24]
        add esp, 0x10
        test eax, eax
        je LD3
        lea eax, [esp + 0xc]
        push eax
        push 0xb006
        push esi
        push edi
        call ext_007B27D0
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x10
        test eax, eax
        je LD3
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push eax
        push edx
        call ext_007A0DF0
        add esp, 0xc
    LD3:
        lea eax, [esp + 8]
        push eax
        call ext_007B3250
        add esp, 4
        pop esi
    LE1:
        pop edi
        add esp, 8
        ret
    }
}

// [0x007A24A0] sub_007A24A0 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_007A24A0(void** pp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        test eax, eax
        je done
        mov eax, dword ptr [eax + 0x60]
        push edi
        mov edi, dword ptr [mem_009251D8]
        test eax, eax
        je L64
        push eax
        call edi
        add esp, 0x4
    L64:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x64]
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
        je L80
        push eax
        call edi
        add esp, 0x4
    L80:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x80]
        test eax, eax
        je L84
        push eax
        call edi
        add esp, 0x4
    L84:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x84]
        test eax, eax
        je L90
        push eax
        call edi
        add esp, 0x4
    L90:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x90]
        test eax, eax
        je L94
        push eax
        call edi
        add esp, 0x4
    L94:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x94]
        test eax, eax
        je La0
        push eax
        call edi
        add esp, 0x4
    La0:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0xa0]
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

// [0x007AF0C0] sub_007AF0C0 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AF0C0(unsigned char* buf, unsigned int len) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        cmp ecx, 0x8
        jbe L_tail_setup
        mov eax, dword ptr [esp + 0x4]
        push esi
        lea esi, [ecx - 0x1]
        shr esi, 0x3
    L_unroll:
        xor edx, edx
        sub ecx, 0x8
        mov dl, byte ptr [eax]
        add eax, 0x8
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x8], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x7]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x7], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x6]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x6], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x5]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x5], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x4]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x4], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x3]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x3], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x2]
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x2], dl
        xor edx, edx
        mov dl, byte ptr [eax - 0x1]
        dec esi
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x1], dl
        jne L_unroll
        pop esi
        jmp L_tail
    L_tail_setup:
        mov eax, dword ptr [esp + 0x4]
    L_tail:
        mov edx, ecx
        dec ecx
        test edx, edx
        jbe L_done
        inc ecx
    L_tail_loop:
        xor edx, edx
        mov dl, byte ptr [eax]
        inc eax
        dec ecx
        mov dl, byte ptr [edx + mem_00998A98]
        mov byte ptr [eax - 0x1], dl
        jne L_tail_loop
    L_done:
        ret
    }
}

// [0x007AD100] sub_007AD100 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AD100(void* a1, unsigned short a2, unsigned short a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je L114
        test bx, bx
        jne L12B
    L114:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je Lend
    L12B:
        cmp word ptr [edi + 0xb4], 0x0
        mov esi, dword ptr [esp + 0x14]
        je L142
        cmp si, word ptr [edi + 0x128]
        jbe L155
    L142:
        push 0x3
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je Lend
    L155:
        mov eax, dword ptr [edi + 0x12c]
        and esi, 0xffff
        lea esi, [esi + 2*esi]
        shl esi, 0x3
        mov eax, dword ptr [eax + esi + 0x14]
        test eax, eax
        je L179
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
    L179:
        and ebx, 0xffff
        push 0x2
        push ebx
        call dword ptr [mem_0092522C]
        mov ecx, dword ptr [edi + 0x12c]
        add esp, 0x8
        mov dword ptr [ecx + esi + 0x14], eax
        mov edx, dword ptr [edi + 0x12c]
        mov eax, dword ptr [edx + esi + 0x14]
        test eax, eax
        jne Lend
        push 0x1
        call ext_007AA510
        add esp, 0x4
    Lend:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007AB380] sub_007AB380 (198 bytes)
extern "C" void ext_00785450();
extern "C" void ext_00785480();
extern "C" void ext_007856F0();
extern "C" void ext_007AE190();
extern "C" void ext_007AE1F0();
extern "C" void ext_007AE3C0();

extern "C" __declspec(naked) void __fastcall fn_007AB380(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8c1b4b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x7c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x98]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x9c]
        mov esi, ecx
        push ebp
        push edi
        mov bl, byte ptr [esi + 0x84]
        mov byte ptr [esi + 0x84], 0
        call ext_007856F0
        test bl, bl
        mov byte ptr [esp + 0x13], al
        je L_skip
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x14]
        cmp eax, 1
        jle L_nocall
        lea ecx, [esp + 0x14]
        call ext_007AE190
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x94], 0
        push ecx
        lea ecx, [esp + 0x18]
        call ext_00785450
        lea edx, [esi + 0x18]
        lea ecx, [esp + 0x14]
        push edx
        call ext_00785480
        push ebp
        push edi
        lea ecx, [esp + 0x1c]
        call ext_007AE3C0
        lea ecx, [esp + 0x14]
        mov byte ptr [esi + 0x84], bl
        mov dword ptr [esp + 0x94], 0xffffffff
        call ext_007AE1F0
    L_nocall:
        mov al, byte ptr [esp + 0x13]
    L_skip:
        mov ecx, dword ptr [esp + 0x8c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x88
        ret 8
    }
}

// [0x007ADDF0] sub_007ADDF0 (208 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD540();
extern "C" void ext_007ADEC0();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007ADDF0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        test eax, eax
        je A_ret
        cmp dword ptr [eax + 0x8], 0x1
        jle A_ret
        mov eax, dword ptr [eax + 0x4]
        push ebp
        push esi
        push edi
        lea esi, [4*eax + 0xc]
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne A_have
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
    A_have:
        push esi
        mov ecx, eax
        call ext_007AD540
        mov ecx, esi
        mov esi, dword ptr [ebx]
        mov ebp, eax
        mov edx, ecx
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx]
        test eax, eax
        je A_zero
        mov esi, dword ptr [eax + 0x4]
        jmp A_cnt
    A_zero:
        xor esi, esi
    A_cnt:
        test esi, esi
        jle A_after
        mov ecx, 0xc
        mov edx, esi
    A_inc:
        mov edi, dword ptr [ebx]
        mov eax, ecx
        add eax, edi
        mov eax, dword ptr [eax]
        test eax, eax
        je A_skip
        inc dword ptr [eax + 0x8]
    A_skip:
        add ecx, 0x4
        dec edx
        jne A_inc
    A_after:
        mov eax, dword ptr [ebx]
        test eax, eax
        je A_store
        mov edx, dword ptr [eax + 0x8]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x8], edx
        test ecx, ecx
        jne A_store
        mov ecx, ebx
        call ext_007ADEC0
    A_store:
        mov dword ptr [ebx], ebp
        mov dword ptr [ebp + 0x8], 0x1
        mov eax, dword ptr [ebx]
        pop edi
        mov dword ptr [eax + 0x4], esi
        mov ecx, dword ptr [ebx]
        pop esi
        pop ebp
        mov dword ptr [ecx], 0x0
    A_ret:
        pop ebx
        ret
    }
}

// [0x007AA300] sub_007AA300 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_007AA300(void* a1, int a2, int a3) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        mov dword ptr [esp + 0x4], 0x0
        jne L_7aa329
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa3bf
    L_7aa329:
        lea eax, [esp + 0x4]
        push eax
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa35b
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa35b
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7aa3bf
    L_7aa35b:
        mov eax, dword ptr [esp + 0x10]
        dec eax
        je L_7aa3a4
        dec eax
        je L_7aa386
        dec eax
        jne L_7aa3ae
        mov ecx, dword ptr [esp + 0x4]
        push 0x2
        push esi
        mov dword ptr [ecx], 0x3daa
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], ecx
        call ext_007B9620
        add esp, 0x8
        pop esi
        pop ecx
        ret
    L_7aa386:
        mov edx, dword ptr [esp + 0x4]
        push 0x2
        push esi
        mov dword ptr [edx], 0xc23d
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], ecx
        call ext_007B9620
        add esp, 0x8
        pop esi
        pop ecx
        ret
    L_7aa3a4:
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [eax], 0x4d4d
    L_7aa3ae:
        mov ecx, dword ptr [esp + 0x4]
        push 0x2
        push esi
        mov dword ptr [esi], ecx
        call ext_007B9620
        add esp, 0x8
    L_7aa3bf:
        pop esi
        pop ecx
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
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x007A94F0] sub_007A94F0 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_007A94F0(void* p, const char* name, void** out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        xor edi, edi
        test esi, esi
        mov dword ptr [esp + 0x8], edi
        je L_7a9511
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_7a9511
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jne L_7a9528
    L_7a9511:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7a95b4
    L_7a9528:
        push esi
        call ext_007A9360
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7a9543
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7a95b4
    L_7a9543:
        mov eax, dword ptr [esi + 0x8]
        push ebx
        push ebp
        xor ebp, ebp
        mov edx, dword ptr [eax]
        test edx, edx
        jbe L_7a95ac
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov edi, eax
    L_7a9559:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esp + 0x1c]
    L_7a955f:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jne L_7a9583
        test cl, cl
        je L_7a957f
        mov bl, byte ptr [eax + 0x1]
        mov cl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne L_7a9583
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_7a955f
    L_7a957f:
        xor eax, eax
        jmp L_7a9588
    L_7a9583:
        sbb eax, eax
        sbb eax, -0x1
    L_7a9588:
        test eax, eax
        je L_7a95a4
        inc ebp
        add edi, 0x8
        cmp ebp, edx
        jb L_7a9559
        mov ecx, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x10]
        pop ebp
        pop ebx
        mov dword ptr [ecx], edi
        pop edi
        pop esi
        pop ecx
        ret
    L_7a95a4:
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [eax + 8 * ebp + 0x4]
    L_7a95ac:
        mov ecx, dword ptr [esp + 0x20]
        pop ebp
        pop ebx
        mov dword ptr [ecx], edi
    L_7a95b4:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x007A3410] sub_007A3410 (224 bytes)
extern "C" void __cdecl fn_007A3410(void* p) {
    typedef void (__cdecl *free_t)(void*);
    void** esi = (void**)p;
    if (esi == 0) return;
    if (*esi == 0) { *esi = 0; return; }
    free_t fr = (free_t)mem_009251D8;
    char* o = (char*)*esi;
    fr(*(void**)(o + 0xe4));
    fr(*(void**)(*(char**)esi + 0x168));
    fr(*(void**)(*(char**)esi + 0x1ec));
    fr(*(void**)(*(char**)esi + 0x270));
    fr(*(void**)(*(char**)esi + 0x2f4));
    fr(*(void**)(*(char**)esi + 0x378));
    fr(*(void**)(*(char**)esi + 0x8b0));
    fr(*(void**)(*(char**)esi + 0x3fc));
    fr(*(void**)(*(char**)esi + 0x480));
    fr(*(void**)(*(char**)esi + 0x504));
    fr(*(void**)(*(char**)esi + 0x588));
    fr(*(void**)(*(char**)esi + 0x60c));
    fr(*(void**)(*(char**)esi + 0x690));
    fr(*(void**)(*(char**)esi + 0x714));
    fr(*(void**)(*(char**)esi + 0x798));
    fr(*esi);
    *esi = 0;
}

// [0x007AA710] sub_007AA710 (222 bytes)
extern "C" void ext_0079B9C0();
extern "C" void ext_006A6C99();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9EC0();

extern "C" __declspec(naked) void __fastcall fn_007AA710(void* self) {
    __asm {
        push -1
        push 0x8c1abe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x10], edi
        call ext_0079B9C0
        push 0x6b9d70
        push 0x6b9d10
        lea ebx, [edi + 0x1dc]
        push 0x12
        xor ebp, ebp
        push 0x4c
        push ebx
        mov dword ptr [esp + 0x30], ebp
        call ext_006A6C99
        lea ecx, [edi + 0x788]
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006B9D10
        mov byte ptr [esp + 0x1c], 0x2
        mov dword ptr [edi], 0x9981bc
        lea esi, [edi + 0x14c]
    L_loop:
        xor eax, eax
        mov dword ptr [esi - 0x5c], 0
        test ebp, ebp
        mov byte ptr [edi + ebp + 0x138], 0x0
        mov dword ptr [esi], 0x2
        setg al
        push 0xb5d2c0
        mov ecx, ebx
        mov dword ptr [esi + 0x48], eax
        call ext_006B9EC0
        mov dword ptr [esi + 0x5e8], 0
        inc ebp
        add esi, 0x4
        add ebx, 0x4c
        cmp ebp, 0x12
        jl L_loop
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0x77c], 0x4
        mov byte ptr [edi + 0x780], 0x0
        mov byte ptr [edi + 0x781], 0x0
        mov dword ptr [edi + 0x784], 0x1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007A64E0] sub_007A64E0 (224 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B3190();
extern "C" void ext_007B3250();
extern "C" int mem_00B61219;
extern "C" int mem_00925208;
extern "C" int mem_00997DB1;

extern "C" __declspec(naked) void __cdecl fn_007A64E0(void** pp) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_7a6503
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_end
    L_7a6503:
        cmp dword ptr [esi], ebx
        jne L_7a6539
        push 0x40
        call dword ptr [mem_00925208]
        add esp, 0x4
        cmp eax, ebx
        mov dword ptr [esi], eax
        jne L_7a652f
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_end
    L_7a652f:
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x3c], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x38], ebx
    L_7a6539:
        mov edx, dword ptr [esi]
        mov byte ptr [edx], bl
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0xc], ebx
        mov ecx, dword ptr [esi]
        mov eax, 0x3f357753
        mov dword ptr [ecx + 0x10], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x14], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x18], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x1c], eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x20], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x24], 0x3f800000
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_00997DB1]
        mov byte ptr [eax + 0x28], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_00997DB1]
        mov byte ptr [edx + 0x2c], al
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x30], 0x41200000
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x34], 0x42c80000
        mov eax, dword ptr [esi]
        add eax, 0x38
        cmp dword ptr [eax], ebx
        je L_7a65a2
        push eax
        call ext_007B3250
        add esp, 0x4
    L_7a65a2:
        mov eax, dword ptr [esi]
        push ebx
        add eax, 0x38
        push eax
        call ext_007B3190
        add esp, 0x8
    L_end:
        pop esi
        pop ebx
        ret
    }
}

// [0x007A7400] sub_007A7400 (224 bytes)
extern "C" void ext_007A7530();
extern "C" void ext_007A9360();
extern "C" void ext_007AA510();
extern "C" void ext_007B2D80();
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007A7400(void* a1, int a2, unsigned int a3) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_null
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        jne L_have
    L_null:
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_have:
        cmp dword ptr [edi], 0x0
        jne L_chk
        push 5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_chk:
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_go
        cmp eax, 0xc23d
        je L_go
        push 6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_go:
        push edi
        call ext_007A9360
        mov eax, dword ptr [edi + 0x8]
        add esp, 0x4
        xor esi, esi
        xor ebx, ebx
        cmp dword ptr [eax], 0x0
        jbe L_end
        mov ebp, dword ptr [esp + 0x18]
    L_loop:
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x14]
        push ecx
        push 0x4100
        mov eax, dword ptr [edx + 8 * esi + 0x4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        test eax, eax
        je L_next
        inc ebx
        lea ecx, [ebx - 0x1]
        cmp ecx, ebp
        je L_match
    L_next:
        mov eax, dword ptr [edi + 0x8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_match:
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [esp + 0x1c]
        push edx
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx + 8 * esi + 0x4]
        push edx
        call ext_007A7530
        add esp, 0x8
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007AA410] sub_007AA410 (256 bytes)
extern "C" void ext_0079EBB0();
extern "C" void ext_0079EED0();
extern "C" void ext_007AA030();
extern "C" void ext_007AA510();
extern "C" void ext_007B8B20();
extern "C" void ext_007B9620();
extern "C" int mem_00B61219;
extern "C" int mem_00B61218;

extern "C" __declspec(naked) void __cdecl fn_007AA410(void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        je L422
        test esi, esi
        jne L439
    L422:
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je LEND
    L439:
        push 2
        push esi
        call ext_007B9620
        mov eax, dword ptr [edi + 8]
        add esp, 8
        cmp eax, 2
        jne LEND
        push esi
        call ext_007B8B20
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L482
        push 0x10
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L482
        mov al, byte ptr [mem_00B61219]
        test al, al
        je LEND
    L482:
        push edi
        call ext_0079EBB0
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L4B0
        push 0x10
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L4B0
        mov al, byte ptr [mem_00B61219]
        test al, al
        je LEND
    L4B0:
        push 0
        call ext_0079EED0
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L4DF
        push 0x10
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L4DF
        mov al, byte ptr [mem_00B61219]
        test al, al
        je LEND
    L4DF:
        mov eax, dword ptr [esi]
        mov cl, byte ptr [edi + 0xc]
        mov byte ptr [eax + 0x19], cl
        mov dl, byte ptr [edi + 0xc]
        mov eax, dword ptr [esi]
        push edx
        push eax
        call ext_007AA030
        mov al, byte ptr [mem_00B61218]
        add esp, 8
        test al, al
        je LEND
        push 0x10
        call ext_007AA510
        add esp, 4
    LEND:
        pop edi
        pop esi
        ret
    }
}

// [0x007A6850] sub_007A6850 (256 bytes)
extern "C" void ext_007A6A50();
extern "C" __declspec(naked) void __cdecl fn_007A6850(void* p, int a2, int a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_1
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        jne L_2
    L_1:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_2:
        cmp dword ptr [edi], 0x0
        jne L_3
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_3:
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_4
        cmp eax, 0xc23d
        je L_4
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_end
    L_4:
        push edi
        call ext_007A9360
        mov eax, dword ptr [edi + 0x8]
        add esp, 0x4
        xor esi, esi
        cmp dword ptr [eax], 0x0
        jbe L_end
        mov ebp, dword ptr [esp + 0x1c]
        or ebx, -0x1
    L_loop:
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x18]
        push ecx
        push 0x4600
        mov eax, dword ptr [edx + 8*esi + 0x4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        test eax, eax
        je L_next
        lea ecx, [esp + 0x10]
        push ecx
        push 0x4610
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        jne L_next
        inc ebx
        cmp ebx, ebp
        je L_found
    L_next:
        mov eax, dword ptr [edi + 0x8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    L_found:
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx + 8*esi + 0x4]
        push edx
        call ext_007A6A50
        add esp, 0x8
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007A6950] sub_007A6950 (256 bytes)
extern "C" void ext_007A6A50();
extern "C" __declspec(naked) void __cdecl fn_007A6950(void* a1, int a2, int a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_call2
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        jne L_chk1
    L_call2:
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_out
    L_chk1:
        cmp dword ptr [edi], 0
        jne L_chk2
        push 5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_out
    L_chk2:
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_go
        cmp eax, 0xc23d
        je L_go
        push 6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_out
    L_go:
        push edi
        call ext_007A9360
        mov eax, dword ptr [edi + 8]
        add esp, 4
        xor esi, esi
        cmp dword ptr [eax], 0
        jbe L_out
        mov ebp, dword ptr [esp + 0x1c]
        or ebx, -1
    L_loop:
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 0x18]
        push ecx
        push 0x4600
        mov eax, dword ptr [edx + 8 * esi + 4]
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        test eax, eax
        je L_next
        lea ecx, [esp + 0x10]
        push ecx
        push 0x4610
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je L_next
        inc ebx
        cmp ebx, ebp
        je L_match
    L_next:
        mov eax, dword ptr [edi + 8]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    L_match:
        mov eax, dword ptr [edi + 8]
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 8 * esi + 4]
        push edx
        call ext_007A6A50
        add esp, 8
    L_out:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007AC040] sub_007AC040 (261 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_0079BAA0();
extern "C" void ext_007AA8F0();
extern "C" void ext_007AA930();
extern "C" void ext_007AA950();
extern "C" void ext_007AA970();
extern "C" void ext_007AA990();
extern "C" void ext_007AAA00();

extern "C" __declspec(naked) void __fastcall fn_007AC040(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_0079BAA0
        push 0x1
        push 0x1
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x1
        mov ecx, esi
        call ext_007AA930
        push 0x0
        push 0x1
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x1
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xab0004
        call ext_006B9D80
        push 0x1
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x1
        mov ecx, esi
        call ext_007AAA00
        push 0x0
        push 0x2
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x2
        mov ecx, esi
        call ext_007AA930
        push 0x1
        push 0x2
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x2
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xab0874
        call ext_006B9D80
        push 0x2
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x2
        mov ecx, esi
        call ext_007AAA00
        push 0x1
        push 0x3
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x3
        mov ecx, esi
        call ext_007AA930
        push 0x1
        push 0x3
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x3
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xab0850
        call ext_006B9D80
        push 0x3
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x3
        mov ecx, esi
        call ext_007AAA00
        pop esi
        pop ecx
        ret
    }
}

// [0x007AE280] sub_007AE280 (283 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA6B0();
extern "C" void ext_006E7410();

extern "C" __declspec(naked) unsigned char __fastcall fn_007AE280(void* self, int edx_unused, void** a1, int a2) {
    __asm {
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x84]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [edi]
        call ext_006CA6A0
        mov ebp, dword ptr [esp + 0x88]
        mov esi, 1
        cmp ebp, esi
        mov dword ptr [esp + 0x10], eax
        jle L_keyok
        lea ebx, [edi + 4]
    L_kcheck:
        mov ecx, dword ptr [ebx]
        call ext_006CA6A0
        cmp dword ptr [esp + 0x10], eax
        jne L_err1
        inc esi
        add ebx, 4
        cmp esi, ebp
        jl L_kcheck
    L_keyok:
        mov eax, dword ptr [esp + 0x10]
        xor ebx, ebx
        test eax, eax
        jle L_false
    L_outer:
        lea ecx, [esp + 0x20]
        lea edx, [esp + 0x30]
        push ecx
        mov ecx, dword ptr [edi]
        push ebx
        push edx
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov esi, 1
        mov dword ptr [esp + 0x18], ecx
        cmp ebp, esi
        mov dword ptr [esp + 0x1c], edx
        jle L_inner_done
        add edi, 4
    L_inner:
        lea eax, [esp + 0x28]
        lea ecx, [esp + 0x58]
        push eax
        push ebx
        push ecx
        mov ecx, dword ptr [edi]
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9F00
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jne L_err2
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [eax + 4]
        cmp ecx, edx
        jne L_err2
        inc esi
        add edi, 4
        cmp esi, ebp
        jl L_inner
        mov edi, dword ptr [esp + 0x84]
    L_inner_done:
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jge L_false
        jmp L_outer
    L_err1:
        mov eax, dword ptr [esp + 0x14]
        push 0xab0b6c
        push 2
        lea ecx, [eax + 0x20]
        call ext_006E7410
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x70
        ret 8
    L_err2:
        mov edx, dword ptr [esp + 0x14]
        push 0xab0b40
        push 3
        lea ecx, [edx + 0x20]
        call ext_006E7410
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x70
        ret 8
    L_false:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x70
        ret 8
    }
}

// [0x007A9760] sub_007A9760 (288 bytes)
extern "C" void ext_007A95F0();
extern "C" void ext_007AA510();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007A9760(void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        xor edi, edi
        test esi, esi
        mov dword ptr [esp + 0x8], edi
        je short L_report2
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je short L_report2
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jne short L_chk5
    L_report2:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_epi
    L_chk5:
        cmp dword ptr [esi], 0x0
        jne short L_tag
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_epi
    L_tag:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        cmp eax, 0x3daa
        je short L_call
        cmp eax, 0x4d4d
        je short L_call
        cmp eax, 0xc23d
        je short L_call
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_epi
    L_call:
        push esi
        call ext_007A95F0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je short L_scan
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_epi
    L_scan:
        mov eax, dword ptr [esi + 0xc]
        push ebx
        push ebp
        xor ebp, ebp
        mov edx, dword ptr [eax]
        test edx, edx
        jbe L_zero
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov edi, eax
    L_loop:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esp + 0x1c]
    L_loopcmp:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jne short L_neq
        test cl, cl
        je short L_eqend
        mov bl, byte ptr [eax + 0x1]
        mov cl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne short L_neq
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne short L_loopcmp
    L_eqend:
        xor eax, eax
        jmp short L_cmpres
    L_neq:
        sbb eax, eax
        sbb eax, -1
    L_cmpres:
        test eax, eax
        je short L_found
        inc ebp
        add edi, 0x8
        cmp ebp, edx
        jb short L_loop
        mov edx, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x10]
        pop ebp
        pop ebx
        mov dword ptr [edx], edi
        pop edi
        pop esi
        pop ecx
        ret
    L_found:
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [ecx + 8 * ebp + 0x4]
    L_zero:
        mov edx, dword ptr [esp + 0x20]
        pop ebp
        pop ebx
        mov dword ptr [edx], edi
    L_epi:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x007ABD40] sub_007ABD40 (293 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA260();
extern "C" void ext_006BA7C0();
extern "C" void ext_006D2170();
extern "C" void ext_006E6340();
extern "C" void ext_006E6350();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_007ABD40(void* self) {
    __asm {
        push -1
        push 0x8c1bd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr [esp + 0x70]
        xor esi, esi
        mov eax, dword ptr [edi + 0x4]
        lea ebx, [edi + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x10], ebx
        jle L_96
    L_loop:
        mov eax, dword ptr [edi + 0x14]
        mov ecx, ebp
        lea ebx, [eax + 4*esi]
        call ext_006E6340
        mov ecx, dword ptr [ebx]
        push eax
        call ext_006BA7C0
        test al, al
        jne L_ca
        mov ecx, dword ptr [esp + 0x10]
        inc esi
        cmp esi, dword ptr [ecx]
        jl L_loop
        mov ebx, ecx
    L_96:
        push 0x50
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x70], esi
        test esi, esi
        mov dword ptr [esp + 0x68], 0x1
        je L_e31
        mov ecx, ebp
        call ext_006E6340
        push eax
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esi + 0x4c], 0x0
        jmp L_e33
    L_ca:
        lea ecx, [esp + 0x14]
        call ext_006B9D10
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esp + 0x68], 0x0
        mov eax, dword ptr [edx + 4*esi]
        mov ecx, dword ptr [eax + 0x4c]
        inc ecx
        mov dword ptr [eax + 0x4c], ecx
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [eax + 4*esi]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006B9E60
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [edx + 4*esi]
        mov ecx, dword ptr [eax + 0x4c]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006BA260
        lea ecx, [esp + 0x14]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006E6350
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        mov al, 0x1
        jmp L_e50
    L_e31:
        xor esi, esi
    L_e33:
        mov eax, dword ptr [ebx]
        lea edx, [esp + 0x70]
        push edx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x70], 0xffffffff
        mov dword ptr [esp + 0x78], esi
        call ext_006D2170
        xor al, al
    L_e50:
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 0x4
    }
}

// [0x007A1C80] sub_007A1C80 (320 bytes)
extern "C" void ext_007A9BD0();
extern "C" void ext_007B24C0();
extern "C" void ext_007B2530();
extern "C" void ext_007B2570();
extern "C" void ext_007B25C0();
extern "C" void ext_007B2690();
extern "C" void ext_007B29C0();
extern "C" void ext_007B2B10();
extern "C" void ext_007B2E50();

extern "C" __declspec(naked) void __cdecl fn_007A1C80(void* a1, void* a2) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0xc], 0x0
        test edi, edi
        je L_A
        test esi, esi
        jne L_B
    L_A:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_B:
        cmp dword ptr [edi], 0x0
        jne L_C
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_C:
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_OK
        cmp eax, 0xc23d
        je L_OK
        push 0x6
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_END
    L_OK:
        push edi
        call ext_007A9BD0
        mov edx, dword ptr [edi]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        call ext_007B2B10
        lea eax, [esp + 0x18]
        push eax
        push 0xb005
        push esi
        push edi
        call ext_007B29C0
        mov ecx, dword ptr [esp + 0x30]
        push ecx
        push 0xb005
        call ext_007B2570
        mov ebx, eax
        push ebx
        call ext_007B2530
        mov ax, word ptr [esi + 0x24]
        mov cx, word ptr [esi + 0x22]
        lea edx, [esi + 0xb]
        push ebx
        push edx
        push eax
        push ecx
        push esi
        call ext_007B24C0
        push edi
        call ext_007A9BD0
        mov eax, dword ptr [esi + 0x28]
        add esp, 0x40
        test eax, eax
        jbe L_S1
        mov edx, dword ptr [esi + 0x30]
        test edx, edx
        je L_S1
        mov ecx, dword ptr [esi + 0x34]
        test ecx, ecx
        je L_S1
        push ebx
        push ecx
        push edx
        mov dx, word ptr [esi + 0x2c]
        push edx
        push eax
        call ext_007B25C0
        add esp, 0x14
    L_S1:
        mov edx, dword ptr [esi + 0x38]
        test edx, edx
        jbe L_S2
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_S2
        mov eax, dword ptr [esi + 0x44]
        test eax, eax
        je L_S2
        push ebx
        push eax
        mov ax, word ptr [esi + 0x3c]
        push ecx
        push eax
        push edx
        call ext_007B2690
        add esp, 0x14
    L_S2:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je L_END
        push eax
        push ebx
        call ext_007B2E50
        add esp, 0x8
    L_END:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x007AD3F0] sub_007AD3F0 (336 bytes)
extern "C" void ext_0078CD30();
extern "C" void ext_007AD540();
extern "C" void ext_007AD660();
extern "C" int mem_00B61680;

extern "C" __declspec(naked) void __fastcall fn_007AD3F0(void* self, int edx_unused, void* a1, unsigned int a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        mov eax, dword ptr [ecx]
        push ebx
        xor ebx, ebx
        push esi
        cmp eax, ebx
        push edi
        mov dword ptr [ebp - 0x4], ecx
        mov dword ptr [ebp - 0x1c], ebx
        mov dword ptr [ebp - 0x10], ebx
        je L_null
        mov edi, dword ptr [ebp + 0x8]
        mov esi, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x1c], esi
        mov ecx, dword ptr [edi]
        cmp esi, ecx
        jne L_diff
        cmp edx, dword ptr [edi + 0x4]
        jne L_diff
        mov eax, edx
        mov ebx, esi
        mov dword ptr [ebp - 0x10], eax
        jmp L_have
    L_diff:
        xor eax, eax
        cmp esi, ecx
        setl al
        dec eax
        mov ebx, eax
        and eax, esi
        not ebx
        and ebx, ecx
        or ebx, eax
        mov eax, dword ptr [edi + 0x4]
        sub eax, ebx
        sub edx, ebx
        lea ecx, [eax + ecx - 0x1]
        lea edx, [edx + esi - 0x1]
        mov dword ptr [ebp - 0x8], ecx
        mov dword ptr [ebp - 0xc], edx
        mov edx, dword ptr [ebp - 0xc]
        mov ecx, dword ptr [ebp - 0x8]
        xor eax, eax
        sub edx, ecx
        setg al
        dec eax
        and eax, edx
        add eax, ecx
        inc eax
        mov dword ptr [ebp - 0x10], eax
        jmp L_have
    L_null:
        mov edi, dword ptr [ebp + 0x8]
    L_have:
        mov eax, dword ptr [edi + 0x4]
        lea esi, [4*eax + 0xc]
        mov eax, dword ptr [mem_00B61680]
        test eax, eax
        jne L_alloc_done
        push 0x200000
        push eax
        push 0x2
        push 0x20000
        call ext_0078CD30
        add esp, 0x10
        mov dword ptr [mem_00B61680], eax
    L_alloc_done:
        push esi
        mov ecx, eax
        call ext_007AD540
        mov edi, eax
        mov eax, dword ptr [ebp + 0xc]
        and eax, 0xff
        mov ecx, esi
        mov dl, al
        mov dword ptr [ebp - 0x8], edi
        mov dh, dl
        mov eax, edx
        shl eax, 0x10
        mov ax, dx
        shr ecx, 0x2
        rep stosd
        mov ecx, esi
        and ecx, 0x3
        rep stosb
        mov ecx, dword ptr [ebp - 0x10]
        test ecx, ecx
        jle L_noqcopy
        mov eax, dword ptr [ebp - 0x1c]
        mov edx, ebx
        sub edx, eax
        mov eax, dword ptr [ebp - 0x4]
        mov esi, dword ptr [eax]
        lea esi, [esi + 4*edx + 0xc]
        mov edx, dword ptr [ebp + 0x8]
        mov edi, dword ptr [edx]
        mov edx, dword ptr [ebp - 0x8]
        sub ebx, edi
        lea edi, [edx + 4*ebx + 0xc]
        rep movsd
        jmp L_after_copy
    L_noqcopy:
        mov eax, dword ptr [ebp - 0x4]
    L_after_copy:
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je L_store
        mov esi, dword ptr [ecx + 0x8]
        dec esi
        mov edx, esi
        mov dword ptr [ecx + 0x8], esi
        test edx, edx
        jne L_store
        mov ecx, eax
        call ext_007AD660
        mov eax, dword ptr [ebp - 0x4]
    L_store:
        mov ecx, dword ptr [ebp - 0x8]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [ecx + 0x8], 0x1
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        mov dword ptr [edx], esi
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x007AC960] sub_007AC960 (352 bytes)
extern "C" int mem_00998870;
extern "C" int mem_00998872;
extern "C" int mem_00998874;
extern "C" int mem_00998876;
extern "C" int mem_00998878;
extern "C" int mem_0099887A;
extern "C" int mem_0099887C;

extern "C" __declspec(naked) void __cdecl fn_007AC960(void* p, unsigned int mask) {
    __asm {
        mov eax, dword ptr [mem_00998870]
        push ebx
        push ebp
        mov ebx, dword ptr [mem_009251D8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov ecx, eax
        and ecx, edi
        cmp cx, ax
        jne L_ac_a
        mov eax, dword ptr [esi + 0x14]
        xor ebp, ebp
        cmp eax, ebp
        je L_ac_b
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0x14], ebp
        jmp L_ac_b
    L_ac_a:
        xor ebp, ebp
    L_ac_b:
        mov ax, word ptr [mem_00998872]
        mov dx, ax
        and edx, edi
        cmp dx, ax
        jne L_ac_c
        mov eax, dword ptr [esi + 0x24]
        cmp eax, ebp
        je L_ac_c
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0x24], ebp
    L_ac_c:
        mov eax, dword ptr [mem_00998874]
        mov ecx, eax
        and ecx, edi
        cmp cx, ax
        jne L_ac_d
        mov eax, dword ptr [esi + 0xb8]
        cmp eax, ebp
        je L_ac_d
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0xb8], ebp
    L_ac_d:
        mov ax, word ptr [mem_00998876]
        mov dx, ax
        and edx, edi
        cmp dx, ax
        jne L_ac_e
        cmp dword ptr [esi + 0x12c], ebp
        je L_ac_e
        cmp word ptr [esi + 0x128], bp
        jbe L_ac_36
        xor edi, edi
    L_ac_loop:
        mov eax, dword ptr [esi + 0x12c]
        mov eax, dword ptr [edi + eax + 0x14]
        test eax, eax
        je L_ac_skip
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x12c]
        add esp, 4
        mov dword ptr [edi + ecx + 0x14], 0
    L_ac_skip:
        xor edx, edx
        inc ebp
        mov dx, word ptr [esi + 0x128]
        add edi, 0x18
        cmp ebp, edx
        jb L_ac_loop
        mov edi, dword ptr [esp + 0x18]
        xor ebp, ebp
    L_ac_36:
        mov eax, dword ptr [esi + 0x12c]
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0x12c], ebp
    L_ac_e:
        mov eax, dword ptr [mem_00998878]
        mov ecx, eax
        and ecx, edi
        cmp cx, ax
        jne L_ac_f
        mov eax, dword ptr [esi + 0xbc]
        cmp eax, ebp
        je L_ac_f
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0xbc], ebp
    L_ac_f:
        mov ax, word ptr [mem_0099887A]
        mov dx, ax
        and edx, edi
        cmp dx, ax
        jne L_ac_g
        mov eax, dword ptr [esi + 0x148]
        cmp eax, ebp
        je L_ac_g
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0x148], ebp
    L_ac_g:
        mov eax, dword ptr [mem_0099887C]
        mov ecx, eax
        and ecx, edi
        cmp cx, ax
        jne L_ac_h
        mov eax, dword ptr [esi + 0x1c]
        cmp eax, ebp
        je L_ac_h
        push eax
        call ebx
        add esp, 4
        mov dword ptr [esi + 0x1c], ebp
    L_ac_h:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007A6660] sub_007A6660 (352 bytes)
extern "C" void ext_007A64E0();
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;
extern "C" int mem_009251D8;
extern "C" int mem_00925208;
extern "C" int mem_00997DB1;

extern "C" __declspec(naked) void __cdecl fn_007A6660(void* p) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_683
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        cmp al, bl
        je L_end
    L_683:
        push esi
        call ext_007A64E0
        mov eax, dword ptr [esi]
        add esp, 4
        mov eax, dword ptr [eax + 0x3c]
        cmp eax, ebx
        je L_6ba
        mov eax, dword ptr [eax + 0x44]
        push edi
        mov edi, dword ptr [mem_009251D8]
        cmp eax, ebx
        je L_6a9
        push eax
        call edi
        add esp, 4
    L_6a9:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x3c]
        push edx
        call edi
        mov eax, dword ptr [esi]
        add esp, 4
        mov dword ptr [eax + 0x3c], ebx
        pop edi
    L_6ba:
        push 0x48
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [esi]
        add esp, 4
        mov dword ptr [ecx + 0x3c], eax
        mov edx, dword ptr [esi]
        cmp dword ptr [edx + 0x3c], ebx
        jne L_6e8
        push 1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        cmp al, bl
        je L_end
    L_6e8:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x3c]
        mov eax, 0x3f800000
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0xc], 0x42300000
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x10], 0x42340000
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x14], ebx
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x18], eax
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dl, byte ptr [mem_00997DB1]
        mov byte ptr [ecx + 0x1c], dl
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x3c]
        mov dword ptr [edx + 0x20], ebx
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x3c]
        mov cl, byte ptr [mem_00997DB1]
        mov byte ptr [edx + 0x24], cl
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x28], eax
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x2c], 0x40400000
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov word ptr [ecx + 0x30], 0x200
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x3c]
        mov dword ptr [ecx + 0x34], eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x3c]
        mov dword ptr [eax + 0x38], ebx
        mov ecx, dword ptr [esi]
        mov al, byte ptr [mem_00997DB1]
        mov edx, dword ptr [ecx + 0x3c]
        mov byte ptr [edx + 0x3c], al
        mov ecx, dword ptr [esi]
        mov al, byte ptr [mem_00997DB1]
        mov edx, dword ptr [ecx + 0x3c]
        mov byte ptr [edx + 0x3d], al
        mov ecx, dword ptr [esi]
        mov al, byte ptr [mem_00997DB1]
        mov edx, dword ptr [ecx + 0x3c]
        mov byte ptr [edx + 0x40], al
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x3c]
        mov dword ptr [edx + 0x44], ebx
    L_end:
        pop esi
        pop ebx
        ret
    }
}

// [0x007AA190] sub_007AA190 (368 bytes)
extern "C" void ext_0079EBB0();
extern "C" void ext_0079EED0();
extern "C" void ext_007A9E90();
extern "C" void ext_007B7D10();
extern "C" void ext_007B8AE0();

extern "C" __declspec(naked) void __cdecl fn_007AA190(void* a1, void** a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], 0x0
        je L_7aa1ab
        test esi, esi
        jne L_7aa1c2
    L_7aa1ab:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa2f3
    L_7aa1c2:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, 0x1
        je L_7aa1d3
        cmp eax, 0x3
        jne L_7aa2f3
    L_7aa1d3:
        lea eax, [esp + 0x8]
        push eax
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa200
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa2f3
    L_7aa200:
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov dword ptr [edi], eax
        mov cl, byte ptr [esi + 0xc]
        mov byte ptr [eax + 0x18], cl
        call ext_0079EBB0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa235
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa2f3
    L_7aa235:
        push 0x0
        call ext_0079EED0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa25f
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa2f3
    L_7aa25f:
        mov eax, dword ptr [esp + 0x8]
        lea edx, [eax + 0x4]
        push edx
        push eax
        call ext_007B7D10
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_7aa295
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa295
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7aa2f3
    L_7aa295:
        mov eax, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax]
        cmp eax, 0x4d4d
        je L_7aa2b0
        cmp eax, 0xc23d
        je L_7aa2b0
        cmp eax, 0x3daa
        jne L_7aa2f3
    L_7aa2b0:
        mov ecx, dword ptr [edi]
        push ecx
        call ext_007A9E90
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa2d7
        push 0xe
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7aa2f3
    L_7aa2d7:
        push edi
        call ext_007B8AE0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7aa2f3
        push 0xe
        call ext_007AA510
        add esp, 0x4
    L_7aa2f3:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x007A9E90] sub_007A9E90 (416 bytes)
extern "C" void ext_0079EA90();
extern "C" void ext_0079EB70();
extern "C" void ext_0079EEC0();
extern "C" void ext_007A9CE0();
extern "C" void ext_007A9E90();
extern "C" void ext_007AA510();
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E20();
extern "C" void ext_007B7D10();
extern "C" void ext_007B82E0();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007A9E90(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov al, byte ptr [esi + 0x18]
        push eax
        call ext_0079EA90
        push esi
        call ext_007B82E0
        mov edi, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0x4]
        add esp, 0x8
        add edi, edx
        call ext_0079EEC0
        cmp eax, edi
        jae L_EPI
    L_LOOP:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], 0x0
        push ecx
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_A
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_A
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
    L_A:
        call ext_0079EEC0
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [edx + 0x8], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_B
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_B
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
    L_B:
        call ext_0079EB70
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [ecx + 0x18], al
        mov eax, dword ptr [esp + 0xc]
        lea edx, [eax + 0x4]
        push edx
        push eax
        call ext_007B7D10
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_C
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_C
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
    L_C:
        mov eax, dword ptr [esp + 0xc]
        push eax
        push esi
        call ext_007B2E20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_D
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_D
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
    L_D:
        mov eax, dword ptr [esp + 0xc]
        push eax
        cmp dword ptr [eax], 0x8001
        jne L_E
        call ext_007A9CE0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_F
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_F
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
        jmp L_F
    L_E:
        call ext_007A9E90
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_F
        push 0xf
        call ext_007AA510
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_F
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_EPI
    L_F:
        call ext_0079EEC0
        cmp eax, edi
        jb L_LOOP
    L_EPI:
        pop edi
        pop esi
        ret
    }
}

// [0x007A95F0] sub_007A95F0 (368 bytes)
extern "C" void ext_007AA510(); extern "C" void ext_007B2480(); extern "C" void ext_007B2D80(); extern "C" void ext_007B2DF0(); extern "C" void ext_007B3060(); extern "C" void ext_007B3120(); extern "C" void ext_007B3CF0(); extern "C" int mem_00B61219; extern "C" int mem_00998071;
extern "C" __declspec(naked) void __cdecl fn_007A95F0(void* self) {
    __asm {
        sub esp, 0xc
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        xor ebp, ebp
        test esi, esi
        push edi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0xc], 0
        mov dword ptr [esp + 0x14], 0
        jne L2f
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je Lend
    L2f:
        mov al, byte ptr [esi + 5]
        test al, al
        je Lend
        mov al, byte ptr [mem_00998071]
        lea edi, [esi + 0xc]
        push edi
        mov byte ptr [esi + 5], al
        call ext_007B3120
        mov edx, dword ptr [esi]
        lea ecx, [esp + 0x14]
        push ecx
        push 0x3d3d
        push edx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0x10
        test eax, eax
        jne L85
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x10]
        push eax
        push 0x3daa
        push ecx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je Lbf
    L85:
        lea edx, [esp + 0xc]
        push edx
        push 0xafff
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je Lbf
    La0:
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esp + 0xc]
        push ecx
        push 0xafff
        push edx
        inc ebp
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        jne La0
    Lbf:
        push ebp
        push edi
        call ext_007B3060
        mov eax, dword ptr [esp + 0x18]
        add esp, 8
        test eax, eax
        je Lend
        lea ecx, [esp + 0xc]
        push ecx
        push 0xafff
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je Lend
        xor esi, esi
    Lf2:
        lea edx, [esp + 0x14]
        push edx
        push 0xa000
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_007B3CF0
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [ecx + esi + 4], edx
        mov eax, dword ptr [eax]
        push eax
        call ext_007B2480
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [esp + 0x20]
        mov edx, dword ptr [ecx + 0x10]
        push eax
        push 0xafff
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0x20
        add esi, 8
        test eax, eax
        jne Lf2
    Lend:
        pop edi
        pop esi
        pop ebp
        add esp, 0xc
        ret
    }
}
