// Decompiled translation unit: src/NMData/State.cpp

extern "C" void ext_006829A0();

// [0x008702F0] NMData::State::vfunc_1_off_18 (12 bytes)
extern "C" __declspec(naked) void fn_008702F0() {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_006829A0
        ret 0x8
    }
}

extern "C" void ext_004A14D0();

// [0x004A17B0] NMData::State::vfunc_37_off_8 (16 bytes)
extern "C" void __fastcall fn_004A17B0(void* self) {
    void* p = (char*)self - 8;
    void* obj = *(void**)((char*)self + 0xf4);
    ((void (__thiscall *)(void*, void*))ext_004A14D0)(obj, p);
}

extern "C" void ext_0049ED70();

// [0x0049F240] NMData::State::vfunc_1_off_10 (28 bytes)
extern "C" void* __fastcall fn_0049F240(void* self, int edx_unused, int a1) {
    void* r = ((void* (__thiscall *)(void*, int))ext_0049ED70)((char*)self - 0x10, a1);
    if (r != 0) {
        return (char*)r + 0x10;
    }
    return 0;
}

// [0x0049AC80] NMData::State::vfunc_4_off_10 (34 bytes)
extern "C" void* __fastcall fn_0049AC80(void* self, int edx_unused, unsigned char a1) {
    if (a1 != 0) {
        if (*((char*)self + 0x54) != 0) {
            return 0;
        }
    }
    void* p = *(void**)((char*)self + 0xec);
    if (p != 0) {
        return (char*)p + 0x10;
    }
    return 0;
}

extern "C" int mem_00AA237C;
extern "C" int mem_00924FE4;

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049FA70(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00AA237C]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0049FAC0] NMData::State::vfunc_2_off_8 (42 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049FAC0(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xe0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xe4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xe8]
        mov ecx, dword ptr [ecx + 0xec]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        ret 0x4
    }
}

// [0x0049FAF0] NMData::State::vfunc_18_off_8 (42 bytes)
extern "C" void __fastcall fn_0049FAF0(void* self, int edx_unused, const int* a1) {
    unsigned char* p = (unsigned char*)self;
    *(int*)(p + 0xe0) = a1[0];
    *(int*)(p + 0xe4) = a1[1];
    *(int*)(p + 0xe8) = a1[2];
    *(int*)(p + 0xec) = a1[3];
}

// [0x0049ABE0] NMData::State::vfunc_35_off_8 (56 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0049ABE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push 0x0
        push 0xa30418
        push 0xa303f4
        push 0x0
        push eax
        mov esi, ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_end
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x28]
        add esi, -0x8
        push esi
        push ecx
        mov ecx, eax
        call edx
    L_end:
        pop esi
        ret 0x8
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_0049D360();
extern "C" void ext_0055DA20();

// [0x0049DF50] NMData::State::vfunc_14_off_10 (77 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049DF50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        cmp byte ptr [ecx + 0x54], 0x0
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je short L_store_0049DF50
    L_call_0049DF50:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_store_0049DF50:
        cmp dword ptr [esp + 0x10], 0x1b3
        jne short L_call_0049DF50
        add ecx, 0x10c
        push ecx
        call ext_0049D360
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049AF70] NMData::State::vfunc_10_off_8 (84 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0049AF70(void* self, int edx_unused, const float* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld dword ptr [edx]
        fld dword ptr [ecx + 0xe0]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L49AF70_fail
        fld dword ptr [edx]
        fld dword ptr [ecx + 0xe8]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L49AF70_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0xe4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L49AF70_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0xec]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L49AF70_fail
        mov al, 0x1
        ret 0x4
    L49AF70_fail:
        xor al, al
        ret 0x4
    }
}

// [0x0049E860] NMData::State::vfunc_2_off_10 (112 bytes)
extern "C" void ext_0049E2F0();
extern "C" void ext_0041CF00();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_0049E860(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0x11c], 0x0
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        push edx
        je zero_path
        mov ecx, dword ptr [ecx + 0x11c]
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x8]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    zero_path:
        add ecx, 0x10c
        call ext_0049E2F0
        test eax, eax
        je fail_path
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0041CF00
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    fail_path:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_00414D30();
extern "C" int mem_00925134;

// [0x0049E0D0] NMData::State::vfunc_31_off_8 (182 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049E0D0(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0xe8]
        push edi
        fsub dword ptr [esi + 0xe0]
        mov edi, dword ptr [esp + 0x30]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0xec]
        fsub dword ptr [esi + 0xe4]
        fstp dword ptr [esp + 0x10]
        je short loc_49E113
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        jne short loc_49E115
    loc_49E113:
        call ebx
    loc_49E115:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        fld dword ptr [eax]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x18]
        je short loc_49E13B
        mov edx, dword ptr [edi + 0x8]
        sub edx, eax
        sar edx, 0x3
        jne short loc_49E13D
    loc_49E13B:
        call ebx
    loc_49E13D:
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [edi + 0x4]
        push eax
        mov eax, dword ptr [edi]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00414D30
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0xe0], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0xe4], edx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0xe8], ecx
        mov edx, dword ptr [eax + 0xc]
        pop edi
        mov dword ptr [esi + 0xec], edx
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x4
    }
}

// [0x0049AFD0] NMData::State::vfunc_26_off_8 (188 bytes)
extern "C" void ext_0049ACB0();
extern "C" int mem_0094B858;

