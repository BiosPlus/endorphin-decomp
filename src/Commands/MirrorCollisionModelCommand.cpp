// Decompiled translation unit: src/Commands/MirrorCollisionModelCommand.cpp

// [0x005AC720] Commands::MirrorCollisionModelCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC720(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f508
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
