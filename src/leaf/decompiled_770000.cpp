// Decompiled translation unit: src/leaf/decompiled_770000.cpp

extern "C" void ext_006A5C5C();
extern "C" void ext_00757180();
extern "C" void ext_007573E0();
extern "C" void ext_00776A20();
extern "C" void ext_00772040();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA260();
extern "C" void ext_006BA7C0();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006E6340();
extern "C" void ext_006E6350();
extern "C" void ext_006E7460();
extern "C" void ext_00771FC0();
extern "C" void ext_00772010();
extern "C" void ext_007ABCA0();
extern "C" int mem_00925284;
extern "C" int mem_00B60728;
extern "C" int mem_00B6072C;
extern "C" int mem_00B60720;
extern "C" int mem_00925240;
extern "C" void ext_006B9950();
extern "C" void ext_00725F40();

extern "C" void ext_00725F40();
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
extern "C" void ext_00754FA0();
extern "C" void ext_007721B0();

extern "C" void ext_007721B0();
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
extern "C" void ext_00754F20();
extern "C" void ext_00784620();

extern "C" void ext_00784620();
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

// [0x007796A0] sub_007796A0 (447 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0077A740();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();
extern "C" void ext_00784650();

extern "C" __declspec(naked) unsigned char __fastcall fn_007796A0(void* self, int edx, void* arg1, void* arg2) {
    __asm {
        sub esp, 0xc
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x1c]
        push 0x2
        call ext_006FDF30
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0xc], edi
        jle L_exit_early

        push ebx
    L_outer_loop:
        mov ecx, dword ptr [esp + 0x20]
        push 0x2
        push edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006BC380
        mov ebx, eax
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        je L_outer_next

        mov ecx, dword ptr [esp + 0x24]
        push edi
        push ebx
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadbc8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 0x4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx]
        push eax
        call ext_0077F550
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov ebp, eax
        push 0xaadc2c
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 0x4]
        push eax
        call ext_0077F5A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov ebp, eax
        push 0xaadc10
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc04
        add ecx, 0x4
        call ext_007275F0
        mov ebp, dword ptr [ebx + 0x20]
        xor edi, edi
        test ebp, ebp
        jbe L_inner_done

    L_inner_loop:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, 0x2
        mov eax, dword ptr [ebx + 0x30]
        mov eax, dword ptr [eax + 4*edi]
        jne L_inner_push
        cmp eax, -0x1
        je L_inner_push
        mov ecx, dword ptr [esp + 0x20]
        push edi
        push ebx
        mov ecx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xc]
        push eax
        mov ecx, esi
        call ext_0077A740
    L_inner_push:
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00727C80
        inc edi
        cmp edi, ebp
        jb L_inner_loop

    L_inner_done:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov edi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x18]
    L_outer_next:
        inc edi
        cmp edi, ebp
        mov dword ptr [esp + 0x10], edi
        jl L_outer_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0xc
        ret 0x8

    L_exit_early:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0xc
        ret 0x8
    }
}

// [0x00771C10] sub_00771C10 (496 bytes)
extern "C" __declspec(naked) void __fastcall fn_00771C10(void* self) {
    __asm {
        push -1
        push 08c0ef8h
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0996c88h
        lea ecx, [esi + 1ch]
        mov dword ptr [esp + 10h], 0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        call ext_007ABCA0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
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
        push ebx
        lea ebx, [ecx + 1ch]
        push esi
        mov esi, dword ptr [ebx]
        test esi, esi
        je L_b_end
        push edi
L_b_loop:
        mov eax, dword ptr [ebx + 10h]
        dec esi
        mov edi, dword ptr [eax + 4*esi]
        test edi, edi
        je L_b_skip
        mov ecx, edi
        call ext_00772040
        push edi
        call ext_006A5C5C
        add esp, 4
L_b_skip:
        test esi, esi
        jne L_b_loop
        pop edi
L_b_end:
        mov ecx, ebx
        call ext_006D2250
        pop esi
        pop ebx
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
        push -1
        push 08c0f23h
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 50h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 68h]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006E6340
        mov dword ptr [esp + 70h], eax
        lea eax, [esp + 70h]
        push eax
        mov ecx, ebx
        call ext_00771FC0
        mov edi, dword ptr [esp + 70h]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 7
        jbe L_c_skip
        lea ecx, [esp + 70h]
        push 7
        push ecx
        mov ecx, ebx
        call ext_00772010
L_c_skip:
        mov eax, dword ptr [ebx + 1ch]
        lea edi, [ebx + 1ch]
        xor esi, esi
        test eax, eax
        jle L_c_after_loop
L_c_loop:
        mov eax, dword ptr [ebx + 2ch]
        mov edx, dword ptr [esp + 70h]
        push edx
        mov ecx, dword ptr [eax + 4*esi]
        call ext_006BA7C0
        test al, al
        jne L_c_found
        mov eax, dword ptr [edi]
        inc esi
        cmp esi, eax
        jl L_c_loop
L_c_after_loop:
        push 50h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 10h], esi
        test esi, esi
        mov dword ptr [esp + 68h], 1
        je L_c_null
        mov ecx, ebp
        call ext_006E6340
        push eax
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esi + 4ch], 0
        jmp L_c_call_insert
L_c_found:
        lea ecx, [esp + 14h]
        call ext_006B9D10
        mov ecx, dword ptr [ebx + 2ch]
        mov dword ptr [esp + 68h], 0
        mov eax, dword ptr [ecx + 4*esi]
        mov ecx, dword ptr [eax + 4ch]
        inc ecx
        mov dword ptr [eax + 4ch], ecx
        mov edx, dword ptr [ebx + 2ch]
        lea ecx, [esp + 14h]
        mov eax, dword ptr [edx + 4*esi]
        push eax
        call ext_006B9E60
        mov ecx, dword ptr [ebx + 2ch]
        mov edx, dword ptr [ecx + 4*esi]
        lea ecx, [esp + 14h]
        mov eax, dword ptr [edx + 4ch]
        push eax
        call ext_006BA260
        lea ecx, [esp + 14h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006E6350
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 68h], 0ffffffffh
        call ext_006B9D70
        mov al, 1
        jmp L_c_ret
L_c_null:
        xor esi, esi
L_c_call_insert:
        mov edx, dword ptr [edi]
        lea ecx, [esp + 10h]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 70h], 0ffffffffh
        mov dword ptr [esp + 18h], esi
        call ext_006D2170
        xor al, al
L_c_ret:
        mov ecx, dword ptr [esp + 60h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 5ch
        ret 4
    }
}

// [0x00774B30] sub_00774B30 (736 bytes)
extern "C" void ext_00774E10();
extern "C" void ext_00784640();
extern "C" void ext_00754FA0();
extern "C" void ext_0079BE90();
extern "C" void ext_00788C70();
extern "C" void ext_006FEFF0();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_00723640();
extern "C" void ext_00728D40();
extern "C" void ext_00728D50();
extern "C" void ext_006E7410();
extern "C" void ext_006B9D70();
extern "C" __declspec(naked) void __fastcall fn_00774B30(void* self) {
    __asm {
        push -1
        push 08c1164h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0996d20h
        mov eax, dword ptr [esi + 0ach]
        mov dword ptr [esp + 10h], 2
        test eax, eax
        je short L_774B6A
        call ext_00774E10
L_774B6A:
        lea ecx, [esi + 0d8h]
        mov byte ptr [esp + 10h], 1
        call ext_00784640
        lea ecx, [esi + 0c4h]
        mov byte ptr [esp + 10h], 0
        call ext_00784640
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        call ext_00754FA0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr fs:[0]
        push -1
        push 08c11d3h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1c0h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        jne short L_774BE3
        call ext_0079BE90
        mov dword ptr [esi + 0ach], eax
L_774BE3:
        lea ecx, [esp + 0a0h]
        call ext_006B9D10
        lea ecx, [esp + 0ech]
        mov dword ptr [esp + 1cch], 0
        call ext_006B9D10
        lea ecx, [esp + 150h]
        mov dword ptr [esp + 1cch], 1
        call ext_00788C70
        lea ecx, [esp + 16ch]
        call ext_006B9D10
        lea eax, [esp + 4]
        mov dword ptr [esp + 1cch], 2
        push eax
        mov byte ptr [esp + 0a0h], 0
        mov byte ptr [esp + 150h], 0
        mov dword ptr [esp + 1bch], 1770h
        call ext_006FEFF0
        add esp, 4
        mov ecx, dword ptr [esp + 1d4h]
        mov byte ptr [esp + 1cch], 3
        push ecx
        lea ecx, [esp + 8]
        call ext_006E7460
        lea edx, [esp + 54h]
        push eax
        push edx
        call ext_006FE2A0
        add esp, 0ch
        mov eax, dword ptr [esi + 0b8h]
        mov byte ptr [esp + 1cch], 4
        cmp eax, 1
        je short L_774C9F
        cmp eax, 2
        je short L_774C9F
        xor ecx, ecx
        jmp short L_774CA4
L_774C9F:
        mov ecx, 1
L_774CA4:
        cmp eax, 2
        lea edx, [esp + 9ch]
        sete al
        push edx
        push eax
        push ecx
        lea ecx, [esp + 5ch]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0ach]
        push eax
        add ecx, 4
        call ext_00723640
        test al, al
        jne near ptr L_774D8F
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00728D40
        test eax, eax
        je short L_774D0B
        mov ecx, dword ptr [esi + 0ach]
        cmp eax, 4
        je short L_774CFE
        add ecx, 4
        call ext_00728D50
        push eax
        push 5
        jmp short L_774D1C
L_774CFE:
        add ecx, 4
        call ext_00728D50
        push eax
        push 2
        jmp short L_774D1C
L_774D0B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00728D50
        push eax
        push 0
L_774D1C:
        lea ecx, [esi + 8]
        call ext_006E7410
        lea ecx, [esp + 50h]
        mov byte ptr [esp + 1cch], 3
        call ext_006B9D70
        lea ecx, [esp + 4]
        mov byte ptr [esp + 1cch], 2
        call ext_006B9D70
        lea ecx, [esp + 16ch]
        mov dword ptr [esp + 1cch], 5
        call ext_006B9D70
        lea ecx, [esp + 0ech]
        mov dword ptr [esp + 1cch], 6
        call ext_006B9D70
        lea ecx, [esp + 0a0h]
        mov dword ptr [esp + 1cch], 0ffffffffh
        call ext_006B9D70
        xor al, al
        jmp short L_774DF8
L_774D8F:
        lea ecx, [esp + 50h]
        mov byte ptr [esp + 1cch], 3
        call ext_006B9D70
        lea ecx, [esp + 4]
        mov byte ptr [esp + 1cch], 2
        call ext_006B9D70
        lea ecx, [esp + 16ch]
        mov dword ptr [esp + 1cch], 7
        call ext_006B9D70
        lea ecx, [esp + 0ech]
        mov dword ptr [esp + 1cch], 8
        call ext_006B9D70
        lea ecx, [esp + 0a0h]
        mov dword ptr [esp + 1cch], 0ffffffffh
        call ext_006B9D70
        mov al, 1
L_774DF8:
        mov ecx, dword ptr [esp + 1c4h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 1cch
        ret 4
    }
}


extern "C" void ext_006A7256();
extern "C" void ext_006C3FB0();
extern "C" void ext_006C9F60();
extern "C" void ext_006CD350();
extern "C" void ext_006D23F0();
extern "C" void ext_006DAB00();
extern "C" void ext_00717720();
extern "C" int mem_00993808;
extern "C" int mem_00993CA0;
extern "C" int mem_00993C88;
extern "C" int mem_009324A8;
extern "C" int mem_00993828;
extern "C" int mem_009548F0;
extern "C" int mem_0098F3E0;

// [0x00770AF0] sub_00770AF0 (1871 bytes)
__declspec(naked) void __fastcall fn_00770AF0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -01h
        push 08C0EB4h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 033Ch
        push ebx
        xor ebx, ebx
        push edi
        lea ecx, [ebp - 0130h]
        mov dword ptr [ebp - 01Ch], ebx
        mov dword ptr [ebp - 018h], ebx
        call ext_00714570
        lea ecx, [ebp - 0348h]
        mov dword ptr [ebp - 04h], ebx
        call ext_00714570
        lea ecx, [ebp - 02C8h]
        mov byte ptr [ebp - 04h], 01h
        call ext_00714570
        lea ecx, [ebp - 0238h]
        mov byte ptr [ebp - 04h], 02h
        call ext_00714570
        lea ecx, [ebp - 07Ch]
        mov byte ptr [ebp - 04h], 03h
        call ext_006D2370
        lea ecx, [ebp - 01A8h]
        mov byte ptr [ebp - 04h], 04h
        mov dword ptr [ebp - 01A0h], ebx
        mov dword ptr [ebp - 019Ch], ebx
        call ext_006C9F60
        lea ecx, [ebp - 0158h]
        mov dword ptr [ebp - 0150h], ebx
        mov dword ptr [ebp - 014Ch], ebx
        call ext_006C9F60
        lea ecx, [ebp - 0180h]
        mov dword ptr [ebp - 0178h], ebx
        mov dword ptr [ebp - 0174h], ebx
        call ext_006C9F60
        mov eax, dword ptr [ebp + 01Ch]
        xor edi, edi
        cmp eax, ebx
        jbe L_7711E1
        lea eax, [ebp - 03Ch]
        lea ecx, [ebp - 034h]
        mov dword ptr [ebp - 08Ch], eax
        mov eax, dword ptr [ebp + 0Ch]
        mov dword ptr [ebp - 090h], ecx
        mov ecx, dword ptr [ebp + 08h]
        lea edx, [ebp - 024h]
        add eax, 0Ch
        push esi
        mov dword ptr [ebp - 080h], edx
        mov dword ptr [ebp + 0Ch], eax
        lea esi, [ecx + 08h]
L_770BD9:
        push 06h
        push ebx
        push ebx
        push edi
        push ebx
        push ebx
        push ebx
        lea ecx, [ebp - 01Ch]
        call ext_006DAB00
        mov edx, dword ptr [ebp - 018h]
        mov eax, dword ptr [ebp - 01Ch]
        mov ecx, dword ptr [ebp + 010h]
        push ebx
        push edx
        push eax
        call ext_006CD350
        fstp qword ptr [ebp - 014h]
        push ebx
        lea ecx, [ebp - 07Ch]
        call ext_006D23F0
        mov ecx, dword ptr [ebp - 014h]
        mov edx, dword ptr [ebp - 010h]
        mov dword ptr [eax], ecx
        push ebx
        mov dword ptr [eax + 04h], edx
        mov eax, dword ptr [ebp - 018h]
        mov ecx, dword ptr [ebp - 01Ch]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 014h]
        call ext_006CD350
        fstp qword ptr [ebp - 014h]
        push 01h
        lea ecx, [ebp - 07Ch]
        call ext_006D23F0
        mov edx, dword ptr [ebp - 014h]
        mov ecx, dword ptr [ebp - 010h]
        mov dword ptr [eax], edx
        push ebx
        mov dword ptr [eax + 04h], ecx
        mov edx, dword ptr [ebp - 018h]
        mov eax, dword ptr [ebp - 01Ch]
        mov ecx, dword ptr [ebp + 018h]
        push edx
        push eax
        call ext_006CD350
        fstp qword ptr [ebp - 014h]
        push 02h
        lea ecx, [ebp - 07Ch]
        call ext_006D23F0
        mov ecx, dword ptr [ebp - 014h]
        mov edx, dword ptr [ebp - 010h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 04h], edx
        mov eax, dword ptr [ebp - 06Ch]
        fld qword ptr [ebp - 07Ch]
        mov ecx, dword ptr [ebp - 068h]
        mov edx, dword ptr [ebp - 074h]
        mov dword ptr [esi - 08h], edi
        mov word ptr [esi - 04h], 07h
        fmul qword ptr [mem_00993808]
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 04h], ebx
        mov dword ptr [ebp - 098h], eax
        mov eax, dword ptr [ebp - 070h]
        mov dword ptr [esi + 08h], ebx
        mov dword ptr [esi + 0Ch], ebx
        fstp qword ptr [ebp - 02Ch]
        mov dword ptr [esi + 010h], ebx
        mov dword ptr [ebp - 094h], ecx
        mov dword ptr [ebp - 0A8h], edx
        mov dword ptr [ebp - 0A4h], eax
        fld qword ptr [ebp - 02Ch]
        fsincos
        mov eax, dword ptr [ebp - 08Ch]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 01B0h]
        fld qword ptr [ebp - 01B0h]
        fstp qword ptr [ebp - 088h]
        fld qword ptr [ebp - 0A8h]
        fmul qword ptr [mem_00993808]
        fstp qword ptr [ebp - 02Ch]
        fld qword ptr [ebp - 02Ch]
        fsincos
        mov eax, dword ptr [ebp - 090h]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0240h]
        fld qword ptr [ebp - 0240h]
        fstp qword ptr [ebp - 014h]
        fld qword ptr [ebp - 098h]
        fmul qword ptr [mem_00993808]
        fstp qword ptr [ebp - 02Ch]
        fld qword ptr [ebp - 02Ch]
        fsincos
        mov eax, dword ptr [ebp - 080h]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0248h]
        fld qword ptr [ebp - 0248h]
        fld qword ptr [ebp - 088h]
        fld qword ptr [ebp - 014h]
        fmul st, st(1)
        fld qword ptr [ebp - 014h]
        fmul qword ptr [ebp - 03Ch]
        fstp qword ptr [ebp - 02Ch]
        fld qword ptr [ebp - 024h]
        fmul qword ptr [ebp - 034h]
        fstp qword ptr [ebp - 0348h]
        fld st(2)
        fmul qword ptr [ebp - 034h]
        fstp qword ptr [ebp - 0340h]
        fld qword ptr [ebp - 014h]
        fchs
        fstp qword ptr [ebp - 0338h]
        fld st(0)
        fmul qword ptr [ebp - 024h]
        fld st(3)
        fmul qword ptr [ebp - 03Ch]
        fsubp st(1), st
        fstp qword ptr [ebp - 0328h]
        fmul st, st(2)
        fld qword ptr [ebp - 024h]
        fmul qword ptr [ebp - 03Ch]
        faddp st(1), st
        fstp qword ptr [ebp - 0320h]
        fld qword ptr [ebp - 034h]
        fmul st, st(1)
        fstp qword ptr [ebp - 0318h]
        fld qword ptr [ebp - 02Ch]
        fmul qword ptr [ebp - 024h]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fstp qword ptr [ebp - 0308h]
        fld qword ptr [ebp - 02Ch]
        fmul st, st(2)
        fld qword ptr [ebp - 024h]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [ebp - 0300h]
        fstp st(0)
        fstp st(0)
        fld qword ptr [ebp - 034h]
        fmul qword ptr [ebp - 03Ch]
        fstp qword ptr [ebp - 02F8h]
        fld qword ptr [ebp - 0120h]
        fmul qword ptr [ebp - 0120h]
        fld qword ptr [ebp - 0128h]
        fmul qword ptr [ebp - 0128h]
        faddp st(1), st
        fld qword ptr [ebp - 0130h]
        fmul qword ptr [ebp - 0130h]
        faddp st(1), st
        fdivr qword ptr [mem_0092A270]
        fld qword ptr [ebp - 0100h]
        fmul qword ptr [ebp - 0100h]
        fld qword ptr [ebp - 0108h]
        fmul qword ptr [ebp - 0108h]
        faddp st(1), st
        fld qword ptr [ebp - 0110h]
        fmul qword ptr [ebp - 0110h]
        faddp st(1), st
        fdivr qword ptr [mem_0092A270]
        fst qword ptr [ebp - 088h]
        fld qword ptr [ebp - 0E0h]
        fmul qword ptr [ebp - 0E0h]
        fld qword ptr [ebp - 0E8h]
        fmul qword ptr [ebp - 0E8h]
        faddp st(1), st
        fld qword ptr [ebp - 0F0h]
        fmul qword ptr [ebp - 0F0h]
        lea ecx, [ebp - 0238h]
        lea edx, [ebp - 0348h]
        push ecx
        lea eax, [ebp - 02C8h]
        faddp st(1), st
        push edx
        push eax
        fdivr qword ptr [mem_0092A270]
        fstp qword ptr [ebp - 014h]
        fld qword ptr [ebp - 0128h]
        fmul st, st(2)
        fstp qword ptr [ebp - 0218h]
        fld qword ptr [ebp - 0120h]
        fmul st, st(2)
        fstp qword ptr [ebp - 01F8h]
        fld qword ptr [ebp - 0100h]
        fmul st, st(1)
        fstp qword ptr [ebp - 01F0h]
        fld qword ptr [ebp - 0110h]
        fmul st, st(1)
        fstp qword ptr [ebp - 0230h]
        fstp st(0)
        fld qword ptr [ebp - 0F0h]
        fmul qword ptr [ebp - 014h]
        fstp qword ptr [ebp - 0228h]
        fld qword ptr [ebp - 0E8h]
        fmul qword ptr [ebp - 014h]
        fstp qword ptr [ebp - 0208h]
        fld qword ptr [ebp - 0130h]
        fmul st, st(1)
        fstp qword ptr [ebp - 0238h]
        fstp st(0)
        fld qword ptr [ebp - 0108h]
        fmul qword ptr [ebp - 088h]
        fstp qword ptr [ebp - 0210h]
        fld qword ptr [ebp - 0E0h]
        fmul qword ptr [ebp - 014h]
        fstp qword ptr [ebp - 01E8h]
        fld qword ptr [ebp - 0D0h]
        fchs
        fld qword ptr [ebp - 0C8h]
        fchs
        fld qword ptr [ebp - 0C0h]
        fchs
        fld qword ptr [ebp - 01E8h]
        fmul st, st(1)
        fld qword ptr [ebp - 0208h]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [ebp - 0228h]
        fmul st, st(4)
        faddp st(1), st
        fstp qword ptr [ebp - 01C8h]
        fld qword ptr [ebp - 01F8h]
        fmul st, st(1)
        fld qword ptr [ebp - 0218h]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [ebp - 0238h]
        fmul st, st(4)
        faddp st(1), st
        fstp qword ptr [ebp - 01D8h]
        fld qword ptr [ebp - 0210h]
        fmul st, st(2)
        fld qword ptr [ebp - 01F0h]
        fmul st, st(2)
        faddp st(1), st
        fld qword ptr [ebp - 0230h]
        fmul st, st(4)
        faddp st(1), st
        fstp qword ptr [ebp - 01D0h]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call ext_006C3FB0
        fld qword ptr [ebp - 0278h]
        add esp, 0Ch
        fadd qword ptr [ebp - 02A0h]
        fld st(0)
        fadd qword ptr [ebp - 02C8h]
        fadd qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993CA0]
        fst qword ptr [ebp - 02Ch]
        fcomp qword ptr [mem_00993C88]
        fnstsw ax
        test ah, 041h
        jne L_770FE7
        fstp st(0)
        fld qword ptr [ebp - 02Ch]
        fsqrt
        fst qword ptr [ebp - 044h]
        fdivr qword ptr [mem_00993CA0]
        fld qword ptr [ebp - 0298h]
        fsub qword ptr [ebp - 0280h]
        fmul st, st(1)
        fstp qword ptr [ebp - 05Ch]
        fld qword ptr [ebp - 0288h]
        fsub qword ptr [ebp - 02B8h]
        fmul st, st(1)
        fstp qword ptr [ebp - 054h]
        fld qword ptr [ebp - 02C0h]
        fsub qword ptr [ebp - 02A8h]
        fmul st, st(1)
        fstp qword ptr [ebp - 04Ch]
        fstp st(0)
        jmp L_771098
