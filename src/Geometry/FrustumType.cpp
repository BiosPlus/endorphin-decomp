// Decompiled translation unit: src/Geometry/FrustumType.cpp

// [0x005B10B0] Geometry::FrustumType::vfunc_2 (17 bytes)
extern "C" void ext_006484B0();

extern "C" __declspec(naked) void __stdcall fn_005B10B0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push eax
        call ext_006484B0
        ret 8
    }
}

// [0x005B1A70] Geometry::FrustumType::vfunc_3 (64 bytes)
extern "C" void ext_005B11E0();
extern "C" int mem_00993828;
extern "C" int mem_009576E8;

extern "C" __declspec(naked) void __stdcall fn_005B1A70(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push 1
        call ext_005B11E0
        push 0
        call ext_005B11E0
        faddp st(1), st
        push 2
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 8]
        call ext_005B11E0
        fld dword ptr [esp + 4]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        ret 4
    }
}
