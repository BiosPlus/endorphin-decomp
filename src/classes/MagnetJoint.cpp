// Decompiled translation unit: src/classes/MagnetJoint.cpp

extern "C" int __cdecl ext_007D8700(int a1);
extern "C" int __cdecl ext_007C9260(int a1);
extern "C" void ext_007C9860();

// [0x0065A070] MagnetJoint::vfunc_49 (25 bytes)
extern "C" int __fastcall fn_0065A070(unsigned char* self) {
    int r = ext_007D8700(*(int*)(self + 0x6C));
    int s = ext_007C9260(r);
    return s != 0;
}

// [0x0065A1A0] MagnetJoint::vfunc_41 (41 bytes)
extern "C" void __cdecl ext_007C9B90(int a0, float a1, float a2, float a3);

extern "C" void __fastcall fn_0065A1A0(unsigned char* self, int edx_unused, float* v) {
    ext_007C9B90(*(int*)(self + 0x6C), v[0], v[1], v[2]);
}

// [0x0065A1D0] MagnetJoint::vfunc_42 (41 bytes)
extern "C" void __cdecl ext_007C9B60(int a0, float a1, float a2, float a3);
extern "C" void __fastcall fn_0065A1D0(unsigned char* self, int edx_unused, float* v) {
    ext_007C9B60(*(int*)(self + 0x6C), v[0], v[1], v[2]);
}

// [0x00645D30] MagnetJoint::vfunc_3 (65 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00645D30(void* self, int edx_unused, unsigned int idx, double v) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0Ch]
        je L_bad
        mov ecx, dword ptr [esi + 14h]
        sub ecx, eax
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 10h]
        fld qword ptr [esp + 10h]
        lea eax, [edi + 2*edi]
        pop edi
        fstp qword ptr [ecx + 8*eax]
        pop esi
        ret 0Ch
    }
}

// [0x00645D80] MagnetJoint::vfunc_4 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00645D80(void* self, int edx_unused, unsigned int idx, double v) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0Ch]
        je L_bad
        mov ecx, dword ptr [esi + 14h]
        sub ecx, eax
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 10h]
        fld qword ptr [esp + 10h]
        lea eax, [edi + 2*edi]
        pop edi
        fstp qword ptr [ecx + 8*eax + 10h]
        pop esi
        ret 0Ch
    }
}

// [0x00645DD0] MagnetJoint::vfunc_5 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00645DD0(void* self, int edx_unused, unsigned int idx, double v) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0Ch]
        je L_bad
        mov ecx, dword ptr [esi + 14h]
        sub ecx, eax
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 10h]
        fld qword ptr [esp + 10h]
        lea eax, [edi + 2*edi]
        pop edi
        fstp qword ptr [ecx + 8*eax + 8h]
        pop esi
        ret 0Ch
    }
}

// [0x0065A100] MagnetJoint::vfunc_43 (84 bytes)
extern "C" void __cdecl ext_007C9AA0(int a0, float a1, float a2, float a3, int a4);

struct Mat16_0065A100 { float m[16]; };

extern "C" void __fastcall fn_0065A100(unsigned char* self, int edx_unused, const Mat16_0065A100* src) {
    Mat16_0065A100 tmp = *src;
    ext_007D8700(*(int*)(self + 0x6C));
    ext_007C9AA0(*(int*)(self + 0x6C), tmp.m[12], tmp.m[13], tmp.m[14], 1);
}

// [0x0065A0D0] MagnetJoint::vfunc_7 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065A0D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x6c]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        je loc_65A0FB
        mov ecx, dword ptr [esi + 0x6c]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 8
    loc_65A0FB:
        pop esi
        ret
    }
}

extern "C" int __cdecl ext_007D8700(int);
extern "C" void __cdecl ext_007C9930(int);

// [0x0065A160] MagnetJoint::vfunc_50 (51 bytes)
extern "C" void __fastcall fn_0065A160(void* self) {
    char* p = (char*)self;
    *(int*)(p + 0x78) = 0;
    *(int*)(p + 0x64) = 0;
    *(int*)(p + 0x68) = 0;
    if (*(int*)(p + 0x6c) != 0) {
        ((void (__thiscall*)(void*))(*(void***)self)[7])(self);
        ext_007C9930(ext_007D8700(*(int*)(p + 0x6c)));
        *(int*)(p + 0x6c) = 0;
    }
}