L_770FE7:
        fmul qword ptr [mem_009324A8]
        mov dword ptr [ebp - 044h], 00h
        mov dword ptr [ebp - 040h], 00h
        fld st(0)
        fcomp qword ptr [mem_00993C88]
        fnstsw ax
        test ah, 041h
        jne L_77102F
        fsqrt
        fst qword ptr [ebp - 05Ch]
        fdivr qword ptr [mem_00993828]
        fld qword ptr [ebp - 02C0h]
        fmul st, st(1)
        fstp qword ptr [ebp - 054h]
        fld qword ptr [ebp - 02B8h]
        fmul st, st(1)
        fstp qword ptr [ebp - 04Ch]
        fstp st(0)
        jmp L_771098
L_77102F:
        fstp st(0)
        fld qword ptr [mem_0092A270]
        fsub qword ptr [ebp - 0278h]
        mov dword ptr [ebp - 05Ch], 00h
        mov dword ptr [ebp - 058h], 00h
        fmul qword ptr [mem_00993828]
        fld st(0)
        fcomp qword ptr [mem_00993C88]
        fnstsw ax
        test ah, 041h
        jne L_77107A
        fsqrt
        fst qword ptr [ebp - 054h]
        fdivr qword ptr [mem_00993828]
        fld qword ptr [ebp - 0298h]
        fmul st, st(1)
        fstp qword ptr [ebp - 04Ch]
        fstp st(0)
        jmp L_771098
L_77107A:
        fstp st(0)
        mov dword ptr [ebp - 054h], 00h
        mov dword ptr [ebp - 050h], 00h
        mov dword ptr [ebp - 04Ch], 00h
        mov dword ptr [ebp - 048h], 03FF00000h
L_771098:
        lea ecx, [ebp - 0348h]
        push ecx
        lea ecx, [ebp - 0130h]
        call ext_00717720
        mov edx, dword ptr [ebp - 04Ch]
        mov eax, dword ptr [ebp - 048h]
        mov ecx, dword ptr [ebp - 054h]
        mov dword ptr [ebp - 0B0h], edx
        mov edx, dword ptr [ebp - 050h]
        mov dword ptr [ebp - 0ACh], eax
        mov dword ptr [ebp - 0A0h], ecx
        mov dword ptr [ebp - 09Ch], edx
        fld qword ptr [ebp - 05Ch]
        fmul st(0), st
        fld qword ptr [ebp - 0A0h]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0B0h]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 01B8h]
        fld qword ptr [ebp - 01B8h]
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 040h
        je L_771128
        fstp st(0)
        fld qword ptr [mem_0092A278]
        mov dword ptr [ebp - 054h], 00h
        mov dword ptr [ebp - 050h], 00h
        mov dword ptr [ebp - 04Ch], 00h
        mov dword ptr [ebp - 048h], 00h
        jmp L_77114D
L_771128:
        fld qword ptr [mem_0092A270]
        fdiv st, st(1)
        fstp qword ptr [ebp - 014h]
        fstp st(0)
        fld qword ptr [ebp - 014h]
        fmul qword ptr [ebp - 05Ch]
        fld qword ptr [ebp - 014h]
        fmul qword ptr [ebp - 054h]
        fstp qword ptr [ebp - 054h]
        fld qword ptr [ebp - 014h]
        fmul qword ptr [ebp - 04Ch]
        fstp qword ptr [ebp - 04Ch]
L_77114D:
        mov eax, dword ptr [ebp + 0Ch]
        fstp dword ptr [eax - 08h]
        fld qword ptr [ebp - 04Ch]
        fchs
        fstp dword ptr [eax - 04h]
        fld qword ptr [ebp - 054h]
        fstp dword ptr [eax]
        fld qword ptr [ebp - 044h]
        call ext_006A7256
        fmul qword ptr [mem_009548F0]
        mov ecx, dword ptr [ebp + 0Ch]
        fstp dword ptr [ebp + 08h]
        mov eax, dword ptr [ebp + 08h]
        mov dword ptr [ecx - 0Ch], eax
        fld dword ptr [ecx - 08h]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 01h
        je L_7711CB
        fld dword ptr [ecx - 04h]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 01h
        je L_7711CB
        fld dword ptr [ecx]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 01h
        je L_7711CB
        fld dword ptr [ebp + 08h]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 01h
        je L_7711CB
        mov dword ptr [ecx - 08h], 0BF800000h
        mov dword ptr [ecx - 0Ch], ebx
L_7711CB:
        mov eax, dword ptr [ebp + 01Ch]
        inc edi
        add esi, 01Ch
        add ecx, 010h
        cmp edi, eax
        mov dword ptr [ebp + 0Ch], ecx
        jb L_770BD9
        pop esi
L_7711E1:
        lea ecx, [ebp - 07Ch]
        mov byte ptr [ebp - 04h], 03h
        call ext_006D80A0
        lea ecx, [ebp - 0238h]
        mov byte ptr [ebp - 04h], 02h
        call ext_006D80A0
        lea ecx, [ebp - 02C8h]
        mov byte ptr [ebp - 04h], 01h
        call ext_006D80A0
        lea ecx, [ebp - 0348h]
        mov byte ptr [ebp - 04h], bl
        call ext_006D80A0
        lea ecx, [ebp - 0130h]
        mov dword ptr [ebp - 04h], 0FFFFFFFFh
        call ext_006D80A0
        mov ecx, dword ptr [ebp - 0Ch]
        pop edi
        mov al, 01h
        pop ebx
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret 018h
    }
}

// [0x00778D50] sub_00778D50 (16 bytes)
extern "C" void ext_00778930();
extern "C" __declspec(naked) void __stdcall fn_00778D50(int a1) {
    __asm {
        mov eax, [esp + 4]
        push eax
        call ext_00778930
        ret 4
    }
}

// [0x0077CB00] sub_0077CB00 (16 bytes)
extern "C" void ext_0077CAE0();
extern "C" __declspec(naked) void __stdcall fn_0077CB00(int a1) {
    __asm {
        mov eax, [esp + 4]
        push eax
        call ext_0077CAE0
        ret 4
    }
}

// [0x0077F010] sub_0077F010 (16 bytes)
extern "C" void ext_00775990();
extern "C" __declspec(naked) void __stdcall fn_0077F010(int a1) {
    __asm {
        mov eax, [esp + 4]
        push eax
        call ext_00775990
        ret 4
    }
}

// [0x0077FAF0] sub_0077FAF0 (32 bytes)
extern "C" void __fastcall fn_0077FAF0(int* self, int edx_unused, int a, int b, int c, int d) {
    self[0] = a;
    self[1] = b;
    self[2] = c;
    self[3] = d;
}

// [0x0077FF70] sub_0077FF70 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_0077FF70(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x4]
        shl ecx, 0x4
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [edx + ecx]
        ret 0x4
    }
}

// [0x0077FF90] sub_0077FF90 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077FF90(void* self) {
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0xc1
        _emit 0xe1
        _emit 0x04
        _emit 0xdd
        _emit 0x5c
        _emit 0x0a
        _emit 0x08
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// [0x0077FFB0] sub_0077FFB0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077FFB0(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x4]
        shl ecx, 0x4
        mov edx, dword ptr [eax + 0x4]
        fld qword ptr [edx + ecx + 0x8]
        ret 0x8
    }
}

// [0x0077FAC0] sub_0077FAC0 (32 bytes)
extern "C" void ext_0074AE20();

// [0x0077FAC0]
extern "C" __declspec(naked) void* __fastcall fn_0077FAC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_0074AE20
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0077CAE0] sub_0077CAE0 (32 bytes)
extern "C" __declspec(naked) void __stdcall fn_0077CAE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        je short L_0077CAF4
        push eax
        call ext_00778930
        ret 0x4
L_0077CAF4:
        xor al, al
        ret 0x4
    }
}

// [0x0077FE50] sub_0077FE50 (32 bytes)
extern "C" void ext_007802A0();
extern "C" __declspec(naked) void __cdecl fn_0077FE50(int index) {
    __asm {
        call ext_007802A0
        mov ecx, dword ptr [esp + 0x4]
        lea edx, [ecx + 8*ecx]
        lea ecx, [ecx + 2*edx]
        mov edx, dword ptr [eax + 0x4]
        shl ecx, 0x4
        lea eax, [edx + ecx + 0x4]
        ret
    }
}

// [0x0077FE90] sub_0077FE90 (32 bytes)
extern "C" __declspec(naked) int __cdecl fn_0077FE90(int idx) {
    __asm {
        call ext_007802A0
        mov ecx, dword ptr [esp + 0x4]
        lea edx, [ecx + 8*ecx]
        lea ecx, [ecx + 2*edx]
        mov edx, dword ptr [eax + 0x4]
        shl ecx, 0x4
        mov eax, dword ptr [edx + ecx + 0x104]
        ret
    }
}

// [0x0077FEB0] sub_0077FEB0 (32 bytes)
extern "C" void ext_007802A0();
extern "C" __declspec(naked) double __cdecl fn_0077FEB0(int index) {
    __asm {
        call ext_007802A0
        mov ecx, dword ptr [esp + 0x4]
        lea edx, [ecx + 8*ecx]
        lea ecx, [ecx + 2*edx]
        mov edx, dword ptr [eax + 0x4]
        shl ecx, 0x4
        fld qword ptr [edx + ecx + 0x110]
        ret
    }
}

// [0x0077FED0] sub_0077FED0 (32 bytes)
extern "C" void ext_007802A0();
extern "C" __declspec(naked) double __cdecl fn_0077FED0(int index) {
    __asm {
        call ext_007802A0
        mov ecx, dword ptr [esp + 0x4]
        lea edx, [ecx + 8*ecx]
        lea ecx, [ecx + 2*edx]
        mov edx, dword ptr [eax + 0x4]
        shl ecx, 0x4
        fld qword ptr [edx + ecx + 0x118]
        ret
    }
}

// [0x0077FE20] sub_0077FE20 (32 bytes)
extern "C" void __fastcall ext_00780250(void* self);
extern "C" void __fastcall fn_0077FE20(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_00780250(p);
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
}

// [0x0077FE70] sub_0077FE70 (32 bytes)
extern "C" void ext_00780160();
extern "C" void ext_007802A0();
extern "C" __declspec(naked) void __cdecl fn_0077FE70(void* a) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_007802A0
        mov ecx, eax
        call ext_00780160
        ret
    }
}

// [0x00772010] sub_00772010 (48 bytes)
extern "C" int mem_009252D0;

extern "C" __declspec(naked) void __stdcall fn_00772010(void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        push edi
        push eax
        push eax
        call dword ptr [mem_009252D0]
        mov eax, dword ptr [esi]
        add esp, 0xc
        mov byte ptr [eax + edi], 0x0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x8
    }
}

// [0x0077F520] sub_0077F520 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077F520(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        test eax, eax
        je zero_path
        mov eax, dword ptr [eax + 0x14]
        mov dword ptr [ecx + 0x8], 0xffffffff
        mov dword ptr [ecx + 0x4], eax
        ret
    zero_path:
        xor eax, eax
        mov dword ptr [ecx + 0x8], 0xffffffff
        mov dword ptr [ecx + 0x4], eax
        ret
    }
}

// [0x0077F5A0] sub_0077F5A0 (48 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0077F5A0(int idx) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xaaf03c
        sub ecx, 0
        je L_zero
        dec ecx
        je L_one
        dec ecx
        jne L_ret
        mov eax, 0xaae5b0
        ret
    L_one:
        mov eax, 0xaae5c0
        ret
    L_zero:
        mov eax, 0xaaf03c
    L_ret:
        ret
    }
}

// [0x0077F620] sub_0077F620 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077F620(void* self, int edx_unused, unsigned int* dst, int idx) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        shl esi, 0x5
        add esi, eax
        mov eax, dword ptr [esp + 0x10]
        mov ecx, 0x8
        mov edi, eax
        rep movsd
        pop edi
        mov dword ptr [esp + 0x4], 0x0
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0077FB10] sub_0077FB10 (48 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0077FB10(void* self, int edx_unused, void* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld qword ptr [edx]
        fcomp qword ptr [ecx]
        fnstsw ax
        test ah, 0x40
        je L_77FB10_ne
        fld qword ptr [edx + 0x8]
        fcomp qword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x40
        je L_77FB10_ne
        xor eax, eax
        ret 0x4
    L_77FB10_ne:
        mov eax, 0x1
        ret 0x4
    }
}

// [0x0077FB40] sub_0077FB40 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077FB40(void* self) {
    __asm {
        mov eax, ecx
        xor edx, edx
        mov ecx, 0x3ff00000
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0x10], edx
        mov dword ptr [eax + 0x18], edx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], ecx
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
        nop
    }
}

// [0x0077BF20] sub_0077BF20 (48 bytes)
extern "C" void ext_00727FE0();

extern "C" __declspec(naked) void __fastcall fn_0077BF20(void* self, int edx_unused, int* pairs, int count) {
    // Loop over 8-byte (a, b) pairs, calling sub_00727FE0 on self with each pair.
    // Callee is __thiscall with ret 8, so it cleans its own stack args.
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebx, ecx
        test edi, edi
        jbe done_77bf46
        push esi
        mov esi, dword ptr [esp + 0x10]
    loop_77bf31:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        mov ecx, ebx
        call ext_00727FE0
        add esi, 0x8
        dec edi
        jne loop_77bf31
        pop esi
    done_77bf46:
        pop edi
        pop ebx
        ret 0x8
    }
}

// [0x00777FC0] sub_00777FC0 (48 bytes)
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00777FC0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x007769F0] sub_007769F0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007769F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_007573E0
        push edi
        mov ecx, esi
        call ext_00757180
        push edi
        mov ecx, esi
        call ext_00776A20
        pop edi
        pop esi
        ret 4
    }
}

// [0x00777EE0] sub_00777EE0 (48 bytes)
extern "C" void ext_00777F10();
extern "C" void ext_00777FF0();
extern "C" void ext_00777FC0();
extern "C" __declspec(naked) void __fastcall fn_00777EE0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_00777F10
        push edi
        mov ecx, esi
        call ext_00777FF0
        push edi
        mov ecx, esi
        call ext_00777FC0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0077F4E0] sub_0077F4E0 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_0077F4E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        inc eax
        mov dword ptr [ecx + 0x8], eax
        js short L_fail
        cmp eax, dword ptr [ecx + 0x4]
        jge short L_fail
        mov ecx, dword ptr [ecx]
        lea eax, [eax + 2*eax]
        mov edx, dword ptr [ecx + 0x10]
        lea ecx, [edx + 4*eax]
        mov eax, dword ptr [edx + 4*eax + 0x4]
        test eax, eax
        je short L_fail
        mov edx, dword ptr [eax]
        push esi
        mov esi, dword ptr [ecx]
        cmp edx, esi
        pop esi
        jne short L_fail
        mov eax, dword ptr [eax + 0x4]
        ret
    L_fail:
        xor eax, eax
        ret
    }
}

// [0x0077FD70] sub_0077FD70 (64 bytes)
extern "C" void ext_0077FC70();

extern "C" __declspec(naked) void __fastcall fn_0077FD70(void* self, int edx_unused, void* p) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x1c]
        mov edx, dword ptr [eax + 0x18]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [eax + 0x10]
        push ecx
        mov ecx, dword ptr [eax + 0xc]
        push edx
        mov edx, dword ptr [eax + 0x8]
        push ecx
        mov ecx, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [eax]
        push ecx
        push edx
        mov ecx, esi
        call ext_0077FC70
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0077FA30] sub_0077FA30 (64 bytes)
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();

extern "C" __declspec(naked) void __fastcall fn_0077FA30(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov ecx, ebx
        mov dword ptr [edi + 0x4], ebx
        call ext_006DC550
        test eax, eax
        jle fn77_done
        push ebp
fn77_loop:
        mov ebp, dword ptr [edi]
        push esi
        mov ecx, ebx
        call ext_006DC510
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0x10]
        mov ecx, ebx
        inc esi
        call ext_006DC550
        cmp esi, eax
        jl fn77_loop
        pop ebp
fn77_done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0077EA70] sub_0077EA70 (64 bytes)
extern "C" void ext_00715550();
extern "C" void ext_006BC440();
extern "C" void ext_0077EAB0();

extern "C" __declspec(naked) void __fastcall fn_0077EA70(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_00715550
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006BC440
        push eax
        mov ecx, ebx
        call ext_0077EAB0
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00777FF0] sub_00777FF0 (64 bytes)
extern "C" void ext_0075B430();
extern "C" void ext_00778030();
extern "C" void ext_00778060();
extern "C" void ext_00778160();
extern "C" void ext_00778200();
extern "C" void ext_00778380();

extern "C" __declspec(naked) bool __fastcall fn_00777FF0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        mov esi, ecx
        push edi
        call ext_00778030
        push edi
        mov ecx, esi
        call ext_00778380
        push edi
        mov ecx, esi
        call ext_0075B430
        push edi
        mov ecx, esi
        call ext_00778060
        push edi
        mov ecx, esi
        call ext_00778160
        push edi
        mov ecx, esi
        call ext_00778200
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x0077EB80] sub_0077EB80 (64 bytes)
extern "C" void ext_006BC3F0();
extern "C" void ext_006BC410();
extern "C" void ext_0077EBC0();
extern "C" __declspec(naked) void fn_0077EB80() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov ebx, ecx
        push edi
        push 0
        mov ecx, ebp
        call ext_006BC3F0
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle L0077EB80_done
L0077EB80_loop:
        push 0
        push esi
        mov ecx, ebp
        call ext_006BC410
        push eax
        mov ecx, ebx
        call ext_0077EBC0
        inc esi
        cmp esi, edi
        jl L0077EB80_loop
L0077EB80_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077A840] sub_0077A840 (64 bytes)
extern "C" int __fastcall ext_006D7A90(void* a);
extern "C" void __fastcall ext_00760070(void* self, int edx_unused, void* a);
extern "C" void __fastcall ext_00778800(void* self, int edx_unused, void* a);
extern "C" void __fastcall ext_00779280(void* self, int edx_unused, void* a);

extern "C" __declspec(naked) bool __fastcall fn_0077A840(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0Ch]
        mov esi, ecx
        mov ecx, edi
        call ext_006D7A90
        test eax, eax
        je done
        push edi
        mov ecx, esi
        call ext_00779280
        push edi
        mov ecx, esi
        call ext_00760070
        push edi
        mov ecx, esi
        call ext_00778800
done:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00771FC0] sub_00771FC0 (80 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00771FC0(void* self, int edx_unused, char** a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push 0xaa870c
        mov eax, dword ptr [ebx]
        push eax
        call dword ptr [mem_00925240]
        add esp, 8
        test eax, eax
        je not_found
        push esi
        push edi
        lea edi, [eax + 2]
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov al, 1
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebx]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret 4
    not_found:
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x0077D910] sub_0077D910 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077D910(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xb4]
        cmp byte ptr [eax + 0x158], 1
        jne done
        lea ecx, [eax + 0x15c]
        call ext_006B9950
        test al, al
        jne done
        mov ecx, dword ptr [esi + 0xb4]
        add ecx, 0x15c
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00725F40
done:
        pop esi
        ret
    }
}

// [0x0077E710] sub_0077E710 (80 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006D55F0();
extern "C" void ext_006E8E20();
extern "C" void ext_0077E760();

extern "C" __declspec(naked) void __fastcall fn_0077E710(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006D55F0
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8E20
        push eax
        mov ecx, ebx
        call ext_0077E760
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077CB10] sub_0077CB10 (80 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006C9FD0();
extern "C" void ext_006E9000();
extern "C" void ext_0077CB60();
extern "C" __declspec(naked) void __fastcall fn_0077CB10(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9FD0
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9000
        push eax
        mov ecx, ebx
        call ext_0077CB60
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x0077E830] sub_0077E830 (80 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006C9FD0();
extern "C" void ext_006E9000();
extern "C" void ext_0077E880();

extern "C" __declspec(naked) void __fastcall fn_0077E830(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9FD0
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9000
        push eax
        mov ecx, ebx
        call ext_0077E880
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077E950] sub_0077E950 (80 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006C9360();
extern "C" void ext_006E91E0();
extern "C" void ext_0077E9A0();

extern "C" __declspec(naked) void __fastcall fn_0077E950(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9360
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E91E0
        push eax
        mov ecx, ebx
        call ext_0077E9A0
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077E5D0] sub_0077E5D0 (80 bytes)
extern "C" void ext_006BC370();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_0077E620();
extern "C" __declspec(naked) void __fastcall fn_0077E5D0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov ebx, ecx
        push edi
        push 0
        mov ecx, ebp
        call ext_006BC370
        mov ecx, eax
        call ext_006C2860
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
    loop_top:
        push esi
        mov ecx, ebp
        call ext_006BC370
        mov ecx, eax
        call ext_006C28D0
        push eax
        mov ecx, ebx
        call ext_0077E620
        inc esi
        cmp esi, edi
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077FFD0] sub_0077FFD0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077FFD0(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x110], ecx
        mov dword ptr [eax + 0x118], ecx
        mov dword ptr [eax + 0x128], ecx
        mov dword ptr [eax], 0xffffffff
        mov byte ptr [eax + 0x4], cl
        mov dword ptr [eax + 0x104], ecx
        mov dword ptr [eax + 0x108], ecx
        mov dword ptr [eax + 0x10c], ecx
        mov dword ptr [eax + 0x114], ecx
        mov dword ptr [eax + 0x11c], ecx
        mov dword ptr [eax + 0x124], ecx
        mov dword ptr [eax + 0x12c], ecx
        mov byte ptr [eax + 0x120], cl
        mov byte ptr [eax + 0x121], cl
        ret
    }
}

// [0x00774560] sub_00774560 (96 bytes)
extern "C" void ext_006D2A30();
extern "C" __declspec(naked) void __stdcall fn_00774560(void* self, double d) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, esi
        call ext_006D2A30
        fld qword ptr [esp + 0xc]
        fadd qword ptr [eax]
        mov ecx, esi
        fstp qword ptr [eax]
        call ext_006D2A30
        fld qword ptr [esp + 0xc]
        fadd qword ptr [eax + 0x28]
        add eax, 0x28
        mov ecx, esi
        fstp qword ptr [eax]
        call ext_006D2A30
        fld qword ptr [esp + 0xc]
        fadd qword ptr [eax + 0x50]
        add eax, 0x50
        mov ecx, esi
        fstp qword ptr [eax]
        call ext_006D2A30
        fld qword ptr [esp + 0xc]
        fadd qword ptr [eax + 0x78]
        add eax, 0x78
        pop esi
        fstp qword ptr [eax]
        ret 0xc
    }
}

