// Decompiled translation unit: src/classes/AnimatableTransform.cpp

extern "C" void ext_00593630();

// [0x0058A1A0] AnimatableTransform::vfunc_33 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A1A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 0x38]
        lea ecx, [esi + 8]
        call edx
        mov ecx, esi
        pop esi
        jmp ext_00593630
    }
}

// [0x00661990] AnimatableTransform::vfunc_12 (20 bytes)
extern "C" void ext_0046F7D0();
extern "C" void* __stdcall fn_00661990(void* a1) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x006619B0] AnimatableTransform::vfunc_13 (20 bytes)
extern "C" void* __fastcall fn_006619B0(void* self, int edx_unused, void* a1, void* a2) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x0058A3C0] AnimatableTransform::vfunc_57 (24 bytes)
extern "C" void ext_0058A2B0();
extern "C" void* __fastcall fn_0058A3C0(void* self, int edx_unused, int a1) {
    int idx = ((int (__stdcall*)(int))ext_0058A2B0)(a1);
    return (char*)self + idx * 8 + 0xf4;
}

// [0x00626410] AnimatableTransform::vfunc_4_off_4 (27 bytes)
extern "C" void ext_00585A80();
extern "C" __declspec(naked) void* __stdcall fn_00626410(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push edx
        push esi
        call ext_00585A80
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x005DF1F0] AnimatableTransform::vfunc_15 (30 bytes)
extern "C" void ext_00671F30();
extern "C" __declspec(naked) void* __fastcall fn_005DF1F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00593680] AnimatableTransform::vfunc_9_off_4 (42 bytes)
extern "C" void ext_00661A60();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void* __fastcall fn_00593680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        test al, al
        je short not_taken_00593680
        mov eax, dword ptr [esi + 0xe4]
        mov ecx, dword ptr [mem_00B40640]
        push eax
        call ext_00661A60
        pop esi
        ret
not_taken_00593680:
        mov eax, dword ptr [esi + 0xe0]
        pop esi
        ret
    }
}

// [0x0058A550] AnimatableTransform::vfunc_1_off_8 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A550(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, ecx
        mov esi, 0x3
    loop_0058A563:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        push ebp
        push esi
        push ebx
        mov ecx, edi
        call edx
        add esi, 0x1
        cmp esi, 0x7
        jl loop_0058A563
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00585170] AnimatableTransform::vfunc_34 (52 bytes)
extern "C" void ext_00493E40();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00585170(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [mem_00B40640]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x8]
        push 0x0
        lea ecx, [esi + 0x4]
        push 0x0
        push edx
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_00493E40
        pop esi
        ret 0x4
    }
}

// [0x00593D00] AnimatableTransform::vfunc_2_off_4 (60 bytes)
extern "C" void ext_00661B10();
extern "C" void ext_0053E290();
extern "C" __declspec(naked) void* __fastcall fn_00593D00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push edi
        call edx
        test al, al
        je L_fail
        mov edi, dword ptr [esp + 0xc]
        mov ecx, edi
        call ext_00661B10
        test al, al
        jne L_fail
        mov eax, dword ptr [esi + 0xe4]
        push eax
        mov ecx, edi
        call ext_0053E290
        pop edi
        pop esi
        ret 0x4
    L_fail:
        mov eax, dword ptr [esi + 0xe0]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005936B0] AnimatableTransform::vfunc_43 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_005936B0(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x24]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov ecx, esi
        call edx
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [edi + 0x30]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [edi + 0x34]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edi + 0x38]
        fld1
        fstp dword ptr [edi + 0x3c]
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0058A670] AnimatableTransform::vfunc_12_off_8 (94 bytes)
extern "C" void ext_0041CF50();
extern "C" __declspec(naked) void __fastcall fn_0058A670(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x89f968
        push eax
        mov dword ptr fs:[0x0], esp
        mov edx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [ecx + edx*8 + 0xec]
        mov dword ptr [esp + 0xc], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x8], 0xffffffff
        je short skip_0058A670
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x14]
        push edx
        call eax
skip_0058A670:
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0xc
    }
}

// [0x00584B60] AnimatableTransform::vfunc_29 (98 bytes)
extern "C" int mem_00924ED0;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FD8;
extern "C" __declspec(naked) void __fastcall fn_00584B60(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x94], 0x0
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_584B8D
        mov ecx, dword ptr [esi + 0x94]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        push edi
        call edx
        push 0x92ab70
        mov ecx, edi
        call dword ptr [mem_00924ED0]
L_584B8D:
        lea ebx, [esi + 0x30]
        push 0x928b5d
        push ebx
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        mov ecx, edi
        je L_584BB2
        push ebx
        call dword ptr [mem_00924FD8]
        pop edi
        pop esi
        pop ebx
        ret 0x4