extern "C" __declspec(naked) void __fastcall fn_0049AFD0(void* self, int edx_unused, const float* p, int unused) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xe8]
        mov ecx, dword ptr [esi + 0xec]
        mov ebx, dword ptr [esi + 0xe4]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        push edi
        mov edi, dword ptr [esi + 0xe0]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], ecx
        fstp dword ptr [esp + 0x18]
        mov dword ptr [esp + 0xc], edi
        fld dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x10], ebx
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld dword ptr [mem_0094B858]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        je fail_fpu
        fld dword ptr [esp + 0x18]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp fail_clean
        lea ecx, [esp + 0xc]
        call ext_0049ACB0
        test al, al
        je fail_clean
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0xe0], edi
        mov dword ptr [esi + 0xe4], ebx
        mov dword ptr [esi + 0xe8], edx
        pop edi
        mov dword ptr [esi + 0xec], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x8
    fail_fpu:
        fstp st(0)
    fail_clean:
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_00498B60();

// [0x0049E000] NMData::State::vfunc_21_off_8 (112 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0049E000(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0xe0
        call ext_00498B60
        mov ecx, eax
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fldz
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        je L_0049E05A
        fld dword ptr [ecx + 0xc]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x14]
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x1
        je L_0049E05C
        xor eax, eax
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        add esp, 0x10
        ret 0x4
    L_0049E05A:
        fstp st(0)
    L_0049E05C:
        mov eax, 0x1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        add esp, 0x10
        ret 0x4
    }
}

// [0x0049F140] NMData::State::vfunc_14_off_8 (252 bytes)
extern "C" void ext_0049BEE0();
extern "C" void ext_0049F040();
extern "C" void ext_0049F0C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0049F140(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push edi
        mov edi, ecx
        lea ecx, [edi - 0x8]
        push ebp
        mov dword ptr [esp + 0xc], ecx
        call ext_0049F040
        test eax, eax
        je L_140_a
        pop edi
        add eax, 0x8
        pop ebp
        add esp, 0x14
        ret 0x4
    L_140_a:
        mov ecx, dword ptr [edi + 0xcc]
        push ebx
        push esi
        lea esi, [edi + 0xc8]
        push ebp
        push ecx
        mov eax, ecx
        mov eax, dword ptr [eax]
        push esi
        push eax
        lea ecx, [esp + 0x2c]
        push esi
        push ecx
        mov dword ptr [esp + 0x30], eax
        call ext_0049BEE0
        mov ecx, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        add esp, 0x18
        cmp esi, ecx
        je L_140_b
        call dword ptr [mem_00925134]
    L_140_b:
        test esi, esi
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], edx
        je L_140_c
        cmp esi, esi
        je L_140_d
    L_140_c:
        call dword ptr [mem_00925134]
    L_140_d:
        cmp ebx, dword ptr [esp + 0x18]
        je L_140_e
        test esi, esi
        jne L_140_f
        call dword ptr [mem_00925134]
    L_140_f:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_140_g
        call dword ptr [mem_00925134]
    L_140_g:
        pop esi
        lea eax, [ebx + 0x8]
        pop ebx
        pop edi
        pop ebp
        add esp, 0x14
        ret 0x4
    L_140_e:
        mov eax, dword ptr [edi + 0xd8]
        mov esi, dword ptr [eax]
        add edi, 0xd4
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_140_h:
        cmp edi, edi
        mov ebx, dword ptr [edi + 0x4]
        je L_140_i
        call dword ptr [mem_00925134]
    L_140_i:
        cmp esi, ebx
        je L_140_j
        cmp esi, dword ptr [edi + 0x4]
        jne L_140_k
        call dword ptr [mem_00925134]
    L_140_k:
        push ebp
        lea ecx, [esi + 0x8]
        call ext_0049F0C0
        test eax, eax
        jne L_140_l
        cmp esi, dword ptr [edi + 0x4]
        jne L_140_m
        call dword ptr [mem_00925134]
    L_140_m:
        mov esi, dword ptr [esi]
        jmp L_140_h
    L_140_j:
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        call ext_0049F0C0
    L_140_l:
        pop esi
        pop ebx
        pop edi
        pop ebp
        add esp, 0x14
        ret 0x4
    }
}

extern "C" void ext_00499130();
extern "C" void ext_0049D390();
extern "C" void ext_0049E440();
extern "C" void ext_0049FB70();
extern "C" void ext_00671F30();

// [0x004A0150] NMData::State::vfunc_15_off_10 (280 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004A0150(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        cmp byte ptr [ecx + 0x54], 0x0
        mov eax, dword ptr [esp + 0xc]
        lea edx, [ecx + 0x54]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je L_1AD
        cmp eax, 0x2d4
        je L_194
        cmp eax, 0x257
        je L_194
        cmp eax, 0x256
        mov esi, dword ptr [esp + 0xc]
        je L_257
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_194:
        mov esi, dword ptr [esp + 0xc]
        push eax
        add ecx, -0x10
        push ecx
        push esi
        call ext_0049FB70
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_1AD:
        cmp eax, 0x232
        jg L_228
        je L_210
        cmp eax, 0x5e
        je L_1F8
        cmp eax, 0x69
        je L_1E0
        cmp eax, 0x70
        jne L_194
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x98
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_1E0:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x60
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_1F8:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x7c
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_210:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x58
        push ecx
        push esi
        call ext_0049E440
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_228:
        mov esi, eax
        sub esi, 0x256
        je L_253
        sub esi, 0x1e
        jne L_194
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x5c
        push ecx
        push esi
        call ext_0049D390
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_253:
        mov esi, dword ptr [esp + 0xc]
    L_257:
        push edx
        push esi
        call ext_0049D390
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0049CE90();

