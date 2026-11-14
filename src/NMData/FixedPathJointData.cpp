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

// [0x005ECE20] NMData::FixedPathJointData::vfunc_35 (274 bytes)
extern "C" void ext_005ECDC0();
extern "C" void ext_00584AE0();
extern "C" void ext_005E0EB0();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005ECE20(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_005ECDC0
        mov edi, dword ptr [esi + 0x1d4]
        cmp edi, dword ptr [esi + 0x1d8]
        lea ebp, [esi + 0x1d0]
        mov dword ptr [esp + 0x10], 0x0
        jbe fp35_L1
        call dword ptr [mem_00925134]
fp35_L1:
        mov ebx, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], ebx
        jbe fp35_L2
        call dword ptr [mem_00925134]
fp35_L2:
        cmp ebp, ebp
        je fp35_L3
        call dword ptr [mem_00925134]
fp35_L3:
        cmp edi, ebx
        je fp35_end
        cmp edi, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb fp35_L4
        call ebx
fp35_L4:
        mov ecx, dword ptr [edi]
        call ext_00584AE0
        test al, al
        jne fp35_skip
        cmp edi, dword ptr [ebp + 0x8]
        jb fp35_L5
        call ebx
fp35_L5:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x4
        push edx
        call eax
        fldz
        fst dword ptr [esp + 0x20]
        add eax, 0x30
        fst dword ptr [esp + 0x1c]
        push eax
        fst dword ptr [esp + 0x1c]
        mov ecx, esi
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x20]
        call ext_005E0EB0
        fstp dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x204]
        test ecx, ecx
        je fp35_L6
        mov eax, dword ptr [esi + 0x208]
        sub eax, ecx
        sar eax, 0x2
        cmp dword ptr [esp + 0x10], eax
        jb fp35_L7
fp35_L6:
        call ebx
fp35_L7:
        mov ecx, dword ptr [esi + 0x204]
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ecx + 4*edx]
        test ecx, ecx
        je fp35_L8
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x14]
        push edx
        call eax
fp35_L8:
        add dword ptr [esp + 0x10], 0x1
fp35_skip:
        cmp edi, dword ptr [ebp + 0x8]
        jb fp35_L9
        call ebx
fp35_L9:
        add edi, 0x4
        jmp fp35_L1
fp35_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x005EDFD0] NMData::FixedPathJointData::vfunc_33 (317 bytes)
extern "C" void ext_0048EF80();
extern "C" void ext_00596660();
extern "C" void ext_0058A1A0();
extern "C" int mem_00925134;
extern "C" int mem_00924EA8;
extern "C" __declspec(naked) void __fastcall fn_005EDFD0(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x170]
        cmp     dword ptr [esi + 0x16c], ebx
        push    edi
        lea     edi, [esi + 0x168]
        jbe     L_a
        call    dword ptr [mem_00925134]
L_a:
        mov     ebp, dword ptr [edi + 0x4]
        cmp     ebp, dword ptr [edi + 0x8]
        jbe     L_b
        call    dword ptr [mem_00925134]
L_b:
        push    ebx
        push    edi
        push    ebp
        push    edi
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    ext_0048EF80
        lea     ecx, [esi + 0x198]
        call    dword ptr [mem_00924EA8]
        lea     ecx, [esi + 0x1b4]
        call    dword ptr [mem_00924EA8]
        mov     ebx, dword ptr [esi + 0x1d8]
        cmp     dword ptr [esi + 0x1d4], ebx
        lea     edi, [esi + 0x1d0]
        jbe     L_c
        call    dword ptr [mem_00925134]
L_c:
        mov     ebp, dword ptr [edi + 0x4]
        cmp     ebp, dword ptr [edi + 0x8]
        jbe     L_d
        call    dword ptr [mem_00925134]
L_d:
        push    ebx
        push    edi
        push    ebp
        push    edi
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, edi
        call    ext_00596660
        xor     ebx, ebx
        lea     ecx, [esi + 0x1e4]
        mov     dword ptr [esi + 0x228], ebx
        mov     dword ptr [esi + 0x22c], ebx
        mov     byte ptr [esi + 0x230], bl
        mov     byte ptr [esi + 0x17a], bl
        mov     dword ptr [esi + 0x1e0], ebx
        call    dword ptr [mem_00924EA8]
        lea     edi, [esi + 0x200]
        mov     byte ptr [esi + 0x179], bl
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     L_e
        call    dword ptr [mem_00925134]
L_e:
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x10], eax
        jbe     L_f
        call    dword ptr [mem_00925134]
        mov     eax, dword ptr [esp + 0x10]