// [0x0077FDB0] sub_0077FDB0 (112 bytes)
extern "C" void ext_007801D0();
extern "C" __declspec(naked) void __fastcall fn_0077FDB0(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xDB
        _emit 0x8F
        _emit 0x8B
        _emit 0x00
        _emit 0x64
        _emit 0xA1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push 8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je skip
        mov ecx, eax
        call ext_007801D0
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 4]
        _emit 0x64
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    skip:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        _emit 0x64
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x00776A20] sub_00776A20 (112 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006E8810();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_00776A90();
extern "C" __declspec(naked) void __fastcall fn_00776A20(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        mov esi, ecx
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8810
        test eax, eax
        jle skip
        mov ecx, dword ptr [esi + 0ACh]
        push 0AAD494h
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, esi
        call ext_00776A90
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_007283B0
    skip:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0077FEF0] sub_0077FEF0 (128 bytes)
extern "C" void ext_0077FE90();
extern "C" __declspec(naked) void __fastcall fn_0077FEF0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        push esi
        call ext_0077FE90
        add esp, 4
        cmp eax, 1
        jne l_not1
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jl l_done
        cmp eax, 2
        jge l_done
        mov ecx, dword ptr [edi]
        pop edi
        shl esi, 4
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [edx + esi], eax
        pop esi
        ret 8
    l_not1:
        cmp eax, 2
        jne l_not2
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jl l_done
        cmp eax, 3
        jge l_done
        mov ecx, dword ptr [edi]
        pop edi
        shl esi, 4
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [edx + esi], eax
        pop esi
        ret 8
    l_not2:
        cmp eax, 3
        jne l_done
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jl l_done
        cmp eax, 2
        jge l_done
        mov ecx, dword ptr [edi]
        shl esi, 4
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [edx + esi], eax
    l_done:
        pop edi
        pop esi
        ret 8
    }
}

// [0x0077A7C0] sub_0077A7C0 (128 bytes)
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" void ext_007021F0();
extern "C" __declspec(naked) void __fastcall fn_0077A7C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 12]
        push esi
        mov ecx, dword ptr [eax + 48]
        push edi
        mov ecx, dword ptr [ecx + 4*edx]
        mov edx, dword ptr [eax + 24]
        mov esi, dword ptr [edx + 4*ecx]
        call ext_007021F0
        push eax
        call ext_006FC6E0
        mov ecx, dword ptr [esp + 16]
        add esp, 4
        push eax
        call ext_006FA5A0
        mov edi, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 12]
        mov ecx, dword ptr [edi + 20]
        dec ecx
        js neg_result
        mov esi, dword ptr [edi + 16]
        lea edx, [ecx + 2*ecx]
        lea edi, [esi + 4*edx]
    loop_top:
        test eax, eax
        je null_key
        mov edx, dword ptr [eax + 4]
        mov esi, dword ptr [edx]
        jmp cmp_key
    null_key:
        xor esi, esi
        xor edx, edx
    cmp_key:
        cmp esi, dword ptr [edi]
        jne next_entry
        cmp edx, dword ptr [edi + 4]
        je found
    next_entry:
        dec ecx
        sub edi, 12
        test ecx, ecx
        jl neg_result
        jmp loop_top
    found:
        mov eax, ecx
        jmp epilogue
    neg_result:
        or eax, -1
    epilogue:
        pop edi
        pop esi
        test eax, eax
        jge done
        or eax, -1
    done:
        ret 12
    }
}

// [0x0077A740] sub_0077A740 (128 bytes)
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" void ext_0070AB10();
extern "C" __declspec(naked) void __fastcall fn_0077A740(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 12]
        push esi
        mov ecx, dword ptr [eax + 48]
        push edi
        mov ecx, dword ptr [ecx + 4*edx]
        mov edx, dword ptr [eax + 24]
        mov esi, dword ptr [edx + 4*ecx]
        call ext_0070AB10
        push eax
        call ext_006FC6E0
        mov ecx, dword ptr [esp + 16]
        add esp, 4
        push eax
        call ext_006FA5A0
        mov edi, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 12]
        mov ecx, dword ptr [edi + 20]
        dec ecx
        js neg_result
        mov esi, dword ptr [edi + 16]
        lea edx, [ecx + 2*ecx]
        lea edi, [esi + 4*edx]
    loop_top:
        test eax, eax
        je null_key
        mov edx, dword ptr [eax + 4]
        mov esi, dword ptr [edx]
        jmp cmp_key
    null_key:
        xor esi, esi
        xor edx, edx
    cmp_key:
        cmp esi, dword ptr [edi]
        jne next_entry
        cmp edx, dword ptr [edi + 4]
        je found
    next_entry:
        dec ecx
        sub edi, 12
        test ecx, ecx
        jl neg_result
        jmp loop_top
    found:
        mov eax, ecx
        jmp done
    neg_result:
        or eax, -1
    done:
        pop edi
        pop esi
        test eax, eax
        jge ret_ok
        or eax, -1
    ret_ok:
        ret 12
    }
}

// [0x0077ED20] sub_0077ED20 (128 bytes)
extern "C" void ext_006BC600();
extern "C" void ext_006BC610();
extern "C" void ext_006BC730();
extern "C" void ext_006BC740();
extern "C" void ext_0072CF10();
extern "C" void ext_0077EDA0();
extern "C" __declspec(naked) void __fastcall fn_0077ED20(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_006BC730
        mov ecx, dword ptr [edi + 0xb4]
        push 8
        mov ebp, eax
        call ext_0072CF10
        test al, al
        je L_no_first
        mov ecx, ebx
        call ext_006BC600
        mov dword ptr [esp + 0x14], eax
        jmp L_after_first
    L_no_first:
        mov dword ptr [esp + 0x14], 0
    L_after_first:
        xor esi, esi
        test ebp, ebp
        jle L_loop1_end
    L_loop1:
        push esi
        mov ecx, ebx
        call ext_006BC740
        push eax
        mov ecx, edi
        call ext_0077EDA0
        inc esi
        cmp esi, ebp
        jl L_loop1
    L_loop1_end:
        mov eax, dword ptr [esp + 0x14]
        xor esi, esi
        test eax, eax
        jle L_loop2_end
    L_loop2:
        push esi
        mov ecx, ebx
        call ext_006BC610
        push eax
        mov ecx, edi
        call ext_0077EDA0
        mov eax, dword ptr [esp + 0x14]
        inc esi
        cmp esi, eax
        jl L_loop2
    L_loop2_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00778380] sub_00778380 (144 bytes)
extern "C" void ext_006C7230();
extern "C" void ext_006D2130();
extern "C" void ext_0079C4F0();

extern "C" __declspec(naked) void __fastcall fn_00778380(void* self, int edx_unused, int arg1) {
    __asm {
        push 0FFFFFFFFh
        push 008BE5C8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push esi
        push edi
        mov edi, ecx
        push 4
        push 10h
        lea ecx, [esp + 10h]
        call ext_006D2130
        lea eax, [esp + 18h]
        mov dword ptr [esp + 1Ch], eax
        mov esi, dword ptr [esp + 30h]
        mov dword ptr [esp + 28h], 0
        mov ecx, esi
        call ext_006C7230
        mov edx, dword ptr [esi]
        lea eax, [esp + 8]
        push eax
        mov ecx, esi
        call dword ptr [edx + 10h]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, dword ptr [edi + 0ACh]
        call ext_0079C4F0
        lea ecx, [esp + 8]
        mov dword ptr [esp + 28h], 0FFFFFFFFh
        call ext_006D2160
        mov ecx, dword ptr [esp + 20h]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret 4
    }
}

// [0x0077EC90] sub_0077EC90 (144 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072FD70();
extern "C" __declspec(naked) void __fastcall fn_0077EC90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        je done
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3a8
        add ecx, 4
        call ext_007275F0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x54], esp
        push 0xaad3b4
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x54], esp
        push 0xaad39c
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    done:
        pop esi
        ret 4
    }
}

// [0x007714C0] sub_007714C0 (160 bytes)
extern "C" void ext_006C9F60();
extern "C" void ext_006CD350();
extern "C" void ext_006DAB00();
extern "C" __declspec(naked) void __fastcall fn_007714C0(void* self, int edx_unused, void* a1, void* a2, void* a3, int a4) {
    __asm {
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], ebx
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebx
        call ext_006C9F60
        mov eax, dword ptr [esp + 0x48]
        xor edi, edi
        cmp eax, ebx
        jbe early_out
        mov eax, dword ptr [esp + 0x3c]
        push ebp
        mov ebp, dword ptr [esp + 0x44]
        push esi
        lea esi, [eax + 0x8]
    loop_top:
        push 0x6
        push ebx
        push ebx
        push edi
        push ebx
        push ebx
        push ebx
        lea ecx, [esp + 0x2c]
        call ext_006DAB00
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        push edx
        call ext_006CD350
        mov eax, dword ptr [esp + 0x50]
        mov dword ptr [esi - 0x8], edi
        mov word ptr [esi - 0x4], 0x7
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        fstp dword ptr [ebp]
        inc edi
        add esi, 0x1c
        add ebp, 0x4
        cmp edi, eax
        jb loop_top
        pop esi
        pop ebp
        pop edi
        mov al, 0x1
        pop ebx
        add esp, 0x30
        ret 0x10
    early_out:
        pop edi
        mov al, 0x1
        pop ebx
        add esp, 0x30
        ret 0x10
    }
}

// [0x00771AF0] sub_00771AF0 (160 bytes)
extern "C" void ext_0079EEF0();
extern "C" void ext_007A8BC0();
extern "C" void ext_007A92B0();
extern "C" void ext_007AA410();
extern "C" int mem_00B61218;
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_00771AF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [esi + 0xb8]
        lea edi, [esi + 0xbc]
        push eax
        push ecx
        call ext_007AA410
        mov al, byte ptr [mem_00B61218]
        add esp, 8
        test al, al
        je step2
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne step2
        pop edi
        xor al, al
        pop esi
        ret
    step2:
        add esi, 0xc0
        push esi
        call ext_007A8BC0
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je step3
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne step3
        pop edi
        xor al, al
        pop esi
        ret
    step3:
        push edi
        call ext_007A92B0
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je step4
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne step4
        pop edi
        xor al, al
        pop esi
        ret
    step4:
        call ext_0079EEF0
        mov al, byte ptr [mem_00B61218]
        test al, al
        je step5
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne step5
        pop edi
        xor al, al
        pop esi
        ret
    step5:
        pop edi
        mov al, 1
        pop esi
        ret
    }
}

// [0x0077F7C0] sub_0077F7C0 (46 bytes)
extern "C" int mem_00B60780;
extern "C" int mem_00B60788;
extern "C" int mem_00B60790;
extern "C" int mem_00B60798;

extern "C" void __cdecl fn_0077F7C0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B60780 = -*p;
    *(double*)&mem_00B60788 = -*p;
    *(double*)&mem_00B60790 = -*p;
    *(double*)&mem_00B60798 = -*p;
}

// [0x00774850] sub_00774850 (46 bytes)
extern "C" int mem_00B60600;
extern "C" int mem_00B60608;
extern "C" int mem_00B60610;
extern "C" int mem_00B60618;

extern "C" void __cdecl fn_00774850() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B60600 = -*p;
    *(double*)&mem_00B60608 = -*p;
    *(double*)&mem_00B60610 = -*p;
    *(double*)&mem_00B60618 = -*p;
}

// [0x0077F5D0] sub_0077F5D0 (51 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0077F5D0(unsigned int n) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xAABB78
        cmp ecx, 4
        ja  dflt
        _emit 0xFF
        _emit 0x24
        _emit 0x8D
        _emit 0x04
        _emit 0xF6
        _emit 0x77
        _emit 0x00
        mov eax, 0xAABB78
        ret
        mov eax, 0xAAE5D4
        ret
        mov eax, 0xAABB60
        ret
        mov eax, 0xAABB54
        ret
        mov eax, 0xAAE5C8
    dflt:
        ret
    }
}

// [0x0077F550] sub_0077F550 (51 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0077F550(unsigned int n) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xAAEB2C
        cmp ecx, 4
        ja  dflt
        _emit 0xFF
        _emit 0x24
        _emit 0x8D
        _emit 0x84
        _emit 0xF5
        _emit 0x77
        _emit 0x00
        mov eax, 0xAAEB2C
        ret
        mov eax, 0xAADFE0
        ret
        mov eax, 0xAAE0D4
        ret
        mov eax, 0xAADFD4
        ret
        mov eax, 0xAADFCC
    dflt:
        ret
    }
}

// [0x007721B0] sub_007721B0 (62 bytes)
extern "C" void ext_006B9EC0();
extern "C" int mem_00925264;

extern "C" __declspec(naked) void __fastcall fn_007721B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je skip_close
        push eax
        call dword ptr [mem_00925264]
        add esp, 4
        mov edi, eax
    skip_close:
        push 0xb5d2c0
        lea ecx, [esi + 0xb0]
        mov dword ptr [esi + 0xac], 0
        call ext_006B9EC0
        test edi, edi
        pop edi
        pop esi
        sete al
        ret
    }
}

// [0x00772150] sub_00772150 (84 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7440();
extern "C" int mem_009252A8;

extern "C" __declspec(naked) void __fastcall fn_00772150(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je skip_close
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x8]
    skip_close:
        mov edi, dword ptr [esp + 0xc]
        push 0xaaeb4c
        push edi
        call dword ptr [mem_009252A8]
        add esp, 0x8
        mov dword ptr [esi + 0xac], eax
        test eax, eax
        jne opened
        push 0x1
        lea ecx, [esi + 0x8]
        call ext_006E7440
        pop edi
        xor al, al
        pop esi
        ret 0x4
    opened:
        push edi
        lea ecx, [esi + 0xb0]
        call ext_006B9EC0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x007721F0] sub_007721F0 (90 bytes)
extern "C" void ext_007AC1C0();

extern "C" __declspec(naked) void __fastcall fn_007721F0(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7d8
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
        call ext_007AC1C0
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

// [0x00771F60] sub_00771F60 (87 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00771B90();

extern "C" __declspec(naked) void __fastcall fn_00771F60(void* self) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x34
        call ext_006A5C62
        add esp, 4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_00771B90
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

// [0x00771B90] sub_00771B90 (88 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_007ABC20();
extern "C" int mem_008C0EF8;
extern "C" int mem_00996C88;

extern "C" __declspec(naked) void __fastcall fn_00771B90(void* self) {
    __asm {
        push -1
        push offset mem_008C0EF8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_007ABC20
        lea edi, [esi + 0x1c]
        push 4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006D2130
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [esi], offset mem_00996C88
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0077CA70] sub_0077CA70 (87 bytes)
extern "C" void ext_006D91C0();
extern "C" void ext_0077CAE0();
extern "C" void ext_0077CB00();

extern "C" __declspec(naked) void __stdcall fn_0077CA70(void* p) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, edi
        call ext_006D91C0
        cmp eax, 3
        ja L_0077CAC0
        jmp dword ptr [4*eax + 0x77cac8]
        push edi
        mov ecx, esi
        call ext_0077CAE0
        pop edi
        mov al, 1
        pop esi
        ret 4
        push edi
        mov ecx, esi
        call ext_0077CAE0
        pop edi
        mov al, 1
        pop esi
        ret 4
        push edi
        mov ecx, esi
        call ext_0077CAE0
        pop edi
        mov al, 1
        pop esi
        ret 4
        push edi
        mov ecx, esi
        call ext_0077CB00
L_0077CAC0:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x007720F0] sub_007720F0 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_007720F0(void* self) {
    __asm {
        push -1
        push 0x8c0f86
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x996c98
        mov dword ptr [esp + 0x10], 1
        call ext_007721B0
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x10], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00754FA0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00772050] sub_00772050 (113 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_00754F20();

extern "C" __declspec(naked) void* __fastcall fn_00772050(void* self, void* dummy_edx, void* arg0) {
    __asm {
        push -0x1
        push 0x8c0f58
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_00754F20
        xor eax, eax
        push 0xb5d2c0
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esi + 0xac], eax
        call ext_006B9D80
        mov ecx, dword ptr [esp + 0x8]
        mov al, 0x1
        mov byte ptr [esi + 0xfe], al
        mov byte ptr [esi + 0xfc], al
        mov byte ptr [esi + 0xfd], al
        mov dword ptr [esi], 0x996c98
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00774A70] sub_00774A70 (146 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00774A70(void* self, void* dummy, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8bfa36
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 8], esi
        call ext_00754F20
        mov ecx, dword ptr [esp + 0x1c]
        xor eax, eax
        mov dword ptr [esi + 0xb0], ecx
        push 0x14
        lea ecx, [esi + 0xc4]
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esi + 0xac], eax
        mov dword ptr [esi + 0xb4], eax
        mov dword ptr [esi + 0xb8], 1
        mov dword ptr [esi + 0xbc], eax
        mov dword ptr [esi + 0xc0], eax
        call ext_00784620
        push 0x14
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x14], 1
        call ext_00784620
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi], 0x996d20
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00774E10] sub_00774E10 (162 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_00723920();
extern "C" void ext_00728D40();
extern "C" void ext_00728D50();
extern "C" __declspec(naked) void __fastcall fn_00774E10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        jne L1
        push 1
        lea ecx, [esi + 8]
        call ext_006E7440
        xor al, al
        pop esi
        ret
    L1:
        lea ecx, [eax + 4]
        call ext_00723920
        test al, al
        jne L4
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D40
        cmp eax, 3
        je L2
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 5
        lea ecx, [esi + 8]
        call ext_006E7410
        jmp L3
    L2:
        push 1
        lea ecx, [esi + 8]
        call ext_006E7440
    L3:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L5
        lea ecx, [eax + 4]
        push 1
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
    L5:
        mov dword ptr [esi + 0xac], 0
        xor al, al
        pop esi
        ret
    L4:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L6
        mov edx, dword ptr [eax + 4]
        lea ecx, [eax + 4]
        push 1
        call dword ptr [edx]
    L6:
        mov dword ptr [esi + 0xac], 0
        mov al, 1
        pop esi
        ret
    }
}

// [0x007749C0] sub_007749C0 (166 bytes)
extern "C" int mem_00B606A0;
extern "C" int mem_00B606A8;
extern "C" int mem_00B606B0;
extern "C" int mem_00B606B8;
extern "C" int mem_00B606C0;
extern "C" int mem_00B606C8;
extern "C" int mem_00B606D0;
extern "C" int mem_00B606D8;
extern "C" int mem_00B606E0;
extern "C" int mem_00B606E8;
extern "C" int mem_00B606F0;
extern "C" int mem_00B606F8;
extern "C" int mem_00B60700;
extern "C" int mem_00B60708;
extern "C" int mem_00B60710;
extern "C" int mem_00B60718;

extern "C" void __cdecl fn_007749C0() {
    double* h = (double*)mem_00925284;
    *(double*)&mem_00B606A0 = -*h;
    *(double*)&mem_00B606A8 = -*h;
    *(double*)&mem_00B606B0 = -*h;
    *(double*)&mem_00B606B8 = -*h;
    *(double*)&mem_00B606C0 = -*h;
    *(double*)&mem_00B606C8 = -*h;
    *(double*)&mem_00B606D0 = -*h;
    *(double*)&mem_00B606D8 = -*h;
    *(double*)&mem_00B606E0 = -*h;
    *(double*)&mem_00B606E8 = -*h;
    *(double*)&mem_00B606F0 = -*h;
    *(double*)&mem_00B606F8 = -*h;
    *(double*)&mem_00B60700 = -*h;
    *(double*)&mem_00B60708 = -*h;
    *(double*)&mem_00B60710 = -*h;
    *(double*)&mem_00B60718 = -*h;
}

// [0x0077F930] sub_0077F930 (166 bytes)
// [VA] 0x0077F930
extern "C" int mem_00925284;
extern "C" double mem_00B60820;
extern "C" double mem_00B60828;
extern "C" double mem_00B60830;
extern "C" double mem_00B60838;
extern "C" double mem_00B60840;
extern "C" double mem_00B60848;
extern "C" double mem_00B60850;
extern "C" double mem_00B60858;
extern "C" double mem_00B60860;
extern "C" double mem_00B60868;
extern "C" double mem_00B60870;
extern "C" double mem_00B60878;
extern "C" double mem_00B60880;
extern "C" double mem_00B60888;
extern "C" double mem_00B60890;
extern "C" double mem_00B60898;
extern "C" void __cdecl fn_0077F930() {
    double* h = (double*)mem_00925284;
    mem_00B60820 = -*h;
    mem_00B60828 = -*h;
    mem_00B60830 = -*h;
    mem_00B60838 = -*h;
    mem_00B60840 = -*h;
    mem_00B60848 = -*h;
    mem_00B60850 = -*h;
    mem_00B60858 = -*h;
    mem_00B60860 = -*h;
    mem_00B60868 = -*h;
    mem_00B60870 = -*h;
    mem_00B60878 = -*h;
    mem_00B60880 = -*h;
    mem_00B60888 = -*h;
    mem_00B60890 = -*h;
    mem_00B60898 = -*h;
}

// [0x00777F10] sub_00777F10 (176 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" __declspec(naked) void __fastcall fn_00777F10(void* self) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push 0xaad264
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x5c], -1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 4
    }
}

// [0x0077E760] sub_0077E760 (208 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" int mem_008BCB18;
extern "C" int mem_00AAD40C;

extern "C" __declspec(naked) void __fastcall fn_0077E760(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push offset mem_00AAD40C
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0077E880] sub_0077E880 (208 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_0077E880(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x18
        _emit 0xCB
        _emit 0x8B
        _emit 0x00
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4C
        push esi
        mov esi, ecx
        push edi
        _emit 0x68
        _emit 0x04
        _emit 0xD4
        _emit 0xAA
        _emit 0x00
        mov ecx, dword ptr [esi + 0xAC]
        add ecx, 4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xAC]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5C], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xAC]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x5C], -1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xAC]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xAC]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xAC]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 4
    }
}

// [0x0077E9A0] sub_0077E9A0 (208 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_0077E9A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008BCB18
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push 0x00AAD20C
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x5c], -1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x58
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
        nop
        nop
        nop
        nop
        nop
    }
}
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_007283B0();

// [0x0077EAB0] sub_0077EAB0 (208 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" int mem_008BCB18;
extern "C" int mem_00AAD21C;