L_584BB2:
        add esi, 0x14
        push esi
        call dword ptr [mem_00924FD8]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0065F480] AnimatableTransform::vfunc_3 (197 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924ECC;
extern "C" int mem_00925080;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F480(void* self) {
    __asm {
        push -1
        push 0x8b2653
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov dword ptr [esp + 0x8], ebx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push edi
        mov dword ptr [esp + 0x34], ebx
        call edx
        mov edi, dword ptr [esp + 0x3c]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x10], 1
        call edx
        mov esi, eax
        cmp esi, ebx
        je done
        push ebp
        mov ebp, dword ptr [mem_00924ECC]
        mov edi, edi
loop_top:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        cmp dword ptr [eax + 0x14], ebx
        je no_sep
        push 0x92ab70
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call ebp
        add esp, 0xc
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x40], 1
        call dword ptr [mem_00925080]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x38], bl
        call dword ptr [mem_00924FF4]
no_sep:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x10]
        push ebx
        mov ecx, esi
        call eax
        mov esi, eax
        cmp esi, ebx
        jne loop_top
        pop ebp
done:
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0058F3C0] AnimatableTransform::vfunc_3_off_8 (141 bytes)
extern "C" void ext_0058A200();
extern "C" void ext_005DF5C0();
extern "C" __declspec(naked) void __fastcall fn_0058F3C0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor edi, edi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loop_top:
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x30], esp
        push edi
        push eax
        lea ecx, [ebp - 0x8]
        call ext_0058A200
        mov ecx, ebx
        call ext_005DF5C0
        mov esi, eax
        test esi, esi
        je next_iter
        fldz
        fcomp dword ptr [esp + 0x1c]
        fnstsw ax
        test ah, 0x1
        jne skip_store
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        call eax
        fstp dword ptr [esp + 0x1c]
    skip_store:
        fld dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x18]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        call eax
        test eax, eax
        jne next_iter
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x8]
        push edi
        push ebx
        mov ecx, ebp
        call eax
    next_iter:
        add edi, 0x1
        cmp edi, 0x7
        jl loop_top
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}

// [0x0065F5B0] AnimatableTransform::vfunc_8 (37 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A724A();
extern "C" __declspec(naked) void* __fastcall fn_0065F5B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        push ecx
        mov dword ptr [esp + 8], 0
        call ext_006A724A
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_00662610
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0058EE90] AnimatableTransform::vfunc_13_off_8 (409 bytes)
extern "C" void ext_00401CC0();
extern "C" void ext_0041CF50();
extern "C" void ext_0058D850();
extern "C" void ext_0058D870();
extern "C" void ext_0058D890();
extern "C" void ext_0058D8B0();
extern "C" void ext_0058D8D0();
extern "C" void ext_0058D8F0();
extern "C" void ext_0058D910();

extern "C" __declspec(naked) void __fastcall fn_0058EE90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89fc78
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        cmp eax, 0x6
        push esi
        mov esi, ecx
        jne L_0058EED5
        lea eax, [esi - 0x8]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0058D850
        add esp, 0x8
        mov dword ptr [esp + 0x1c], 0x0
        lea ecx, [esi + 0x11c]
        jmp L_0058EF44
    L_0058EED5:
        test eax, eax
        jne L_0058EEFA
        lea eax, [esi - 0x8]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0058D870
        add esp, 0x8
        mov dword ptr [esp + 0x1c], 0x1
        lea ecx, [esi + 0xec]
        jmp L_0058EF44
    L_0058EEFA:
        cmp eax, 0x1
        jne L_0058EF20
        lea eax, [esi - 0x8]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0058D890
        add esp, 0x8
        mov dword ptr [esp + 0x1c], 0x2
        lea ecx, [esi + 0xf4]
        jmp L_0058EF44
    L_0058EF20:
        cmp eax, 0x2
        jne L_0058EF7C
        lea eax, [esi - 0x8]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0058D8B0
        add esp, 0x8
        mov dword ptr [esp + 0x1c], 0x3
        lea ecx, [esi + 0xfc]
    L_0058EF44:
        push eax
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_0058F017
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x4]
        push eax
        call edx
        pop esi
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    L_0058EF7C:
        cmp eax, 0x3
        jne L_0058EFAC
        lea eax, [esi - 0x8]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0058D8D0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x104]
        mov dword ptr [esp + 0x20], 0x4
        call ext_0041CF50
        lea ecx, [esp + 0x4]
        jmp L_0058F00A
    L_0058EFAC:
        cmp eax, 0x4
        jne L_0058EFDC
        lea edx, [esi - 0x8]
        push edx
        lea eax, [esp + 0x8]
        push eax
        call ext_0058D8F0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x10c]
        mov dword ptr [esp + 0x20], 0x5
        call ext_0041CF50
        lea ecx, [esp + 0x4]
        jmp L_0058F00A
    L_0058EFDC:
        cmp eax, 0x5
        jne L_0058F017
        lea ecx, [esi - 0x8]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        call ext_0058D910
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x114]
        mov dword ptr [esp + 0x20], 0x6
        call ext_0041CF50
        lea ecx, [esp + 0xc]
    L_0058F00A:
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_00401CC0
    L_0058F017:
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x0058F030] AnimatableTransform::vfunc_14_off_8 (459 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_0058D850();
extern "C" void ext_0058D870();
extern "C" void ext_0058D890();
extern "C" void ext_0058D8B0();
extern "C" void ext_0058D8D0();
extern "C" void ext_0058D8F0();
extern "C" void ext_0058D910();

extern "C" __declspec(naked) void __fastcall fn_0058F030(void* self) {
    __asm {
        push -0x1
        push 0x89fc78
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi - 0x8]

        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D870
        add esp, 0x8
        push eax
        lea ecx, [esi + 0xec]
        mov dword ptr [esp + 0x28], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        or ebx, -0x1
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F08D
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F08D:
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D890
        add esp, 0x8
        push eax
        lea ecx, [esi + 0xf4]
        mov dword ptr [esp + 0x28], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F0C7
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F0C7:
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D8B0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0xfc]
        mov dword ptr [esp + 0x28], 0x2
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F101
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F101:
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D8D0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x104]
        mov dword ptr [esp + 0x28], 0x3
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F13B
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F13B:
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D8F0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x10c]
        mov dword ptr [esp + 0x28], 0x4
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F175
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F175:
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0058D910
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x114]
        mov dword ptr [esp + 0x28], 0x5
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x24], ebx
        je short L_0058F1AF
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
    L_0058F1AF:
        lea eax, [esp + 0x14]
        push edi
        push eax
        call ext_0058D850
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x11c]
        mov dword ptr [esp + 0x28], 0x6
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        pop edi
        pop esi
        mov dword ptr [esp + 0x1c], ebx
        pop ebx
        je short L_0058F1EC
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_0058F1EC:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x0058A370] AnimatableTransform::vfunc_2 (78 bytes)
extern "C" void ext_006721F0();
extern "C" void ext_0065F450();

