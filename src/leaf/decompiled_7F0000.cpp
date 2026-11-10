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

// [0x007F56E0] sub_007F56E0 (42 bytes)
extern "C" float __cdecl fn_007F56E0(void* self) {
    unsigned char* p = (unsigned char*)self;
    int t = *(int*)self & 0xff;
    if (t == 7) {
        return *(float*)(p + 0x38);
    }
    if (t == 1 || t == 5 || t > 9) {
        return *(float*)(p + 0x10);
    }
    return 0.0f;
}

// [0x007F0B00] sub_007F0B00 (47 bytes)
// Uses edi as an implicit input (not a parameter): stores edx into [edi+0x218]
// and stores edi as the value of a newly appended node.
extern "C" __declspec(naked) void __fastcall fn_007F0B00(void* self, int index) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        mov dword ptr [edi + 0x218], edx
        lea eax, [edx + 4*edx]
        mov edx, dword ptr [ecx + 0x8]
        lea eax, [esi + 4*eax]
        mov esi, dword ptr [ecx + 0x10]
        lea edx, [edx + 8*esi]
        add esi, 0x1
        mov dword ptr [ecx + 0x10], esi
        mov dword ptr [edx + 0x4], edi
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [edx], ecx
        add dword ptr [eax + 0x8], 0x1
        mov dword ptr [eax + 0x4], edx
        pop esi
        ret
    }
}

// [0x007F0B30] sub_007F0B30 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F0B30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        mov dword ptr [edi + 0x154], edx
        lea eax, [edx + 4*edx]
        mov edx, dword ptr [ecx + 0xc]
        lea eax, [esi + 4*eax]
        mov esi, dword ptr [ecx + 0x14]
        lea edx, [edx + 8*esi]
        add esi, 0x1
        mov dword ptr [ecx + 0x14], esi
        mov dword ptr [edx + 0x4], edi
        mov ecx, dword ptr [eax + 0xc]
        mov dword ptr [edx], ecx
        add dword ptr [eax + 0x10], 0x1
        mov dword ptr [eax + 0xc], edx
        pop esi
        ret
    }
}

// [0x007F6850] sub_007F6850 (48 bytes)
extern "C" void __cdecl fn_007F6850(void* a, void* b) {
    unsigned char* A = (unsigned char*)a;
    unsigned char* B = (unsigned char*)b;
    *(int*)(A + 0x4) = *(int*)(B + 0x8);
    *(int*)((unsigned char*)*(int*)(B + 0x8) + 0xc) = *(int*)(B + 0xc);
    *(int*)((unsigned char*)*(int*)(B + 0xc) + 0x8) = *(int*)(B + 0x8);
    *(int*)(B + 0x8) = *(int*)(A + 0x8);
    *(int*)(A + 0xc) -= 1;
    *(int*)(A + 0x8) = (int)b;
}

// [0x007F6690] sub_007F6690 (54 bytes)
extern "C" void ext_007C7000();
extern "C" void ext_007CCA00();

extern "C" __declspec(naked) int __cdecl fn_007F6690(int a1, int a2, int a3, int* a4) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x18]
        push esi
        mov dword ptr [edi], esi
        call ext_007C7000
        push eax
        call ext_007CCA00
        add esp, 0x8
        test eax, eax
        jne L_call_fp
        pop edi
        pop esi
        ret
    L_call_fp:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push edi
        push ecx
        push edx
        push esi
        call eax
        add esp, 0x10
        pop edi
        pop esi
        ret
    }
}

// [0x007F0BC0] sub_007F0BC0 (55 bytes)
extern "C" __declspec(naked) int __cdecl fn_007F0BC0(void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 8]
        fld dword ptr [ecx + 58h]
        mov edx, dword ptr [edx]
        fld dword ptr [edx + 58h]
        fcompp
        fnstsw ax
        test ah, 41h
        jne second
        or eax, -1
        ret
second:
        fld dword ptr [ecx + 58h]
        fld dword ptr [edx + 58h]
        fcompp
        fnstsw ax
        test ah, 5
        jp unordered
        mov eax, 1
        ret
unordered:
        xor eax, eax
        ret
    }
}

// [0x007F8500] sub_007F8500 (65 bytes)
extern "C" __declspec(naked) int __cdecl fn_007F8500(void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        _emit 0xd8
        _emit 0xd1
        fnstsw ax
        test ah, 0x41
        jne L_cmp_eq
        fstp st(1)
        or eax, -1
        fstp st(0)
        ret
    L_cmp_eq:
        _emit 0xde
        _emit 0xd9
        fnstsw ax
        test ah, 0x5
        jp L_zero
        mov eax, 0x1
        ret
    L_zero:
        xor eax, eax
        ret
    }
}

// [0x007F4A60] sub_007F4A60 (66 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F4A60(float* a1, float* a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, esi
        sub ecx, esi
        mov edx, 0x3
    loop1:
        fld dword ptr [ecx + eax]
        add eax, 0x4
        sub edx, 0x1
        fadd dword ptr [eax - 0x4]
        fstp dword ptr [eax - 0x4]
        jne loop1
        lea eax, [esi + 0x10]
        mov edx, 0x3
        pop esi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loop2:
        fld dword ptr [eax + ecx]
        add eax, 0x4
        sub edx, 0x1
        fadd dword ptr [eax - 0x4]
        fstp dword ptr [eax - 0x4]
        jne loop2
        ret
    }
}