L_f:
        push    ebp
        push    edi
        push    eax
        push    edi
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, edi
        call    ext_00596660
        fldz
        mov     dword ptr [esi + 0x298], ebx
        mov     dword ptr [esi + 0x294], ebx
        fst     dword ptr [esi + 0x218]
        fst     dword ptr [esi + 0x214]
        pop     edi
        fst     dword ptr [esi + 0x210]
        mov     ecx, esi
        fst     dword ptr [esi + 0x224]
        fst     dword ptr [esi + 0x220]
        fstp    dword ptr [esi + 0x21c]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        jmp     ext_0058A1A0
    }
}

// [0x005E4C80] NMData::FixedPathJointData::vfunc_3 (261 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00B41854;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void* __fastcall fn_005E4C80(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x889b98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        push esi
        push edi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x18c]
        lea ecx, [eax + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0xb4], 1
        call eax
        mov edi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        mov byte ptr [esp + 0xb0], 2
        call eax
        mov ecx, dword ptr [mem_00B41854]
        mov esi, dword ptr [mem_00924E94]
        push eax
        push 0x92ab70
        push ecx
        push 0x92ab70
        lea edx, [esp + 0x38]
        push edi
        push edx
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xb0], 1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xb8]
        push esi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 8], 1
        mov byte ptr [esp + 0xb0], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xa8]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xac
        ret 4
    }
}

// [0x005E24F0] NMData::FixedPathJointData::vfunc_2 (182 bytes)
extern "C" void ext_0058A370();
extern "C" void ext_0041CF50();
extern "C" void ext_00679030();
extern "C" void ext_006798D0();
extern "C" int mem_00B599BC;
extern "C" __declspec(naked) void __fastcall fn_005E24F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8a61e1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        push esi
        push edi
        xor ebx, ebx
        mov dword ptr [esp + 0x10], ebx
        mov edi, dword ptr [esp + 0x2c]
        push ebp
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x2c], ebx
        call ext_0058A370
        mov eax, dword ptr [edi + 4]
        cmp eax, ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x10], 1
        je L_005E2542
        cmp eax, dword ptr [mem_00B599BC]
        jne L_005E258F
L_005E2542:
        mov eax, dword ptr [esi + 0x234]
        cmp eax, ebx
        je L_005E2551
        add eax, 8
        jmp L_005E2553
L_005E2551:
        xor eax, eax
L_005E2553:
        push esi
        push ebp
        push eax
        lea eax, [esp + 0x20]
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_00679030
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x28], 1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, ebx
        mov byte ptr [esp + 0x24], bl
        je L_005E258F
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx
L_005E258F:
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 8
    }
}

extern "C" void ext_005ED960();
extern "C" void ext_005EBDD0();
extern "C" void ext_005EDA00();

// [0x005EE290] NMData::FixedPathJointData::vfunc_39 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EE290(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005ED960
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_005EBDD0
        mov ecx, esi
        call ext_005EDA00
        pop esi
        ret 0x4
    }
}

extern "C" void ext_005EB5A0();
extern "C" void ext_006404E0();
extern "C" int mem_00A9EF14;

// [0x005EBF70] NMData::FixedPathJointData::vfunc_22 (36 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005EBF70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EF14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_006404E0
        push eax
        mov ecx, esi
        call ext_005EB5A0
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0048EF80();
extern "C" void ext_005EEB90();
extern "C" int mem_00925134;

// [0x005EEDB0] NMData::FixedPathJointData::vfunc_67 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EEDB0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x170]
        cmp dword ptr [esi + 0x16c], ebx
        push edi
        lea edi, [esi + 0x168]
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        push ebx
        push edi
        push ebp
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_0048EF80
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xf0]
        mov ecx, esi
        xor edi, edi
        call eax
        test eax, eax
        jle L4
    L3:
        push edi
        mov ecx, esi
        call ext_005EEB90
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xf0]
        mov ecx, esi
        add edi, 0x1
        call eax
        cmp edi, eax
        jl L3
    L4:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" void ext_005851B0();
extern "C" int mem_00925134;

