// Decompiled translation unit: src/Geometry/CylinderType.cpp

extern "C" void ext_00647C50();
extern "C" void ext_00648490();

// [0x005B1170] Geometry::CylinderType::vfunc_1 (12 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1170(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_00647C50
        ret 0x4
    }
}

// [0x005B1050] Geometry::CylinderType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1050(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_00648490
        ret 0x8
    }
}

extern "C" void ext_005B11E0();
extern "C" int mem_009576E8;

// [0x005B19F0] Geometry::CylinderType::vfunc_3 (49 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B19F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push 0
        call ext_005B11E0
        fstp dword ptr [esp + 4]
        push 1
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

// [0x005B1190] Geometry::CylinderType::vfunc_9 (57 bytes)
extern "C" int mem_00993828;

extern "C" float __fastcall fn_005B1190(void* self, int edx_unused, int a1, void* a2) {
    float* v = (float*)a2;
    if (a1 == 2) {
        return (float)(v[1] * *(double*)&mem_00993828);
    }
    if (a1 == 1) {
        return v[0];
    }
    return v[a1];
}
