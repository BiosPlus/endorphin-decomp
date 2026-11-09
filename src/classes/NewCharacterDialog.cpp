// Decompiled translation unit: src/classes/NewCharacterDialog.cpp

extern "C" void ext_0040DAB0();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();

// [0x0040E800] NewCharacterDialog::vfunc_89 (23 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040E800(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DAB0
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        pop esi
        jmp ext_0040E7C0
    }
}
