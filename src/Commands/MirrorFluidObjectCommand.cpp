// Decompiled translation unit: src/Commands/MirrorFluidObjectCommand.cpp

// [0x005AC7C0] Commands::MirrorFluidObjectCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC7C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f538
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005AC780] Commands::MirrorFluidObjectCommand::vfunc_2 (50 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468F70();
extern "C" void ext_005BF570();
extern "C" __declspec(naked) void __fastcall fn_005AC780(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0
        je done
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_00468F70
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF570
        mov dword ptr [esi + 0x10], 0
    done:
        pop esi
        ret
    }
}
