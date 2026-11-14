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
