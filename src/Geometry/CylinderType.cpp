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
