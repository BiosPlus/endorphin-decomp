// Decompiled translation unit: src/Commands/BufferTransformsCommand.cpp

// [0x004816E0] Commands::BufferTransformsCommand::vfunc_1 (10 bytes)
extern "C" void ext_00480B00();

extern "C" __declspec(naked) void __fastcall fn_004816E0(void* self) {
    __asm {
        lea eax, [ecx + 0x50]
        push eax
        call ext_00480B00
        ret
    }
}

// [0x004816F0] Commands::BufferTransformsCommand::vfunc_2 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_004816F0(void* self) {
    __asm {
        lea eax, [ecx + 0x40]
        push eax
        call ext_00480B00
        ret
    }
}

// [0x004801F0] Commands::BufferTransformsCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004801F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x93c3e0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
