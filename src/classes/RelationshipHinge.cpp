// Decompiled translation unit: src/classes/RelationshipHinge.cpp

extern "C" int ext_007D8700(int);
extern "C" int ext_007C9260(int);

// [0x0064E1C0] RelationshipHinge::vfunc_49 (25 bytes)
extern "C" int __fastcall fn_0064E1C0(void* self) {
    int a = ext_007D8700(*(int*)((char*)self + 0x64));
    int b = ext_007C9260(a);
    return b != 0;
}

extern "C" int ext_007C9370(int, int);

// [0x00658BF0] RelationshipHinge::vfunc_55 (29 bytes)
extern "C" int __fastcall fn_00658BF0(void* self, int edx_unused, int a1) {
    return ext_007C9370(ext_007D8700(*(int*)((char*)self + 0x64)), a1);
}

extern "C" int ext_007C9C50(int);
extern "C" int ext_007C9DD0(int);
extern "C" float ext_007C9CB0(int);

// [0x00658CB0] RelationshipHinge::vfunc_38 (29 bytes)
extern "C" float __fastcall fn_00658CB0(void* self, int edx_unused, int a1) {
    int a = ext_007C9C50(*(int*)((char*)self + 0x64));
    int b = ext_007C9DD0(a);
    return -ext_007C9CB0(b);
}

extern "C" int ext_007C9DE0(int);

// [0x00658CD0] RelationshipHinge::vfunc_39 (29 bytes)
extern "C" float __fastcall fn_00658CD0(void* self, int edx_unused, int a1) {
    int a = ext_007C9C50(*(int*)((char*)self + 0x64));
    int b = ext_007C9DE0(a);
    return -ext_007C9CB0(b);
}

extern "C" float ext_007C9DF0(int);

// [0x00658B90] RelationshipHinge::vfunc_8 (35 bytes)
extern "C" float __fastcall fn_00658B90(void* self, int edx_unused, int a1) {
    if (a1 == 0) {
        int a = ext_007C9C50(*(int*)((char*)self + 0x64));
        return -ext_007C9DF0(a);
    }
    return 0.0f;
}

// [0x00658910] RelationshipHinge::vfunc_10 (31 bytes)
extern "C" int ext_007C9310(int, int, int);

extern "C" __declspec(naked) void __fastcall fn_00658910(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x64]
        push eax
        push 0x0
        push ecx
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9310
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_007C9340();

// [0x006588F0] RelationshipHinge::vfunc_9 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_006588F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x64]
        push eax
        push 0x0
        push ecx
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9340
        add esp, 0xc
        ret 0x4
    }
}

// [0x00645F40] RelationshipHinge::vfunc_11 (50 bytes)
extern "C" __declspec(naked) void __stdcall fn_00645F40(void* self, float a1, float a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_clamp_hi
L_store:
        fstp dword ptr [ecx]
        ret 0xc
L_clamp_hi:
        fstp st(0)
        fld dword ptr [ecx]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_store
        fstp st(0)
        ret 0xc
    }
}

// [0x00658B60] RelationshipHinge::vfunc_1 (34 bytes)
extern "C" void ext_007C9E80();

extern "C" __declspec(naked) void __fastcall fn_00658B60(void* self) {
    __asm {
        fldz
        mov eax, dword ptr [ecx + 0x64]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        push eax
        call ext_007C9C50
        add esp, 0x4
        push eax
        call ext_007C9E80
        add esp, 0xc
        ret
    }
}

extern "C" int mem_00984790;

// [0x00658B30] RelationshipHinge::vfunc_53 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00658B30(void* self) {
    __asm {
        fld dword ptr [mem_00984790]
        mov eax, dword ptr [ecx + 0x64]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fldz
        fstp dword ptr [esp]
        push eax
        call ext_007C9C50
        add esp, 0x4
        push eax
        call ext_007C9E80
        add esp, 0xc
        ret
    }
}

extern "C" int mem_00925134;

// [0x006593E0] RelationshipHinge::vfunc_0 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_006593E0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        push edi
        je L_inv1
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_ok1
L_inv1:
        call ebx
L_ok1:
        mov edi, dword ptr [esi + 0x10]
        mov eax, edi
        test eax, eax
        je L_inv2
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_ok2
L_inv2:
        call ebx
