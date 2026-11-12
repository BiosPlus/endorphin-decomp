// Decompiled translation unit: src/leaf/decompiled_7E0000.cpp

#include <math.h>

extern "C" void ext_007C8A50();

// [0x007E4690] sub_007E4690 (21 bytes)
extern "C" void __cdecl fn_007E4690(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 5, 0x007E41C0);
}

// [0x007E8EE0] sub_007E8EE0 (21 bytes)
extern "C" void __cdecl fn_007E8EE0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 4, 0x007E8A00);
}

// [0x007EF8D0] sub_007EF8D0 (21 bytes)
extern "C" void __cdecl fn_007EF8D0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 1, 0x007EF3A0);
}

// [0x007EF8F0] sub_007EF8F0 (21 bytes)
extern "C" void __cdecl fn_007EF8F0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 3, 0x007EF6F0);
}

// [0x007EFB20] sub_007EFB20 (21 bytes)
extern "C" void __cdecl fn_007EFB20(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 2, 0x007EF910);
}

// [0x007EFF40] sub_007EFF40 (28 bytes)
extern "C" void ext_007CA710();
extern "C" void ext_007CAEF0();
extern "C" void ext_007CC590();

extern "C" void __cdecl fn_007EFF40(int a1) {
    ((void (__cdecl*)(int))ext_007CA710)(a1);
    ((void (__cdecl*)(int))ext_007CAEF0)(a1);
    ((void (__cdecl*)(int))ext_007CC590)(a1);
}

// [0x007E4740] sub_007E4740 (44 bytes)
extern "C" void ext_006A7250();

extern "C" float __fastcall fn_007E4740(float* self) {
    float s = self[1] * self[1] + self[0] * self[0] + self[2] * self[2];
    return (float)sqrt(s);
}

// [0x007EC6E0] sub_007EC6E0 (55 bytes)
extern "C" int mem_0099EC8C;

extern "C" __declspec(naked) void __cdecl fn_007EC6E0() {
    __asm {
        fld dword ptr [esp+4]
        fld st(0)
        fabs
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fcomp dword ptr [mem_0099EC8C]
        fnstsw ax
        test ah, 0x41
        jne short L_nonzero
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        ret
    L_nonzero:
        fstp st(0)
        fldz
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        ret
    }
}

// [0x007E51F0] sub_007E51F0 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E51F0(void* self, int edx_unused, float* out, const float* b) {
    __asm {
        mov edx, dword ptr [esp+8]
        fld dword ptr [edx+8]
        mov eax, dword ptr [esp+4]
        fmul dword ptr [ecx+4]
        fld dword ptr [edx+4]
        fmul dword ptr [ecx+8]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [ecx+8]
        fmul dword ptr [edx]
        fld dword ptr [ecx]
        fmul dword ptr [edx+8]
        fsubp st(1), st
        fstp dword ptr [eax+4]
        fld dword ptr [edx+4]
        fmul dword ptr [ecx]
        fld dword ptr [edx]
        fmul dword ptr [ecx+4]
        fsubp st(1), st
        fstp dword ptr [eax+8]
        ret 8
    }
}

// [0x007E5240] sub_007E5240 (60 bytes)
extern "C" __declspec(naked) void __cdecl fn_007E5240(float* out, const float* src, int idx) {
    __asm {
        mov eax, dword ptr [esp+4]
        fldz
        push esi
        push edi
        mov edi, dword ptr [esp+0x14]
        mov ecx, edi
        fstp dword ptr [eax+4*edi]
        mov edx, 1
        shl edx, cl
        mov esi, 1
        pop edi
        and edx, 3
        mov ecx, edx
        shl esi, cl
        mov ecx, dword ptr [esp+0xc]
        and esi, 3
        fld dword ptr [ecx+4*esi]
        fstp dword ptr [eax+4*edx]
        fld dword ptr [ecx+4*edx]
        fchs
        fstp dword ptr [eax+4*esi]
        pop esi
        ret
    }
}

