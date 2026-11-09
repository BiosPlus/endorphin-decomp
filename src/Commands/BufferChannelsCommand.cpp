// Decompiled translation unit: src/Commands/BufferChannelsCommand.cpp

extern "C" void __stdcall ext_0048F1F0(void* p);

// [0x0048F4F0] Commands::BufferChannelsCommand::vfunc_1 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F4F0(void* self) {
    __asm {
        lea eax, [ecx + 0x20]
        push eax
        call ext_0048F1F0
        ret
    }
}

// [0x0048F500] Commands::BufferChannelsCommand::vfunc_2 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F500(void* self) {
    __asm {
        lea eax, [ecx + 0x14]
        push eax
        call ext_0048F1F0
        ret
    }
}

// [0x0048DFC0] Commands::BufferChannelsCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_0048DFC0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x93e54c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