L_ok2:
        fld qword ptr [edi]
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi + 0x64]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld qword ptr [eax + 0x10]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fchs
        fstp dword ptr [esp]
        push edx
        call ext_007C9C50
        add esp, 0x4
        push eax
        call ext_007C9E80
        add esp, 0xc
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x00659090] RelationshipHinge::vfunc_51 (274 bytes)
extern "C" void ext_00658A60();
extern "C" void ext_0065F440();
extern "C" void ext_007C9E10();
extern "C" void ext_007C9E20();
extern "C" void ext_007C9E50();
extern "C" __declspec(naked) void __fastcall fn_00659090(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, [esp+0x20]
        mov eax, [esi]
        mov edx, [eax+0xf4]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call edx
        mov eax, [edi+0x64]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_007C9C50
        add esp, 4
        push eax
        call ext_007C9E10
        mov ecx, [edi+0x64]
        add esp, 8
        push 0
        push ecx
        call ext_007C9C50
        add esp, 4
        push eax
        call ext_007C9E20
        mov esi, [esi+0x17c]
        mov edx, [esi]
        mov eax, [edx+0x130]
        add esp, 8
        push 0
        mov ecx, esi
        call eax
        test al, al
        je L183
        mov edx, [esi]
        mov edx, [edx+0x118]
        push ebx
        push 0
        push 0
        lea eax, [esp+0x14]
        push eax
        mov ecx, esi
        call edx
        mov bl, [eax+4]
        lea ecx, [esp+0xc]
        call ext_0065F440
        test bl, bl
        je L13c
        push 0
        push esi
        mov ecx, edi
        call ext_00658A60
        mov eax, [edi+0x64]
        push 1
        push eax
        call ext_007C9C50
        add esp, 4
        push eax
        call ext_007C9E20
        add esp, 8
    L13c:
        mov edx, [esi]
        mov edx, [edx+0x118]
        push 1
        push 0
        lea eax, [esp+0x14]
        push eax
        mov ecx, esi
        call edx
        mov bl, [eax+4]
        lea ecx, [esp+0xc]
        call ext_0065F440
        test bl, bl
        pop ebx
        je L183
        push 1
        push esi
        mov ecx, edi
        call ext_00658A60
        mov eax, [edi+0x64]
        push 1
        push eax
        call ext_007C9C50
        add esp, 4
        push eax
        call ext_007C9E20
        add esp, 8
    L183:
        mov ecx, [edi+0x64]
        push 1
        push ecx
        call ext_007C9C50
        add esp, 4
        push eax
        call ext_007C9E50
        add esp, 8
        pop edi
        pop esi
        add esp, 0x18
        ret 4
    }
}

// [0x00658B00] RelationshipHinge::vfunc_7 (45 bytes)
extern "C" void ext_007C9860(int);

extern "C" __declspec(naked) void __fastcall fn_00658B00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        je loc_658B2B
        mov ecx, dword ptr [esi + 0x64]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 8
    loc_658B2B:
        pop esi
        ret
    }
}

extern "C" void __cdecl ext_007C9930(int);

// [0x00658BC0] RelationshipHinge::vfunc_50 (43 bytes)
extern "C" void __fastcall fn_00658BC0(void* self) {
    int* p = (int*)((char*)self + 0x64);
    if (*p != 0) {
        typedef void (__thiscall *VFunc)(void*);
        VFunc* vtbl = *(VFunc**)self;
        vtbl[7](self);
        ext_007C9930(ext_007D8700(*p));
        *p = 0;
    }
}

extern "C" void ext_00552130();
extern "C" void __cdecl ext_007C9550(int, int, float, float, float, float, float, float);
extern "C" void __cdecl ext_007C9490(int, int, float, float, float);

struct Dummy552130 {
    float* get(float* out, int idx);
};

// [0x00658930] RelationshipHinge::vfunc_43 (294 bytes)
extern "C" void __fastcall fn_00658930(void* self, int edx_unused, Dummy552130* a1) {
    int target = ext_007D8700(*(int*)((char*)self + 0x64));
    float b[8][4];
    float* p1 = a1->get(b[6], 1);
    float* p2 = a1->get(b[3], 1);
    float* p3 = a1->get(b[1], 1);
    float* p4 = a1->get(b[4], 0);
    float* p5 = a1->get(b[2], 0);
    float* p6 = a1->get(b[0], 0);
    ext_007C9550(target, 0, p6[0], p5[1], p4[2], p3[0], p2[1], p1[2]);
    float* q1 = a1->get(b[0], 3);
    float* q2 = a1->get(b[5], 3);
    float* q3 = a1->get(b[7], 3);
    ext_007C9490(target, 0, q3[0], q2[1], q1[2]);
}