// [0x007E5280] sub_007E5280 (60 bytes)
extern "C" __declspec(naked) void __cdecl fn_007E5280(float* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        fldz
        push esi
        push edi
        mov edi, dword ptr [esp+0x10]
        mov ecx, edi
        fstp dword ptr [eax+4*edi]
        mov edx, 1
        shl edx, cl
        mov esi, 1
        pop edi
        and edx, 3
        mov ecx, edx
        shl esi, cl
        mov ecx, dword ptr [esp+0x10]
        and esi, 3
        fld dword ptr [ecx+4*esi]
        fchs
        fstp dword ptr [eax+4*edx]
        fld dword ptr [ecx+4*edx]
        fstp dword ptr [eax+4*esi]
        pop esi
        ret
    }
}

// [0x007E4870] sub_007E4870 (81 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E4870(void* self, int edx_unused, const void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        fld dword ptr [ecx+0x10]
        fmul dword ptr [eax+4]
        mov edx, dword ptr [esp+8]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [ecx+0x20]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [ecx+4]
        fmul dword ptr [eax]
        fld dword ptr [ecx+0x14]
        fmul dword ptr [eax+4]
        faddp st(1), st
        fld dword ptr [ecx+0x24]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [edx+4]
        fld dword ptr [ecx+8]
        fmul dword ptr [eax]
        fld dword ptr [ecx+0x18]
        fmul dword ptr [eax+4]
        faddp st(1), st
        fld dword ptr [ecx+0x28]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [edx+8]
        ret 8
    }
}

// [0x007E80E0] sub_007E80E0 (103 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007E80E0(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0x18]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0x1c]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [eax + 0x28]
        fld dword ptr [ecx + 0x2c]
        fstp dword ptr [eax + 0x2c]
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [eax + 0x38]
        fld dword ptr [ecx + 0x3c]
        fstp dword ptr [eax + 0x3c]
        ret 0x4
    }
}

// [0x007E4770] sub_007E4770 (107 bytes)
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void __fastcall fn_007E4770(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi]
        fmul dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esi + 0x4]
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp short L_done_7E4770
        fld st(0)
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi]
        fld st(0)
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x4]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0x8]
    L_done_7E4770:
        pop esi
        pop ecx
        ret
    }
}

// [0x007EFE60] sub_007EFE60 (107 bytes)
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __cdecl fn_007EFE60() {
    __asm {
        mov eax, dword ptr [esp+4]
        fld dword ptr [eax+10h]
        mov ecx, dword ptr [esp+8]
        fstp dword ptr [ecx]
        fld dword ptr [eax+14h]
        fstp dword ptr [ecx+4]
        fld dword ptr [eax+18h]
        fstp dword ptr [ecx+8]
        fld dword ptr [eax+20h]
        fld dword ptr [eax+1ch]
        fld dword ptr [eax+24h]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp+4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp+4]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        call ext_006A7250
        fstp dword ptr [esp+4]
        mov eax, dword ptr [esp+0ch]
        fld dword ptr [esp+4]
        fstp dword ptr [eax]
        mov eax, 1
        ret
    }
}

// [0x007E47E0] sub_007E47E0 (130 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E47E0(void* self, int edx_unused, const float* a1, float* a2) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp+0x10]
        fld dword ptr [eax]
        fsub dword ptr [ecx+0x30]
        fstp dword ptr [esp]
        fld dword ptr [eax+4]
        fsub dword ptr [ecx+0x34]
        fstp dword ptr [esp+4]
        fld dword ptr [eax+8]
        mov eax, dword ptr [esp+0x14]
        fsub dword ptr [ecx+0x38]
        fstp dword ptr [esp+8]
        fld dword ptr [ecx+4]
        fld dword ptr [esp+4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [ecx+8]
        fld dword ptr [esp+8]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [ecx+0x14]
        fmul st, st(2)
        fld dword ptr [ecx+0x10]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [ecx+0x18]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [eax+4]
        fld dword ptr [ecx+0x24]
        fmulp st(2), st
        fld dword ptr [ecx+0x20]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [ecx+0x28]
        faddp st(1), st
        fstp dword ptr [eax+8]
        add esp, 0xc
        ret 8
    }
}

// [0x007E46B0] sub_007E46B0 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E46B0(void* self) {
    __asm {
        push ecx
        fld dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fld st(2)
        fmulp st(3), st
        fxch st(2)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fldz
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_zero_7E46B0
        fstp st(1)
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld st(0)
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esi + 0x4]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
L_zero_7E46B0:
        fstp st(0)
        fst dword ptr [esp]
        fld1
        fstp dword ptr [esi]
        fst dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x007E1720] sub_007E1720 (59 bytes)