// [0x0065A260] MagnetJoint::vfunc_48 (250 bytes)
extern "C" int mem_00B55748;
extern "C" void ext_007C9BC0();
extern "C" void ext_007C9480();
extern "C" void ext_007C97A0();
extern "C" void ext_00647F00();

extern "C" __declspec(naked) void __fastcall fn_0065A260(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esi + 74h], 1
        mov eax, dword ptr [ebx + 228h]
        test eax, eax
        push edi
        je L_a
        mov eax, dword ptr [eax + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        mov edx, dword ptr [ecx + 0A4h]
        mov eax, dword ptr [edx]
        jmp L_b
    L_a:
        xor eax, eax
    L_b:
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [ebx + 22Ch]
        test eax, eax
        je L_c
        mov eax, dword ptr [eax + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        mov edx, dword ptr [ecx + 0A4h]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 14h], eax
        jmp L_d
    L_c:
        mov dword ptr [esp + 14h], 0
    L_d:
        mov ecx, dword ptr [mem_00B55748]
        mov edi, dword ptr [ecx + 28h]
        mov eax, dword ptr [edi + 40h]
        push eax
        call ext_007C9BC0
        push eax
        mov dword ptr [esi + 6Ch], eax
        call ext_007D8700
        mov edx, dword ptr [ebx + 22Ch]
        mov ebp, eax
        mov eax, dword ptr [edx + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        add esp, 8
        call ext_00647F00
        cmp dword ptr [esi + 70h], 0
        mov dword ptr [esi + 68h], eax
        je L_e
        mov ecx, dword ptr [ebx + 22Ch]
        mov edx, dword ptr [ecx + 158h]
        mov ecx, dword ptr [edx + 0ACh]
        call ext_00647F00
        mov dword ptr [esi + 64h], eax
        jmp L_f
    L_e:
        mov dword ptr [esi + 64h], 0
    L_f:
        mov eax, dword ptr [esi + 70h]
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esi + 6Ch]
        push eax
        push ecx
        push edx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        mov eax, dword ptr [edi + 38h]
        push eax
        lea ecx, [eax + 1]
        push ebp
        mov dword ptr [edi + 38h], ecx
        call ext_007C97A0
        add esp, 14h
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

extern "C" void ext_00659EC0();
extern "C" void ext_007C97F0();

// [0x0065A090] MagnetJoint::vfunc_6 (52 bytes)
extern "C" void __fastcall fn_0065A090(void* self) {
    int r = ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x6c));
    if (((int (__cdecl*)(int))ext_007C9260)(r) == 0) {
        ((void (__fastcall*)(void*))ext_00659EC0)(self);
        int r2 = ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x6c));
        ((void (__cdecl*)(int))ext_007C97F0)(r2);
    }
}

extern "C" void ext_00552130();
extern "C" void ext_00645A00();
extern "C" void ext_006944D0();
extern "C" void ext_007C9AE0();

