// Decompiled translation unit: src/leaf/decompiled_7E0000.cpp

#include <math.h>

extern "C" void ext_007C8A50();
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();
extern "C" void ext_007EC6E0();
extern "C" int mem_0094CE80;
extern "C" int mem_0099EC8C;

// [0x007EF3A0] sub_007EF3A0 (841 bytes)
extern "C" __declspec(naked) void __cdecl fn_007EF3A0() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 90h
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        call ext_007C7000
        push esi
        mov edi, eax
        call ext_007C6F70
        fld dword ptr [eax + 30h]
        add eax, 30h
        fstp dword ptr [esp + 80h]
        fld dword ptr [eax + 4]
        push edi
        fstp dword ptr [esp + 88h]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 8Ch]
        call ext_007CB970
        mov esi, dword ptr [ebp + 0Ch]
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        mov eax, dword ptr [ebp + 10h]
        fmul st(0), st
        add esp, 0Ch
        fstp dword ptr [esp + 10h]
        fld dword ptr [esi]
        fst qword ptr [esp + 40h]
        fsubr dword ptr [eax]
        fstp dword ptr [esp + 8Ch]
        fld dword ptr [esi + 4]
        fst qword ptr [esp + 48h]
        fsubr dword ptr [eax + 4]
        fstp dword ptr [esp + 90h]
        fld dword ptr [esi + 8]
        fst qword ptr [esp + 50h]
        fsubr dword ptr [eax + 8]
        fstp dword ptr [esp + 94h]
        fld dword ptr [esp + 90h]
        fst qword ptr [esp + 28h]
        fld dword ptr [esp + 8Ch]
        fst qword ptr [esp + 20h]
        fld dword ptr [esp + 94h]
        fst qword ptr [esp + 30h]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        call ext_006A7250
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [mem_0094CE80]
        fld dword ptr [esp + 0Ch]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5h
        jnp L_5C6
        fst qword ptr [esp + 58h]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fcomp dword ptr [mem_0099EC8C]
        fnstsw ax
        test ah, 41h
        jne L_4B4
        fld1
        fdivrp st(1), st
        jmp L_4B8
L_4B4:
        fstp st(0)
        fldz
L_4B8:
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fld qword ptr [esp + 20h]
        fmul st, st(1)
        fstp dword ptr [esp + 8Ch]
        fld qword ptr [esp + 28h]
        fmul st, st(1)
        fstp dword ptr [esp + 90h]
        fmul qword ptr [esp + 30h]
        fstp dword ptr [esp + 94h]
        fld dword ptr [esp + 78h]
        fst qword ptr [esp + 68h]
        fsub qword ptr [esp + 40h]
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 7Ch]
        fst qword ptr [esp + 70h]
        fsub qword ptr [esp + 48h]
        fstp dword ptr [esp + 34h]
        fld dword ptr [esp + 80h]
        fst qword ptr [esp + 78h]
        fsub qword ptr [esp + 50h]
        fstp dword ptr [esp + 38h]
        fld dword ptr [esp + 34h]
        fld dword ptr [esp + 90h]
        fst qword ptr [esp + 28h]
        fld dword ptr [esp + 30h]
        fld dword ptr [esp + 8Ch]
        fst qword ptr [esp + 20h]
        fld dword ptr [esp + 38h]
        fld dword ptr [esp + 94h]
        fst qword ptr [esp + 30h]
        fld st(3)
        fmulp st(3), st
        fld st(5)
        fmulp st(5), st
        fxch st(2)
        faddp st(4), st
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fstp dword ptr [esp + 1Ch]
        fmul st(0), st
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fld dword ptr [esp + 10h]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_5A6
        mov eax, dword ptr [ebp + 14h]
        fstp st(0)
        fstp st(0)
        fldz
        fstp dword ptr [eax + 1Ch]
        fld dword ptr [esi]
        fstp dword ptr [eax + 4]
        fld dword ptr [esi + 4]
        fstp dword ptr [eax + 8]
        fld dword ptr [esi + 8]
        fstp dword ptr [eax + 0Ch]
        mov eax, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
L_5A6:
        fldz
        fld dword ptr [esp + 1Ch]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5h
        jp L_5D2
        fxch st(2)
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_5D0
        fstp st(1)
        fstp st(0)
L_5C6:
        fstp st(0)
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
L_5D0:
        fxch st(2)
L_5D2:
        fst qword ptr [esp + 10h]
        fmul st(0), st
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 1Ch]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 1Ch]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_601
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
L_601:
        fsubp st(1), st
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 1Ch]
        call ext_006A7250
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 1Ch]
        fsubr qword ptr [esp + 10h]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fld qword ptr [esp + 58h]
        fcomp st(1)
        fnstsw ax
        test ah, 5h
        jnp L_5C6
        fld qword ptr [esp + 20h]
        mov ecx, dword ptr [ebp + 14h]
        fmul st, st(1)
        push ecx
        fstp dword ptr [esp + 90h]
        fld qword ptr [esp + 2Ch]
        fmul st, st(1)
        fstp dword ptr [esp + 94h]
        fmul qword ptr [esp + 34h]
        fstp dword ptr [esp + 98h]
        fld dword ptr [esp + 90h]
        fadd qword ptr [esp + 44h]
        fstp dword ptr [esp + 5Ch]
        fld dword ptr [esp + 94h]
        fadd qword ptr [esp + 4Ch]
        fstp dword ptr [esp + 60h]
        fld dword ptr [esp + 98h]
        fadd qword ptr [esp + 54h]
        fstp dword ptr [esp + 64h]
        fld dword ptr [esp + 5Ch]
        fstp dword ptr [ecx + 4]
        fld dword ptr [esp + 60h]
        fstp dword ptr [ecx + 8]
        fld dword ptr [esp + 64h]
        fstp dword ptr [ecx + 0Ch]
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 20h]
        add esp, 4
        fld dword ptr [esp + 1Ch]
        pop edi
        fld dword ptr [ecx + 4]
        mov eax, 1
        fsub qword ptr [esp + 64h]
        pop esi
        fmul st, st(1)
        fstp dword ptr [ecx + 10h]
        fld dword ptr [ecx + 8]
        fsub qword ptr [esp + 68h]
        fmul st, st(1)
        fstp dword ptr [ecx + 14h]
        fld dword ptr [ecx + 0Ch]
        fsub qword ptr [esp + 70h]
        fmulp st(1), st
        fstp dword ptr [ecx + 18h]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 1Ch]
        mov esp, ebp
        pop ebp
        ret
    }
}

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

extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();

// [0x007E9680] sub_007E9680 (318 bytes)
extern "C" __declspec(naked) void __cdecl fn_007E9680(float* out, const float* in) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, dword ptr [esp+0x24]
        fld dword ptr [esi]
        call ext_006A6EAA
        fstp dword ptr [esp+0x24]
        fld dword ptr [esp+0x24]
        fstp dword ptr [esp+0xc]
        fld dword ptr [esi]
        call ext_006A6EB0
        fstp dword ptr [esp+0x24]
        fld dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
        fld dword ptr [esi+4]
        call ext_006A6EAA
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fstp dword ptr [esp+0x14]
        fld dword ptr [esi+4]
        call ext_006A6EB0
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        mov eax, dword ptr [esp+0x20]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fld st(0)
        fld dword ptr [esp+0xc]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp+0x14]
        fld st(0)
        fmul st, st(2)
        fld st(1)
        fld dword ptr [esp+0x24]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fst qword ptr [esp+4]
        fld st(6)
        fmulp st(2), st
        fxch st(1)
        fstp qword ptr [esp+0x14]
        fld dword ptr [mem_00B61F74]
        fmul dword ptr [mem_00B61F70]
        fstp qword ptr [esp+0xc]
        fld dword ptr [mem_00B61F54]
        fmulp st(4), st
        fld dword ptr [mem_00B61F50]
        fmul dword ptr [esp+0x24]
        fsubp st(4), st
        fld dword ptr [mem_00B61F70]
        fchs
        fmulp st(4), st
        fld dword ptr [mem_00B61F68]
        fmul st, st(2)
        fld dword ptr [mem_00B61F6C]
        fmul st, st(6)
        faddp st(1), st
        fld dword ptr [mem_00B61F60]
        fmulp st(2), st
        fsubrp st(1), st
        fld dword ptr [mem_00B61F64]
        fld qword ptr [esp+0x14]
        fmul st(1), st
        fxch st(2)
        fsubrp st(1), st
        fld qword ptr [esp+0xc]
        fmul st(1), st
        fxch st(5)
        fsubrp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [mem_00B61F5C]
        fmulp st(3), st
        fld dword ptr [mem_00B61F58]
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fld dword ptr [mem_00B61F74]
        fmulp st(5), st
        fld dword ptr [mem_00B61F6C]
        fmul qword ptr [esp+4]
        fld dword ptr [mem_00B61F64]
        fmulp st(2), st
        pop esi
        faddp st(1), st
        fld dword ptr [mem_00B61F60]
        fmulp st(4), st
        fsubrp st(3), st
        fmul dword ptr [mem_00B61F68]
        fsubp st(2), st
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [eax+4]
        add esp, 0x18
        ret
    }
}

// [0x007EFF00] sub_007EFF00 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007EFF00(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 6, 0x99ecd0, 0x7ca820, 0x7efb70, 0x7efe60, 0x7efed0, 0x7efee0, 0x7efef0);
}

// [0x007E48D0] sub_007E48D0 (344 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E48D0(float* r, int edx_unused, const float* a, const float* b) {
    __asm {
        __asm sub esp, 0xc
        __asm mov edx, dword ptr [esp + 0x10]
        __asm mov eax, dword ptr [esp + 0x14]
        __asm fld dword ptr [edx]
        __asm fmul dword ptr [eax]
        __asm fld dword ptr [edx + 0x4]
        __asm fmul dword ptr [eax + 0x4]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x8]
        __asm fmul dword ptr [eax + 0x8]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx]
        __asm fld dword ptr [eax + 0x14]
        __asm fmul dword ptr [edx + 0x4]
        __asm fld dword ptr [eax + 0x10]
        __asm fmul dword ptr [edx]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x8]
        __asm fmul dword ptr [eax + 0x18]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x4]
        __asm fld dword ptr [eax + 0x24]
        __asm fmul dword ptr [edx + 0x4]
        __asm fld dword ptr [eax + 0x20]
        __asm fmul dword ptr [edx]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x8]
        __asm fmul dword ptr [eax + 0x28]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x8]
        __asm fld dword ptr [edx + 0x14]
        __asm fmul dword ptr [eax + 0x4]
        __asm fld dword ptr [edx + 0x10]
        __asm fmul dword ptr [eax]
        __asm faddp st(1), st
        __asm fld dword ptr [eax + 0x8]
        __asm fmul dword ptr [edx + 0x18]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x10]
        __asm fld dword ptr [edx + 0x14]
        __asm fmul dword ptr [eax + 0x14]
        __asm fld dword ptr [edx + 0x10]
        __asm fmul dword ptr [eax + 0x10]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x18]
        __asm fmul dword ptr [eax + 0x18]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x14]
        __asm fld dword ptr [edx + 0x14]
        __asm fmul dword ptr [eax + 0x24]
        __asm fld dword ptr [edx + 0x10]
        __asm fmul dword ptr [eax + 0x20]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x18]
        __asm fmul dword ptr [eax + 0x28]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x18]
        __asm fld dword ptr [edx + 0x24]
        __asm fmul dword ptr [eax + 0x4]
        __asm fld dword ptr [edx + 0x20]
        __asm fmul dword ptr [eax]
        __asm faddp st(1), st
        __asm fld dword ptr [eax + 0x8]
        __asm fmul dword ptr [edx + 0x28]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x20]
        __asm fld dword ptr [edx + 0x24]
        __asm fmul dword ptr [eax + 0x14]
        __asm fld dword ptr [edx + 0x20]
        __asm fmul dword ptr [eax + 0x10]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x28]
        __asm fmul dword ptr [eax + 0x18]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x24]
        __asm fld dword ptr [edx + 0x24]
        __asm fmul dword ptr [eax + 0x24]
        __asm fld dword ptr [edx + 0x20]
        __asm fmul dword ptr [eax + 0x20]
        __asm faddp st(1), st
        __asm fld dword ptr [edx + 0x28]
        __asm fmul dword ptr [eax + 0x28]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x28]
        __asm fld dword ptr [edx + 0x30]
        __asm fsub dword ptr [eax + 0x30]
        __asm fstp dword ptr [esp]
        __asm fld dword ptr [edx + 0x34]
        __asm fsub dword ptr [eax + 0x34]
        __asm fstp dword ptr [esp + 0x4]
        __asm fld dword ptr [edx + 0x38]
        __asm fsub dword ptr [eax + 0x38]
        __asm fstp dword ptr [esp + 0x8]
        __asm fld dword ptr [eax]
        __asm fld dword ptr [esp]
        __asm fld st(0)
        __asm fmulp st(2), st
        __asm fld dword ptr [esp + 0x4]
        __asm fld st(0)
        __asm fmul dword ptr [eax + 0x4]
        __asm faddp st(3), st
        __asm fld dword ptr [eax + 0x8]
        __asm fld dword ptr [esp + 0x8]
        __asm fld st(0)
        __asm fmulp st(2), st
        __asm fxch st(4)
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x30]
        __asm fld dword ptr [eax + 0x10]
        __asm fmul st, st(2)
        __asm fld dword ptr [eax + 0x14]
        __asm fmul st, st(2)
        __asm faddp st(1), st
        __asm fld st(3)
        __asm fmul dword ptr [eax + 0x18]
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x34]
        __asm fld dword ptr [eax + 0x20]
        __asm fmulp st(2), st
        __asm fmul dword ptr [eax + 0x24]
        __asm faddp st(1), st
        __asm fld dword ptr [eax + 0x28]
        __asm fmulp st(2), st
        __asm faddp st(1), st
        __asm fstp dword ptr [ecx + 0x38]
        __asm add esp, 0xc
        __asm ret 8
    }
}

// [0x007E6300] sub_007E6300 (376 bytes)
extern "C" int mem_0093C1A8;
extern "C" int mem_0099D148;
extern "C" int mem_00958CC8;
extern "C" __declspec(naked) void __fastcall fn_007E6300(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        fld dword ptr [mem_0093C1A8]
        mov ecx, dword ptr [esp + 0x28]
        fstp dword ptr [eax]
        fld dword ptr [mem_0099D148]
        mov edx, dword ptr [esp + 0x18]
        push ebx
        fstp dword ptr [ecx]
        fld qword ptr [mem_00958CC8]
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        fldz
        push esi
        lea eax, [edx + 4*ebp]
        push edi
        xor edi, edi
        mov dword ptr [esp + 0x18], eax
    loop_top_7E6300:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, edi
        mov esi, 1
        shl esi, cl
        mov ecx, dword ptr [esp + 0x18]
        fld dword ptr [ecx]
        lea ecx, [edi + 2]
        fstp dword ptr [esp + 0x1c]
        and esi, 3
        lea edx, [ebp + 2*esi]
        add edx, esi
        fld dword ptr [eax + 4*edx]
        mov eax, dword ptr [esp + 0x24]
        mov ebx, dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x14]
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr [eax + 4*esi]
        fld dword ptr [ecx + 4*ebp]
        mov ecx, dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        and edx, ebx
        fld st(0)
        neg edx
        fmul st(0), st
        sbb edx, edx
        fld dword ptr [ecx + 4*edi]
        neg edx
        fmul st, st(4)
        fcompp
        fnstsw ax
        test ah, 5
        jp far_6428_7E6300
        lea ecx, [esi + 2]
        mov eax, 1
        shl eax, cl
        __asm _emit 0x85 __asm _emit 0xC3 // test ebx, eax
        je far_6459_7E6300
        mov ecx, dword ptr [esp + 0x2c]
        fcomp st(1)
        fnstsw ax
        fld dword ptr [esp + 0x14]
        fld st(0)
        test ah, 0x41
        fmul st(0), st
        fld dword ptr [ecx + 4*esi]
        fmul st, st(4)
        fcompp
        fnstsw ax
        jne far_63FC_7E6300
        test ah, 5
        jp far_63EE_7E6300
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp far_645B_7E6300
        test edx, edx
        je far_645B_7E6300
        fld dword ptr [esp + 0x10]
    far_63E6_7E6300:
        mov edx, dword ptr [esp + 0x38]
        fstp dword ptr [edx]
        jmp far_645B_7E6300
    far_63EE_7E6300:
        mov eax, dword ptr [esp + 0x38]
        fstp st(0)
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax]
        jmp far_645B_7E6300
    far_63FC_7E6300:
        test ah, 5
        jp far_641A_7E6300
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne far_645B_7E6300
        test edx, edx
        je far_645B_7E6300
        fld dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x34]
        fstp dword ptr [edx]
        jmp far_645B_7E6300
    far_641A_7E6300:
        mov eax, dword ptr [esp + 0x34]
        fstp st(0)
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax]
        jmp far_645B_7E6300
    far_6428_7E6300:
        test edx, edx
        fstp st(0)
        je far_645B_7E6300
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmul st(0), st
        fld dword ptr [ecx + 4*esi]
        fmul st, st(4)
        fcompp
        fnstsw ax
        test ah, 5
        jp far_6459_7E6300
        fcomp st(1)
        fnstsw ax
        fld dword ptr [esp + 0x10]
        test ah, 0x41
        jne far_63E6_7E6300
        mov ecx, dword ptr [esp + 0x34]
        fstp dword ptr [ecx]
        jmp far_645B_7E6300
    far_6459_7E6300:
        fstp st(0)
    far_645B_7E6300:
        add dword ptr [esp + 0x18], 0xc
        add edi, 1
        cmp edi, 3
        jl loop_top_7E6300
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x007EA060] sub_007EA060 (442 bytes)
extern "C" void ext_007E4770();
extern "C" int mem_0099ECB8;
extern "C" __declspec(naked) void __fastcall fn_007EA060(void* self) {
    __asm {
        sub esp, 0x0c
        mov eax, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x04]
        push edi
        fmul dword ptr [eax + 0x08]
        mov edi, dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x08]
        fmul dword ptr [eax + 0x04]
        fsubp st(1), st
        fstp dword ptr [esp + 0x08]
        fld dword ptr [esi + 0x08]
        fmul dword ptr [eax]
        fld dword ptr [esi]
        fmul dword ptr [eax + 0x08]
        fsubp st(1), st
        fstp dword ptr [esp + 0x0c]
        fld dword ptr [esi]
        fmul dword ptr [eax + 0x04]
        fld dword ptr [eax]
        fmul dword ptr [esi + 0x04]
        fsubp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x08]
        fst dword ptr [edi]
        fld dword ptr [esp + 0x0c]
        fst dword ptr [edi + 0x04]
        fld dword ptr [esp + 0x10]
        fst dword ptr [edi + 0x08]
        fld dword ptr [edi + 0x04]
        fmulp st(2), st
        fld dword ptr [edi]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [edi + 0x08]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld dword ptr [mem_0099ECB8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_7EA1C0
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x04]
        fmul dword ptr [eax + 0x08]
        fld dword ptr [esi + 0x08]
        fmul dword ptr [eax + 0x04]
        fsubp st(1), st
        fstp dword ptr [esp + 0x08]
        fld dword ptr [esi + 0x08]
        fmul dword ptr [eax]
        fld dword ptr [esi]
        fmul dword ptr [eax + 0x08]
        fsubp st(1), st
        fstp dword ptr [esp + 0x0c]
        fld dword ptr [esi]
        fmul dword ptr [eax + 0x04]
        fld dword ptr [eax]
        fmul dword ptr [esi + 0x04]
        fsubp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x08]
        fst dword ptr [edi]
        fld dword ptr [esp + 0x0c]
        fst dword ptr [edi + 0x04]
        fld dword ptr [esp + 0x10]
        fst dword ptr [edi + 0x08]
        fld dword ptr [edi + 0x04]
        fmulp st(2), st
        fld dword ptr [edi]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [edi + 0x08]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fcomp dword ptr [esp + 0x20]
        fnstsw ax
        test ah, 0x41
        jne L_7EA1C2
        fld dword ptr [esi + 0x04]
        push ebx
        fld dword ptr [esi]
        xor ebx, ebx
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_7EA167
        mov ebx, 0x01
    L_7EA167:
        fld dword ptr [esi + 0x08]
        fld dword ptr [esi + ebx * 4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_7EA17B
        mov ebx, 0x02
    L_7EA17B:
        fldz
        mov ecx, ebx
        mov eax, 0x01
        fstp dword ptr [esp + ebx * 4 + 0x0c]
        shl eax, cl
        mov edx, 0x01
        pop ebx
        and eax, 0x03
        mov ecx, eax
        shl edx, cl
        and edx, 0x03
        fld dword ptr [esi + edx * 4]
        fstp dword ptr [esp + eax * 4 + 0x08]
        fld dword ptr [esi + eax * 4]
        fchs
        fstp dword ptr [esp + edx * 4 + 0x08]
        fld dword ptr [esp + 0x08]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x0c]
        fstp dword ptr [edi + 0x04]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edi + 0x08]
        jmp L_7EA1C2
    L_7EA1C0:
        fstp st(0)
    L_7EA1C2:
        mov ecx, edi
        call ext_007E4770
        fstp st(0)
        fld dword ptr [edi + 0x04]
        mov eax, dword ptr [esp + 0x18]
        fmul dword ptr [esi + 0x08]
        fld dword ptr [edi + 0x08]
        fmul dword ptr [esi + 0x04]
        fsubp st(1), st
        fstp dword ptr [esp + 0x08]
        fld dword ptr [esi]
        fmul dword ptr [edi + 0x08]
        fld dword ptr [edi]
        fmul dword ptr [esi + 0x08]
        fsubp st(1), st
        fstp dword ptr [esp + 0x0c]
        fld dword ptr [edi]
        fmul dword ptr [esi + 0x04]
        fld dword ptr [edi + 0x04]
        pop edi
        fmul dword ptr [esi]
        pop esi
        fsubp st(1), st
        fstp dword ptr [esp + 0x08]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x04]
        fstp dword ptr [eax + 0x04]
        fld dword ptr [esp + 0x08]
        fstp dword ptr [eax + 0x08]
        add esp, 0x0c
        ret
    }
}

// [0x007E3FF0] sub_007E3FF0 (455 bytes)
extern "C" __declspec(naked) int __cdecl fn_007E3FF0() {
    __asm {
        sub esp, 0x14
        fld dword ptr [esp + 0x1c]
        push ebx
        fmul st(0), st
        push esi
        mov esi, dword ptr [esp + 0x28]
        push edi
        mov edi, dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi]
        mov ebx, dword ptr [esp + 0x30]
        fsub dword ptr [esi]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x4]
        fsub dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 0x8]
        fsub dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x18]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fld st(2)
        fmulp st(3), st
        fld st(4)
        fmulp st(5), st
        fxch st(2)
        faddp st(4), st
        fld st(1)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ebx]
        fmulp st(3), st
        fmul dword ptr [ebx + 0x4]
        faddp st(2), st
        fmul dword ptr [ebx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_007E409F
        mov eax, dword ptr [esp + 0x38]
        fstp st(0)
        fstp st(0)
        pop edi
        fldz
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [esi]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x8]
        pop esi
        fstp dword ptr [eax + 0xc]
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret

    loc_007E409F:
        fldz
        fld dword ptr [esp + 0x2c]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp loc_007E40CC
        fxch st(3)
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne loc_007E40CA

    loc_007E40B9:
        fstp st(2)
        pop edi
        fstp st(1)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop ebx
        add esp, 0x14
        ret

    loc_007E40CA:
        fxch st(3)

    loc_007E40CC:
        fld st(0)
        fmul st(0), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fsubp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        je loc_007E40B9
        fld st(3)
        fsub dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 0x41
        jne loc_007E4128
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fsub st, st(1)
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jp loc_007E412A
        fstp st(1)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret

    loc_007E4128:
        fstp st(1)

    loc_007E412A:
        fxch st(2)
        fstp qword ptr [esp + 0xc]
        fsubrp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        call ext_006A7250
        fstp dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x24]
        fsubr qword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fst dword ptr [eax + 0x1c]
        fld dword ptr [ebx]
        fmul st, st(1)
        fadd dword ptr [esi]
        fstp dword ptr [eax + 0x4]
        fld st(0)
        fmul dword ptr [ebx + 0x4]
        fadd dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x8]
        fmul dword ptr [ebx + 0x8]
        fadd dword ptr [esi + 0x8]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0x28]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [edi]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x10]
        fld dword ptr [eax + 0x8]
        fsub dword ptr [edi + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        fsub dword ptr [edi + 0x8]
        pop edi
        pop esi
        pop ebx
        fmulp st(1), st
        fstp dword ptr [eax + 0x18]
        mov eax, 1
        add esp, 0x14
        ret
    }
}

// [0x007EF6F0] sub_007EF6F0 (470 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007E47E0();
extern "C" int mem_0094CE80;
extern "C" __declspec(naked) int __cdecl fn_007EF6F0(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp+0x2c]
        push edi
        push esi
        call ext_007C7000
        push esi
        call ext_007C6F70
        mov edi, dword ptr [esp+0x3c]
        mov esi, eax
        add esp, 8
        lea eax, [esp+0x14]
        push eax
        push edi
        mov ecx, esi
        call ext_007E47E0
        mov edx, dword ptr [esp+0x38]
        lea ecx, [esp+0x20]
        push ecx
        push edx
        mov ecx, esi
        call ext_007E47E0
        fldz
        fld dword ptr [esp+0x1c]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp+0x28]
        test ah, 0x41
        jne L_1
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_1
        fstp st(0)
        pop edi
        fstp st(0)
        xor eax, eax
        fstp st(0)
        pop esi
        add esp, 0x24
        ret
L_1:
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 0x5
        jp L_2
        mov eax, dword ptr [esp+0x3c]
        fstp st(1)
        fstp st(0)
        fld dword ptr [edi]
        fstp dword ptr [eax+0x4]
        fld dword ptr [edi+0x4]
        fstp dword ptr [eax+0x8]
        fld dword ptr [edi+0x8]
        pop edi
        fstp dword ptr [eax+0xc]
        fld dword ptr [esi+0x20]
        fstp dword ptr [eax+0x10]
        fld dword ptr [esi+0x24]
        fstp dword ptr [eax+0x14]
        fld dword ptr [esi+0x28]
        pop esi
        fstp dword ptr [eax+0x18]
        fstp dword ptr [eax+0x1c]
        mov eax, 1
        add esp, 0x24
        ret