extern "C" void ext_007C8960();
extern "C" int mem_007E1350;

extern "C" int __cdecl fn_007E1720(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007E1350;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 5, 3, cell);
    return 1;
}

// [0x007E19D0] sub_007E19D0 (59 bytes)
extern "C" int mem_007E1760;

extern "C" int __cdecl fn_007E19D0(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007E1760;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 5, 1, cell);
    return 1;
}

// [0x007E1D30] sub_007E1D30 (59 bytes)
extern "C" int mem_007E1A10;

extern "C" int __cdecl fn_007E1D30(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007E1A10;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 5, 5, cell);
    return 1;
}

// [0x007E2AF0] sub_007E2AF0 (59 bytes)
extern "C" int mem_007E1D70;

extern "C" int __cdecl fn_007E2AF0(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007E1D70;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 5, 2, cell);
    return 1;
}

// [0x007E3D70] sub_007E3D70 (59 bytes)
extern "C" int mem_007E2B30;

extern "C" int __cdecl fn_007E3D70(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007E2B30;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 5, 4, cell);
    return 1;
}

extern "C" void ext_007FB140();
extern "C" void ext_007FB7A0();
extern "C" void ext_007FC190();
extern "C" void ext_007FE320();
extern "C" void ext_007FE800();

// [0x007EFB40] sub_007EFB40 (40 bytes)
extern "C" void __cdecl fn_007EFB40(int a1) {
    ((void (__cdecl*)(int))ext_007FE800)(a1);
    ((void (__cdecl*)(int))ext_007FE320)(a1);
    ((void (__cdecl*)(int))ext_007FC190)(a1);
    ((void (__cdecl*)(int))ext_007FB7A0)(a1);
    ((void (__cdecl*)(int))ext_007FB140)(a1);
}

// [0x007ECC90] sub_007ECC90 (59 bytes)
extern "C" int mem_007ECB20;
extern "C" int mem_007EC9F0;

extern "C" void ext_007C8960();

extern "C" int __cdecl fn_007ECC90(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[4] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007ECB20;
    cell[2] = (int)&mem_007EC9F0;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 4, 1, cell);
    return 1;
}

// [0x007ED4A0] sub_007ED4A0 (59 bytes)
extern "C" int mem_007ED290;

extern "C" void ext_007C8960();

extern "C" int __cdecl fn_007ED4A0(int a1) {
    int cell[6];
    cell[0] = 0;
    cell[2] = 0;
    cell[5] = 0;
    cell[1] = (int)&mem_007ED290;
    cell[4] = 1;
    ((void (__cdecl*)(int, int, int, int*))ext_007C8960)(a1, 4, 3, cell);
    return 1;
}

// [0x007E3FB0] sub_007E3FB0 (63 bytes)
extern "C" int __cdecl fn_007E3FB0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7e3db0;
    d[2] = 0x7f88d0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 5, 6, d);
    return 1;
}

// [0x007E62C0] sub_007E62C0 (63 bytes)
extern "C" int __cdecl fn_007E62C0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7e5d10;
    d[2] = 0x7f88d0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 4, 6, d);
    return 1;
}

// [0x007E7F90] sub_007E7F90 (63 bytes)
extern "C" int __cdecl fn_007E7F90(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7e7a20;
    d[2] = 0x7f88d0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 2, 6, d);
    return 1;
}

// [0x007E89C0] sub_007E89C0 (63 bytes)
extern "C" int __cdecl fn_007E89C0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7e8530;
    d[2] = 0x7f88d0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 1, 6, d);
    return 1;
}

// [0x007EC6A0] sub_007EC6A0 (63 bytes)
extern "C" int __cdecl fn_007EC6A0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7ec400;
    d[2] = 0x7e97c0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 4, 4, d);
    return 1;
}

// [0x007EF0D0] sub_007EF0D0 (63 bytes)
extern "C" int __cdecl fn_007EF0D0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7eedb0;
    d[2] = 0x7ed6a0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 2, 4, d);
    return 1;
}