extern "C" __declspec(naked) void __fastcall fn_0058A370(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0x0
        call ext_0058A2B0
        cmp eax, 0x8
        je L_fallback
        lea eax, [esi + eax*8 + 0xf4]
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_fallback:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0065F450
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_004C4970();

// [0x0058A580] AnimatableTransform::vfunc_2_off_8 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A580(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x34]
        push edi
        call edx
        push edi
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi - 0x8]
        call ext_0058A200
        mov ecx, dword ptr [esp + 0x34]
        push eax
        mov dword ptr [esp + 0x30], 0
        call ext_004C4970
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x0058A5F0] AnimatableTransform::vfunc_4_off_8 (126 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A5F0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0x34]
        push esi
        push edi
        mov dword ptr [esp + 0xc], ecx
        xor esi, esi
        lea edi, [ecx - 8]
loc_0058A618:
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call ext_0058A200
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x38], 0
        call ext_004C4970
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        add esi, 1
        cmp esi, 7
        jl loc_0058A618
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x38]
        call eax
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 4
    }
}

// [0x0058B110] AnimatableTransform::vfunc_7_off_8 (36 bytes)
extern "C" void ext_0058A6D0();
extern "C" __declspec(naked) void __fastcall fn_0058B110(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0xc]
        push eax
        lea ecx, [esi - 0x8]
        call ext_0058A6D0
        pop esi
        ret 0x8
    }
}

// [0x0058B0E0] AnimatableTransform::vfunc_5_off_8 (43 bytes)
extern "C" void ext_0058AE60();
extern "C" __declspec(naked) void __fastcall fn_0058B0E0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        push edi
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        lea ecx, [esi - 8]
        call ext_0058AE60
        pop edi
        pop esi
        ret 0xc
    }
}

extern "C" void ext_0052F540();

// [0x005851B0] AnimatableTransform::vfunc_14_off_C (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_005851B0(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x5c], 0
        je ret_false
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
        push eax
        call ext_0052F540
        mov ecx, dword ptr [esp + 0xc]
        and ecx, eax
        xor edx, edx
        add esp, 4
        cmp ecx, eax
        sete dl
        mov al, dl
        ret 8
    ret_false:
        xor al, al
        ret 8
    }
}

// [0x0058A1C0] AnimatableTransform::vfunc_22 (51 bytes)
extern "C" void ext_00593AE0();
extern "C" void ext_00640110();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F448;

extern "C" void* __fastcall fn_0058A1C0(void* self, int edx_unused, void* a1) {
    void* edi = a1;
    ((void (__thiscall*)(void*, void*))ext_00593AE0)(self, edi);
    int r = ((int (__thiscall*)(void*, int))ext_00640110)(edi, mem_00A9F448);
    unsigned char b = *((unsigned char*)self + 0x148);
    ((void (__cdecl*)(int, int))ext_00640A80)(r, (int)b);
    return edi;
}

