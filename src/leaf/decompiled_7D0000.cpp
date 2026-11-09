// Decompiled translation unit: src/leaf/decompiled_7D0000.cpp

// [0x007D5C60] sub_007D5C60 (31 bytes)
extern "C" int mem_00AB28C4;
extern "C" void ext_007D59C0();

extern "C" __declspec(naked) void __cdecl fn_007D5C60(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, 0x6c
        push eax
        call dword ptr [mem_00AB28C4]
        add esp, 4
        test eax, eax
        jne found
        ret
    found:
        mov dword ptr [esp + 4], eax
        jmp ext_007D59C0
    }
}

// [0x007D8570] sub_007D8570 (32 bytes)
extern "C" void __cdecl fn_007D8570(char* base, int index, float* out) {
    float* src = reinterpret_cast<float*>(base + index * 32);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}

// [0x007D8850] sub_007D8850 (12 bytes)
extern "C" void ext_007D8420();

extern "C" __declspec(naked) void __cdecl fn_007D8850(int a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push eax
        call ext_007D8420
        pop ecx
        ret
    }
}

// [0x007D8400] sub_007D8400 (18 bytes)
extern "C" void ext_007D87D0(void* a, void* b);

extern "C" void __cdecl fn_007D8400(void* self) {
    ext_007D87D0(*(void**)((char*)self + 0x68), self);
}

// [0x007D7A30] sub_007D7A30 (20 bytes)
extern "C" void ext_007F1530();
extern "C" int mem_00B61F78;

extern "C" int __cdecl fn_007D7A30(void) {
    ext_007F1530();
    return (*(char*)&mem_00B61F78 != 0) + 1;
}

// [0x007DC840] sub_007DC840 (21 bytes)
extern "C" void ext_007C8A50();

extern "C" void __cdecl fn_007DC840(int a0) {
    typedef void (__cdecl *Fn)(int, int, int);
    ((Fn)ext_007C8A50)(a0, 8, 0x007DC600);
}

// [0x007D4AF0] sub_007D4AF0 (22 bytes)
extern "C" void ext_007D4920();

extern "C" void __cdecl fn_007D4AF0(void* a1, void* a2) {
    typedef void (__cdecl *Fn)(void*, void*, void*);
    ((Fn)ext_007D4920)(a1, *(void**)a1, a2);
}

// [0x007DC860] sub_007DC860 (22 bytes)
extern "C" void ext_007DC770();
extern "C" void ext_007DC840();

extern "C" void __cdecl fn_007DC860(int a0) {
    typedef void (__cdecl *Fn)(int);
    ((Fn)ext_007DC770)(a0);
    ((Fn)ext_007DC840)(a0);
}

// [0x007DAD50] sub_007DAD50 (25 bytes)
extern "C" void ext_007CC8E0();
extern "C" int __cdecl fn_007DAD50(int a, int b) {
    ((void (__cdecl*)(int, int, int))ext_007CC8E0)(a, b, 0);
    return a;
}
