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

// [0x0040CD90] CharacterDialog::vfunc_63 (94 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0040CD90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x46e, p + 0x84);
    ddx(a1, 0x4c8, p + 0xe8);
    ddx(a1, 0x4, p + 0x13c);
    ddx(a1, 0x1, p + 0x1b0);
    ddx(a1, 0x2, p + 0x224);
}