// [0x007E8F00] sub_007E8F00 (179 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E8F00(void* self, int edx_unused, const float* src) {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [esp + 10h]
        fld dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 10h]
        fstp dword ptr [ecx + 4]
        fld dword ptr [eax + 20h]
        fstp dword ptr [ecx + 8]
        fld dword ptr [eax + 4]
        fstp dword ptr [ecx + 10h]
        fld dword ptr [eax + 14h]
        fstp dword ptr [ecx + 14h]
        fld dword ptr [eax + 24h]
        fstp dword ptr [ecx + 18h]
        fld dword ptr [eax + 8]
        fstp dword ptr [ecx + 20h]
        fld dword ptr [eax + 18h]
        fstp dword ptr [ecx + 24h]
        fld dword ptr [eax + 28h]
        fstp dword ptr [ecx + 28h]
        fld dword ptr [eax + 30h]
        fchs
        fstp dword ptr [esp]
        fld dword ptr [eax + 34h]
        fchs
        fstp dword ptr [esp + 4]
        fld dword ptr [eax + 38h]
        fchs
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 10h]
        fld dword ptr [esp + 4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [ecx + 20h]
        fld dword ptr [esp + 8]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [ecx + 30h]
        fld dword ptr [ecx + 14h]
        fmul st, st(2)
        fld st(3)
        fmul dword ptr [ecx + 4]
        faddp st(1), st
        fld dword ptr [ecx + 24h]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [ecx + 34h]
        fld dword ptr [ecx + 8]
        fmulp st(3), st
        fld dword ptr [ecx + 18h]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [ecx + 28h]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [ecx + 38h]
        add esp, 0ch
        ret 4
    }
}

extern "C" float mem_00B61F50;
extern "C" float mem_00B61F54;
extern "C" float mem_00B61F58;
extern "C" float mem_00B61F5C;
extern "C" float mem_00B61F60;
extern "C" float mem_00B61F64;
extern "C" float mem_00B61F68;
extern "C" float mem_00B61F6C;
extern "C" float mem_00B61F70;
extern "C" float mem_00B61F74;

// [0x007E9580] sub_007E9580 (246 bytes)
extern "C" float __cdecl fn_007E9580(const float* angles) {
    float c0 = (float)cos(angles[0]);
    float s0 = (float)sin(angles[0]);
    float c1 = (float)cos(angles[1]);
    float s1 = (float)sin(angles[1]);

    return (mem_00B61F58 * c1 + mem_00B61F5C * s1) * mem_00B61F74
         - (mem_00B61F50 * c0 + mem_00B61F54 * s0) * mem_00B61F70
         - (c0 * c1 * mem_00B61F60 + c0 * s1 * mem_00B61F64 + s0 * c1 * mem_00B61F68 + s0 * s1 * mem_00B61F6C) * (mem_00B61F70 * mem_00B61F74);
}

// [0x007E6480] sub_007E6480 (250 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E6480(void* self) {
    __asm {
        fld dword ptr [esp + 0x10]
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ebx, eax
        push edi
        xor edi, edi
        sub ebx, ecx
        sub esi, ecx
        sub edx, ecx

    loc_7E649D:
        fld dword ptr [ebx + ecx]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        fld dword ptr [esi + ecx]
        test ah, 5
        jp loc_7E64DB
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 5
        jp loc_7E655C

    loc_7E64CF:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret

    loc_7E64DB:
        fmul dword ptr [edx + ecx]
        fchs
        fld dword ptr [edx + ecx]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edx + ecx]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul dword ptr [ecx]
        fld dword ptr [esi + ecx]
        fmul dword ptr [edx + ecx]
        fchs
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fld dword ptr [ebp]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp loc_7E6527
        fstp dword ptr [ebp]
        jmp loc_7E6529

    loc_7E6527:
        fstp st(0)

    loc_7E6529:
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x10]
        fld dword ptr [eax]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_7E6544
        mov eax, dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        jmp loc_7E6546

    loc_7E6544:
        fstp st(0)

    loc_7E6546:
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fld dword ptr [ebp]
        fcompp
        fnstsw ax
        test ah, 0x41
        je loc_7E64CF

    loc_7E655C:
        add edi, 1
        add ecx, 4
        cmp edi, 3
        jl loc_7E649D

        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007ED4E0] sub_007ED4E0 (191 bytes)
