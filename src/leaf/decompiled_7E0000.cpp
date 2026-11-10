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
