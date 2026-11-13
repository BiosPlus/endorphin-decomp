// Decompiled translation unit: src/classes/ChangeSelectionCommand.cpp

extern "C" void ext_004E8340();

// [0x004E9810] ChangeSelectionCommand::vfunc_2 (13 bytes)
extern "C" void __fastcall fn_004E9810(void* self) {
    char* p = (char*)self;
    void* obj = *(void**)(p + 0x10);
    void* arg = (void*)(p + 0x14);
    typedef void (__thiscall *FnT)(void*, void*);
    FnT f = (FnT)ext_004E8340;
    f(obj, arg);
}

// [0x004E9820] ChangeSelectionCommand::vfunc_0 (77 bytes)
extern "C" void ext_004E8050();
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void* __fastcall fn_004E9820(void* self, int edx_unused, unsigned flags) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x34]
        call ext_004E8050
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je skip1
        push eax
        call ext_006A5C5C
        add esp, 4
    skip1:
        mov ecx, esi
        mov dword ptr [esi + 0x18], 0
        mov dword ptr [esi + 0x1c], 0
        mov dword ptr [esi + 0x20], 0
        call ext_00665810
        test byte ptr [esp + 8], 1
        je skip2
        push esi
        call ext_006A5C5C
        add esp, 4
    skip2:
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004E97F0] ChangeSelectionCommand::vfunc_1 (32 bytes)
extern "C" void __fastcall fn_004E97F0(void* self) {
    char* p = (char*)self;
    char* m = p + 0x34;
    typedef void (__thiscall *FnT)(void*, void*);
    FnT f = (FnT)ext_004E8340;
    f(*(void**)(p + 0x10), m ? (void*)(p + 0x38) : 0);
}