// [0x0049E190] NMData::State::vfunc_32_off_8 (334 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049E190(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x1c]
        fldz
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp], edx
        fld dword ptr [esp]
        fcom st(1)
        mov dword ptr [esp + 0x4], eax
        fnstsw ax
        fldz
        test ah, 0x41
        fld1
        jne short L_1D5
        fld dword ptr [ecx + 0xe8]
        fadd st, st(3)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_1D5
        fstp st(2)
        fld dword ptr [ecx + 0xe8]
        fsubr st, st(2)
        fstp dword ptr [esp]
        jmp short L_1FE
    L_1D5:
        fxch st(2)
        fcom st(3)
        fnstsw ax
        test ah, 0x5
        jp short L_1FC
        fadd dword ptr [ecx + 0xe0]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_1FE
        fld dword ptr [ecx + 0xe0]
        fchs
        fstp dword ptr [esp]
        jmp short L_1FE
    L_1FC:
        fstp st(0)
    L_1FE:
        fld dword ptr [esp + 0x4]
        fcom st(3)
        fnstsw ax
        test ah, 0x41
        jne short L_22E
        fld st(0)
        fadd dword ptr [ecx + 0xec]
        fcomp st(3)
        fnstsw ax
        test ah, 0x41
        jne short L_22E
        fstp st(0)
        fstp st(2)
        fstp st(1)
        fsub dword ptr [ecx + 0xec]
        fstp dword ptr [esp + 0x4]
        jmp short L_25C
    L_22E:
        fstp st(2)
        fxch st(2)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_258
        fadd dword ptr [ecx + 0xe4]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp short L_25C
        fld dword ptr [ecx + 0xe4]
        fchs
        fstp dword ptr [esp + 0x4]
        jmp short L_25C
    L_258:
        fstp st(0)
        fstp st(0)
    L_25C:
        push esi
        lea esi, [ecx + 0xe0]
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_0049CE90
        fldz
        fcom dword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x41
        jne short L_285
        fst dword ptr [esp + 0xc]
    L_285:
        fcom dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x41
        jne short L_296
        fstp dword ptr [esp + 0x10]
        jmp short L_298
    L_296:
        fstp st(0)
    L_298:
        fld1
        fcom dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x5
        jp short L_2A9
        fst dword ptr [esp + 0x14]
    L_2A9:
        fcom dword ptr [esp + 0x18]
        fnstsw ax
        test ah, 0x5
        jp short L_2BA
        fstp dword ptr [esp + 0x18]
        jmp short L_2BC
    L_2BA:
        fstp st(0)
    L_2BC:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], eax
        pop esi
        add esp, 0x18
        ret 0x4
    }
}

// [0x0049CD30] NMData::State::vfunc_9_off_8 (347 bytes)
extern "C" int mem_0094B858;
extern "C" int mem_00993828;
extern "C" int mem_00993840;
extern "C" void ext_004976D0();

extern "C" __declspec(naked) int __fastcall fn_0049CD30(void* self, int edx_unused, float* p) {
    __asm {
        sub esp, 0x1c
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0xe8]
        lea ecx, [esi + 0xe0]
        fstp dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x24]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [mem_0094B858]
        fld st(0)
        fadd st, st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0x4]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fsub st, st(2)
        fstp dword ptr [esp + 0x14]
        fld st(1)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp short L_0049CDDB
        fld dword ptr [edx]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne short L_0049CDDB
        fld dword ptr [edx + 0x4]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp short L_0049CDDB
        fld dword ptr [edx + 0x4]
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne short L_0049CDDB
        fstp st(0)
        mov eax, 0x3
        pop esi
        add esp, 0x1c
        ret 0x4
L_0049CDDB:
        fld dword ptr [ecx + 0x8]
        fadd dword ptr [ecx]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xe4]
        fstp dword ptr [esp + 0xc]
        fmul qword ptr [mem_00993840]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0x24]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fsub st, st(2)
        fstp dword ptr [esp + 0x14]
        fld st(1)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp short L_0049CE78
        fld dword ptr [edx]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne short L_0049CE78
        fld dword ptr [edx + 0x4]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp short L_0049CE78
        fld dword ptr [edx + 0x4]
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne short L_0049CE78
        mov eax, 0x6
        pop esi
        add esp, 0x1c
        ret 0x4
L_0049CE78:
        push edx
        call ext_004976D0
        neg al
        pop esi
        sbb eax, eax
        neg eax
        add esp, 0x1c
        ret 0x4
    }
}

// [0x0049FCF0] NMData::State::vfunc_6_off_10 (96 bytes)
extern "C" void ext_0040ECB0();

extern "C" __declspec(naked) void __fastcall fn_0049FCF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0xd0]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        push edi
        lea edi, [ecx + 0xcc]

    loc_0049FD08:
        cmp edi, edi
        mov ebx, dword ptr [edi + 0x4]
        je loc_0049FD11
        call ebp

    loc_0049FD11:
        cmp esi, ebx
        je loc_0049FD49
        cmp esi, dword ptr [edi + 0x4]
        jne loc_0049FD1C
        call ebp

    loc_0049FD1C:
        cmp byte ptr [esi + 0x6d], 0
        jne loc_0049FD3E
        cmp esi, dword ptr [edi + 0x4]
        jne loc_0049FD29
        call ebp

    loc_0049FD29:
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 0x4]
        lea ecx, [esi + 0x10]
        call eax
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_0040ECB0

    loc_0049FD3E:
        cmp esi, dword ptr [edi + 0x4]
        jne loc_0049FD45
        call ebp

    loc_0049FD45:
        mov esi, dword ptr [esi]
        jmp loc_0049FD08

    loc_0049FD49:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004A0510] NMData::State::vfunc_30_off_8 (99 bytes)
extern "C" void ext_00412690();
extern "C" void ext_0048EF80();

