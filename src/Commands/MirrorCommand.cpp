// Decompiled translation unit: src/Commands/MirrorCommand.cpp

// [0x005AC640] Commands::MirrorCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC640(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f4d8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005AC560] Commands::MirrorCommand::vfunc_1 (92 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AC560(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa0]
        lea edx, [esi + 0x18]
        push edx
        mov edx, dword ptr [esi + 0x10]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        call eax
        mov ecx, dword ptr [esi + 0x14]
        mov ecx, dword ptr [ecx + 0x94]
        test ecx, ecx
        je done
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        call eax
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 0x94]
        mov ecx, dword ptr [edx + 0x94]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        pop esi
        jmp edx
done:
        pop esi
        ret
    }
}
