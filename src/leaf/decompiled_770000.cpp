// Decompiled translation unit: src/leaf/decompiled_770000.cpp

extern "C" void ext_006A5C5C();
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
