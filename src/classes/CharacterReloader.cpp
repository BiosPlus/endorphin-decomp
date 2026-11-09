// Decompiled translation unit: src/classes/CharacterReloader.cpp

extern "C" int mem_00924FE0;

// [0x005AA020] CharacterReloader::vfunc_10 (37 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0x8).
// The second stack arg is a pointer to an object whose std::string member sits at +0x4;
// that string is copy-constructed into the hidden buffer via the imported basic_string
// copy ctor (with a zero offset argument), then the buffer pointer is returned in eax.
extern "C" __declspec(naked) void __fastcall fn_005AA020(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, 0x4
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