extern "C" void __fastcall ext_00658D50(void*);
extern "C" void __cdecl ext_007C97F0(int);

// [0x006591B0] RelationshipHinge::vfunc_6 (52 bytes)
extern "C" void __fastcall fn_006591B0(void* self) {
    int a = ext_007D8700(*(int*)((char*)self + 0x64));
    if (!ext_007C9260(a)) {
        ext_00658D50(self);
        int b = ext_007D8700(*(int*)((char*)self + 0x64));
        ext_007C97F0(b);
    }
}

extern "C" void ext_00552130();
extern "C" void ext_00645A00();
extern "C" void ext_007C9480();
extern "C" void ext_007C9500();
extern "C" void ext_007C9720();
extern "C" void ext_007C9ED0();

// [0x006591F0] RelationshipHinge::vfunc_52 (482 bytes)
extern "C" __declspec(naked) void __fastcall fn_006591F0(void* self) {
    __asm {
        sub esp, 0x90
        push ebx
        mov ebx, dword ptr [esp + 0x98]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [edi + 0x6c], 1
        mov eax, dword ptr [ebx + 0x228]
        test eax, eax
        je L_22a
        mov eax, dword ptr [eax + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        mov edx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [edx]
        jmp L_22c
    L_22a:
        xor eax, eax
    L_22c:
        mov dword ptr [edi + 0x68], eax
        mov ecx, dword ptr [ebx + 0x22c]
        test ecx, ecx
        je L_24f
        mov ecx, dword ptr [ecx + 0x158]
        mov edx, dword ptr [ecx + 0xac]
        mov ecx, dword ptr [edx + 0xa4]
        mov ecx, dword ptr [ecx]
        jmp L_251
    L_24f:
        xor ecx, ecx
    L_251:
        mov edx, dword ptr [edi + 0x64]
        push eax
        push ecx
        push edx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        mov eax, dword ptr [ebx + 4]
        mov edx, dword ptr [esp + 0xb4]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [ebx + 4]
        add esp, 0xc
        push edx
        call eax
        push 3
        lea ecx, [esp + 0x84]
        mov esi, eax
        push ecx
        mov ecx, esi
        call ext_00552130
        push 3
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        mov ebp, eax
        call ext_00552130
        mov dword ptr [esp + 0x10], eax
        push 3
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_00552130
        fld dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [edi + 0x64]
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        push edx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9500
        add esp, 0x10
        push 1
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_00552130
        push 1
        lea ecx, [esp + 0x64]
        push ecx
        mov ecx, esi
        mov ebp, eax
        call ext_00552130
        push 1
        lea edx, [esp + 0x44]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call ext_00552130
        mov dword ptr [esp + 0x1c], eax
        push 0
        lea eax, [esp + 0x54]
        push eax
        mov ecx, esi
        call ext_00552130
        push 0
        lea ecx, [esp + 0x74]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_00552130
        push 0
        lea edx, [esp + 0x94]
        mov dword ptr [esp + 0x1c], eax
        push edx
        mov ecx, esi
        call ext_00552130
        fld dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x1c]
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx]
        mov edx, dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [edx + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax]
        mov eax, dword ptr [edi + 0x64]
        fstp dword ptr [esp]
        push eax
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9720
        add esp, 0x1c
        mov ecx, edi
        call ext_00645A00
        mov ecx, dword ptr [edi + 0x64]
        push ecx
        call ext_007C9C50
        push eax
        call ext_007C9ED0
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0xcc]
        add esp, 8
        push ebx
        mov ecx, edi
        call eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx]
        mov ecx, edi
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 8
    }
}

// [0x00659470] RelationshipHinge::vfunc_54 (192 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924FA0;
extern "C" int mem_00925010;