extern "C" void ext_007E6480();
extern "C" int mem_0093F7B8;
extern "C" int mem_00958CC8;
extern "C" __declspec(naked) void __fastcall fn_007ED4E0(void* self) {
    __asm {
        sub esp, 8
        fld dword ptr [mem_0093F7B8]
        push ecx
        fstp dword ptr [esp + 4]
        lea eax, [esp + 8]
        fld1
        lea ecx, [esp + 4]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x14]
        fmul qword ptr [mem_00958CC8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, esi
        call ext_007E6480
        add esp, 0x10
        test eax, eax
        je done
        mov ecx, dword ptr [ebx]
        lea eax, [ecx + 0xc]
        mov dword ptr [ebx], eax
        fld dword ptr [esi + 4]
        fld dword ptr [esp]
        lea edx, [eax + 0xc]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi + 4]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 8]
        fmul st, st(1)
        fadd dword ptr [edi + 8]
        fstp dword ptr [esp]
        fmul dword ptr [esi]
        fadd dword ptr [edi]
        mov dword ptr [ebx], edx
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 4]
        fld dword ptr [esp]
        fstp dword ptr [ecx + 8]
        fld dword ptr [esi + 4]
        fld dword ptr [esp + 4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi + 4]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 8]
        fmul st, st(1)
        fadd dword ptr [edi + 8]
        fstp dword ptr [esp + 4]
        fmul dword ptr [esi]
        fadd dword ptr [edi]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [eax + 8]
    done:
        add esp, 8
        ret
    }
}

// [0x007ED5A0] sub_007ED5A0 (243 bytes)
extern "C" void ext_007E6480();
extern "C" int mem_0093F7B8;
extern "C" int mem_00958CC8;
extern "C" __declspec(naked) void __fastcall fn_007ED5A0(void* self) {
    __asm {
        sub esp, 8
        fld dword ptr [mem_0093F7B8]
        push ecx
        fstp dword ptr [esp+4]
        lea eax, [esp+8]
        fld1
        lea ecx, [esp+4]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+0x14]
        fmul qword ptr [mem_00958CC8]
        fstp dword ptr [esp+0x14]
        fld dword ptr [esp+0x14]
        fstp dword ptr [esp]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr [esp+0x1c]
        mov eax, esi
        call ext_007E6480
        add esp, 0x10
        test eax, eax
        je L_end2
        fld dword ptr [mem_0093F7B8]
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_a
        fld1
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_a
        mov eax, dword ptr [ebx]
        lea edx, [eax+0xc]
        mov dword ptr [ebx], edx
        fld dword ptr [esi+4]
        fmul st, st(1)
        fadd dword ptr [edi+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [esi+8]
        fmul st, st(1)
        fadd dword ptr [edi+8]
        fstp dword ptr [esp]
        fmul dword ptr [esi]
        fadd dword ptr [edi]
        fstp dword ptr [eax]
        fld dword ptr [esp+0x10]
        fstp dword ptr [eax+4]
        fld dword ptr [esp]
        fstp dword ptr [eax+8]
        jmp L_b
    L_a:
        fstp st(0)
    L_b:
        fld dword ptr [esp+4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_end1
        fld1
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_end1
        mov eax, dword ptr [ebx]
        lea ecx, [eax+0xc]
        mov dword ptr [ebx], ecx
        fld dword ptr [esi+4]
        fmul st, st(1)
        fadd dword ptr [edi+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [esi+8]
        fmul st, st(1)
        fadd dword ptr [edi+8]
        fstp dword ptr [esp+4]
        fmul dword ptr [esi]
        fadd dword ptr [edi]
        fstp dword ptr [eax]
        fld dword ptr [esp+0x10]
        fstp dword ptr [eax+4]
        fld dword ptr [esp+4]
        fstp dword ptr [eax+8]
        add esp, 8
        ret
    L_end1:
        fstp st(0)
    L_end2:
        add esp, 8
        ret
    }
}

// [0x007E6580] sub_007E6580 (254 bytes)
extern "C" void ext_007E6480();
extern "C" __declspec(naked) void __fastcall fn_007E6580(void* self) {
    __asm {
        sub esp, 0x20
        fldz
        push ecx
        fstp dword ptr [esp + 4]
        lea eax, [esp + 8]
        fld1
        lea ecx, [esp + 4]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x34]
        mov eax, esi
        call ext_007E6480
        add esp, 0x10
        test eax, eax
        je done
        mov eax, dword ptr [ebx]
        lea ecx, [eax + 0xc]
        mov dword ptr [ebx], ecx
        fld dword ptr [esi]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 8]
        fld dword ptr [esi + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        fadd dword ptr [esp + 8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fadd dword ptr [edi + 4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 8]
        fld1
        fld dword ptr [esp + 4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jp skip
        lea edx, [ecx + 0xc]
        mov dword ptr [ebx], edx
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edi]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [edi + 4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 8]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 8]
        add esp, 0x20
        ret
    skip:
        fstp st(0)
    done:
        add esp, 0x20
        ret
    }
}

// [0x007E7FD0] sub_007E7FD0 (261 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E7FD0(void* self) {
    __asm {
        sub esp, 0x1c
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp]
        fldz
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jp L_else
        fstp st(0)
        xor ax, ax
        fld dword ptr [edx]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esi + 0x8]
        add esp, 0x1c
        ret
