// Decompiled translation unit: src/Geometry/SphereType.cpp

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
