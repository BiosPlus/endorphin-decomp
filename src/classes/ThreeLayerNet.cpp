// Decompiled translation unit: src/classes/ThreeLayerNet.cpp

// [0x00522160] ThreeLayerNet::vfunc_25 (34 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0xc).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00522160(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x952958
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005227C0] ThreeLayerNet::vfunc_13 (118 bytes)
extern "C" void ext_00522580();
extern "C" void ext_00524CE0();
extern "C" void ext_0055DA20();
extern "C" int mem_00924FC0;
extern "C" int mem_00AED2A0;
extern "C" int mem_00AED29C;
extern "C" __declspec(naked) void __fastcall fn_005227C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push 0x952b4c
        push esi
        mov edi, ecx
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_slow
        mov eax, 0x1
        test byte ptr [mem_00AED2A0], al
        jne L_cached
        or dword ptr [mem_00AED2A0], eax
        call ext_00522580
        mov dword ptr [mem_00AED29C], eax
    L_cached:
        mov eax, dword ptr [mem_00AED29C]
        mov esi, dword ptr [esp + 0x10]
        add edi, 0xdc
        push edi
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_slow:
        push esi
        mov esi, dword ptr [esp + 0x14]
        push esi
        mov ecx, edi
        call ext_00524CE0
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
