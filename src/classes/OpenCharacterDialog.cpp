// Decompiled translation unit: src/classes/OpenCharacterDialog.cpp

// [0x0040E0B0] OpenCharacterDialog::vfunc_84 (42 bytes)
extern "C" void ext_0040AE10();
extern "C" void ext_0040DA50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00AC8910;

extern "C" __declspec(naked) void* __fastcall fn_0040E0B0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040DA50
        mov ecx, offset mem_00AC8910
        mov edi, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_006A5F50
        mov ecx, esi
        call ext_0040AE10
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x0040E820] OpenCharacterDialog::vfunc_89 (30 bytes)
extern "C" void ext_0040DAB0();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();
extern "C" void ext_0040C330();

extern "C" __declspec(naked) void __fastcall fn_0040E820(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DAB0
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        call ext_0040E7C0
        mov ecx, esi
        pop esi
        jmp ext_0040C330
    }
}