L_2:
        fld dword ptr [esp+0x20]
        fld dword ptr [esp+0x14]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+0x8]
        fld dword ptr [esp+0x24]
        fld dword ptr [esp+0x18]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+0xc]
        fld st(2)
        fsubp st(4), st
        fxch st(3)
        fstp dword ptr [esp+0x10]
        fld dword ptr [esp+0x10]
        fld st(0)
        fabs
        fstp dword ptr [esp+0x34]
        fld dword ptr [esp+0x34]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x5
        jp L_3
        fxch st(2)
        fcom st(4)
        fnstsw ax
        test ah, 0x41
        jne L_4
        fstp st(0)
        pop edi
        fstp st(3)
        xor eax, eax
        fstp st(0)
        pop esi
        fstp st(1)
        fstp st(0)
        add esp, 0x24
        ret
L_4:
        fxch st(2)
L_3:
        fxch st(2)
        mov edi, dword ptr [esp+0x3c]
        fchs
        lea eax, [edi+0x4]
        fdivrp st(2), st
        push eax
        lea ecx, [esp+0x24]
        push ecx
        mov ecx, esi
        fxch st(1)
        fstp dword ptr [esp+0x3c]
        fld dword ptr [esp+0x10]
        fld dword ptr [esp+0x3c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp+0x28]
        fmul dword ptr [esp+0x14]
        faddp st(1), st
        fstp dword ptr [esp+0x2c]
        fstp dword ptr [esp+0x30]
        call ext_007CA7C0
        fld dword ptr [esi+0x20]
        fstp dword ptr [edi+0x10]
        fld dword ptr [esi+0x24]
        fstp dword ptr [edi+0x14]
        fld dword ptr [esi+0x28]
        fstp dword ptr [edi+0x18]
        fld dword ptr [esp+0xc]
        fld dword ptr [esp+0x8]
        fld dword ptr [esp+0x10]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp+0x38]
        fld dword ptr [esp+0x38]
        call ext_006A7250
        fstp dword ptr [esp+0x38]
        fld dword ptr [esp+0x38]
        fmul dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [esp+0x34]
        fst dword ptr [edi+0x1c]
        fldz
        fcomp dword ptr [esp+0x1c]
        fnstsw ax
        test ah, 0x41
        jne L_5
        fchs
        mov eax, 1
        fstp dword ptr [edi+0x1c]
        pop edi
        pop esi
        add esp, 0x24
        ret
L_5:
        pop edi
        fstp st(0)
        mov eax, 1
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x007EFF60] sub_007EFF60 (509 bytes)
extern "C" __declspec(naked) int __cdecl fn_007EFF60(void* self, int idx) {
    __asm {
        mov ecx, [esp+4]
        mov eax, [ecx+0x228]
        push ebx
        mov ebx, [esp+0xc]
        mov edx, [eax+4*ebx]
        mov [ecx+0x110], edx
        push ebp
        mov ebp, [ecx+0x19c]
        push esi
        push edi
        mov edi, [ecx+0x1fc]
        mov eax, [edi+0x88]
        mov esi, [eax+4*ebx]
        mov [ecx+0xb8], esi
        mov [ecx+0xc8], esi
        mov [ecx+0xd4], esi
        mov [ecx+0xe0], esi
        mov [ecx+0xec], esi
        mov [ecx+0xf8], esi
        mov edx, [edi+0x94]
        mov eax, [edx+4*ebx]
        mov [ecx+0xa8], eax
        mov edx, [ebp+4*ebx]
        mov [ecx+0xac], edx
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov [ecx+0xb0], eax
        mov eax, [ebp+4*ebx]
        mov [ecx+0x58], eax
        mov edx, [edi+0x94]
        mov eax, [edx+4*ebx]
        mov edx, [ecx+0x144]
        mov [ecx+0x40], eax
        mov eax, [ecx+0x160]
        mov [ecx+0x54], eax
        mov eax, [ecx+0x148]
        mov [ecx+0x3c], eax
        mov [ecx+0x38], edx
        mov edx, [ecx+0x178]
        mov [ecx+0x6c], edx
        mov [ecx+0x18], esi
        mov [ecx+0x24], esi
        mov [ecx+0x30], esi
        mov [ecx+0x8], esi
        mov edx, [edi]
        mov [ecx+0xb4], edx
        mov eax, [edi+0x34]
        mov [ecx+0xc4], eax
        mov edx, [edi+0x40]
        mov [ecx+0xd0], edx
        mov eax, [edi+0x4c]
        mov [ecx+0xdc], eax
        mov eax, [ecx+0x1c0]
        mov [ecx+0xe8], eax
        mov eax, [ecx+0x1d8]
        mov [ecx+0xf4], eax
        mov eax, [ecx+0x1cc]
        mov [ecx+0x14], eax
        mov eax, [ecx+0x1e4]
        mov [ecx+0x20], eax
        mov eax, [ecx+0x1f0]
        mov [ecx+0x2c], eax
        mov eax, [ecx+0x114]
        mov [ecx+0x4], eax
        xor eax, eax
        xor edx, edx
        test ebx, ebx
        mov [esp+0x18], eax
        jle L_end
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_loop:
        mov eax, [ebp+4*edx]
        lea eax, [eax+2*eax]
        shl eax, 5
        add [ecx+0x38], eax
        mov eax, [ebp+4*edx]
        add eax, eax
        add eax, eax
        add [ecx+0x54], eax
        mov eax, [edi+0x94]
        mov eax, [eax+4*edx]
        imul eax, [ecx+0x1bc]
        add eax, eax
        add eax, eax
        add [ecx+0x6c], eax
        mov eax, [edi+0x94]
        mov eax, [eax+4*edx]
        add eax, eax
        add eax, eax
        add [ecx+0x3c], eax
        mov eax, [esp+0x18]
        mov esi, [edi+0x88]
        add eax, [esi+4*edx]
        add edx, 1
        cmp edx, ebx
        mov [esp+0x18], eax
        jl L_loop
    L_end:
        mov edx, eax
        shl edx, 6
        add [ecx+0xb4], edx
        cdq
        and edx, 3
        add eax, edx
        mov edx, [ecx+0x1c0]
        sar eax, 2
        shl eax, 4
        add edx, eax
        add [ecx+0xc4], eax
        add [ecx+0xd0], eax
        add [ecx+0xdc], eax
        mov [ecx+0xe8], edx
        mov edx, [ecx+0x1d8]
        add edx, eax
        mov [ecx+0xf4], edx
        mov edx, [ecx+0x1cc]
        add edx, eax
        mov [ecx+0x14], edx
        mov edx, [ecx+0x1e4]
        add edx, eax
        mov [ecx+0x20], edx
        mov edx, [ecx+0x1f0]
        add edx, eax
        pop edi
        mov [ecx+0x2c], edx
        mov edx, [ecx+0x114]
        pop esi
        add eax, edx
        pop ebp
        mov [ecx+0x4], eax
        pop ebx
        ret
    }
}

// [0x007E1760] sub_007E1760 (623 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007DFE30();
extern "C" void ext_007DFE90();
extern "C" void ext_007DFF50();
extern "C" void ext_007E46B0();
extern "C" int mem_0099EC78;

extern "C" __declspec(naked) void __fastcall fn_007E1760(void* self) {
    __asm {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x48]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov ebp, eax
        call ext_007C6F70
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov edi, eax
        call ext_007C6F30
        fstp qword ptr [esp + 0x28]
        mov eax, dword ptr [esi]
        push eax
        call ext_007C6F30
        fadd qword ptr [esp + 0x2c]
        mov ecx, dword ptr [esi]
        push ecx
        fstp dword ptr [esp + 0x30]
        call ext_007C7000
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov dword ptr [esp + 0x28], eax
        call ext_007C7000
        mov ebx, dword ptr [esp + 0x68]
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        add esp, 0x18
        xor eax, eax
        lea edx, [esp + 0x3c]
        push edx
        mov dword ptr [ebx + 0xc], eax
        mov dword ptr [ebx + 0x1c], eax
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x14]
        lea esi, [edi + 0x30]
        push esi
        push ecx
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x20], ecx
        lea edi, [ebp + 0x20]
        lea ecx, [ebp + 0x30]
        push edi
        push ecx
        call ext_007DFE90
        fld dword ptr [esp + 0x50]
        fsub dword ptr [esi]
        mov eax, dword ptr [esp + 0x28]
        add esp, 0x14
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x40]
        fsub dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x44]
        fsub dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x2c]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fld dword ptr [eax + 0xa0]
        fmul qword ptr [mem_0099EC78]
        fmul dword ptr [eax + 0xa0]
        fcomp st(1)
        fnstsw ax
        test ah, 0x05
        jp loc_7E189A
        call ext_006A7250
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmul dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x24]
        fmul st, st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fmul st, st(1)
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fldz
        jmp loc_7E1928

    loc_7E189A:
        fstp st(0)
        lea ecx, [esp + 0x30]
        fld dword ptr [edi]
        fmul st(0), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ebp + 0x24]
        fmul st(0), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ebp + 0x28]
        fmul st(0), st
        fstp dword ptr [esp + 0x38]
        call ext_007DFE30
        fldz
        lea esi, [esp + 0x24]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x38]
        fld1
        fstp dword ptr [esp + eax*4 + 0x30]
        fld dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x34]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x30]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi]
        fmulp st(3), st
        fxch st(1)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi]
        fmulp st(2), st
        fmul dword ptr [edi + 0x4]
        fsubp st(1), st
        fstp dword ptr [esp + 0x2c]
        call ext_007E46B0
        fstp st(0)
        fldz
        fst dword ptr [esp + 0x4c]

    loc_7E1928:
        fld dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x18]
        fld dword ptr [edx + 0x10]
        mov ecx, dword ptr [esp + 0x10]
        fadd dword ptr [ecx + 0x10]
        fsubp st(1), st
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x1c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_7E19C0
        fld dword ptr [ecx + 0x10]
        push ebx
        fchs
        push 0
        fsub st, st(1)
        push ecx
        lea eax, [esp + 0x30]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        fld st(0)
        fmul dword ptr [esp + 0x30]
        fadd dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x34]
        fmul st, st(1)
        fadd dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x40]
        fmul dword ptr [esp + 0x38]
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x44]
        fxch st(1)
        fst dword ptr [ebx + 0x10]
        fst dword ptr [ebx + 0x14]
        fst dword ptr [ebx + 0x18]
        fstp dword ptr [esp]
        push edi
        push 3
        push 3
        push ecx
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        call ext_007DFF50
        mov eax, dword ptr [ebx + 0x1c]
        add esp, 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret

    loc_7E19C0:
        mov eax, dword ptr [ebx + 0x1c]
        fstp st(1)
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret
    }
}

extern "C" int mem_0093F7B8;
// [0x007EF110] sub_007EF110 (649 bytes)
extern "C" __declspec(naked) void __fastcall fn_007EF110(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x0c]
        fld dword ptr [ecx]
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr [esp + 0x3c]
        fld dword ptr [ebx]
        push ebp
        fcomp st(1)
        push esi
        push edi
        mov edi, dword ptr [esp + 0x4c]
        mov dl, 0x01
        fnstsw ax
        test ah, 0x41
        jne L144
        fld dword ptr [ebx]
        mov dword ptr [esp + 0x2c], 0x01
        fstp dword ptr [esp + 0x38]
        xor dl, dl
        jmp L169
L144:
        fld dword ptr [edi]
        fcomp st(1)
        fnstsw ax
        test ah, 0x05
        jp L161
        fld dword ptr [edi]
        mov dword ptr [esp + 0x2c], 0x00
        fstp dword ptr [esp + 0x38]
        xor dl, dl
        jmp L169
L161:
        mov dword ptr [esp + 0x2c], 0x02
L169:
        fld dword ptr [ecx + 0x04]
        fld dword ptr [ebx + 0x04]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L188
        fld dword ptr [ebx + 0x04]
        mov ebp, 0x01
        fstp dword ptr [esp + 0x3c]
        xor dl, dl
        jmp L1A6
L188:
        fld dword ptr [edi + 0x04]
        fcomp st(1)
        fnstsw ax
        test ah, 0x05
        jp L1A1
        fld dword ptr [edi + 0x04]
        xor ebp, ebp
        fstp dword ptr [esp + 0x3c]
        xor dl, dl
        jmp L1A6
L1A1:
        mov ebp, 0x02
L1A6:
        fld dword ptr [ecx + 0x08]
        mov dword ptr [esp + 0x30], ebp
        fld dword ptr [ebx + 0x08]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L1F7
        fld dword ptr [ebx + 0x08]
        mov esi, 0x01
        mov dword ptr [esp + 0x34], esi
L1C5:
        fstp dword ptr [esp + 0x40]
L1C9:
        cmp dword ptr [esp + 0x2c], 0x02
        fld dword ptr [mem_0093F7B8]
        mov edi, dword ptr [esp + 0x54]
        fldz
        je L247
        fcom dword ptr [edi]
        fnstsw ax
        test ah, 0x44
        jnp L247
        fld dword ptr [esp + 0x38]
        fsubrp st(5), st
        fld dword ptr [edi]
        fdivp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x20]
        jmp L24D
L1F7:
        fld dword ptr [edi + 0x08]
        fcomp st(1)
        fnstsw ax
        test ah, 0x05
        jp L20E
        fld dword ptr [edi + 0x08]
        xor esi, esi
        mov dword ptr [esp + 0x34], esi
        jmp L1C5
L20E:
        test dl, dl
        mov esi, 0x02
        mov dword ptr [esp + 0x34], esi
        je L1C9
        mov eax, dword ptr [esp + 0x58]
        fstp st(2)
        fstp st(0)
        pop edi
        fstp st(0)
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x04]
        fstp dword ptr [eax + 0x04]
        fld dword ptr [ecx + 0x08]
        fstp dword ptr [eax + 0x08]
        mov eax, dword ptr [esp + 0x58]
        fldz
        fstp dword ptr [eax]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret
L247:
        fstp st(4)
        fst dword ptr [esp + 0x20]
L24D:
        cmp ebp, 0x02
        je L271
        fld st(3)
        fcomp dword ptr [edi + 0x04]
        fnstsw ax
        test ah, 0x44
        jnp L271
        fld dword ptr [esp + 0x3c]
        fsubrp st(3), st
        fld dword ptr [edi + 0x04]
        fdivp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x24]
        jmp L27B
L271:
        fstp st(2)
        fxch st(1)
        fst dword ptr [esp + 0x24]
        fxch st(1)
L27B:
        cmp esi, 0x02
        je L297
        fld st(2)
        fcomp dword ptr [edi + 0x08]
        fnstsw ax
        test ah, 0x44
        jnp L297
        fstp st(1)
        fsubr dword ptr [esp + 0x40]
        fdiv dword ptr [edi + 0x08]
        jmp L299
L297:
        fstp st(0)
L299:
        fstp dword ptr [esp + 0x28]
        xor esi, esi
        fld dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], esi
        fld dword ptr [esp + 0x24]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L2BC
        mov dword ptr [esp + 0x10], 0x01
L2BC:
        mov edx, dword ptr [esp + 0x10]
        fld dword ptr [esp + 4*edx + 0x20]
        fld dword ptr [esp + 0x28]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L2D9
        mov dword ptr [esp + 0x10], 0x02
L2D9:
        mov eax, dword ptr [esp + 0x10]
        fcomp dword ptr [esp + 4*eax + 0x20]
        lea eax, [esp + 4*eax + 0x20]
        mov dword ptr [esp + 0x14], eax
        fnstsw ax
        test ah, 0x41
        je L38F
        mov eax, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x58]
        sub eax, ecx
        lea ebp, [esp + 0x38]
        sub edi, ecx
        sub ebx, ecx
        sub ebp, ecx
        mov dword ptr [esp + 0x1c], eax
        sub edx, ecx
        mov edi, edi
L310:
        cmp dword ptr [esp + 0x10], esi
        je L34A
        fld dword ptr [edi + ecx]
        mov eax, dword ptr [esp + 0x14]
        fmul dword ptr [eax]
        fadd dword ptr [ecx]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fst dword ptr [edx + ecx]
        fld dword ptr [ebx + ecx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L38D
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax + ecx]
        fcompp
        fnstsw ax
        test ah, 0x05
        jnp L38F
        jmp L350
L34A:
        fld dword ptr [ecx + ebp]
        fstp dword ptr [edx + ecx]
L350:
        add esi, 0x01
        add ecx, 0x04
        cmp esi, 0x03
        jl L310
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x60]
        xor edx, edx
        cmp dword ptr [esp + 4*ecx + 0x2c], 0x01
        mov word ptr [eax], cx
        mov ecx, dword ptr [esp + 0x5c]
        sete dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov word ptr [eax + 0x02], dx
        mov eax, dword ptr [esp + 0x04]
        fld dword ptr [eax]
        mov eax, 0x01
        fstp dword ptr [ecx]
        add esp, 0x34
        ret
L38D:
        fstp st(0)
L38F:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret
    }
}

extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007CA8D0();
extern "C" void ext_007E47E0();
extern "C" void ext_007EF110();
extern "C" int mem_0094CE80;
extern "C" int mem_0099EC8C;

// [0x007EF910]
extern "C" __declspec(naked) int __fastcall fn_007EF910(void* self) {
    __asm {
        sub esp, 0x5c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x68]
        push edi
        push esi
        call ext_007C7000
        push esi
        mov ebx, eax
        call ext_007C6F70
        mov ecx, dword ptr [esp + 0x78]
        mov edi, eax
        add esp, 0x8
        lea eax, [esp + 0x44]
        push eax
        push ecx
        mov ecx, edi
        call ext_007E47E0
        mov eax, dword ptr [esp + 0x74]
        lea edx, [esp + 0x38]
        push edx
        push eax
        mov ecx, edi
        call ext_007E47E0
        push ebx
        call ext_007CA8D0
        fld dword ptr [eax]
        fchs
        add esp, 0x4
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4]
        fchs
        fstp dword ptr [esp + 0x60]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x8]
        fchs
        fstp dword ptr [esp + 0x64]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x3c]
        fsub dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x40]
        fsub dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x40]
        fxch st(1)
        fst qword ptr [esp + 0x18]
        fxch st(2)
        fst qword ptr [esp + 0xc]
        fxch st(1)
        fst qword ptr [esp + 0x20]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        call ext_006A7250
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [mem_0094CE80]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_7EFA1D
        fstp st(0)
    L_7EFA14:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x5c
        ret
    L_7EFA1D:
        fst qword ptr [esp + 0x2c]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fcomp dword ptr [mem_0099EC8C]
        fnstsw ax
        test ah, 0x41
        jne L_7EFA40
        fld1
        fdivrp st(1), st
        jmp L_7EFA44
    L_7EFA40:
        fstp st(0)
        fldz
    L_7EFA44:
        fstp dword ptr [esp + 0x14]
        lea ecx, [esp + 0xc]
        fld dword ptr [esp + 0x14]
        push ecx
        fld qword ptr [esp + 0x10]
        lea edx, [esp + 0x18]
        fmul st, st(1)
        push edx
        lea eax, [esp + 0x28]
        push eax
        fstp dword ptr [esp + 0x44]
        lea ecx, [esp + 0x44]
        fld qword ptr [esp + 0x24]
        push ecx
        fmul st, st(1)
        lea edx, [esp + 0x54]
        push edx
        lea eax, [esp + 0x64]
        fstp dword ptr [esp + 0x50]
        push eax
        lea ecx, [esp + 0x74]
        fmul qword ptr [esp + 0x38]
        push ecx
        fstp dword ptr [esp + 0x5c]
        call ext_007EF110
        mov ebx, eax
        add esp, 0x1c
        test ebx, ebx
        je L_7EFA14
        fld dword ptr [esp + 0x14]
        fcomp qword ptr [esp + 0x2c]
        fnstsw ax
        test ah, 0x41
        je L_7EFA14
        mov esi, dword ptr [esp + 0x78]
        lea edx, [esi + 0x4]
        push edx
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        call ext_007CA7C0
        cmp ebx, 0x1
        jne L_7EFB04
        movzx eax, word ptr [esp + 0xc]
        shl eax, 0x4
        add eax, edi
        cmp word ptr [esp + 0xe], 0x0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x18]
        je L_7EFB04
        fld dword ptr [esi + 0x10]
        fchs
        fstp dword ptr [esi + 0x10]
        fld dword ptr [esi + 0x14]
        fchs
        fstp dword ptr [esi + 0x14]
        fld dword ptr [esi + 0x18]
        fchs
        fstp dword ptr [esi + 0x18]
    L_7EFB04:
        fld dword ptr [esp + 0x14]
        pop edi
        fstp dword ptr [esi + 0x1c]
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x5c
        ret
    }
}

// [0x007EC720] sub_007EC720 (711 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007E4770();
extern "C" void ext_007EC6E0();
extern "C" int mem_0093F7B8;
extern "C" __declspec(naked) unsigned char __fastcall fn_007EC720(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x54]
        fld dword ptr [esi + 0x8]
        xor bl, bl
        fabs
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x50]
        fsub dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x44]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_7C9
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x48]
        fld st(0)
        fsubp st(2), st
        fld dword ptr [esp + 0x50]
        fld st(0)
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x54]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_7D1
        fst dword ptr [esp + 0x54]
        mov bl, 0x1
        fld dword ptr [esp + 0x44]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_7D3
        fstp st(2)
        fstp st(1)
        fstp st(0)
    L_7C9:
        pop esi
        xor al, al
        pop ebx
        add esp, 0x24
        ret
    L_7D1:
        fstp st(0)
    L_7D3:
        fcom st(2)
        fnstsw ax
        fldz
        test ah, 0x5
        jp L_8DF
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x4c]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_8DD
        fstp st(3)
        fxch st(1)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fxch st(1)
        fcomp dword ptr [esi + 0x8]
        fnstsw ax
        test ah, 0x5
        jnp L_813
        fchs
    L_813:
        fstp dword ptr [esp + 0x4c]
        lea ecx, [esp + 0x14]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x14]
        fsub dword ptr [esi]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fsub dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x4c]
        fsub dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x1c]
        call ext_007E4770
        fld dword ptr [esp + 0x50]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x54]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_8AB
        fst dword ptr [esp + 0x54]
        mov bl, 0x2
        fld dword ptr [esp + 0x44]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_8AD
        pop esi
        fstp st(0)
        xor al, al
        pop ebx
        add esp, 0x24
        ret
    L_8AB:
        fstp st(0)
    L_8AD:
        fld dword ptr [esp + 0xc]
        fldz
        fxch st(1)
        fxch st(2)
        fxch st(1)
    L_8B9:
        test bl, bl
        fld dword ptr [esp + 0x54]
        mov eax, dword ptr [esp + 0x30]
        fstp dword ptr [eax]
        jne L_907
        fstp st(2)
        fxch st(1)
        fcom dword ptr [esi + 0x8]
        fnstsw ax
        test ah, 0x5
        jp L_8E3
        fld dword ptr [mem_0093F7B8]
        jmp L_8E5
    L_8DD:
        fstp st(2)
    L_8DF:
        fstp st(1)
        jmp L_8B9
    L_8E3:
        fld1
    L_8E5:
        mov eax, dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x50]
        mov ecx, dword ptr [esp + 0x3c]
        fst dword ptr [eax]
        fst dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [eax + 0x8]
        mov word ptr [ecx], 0x302
        jmp L_989
    L_907:
        cmp bl, 0x1
        jne L_964
        fstp st(0)
        push ecx
        fstp st(0)
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0x48]
        mov eax, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x40]
        fchs
        mov edx, dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x48]
        add esp, 0x4
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x44]
        fmul dword ptr [esi]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [eax + 0x4]
        fldz
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x48]
        mov word ptr [ecx], 0x303
        fstp dword ptr [edx]
        fld dword ptr [esp + 0x50]
        jmp L_98F
    L_964:
        mov eax, dword ptr [esp + 0x34]
        fstp st(2)
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x3c]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x8]
        mov word ptr [ecx], 0x301
        fxch st(1)
    L_989:
        mov edx, dword ptr [esp + 0x40]
        fstp dword ptr [edx]
    L_98F:
        fld dword ptr [eax]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x24]
        fmul dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fadd dword ptr [esi]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x4]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fadd dword ptr [esi + 0x8]
        pop esi
        pop ebx
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x8]
        mov al, 0x1
        add esp, 0x24
        ret
    }
}

// [0x007ECB20] sub_007ECB20 (358 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007CAFC0();
extern "C" void ext_007CB970();
extern "C" void ext_007E4870();
extern "C" void ext_007E48D0();
extern "C" void ext_007EC720();

extern "C" __declspec(naked) void __fastcall fn_007ECB20(void* self) {
    __asm {
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [edi]
        push    eax
        call    ext_007C6F70
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        mov     ebx, eax
        call    ext_007C6F70
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     dword ptr [esp + 0x88], eax
        call    ext_007C6F30
        fstp    qword ptr [esp + 0x24]
        mov     eax, dword ptr [edi]
        push    eax
        call    ext_007C6F30
        fadd    qword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x90]
        xor     eax, eax
        mov     dword ptr [esi + 0xc], eax
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x1c], eax
        mov     ecx, dword ptr [edi]
        push    ecx
        call    ext_007C7000
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     ebp, eax
        call    ext_007C7000
        push    ebp
        mov     edi, eax
        call    ext_007CB970
        fstp    dword ptr [esp + 0x30]
        push    ebp
        call    ext_007CAFC0
        fstp    dword ptr [esp + 0x30]
        push    edi
        call    ext_007CB970
        fstp    dword ptr [esp + 0xa4]
        mov     eax, dword ptr [esp + 0xa0]
        add     esp, 0x24
        push    ebx
        push    eax
        lea     ecx, [esp + 0x40]
        call    ext_007E48D0
        fld     dword ptr [esp + 0x80]
        lea     ecx, [esp + 0x68]
        push    ecx
        sub     esp, 0x10
        fstp    dword ptr [esp + 0xc]
        lea     edx, [esp + 0x2c]
        fld     dword ptr [esp + 0x24]
        lea     eax, [esp + 0x90]
        fstp    dword ptr [esp + 0x8]
        lea     ecx, [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0xa4]
        push    eax
        call    ext_007EC720
        add     esp, 0x28
        test    al, al
        jne     loc_7ecc1b
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x68
        ret
    loc_7ecc1b:
        cmp     dword ptr [esi + 0x8], 0x0
        mov     ebp, 0x1
        jle     loc_7ecc79
        lea     edi, [esi + 0x10]
        push    edi
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    ext_007E4870
        fld     dword ptr [esp + 0x80]
        mov     edx, dword ptr [esi + 0x4]
        mov     ax, word ptr [esp + 0x7c]
        mov     word ptr [edx + 0x1c], ax
        mov     ecx, dword ptr [esi + 0x4]
        fstp    dword ptr [ecx + 0x18]
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, ebx
        call    ext_007CA7C0
        fld     dword ptr [edi]
        mov     eax, dword ptr [esi + 0x4]
        fstp    dword ptr [eax + 0xc]
        fld     dword ptr [edi + 0x4]
        add     eax, 0xc
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edi + 0x8]
        fstp    dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0xc], ebp
    loc_7ecc79:
        pop     edi
        mov     dword ptr [esi + 0x1c], ebp
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret
    }
}