// [0x00586EC0] AnimatableTransform::vfunc_2_off_C (165 bytes)
extern "C" void ext_00586D00();
extern "C" void ext_0067DDB0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00586EC0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x40
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi - 0x8]
        mov eax, dword ptr [eax + 0x10]
        push ecx
        lea edi, [esi - 0x8]
        push 0x0
        lea edx, [esp + 0x10]
        push edx
        mov ecx, edi
        call eax
        mov eax, dword ptr [esp + 0x4c]
        fld dword ptr [eax]
        lea ecx, [esp + 0x8]
        fadd dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x40]
        call ext_0067DDB0
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        push 0x0
        mov ecx, edi
        call edx
        lea ecx, [esi - 0xc]
        call ext_00586D00
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, edi
        call edx
        test al, al
        je fn_00586EC0_done
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, edi
        call edx
        mov esi, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, edi
        call edx
        mov ecx, 0x10
        mov edi, eax
        rep movsd
    fn_00586EC0_done:
        pop edi
        pop esi
        add esp, 0x40
        ret 0x4
    }
}

extern "C" void ext_00586D00();
extern "C" void ext_0067E820();

struct Mat4x4_005875A0 {
    int m[16];
};

// [0x005875A0] AnimatableTransform::vfunc_5_off_4 (166 bytes)
extern "C" void* __fastcall fn_005875A0(char* self, int edx_unused, char* flag) {
    if (*flag != 0) {
        char* p = *(char**)(self + 0x90);
        char* target = self - 4;
        if (p != 0) {
            do {
                target = p;
                p = *(char**)(p + 0x94);
            } while (p != 0);
        }
        ((void (__thiscall*)(void*))ext_00586D00)(target);
        *flag = 0;
    }
    if (self[0xdc] != 0) {
        Mat4x4_005875A0* src = (*(Mat4x4_005875A0* (__thiscall**)(void*, char*))(*(char***)self + 2))(self, flag);
        Mat4x4_005875A0* dst = (Mat4x4_005875A0*)(self + 0x9c);
        *dst = *src;
        *((char*)dst + 0x40) = 1;
        if (*(void**)(self + 0x90) != 0) {
            int* res = (*(int* (__thiscall**)(void*))(*(char***)self + 6))(self);
            if (*res == 2) {
                char* parent = *(char**)(self + 0x90);
                void* arg = (*(void* (__thiscall**)(void*, char*))(*(char***)(parent + 4) + 5))(parent + 4, flag);
                ((void (__thiscall*)(void*, void*))ext_0067E820)(dst, arg);
            }
        }
        self[0xdc] = 0;
    }
    return self + 0x9c;
}

// [0x00586F70] AnimatableTransform::vfunc_3_off_C (174 bytes)
extern "C" void ext_0067E020();
extern "C" void ext_0067E7B0();
extern "C" int mem_00A85988;
extern "C" __declspec(naked) void __fastcall fn_00586F70(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi - 0x8]
        mov eax, dword ptr [eax + 0x10]
        push ecx
        lea edi, [esi - 0x8]
        push 0x0
        lea edx, [esp + 0x10]
        push edx
        mov ecx, edi
        call eax
        fld dword ptr [esp + 0x54]
        mov edx, dword ptr [esp + 0x4c]
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push ecx
        push edx
        lea ecx, [esp + 0x14]
        call ext_0067E020
        fld qword ptr [mem_00A85988]
        fstp dword ptr [esp + 0x54]
        push ecx
        fld dword ptr [esp + 0x58]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp]
        call ext_0067E7B0
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        push 0x0
        mov ecx, edi
        call eax
        lea ecx, [esi - 0xc]
        call ext_00586D00
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, edi
        call eax
        test al, al
        je short fn_00586F70_done
        mov edx, dword ptr [edi]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, edi
        call edx
        mov esi, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, edi
        call edx
        mov ecx, 0x10
        mov edi, eax
        rep movsd
    fn_00586F70_done:
        pop edi
        pop esi
        add esp, 0x40
        ret 0xc
    }
}

// [0x00593C80] AnimatableTransform::vfunc_14_off_4 (126 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00593D40();
extern "C" void ext_0067EB90();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00593C80(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp+4]
        mov eax, dword ptr [eax]
        cmp eax, 3
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp+0xc], eax
        jne short L_nz
        mov eax, 2
        mov dword ptr [esp+0xc], eax
L_nz:
        cmp eax, dword ptr [esi+0xe8]
        lea edi, [esi+0xe8]
        je short L_done
        push ebx
        push ebp
        call ext_00480920
        mov ebp, dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x18]
        mov ebx, eax
        push ebx
        push ebp
        push ecx
        lea edx, [esp+0x20]
        push edx
        mov ecx, esi
        call ext_00593D40
        push eax
        mov eax, dword ptr [esp+0x1c]
        push ebx
        push ebp
        push eax
        push edi
        mov ecx, esi
        call ext_00593D40
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx+0xc]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_0067EB90
        mov eax, dword ptr [esp+0x14]
        pop ebp
        mov dword ptr [edi], eax
        pop ebx
