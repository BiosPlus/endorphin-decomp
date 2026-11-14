// Decompiled translation unit: src/leaf/decompiled_770000.cpp

extern "C" void ext_006A5C5C();
extern "C" void ext_00772040();
extern "C" int mem_00925284;
extern "C" int mem_00B60728;
extern "C" int mem_00B6072C;
extern "C" int mem_00B60720;

// [0x0077F650] sub_0077F650 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077F650(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00772040
        test byte ptr [esp + 8], 1
        je skip
        push esi
        call ext_006A5C5C
        add esp, 4
    skip:
        mov eax, esi
        pop esi
        ret 4
        nop
        nop
        _emit 0xE9
        _emit 0x0B
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
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B60728], ecx
        mov dword ptr [mem_00B6072C], edx
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
        _emit 0xE9
        _emit 0x0B
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
        fstp qword ptr [mem_00B60720]
        ret
    }
}

// [0x0077FC70] sub_0077FC70 (255 bytes)
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;

extern "C" __declspec(naked) void __fastcall fn_0077FC70(void* self) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je L1
        fld qword ptr [mem_0092A278]
        jmp L2
    L1:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L3
        fld qword ptr [mem_0092A270]
        jmp L2
    L3:
        fld qword ptr [esp + 0x4]
    L2:
        fstp qword ptr [ecx]
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je L4
        fld qword ptr [mem_0092A278]
        jmp L5
    L4:
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L6
        fld qword ptr [mem_0092A270]
        jmp L5
    L6:
        fld qword ptr [esp + 0xc]
    L5:
        fstp qword ptr [ecx + 0x8]
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je L7
        fld qword ptr [mem_0092A278]
        jmp L8
    L7:
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L9
        fld qword ptr [mem_0092A270]
        jmp L8
    L9:
        fld qword ptr [esp + 0x14]
    L8:
        fstp qword ptr [ecx + 0x10]
        fld qword ptr [esp + 0x1c]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je L10
        mov dword ptr [ecx + 0x18], 0
        mov dword ptr [ecx + 0x1c], 0
        ret 0x20
    L10:
        fld qword ptr [esp + 0x1c]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L11
        mov dword ptr [ecx + 0x18], 0
        mov dword ptr [ecx + 0x1c], 0x3ff00000
        ret 0x20
    L11:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 0x18], eax
        mov dword ptr [ecx + 0x1c], edx
        ret 0x20
    }
}

// [0x00778030] sub_00778030 (47 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00778030(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0xac]
        add esi, 0x4
        push 0xaacd0c
        mov ecx, esi
        call ext_007275F0
        push 0xe7
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0077FA70] sub_0077FA70 (64 bytes)
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" __declspec(naked) void __fastcall fn_0077FA70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je fa70_done
        push edi
        xor edi, edi
        call ext_006DC550
        test eax, eax
        jle fa70_clear
        push ebx
    fa70_loop:
        mov ecx, dword ptr [esi + 0x4]
        mov ebx, dword ptr [esi]
        push edi
        call ext_006DC510
        push eax
        mov ecx, esi
        call dword ptr [ebx + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        inc edi
        call ext_006DC550
        cmp edi, eax
        jl fa70_loop
        pop ebx
    fa70_clear:
        mov dword ptr [esi + 0x4], 0
        pop edi
    fa70_done:
        pop esi
        ret
    }
}

