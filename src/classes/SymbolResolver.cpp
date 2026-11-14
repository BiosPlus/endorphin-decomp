// Decompiled translation unit: src/classes/SymbolResolver.cpp

// [0x0065F790] SymbolResolver::vfunc_0 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_0065F790(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x92ab70
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0065F7C0] SymbolResolver::vfunc_1 (34 bytes)
// Same shape as vfunc_0: std::string returned via hidden buffer (ret 0x4),
// constructed from a literal C string through the imported basic_string(const char*, allocator) ctor.
extern "C" __declspec(naked) void __fastcall fn_0065F7C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9876e0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00660C90] SymbolResolver::vfunc_6 (118 bytes)
// SEH-guarded (fs:[0] frame, scope table 0x008B2798) wrapper: builds a temp object via
// sub_00660B40 (ret 0x18), then runs sub_006606C0 / sub_00660C10 on a local object.
extern "C" void ext_006606C0();
extern "C" void ext_00660B40();
extern "C" void ext_00660C10();
extern "C" __declspec(naked) void __fastcall fn_00660C90(void* self) {
    __asm {
        push -1
        push 0x8b2798
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        mov eax, dword ptr [esp + 0x78]
        mov edx, dword ptr [esp + 0x74]
        push esi
        push eax
        mov eax, dword ptr [esp + 0x78]
        push edx
        mov edx, dword ptr [ecx + 0x4]
        push eax
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0x7c]
        push edx
        push eax
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_00660B40
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x68], 0
        call ext_006606C0
        lea ecx, [esp + 0x4]
        mov esi, eax
        mov dword ptr [esp + 0x68], -1
        call ext_00660C10
        mov ecx, dword ptr [esp + 0x60]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 0x10
    }
}

// [0x006615A0] SymbolResolver::vfunc_2 (122 bytes)
extern "C" void ext_00661330();
extern "C" __declspec(naked) void __fastcall fn_006615A0(void* self) {
    __asm {
        push -1
        push 0x8b2798
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        mov eax, dword ptr [esp + 0x7c]
        mov edx, dword ptr [esp + 0x74]
        push esi
        mov esi, dword ptr [esp + 0x70]
        push 0
        push eax
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push edx
        push eax
        push ecx
        push esi
        lea ecx, [esp + 0x1c]
        call ext_00660B40
        mov edx, dword ptr [esp + 0x7c]
        mov eax, dword ptr [esp + 0x74]
        push edx
        push eax
        push esi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x74], 0
        call ext_00661330
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x68], -1
        call ext_00660C10
        mov ecx, dword ptr [esp + 0x60]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 0x14
    }
}
