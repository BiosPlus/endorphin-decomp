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

// [0x004F9BF0] VMCSModes::DefaultImplementation::vfunc_104 (22 bytes)
extern "C" void ext_00480560();

extern "C" bool __fastcall fn_004F9BF0(void* self) {
    typedef bool (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* c = *(void**)((char*)b + 0x34);
    return !((Callee)ext_00480560)(c);
}

// [0x004FB3A0] VMCSModes::DefaultImplementation::vfunc_59 (22 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469060();
extern "C" __declspec(naked) void __fastcall fn_004FB3A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov ecx, dword ptr [esi + 0x8]
        pop esi
        jmp ext_00469060
    }
}

// [0x004FAC20] VMCSModes::DefaultImplementation::vfunc_0 (26 bytes)
extern "C" void ext_004667A0();
extern "C" void __fastcall fn_004FAC20(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    typedef void (__fastcall *VFn)(void*);
    void* a = *(void**)((char*)self + 0x4);
    ((Callee)ext_004667A0)(a, 0);
    void* b = *(void**)((char*)self + 0x4);
    void* c = *(void**)((char*)b + 0xc);
    void* vt = *(void**)c;
    ((VFn)(*(void**)vt))(c);
}

// [0x004FADB0] VMCSModes::DefaultImplementation::vfunc_14 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 2
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x38]
        jmp edx
    }
}

// [0x004FADD0] VMCSModes::DefaultImplementation::vfunc_17 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 3
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x44]
        pop esi
        jmp eax
    }
}

// [0x004FADF0] VMCSModes::DefaultImplementation::vfunc_19 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 3
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4c]
        pop esi
        jmp eax
    }
}

// [0x004FAE10] VMCSModes::DefaultImplementation::vfunc_20 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x50]
        pop esi
        jmp eax
    }
}

// [0x004FAE30] VMCSModes::DefaultImplementation::vfunc_21 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x54]
        pop esi
        jmp eax
    }
}

// [0x004FAE50] VMCSModes::DefaultImplementation::vfunc_15 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 2
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x3c]
        pop esi
        jmp eax
    }
}

// [0x004FAF50] VMCSModes::DefaultImplementation::vfunc_25 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAF50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 0x1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x64]
        pop esi
        jmp eax
    }
}

// [0x004FAF70] VMCSModes::DefaultImplementation::vfunc_26 (27 bytes)
extern "C" void ext_004667A0();
extern "C" __declspec(naked) void __fastcall fn_004FAF70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x68]
        pop esi
        jmp eax
    }
}

// [0x004F9B70] VMCSModes::DefaultImplementation::vfunc_39 (41 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" void* __fastcall fn_004F9B70(void* self) {
    typedef void (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* esi = (char*)b + 0x20;
    ((Callee)ext_0065C640)(esi);
    a = *(void**)((char*)self + 0x8);
    b = *(void**)((char*)a + 0x14);
    void* edi = *(void**)((char*)b + 0x10);
    ((Callee)ext_0065C650)(esi);
    return edi;
}

// [0x004F9BA0] VMCSModes::DefaultImplementation::vfunc_40 (41 bytes)
extern "C" void* __fastcall fn_004F9BA0(void* self) {
    typedef void (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* esi = (char*)b + 0x20;
    ((Callee)ext_0065C640)(esi);
    a = *(void**)((char*)self + 0x8);
    b = *(void**)((char*)a + 0x14);
    void* edi = *(void**)((char*)b + 0x14);
    ((Callee)ext_0065C650)(esi);
    return edi;
}