// [0x007EFB70] sub_007EFB70 (743 bytes)
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();

extern "C" __declspec(naked) void __fastcall fn_007EFB70(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x30]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        fld dword ptr [eax]
        fabs
        add esp, 0x8
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        fld dword ptr [eax + 0x10]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x14]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        fld dword ptr [eax + 0x4]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x18]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        fld dword ptr [eax + 0x8]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edi + 0x10]
        fmul dword ptr [eax]
        fld dword ptr [edi + 0x14]
        fmul dword ptr [eax + 0x10]
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fmul dword ptr [edi + 0x18]
        faddp st(1), st
        fadd dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x10]
        fmul dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [edi + 0x14]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fmul dword ptr [edi + 0x18]
        faddp st(1), st
        lea edx, [esi + 0x8]
        lea ebx, [esi + 0x14]
        fadd dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x10]
        fmul dword ptr [eax + 0x8]
        fld dword ptr [eax + 0x18]
        fmul dword ptr [edi + 0x14]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fmul dword ptr [edi + 0x18]
        faddp st(1), st
        fadd dword ptr [eax + 0x38]
        mov eax, dword ptr [esp + 0x38]
        test eax, eax
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x18]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edx]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edx + 0x4]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x20]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edx + 0x8]
        fxch st(5)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [ebx]
        faddp st(1), st
        fstp dword ptr [ebx + 0x4]
        faddp st(1), st
        fstp dword ptr [ebx + 0x8]
        je loc_007EFE4B
        fld dword ptr [eax]
        fmul dword ptr [edi + 0x10]
        fld dword ptr [edi + 0x14]
        fmul dword ptr [eax + 0x10]
        faddp st(1), st
        fld dword ptr [edi + 0x18]
        fmul dword ptr [eax + 0x20]
        faddp st(1), st
        fadd dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [edi + 0x10]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [edi + 0x14]
        faddp st(1), st
        fld dword ptr [edi + 0x18]
        fmul dword ptr [eax + 0x24]
        faddp st(1), st
        fadd dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [edi + 0x10]
        fld dword ptr [edi + 0x14]
        fmul dword ptr [eax + 0x18]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fmul dword ptr [edi + 0x18]
        faddp st(1), st
        fadd dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        fld dword ptr [eax + 0x10]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x4]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        fld dword ptr [eax + 0x14]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x1c]
        fld dword ptr [eax + 0x18]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x20]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [edi + 0x24]
        lea ecx, [esp + 0x24]
        mov esi, edx
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x18]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x20]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fxch st(5)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        call ext_007CA280
        lea ecx, [esp + 0x18]
        mov edx, ebx
        mov esi, ebx
        call ext_007CB8D0
    loc_007EFE4B:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x24
        ret
    }
}

extern "C" void ext_007ECCD0();
extern "C" void ext_007FB860();
extern "C" int mem_0099EC8C;
extern "C" int mem_0099ECC8;
extern "C" int mem_0099ECC0;

// [0x007ECDF0] sub_007ECDF0 (826 bytes)
extern "C" __declspec(naked) void __fastcall fn_007ECDF0(void* self) {
    __asm {
        sub esp, 0x34
        fld dword ptr [eax]
        push ebp
        fld dword ptr [esp + 0x40]
        mov ebp, dword ptr [esp + 0x3c]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x4]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x48]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ecx]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x4]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        fld dword ptr [mem_0099EC8C]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        fldz
        fld1
        jp L_7ECE81
        fld st(0)
        fdivrp st(4), st(0)
        jmp L_7ECE87
    L_7ECE81:
        fstp st(3)
        fld st(0)
        fxch st(3)
    L_7ECE87:
        fxch st(3)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        fcomp st(3)
        fnstsw ax
        fstp st(2)
        test ah, 0x41
        jne L_7ECEAE
        fstp st(0)
        fdivp st(1), st(0)
        jmp L_7ECEB2
    L_7ECEAE:
        fstp st(1)
        fstp st(1)
    L_7ECEB2:
        fstp dword ptr [esp + 0x3c]
        mov eax, dword ptr [ebp]
        fld dword ptr [esi + 0x30]
        push ebx
        fadd dword ptr [esp + 0x24]
        push edi
        push ecx
        lea edi, [esp + 0x14]
        fstp dword ptr [esp + 0x38]
        lea ebx, [esp + 0x38]
        fld dword ptr [esi + 0x34]
        mov dword ptr [esp + 0x10], eax
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp]
        push ebp
        call ext_007FB860
        fld dword ptr [esi + 0x30]
        fadd dword ptr [esp + 0x24]
        add esp, 0x4
        lea ebx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fadd dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp]
        push ebp
        call ext_007FB860
        fld dword ptr [esi + 0x30]
        fsub dword ptr [esp + 0x30]
        add esp, 0x4
        lea ebx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fsub dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fsub dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp]
        push ebp
        call ext_007FB860
        fld dword ptr [esi + 0x30]
        fsub dword ptr [esp + 0x24]
        add esp, 0x4
        lea ebx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fsub dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fsub dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp]
        push ebp
        call ext_007FB860
        fld dword ptr [esi + 0x30]
        fadd dword ptr [esp + 0x18]
        add esp, 0x4
        lea edi, [esp + 0x20]
        lea ebx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp]
        push ebp
        call ext_007ECCD0
        fld dword ptr [esi + 0x30]
        fsub dword ptr [esp + 0x18]
        add esp, 0x4
        lea ebx, [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp]
        push ebp
        call ext_007ECCD0
        mov ecx, dword ptr [ebp]
        add esp, 0x8
        cmp ecx, dword ptr [esp + 0xc]
        pop edi
        pop ebx
        jne L_7ED125
        mov edx, dword ptr [esp + 0x48]
        fld dword ptr [edx + 0x8]
        lea eax, [ecx + 0xc]
        _emit 0xdc
        _emit 0xc8
        mov dword ptr [ebp], eax
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x30]
        fstp dword ptr [ecx]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x48]
        fcom qword ptr [mem_0099ECC8]
        fnstsw ax
        test ah, 0x41
        jne L_7ED098
        fstp st(0)
        fldz
        fcomp dword ptr [edx + 0x8]
        fnstsw ax
        fld dword ptr [ecx]
        test ah, 0x41
        jne L_7ED079
        fadd dword ptr [esp + 0x8]
        pop ebp
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x8]
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0x8]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 0x8]
        add esp, 0x34
        ret
    L_7ED079:
        fsub dword ptr [esp + 0x8]
        pop ebp
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 0x8]
        add esp, 0x34
        ret
    L_7ED098:
        fcomp qword ptr [mem_0099ECC0]
        fnstsw ax
        test ah, 0x5
        jp L_7ED0B4
        fld dword ptr [ecx + 0x8]
        pop ebp
        fsub dword ptr [esp + 0x3c]
        fstp dword ptr [ecx + 0x8]
        add esp, 0x34
        ret
    L_7ED0B4:
        fld dword ptr [ecx]
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fst dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fst dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fst dword ptr [ecx + 0x8]
        fldz
        fcomp dword ptr [edx + 0x8]
        fnstsw ax
        fld dword ptr [esp + 0x8]
        test ah, 0x41
        jne L_7ED111
        faddp st(3), st(0)
        pop ebp
        fxch st(2)
        fstp dword ptr [ecx]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [ecx + 0x4]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 0x8]
        add esp, 0x34
        ret
    L_7ED111:
        fsubp st(3), st(0)
        fxch st(2)
        fstp dword ptr [ecx]
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 0x4]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0x8]
    L_7ED125:
        pop ebp
        add esp, 0x34
        ret
    }
}

// [0x007ED130] sub_007ED130 (342 bytes)
extern "C" void ext_007E4770();
extern "C" void ext_007ECDF0();
extern "C" int mem_0099ECA0;

extern "C" __declspec(naked) void __fastcall fn_007ED130(void* self) {
    __asm {
        sub esp, 0x28
        fldz
        push esi
        fst dword ptr [esp + 0x10]
        mov esi, eax
        fld dword ptr [esi + 0x24]
        push edi
        fstp dword ptr [esp + 0xc]
        lea edi, [esi + 0x20]
        fld dword ptr [edi]
        fchs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fmul st(0), st(0)
        fld st(1)
        fmulp st(2), st(0)
        faddp st(1), st(0)
        fldz
        fmul st(0), st(0)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp qword ptr [mem_0099ECA0]
        fnstsw ax
        test ah, 0x5
        jp L_7ED192
        fst dword ptr [esp + 0xc]
        fld1
        fst dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x1c]
        jmp L_7ED1F3
    L_7ED192:
        fstp st(0)
        lea ecx, [esp + 0xc]
        call ext_007E4770
        fstp st(0)
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st(0)
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmul dword ptr [edi + 0x4]
        fsubp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi]
        fmulp st(2), st(0)
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(3)
        fsubrp st(1), st(0)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x4]
        fmulp st(2), st(0)
        fmul dword ptr [edi]
        fsubp st(1), st(0)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x2c]
    L_7ED1F3:
        fstp dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x38]
        fld dword ptr [edi + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmulp st(2), st(0)
        fld dword ptr [esp + 0x20]
        fabs
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(3)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fsubp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fst dword ptr [eax]
        fld dword ptr [esp + 0x3c]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_7ED25C
        fstp st(1)
        pop edi
        fstp st(0)
        xor al, al
        pop esi
        add esp, 0x28
        ret
    L_7ED25C:
        mov ecx, dword ptr [esp + 0x38]
        fxch st(1)
        push edi
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea eax, [esp + 0x24]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_007ECDF0
        add esp, 0x10
        pop edi
        mov al, 0x1
        pop esi
        add esp, 0x28
        ret
    }
}

// [0x007E8FC0] sub_007E8FC0 (854 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007EC6E0();
extern "C" int mem_0099EC98;
extern "C" int mem_0099EC90;
extern "C" __declspec(naked) void __fastcall fn_007E8FC0(void* self) {
    __asm {
        sub esp, 0x3c
        fld dword ptr [edi + 0x4]
        push ebp
        fld dword ptr [edi]
        mov ebp, dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x48]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edi]
        fmul dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [edi + 0x4]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmul st(0), st
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmul dword ptr [esp + 0x1c]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x48]
        fldz
        fld dword ptr [esp + 0x48]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_OUT1
        fld st(3)
        fchs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld dword ptr [ebp]
        fmul st(0), st(4)
        fsubp st(1), st
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fcom st(2)
        fnstsw ax
        test ah, 0x1
        jne L_A
        fmul st(0), st
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_B
L_OUT1:
        fstp st(2)
        xor al, al
        fstp st(2)
        pop ebp
        fstp st(1)
        fstp st(0)
        add esp, 0x3c
        ret
L_A:
        fstp st(0)
L_B:
        fld dword ptr [ebx]
        fmulp st(3), st
        fxch st(2)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 0x1
        jne L_C
        fld st(1)
        fmulp st(2), st
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_D
        fstp st(0)
        xor al, al
        pop ebp
        add esp, 0x3c
        ret
L_C:
        fstp st(1)
L_D:
        call ext_006A7250
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x48]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x14]
        fldz
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x48]
        test ah, 0x5
        jp L_E
        fstp dword ptr [esp + 0x14]
        fchs
        jmp L_F
L_E:
        fchs
        fstp dword ptr [esp + 0x14]
L_F:
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x4c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebp]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp L_G
        fstp st(3)
L_OUT2:
        fstp st(2)
        fstp st(1)
        fstp st(0)
L_OUT2B:
        fstp st(0)
        xor al, al
        pop ebp
        add esp, 0x3c
        ret
L_G:
        fld st(2)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [ebx]
        fmul st(0), st(4)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_H
L_FAILG:
        fstp st(3)
        xor al, al
        fstp st(0)
        pop ebp
        fstp st(1)
        fstp st(0)
        fstp st(0)
        add esp, 0x3c
        ret
L_H:
        fld st(3)
        fmul dword ptr [esp + 0x18]
        fst qword ptr [esp + 0x30]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(4), st
        fxch st(3)
        fst qword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_FAILG
        fmul st(0), st(1)
        fst qword ptr [esp + 0x38]
        fld st(3)
        fmul dword ptr [esp + 0x10]
        fst qword ptr [esp + 0x28]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_OUT2
        fld dword ptr [esp + 0x50]
        fld qword ptr [mem_0099EC98]
        fmul st(0), st(1)
        fmul st(0), st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne L_I
        fstp st(1)
        fstp st(0)
        fstp st(0)
        fxch st(1)
        fcomp dword ptr [esp + 0x1c]
        fnstsw ax
        test ah, 0x5
        jnp L_OUT2B
        push ecx
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0xc]
        add esp, 0x4
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        jmp L_J
L_I:
        fstp st(4)
        fld st(2)
        fabs
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fxch st(4)
        fmul qword ptr [mem_0099EC90]
        fcomp st(4)
        fnstsw ax
        fstp st(3)
        test ah, 0x41
        jne L_K
        fstp st(1)
        fld dword ptr [esp + 0x48]
        fabs
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_OUT2B
        push ecx
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0x4c]
        add esp, 0x4
        fld dword ptr [esp + 0x48]
        fld st(0)
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        jmp L_J
L_K:
        fstp st(2)
        push ecx
        fstp st(1)
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0x4c]
        add esp, 0x4
        fld qword ptr [esp + 0x20]
        fcomp qword ptr [esp + 0x28]
        fnstsw ax
        fld dword ptr [esp + 0x48]
        test ah, 0x41
        fld dword ptr [esp + 0x8]
        jne L_L
        fld st(0)
        fmul dword ptr [esp + 0xc]
        jmp L_M
L_L:
        fld st(1)
        fmul dword ptr [esp + 0x10]
L_M:
        fstp dword ptr [esp + 0x48]
        fld qword ptr [esp + 0x30]
        fcomp qword ptr [esp + 0x38]
        fnstsw ax
        test ah, 0x41
        jne L_N
        fstp st(1)
        fmul dword ptr [esp + 0x14]
        jmp L_O
L_N:
        fstp st(0)
        fmul dword ptr [esp + 0x18]
L_O:
        fstp dword ptr [esp + 0x18]
L_J:
        fld dword ptr [esp + 0x48]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_P
        fstp dword ptr [ebx]
        jmp L_Q
L_P:
        fstp st(0)
L_Q:
        fld dword ptr [esp + 0x18]
        fld dword ptr [ebp]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_R
        fstp dword ptr [ebp]
        mov al, 0x1
        pop ebp
        add esp, 0x3c
        ret
L_R:
        fstp st(0)
        mov al, 0x1
        pop ebp
        add esp, 0x3c
        ret
    }
}

// [0x007E9460] sub_007E9460 (273 bytes)
extern "C" void ext_007E8FC0();
extern "C" __declspec(naked) void __fastcall fn_007E9460(void* self) {
    __asm {
        sub     esp, 0x18
        fld     dword ptr [esp + 0x28]
        push    ebx
        fstp    dword ptr [esp + 0x2c]
        push    ebp
        fld     dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x34]
        push    esi
        fld     dword ptr [esp + 0x3c]
        push    edi
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        mov     esi, eax
        fld     dword ptr [esp + 0x40]
        lea     eax, [esp + 0x48]
        fstp    dword ptr [esp + 0x4]
        mov     edi, ecx
        fld     dword ptr [esp + 0x3c]
        lea     ebx, [esp + 0x44]
        fstp    dword ptr [esp]
        push    eax
        call    ext_007E8FC0
        add     esp, 0x10
        test    al, al
        je      L_007E9569
        mov     ecx, dword ptr [ebp]
        lea     eax, [ecx + 0xc]
        mov     dword ptr [ebp], eax
        fld     dword ptr [esi]
        fld     dword ptr [esp + 0x38]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [edi + 0x8]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [ecx + 0x8]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ebp], ecx
        fld     dword ptr [esi]
        fld     dword ptr [esp + 0x3c]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [edi + 0x8]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x14]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [eax + 0x8]
    L_007E9569:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}

// [0x007E4A30] sub_007E4A30 (292 bytes)
extern "C" void ext_007E8FC0();
extern "C" __declspec(naked) void __fastcall fn_007E4A30(void* self) {
    __asm {
        sub     esp, 0x1c
        fld     dword ptr [esp + 0x2c]
        push    ebx
        fstp    dword ptr [esp + 0x30]
        push    ebp
        fld     dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x8]
        push    esi
        fld     dword ptr [esp + 0x40]
        push    edi
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        mov     esi, eax
        fld     dword ptr [esp + 0x44]
        lea     eax, [esp + 0x1c]
        fstp    dword ptr [esp + 0x4]
        mov     edi, ecx
        fld     dword ptr [esp + 0x40]
        lea     ebx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    eax
        call    ext_007E8FC0
        add     esp, 0x10
        test    al, al
        je      loc_7E4B4C
        mov     eax, dword ptr [ebp]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ebp], ecx
        fld     dword ptr [esi]
        fld     dword ptr [esp + 0x3c]
        fld     st(0)
        fmulp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [edi + 0x8]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x40]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7E4B4A
        lea     edx, [ecx + 0xc]
        mov     dword ptr [ebp], edx
        fld     dword ptr [esi]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esi + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edi + 0x8]
        pop     edi
        fadd    dword ptr [esp + 0x24]
        pop     esi
        pop     ebp
        pop     ebx
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x4]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x8]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 0x8]
        add     esp, 0x1c
        ret
    loc_7E4B4A:
        fstp    st(0)
    loc_7E4B4C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}

// [0x007E9320] sub_007E9320 (308 bytes)
extern "C" void ext_007E8FC0();
extern "C" __declspec(naked) void __fastcall fn_007E9320(void* self) {
    __asm {
        sub     esp, 0x20
        fld     dword ptr [esp + 0x30]
        push    ebx
        fstp    dword ptr [esp + 0x4]
        push    ebp
        fld     dword ptr [esp + 0x3c]
        mov     ebp, dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0xc]
        push    esi
        fld     dword ptr [esp + 0x44]
        push    edi
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        mov     esi, eax
        fld     dword ptr [esp + 0x48]
        lea     eax, [esp + 0x20]
        fstp    dword ptr [esp + 0x4]
        mov     edi, ecx
        fld     dword ptr [esp + 0x44]
        lea     ebx, [esp + 0x1c]
        fstp    dword ptr [esp]
        push    eax
        call    ext_007E8FC0
        add     esp, 0x10
        test    al, al
        je      loc_7E944C
        fld     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x40]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7E93DA
        mov     eax, dword ptr [ebp]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ebp], ecx
        fld     dword ptr [esi]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [edi + 0x4]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [edi + 0x8]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [eax + 0x8]
        jmp     loc_7E93DC
    loc_7E93DA:
        fstp    st(0)
    loc_7E93DC:
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x44]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7E944A
        mov     eax, dword ptr [ebp]
        lea     edx, [eax + 0xc]
        mov     dword ptr [ebp], edx
        fld     dword ptr [esi]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x28]
        fmul    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [edi]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edi + 0x4]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [edi + 0x8]
        pop     edi
        fadd    dword ptr [esp + 0x28]
        pop     esi
        pop     ebp
        pop     ebx
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0x20
        ret
    loc_7E944A:
        fstp    st(0)
    loc_7E944C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}

// [0x007ED290] sub_007ED290 (525 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CAFC0();
extern "C" void ext_007CB970();
extern "C" void ext_007E48D0();
extern "C" void ext_007ED130();
extern "C" int mem_0099D158;
extern "C" int mem_0094CE80;
extern "C" int mem_0092A280;

extern "C" __declspec(naked) void __fastcall fn_007ED290(void* self) {
    __asm {
        sub     esp, 0xe4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xf8]
        mov     eax, dword ptr [edi]
        push    eax
        call    ext_007C6F70
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        mov     ebp, eax
        call    ext_007C6F70
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     esi, eax
        call    ext_007C6F30
        fstp    qword ptr [esp + 0x20]
        mov     eax, dword ptr [edi]
        push    eax
        call    ext_007C6F30
        fadd    qword ptr [esp + 0x24]
        mov     ecx, dword ptr [edi]
        push    ecx
        fstp    dword ptr [esp + 0x28]
        call    ext_007C7000
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     ebx, eax
        call    ext_007C7000
        mov     edi, dword ptr [esp + 0x114]
        xor     eax, eax
        push    ebx
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0xc], eax
        call    ext_007CB970
        fstp    dword ptr [esp + 0x2c]
        push    ebx
        call    ext_007CAFC0
        fstp    dword ptr [esp + 0x40]
        add     esp, 0x20
        push    esi
        push    ebp
        lea     ecx, [esp + 0x2c]
        call    ext_007E48D0
        fld     dword ptr [esp + 0x20]
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        lea     ecx, [esp + 0x28]
        fld     dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x70]
        fstp    dword ptr [esp + 0x4]
        lea     edx, [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        lea     eax, [esp + 0x38]
        call    ext_007ED130
        add     esp, 0x14
        test    al, al
        jne     L_007ED360
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xe4
        ret
    L_007ED360:
        fld     dword ptr [esi + 0x20]
        fstp    dword ptr [edi + 0x10]
        fld     dword ptr [esi + 0x24]
        fstp    dword ptr [edi + 0x14]
        fld     dword ptr [esi + 0x28]
        fstp    dword ptr [edi + 0x18]
        fld     dword ptr [esp + 0x4c]
        fmul    st(0), st
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x14]
        fcom    qword ptr [mem_0099D158]
        fnstsw  ax
        test    ah, 0x41
        jne     L_007ED396
        fstp    st(0)
        mov     ebp, 0x2
        jmp     L_007ED3AD
    L_007ED396:
        fcomp   dword ptr [mem_0094CE80]
        mov     ebp, 0x3
        fnstsw  ax
        test    ah, 0x5
        jnp     L_007ED3AD
        mov     ebp, 0x1
    L_007ED3AD:
        mov     ebx, dword ptr [edi + 0x4]
        lea     eax, [esp + 0x64]
        cmp     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0xc], 0x0
        je      L_007ED48A
        fld     dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x6c]
        fld     qword ptr [mem_0092A280]
        lea     edx, [ebx + 0x14]
    L_007ED3D6:
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, dword ptr [edi + 0x8]
        jge     L_007ED486
        fld     dword ptr [ecx]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x14]
        fld     st(2)
        fmul    st, st(2)
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007ED474
        fld     dword ptr [esi + 0x10]
        mov     eax, ebp
        fmul    dword ptr [ecx - 0x4]
        or      eax, 0x200
        fld     dword ptr [esi]
        add     ebx, 0x28
        fmul    dword ptr [ecx - 0x8]
        faddp   st(1), st
        fld     dword ptr [esi + 0x20]
        fmul    dword ptr [ecx]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x30]
        fstp    dword ptr [ebx - 0x28]
        fld     dword ptr [esi + 0x14]
        fmul    dword ptr [ecx - 0x4]
        fld     dword ptr [esi + 0x4]
        fmul    dword ptr [ecx - 0x8]
        faddp   st(1), st
        fld     dword ptr [esi + 0x24]
        fmul    dword ptr [ecx]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x34]
        fstp    dword ptr [edx - 0x10]
        fld     dword ptr [esi + 0x18]
        fmul    dword ptr [ecx - 0x4]
        fld     dword ptr [esi + 0x8]
        fmul    dword ptr [ecx - 0x8]
        faddp   st(1), st
        fld     dword ptr [esi + 0x28]
        fmul    dword ptr [ecx]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x38]
        mov     word ptr [edx + 0x8], ax
        fstp    dword ptr [edx - 0xc]
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [edi + 0x10]
        fstp    dword ptr [edx - 0x8]
        fld     dword ptr [edi + 0x14]
        fstp    dword ptr [edx - 0x4]
        fld     dword ptr [edi + 0x18]
        fstp    dword ptr [edx]
        add     dword ptr [edi + 0xc], 0x1
        add     edx, 0x28
        jmp     L_007ED476
    L_007ED474:
        fstp    st(0)
    L_007ED476:
        add     ecx, 0xc
        lea     eax, [ecx - 0x8]
        cmp     eax, dword ptr [esp + 0x1c]
        jne     L_007ED3D6
    L_007ED486:
        fstp    st(1)
        fstp    st(0)
    L_007ED48A:
        mov     eax, 0x1
        mov     dword ptr [edi + 0x1c], eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret
    }
}

