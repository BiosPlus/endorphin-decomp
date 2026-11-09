// Decompiled translation unit: src/classes/RenderProperties.cpp

extern "C" int mem_00A9F208;
extern "C" int mem_00924FE4;

// [0x0054C910] RenderProperties::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054C910(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F208]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}