extern "C" void __fastcall fn_004A0510(void* self, int edx_unused, void* a1) {
    typedef void (__cdecl *InvalidFn)(void);
    typedef void (__thiscall *Fn1)(void* self, void* t, void* a, unsigned b, void* c, unsigned d);
    typedef void (__thiscall *Fn2)(void* self, float* p);

    unsigned* p = (unsigned*)a1;
    unsigned ebx = p[2];
    if (p[1] > ebx) {
        (*(InvalidFn*)&mem_00925134)();
    }
    unsigned ebp = p[1];
    if (ebp > p[2]) {
        (*(InvalidFn*)&mem_00925134)();
    }
    float pair[2];
    ((Fn1)ext_0048EF80)(a1, pair, a1, ebp, a1, ebx);

    pair[0] = *(float*)((char*)self + 0xe0);
    pair[1] = *(float*)((char*)self + 0xe4);
    ((Fn2)ext_00412690)(a1, pair);
}

// [0x0049DBF0] NMData::State::vfunc_3 (849 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00497450();
extern "C" void ext_0049D1C0();
extern "C" void ext_0049D270();
extern "C" void ext_005006E0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00662810();
extern "C" void ext_00682460();
extern "C" int mem_00B5A0B8;
extern "C" int mem_00AA23DC;
extern "C" int mem_00AA23BC;
extern "C" int mem_00924FF0;
extern "C" int mem_00AA2384;
extern "C" int mem_00AA2388;
extern "C" int mem_00AA2374;
extern "C" int mem_00AA23A8;
extern "C" int mem_00AA23C0;
extern "C" int mem_00AA23CC;
extern "C" int mem_00AA2408;
extern "C" int mem_00A9F104;
extern "C" int mem_00A9F1F4;
extern "C" int mem_00AA23B0;
extern "C" int mem_00AA23AC;
extern "C" int mem_00AA23B4;
extern "C" int mem_00AA2358;
extern "C" int mem_00AA2380;
extern "C" int mem_00925134;
extern "C" int mem_00AA2368;
extern "C" int mem_00AA237C;
extern "C" int mem_00AA238C;
extern "C" int mem_00AA2390;

