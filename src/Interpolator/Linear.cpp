// Decompiled translation unit: src/Interpolator/Linear.cpp

// [0x00528640] Interpolator::Linear::vfunc_3 (232 bytes)

extern "C" int mem_00925134;
extern "C" int mem_009533E0;

extern "C" __declspec(naked) float __fastcall fn_00528640(void* self, int edx_unused, void* a1, void* a2, void* a3, float a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        mov dword ptr [esp + 0x1c], esi
        jne L_chk1
        call ebx
    L_chk1:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk2
        call ebx
    L_chk2:
        cmp esi, dword ptr [edi + 0x8]
        lea ebp, [esi + 0x8]
        jb L_chk3
        call ebx
    L_chk3:
        fld dword ptr [esi]
        fadd qword ptr [mem_009533E0]
        fld dword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x41
        jnp L_ret_y0
        mov ebx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov eax, edi
        cmp eax, ebx
        mov dword ptr [esp + 0x18], eax
        je L_chk5
        call dword ptr [mem_00925134]
    L_chk5:
        cmp ebp, dword ptr [esp + 0x14]
        mov ebx, dword ptr [mem_00925134]
        je L_ret_y0
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk6
        call ebx
    L_chk6:
        mov eax, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [eax + 0x8]
        jb L_chk7
        call ebx
    L_chk7:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk8
        call ebx
    L_chk8:
        cmp esi, dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x20]
        fsub dword ptr [esi]
        fld dword ptr [ebp]
        fsub dword ptr [esi]
        fdivp st(1), st
        fstp dword ptr [esp + 0x20]
        jb L_chk9
        call ebx
    L_chk9:
        mov ecx, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [ecx + 0x8]
        jb L_chk10
        call ebx
    L_chk10:
        fld dword ptr [esp + 0x20]
        pop edi
        fld st(0)
        fld1
        fsubrp st(1), st
        fmul dword ptr [esi + 0x4]
        pop esi
        fld dword ptr [ebp + 0x4]
        pop ebp
        fmulp st(2), st
        pop ebx
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        ret 0x10
    L_ret_y0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk11
        call ebx
    L_chk11:
        fld dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00528730] Interpolator::Linear::vfunc_2 (234 bytes)
extern "C" void ext_00693DB0();

extern "C" __declspec(naked) void* __fastcall fn_00528730(void* self, int edx_unused, void* a1, void* a2, void* a3, float a4) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x20], esi
        jne L1
        call ebp
    L1:
        cmp esi, dword ptr [edi + 0x8]
        jb L2
        call ebp
    L2:
        cmp esi, dword ptr [edi + 0x8]
        lea ebx, [esi + 0x14]
        jb L3
        call ebp
    L3:
        fld dword ptr [esi]
        fadd qword ptr [mem_009533E0]
        fld dword ptr [esp + 0x24]
        fcompp
        fnstsw ax
        test ah, 0x41
        jnp Lret
        mov ebp, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], eax
        mov dword ptr [esp + 0x18], eax
        jbe L4
        call dword ptr [mem_00925134]
    L4:
        mov eax, edi
        cmp eax, ebp
        je L5
        call dword ptr [mem_00925134]
    L5:
        cmp ebx, dword ptr [esp + 0x18]
        mov ebp, dword ptr [mem_00925134]
        je Lret
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
    L6:
        mov eax, edi
        cmp ebx, dword ptr [eax + 0x8]
        jb L7
        call ebp
    L7:
        cmp esi, dword ptr [edi + 0x8]
        jb L8
        call ebp
    L8:
        fld dword ptr [esp + 0x24]
        mov eax, edi
        cmp ebx, dword ptr [eax + 0x8]
        fsub dword ptr [esi]
        fld dword ptr [ebx]
        fsub dword ptr [esi]
        fdivp st(1), st
        fstp dword ptr [esp + 0x24]
        jb L9
        call ebp
    L9:
        cmp esi, dword ptr [edi + 0x8]
        jb L10
        call ebp
    L10:
        fld dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        add ebx, 4
        add edi, 4
        push ebx
        add esi, 4
        push esi
        mov ecx, edi
        call ext_00693DB0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    Lret:
        cmp esi, dword ptr [edi + 0x8]
        jb L11
        call ebp
    L11:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x00528820] Interpolator::Linear::vfunc_1 (648 bytes)
