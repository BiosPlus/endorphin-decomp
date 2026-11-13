// Decompiled translation unit: src/NMData/Transition.cpp

extern "C" void ext_004871D0();
extern "C" void ext_0049ED40();
extern "C" void ext_00505F00();
extern "C" void ext_00498A50();

// [0x00496FE0] NMData::Transition::vfunc_1_off_8 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00496FE0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0xb0], 0x0
        je L_null
        mov eax, dword ptr [ecx + 0xb0]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        jmp eax
    L_null:
        jmp ext_004871D0
    }
}

// [0x00497090] NMData::Transition::vfunc_37 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_00497090(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx + 0xb8]
        call ext_0049ED40
        ret
    }
}

// [0x00499CE0] NMData::Transition::vfunc_30 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_00499CE0(void* self) {
    __asm {
        add ecx, 0x84
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        call ext_00505F00
        ret 0x4
    }
}

// [0x00498B40] NMData::Transition::vfunc_9 (26 bytes)
extern "C" int __fastcall fn_00498B40(void* self, int edx_unused, int a1) {
    typedef int (__stdcall *FnT)(int);
    int r = ((FnT)ext_00498A50)(a1);
    return (r != -1) ? 2 : 1;
}

// [0x00499AF0] NMData::Transition::vfunc_6_off_10 (35 bytes)
extern "C" int mem_00A9F354;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00499AF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F354]
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

// [0x00497000] NMData::Transition::vfunc_4_off_8 (38 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00497000(void* self, int edx_unused, void* a1) {
    __asm {
        cmp dword ptr [ecx + 0xb0], 0x0
        je L_null
        mov eax, dword ptr [ecx + 0xb0]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov dword ptr [esp + 0x4], 0x0
        mov edx, dword ptr [eax + 0x10]
        jmp edx
    L_null:
        xor eax, eax
        ret 0x4
    }
}

// [0x004972E0] NMData::Transition::vfunc_35 (53 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_004972E0(void* self) {
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
        mov edx, dword ptr [edx + 0x2c]
        push esi
        push ecx
        mov ecx, eax
        call edx
    L_end:
        pop esi
        ret 0x8
    }
}

// [0x00497680] NMData::Transition::vfunc_12 (66 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00497680(void* self, int edx_unused, int* out, int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_fail
        mov eax, dword ptr [esi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_ok
    L_fail:
        call dword ptr [mem_00925134]
    L_ok:
        mov esi, dword ptr [esi + 0x88]
        mov ecx, dword ptr [esi + edi*8]
        mov edx, dword ptr [esi + edi*8 + 0x4]
        mov eax, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        ret 0x8
    }
}

// [0x004991A0] NMData::Transition::vfunc_15_off_8 (59 bytes)
extern "C" void ext_00499130();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_004991A0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x2
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_eq
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_eq:
        add ecx, 0x60
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00499440] NMData::Transition::vfunc_21 (277 bytes)
extern "C" void ext_00498B60();
extern "C" void ext_004990C0();
extern "C" void ext_00499370();
extern "C" int mem_00925134;
extern "C" int mem_0094B858;

extern "C" __declspec(naked) bool __fastcall fn_00499440(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x88]
        test eax, eax
        jne L_nonzero
        xor ebx, ebx
        jmp L_count_done
    L_nonzero:
        mov ebx, dword ptr [edi + 0x8c]
        sub ebx, eax
        sar ebx, 0x3
    L_count_done:
        mov ebp, dword ptr [esp + 0x3c]
        xor esi, esi
        test ebx, ebx
        jle L_after_loop
    L_loop:
        mov ecx, dword ptr [edi + 0x88]
        test ecx, ecx
        je L_invalid
        mov eax, dword ptr [edi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp esi, eax
        jb L_index_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_index_ok:
        mov eax, dword ptr [edi + 0x88]
        mov ecx, dword ptr [eax + 8*esi]
        mov edx, dword ptr [eax + 8*esi + 0x4]
        lea eax, [eax + 8*esi]
        mov dword ptr [esp + 0x10], ecx
        fld dword ptr [esp + 0x10]
        fld st(0)
        mov dword ptr [esp + 0x14], edx
        fld dword ptr [mem_0094B858]
        push ebp
        fld st(0)
        lea eax, [esp + 0x2c]
        _emit 0xde
        _emit 0xea
        push eax
        _emit 0xd9
        _emit 0xc9
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        _emit 0xd8
        _emit 0xe2
        fstp dword ptr [esp + 0x24]
        _emit 0xd9
        _emit 0xc1
        _emit 0xde
        _emit 0xc3
        _emit 0xd9
        _emit 0xca
        fstp dword ptr [esp + 0x28]
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 0x2c]
        call ext_00498B60
        mov ecx, eax
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        _emit 0xd9
        _emit 0xee
        _emit 0xd8
        _emit 0xd1
        fnstsw ax
        _emit 0xdd
        _emit 0xd9
        test ah, 0x1
        je L_skip_first
        fld dword ptr [ecx + 0xc]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x3c]
        fcomp dword ptr [esp + 0x3c]
        fnstsw ax
        test ah, 0x1
        je L_next
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x28
        ret 0x4
    L_skip_first:
        _emit 0xdd
        _emit 0xd8
    L_next:
        add esi, 0x1
        cmp esi, ebx
        jl L_loop
    L_after_loop:
        push ebp
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        call ext_00499370
        mov ecx, eax
        call ext_004990C0
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00496F90] NMData::Transition::vfunc_2_off_8 (65 bytes)
extern "C" void ext_0065F450();