L_done:
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x00586D50] AnimatableTransform::vfunc_0_off_4 (355 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00586D00();
extern "C" void ext_00593D40();
extern "C" void ext_0067E990();
extern "C" void ext_0067EB90();
extern "C" __declspec(naked) void __fastcall fn_00586D50(void* self, int edx_unused, int a1, const int* src, int a3) {
    __asm {
        sub esp, 0xc4
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xd8]
        push esi
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xc]
        push edi
        push ebp
        call edx
        mov esi, dword ptr [esp + 0xdc]
        mov edi, eax
        mov ecx, 0x10
        rep movsd
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x18]
        mov esi, dword ptr [ebx + 0x90]
        mov ecx, ebx
        call edx
        mov ecx, dword ptr [esp + 0xd8]
        cmp ecx, dword ptr [eax]
        je DONE_586D50
        test esi, esi
        je DONE_586D50
        cmp ecx, 1
        jne L1_586D50
        mov eax, dword ptr [ebx - 0x4]
        mov edx, dword ptr [eax + 0x70]
        lea ecx, [ebx - 0x4]
        call edx
        test al, al
        jne DONE_586D50
L1_586D50:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x18]
        mov ecx, ebx
        call edx
        cmp dword ptr [eax], 0x2
        jne L2_586D50
        mov edx, dword ptr [esp + 0xd8]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push ebp
        lea ecx, [esi + 0x4]
        push edx
        lea edx, [esp + 0x1c]
        push edx
        call eax
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        push ebp
        mov ecx, ebx
        call eax
        mov ecx, eax
        call ext_0067E990
        jmp DONE_586D50
L2_586D50:
        call ext_00480920
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0xe0]
        push eax
        lea ebp, [esi + 0x4]
        push 0x0
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebp
        call edx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x10]
        mov ecx, 0x10
        lea esi, [esp + 0x14]
        lea edi, [esp + 0x54]
        rep movsd
        mov edi, dword ptr [esp + 0xe0]
        push edi
        push 0x1
        lea ecx, [esp + 0x9c]
        push ecx
        mov ecx, ebp
        call edx
        push eax
        lea ecx, [esp + 0x58]
        call ext_0067E990
        mov esi, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebx]
        push esi
        lea eax, [esp + 0x58]
        push eax
        mov eax, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebx
        call eax
        push eax
        mov ecx, ebx
        call ext_00593D40
        push eax
        push esi
        lea ecx, [esp + 0x5c]
        push ecx
        lea edx, [esp + 0x20]
        push edx
        lea eax, [esp + 0xe8]
        push eax
        mov ecx, ebx
        call ext_00593D40
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        push edi
        mov ecx, ebx
        call eax
        mov ecx, eax
        call ext_0067EB90
DONE_586D50:
        lea ecx, [ebx - 0x4]
        call ext_00586D00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc4
        ret 0xc
    }
}