extern "C" __declspec(naked) void __fastcall fn_0077EAB0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push offset mem_00AAD21C
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0077EBC0] sub_0077EBC0 (208 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_006E7460();
extern "C" int mem_008BCB18;
extern "C" int mem_00AABEF8;

extern "C" __declspec(naked) void __fastcall fn_0077EBC0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push offset mem_00AABEF8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0077EDA0] sub_0077EDA0 (208 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" int mem_008BCB18;
extern "C" int mem_00AAD3FC;

extern "C" __declspec(naked) void __fastcall fn_0077EDA0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push offset mem_00AAD3FC
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x64]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0077C990] sub_0077C990 (224 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006D23F0();
extern "C" __declspec(naked) void __fastcall fn_0077C990(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x14
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov eax, dword ptr [eax]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], edi
        jle END_L
        mov dword ptr [esp + 0x14], edi
        jmp LOOP_HEAD
    LOOP_TAIL:
        mov edi, dword ptr [esp + 0x14]
    LOOP_HEAD:
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov esi, edi
        push 0
        mov eax, dword ptr [ecx + 0x10]
        mov ebx, dword ptr [edx + 0x10]
        add esi, eax
        add edi, ebx
        mov ecx, esi
        call ext_006D23F0
        push 0
        mov ecx, edi
        mov ebx, eax
        call ext_006D23F0
        fld qword ptr [ebx]
        fcomp qword ptr [eax]
        fnstsw ax
        test ah, 0x40
        je CALL_L
        push 1
        mov ecx, esi
        call ext_006D23F0
        push 1
        mov ecx, edi
        mov ebx, eax
        call ext_006D23F0
        fld qword ptr [ebx]
        fcomp qword ptr [eax]
        fnstsw ax
        test ah, 0x40
        je CALL_L
        push 2
        mov ecx, esi
        call ext_006D23F0
        push 2
        mov ecx, edi
        mov esi, eax
        call ext_006D23F0
        fld qword ptr [esi]
        fcomp qword ptr [eax]
        fnstsw ax
        test ah, 0x40
        jne NEXT_L
    CALL_L:
        mov eax, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0x1c], eax
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
    NEXT_L:
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        inc eax
        add edx, 0x20
        cmp eax, ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], edx
        jl LOOP_TAIL
    END_L:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x00778060] sub_00778060 (229 bytes)
extern "C" void ext_006C2ED0();
extern "C" void ext_006C2F20();
extern "C" void ext_007275F0();
extern "C" void ext_00727800();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00778060(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, ebx
        call ext_006C2ED0
        test al, al
        jne L_after
        push edi
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad908
        mov ecx, edi
        call ext_007275F0
        push 0xaac078
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        pop edi
    L_after:
        mov ecx, ebx
        call ext_006C2F20
        dec eax
        cmp eax, 0x4
        ja L_end
        jmp dword ptr [eax * 4 + 0x778148]
    L_c0:
        mov esi, dword ptr [esi + 0xac]
        push 0xaad900
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x57
        jmp L_common
    L_c1:
        mov esi, dword ptr [esi + 0xac]
        push 0xaad900
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x46
        jmp L_common
    L_c2:
        mov esi, dword ptr [esi + 0xac]
        push 0xaad900
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x59
        jmp L_common
    L_c3:
        mov esi, dword ptr [esi + 0xac]
        push 0xaad900
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x54
        jmp L_common
    L_c4:
        mov esi, dword ptr [esi + 0xac]
        push 0xaad900
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x55
    L_common:
        mov ecx, esi
        call ext_00727800
        mov ecx, esi
        call ext_007283B0
    L_end:
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x0077E620] sub_0077E620 (240 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0077E620();
extern "C" __declspec(naked) void __fastcall fn_0077E620(void* self) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0xaad264
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007275F0
        mov edi, dword ptr [esp + 0x6c]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        xor ebx, ebx
        mov ecx, eax
        mov dword ptr [esp + 0x64], ebx
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        push ebx
        mov ecx, edi
        call ext_006C2860
        mov ebp, eax
        cmp ebp, ebx
        jle done
    loop_top:
        push ebx
        mov ecx, edi
        call ext_006C28D0
        push eax
        mov ecx, esi
        call ext_0077E620
        inc ebx
        cmp ebx, ebp
        jl loop_top
    done:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 4
    }
}

// [0x0077FB70] sub_0077FB70 (256 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077FB70(void* self) {
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
        fld qword ptr [mem_0092A278]
        mov eax, ecx
        fstp qword ptr [ecx + 0x18]
        ret 0x20
    L10:
        fld qword ptr [esp + 0x1c]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L11
        fld qword ptr [mem_0092A270]
        mov eax, ecx
        fstp qword ptr [ecx + 0x18]
        ret 0x20
    L11:
        fld qword ptr [esp + 0x1c]
        mov eax, ecx
        fstp qword ptr [ecx + 0x18]
        ret 0x20
    }
}

// [0x007709E0] sub_007709E0 (272 bytes)
extern "C" void ext_006C9F60();
extern "C" void ext_006CD350();
extern "C" void ext_006DAB00();
extern "C" __declspec(naked) void __fastcall fn_007709E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x9c
        push ebx
        push esi
        xor ebx, ebx
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        call ext_006C9F60
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x60], ebx
        mov dword ptr [esp + 0x64], ebx
        call ext_006C9F60
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x88], ebx
        mov dword ptr [esp + 0x8c], ebx
        call ext_006C9F60
        cmp dword ptr [ebp + 0x1c], ebx
        jbe done
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x8]
        lea edi, [eax + 0x8]
        lea esi, [ecx + 0x8]
    loop_top:
        push 6
        push 0
        push 0
        push ebx
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x2c]
        call ext_006DAB00
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebp + 0x10]
        push 0
        push edx
        push eax
        call ext_006CD350
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        fstp qword ptr [esp + 0x18]
        push 0
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        push edx
        call ext_006CD350
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        fstp qword ptr [esp + 0x20]
        push 0
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x18]
        call ext_006CD350
        fld qword ptr [esp + 0x18]
        mov dword ptr [esi - 0x8], ebx
        xor eax, eax
        mov word ptr [esi - 0x4], 0x7
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        fstp dword ptr [edi - 0x8]
        mov eax, dword ptr [ebp + 0x1c]
        inc ebx
        fchs
        fstp dword ptr [edi - 0x4]
        fld qword ptr [esp + 0x20]
        add esi, 0x1c
        fstp dword ptr [edi]
        add edi, 0xc
        cmp ebx, eax
        jb loop_top
    done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    }
}

// [0x007713B0] sub_007713B0 (272 bytes)
extern "C" void ext_006C9F60();
extern "C" void ext_006CD350();
extern "C" void ext_006DAB00();
extern "C" __declspec(naked) void __fastcall fn_007713B0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x9c
        push ebx
        push esi
        xor ebx, ebx
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        call ext_006C9F60
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x60], ebx
        mov dword ptr [esp + 0x64], ebx
        call ext_006C9F60
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x88], ebx
        mov dword ptr [esp + 0x8c], ebx
        call ext_006C9F60
        cmp dword ptr [ebp + 0x1c], ebx
        jbe done
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x8]
        lea edi, [eax + 8]
        lea esi, [ecx + 8]
    loop_top:
        push 6
        push 0
        push 0
        push ebx
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x2c]
        call ext_006DAB00
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebp + 0x10]
        push 0
        push edx
        push eax
        call ext_006CD350
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        fstp qword ptr [esp + 0x18]
        push 0
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        push edx
        call ext_006CD350
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        fstp qword ptr [esp + 0x20]
        push 0
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x18]
        call ext_006CD350
        fld qword ptr [esp + 0x18]
        mov dword ptr [esi - 8], ebx
        xor eax, eax
        mov word ptr [esi - 4], 7
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        fstp dword ptr [edi - 8]
        fld qword ptr [esp + 0x20]
        mov eax, dword ptr [ebp + 0x1c]
        inc ebx
        fstp dword ptr [edi - 4]
        add esi, 0x1c
        fstp dword ptr [edi]
        add edi, 0xc
        cmp ebx, eax
        jb loop_top
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    }
}

// [0x007790E0] sub_007790E0 (288 bytes)
extern "C" void ext_006D59B0();
extern "C" void ext_006E9AE0();
extern "C" void ext_006B9D80();
extern "C" void ext_0072FD70();
extern "C" void ext_007283B0();
extern "C" void ext_00727C80();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_007790E0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0xaacd0c
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x65
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaa8e74
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0xaaefc8
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ebp, dword ptr [esp + 0x14]
        mov ecx, ebp
        call ext_006E9AE0
        mov edi, dword ptr [esi + 0xac]
        push 0xaad450
        add edi, 0x4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd68
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad440
        add ecx, 0x4
        call ext_007275F0
        mov eax, dword ptr [ebp + 0xc]
        lea edi, [ebp + 0xc]
        xor ebx, ebx
        test eax, eax
        jle done
    loop_top:
        push ebx
        mov ecx, edi
        call ext_006D59B0
        mov ecx, dword ptr [eax]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_0072FD70
        mov eax, dword ptr [edi]
        inc ebx
        cmp ebx, eax
        jl loop_top
    done:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x00777D10] sub_00777D10 (288 bytes)
extern "C" int mem_00AAD860;
extern "C" int mem_00AABC84;
extern "C" int mem_00AAD844;
extern "C" int mem_00AAD834;
extern "C" int mem_00AAD814;
extern "C" void ext_006BB760();
extern "C" void ext_006BB790();
extern "C" void ext_006BB7C0();
extern "C" void ext_006BB820();
extern "C" void ext_006BC7F0();
extern "C" void ext_006D98A0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();

extern "C" __declspec(naked) void __fastcall fn_00777D10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edi
        call ext_006BC7F0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD860
        add ecx, 4
        mov ebx, eax
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, ebx
        call ext_006BB760
        push eax
        call ext_006D98A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 4
        add edi, 4
        mov ebp, eax
        push offset mem_00AABC84
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006BB790
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD844
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006BB7C0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD834
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006BB820
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD814
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0077B230] sub_0077B230 (288 bytes)
extern "C" void ext_006BC3F0();
extern "C" void ext_006BC410();
extern "C" void ext_007275F0();
extern "C" void ext_006BADB0();
extern "C" void ext_006B9D80();
extern "C" void ext_0072FD70();
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();
extern "C" void ext_0077B350();
extern "C" __declspec(naked) void __fastcall fn_0077B230(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bcb18
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x6c]
        push edi
        push 0
        call ext_006BC3F0
        mov ebp, eax
        xor ebx, ebx
        test ebp, ebp
        jle done
    loop_top:
        mov ecx, dword ptr [esp + 0x70]
        push 0
        push ebx
        call ext_006BC410
        mov ecx, dword ptr [esi + 0xac]
        push 0xaabef8
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x68], 0
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, esi
        call ext_0077B350
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        inc ebx
        cmp ebx, ebp
        jl loop_top
    done:
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x5c
        ret 4
    }
}

// [0x0077CFB0] sub_0077CFB0 (288 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006D55F0();
extern "C" void ext_006E8E20();
extern "C" void ext_006BADB0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_006E7460();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();
extern "C" void ext_0077D0D0();

extern "C" __declspec(naked) void __fastcall fn_0077CFB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bcb18
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x68]
        call ext_006B99C0
        mov ecx, eax
        call ext_006D55F0
        mov ebp, eax
        xor ebx, ebx
        test ebp, ebp
        jle zero_path
        push edi
    loop_top:
        mov ecx, dword ptr [esp + 0x6c]
        push ebx
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8E20
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad40c
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x64], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, esi
        call ext_0077D0D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        inc ebx
        cmp ebx, ebp
        jl loop_top
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    zero_path:
        mov ecx, dword ptr [esp + 0x58]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x00778200] sub_00778200 (301 bytes)
extern "C" void ext_006C3030();
extern "C" void ext_006C3040();
extern "C" void ext_0072CF10();
extern "C" void ext_00778B20();
extern "C" void ext_00778D50();
extern "C" void ext_00778D60();
extern "C" void ext_007790E0();
extern "C" void ext_00779200();
extern "C" void ext_0077A840();
extern "C" void ext_0077A880();
extern "C" void ext_0077AE10();
extern "C" void ext_0077CA70();

extern "C" __declspec(naked) void __fastcall fn_00778200(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ext_006C3030
        test eax, eax
        push 0
        je L_TAIL_CALL
        mov ecx, dword ptr [edi + 0xb4]
        call ext_0072CF10
        test al, al
        mov ecx, esi
        je L_SECOND
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        dec eax
        cmp eax, 8
        ja L_RET_TRUE
        jmp dword ptr [eax * 4 + 0x778330]

    L_CASE_7790E0:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_007790E0
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_77A840:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0077A840
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_77A880:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0077A880
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_77AE10:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0077AE10
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_SECOND:
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        dec eax
        cmp eax, 8
        ja L_PUSH_ZERO
        jmp dword ptr [eax * 4 + 0x778354]

    L_CASE_6C3040:
        mov ecx, esi
        call ext_006C3040
        push eax
        mov ecx, edi
        call ext_00778B20
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_778D50:
        push esi
        mov ecx, edi
        call ext_00778D50
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_778D60:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_00778D60
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_779200:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_00779200
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_CASE_77CA70:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0077CA70
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_PUSH_ZERO:
        push 0
    L_TAIL_CALL:
        mov ecx, edi
        call ext_00778B20
    L_RET_TRUE:
        pop edi
        mov al, 1
        pop esi
        ret 4

    }
}

// [0x00771E00] sub_00771E00 (344 bytes)
extern "C" __declspec(naked) void __fastcall fn_00771E00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8c0f43
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x64]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, ebp
        call ext_006E6340
        mov dword ptr [esp + 0x6c], eax
        lea eax, [esp + 0x6c]
        push eax
        mov ecx, ebx
        call ext_00771FC0
        mov edi, dword ptr [esp + 0x6c]
        or ecx, -1
        xor eax, eax
        repne scasb
        mov eax, dword ptr [esp + 0x70]
        not ecx
        dec ecx
        lea edx, [eax - 3]
        cmp ecx, edx
        jbe t771e_a
        add eax, -3
        mov ecx, ebx
        push eax
        lea eax, [esp + 0x70]
        push eax
        call ext_00772010
    t771e_a:
        mov eax, dword ptr [ebx + 0x1c]
        lea edi, [ebx + 0x1c]
        xor esi, esi
        test eax, eax
        jle t771e_b
    t771e_loop:
        mov ecx, dword ptr [esp + 0x6c]
        mov edx, dword ptr [ebx + 0x2c]
        push ecx
        mov ecx, dword ptr [edx + 4*esi]
        call ext_006BA7C0
        test al, al
        jne t771e_found
        mov eax, dword ptr [edi]
        inc esi
        cmp esi, eax
        jl t771e_loop
    t771e_b:
        push 0x50
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x70], esi
        test esi, esi
        mov dword ptr [esp + 0x64], 1
        je t771e_null
        mov ecx, ebp
        call ext_006E6340
        push eax
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esi + 0x4c], 0
        jmp t771e_join
    t771e_found:
        lea ecx, [esp + 0x10]
        call ext_006B9D10
        mov eax, dword ptr [ebx + 0x2c]
        mov dword ptr [esp + 0x64], 0
        mov eax, dword ptr [eax + 4*esi]
        mov ecx, dword ptr [eax + 0x4c]
        inc ecx
        mov dword ptr [eax + 0x4c], ecx
        mov ecx, dword ptr [ebx + 0x2c]
        mov edx, dword ptr [ecx + 4*esi]
        lea ecx, [esp + 0x10]
        push edx
        call ext_006B9E60
        mov eax, dword ptr [ebx + 0x2c]
        mov ecx, dword ptr [eax + 4*esi]
        mov edx, dword ptr [ecx + 0x4c]
        lea ecx, [esp + 0x10]
        push edx
        call ext_006BA260
        lea ecx, [esp + 0x10]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006E6350
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov al, 1
        jmp t771e_end
    t771e_null:
        xor esi, esi
    t771e_join:
        mov ecx, dword ptr [edi]
        lea eax, [esp + 0x70]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x6c], -1
        mov dword ptr [esp + 0x78], esi
        call ext_006D2170
        xor al, al
    t771e_end:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
    }
}

// [0x00777B90] sub_00777B90 (384 bytes)
extern "C" void ext_00724BF0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072BDB0();
extern "C" void ext_0072BDD0();
extern "C" void ext_0072BDF0();

extern "C" __declspec(naked) void __fastcall fn_00777B90(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [ebx + 0x150]
        push    edi
        mov     edi, dword ptr [esi + 0xac]
        push    0xaad808
        add     edi, 0x4
        mov     dword ptr [esp + 0x18], eax
        mov     ecx, edi
        call    ext_007275F0
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    ext_00727C80
        mov     ecx, edi
        call    ext_007283B0
        mov     eax, dword ptr [esp + 0x14]
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp + 0x10], edi
        jle     L_end
        jmp     short L_loop_body
    L_loop_top:
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [ebp + 0x8]
    L_loop_body:
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaad7fc
        add     ecx, 0x4
        call    ext_007275F0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_00728410
        push    edi
        mov     ecx, ebx
        call    ext_0072BDB0
        sub     esp, 0x4c
        mov     ecx, esp
        mov     dword ptr [esp + 0x64], esp
        push    eax
        call    ext_006B9D80
        mov     ecx, dword ptr [esi + 0xac]
        push    0xaad7f4
        add     ecx, 0x4
        call    ext_00724BF0
        push    edi
        mov     ecx, ebx
        call    ext_0072BDD0
        mov     edi, dword ptr [esi + 0xac]
        push    0xaac1d4
        add     edi, 0x4
        mov     ebx, eax
        mov     ecx, edi
        call    ext_007275F0
        mov     dword ptr [esp + 0x18], 0x10
    L_mat_loop:
        mov     edx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_00727FE0
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, 0x8
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jne     L_mat_loop
        mov     ecx, edi
        call    ext_007283B0
        mov     ecx, dword ptr [ebp + 0x8]
        cmp     byte ptr [ecx + 0x14c], 0x62
        je      L_skip_byte
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    ext_0072BDF0
        mov     edi, dword ptr [esi + 0xac]
        push    0xaad7ec
        add     edi, 0x4
        mov     byte ptr [esp + 0x20], al
        mov     ecx, edi
        call    ext_007275F0
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, edi
        and     eax, 0xff
        push    eax
        call    ext_00727C80
        mov     ecx, edi
        call    ext_007283B0
    L_skip_byte:
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_007284D0
        mov     ecx, dword ptr [esi + 0xac]
        add     ecx, 0x4
        call    ext_007283B0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_loop_top
    L_end:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}

// [0x00779A90] sub_00779A90 (416 bytes)
extern "C" void ext_006D91C0();
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();
extern "C" void ext_00784650();

extern "C" __declspec(naked) void __fastcall fn_00779A90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x18]
        push 0x4
        call ext_006FDF30
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 0x10], ebp
        mov dword ptr [esp + 0xc], edi
        jle L_exit_early

        push ebx
    L_outer_loop:
        mov ecx, dword ptr [esp + 0x1c]
        push 0x4
        push edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006D91C0
        mov ebx, eax
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je L_next
        mov ecx, dword ptr [esp + 0x20]
        push edi
        push ebx
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadb60
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 0x4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx]
        push eax
        call ext_0077F550
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov ebp, eax
        push 0xaadc2c
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 0x4]
        push eax
        call ext_0077F5A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov ebp, eax
        push 0xaadc10
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc90
        add ecx, 0x4
        call ext_007275F0
        mov edi, dword ptr [ebx + 0x20]
        xor ebp, ebp
        test edi, edi
        jbe L_loop_done
    L_inner_loop:
        mov eax, dword ptr [ebx + 0x30]
        mov ecx, dword ptr [eax + 4*ebp]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
        inc ebp
        cmp ebp, edi
        jb L_inner_loop
    L_loop_done:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov edi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x14]
    L_next:
        inc edi
        cmp edi, ebp
        mov dword ptr [esp + 0x10], edi
        jl L_outer_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x8
        ret 0x8
    L_exit_early:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x8
        ret 0x8
    }
}

// [0x0077EE70] sub_0077EE70 (416 bytes)
extern "C" void ext_006BAC80();
extern "C" void ext_006BADB0();
extern "C" void ext_006BC370();
extern "C" void ext_006BC440();
extern "C" void ext_006BC520();
extern "C" void ext_006CA6A0();
extern "C" void ext_00715550();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007287E0();
extern "C" void ext_0072CF10();
extern "C" void ext_0077F250();

extern "C" __declspec(naked) void __fastcall fn_0077EE70(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x4c
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xb5d2c0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaaf028
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaaef3c
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae594
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esp + 0x68]
        mov ecx, edi
        call ext_006BC370
        mov ecx, eax
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x10]
        call ext_006B9D80
        push 0xaad1fc
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0
        call ext_006BC370
        mov ecx, eax
        call ext_006BAC80
        push 1
        mov ecx, edi
        call ext_006BC370
        push eax
        mov ecx, esi
        call ext_0077F250
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006BC370
        mov ecx, eax
        call ext_006BAC80
        mov ecx, dword ptr [esi + 0xb4]
        push 8
        call ext_0072CF10
        test al, al
        je L_end
        mov ecx, edi
        xor ebx, ebx
        call ext_006CA6A0
        test eax, eax
        jle L_loop2
    L_loop1:
        push ebx
        mov ecx, edi
        call ext_006BC520
        test eax, eax
        je L_next1
        push 0
        push eax
        mov ecx, esi
        call ext_0077F250
    L_next1:
        mov ecx, edi
        inc ebx
        call ext_006CA6A0
        cmp ebx, eax
        jl L_loop1
    L_loop2:
        mov ecx, edi
        xor ebx, ebx
        call ext_00715550
        test eax, eax
        jle L_end
    L_loop3:
        push ebx
        mov ecx, edi
        call ext_006BC440
        test eax, eax
        je L_next2
        push 0
        push eax
        mov ecx, esi
        call ext_0077F250
    L_next2:
        mov ecx, edi
        inc ebx
        call ext_00715550
        cmp ebx, eax
        jl L_loop3
    L_end:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x58
        ret 4
    }
}

// [0x00771240] sub_00771240 (368 bytes)
extern "C" void ext_006C9F60();
extern "C" void ext_006CD350();
extern "C" void ext_006DAB00();
extern "C" int mem_0098F3E0;
extern "C" int mem_0092A270;
extern "C" __declspec(naked) void __fastcall fn_00771240(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x9c
        push ebx
        push esi
        push edi
        xor edi, edi
        lea ecx, [esp+0x30]
        mov dword ptr [esp+0x10], edi
        mov dword ptr [esp+0x14], edi
        mov dword ptr [esp+0x38], edi
        mov dword ptr [esp+0x3c], edi
        call ext_006C9F60
        lea ecx, [esp+0x58]
        mov dword ptr [esp+0x60], edi
        mov dword ptr [esp+0x64], edi
        call ext_006C9F60
        lea ecx, [esp+0x80]
        mov dword ptr [esp+0x88], edi
        mov dword ptr [esp+0x8c], edi
        call ext_006C9F60
        cmp dword ptr [ebp+0x1c], edi
        jbe f1240_done
        mov eax, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x8]
        lea ebx, [eax+8]
        lea esi, [ecx+8]
    f1240_top:
        push 6
        push 0
        push 0
        push edi
        push 0
        push 0
        push 0
        lea ecx, [esp+0x2c]
        call ext_006DAB00
        mov edx, dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [ebp+0x10]
        push 0
        push edx
        push eax
        call ext_006CD350
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        fstp qword ptr [esp+0x18]
        push 0
        push ecx
        mov ecx, dword ptr [ebp+0x14]
        push edx
        call ext_006CD350
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x10]
        fstp qword ptr [esp+0x20]
        push 0
        push eax
        push ecx
        mov ecx, dword ptr [ebp+0x18]
        call ext_006CD350
        fld qword ptr [esp+0x18]
        mov dword ptr [esi-8], edi
        xor eax, eax
        fabs
        fcomp qword ptr [mem_0098F3E0]
        mov word ptr [esi-4], 7
        mov dword ptr [esi], eax
        mov dword ptr [esi+4], eax
        mov dword ptr [esi+8], eax
        mov dword ptr [esi+0xc], eax
        mov dword ptr [esi+0x10], eax
        fnstsw ax
        test ah, 1
        je f1240_store
        fld qword ptr [esp+0x20]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 1
        je f1240_store
        fld st(0)
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 1
        je f1240_store
        fstp st(0)
        fld qword ptr [mem_0092A270]
        mov dword ptr [esp+0x18], 0
        mov dword ptr [esp+0x1c], 0x3ff00000
        mov dword ptr [esp+0x20], 0
        mov dword ptr [esp+0x24], 0x3ff00000
    f1240_store:
        fld qword ptr [esp+0x18]
        mov eax, dword ptr [ebp+0x1c]
        inc edi
        fstp dword ptr [ebx-8]
        add esi, 0x1c
        fstp dword ptr [ebx-4]
        fld qword ptr [esp+0x20]
        fstp dword ptr [ebx]
        add ebx, 0xc
        cmp edi, eax
        jb f1240_top
    f1240_done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    }
}