extern "C" __declspec(naked) void __fastcall fn_0049DBF0(void* self) {
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x65], 0
        je      L_49DC10
        cmp     dword ptr [mem_00B5A0B8], 0
        je      L_49DC10
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        add     esp, 8
        ret     4

    L_49DC10:
        cmp     byte ptr [esi + 0x64], 0
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        je      L_49DCA6
        mov     eax, dword ptr [mem_00AA23DC]
        push    eax
        lea     ecx, [esi + 0x1C]
        push    ecx
        push    ebx
        call    ext_00682460
        mov     edx, dword ptr [mem_00AA23BC]
        add     esp, 0xC
        push    edx
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x18]
        call    ext_00427550
        mov     eax, dword ptr [mem_00AA2384]
        mov     ecx, dword ptr [mem_00AA2388]
        push    eax
        push    ecx
        lea     edx, [esi + 0xC4]
        push    ebx
        push    edx
        call    ext_0049D1C0
        add     esp, 0x10
        cmp     dword ptr [mem_00B5A0B8], 0
        jne     L_49DF37
        mov     eax, dword ptr [mem_00AA2374]
        push    0
        push    eax
        mov     ecx, ebx
        call    ext_00640390
        push    eax
        lea     ecx, [esi + 0xE8]
        call    ext_00497450
        mov     eax, ebx
        pop     ebx
        pop     esi
        add     esp, 8
        ret     4

    L_49DCA6:
        mov     ecx, dword ptr [mem_00AA23DC]
        push    edi
        push    ecx
        lea     edx, [esi + 0x1C]
        push    edx
        push    ebx
        call    ext_00682460
        add     esp, 0xC
        cmp     dword ptr [esi + 0x68], 0
        mov     edi, 0x92F17C
        je      L_49DCCB
        mov     edi, 0x92A0D0

    L_49DCCB:
        mov     eax, dword ptr [mem_00AA23A8]
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        push    edi
        lea     ecx, [esp + 0x1C]
        mov     dword ptr [esp + 0x1C], eax
        call    ext_00427550
        cmp     dword ptr [mem_00B5A0B8], 0
        jne     L_49DD26
        mov     ecx, dword ptr [mem_00AA23C0]
        push    ecx
        mov     ecx, ebx
        call    ext_00640110
        movzx   edx, byte ptr [esi + 0x6C]
        push    edx
        push    eax
        call    ext_00640A80
        mov     eax, dword ptr [mem_00AA23CC]
        add     esp, 8
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        movzx   ecx, byte ptr [esi + 0x65]
        push    ecx
        push    eax
        call    ext_00640A80
        add     esp, 8

    L_49DD26:
        cmp     dword ptr [esi + 0xFC], 0
        jne     L_49DD66
        mov     edx, dword ptr [mem_00AA2408]
        push    edx
        mov     ecx, ebx
        call    ext_00640110
        mov     ecx, dword ptr [esi + 0x130]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9F104]
        mov     eax, dword ptr [mem_00A9F1F4]
        push    0
        push    edx
        push    eax
        lea     ecx, [esi + 0x38]
        push    ebx
        push    ecx
        call    ext_0049D270
        add     esp, 0x1C

    L_49DD66:
        mov     eax, dword ptr [esi + 0x12C]
        test    eax, eax
        je      L_49DDAF
        cmp     dword ptr [mem_00B5A0B8], 0
        je      L_49DDAF
        mov     edx, dword ptr [mem_00AA23B0]
        add     eax, 0xC
        push    eax
        push    edx
        push    ebx
        call    ext_00662810
        mov     eax, dword ptr [esi + 0x12C]
        mov     ecx, dword ptr [mem_00AA23AC]
        add     eax, 0x68
        push    eax
        push    ecx
        push    ebx
        call    ext_00662810
        mov     edx, dword ptr [esi + 0x12C]
        add     edx, 0xC4
        jmp     L_49DDDA

    L_49DDAF:
        mov     edx, dword ptr [mem_00AA23B0]
        lea     ecx, [esi + 0x70]
        push    ecx
        push    edx
        push    ebx
        call    ext_00662810
        mov     ecx, dword ptr [mem_00AA23AC]
        lea     eax, [esi + 0x8C]
        push    eax
        push    ecx
        push    ebx
        call    ext_00662810
        lea     edx, [esi + 0xA8]

    L_49DDDA:
        mov     eax, dword ptr [mem_00AA23B4]
        push    edx
        push    eax
        push    ebx
        call    ext_00662810
        mov     ecx, dword ptr [mem_00AA2384]
        mov     edx, dword ptr [mem_00AA2388]
        add     esp, 0x24
        push    ecx
        push    edx
        lea     eax, [esi + 0xC4]
        push    ebx
        push    eax
        call    ext_0049D1C0
        mov     ecx, dword ptr [mem_00AA2384]
        mov     edx, dword ptr [mem_00AA2358]
        push    ecx
        push    edx
        lea     eax, [esi + 0xD0]
        push    ebx
        push    eax
        call    ext_0049D1C0
        add     esp, 0x20
        cmp     dword ptr [esi + 0xE4], 0
        je      L_49DED7
        mov     ecx, dword ptr [mem_00AA2380]
        push    ebp
        push    0
        push    ecx
        mov     ecx, ebx
        call    ext_00640390
        mov     edx, dword ptr [esi + 0xE0]
        mov     edi, dword ptr [edx]
        lea     ebp, [esi + 0xDC]
        mov     dword ptr [esp + 0x1C], eax
        mov     eax, edx
        mov     dword ptr [esp + 0x14], eax
        _emit   0x8D
        _emit   0xA4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    L_49DE60:
        cmp     ebp, ebp
        je      L_49DE6A
        call    dword ptr [mem_00925134]

    L_49DE6A:
        cmp     edi, dword ptr [esp + 0x14]
        je      L_49DED6
        cmp     edi, dword ptr [ebp + 4]
        jne     L_49DE7B
        call    dword ptr [mem_00925134]

    L_49DE7B:
        cmp     byte ptr [edi + 0x6C], 0
        je      L_49DE95
        cmp     edi, dword ptr [ebp + 4]
        jne     L_49DE8C
        call    dword ptr [mem_00925134]

    L_49DE8C:
        mov     ecx, dword ptr [mem_00AA2368]
        push    ecx
        jmp     L_49DEA6

    L_49DE95:
        cmp     edi, dword ptr [ebp + 4]
        jne     L_49DEA0
        call    dword ptr [mem_00925134]

    L_49DEA0:
        mov     eax, dword ptr [mem_00AA237C]
        push    eax

    L_49DEA6:
        mov     ebp, dword ptr [edi + 8]
        mov     ecx, dword ptr [esp + 0x20]
        add     ebp, 0xC
        call    ext_006404E0
        mov     edx, dword ptr [ebp]
        push    eax
        lea     ecx, [edi + 8]
        call    edx
        cmp     edi, dword ptr [esi + 0xE0]
        lea     ebp, [esi + 0xDC]
        jne     L_49DED2
        call    dword ptr [mem_00925134]

    L_49DED2:
        mov     edi, dword ptr [edi]
        jmp     L_49DE60

    L_49DED6:
        pop     ebp

    L_49DED7:
        cmp     dword ptr [mem_00B5A0B8], 0
        pop     edi
        jne     L_49DF18
        mov     eax, dword ptr [mem_00AA2374]
        push    0
        push    eax
        mov     ecx, ebx
        call    ext_00640390
        push    eax
        lea     ecx, [esi + 0xE8]
        call    ext_00497450
        push    0x9404B0
        mov     ecx, ebx
        call    ext_00640110
        mov     ecx, dword ptr [esi + 0xF8]
        push    ecx
        push    eax
        call    ext_00640A50
        add     esp, 8

    L_49DF18:
        mov     edx, dword ptr [mem_00AA238C]
        mov     eax, dword ptr [mem_00AA2390]
        push    0
        push    edx
        push    eax
        push    ebx
        add     esi, 0x11C
        push    esi
        call    ext_005006E0
        add     esp, 0x14

    L_49DF37:
        mov     eax, ebx
        pop     ebx
        pop     esi
        add     esp, 8
        ret     4
    }
}

// [0x0049FC80] NMData::State::vfunc_7_off_10 (111 bytes)
extern "C" void ext_0040ECB0();