extern "C" __declspec(naked) bool __fastcall fn_00659470(void* self) {
    __asm {
        sub esp, 0x0c
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x20]
        push 0
        call edx
        fstp dword ptr [esp + 4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x98]
        push 0
        mov ecx, esi
        call edx
        fstp dword ptr [esp + 0x0c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x9c]
        push 0
        mov ecx, esi
        call edx
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 4]
        pop esi
        fld dword ptr [esp + 4]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je loc_6594cc
        fld dword ptr [esp + 8]
        fcompp
        fnstsw ax
        test ah, 5
        jnp loc_6594ce
        mov al, 1
        add esp, 0x0c
        ret

    loc_6594cc:
        fstp st(0)

    loc_6594ce:
        mov eax, dword ptr [mem_00924FA0]
        push 0x984794
        push eax
        call ext_00435D00
        fld dword ptr [esp + 8]
        fld dword ptr [esp + 0x0c]
        add esp, 8
        fcom st(1)
        push 0x92f67c
        push ecx
        mov ecx, dword ptr [mem_00924FA0]
        fnstsw ax
        test ah, 0x41
        jne loc_65950a
        fsubrp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp loc_659518

    loc_65950a:
        fstp st(0)
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]

    loc_659518:
        fstp dword ptr [esp]
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        add esp, 8
        xor al, al
        add esp, 0x0c
        ret
    }
}

// [0x00658E80] RelationshipHinge::vfunc_48 (517 bytes)
extern "C" void ext_007C9C60();
extern "C" void ext_007C97A0();
extern "C" int mem_00B55748;

extern "C" __declspec(naked) void __fastcall fn_00658E80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xa8]
        mov dword ptr [edi + 0x6c], 0x1
        mov eax, dword ptr [ecx + 0x228]
        test eax, eax
        je hinge_a
        mov eax, dword ptr [eax + 0x158]
        mov edx, dword ptr [eax + 0xac]
        mov eax, dword ptr [edx + 0xa4]
        mov eax, dword ptr [eax]
        jmp hinge_b
hinge_a:
        xor eax, eax
hinge_b:
        mov dword ptr [edi + 0x68], eax
        mov eax, dword ptr [ecx + 0x22c]
        test eax, eax
        je hinge_c
        mov ecx, dword ptr [eax + 0x158]
        mov edx, dword ptr [ecx + 0xac]
        mov eax, dword ptr [edx + 0xa4]
        mov esi, dword ptr [eax]
        jmp hinge_d
hinge_c:
        xor esi, esi
hinge_d:
        mov ecx, dword ptr [mem_00B55748]
        mov ebx, dword ptr [ecx + 0x28]
        mov eax, dword ptr [ebx + 0x40]
        push eax
        call ext_007C9C60
        push eax
        mov dword ptr [edi + 0x64], eax
        call ext_007D8700
        mov edx, dword ptr [edi + 0x68]
        add esp, 0x8
        push edx
        mov ebp, eax
        mov eax, dword ptr [edi + 0x64]
        push esi
        push eax
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9480
        mov ecx, dword ptr [esp + 0xb4]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esp + 0xb8]
        mov edx, dword ptr [edx + 0x14]
        add ecx, 0x4
        add esp, 0xc
        push eax
        call edx
        mov esi, eax
        push 0x3
        lea eax, [esp + 0x88]
        push eax
        mov ecx, esi
        call ext_00552130
        push 0x3
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call ext_00552130
        push 0x3
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_00552130
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x8]
        mov edx, dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        mov eax, dword ptr [edi + 0x64]
        fstp dword ptr [esp]
        push eax
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9500
        add esp, 0x10
        push 0x1
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        call ext_00552130
        push 0x1
        lea edx, [esp + 0x68]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_00552130
        mov dword ptr [esp + 0x10], eax
        push 0x1
        lea eax, [esp + 0x48]
        push eax
        mov ecx, esi
        call ext_00552130
        mov dword ptr [esp + 0x18], eax
        push 0x0
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, esi
        call ext_00552130
        push 0x0
        lea edx, [esp + 0x78]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x28], eax
        call ext_00552130
        mov dword ptr [esp + 0x1c], eax
        push 0x0
        lea eax, [esp + 0x98]
        push eax
        mov ecx, esi
        call ext_00552130
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x8]
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x18]
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edx + 0x4]
        mov edx, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        push ebp
        call ext_007C9720
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0xc4]
        mov edx, dword ptr [edx + 0xcc]
        add esp, 0x1c
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [ebx + 0x38]
        push eax
        lea ecx, [eax + 0x1]
        push ebp
        mov dword ptr [ebx + 0x38], ecx
        call ext_007C97A0
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x94
        ret 0x8
    }
}
