// Decompiled translation unit: src/Geometry/AnimationType.cpp

// [0x005B10D0] Geometry::AnimationType::vfunc_18 (30 bytes)
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005B10D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
