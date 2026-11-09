// Decompiled translation unit: src/VMCSModes/EditMode.cpp

// [0x004F2E20] VMCSModes::EditMode::vfunc_142 (26 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00666120();

extern "C" __declspec(naked) void __fastcall fn_004F2E20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472350
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        pop esi
        jmp ext_00666120
    }
}