// [0x005ECF40] NMData::FixedPathJointData::vfunc_14_off_C (233 bytes)
extern "C" __declspec(naked) bool __fastcall fn_005ECF40(void* self, int, int, int flags) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        sub esp, 0x8
        mov eax, esp
        mov esi, ecx
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], ebp
        call ext_005851B0
        mov edi, dword ptr [esi + 0x1f8]
        add esi, 0x1f4
        cmp edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x18], al
        jbe L_005ECF79
        call dword ptr [mem_00925134]
    L_005ECF79:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_005ECF87
        call dword ptr [mem_00925134]
    L_005ECF87:
        cmp esi, esi
        je L_005ECF91
        call dword ptr [mem_00925134]
    L_005ECF91:
        cmp edi, ebx
        je L_005ED01D
        cmp edi, dword ptr [esi + 0x8]
        jb L_005ECFA4
        call dword ptr [mem_00925134]
    L_005ECFA4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x54]
        and ebp, 0x800
        cmp ebp, 0x800
        sete bl
        push 0x80000
        mov byte ptr [esp + 0x14], bl
        call edx
        cmp bl, al
        je L_005ED01D
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_005ECFD0:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov ebx, dword ptr [mem_00925134]
        jbe L_005ECFE0
        call ebx
    L_005ECFE0:
        cmp esi, esi
        je L_005ECFE6
        call ebx
    L_005ECFE6:
        cmp edi, ebp
        je L_005ED01D
        cmp edi, dword ptr [esi + 0x8]
        jb L_005ECFF1
        call ebx
    L_005ECFF1:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x2c]
        push edx
        push 0x80000
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb L_005ED00B
        call ebx
    L_005ED00B:
        mov ecx, dword ptr [edi]
        mov byte ptr [ecx + 0x4], 0x1
        cmp edi, dword ptr [esi + 0x8]
        jb L_005ED018
        call ebx
    L_005ED018:
        add edi, 0x4
        jmp L_005ECFD0
    L_005ED01D:
        mov al, byte ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_005E4990();
extern "C" void ext_005EBCF0();

// [0x005ECD10] NMData::FixedPathJointData::vfunc_37 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ECD10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        fld dword ptr [edi]
        lea eax, [esp + 0xc]
        push eax
        fstp dword ptr [esp + 0x10]
        mov esi, ecx
        call ext_005EBCF0
        fld dword ptr [edi]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_005E4990
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_00586D00();
extern "C" void ext_0067DDB0();
extern "C" int mem_00B40640;

// [0x005E0430] NMData::FixedPathJointData::vfunc_2_off_C (309 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0430(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x58
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [edi - 0x8]
        mov edx, dword ptr [eax + 0xc]
        lea esi, [edi - 0x8]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0x30]
        mov ecx, dword ptr [mem_00B40640]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x34]
        add eax, 0x30
        push ecx
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x10]
        fstp dword ptr [esp + 0x20]
        push 0x0
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call eax
        mov eax, dword ptr [esp + 0x64]
        fld dword ptr [eax]
        lea ecx, [esp + 0x20]
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        call ext_0067DDB0
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        push 0x0
        mov ecx, esi
        call edx
        lea ecx, [edi - 0xc]
        call ext_00586D00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, esi
        call edx
        test al, al
        je L_check_184
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x8]
        add eax, 0x30
        fld dword ptr [eax + 0x4]
        mov ecx, esi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        call edx
        fld dword ptr [eax + 0x30]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [eax + 0x34]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [eax + 0x38]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x38]
L_check_184:
        cmp dword ptr [edi + 0x184], 0x0
        je L_done
        mov ecx, dword ptr [edi + 0x184]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        call edx
L_done:
        pop edi
        pop esi
        add esp, 0x58
        ret 0x4
    }
}

// [0x005EE760] NMData::FixedPathJointData::vfunc_34 (564 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00480920();
extern "C" void ext_00493E40();
extern "C" void ext_00493E50();
extern "C" void ext_00493E70();
extern "C" void ext_00528B90();
extern "C" void ext_00584AE0();
extern "C" void ext_00596660();
extern "C" void ext_005B11D0();
extern "C" void ext_005E0380();
extern "C" void ext_005E0EB0();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005EE760(void* self) {
    __asm {
        push -1
        push 0x8a6740
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0xd8]
        push esi
        push edi
        call edx
        xor ebx, ebx
        mov edi, eax
        mov dword ptr [esp + 0x10], ebx
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x1c]
        lea esi, [ebp + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x2c], ebx
        call edx
        test al, al
        push ebx
        lea eax, [ebp + 0xc]
        push eax
        je L_else
        mov eax, dword ptr [ebp + 0xe8]
        mov ecx, dword ptr [esp + 0x3c]
        push eax
        push edi
        call ext_00493E50
        jmp L_join
L_else:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x3c]
        push eax
        push edi
        call ext_00493E40
L_join:
        push eax
        lea ecx, [ebp + 0xc]
        mov dword ptr [esp + 0x14], eax
        call ext_00528B90
        mov edi, dword ptr [ebp + 0x208]
        cmp dword ptr [ebp + 0x204], edi
        lea esi, [ebp + 0x200]
        jbe L_c1
        call dword ptr [mem_00925134]
L_c1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_c2
        call dword ptr [mem_00925134]
