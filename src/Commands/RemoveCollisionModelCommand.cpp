// Decompiled translation unit: src/Commands/RemoveCollisionModelCommand.cpp

extern "C" int mem_00924FE4;
extern "C" void ext_00587180();
extern "C" void ext_005BF400();

// [0x005AC750] Commands::RemoveCollisionModelCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" __declspec(naked) void __fastcall fn_005AC750(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f520
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005ACCF0] Commands::RemoveCollisionModelCommand::vfunc_2 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ACCF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0
        je done
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je done
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], 0
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF400
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_00587180
    done:
        pop esi
        ret
    }
}
