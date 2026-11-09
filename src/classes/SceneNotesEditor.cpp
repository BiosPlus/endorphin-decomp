// Decompiled translation unit: src/classes/SceneNotesEditor.cpp

// [0x00455AB0] SceneNotesEditor::vfunc_84 (26 bytes)
extern "C" void ext_00455720();
extern "C" void ext_006A5FC8();

extern "C" __declspec(naked) int __fastcall fn_00455AB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5FC8
        mov ecx, esi
        call ext_00455720
        mov byte ptr [esi + 0x159], 0x1
        xor eax, eax
        pop esi
        ret
    }
}
