// Decompiled translation unit: src/classes/KeyMappingManager.cpp

// [0x0042E920] KeyMappingManager::vfunc_6 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from the C string pointer held in a
// global, via the imported basic_string(const char*) ctor, then returns the buffer in eax.
extern "C" int mem_00A9F024;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_0042E920(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F024]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
