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
