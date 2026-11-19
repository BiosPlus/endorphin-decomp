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
