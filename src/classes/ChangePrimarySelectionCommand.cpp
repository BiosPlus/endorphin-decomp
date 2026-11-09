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
