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

// [0x00455B90] SceneNotesEditor::vfunc_90 (29 bytes)
extern "C" void ext_00455970();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00455B90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00455970
        pop esi
        ret 0xc
    }
}
