// Decompiled translation unit: src/classes/CharacterDialog.cpp

// [0x0040CAA0] CharacterDialog::vfunc_90 (25 bytes)
extern "C" void ext_0040C380();
extern "C" void ext_006A5FDA();

extern "C" __declspec(naked) void __fastcall fn_0040CAA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040C380
        movzx eax, al
        push eax
        lea ecx, [esi + 0x1b0]
        call ext_006A5FDA
        pop esi
        ret
    }
}
