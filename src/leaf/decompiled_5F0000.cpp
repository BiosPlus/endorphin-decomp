// Decompiled translation unit: src/leaf/decompiled_5F0000.cpp

// [0x005F3570] sub_005F3570 (24 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_005F34E0();

extern "C" __declspec(naked) void __fastcall fn_005F3570(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x945310
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_005F34E0
        pop ecx
        ret
    }
}

// [0x005F5BA0] sub_005F5BA0 (25 bytes)
extern "C" void ext_005F5240();
extern "C" void ext_005F5470();

extern "C" __declspec(naked) void __fastcall fn_005F5BA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005F5240
        push eax
        mov ecx, esi
        call ext_005F5470
        pop esi
        ret 4
    }
}
