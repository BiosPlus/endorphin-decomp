// Decompiled translation unit: src/Commands/BufferPoseCommand.cpp

// [0x0048DF90] Commands::BufferPoseCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_0048DF90(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x93e540
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0048DF10] Commands::BufferPoseCommand::vfunc_1 (62 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005975A0();
extern "C" void ext_0059B5A0();

extern "C" __declspec(naked) void __fastcall fn_0048DF10(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov edi, eax
        lea eax, [esi + 0x24]
        push eax
        mov ecx, edi
        call ext_005975A0
        cmp dword ptr [esi + 0x34], 0
        je L_else
        mov ecx, dword ptr [esi + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x128]
        call eax
        jmp L_done
    L_else:
        mov ecx, edi
        call ext_0059B5A0
    L_done:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8]
        pop edi
        pop esi
        jmp eax
    }
}
