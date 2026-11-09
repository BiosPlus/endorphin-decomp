// Decompiled translation unit: src/Commands/ResizeCommand.cpp

extern "C" void ext_00484A70();

// [0x00485ED0] Commands::ResizeCommand::vfunc_2 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00485ED0(void* self) {
    __asm {
        lea eax, [ecx + 0xb0]
        push eax
        lea edx, [ecx + 0x90]
        push edx
        lea eax, [ecx + 0x70]
        push eax
        lea edx, [ecx + 0x50]
        push edx
        call ext_00484A70
        ret
    }
}

// [0x00480220] Commands::ResizeCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00480220(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x92aafc
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
