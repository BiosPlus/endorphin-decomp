// Decompiled translation unit: src/Geometry/SphylType.cpp

extern "C" void ext_00647C10();
extern "C" void ext_006484A0();

// [0x005B1180] Geometry::SphylType::vfunc_1 (12 bytes)
extern "C" void __fastcall fn_005B1180(void* self, int edx_unused, void* a1) {
    ((void (__fastcall*)(void*))ext_00647C10)(a1);
}

// [0x005B1070] Geometry::SphylType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1070(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006484A0
        ret 0x8
    }
}

// [0x005B1A30] Geometry::SphylType::vfunc_3 (59 bytes)
extern "C" void ext_005B11E0();
extern "C" int mem_0095FFC8;
extern "C" int mem_009576E8;

extern "C" __declspec(naked) void __fastcall fn_005B1A30(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        push 0x1
        call ext_005B11E0
        fld dword ptr [esp + 0x4]
        fld qword ptr [mem_0095FFC8]
        fmul st, st(1)
        faddp st(2), st
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005B17B0] Geometry::SphylType::vfunc_5 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B17B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        push 0x1
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmul st, st(1)
        call ext_005B11E0
        mov eax, dword ptr [esp + 0xc]
        fxch st(2)
        fadd st(0), st
        fmulp st(2), st
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x8]
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fadd dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        pop ecx
        ret 0x8
    }
}
