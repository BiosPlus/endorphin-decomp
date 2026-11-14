// Decompiled translation unit: src/Geometry/SphereType.cpp

#include <math.h>

// [0x005B1150] Geometry::SphereType::vfunc_1 (12 bytes)
extern "C" void __fastcall ext_00647BF0();

extern "C" void __fastcall fn_005B1150(void* self, int edx_unused, void* a1) {
    ((void (__fastcall*)(void*))ext_00647BF0)(a1);
}

// [0x005B1010] Geometry::SphereType::vfunc_2 (17 bytes)
extern "C" void ext_006484D0();

extern "C" void __fastcall fn_005B1010(void* self, int edx_unused, void* a1, void* a2) {
    ((void (__fastcall*)(void*, int, void*))ext_006484D0)(a1, edx_unused, a2);
}

// [0x005B1990] Geometry::SphereType::vfunc_3 (42 bytes)
extern "C" void ext_005B11E0();
extern "C" int mem_0095FFC0;

extern "C" __declspec(naked) float __stdcall fn_005B1990(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fld qword ptr [mem_0095FFC0]
        fmul st, st(1)
        fmul st, st(1)
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005B1700] Geometry::SphereType::vfunc_5 (50 bytes)
extern "C" int mem_009576E8;

extern "C" __declspec(naked) float __stdcall fn_005B1700(void* self, int a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x8
    }
}

// [0x005B4150] Geometry::SphereType::vfunc_18 (61 bytes)
extern "C" void ext_005B3FF0();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_005B4150(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x2f7
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je short L_else
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
L_else:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B3FF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B1370] Geometry::SphereType::vfunc_4 (166 bytes)
extern "C" void ext_00540D60();
extern "C" void ext_0053B470();
extern "C" void ext_0047FFA0();
extern "C" void ext_006A7250();

extern "C" __declspec(naked) float __fastcall fn_005B1370(void* self, int edx_unused, float* a1, void* a2, float* a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x24]
        fld dword ptr [edi]
        mov ecx, esi
        fstp dword ptr [esi]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esi + 0xc]
        call ext_00540D60
        mov ecx, dword ptr [esp + 0x20]
        push 0x0
        call ext_005B11E0
        push ecx
        lea eax, [esp + 0xc]
        fstp dword ptr [esp]
        push eax
        mov ecx, esi
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [esi]
        push esi
        fld dword ptr [eax + 0x4]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esi + 0x4]
        push ecx
        fld dword ptr [eax + 0x8]
        mov ecx, edi
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        fld1
        fstp dword ptr [esi + 0xc]
        call ext_0047FFA0
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        call ext_006A7250
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        pop edi
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x005B4CD0] Geometry::SphereType::vfunc_16 (359 bytes)
extern "C" void ext_00539AA0();
extern "C" void ext_00539FB0();
extern "C" void ext_005B11E0();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A73BA();
extern "C" int mem_00925134;
extern "C" int mem_00955090;

extern "C" __declspec(naked) void __fastcall fn_005B4CD0(void* self) {
    __asm {
        sub esp, 0x20
        mov ecx, dword ptr [esp + 0x24]
        push ebx
        push ebp
        push esi
        push edi
        push 0
        call ext_005B11E0
        fstp dword ptr [esp + 0x34]
        push 0
        call ext_005B11E0
        fadd st(0), st
        mov edi, dword ptr [esp + 0x38]
        mov esi, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], esi
        fidiv dword ptr [esp + 0x3c]
        mov ebp, dword ptr [mem_00925134]
        fstp dword ptr [esp + 0x18]
        jbe lbl_5b4d0b
        call ebp
    lbl_5b4d0b:
        mov ebx, dword ptr [edi + 4]
        cmp ebx, dword ptr [edi + 8]
        jbe lbl_5b4d15
        call ebp
    lbl_5b4d15:
        push esi
        push edi
        push ebx
        push edi
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call ext_00539AA0
        fldz
        mov ecx, dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x2c]
        test ecx, ecx
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        jle lbl_5b4e2d
        mov ebx, dword ptr [esp + 0x40]
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov ebp, eax
        neg ebp
        mov dword ptr [esp + 0x3c], ebp
        mov dword ptr [esp + 0x14], ecx
        jmp short lbl_5b4d60
        __emit 0x8d
        __emit 0xa4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        nop
    lbl_5b4d60:
        fild dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        fdiv dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        call ext_006A73BA
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        xor esi, esi
        test ebx, ebx
        fmul dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x10], esi
        fstp dword ptr [esp + 0x38]
        jle short lbl_5b4e1b
        fild dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x2c]
        jmp short lbl_5b4dc0
        __emit 0x8d
        __emit 0x9b
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    lbl_5b4dc0:
        fild dword ptr [esp + 0x10]
        fmul qword ptr [mem_00955090]
        fdiv dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x3c]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        lea ecx, [esp + 0x24]
        fmul dword ptr [esp + 0x38]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp + 0x2c]
        call ext_00539FB0
        add esi, 1
        cmp esi, ebx
        mov dword ptr [esp + 0x10], esi
        jl short lbl_5b4dc0
    lbl_5b4e1b:
        add ebp, 1
        sub dword ptr [esp + 0x14], 1
        mov dword ptr [esp + 0x3c], ebp
        jne lbl_5b4d60
    lbl_5b4e2d:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0x10
    }
}