// [0x0077D0D0] sub_0077D0D0 (368 bytes)
extern "C" void ext_0077FB40();
extern "C" void ext_006BAA50();
extern "C" void ext_006E7460();
extern "C" void ext_007279A0();
extern "C" void ext_0070C000();
extern "C" void ext_006D2130();
extern "C" void ext_0079C4F0();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_0077D0D0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c148b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x28]
        call ext_0077FB40
        mov esi, dword ptr [edi + 0xac]
        push 0xaacd0c
        add esi, 4
        mov dword ptr [esp + 0xa0], 0
        mov ecx, esi
        call ext_007275F0
        push 0x65
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov ebp, dword ptr [esp + 0xa4]
        lea eax, [esp + 0x48]
        push eax
        lea ecx, [ebp + 0xf4]
        call ext_006BAA50
        mov ecx, eax
        mov byte ptr [esp + 0x9c], 1
        call ext_006E7460
        mov esi, dword ptr [edi + 0xac]
        push 0xaae4d0
        add esi, 4
        mov ebx, eax
        mov ecx, esi
        call ext_007275F0
        push ebx
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x9c], 0
        call ext_006B9D70
        mov ecx, ebp
        call ext_0070C000
        mov esi, dword ptr [edi + 0xac]
        and eax, 0xff
        add esi, 4
        push 0xaad91c
        mov ecx, esi
        mov ebx, eax
        call ext_007275F0
        push ebx
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        push 4
        push 0x10
        lea ecx, [esp + 0x18]
        call ext_006D2130
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x24], ecx
        mov edx, dword ptr [ebp]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0xa0], 2
        call dword ptr [edx + 0x10]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [edi + 0xac]
        call ext_0079C4F0
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x9c], 0
        call ext_006D2160
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x9c], 0xffffffff
        call ext_006D80A0
        mov al, 1
        pop edi
        mov ecx, dword ptr [esp + 0x90]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 4
    }
}

// [0x007779C0] sub_007779C0 (464 bytes)
extern "C" void ext_006BC730();
extern "C" void ext_006BC740();
extern "C" void ext_006BADB0();
extern "C" void ext_006B9D80();
extern "C" void ext_0072FD70();
extern "C" void ext_006B9D70();
extern "C" void ext_00728410();
extern "C" void ext_00724BF0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_006D2130();
extern "C" void ext_0079C4F0();
extern "C" void ext_00777B90();
extern "C" void ext_006D2160();
extern "C" void ext_007284D0();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();

extern "C" __declspec(naked) void __fastcall fn_007779C0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1270
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x6c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x88]
        push edi
        call ext_006BC730
        xor ebx, ebx
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        jle DONE
    LOOP_TOP:
        mov ecx, dword ptr [esp + 0x8c]
        push ebx
        call ext_006BC740
        mov edi, eax
        mov ebp, 0xaad100
        cmp byte ptr [edi + 0x14c], 0x62
        je SKIP1
        mov ebp, 0xaad0f4
    SKIP1:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3fc
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x84], 0
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x84], -1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push ebp
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ecx, 4
        call ext_00724BF0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebp, 4
        mov ecx, ebp
        call ext_007275F0
        push 0x64
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        push 4
        push 0x10
        lea ecx, [esp + 0x20]
        call ext_006D2130
        lea edx, [esp + 0x28]
        mov dword ptr [esp + 0x2c], edx
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x88], 1
        call dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi + 0xac]
        lea edx, [esp + 0x18]
        push edx
        call ext_0079C4F0
        push edi
        mov ecx, esi
        call ext_00777B90
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x84], -1
        call ext_006D2160
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl LOOP_TOP
    DONE:
        mov ecx, dword ptr [esp + 0x7c]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x78
        ret 4
    }
}

// [0x00779280] sub_00779280 (400 bytes)
extern "C" void ext_006D80A0();
extern "C" int __fastcall ext_006D7A90(void* a);
extern "C" void ext_006DEEC0();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_00727FE0();
extern "C" void ext_008BCCEB();
extern "C" int mem_00AADFB8;
extern "C" __declspec(naked) void __fastcall fn_00779280(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push offset ext_008BCCEB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa4
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp+0x30]
        call ext_00714570
        mov edi, dword ptr [ebp+8]
        lea eax, [esp+0x30]
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp+0xbc], ebx
        call ext_0070E390
        mov ecx, dword ptr [esi+0xac]
        push offset mem_00AADFB8
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        call ext_006D7A90
        test eax, eax
        jle done
        mov dword ptr [esp+0xc], ebx
    loop1:
        mov ecx, edi
        call ext_006DEEC0
        add eax, dword ptr [esp+0xc]
        fld qword ptr [eax]
        fld qword ptr [eax+8]
        fld qword ptr [eax+0x10]
        fld qword ptr [esp+0x70]
        fmul st, st(1)
        fld qword ptr [esp+0x50]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [esp+0x30]
        fmul st, st(4)
        faddp st(1), st
        fadd qword ptr [esp+0x90]
        fstp qword ptr [esp+0x10]
        fld qword ptr [esp+0x78]
        fmul st, st(1)
        fld qword ptr [esp+0x38]
        fmul st, st(4)
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        push ecx
        mov ecx, dword ptr [esi+0xac]
        faddp st(1), st
        fld qword ptr [esp+0x5c]
        fmul st, st(3)
        push edx
        add ecx, 4
        faddp st(1), st
        fadd qword ptr [esp+0xa0]
        fstp qword ptr [esp+0x20]
        fld qword ptr [esp+0x88]
        fmul st, st(1)
        fld qword ptr [esp+0x48]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp+0x68]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [esp+0xa8]
        fstp qword ptr [esp+0x28]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call ext_00727FE0
        mov eax, dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp+0x24]
        mov eax, dword ptr [esp+0x20]
        mov ecx, dword ptr [esi+0xac]
        push edx
        push eax
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp+0xc]
        mov ecx, edi
        add edx, 0x20
        inc ebx
        mov dword ptr [esp+0xc], edx
        call ext_006D7A90
        cmp ebx, eax
        jl loop1
    done:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp+0x30]
        mov dword ptr [esp+0xb8], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp+0xb0]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00776680] sub_00776680 (400 bytes)
extern "C" void ext_006BC390();
extern "C" void ext_006BC3A0();
extern "C" void ext_006BADB0();
extern "C" void ext_006D2130();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0079C4F0();
extern "C" __declspec(naked) void __fastcall fn_00776680(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1270
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x68
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x80]
        call ext_006BC390
        xor ebx, ebx
        mov dword ptr [esp + 8], eax
        test eax, eax
        jle done
        push ebp
        push edi
    lp:
        mov ecx, dword ptr [esp + 0x88]
        push ebx
        call ext_006BC3A0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa96f8
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x80], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ebp, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebp, 4
        mov ecx, ebp
        call ext_007275F0
        push 0x64
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        push 4
        push 0x10
        lea ecx, [esp + 0x1c]
        call ext_006D2130
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x28], edx
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x84], 1
        call dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi + 0xac]
        lea edx, [esp + 0x14]
        push edx
        call ext_0079C4F0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl lp
        pop edi
        pop ebp
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x68]
        mov dword ptr fs:[0], ecx
        add esp, 0x74
        ret 4
    done:
        mov ecx, dword ptr [esp + 0x70]
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x74
        ret 4
    }
}

// [0x0077E3F0] sub_0077E3F0 (480 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006BC7B0();
extern "C" void ext_006BC7E0();
extern "C" void ext_006E8030();
extern "C" void ext_006E8040();
extern "C" void ext_006E8050();
extern "C" void ext_006E8060();
extern "C" void ext_006E8070();
extern "C" void ext_006E8080();
extern "C" void ext_006E8810();
extern "C" void ext_0072CF10();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007287E0();
extern "C" void ext_0077E5D0();
extern "C" void ext_0077E620();
extern "C" void ext_0077E710();
extern "C" void ext_0077E830();
extern "C" void ext_0077E950();
extern "C" void ext_0077EA70();
extern "C" void ext_0077EB80();
extern "C" void ext_0077EC90();
extern "C" void ext_0077ED20();

extern "C" __declspec(naked) void __fastcall fn_0077E3F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 0xb5d2c0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaaf014
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaaef3c
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaaf008
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        push edi
        call ext_0077E5D0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8030
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8810
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8040
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8050
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8060
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8070
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8080
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, edi
        call ext_006BC380
        push eax
        mov ecx, esi
        call ext_0077E620
        mov ecx, dword ptr [esi + 0xb4]
        push 0x1
        call ext_0072CF10
        test al, al
        je L_s1
        push edi
        mov ecx, esi
        call ext_0077E710
    L_s1:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x2
        call ext_0072CF10
        test al, al
        je L_s2
        push edi
        mov ecx, esi
        call ext_0077E830
    L_s2:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x3
        call ext_0072CF10
        test al, al
        je L_s3
        push edi
        mov ecx, esi
        call ext_0077E950
    L_s3:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x8
        call ext_0072CF10
        test al, al
        je L_s4
        push edi
        mov ecx, esi
        call ext_0077EA70
    L_s4:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x4
        call ext_0072CF10
        test al, al
        je L_s5
        push edi
        mov ecx, esi
        call ext_0077EB80
    L_s5:
        push edi
        mov ecx, esi
        call ext_0077ED20
        mov ecx, edi
        call ext_006BC7B0
        push eax
        mov ecx, esi
        call ext_0077EC90
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00776810] sub_00776810 (480 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006BC520();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0079C4F0();
extern "C" __declspec(naked) void __fastcall fn_00776810(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c124e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb8
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xd0]
        call ext_006CA6A0
        xor ebp, ebp
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        jle L_epi
        push ebx
        push edi
    L_loop:
        mov ecx, dword ptr [esp + 0xd8]
        push ebp
        call ext_006BC520
        mov ecx, dword ptr [esi + 0xac]
        push 0xaab8c0
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0xd0], 0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x7c]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0xd0], 1
        call ext_006E7460
        mov ebx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ebx, 4
        mov dword ptr [esp + 0x14], eax
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006B9D70
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad91c
        add ebx, 4
        mov ecx, ebx
        call ext_007275F0
        push 0
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        push 4
        push 0x10
        lea ecx, [esp + 0x20]
        call ext_006D2130
        lea edx, [esp + 0x28]
        mov dword ptr [esp + 0x2c], edx
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0xd4], 2
        call dword ptr [eax + 0x10]
        lea edx, [esp + 0x18]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        call ext_0079C4F0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp + 0x14]
        inc ebp
        cmp ebp, eax
        jl L_loop
        pop edi
        pop ebx
    L_epi:
        mov ecx, dword ptr [esp + 0xc0]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0xc4
        ret 4
    }
}

// [0x007773F0] sub_007773F0 (400 bytes)
extern "C" void ext_006F7700();
extern "C" void ext_006F7710();
extern "C" void ext_006EA6D0();
extern "C" void ext_006F7680();
extern "C" void ext_007025B0();
extern "C" void ext_006F7730();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_00777580();
extern "C" void ext_007284D0();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_007773F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8bb186
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xbc
        push ebx
        mov ebx, dword ptr [esp + 0xd4]
        push esi
        push edi
        mov esi, ecx
        push ebx
        call ext_006F7700
        add esp, 4
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jle done
        push ebp
    top:
        push edi
        push ebx
        call ext_006F7710
        add esp, 8
        lea ecx, [esp + 0x14]
        mov ebp, eax
        call ext_006EA6D0
        mov ecx, dword ptr [esp + 0xdc]
        lea eax, [esp + 0x14]
        push eax
        push ebp
        mov dword ptr [esp + 0xdc], 0
        call ext_006F7680
        test al, al
        je skip
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        je l1
        call ext_007025B0
        cmp eax, dword ptr [esp + 0xe4]
        je l2
    l1:
        lea ecx, [esp + 0x18]
        call ext_006B9950
        test al, al
        jne skip
    l2:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad6ac
        add ecx, 4
        call ext_007275F0
        push edi
        push ebx
        call ext_006F7730
        mov ecx, dword ptr [esi + 0xac]
        add esp, 8
        add ecx, 4
        push eax
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, dword ptr [esp + 0xe4]
        mov edx, dword ptr [esp + 0xdc]
        push ecx
        push ebp
        push edx
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    skip:
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0xd4], 3
        call ext_006D80A0
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xd4], 2
        call ext_006D80A0
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0xd4], 1
        call ext_006D80A0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xd4], 0xffffffff
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl top
        pop ebp
    done:
        mov ecx, dword ptr [esp + 0xc8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xc8
        ret 0xc
    }
}

// [0x00778930] sub_00778930 (496 bytes)
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00778930(void* self) {
    __asm {
        push -1
        push 0x8c12c3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xb0]
        mov ebx, ecx
        push edi
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], ebx
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0xac], 0
        call ext_006E7460
        mov edi, dword ptr [ebx + 0xac]
        push 0xaa8e24
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [ebx + 0xac]
        push 0xaaeb08
        add ecx, 4
        call ext_007275F0
        xor ebx, ebx
    TOP:
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], 0x993ce0
        cmp ebx, ecx
        setl byte ptr [esp + 0x13]
        mov eax, dword ptr [esp + 0x1c]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0xac], 1
        jle AFTER1
    LOOP1:
        mov ecx, dword ptr [esp + 0x2c]
        mov edi, dword ptr [ecx + 4*ebp]
        test edi, edi
        je SKIP1
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
    SKIP1:
        mov eax, dword ptr [esp + 0x1c]
        inc ebp
        cmp ebp, eax
        jl LOOP1
    AFTER1:
        lea ecx, [esp + 0x1c]
        call ext_006D2250
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006D2160
        mov al, byte ptr [esp + 0x13]
        test al, al
        je ELSE1
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x38]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [eax + 0x14]
        mov dword ptr [esp + 0xac], 2
        mov ecx, dword ptr [ecx + 4*ebx]
        call ext_006E7460
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov ecx, dword ptr [edx + 0xac]
        add ecx, 4
        call ext_007279A0
        mov dword ptr [esp + 0x38], 0x993ce0
        mov eax, dword ptr [esp + 0x3c]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0xac], 3
        jle AFTER2
    LOOP2:
        mov eax, dword ptr [esp + 0x4c]
        mov edi, dword ptr [eax + 4*ebp]
        test edi, edi
        je SKIP2
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
    SKIP2:
        mov eax, dword ptr [esp + 0x3c]
        inc ebp
        cmp ebp, eax
        jl LOOP2
    AFTER2:
        lea ecx, [esp + 0x3c]
        call ext_006D2250
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006D2160
        inc ebx
        jmp TOP
    ELSE1:
        mov ecx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa0
        ret 4
    }
}

// [0x00776CE0] sub_00776CE0 (496 bytes)
extern "C" void ext_00715550();
extern "C" void ext_006BC440();
extern "C" void ext_006BADB0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" void ext_00728410();
extern "C" void ext_007283B0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_00727C80();
extern "C" void ext_007284D0();
extern "C" void ext_00776ED0();
extern "C" void ext_0079C4F0();
extern "C" __declspec(naked) void __fastcall fn_00776CE0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c124e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb8
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xd0]
        call ext_00715550
        xor ebp, ebp
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        jle L_epi
        push ebx
        push edi
    L_loop:
        mov ecx, dword ptr [esp + 0xd8]
        push ebp
        call ext_006BC440
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad21c
        add ecx, 0x4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0xd0], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x7c]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0xd0], 0x1
        call ext_006E7460
        mov ebx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ebx, 0x4
        mov dword ptr [esp + 0x14], eax
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006B9D70
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad91c
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x0
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        push 0x4
        push 0x10
        lea ecx, [esp + 0x20]
        call ext_006D2130
        lea edx, [esp + 0x28]
        mov dword ptr [esp + 0x2c], edx
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0xd4], 0x2
        call dword ptr [eax + 0x10]
        lea edx, [esp + 0x18]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        call ext_0079C4F0
        mov eax, dword ptr [esp + 0xd8]
        push ebp
        push eax
        mov ecx, esi
        call ext_00776ED0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov eax, dword ptr [esp + 0x14]
        inc ebp
        cmp ebp, eax
        jl L_loop
        pop edi
        pop ebx
    L_epi:
        mov ecx, dword ptr [esp + 0xc0]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0xc4
        ret 4
    }
}

// [0x007718D0] sub_007718D0 (544 bytes)
extern "C" void ext_006BA220();
extern "C" void ext_006FE610();
extern "C" void ext_006FE4B0();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FE870();
extern "C" int mem_009252A8;
extern "C" int mem_00925208;
extern "C" int mem_009252AC;
extern "C" int mem_00925268;
extern "C" int mem_009251D8;
extern "C" int mem_00925264;

extern "C" __declspec(naked) void __fastcall fn_007718D0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c008e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edx, [esp + 0xac]
        mov eax, dword ptr [esi + 0xb8]
        mov dword ptr [esp + 0x10], esi
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        push edx
        call ext_006FE610
        mov ebx, dword ptr [esp + 0x110]
        push 1
        lea eax, [esp + 0x6c]
        push ebx
        push eax
        mov dword ptr [esp + 0x114], 0
        call ext_006FE4B0
        add esp, 0x14
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x100], 1
        call ext_006E7460
        push eax
        lea ecx, [esp + 0xb0]
        call ext_006E7460
        lea ecx, [esp + 0x18]
        push eax
        push ecx
        call ext_006FE2A0
        add esp, 0xc
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x100], 2
        call ext_006E7460
        push eax
        call ext_006FE870
        add esp, 4
        test al, al
        jne L_fail
        mov ebp, dword ptr [mem_009252A8]
        push 0xaab92c
        push ebx
        call ebp
        mov edi, eax
        add esp, 8
        test edi, edi
        jne L_open
        add esi, 0x60
        push 0xaaec8c
        mov ecx, esi
        call ext_006BA220
        push ebx
        jmp L_2c
    L_open:
        push 0xaab934
        lea ecx, [esp + 0x18]
        call ext_006E7460
        push eax
        call ebp
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        jne L_read
        add esi, 0x60
        jmp L_16
    L_read:
        push 0x400
        call dword ptr [mem_00925208]
        mov ebp, dword ptr [mem_009252AC]
        push edi
        mov esi, eax
        push 0x400
        push 1
        push esi
        call ebp
        add esp, 0x14
        test eax, eax
        jle L_eof
    L_loop:
        push ebx
        push eax
        push 1
        push esi
        call dword ptr [mem_00925268]
        push edi
        push 0x400
        push 1
        push esi
        call ebp
        add esp, 0x20
        test eax, eax
        jg L_loop
    L_eof:
        test byte ptr [edi + 0xc], 0x10
        jne L_free
        mov edx, dword ptr [esp + 0x10]
        lea esi, [edx + 0x60]
    L_16:
        push 0xaaec6c
        mov ecx, esi
        call ext_006BA220
        lea ecx, [esp + 0x14]
        call ext_006E7460
        push eax
    L_2c:
        mov ecx, esi
        call ext_006BA220
        push 0xaaec68
        mov ecx, esi
        call ext_006BA220
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x100], 1
        call ext_006B9D70
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x100], 0
        call ext_006B9D70
        lea ecx, [esp + 0xac]
        mov dword ptr [esp + 0x100], 0xffffffff
        call ext_006B9D70
        xor al, al
        jmp L_end
    L_free:
        push esi
        call dword ptr [mem_009251D8]
        mov esi, dword ptr [mem_00925264]
        push edi
        call esi
        push ebx
        call esi
        add esp, 0xc
    L_fail:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x100], 1
        call ext_006B9D70
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x100], 0
        call ext_006B9D70
        lea ecx, [esp + 0xac]
        mov dword ptr [esp + 0x100], 0xffffffff
        call ext_006B9D70
        mov al, 1
    L_end:
        mov ecx, dword ptr [esp + 0xf8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xf4
        ret 4
    }
}

// [0x00778410] sub_00778410 (416 bytes)
extern "C" void ext_006BADB0(); extern "C" void ext_006C9360(); extern "C" void ext_006C98F0(); extern "C" void ext_006CA940(); extern "C" void ext_006DC460(); extern "C" void ext_006DC480(); extern "C" void ext_006E57B0(); extern "C" void ext_007275F0(); extern "C" void ext_007279A0(); extern "C" void ext_00727FE0(); extern "C" void ext_007283B0(); extern "C" void ext_00728410(); extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_00778410(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ecx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x8], ebp
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x28]
        cmp al, 1
        jne fail
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebp + 0xac]
        push esi
        push edx
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [ebp + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 4
        call ext_00728410
        mov esi, dword ptr [ebp + 0xac]
        push 0xaacd0c
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push 0x3ff19999
        push 0x9999999a
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        mov ecx, edi
        call ext_006DC480
        mov ecx, edi
        mov esi, eax
        call ext_006DC460
        cmp esi, eax
        je done
        push ebx
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x14]
        mov ebx, eax
        mov al, byte ptr [esp + 0x24]
        test al, al
        je l1
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        test eax, eax
        je l1
        push 0x42c80000
        push 0
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        mov ecx, eax
        call ext_006CA940
    l1:
        xor esi, esi
        test ebx, ebx
        jle l4
    l2:
        mov eax, dword ptr [ebp + 0xac]
        test eax, eax
        je l3
        lea ebp, [eax + 4]
        jmp l3b
    l3:
        xor ebp, ebp
    l3b:
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov edx, dword ptr [eax]
        push 0
        push 1
        push 0xaa9470
        push 1
        push 1
        push 0
        push ebp
        push esi
        mov ecx, eax
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006E57B0
        mov ebp, dword ptr [esp + 0x10]
        inc esi
        cmp esi, ebx
        jl l2
    l4:
        mov al, byte ptr [esp + 0x24]
        pop ebx
        test al, al
        je done
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        test eax, eax
        je done
        push 0x3c23d70a
        push 0
        mov ecx, edi
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        mov ecx, eax
        call ext_006CA940
    done:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 4
        call ext_007283B0
        pop esi
        pop edi
        mov al, 1
        pop ebp
        pop ecx
        ret 0x10
    fail:
        pop edi
        xor al, al
        pop ebp
        pop ecx
        ret 0x10
    }
}