extern "C" __declspec(naked) void __fastcall fn_0049FC80(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x10c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0049FC98
        call dword ptr [mem_00925134]
    L_0049FC98:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_0049FCA0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_0049FCAE
        call dword ptr [mem_00925134]
    L_0049FCAE:
        cmp esi, esi
        je L_0049FCB8
        call dword ptr [mem_00925134]
    L_0049FCB8:
        cmp edi, ebx
        je L_0049FCE8
        cmp edi, dword ptr [esi + 0x8]
        jb L_0049FCC7
        call dword ptr [mem_00925134]
    L_0049FCC7:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov ecx, ebp
        call ext_0040ECB0
        cmp edi, dword ptr [esi + 0x8]
        jb L_0049FCE3
        call dword ptr [mem_00925134]
    L_0049FCE3:
        add edi, 0x4
        jmp L_0049FCA0
    L_0049FCE8:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004A0350] NMData::State::vfunc_15_off_8 (448 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_004A02D0();
extern "C" void ext_00596660();
extern "C" void ext_0059A140();
extern "C" __declspec(naked) void __fastcall fn_004A0350(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov ebp, ecx
        mov dword ptr [esp + 0x10], ebp
        jbe L_004A036F
        call dword ptr [mem_00925134]
    L_004A036F:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_004A037D
        call dword ptr [mem_00925134]
    L_004A037D:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_00596660
        mov ecx, dword ptr [ebp + 0xd8]
        mov edi, dword ptr [ecx]
        lea ebx, [ebp + 0xd4]
        jmp L_004A03A0
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_004A03A0:
        cmp ebx, ebx
        mov ebp, dword ptr [ebx + 0x4]
        je L_004A03AD
        call dword ptr [mem_00925134]
    L_004A03AD:
        cmp edi, ebp
        je L_004A0426
        cmp edi, dword ptr [ebx + 0x4]
        jne L_004A03BC
        call dword ptr [mem_00925134]
    L_004A03BC:
        mov edx, dword ptr [edi + 0x10]
        mov ebp, dword ptr [esp + 0x20]
        mov eax, dword ptr [edx + 0x54]
        lea ecx, [edi + 0x10]
        push ebp
        call eax
        test al, al
        je L_004A03FF
        cmp edi, dword ptr [ebx + 0x4]
        jne L_004A03DB
        call dword ptr [mem_00925134]
    L_004A03DB:
        lea eax, [edi + 0x8]
        test eax, eax
        je L_004A03EB
        add eax, 0x8
        mov dword ptr [esp + 0x24], eax
        jmp L_004A03F3
    L_004A03EB:
        mov dword ptr [esp + 0x24], 0x0
    L_004A03F3:
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        call ext_0041A920
    L_004A03FF:
        cmp edi, dword ptr [ebx + 0x4]
        jne L_004A040A
        call dword ptr [mem_00925134]
    L_004A040A:
        push esi
        push ebp
        lea ecx, [edi + 0x8]
        call ext_004A02D0
        cmp edi, dword ptr [ebx + 0x4]
        jne L_004A041F
        call dword ptr [mem_00925134]
    L_004A041F:
        mov edi, dword ptr [edi]
        jmp L_004A03A0
    L_004A0426:
        mov ebp, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebp + 0xcc]
        mov ebx, dword ptr [edx]
        add ebp, 0xc8
    L_004A0438:
        cmp ebp, ebp
        mov edi, dword ptr [ebp + 0x4]
        je L_004A0445
        call dword ptr [mem_00925134]
    L_004A0445:
        cmp ebx, edi
        je L_004A04DF
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_004A0458
        call dword ptr [mem_00925134]
    L_004A0458:
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [ebx + 0x8]
        mov edx, dword ptr [eax + 0x54]
        lea edi, [ebx + 0x8]
        push ecx
        mov ecx, edi
        call edx
        test al, al
        je L_004A04CD
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_004A0479
        call dword ptr [mem_00925134]
    L_004A0479:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x24], edi
        jne L_004A0488
        xor edx, edx
        jmp L_004A0490
    L_004A0488:
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 0x2
    L_004A0490:
        test eax, eax
        je L_004A04AD
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        cmp edx, ecx
        jae L_004A04AD
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], edi
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp L_004A04CD
    L_004A04AD:
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe L_004A04BA
        call dword ptr [mem_00925134]
    L_004A04BA:
        lea eax, [esp + 0x24]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_0059A140
    L_004A04CD:
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_004A04D8
        call dword ptr [mem_00925134]
    L_004A04D8:
        mov ebx, dword ptr [ebx]
        jmp L_004A0438
    L_004A04DF:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_004A04F7
        xor esi, esi
        pop edi
        test esi, esi
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 0xc
        ret 0x8
    L_004A04F7:
        mov esi, dword ptr [esi + 0x8]
        sub esi, eax
        sar esi, 0x2
        pop edi
        xor eax, eax
        test esi, esi
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x004A09E0] NMData::State::vfunc_20_off_8 (1819 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00493D90();
extern "C" void ext_0049A0D0();
extern "C" void ext_0049ABC0();
extern "C" void ext_0049CCE0();
extern "C" void ext_0049E070();
extern "C" void ext_004A0780();
extern "C" void ext_0066A330();
extern "C" int mem_00940634;
extern "C" int mem_009324A4;
extern "C" int mem_00ADD190;
extern "C" int mem_00993828;
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_004A09E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8873bf
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x114
        fld1
        push ebx
        push ebp
        push esi
        push edi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov edi, ecx
        fldz
        lea ecx, [esp + 0x40]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x10]
        mov ecx, edi
        mov dword ptr [esp + 0x12c], 0
        mov ebx, 1
        call edx
        test al, al
        je L_4A0A8B
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        fldz
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        __asm _emit 0xd9 __asm _emit 0x05 __asm _emit 0x34 __asm _emit 0x06 __asm _emit 0x94 __asm _emit 0x00
        fstp dword ptr [esp]
        call ext_0066A330
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x30]
        lea ecx, [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x3c]
        call ext_00493D90
        mov ebx, 2
L_4A0A8B:
        lea ecx, [edi - 0x8]
        call ext_0049ABC0
        test al, al
        je L_4A0AE3
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        __asm _emit 0xd9 __asm _emit 0x05 __asm _emit 0x34 __asm _emit 0x06 __asm _emit 0x94 __asm _emit 0x00
        add ebx, 1
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x30]
        lea ecx, [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x3c]
        call ext_00493D90
L_4A0AE3:
        cmp byte ptr [edi + 0x5d], 0
        je L_4A0B37
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        fldz
        mov ebx, 1
        fst dword ptr [esp + 0x8]
        __asm _emit 0xd9 __asm _emit 0x05 __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x93 __asm _emit 0x00
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        fld dword ptr [eax]
        lea ecx, [esp + 0x14]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x3c]
        call ext_00493D90