// [0x007E1A10] sub_007E1A10 (791 bytes)
extern "C" void ext_007F7660();
extern "C" int mem_0099EC70;
extern "C" __declspec(naked) void __cdecl fn_007E1A10(void* a1, void* a2) {
    __asm {
        sub esp, 44h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 54h]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi + 4]
        mov ebp, eax
        push ecx
        mov dword ptr [esp + 24h], ebp
        call ext_007C6F70
        mov edx, dword ptr [esi + 4]
        push edx
        mov ebx, eax
        call ext_007C6F30
        fstp qword ptr [esp + 30h]
        mov eax, dword ptr [esi]
        push eax
        call ext_007C6F30
        fadd qword ptr [esp + 34h]
        mov ecx, dword ptr [esi]
        push ecx
        fstp dword ptr [esp + 38h]
        call ext_007C7000
        mov edx, dword ptr [esi + 4]
        push edx
        mov dword ptr [esp + 28h], eax
        call ext_007C7000
        mov ecx, dword ptr [esp + 74h]
        add esp, 18h
        xor edx, edx
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ecx + 1ch], edx
        fld dword ptr [eax + 14h]
        lea ecx, [esp + 2ch]
        push ecx
        lea edx, [esp + 1ch]
        push edx
        lea ecx, [esp + 1ch]
        push ecx
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea esi, [ebx + 20h]
        fld dword ptr [eax + 14h]
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 24h]
        _emit 0xd9
        _emit 0xe0
        fstp dword ptr [esp]
        push esi
        fld dword ptr [eax + 14h]
        add ebx, 30h
        push ebx
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea edi, [ebp + 20h]
        fld dword ptr [eax + 14h]
        add ebp, 30h
        _emit 0xd9
        _emit 0xe0
        fstp dword ptr [esp]
        push edi
        push ebp
        call ext_007F7660
        fld dword ptr [edi]
        fld dword ptr [esp + 40h]
        add esp, 2ch
        _emit 0xd9
        _emit 0xc0
        mov ecx, eax
        _emit 0xde
        _emit 0xca
        fld dword ptr [ebp]
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        fstp dword ptr [esp + 3ch]
        fld dword ptr [edi + 4]
        _emit 0xd8
        _emit 0xc9
        fadd dword ptr [ebp + 4]
        fstp dword ptr [esp + 40h]
        fmul dword ptr [edi + 8]
        fadd dword ptr [ebp + 8]
        fstp dword ptr [esp + 44h]
        fld dword ptr [esi]
        fld dword ptr [esp + 18h]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        fld dword ptr [ebx]
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        fstp dword ptr [esp + 48h]
        fld dword ptr [esi + 4]
        _emit 0xd8
        _emit 0xc9
        fadd dword ptr [ebx + 4]
        fstp dword ptr [esp + 4ch]
        fmul dword ptr [esi + 8]
        fadd dword ptr [ebx + 8]
        fstp dword ptr [esp + 50h]
        fld dword ptr [esp + 3ch]
        fsub dword ptr [esp + 48h]
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 40h]
        fsub dword ptr [esp + 4ch]
        fstp dword ptr [esp + 34h]
        fld dword ptr [esp + 44h]
        fsub dword ptr [esp + 50h]
        fstp dword ptr [esp + 38h]
        fld dword ptr [esp + 34h]
        fld dword ptr [esp + 30h]
        fld dword ptr [esp + 38h]
        _emit 0xd9
        _emit 0xc1
        _emit 0xde
        _emit 0xca
        _emit 0xd9
        _emit 0xc2
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xc9
        _emit 0xde
        _emit 0xc2
        _emit 0xdc
        _emit 0xc8
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 58h]
        fld dword ptr [mem_0099EC70]
        fld dword ptr [esp + 58h]
        _emit 0xd8
        _emit 0xd1
        _emit 0xdf
        _emit 0xe0
        _emit 0xdd
        _emit 0xd9
        test ah, 41h
        jne L_1BBC
        call ext_006A7250
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 1ch]
        _emit 0xd9
        _emit 0xe8
        _emit 0xde
        _emit 0xf1
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 1ch]
        _emit 0xd9
        _emit 0xc0
        fmul dword ptr [esp + 58h]
        fstp dword ptr [esp + 58h]
        fld dword ptr [esp + 30h]
        _emit 0xd8
        _emit 0xc9
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 34h]
        _emit 0xd8
        _emit 0xc9
        fstp dword ptr [esp + 34h]
        fmul dword ptr [esp + 38h]
        fstp dword ptr [esp + 38h]
        jmp L_1C7A
    L_1BBC:
        test ecx, ecx
        _emit 0xdd
        _emit 0xd8
        _emit 0xd9
        _emit 0xee
        fstp dword ptr [esp + 58h]
        je L_1BF6
        fld dword ptr [edi + 4]
        fmul dword ptr [esi + 8]
        fld dword ptr [edi + 8]
        fmul dword ptr [esi + 4]
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 30h]
        fld dword ptr [esi]
        fmul dword ptr [edi + 8]
        fld dword ptr [esi + 8]
        fmul dword ptr [edi]
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 34h]
        fld dword ptr [edi]
        fmul dword ptr [esi + 4]
        fld dword ptr [edi + 4]
        fmul dword ptr [esi]
        jmp L_1C69
    L_1BF6:
        fld dword ptr [edi]
        mov eax, dword ptr [esp + 1ch]
        _emit 0xdc
        _emit 0xc8
        lea ecx, [esp + 3ch]
        fstp dword ptr [esp + 3ch]
        fld dword ptr [eax + 24h]
        _emit 0xdc
        _emit 0xc8
        fstp dword ptr [esp + 40h]
        fld dword ptr [eax + 28h]
        _emit 0xdc
        _emit 0xc8
        fstp dword ptr [esp + 44h]
        call ext_007DFE30
        _emit 0xd9
        _emit 0xee
        fst dword ptr [esp + 3ch]
        fst dword ptr [esp + 40h]
        fstp dword ptr [esp + 44h]
        _emit 0xd9
        _emit 0xe8
        _emit 0xd9
        _emit 0x5c
        _emit 0x84
        _emit 0x3c
        fld dword ptr [edi + 4]
        fld dword ptr [esp + 44h]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        fld dword ptr [esp + 40h]
        _emit 0xd9
        _emit 0xc0
        fmul dword ptr [edi + 8]
        _emit 0xde
        _emit 0xeb
        _emit 0xd9
        _emit 0xca
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 3ch]
        _emit 0xd9
        _emit 0xc0
        fmul dword ptr [edi + 8]
        fld dword ptr [edi]
        _emit 0xde
        _emit 0xcb
        _emit 0xde
        _emit 0xe2
        _emit 0xd9
        _emit 0xc9
        fstp dword ptr [esp + 34h]
        fld dword ptr [edi]
        _emit 0xde
        _emit 0xca
        fmul dword ptr [edi + 4]
    L_1C69:
        _emit 0xde
        _emit 0xe9
        lea esi, [esp + 30h]
        fstp dword ptr [esp + 38h]
        call ext_007E46B0
        _emit 0xdd
        _emit 0xd8
    L_1C7A:
        fld dword ptr [esp + 58h]
        mov edx, dword ptr [esp + 10h]
        fld dword ptr [edx + 10h]
        mov ecx, dword ptr [esp + 20h]
        fadd dword ptr [ecx + 10h]
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 58h]
        fld dword ptr [esp + 58h]
        fld dword ptr [esp + 24h]
        _emit 0xd8
        _emit 0xd9
        _emit 0xdf
        _emit 0xe0
        test ah, 41h
        jne L_1D16
        fld dword ptr [ecx + 10h]
        mov esi, dword ptr [esp + 5ch]
        fstp dword ptr [esp + 58h]
        push esi
        fld dword ptr [esp + 5ch]
        push 0
        _emit 0xd9
        _emit 0xc0
        push ecx
        fmul dword ptr [esp + 3ch]
        lea eax, [esp + 3ch]
        fadd dword ptr [esp + 54h]
        fstp dword ptr [esp + 48h]
        fld dword ptr [esp + 40h]
        _emit 0xd8
        _emit 0xc9
        fadd dword ptr [esp + 58h]
        fstp dword ptr [esp + 4ch]
        fmul dword ptr [esp + 44h]
        fadd dword ptr [esp + 5ch]
        fstp dword ptr [esp + 50h]
        _emit 0xd9
        _emit 0xee
        fst dword ptr [esi + 10h]
        fst dword ptr [esi + 14h]
        fstp dword ptr [esi + 18h]
        fld dword ptr [esp + 38h]
        fstp dword ptr [esp]
        push edi
        push 3
        push 3
        push ecx
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 5ch]
        push ecx
        call ext_007DFF50
        mov eax, dword ptr [esi + 1ch]
        add esp, 24h
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 44h
        ret
    L_1D16:
        mov edx, dword ptr [esp + 5ch]
        _emit 0xdd
        _emit 0xd8
        mov eax, dword ptr [edx + 1ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 44h
        ret
    }
}

// [0x007E1350] sub_007E1350 (966 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007DFF50();
extern "C" int mem_00954354;
extern "C" int mem_00968ED8;
extern "C" int mem_0099EC5C;

extern "C" __declspec(naked) void __cdecl fn_007E1350(void) {
    __asm {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x44]
        mov eax, dword ptr [edi]
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [edi + 0x4]
        push ecx
        mov ebp, eax
        call ext_007C6F70
        mov edx, dword ptr [edi + 0x4]
        mov esi, eax
        push edx
        mov dword ptr [esp + 0x1c], esi
        call ext_007C6F30
        fstp qword ptr [esp + 0x28]
        mov eax, dword ptr [edi]
        push eax
        call ext_007C6F30
        fadd qword ptr [esp + 0x2c]
        mov ecx, dword ptr [edi]
        push ecx
        fstp dword ptr [esp + 0x30]
        call ext_007C7000
        mov edx, dword ptr [edi + 0x4]
        push edx
        mov dword ptr [esp + 0x5c], eax
        call ext_007C7000
        mov edi, dword ptr [esp + 0x60]
        xor ecx, ecx
        mov dword ptr [edi + 0xc], ecx
        mov dword ptr [edi + 0x1c], ecx
        fld dword ptr [ebp + 0x24]
        fmul dword ptr [esi + 0x24]
        lea ebx, [ebp + 0x20]
        fld dword ptr [ebx]
        add esi, 0x20
        fmul dword ptr [esi]
        add esp, 0x18
        faddp st(1), st
        fld dword ptr [ebx + 0x8]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fldz
        fst dword ptr [esp + 0x48]
        fld dword ptr [mem_00954354]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_7E1428
        mov eax, dword ptr [esp + 0x44]
        fstp st(0)
        fld dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ebx]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ebp + 0x30]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x4]
        fmul st, st(1)
        fadd dword ptr [ebp + 0x34]
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [ebx + 0x8]
        fadd dword ptr [ebp + 0x38]
        fstp dword ptr [esp + 0x30]
        jmp L_7E1472
L_7E1428:
        mov edx, dword ptr [esp + 0x44]
        fld dword ptr [edx + 0x14]
        fchs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmul dword ptr [ebx]
        fadd dword ptr [ebp + 0x30]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x4]
        fmul st, st(1)
        fadd dword ptr [ebp + 0x34]
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [ebx + 0x8]
        fadd dword ptr [ebp + 0x38]
        fstp dword ptr [esp + 0x30]
        fcomp dword ptr [mem_00968ED8]
        fnstsw ax
        test ah, 0x5
        jp L_7E1472
        mov eax, edx
        fld dword ptr [eax + 0x14]
        fadd st(0), st
        fstp dword ptr [esp + 0x48]
L_7E1472:
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x28]
        fld st(0)
        mov edx, dword ptr [esp + 0x44]
        fsub dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fsub dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fld st(0)
        fsub dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x38]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x3c]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fsub dword ptr [edx + 0x10]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x1c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_7E1702
        fld dword ptr [edx + 0x10]
        push edi
        fchs
        push ecx
        fsub st, st(1)
        push ecx
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        faddp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x4]
        fmul st, st(4)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x48]
        fxch st(1)
        fst dword ptr [edi + 0x10]
        fst dword ptr [edi + 0x14]
        fstp dword ptr [edi + 0x18]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push ebx
        push 0x2
        push 0x3
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x50]
        push esi
        push ecx
        call ext_007DFF50
        fldz
        fcom dword ptr [esp + 0x6c]
        add esp, 0x24
        fnstsw ax
        test ah, 0x44
        jp L_7E16F5
        mov ecx, dword ptr [esp + 0x44]
        fld dword ptr [ecx + 0x10]
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [ebp + 0x34]
        fld dword ptr [esi]
        fmul dword ptr [ebp + 0x30]
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmul dword ptr [ebp + 0x38]
        faddp st(1), st
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld dword ptr [eax + 0x34]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x30]
        fmul dword ptr [esi]
        faddp st(1), st
        fld dword ptr [eax + 0x38]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x44]
        fsub dword ptr [esp + 0x44]
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fld dword ptr [ecx + 0x14]
        test ah, 0x41
        jne L_7E15B0
        fchs
L_7E15B0:
        fstp dword ptr [esp + 0x44]
        fld dword ptr [mem_0099EC5C]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x44]
        test ah, 0x5
        jp L_7E15F2
        fstp st(1)
        fld dword ptr [esp + 0x48]
        fld dword ptr [ecx + 0x14]
        fmul st, st(3)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jp L_7E161E
        fstp st(2)
        fstp st(1)
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [esp + 0x44]
        jmp L_7E1642
L_7E15E8:
        _emit 0xde
        _emit 0xf2
        fxch st(1)
        fstp dword ptr [esp + 0x44]
        jmp L_7E1642
L_7E15F2:
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne L_7E1640
        fld dword ptr [esp + 0x48]
        fld st(2)
        fchs
        fmul dword ptr [ecx + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jp L_7E161E
        fstp st(2)
        fstp st(1)
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [esp + 0x44]
        jmp L_7E1642
L_7E161E:
        fld st(0)
        fld st(2)
        fmul st, st(4)
        _emit 0xde
        _emit 0xe9
        fld dword ptr [ecx + 0x10]
        fmul st, st(4)
        fmul st, st(4)
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_7E15E8
        fstp st(2)
        fstp st(1)
        fst dword ptr [esp + 0x44]
        jmp L_7E1642
L_7E1640:
        fstp st(1)
L_7E1642:
        fld dword ptr [esp + 0x44]
        fld st(0)
        fucomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp L_7E16E6
        fld dword ptr [ecx + 0x10]
        push edi
        fchs
        push 0x0
        fstp dword ptr [esp + 0x4c]
        push ecx
        fld dword ptr [esi]
        lea edx, [esp + 0x28]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ebp + 0x30]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fadd dword ptr [ebp + 0x34]
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [esi + 0x8]
        fadd dword ptr [ebp + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ebx]
        fmul st, st(1)
        fadd dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x4]
        fmul st, st(1)
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [ebx + 0x8]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fst dword ptr [edi + 0x10]
        fst dword ptr [edi + 0x14]
        fst dword ptr [edi + 0x18]
        fstp dword ptr [esp]
        push 0x0
        fld dword ptr [esp + 0x28]
        push 0x2
        push 0x3
        push ecx
        fstp dword ptr [esp]
        push esi
        push edx
        call ext_007DFF50
        mov eax, dword ptr [edi + 0x1c]
        add esp, 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret
L_7E16E6:
        mov eax, dword ptr [edi + 0x1c]
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret
L_7E16F5:
        mov eax, dword ptr [edi + 0x1c]
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret
L_7E1702:
        fstp st(4)
        pop edi
        fstp st(3)
        pop esi
        fstp st(1)
        pop ebp
        fstp st(0)
        mov eax, ecx
        fstp st(0)
        pop ebx
        add esp, 0x30
        ret
    }
}

// [0x007E8150] sub_007E8150 (987 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007E7FD0();
extern "C" int mem_00958CC8;
extern "C" int mem_0099D148;
extern "C" __declspec(naked) void __fastcall fn_007E8150(void* self) {
    __asm {
        sub esp, 0x30
        fld dword ptr [esp + 0x50]
        push ebx
        fmul qword ptr [mem_00958CC8]
        push ebp
        push esi
        push edi
        fstp dword ptr [esp + 0x10]
        mov edi, eax
        mov ebx, dword ptr [edi + 0xc]
        mov ecx, dword ptr [edi]
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [ecx + 0x4]
        mov ebp, dword ptr [esp + 0x4c]
        fld dword ptr [ecx]
        mov edx, dword ptr [edi + 0x4]
        fmul dword ptr [ebx]
        mov esi, dword ptr [edi + 0x8]
        faddp st(1), st(0)
        fld dword ptr [ebx + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x60]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x60]
        fsub dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x54]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007E81C3
    L_007E81B7:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x30
        ret
    L_007E81C3:
        fld dword ptr [ecx + 0x8]
        mov eax, ebx
        fmul dword ptr [edx]
        fld dword ptr [edx + 0x8]
        fmul dword ptr [ecx]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x8]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st(0)
        fmul dword ptr [eax]
        faddp st(1), st(0)
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [edx]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x54]
        fld dword ptr [edx + 0x8]
        fmul dword ptr [esi]
        fld dword ptr [edx]
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [esi + 0x8]
        fld dword ptr [edx + 0x8]
        fmul dword ptr [esi + 0x4]
        fsubp st(1), st(0)
        fmul dword ptr [eax]
        faddp st(1), st(0)
        fld dword ptr [edx]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [esi]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx]
        fmul dword ptr [esi + 0x8]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [esi]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st(0)
        fmul dword ptr [eax]
        faddp st(1), st(0)
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [ecx]
        fsubp st(1), st(0)
        fmul dword ptr [eax + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fchs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x14]
        test ah, 0x5
        fld dword ptr [esp + 0x18]
        jp L_007E8348
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_007E834C
        fxch st(2)
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007E834E
        fstp st(3)
        fstp st(1)
        fstp st(0)
        fstp st(0)
    L_007E82B6:
        fld dword ptr [ebx]
        mov eax, dword ptr [esp + 0x50]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebx + 0x4]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [ebx + 0x8]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ebp]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [ebp + 0x8]
        mov word ptr [eax], 0x203
        test byte ptr [edi + 0x18], 0x2
        mov edi, dword ptr [edi + 0xc]
        je L_007E8374
        fldz
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007E8320
        fld dword ptr [edi]
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x4]
        fchs
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x8]
        lea edi, [esp + 0x28]
        fchs
        fstp dword ptr [esp + 0x30]
    L_007E8320:
        fld dword ptr [edi]
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x44]
        fstp dword ptr [eax]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edi + 0x8]
        pop edi
        fstp dword ptr [eax + 0x8]
        pop esi
        fld dword ptr [esp + 0x58]
        pop ebp
        fstp dword ptr [ecx]
        mov al, 0x1
        pop ebx
        add esp, 0x30
        ret
    L_007E8348:
        fstp st(2)
        jmp L_007E8350
    L_007E834C:
        fstp st(2)
    L_007E834E:
        fxch st(1)
    L_007E8350:
        fxch st(2)
        fcomp st(3)
        fnstsw ax
        test ah, 0x5
        jp L_007E839E
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp L_007E83A4
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007E83A8
        jmp L_007E82B6
    L_007E8374:
        fld dword ptr [edi]
        mov eax, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x44]
        fstp dword ptr [eax]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edi + 0x8]
        pop edi
        fstp dword ptr [eax + 0x8]
        pop esi
        pop ebp
        fchs
        mov al, 0x1
        fsub dword ptr [esp + 0x4c]
        pop ebx
        fstp dword ptr [edx]
        add esp, 0x30
        ret
    L_007E839E:
        fstp st(2)
        fstp st(0)
        jmp L_007E83A6
    L_007E83A4:
        fstp st(1)
    L_007E83A6:
        fstp st(1)
    L_007E83A8:
        mov ecx, dword ptr [esp + 0x5c]
        fstp st(0)
        fld dword ptr [mem_0099D148]
        xor ebx, ebx
        fstp dword ptr [esp + 0x60]
        mov dword ptr [esp + 0x54], ecx
        _emit 0x8b
        _emit 0xff
    L_007E83C0:
        mov eax, dword ptr [edi + 4*ebx]
        fld dword ptr [eax]
        lea edx, [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        lea esi, [esp + 0x34]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x8]
        lea eax, [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fchs
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fchs
        fstp dword ptr [esp + 0x30]
        call ext_007E7FD0
        fld dword ptr [esp + 0x38]
        movzx ecx, ax
        fld st(0)
        fld dword ptr [esp + 0x34]
        fld st(0)
        fld dword ptr [esp + 0x3c]
        fld st(0)
        fld st(2)
        fmulp st(3), st(0)
        fld st(4)
        fmulp st(5), st(0)
        fxch st(2)
        faddp st(4), st(0)
        fld st(1)
        fmulp st(2), st(0)
        fxch st(3)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x60]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007E8463
        fstp dword ptr [esp + 0x60]
        xor eax, eax
        mov ah, cl
        mov ecx, dword ptr [esp + 0x50]
        fstp dword ptr [ebp]
        fxch st(1)
        fstp dword ptr [ebp + 0x4]
        fstp dword ptr [ebp + 0x8]
        or eax, 0x3
        mov word ptr [ecx], ax
        jmp L_007E846B
    L_007E8463:
        fstp st(0)
        fstp st(2)
        fstp st(1)
        fstp st(0)
    L_007E846B:
        mov ecx, dword ptr [esp + 0x54]
        add ebx, 0x1
        add ecx, 0xc
        cmp ebx, 0x3
        mov dword ptr [esp + 0x54], ecx
        jl L_007E83C0
        fld dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x60]
        fld st(1)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x60]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_007E81B7
        call ext_006A7250
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x44]
        fld dword ptr [ebp]
        pop edi
        fchs
        pop esi
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ebp + 0x4]
        fchs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ebp + 0x8]
        pop ebp
        fchs
        pop ebx
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fld1
        fdivrp st(1), st(0)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x1c]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x8]
        mov al, 0x1
        fsub dword ptr [esp + 0x48]
        fstp dword ptr [edx]
        add esp, 0x30
        ret
    }
}

// [0x007E8530] sub_007E8530 (1153 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();
extern "C" void ext_007E46B0();
extern "C" void ext_007E47E0();
extern "C" void ext_007E80E0();
extern "C" void ext_007E8150();
extern "C" int mem_00AA7E40;

