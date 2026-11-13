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