L_4A0B37:
        mov eax, dword ptr [edi + 0xf4]
        xor ecx, ecx
        test eax, eax
        je L_4A0B4E
        cmp dword ptr [eax + 0x68], 1
        jne L_4A0B4E
        mov ecx, 1
L_4A0B4E:
        mov eax, dword ptr [edi + 0xe0]
        mov edx, dword ptr [edi + 0xe4]
        mov esi, dword ptr [esp + 0x134]
        cmp dword ptr [esi + 0x38], 0
        mov dword ptr [esp + 0x40], eax
        mov eax, dword ptr [edi + 0xe8]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [edi + 0xec]
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x4c], edx
        jne L_4A0BB7
        fldz
        fst dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld1
        mov edx, dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x40], eax
        fstp dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x44], edx
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x4c], edx
L_4A0BB7:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x4]
        push ecx
        push ebx
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        mov ecx, esi
        call eax
        __asm _emit 0xa1 __asm _emit 0x90 __asm _emit 0xd1 __asm _emit 0xad __asm _emit 0x00
        test eax, eax
        je L_4A0BE3
        mov eax, dword ptr [eax + 0x24]
        lea ecx, [eax + 4*eax]
        add ecx, ecx
        mov dword ptr [esp + 0x10], ecx
        jmp L_4A0BEB
L_4A0BE3:
        mov dword ptr [esp + 0x10], 0x64
L_4A0BEB:
        mov eax, dword ptr [esi + 0x38]
        fild dword ptr [esp + 0x10]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        __asm _emit 0xdc __asm _emit 0x05 __asm _emit 0x28 __asm _emit 0x38 __asm _emit 0x99 __asm _emit 0x00
        _emit 0xde
        _emit 0xe9
        __asm _emit 0xdc __asm _emit 0x05 __asm _emit 0x70 __asm _emit 0xbd __asm _emit 0x92 __asm _emit 0x00
        fstp qword ptr [esp + 0x60]
        fld qword ptr [esp + 0x60]
        fistp dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x10]
        cmp ebp, 1
        jge L_4A0C29
        mov ebp, 1
L_4A0C29:
        push 0x93f8fc
        lea ecx, [esp + 0x18]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xe4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x24]
        push ebp
        push 1
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x84]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x13c], 1
        call eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x12c], 0
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        fld dword ptr [esp + 0x80]
        fsub dword ptr [esp + 0x78]
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x44]
        mov eax, dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x50], ecx
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x4c]
        fld st(0)
        mov ebx, dword ptr [esi]
        fadd dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x54], edx
        mov dword ptr [esp + 0x58], eax
        mov dword ptr [esp + 0x5c], ecx
        fstp dword ptr [esp + 0x50]
        push ebp
        fld dword ptr [esp + 0x88]
        add ebx, 0x10
        cmp byte ptr [edi + 0x5c], 0
        fsub dword ptr [esp + 0x80]
        push 1
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        __asm _emit 0xdc __asm _emit 0x0d __asm _emit 0x28 __asm _emit 0x38 __asm _emit 0x99 __asm _emit 0x00
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x60]
        _emit 0xde
        _emit 0xe2
        fxch st(1)
        fstp dword ptr [esp + 0x60]
        fsubr dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x64]
        je L_4A0D5F
        lea edx, [esp + 0x38]
        push edx
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x5c]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, edi
        call eax
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, esi
        call edx
        add edi, 0x40
        push edi
        lea eax, [esp + 0x18]
        push 0x94062c
        push eax
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xcc __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        add esp, 0xc
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x10]
        push ebp
        push 1
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esp + 0x5c]
        push ecx
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x140], 2
        call edx
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x12c], 0
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        jmp L_4A10CC
L_4A0D5F:
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x38]
        push eax
        mov eax, dword ptr [edx + 0x4]
        lea ecx, [esp + 0x5c]
        push ecx
        mov ecx, edi
        call eax
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, esi
        call edx
        __asm _emit 0x83 __asm _emit 0x3d __asm _emit 0x90 __asm _emit 0xd1 __asm _emit 0xad __asm _emit 0x00 __asm _emit 0x00
        je L_4A0F2E
        sub ebp, 5
        cmp ebp, 1
        jge L_4A0D93
        mov ebp, 1
L_4A0D93:
        push 1
        push 2
        lea ecx, [esp + 0xac]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x4c __asm _emit 0x4e __asm _emit 0x92 __asm _emit 0x00
        lea eax, [esp + 0xa4]
        push 0x940624
        push eax
        mov byte ptr [esp + 0x134], 3
        call ext_00435D00
        __asm _emit 0x8b __asm _emit 0x0d __asm _emit 0x90 __asm _emit 0xd1 __asm _emit 0xad __asm _emit 0x00
        add esp, 8
        cmp byte ptr [ecx + 0x2c], 0
        je L_4A0DF4
        mov eax, dword ptr [edi + 0x118]
        test eax, eax
        je L_4A0DF4
        mov edx, dword ptr [edi + 0x11c]
        sub edx, eax
        sar edx, 2
        je L_4A0DF4
        lea eax, [esp + 0xa4]
        push eax
        lea ecx, [edi - 8]
        call ext_004A0780
