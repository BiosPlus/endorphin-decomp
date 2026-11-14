// Decompiled translation unit: src/classes/Interpreter.cpp

// [0x00504940] Interpreter::vfunc_25 (35 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0xc).
// Constructs the std::string in the hidden buffer from a C string pointer loaded from a
// global, via the imported basic_string(const char*, allocator) ctor; returns the buffer in eax.
extern "C" int mem_00A9EE78;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00504940(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE78]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00505900] Interpreter::vfunc_13 (114 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_005054E0();
extern "C" void ext_0055DA20();
extern "C" int mem_00A9EDC4;
extern "C" int mem_00924FC0;
extern "C" int mem_00AEBB88;
extern "C" int mem_00AEBB84;
extern "C" __declspec(naked) void* __fastcall fn_00505900(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EDC4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je nomatch
        mov eax, 1
        test byte ptr [mem_00AEBB88], al
        jne skipinit
        or dword ptr [mem_00AEBB88], eax
        call ext_005054E0
        mov dword ptr [mem_00AEBB84], eax
skipinit:
        mov edx, dword ptr [mem_00AEBB84]
        add esi, 0x20
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 8
nomatch:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" void ext_00427550();
extern "C" void ext_00505420();
extern "C" void ext_00640110();
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FF0;

// [0x005058B0] Interpreter::vfunc_22 (73 bytes)
extern "C" void* __fastcall fn_005058B0(void* self, int edx_unused, void* a1) {
    void* r = ((void* (__thiscall*)(void*, int))ext_00640110)(a1, mem_00A9FA6C);
    const char* s = ((const char* (__thiscall*)(void*))*(void**)&mem_00924FF0)((char*)self + 4);
    ((void (__thiscall*)(void*, const char*))ext_00427550)(&r, s);
    ((void (__cdecl*)(void*, void*, int, int))ext_00505420)((char*)self + 0x20, a1, mem_00A9EDC4, 0);
    return a1;
}

// [0x00507D10] Interpreter::vfunc_21 (86 bytes)
extern "C" void ext_00507B50();
extern "C" void ext_0063F530();
extern "C" int mem_00A9EDC4;
extern "C" int mem_00A9EDB4;

extern "C" __declspec(naked) void __fastcall fn_00507D10(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9EDC4]
        push esi
        push 0x1
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_hit_507D10
        cmp eax, 0xb53b30
        je L_hit_507D10
        cmp eax, 0xb53ab0
        je L_hit_507D10
        cmp eax, 0xb53a70
        je L_hit_507D10
        cmp eax, 0xb53af0
        jne L_nohit_507D10
    L_hit_507D10:
        mov eax, 0xb53b30
    L_nohit_507D10:
        mov ecx, dword ptr [mem_00A9EDB4]
        push ecx
        add esi, 0x20
        push esi
        push eax
        call ext_00507B50
        add esp, 0xc
        pop esi
        ret 4
    }
}