L_else:
        fld dword ptr [ecx + 0x4]
        fld dword ptr [ecx]
        fld dword ptr [ecx + 0x8]
        fld st(1)
        _emit 0xde
        _emit 0xca
        fld st(2)
        _emit 0xde
        _emit 0xcb
        fxch st(1)
        _emit 0xde
        _emit 0xc2
        fmul st(0), st
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jp L_else2
        fstp st(0)
        xor ax, ax
        fstp st(0)
        fld dword ptr [edx]
        fadd dword ptr [ecx]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [edx + 0x4]
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x8]
        fadd dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x8]
        add esp, 0x1c
        ret
L_else2:
        _emit 0xde
        _emit 0xf9
        mov ax, 0x1
        fstp dword ptr [esp]
        fld dword ptr [ecx]
        fld dword ptr [esp]
        fld st(0)
        _emit 0xde
        _emit 0xca
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld st(0)
        fmul dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x4]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edx + 0x8]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esi + 0x8]
        add esp, 0x1c
        ret
    }
}

extern "C" void ext_007FB7E0();
extern "C" int mem_0093F7B8;

// [0x007ECCD0] sub_007ECCD0 (287 bytes)
extern "C" __declspec(naked) void __fastcall fn_007ECCD0(void* self) {
    __asm {
        sub     esp, 0x20
        fld     dword ptr [mem_0093F7B8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x4]
        fld1
        push    esi
        fstp    dword ptr [esp + 0xc]
        push    ecx
        fld     dword ptr [esp + 0x34]
        mov     eax, edi
        mov     ecx, ebx
        fstp    dword ptr [esp]
        lea     edx, [esp + 0x10]
        lea     esi, [esp + 0xc]
        call    ext_007FB7E0
        add     esp, 0x4
        test    eax, eax
        je      L_7ecde9
        fld     dword ptr [mem_0093F7B8]
        fld     dword ptr [esp + 0x8]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
        test    ah, 0x41
        jne     L_7ecd79
        mov     eax, dword ptr [ebp]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ebp], ecx
        fld     dword ptr [edi]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [edi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [ebx]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ebx + 0x4]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x8]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1c]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x8]
        jmp     L_7ecd7b
    L_7ecd79:
        fstp    st(0)
    L_7ecd7b:
        fld1
        fld     dword ptr [esp + 0xc]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
        test    ah, 0x5
        jp      L_7ecde7
        mov     eax, dword ptr [ebp]
        lea     edx, [eax + 0xc]
        mov     dword ptr [ebp], edx
        fld     dword ptr [edi]
        fmul    st, st(1)
        pop     esi
        pop     ebp
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [edi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ebx]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x4]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [ebx + 0x8]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0x20
        ret
    L_7ecde7:
        fstp    st(0)
    L_7ecde9:
        pop     esi
        pop     ebp
        add     esp, 0x20
        ret
    }
}
