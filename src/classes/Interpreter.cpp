// Decompiled translation unit: src/classes/Interpreter.cpp

// [0x00504940] Interpreter::vfunc_25 (35 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0xc).
// Constructs the std::string in the hidden buffer from a C string pointer loaded from a
// global, via the imported basic_string(const char*, allocator) ctor; returns the buffer in eax.
extern "C" int mem_00A9EE78;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00504940(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE78]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
