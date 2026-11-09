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