// [0x0065A360] MagnetJoint::vfunc_52 (547 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065A360(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 74h
        push ebx
        mov ebx, dword ptr [esp + 7Ch]
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esi + 74h], 1
        mov eax, dword ptr [ebx + 228h]
        test eax, eax
        push edi
        je L_394
        mov eax, dword ptr [eax + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        mov edx, dword ptr [ecx + 0A4h]
        mov eax, dword ptr [edx]
        jmp L_396
    L_394:
        xor eax, eax
    L_396:
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [ebx + 22Ch]
        test eax, eax
        je L_3b9
        mov ecx, dword ptr [eax + 158h]
        mov edx, dword ptr [ecx + 0ACh]
        mov ecx, dword ptr [edx + 0A4h]
        mov edi, dword ptr [ecx]
        jmp L_3bb
    L_3b9:
        xor edi, edi
    L_3bb:
        mov edx, dword ptr [eax + 158h]
        mov ecx, dword ptr [edx + 0ACh]
        call ext_00647F00
        cmp dword ptr [esi + 70h], 0
        mov dword ptr [esi + 68h], eax
        je L_3f1
        mov eax, dword ptr [ebx + 22Ch]
        mov ecx, dword ptr [eax + 158h]
        mov ecx, dword ptr [ecx + 0ACh]
        call ext_00647F00
        mov dword ptr [esi + 64h], eax
        jmp L_3f8
    L_3f1:
        mov dword ptr [esi + 64h], 0
    L_3f8:
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [esi + 6Ch]
        push edx
        push edi
        push eax
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        mov ecx, dword ptr [ebx + 180h]
        mov edx, dword ptr [ecx + 4]
        mov ebp, dword ptr [esp + 98h]
        mov eax, dword ptr [edx + 8]
        add ecx, 4
        add esp, 0Ch
        push ebp
        call eax
        mov dword ptr [esi + 78h], eax
        mov eax, dword ptr [ebx + 180h]
        mov edx, dword ptr [eax + 4]
        lea ecx, [eax + 4]
        mov eax, dword ptr [edx + 8]
        push ebp
        call eax
        mov ebx, dword ptr [ebx + 17Ch]
        mov edx, dword ptr [ebx + 4]
        lea ecx, [ebx + 4]
        mov edi, eax
        mov eax, dword ptr [edx + 14h]
        push ebp
        call eax
        mov ecx, dword ptr [esi + 6Ch]
        push ecx
        mov ebx, eax
        call ext_007D8700
        fldz
        fst dword ptr [esp + 24h]
        add esp, 4
        fst dword ptr [esp + 1Ch]
        push edi
        fst dword ptr [esp + 1Ch]
        lea ecx, [esp + 18h]
        fst dword ptr [esp + 18h]
        fst dword ptr [esp + 34h]
        fst dword ptr [esp + 30h]
        fst dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 28h]
        call ext_006944D0
        push ebx
        lea ecx, [esp + 28h]
        call ext_006944D0
        fld dword ptr [esp + 20h]
        mov edx, dword ptr [esi + 6Ch]
        push 0
        sub esp, 10h
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 28h]
        fstp dword ptr [esp]
        push edx
        call ext_007C9AE0
        add esp, 18h
        push 3
        lea eax, [esp + 38h]
        push eax
        mov ecx, edi
        call ext_00552130
        push 3
        lea ecx, [esp + 48h]
        push ecx
        mov ecx, edi
        mov ebp, eax
        call ext_00552130
        push 3
        lea edx, [esp + 58h]
        mov dword ptr [esp + 14h], eax
        push edx
        mov ecx, edi
        call ext_00552130
        fld dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 6Ch]
        push 0
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        push edx
        call ext_007C9AA0
        add esp, 14h
        push 3
        lea eax, [esp + 58h]
        push eax
        mov ecx, ebx
        call ext_00552130
        push 3
        lea ecx, [esp + 68h]
        push ecx
        mov ecx, ebx
        mov edi, eax
        call ext_00552130
        push 3
        lea edx, [esp + 78h]
        push edx
        mov ecx, ebx
        mov ebp, eax
        call ext_00552130
        fld dword ptr [edi + 8]
        push 1
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [ebp + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax]
        mov eax, dword ptr [esi + 6Ch]
        fstp dword ptr [esp]
        push eax
        call ext_007C9AA0
        add esp, 14h
        mov ecx, esi
        call ext_00645A00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 74h
        ret 8
    }
}

extern "C" void ext_00554490();
extern "C" void ext_0067B7F0();
extern "C" void ext_00694B60();
extern "C" void ext_007C93E0();

