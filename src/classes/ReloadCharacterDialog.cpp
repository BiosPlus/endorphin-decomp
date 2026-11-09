// Decompiled translation unit: src/classes/ReloadCharacterDialog.cpp

// [0x00449F80] ReloadCharacterDialog::vfunc_63 (43 bytes)
extern "C" void ext_006A6610();

extern "C" __declspec(naked) void __fastcall fn_00449F80(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        lea eax, [esi + 74h]
        push eax
        push 46eh
        push edi
        call ext_006A6610
        add esi, 78h
        push esi
        push 468h
        push edi
        call ext_006A6610
        pop edi
        pop esi
        ret 4
    }
}