// [0x00779200] sub_00779200 (128 bytes)
extern "C" void ext_007279A0();
extern "C" __declspec(naked) void __fastcall fn_00779200(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        push 0xaa8e24
        mov esi, dword ptr [edi + 0xac]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0xaaba0c
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov esi, dword ptr [edi + 0xac]
        push 0xaaeb08
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0xaaba0c
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov esi, dword ptr [edi + 0xac]
        push 0xaae104
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x7c
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x007765F0] sub_007765F0 (143 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_00777EE0();
extern "C" double mem_009334D8;

extern "C" __declspec(naked) bool __fastcall fn_007765F0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [esi + 0xb0]
        mov dword ptr [esp + 0xc], eax
        inc eax
        fild dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], eax
        mov eax, dword ptr [ecx]
        fmul qword ptr [mem_009334D8]
        fidiv dword ptr [esi + 0xc0]
        fstp dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        push edx
        push 0x0
        push 0x0
        push 0x0
        call dword ptr [eax + 0x8]
        mov ebp, dword ptr [esp + 0x14]
        xor edi, edi
        push edi
        mov ecx, ebp
        call ext_006C2860
        test eax, eax
        jle L_done
        push ebx
    L_loop:
        push edi
        mov ecx, ebp
        call ext_006C28D0
        mov ebx, eax
        mov ecx, esi
        push ebx
        call ext_00777EE0
        push ebx
        mov ecx, esi
        call fn_007765F0
        push 0x0
        mov ecx, ebp
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x4
    L_done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x4
    }
}

// [0x00778160] sub_00778160 (160 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00778160(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov eax, dword ptr [eax + 0x540]
        sub eax, 0
        je L_zero_00778160
        dec eax
        je L_one_00778160
        mov esi, dword ptr [ecx + 0xac]
        dec eax
        jne L_def_00778160
        add esi, 4
        push 0xaad950
        mov ecx, esi
        call ext_007275F0
        push 0xaad928
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov al, 1
        pop esi
        ret 4
L_one_00778160:
        mov esi, dword ptr [ecx + 0xac]
        push 0xaad950
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push 0xaad934
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov al, 1
        pop esi
        ret 4
L_zero_00778160:
        mov esi, dword ptr [ecx + 0xac]
L_def_00778160:
        add esi, 4
        push 0xaad950
        mov ecx, esi
        call ext_007275F0
        push 0xaad944
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00776550] sub_00776550 (160 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_00776550();
extern "C" void ext_00778410();
extern "C" double mem_009334D8;
extern "C" int mem_00AAD264;

extern "C" __declspec(naked) bool __fastcall fn_00776550(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [esi + 0xb0]
        mov dword ptr [esp + 0xc], eax
        inc eax
        fild dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], eax
        mov eax, dword ptr [ecx]
        fmul qword ptr [mem_009334D8]
        fidiv dword ptr [esi + 0xc0]
        fstp dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        push edx
        push 0x0
        push 0x0
        push 0x0
        call dword ptr [eax + 0x8]
        mov ebp, dword ptr [esp + 0x14]
        xor edi, edi
        push edi
        mov ecx, ebp
        call ext_006C2860
        test eax, eax
        jle L_done
        push ebx
    L_loop:
        push edi
        mov ecx, ebp
        call ext_006C28D0
        mov ebx, eax
        mov eax, dword ptr [esp + 0x1c]
        push 0x0
        push offset mem_00AAD264
        push eax
        push ebx
        mov ecx, esi
        call ext_00778410
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push ebx
        mov ecx, esi
        call ext_00776550
        push 0x0
        mov ecx, ebp
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x8
    L_done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x8
    }
}

