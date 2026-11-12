// Decompiled translation unit: src/NMData/FixedPathJointData.cpp

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
// Tail-call thunk: ecx = this->+0x18c; forwards with ecx = &inner+4 to inner->vtbl[0xb0 / 4].
extern "C" __declspec(naked) void __fastcall fn_005E09B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x18c]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0xb0]
        add ecx, 4
        jmp edx
    }
}

extern "C" void __fastcall ext_005EBC10(void* self, int edx_unused, float* p);

// [0x005ECCF0] NMData::FixedPathJointData::vfunc_4_off_C (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ECCF0(void* self, int edx_unused, float* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        lea edx, [esp + 0x4]
        push edx
        fstp dword ptr [esp + 0x8]
        add ecx, -0xc
        call ext_005EBC10
        ret 0x4
    }
}

extern "C" int mem_00924FE4;

// [0x005EFF60] NMData::FixedPathJointData::vfunc_59 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EFF60(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x96b92c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005E1060] NMData::FixedPathJointData::vfunc_15_off_4 (41 bytes)
extern "C" void ext_0058F670();
extern "C" __declspec(naked) void __fastcall fn_005E1060(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0058F670
        mov esi, dword ptr [esi + 0x178]
        test esi, esi
        je L_done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0x3c]
        lea ecx, [esi + 0x4]
        push edi
        call edx
L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005E0E70] NMData::FixedPathJointData::vfunc_0_off_154 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0E70(void* self, int edx_unused, int a1) {
    __asm {
        cmp dword ptr [ecx + 0x140], 0x0
        jne L_ret
        push edi
        mov edi, dword ptr [ecx + 0xe0]
        test edi, edi
        je L_pop_edi
        mov eax, dword ptr [ecx - 0x150]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x14]
        push esi
        mov esi, dword ptr [edi]
        add ecx, 0xfffffeb0
        push edx
        add esi, 0xac
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        pop esi
L_pop_edi:
        pop edi
L_ret:
        ret 0x4
    }
}

// [0x005EE360] NMData::FixedPathJointData::vfunc_15 (80 bytes)
extern "C" void ext_005EC8D0();
extern "C" void ext_005EC8F0();
extern "C" void ext_005DF1F0();

extern "C" __declspec(naked) int __fastcall fn_005EE360(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2c4
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_2c4
        sub eax, 0x1
        je L_2c5
        push edx
        push esi
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_2c5:
        push ecx
        push esi
        call ext_005EC8F0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_2c4:
        push ecx
        push esi
        call ext_005EC8D0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005E29F0] NMData::FixedPathJointData::vfunc_14 (90 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void __fastcall fn_005E29F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x40
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je fp14_chk17c
        sub eax, 0xf7
        je fp14_chk17c
        sub eax, 0x21
        jne fp14_call1
    fp14_chk180:
        mov eax, dword ptr [ecx + 0x180]
        test eax, eax
        jne fp14_call2
    fp14_call1:
        mov esi, dword ptr [esp + 0xc]
        push edx
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    fp14_chk17c:
        mov eax, dword ptr [ecx + 0x17c]
        test eax, eax
        je fp14_chk180
    fp14_call2:
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005ECB10] NMData::FixedPathJointData::vfunc_9_off_C (136 bytes)
// Stack arg a1 remapped (1 -> 3, 2 -> 4, else unchanged), then forwarded to AnimatableTransform::vfunc_9_off_C
// (0x00528C30). Then iterates the element-pointer vector at [self+0x1f8]..[self+0x1fc] (MSVC iterator checks,
// failure -> invalid_parameter_noinfo) and calls each element's vtable slot 8 (+0x20) with the remapped arg.
// ret 0x4.
extern "C" void ext_00528C30();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005ECB10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        cmp ebp, 0x1
        push esi
        push edi
        mov esi, ecx
        jne L_chk2
        mov ebp, 0x3
        jmp L_call
    L_chk2:
        cmp ebp, 0x2
        jne L_call
        mov ebp, 0x4
    L_call:
        push ebp
        call ext_00528C30
        mov edi, dword ptr [esi + 0x1f8]
        add esi, 0x1f4
        cmp edi, dword ptr [esi + 0x8]
        jbe L_top
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_top:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp esi, esi
        je L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_elem
        call dword ptr [mem_00925134]
    L_elem:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_next
        call dword ptr [mem_00925134]
    L_next:
        add edi, 0x4
        jmp L_top
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x005EB890] NMData::FixedPathJointData::vfunc_10_off_C (139 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EB890(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x74]
        cmp esi, dword ptr [edi + 0x78]
        jbe L_b1
        call dword ptr [mem_00925134]
    L_b1:
        mov ebx, dword ptr [esp + 0x14]
    L_loop:
        mov ebp, dword ptr [edi + 0x78]
        cmp dword ptr [edi + 0x74], ebp
        jbe L_b2
        call dword ptr [mem_00925134]
    L_b2:
        cmp esi, ebp
        je L_done
        cmp byte ptr [esp + 0x18], 0x0
        mov ebp, dword ptr [mem_00925134]
        jne L_call
        cmp esi, dword ptr [edi + 0x78]
        jb L_c1
        call ebp
    L_c1:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc4]
        call edx
        test al, al
        jne L_next
    L_call:
        cmp esi, dword ptr [edi + 0x78]
        jb L_c2
        call ebp
    L_c2:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebx
        call edx
        cmp esi, dword ptr [edi + 0x78]
        jb L_c3
        call ebp
    L_c3:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push 0x1
        push ebx
        call edx
    L_next:
        cmp esi, dword ptr [edi + 0x78]
        jb L_c4
        call ebp
    L_c4:
        add esi, 0x4
        jmp L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x005EB920] NMData::FixedPathJointData::vfunc_63 (184 bytes)
extern "C" void ext_005C2BE0();
extern "C" __declspec(naked) void __fastcall fn_005EB920(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp ebp, dword ptr [esi + 0x194]
        je L_ret
        mov ecx, dword ptr [esi + 0x22c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        je L_nocall
        push edi
        push ebp
        call ext_005C2BE0
    L_nocall:
        cmp dword ptr [esi + 0x194], ebp
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        push ebp
        jge L_ge
        mov edx, dword ptr [eax + 0x114]
        jmp L_vcall
    L_ge:
        mov edx, dword ptr [eax + 0x110]
    L_vcall:
        call edx
        lea edi, [esi + 0x1d0]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        push ebx
        _emit 0x8D
        _emit 0x49
        _emit 0x00
    L_loop:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_b
        call dword ptr [mem_00925134]
    L_b:
        test edi, edi
        je L_b2
        cmp edi, edi
        je L_b3
    L_b2:
        call dword ptr [mem_00925134]
    L_b3:
        cmp esi, ebx
        je L_done
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_c0
        call ebx
    L_c0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_c1
        call ebx
    L_c1:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xfc]
        push edx
        push ebp
        call eax
        cmp esi, dword ptr [edi + 0x8]
        jb L_c2
        call ebx
    L_c2:
        add esi, 0x4
        jmp L_loop
    L_done:
        pop ebx
        pop edi
    L_ret:
        pop esi
        pop ebp
        ret 0x8
    }
}
