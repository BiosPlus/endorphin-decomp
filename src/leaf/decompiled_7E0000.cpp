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