// [0x0077F020] sub_0077F020 (560 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_00712000();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" int mem_00B5F1F8;
extern "C" int mem_00B5F060;

extern "C" __declspec(naked) void __fastcall fn_0077F020(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        xor ebp, ebp
        push esi
        cmp ebx, ebp
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], ebp
        je f20_L04B
        mov ecx, dword ptr [mem_00B5F1F8]
        mov eax, dword ptr [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr [eax + 0x14]
        test al, al
        mov dword ptr [esp + 0x1c], ebx
        jne f20_L04F
    f20_L04B:
        mov dword ptr [esp + 0x1c], ebp
    f20_L04F:
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je f20_L07D
        mov eax, dword ptr [mem_00B5F060]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x14]
        test al, al
        je f20_L07D
        mov eax, dword ptr [mem_00B5F060]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x14]
        neg al
        sbb eax, eax
        and eax, edi
        mov ebp, eax
    f20_L07D:
        test ebx, ebx
        je f20_L0A9
        mov eax, dword ptr [mem_00B5F060]
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0x14]
        test al, al
        je f20_L0A9
        mov eax, dword ptr [mem_00B5F060]
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0x14]
        neg al
        sbb eax, eax
        and eax, ebx
        mov dword ptr [esp + 0x10], eax
    f20_L0A9:
        test ebp, ebp
        je f20_L239
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je f20_L15E
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae58c
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae588
        add ecx, 4
        call ext_007279A0
        test edi, edi
        je f20_L0FC
        mov eax, dword ptr [mem_00B5F060]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x14]
        test al, al
        je f20_L0FC
        mov ecx, edi
        jmp f20_L0FE
    f20_L0FC:
        xor ecx, ecx
    f20_L0FE:
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x12c]
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        test ebx, ebx
        je f20_L148
        mov ecx, dword ptr [mem_00B5F060]
        mov eax, dword ptr [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr [eax + 0x14]
        test al, al
        je f20_L148
        mov ecx, ebx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x12c]
        mov ecx, eax
        call ext_006BADB0
        jmp f20_L212
    f20_L148:
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x12c]
        mov ecx, eax
        call ext_006BADB0
        jmp f20_L212
    f20_L15E:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        je f20_L239
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae58c
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae580
        add ecx, 4
        call ext_007279A0
        test edi, edi
        je f20_L1AA
        mov ecx, dword ptr [mem_00B5F060]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x14]
        test al, al
        je f20_L1AA
        mov ecx, edi
        jmp f20_L1AC
    f20_L1AA:
        xor ecx, ecx
    f20_L1AC:
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x12c]
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov ebx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [ebx + 8]
        test edi, edi
        je f20_L1EB
        mov ecx, dword ptr [mem_00B5F060]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x14]
        test al, al
        je f20_L1EB
        mov ecx, edi
        jmp f20_L1ED
    f20_L1EB:
        xor ecx, ecx
    f20_L1ED:
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x12c]
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov ecx, ebx
        call ext_00712000
    f20_L212:
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
    f20_L239:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x0077E1C0] sub_0077E1C0 (560 bytes)
extern "C" int mem_00B5D2C0;
extern "C" int mem_00AAEFF4;
extern "C" int mem_00AAEF3C;
extern "C" int mem_00AAD3E4;
extern "C" int mem_00AAE894;
extern "C" void ext_006BC7E0();
extern "C" void ext_006BC370();
extern "C" void ext_006BC7B0();
extern "C" void ext_006BC380();
extern "C" void ext_006C2860();
extern "C" void ext_006B99C0();
extern "C" void ext_006E9420();
extern "C" void ext_006E8030();
extern "C" void ext_006E8040();
extern "C" void ext_006E8050();
extern "C" void ext_006E8060();
extern "C" void ext_006E8070();
extern "C" void ext_006E8080();
extern "C" void ext_006E8810();
extern "C" void ext_0079D7A0();
extern "C" void ext_0072CF10();
extern "C" void ext_00776810();
extern "C" void ext_00776CE0();
extern "C" void ext_007765F0();
extern "C" void ext_00777EE0();
extern "C" void ext_0077D910();
extern "C" void ext_00776680();
extern "C" void ext_007785B0();
extern "C" void ext_007779C0();
extern "C" void ext_0077CFB0();
extern "C" void ext_0077B230();
extern "C" void ext_0077D240();
extern "C" void ext_0077CB10();
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();
extern "C" void ext_007287E0();
extern "C" void ext_00728410();
extern "C" void ext_007275F0();

extern "C" __declspec(naked) void __fastcall fn_0077E1C0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push offset mem_00B5D2C0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAEFF4
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAEF3C
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00B5D2C0
        add ecx, 0x4
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD3E4
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ecx, dword ptr [esi + 0xb0]
        push 0
        push 0
        push offset mem_00AAE894
        mov eax, dword ptr [ecx]
        push 0
        call dword ptr [eax + 8]
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0xbc], 0
        mov ecx, edi
        call ext_006BC7E0
        push 1
        mov ecx, edi
        call ext_006BC370
        mov ecx, eax
        call ext_006C2860
        mov ecx, edi
        mov ebx, eax
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9420
        lea ecx, [ebx + eax + 0x8]
        mov dword ptr [esi + 0xc0], ecx
        mov ecx, edi
        call ext_006BC370
        test eax, eax
        je L_skip1
        mov ecx, edi
        call ext_006BC370
        push eax
        mov ecx, esi
        call ext_007765F0
    L_skip1:
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8030
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8810
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8040
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8050
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8060
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8070
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8080
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, edi
        call ext_006BC380
        push eax
        mov ecx, esi
        call ext_00777EE0
        mov ecx, esi
        call ext_0077D910
        push edi
        mov ecx, esi
        call ext_00776680
        mov ecx, edi
        call ext_006BC7B0
        push eax
        mov ecx, esi
        call ext_007785B0
        push edi
        mov ecx, esi
        call ext_007779C0
        push edi
        mov ecx, esi
        call ext_0077CFB0
        push edi
        mov ecx, esi
        call ext_0077B230
        push edi
        mov ecx, esi
        call ext_0077D240
        push edi
        mov ecx, esi
        call ext_0077CB10
        mov ecx, dword ptr [esi + 0xb4]
        push 8
        call ext_0072CF10
        test al, al
        je L_skip2
        push edi
        mov ecx, esi
        call ext_00776810
        push edi
        mov ecx, esi
        call ext_00776CE0
    L_skip2:
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr [edx + 0x64]
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00778B20] sub_00778B20 (560 bytes)
extern "C" void ext_008C130F();
extern "C" void ext_006E72A0();
extern "C" void ext_0071DEA0();
extern "C" void ext_006B9E60();
extern "C" void ext_006E7390();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" void ext_006D2250();
extern "C" void ext_006D2160();
extern "C" void ext_006B9D80();
extern "C" void ext_0077F650();
extern "C" int mem_00AA8CC4;
extern "C" int mem_00AA8E24;
extern "C" int mem_00AAEB08;
extern "C" int mem_00993CE0;

extern "C" __declspec(naked) void __fastcall fn_00778B20(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset ext_008C130F
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xd4
        push esi
        push edi
        mov edi, ecx
        push offset mem_00AA8CC4
        lea ecx, [esp + 0x48]
        call ext_006B9D80
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0xe4], 0
        call ext_006E72A0
        mov esi, dword ptr [esp + 0xec]
        mov byte ptr [esp + 0xe4], 1
        test esi, esi
        je else_branch
        mov ecx, esi
        call ext_0071DEA0
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x90]
        push ecx
        mov ecx, esi
        fstp st(0)
        call dword ptr [eax + 0x1c]
        push eax
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xe8], 2
        call ext_006B9E60
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0xe4], 1
        call ext_006B9D70
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x20]
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xe8], 3
        call ext_006E7390
        mov dword ptr [esp + 0x24], offset mem_00993CE0
        mov eax, dword ptr [esp + 0x28]
        xor esi, esi
        test eax, eax
        mov byte ptr [esp + 0xe4], 4
        jle loop1_end
    loop1:
        mov ecx, dword ptr [esp + 0x38]
        mov ecx, dword ptr [ecx + 4 * esi]
        test ecx, ecx
        je loop1_skip
        push 1
        call ext_0077F650
    loop1_skip:
        mov eax, dword ptr [esp + 0x28]
        inc esi
        cmp esi, eax
        jl loop1
    loop1_end:
        lea ecx, [esp + 0x28]
        call ext_006D2250
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xe4], 1
        call ext_006D2160
        jmp join
    else_branch:
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 8]
        push 0
        push offset mem_00AA8CC4
        push edx
        lea ecx, [esp + 0x14]
        call dword ptr [eax + 8]
    join:
        push ebp
        lea ecx, [esp + 0x48]
        call ext_006E7460
        mov esi, dword ptr [edi + 0xac]
        push offset mem_00AA8E24
        add esi, 4
        mov ebp, eax
        mov ecx, esi
        call ext_007275F0
        push ebp
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov ecx, dword ptr [edi + 0xac]
        push offset mem_00AAEB08
        add ecx, 4
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        xor esi, esi
        test eax, eax
        pop ebp
        jle loop2_end
    loop2:
        mov ecx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 4 * esi]
        call ext_006E7460
        mov ecx, dword ptr [edi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [esp + 0xc]
        inc esi
        cmp esi, eax
        jl loop2
    loop2_end:
        mov ecx, dword ptr [edi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov dword ptr [esp + 8], offset mem_00993CE0
        mov eax, dword ptr [esp + 0xc]
        xor edi, edi
        test eax, eax
        mov byte ptr [esp + 0xe4], 5
        jle loop3_end
    loop3:
        mov edx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [edx + 4 * edi]
        test esi, esi
        je loop3_skip
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
    loop3_skip:
        mov eax, dword ptr [esp + 0xc]
        inc edi
        cmp edi, eax
        jl loop3
    loop3_end:
        lea ecx, [esp + 0xc]
        call ext_006D2250
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xe4], 0
        call ext_006D2160
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0xe4], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xdc]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xe0
        ret 4
    }
}

// [0x00779860] sub_00779860 (560 bytes)
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_00715550();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0077A7C0();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();
extern "C" void ext_0077F5D0();
extern "C" void ext_00784650();
extern "C" __declspec(naked) void __fastcall fn_00779860(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x24]
        push 0x3
        call ext_006FDF30
        mov ebp, eax
        xor ebx, ebx
        test ebp, ebp
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0xc], ebx
        jle EARLY_RET
        push edi
    OUTER:
        mov ecx, dword ptr [esp + 0x28]
        push 0x3
        push ebx
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov edi, eax
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        je SKIP_OUTER
        mov ecx, dword ptr [esp + 0x2c]
        push ebx
        push edi
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadb8c
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push ebx
        add ecx, 0x4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ebx, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov eax, dword ptr [edi]
        push eax
        call ext_0077F550
        mov ebx, dword ptr [esi + 0xac]
        add esp, 0x4
        add ebx, 0x4
        mov ebp, eax
        push 0xaadc2c
        mov ecx, ebx
        call ext_007275F0
        push ebp
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_0077F5A0
        mov ebx, dword ptr [esi + 0xac]
        add esp, 0x4
        add ebx, 0x4
        mov ebp, eax
        push 0xaadc10
        mov ecx, ebx
        call ext_007275F0
        push ebp
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        mov eax, dword ptr [edi + 0x38]
        push eax
        call ext_0077F5D0
        mov ebx, dword ptr [esi + 0xac]
        add esp, 0x4
        add ebx, 0x4
        mov ebp, eax
        push 0xaadc7c
        mov ecx, ebx
        call ext_007275F0
        push ebp
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        mov ebx, dword ptr [esi + 0xac]
        mov ecx, dword ptr [edi + 0x44]
        mov eax, dword ptr [edi + 0x40]
        add ebx, 0x4
        mov dword ptr [esp + 0x20], ecx
        push 0xaadc6c
        mov ecx, ebx
        mov dword ptr [esp + 0x20], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, ebx
        push eax
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc60
        add ecx, 0x4
        call ext_007275F0
        mov ebp, dword ptr [edi + 0x20]
        xor ebx, ebx
        test ebp, ebp
        jbe AFTER_INNER
    INNER:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edi + 0x30]
        cmp eax, 0x2
        mov eax, dword ptr [ecx + 4*ebx]
        jne NOT_CALL
        cmp eax, -0x1
        je NOT_CALL
        mov edx, dword ptr [esp + 0x28]
        push ebx
        push edi
        mov ecx, dword ptr [edx + 0x4]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0xc]
        push eax
        mov ecx, esi
        call ext_0077A7C0
    NOT_CALL:
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00727C80
        inc ebx
        cmp ebx, ebp
        jb INNER
    AFTER_INNER:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ebx, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x18]
    SKIP_OUTER:
        inc ebx
        cmp ebx, ebp
        mov dword ptr [esp + 0x10], ebx
        jl OUTER
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x14
        ret 0x8
    EARLY_RET:
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x14
        ret 0x8
    }
}

// [0x00772950] sub_00772950 (576 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C2ED0();
extern "C" void ext_006C3030();
extern "C" void ext_006D3D70();
extern "C" void ext_006D5090();
extern "C" void ext_006D80A0();
extern "C" void ext_006FD980();
extern "C" void ext_006FDD40();
extern "C" void ext_0070C130();
extern "C" void ext_007294F0();
extern "C" void ext_00772950();
extern "C" void ext_00773660();
extern "C" int mem_0092525C;

extern "C" __declspec(naked) void __fastcall fn_00772950(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bfd88
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0x34]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, ebx
        call ext_006C2ED0
        cmp al, 1
        je L_a_call3030
        cmp byte ptr [ebp + 0xfe], 1
        jne L_a_end
    L_a_call3030:
        mov ecx, ebx
        call ext_006C3030
        mov esi, eax
        xor edi, edi
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax]
        cmp eax, 5
        je L_a_5
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx]
        cmp eax, 6
        je L_a_5
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        cmp eax, 4
        jne L_a_0D
        cmp byte ptr [ebp + 0xfc], 1
        jne L_a_0D
        mov ecx, dword ptr [ebp + 4]
        call ext_006D3D70
        push ebx
        mov ecx, eax
        mov dword ptr [esp + 0x44], eax
        call ext_007294F0
        mov ecx, ebx
        call ext_006C3030
        mov ecx, dword ptr [esp + 0x40]
        mov esi, eax
        push ecx
        jmp L_a_05
    L_a_5:
        mov ecx, dword ptr [ebp + 4]
        call ext_006D3D70
        push ebx
        mov ecx, eax
        mov dword ptr [esp + 0x44], eax
        call ext_007294F0
        mov ecx, ebx
        call ext_006C3030
        mov edx, dword ptr [esp + 0x40]
        mov esi, eax
        push edx
    L_a_05:
        mov ecx, dword ptr [ebp + 4]
        call ext_006D5090
    L_a_0D:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        cmp eax, 4
        jne L_a_end
        push 0
        mov ecx, esi
        call ext_006FD980
        test eax, eax
        jle L_a_70
        dec eax
        push 0
        push eax
        mov ecx, esi
        call ext_006FDD40
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call ext_0070C130
        sub esp, 0x20
        mov ecx, 8
        mov esi, eax
        mov edi, esp
        rep movsd
        mov ecx, ebp
        mov dword ptr [esp + 0x58], 0
        call ext_00773660
        lea ecx, [esp + 0x10]
        mov edi, eax
        mov dword ptr [esp + 0x38], 0xffffffff
        call ext_006D80A0
    L_a_70:
        mov edx, dword ptr [ebp + 0xac]
        mov esi, dword ptr [mem_0092525C]
        push 0xaaeea8
        push edx
        call esi
        mov eax, dword ptr [ebp + 0xac]
        add esp, 8
        push 0xaaed80
        push eax
        call esi
        mov ecx, dword ptr [ebp + 0xac]
        add esp, 8
        push 0xaaee94
        push ecx
        call esi
        add esp, 8
        mov ecx, ebx
        call ext_006BADB0
        mov edx, dword ptr [ebp + 0xac]
        push eax
        push 0xaaeee4
        push edx
        call esi
        mov eax, dword ptr [ebp + 0xac]
        add esp, 0xc
        push 0xaaee14
        push eax
        call esi
        mov ecx, dword ptr [ebp + 0xac]
        add esp, 8
        push 0xaaed98
        push ecx
        call esi
        mov edx, dword ptr [ebp + 0xac]
        add esp, 8
        push 0xaaeedc
        push edx
        call esi
        add esp, 8
        mov ecx, ebx
        call ext_006C2ED0
        cmp al, 1
        jne L_a_0F
        mov eax, dword ptr [ebp + 0xac]
        push edi
        push 0xaaed78
        push eax
        jmp L_a_1E
    L_a_0F:
        mov ecx, dword ptr [ebp + 0xac]
        neg edi
        push edi
        push 0xaaed78
        push ecx
    L_a_1E:
        call esi
        mov edx, dword ptr [ebp + 0xac]
        add esp, 0xc
        push 0xaaeed4
        push edx
        call esi
        mov eax, dword ptr [ebp + 0xac]
        add esp, 8
        push 0xaaedd4
        push eax
        call esi
        add esp, 8
    L_a_end:
        mov al, byte ptr [esp + 0x44]
        test al, al
        je L_a_done
        push 0
        mov ecx, ebx
        call ext_006C2860
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle L_a_done
    L_a_loop:
        push 1
        push esi
        mov ecx, ebx
        call ext_006C28D0
        push eax
        mov ecx, ebp
        call ext_00772950
        inc esi
        cmp esi, edi
        jl L_a_loop
    L_a_done:
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x2c
        ret 8
    }
}

// [0x00776A90] sub_00776A90 (592 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006D23F0();
extern "C" void ext_006E87A0();
extern "C" void ext_006E8800();
extern "C" void ext_006E8810();
extern "C" void ext_006E8820();
extern "C" void ext_007287E0();
extern "C" void ext_00727FE0();
extern "C" __declspec(naked) void __fastcall fn_00776A90(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8810
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae950
        add ecx, 4
        mov dword ptr [esp + 0x14], eax
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae8fc
        add ecx, 4
        call ext_007287E0
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x6c
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaad48c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        test eax, eax
        jle done_loop
    loop_top:
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8820
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad484
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        lea ebx, [edi + 8]
        push 0
        mov ecx, ebx
        call ext_006D23F0
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov eax, dword ptr [eax]
        push eax
        call ext_00727FE0
        push 1
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 2
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        lea ebx, [edi + 0x28]
        push 0
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 1
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 2
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        xor eax, eax
        mov al, byte ptr [edi]
        add ecx, 4
        push eax
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [ebp + 8]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0xc], eax
        jl loop_top
    done_loop:
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E87A0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 4
        push 0xaad478
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8800
        mov esi, dword ptr [esi + 0xac]
        push 0xaad468
        fstp qword ptr [esp + 0x14]
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        push edx
        push eax
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x007785B0] sub_007785B0 (592 bytes)
extern "C" void ext_00718010();
extern "C" void ext_00724BF0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072F760();
extern "C" __declspec(naked) void __fastcall fn_007785B0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3a8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3b4
        add ecx, 0x4
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad39c
        add ecx, 0x4
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push 0xaad39c
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ecx, 0x4
        call ext_00724BF0
        mov ebx, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_00718010
        test eax, eax
        je L_skip1
        mov ecx, edi
        call ext_00718010
        push eax
        mov ecx, esi
        call ext_0072F760
    L_skip1:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad390
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ebx, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad388
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x4c]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad380
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x98]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad378
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0xe4]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad36c
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x130]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad360
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x17c]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad358
        add ecx, 0x4
        call ext_00724BF0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
    L_end:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0077F250] sub_0077F250 (656 bytes)
extern "C" void ext_006BDAF0();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" void ext_0077F020();
extern "C" void ext_0077F250();
extern "C" void ext_0077F4E0();
extern "C" void ext_0077F520();
extern "C" int mem_00B5E400;
extern "C" int mem_00B5F060;

extern "C" __declspec(naked) void __fastcall fn_0077F250(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x28]
        mov ebp, ecx
        push edi
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebp
        call dword ptr [eax + 0xc]
        mov edi, eax
        mov eax, dword ptr [mem_00B5E400]
        or ebx, -1
        push eax
        mov dword ptr [esp + 0x24], 0
        mov dword ptr [esp + 0x28], ebx
        call ext_006FC6E0
        add esp, 4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        call ext_0077F520
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        je L_zero_a
        mov eax, dword ptr [eax + 0x14]
        jmp L_join_a
    L_zero_a:
        xor eax, eax
    L_join_a:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], ebx
        call ext_0077F4E0
        mov edi, eax
        test edi, edi
        je L_end
    L_loop1:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0xc]
        push eax
        push edi
        mov ecx, ebp
        call ext_0077F020
        mov eax, dword ptr [esp + 0x24]
        inc eax
        mov dword ptr [esp + 0x24], eax
        js L_end
        cmp eax, dword ptr [esp + 0x20]
        jge L_end
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [eax + 2*eax]
        mov edx, dword ptr [ecx + 0x10]
        lea edi, [edx + 4*eax]
        mov ecx, edi
        call ext_006BDAF0
        test al, al
        je L_end
        mov eax, dword ptr [edi + 0x4]
        mov edi, dword ptr [eax + 0x4]
        test edi, edi
        jne L_loop1
    L_end:
        mov edx, dword ptr [esi]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr [esp + 0x10], ebx
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [eax + 0xc0]
        add eax, 0xc0
        test ecx, ecx
        jle L_after2
    L_loop2:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0xd0]
        add eax, 0xc0
        mov eax, dword ptr [mem_00B5E400]
        mov edi, dword ptr [ecx + 4*ebx]
        push eax
        mov dword ptr [esp + 0x1c], edi
        call ext_006FC6E0
        add esp, 4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov ebp, eax
        xor edi, edi
        cmp ebp, edi
        je L_zero_b
        mov edx, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x2c], edx
        jmp L_join_b
    L_zero_b:
        mov dword ptr [esp + 0x2c], edi
    L_join_b:
        cmp dword ptr [esp + 0x2c], edi
        jle L_next2
        mov ebx, dword ptr [ebp + 0x10]
        mov ecx, ebx
        call ext_006BDAF0
        test al, al
        je L_next2_restore
        mov eax, dword ptr [ebx + 0x4]
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        je L_next2_restore
    L_inner:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        call ext_0077F020
        inc edi
        js L_next2_restore
        cmp edi, dword ptr [esp + 0x2c]
        jge L_next2_restore
        mov eax, dword ptr [ebp + 0x10]
        lea edx, [edi + 2*edi]
        lea ecx, [eax + 4*edx]
        mov eax, dword ptr [eax + 4*edx + 0x4]
        test eax, eax
        je L_next2_restore
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp edx, ebx
        jne L_next2_restore
        mov eax, dword ptr [eax + 0x4]
        test eax, eax
        jne L_inner
    L_next2_restore:
        mov ebx, dword ptr [esp + 0x10]
    L_next2:
        mov eax, dword ptr [esi]
        inc ebx
        mov ecx, esi
        mov dword ptr [esp + 0x10], ebx
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0xc0]
        add eax, 0xc0
        cmp ebx, ecx
        jl L_loop2
    L_after2:
        mov al, byte ptr [esp + 0x30]
        test al, al
        je L_done
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x8]
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov esi, eax
        mov eax, dword ptr [mem_00B5F060]
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ebx, eax
        xor edi, edi
        cmp ebx, edi
        je L_zero_c
        mov ecx, dword ptr [ebx + 0x14]
        mov dword ptr [esp + 0x2c], ecx
        jmp L_join_c
    L_zero_c:
        mov dword ptr [esp + 0x2c], edi
    L_join_c:
        cmp dword ptr [esp + 0x2c], edi
        jle L_done
        mov ecx, dword ptr [ebx + 0x10]
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, edi
        je L_done
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_done
        mov esi, dword ptr [eax + 0x4]
        cmp esi, edi
        je L_done
    L_loop3:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x12c]
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x8]
        mov ecx, ebp
        dec ecx
        je L_flag1
        sub ecx, 0x9
        je L_flag_chk
        mov byte ptr [esp + 0x30], 0
        jmp L_push3
    L_flag_chk:
        cmp eax, 0x1
        je L_flag0
        cmp eax, 0xa
        jne L_flag1
    L_flag0:
        mov byte ptr [esp + 0x30], 0
        jmp L_push3
    L_flag1:
        mov byte ptr [esp + 0x30], 1
    L_push3:
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x12c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        call ext_0077F250
        inc edi
        js L_done
        cmp edi, dword ptr [esp + 0x2c]
        jge L_done
        mov ecx, dword ptr [ebx + 0x10]
        lea eax, [edi + 2*edi]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_done
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_done
        mov esi, dword ptr [eax + 0x4]
        test esi, esi
        jne L_loop3
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x8
    }
}