// [0x0065F550] AnimatableTransform::vfunc_7 (95 bytes)
extern "C" void ext_00679140();
extern "C" void ext_006798D0();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0065F550(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        lea edx, [esp]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x2c]
        push ecx
        push eax
        mov dword ptr [esp + 0x2c], 0x0
        call ext_006798D0
        mov ecx, eax
        call ext_00679140
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00593870] AnimatableTransform::vfunc_17_off_C (99 bytes)
extern "C" void ext_005935A0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00593870(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0f0h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_00593870_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_005935A0
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_00593870_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_0053B470();
extern "C" void ext_00586D00();
extern "C" void ext_00661B10();
extern "C" void ext_00662120();
extern "C" void ext_0067E6C0();
extern "C" void ext_00896578();
extern "C" int mem_00B40640;
extern "C" int mem_0093F7B8;

// [0x00588330] AnimatableTransform::vfunc_40 (440 bytes)
extern "C" __declspec(naked) void __fastcall fn_00588330(void* self) {
    __asm {
        push -1
        push offset ext_00896578
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 108h
        push ebx
        push ebp
        mov ebp, dword ptr [esp+120h]
        mov eax, dword ptr [ebp+4]
        mov edx, dword ptr [eax+14h]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr [mem_00B40640]
        add ebp, 4
        push edi
        push ecx
        mov ecx, ebp
        mov dword ptr [esp+14h], ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [esp+12Ch]
        mov ecx, 10h
        lea edi, [esp+54h]
        rep movsd
        push eax
        lea ecx, [esp+58h]
        call ext_0067E6C0
        push ecx
        fld dword ptr [mem_0093F7B8]
        lea ecx, [esp+0A8h]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp+7Ch]
        call ext_0053B470
        fld dword ptr [eax]
        mov edx, dword ptr [ebx+4]
        mov edx, dword ptr [edx]
        fstp dword ptr [esp+74h]
        fld dword ptr [eax+4]
        add ebx, 4
        fstp dword ptr [esp+78h]
        lea ecx, [esp+54h]
        fld dword ptr [eax+8]
        fstp dword ptr [esp+7Ch]
        fld dword ptr [eax+0Ch]
        mov eax, dword ptr [mem_00B40640]
        push eax
        fstp dword ptr [esp+84h]
        push ecx
        push 0
        mov ecx, ebx
        call edx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax+1Ch]
        mov ecx, ebx
        call edx
        test al, al
        je loc_5884C4
        mov ecx, dword ptr [mem_00B40640]
        call ext_00661B10
        test al, al
        jne loc_5884C4
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea ecx, [esp+0BCh]
        mov dword ptr [esp+0B8h], eax
        call ext_00466F00
        mov ecx, dword ptr [mem_00B40640]
        mov dword ptr [esp+120h], 0
        call ext_00662120
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax+14h]
        push ecx
        mov ecx, ebp
        call edx
        mov esi, eax
        mov eax, dword ptr [esp+12Ch]
        mov ecx, 10h
        lea edi, [esp+14h]
        rep movsd
        push eax
        lea ecx, [esp+18h]
        call ext_0067E6C0
        push ecx
        fld dword ptr [mem_0093F7B8]
        lea ecx, [esp+98h]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp+3Ch]
        call ext_0053B470
        fld dword ptr [eax]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx]
        fstp dword ptr [esp+34h]
        fld dword ptr [eax+4]
        lea ecx, [esp+14h]
        fstp dword ptr [esp+38h]
        fld dword ptr [eax+8]
        fstp dword ptr [esp+3Ch]
        fld dword ptr [eax+0Ch]
        mov eax, dword ptr [mem_00B40640]
        push eax
        fstp dword ptr [esp+44h]
        push ecx
        push 0
        mov ecx, ebx
        call edx
        lea ecx, [esp+0B4h]
        mov dword ptr [esp+120h], -1
        call ext_00466910
    loc_5884C4:
        mov ecx, dword ptr [esp+10h]
        call ext_00586D00
        mov ecx, dword ptr [esp+118h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 114h
        ret 8
    }
}

// [0x00587520] AnimatableTransform::vfunc_12_off_C (114 bytes)
extern "C" void ext_00480280();
extern "C" void ext_00481BD0();
extern "C" void ext_00587470();
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_00587520(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        lea eax, [ebp - 0xc]
        push eax
        mov ecx, edi
        call ext_00481BD0
        lea esi, [ebp + 0x70]
        mov ecx, esi
        call ext_00480280
        test al, al
        jne loc_0058757B
        push ebx
        mov ebx, dword ptr [esp + 0x14]
    loc_00587547:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je loc_00587558
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 2
        jne loc_0058755E
    loc_00587558:
        call dword ptr [mem_00925134]
    loc_0058755E:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        push edi
        push ebx
        call edx
        mov ecx, esi
        call ext_00480280
        test al, al
        je loc_00587547
        pop ebx
    loc_0058757B:
        mov ecx, dword ptr [ebp + 0x88]
        lea eax, [ebp - 0xc]
        push eax
        call ext_00587470
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
    }
}

extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_00586440();
extern "C" void ext_00586540();
extern "C" void ext_00661E80();
extern "C" void ext_006622C0();
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;

// [0x005884F0] AnimatableTransform::vfunc_8_off_8 (246 bytes)
extern "C" __declspec(naked) void __fastcall fn_005884F0(void* self, int edx_unused, int a0, int a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x0089f614
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x80
        mov eax, dword ptr [esp + 0x94]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0xa0]
        push eax
        lea ebx, [ebp - 8]
        push ecx
        mov ecx, ebx
        call ext_00586540
        mov edi, dword ptr [esp + 0xa8]
        push edi
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x30], edi
        call ext_00466F00
        mov esi, dword ptr [esp + 0xac]
        test esi, esi
        mov dword ptr [esp + 0x98], 0
        je L_skip_str
        add ebp, 0xc
        push ebp
        lea edx, [esp + 0x14]
        push 0x0095b2f0
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        mov byte ptr [esp + 0x9c], 1
        call eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x98], 0
        call dword ptr [mem_00924FF4]
    L_skip_str:
        mov ecx, edi
        call ext_006622C0
    L_loop:
        push edi
        mov ecx, ebx
        call ext_00586440
        test esi, esi
        je L_next
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        mov ecx, esi
        call eax
    L_next:
        mov ecx, edi
        call ext_00661E80
        test al, al
        jne L_loop
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x98], -1
        call ext_00466910
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x8c
        ret 0x10
    }
}

