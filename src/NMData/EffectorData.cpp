// Decompiled translation unit: src/NMData/EffectorData.cpp

// [0x0060BDF0] NMData::EffectorData::vfunc_19 (24 bytes)
extern "C" void ext_0060BB50();
extern "C" void ext_0060BCD0();

extern "C" __declspec(naked) void __fastcall fn_0060BDF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0060BB50
        mov dword ptr [esi + 0x44], 0
        lea ecx, [esi + 0x48]
        pop esi
        jmp ext_0060BCD0
    }
}

// [0x0060BBF0] NMData::EffectorData::vfunc_8 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a global C string pointer via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00A9EE64;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_0060BBF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE64]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0060BEA0] NMData::EffectorData::vfunc_18 (86 bytes)
extern "C" void ext_00622750();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0060BEA0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_00622750
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