extern "C" __declspec(naked) void __fastcall fn_007E8530(void* self) {
    __asm {
        push ebp
        lea ebp, [esp - 0x70]
        sub esp, 0x148
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp + 0x6c], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x78]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C7000
        mov ecx, dword ptr [esi + 4]
        push ecx
        mov ebx, eax
        call ext_007C7000
        mov edx, dword ptr [esi]
        mov edi, eax
        mov eax, dword ptr [edx]
        push ebx
        mov dword ptr [ebp - 0x24], edi
        mov dword ptr [ebp + 0x10], eax
        call ext_007CB970
        fstp dword ptr [ebp + 0x58]
        mov ecx, dword ptr [esi]
        push ecx
        call ext_007C6F70
        mov edx, dword ptr [esi + 4]
        mov ebx, eax
        add ebx, 0x30
        push edx
        mov dword ptr [ebp - 0x14], ebx
        call ext_007C6F70
        add esp, 0x14
        push eax
        lea ecx, [ebp - 0x8c]
        mov dword ptr [ebp + 0x68], eax
        call ext_007E80E0
        fld dword ptr [ebp - 0x5c]
        fsub dword ptr [ebx]
        mov eax, dword ptr [esi + 4]
        push eax
        fstp dword ptr [ebp - 0x5c]
        fld dword ptr [ebp - 0x58]
        fsub dword ptr [ebx + 4]
        fstp dword ptr [ebp - 0x58]
        fld dword ptr [ebp - 0x54]
        fsub dword ptr [ebx + 8]
        fstp dword ptr [ebp - 0x54]
        call ext_007C6F30
        mov ecx, dword ptr [esi]
        fstp qword ptr [ebp + 0x4c]
        push ecx
        call ext_007C6F30
        fadd qword ptr [ebp + 0x4c]
        mov ecx, dword ptr [edi + 0x28]
        lea eax, [ecx*8]
        sub eax, ecx
        fstp dword ptr [ebp + 0x5c]
        add eax, eax
        add esp, 8
        add eax, eax
        call ext_006A6EC0
        mov ecx, dword ptr [ebp + 0x68]
        mov eax, esp
        lea edx, [ebp - 0xd8]
        push edx
        push ebx
        mov dword ptr [edi + 0x38], eax
        call ext_007E47E0
        fld dword ptr [ebp + 0x5c]
        fadd dword ptr [ebp + 0x58]
        mov eax, dword ptr [edi + 0x28]
        mov edx, dword ptr [edi + 0x38]
        push eax
        mov eax, dword ptr [edi + 0x30]
        fstp dword ptr [ebp + 0x68]
        fld dword ptr [ebp + 0x68]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [ebp - 0xd8]
        push ecx
        push edx
        push esi
        call eax
        add esp, 0x14
        mov ecx, dword ptr [ebp + 0x7c]
        fldz
        xor edx, edx
        cmp eax, edx
        lea ebx, [ecx + 0x10]
        mov dword ptr [ecx + 0xc], edx
        mov dword ptr [ecx + 0x1c], edx
        fst dword ptr [ebx]
        fst dword ptr [ebx + 4]
        mov dword ptr [ebp - 0x18], eax
        fstp dword ptr [ebx + 8]
        jne L_007E864D
        xor eax, eax
        jmp L_007E8997

    L_007E864D:
        cmp eax, edx
        lea esi, [ebp + 0x1c]
        mov dword ptr [ebp - 0xc0], esi
        lea esi, [ebp + 0x28]
        mov dword ptr [ebp - 0xcc], esi
        lea esi, [ebp + 0x34]
        mov dword ptr [ebp - 0xc8], esi
        lea esi, [ebp + 0x40]
        mov dword ptr [ebp - 0xc4], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [ebp + 0x54], esi
        mov dword ptr [ebp + 0x68], edx
        jle L_007E8980
        mov dword ptr [ebp + 0x64], edx
        add esi, 0x14
        jmp L_007E8696

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    L_007E8690:
        mov edi, dword ptr [ebp - 0x24]
        mov ecx, dword ptr [ebp + 0x7c]

    L_007E8696:
        cmp dword ptr [ecx + 0xc], 0xc8
        jge L_007E8980
        mov edi, dword ptr [edi + 0x38]
        fld dword ptr [ebp - 0x7c]
        add edi, dword ptr [ebp + 0x64]
        fld dword ptr [ebp - 0x8c]
        fld dword ptr [ebp - 0x6c]
        mov eax, dword ptr [edi]
        fld dword ptr [ebp - 0x5c]
        fst qword ptr [ebp + 0x4c]
        fld dword ptr [eax + 4]
        fmul st, st(4)
        fld dword ptr [eax]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul st, st(3)
        faddp st(1), st
        faddp st(1), st
        fstp dword ptr [ebp + 0x28]
        fld dword ptr [ebp - 0x78]
        fld dword ptr [ebp - 0x88]
        fld dword ptr [ebp - 0x68]
        fst qword ptr [ebp - 0x2c]
        fld dword ptr [ebp - 0x58]
        fstp qword ptr [ebp - 8]
        fld dword ptr [eax + 4]
        fmul st, st(3)
        fld dword ptr [eax]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmulp st(2), st
        faddp st(1), st
        fadd qword ptr [ebp - 8]
        fstp dword ptr [ebp + 0x2c]
        fld dword ptr [ebp - 0x74]
        fst qword ptr [ebp - 0x20]
        fld dword ptr [ebp - 0x84]
        fst qword ptr [ebp - 0x10]
        fld dword ptr [ebp - 0x64]
        fstp qword ptr [ebp + 0x14]
        fld dword ptr [ebp - 0x54]
        fstp qword ptr [ebp - 0x34]
        fld dword ptr [eax + 4]
        fmulp st(2), st
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul qword ptr [ebp + 0x14]
        faddp st(1), st
        fadd qword ptr [ebp - 0x34]
        fstp dword ptr [ebp + 0x30]
        mov eax, dword ptr [edi + 4]
        fld dword ptr [eax]
        fmul st, st(4)
        fld dword ptr [eax + 4]
        fmul st, st(6)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul st, st(4)
        faddp st(1), st
        fadd qword ptr [ebp + 0x4c]
        fstp dword ptr [ebp + 0x34]
        fld dword ptr [eax]
        fmul st, st(1)
        fld dword ptr [eax + 4]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul qword ptr [ebp - 0x2c]
        faddp st(1), st
        fadd qword ptr [ebp - 8]
        fstp dword ptr [ebp + 0x38]
        fld dword ptr [eax]
        fmul qword ptr [ebp - 0x10]
        fld dword ptr [eax + 4]
        fmul qword ptr [ebp - 0x20]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul qword ptr [ebp + 0x14]
        faddp st(1), st
        fadd qword ptr [ebp - 0x34]
        fstp dword ptr [ebp + 0x3c]
        mov eax, dword ptr [edi + 8]
        fld dword ptr [eax]
        fmul st, st(4)
        fld dword ptr [eax + 4]
        fmul st, st(6)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul st, st(4)
        faddp st(1), st
        fadd qword ptr [ebp + 0x4c]
        fstp dword ptr [ebp + 0x40]
        fld dword ptr [eax]
        fmul st, st(1)
        fld dword ptr [eax + 4]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul qword ptr [ebp - 0x2c]
        faddp st(1), st
        fadd qword ptr [ebp - 8]
        fstp dword ptr [ebp + 0x44]
        fld dword ptr [eax]
        fmul qword ptr [ebp - 0x10]
        fld dword ptr [eax + 4]
        fmul qword ptr [ebp - 0x20]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fld qword ptr [ebp + 0x14]
        fmul st(1), st
        fxch st(2)
        faddp st(1), st
        fadd qword ptr [ebp - 0x34]
        fstp dword ptr [ebp + 0x48]
        mov eax, dword ptr [edi + 0xc]
        fld dword ptr [eax + 4]
        fmulp st(6), st
        fld dword ptr [eax]
        fmulp st(5), st
        fxch st(5)
        faddp st(4), st
        fld dword ptr [eax + 8]
        fmulp st(3), st
        fxch st(3)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ebp + 0x1c]
        fmul dword ptr [eax + 4]
        fld dword ptr [eax]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul qword ptr [ebp - 0x2c]
        faddp st(1), st
        fstp dword ptr [ebp + 0x20]
        fld dword ptr [eax + 4]
        fmul qword ptr [ebp - 0x20]
        fld dword ptr [eax]
        fmul qword ptr [ebp - 0x10]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [ebp + 0x24]
        mov ecx, dword ptr [edi + 0x18]
        fld dword ptr [ebp + 0x34]
        mov edx, dword ptr [edi + 0x14]
        fld dword ptr [ebp + 0x28]
        mov dword ptr [ebp - 0xb4], ecx
        fld st(1)
        mov dword ptr [ebp - 0xb8], edx
        fsub st, st(1)
        fstp dword ptr [ebp - 0xb0]
        fld dword ptr [ebp + 0x38]
        fld dword ptr [ebp + 0x2c]
        fld st(1)
        fsub st, st(1)
        fstp dword ptr [ebp - 0xac]
        fld dword ptr [ebp + 0x3c]
        fld dword ptr [ebp + 0x30]
        fld st(1)
        fsub st, st(1)
        mov eax, dword ptr [ebp + 0x10]
        push ecx
        lea ecx, [ebp - 0xb0]
        fstp dword ptr [ebp - 0xa8]
        lea edx, [ebp + 0x60]
        fld dword ptr [ebp + 0x40]
        fld st(0)
        fsubrp st(7), st
        fxch st(6)
        fstp dword ptr [ebp - 0xa4]
        fld dword ptr [ebp + 0x44]
        fld st(0)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [ebp - 0xa0]
        fld dword ptr [ebp + 0x48]
        fld st(0)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [ebp - 0x9c]
        fxch st(4)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [ebp - 0x98]
        fsubrp st(1), st
        fstp dword ptr [ebp - 0x94]
        fsubrp st(1), st
        fstp dword ptr [ebp - 0x90]
        fld dword ptr [eax + 0xa0]
        lea eax, [ebp - 0x40]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [ebp + 0x58]
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [ebp - 0x4c]
        fld dword ptr [ebp + 0x5c]
        fstp dword ptr [esp]
        push edx
        push eax
        push ecx
        lea edx, [ebp + 0xc]
        push edx
        lea eax, [ebp - 0xcc]
        call ext_007E8150
        add esp, 0x20
        test al, al
        je L_007E896A
        mov eax, dword ptr [ebp - 0x14]
        fld dword ptr [eax]
        mov cx, word ptr [ebp + 0x60]
        fadd dword ptr [ebp - 0x40]
        fstp dword ptr [ebp]
        fld dword ptr [eax + 4]
        fadd dword ptr [ebp - 0x3c]
        fstp dword ptr [ebp + 4]
        fld dword ptr [ebp - 0x38]
        fadd dword ptr [eax + 8]
        mov eax, dword ptr [ebp + 0x54]
        mov word ptr [esi + 8], cx
        mov ecx, dword ptr [ebp + 0x7c]
        fstp dword ptr [ebp + 8]
        add eax, 0x28
        fld dword ptr [ebp]
        mov dword ptr [ebp + 0x54], eax
        fstp dword ptr [eax - 0x28]
        fld dword ptr [ebp + 4]
        fstp dword ptr [esi - 0x10]
        fld dword ptr [ebp + 8]
        fstp dword ptr [esi - 0xc]
        fld dword ptr [ebp - 0x4c]
        fst dword ptr [esi - 8]
        fld dword ptr [ebp - 0x48]
        fst dword ptr [esi - 4]
        fld dword ptr [ebp - 0x44]
        fst dword ptr [esi]
        fld dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 4]
        fld dword ptr [ebx]
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [ebx]
        fadd dword ptr [ebx + 4]
        fstp dword ptr [ebx + 4]
        fadd dword ptr [ebx + 8]
        fstp dword ptr [ebx + 8]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x10], edx
        add dword ptr [ecx + 0xc], 1
        add esi, 0x28

    L_007E896A:
        mov eax, dword ptr [ebp + 0x68]
        add dword ptr [ebp + 0x64], 0x1c
        add eax, 1
        cmp eax, dword ptr [ebp - 0x18]
        mov dword ptr [ebp + 0x68], eax
        jl L_007E8690

    L_007E8980:
        mov esi, ebx
        call ext_007E46B0
        fstp st(0)
        mov ecx, dword ptr [ebp + 0x7c]
        xor eax, eax
        cmp dword ptr [ecx + 0xc], eax
        setg al
        mov dword ptr [ecx + 0x1c], eax

    L_007E8997:
        lea esp, [ebp - 0xe4]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp + 0x6c]
        xor ecx, ebp
        call ext_006A745E
        add ebp, 0x70
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007E41C0]
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007DB640();
extern "C" void ext_007E3FF0();
extern "C" void ext_007E46B0();
extern "C" int mem_0093F7B0;
extern "C" int mem_0099E0B4;
extern "C" __declspec(naked) void __fastcall fn_007E41C0(void* self)
{
    __asm
    {
        sub esp, 06ch
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 07ch]
        push edi
        push esi
        call ext_007C7000
        push esi
        mov ebx, eax
        call ext_007C6F70
        mov ecx, dword ptr [esp + 08ch]
        add esp, 08h
        lea edx, [esp + 020h]
        mov edi, eax
        call ext_007DB640
        mov ecx, dword ptr [esp + 088h]
        lea edx, [esp + 050h]
        call ext_007DB640
        fld dword ptr [esp + 028h]
        fld dword ptr [ebx + 014h]
        xor ebp, ebp
        fcomp st(1)
        mov dword ptr [esp + 03ch], ebp
        mov dword ptr [esp + 040h], ebp
        fnstsw ax
        test ah, 041h
        jp L_007E4249
        fld dword ptr [esp + 058h]
        mov ebp, 01h
        fld dword ptr [ebx + 014h]
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jne L_007E42BD
        fld dword ptr [ebx + 014h]
        mov dword ptr [esp + 03ch], ebp
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jne L_007E42BD
        mov dword ptr [esp + 040h], ebp
        jmp L_007E42BD
    L_007E4249:
        fld dword ptr [ebx + 014h]
        fchs
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 058h]
        test ah, 041h
        jp L_007E4291
        fld dword ptr [ebx + 014h]
        mov dword ptr [esp + 03ch], 01h
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jp L_007E427C
        mov ebp, 01h
    L_007E427C:
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 05h
        jp L_007E42BD
        mov dword ptr [esp + 040h], 01h
        jmp L_007E42BD
    L_007E4291:
        fcom st(1)
        mov dword ptr [esp + 040h], 01h
        fnstsw ax
        fstp st(1)
        test ah, 01h
        jne L_007E42BD
        fld dword ptr [ebx + 014h]
        mov dword ptr [esp + 03ch], 01h
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jp L_007E42BD
        mov ebp, 01h
    L_007E42BD:
        fldz
        lea esi, [esp + 02ch]
        fst dword ptr [esp + 044h]
        fst dword ptr [esp + 048h]
        fstp dword ptr [esp + 04ch]
        fld dword ptr [esp + 050h]
        fsub dword ptr [esp + 020h]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [esp + 054h]
        fsub dword ptr [esp + 024h]
        fstp dword ptr [esp + 030h]
        fsubrp st(1), st
        fstp dword ptr [esp + 034h]
        call ext_007E46B0
        xor ecx, ecx
        fstp dword ptr [esp + 010h]
        test ebp, ebp
        je L_007E4344
        fld dword ptr [ebx + 014h]
        lea eax, [esp + 05ch]
        push eax
        fstp dword ptr [esp + 050h]
        fld dword ptr [esp + 014h]
        push ecx
        fstp dword ptr [esp]
        mov ecx, esi
        fld dword ptr [ebx + 010h]
        push ecx
        lea edx, [esp + 02ch]
        push edx
        push ecx
        lea eax, [esp + 058h]
        fstp dword ptr [esp]
        push eax
        call ext_007E3FF0
        mov ecx, eax
        add esp, 018h
        test ecx, ecx
        je L_007E4344
        fld dword ptr [esp + 068h]
        fld dword ptr [ebx + 014h]
        fcompp
        fnstsw ax
        test ah, 041h
        jne L_007E4344
        xor ecx, ecx
    L_007E4344:
        cmp dword ptr [esp + 040h], 00h
        je L_007E439D
        test ecx, ecx
        jne L_007E439D
        fld dword ptr [ebx + 014h]
        lea ecx, [esp + 05ch]
        push ecx
        fchs
        push ecx
        fstp dword ptr [esp + 054h]
        fld dword ptr [esp + 018h]
        lea edx, [esp + 034h]
        fstp dword ptr [esp]
        push edx
        fld dword ptr [ebx + 010h]
        lea eax, [esp + 02ch]
        push eax
        push ecx
        lea ecx, [esp + 058h]
        fstp dword ptr [esp]
        push ecx
        call ext_007E3FF0
        mov ecx, eax
        add esp, 018h
        test ecx, ecx
        je L_007E439D
        fld dword ptr [esp + 068h]
        fld dword ptr [ebx + 014h]
        fchs
        fcompp
        fnstsw ax
        test ah, 05h
        jp L_007E439D
        xor ecx, ecx
    L_007E439D:
        cmp dword ptr [esp + 03ch], 00h
        je L_007E463E
        test ecx, ecx
        jne L_007E4415
        fld dword ptr [esp + 024h]
        fld st(0)
        fld dword ptr [esp + 020h]
        fld st(0)
        fld st(2)
        fmulp st(3), st
        fmul st(0), st
        faddp st(2), st
        fld dword ptr [ebx + 010h]
        fmul st(0), st
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fcomp st(2)
        fnstsw ax
        test ah, 01h
        jne L_007E44EA
        fld dword ptr [esp + 028h]
        fld dword ptr [ebx + 014h]
        fcomp st(1)
        fnstsw ax
        test ah, 01h
        jne L_007E44E8
        fld dword ptr [ebx + 014h]
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jp L_007E44E8
        fstp st(2)
        fstp dword ptr [esp + 060h]
        fxch st(1)
        fstp dword ptr [esp + 064h]
        fstp dword ptr [esp + 068h]
    L_007E4410:
        mov ecx, 01h
    L_007E4415:
        fld dword ptr [edi + 010h]
        mov eax, dword ptr [esp + 08ch]
        fld dword ptr [esp + 064h]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi]
        fld dword ptr [esp + 060h]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [edi + 020h]
        fld dword ptr [esp + 068h]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [edi + 030h]
        fstp dword ptr [eax + 04h]
        fld dword ptr [edi + 04h]
        fmul st, st(3)
        fld st(2)
        fmul dword ptr [edi + 014h]
        faddp st(1), st
        fld dword ptr [edi + 024h]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [edi + 034h]
        fstp dword ptr [eax + 08h]
        fld dword ptr [edi + 08h]
        fmulp st(3), st
        fld dword ptr [edi + 018h]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [edi + 028h]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [edi + 038h]
        fstp dword ptr [eax + 0ch]
        fld dword ptr [edi + 010h]
        fld dword ptr [esp + 070h]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edi]
        fld dword ptr [esp + 06ch]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [edi + 020h]
        fld dword ptr [esp + 074h]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [eax + 010h]
        fld dword ptr [edi + 04h]
        fmul st, st(3)
        fld st(2)
        fmul dword ptr [edi + 014h]
        faddp st(1), st
        fld dword ptr [edi + 024h]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [eax + 014h]
        fld dword ptr [edi + 08h]
        fmulp st(3), st
        fld dword ptr [edi + 018h]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [edi + 028h]
        pop edi
        fmulp st(2), st
        pop esi
        faddp st(1), st
        fstp dword ptr [eax + 018h]
        fld dword ptr [esp + 070h]
        fstp dword ptr [eax + 01ch]
        mov eax, ecx
        pop ebp
        pop ebx
        add esp, 06ch
        ret
    L_007E44E8:
        fstp st(0)
    L_007E44EA:
        fld dword ptr [esp + 030h]
        fld st(0)
        fld dword ptr [esp + 02ch]
        fld st(0)
        fld st(2)
        fmulp st(3), st
        fmul st(0), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 014h]
        fxch st(4)
        fmulp st(1), st
        fxch st(1)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fadd st(0), st
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        fld st(0)
        fld dword ptr [ebx + 010h]
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        fld dword ptr [esp + 014h]
        fld qword ptr [mem_0093F7B0]
        fmul st, st(1)
        fmulp st(2), st
        fxch st(3)
        fsubrp st(1), st
        fstp dword ptr [esp + 018h]
        fldz
        fld dword ptr [esp + 018h]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 01h
        jne L_007E4650
        fxch st(2)
        fabs
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        fcomp dword ptr [mem_0099E0B4]
        fnstsw ax
        test ah, 041h
        jne L_007E4678
        fchs
        fstp dword ptr [esp + 01ch]
        call ext_006A7250
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        fsubr dword ptr [esp + 01ch]
        fld dword ptr [esp + 014h]
        fadd st(0), st
        fdivp st(1), st
        fstp dword ptr [esp + 01ch]
        fld dword ptr [esp + 01ch]
        fld st(0)
        fmul dword ptr [esp + 034h]
        fld dword ptr [esp + 028h]
        fld st(0)
        fadd st, st(2)
        fstp dword ptr [esp + 01ch]
        fldz
        fcom st(3)
        fnstsw ax
        test ah, 05h
        jp L_007E4674
        fld dword ptr [esp + 010h]
        fcomp st(4)
        fnstsw ax
        test ah, 041h
        jne L_007E4674
        fld dword ptr [esp + 01ch]
        fld dword ptr [ebx + 014h]
        fcomp st(1)
        fnstsw ax
        test ah, 01h
        jne L_007E4660
        fld dword ptr [ebx + 014h]
        fchs
        fcompp
        fnstsw ax
        test ah, 041h
        jp L_007E4674
        fxch st(3)
        lea esi, [esp + 06ch]
        fst dword ptr [esp + 078h]
        fld st(0)
        fmul dword ptr [esp + 02ch]
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 060h]
        fmul dword ptr [esp + 030h]
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 064h]
        faddp st(1), st
        fstp dword ptr [esp + 068h]
        fld dword ptr [esp + 060h]
        fstp dword ptr [esp + 06ch]
        fld dword ptr [esp + 064h]
        fstp dword ptr [esp + 070h]
        fstp dword ptr [esp + 074h]
        call ext_007E46B0
        fstp st(0)
        jmp L_007E4410
    L_007E463E:
        test ecx, ecx
        jne L_007E4415
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 06ch
        ret
    L_007E4650:
        pop edi
        fstp st(2)
        pop esi
        fstp st(1)
        pop ebp
        fstp st(0)
        xor eax, eax
        pop ebx
        add esp, 06ch
        ret
    L_007E4660:
        fstp st(4)
        pop edi
        fstp st(2)
        pop esi
        fstp st(1)
        pop ebp
        fstp st(0)
        xor eax, eax
        fstp st(0)
        pop ebx
        add esp, 06ch
        ret
    L_007E4674:
        fstp st(3)
        fstp st(1)
    L_007E4678:
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 06ch
        ret
    }
}

extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007CAFC0();
extern "C" void ext_007CB970();
extern "C" void ext_007E4770();
extern "C" void ext_007E47E0();
extern "C" void ext_007E4870();
extern "C" int mem_0094CE80;
extern "C" int mem_0099D148;
extern "C" int mem_0092C180;
extern "C" int mem_0093F7B8;
extern "C" int mem_0093F7B0;
extern "C" int mem_0099E0B4;

// [0x007E8A00]
extern "C" __declspec(naked) void __fastcall fn_007E8A00(void* self) {
    __asm {
        sub esp, 048h
        push esi
        push edi
        mov edi, dword ptr [esp + 054h]
        push edi
        call ext_007C6F70
        push edi
        mov esi, eax
        call ext_007C7000
        mov edi, eax
        push edi
        call ext_007CB970
        fstp dword ptr [esp + 028h]
        push edi
        call ext_007CAFC0
        fstp dword ptr [esp + 020h]
        fld dword ptr [mem_0094CE80]
        add esp, 010h
        fcomp dword ptr [esp + 010h]
        fnstsw ax
        test ah, 041h
        je L_007E8ECA
        mov ecx, dword ptr [esp + 058h]
        lea eax, [esp + 038h]
        push eax
        push ecx
        mov ecx, esi
        call ext_007E47E0
        mov eax, dword ptr [esp + 05Ch]
        lea edx, [esp + 044h]
        push edx
        push eax
        mov ecx, esi
        call ext_007E47E0
        fld dword ptr [esp + 044h]
        fld dword ptr [esp + 038h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 02Ch]
        fld dword ptr [esp + 048h]
        fld dword ptr [esp + 03Ch]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 030h]
        fld dword ptr [esp + 04Ch]
        fld dword ptr [esp + 040h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 034h]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [esp + 08h]
        fldz
        fst dword ptr [esp + 044h]
        fst dword ptr [esp + 048h]
        fst dword ptr [esp + 04Ch]
        fld st(2)
        fld st(4)
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        faddp st(1), st
        fst qword ptr [esp + 020h]
        fld dword ptr [esp + 01Ch]
        fmul st(0), st
        fst qword ptr [esp + 014h]
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fcompp
        fnstsw ax
        fld dword ptr [esp + 030h]
        test ah, 01h
        fld dword ptr [esp + 02Ch]
        jne L_007E8B15
        fld dword ptr [esp + 010h]
        fcomp st(4)
        fnstsw ax
        test ah, 01h
        jne L_007E8B15
        fld dword ptr [esp + 010h]
        fchs
        fcomp st(4)
        fnstsw ax
        test ah, 041h
        jp L_007E8B15
        fxch st(2)
        fstp dword ptr [esp + 08h]
        fld1
        fstp dword ptr [esp + 04Ch]
        jmp L_007E8DF7
    L_007E8B15:
        fld dword ptr [esp + 034h]
        fabs
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 041h
        jne L_007E8C14
        fld dword ptr [esp + 010h]
        fsub st, st(4)
        fdiv dword ptr [esp + 034h]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fcom st(3)
        fnstsw ax
        test ah, 01h
        jne L_007E8C10
        fcom qword ptr [mem_0092C180]
        fnstsw ax
        test ah, 05h
        jp L_007E8C10
        fstp st(4)
        fld st(3)
        fmul st, st(2)
        fadd st, st(5)
        fld st(1)
        fmulp st(5), st
        fld st(6)
        faddp st(5), st
        fld st(4)
        fmulp st(5), st
        fmul st(0), st
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fcomp qword ptr [esp + 014h]
        fnstsw ax
        test ah, 041h
        jp L_007E8B9F
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esp + 08h]
        fld1
        fstp dword ptr [esp + 04Ch]
    L_007E8B9F:
        fld dword ptr [esp + 040h]
        fxch st(3)
    L_007E8BA5:
        fld dword ptr [esp + 010h]
        fchs
        fsubrp st(4), st
        fld dword ptr [esp + 034h]
        fdivp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fcom st(2)
        fnstsw ax
        test ah, 01h
        jne L_007E8C18
        fld dword ptr [esp + 08h]
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jne L_007E8C18
        fld st(0)
        fmul st, st(2)
        fadd st, st(5)
        fld st(4)
        fmulp st(2), st
        fld st(6)
        faddp st(2), st
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fcomp qword ptr [esp + 014h]
        fnstsw ax
        test ah, 041h
        jp L_007E8C1A
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esp + 08h]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 04Ch]
        jmp L_007E8C1A
    L_007E8C10:
        fstp st(0)
        jmp L_007E8BA5
    L_007E8C14:
        fstp st(3)
        jmp L_007E8C1A
    L_007E8C18:
        fstp st(0)
    L_007E8C1A:
        fld st(0)
        fld st(3)
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0Ch]
        fld st(3)
        fmul st, st(1)
        fld st(3)
        fmul st, st(6)
        faddp st(1), st
        fadd st(0), st
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fmul st(0), st
        fld qword ptr [esp + 020h]
        fsub qword ptr [esp + 014h]
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fld dword ptr [esp + 0Ch]
        fmul qword ptr [mem_0093F7B0]
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 01h
        jne L_007E8DD4
        fld dword ptr [esp + 0Ch]
        fabs
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fcomp dword ptr [mem_0099E0B4]
        fnstsw ax
        test ah, 041h
        jne L_007E8DD4
        fstp st(4)
        fstp st(2)
        fstp st(2)
        fstp st(1)
        call ext_006A7250
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 0Ch]
        fadd st(0), st
        fld dword ptr [esp + 014h]
        fsub dword ptr [esp + 01Ch]
        fdiv st, st(1)
        fstp dword ptr [esp + 0Ch]
        fldz
        fld dword ptr [esp + 0Ch]
        fcom st(1)
        fnstsw ax
        test ah, 01h
        jne L_007E8D9D
        fld dword ptr [esp + 08h]
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jne L_007E8D9D
        fld dword ptr [esp + 034h]
        fmul st, st(1)
        fld dword ptr [esp + 040h]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fld dword ptr [esp + 010h]
        fcom st(1)
        fnstsw ax
        test ah, 01h
        jne L_007E8DA9
        fld st(0)
        fchs
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 041h
        jp L_007E8DAF
        fxch st(2)
        fstp dword ptr [esp + 08h]
        fxch st(2)
        fst dword ptr [esp + 04Ch]
        fxch st(2)
    L_007E8D2F:
        fld dword ptr [esp + 01Ch]
        fchs
        fsub dword ptr [esp + 014h]
        fdivrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fcom st(2)
        fnstsw ax
        test ah, 01h
        jne L_007E8DB8
        fld dword ptr [esp + 08h]
        fcomp st(1)
        fnstsw ax
        test ah, 041h
        jne L_007E8DB8
        fld dword ptr [esp + 034h]
        fmul st, st(1)
        fadd st, st(4)
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        fcom st(2)
        fnstsw ax
        test ah, 041h
        jp L_007E8DB6
        fxch st(2)
        fchs
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 041h
        jp L_007E8DBE
        fstp dword ptr [esp + 08h]
        fstp dword ptr [esp + 04Ch]
        fld dword ptr [esp + 038h]
        fld dword ptr [esp + 02Ch]
        fld dword ptr [esp + 030h]
        fld dword ptr [esp + 03Ch]
        jmp L_007E8DDE
    L_007E8D9D:
        fstp st(0)
        fld dword ptr [esp + 010h]
        fld dword ptr [esp + 040h]
        jmp L_007E8D2F
    L_007E8DA9:
        fstp st(3)
        fstp st(0)
        jmp L_007E8D2F
    L_007E8DAF:
        fstp st(2)
        jmp L_007E8D2F
    L_007E8DB6:
        fstp st(1)
    L_007E8DB8:
        fstp st(0)
        fstp st(1)
        jmp L_007E8DC0
    L_007E8DBE:
        fstp st(0)
    L_007E8DC0:
        fstp st(0)
        fld dword ptr [esp + 038h]
        fld dword ptr [esp + 02Ch]
        fld dword ptr [esp + 030h]
        fld dword ptr [esp + 03Ch]
        jmp L_007E8DDE
    L_007E8DD4:
        fstp st(1)
        fld dword ptr [esp + 040h]
        fxch st(4)
        fxch st(3)
    L_007E8DDE:
        fld1
        fcomp dword ptr [esp + 08h]
        fnstsw ax
        test ah, 041h
        jne L_007E8EC0
        fxch st(3)
        fxch st(4)
        fxch st(2)
        fxch st(1)
    L_007E8DF7:
        fld dword ptr [esp + 08h]
        mov edi, dword ptr [esp + 060h]
        fld st(0)
        lea ecx, [edi + 04h]
        fmulp st(3), st
        push ecx
        fxch st(2)
        lea edx, [esp + 024h]
        push edx
        fstp dword ptr [esp + 040h]
        mov ecx, esi
        fmul st, st(1)
        fstp dword ptr [esp + 044h]
        fmul dword ptr [esp + 03Ch]
        fstp dword ptr [esp + 048h]
        fld dword ptr [esp + 040h]
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 028h]
        fadd dword ptr [esp + 044h]
        fstp dword ptr [esp + 02Ch]
        fadd dword ptr [esp + 048h]
        fstp dword ptr [esp + 030h]
        call ext_007CA7C0
        fld dword ptr [esp + 030h]
        fld dword ptr [esp + 02Ch]
        fld dword ptr [esp + 034h]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        call ext_006A7250
        fstp dword ptr [esp + 01Ch]
        fld dword ptr [esp + 01Ch]
        fmul dword ptr [esp + 08h]
        fstp dword ptr [edi + 01Ch]
        fldz
        fcomp dword ptr [esp + 04Ch]
        fnstsw ax
        test ah, 044h
        jp L_007E8EA5
        fld dword ptr [esp + 020h]
        lea ecx, [esp + 044h]
        fstp dword ptr [esp + 044h]
        fld dword ptr [esp + 024h]
        fstp dword ptr [esp + 048h]
        call ext_007E4770
        fstp st(0)
    L_007E8EA5:
        add edi, 010h
        push edi
        lea eax, [esp + 048h]
        push eax
        mov ecx, esi
        call ext_007E4870
        pop edi
        mov eax, 01h
        pop esi
        add esp, 048h
        ret
    L_007E8EC0:
        fstp st(3)
        fstp st(2)
        fstp st(1)
        fstp st(0)
        fstp st(0)
    L_007E8ECA:
        pop edi
        xor eax, eax
        pop esi
        add esp, 048h
        ret
    }
}