// [0x005885F0] AnimatableTransform::vfunc_9_off_8 (254 bytes)
extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_00586440();
extern "C" void ext_00586540();
extern "C" void ext_00661E80();
extern "C" void ext_00661F70();
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005885F0(void* self, int edx_unused, int a0, int a1, void* a2, void* a3, void* a4) {
    __asm {
        push -1
        push 0x0089f614
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x80
        mov eax, dword ptr [esp + 0x98]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0xa0]
        push eax
        lea ebx, [ebp - 8]
        push ecx
        mov ecx, ebx
        call ext_00586540
        mov edi, dword ptr [esp + 0xac]
        push edi
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x30], edi
        call ext_00466F00
        mov esi, dword ptr [esp + 0xb0]
        test esi, esi
        mov dword ptr [esp + 0x98], 0
        je L_skip_str
        add ebp, 0xc
        push ebp
        lea edx, [esp + 0x14]
        push 0x0095b2f0
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        mov byte ptr [esp + 0x9c], 1
        call eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x98], 0
        call dword ptr [mem_00924FF4]
    L_skip_str:
        mov ecx, dword ptr [esp + 0xa4]
        push ecx
        mov ecx, edi
        call ext_00661F70
    L_loop:
        push edi
        mov ecx, ebx
        call ext_00586440
        test esi, esi
        je L_skip_vcall
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        mov ecx, esi
        call eax
    L_skip_vcall:
        mov ecx, edi
        call ext_00661E80
        test al, al
        jne L_loop
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x98], -1
        call ext_00466910
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x8c
        ret 0x14
    }
}

// [0x0058A3E0] AnimatableTransform::vfunc_0_off_8 (365 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_004C48B0();
extern "C" void ext_0058A200();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0058A3E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x89f952
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x2c
        cmp byte ptr [esp + 0x44], 0x0
        push esi
        mov esi, dword ptr [esp + 0x44]
        push edi
        mov edi, ecx
        jne loc_0058A41E
        mov eax, dword ptr [edi - 0x8]
        mov edx, dword ptr [eax + 0xdc]
        lea ecx, [edi - 0x8]
        push esi
        call edx
        test al, al
        je loc_0058A53A
    loc_0058A41E:
        cmp esi, 0x6
        push ebx
        je loc_0058A4BC
        cmp esi, 0x3
        jl loc_0058A4BC
        push esi
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [edi - 0x8]
        call ext_0058A200
        mov ecx, dword ptr [esp + 0x48]
        push eax
        push 0x0
        mov dword ptr [esp + 0x48], 0x2
        call ext_004C48B0
        lea ecx, [esp + 0x1c]
        mov ebx, eax
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x20]
        lea eax, [8*esi]
        sub eax, esi
        lea ecx, [4*eax + 0xb3f838]
        push ecx
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebx
        mov dword ptr [ebx + 0x20], 0x1
        call edx
        push eax
        lea ecx, [edi + 8*esi + 0xec]
        mov dword ptr [esp + 0x44], 0x3
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x40], 0xffffffff
        je loc_0058A539
        lea edx, [esp + 0xc]
        jmp loc_0058A531
    loc_0058A4BC:
        push 0x6
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [edi - 0x8]
        call ext_0058A200
        mov ecx, dword ptr [esp + 0x48]
        push eax
        mov ebx, 0x1
        push ebx
        mov dword ptr [esp + 0x48], 0x0
        call ext_004C48B0
        lea ecx, [esp + 0x1c]
        mov esi, eax
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x20]
        push 0xb3f8e0
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0x20], ebx
        call edx
        push eax
        lea ecx, [edi + 0x11c]
        mov dword ptr [esp + 0x44], ebx
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x40], 0xffffffff
        je loc_0058A539
        lea edx, [esp + 0x14]
    loc_0058A531:
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        push edx
        call eax
    loc_0058A539:
        pop ebx
    loc_0058A53A:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x38
        ret 0xc
    }
}

extern "C" void ext_00427640();
extern "C" void ext_00427A60();
extern "C" void ext_0046C0A0();
extern "C" void ext_004C48B0();
extern "C" void ext_00519C40();
extern "C" void ext_0058A2B0();
extern "C" void ext_00593910();
extern "C" void ext_00594000();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F448;
extern "C" int mem_00A9ED2C;
extern "C" int mem_00925134;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;

