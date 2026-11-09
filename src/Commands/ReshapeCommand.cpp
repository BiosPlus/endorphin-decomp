// Decompiled translation unit: src/Commands/ReshapeCommand.cpp

// [0x00486020] Commands::ReshapeCommand::vfunc_2 (21 bytes)
extern "C" void ext_00484CA0();

extern "C" __declspec(naked) void __fastcall fn_00486020(void* self) {
    __asm {
        lea eax, [ecx + 0x90]
        push eax
        lea edx, [ecx + 0x70]
        push edx
        lea eax, [ecx + 0x50]
        push eax
        call ext_00484CA0
        ret
    }
}

// [0x00486000] Commands::ReshapeCommand::vfunc_1 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_00486000(void* self) {
    __asm {
        lea eax, [ecx + 0xa0]
        push eax
        lea edx, [ecx + 0x80]
        push edx
        lea eax, [ecx + 0x60]
        push eax
        call ext_00484CA0
        ret
    }
}

// [0x00480250] Commands::ReshapeCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00480250(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x92ab0c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
