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

// [0x005AC5C0] Commands::MirrorCommand::vfunc_2 (123 bytes)
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005AC5C0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x14]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        push esi
        push edi
        call edx
        mov edi, eax
        lea esi, [ebx + 0x68]
        mov ecx, 0x10
        rep movsd
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebx + 0x14]
        push edx
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        lea edx, [ebx + 0x28]
        push edx
        push 0x2
        call eax
        mov ecx, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [ecx + 0x94]
        test ecx, ecx
        je L_skip
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        call eax
        mov ecx, dword ptr [ebx + 0x14]
        mov edx, dword ptr [ecx + 0x94]
        mov ecx, dword ptr [edx + 0x94]
        test ecx, ecx
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        call edx
L_skip:
        mov ecx, dword ptr [ebx + 0x14]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        pop edi
        pop esi
        pop ebx
        jmp edx
    }
}
