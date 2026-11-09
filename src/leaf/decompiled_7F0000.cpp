// Decompiled translation unit: src/leaf/decompiled_7F0000.cpp

// [0x007F88D0] sub_007F88D0 (27 bytes)
extern "C" void ext_007F8550();

extern "C" void __cdecl fn_007F88D0(int a1, float a2, int a3) {
    typedef void (__cdecl *F)(int, float, int);
    ((F)ext_007F8550)(a1, a2, a3);
}

// [0x007F0B60] sub_007F0B60 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F0B60(void* ecx_unused, void* self) {
    __asm {
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [edx]
        push esi
        lea esi, [eax + 4*eax]
        lea ecx, [ecx + 4*esi]
        xor esi, esi
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x8], esi
        mov dword ptr [ecx + 0x4], esi
        mov dword ptr [ecx + 0x10], esi
        mov dword ptr [ecx + 0xc], esi
        add dword ptr [edx + 0x4], 0x1
        pop esi
        ret
    }
}

// [0x007F1480] sub_007F1480 (36 bytes)
extern "C" __declspec(naked) int __fastcall fn_007F1480(void* self) {
    __asm {
        push ecx
        push ebx
        mov dword ptr [esp + 0x4], 0x0
        mov eax, 0x1
        push ebx
        cpuid
        pop ebx
        and edx, 0x2000000
        mov dword ptr [esp + 0x4], edx
        mov eax, dword ptr [esp + 0x4]
        pop ebx
        pop ecx
        ret
    }
}

// [0x007F0B90] sub_007F0B90 (38 bytes)
extern "C" int __cdecl fn_007F0B90(const char* a, const char* b) {
    float fa = *(const float*)(a + 0x15c);
    float fb = *(const float*)(b + 0x15c);
    return fa > fb ? 1 : 0;
}