// [0x007E6680] sub_007E6680 (1276 bytes)
extern "C" __declspec(naked) void __fastcall fn_007E6680(void* self) {
    __asm {
        sub esp, 40h
        mov ecx, dword ptr [esp+50h]
        push ebp
        mov ebp, dword ptr [esp+50h]
        push esi
        push edi
        mov edi, eax
        mov eax, dword ptr [esp+54h]
        fld dword ptr [eax+edx*4]
        mov eax, dword ptr [ecx+0ch]
        fstp dword ptr [esp+0ch]
        fld dword ptr [eax+edx*4]
        fstp dword ptr [esp+58h]
        fld dword ptr [esp+58h]
        fld st(0)
        fld st(0)
        fabs
        fstp dword ptr [esp+58h]
        fld dword ptr [esp+58h]
        fcomp dword ptr [mem_0099EC8C]
        fnstsw ax
        fldz
        test ah, 41h
        jne L7E66CC
        fld1
        _emit 0xDE
        _emit 0xF2
        jmp L7E66D2
L7E66CC:
        fstp st(1)
        fld st(0)
        fxch st(1)
L7E66D2:
        fxch st(1)
        mov byte ptr [esp+58h], 1
        fstp dword ptr [esp+10h]
        fldz
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 41h
        je L7E66EF
        mov byte ptr [esp+58h], 0
L7E66EF:
        mov ecx, edx
        fxch st(1)
        fst dword ptr [esp+edx*4+1ch]
        mov eax, 1
        shl eax, cl
        mov esi, 1
        and eax, 3
        mov ecx, eax
        shl esi, cl
        mov ecx, dword ptr [esp+54h]
        and esi, 3
        fld dword ptr [edi+esi*4]
        fstp dword ptr [esp+eax*4+1ch]
        fld dword ptr [edi+eax*4]
        fchs
        fstp dword ptr [esp+esi*4+1ch]
        mov esi, 1
        fld dword ptr [esp+1ch]
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+20h]
        fstp dword ptr [esp+2ch]
        fld dword ptr [esp+24h]
        fstp dword ptr [esp+30h]
        fld dword ptr [ecx+ebx*4]
        fld dword ptr [esp+ebx*4+28h]
        fmul st, st(1)
        fstp dword ptr [esp+ebx*4+28h]
        fld dword ptr [ecx+ebp*4]
        mov ecx, eax
        fld dword ptr [esp+ebp*4+28h]
        shl esi, cl
        fmul st, st(1)
        fstp dword ptr [esp+ebp*4+28h]
        and esi, 3
        lea ecx, [esi*4]
        fxch st(2)
        fst dword ptr [esp+edx*4+1ch]
        mov esi, 1
        fld dword ptr [ecx+edi+0ch]
        fstp dword ptr [esp+eax*4+1ch]
        fld dword ptr [edi+eax*4+0ch]
        fchs
        fstp dword ptr [esp+ecx+1ch]
        mov ecx, eax
        fld dword ptr [esp+1ch]
        shl esi, cl
        fstp dword ptr [esp+34h]
        add eax, eax
        fld dword ptr [esp+20h]
        fstp dword ptr [esp+38h]
        fld dword ptr [esp+24h]
        and esi, 3
        fstp dword ptr [esp+3ch]
        lea ecx, [esi*4]
        fld dword ptr [esp+ebx*4+34h]
        add eax, eax
        fmul st, st(2)
        fstp dword ptr [esp+ebx*4+34h]
        fld dword ptr [esp+ebp*4+34h]
        fmul st, st(3)
        fstp dword ptr [esp+ebp*4+34h]
        fst dword ptr [esp+edx*4+1ch]
        fld dword ptr [edi+ecx+18h]
        fstp dword ptr [esp+eax+1ch]
        fld dword ptr [edi+eax+18h]
        fchs
        fstp dword ptr [esp+ecx+1ch]
        mov ecx, dword ptr [esp+5ch]
        fld dword ptr [esp+1ch]
        fstp dword ptr [esp+40h]
        fld dword ptr [esp+20h]
        fstp dword ptr [esp+44h]
        fld dword ptr [esp+24h]
        fstp dword ptr [esp+48h]
        fld dword ptr [esp+ebx*4+40h]
        fmul st, st(2)
        fstp dword ptr [esp+ebx*4+40h]
        fld dword ptr [esp+ebp*4+40h]
        fmul st, st(3)
        fstp dword ptr [esp+ebp*4+40h]
        fstp dword ptr [esp+edx*4+1ch]
        mov eax, dword ptr [ecx+0ch]
        fmul dword ptr [eax+ebx*4]
        mov ecx, dword ptr [esp+60h]
        fstp dword ptr [esp+ebx*4+1ch]
        fmul dword ptr [eax+ebp*4]
        fstp dword ptr [esp+5ch]
        fld dword ptr [esp+5ch]
        fst dword ptr [esp+ebp*4+1ch]
        fld dword ptr [esp+ebx*4+28h]
        fld dword ptr [esp+ebp*4+28h]
        fst qword ptr [esp+14h]
        fld dword ptr [ecx+edx*4]
        fsub st, st(2)
        fsub st, st(1)
        fcomp st(4)
        fnstsw ax
        test ah, 5
        jp L7E684B
        mov eax, 1
        jmp L7E684D
L7E684B:
        xor eax, eax
L7E684D:
        movzx esi, byte ptr [esp+58h]
        fld dword ptr [esp+64h]
        cmp eax, esi
        fld dword ptr [esp+0ch]
        fld dword ptr [esp+10h]
        jne L7E6912
        fstp st(3)
        fld dword ptr [ecx+edx*4+0ch]
        fsub dword ptr [esp+ebx*4+34h]
        fsub dword ptr [esp+ebp*4+34h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E6884
        mov eax, 1
        jmp L7E6886
L7E6884:
        xor eax, eax
L7E6886:
        cmp eax, esi
        jne L7E6900
        fld dword ptr [ecx+edx*4+18h]
        fsub dword ptr [esp+ebx*4+40h]
        fsub dword ptr [esp+ebp*4+40h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E68A6
        mov eax, 1
        jmp L7E68A8
L7E68A6:
        xor eax, eax
L7E68A8:
        cmp eax, esi
        jne L7E6900
        fld st(1)
        fsub dword ptr [esp+ebx*4+1ch]
        _emit 0xDE
        _emit 0xE5
        fld st(2)
        _emit 0xDE
        _emit 0xCD
        fxch st(4)
        fstp dword ptr [esp+5ch]
        fld dword ptr [esp+5ch]
        fld st(0)
        fld st(5)
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L7E6908
        fcomp st(5)
        fnstsw ax
        test ah, 41h
        jp L7E690A
        mov edi, dword ptr [esp+50h]
        mov eax, dword ptr [edi]
        mov esi, dword ptr [esp+54h]
        fstp dword ptr [eax+edx*4]
        fld dword ptr [esi+ebx*4]
        add eax, 0ch
        fstp dword ptr [eax+ebx*4-0ch]
        mov dword ptr [edi], eax
        fld dword ptr [esi+ebp*4]
        fstp dword ptr [eax+ebp*4-0ch]
        fld qword ptr [esp+14h]
        jmp L7E691C
L7E6900:
        fstp st(4)
        fld qword ptr [esp+14h]
        jmp L7E6918
L7E6908:
        fstp st(0)
L7E690A:
        fstp st(0)
        fld qword ptr [esp+14h]
        jmp L7E6918
L7E6912:
        fstp st(5)
        fxch st(4)
        fxch st(2)
L7E6918:
        mov esi, dword ptr [esp+54h]
L7E691C:
        fld dword ptr [ecx+edx*4]
        fsub st, st(4)
        fadd st, st(1)
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E6933
        mov eax, 1
        jmp L7E6935
L7E6933:
        xor eax, eax
L7E6935:
        movzx edi, byte ptr [esp+58h]
        cmp eax, edi
        jne L7E69D6
        fld dword ptr [ecx+edx*4+0ch]
        fsub dword ptr [esp+ebx*4+34h]
        fadd dword ptr [esp+ebp*4+34h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E695E
        mov eax, 1
        jmp L7E6960
L7E695E:
        xor eax, eax
L7E6960:
        cmp eax, edi
        jne L7E69D6
        fld dword ptr [ecx+edx*4+18h]
        fsub dword ptr [esp+ebx*4+40h]
        fadd dword ptr [esp+ebp*4+40h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E6980
        mov eax, 1
        jmp L7E6982
L7E6980:
        xor eax, eax
L7E6982:
        cmp eax, edi
        jne L7E69D6
        fld st(1)
        fsub dword ptr [esp+ebx*4+1ch]
        fadd dword ptr [esp+ebp*4+1ch]
        fmul st, st(3)
        fstp dword ptr [esp+54h]
        fld dword ptr [esp+54h]
        fld st(5)
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L7E69D4
        fcomp st(5)
        fnstsw ax
        test ah, 41h
        jp L7E69D6
        mov edi, dword ptr [esp+50h]
        fld dword ptr [esp+54h]
        mov eax, dword ptr [edi]
        fstp dword ptr [eax+edx*4]
        add eax, 0ch
        fld dword ptr [esi+ebx*4]
        mov dword ptr [edi], eax
        fstp dword ptr [eax+ebx*4-0ch]
        fld dword ptr [esi+ebp*4]
        fchs
        fstp dword ptr [eax+ebp*4-0ch]
        jmp L7E69D6
L7E69D4:
        fstp st(0)
L7E69D6:
        fld dword ptr [ecx+edx*4]
        fadd st, st(4)
        fadd st, st(1)
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E69ED
        mov eax, 1
        jmp L7E69EF
L7E69ED:
        xor eax, eax
L7E69EF:
        movzx edi, byte ptr [esp+58h]
        cmp eax, edi
        jne L7E6A92
        fld dword ptr [ecx+edx*4+0ch]
        fadd dword ptr [esp+ebx*4+34h]
        fadd dword ptr [esp+ebp*4+34h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E6A18
        mov eax, 1
        jmp L7E6A1A
L7E6A18:
        xor eax, eax
L7E6A1A:
        cmp eax, edi
        jne L7E6A92
        fld dword ptr [ecx+edx*4+18h]
        fadd dword ptr [esp+ebx*4+40h]
        fadd dword ptr [esp+ebp*4+40h]
        fcomp st(6)
        fnstsw ax
        test ah, 5
        jp L7E6A3A
        mov eax, 1
        jmp L7E6A3C
L7E6A3A:
        xor eax, eax
L7E6A3C:
        cmp eax, edi
        jne L7E6A92
        fld dword ptr [esp+ebx*4+1ch]
        fadd st, st(2)
        fadd dword ptr [esp+ebp*4+1ch]
        fmul st, st(3)
        fstp dword ptr [esp+54h]
        fld dword ptr [esp+54h]
        fld st(5)
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L7E6A90
        fcomp st(5)
        fnstsw ax
        test ah, 41h
        jp L7E6A92
        mov edi, dword ptr [esp+50h]
        fld dword ptr [esp+54h]
        mov eax, dword ptr [edi]
        fstp dword ptr [eax+edx*4]
        add eax, 0ch
        fld dword ptr [esi+ebx*4]
        mov dword ptr [edi], eax
        fchs
        fstp dword ptr [eax+ebx*4-0ch]
        fld dword ptr [esi+ebp*4]
        fchs
        fstp dword ptr [eax+ebp*4-0ch]
        jmp L7E6A92
L7E6A90:
        fstp st(0)
L7E6A92:
        fld dword ptr [ecx+edx*4]
        _emit 0xDE
        _emit 0xC4
        _emit 0xDE
        _emit 0xEB
        fxch st(2)
        fcomp st(4)
        fnstsw ax
        test ah, 5
        jp L7E6AAB
        mov eax, 1
        jmp L7E6AAD
L7E6AAB:
        xor eax, eax
L7E6AAD:
        movzx edi, byte ptr [esp+58h]
        cmp eax, edi
        jne L7E6B53
        fld dword ptr [ecx+edx*4+0ch]
        fadd dword ptr [esp+ebx*4+34h]
        fsub dword ptr [esp+ebp*4+34h]
        fcomp st(4)
        fnstsw ax
        test ah, 5
        jp L7E6AD6
        mov eax, 1
        jmp L7E6AD8
L7E6AD6:
        xor eax, eax
L7E6AD8:
        cmp eax, edi
        jne L7E6B53
        fld dword ptr [ecx+edx*4+18h]
        fadd dword ptr [esp+ebx*4+40h]
        fsub dword ptr [esp+ebp*4+40h]
        fcomp st(4)
        fnstsw ax
        fstp st(3)
        test ah, 5
        jp L7E6AFA
        mov eax, 1
        jmp L7E6AFC
L7E6AFA:
        xor eax, eax
L7E6AFC:
        cmp eax, edi
        jne L7E6B62
        fadd dword ptr [esp+ebx*4+1ch]
        fsub dword ptr [esp+ebp*4+1ch]
        _emit 0xDE
        _emit 0xCA
        fxch st(1)
        fstp dword ptr [esp+54h]
        fld dword ptr [esp+54h]
        fld st(0)
        fld st(2)
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L7E6B6F
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jp L7E6B73
        mov ecx, dword ptr [esp+50h]
        mov eax, dword ptr [ecx]
        fstp dword ptr [eax+edx*4]
        pop edi
        fld dword ptr [esi+ebx*4]
        add eax, 0ch
        fchs
        mov dword ptr [ecx], eax
        fstp dword ptr [eax+ebx*4-0ch]
        fld dword ptr [esi+ebp*4]
        pop esi
        fstp dword ptr [eax+ebp*4-0ch]
        pop ebp
        add esp, 40h
        ret
L7E6B53:
        fstp st(2)
        pop edi
        fstp st(0)
        pop esi
        fstp st(1)
        pop ebp
        fstp st(0)
        add esp, 40h
        ret
L7E6B62:
        fstp st(1)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebp
        add esp, 40h
        ret
L7E6B6F:
        fstp st(2)
        fstp st(1)
L7E6B73:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        add esp, 40h
        ret
    }
}

// [0x007E6B80] sub_007E6B80 (1145 bytes)
extern "C" void ext_007E6580();
extern "C" void ext_007E6680();
extern "C" int mem_0099EC8C;
extern "C" int mem_00958CC8;

extern "C" __declspec(naked) void __fastcall fn_007E6B80(void* self) {
    __asm {
        fld	dword ptr [mem_0099EC8C]
        sub	esp, 0x30
        fld1
        push	ebx
        fldz
        push	ebp
        mov	ebp, dword ptr [esp + 0x44]
        test	byte ptr [ebp + 0x18], 0x4
        push	esi
        push	edi
        je L07E6C70
        mov	esi, dword ptr [esp + 0x50]
        fld	dword ptr [esi + 0x8]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(4)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6BC7
        fdivr	st, st(2)
        jmp L07E6BCB
L07E6BC7:
        fstp	st(0)
        fld	st(0)
L07E6BCB:
        fld	dword ptr [esi + 0x4]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(5)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6BEF
        fdivr	st, st(3)
        jmp L07E6BF3
L07E6BEF:
        fstp	st(0)
        fld	st(1)
L07E6BF3:
        fld	dword ptr [esi]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(6)
        fnstsw	ax
        fstp	st(5)
        test	ah, 0x41
        jne L07E6C1C
        fstp	st(2)
        fxch	st(2)
        fdivrp	st(3), st
        jmp L07E6C24
L07E6C1C:
        fstp	st(3)
        fstp	st(3)
        fxch	st(2)
        fxch	st(1)
L07E6C24:
        mov	eax, dword ptr [esp + 0x48]
        fxch	st(2)
        mov	edi, dword ptr [ebp]
        fstp	dword ptr [esp + 0x10]
        mov	ebx, dword ptr [esp + 0x44]
        fxch	st(1)
        fstp	dword ptr [esp + 0x14]
        push	ecx
        lea	edx, [esp + 0x14]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x58]
        fmul	qword ptr [mem_00958CC8]
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [esp + 0x50]
        fstp	dword ptr [esp]
        push	eax
        call ext_007E6580
        fld1
        fldz
        add	esp, 0x8
        fld	dword ptr [mem_0099EC8C]
        fxch	st(2)
        fxch	st(1)
L07E6C70:
        test	byte ptr [ebp + 0x18], 0x8
        je L07E6D4F
        mov	ecx, dword ptr [esp + 0x50]
        fld	dword ptr [ecx + 0x14]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(4)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6CA2
        fdivr	st, st(2)
        jmp L07E6CA6
L07E6CA2:
        fstp	st(0)
        fld	st(0)
L07E6CA6:
        fld	dword ptr [ecx + 0x10]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(5)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6CCA
        fdivr	st, st(3)
        jmp L07E6CCE
L07E6CCA:
        fstp	st(0)
        fld	st(1)
L07E6CCE:
        fld	dword ptr [ecx + 0xc]
        lea	esi, [ecx + 0xc]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(6)
        fnstsw	ax
        fstp	st(5)
        test	ah, 0x41
        jne L07E6CFB
        fstp	st(2)
        fxch	st(2)
        fdivrp	st(3), st
        jmp L07E6D03
L07E6CFB:
        fstp	st(3)
        fstp	st(3)
        fxch	st(2)
        fxch	st(1)
L07E6D03:
        mov	edi, dword ptr [ebp + 0x4]
        fxch	st(2)
        mov	ebx, dword ptr [esp + 0x44]
        fstp	dword ptr [esp + 0x10]
        fxch	st(1)
        push	ecx
        mov	ecx, dword ptr [esp + 0x4c]
        fstp	dword ptr [esp + 0x18]
        lea	edx, [esp + 0x14]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x58]
        fmul	qword ptr [mem_00958CC8]
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [esp + 0x50]
        fstp	dword ptr [esp]
        push	ecx
        call ext_007E6580
        fld1
        fldz
        add	esp, 0x8
        fld	dword ptr [mem_0099EC8C]
        fxch	st(2)
        fxch	st(1)
L07E6D4F:
        test	byte ptr [ebp + 0x18], 0x10
        je L07E6E22
        mov	ecx, dword ptr [esp + 0x50]
        fld	dword ptr [ecx + 0x20]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(4)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6D81
        fdivr	st, st(2)
        jmp L07E6D85
L07E6D81:
        fstp	st(0)
        fld	st(0)
L07E6D85:
        fld	dword ptr [ecx + 0x1c]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(5)
        fnstsw	ax
        test	ah, 0x41
        jne L07E6DA9
        fdivr	st, st(3)
        jmp L07E6DAD
L07E6DA9:
        fstp	st(0)
        fld	st(1)
L07E6DAD:
        fld	dword ptr [ecx + 0x18]
        lea	esi, [ecx + 0x18]
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x4c]
        fcomp	st(6)
        fnstsw	ax
        fstp	st(5)
        test	ah, 0x41
        jne L07E6DDA
        fstp	st(2)
        fxch	st(2)
        fdivrp	st(3), st
        jmp L07E6DE2
L07E6DDA:
        fstp	st(3)
        fstp	st(3)
        fxch	st(2)
        fxch	st(1)
L07E6DE2:
        mov	edx, dword ptr [esp + 0x48]
        fxch	st(2)
        mov	edi, dword ptr [ebp + 0x8]
        fstp	dword ptr [esp + 0x10]
        mov	ebx, dword ptr [esp + 0x44]
        fxch	st(1)
        fstp	dword ptr [esp + 0x14]
        push	ecx
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x58]
        fmul	qword ptr [mem_00958CC8]
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [esp + 0x50]
        fstp	dword ptr [esp]
        push	edx
        lea	edx, [esp + 0x18]
        call ext_007E6580
        add	esp, 0x8
        jmp L07E6E28
L07E6E22:
        fstp	st(1)
        fstp	st(1)
        fstp	st(0)
L07E6E28:
        mov	ecx, dword ptr [ebp + 0x4]
        mov	eax, dword ptr [ebp]
        fld	dword ptr [ecx + 0x8]
        fld	dword ptr [eax + 0x4]
        mov	edx, dword ptr [ebp + 0x8]
        fld	dword ptr [ecx + 0x4]
        fld	dword ptr [eax + 0x8]
        fld	st(2)
        fmul	st, st(4)
        fld	st(1)
        fmul	st, st(3)
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [ecx]
        fld	dword ptr [eax]
        fld	st(1)
        fmulp	st(3), st
        fld	st(0)
        fmulp	st(6), st
        fxch	st(2)
        fsubrp	st(5), st
        fxch	st(4)
        fstp	dword ptr [esp + 0x14]
        fmulp	st(1), st
        fxch	st(2)
        fmulp	st(1), st
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [ecx + 0x4]
        fld	dword ptr [edx + 0x8]
        fld	dword ptr [ecx + 0x8]
        fld	dword ptr [edx + 0x4]
        fld	st(2)
        fmul	st, st(4)
        fld	st(1)
        fmul	st, st(3)
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [edx]
        fld	dword ptr [ecx]
        fld	st(1)
        fmulp	st(4), st
        fld	st(0)
        fmulp	st(5), st
        fxch	st(3)
        fsubrp	st(4), st
        fxch	st(3)
        fstp	dword ptr [esp + 0x14]
        fmulp	st(1), st
        fxch	st(1)
        fmulp	st(2), st
        fsubrp	st(1), st
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [eax + 0x8]
        fld	dword ptr [edx + 0x4]
        fld	dword ptr [eax + 0x4]
        fld	dword ptr [edx + 0x8]
        fld	st(2)
        fmul	st, st(4)
        fld	st(1)
        fmul	st, st(3)
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [eax]
        fld	dword ptr [edx]
        fld	st(1)
        fmulp	st(3), st
        fld	st(0)
        fmulp	st(6), st
        mov	ecx, dword ptr [ebp + 0xc]
        fxch	st(2)
        fsubrp	st(5), st
        mov	edi, dword ptr [esp + 0x48]
        fxch	st(4)
        mov	esi, dword ptr [esp + 0x50]
        fstp	dword ptr [esp + 0x14]
        fmulp	st(1), st
        fxch	st(2)
        fmulp	st(1), st
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [ecx + 0x4]
        fmul	dword ptr [eax + 0x4]
        fld	dword ptr [ecx]
        fmul	dword ptr [eax]
        faddp	st(1), st
        fld	dword ptr [ecx + 0x8]
        fmul	dword ptr [eax + 0x8]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x4c]
        fldz
        fcomp	dword ptr [ecx]
        fnstsw	ax
        test	ah, 0x44
        jnp L07E6F82
        fld	dword ptr [esp + 0x4c]
        push	ecx
        mov	ecx, dword ptr [esp + 0x48]
        fstp	dword ptr [esp]
        lea	eax, [esp + 0x20]
        push	eax
        push	ebp
        push	0x2
        push	edi
        push	ecx
        mov	eax, esi
        mov	ebx, 0x1
        xor	edx, edx
        call ext_007E6680
        add	esp, 0x18
L07E6F82:
        fldz
        mov	edx, dword ptr [ebp + 0xc]
        fcomp	dword ptr [edx + 0x4]
        fnstsw	ax
        test	ah, 0x44
        jnp L07E6FBB
        fld	dword ptr [esp + 0x4c]
        push	ecx
        mov	ecx, dword ptr [esp + 0x48]
        fstp	dword ptr [esp]
        lea	eax, [esp + 0x20]
        push	eax
        push	ebp
        push	0x0
        push	edi
        push	ecx
        mov	eax, esi
        mov	ebx, 0x2
        mov	edx, 0x1
        call ext_007E6680
        add	esp, 0x18
L07E6FBB:
        fldz
        mov	edx, dword ptr [ebp + 0xc]
        fcomp	dword ptr [edx + 0x8]
        fnstsw	ax
        test	ah, 0x44
        jnp L07E6FF1
        fld	dword ptr [esp + 0x4c]
        push	ecx
        mov	ecx, dword ptr [esp + 0x48]
        fstp	dword ptr [esp]
        lea	eax, [esp + 0x20]
        push	eax
        push	ebp
        push	0x1
        push	edi
        push	ecx
        mov	eax, esi
        xor	ebx, ebx
        mov	edx, 0x2
        call ext_007E6680
        add	esp, 0x18
L07E6FF1:
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0x30
        ret
    }
}