// [0x00779410] sub_00779410 (656 bytes)
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_006B99C0();
extern "C" void ext_00784650();
extern "C" void ext_006D2AA0();
extern "C" void ext_0077FAE0();
extern "C" void ext_006D80A0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007279A0();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();

extern "C" __declspec(naked) void __fastcall fn_00779410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x8c1368
        _emit 0x64
        _emit 0xA1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        sub esp, 0x6c
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [ebp + 0x8]
        push 0x1
        call ext_006FDF30
        xor edi, edi
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0xc], edi
        jle f779_end
        jmp f779_body2
    f779_body1:
        mov edi, dword ptr [esp + 0xc]
    f779_body2:
        mov ecx, dword ptr [ebp + 0x8]
        push 0x1
        push edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006B99C0
        mov ecx, dword ptr [ebp + 0xc]
        mov ebx, eax
        push edi
        push ebx
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadbb4
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 0x4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx]
        push eax
        call ext_0077F550
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc2c
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 0x4]
        push eax
        call ext_0077F5A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 0x4
        add edi, 0x4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc10
        mov ecx, edi
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc44
        add ecx, 0x4
        call ext_007275F0
        mov eax, dword ptr [ebx + 0x8]
        add ebx, 0x8
        xor edi, edi
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        jbe f779_after_loop2
    f779_loop2:
        lea edx, [esp + 0x18]
        push edi
        push edx
        mov ecx, ebx
        call ext_006D2AA0
        push 0x0
        mov ecx, eax
        mov dword ptr [esp + 0x84], 0x0
        call ext_0077FAE0
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 0x8
        add ecx, 0x4
        fstp qword ptr [esp]
        call ext_00727FE0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006D80A0
        lea eax, [esp + 0x38]
        push edi
        push eax
        mov ecx, ebx
        call ext_006D2AA0
        push 0x1
        mov ecx, eax
        mov dword ptr [esp + 0x84], 0x1
        call ext_0077FAE0
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 0x8
        add ecx, 0x4
        fstp qword ptr [esp]
        call ext_00727FE0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006D80A0
        lea ecx, [esp + 0x58]
        push edi
        push ecx
        mov ecx, ebx
        call ext_006D2AA0
        push 0x2
        mov ecx, eax
        mov dword ptr [esp + 0x84], 0x2
        call ext_0077FAE0
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 0x8
        add ecx, 0x4
        fstp qword ptr [esp]
        call ext_00727FE0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006D80A0
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jb f779_loop2
    f779_after_loop2:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0xc], eax
        jl f779_body1
    f779_end:
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        pop esi
        mov al, 0x1
        _emit 0x64
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x0077D240] sub_0077D240 (656 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006C9360();
extern "C" void ext_0072CF10();
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006B9D20();
extern "C" void ext_006BADB0();
extern "C" void ext_006E91E0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();
extern "C" void ext_00704EB0();
extern "C" void ext_006D59B0();
extern "C" void ext_00783700();
extern "C" void ext_0077D4D0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9D10();
extern "C" void ext_006D2170();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_0077D240(void* self) {
    __asm {
        push -1
        push 0x8c14cc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xdc]
        push edi
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9360
        mov edi, eax
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr [esp + 0x18], edi
        je L_end
        mov ecx, dword ptr [esi + 0xb4]
        push 0xc
        call ext_0072CF10
        test al, al
        je L_skip1
        mov eax, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x1c], 0x1
        mov cl, byte ptr [eax + 0x19]
        test cl, cl
        jne L_cont1
L_skip1:
        mov byte ptr [esp + 0x1c], 0x0
L_cont1:
        push edi
        call ext_006A5C62
        add esp, 0x4
        mov ebx, eax
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x10], ebx
        push 0x4
        push 0x10
        call ext_006D2130
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x34], ecx
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0xd8], ebp
        call ext_006B9D10
        cmp edi, ebp
        mov byte ptr [esp + 0xd8], 0x1
        jle L_after_loop
L_loop:
        mov ecx, dword ptr [esp + 0xe0]
        push ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E91E0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad20c
        add ecx, 0x4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x38]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        mov byte ptr [esp + 0xd8], 0x2
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xd8], 0x1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push 0x4c
        call ext_006A5C62
        mov ebx, eax
        add esp, 0x4
        mov dword ptr [esp + 0x14], ebx
        test ebx, ebx
        mov byte ptr [esp + 0xd8], 0x3
        je L_null_obj
        mov ecx, edi
        call ext_00704EB0
        push eax
        mov ecx, ebx
        call ext_006B9D80
        jmp L_after_obj
L_null_obj:
        xor eax, eax
L_after_obj:
        mov edx, dword ptr [esp + 0x20]
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xe0], 0x1
        mov dword ptr [esp + 0x1c], eax
        call ext_006D2170
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [esp + 0x34]
        lea edx, [ecx + ebp]
        mov ecx, dword ptr [eax + 4*ebp]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call ext_0077D4D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov eax, dword ptr [esp + 0x18]
        inc ebp
        cmp ebp, eax
        jl L_loop
        mov ebx, dword ptr [esp + 0x10]
        mov edi, eax
L_after_loop:
        xor esi, esi
        test edi, edi
        jle L_free
L_inner:
        cmp byte ptr [esi + ebx], 0x0
        je L_inner_next
        push esi
        lea ecx, [esp + 0x24]
        call ext_006D59B0
        mov edx, dword ptr [eax]
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push edx
        call ext_006B9D20
        call ext_00783700
        add esp, 0x4c
L_inner_next:
        inc esi
        cmp esi, edi
        jl L_inner
L_free:
        push ebx
        call ext_006A5C5C
        mov edi, dword ptr [esp + 0x24]
        add esp, 0x4
        test edi, edi
        je L_after_free
L_free_loop:
        mov eax, dword ptr [esp + 0x30]
        dec edi
        mov esi, dword ptr [eax + 4*edi]
        test esi, esi
        je L_free_skip
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
L_free_skip:
        test edi, edi
        jne L_free_loop
L_after_free:
        lea ecx, [esp + 0x20]
        call ext_006D2250
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xd8], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xd8], 0xffffffff
        call ext_006D2160
L_end:
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xcc
        ret 0x4
    }
}

// [0x00779F50] sub_00779F50 (672 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_006FC930();
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0074F820();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();
extern "C" void ext_0077FAE0();
extern "C" void ext_00784650();
extern "C" __declspec(naked) void __fastcall fn_00779F50(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        push -1
        push 0x8c13c0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [ebp + 8]
        push 5
        call ext_006FDF30
        xor edi, edi
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0xc], edi
        jle L_end
    L_outer:
        mov ecx, dword ptr [ebp + 8]
        push 5
        push edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006FC930
        mov ebx, eax
        cmp dword ptr [ebx + 4], 1
        je L_next
        mov ecx, dword ptr [ebp + 0xc]
        push edi
        push ebx
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadb7c
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx]
        push eax
        call ext_0077F550
        mov edi, dword ptr [esi + 0xac]
        add esp, 4
        add edi, 4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc2c
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_0077F5A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 4
        add edi, 4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc10
        mov ecx, edi
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 4]
        test eax, eax
        je L_08B
        cmp eax, 2
        jne L_152
    L_08B:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaabbc0
        add ecx, 4
        call ext_007275F0
        mov eax, dword ptr [ebx + 8]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jle L_144
    L_inner:
        lea edx, [esp + 0x18]
        push edi
        push edx
        lea ecx, [ebx + 8]
        call ext_0074F820
        push 0
        mov ecx, eax
        mov dword ptr [esp + 0x44], 0
        call ext_0077FAE0
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00727FE0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_006D80A0
        lea eax, [esp + 0x28]
        push edi
        push eax
        lea ecx, [ebx + 8]
        call ext_0074F820
        push 1
        mov ecx, eax
        mov dword ptr [esp + 0x44], 1
        call ext_0077FAE0
        mov ecx, dword ptr [esi + 0xac]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00727FE0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_006D80A0
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl L_inner
    L_144:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_152:
        cmp dword ptr [ebx + 4], 2
        jne L_1A4
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc88
        add ecx, 4
        call ext_007275F0
        mov eax, dword ptr [ebx + 0x20]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jbe L_196
    L_loop2:
        mov ecx, dword ptr [ebx + 0x30]
        mov edx, dword ptr [ecx + 4 * edi]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727C80
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jb L_loop2
    L_196:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_1A4:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov edi, dword ptr [esp + 0xc]
    L_next:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 0xc], edi
        jl L_outer
    L_end:
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00779C30] sub_00779C30 (800 bytes)
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();
extern "C" void ext_006FC940();
extern "C" void ext_00784650();
extern "C" void ext_0077F550();
extern "C" void ext_0077F5A0();
extern "C" void ext_0077F620();
extern "C" void ext_007279A0();
extern "C" void ext_007284D0();
extern "C" void ext_006D80A0();
extern "C" void ext_00727FE0();
extern "C" void ext_00728410();

extern "C" __declspec(naked) void __fastcall fn_00779C30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8c13a3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [ebp + 8]
        push 6
        call ext_006FDF30
        xor edi, edi
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x14], edi
        jle L_epi
    L_outer:
        mov ecx, dword ptr [ebp + 8]
        push 6
        push edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006FC940
        mov ebx, eax
        mov dword ptr [esp + 0x18], ebx
        cmp dword ptr [ebx + 4], 1
        je L_inc
        mov ecx, dword ptr [ebp + 0xc]
        push edi
        push ebx
        call ext_00784650
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadba0
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx]
        push eax
        call ext_0077F550
        mov edi, dword ptr [esi + 0xac]
        add esp, 4
        add edi, 4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc2c
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_0077F5A0
        mov edi, dword ptr [esi + 0xac]
        add esp, 4
        add edi, 4
        mov dword ptr [esp + 0x10], eax
        push 0xaadc10
        mov ecx, edi
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc58
        add ecx, 4
        call ext_007275F0
        mov eax, dword ptr [ebx + 8]
        add ebx, 8
        xor edi, edi
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        jle L_after2
    L_loop2:
        lea edx, [esp + 0x60]
        push edi
        push edx
        mov ecx, ebx
        call ext_0077F620
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov dword ptr [esp + 0xb0], 0
        call ext_00727FE0
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0xa8], -1
        call ext_006D80A0
        lea eax, [esp + 0x20]
        push edi
        push eax
        mov ecx, ebx
        call ext_0077F620
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov dword ptr [esp + 0xb0], 1
        call ext_00727FE0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xa8], -1
        call ext_006D80A0
        lea eax, [esp + 0x40]
        push edi
        push eax
        mov ecx, ebx
        call ext_0077F620
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [eax + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov dword ptr [esp + 0xb0], 2
        call ext_00727FE0
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xa8], -1
        call ext_006D80A0
        lea eax, [esp + 0x80]
        push edi
        push eax
        mov ecx, ebx
        call ext_0077F620
        mov ecx, dword ptr [eax + 0x1c]
        mov edx, dword ptr [eax + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov dword ptr [esp + 0xb0], 3
        call ext_00727FE0
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0xa8], -1
        call ext_006D80A0
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl L_loop2
    L_after2:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov edi, dword ptr [esp + 0x18]
        cmp dword ptr [edi + 4], 2
        jne L_skip3
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc4c
        add ecx, 4
        call ext_007275F0
        mov ebx, dword ptr [edi + 0x20]
        xor edi, edi
        test ebx, ebx
        jbe L_after3
    L_loop3:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx + 4 * edi]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727C80
        inc edi
        cmp edi, ebx
        jb L_loop3
    L_after3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_skip3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov edi, dword ptr [esp + 0x14]
    L_inc:
        mov eax, dword ptr [esp + 0x1c]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 0x14], edi
        jl L_outer
    L_epi:
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00771560] sub_00771560 (880 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D36F0();
extern "C" void ext_0077FAB0();
extern "C" void ext_006D82F0();
extern "C" void ext_006D83C0();
extern "C" void ext_006D8830();
extern "C" void ext_006D81F0();
extern "C" void ext_006D86C0();
extern "C" void ext_006D8680();
extern "C" void ext_006D8980();
extern "C" void ext_006D8940();
extern "C" void ext_006FD600();
extern "C" void ext_00702400();
extern "C" void ext_006D7ED0();
extern "C" void ext_006D8210();
extern "C" void ext_006D8240();
extern "C" void ext_006DEEC0();
extern "C" void ext_006D2390();
extern "C" void ext_006D2BD0();
extern "C" void ext_006D7AA0();
extern "C" void ext_006D80B0();
extern "C" void ext_006D8280();
extern "C" void ext_006D8520();
extern "C" void ext_0074AE20();
extern "C" void ext_006D23F0();
extern "C" void ext_0077FAF0();
extern "C" void ext_0077FAC0();
extern "C" void ext_006D8490();
extern "C" void ext_006D80A0();
extern "C" void ext_006D7970();
extern "C" void ext_006D7990();
extern "C" void ext_007873F0();
extern "C" int mem_008C0ED8;

extern "C" __declspec(naked) void __fastcall fn_00771560(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x008c0ed8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x6c
        mov ecx, dword ptr [ecx + 0x4]
        push ebx
        push esi
        push edi
        call ext_006D36F0
        mov ebx, eax
        push 0x20
        push 0x10
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x2c], ebx
        call ext_006D2130
        lea eax, [esp + 0x58]
        mov dword ptr [esp + 0x5c], eax
        xor edi, edi
        push 0x20
        push 0x10
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x88], edi
        call ext_006D2130
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x74], ecx
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x80], 0x1
        call ext_0077FAB0
        mov esi, dword ptr [ebp + 0x8]
        mov ecx, ebx
        push esi
        mov byte ptr [esp + 0x84], 0x2
        mov dword ptr [esp + 0x1c], edi
        call ext_006D82F0
        lea ecx, [ebx + 0x1c4]
        call ext_006D2250
        lea ecx, [ebx + 0x1dc]
        call ext_006D2250
        push edi
        mov ecx, ebx
        call ext_006D83C0
        push 0x1
        mov ecx, ebx
        call ext_006D8830
        mov ecx, esi
        mov dword ptr [esp + 0x1c], edi
        call ext_006D81F0
        test eax, eax
        jle L_end1
    L_outer:
        xor eax, eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x14], eax
        call ext_006D86C0
        cmp eax, 0x3
        jne L_s1
        mov ecx, esi
        call ext_006D8680
        mov edx, dword ptr [eax + 4*edi]
        mov dword ptr [esp + 0x20], edx
    L_s1:
        mov ecx, esi
        mov byte ptr [esp + 0x13], 0x0
        call ext_006D8980
        cmp eax, 0x3
        jne L_s2
        mov ecx, esi
        call ext_006D8940
        mov eax, dword ptr [eax + 4*edi]
        push 0x0
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_006FD600
        mov ecx, eax
        call ext_00702400
        mov byte ptr [esp + 0x13], al
    L_s2:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x20]
        push -1
        push eax
        push ecx
        mov ecx, ebx
        call ext_006D7ED0
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0x0
        call ext_006D8210
        test eax, eax
        jle L_end2
    L_loop2:
        mov edx, dword ptr [esp + 0x14]
        mov ecx, esi
        push edx
        push edi
        call ext_006D8240
        shl eax, 0x5
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        call ext_006DEEC0
        mov edx, dword ptr [esp + 0x20]
        sub esp, 0x20
        add eax, edx
        mov ecx, esp
        mov dword ptr [esp + 0x48], esp
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x68]
        call ext_006D2BD0
        mov ecx, esi
        call ext_006D7AA0
        test eax, eax
        je L_s3
        mov ecx, esi
        call ext_006D7AA0
        mov edx, dword ptr [esp + 0x20]
        sub esp, 0x20
        add eax, edx
        mov ecx, esp
        mov dword ptr [esp + 0x48], esp
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x80]
        call ext_006D2BD0
    L_s3:
        mov eax, dword ptr [esp + 0x1c]
        push -1
        push eax
        mov ecx, ebx
        call ext_006D80B0
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push edi
        mov ecx, esi
        call ext_006D8280
        mov ebx, eax
        mov ecx, esi
        shl ebx, 0x4
        call ext_006D8520
        add ebx, eax
        lea ecx, [esp + 0x38]
        push ebx
        call ext_0074AE20
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_s4
        push 0x0
        lea ecx, [esp + 0x3c]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 0x2c], edx
        mov eax, dword ptr [eax + 0x4]
        mov ecx, eax
        mov dword ptr [esp + 0x30], eax
        push ecx
        push edx
        push 0x1
        lea ecx, [esp + 0x44]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esp + 0x44]
        mov edx, dword ptr [eax]
        push edx
        call ext_0077FAF0
    L_s4:
        sub esp, 0x10
        lea eax, [esp + 0x48]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push eax
        call ext_0077FAC0
        mov ebx, dword ptr [esp + 0x34]
        mov ecx, ebx
        call ext_006D8490
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x1c]
        inc ecx
        inc eax
        mov dword ptr [esp + 0x14], ecx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        call ext_006D8210
        cmp dword ptr [esp + 0x14], eax
        jl L_loop2
    L_end2:
        mov ecx, ebx
        call ext_006D80A0
        mov ecx, esi
        inc edi
        call ext_006D81F0
        cmp edi, eax
        jl L_outer
    L_end1:
        mov ecx, dword ptr [esp + 0x48]
        push ecx
        mov ecx, ebx
        call ext_006D7970
        mov ecx, ebx
        call ext_006DEEC0
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        call ext_006D7AA0
        test eax, eax
        je L_s5
        push 0x0
        mov ecx, ebx
        call ext_006D7990
        mov ecx, ebx
        call ext_006D7AA0
        mov dword ptr [esp + 0x18], eax
    L_s5:
        mov eax, dword ptr [esp + 0x48]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x20], edi
        jle L_end3
        mov ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x18]
        sub ecx, eax
        mov dword ptr [esp + 0x24], ecx
        jmp L_b
    L_top:
        mov ecx, dword ptr [esp + 0x24]
    L_b:
        mov edx, dword ptr [esp + 0x18]
        lea eax, [edi + edx]
        mov edx, dword ptr [esp + 0x58]
        add edx, edi
        add ecx, eax
        push edx
        call ext_007873F0
        mov ecx, esi
        call ext_006D7AA0
        test eax, eax
        je L_s6
        mov eax, dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [edi + eax]
        push ecx
        lea ecx, [edi + edx]
        call ext_007873F0
    L_s6:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x48]
        inc eax
        add edi, 0x20
        cmp eax, ecx
        mov dword ptr [esp + 0x20], eax
        jl L_top
    L_end3:
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x80], 0x1
        call ext_006D80A0
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x80], 0x0
        call ext_006D2160
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        mov eax, ebx
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00778D60] sub_00778D60 (896 bytes)
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_0071AF90();
extern "C" void ext_0071B020();
extern "C" void ext_0071B050();
extern "C" void ext_0071C580();
extern "C" void ext_0071C620();
extern "C" void ext_0071C700();
extern "C" void ext_00727FE0();
extern "C" void ext_00778930();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_00778D60(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8c1340
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov esi, ecx
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne L_main
        xor al, al
        mov ecx, dword ptr [esp + 0x70]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    L_main:
        push eax
        mov ecx, esi
        call ext_00778930
        mov ebx, dword ptr [esi + 0xac]
        push 0xaae104
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x7c
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadf80
        add ecx, 0x4
        call ext_007275F0
        lea eax, [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_0071AF90
        push 0x0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x7c], 0x0
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x1
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x2
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadf7c
        add ecx, 0x4
        call ext_007275F0
        lea eax, [esp + 0x50]
        mov ecx, edi
        push eax
        call ext_0071B020
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x7c], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        push 0x0
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x1
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x2
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadf74
        add ecx, 0x4
        call ext_007275F0
        lea eax, [esp + 0x50]
        mov ecx, edi
        push eax
        call ext_0071B050
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x7c], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        push 0x0
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x1
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        push 0x2
        lea ecx, [esp + 0x14]
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, edi
        call ext_0071C580
        mov ebx, dword ptr [esi + 0xac]
        push 0xaaddc0
        add ebx, 0x4
        mov byte ptr [esp + 0x10], al
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, ebx
        and eax, 0xff
        push eax
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_0071C620
        mov ebx, dword ptr [esi + 0xac]
        push 0xaaddb4
        add ebx, 0x4
        mov byte ptr [esp + 0x10], al
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp + 0xc]
        and ecx, 0xff
        push ecx
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadd98
        add ecx, 0x4
        call ext_007275F0
        lea edx, [esp + 0x30]
        mov ecx, edi
        push edx
        call ext_0071C700
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x30]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x80], 0x3
        add ecx, 0x4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push eax
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x40]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x78], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00774EE0] sub_00774EE0 (1019 bytes)
extern "C" void ext_0072CBF0();
extern "C" void ext_006BD000();
extern "C" void ext_006BD240();
extern "C" void ext_006BD460();
extern "C" void ext_006BE270();
extern "C" void ext_006BE7D0();
extern "C" void ext_006E7440();
extern "C" void ext_00725940();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007287E0();
extern "C" void ext_00728D40();
extern "C" void ext_0072CD20();
extern "C" void ext_0072CEF0();
extern "C" void ext_0072CF10();
extern "C" void ext_007752E0();
extern "C" void ext_007769F0();
extern "C" void ext_00777D10();
extern "C" void ext_00777E30();
extern "C" void ext_0077D960();
extern "C" void ext_0077E1C0();
extern "C" void ext_0077E3F0();
extern "C" void ext_0077EE70();
extern "C" void ext_0077F010();
extern "C" void ext_0079D7A0();
extern "C" int mem_00B60288;
extern "C" int mem_00B61278;

