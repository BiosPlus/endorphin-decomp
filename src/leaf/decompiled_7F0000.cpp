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

// [0x007F71F0] sub_007F71F0 (71 bytes)
extern "C" int __cdecl fn_007F71F0(float* out, float a, float b, float c) {
    if (a < b) {
        *out = b;
        return 1;
    }
    if (c < a) {
        *out = c;
        return 1;
    }
    *out = a;
    return 0;
}

// [0x007FC490] sub_007FC490 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FC490(void* self) {
    __asm {
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax + 0x4]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x24]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [edx + 0x8]
        ret
    }
}

// [0x007F63D0] sub_007F63D0 (73 bytes)
extern "C" void ext_007C8880();
extern "C" void ext_007C89F0();

extern "C" __declspec(naked) void __cdecl fn_007F63D0(void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x44]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [eax + 0x44]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx]
        and ecx, 0xff
        push ecx
        and eax, 0xff
        push eax
        push edi
        call ext_007C89F0
        push edi
        mov ebx, eax
        call ext_007C8880
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [ebx]
        add esp, 0x10
        test eax, eax
        je done_7F63D0
        push esi
        call eax
        add esp, 0x4
    done_7F63D0:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007F67C0] sub_007F67C0 (74 bytes)
// Builds a free-list of 16-byte nodes (next pointer at +8) over p->base[0..count).
extern "C" __declspec(naked) void __cdecl fn_007F67C0(void* p, int count) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea esi, [edi - 0x1]
        test esi, esi
        jle skip_loop
        xor ecx, ecx
        push ebp
    build_loop:
        mov eax, dword ptr [edx]
        add eax, ecx
        lea ebp, [eax + 0x10]
        add ecx, 0x10
        sub esi, 0x1
        mov dword ptr [eax + 0x8], ebp
        jne build_loop
        pop ebp
    skip_loop:
        mov ecx, dword ptr [edx]
        shl edi, 0x4
        mov dword ptr [edi + ecx - 0x8], 0x0
        mov eax, dword ptr [edx]
        pop edi
        mov dword ptr [edx + 0x4], 0x0
        mov dword ptr [edx + 0x8], eax
        mov dword ptr [edx + 0xc], 0x0
        pop esi
        ret
    }
}

// [0x007FC440] sub_007FC440 (80 bytes)
// eax = matrix (floats), ecx = input vec3, edx = output vec3: out = M * in + translation
extern "C" __declspec(naked) void __fastcall fn_007FC440(void* self) {
    __asm {
        fld dword ptr [eax + 0x10]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x30]
        fstp dword ptr [edx]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x34]
        fstp dword ptr [edx + 0x4]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx]
        fld dword ptr [eax + 0x18]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x38]
        fstp dword ptr [edx + 0x8]
        ret
    }
}

// [0x007F7FA0] sub_007F7FA0 (80 bytes)
extern "C" void ext_006A7250();

extern "C" __declspec(naked) void __fastcall fn_007F7FA0(void* self) {
    __asm {
        sub esp, 0x10
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x10
        ret
    }
}

// [0x007FC1D0] sub_007FC1D0 (85 bytes)
extern "C" int __fastcall fn_007FC1D0(const float* self, int edx_unused, const float* other) {
    int mask = 0;
    if (self[0] < other[0]) mask |= 1;
    if (self[1] < other[1]) mask |= 2;
    if (self[2] < other[2]) mask |= 4;
    if (self[3] < other[3]) mask |= 8;
    return mask;
}

// [0x007FC230] sub_007FC230 (85 bytes)
extern "C" int __fastcall fn_007FC230(const float* self, int edx_unused, const float* other) {
    int mask = 0;
    if (self[0] > other[0]) mask |= 1;
    if (self[1] > other[1]) mask |= 2;
    if (self[2] > other[2]) mask |= 4;
    if (self[3] > other[3]) mask |= 8;
    return mask;
}

// [0x007F7190] sub_007F7190 (91 bytes)
extern "C" __declspec(naked) int __cdecl fn_007F7190(float* out, float a, float b, float c, float d) {
    __asm {
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp st(3)
        fnstsw ax
        test ah, 0x41
        jne SHORT L_lt
        mov eax, dword ptr [esp + 0x4]
        fstp st(2)
        fstp st(0)
        fstp dword ptr [eax]
        mov eax, 1
        ret
    L_lt:
        fstp st(0)
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        fcompp
        fnstsw ax
        test ah, 0x41
        jne SHORT L_zero
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx]
        mov eax, 1
        ret
    L_zero:
        fstp st(0)
        xor eax, eax
        ret
    }
}

// [0x007FC4E0] sub_007FC4E0 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FC4E0(void* self) {
    __asm {
        fld dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [ecx + 0xc]
        fld dword ptr [eax + 0x10]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x14]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x18]
        fstp dword ptr [ecx + 0x18]
        fld dword ptr [eax + 0x1c]
        fstp dword ptr [ecx + 0x1c]
        fld dword ptr [eax + 0x20]
        fstp dword ptr [ecx + 0x20]
        fld dword ptr [eax + 0x24]
        fstp dword ptr [ecx + 0x24]
        fld dword ptr [eax + 0x28]
        fstp dword ptr [ecx + 0x28]
        fld dword ptr [eax + 0x2c]
        fstp dword ptr [ecx + 0x2c]
        fld dword ptr [eax + 0x30]
        fstp dword ptr [ecx + 0x30]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [ecx + 0x34]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [ecx + 0x38]
        fld dword ptr [eax + 0x3c]
        fstp dword ptr [ecx + 0x3c]
        ret
    }
}