extern "C" __declspec(naked) int __fastcall fn_00496F90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0xb0], 0
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x8], 0
        push esi
        je direct_call
        mov ecx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [ecx + 0x10]
        mov eax, dword ptr [eax + 0x8]
        add ecx, 0x10
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
direct_call:
        call ext_0065F450
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_004976D0();
extern "C" void ext_00498C50();
extern "C" void ext_00499370();
extern "C" void ext_0067F910();
extern "C" int mem_0094B858;
extern "C" int mem_0093F7B0;
extern "C" int mem_00925134;

// [0x00499560] NMData::Transition::vfunc_10 (375 bytes)
extern "C" __declspec(naked) void __fastcall fn_00499560(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push esi
        push ebx
        mov esi, ecx
        call ext_00498A50
        cmp eax, -0x1
        je L_00499580
    L_00499576:
        pop esi
        mov al, 0x1
        pop ebx
        add esp, 0x18
        ret 0x4
    L_00499580:
        push ebx
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00499370
        mov ecx, eax
        call ext_004976D0
        test al, al
        jne L_00499576
        mov eax, dword ptr [esi + 0xbc]
        test eax, eax
        push edi
        je L_00499620
        fld dword ptr [mem_0094B858]
        lea ecx, [esi + 0x84]
        fmul qword ptr [mem_0093F7B0]
        lea edi, [eax + 0xe8]
        fstp dword ptr [esp + 0x28]
        call ext_0067F910
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_00498C50
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0xc], edx
        fld dword ptr [esp + 0xc]
        fld st(0)
        mov dword ptr [esp + 0x10], eax
        fld dword ptr [esp + 0x28]
        push ebx
        fld st(0)
        lea ecx, [esp + 0x18]
        fsubp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fsub st(0), st(2)
        fstp dword ptr [esp + 0x1c]
        fld st(1)
        faddp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x20]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x24]
        call ext_004976D0
        test al, al
        jne L_004996C1
    L_00499620:
        cmp dword ptr [esi + 0xb8], 0x0
        je L_004996CC
        mov edi, dword ptr [esi + 0x88]
        cmp edi, dword ptr [esi + 0x8c]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jbe L_0049964A
        call ebp
        cmp edi, dword ptr [esi + 0x8c]
    L_0049964A:
        jb L_0049964E
        call ebp
    L_0049964E:
        fld dword ptr [mem_0094B858]
        mov ecx, dword ptr [esi + 0xb8]
        fmul qword ptr [mem_0093F7B0]
        push edi
        lea edx, [esp + 0x1c]
        add ecx, 0xe8
        push edx
        fstp dword ptr [esp + 0x34]
        call ext_00498C50
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x10], ecx
        fld dword ptr [esp + 0x10]
        fld st(0)
        mov dword ptr [esp + 0x14], edx
        fld dword ptr [esp + 0x2c]
        push ebx
        fld st(0)
        lea ecx, [esp + 0x1c]
        fsubp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fsub st(0), st(2)
        fstp dword ptr [esp + 0x20]
        fld st(1)
        faddp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x24]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x28]
        call ext_004976D0
        test al, al
        pop ebp
        je L_004996CC
    L_004996C1:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        add esp, 0x18
        ret 0x4
    L_004996CC:
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x004997E0] NMData::Transition::vfunc_26 (73 bytes)
extern "C" void ext_004996E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004997E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_00499801
        mov eax, dword ptr [esi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_00499807
    L_00499801:
        call dword ptr [mem_00925134]
    L_00499807:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x88]
        mov dword ptr [eax + 8 * edi], edx
        mov ecx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 8 * edi + 0x4], ecx
        mov ecx, esi
        call ext_004996E0
        pop edi
        pop esi
        ret 0x8
    }
}

extern "C" int mem_00925134;
extern "C" void ext_004996E0();

// [0x00499830] NMData::Transition::vfunc_32 (203 bytes)
extern "C" __declspec(naked) void __fastcall fn_00499830(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x88]
        cmp esi, dword ptr [ecx + 0x8c]
        push edi
        lea edi, [ecx + 0x84]
        mov dword ptr [esp + 0x10], ecx
        jbe L_499853
        call dword ptr [mem_00925134]
    L_499853:
        mov ebp, dword ptr [esp + 0x18]
    L_499857:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_499865
        call dword ptr [mem_00925134]
    L_499865:
        cmp edi, edi
        je L_49986f
        call dword ptr [mem_00925134]
    L_49986f:
        cmp esi, ebx
        je L_4998ea
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_499880
        call ebx
    L_499880:
        fld dword ptr [esi]
        fadd dword ptr [ebp]
        fstp dword ptr [esi]
        fld dword ptr [ebp + 0x4]
        fadd dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_499897
        call ebx
    L_499897:
        fldz
        fcom dword ptr [esi]
        fnstsw ax
        test ah, 0x41
        jne L_4998a8
        fst dword ptr [esi]
        fld1
        jmp L_4998b5
    L_4998a8:
        fld1
        fcom dword ptr [esi]
        fnstsw ax
        test ah, 0x5
        jp L_4998b5
        fst dword ptr [esi]
    L_4998b5:
        fxch st(1)
        fcom dword ptr [esi + 0x4]
        fnstsw ax
        test ah, 0x41
        jne L_4998c8
        fstp st(1)
        fstp dword ptr [esi + 0x4]
        jmp L_4998db
    L_4998c8:
        fstp st(0)
        fcom dword ptr [esi + 0x4]
        fnstsw ax
        test ah, 0x5
        jp L_4998d9
        fstp dword ptr [esi + 0x4]
        jmp L_4998db
    L_4998d9:
        fstp st(0)
    L_4998db:
        cmp esi, dword ptr [edi + 0x8]
        jb L_4998e2
        call ebx
    L_4998e2:
        add esi, 0x8
        jmp L_499857
    L_4998ea:
        mov ecx, dword ptr [esp + 0x10]
        call ext_004996E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}
