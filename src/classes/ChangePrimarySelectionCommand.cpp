// Decompiled translation unit: src/classes/ChangePrimarySelectionCommand.cpp

// [0x004B0110] ChangePrimarySelectionCommand::vfunc_1 (13 bytes)
extern "C" void ext_004AFC20();

extern "C" void __fastcall fn_004B0110(unsigned char* self) {
    void* arg = self + 0x34;
    void* obj = *(void**)(self + 0x10);
    typedef void (__thiscall *Fn)(void*, void*);
    ((Fn)ext_004AFC20)(obj, arg);
}

// [0x004B0120] ChangePrimarySelectionCommand::vfunc_2 (13 bytes)
extern "C" void __fastcall fn_004B0120(unsigned char* self) {
    void* arg = self + 0x14;
    void* obj = *(void**)(self + 0x10);
    typedef void (__thiscall *Fn)(void*, void*);
    ((Fn)ext_004AFC20)(obj, arg);
}

// [0x004B00E0] ChangePrimarySelectionCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004B00E0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x92ab40
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004B0130] ChangePrimarySelectionCommand::vfunc_0 (86 bytes)
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_004B0130(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x38]
        push edi
        xor edi, edi
        cmp eax, edi
        je skip38
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip38:
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov eax, dword ptr [esi + 0x18]
        cmp eax, edi
        je skip18
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip18:
        mov ecx, esi
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        call ext_00665810
        test byte ptr [esp + 0xc], 0x1
        je noflag
        push esi
        call ext_006A5C5C
        add esp, 0x4
    noflag:
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}
