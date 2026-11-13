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
