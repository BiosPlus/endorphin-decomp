// Decompiled translation unit: src/classes/RigEditor.cpp

// [0x00451390] RigEditor::vfunc_90 (29 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_00451140();

extern "C" __declspec(naked) void __fastcall fn_00451390(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00451140
        pop esi
        ret 0xc
    }
}