// [0x0058EB60] AnimatableTransform::vfunc_21 (816 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058EB60(void* self, void* _edx, void* arg0) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x89fc2d
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x90
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xa8]
        push    esi
        mov     ebp, ecx
        call    ext_00593910
        mov     eax, dword ptr [mem_00A9F448]
        push    eax
        mov     ecx, esi
        call    ext_0063EFE0
        cmp     eax, 0xb53a34
        je      L_58ebe2
        cmp     eax, 0xb53b30
        je      L_58ebe2
        cmp     eax, 0xb53ab0
        je      L_58ebe2
        cmp     eax, 0xb53a70
        je      L_58ebe2
        cmp     eax, 0xb53af0
        je      L_58ebe2
        mov     ecx, dword ptr [mem_00A9F448]
        push    ecx
        mov     ecx, esi
        call    ext_0063EFE0
        lea     edx, [esp + 8]
        mov     dword ptr [esp + 8], eax
        push    edx
        lea     eax, [ebp + 0x148]
        push    eax
        call    ext_00427640
        add     esp, 8
    L_58ebe2:
        mov     ecx, dword ptr [mem_00A9ED2C]
        push    1
        push    0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_58ec17
        cmp     eax, 0xb53b30
        je      L_58ec17
        cmp     eax, 0xb53ab0
        je      L_58ec17
        cmp     eax, 0xb53a70
        je      L_58ec17
        cmp     eax, 0xb53af0
        jne     L_58ec1e
    L_58ec17:
        mov     esi, 0xb53b30
        jmp     L_58ec20
    L_58ec1e:
        mov     esi, eax
    L_58ec20:
        cmp     esi, 0xb53a34
        je      L_58ee77
        cmp     esi, 0xb53b30
        je      L_58ee77
        cmp     esi, 0xb53ab0
        je      L_58ee77
        cmp     esi, 0xb53a70
        je      L_58ee77
        cmp     esi, 0xb53af0
        je      L_58ee77
        push    ebx
        push    edi
        push    0x94539c
        mov     ecx, esi
        call    ext_0063EFE0
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        call    ext_0046C0A0
        mov     ebx, dword ptr [esi + 0x28]
        mov     edi, dword ptr [mem_00925134]
        add     esi, 0x24
        add     esp, 8
        cmp     ebx, dword ptr [esi + 8]
        mov     dword ptr [esp + 0x10], esi
        jbe     L_58ec97
        call    edi
    L_58ec97:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_00427A60
        __emit  0x8d
        __emit  0x64
        __emit  0x24
        __emit  0x00
    L_58ecb0:
        mov     ebx, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], ebx
        jbe     L_58ecba
        call    edi
    L_58ecba:
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], ebx
        call    ext_00427A60
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        je      L_58ecdd
        cmp     esi, dword ptr [esp + 0x24]
        je      L_58ecdf
    L_58ecdd:
        call    edi
    L_58ecdf:
        mov     ebx, dword ptr [esp + 0x1c]
        cmp     ebx, dword ptr [esp + 0x28]
        jae     L_58ee75
        test    esi, esi
        jne     L_58ecf3
        call    edi
    L_58ecf3:
        cmp     ebx, dword ptr [esi + 8]
        jb      L_58ecfa
        call    edi
    L_58ecfa:
        mov     esi, dword ptr [ebx]
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE8]
        mov     ecx, dword ptr [mem_00A9F838]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0xac], 0
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 8]
        lea     ecx, [esp + 0x68]
        push    ecx
        mov     ecx, eax
        call    edx
        push    eax
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0xac], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0xa8], 0
        call    dword ptr [mem_00924FF4]
        lea     eax, [esi + 4]
        push    eax
        call    ext_00519C40
        add     esp, 4
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebp
        mov     edi, eax
        call    ext_0058A2B0
        mov     edx, dword ptr [ebp]
        mov     edx, dword ptr [edx + 0xc]
        lea     eax, [esp + 0x84]
        push    eax
        mov     ecx, ebp
        call    edx
        push    0x92ab70
        push    eax
        lea     eax, [esp + 0x70]
        push    eax
        mov     byte ptr [esp + 0xb4], 2
        call    dword ptr [mem_00924ECC]
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    eax
        lea     edx, [esp + 0x60]
        push    edx
        mov     byte ptr [esp + 0xc0], 3
        call    dword ptr [mem_00924FD0]
        add     esp, 0x18
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0xa8], 5
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x84]
        mov     byte ptr [esp + 0xa8], 6
        call    dword ptr [mem_00924FF4]
        call    ext_00594000
        mov     eax, dword ptr [eax + 0x26c]
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    edi
        lea     ecx, [eax + 8]
        call    ext_004C48B0
        mov     edi, eax
        test    edi, edi
        je      L_58ee20
        mov     edx, dword ptr [edi]
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        mov     ecx, edi
        call    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [edi + 4]
        call    dword ptr [mem_00924FDC]
        mov     byte ptr [ebp + 0x148], 1
    L_58ee20:
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0xa8], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0xa8], -1
        call    dword ptr [mem_00924FF4]
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebx, dword ptr [edx + 8]
        jb      L_58ee56
        call    dword ptr [mem_00925134]
    L_58ee56:
        add     ebx, 4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_00427A60
        mov     edi, dword ptr [mem_00925134]
        mov     esi, dword ptr [esp + 0x10]
        jmp     L_58ecb0
    L_58ee75:
        pop     edi
        pop     ebx
    L_58ee77:
        mov     ecx, dword ptr [esp + 0x98]
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x9c
        ret     4
    }
}