extern "C" __declspec(naked) void __fastcall fn_00774EE0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 8bfb8bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 1d4h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp+14h]
        call ext_0072CBF0
        xor eax, eax
        mov bl, 1
        mov dword ptr [esp+1ech], eax
        mov dword ptr [esi+0b4h], eax
        mov dword ptr [esp+10h], eax
        mov ebp, 1
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+48h]
        mov edi, dword ptr [esp+1f8h]
        test edi, edi
        je L_NOEDI
        mov ecx, dword ptr [mem_00B60288]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax+14h]
        test al, al
        jne L_EDIOK
        mov eax, dword ptr [mem_00B61278]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx+14h]
        test al, al
        jne L_EDIOK
    L_NOEDI:
        push 4
        lea ecx, [esi+8]
        call ext_006E7440
        xor bl, bl
        jmp L_COMMON
    L_EDIOK:
        mov eax, dword ptr [mem_00B61278]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx+14h]
        test al, al
        je L_SETEDI
        push 0
        push 0
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 1
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 2
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 4
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 5
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 6
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 1
        push 7
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 8
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 9
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 0ah
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        push 0
        push 0ch
        lea ecx, [esp+1ch]
        call ext_0072CEF0
        lea ecx, [esp+14h]
        mov dword ptr [esi+0b4h], ecx
        jmp L_AFTER_B4
    L_SETEDI:
        mov dword ptr [esi+0b4h], edi
    L_AFTER_B4:
        mov eax, dword ptr [esp+1fch]
        test eax, eax
        je L_ELSE_ACC
        mov edx, dword ptr [esi+0ach]
        mov dword ptr [esi+0ach], eax
        mov dword ptr [esp+10h], edx
    L_LOOPTOP:
        mov eax, dword ptr [esi+0b4h]
        mov ecx, dword ptr [eax+0f0h]
        test ecx, ecx
        jle L_COMMON
        mov eax, dword ptr [eax+100h]
    L_INNER:
        mov edx, dword ptr [eax]
        cmp byte ptr [edx+0e4h], 0
        je L_SKIPINC
        inc ebp
    L_SKIPINC:
        add eax, 4
        dec ecx
        jne L_INNER
    L_COMMON:
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        push ebp
        mov ecx, eax
        call dword ptr [edx+60h]
        mov edi, dword ptr [esp+1f4h]
        mov ecx, edi
        call ext_006BD000
        mov ecx, edi
        call ext_006BD240
        mov ecx, edi
        call ext_006BD460
        mov ecx, edi
        call ext_006BE270
        test bl, bl
        je L_END
        push edi
        mov ecx, esi
        call ext_0077D960
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_E1
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
        jmp L_END
    L_ELSE_ACC:
        mov eax, dword ptr [esi+0ach]
        test eax, eax
        jne L_LOOPTOP
        push 2
        lea ecx, [esi+8]
        call ext_006E7440
        xor bl, bl
        jmp L_COMMON
    L_E1:
        push edi
        mov ecx, esi
        call ext_0077E1C0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_E2
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
        jmp L_END
    L_E2:
        push edi
        mov ecx, esi
        call ext_0077E3F0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_E3
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
        jmp L_END
    L_E3:
        push edi
        mov ecx, esi
        call ext_0077EE70
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_E4
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
        jmp L_END
    L_E4:
        push edi
        mov ecx, esi
        call ext_0077F010
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_E5
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
        jmp L_END
    L_E5:
        mov ecx, dword ptr [esi+0b4h]
        push 9
        call ext_0072CF10
        test al, al
        je L_END
        mov ecx, dword ptr [esi+0ach]
        push 0aaef80h
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi+0ach]
        push 0aaef3ch
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi+0ach]
        push 0b5d2c0h
        add ecx, 4
        call ext_007287E0
        mov ecx, dword ptr [esi+0ach]
        push 0aad1f0h
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, esi
        call ext_007769F0
        push edi
        mov ecx, esi
        call ext_00777D10
        push edi
        mov ecx, esi
        call ext_00777E30
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728D40
        cmp eax, -1
        jle L_F1
        push 3
        lea ecx, [esi+8]
        call ext_006E7440
    L_F1:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007283B0
    L_END:
        mov ecx, edi
        call ext_006BE7D0
        mov eax, dword ptr [esp+1fch]
        test eax, eax
        je L_ELSE_270
        mov eax, dword ptr [esp+10h]
        mov dword ptr [esi+0ach], eax
        jmp L_TAIL
    L_ELSE_270:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00725940
        push 0
        push edi
        mov ecx, esi
        call ext_007752E0
    L_TAIL:
        mov dword ptr [esi+0b4h], 0
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+68h]
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+4ch]
        lea ecx, [esp+14h]
        mov dword ptr [esp+1ech], 0ffffffffh
        call ext_0072CD20
        mov ecx, dword ptr [esp+1e4h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov fs:[0], ecx
        add esp, 1e0h
        ret 0ch
    }
}

// [0x0077AE10] sub_0077AE10 (1056 bytes)
extern "C" int __fastcall ext_006D7A90(void* a);
extern "C" void __fastcall ext_00778800(void* self, int edx_unused, void* a);
extern "C" void ext_006D80A0();
extern "C" void ext_006DEEC0();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_00761120();
extern "C" void ext_00727FE0();
extern "C" void ext_007279A0();
extern "C" __declspec(naked) void __fastcall fn_0077AE10(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8bcceb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa4
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x30]
        call ext_00714570
        mov edi, dword ptr [ebp + 8]
        lea eax, [esp + 0x30]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0xbc], 0
        call ext_0070E390
        mov ecx, edi
        call ext_006D7A90
        test eax, eax
        je L_fail
        mov ebx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ebx, 4
        mov ecx, ebx
        call ext_007275F0
        push 0xaa9158
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        mov ebx, dword ptr [esi + 0xac]
        push 0xaae350
        add ebx, 4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae2c0
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [edi + 0x1c8]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727C80
        mov edx, dword ptr [edi + 0x1b8]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727C80
        mov eax, dword ptr [edi + 0x1bc]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae344
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [edi + 0x1a8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00761120
        mov edx, dword ptr [edi + 0x1ac]
        mov ecx, esi
        push edx
        push edi
        call ext_00761120
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae2ac
        add ecx, 4
        call ext_007275F0
        mov eax, dword ptr [edi + 0x1b0]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [edi + 0x1b4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae2b8
        add ecx, 4
        call ext_007275F0
        mov edx, dword ptr [edi + 0x1b8]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727C80
        mov eax, dword ptr [edi + 0x1bc]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae300
        add ecx, 4
        call ext_007275F0
        xor ecx, ecx
        mov cl, byte ptr [edi + 0x1c0]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        xor edx, edx
        mov dl, byte ptr [edi + 0x1c1]
        add ecx, 4
        push edx
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae33c
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        xor eax, eax
        mov al, byte ptr [edi + 0x1c2]
        add ecx, 4
        push eax
        call ext_00727C80
        xor ecx, ecx
        mov cl, byte ptr [edi + 0x1c3]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae334
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        xor edx, edx
        mov dl, byte ptr [edi + 0x1c4]
        add ecx, 4
        push edx
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        xor eax, eax
        mov al, byte ptr [edi + 0x1c5]
        add ecx, 4
        push eax
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae2a4
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        xor ebx, ebx
        call ext_006D7A90
        test eax, eax
        jle L_after_loop
        mov dword ptr [esp + 0xc], ebx
    L_loop:
        mov ecx, edi
        call ext_006DEEC0
        add eax, dword ptr [esp + 0xc]
        fld qword ptr [eax]
        fld qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        fld qword ptr [esp + 0x70]
        fmul st, st(1)
        fld qword ptr [esp + 0x50]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [esp + 0x30]
        fmul st, st(4)
        faddp st(1), st
        fadd qword ptr [esp + 0x90]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x78]
        fmul st, st(1)
        fld qword ptr [esp + 0x38]
        fmul st, st(4)
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        faddp st(1), st
        fld qword ptr [esp + 0x5c]
        fmul st, st(3)
        push edx
        add ecx, 4
        faddp st(1), st
        fadd qword ptr [esp + 0xa0]
        fstp qword ptr [esp + 0x20]
        fld qword ptr [esp + 0x88]
        fmul st, st(1)
        fld qword ptr [esp + 0x48]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x68]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [esp + 0xa8]
        fstp qword ptr [esp + 0x28]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push eax
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, edi
        add edx, 0x20
        inc ebx
        mov dword ptr [esp + 0xc], edx
        call ext_006D7A90
        cmp ebx, eax
        jl L_loop
    L_after_loop:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        push edi
        mov ecx, esi
        call ext_00778800
    L_fail:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xb8], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xb0]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00777580] sub_00777580 (1088 bytes)
extern "C" void ext_006EA6D0();
extern "C" void ext_006D2370();
extern "C" void ext_006F7680();
extern "C" void ext_007025B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_007873F0();
extern "C" void ext_00787430();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void __fastcall fn_00777580(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x8bfb47
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x124
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x78]
        call ext_006EA6D0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x138], 0
        call ext_006D2370
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x138], 1
        call ext_006D2370
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x138], 2
        call ext_006D2370
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [esp + 0x78]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        mov byte ptr [esp + 0x140], 3
        call ext_006F7680
        test al, al
        je L_77795A
        mov ecx, dword ptr [esp + 0x78]
        test ecx, ecx
        je L_777618
        call ext_007025B0
        cmp eax, dword ptr [ebp + 0x10]
        je L_777629
    L_777618:
        lea ecx, [esp + 0x7c]
        call ext_006B9950
        test al, al
        jne L_77795A
    L_777629:
        lea ecx, [esp + 0x7c]
        call ext_006B9950
        test al, al
        jne L_777665
        lea ecx, [esp + 0x7c]
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad720
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
    L_777665:
        lea edx, [esp + 0xc8]
        lea ecx, [esp + 0x38]
        push edx
        call ext_007873F0
        lea eax, [esp + 0xe8]
        lea ecx, [esp + 0x18]
        push eax
        call ext_007873F0
        lea ecx, [esp + 0x108]
        push ecx
        lea ecx, [esp + 0x5c]
        call ext_007873F0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x3c]
        add edi, 4
        push 0xaad714
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x44]
        mov eax, dword ptr [esp + 0x40]
        add edi, 4
        mov dword ptr [esp + 0x10], ecx
        push 0xaad708
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x4c]
        add edi, 4
        mov dword ptr [esp + 0xc], ecx
        push 0xaad6fc
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        add edi, 4
        push 0xaad6f0
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [esp + 0x20]
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x24]
        add edi, 4
        mov dword ptr [esp + 0x10], ecx
        push 0xaad6e4
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x2c]
        add edi, 4
        mov dword ptr [esp + 0xc], ecx
        push 0xaad6d8
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x5c]
        add edi, 4
        push 0xaad6cc
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x64]
        mov eax, dword ptr [esp + 0x60]
        add edi, 4
        mov dword ptr [esp + 0x10], ecx
        push 0xaad6c0
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov esi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x68]
        mov edx, dword ptr [esp + 0x6c]
        add esi, 4
        mov dword ptr [esp + 0xc], ecx
        push 0xaad6b4
        mov ecx, esi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
    L_7778BD:
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x138], 2
        call ext_006D80A0
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x138], 1
        call ext_006D80A0
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x138], 0
        call ext_006D80A0
        lea ecx, [esp + 0x108]
        mov dword ptr [esp + 0x138], 6
        call ext_006D80A0
        lea ecx, [esp + 0xe8]
        mov byte ptr [esp + 0x138], 5
        call ext_006D80A0
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0x138], 4
        call ext_006D80A0
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0x138], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x130]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    L_77795A:
        push 0x3ff00000
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x58]
        call ext_00787430
        push 0x3ff00000
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x38]
        call ext_00787430
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        lea ecx, [esp + 0x78]
        call ext_00787430
        jmp L_7778BD
        nop
        nop
        nop
        nop
    }
}

// [0x0077D4D0] sub_0077D4D0 (1088 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006E7460();
extern "C" void ext_00704DA0();
extern "C" void ext_00704DB0();
extern "C" void ext_00704EC0();
extern "C" void ext_00726550();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_007285D0();
extern "C" void ext_0072BF40();
extern "C" void ext_0072BF70();
extern "C" void ext_0072C050();
extern "C" void ext_0072C060();
extern "C" void ext_0072C110();
extern "C" void ext_0072C870();
extern "C" void ext_0072CB00();
extern "C" void ext_0079C4F0();

extern "C" __declspec(naked) void __fastcall fn_0077D4D0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -1
        push 0x8c151f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x16c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x184]
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [ebp]
        lea ecx, [esp + 0x130]
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov dword ptr [esp + 0x184], 0
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaa8e24
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp + 0x130]
        mov dword ptr [esp + 0x184], 0xffffffff
        call ext_006B9D70
        lea ecx, [esp + 0x30]
        call ext_0072BF40
        push 1
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x188], 1
        call ext_0072C050
        mov ebx, dword ptr [esp + 0x190]
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push ebx
        call ext_006B9D20
        lea ecx, [esp + 0x7c]
        call ext_0072C060
        mov edx, dword ptr [esp + 0x194]
        mov al, byte ptr [esp + 0x198]
        test al, al
        mov byte ptr [edx], 0
        je L_A
        mov al, byte ptr [esp + 0x94]
        xor edi, edi
        test al, al
        jne L_A
    L_LOOP:
        mov eax, dword ptr [esi + 0x4]
        cmp edi, dword ptr [eax + 0x16c]
        jge L_A
        mov eax, dword ptr [eax + 0x17c]
        lea edx, [esp + 0x30]
        push edx
        push ebx
        mov ecx, dword ptr [eax + 4*edi]
        push 0
        call ext_0072C110
        test al, al
        jne L_B
        mov al, byte ptr [esp + 0x94]
        inc edi
        test al, al
        je L_LOOP
        jmp L_A
    L_B:
        mov al, byte ptr [esp + 0x95]
        test al, al
        je L_A
        lea eax, [esp + 0x30]
        push eax
        push 1
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x64], esp
        push ebx
        call ext_006B9D20
        call ext_0072C870
        mov ecx, dword ptr [esp + 0x1e8]
        add esp, 0x54
        mov byte ptr [ecx], al
    L_A:
        mov ecx, ebx
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00726550
        push eax
        lea ecx, [esp + 0x9c]
        call ext_006B9D80
        push 4
        push 0x10
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x18c], 2
        call ext_006D2130
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x28], edx
        mov ecx, ebx
        mov byte ptr [esp + 0x184], 3
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_00704DB0
        lea ecx, [esp + 0x98]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_00704EC0
        mov eax, dword ptr [ebp]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi + 0xac]
        lea edx, [esp + 0x14]
        push edx
        call ext_0079C4F0
        mov ecx, ebp
        call ext_00704DA0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 4
        push 0xaabaa4
        mov ecx, edi
        mov ebp, eax
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov al, byte ptr [esp + 0x198]
        test al, al
        je L_C
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x65
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov al, byte ptr [esp + 0x44]
        add edi, 4
        push 0xaad8dc
        mov ecx, edi
        mov byte ptr [esp + 0x14], al
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        and ecx, 0xff
        push ecx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        lea edx, [esp + 0xe4]
        lea ecx, [esp + 0x30]
        push edx
        call ext_0072CB00
        mov ecx, eax
        mov byte ptr [esp + 0x184], 4
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad8c8
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp + 0xe4]
        mov byte ptr [esp + 0x184], 3
        call ext_006B9D70
    L_C:
        mov ecx, ebx
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad8bc
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp + 0x98]
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad8a8
        add edi, 4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov al, byte ptr [esp + 0x198]
        test al, al
        je L_D
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad8a0
        add ecx, 4
        call ext_007275F0
        sub esp, 0x4c
        lea eax, [esp + 0xe4]
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D20
        sub esp, 0x4c
        mov byte ptr [esp + 0x21c], 5
        mov ecx, esp
        mov dword ptr [esp + 0xc4], esp
        push ebx
        call ext_006B9D20
        mov ecx, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x21c], 3
        add ecx, 4
        call ext_007285D0
        mov ecx, dword ptr [esi + 0xac]
        test al, al
        setne bl
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x184], 2
        call ext_006D2160
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x184], 1
        call ext_006B9D70
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x184], 0xffffffff
        call ext_0072BF70
        mov al, bl
        jmp L_E
    L_D:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x184], 2
        call ext_006D2160
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x184], 1
        call ext_006B9D70
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x184], 0xffffffff
        call ext_0072BF70
        mov al, 1
    L_E:
        mov ecx, dword ptr [esp + 0x17c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x178
        ret 0x10
    }
}

// [0x0077CB60] sub_0077CB60 (1104 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_006BADB0();
extern "C" void ext_007279A0();
extern "C" void ext_00702200();
extern "C" void ext_00702210();
extern "C" void ext_00702420();
extern "C" void ext_00702460();
extern "C" void ext_00702470();
extern "C" void ext_00702480();
extern "C" void ext_00702490();
extern "C" void ext_00703B50();
extern "C" void ext_00703BA0();
extern "C" void ext_00703BD0();
extern "C" void ext_00703BE0();
extern "C" void ext_00727FE0();
extern "C" void ext_007284D0();
extern "C" void ext_0079C4F0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_006D2160();

extern "C" __declspec(naked) void __fastcall fn_0077CB60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1459
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xd0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x94]
        call ext_006B9D10
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xe8], 0
        call ext_006D2370
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad404
        add ecx, 4
        mov byte ptr [esp + 0xec], 1
        call ext_007275F0
        mov edi, dword ptr [esp + 0xf0]
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        mov byte ptr [esp + 0xe8], 2
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_007279A0
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xe8], 1
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, edi
        call ext_00703BE0
        mov ecx, eax
        call ext_006E7460
        mov ebp, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ebp, 4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push ebx
        mov ecx, ebp
        call ext_007279A0
        mov ecx, ebp
        call ext_007283B0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaacd0c
        add ebp, 4
        mov ecx, ebp
        call ext_007275F0
        push 0xca
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        mov ecx, edi
        call ext_006BADB0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaae38c
        add ebp, 4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push ebx
        mov ecx, ebp
        call ext_007279A0
        mov ecx, ebp
        call ext_007283B0
        push 4
        push 0x10
        lea ecx, [esp + 0x18]
        call ext_006D2130
        lea edx, [esp + 0x20]
        mov dword ptr [esp + 0x24], edx
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0xec], 3
        call dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi + 0xac]
        lea edx, [esp + 0x10]
        push edx
        call ext_0079C4F0
        mov ecx, edi
        call ext_00703B50
        mov ecx, eax
        call ext_006E7460
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad214
        add ebp, 4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push ebx
        mov ecx, ebp
        call ext_007279A0
        mov ecx, ebp
        call ext_007283B0
        mov ecx, edi
        call ext_00702200
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad2b4
        add ebp, 4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push ebx
        mov ecx, ebp
        call ext_007279A0
        mov ecx, ebp
        call ext_007283B0
        mov ecx, edi
        call ext_00702210
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad8a8
        add ebp, 4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push ebx
        mov ecx, ebp
        call ext_007279A0
        mov ecx, ebp
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae4bc
        add ecx, 4
        call ext_007275F0
        push 0
        mov ecx, edi
        call ext_00703BA0
        mov ecx, eax
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_00703BA0
        mov ecx, eax
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae4ac
        add ecx, 4
        call ext_007275F0
        push 0
        mov ecx, edi
        call ext_00703BD0
        mov ecx, eax
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_00703BD0
        mov ecx, eax
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, edi
        call ext_00702420
        sub eax, 0
        je L_a
        dec eax
        je L_b
        mov ebx, dword ptr [esi + 0xac]
        dec eax
        jne L_c
        add ebx, 4
        push 0xaae494
        mov ecx, ebx
        call ext_007275F0
        push 0xaae478
        jmp L_d
    L_b:
        mov ebx, dword ptr [esi + 0xac]
        push 0xaae494
        add ebx, 4
        mov ecx, ebx
        call ext_007275F0
        push 0xaae484
        jmp L_d
    L_a:
        mov ebx, dword ptr [esi + 0xac]
    L_c:
        add ebx, 4
        push 0xaae494
        mov ecx, ebx
        call ext_007275F0
        push 0xaab920
    L_d:
        mov ecx, ebx
        call ext_007279A0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaae46c
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        call ext_00702460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, edi
        call ext_00702470
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, edi
        call ext_00702480
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, edi
        call ext_00702490
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xe8], 1
        call ext_006D2160
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xe8], 0
        call ext_006D80A0
        lea ecx, [esp + 0x94]
        mov dword ptr [esp + 0xe8], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xe0]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xdc
        ret 4
    }
}

// [0x00776ED0] sub_00776ED0 (1312 bytes)
extern "C" void ext_006BC440();
extern "C" void ext_006B99C0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007773F0();
extern "C" void ext_00777580();

extern "C" __declspec(naked) void __fastcall fn_00776ED0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        mov esi, ecx
        push edi
        push eax
        mov ecx, ebx
        call ext_006BC440
        mov ecx, ebx
        mov edi, eax
        call ext_006B99C0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad69c
        add ebp, 0x4
        mov ebx, eax
        mov ecx, ebp
        call ext_007275F0
        push 0x1
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad690
        add ebp, 0x4
        mov ecx, ebp
        call ext_007275F0
        push 0x0
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        mov ebp, dword ptr [esi + 0xac]
        push 0xaad684
        add ebp, 0x4
        mov ecx, ebp
        call ext_007275F0
        push 0x0
        mov ecx, ebp
        call ext_00727C80
        mov ecx, ebp
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad64c
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x43
        push edi
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad640
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x44
        push edi
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        push 0xaad634
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x45
        push edi
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad624
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x58
        push edi
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad614
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x59
        push edi
        mov ecx, esi
        call ext_00777580
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad60c
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x0
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad600
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x1
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5f8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x2
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5f0
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x9
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5e8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x3
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5e0
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x4
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        push 0xaad5d4
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x5
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5c8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x6
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5bc
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0xa
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5b0
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0xb
        push edi
        mov ecx, esi
        call ext_007773F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad5a8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push ebx
        push 0x7
        push edi
        mov ecx, esi
        call ext_007773F0
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
        ret 0x8
    }
}
