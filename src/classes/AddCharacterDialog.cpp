// Decompiled translation unit: src/classes/AddCharacterDialog.cpp

extern "C" void ext_0040DA90();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();
extern "C" void ext_0040C330();

// [0x0040E7E0] AddCharacterDialog::vfunc_89 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040E7E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DA90
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        call ext_0040E7C0
        mov ecx, esi
        pop esi
        jmp ext_0040C330
    }
}