// [0x007E4B60] sub_007E4B60 (1673 bytes)
extern "C" void ext_007CA310();
extern "C" int mem_0099EC8C;
extern "C" __declspec(naked) void __fastcall fn_007E4B60(void* self) {
    __asm {
            sub esp, 0x38
            mov eax, dword ptr [esp + 0x48]
            mov eax, dword ptr [eax + 0xc]
            fld dword ptr [eax + 0x8]
            push ebx
            fstp dword ptr [esp + 0x1c]
            push ebp
            fldz
            mov ebp, dword ptr [esp + 0x54]
            fld dword ptr [esp + 0x20]
            push edi
            __asm _emit 0xd8 __asm _emit 0xd1 ; fcom st(1)
            fnstsw ax
            test ah, 0x5
            jp L_7E4B8B
            mov bl, 0x1
            jmp L_7E4B8D
    L_7E4B8B:
            xor bl, bl
    L_7E4B8D:
            __asm _emit 0xdd __asm _emit 0xe1 ; fucom st(1)
            fnstsw ax
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
            test ah, 0x44
            fld dword ptr [esp + 0x50]
            fld dword ptr [esp + 0x4c]
            fldz
            jnp L_7E4F2D
            __asm _emit 0xd9 __asm _emit 0xc3 ; fld st(3)
            fabs
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            fcomp dword ptr [mem_0099EC8C]
            fnstsw ax
            test ah, 0x41
            jne L_7E4BC5
            fld1
            __asm _emit 0xde __asm _emit 0xf4 ; fdivrp st(4), st
            jmp L_7E4BCB
    L_7E4BC5:
            __asm _emit 0xdd __asm _emit 0xdb ; fstp st(3)
            __asm _emit 0xd9 __asm _emit 0xc2 ; fld st(2)
            __asm _emit 0xd9 __asm _emit 0xcb ; fxch st(3)
    L_7E4BCB:
            __asm _emit 0xd9 __asm _emit 0xcb ; fxch st(3)
            mov eax, dword ptr [esp + 0x54]
            fstp dword ptr [esp + 0x20]
            mov eax, dword ptr [eax + 0xc]
            fld dword ptr [ecx + 0x4]
            fmul dword ptr [esi]
            fld dword ptr [esi + 0x4]
            fmul dword ptr [ecx]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x2c]
            fld dword ptr [esi]
            fmul dword ptr [ecx + 0x10]
            fld dword ptr [esi + 0x4]
            fmul dword ptr [ecx + 0xc]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x30]
            fld dword ptr [esi]
            fmul dword ptr [ecx + 0x1c]
            fld dword ptr [esi + 0x4]
            fmul dword ptr [ecx + 0x18]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x34]
            fld dword ptr [ecx + 0x4]
            fmul dword ptr [edx]
            fld dword ptr [ecx]
            fmul dword ptr [edx + 0x4]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x38]
            fld dword ptr [edx]
            fmul dword ptr [ecx + 0x10]
            fld dword ptr [ecx + 0xc]
            fmul dword ptr [edx + 0x4]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x3c]
            fld dword ptr [edx]
            fmul dword ptr [ecx + 0x1c]
            fld dword ptr [ecx + 0x18]
            fmul dword ptr [edx + 0x4]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x40]
            fld dword ptr [eax + 0x4]
            fmul dword ptr [esi + 0x4]
            fld dword ptr [esi]
            fmul dword ptr [eax]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [eax + 0x8]
            fmul dword ptr [esi + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x1c]
            fld dword ptr [eax + 0x4]
            fmul dword ptr [edx + 0x4]
            fld dword ptr [edx]
            fmul dword ptr [eax]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [eax + 0x8]
            fmul dword ptr [edx + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x18]
            fld dword ptr [ebp + 0x8]
            fsub dword ptr [esp + 0x2c]
            __asm _emit 0xd8 __asm _emit 0xdb ; fcomp st(3)
            fnstsw ax
            test ah, 0x5
            jp L_7E4CA3
            mov edi, 0x1
            jmp L_7E4CA5
    L_7E4CA3:
            xor edi, edi
    L_7E4CA5:
            fld dword ptr [esp + 0x20]
            movzx ebx, bl
            cmp edi, ebx
            fld dword ptr [esp + 0x1c]
            jne L_7E4D39
            fld dword ptr [ebp + 0x14]
            fsub dword ptr [esp + 0x30]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4CCF
            mov eax, 0x1
            jmp L_7E4CD1
    L_7E4CCF:
            xor eax, eax
    L_7E4CD1:
            cmp eax, ebx
            jne L_7E4D39
            fld dword ptr [ebp + 0x20]
            fsub dword ptr [esp + 0x34]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4CEC
            mov eax, 0x1
            jmp L_7E4CEE
    L_7E4CEC:
            xor eax, eax
    L_7E4CEE:
            cmp eax, ebx
            jne L_7E4D39
            fld dword ptr [esp + 0x5c]
            __asm _emit 0xd8 __asm _emit 0xe1 ; fsub st, st(1)
            __asm _emit 0xd8 __asm _emit 0xca ; fmul st, st(2)
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd9 __asm _emit 0xc4 ; fld st(4)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E4D37
            __asm _emit 0xd8 __asm _emit 0xd4 ; fcom st(4)
            fnstsw ax
            test ah, 0x41
            jp L_7E4D37
            fld dword ptr [esi]
            mov edi, dword ptr [esp + 0x48]
            mov eax, dword ptr [edi]
            __asm _emit 0xd8 __asm _emit 0xcc ; fmul st, st(4)
            add eax, 0xc
            mov dword ptr [edi], eax
            fstp dword ptr [eax - 0xc]
            fld dword ptr [esi + 0x4]
            __asm _emit 0xd8 __asm _emit 0xcc ; fmul st, st(4)
            fstp dword ptr [eax - 0x8]
            fstp dword ptr [eax - 0x4]
            jmp L_7E4D3D
    L_7E4D37:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E4D39:
            mov edi, dword ptr [esp + 0x48]
    L_7E4D3D:
            fld dword ptr [ebp + 0x8]
            fadd dword ptr [esp + 0x2c]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4D54
            mov eax, 0x1
            jmp L_7E4D56
    L_7E4D54:
            xor eax, eax
    L_7E4D56:
            cmp eax, ebx
            jne L_7E4DE5
            fld dword ptr [ebp + 0x14]
            fadd dword ptr [esp + 0x30]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4D75
            mov eax, 0x1
            jmp L_7E4D77
    L_7E4D75:
            xor eax, eax
    L_7E4D77:
            cmp eax, ebx
            jne L_7E4DE5
            fld dword ptr [ebp + 0x20]
            fadd dword ptr [esp + 0x34]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4D92
            mov eax, 0x1
            jmp L_7E4D94
    L_7E4D92:
            xor eax, eax
    L_7E4D94:
            cmp eax, ebx
            jne L_7E4DE5
            fadd dword ptr [esp + 0x5c]
            __asm _emit 0xd8 __asm _emit 0xc9 ; fmul st, st(1)
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd9 __asm _emit 0xc3 ; fld st(3)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E4DE5
            __asm _emit 0xd8 __asm _emit 0xd3 ; fcom st(3)
            fnstsw ax
            test ah, 0x41
            jp L_7E4DE5
            mov eax, dword ptr [edi]
            __asm _emit 0xd9 __asm _emit 0xc2 ; fld st(2)
            fchs
            add eax, 0xc
            fstp dword ptr [esp + 0xc]
            mov dword ptr [edi], eax
            fld dword ptr [esi]
            fld dword ptr [esp + 0xc]
            __asm _emit 0xd9 __asm _emit 0xc0 ; fld st(0)
            __asm _emit 0xde __asm _emit 0xca ; fmulp st(2), st
            __asm _emit 0xd9 __asm _emit 0xc9 ; fxch st(1)
            fstp dword ptr [eax - 0xc]
            fmul dword ptr [esi + 0x4]
            fstp dword ptr [eax - 0x8]
            fstp dword ptr [eax - 0x4]
            jmp L_7E4DE7
    L_7E4DE5:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E4DE7:
            fld dword ptr [ebp + 0x8]
            fsub dword ptr [esp + 0x38]
            __asm _emit 0xd8 __asm _emit 0xdc ; fcomp st(4)
            fnstsw ax
            test ah, 0x5
            jp L_7E4DFE
            mov eax, 0x1
            jmp L_7E4E00
    L_7E4DFE:
            xor eax, eax
    L_7E4E00:
            cmp eax, ebx
            fld dword ptr [esp + 0x18]
            jne L_7E4E85
            fld dword ptr [ebp + 0x14]
            fsub dword ptr [esp + 0x3c]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4E1F
            mov eax, 0x1
            jmp L_7E4E21
    L_7E4E1F:
            xor eax, eax
    L_7E4E21:
            cmp eax, ebx
            jne L_7E4E85
            fld dword ptr [ebp + 0x20]
            fsub dword ptr [esp + 0x40]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4E3C
            mov eax, 0x1
            jmp L_7E4E3E
    L_7E4E3C:
            xor eax, eax
    L_7E4E3E:
            cmp eax, ebx
            jne L_7E4E85
            fld dword ptr [esp + 0x5c]
            __asm _emit 0xd8 __asm _emit 0xe1 ; fsub st, st(1)
            __asm _emit 0xd8 __asm _emit 0xca ; fmul st, st(2)
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd9 __asm _emit 0xc4 ; fld st(4)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E4E83
            __asm _emit 0xd8 __asm _emit 0xd4 ; fcom st(4)
            fnstsw ax
            test ah, 0x41
            jp L_7E4E83
            fld dword ptr [edx]
            mov eax, dword ptr [edi]
            __asm _emit 0xd8 __asm _emit 0xcc ; fmul st, st(4)
            add eax, 0xc
            mov dword ptr [edi], eax
            fstp dword ptr [eax - 0xc]
            __asm _emit 0xd9 __asm _emit 0xc3 ; fld st(3)
            fmul dword ptr [edx + 0x4]
            fstp dword ptr [eax - 0x8]
            fstp dword ptr [eax - 0x4]
            jmp L_7E4E85
    L_7E4E83:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E4E85:
            fld dword ptr [ebp + 0x8]
            fadd dword ptr [esp + 0x38]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4E9C
            mov eax, 0x1
            jmp L_7E4E9E
    L_7E4E9C:
            xor eax, eax
    L_7E4E9E:
            cmp eax, ebx
            jne L_7E4F31
            fld dword ptr [ebp + 0x14]
            fadd dword ptr [esp + 0x3c]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4EBD
            mov eax, 0x1
            jmp L_7E4EBF
    L_7E4EBD:
            xor eax, eax
    L_7E4EBF:
            cmp eax, ebx
            jne L_7E4F31
            fld dword ptr [ebp + 0x20]
            fadd dword ptr [esp + 0x40]
            __asm _emit 0xd8 __asm _emit 0xdd ; fcomp st(5)
            fnstsw ax
            test ah, 0x5
            jp L_7E4EDA
            mov eax, 0x1
            jmp L_7E4EDC
    L_7E4EDA:
            xor eax, eax
    L_7E4EDC:
            cmp eax, ebx
            jne L_7E4F31
            fadd dword ptr [esp + 0x5c]
            __asm _emit 0xde __asm _emit 0xc9 ; fmulp st(1), st
            fstp dword ptr [esp + 0x24]
            fld dword ptr [esp + 0x24]
            __asm _emit 0xd9 __asm _emit 0xc2 ; fld st(2)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E4F33
            __asm _emit 0xd8 __asm _emit 0xd2 ; fcom st(2)
            fnstsw ax
            test ah, 0x41
            jp L_7E4F33
            mov eax, dword ptr [edi]
            __asm _emit 0xd9 __asm _emit 0xc1 ; fld st(1)
            fchs
            add eax, 0xc
            fstp dword ptr [esp + 0xc]
            mov dword ptr [edi], eax
            fld dword ptr [edx]
            fld dword ptr [esp + 0xc]
            __asm _emit 0xd9 __asm _emit 0xc0 ; fld st(0)
            __asm _emit 0xde __asm _emit 0xca ; fmulp st(2), st
            __asm _emit 0xd9 __asm _emit 0xc9 ; fxch st(1)
            fstp dword ptr [eax - 0xc]
            fmul dword ptr [edx + 0x4]
            fstp dword ptr [eax - 0x8]
            fstp dword ptr [eax - 0x4]
            jmp L_7E4F35
    L_7E4F2D:
            __asm _emit 0xdd __asm _emit 0xdb ; fstp st(3)
            jmp L_7E4F35
    L_7E4F31:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E4F33:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E4F35:
            mov edx, dword ptr [esp + 0x54]
            mov edx, dword ptr [edx + 0xc]
            fld dword ptr [edx + 0x4]
            fmul dword ptr [esi + 0x4]
            fld dword ptr [esi]
            fmul dword ptr [edx]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [edx + 0x8]
            fmul dword ptr [esi + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x54]
            fldz
            fld dword ptr [esp + 0x54]
            __asm _emit 0xd8 __asm _emit 0xd1 ; fcom st(1)
            fnstsw ax
            test ah, 0x5
            jp L_7E4F67
            mov bl, 0x1
            jmp L_7E4F69
    L_7E4F67:
            xor bl, bl
    L_7E4F69:
            __asm _emit 0xdd __asm _emit 0xe1 ; fucom st(1)
            fnstsw ax
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
            test ah, 0x44
            jnp L_7E51CF
            __asm _emit 0xd9 __asm _emit 0xc0 ; fld st(0)
            fabs
            fstp dword ptr [esp + 0x54]
            fld dword ptr [esp + 0x54]
            fcomp dword ptr [mem_0099EC8C]
            fnstsw ax
            test ah, 0x41
            jne L_7E4F97
            fld1
            __asm _emit 0xde __asm _emit 0xf1 ; fdivrp st(1), st
            jmp L_7E4F9B
    L_7E4F97:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
            __asm _emit 0xd9 __asm _emit 0xc2 ; fld st(2)
    L_7E4F9B:
            fstp dword ptr [esp + 0x24]
            fld dword ptr [ebp + 0x4]
            fmul dword ptr [esi + 0x4]
            fld dword ptr [esi]
            fmul dword ptr [ebp]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [ebp + 0x8]
            fmul dword ptr [esi + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x54]
            fld dword ptr [ebp + 0x10]
            fmul dword ptr [esi + 0x4]
            fld dword ptr [ebp + 0xc]
            fmul dword ptr [esi]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [ebp + 0x14]
            fmul dword ptr [esi + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x10]
            fld dword ptr [ebp + 0x1c]
            fmul dword ptr [esi + 0x4]
            fld dword ptr [esi]
            fmul dword ptr [ebp + 0x18]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fld dword ptr [ebp + 0x20]
            fmul dword ptr [esi + 0x8]
            __asm _emit 0xde __asm _emit 0xc1 ; faddp st(1), st
            fstp dword ptr [esp + 0x18]
            fld dword ptr [ecx + 0x4]
            fmul dword ptr [esi]
            fld dword ptr [esi + 0x4]
            fmul dword ptr [ecx]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xca ; fmul st, st(2)
            fstp dword ptr [esp + 0xc]
            fld dword ptr [ecx + 0x10]
            fmul dword ptr [esi]
            fld dword ptr [ecx + 0xc]
            fmul dword ptr [esi + 0x4]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xca ; fmul st, st(2)
            fstp dword ptr [esp + 0x14]
            fld dword ptr [ecx + 0x1c]
            fmul dword ptr [esi]
            fld dword ptr [ecx + 0x18]
            fmul dword ptr [esi + 0x4]
            __asm _emit 0xde __asm _emit 0xe9 ; fsubp st(1), st
            __asm _emit 0xd8 __asm _emit 0xca ; fmul st, st(2)
            fstp dword ptr [esp + 0x1c]
            fld dword ptr [edx + 0x8]
            __asm _emit 0xde __asm _emit 0xca ; fmulp st(2), st
            __asm _emit 0xd9 __asm _emit 0xc9 ; fxch st(1)
            fstp dword ptr [esp + 0x20]
            fld dword ptr [esp + 0xc]
            fadd dword ptr [esp + 0x54]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            test ah, 0x5
            jp L_7E5045
            mov eax, 0x1
            jmp L_7E5047
    L_7E5045:
            xor eax, eax
    L_7E5047:
            movzx edi, bl
            cmp eax, edi
            jne L_7E5101
            fld dword ptr [esp + 0x14]
            fadd dword ptr [esp + 0x10]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            test ah, 0x5
            jp L_7E506A
            mov eax, 0x1
            jmp L_7E506C
    L_7E506A:
            xor eax, eax
    L_7E506C:
            cmp eax, edi
            jne L_7E5101
            fld dword ptr [esp + 0x1c]
            fadd dword ptr [esp + 0x18]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            test ah, 0x5
            jp L_7E508C
            mov eax, 0x1
            jmp L_7E508E
    L_7E508C:
            xor eax, eax
    L_7E508E:
            cmp eax, edi
            jne L_7E5101
            fld dword ptr [esp + 0x5c]
            fsub dword ptr [esp + 0x20]
            fmul dword ptr [esp + 0x24]
            fstp dword ptr [esp + 0x28]
            fld dword ptr [esp + 0x28]
            __asm _emit 0xd9 __asm _emit 0xc1 ; fld st(1)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E50FF
            __asm _emit 0xd8 __asm _emit 0xd1 ; fcom st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E50FF
            __asm _emit 0xdd __asm _emit 0xda ; fstp st(2)
            push esi
            push ecx
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
            lea eax, [esp + 0x40]
            fstp dword ptr [esp]
            push eax
            call ext_007CA310
            fld dword ptr [eax]
            mov edx, dword ptr [esp + 0x54]
            mov ecx, dword ptr [edx]
            fstp dword ptr [ecx]
            add esp, 0xc
            fld dword ptr [eax + 0x4]
            add ecx, 0xc
            fstp dword ptr [ecx - 0x8]
            mov dword ptr [edx], ecx
            fld dword ptr [eax + 0x8]
            fstp dword ptr [ecx - 0x4]
            fld dword ptr [ecx - 0x4]
            fadd dword ptr [esp + 0x50]
            fstp dword ptr [ecx - 0x4]
            fldz
            fld dword ptr [esp + 0x4c]
            jmp L_7E5101
    L_7E50FF:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E5101:
            fld dword ptr [esp + 0x54]
            fsub dword ptr [esp + 0xc]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            test ah, 0x5
            jp L_7E5119
            mov eax, 0x1
            jmp L_7E511B
    L_7E5119:
            xor eax, eax
    L_7E511B:
            cmp eax, edi
            jne L_7E51D3
            fld dword ptr [esp + 0x10]
            fsub dword ptr [esp + 0x14]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            test ah, 0x5
            jp L_7E513B
            mov eax, 0x1
            jmp L_7E513D
    L_7E513B:
            xor eax, eax
    L_7E513D:
            cmp eax, edi
            jne L_7E51D3
            fld dword ptr [esp + 0x18]
            fsub dword ptr [esp + 0x1c]
            __asm _emit 0xd8 __asm _emit 0xda ; fcomp st(2)
            fnstsw ax
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
            test ah, 0x5
            jp L_7E515F
            mov eax, 0x1
            jmp L_7E5161
    L_7E515F:
            xor eax, eax
    L_7E5161:
            cmp eax, edi
            jne L_7E51E0
            fld dword ptr [esp + 0x20]
            fadd dword ptr [esp + 0x5c]
            fmul dword ptr [esp + 0x24]
            fstp dword ptr [esp + 0x54]
            fld dword ptr [esp + 0x54]
            __asm _emit 0xd9 __asm _emit 0xc1 ; fld st(1)
            fchs
            __asm _emit 0xd8 __asm _emit 0xd9 ; fcomp st(1)
            fnstsw ax
            test ah, 0x41
            jp L_7E51DE
            __asm _emit 0xd8 __asm _emit 0xd1 ; fcom st(1)
            fnstsw ax
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
            test ah, 0x41
            jp L_7E51E0
            push esi
            push ecx
            lea ecx, [esp + 0x40]
            fstp dword ptr [esp]
            push ecx
            call ext_007CA310
            fld dword ptr [eax]
            mov edx, dword ptr [esp + 0x54]
            mov ecx, dword ptr [edx]
            fstp dword ptr [ecx]
            add esp, 0xc
            fld dword ptr [eax + 0x4]
            pop edi
            fstp dword ptr [ecx + 0x4]
            add ecx, 0xc
            fld dword ptr [eax + 0x8]
            pop ebp
            fstp dword ptr [ecx - 0x4]
            mov dword ptr [edx], ecx
            fld dword ptr [ecx - 0x4]
            pop ebx
            fsub dword ptr [esp + 0x44]
            fstp dword ptr [ecx - 0x4]
            add esp, 0x38
            ret
    L_7E51CF:
            __asm _emit 0xdd __asm _emit 0xda ; fstp st(2)
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
    L_7E51D3:
            pop edi
            __asm _emit 0xdd __asm _emit 0xd9 ; fstp st(1)
            pop ebp
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
            pop ebx
            add esp, 0x38
            ret
    L_7E51DE:
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
    L_7E51E0:
            pop edi
            __asm _emit 0xdd __asm _emit 0xd8 ; fstp st(0)
            pop ebp
            pop ebx
            add esp, 0x38
            ret
    }
}

// [0x007E98F0] sub_007E98F0 (1899 bytes)
extern "C" void ext_007E8F00();
extern "C" void ext_007E9320();
extern "C" void ext_007E9460();
extern "C" __declspec(naked) void __fastcall fn_007E98F0(void* self) {
    __asm {
        sub esp, 104h
        push esi
        mov esi, dword ptr [esp + 110h]
        push edi
        push esi
        lea ecx, [esp + 40h]
        call ext_007E8F00
        fld dword ptr [esp + 130h]
        cmp byte ptr [esp + 13ch], 0
        fld dword ptr [esp + 12ch]
        fld dword ptr [esp + 11ch]
        mov edi, dword ptr [esp + 110h]
        fld dword ptr [esp + 118h]
        je L_9c02
        mov eax, dword ptr [esp + 134h]
        fld dword ptr [eax]
        sub esp, 14h
        fmul st, st(3)
        lea ecx, [esp + 1ch]
        fstp dword ptr [esp + 40h]
        fld dword ptr [eax + 4]
        fmul st, st(3)
        fstp dword ptr [esp + 44h]
        fld dword ptr [eax + 8]
        mov eax, dword ptr [esp + 14ch]
        fmul st, st(3)
        fstp dword ptr [esp + 48h]
        fld dword ptr [eax]
        fmul st, st(3)
        fstp dword ptr [esp + 34h]
        fld dword ptr [eax + 4]
        fmul st, st(3)
        fstp dword ptr [esp + 38h]
        fld dword ptr [eax + 8]
        lea eax, [esp + 40h]
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 3ch]
        fld dword ptr [esi + 20h]
        fmul st, st(3)
        fstp dword ptr [esp + 28h]
        fld dword ptr [esi + 24h]
        fmul st, st(3)
        fstp dword ptr [esp + 2ch]
        fld dword ptr [esi + 28h]
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 30h]
        fld dword ptr [esi + 30h]
        fadd dword ptr [esp + 28h]
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esi + 34h]
        fadd dword ptr [esp + 2ch]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fadd dword ptr [esp + 30h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fxch st(1)
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        push edi
        call ext_007E9320
        fld dword ptr [esi + 30h]
        fsub dword ptr [esp + 2ch]
        add esp, 4
        lea eax, [esp + 40h]
        lea ecx, [esp + 1ch]
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esi + 34h]
        fsub dword ptr [esp + 2ch]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fsub dword ptr [esp + 30h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 130h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 12ch]
        fstp dword ptr [esp]
        push edi
        call ext_007E9320
        fld dword ptr [esp + 44h]
        fadd dword ptr [esi + 30h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 34h]
        add esp, 4
        fadd dword ptr [esp + 44h]
        lea eax, [esp + 28h]
        lea ecx, [esp + 1ch]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fadd dword ptr [esp + 48h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 130h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 12ch]
        fstp dword ptr [esp]
        push edi
        call ext_007E9460
        fld dword ptr [esi + 30h]
        fsub dword ptr [esp + 44h]
        add esp, 4
        lea eax, [esp + 28h]
        lea ecx, [esp + 1ch]
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esi + 34h]
        fsub dword ptr [esp + 44h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fsub dword ptr [esp + 48h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 130h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 12ch]
        fstp dword ptr [esp]
        push edi
        call ext_007E9460
        fld dword ptr [esi + 30h]
        fadd dword ptr [esp + 38h]
        add esp, 4
        lea eax, [esp + 28h]
        lea ecx, [esp + 1ch]
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esi + 34h]
        fadd dword ptr [esp + 38h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fadd dword ptr [esp + 3ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 130h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 12ch]
        fstp dword ptr [esp]
        push edi
        call ext_007E9460
        fld dword ptr [esi + 30h]
        fsub dword ptr [esp + 38h]
        add esp, 4
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esi + 34h]
        fsub dword ptr [esp + 38h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esi + 38h]
        fsub dword ptr [esp + 3ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 154h]
        fstp dword ptr [esp + 10h]
        fld1
        lea eax, [esp + 28h]
        fstp dword ptr [esp + 0ch]
        lea ecx, [esp + 1ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 130h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 12ch]
        fstp dword ptr [esp]
        push edi
        call ext_007E9460
        fld dword ptr [esp + 130h]
        fld dword ptr [esp + 134h]
        add esp, 18h
        fld dword ptr [esp + 12ch]
        fld dword ptr [esp + 130h]
        fxch st(3)
        fxch st(1)
        fxch st(2)
        fxch st(1)