// [0x0065A680] MagnetJoint::vfunc_8 (401 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065A680(void* self) {
    __asm {
        sub esp, 60h
        fldz
        push esi
        fst dword ptr [esp+48h]
        mov esi, ecx
        mov edx, dword ptr [esi+6ch]
        fst dword ptr [esp+44h]
        fst dword ptr [esp+54h]
        lea eax, [esp+4ch]
        fst dword ptr [esp+4ch]
        push eax
        fst dword ptr [esp+60h]
        lea ecx, [esp+44h]
        fst dword ptr [esp+5ch]
        push ecx
        fld1
        push 0
        fst dword ptr [esp+4ch]
        push edx
        fst dword ptr [esp+60h]
        fst dword ptr [esp+70h]
        fst dword ptr [esp+2ch]
        fst dword ptr [esp+3ch]
        fstp dword ptr [esp+4ch]
        fst dword ptr [esp+34h]
        fst dword ptr [esp+30h]
        fst dword ptr [esp+40h]
        fst dword ptr [esp+38h]
        fst dword ptr [esp+48h]
        fstp dword ptr [esp+44h]
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C93E0
        mov edx, dword ptr [esi+6ch]
        add esp, 10h
        lea eax, [esp+28h]
        push eax
        lea ecx, [esp+20h]
        push ecx
        push 1
        push edx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C93E0
        fld dword ptr [esp+64h]
        fld dword ptr [esp+54h]
        add esp, 10h
        fld dword ptr [esp+50h]
        lea ecx, [esp+10h]
        fld dword ptr [esp+48h]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+4ch]
        fld dword ptr [esp+40h]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp+14h]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp+18h]
        call ext_0067B7F0
        fld dword ptr [eax]
        fstp dword ptr [esp+58h]
        fld dword ptr [eax+4]
        fstp dword ptr [esp+5ch]
        fld dword ptr [eax+8]
        fstp dword ptr [esp+60h]
        fld dword ptr [esp+30h]
        fld dword ptr [esp+20h]
        fld dword ptr [esp+2ch]
        lea ecx, [esp+10h]
        fld dword ptr [esp+24h]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+28h]
        fld dword ptr [esp+1ch]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp+14h]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp+18h]
        call ext_0067B7F0
        fld dword ptr [eax]
        lea ecx, [esp+1ch]
        fstp dword ptr [esp+34h]
        fld dword ptr [eax+4]
        fstp dword ptr [esp+38h]
        fld dword ptr [eax+8]
        lea eax, [esp+40h]
        push eax
        fstp dword ptr [esp+40h]
        call ext_00554490
        fldz
        lea ecx, [esp+4]
        fst dword ptr [esp+0ch]
        push ecx
        fst dword ptr [esp+0ch]
        push 0
        fstp dword ptr [esp+0ch]
        lea ecx, [esp+24h]
        call ext_00694B60
        mov edx, dword ptr [esp+68h]
        fld dword ptr [esp+4*edx+4]
        pop esi
        add esp, 60h
        ret 4
    }
}

// [0x0065A590] MagnetJoint::vfunc_47 (225 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067E7B0();
extern "C" void ext_0067E880();
extern "C" void ext_007C93A0();
extern "C" void ext_007C93E0();
extern "C" int mem_00A9EC08;

extern "C" __declspec(naked) void __fastcall fn_0065A590(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 90h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 6Ch]
        push eax
        call ext_007D8700
        mov ebx, dword ptr [esp + 0A8h]
        lea esi, [ebx + 10h]
        push esi
        push ebx
        mov ebp, eax
        push 0
        push ebp
        call ext_007C93E0
        lea ecx, [ebx + 30h]
        push ecx
        push 0
        push ebp
        call ext_007C93A0
        fld dword ptr [esi + 8]
        fmul dword ptr [ebx + 4]
        add esp, 20h
        fld dword ptr [esi + 4]
        lea ecx, [esp + 14h]
        fmul dword ptr [ebx + 8]
        fsubp st(1), st
        fstp dword ptr [esp + 14h]
        fld dword ptr [esi]
        fmul dword ptr [ebx + 8]
        fld dword ptr [esi + 8]
        fmul dword ptr [ebx]
        fsubp st(1), st
        fstp dword ptr [esp + 18h]
        fld dword ptr [esi + 4]
        fmul dword ptr [ebx]
        fld dword ptr [esi]
        fmul dword ptr [ebx + 4]
        fsubp st(1), st
        fstp dword ptr [esp + 1Ch]
        call ext_0067B7F0
        fld dword ptr [eax]
        push ecx
        fstp dword ptr [ebx + 20h]
        mov ecx, ebx
        fld dword ptr [eax + 4]
        fstp dword ptr [ebx + 24h]
        fld dword ptr [eax + 8]
        fstp dword ptr [ebx + 28h]
        fld qword ptr [mem_00A9EC08]
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp]
        call ext_0067E7B0
        mov esi, dword ptr [edi + 78h]
        test esi, esi
        je L_done
        mov ecx, 10h
        lea edi, [esp + 20h]
        rep movsd
        lea ecx, [esp + 20h]
        call ext_0067E880
        push ebx
        lea edx, [esp + 64h]
        push edx
        lea ecx, [esp + 28h]
        call ext_004875A0
        mov ecx, 10h
        mov esi, eax
        mov edi, ebx
        rep movsd
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 90h
        ret 4
    }
}
