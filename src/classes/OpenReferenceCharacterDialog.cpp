// Decompiled translation unit: src/classes/OpenReferenceCharacterDialog.cpp

extern "C" void __fastcall ext_0040E7A0(void* self);
extern "C" void __fastcall ext_0040C330(void* self);

// [0x0040E850] OpenReferenceCharacterDialog::vfunc_89 (16 bytes)
extern "C" void __fastcall fn_0040E850(void* self) {
    ext_0040E7A0(self);
    ext_0040C330(self);
}

extern "C" void ext_0040AE10();
extern "C" void ext_0040DA50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00AC8948;

// [0x0040E170] OpenReferenceCharacterDialog::vfunc_84 (42 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0040E170(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040DA50
        mov ecx, offset mem_00AC8948
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
