// Decompiled translation unit: src/Geometry/CuboidType.cpp

extern "C" void ext_00647C30();
extern "C" void ext_006484C0();

// [0x005B1160] Geometry::CuboidType::vfunc_1 (12 bytes)
extern "C" __declspec(naked) void __stdcall fn_005B1160(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_00647C30
        ret 0x4
    }
}

// [0x005B1030] Geometry::CuboidType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void fn_005B1030() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006484C0
        ret 0x8
    }
}