L_9c02:
        cmp byte ptr [esp + 128h], 0
        je L_a04a
        lea eax, [esp + 7ch]
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 120h]
        fld dword ptr [eax + 4]
        push ebx
        fmul dword ptr [esp + 50h]
        fld dword ptr [esp + 40h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fld dword ptr [esp + 60h]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [esp + 24h]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 54h]
        fld dword ptr [esp + 44h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esp + 64h]
        faddp st(1), st
        fstp dword ptr [esp + 28h]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 58h]
        fld dword ptr [esp + 48h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        mov eax, dword ptr [esp + 128h]
        fmul dword ptr [esp + 68h]
        faddp st(1), st
        fstp dword ptr [esp + 2ch]
        fld dword ptr [esp + 24h]
        fmul st, st(2)
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 28h]
        fmul st, st(2)
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 2ch]
        fmul st, st(2)
        fstp dword ptr [esp + 2ch]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 50h]
        fld dword ptr [esp + 40h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld st(1)
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fstp dword ptr [esp + 18h]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 54h]
        fld dword ptr [esp + 44h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [esp + 64h]
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fstp dword ptr [esp + 1ch]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 58h]
        fld dword ptr [esp + 48h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [esp + 68h]
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 18h]
        fmul st, st(2)
        fstp dword ptr [esp + 18h]
        fld dword ptr [esp + 1ch]
        fmul st, st(2)
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 20h]
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 20h]
        fmul st, st(1)
        sub esp, 14h
        lea ecx, [esp + 50h]
        lea eax, [esp + 38h]
        fstp dword ptr [esp + 44h]
        fld dword ptr [esp + 78h]
        fmul st, st(1)
        fstp dword ptr [esp + 48h]
        fmul dword ptr [esp + 7ch]
        fstp dword ptr [esp + 4ch]
        fld dword ptr [esp + 84h]
        fadd dword ptr [esp + 44h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 88h]
        fadd dword ptr [esp + 48h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fadd dword ptr [esp + 4ch]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fxch st(1)
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 24h]
        call ext_007E9320
        fld dword ptr [esp + 88h]
        fsub dword ptr [esp + 48h]
        add esp, 4
        lea edx, [esp + 50h]
        lea eax, [esp + 38h]
        fstp dword ptr [esp + 20h]
        lea ecx, [esp + 20h]
        fld dword ptr [esp + 88h]
        fsub dword ptr [esp + 48h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fsub dword ptr [esp + 4ch]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 148h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 144h]
        fstp dword ptr [esp]
        push edx
        call ext_007E9320
        fld dword ptr [esp + 88h]
        fadd dword ptr [esp + 3ch]
        add esp, 4
        lea eax, [esp + 50h]
        lea ecx, [esp + 20h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 88h]
        fadd dword ptr [esp + 3ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fadd dword ptr [esp + 40h]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 148h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 144h]
        fstp dword ptr [esp]
        push eax
        lea eax, [esp + 48h]
        call ext_007E9460
        fld dword ptr [esp + 88h]
        add esp, 4
        fsub dword ptr [esp + 38h]
        lea ecx, [esp + 50h]
        lea eax, [esp + 44h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 88h]
        fsub dword ptr [esp + 3ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fsub dword ptr [esp + 40h]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 148h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 144h]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 24h]
        call ext_007E9460
        fld dword ptr [esp + 88h]
        fadd dword ptr [esp + 30h]
        add esp, 4
        lea edx, [esp + 50h]
        lea eax, [esp + 44h]
        fstp dword ptr [esp + 20h]
        lea ecx, [esp + 20h]
        fld dword ptr [esp + 88h]
        fadd dword ptr [esp + 30h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fadd dword ptr [esp + 34h]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 148h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 144h]
        fstp dword ptr [esp]
        push edx
        call ext_007E9460
        fld dword ptr [esp + 88h]
        fsub dword ptr [esp + 30h]
        add esp, 4
        lea eax, [esp + 50h]
        lea ecx, [esp + 20h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 88h]
        fsub dword ptr [esp + 30h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 8ch]
        fsub dword ptr [esp + 34h]
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 158h]
        fstp dword ptr [esp + 10h]
        fld1
        fstp dword ptr [esp + 0ch]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 148h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 144h]
        fstp dword ptr [esp]
        push eax
        lea eax, [esp + 48h]
        call ext_007E9460
        mov ebx, dword ptr [esp + 54h]
        lea edx, [esp + 98h]
        mov ecx, edx
        add esp, 18h
        cmp ecx, ebx
        je L_a040
        push ebp
        mov edi, edi
L_9fe0:
        mov ecx, dword ptr [edi]
        mov eax, edx
        fld dword ptr [eax]
        lea ebp, [ecx + 0ch]
        mov dword ptr [edi], ebp
        fmul dword ptr [esi]
        fld dword ptr [eax + 4]
        add edx, 0ch
        cmp edx, ebx
        fmul dword ptr [esi + 10h]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esi + 20h]
        faddp st(1), st
        fadd dword ptr [esi + 30h]
        fstp dword ptr [ecx]
        fld dword ptr [eax]
        fmul dword ptr [esi + 4]
        fld dword ptr [eax + 4]
        fmul dword ptr [esi + 14h]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esi + 24h]
        faddp st(1), st
        fadd dword ptr [esi + 34h]
        fstp dword ptr [ecx + 4]
        fld dword ptr [eax]
        fmul dword ptr [esi + 8]
        fld dword ptr [esi + 18h]
        fmul dword ptr [eax + 4]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esi + 28h]
        faddp st(1), st
        fadd dword ptr [esi + 38h]
        fstp dword ptr [ecx + 8]
        jne L_9fe0
        pop ebp
L_a040:
        pop ebx
        pop edi
        pop esi
        add esp, 104h
        ret
L_a04a:
        fstp st(0)
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        fstp st(0)
        add esp, 104h
        ret
    }
}

// [0x007E7000] sub_007E7000 (2586 bytes)
extern "C" void ext_007E6300();
extern "C" void ext_007E6B80();
extern "C" int mem_0093F7B8;
extern "C" int mem_0099ECB0;
extern "C" int mem_009453D8;
extern "C" int mem_00993828;
extern "C" int mem_0099ECA8;
extern "C" int mem_009802F0;
extern "C" int mem_0099D158;
extern "C" __declspec(naked) void __fastcall fn_007E7000(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        fldz
        sub esp, 0C8h
        fld dword ptr [ebp + 1Ch]
        push ebx
        fcom st(1)
        push esi
        mov esi, dword ptr [ebp + 0Ch]
        fnstsw ax
        test ah, 5
        jp L7023
        fstp st(0)
        jmp L7025
L7023:  fstp st(1)
L7025:  fstp dword ptr [esp + 30h]
        mov edx, dword ptr [ebp + 24h]
        fld dword ptr [esp + 30h]
        mov ecx, dword ptr [edx + 0Ch]
        fst qword ptr [esp + 88h]
        mov ebx, dword ptr [ebp + 20h]
        fmul st(0), st
        mov eax, dword ptr [edx]
        fstp dword ptr [esp + 80h]
        fld1
        fst dword ptr [esp + 78h]
        fld dword ptr [ecx]
        fabs
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp + 48h]
        fld dword ptr [ecx + 4]
        fabs
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp + 4Ch]
        fld dword ptr [ecx + 8]
        fabs
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp + 50h]
        fld dword ptr [esp + 4Ch]
        fld dword ptr [esp + 48h]
        fld dword ptr [esp + 50h]
        fld dword ptr [ebx + 4]
        fmul st, st(3)
        fld dword ptr [ebx]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [ebx + 8]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [eax + 4]
        fmul dword ptr [ecx + 4]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [ecx + 8]
        faddp st(1), st
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [esp + 2Ch]
        fld st(0)
        fabs
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 10h]
        fld dword ptr [esp + 14h]
        fld st(0)
        fsub st, st(2)
        fstp dword ptr [esp + 28h]
        fchs
        fstp dword ptr [esp + 30h]
        fldz
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 5
        jp L70FD
        fld dword ptr mem_0093F7B8
        fstp dword ptr [esp + 20h]
        jmp L7105
L70FD:  fxch st(5)
        fst dword ptr [esp + 20h]
        fxch st(5)
L7105:  fld dword ptr [ebp + 1Ch]
        mov byte ptr [esp + 0Fh], 3
        fst qword ptr [esp + 90h]
        fld dword ptr [esp + 28h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jne L7137
        fstp st(1)
        fstp st(3)
        fstp st(0)
        fstp st(3)
        fstp st(1)
        fstp st(1)
        fstp st(0)
L712F:  xor al, al
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L7137:  test byte ptr [edx + 18h], 2
        jne L7164
        fxch st(2)
        fcomp dword ptr [esp + 20h]
        fnstsw ax
        test ah, 41h
        jne L716A
        fxch st(5)
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 28h]
        fchs
        fxch st(5)
        fadd st(0), st
        fsubp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 28h]
        jmp L716E
L7164:  fstp st(1)
        fstp st(1)
        jmp L716C
L716A:  fstp st(0)
L716C:  fstp st(4)
L716E:  fld dword ptr [esp + 28h]
        mov dword ptr [esp + 1Ch], 1
        fmul qword ptr mem_0099ECB0
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 20h]
        fld dword ptr [ecx]
        fmul st, st(1)
        fstp dword ptr [esp + 48h]
        fld dword ptr [ecx + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 4Ch]
        fmul dword ptr [ecx + 8]
        fstp dword ptr [esp + 50h]
        fld dword ptr [esp + 48h]
        fst dword ptr [esi]
        fld dword ptr [esp + 4Ch]
        fst dword ptr [esi + 4]
        fld dword ptr [esp + 50h]
        fst dword ptr [esi + 8]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 4]
        fmulp st(2), st
        fld dword ptr [eax]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [eax + 8]
        mov eax, dword ptr [ebp + 10h]
        faddp st(1), st
        fstp dword ptr [eax]
        fld qword ptr mem_009453D8
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 41h
        je L71E6
        mov dword ptr [esp + 1Ch], 0
L71E6:  fxch st(2)
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L71F8
        mov ecx, 1
        jmp L71FA
L71F8:  xor ecx, ecx
L71FA:  fcompp
        fnstsw ax
        test ah, 41h
        jne L720A
        mov eax, 1
        jmp L720C
L720A:  xor eax, eax
L720C:  add eax, ecx
        add eax, dword ptr [esp + 1Ch]
        mov ecx, dword ptr [ebp + 18h]
        or eax, 200h
        mov word ptr [ecx], ax
        fld dword ptr [edi + 4]
        fld dword ptr [edi]
        mov eax, dword ptr [edx + 0Ch]
        fld dword ptr [edi + 8]
        mov dword ptr [esp + 84h], eax
        fld st(1)
        sub eax, ebx
        fmulp st(2), st
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esp + 34h], eax
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 48h]
        fld dword ptr [edi + 10h]
        fld dword ptr [edi + 0Ch]
        fld dword ptr [edi + 14h]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 4Ch]
        fld dword ptr [edi + 1Ch]
        fld dword ptr [edi + 18h]
        fld dword ptr [edi + 20h]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 50h]
        fld1
        fsubrp st(1), st
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp qword ptr [esp + 68h]
        jmp L72A4
        _emit 8Dh
        _emit 49h
        _emit 00h
L72A0:  mov eax, dword ptr [esp + 34h]
L72A4:  fld dword ptr [eax + ebx]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fcomp qword ptr [esp + 68h]
        fnstsw ax
        test ah, 41h
        je L73D6
        lea eax, [esp + 70h]
        push eax
        mov eax, dword ptr [esp + 1Ch]
        lea ecx, [esp + 58h]
        push ecx
        push eax
        lea ecx, [esp + 54h]
        push ecx
        push edi
        push edx
        call ext_007E6300
        fld dword ptr [ebx]
        fchs
        add esp, 18h
        fsub dword ptr [esp + 70h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 54h]
        fsub dword ptr [ebx]
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 8]
        fld st(0)
        fld dword ptr [esp + 1Ch]
        fld st(0)
        fcom st(2)
        fnstsw ax
        test ah, 41h
        jne L730D
        fstp st(3)
        jmp L7311
L730D:  fstp st(1)
        fxch st(2)
L7311:  mov edx, dword ptr [ebp + 24h]
        fstp dword ptr [esp + 1Ch]
        test byte ptr [edx + 18h], 2
        fld dword ptr [esp + 1Ch]
        jne L7376
        mov eax, dword ptr [esp + 34h]
        fld dword ptr [eax + ebx]
        fstp dword ptr [esp + 8]
        fldz
        fld dword ptr [esp + 8]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L7349
        fxch st(3)
        fcom st(4)
        fnstsw ax
        test ah, 41h
        je L736E
        fxch st(3)
L7349:  fcompp
        fnstsw ax
        test ah, 5
        jp L7376
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 5
        jp L7374
        fxch st(1)
L735F:  fld dword ptr [esp + 14h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        je L73D0
        jmp L7376
L736E:  fstp st(3)
        fstp st(0)
        jmp L735F
L7374:  fxch st(1)
L7376:  fld st(0)
        fld dword ptr [esp + 28h]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L73CE
        fxch st(1)
        fstp dword ptr [esp + 28h]
        fld dword ptr [ebx]
        fchs
        fsub st, st(1)
        fstp dword ptr [esp + 30h]
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jne L73A6
        fld1
        jmp L73AC
L73A6:  fld dword ptr mem_0093F7B8
L73AC:  mov al, byte ptr [esp + 18h]
        fstp dword ptr [esp + 20h]
        or al, 0Ch
        fcomp qword ptr [esp + 90h]
        mov byte ptr [esp + 0Fh], al
        fnstsw ax
        test ah, 41h
        je L712F
        jmp L73D6
L73CE:  fstp st(0)
L73D0:  fstp st(1)
        fstp st(1)
        fstp st(0)
L73D6:  mov eax, dword ptr [esp + 18h]
        add eax, 1
        add ebx, 4
        cmp eax, 3
        mov dword ptr [esp + 18h], eax
        jl L72A0
        fld dword ptr [edi]
        mov ecx, dword ptr [edx + 18h]
        fabs
        mov ebx, dword ptr [ebp + 24h]
        fstp dword ptr [esp + 8]
        xor edx, edx
        fld dword ptr [esp + 8]
        lea eax, [esp + 9Ch]
        fstp dword ptr [esp + 38h]
        mov dword ptr [esp + 18h], 0
        fld dword ptr [edi + 4]
        mov dword ptr [esp + 54h], edx
        fabs
        mov dword ptr [esp + 1Ch], edi
        fstp dword ptr [esp + 8]
        mov dword ptr [esp + 34h], eax
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 3Ch]
        fld dword ptr [edi + 8]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 38h]
        fstp dword ptr [esp + 9Ch]
        fld dword ptr [esp + 3Ch]
        fstp dword ptr [esp + 0A0h]
        fld dword ptr [esp + 40h]
        fstp dword ptr [esp + 0A4h]
        fld dword ptr [edi + 0Ch]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 38h]
        fld dword ptr [edi + 10h]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 3Ch]
        fld dword ptr [edi + 14h]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 38h]
        fstp dword ptr [esp + 0A8h]
        fld dword ptr [esp + 3Ch]
        fstp dword ptr [esp + 0ACh]
        fld dword ptr [esp + 40h]
        fstp dword ptr [esp + 0B0h]
        fld dword ptr [edi + 18h]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 38h]
        fld dword ptr [edi + 1Ch]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 3Ch]
        fld dword ptr [edi + 20h]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        mov dword ptr [esp + 8], ecx
        fstp dword ptr [esp + 40h]
        lea ecx, [esp + 48h]
        fld dword ptr [esp + 38h]
        sub ebx, ecx
        fstp dword ptr [esp + 0B4h]
        mov dword ptr [esp + 68h], ebx
        fld dword ptr [esp + 3Ch]
        fstp dword ptr [esp + 0B8h]
        fld dword ptr [esp + 40h]
        fstp dword ptr [esp + 0BCh]
L7519:  mov ecx, dword ptr [esp + 18h]
        add ecx, 2
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [esp + 8]
        _emit 85h
        _emit 0C1h
        je L784C
        mov ecx, dword ptr [esp + 18h]
        mov eax, 1
        shl eax, cl
        and eax, 3
        lea eax, [eax + 2*eax]
        mov dword ptr [esp + 70h], eax
        mov eax, dword ptr [esp + 18h]
        lea eax, [ebx + 4*eax]
        mov eax, dword ptr [esp + eax + 48h]
        mov dword ptr [esp + 7Ch], eax
        mov eax, dword ptr [esp + 18h]
        fld dword ptr [esp + 4*eax + 48h]
        mov eax, dword ptr [esp + 34h]
        fst qword ptr [esp + 0C8h]
        xor ecx, ecx
        fld dword ptr [esp + 80h]
        mov dword ptr [esp + 74h], ecx
        fmul st, st(1)
        fstp dword ptr [esp + 64h]
        fld dword ptr [esp + 64h]
        mov dword ptr [esp + 64h], eax
        fstp qword ptr [esp + 0C0h]
        jmp L7597
        mov edi, edi
L7590:  fld qword ptr [esp + 0C8h]
L7597:  mov ebx, dword ptr [esp + 70h]
        mov esi, 1
        shl esi, cl
        mov eax, 1
        and esi, 3
        mov ecx, esi
        shl eax, cl
        add ebx, esi
        and eax, 3
        lea ecx, [edx + eax]
        add ecx, ecx
        add edx, esi
        add ecx, ecx
        fld dword ptr [ecx + edi]
        add edx, edx
        add edx, edx
        fld dword ptr [edx + edi]
        fld dword ptr [edi + 4*ebx]
        mov ebx, dword ptr [esp + 70h]
        fmul st, st(2)
        add ebx, eax
        fld dword ptr [edi + 4*ebx]
        mov ebx, dword ptr [ebp + 20h]
        fmul st, st(2)
        fsubp st(1), st
        fmul qword ptr mem_00993828
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 10h]
        fld st(0)
        fabs
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 10h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 10h]
        fst qword ptr [esp + 38h]
        fld dword ptr [ebx + 4*eax]
        fmul dword ptr [esp + edx + 9Ch]
        fld dword ptr [ebx + 4*esi]
        fmul dword ptr [esp + ecx + 9Ch]
        mov ecx, dword ptr [esp + 7Ch]
        faddp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [ecx + 4*esi]
        fmulp st(3), st
        fld dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 64h]
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [ecx]
        fmul st(0), st
        fsubp st(1), st
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 24h]
        fld qword ptr [esp + 0C0h]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L7826
        call ext_006A7250
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 24h]
        fld st(0)
        fabs
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 24h]
        fcomp dword ptr mem_0099EC8C
        fnstsw ax
        test ah, 41h
        jne L768F
        fld1
        fdivrp st(1), st
        jmp L7693
L768F:  fstp st(0)
        fldz
L7693:  test byte ptr [esp + 8], 2
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 2Ch]
        fld st(0)
        fld dword ptr [esp + 24h]
        fld st(1)
        fabs
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [esp + 2Ch]
        fmul st, st(1)
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [esp + 2Ch]
        fld dword ptr [esp + 10h]
        fmul st, st(2)
        fsubr st, st(1)
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 10h]
        jne L7797
        fldz
        mov edx, dword ptr [esp + 1Ch]
        mov ecx, esi
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [esp + 74h]
        fstp dword ptr [esp + 4*ecx + 58h]
        and eax, 3
        fld dword ptr [edx + 4*eax]
        fstp dword ptr [esp + 4*esi + 58h]
        fld dword ptr [edx + 4*esi]
        fchs
        fstp dword ptr [esp + 4*eax + 58h]
        mov eax, dword ptr [esp + 84h]
        fld dword ptr [eax + 4]
        fmul dword ptr [esp + 5Ch]
        fld dword ptr [esp + 58h]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esp + 60h]
        faddp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 10h]
        fmul st, st(3)
        fstp dword ptr [esp + 10h]
        fldz
        fcom st(5)
        fnstsw ax
        fld dword ptr [esp + 10h]
        test ah, 41h
        jne L7749
        fcom qword ptr mem_0099ECA8
        fnstsw ax
        test ah, 5
        jnp L7818
L7749:  fxch st(6)
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L7769
        fxch st(6)
        fcom qword ptr mem_009802F0
        fnstsw ax
        test ah, 41h
        je L7818
        fxch st(6)
L7769:  fxch st(6)
        fmulp st(5), st
        fxch st(4)
        fcomp qword ptr [esp + 88h]
        fnstsw ax
        test ah, 41h
        jne L77A1
        fld dword ptr [esp + 14h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jne L77A1
        fstp st(1)
        fstp st(1)
        fstp st(2)
        fstp st(1)
        jmp L782A
L7797:  mov ecx, dword ptr [esp + 74h]
        fstp st(3)
        fldz
        fxch st(3)
L77A1:  fld st(0)
        fld dword ptr [esp + 28h]
        fsubr st, st(1)
        fcomp qword ptr [esp + 88h]
        fnstsw ax
        test ah, 41h
        jne L780C
        fxch st(1)
        fstp dword ptr [esp + 28h]
        fxch st(2)
        fmul qword ptr [esp + 38h]
        fsubrp st(1), st
        fstp dword ptr [esp + 30h]
        fxch st(2)
        fcompp
        fnstsw ax
        test ah, 41h
        jne L77DC
        fld dword ptr mem_0093F7B8
        jmp L77DE
L77DC:  fld1
L77DE:  mov al, byte ptr [esp + 18h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 24h]
        add al, al
        fstp dword ptr [esp + 78h]
        add al, al
        or al, cl
        fcomp qword ptr [esp + 90h]
        mov byte ptr [esp + 0Fh], al
        fnstsw ax
        test ah, 41h
        je L712F
        jmp L782C
L780C:  fstp st(2)
        fstp st(2)
        fstp st(3)
        fstp st(2)
        fstp st(1)
        jmp L782A
L7818:  fstp st(3)
        fstp st(3)
        fstp st(4)
        fstp st(2)
        fstp st(1)
        fstp st(1)
        jmp L782A
L7826:  mov ecx, dword ptr [esp + 74h]
L782A:  fstp st(0)
L782C:  add dword ptr [esp + 64h], 4
        mov edx, dword ptr [esp + 54h]
        add ecx, 1
        cmp ecx, 3
        mov dword ptr [esp + 74h], ecx
        jl L7590
        mov esi, dword ptr [ebp + 0Ch]
        mov ebx, dword ptr [esp + 68h]
L784C:  add dword ptr [esp + 18h], 1
        mov eax, 0Ch
        add dword ptr [esp + 34h], eax
        add dword ptr [esp + 1Ch], eax
        add edx, 3
        cmp edx, 9
        mov dword ptr [esp + 54h], edx
        jl L7519
        mov cl, byte ptr [esp + 0Fh]
        fld dword ptr [esp + 28h]
        mov edx, dword ptr [ebp + 8]
        mov al, cl
        fst dword ptr [edx]
        and al, 0Ch
        cmp al, 0Ch
        jne L78F8
        fldz
        mov edx, dword ptr [ebp + 20h]
        fst dword ptr [esi]
        mov al, cl
        fst dword ptr [esi + 4]
        and al, 3
        fstp dword ptr [esi + 8]
        movsx eax, al
        fld dword ptr [esp + 20h]
        add eax, eax
        add eax, eax
        fstp dword ptr [eax + esi]
        fld dword ptr [eax + edx]
        mov edx, dword ptr [ebp + 10h]
        fchs
        fsub st, st(1)
        fstp dword ptr [edx]
        mov edx, dword ptr [ebp + 24h]
        mov edx, dword ptr [edx + 0Ch]
        fld dword ptr [eax + edx]
        fabs
        fstp dword ptr [esp + 68h]
        fld dword ptr [esp + 68h]
        fcomp qword ptr mem_0099D158
        fnstsw ax
        test ah, 41h
        jne L78E4
        mov eax, 2
        xor edx, edx
        mov dh, al
        or edx, eax
        mov eax, dword ptr [ebp + 18h]
        mov word ptr [eax], dx
        jmp L79DF
L78E4:  xor eax, eax
        xor edx, edx
        mov dh, al
        mov eax, dword ptr [ebp + 18h]
        or edx, 2
        mov word ptr [eax], dx
        jmp L79DF
L78F8:  cmp cl, 3
        je L79E4
        fldz
        fcom dword ptr [esp + 20h]
        fnstsw ax
        test ah, 5
        jp L7958
        movzx eax, cl
        mov ebx, eax
        shr eax, 2
        and eax, 3
        lea ecx, [eax + 2*eax]
        lea edx, [edi + 4*ecx]
        and ebx, 3
        mov ecx, ebx
        mov eax, 1
        shl eax, cl
        fstp dword ptr [esp + 4*ebx + 58h]
        mov dword ptr [esp + 68h], edx
        mov edx, 1
        and eax, 3
        mov ecx, eax
        shl edx, cl
        mov ecx, dword ptr [esp + 68h]
        and edx, 3
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esp + 4*eax + 58h]
        fld dword ptr [ecx + 4*eax]
        fchs
        fstp dword ptr [esp + 4*edx + 58h]
        jmp L799E
L7958:  movzx ecx, cl
        mov eax, ecx
        shr eax, 2
        and eax, 3
        lea eax, [eax + 2*eax]
        lea ebx, [edi + 4*eax]
        and ecx, 3
        mov eax, 1
        shl eax, cl
        mov dword ptr [esp + 68h], ecx
        mov edx, 1
        and eax, 3
        mov ecx, eax
        shl edx, cl
        mov ecx, dword ptr [esp + 68h]
        fstp dword ptr [esp + 4*ecx + 58h]
        and edx, 3
        fld dword ptr [ebx + 4*edx]
        fchs
        fstp dword ptr [esp + 4*eax + 58h]
        fld dword ptr [ebx + 4*eax]
        fstp dword ptr [esp + 4*edx + 58h]
L799E:  fld dword ptr [esp + 58h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 18h]
        fstp dword ptr [esi]
        fld dword ptr [esp + 5Ch]
        mov cl, byte ptr [esp + 0Fh]
        fstp dword ptr [esi + 4]
        fld dword ptr [esp + 60h]
        fstp dword ptr [esi + 8]
        fld dword ptr [esp + 30h]
        fstp dword ptr [edx]
        mov word ptr [eax], 101h
        fld dword ptr [esp + 78h]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 4]
        fmul st, st(1)
        fstp dword ptr [esi + 4]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
L79DF:  cmp cl, 3
        jne L79ED
L79E4:  mov eax, dword ptr [ebp + 10h]
        fsubr dword ptr [eax]
        fstp dword ptr [eax]
        jmp L79EF
L79ED:  fstp st(0)
L79EF:  fld dword ptr [ebp + 28h]
        mov edx, dword ptr [ebp + 20h]
        mov esi, dword ptr [ebp + 14h]
        mov ebx, dword ptr [esi]
        push ecx
        mov ecx, dword ptr [ebp + 24h]
        fstp dword ptr [esp]
        push edi
        push ecx
        push edx
        push esi
        call ext_007E6B80
        add esp, 14h
        xor eax, eax
        cmp dword ptr [esi], ebx
        pop esi
        setne al
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
