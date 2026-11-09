// Decompiled translation unit: src/classes/MacroCommand.cpp

extern "C" int mem_00924FE0;

// [0x00665840] MacroCommand::vfunc_3 (33 bytes)
// Returns a std::string by value: hidden return buffer is the stack arg (ret 0x4).
// Copy-constructs the std::string member at this+0x10 into the buffer via the
// imported basic_string copy ctor, then returns the buffer pointer in eax.
extern "C" __declspec(naked) void __fastcall fn_00665840(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x10
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
