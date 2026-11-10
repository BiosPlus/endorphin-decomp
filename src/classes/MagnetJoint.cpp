// Decompiled translation unit: src/classes/MagnetJoint.cpp

extern "C" int __cdecl ext_007D8700(int a1);
extern "C" int __cdecl ext_007C9260(int a1);

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
