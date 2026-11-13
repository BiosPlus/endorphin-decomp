// Decompiled translation unit: src/Commands/RemoveFluidObjectCommand.cpp

extern "C" int mem_00924FE4;

// [0x005AC7F0] Commands::RemoveFluidObjectCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" __declspec(naked) void __fastcall fn_005AC7F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f54c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005ACF80] Commands::RemoveFluidObjectCommand::vfunc_2 (49 bytes)
extern "C" void ext_00587180();
extern "C" void ext_005BF510();

extern "C" __declspec(naked) void __fastcall fn_005ACF80(void* self) {
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
        call ext_005BF510
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_00587180
    done:
        pop esi
        ret
    }
}

// [0x005ACF20] Commands::RemoveFluidObjectCommand::vfunc_1 (81 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468F70();
extern "C" void ext_00528B60();
extern "C" void ext_005BF5B0();

extern "C" __declspec(naked) void __fastcall fn_005ACF20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0
        je done
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done
        push edi
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_00468F70
        mov edi, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x18]
        cmp edi, ecx
        je skip
        test ecx, ecx
        je skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    skip:
        mov dword ptr [esi + 0x18], edi
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0xc
        call ext_00528B60
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF5B0
        pop edi
    done:
        pop esi
        ret
    }
}