// [0x00777E30] sub_00777E30 (175 bytes)
extern "C" void ext_006BC7E0();
extern "C" void ext_006E7F90();
extern "C" void ext_006E7FB0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_00777E30(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edi
        call ext_006BC7E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad890
        add ecx, 0x4
        mov ebx, eax
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, ebx
        call ext_006E7F90
        mov edi, dword ptr [esi + 0xac]
        push 0xaad880
        add edi, 0x4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006E7FB0
        mov edi, dword ptr [esi + 0xac]
        push 0xaad86c
        add edi, 0x4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_006B9D80();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF10();
extern "C" void ext_0070CF50();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00779410();
extern "C" void ext_007796A0();
extern "C" void ext_00779860();
extern "C" void ext_00779A90();
extern "C" void ext_00779C30();
extern "C" void ext_00779F50();
extern "C" void ext_0077A1F0();
extern "C" void ext_0077BF50();
extern "C" void ext_00784620();
extern "C" void ext_00784640();

// [0x00778800] sub_00778800 (303 bytes)
extern "C" __declspec(naked) void __fastcall fn_00778800(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1290
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0xaae104
        mov esi, dword ptr [edi + 0xac]
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push 0x7c
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        push 0x14
        lea ecx, [esp + 0x10]
        call ext_00784620
        mov esi, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x28], 0
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax]
        cmp eax, 4
        jne L_skip
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov ecx, edi
        call ext_00779410
        lea edx, [esp + 0xc]
        mov ecx, edi
        push edx
        push esi
        call ext_00779A90
        lea eax, [esp + 0xc]
        mov ecx, edi
        push eax
        push esi
        call ext_00779C30
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov ecx, edi
        call ext_00779F50
    L_skip:
        lea edx, [esp + 0xc]
        mov ecx, edi
        push edx
        push esi
        call ext_007796A0
        lea eax, [esp + 0xc]
        mov ecx, edi
        push eax
        push esi
        call ext_00779860
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov ecx, edi
        call ext_0077A1F0
        mov ecx, esi
        xor ebp, ebp
        call ext_0070CF00
        test eax, eax
        jle L_done
    L_loop:
        push esi
        push ebp
        mov ecx, esi
        call ext_0070CF50
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x80], esp
        push eax
        call ext_006B9D80
        push ebp
        mov ecx, esi
        mov byte ptr [esp + 0x7c], 0
        call ext_0070CF10
        push eax
        mov ecx, edi
        call ext_0077BF50
        mov ecx, esi
        inc ebp
        call ext_0070CF00
        cmp ebp, eax
        jl L_loop
    L_done:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x28], -1
        call ext_00784640
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebp
        add esp, 0x20
        ret 4
    }
}

// [0x007745C0] sub_007745C0 (400 bytes)
extern "C" void ext_006C3250();
extern "C" void ext_006C32C0();
extern "C" void ext_006C3330();
extern "C" void ext_006D2370();
extern "C" void ext_006D80A0();
extern "C" void ext_00714570();
extern "C" void ext_00715E10();
extern "C" void ext_00716810();
extern "C" void ext_00716BA0();
extern "C" void ext_00717220();
extern "C" int mem_00B605A8;
extern "C" int mem_00B605AC;
extern "C" int mem_00B605A0;

extern "C" __declspec(naked) void __fastcall fn_007745C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8c1136
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe4
        push esi
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4], 0
        call ext_006D2370
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0xf0], 1
        call ext_006D2370
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xf0], 2
        call ext_006D2370
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xf0], 3
        call ext_00714570
        mov esi, dword ptr [esp + 0xfc]
        lea eax, [esp + 0x28]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xf4], 4
        call ext_006C3250
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006C32C0
        lea edx, [esp + 0x48]
        mov ecx, esi
        push edx
        call ext_006C3330
        lea eax, [esp + 0x28]
        lea ecx, [esp + 0x68]
        push eax
        call ext_00716810
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x6c]
        call ext_00716BA0
        lea edx, [esp + 0x48]
        lea ecx, [esp + 0x68]
        push edx
        call ext_00717220
        mov esi, dword ptr [esp + 0xf8]
        lea eax, [esp + 0x68]
        push eax
        mov ecx, esi
        call ext_00715E10
        mov dword ptr [esp + 0x4], 1
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xf0], 3
        call ext_006D80A0
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xf0], 2
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xf0], 1
        call ext_006D80A0
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xf0], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xe8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xf0
        ret 8
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
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B605A8], ecx
        mov dword ptr [mem_00B605AC], edx
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
        fstp qword ptr [mem_00B605A0]
        ret
    }
}