L_c2:
        push edi
        push esi
        push ebx
        push esi
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        call ext_00596660
        mov esi, dword ptr [ebp + 0x1d4]
        cmp esi, dword ptr [ebp + 0x1d8]
        lea edi, [ebp + 0x1d0]
        jbe L_loop
        call dword ptr [mem_00925134]
L_loop:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov dword ptr [esp + 0x20], esi
        jbe L_c3
        call dword ptr [mem_00925134]
L_c3:
        cmp edi, edi
        je L_c4
        call dword ptr [mem_00925134]
L_c4:
        cmp esi, ebx
        je L_end
        cmp esi, dword ptr [edi + 0x8]
        jb L_c5
        call dword ptr [mem_00925134]
L_c5:
        mov ecx, dword ptr [esi]
        call ext_00584AE0
        test al, al
        jne L_skip
        cmp esi, dword ptr [edi + 0x8]
        jb L_c6
        call dword ptr [mem_00925134]
L_c6:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        lea edi, [eax + 0x30]
        fstp dword ptr [esp + 0x14]
        lea esi, [ebp + 0x23c]
        push 0x0
        mov ecx, esi
        call ext_005B11D0
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax]
        push 0x1
        fld dword ptr [edi + 0x4]
        mov ecx, esi
        fstp dword ptr [esp + 0x18]
        call ext_005B11D0
        fld dword ptr [esp + 0x14]
        push 0x2
        fstp dword ptr [eax]
        mov ecx, esi
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x18]
        call ext_005B11D0
        fld dword ptr [esp + 0x14]
        push 0x3
        mov ecx, esi
        fstp dword ptr [eax]
        call ext_005B11D0
        push edi
        mov ecx, ebp
        mov ebx, eax
        call ext_005E0EB0
        fstp dword ptr [ebx]
        push esi
        mov ecx, ebp
        call ext_005E0380
        xor ebx, ebx
        lea eax, [ebp + 0xc]
        push ebx
        push eax
        call ext_00480920
        push eax
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov ecx, esi
        call ext_00493E40
        mov edi, eax
        mov dword ptr [esp + 0x18], edi
        mov eax, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x30], 0x1
        mov dword ptr [esp + 0x14], ebx
        call ext_00493E70
        mov esi, eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [ebp + 0x200]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_0041A920
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xc]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x1c], ebx
        call eax
        mov esi, dword ptr [esp + 0x20]
        mov byte ptr [esp + 0x2c], bl
L_skip:
        cmp esi, dword ptr [ebp + 0x1d8]
        lea edi, [ebp + 0x1d0]
        jb L_c7
        call dword ptr [mem_00925134]
L_c7:
        add esi, 0x4
        jmp L_loop
L_end:
        mov ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 0x4
    }
}

// [0x005EEE30] NMData::FixedPathJointData::vfunc_13_off_C (190 bytes)
extern "C" void ext_005EE9A0();
extern "C" void ext_005BE710();
extern "C" void ext_005A35D0();
extern "C" void ext_00587470();
extern "C" void ext_00587920();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005EEE30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [eax+0x20c]
        lea ebp, [esi-0xc]
        push ebp
        mov ecx, edi
        call ext_005EE9A0
        mov edx, dword ptr [edi+0x18c]
        lea ecx, [esi+0x8]
        push ecx
        add edx, 0x5a4
        push edx
        call ext_005BE710
        mov ecx, dword ptr [edi+0x18c]
        add esp, 8
        push ebp
        call ext_005A35D0
loop_top:
        mov eax, dword ptr [esi+0x74]
        test eax, eax
        je empty_case
        mov ecx, dword ptr [esi+0x78]
        sub ecx, eax
        sar ecx, 2
        je empty_case
        mov edi, eax
        cmp edi, dword ptr [esi+0x78]
        jbe chk2
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi+0x78]
chk2:
        jb chk3
        call dword ptr [mem_00925134]
chk3:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax+0xc]
        lea ecx, [eax+0xc]
        mov eax, dword ptr [edx+0x44]
        call eax
        cmp edi, dword ptr [esi+0x78]
        mov ebx, eax
        jb chk4
        call dword ptr [mem_00925134]
chk4:
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, ebp
        call ext_00587470
        test ebx, ebx
        je loop_top
        mov edx, dword ptr [ebx+0xc]
        mov eax, dword ptr [esi+0x220]
        mov edx, dword ptr [edx+0x34]
        lea ecx, [ebx+0xc]
        push eax
        call edx
        jmp loop_top
empty_case:
        mov eax, dword ptr [esi+0x170]
        push 0
        push eax
        mov ecx, ebp
        call ext_00587920
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}