extern "C" void ext_0051CE40();
extern "C" void ext_00694330();
extern "C" void ext_00694A70();
extern "C" void ext_00694B60();
extern "C" void ext_00695070();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_00528820(void* self, int edx_unused, void* a1, void* a2, void* a3, float a4) {
    __asm {
        push -1
        push 0x893c9b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xd4]
        push edi
        mov edi, dword ptr [esp + 0xd4]
        test edi, edi
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x14], esi
        jne L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        mov edi, dword ptr [esp + 0xd0]
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        lea ebp, [esi + 0x10]
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp dword ptr [esp + 0xd4], edi
        mov edi, dword ptr [mem_00925134]
        je L_chk4
        call edi
    L_chk4:
        cmp ebp, ebx
        jne L_calc
        mov eax, dword ptr [esp + 0xd4]
        cmp esi, dword ptr [eax + 0x8]
        jb L_chk5
        call edi
    L_chk5:
        lea eax, [esi + 0x4]
        jmp L_exit

    L_calc:
        fldz
        mov ecx, 2
        lea eax, [esp + 0x58]
    L_loop1:
        fst dword ptr [eax + 0x4]
        add eax, 0xc
        sub ecx, 1
        fst dword ptr [eax - 0xc]
        fst dword ptr [eax - 0x10]
        jns L_loop1

        mov ebx, dword ptr [esp + 0xd4]
        fstp st(0)
        cmp esi, dword ptr [ebx + 0x8]
        fld1
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x74]
        jb L_chk6
        call edi
    L_chk6:
        lea ecx, [esi + 0x4]
        push ecx
        xor edi, edi
        push edi
        lea ecx, [esp + 0x5c]
        call ext_00694A70

        fldz
        fst dword ptr [esp + 0x40]
        lea edx, [esp + 0x54]
        fst dword ptr [esp + 0x3c]
        push edx
        fst dword ptr [esp + 0x3c]
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        call ext_00694330

        fldz
        mov ecx, 2
        lea eax, [esp + 0x7c]
    L_loop2:
        fst dword ptr [eax + 0x4]
        add eax, 0xc
        sub ecx, 1
        fst dword ptr [eax - 0xc]
        fst dword ptr [eax - 0x10]
        jns L_loop2

        cmp ebp, dword ptr [ebx + 0x8]
        fstp st(0)
        fld1
        fst dword ptr [esp + 0x78]
        fst dword ptr [esp + 0x88]
        fstp dword ptr [esp + 0x98]
        jb L_chk7
        call dword ptr [mem_00925134]
    L_chk7:
        lea eax, [ebp + 0x4]
        push eax
        push edi
        lea ecx, [esp + 0x80]
        call ext_00694A70

        fldz
        fst dword ptr [esp + 0x30]
        lea ecx, [esp + 0x78]
        fst dword ptr [esp + 0x2c]
        push ecx
        fst dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        call ext_00694330

        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], edi
        mov edx, dword ptr [esp + 0xd4]
        cmp esi, dword ptr [edx + 0x8]
        mov dword ptr [esp + 0xc8], edi
        jb L_chk8
        call dword ptr [mem_00925134]
    L_chk8:
        push edi
        lea eax, [esp + 0x38]
        push eax
        push esi
        lea ecx, [esp + 0x1c]
        call ext_0051CE40

        cmp ebp, dword ptr [ebx + 0x8]
        jb L_chk9
        call dword ptr [mem_00925134]
    L_chk9:
        push edi
        lea ecx, [esp + 0x28]
        push ecx
        push ebp
        lea ecx, [esp + 0x1c]
        call ext_0051CE40

        mov esi, dword ptr [esp + 0x14]
        cmp esi, dword ptr [esp + 0x18]
        jbe L_chk10
        call dword ptr [mem_00925134]
    L_chk10:
        fld dword ptr [esp + 0xdc]
        mov edi, dword ptr [esp + 0x20]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x8]
        push ecx
        fstp dword ptr [esp]
        lea eax, [esp + 0x14]
        push esi
        push eax
        push eax
        mov ecx, edi
        call edx

        fld dword ptr [eax]
        fstp dword ptr [esp + 0x44]
        mov ecx, 2
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [eax + 0xc]
        lea eax, [esp + 0xa0]
        fstp dword ptr [esp + 0x50]
        fldz
    L_loop3:
        fst dword ptr [eax + 0x4]
        add eax, 0xc
        sub ecx, 1
        fst dword ptr [eax - 0xc]
        fst dword ptr [eax - 0x10]
        jns L_loop3

        fstp st(0)
        lea eax, [esp + 0x44]
        fld1
        push eax
        fst dword ptr [esp + 0xa0]
        lea ecx, [esp + 0xa0]
        fst dword ptr [esp + 0xb0]
        fstp dword ptr [esp + 0xc0]
        call ext_00695070

        lea esi, [edi + 0x14]
        push esi
        push 0
        lea ecx, [esp + 0xa4]
        call ext_00694B60

        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_no_free
        push eax
        call ext_006A5C5C
        add esp, 4
    L_no_free:
        mov eax, esi

    L_exit:
        mov ecx, dword ptr [esp + 0xc0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xbc
        ret 0x10
    }
}