L_4A0DF4:
        __asm _emit 0x8b __asm _emit 0x0d __asm _emit 0x90 __asm _emit 0xd1 __asm _emit 0xad __asm _emit 0x00
        cmp byte ptr [ecx + 0x2d], 0
        je L_4A0ED0
        push 0x93f924
        lea ecx, [esp + 0x18]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xe4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        lea edx, [esp + 0xa4]
        push edx
        lea eax, [edi + 0x68]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ebx, [edi - 8]
        mov ecx, ebx
        mov byte ptr [esp + 0x138], 4
        call ext_0049CCE0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x12c], 3
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        push 0x93f91c
        lea ecx, [esp + 0x18]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xe4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        lea edx, [esp + 0xa4]
        push edx
        lea eax, [edi + 0x84]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x138], 5
        call ext_0049CCE0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x12c], 3
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        push 0x93f914
        lea ecx, [esp + 0x18]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xe4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        lea edx, [esp + 0xa4]
        push edx
        lea eax, [edi + 0xa0]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x138], 6
        call ext_0049CCE0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x12c], 3
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
L_4A0ED0:
        lea edx, [esp + 0x88]
        push edx
        lea ecx, [esp + 0xa8]
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x54 __asm _emit 0x4e __asm _emit 0x92 __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x10]
        push ebp
        push 1
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esp + 0x5c]
        push ecx
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x140], 7
        call edx
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0x12c], 3
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0xf4 __asm _emit 0x4f __asm _emit 0x92 __asm _emit 0x00
        lea ecx, [esp + 0xa4]
        mov byte ptr [esp + 0x12c], 0
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x58 __asm _emit 0x4e __asm _emit 0x92 __asm _emit 0x00
L_4A0F2E:
        mov edx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esi + 0x28]
        mov dword ptr [esp + 0x1c], edx
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        lea eax, [ecx + 1]
        fld st(0)
        mov dword ptr [esi + 0x38], eax
        _emit 0xde
        _emit 0xea
        mov eax, dword ptr [esi + 0x24]
        fxch st(1)
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0x2c]
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x20], eax
        fld dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x60], ecx
        fld dword ptr [esp + 0x10]
        fld st(0)
        _emit 0xde
        _emit 0xca
        fld st(2)
        _emit 0xde
        _emit 0xc2
        fxch st(1)
        fstp dword ptr [esp + 0x68]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [esi + 0x20], edx
        fmul dword ptr [esp + 0x48]
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fld st(0)
        _emit 0xde
        _emit 0xea
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x10]
        fld st(0)
        _emit 0xde
        _emit 0xca
        fld st(2)
        _emit 0xde
        _emit 0xc2
        fxch st(1)
        fstp dword ptr [esp + 0x6c]
        mov eax, dword ptr [esp + 0x6c]
        mov dword ptr [esi + 0x24], eax
        fmul dword ptr [esp + 0x4c]
        mov dword ptr [esi + 0x28], edx
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 0x74]
        mov eax, dword ptr [esp + 0x74]
        mov dword ptr [esi + 0x2c], eax
        __asm _emit 0xa1 __asm _emit 0x90 __asm _emit 0xd1 __asm _emit 0xad __asm _emit 0x00
        test eax, eax
        je L_4A0FE5
        mov eax, dword ptr [eax + 0x20]
        jmp L_4A0FEA
L_4A0FE5:
        mov eax, 2
L_4A0FEA:
        cmp ecx, eax
        jge L_4A10AD
        cmp byte ptr [edi + 0x5d], 0
        jne L_4A10AD
        mov eax, dword ptr [edi + 0xcc]
        mov ebx, dword ptr [eax]
        lea ebp, [edi + 0xc8]
        mov dword ptr [esp + 0x10], 0
L_4A1012:
        cmp ebp, ebp
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [esp + 0x6c], ecx
        je L_4A1023
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x34 __asm _emit 0x51 __asm _emit 0x92 __asm _emit 0x00
L_4A1023:
        cmp ebx, dword ptr [esp + 0x6c]
        je L_4A1056
        add dword ptr [esp + 0x10], 1
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_4A1039
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x34 __asm _emit 0x51 __asm _emit 0x92 __asm _emit 0x00
L_4A1039:
        mov edx, dword ptr [esp + 0x10]
        push edx
        push esi
        lea ecx, [ebx + 8]
        call ext_0049A0D0
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_4A1052
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x34 __asm _emit 0x51 __asm _emit 0x92 __asm _emit 0x00
L_4A1052:
        mov ebx, dword ptr [ebx]
        jmp L_4A1012
L_4A1056:
        mov eax, dword ptr [edi + 0xd8]
        lea ebx, [edi + 0xd4]
        mov edi, dword ptr [eax]
L_4A1064:
        cmp ebx, ebx
        mov ebp, dword ptr [ebx + 0x4]
        je L_4A1071
        __asm _emit 0xff __asm _emit 0x15 __asm _emit 0x34 __asm _emit 0x51 __asm _emit 0x92 __asm _emit 0x00
L_4A1071:
        cmp edi, ebp
        je L_4A10A9
        cmp edi, dword ptr [ebx + 0x4]
        __asm _emit 0x8b __asm _emit 0x2d __asm _emit 0x34 __asm _emit 0x51 __asm _emit 0x92 __asm _emit 0x00
        jne L_4A1082
        call ebp
L_4A1082:
        push esi
        lea ecx, [edi + 8]
        call ext_0049E070
        cmp edi, dword ptr [ebx + 0x4]
        jne L_4A1092
        call ebp
L_4A1092:
        mov eax, dword ptr [edi + 0x10]
        mov edx, dword ptr [eax + 0x50]
        lea ecx, [edi + 0x10]
        push esi
        call edx
        cmp edi, dword ptr [ebx + 0x4]
        jne L_4A10A5
        call ebp
L_4A10A5:
        mov edi, dword ptr [edi]
        jmp L_4A1064
L_4A10A9:
        mov ecx, dword ptr [esp + 0x60]
L_4A10AD:
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x20], eax
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x38], ecx
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x24], ecx
        mov dword ptr [esi + 0x28], edx
        mov dword ptr [esi + 0x2c], eax
L_4A10CC:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x12c], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x124]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x120
        ret 0x4
    }
}
