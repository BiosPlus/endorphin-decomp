// Decompiled translation unit: src/VMCSModes/DefaultImplementation.cpp

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9E50(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x1C // mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x004F9D00] VMCSModes::DefaultImplementation::vfunc_97 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9D00(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x82 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edx + 0xcc]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x004F9860] VMCSModes::DefaultImplementation::vfunc_38 (18 bytes)
extern "C" void ext_00469530();

extern "C" void __fastcall fn_004F9860(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int, int);
    ((Callee)ext_00469530)(*(void**)((char*)self + 0x8), a1, 0);
}

// [0x004F98A0] VMCSModes::DefaultImplementation::vfunc_27 (19 bytes)
extern "C" void ext_00468A30();

extern "C" bool __fastcall fn_004F98A0(void* self, int edx_unused, void** out) {
    typedef void* (__fastcall *Callee)(void*);
    *out = ((Callee)ext_00468A30)(*(void**)((char*)self + 0x8));
    return true;
}

// [0x004F98D0] VMCSModes::DefaultImplementation::vfunc_29 (19 bytes)
extern "C" void ext_00468AC0();

extern "C" bool __fastcall fn_004F98D0(void* self, int edx_unused, void** out) {
    typedef void* (__fastcall *Callee)(void*);
    *out = ((Callee)ext_00468AC0)(*(void**)((char*)self + 0x8));
    return true;
}
