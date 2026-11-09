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
