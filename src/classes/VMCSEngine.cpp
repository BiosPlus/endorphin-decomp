// Decompiled translation unit: src/classes/VMCSEngine.cpp

// [0x00468690] VMCSEngine::vfunc_1 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468690(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x18 // mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x0C // mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x82 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edx + 0xac]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x00469CB0] VMCSEngine::vfunc_0_off_4 (13 bytes)
extern "C" void ext_00469530();

extern "C" void __fastcall fn_00469CB0(void* self) {
    typedef void (__thiscall *Callee)(void* self, int a, int b);
    ((Callee)ext_00469530)(static_cast<char*>(self) - 4, 5, 0);
}

// [0x0046A000] VMCSEngine::vfunc_0_off_C (17 bytes)
extern "C" void ext_004667A0();

extern "C" void __fastcall fn_0046A000(void* self) {
    char* p = static_cast<char*>(self);
    if (p[5] == 0) {
        typedef void (__thiscall *Callee)(void*, int);
        void* obj = *(void**)(p + 0xC);
        ((Callee)ext_004667A0)(obj, 1);
    }
}
