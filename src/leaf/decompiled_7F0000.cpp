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

// [0x007F9D50] sub_007F9D50 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9D50(int count, float* p) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
        lea esi, [ecx + 4*eax]
        mov eax, esi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl tail_check
        lea eax, [esi - 0xc]
    unroll_loop:
        fld dword ptr [ecx]
        add ecx, 0x10
        cmp ecx, eax
        fchs
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [ecx - 0xc]
        fchs
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [ecx - 0x8]
        fchs
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [ecx - 0x4]
        fchs
        fstp dword ptr [ecx - 0x4]
        jl unroll_loop
    tail_check:
        cmp ecx, esi
        jae done
        mov edi, edi
    tail_loop:
        fld dword ptr [ecx]
        add ecx, 0x4
        cmp ecx, esi
        fchs
        fstp dword ptr [ecx - 0x4]
        jb tail_loop
    done:
        pop esi
        ret
    }
}

// [0x007F6750] sub_007F6750 (99 bytes)
extern "C" __declspec(naked) float __cdecl fn_007F6750(const float* a, const float* b, const float* c, const float* d) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [edx]
        fsub dword ptr [eax]
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x8]
        fsub dword ptr [eax + 0x8]
        fld dword ptr [edx + 0x4]
        mov edx, dword ptr [esp + 0xc]
        fsub dword ptr [eax + 0x4]
        fld dword ptr [ecx]
        _emit 0xd8
        _emit 0xc9
        fld dword ptr [ecx + 0x4]
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xe9
        fld dword ptr [edx + 0x8]
        fsub dword ptr [eax + 0x8]
        _emit 0xde
        _emit 0xc9
        fld dword ptr [ecx + 0x8]
        _emit 0xde
        _emit 0xcc
        fld dword ptr [ecx]
        _emit 0xd8
        _emit 0xcb
        _emit 0xde
        _emit 0xec
        fld dword ptr [edx + 0x4]
        fsub dword ptr [eax + 0x4]
        _emit 0xde
        _emit 0xcc
        _emit 0xde
        _emit 0xc3
        fld dword ptr [ecx + 0x4]
        _emit 0xde
        _emit 0xca
        _emit 0xd8
        _emit 0x49
        _emit 0x08
        _emit 0xde
        _emit 0xe9
        fld dword ptr [edx]
        fsub dword ptr [eax]
        _emit 0xde
        _emit 0xc9
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        ret
    }
}

// [0x007F9CE0] sub_007F9CE0 (103 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9CE0(int count, float* dst, const float* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 4*eax]
        mov eax, edi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl tail_check
        lea eax, [edi - 0xc]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    unroll_loop:
        fld dword ptr [esi]
        add ecx, 0x10
        fstp dword ptr [ecx - 0x10]
        add esi, 0x10
        cmp ecx, eax
        fld dword ptr [esi - 0xc]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esi - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esi - 0x4]
        fstp dword ptr [ecx - 0x4]
        jl unroll_loop
    tail_check:
        cmp ecx, edi
        jae done
    tail_loop:
        fld dword ptr [esi]
        add ecx, 0x4
        fstp dword ptr [ecx - 0x4]
        add esi, 0x4
        cmp ecx, edi
        jb tail_loop
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x007FC3D0] sub_007FC3D0 (111 bytes)
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __fastcall fn_007FC3D0(void* self, void* out) {
    __asm {
        fld dword ptr [ecx + 0x4]
        fchs
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x4]
        fsubp st(1), st
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x8]
        fsubp st(1), st
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [edx]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fmul st, st(1)
        fstp dword ptr [edx + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax]
        fsubp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fmul st, st(1)
        fstp dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        fsubp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx]
        faddp st(1), st
        fmulp st(1), st
        fstp dword ptr [edx + 0xc]
        ret
    }
}

// [0x007F4C50] sub_007F4C50 (116 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F4C50(float* dst, unsigned char* base, int idx) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        shl ecx, 0x5
        lea ebx, [ecx + edx]
        push edi
        mov eax, ebp
        mov esi, ebx
        mov edi, 0x3
        nop
    f4c50_outer1:
        mov ecx, esi
        mov edx, 0x4
    f4c50_inner1:
        fld dword ptr [ecx]
        add eax, 0x4
        fstp dword ptr [eax - 0x4]
        add ecx, 0x40
        sub edx, 0x1
        jne f4c50_inner1
        add esi, 0x4
        sub edi, 0x1
        jne f4c50_outer1
        lea eax, [ebp + 0x30]
        lea esi, [ebx + 0x10]
        mov edi, 0x3
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    f4c50_outer2:
        mov ecx, esi
        mov edx, 0x4
    f4c50_inner2:
        fld dword ptr [ecx]
        add eax, 0x4
        fstp dword ptr [eax - 0x4]
        add ecx, 0x40
        sub edx, 0x1
        jne f4c50_inner2
        add esi, 0x4
        sub edi, 0x1
        jne f4c50_outer2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007F66D0] sub_007F66D0 (116 bytes)
extern "C" double mem_009453D8;

extern "C" __declspec(naked) bool __cdecl fn_007F66D0(const float* a1, const float* a2, float a3) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fsub dword ptr [ecx]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        fsub dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp]
        fld dword ptr [esp + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fld qword ptr [mem_009453D8]
        fmul st, st(1)
        fmulp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne short fn_007F66D0_false
        mov al, 1
        add esp, 0xc
        ret
    fn_007F66D0_false:
        xor al, al
        add esp, 0xc
        ret
    }
}

// [0x007F9DB0] sub_007F9DB0 (116 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9DB0(int count, float* dst, const float* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 4*eax]
        mov eax, edi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl tail_loop
        lea eax, [edi - 0xc]
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
    unroll_loop:
        fld dword ptr [esi]
        add ecx, 0x10
        fchs
        add esi, 0x10
        cmp ecx, eax
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esi - 0xc]
        fchs
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esi - 0x8]
        fchs
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esi - 0x4]
        fchs
        fstp dword ptr [ecx - 0x4]
        jl unroll_loop
    tail_loop:
        cmp ecx, edi
        jae done
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
    single_loop:
        fld dword ptr [esi]
        add ecx, 0x4
        fchs
        add esi, 0x4
        cmp ecx, edi
        fstp dword ptr [ecx - 0x4]
        jb single_loop
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x007F9F30] sub_007F9F30 (116 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9F30(int count, float* dst, const float* src, float s) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 4*eax]
        mov eax, edi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl scalar_tail
        fld st(0)
        lea eax, [edi - 0xc]
    unroll_loop:
        fld dword ptr [esi]
        add ecx, 0x10
        fmul st, st(1)
        add esi, 0x10
        cmp ecx, eax
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esi - 0xc]
        fmul st, st(1)
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esi - 0x8]
        fmul st, st(1)
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esi - 0x4]
        fmul st, st(1)
        fstp dword ptr [ecx - 0x4]
        jl unroll_loop
        fstp st(0)
    scalar_tail:
        cmp ecx, edi
        jae done
    scalar_loop:
        fld dword ptr [esi]
        add ecx, 0x4
        fmul st, st(1)
        add esi, 0x4
        cmp ecx, edi
        fstp dword ptr [ecx - 0x4]
        jb scalar_loop
    done:
        pop edi
        fstp st(0)
        pop esi
        ret
    }
}

// [0x007F9E30] sub_007F9E30 (118 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9E30(int count, float* dst, const float* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 4*eax]
        mov eax, edi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl tail_loop
        lea eax, [edi - 0xc]
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
    unroll_loop:
        fld dword ptr [esi]
        add ecx, 0x10
        fadd dword ptr [ecx - 0x10]
        add esi, 0x10
        cmp ecx, eax
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esi - 0xc]
        fadd dword ptr [ecx - 0xc]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esi - 0x8]
        fadd dword ptr [ecx - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esi - 0x4]
        fadd dword ptr [ecx - 0x4]
        fstp dword ptr [ecx - 0x4]
        jl unroll_loop
    tail_loop:
        cmp ecx, edi
        jae done
    tail_body:
        fld dword ptr [esi]
        add ecx, 0x4
        fadd dword ptr [ecx - 0x4]
        add esi, 0x4
        cmp ecx, edi
        fstp dword ptr [ecx - 0x4]
        jb tail_body
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x007FA1B0] sub_007FA1B0 (69 bytes)
extern "C" void ext_007F9E30();
extern "C" void ext_007F9F30();
extern "C" int mem_00B61F7C;
extern "C" int mem_00B61F8C;
extern "C" int mem_00B61F9C;
extern "C" int mem_00B61FA0;
extern "C" __declspec(naked) void __cdecl fn_007FA1B0(float v) {
    __asm {
        fld dword ptr [esp + 4]
        sub esp, 10h
        push esi
        mov esi, dword ptr [mem_00B61F9C]
        push ecx
        fstp dword ptr [esp]
        push offset mem_00B61F8C
        lea eax, [esp + 0ch]
        push eax
        push esi
        call ext_007F9F30
        push offset mem_00B61F7C
        lea ecx, [esp + 18h]
        push ecx
        push esi
        call ext_007F9E30
        lea edx, [esp + 20h]
        push edx
        call dword ptr [mem_00B61FA0]
        add esp, 20h
        pop esi
        add esp, 10h
        ret
    }
}

// [0x007F36C0] sub_007F36C0 (119 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F36C0(float* out, float* base, float* m, int idx) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        shl edi, 0x5
        add edi, dword ptr [esp + 0x1c]
        sub ebp, eax
        mov dword ptr [esp + 0x10], 0x4
    L_outer:
        lea ebx, [eax + ebp]
        mov edx, edi
        mov ecx, ebx
        mov esi, 0x3
        _emit 0x8b
        _emit 0xff
    L_loop1:
        fld dword ptr [edx]
        add ecx, 0x10
        fmul dword ptr [ecx - 0x10]
        add edx, 0x4
        sub esi, 0x1
        fadd dword ptr [eax]
        fstp dword ptr [eax]
        jne L_loop1
        lea edx, [edi + 0x10]
        lea ecx, [ebx + 0x30]
        mov esi, 0x3
        nop
    L_loop2:
        fld dword ptr [edx]
        add ecx, 0x10
        fmul dword ptr [ecx - 0x10]
        add edx, 0x4
        sub esi, 0x1
        fadd dword ptr [eax]
        fstp dword ptr [eax]
        jne L_loop2
        add eax, 0x4
        add edi, 0x40
        sub dword ptr [esp + 0x10], 0x1
        jne L_outer
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007FB7E0] sub_007FB7E0 (123 bytes)
// Uses eax, ecx, edx, esi as pointers to float triples and one float stack argument
// (visible at [esp+8] after the push ecx). Hand-written to keep the exact x87 sequence.
extern "C" __declspec(naked) int __fastcall fn_007FB7E0(void* self) {
    __asm {
        push    ecx
        fld     dword ptr [eax + 8]
        fstp    dword ptr [esp]
        fld     dword ptr [ecx + 8]
        fchs
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esp + 8]
        fldz
        fld     dword ptr [esp]
        fcom    st(1)
        fnstsw  ax
        test    ah, 41h
        jne     L_7FB819
        fstp    st(1)
        fstp    st(0)
        fld     dword ptr [esp + 8]
        fld     dword ptr [edx]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 41h
        jne     L_7FB845
        fstp    dword ptr [edx]
        jmp     L_7FB847
L_7FB819:
        fcomp   st(1)
        fnstsw  ax
        test    ah, 5
        jp      L_7FB837
        fstp    st(0)
        fld     dword ptr [esp + 8]
        fld     dword ptr [esi]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 5
        jp      L_7FB845
        fstp    dword ptr [esi]
        jmp     L_7FB847
L_7FB837:
        fcomp   dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 5
        jp      L_7FB847
L_7FB841:
        xor     eax, eax
        pop     ecx
        ret
L_7FB845:
        fstp    st(0)
L_7FB847:
        fld     dword ptr [edx]
        fld     dword ptr [esi]
        fcompp
        fnstsw  ax
        test    ah, 41h
        jp      L_7FB841
        mov     eax, 1
        pop     ecx
        ret
    }
}

// [0x007F14B0] sub_007F14B0 (124 bytes)
extern "C" int mem_00AA7E40;
extern "C" __declspec(naked) bool __fastcall fn_007F14B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -2
        push 0xa253d8
        push 0x6a743b
        mov eax, dword ptr fs:[0]
        push eax
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [mem_00AA7E40]
        xor dword ptr [ebp - 8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 10h]
        mov dword ptr fs:[0], eax
        mov dword ptr [ebp - 18h], esp
        mov dword ptr [ebp - 4], 0
        xorps xmm0, xmm0
        mov dword ptr [ebp - 4], -2
        mov al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], 0fffffffeh
        xor al, al
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007F9EB0] sub_007F9EB0 (126 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9EB0(int n, float* dst, float* a, float* b) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push ebx
        lea ebx, [ecx + 4*eax]
        mov eax, ebx
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        push esi
        mov esi, dword ptr [esp + 0x14]
        sar eax, 0x2
        cmp eax, 0x4
        push edi
        mov edi, dword ptr [esp + 0x1c]
        jl tail_7F9EB0
        mov eax, edi
        lea edx, [ebx - 0xc]
        sub eax, esi
    loop4_7F9EB0:
        fld dword ptr [edi]
        add ecx, 0x10
        fadd dword ptr [esi]
        add esi, 0x10
        add edi, 0x10
        cmp ecx, edx
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [eax + esi - 0xc]
        fadd dword ptr [esi - 0xc]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [edi - 0x8]
        fadd dword ptr [esi - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edi - 0x4]
        fadd dword ptr [esi - 0x4]
        fstp dword ptr [ecx - 0x4]
        jl loop4_7F9EB0
    tail_7F9EB0:
        cmp ecx, ebx
        jae done_7F9EB0
    loop1_7F9EB0:
        fld dword ptr [edi]
        add ecx, 0x4
        fadd dword ptr [esi]
        add esi, 0x4
        add edi, 0x4
        cmp ecx, ebx
        fstp dword ptr [ecx - 0x4]
        jb loop1_7F9EB0
    done_7F9EB0:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007FC5E0] sub_007FC5E0 (135 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FC5E0(void* self) {
    __asm {
        push ecx
        fld dword ptr [edx]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_x_ecx
        fld dword ptr [edx]
        jmp L_x_store
    L_x_ecx:
        fld dword ptr [ecx]
    L_x_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_y_ecx
        fld dword ptr [edx + 0x4]
        jmp L_y_store
    L_y_ecx:
        fld dword ptr [ecx + 0x4]
    L_y_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_z_ecx
        fld dword ptr [edx + 0x8]
        jmp L_z_store
    L_z_ecx:
        fld dword ptr [ecx + 0x8]
    L_z_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [edx + 0xc]
        fld dword ptr [ecx + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_w_ecx
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0xc]
        pop ecx
        ret
    L_w_ecx:
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0xc]
        pop ecx
        ret
    }
}

// [0x007FC670] sub_007FC670 (135 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FC670(void* self) {
    __asm {
        push ecx
        fld dword ptr [edx]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_7670_x_ecx
        fld dword ptr [edx]
        jmp L_7670_x_store
    L_7670_x_ecx:
        fld dword ptr [ecx]
    L_7670_x_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_7670_y_ecx
        fld dword ptr [edx + 0x4]
        jmp L_7670_y_store
    L_7670_y_ecx:
        fld dword ptr [ecx + 0x4]
    L_7670_y_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x8]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_7670_z_ecx
        fld dword ptr [edx + 0x8]
        jmp L_7670_z_store
    L_7670_z_ecx:
        fld dword ptr [ecx + 0x8]
    L_7670_z_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [edx + 0xc]
        fld dword ptr [ecx + 0xc]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_7670_w_ecx
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0xc]
        pop ecx
        ret
    L_7670_w_ecx:
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0xc]
        pop ecx
        ret
    }
}

// [0x007F0DA0] sub_007F0DA0 (138 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F0DA0(void* self) {
    __asm {
        mov eax, dword ptr [eax]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea esi, [esi + 4*esi]
        lea ecx, [edx + 4*edx]
        lea esi, [eax + 4*esi]
        lea ecx, [eax + 4*ecx]
        mov eax, dword ptr [esi + 0x4]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        mov ebx, 1
        je L_7F0DE5
L_7F0DC2:
        mov edi, dword ptr [eax + 0x4]
        mov dword ptr [edi + 0x218], edx
        add dword ptr [ecx + 0x8], ebx
        mov edi, eax
        mov eax, dword ptr [eax]
        cmp eax, ebp
        jne L_7F0DC2
        cmp edi, ebp
        je L_7F0DE5
        mov eax, dword ptr [ecx + 0x4]
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [ecx + 0x4], eax
L_7F0DE5:
        mov eax, dword ptr [esi + 0xc]
        cmp eax, ebp
        je L_7F0E13
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_7F0DF0:
        mov edi, dword ptr [eax + 0x4]
        mov dword ptr [edi + 0x154], edx
        add dword ptr [ecx + 0x10], ebx
        mov edi, eax
        mov eax, dword ptr [eax]
        cmp eax, ebp
        jne L_7F0DF0
        cmp edi, ebp
        je L_7F0E13
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [edi], edx
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0xc], eax
L_7F0E13:
        mov edx, dword ptr [esi]
        add dword ptr [ecx], edx
        pop edi
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x10], ebp
        mov dword ptr [esi + 0xc], ebp
        mov dword ptr [esi], ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007F13F0] sub_007F13F0 (141 bytes)
extern "C" int mem_00AA7E40;
extern "C" __declspec(naked) void __fastcall fn_007F13F0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -2
        push 0xa253b8
        push 0x6a743b
        mov eax, dword ptr fs:[0]
        push eax
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [mem_00AA7E40]
        xor dword ptr [ebp - 8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 10h]
        mov dword ptr fs:[0], eax
        mov dword ptr [ebp - 18h], esp
        mov dword ptr [ebp - 4], 0
        mov eax, 0
        push ebx
        cpuid
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ebx
        pop ebx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [ebp - 4], -2
        mov al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], 0fffffffeh
        xor al, al
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007FB140] sub_007FB140 (59 bytes)
extern "C" void ext_007C8960();

extern "C" int __cdecl fn_007FB140(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[4] = 0;
    d[5] = 0;
    d[1] = 0x7faf80;
    d[2] = 0x7fadc0;
    ((F)ext_007C8960)(self, 1, 3, d);
    return 1;
}

// [0x007FB7A0] sub_007FB7A0 (59 bytes)
extern "C" int __cdecl fn_007FB7A0(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[4] = 0;
    d[5] = 0;
    d[1] = 0x7fb660;
    d[2] = 0x7fb560;
    ((F)ext_007C8960)(self, 2, 1, d);
    return 1;
}

// [0x007FE800] sub_007FE800 (59 bytes)
extern "C" int __cdecl fn_007FE800(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[4] = 0;
    d[5] = 0;
    d[1] = 0x7fe360;
    d[2] = 0x7fe5f0;
    ((F)ext_007C8960)(self, 1, 1, d);
    return 1;
}

// [0x007FC190] sub_007FC190 (63 bytes)
extern "C" int __cdecl fn_007FC190(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7fc020;
    d[2] = 0x7fbeb0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 2, 3, d);
    return 1;
}

// [0x007FE320] sub_007FE320 (63 bytes)
extern "C" int __cdecl fn_007FE320(int* self) {
    typedef void (__cdecl *F)(int*, int, int, const int*);
    int d[6];
    d[0] = 0;
    d[5] = 0;
    d[1] = 0x7fe040;
    d[2] = 0x7fcab0;
    d[4] = 1;
    ((F)ext_007C8960)(self, 2, 2, d);
    return 1;
}

// [0x007F9FB0] sub_007F9FB0 (148 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F9FB0(int count, float* dst, const float* src1, float factor, const float* src2) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        push ebx
        lea ebx, [ecx + 4*eax]
        mov eax, ebx
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        push esi
        mov esi, dword ptr [esp + 0x1c]
        sar eax, 0x2
        cmp eax, 0x4
        push edi
        mov edi, dword ptr [esp + 0x18]
        jl tail_7F9FB0
        mov eax, edi
        fld st(0)
        lea edx, [ebx - 0xc]
        sub eax, esi
    loop4_7F9FB0:
        fld dword ptr [edi]
        add ecx, 0x10
        fmul st, st(1)
        add edi, 0x10
        add esi, 0x10
        cmp ecx, edx
        fadd dword ptr [esi - 0x10]
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [eax + esi - 0xc]
        fmul st, st(1)
        fadd dword ptr [esi - 0xc]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [edi - 0x8]
        fmul st, st(1)
        fadd dword ptr [esi - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edi - 0x4]
        fmul st, st(1)
        fadd dword ptr [esi - 0x4]
        fstp dword ptr [ecx - 0x4]
        jl loop4_7F9FB0
        fstp st(0)
    tail_7F9FB0:
        cmp ecx, ebx
        jae done_7F9FB0
    loop1_7F9FB0:
        fld dword ptr [edi]
        add ecx, 0x4
        fmul st, st(1)
        add edi, 0x4
        add esi, 0x4
        cmp ecx, ebx
        fadd dword ptr [esi - 0x4]
        fstp dword ptr [ecx - 0x4]
        jb loop1_7F9FB0
    done_7F9FB0:
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        ret
    }
}

// [0x007FC540] sub_007FC540 (151 bytes)
#include <math.h>
#pragma intrinsic(fabs)
extern "C" void __cdecl fn_007FC540(const float* src, float* dst) {
    dst[0] = (float)fabs(src[0]);
    dst[1] = (float)fabs(src[1]);
    dst[2] = (float)fabs(src[2]);
    dst[4] = (float)fabs(src[4]);
    dst[5] = (float)fabs(src[5]);
    dst[6] = (float)fabs(src[6]);
    dst[8] = (float)fabs(src[8]);
    dst[9] = (float)fabs(src[9]);
    dst[10] = (float)fabs(src[10]);
}

// [0x007F1530] sub_007F1530 (151 bytes)
extern "C" int mem_00AA7E40;
extern "C" int mem_009252A0;
extern "C" int mem_00B61F78;
extern "C" void ext_006A745E();
extern "C" void ext_007F13F0();
extern "C" void ext_007F1480();
extern "C" void ext_007F14B0();
extern "C" __declspec(naked) void __fastcall fn_007F1530(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, esp
        mov dword ptr [esp + 0xc], eax
        push ebx
        lea eax, [esp + 0x4]
        push eax
        mov bl, 0x1
        call ext_007F13F0
        add esp, 0x4
        test al, al
        je L_7F159A
        push esi
        mov esi, dword ptr [mem_009252A0]
        push 0xc
        lea ecx, [esp + 0xc]
        push 0x98c490
        push ecx
        call esi
        add esp, 0xc
        test eax, eax
        je L_7F1585
        push 0xc
        lea edx, [esp + 0xc]
        push 0x98c4a0
        push edx
        call esi
        add esp, 0xc
        test eax, eax
        je L_7F1585
        xor bl, bl
    L_7F1585:
        call ext_007F1480
        test eax, eax
        pop esi
        jne L_7F1591
        xor bl, bl
    L_7F1591:
        call ext_007F14B0
        test al, al
        jne L_7F15B1
    L_7F159A:
        xor al, al
        mov byte ptr [mem_00B61F78], al
        pop ebx
        mov ecx, dword ptr [esp + 0xc]
        xor ecx, esp
        call ext_006A745E
        add esp, 0x10
        ret
    L_7F15B1:
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [mem_00B61F78], bl
        pop ebx
        xor ecx, esp
        call ext_006A745E
        add esp, 0x10
        ret
    }
}

// [0x007FA050] sub_007FA050 (158 bytes)
extern "C" __declspec(naked) float __cdecl fn_007FA050(int count, const float* a, const float* b) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        fldz
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 4*eax]
        mov eax, edi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl L_tail_check
        mov eax, esi
        lea edx, [edi - 0xc]
        sub eax, ecx
    L_unroll_loop:
        fld dword ptr [eax + ecx + 0x4]
        add ecx, 0x10
        fmul dword ptr [ecx - 0xc]
        add esi, 0x10
        cmp ecx, edx
        fld dword ptr [esi - 0x10]
        fmul dword ptr [ecx - 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi - 0x8]
        fmul dword ptr [ecx - 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi - 0x4]
        fmul dword ptr [ecx - 0x4]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        jl L_unroll_loop
    L_tail_check:
        cmp ecx, edi
        jae L_done
        mov edi, edi
    L_tail_loop:
        fld dword ptr [esi]
        add ecx, 0x4
        fmul dword ptr [ecx - 0x4]
        add esi, 0x4
        cmp ecx, edi
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jb L_tail_loop
    L_done:
        fld dword ptr [esp + 0x10]
        pop edi
        pop esi
        ret
    }
}

// [0x007FA200] sub_007FA200 (96 bytes)
extern "C" void ext_007FA050();
extern "C" int mem_00B61FA4;
extern "C" __declspec(naked) void __fastcall fn_007FA200(void* self) {
    __asm {
        fld dword ptr [esp + 4]
        sub esp, 20h
        push esi
        mov esi, dword ptr [mem_00B61F9C]
        push ecx
        fstp dword ptr [esp]
        push offset mem_00B61F8C
        lea eax, [esp + 0ch]
        push eax
        push esi
        call ext_007F9F30
        push offset mem_00B61F7C
        lea ecx, [esp + 18h]
        push ecx
        push esi
        call ext_007F9E30
        lea edx, [esp + 20h]
        push edx
        lea eax, [esp + 34h]
        push eax
        call dword ptr [mem_00B61FA4]
        mov edx, dword ptr [mem_00B61F9C]
        push offset mem_00B61F8C
        lea ecx, [esp + 3ch]
        push ecx
        push edx
        call ext_007FA050
        add esp, 30h
        pop esi
        add esp, 20h
        ret
    }
}

// [0x007F0E30] sub_007F0E30 (172 bytes)
extern "C" void ext_007D8710();
extern "C" void ext_007F0B30();
extern "C" void ext_008039C0();

extern "C" __declspec(naked) void __cdecl fn_007F0E30(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, eax
        lea eax, [ebx + 4*ebx]
        push edi
        lea esi, [edx + 4*eax]
        call ext_007D8710
        add esp, 0x4
        test eax, eax
        jne L_007F0E62
        mov eax, dword ptr [edi + 0xa4]
        mov dword ptr [edi + 0x158], eax
        add dword ptr [esi], eax
        jmp L_007F0EB9
L_007F0E62:
        mov eax, dword ptr [esi]
        cmp eax, dword ptr [ebp + 0x18]
        jge L_007F0ED6
        mov eax, dword ptr [edi + 0x158]
        test eax, eax
        jne L_007F0E82
        fld dword ptr [edi + 0x15c]
        fsub dword ptr [ebp + 0x20]
        fstp dword ptr [edi + 0x15c]
L_007F0E82:
        fld dword ptr [edi + 0x15c]
        add eax, 0x1
        mov dword ptr [edi + 0x158], eax
        fsub dword ptr [ebp + 0x28]
        fstp dword ptr [edi + 0x15c]
        add dword ptr [esi], 0x1
        mov ecx, dword ptr [edi + 0x158]
        cmp ecx, dword ptr [edi + 0xa4]
        jge L_007F0EB9
        mov edx, dword ptr [esp + 0x18]
        push edi
        push edx
        call ext_008039C0
        add esp, 0x8
L_007F0EB9:
        cmp dword ptr [edi + 0x154], -0x1
        jne L_007F0ECD
        mov ecx, dword ptr [esp + 0x10]
        mov edx, ebx
        call ext_007F0B30
L_007F0ECD:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebp
        ret
L_007F0ED6:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret
    }
}

// [0x007FA0F0] sub_007FA0F0 (177 bytes)
extern "C" __declspec(naked) float __cdecl fn_007FA0F0(int count, const float* data) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        fldz
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        push esi
        lea esi, [ecx + 4*eax]
        mov eax, esi
        sub eax, ecx
        add eax, 0x3
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        cmp eax, 0x4
        jl L_tail_check
        lea eax, [esi - 0xc]
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_unroll_loop:
        fld dword ptr [ecx]
        add ecx, 0x10
        cmp ecx, eax
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul st(0), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx - 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul st(0), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx - 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul st(0), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx - 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul st(0), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        jl L_unroll_loop
    L_tail_check:
        cmp ecx, esi
        jae L_done
        mov edi, edi
    L_tail_loop:
        fld dword ptr [ecx]
        add ecx, 0x4
        cmp ecx, esi
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul st(0), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        jb L_tail_loop
    L_done:
        fld dword ptr [esp + 0xc]
        pop esi
        ret
    }
}

// [0x007F65D0] sub_007F65D0 (186 bytes)
extern "C" void ext_007C6F20();
extern "C" void ext_007C89F0();

extern "C" __declspec(naked) int __cdecl fn_007F65D0(void* a1, float a2, void* a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F20
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        movsx edi, ax
        call ext_007C6F20
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx]
        movsx eax, ax
        push eax
        push edi
        push ecx
        call ext_007C89F0
        mov edi, eax
        add esp, 0x14
        cmp dword ptr [edi + 0x8], 0x0
        je fail_7F65D0
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 0x10], 0x0
        je fail_7F65D0
        mov eax, dword ptr [esi + 0x4]
        cmp dword ptr [eax + 0x10], 0x0
        je fail_7F65D0
        cmp dword ptr [ecx + 0x14], 0x0
        je fail_7F65D0
        cmp dword ptr [eax + 0x14], 0x0
        je fail_7F65D0
        cmp dword ptr [ecx + 0x18], 0x0
        je fail_7F65D0
        cmp dword ptr [eax + 0x18], 0x0
        je fail_7F65D0
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov dword ptr [ebx], esi
        cmp dword ptr [edi + 0xc], 0x0
        je skip_swap_7F65D0
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 0x4], eax
    skip_swap_7F65D0:
        fld dword ptr [esp + 0x14]
        mov edx, dword ptr [edi + 0x8]
        push ebx
        push ecx
        fstp dword ptr [esp]
        push esi
        call edx
        add esp, 0xc
        cmp dword ptr [edi + 0xc], 0x0
        je skip_swap2_7F65D0
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        mov esi, dword ptr [ecx + 0x4]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x4], edx
    skip_swap2_7F65D0:
        test eax, eax
        pop ebx
        je ok_7F65D0
        cmp eax, 0x1
        jne fail_ret_7F65D0
    ok_7F65D0:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    fail_7F65D0:
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x4]
    fail_ret_7F65D0:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007F0720] sub_007F0720 (219 bytes)
extern "C" int mem_00AA7E40;
extern "C" int mem_00A25398;
extern "C" void ext_006A743B();

extern "C" __declspec(naked) int __fastcall fn_007F0720(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x2
        push offset mem_00A25398
        push offset ext_006A743B
        mov eax, dword ptr fs:[0x0]
        push eax
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov eax, dword ptr [mem_00AA7E40]
        xor dword ptr [ebp - 0x8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 0x10]
        mov dword ptr fs:[0x0], eax
        mov dword ptr [ebp - 0x18], esp
        xor eax, eax
        mov dword ptr [ebp - 0x20], eax
        mov dword ptr [ebp - 0x1c], eax
        mov dword ptr [ebp - 0x2c], eax
        mov dword ptr [ebp - 0x28], eax
        mov dword ptr [ebp - 0x24], eax
        mov dword ptr [ebp - 0x4], eax
        xor eax, eax
        cpuid
        mov dword ptr [ebp - 0x2c], ebx
        mov dword ptr [ebp - 0x28], edx
        mov dword ptr [ebp - 0x24], ecx
        mov eax, 0x1
        cpuid
        mov dword ptr [ebp - 0x1c], eax
        mov dword ptr [ebp - 0x20], edx
        mov dword ptr [ebp - 0x4], 0xfffffffe
        mov eax, dword ptr [ebp - 0x1c]
        mov ecx, eax
        and ecx, 0xf00
        cmp ecx, 0xf00
        je L_check_vendor
        test eax, 0xf00000
        je L_fail
    L_check_vendor:
        cmp dword ptr [ebp - 0x2c], 0x756e6547
        jne L_fail
        cmp dword ptr [ebp - 0x28], 0x49656e69
        jne L_fail
        cmp dword ptr [ebp - 0x24], 0x6c65746e
        jne L_fail
        mov eax, dword ptr [ebp - 0x20]
        and eax, 0x10000000
        mov ecx, dword ptr [ebp - 0x10]
        mov dword ptr fs:[0x0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov eax, 0x1
        ret
        mov esp, dword ptr [ebp - 0x18]
        mov dword ptr [ebp - 0x4], 0xfffffffe
    L_fail:
        xor eax, eax
        mov ecx, dword ptr [ebp - 0x10]
        mov dword ptr fs:[0x0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007F0800] sub_007F0800 (40 bytes)
extern "C" void ext_007F0720();

extern "C" __declspec(naked) void __fastcall fn_007F0800(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0x0
        call ext_007F0720
        test eax, eax
        jne L_cpuid
        mov al, 0x1
        pop ecx
        ret
    L_cpuid:
        push ebx
        mov eax, 0x1
        _emit 0x0f
        _emit 0xa2
        mov dword ptr [esp + 0x4], ebx
        mov al, byte ptr [esp + 0x6]
        pop ebx
        pop ecx
        ret
    }
}

// [0x007F0830] sub_007F0830 (43 bytes)
extern "C" void ext_007F0720();

extern "C" __declspec(naked) int __fastcall fn_007F0830(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0x0
        call ext_007F0720
        test eax, eax
        jne L_cpuid
        or al, -1
        pop ecx
        ret
    L_cpuid:
        push ebx
        mov eax, 0x1
        cpuid
        mov dword ptr [esp + 0x4], ebx
        mov eax, dword ptr [esp + 0x4]
        shr eax, 0x18
        pop ebx
        pop ecx
        ret
    }
}

// [0x007FB860] sub_007FB860 (250 bytes)
extern "C" void ext_007FB7E0();
extern "C" int mem_0093F7B8;

extern "C" __declspec(naked) void __fastcall fn_007FB860(void* self) {
    __asm {
        sub     esp, 0x20
        fld     dword ptr [mem_0093F7B8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x4]
        fld1
        push    esi
        fstp    dword ptr [esp + 0xc]
        push    ecx
        fld     dword ptr [esp + 0x34]
        mov     eax, edi
        mov     ecx, ebx
        fstp    dword ptr [esp]
        lea     edx, [esp + 0x10]
        lea     esi, [esp + 0xc]
        call    ext_007FB7E0
        add     esp, 0x4
        test    eax, eax
        je      L_7FB954
        mov     ecx, dword ptr [ebp]
        lea     eax, [ecx + 0xc]
        mov     dword ptr [ebp], eax
        fld     dword ptr [edi]
        fld     dword ptr [esp + 0x8]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [edi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [ebx]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [ebx + 0x4]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x8]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [ecx + 0x8]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ebp], ecx
        fld     dword ptr [edi]
        fld     dword ptr [esp + 0xc]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [edi + 0x4]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [ebx]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [ebx + 0x4]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 0x8]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x14]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [eax + 0x8]
    L_7FB954:
        pop     esi
        pop     ebp
        add     esp, 0x20
        ret
    }
}

// [0x007FC2D0] sub_007FC2D0 (253 bytes)
extern "C" int mem_0092C510;

extern "C" __declspec(naked) void __fastcall fn_007FC2D0(void* self) {
    __asm {
        sub esp, 0x28
        fld dword ptr [eax]
        fmul st(0), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fmul st(0), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fmul st(0), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0xc]
        fmul st(0), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fld qword ptr [mem_0092C510]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp]
        fmul dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0x10]
        fld st(0)
        fsubp st(3), st
        fld dword ptr [esp + 0x14]
        fld st(0)
        fsubp st(4), st
        fxch st(3)
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [esp]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x20]
        faddp st(1), st
        fstp dword ptr [ecx + 0x4]
        fxch st(1)
        fsubrp st(3), st
        fld st(0)
        fadd st, st(3)
        fsub st, st(2)
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld dword ptr [esp + 0x24]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x24]
        fld dword ptr [esp]
        fsub dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [ecx + 0x18]
        fsubp st(2), st
        faddp st(1), st
        fstp dword ptr [ecx + 0x28]
        add esp, 0x28
        ret
    }
}

// [0x007F2330] sub_007F2330 (271 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F2330() {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        mov ebx, dword ptr [esp + 0x38]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        xor edi, edi
        test ebx, ebx
        mov dword ptr [edx], edi
        mov eax, dword ptr [esi]
        lea eax, [ecx + 8*eax]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x18], ecx
        je done
        mov dword ptr [esp + 0x20], ebx
        push ebp
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top:
        add dword ptr [edx], 0x2
        mov ebx, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x38]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x4], ebx
        mov ebx, dword ptr [esi]
        add eax, 0x4
        add ebx, ebx
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [esi]
        add ecx, 0x4
        lea ebx, [ebx + ebx + 0x1]
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [esi]
        mov ebp, dword ptr [ebp + 4*ebx]
        add ebp, edi
        add eax, 0x4
        add ecx, 0x4
        cmp ebp, 0x4
        jle short_a
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        add edx, 0x4
        add eax, 0x20
        sub edi, 0x4
        add ecx, 0x20
        mov dword ptr [edx], 0x0
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x1c], ecx
        jmp tail
short_a:
        jne short_b
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        xor edi, edi
        add edx, 0x4
        add eax, 0x20
        add ecx, 0x20
        mov dword ptr [edx], edi
        mov ebx, dword ptr [esi]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x1c], ecx
        jmp tail2
short_b:
        mov edi, ebp
tail2:
        mov ebp, dword ptr [esp + 0x4c]
        add ebp, -0x1
        cmp ebx, ebp
        jge tail
        mov ebp, dword ptr [esp + 0x2c]
        add ebx, 0x1
        mov dword ptr [esi], ebx
        mov ebp, dword ptr [ebp + 8*ebx]
        mov dword ptr [esp + 0x10], ebp
        mov ebp, dword ptr [esp + 0x2c]
        mov ebx, dword ptr [ebp + 8*ebx + 0x4]
        mov dword ptr [esp + 0x14], ebx
tail:
        sub dword ptr [esp + 0x24], 0x1
        jne loop_top
        pop ebp
done:
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007F0860] sub_007F0860 (301 bytes)
extern "C" void ext_007F0720();
extern "C" void ext_007F0800();
extern "C" void ext_007F0830();
extern "C" int mem_00924284;
extern "C" int mem_0092422C;
extern "C" int mem_009241B4;
extern "C" int mem_009241B0;
extern "C" int mem_00924248;

extern "C" __declspec(naked) void __cdecl fn_007F0860(void* a1, void* a2) {
    __asm {
        sub esp, 30h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 40h]
        push esi
        mov esi, dword ptr [esp + 40h]
        push edi
        xor bl, bl
        lea eax, [esp + 1ch]
        mov byte ptr [ebp], bl
        push eax
        mov byte ptr [esi], bl
        mov dword ptr [esp + 34h], 0
        call dword ptr [mem_00924284]
        mov cl, byte ptr [esp + 30h]
        mov byte ptr [ebp], cl
        call ext_007F0720
        test eax, eax
        je L_fail_7F0860
        mov byte ptr [esp + 13h], bl
        call ext_007F0800
        cmp al, 1
        mov byte ptr [esi], al
        jb L_ret0_7F0860
        mov cl, 1
        or bl, -1
        cmp al, cl
        jbe L_mask_7F0860
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_shl_7F0860:
        add cl, cl
        add bl, bl
        cmp cl, al
        jb L_shl_7F0860
L_mask_7F0860:
        call dword ptr [mem_0092422C]
        mov edi, eax
        lea edx, [esp + 18h]
        push edx
        lea eax, [esp + 18h]
        push eax
        push edi
        call dword ptr [mem_009241B4]
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [esp + 18h]
        je L_same_7F0860
        pop edi
        pop esi
        mov byte ptr [ebp], -1
        pop ebp
        mov al, 4
        pop ebx
        add esp, 30h
        ret
L_same_7F0860:
        mov ebp, dword ptr [mem_009241B0]
        mov esi, 1
L_cmp_7F0860:
        cmp esi, eax
        ja L_after_7F0860
        __asm _emit 0x85
        __asm _emit 0xf0
        je L_next_7F0860
        push esi
        push edi
        call ebp
        test eax, eax
        je L_reload_7F0860
        push 0
        call dword ptr [mem_00924248]
        call ext_007F0830
        mov cl, bl
        not cl
        __asm _emit 0x84
        __asm _emit 0xc1
        je L_reload_7F0860
        mov byte ptr [esp + 13h], 1
L_reload_7F0860:
        mov eax, dword ptr [esp + 14h]
L_next_7F0860:
        add esi, esi
        jne L_cmp_7F0860
L_after_7F0860:
        push eax
        push edi
        call ebp
        mov edx, dword ptr [esp + 44h]
        mov al, byte ptr [edx]
        cmp al, 1
        jne L_notone_7F0860
        pop edi
        pop esi
        mov bl, 2
        pop ebp
        mov al, bl
        pop ebx
        add esp, 30h
        ret
L_notone_7F0860:
        cmp byte ptr [esp + 13h], 0
        je L_three_7F0860
        mov ecx, dword ptr [esp + 48h]
        movzx esi, al
        movzx eax, byte ptr [ecx]
        cdq
        idiv esi
        pop edi
        pop esi
        mov bl, 1
        pop ebp
        mov byte ptr [ecx], al
        mov al, bl
        pop ebx
        add esp, 30h
        ret
L_three_7F0860:
        pop edi
        pop esi
        mov bl, 3
        pop ebp
        mov al, bl
        pop ebx
        add esp, 30h
        ret
L_fail_7F0860:
        xor bl, bl
        mov byte ptr [esi], 1
L_ret0_7F0860:
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 30h
        ret
    }
}

// [0x007F0160] sub_007F0160 (302 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F0160(void* self, int idx) {
    __asm {
        mov ecx, dword ptr [esp+4]
        mov eax, dword ptr [ecx+0x228]
        push ebx
        mov ebx, dword ptr [ecx+0x1fc]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+0x18]
        mov edx, dword ptr [eax+4*edi+4]
        mov dword ptr [ecx+0x110], edx
        mov eax, dword ptr [ebx+0x88]
        mov esi, dword ptr [eax+4*edi+4]
        mov dword ptr [ecx+0xb8], esi
        mov dword ptr [ecx+0xc8], esi
        mov dword ptr [ecx+0xd4], esi
        mov dword ptr [ecx+0xe0], esi
        mov dword ptr [ecx+0xec], esi
        mov dword ptr [ecx+0xf8], esi
        mov edx, dword ptr [ebx+0x94]
        mov eax, dword ptr [edx+4*edi+4]
        mov edx, dword ptr [ecx+0x19c]
        lea ebp, [edx+4*edi]
        mov dword ptr [ecx+0xa8], eax
        mov eax, dword ptr [ebp+4]
        mov dword ptr [ecx+0xac], eax
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ecx+0xb0], eax
        mov edx, dword ptr [ebp+4]
        mov dword ptr [ecx+0x58], edx
        mov eax, dword ptr [ebx+0x94]
        mov edx, dword ptr [eax+4*edi+4]
        mov dword ptr [ecx+0x40], edx
        mov dword ptr [ecx+0x18], esi
        mov dword ptr [ecx+0x24], esi
        mov dword ptr [ecx+0x30], esi
        mov dword ptr [ecx+0x8], esi
        mov eax, dword ptr [ebp]
        lea eax, [eax+2*eax]
        shl eax, 5
        add dword ptr [ecx+0x38], eax
        mov edx, dword ptr [ebp]
        add edx, edx
        add edx, edx
        add dword ptr [ecx+0x54], edx
        mov eax, dword ptr [ebx+0x94]
        mov edx, dword ptr [eax+4*edi]
        imul edx, dword ptr [ecx+0x1bc]
        add edx, edx
        add edx, edx
        add dword ptr [ecx+0x6c], edx
        mov eax, dword ptr [ebx+0x94]
        mov edx, dword ptr [eax+4*edi]
        add edx, edx
        add edx, edx
        add dword ptr [ecx+0x3c], edx
        mov eax, dword ptr [ebx+0x88]
        mov eax, dword ptr [eax+4*edi]
        mov edx, eax
        shl edx, 6
        add dword ptr [ecx+0xb4], edx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        shl eax, 4
        add dword ptr [ecx+0xc4], eax
        add dword ptr [ecx+0xd0], eax
        add dword ptr [ecx+0xdc], eax
        add dword ptr [ecx+0xe8], eax
        add dword ptr [ecx+0xf4], eax
        add dword ptr [ecx+0x14], eax
        add dword ptr [ecx+0x20], eax
        add dword ptr [ecx+0x2c], eax
        add dword ptr [ecx+0x4], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007F5710] sub_007F5710 (313 bytes)
extern "C" void ext_007D5AE0();
extern "C" void ext_007D48A0();

extern "C" __declspec(naked) void __fastcall fn_007F5710(void* self) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x30]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        or esi, -1
        fld dword ptr [ecx + 0x4]
        add esp, 8
        fmul dword ptr [eax + 0x4]
        mov edx, 1
        mov dword ptr [esp + 0x28], esi
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x24]
        fmul dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fldz
        fcom dword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x41
        je loc_7F5797
        mov dword ptr [esp + 0x28], edx
    loc_7F5797:
        fld dword ptr [edi + 0x10]
        fimul dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x28], esi
        fstp dword ptr [esp + 0x14]
        fcom dword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x41
        je loc_7F57B5
        mov dword ptr [esp + 0x28], edx
    loc_7F57B5:
        fld dword ptr [edi + 0x14]
        fimul dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x28], esi
        fstp dword ptr [esp + 0x18]
        fcomp dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x41
        je loc_7F57D3
        mov dword ptr [esp + 0x28], edx
    loc_7F57D3:
        fld dword ptr [edi + 0x18]
        mov eax, dword ptr [esp + 0x2c]
        fimul dword ptr [esp + 0x28]
        pop edi
        pop esi
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [ecx + 0x30]
        fstp dword ptr [eax]
        fld st(2)
        fmul dword ptr [ecx + 0x14]
        fld st(2)
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x24]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [ecx + 0x34]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x18]
        fmulp st(3), st
        fld dword ptr [ecx + 0x8]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [ecx + 0x38]
        fstp dword ptr [eax + 0x8]
        add esp, 0x18
        ret
    }
}

// [0x007F48F0] sub_007F48F0 (354 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F48F0(void* a1, void* a2, void* a3, int a4) {
    __asm {
        sub esp, 0x10
        mov ecx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x24]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        mov eax, ebx
        shl eax, 5
        mov edx, dword ptr [eax + ecx]
        push esi
        push edi
        lea edi, [eax + ecx]
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [esp + 0x18], ecx
        xor ecx, ecx
        add eax, ebp
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x10], eax
        mov edx, eax
        mov eax, dword ptr [esp + 0x2c]
        _emit 0x8b
        _emit 0xff
    L1:
        fld dword ptr [edx]
        add ecx, 1
        fmul dword ptr [eax]
        add edx, 4
        cmp ecx, 3
        fadd dword ptr [esp + ecx*4 + 0x10]
        fstp dword ptr [esp + ecx*4 + 0x10]
        jne L1
        lea ecx, [ebx + 2]
        shl ecx, 5
        xor edx, edx
        add ecx, ebp
    L2:
        fld dword ptr [ecx]
        add edx, 1
        fmul dword ptr [eax + 4]
        add ecx, 4
        cmp edx, 3
        fadd dword ptr [esp + edx*4 + 0x10]
        fstp dword ptr [esp + edx*4 + 0x10]
        jne L2
        lea ecx, [ebx + 4]
        shl ecx, 5
        xor edx, edx
        add ecx, ebp
    L3:
        fld dword ptr [eax + 8]
        add edx, 1
        fmul dword ptr [ecx]
        add ecx, 4
        cmp edx, 3
        fadd dword ptr [esp + edx*4 + 0x10]
        fstp dword ptr [esp + edx*4 + 0x10]
        jne L3
        lea ecx, [ebx + 6]
        shl ecx, 5
        xor edx, edx
        mov esi, edi
        add ecx, ebp
    L4:
        fld dword ptr [ecx]
        add edx, 1
        fmul dword ptr [eax + 0xc]
        add ecx, 4
        add esi, 4
        cmp edx, 3
        fadd dword ptr [esp + edx*4 + 0x10]
        fstp dword ptr [esi - 4]
        jne L4
        mov ecx, dword ptr [edi + 0x10]
        mov edx, dword ptr [edi + 0x14]
        lea esi, [edi + 0x10]
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], ecx
        xor ecx, ecx
        lea edx, [edi + 0x10]
    L5:
        fld dword ptr [edx]
        add ecx, 1
        fmul dword ptr [eax]
        add edx, 4
        cmp ecx, 3
        fadd dword ptr [esp + ecx*4 + 0x10]
        fstp dword ptr [esp + ecx*4 + 0x10]
        jne L5
        xor ecx, ecx
        lea edx, [edi + 0x50]
        _emit 0x8b
        _emit 0xff
    L6:
        fld dword ptr [edx]
        add ecx, 1
        fmul dword ptr [eax + 4]
        add edx, 4
        cmp ecx, 3
        fadd dword ptr [esp + ecx*4 + 0x10]
        fstp dword ptr [esp + ecx*4 + 0x10]
        jne L6
        xor ecx, ecx
        lea edx, [edi + 0x90]
    L7:
        fld dword ptr [edx]
        add ecx, 1
        fmul dword ptr [eax + 8]
        add edx, 4
        cmp ecx, 3
        fadd dword ptr [esp + ecx*4 + 0x10]
        fstp dword ptr [esp + ecx*4 + 0x10]
        jne L7
        xor ecx, ecx
        lea edx, [edi + 0xd0]
    L8:
        fld dword ptr [edx]
        add ecx, 1
        fmul dword ptr [eax + 0xc]
        add edx, 4
        add esi, 4
        cmp ecx, 3
        fadd dword ptr [esp + ecx*4 + 0x10]
        fstp dword ptr [esi - 4]
        jne L8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_006A7250(); extern "C" void ext_007C6F60(); extern "C" void ext_007C6F70(); extern "C" void ext_007C6FA0(); extern "C" void ext_007C7000(); extern "C" void ext_007CAB80(); extern "C" void ext_007CC4E0(); extern "C" void ext_007CC510(); extern "C" int mem_0099DEC8; extern "C" int mem_00993830;
// [0x007FBEB0] sub_007FBEB0 (356 bytes)
extern "C" __declspec(naked) int __cdecl fn_007FBEB0(void* a, void* b) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, [esp+0x38]
        push esi
        mov esi, [esp+0x34]
        mov [ebp], esi
        mov eax, [esi]
        push edi
        push eax
        call ext_007C7000
        mov ecx, [esi+4]
        push ecx
        call ext_007C7000
        mov edx, [esi+4]
        push edx
        mov ebx, eax
        call ext_007C6F70
        mov [esp+0x4c], eax
        mov eax, [esi+4]
        push eax
        call ext_007C6FA0
        mov ecx, [esi]
        push ecx
        mov edi, eax
        call ext_007C6FA0
        fld dword ptr [eax]
        fsub dword ptr [edi]
        add esp, 0x14
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+4]
        fsub dword ptr [edi+4]
        fstp dword ptr [esp+0x20]
        fld dword ptr [eax+8]
        fsub dword ptr [edi+8]
        fstp dword ptr [esp+0x24]
        fld dword ptr [esp+0x1c]
        fld dword ptr [esp+0x20]
        fld dword ptr [esp+0x24]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp+0x38]
        fld dword ptr [esp+0x38]
        call ext_006A7250
        fstp dword ptr [esp+0x38]
        fld dword ptr [esp+0x38]
        fld dword ptr [esp+0x3c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fcomp qword ptr [mem_0099DEC8]
        fnstsw ax
        test ah, 5
        jp L1
        pop edi
        fstp dword ptr [ebp+4]
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret
    L1:
        mov eax, [esi+4]
        fstp st(0)
        lea edx, [esp+0x10]
        push edx
        push eax
        call ext_007C6F70
        add esp, 4
        push eax
        push ebx
        call ext_007CC4E0
        fld dword ptr [esp+0x1c]
        fld qword ptr [mem_00993830]
        mov eax, [esi]
        fmul st(1), st
        add esp, 0xc
        fxch st(1)
        lea ecx, [esp+0x28]
        push ecx
        fstp dword ptr [esp+0x14]
        lea edx, [esp+0x14]
        fld dword ptr [esp+0x18]
        push edx
        fmul st, st(1)
        push eax
        fstp dword ptr [esp+0x20]
        fmul dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
        call ext_007C6F60
        add esp, 4
        push eax
        call ext_007CAB80
        mov edx, [esp+0x4c]
        lea ecx, [esp+0x34]
        push ecx
        push edx
        push ebx
        call ext_007CC510
        fstp dword ptr [esp+0x50]
        fld dword ptr [esp+0x50]
        add esp, 0x18
        fld dword ptr [esp+0x10]
        pop edi
        fmul dword ptr [esp+0x18]
        pop esi
        fld dword ptr [esp+0xc]
        mov eax, 1
        fmul dword ptr [esp+0x18]
        faddp st(1), st
        fld dword ptr [esp+0x10]
        fmul dword ptr [esp+0x1c]
        faddp st(1), st
        fstp dword ptr [esp+0x30]
        fdiv dword ptr [esp+0x30]
        fstp dword ptr [ebp+4]
        pop ebp
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x007F0990] sub_007F0990 (368 bytes)
extern "C" void ext_007D84A0();
extern "C" void ext_007D8710();
extern "C" int mem_0099D148;
extern "C" int mem_0093C1A8;
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __fastcall fn_007F0990(void* self) {
    __asm {
        sub esp, 0x1c
        fldz
        push ebx
        push ebp
        fst dword ptr [esp + 0x8]
        push esi
        fst dword ptr [esp + 0x10]
        mov esi, eax
        fstp dword ptr [esp + 0x14]
        push edi
        push esi
        call ext_007D8710
        mov ebx, dword ptr [esi + 0x94]
        mov ebp, dword ptr [esi + 0x98]
        mov edi, eax
        add esp, 0x4
        test edi, edi
        jne loc_7f09d0
        fld dword ptr [mem_0099D148]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    loc_7f09d0:
        cmp dword ptr [edi + 0x164], 0
        jne loc_7f09e7
        fld dword ptr [mem_0093C1A8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    loc_7f09e7:
        cmp dword ptr [edi + 0x98], 0
        mov ecx, dword ptr [esp + 0x30]
        jne loc_7f0a01
        fld dword ptr [ecx + 0x24]
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x10]
    loc_7f0a01:
        test ebx, ebx
        fild dword ptr [edi + 0xa4]
        mov edx, 0x100
        fmul dword ptr [ecx + 0x28]
        fld dword ptr [ecx + 0x20]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        je loc_7f0a3d
        fldz
        fcomp dword ptr [ebx + 0x20c]
        fnstsw ax
        test ah, 0x5
        jnp loc_7f0a58
        test dword ptr [ebx + 0x1c4], edx
        je loc_7f0a58
    loc_7f0a3d:
        test ebp, ebp
        je loc_7f0a63
        fldz
        fcomp dword ptr [ebp + 0x20c]
        fnstsw ax
        test ah, 0x5
        jnp loc_7f0a58
        test dword ptr [ebp + 0x1c4], edx
        jne loc_7f0a63
    loc_7f0a58:
        fld dword ptr [ecx + 0x34]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
    loc_7f0a63:
        mov esi, dword ptr [edi + 0x168]
        test esi, esi
        je loc_7f0abf
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
    loc_7f0a70:
        fld dword ptr [esi + 0x58]
        lea eax, [esp + 0x20]
        fadd dword ptr [esp + 0x14]
        push eax
        push ebp
        push ebx
        push esi
        fstp dword ptr [esp + 0x24]
        call ext_007D84A0
        fld dword ptr [esi + 0x50]
        fmul dword ptr [esp + 0x34]
        add esp, 0x10
        fld dword ptr [esi + 0x4c]
        fmul dword ptr [esp + 0x20]
        faddp st(1), st
        fld dword ptr [esi + 0x54]
        mov esi, dword ptr [esi + 0x5c]
        test esi, esi
        fmul dword ptr [esp + 0x28]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        jne loc_7f0a70
        mov ecx, dword ptr [esp + 0x30]
    loc_7f0abf:
        fild dword ptr [edi + 0x164]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [esp + 0x10]
        pop ebx
        fld dword ptr [ecx + 0x2c]
        fmul dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fdivp st(2), st
        fld dword ptr [esp]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x30]
        fmul dword ptr [esp + 0x8]
        fdivrp st(1), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x1c
        ret
    }
}

// [0x007F0C00] sub_007F0C00 (402 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007D8710();
extern "C" void ext_007D8850();
extern "C" int mem_00AA7E40;
extern "C" int mem_00925298;

extern "C" __declspec(naked) void __cdecl fn_007F0C00(void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        push edi
        push eax
        call ext_007D8710
        add esp, 0x4
        test eax, eax
        mov dword ptr [ebp - 0x14], eax
        je loc_7f0d7e
        mov edi, dword ptr [eax + 0x164]
        lea esi, [4*edi]
        mov eax, esi
        call ext_006A6EC0
        mov eax, esi
        mov ebx, esp
        call ext_006A6EC0
        mov ecx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [ecx + 0x168]
        test eax, eax
        mov esi, esp
        mov dword ptr [ebp - 0x10], esi
        mov dword ptr [ebp - 0x8], 0x0
        je loc_7f0c86
        mov edx, ebx
        mov ecx, esi
        sub edx, esi
    loc_7f0c66:
        cmp dword ptr [eax + 0x84], 0x0
        je loc_7f0c73
        add dword ptr [ebp - 0x8], 0x1
    loc_7f0c73:
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [ecx], 0x0
        add ecx, 0x4
        test eax, eax
        jne loc_7f0c66
    loc_7f0c86:
        push 0x7f0bc0
        push 0x4
        push edi
        push ebx
        call dword ptr [mem_00925298]
        mov ecx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [ecx + 0xa4]
        add esp, 0x10
        cmp eax, dword ptr [ecx + 0x158]
        mov dword ptr [ebp - 0x18], edi
        mov dword ptr [ebp - 0xc], eax
        jle loc_7f0d7e
        jmp loc_7f0cb8
    loc_7f0cb5:
        mov esi, dword ptr [ebp - 0x10]
    loc_7f0cb8:
        cmp dword ptr [ebp - 0x8], 0x0
        je loc_7f0d1f
        fild dword ptr [ebp - 0x8]
        mov edx, dword ptr [ebp + 0xc]
        fidiv dword ptr [ebp - 0x18]
        fld dword ptr [edx + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x41
        je loc_7f0d1f
        xor ecx, ecx
        test edi, edi
        jle loc_7f0cfb
        mov edx, esi
        mov eax, ebx
        sub edx, ebx
        nop
    loc_7f0ce0:
        cmp dword ptr [edx + eax], 0x1
        je loc_7f0cf1
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 0x84], 0x0
        jne loc_7f0cfb
    loc_7f0cf1:
        add ecx, 0x1
        add eax, 0x4
        cmp ecx, edi
        jl loc_7f0ce0
    loc_7f0cfb:
        mov ecx, dword ptr [ebx + 4*ecx]
        mov esi, 0x1
        sub dword ptr [ebp - 0x8], esi
        xor eax, eax
        cmp dword ptr [ecx + 0x84], esi
        mov dword ptr [ecx + 0x84], 0x0
        setne al
        add eax, esi
        jmp loc_7f0d69
    loc_7f0d1f:
        xor esi, esi
        test edi, edi
        jle loc_7f0d4b
        mov ecx, dword ptr [ebp - 0x10]
        mov eax, ebx
        sub ecx, ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loc_7f0d30:
        cmp dword ptr [eax + ecx], 0x1
        je loc_7f0d41
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 0x84], 0x0
        je loc_7f0d4b
    loc_7f0d41:
        add esi, 0x1
        add eax, 0x4
        cmp esi, edi
        jl loc_7f0d30
    loc_7f0d4b:
        mov eax, dword ptr [ebx + 4*esi]
        mov ecx, dword ptr [ebp - 0x14]
        push eax
        push ecx
        call ext_007D8850
        mov edx, dword ptr [ebp - 0x10]
        mov eax, 0x1
        add esp, 0x8
        sub dword ptr [ebp - 0x18], eax
        mov dword ptr [edx + 4*esi], eax
    loc_7f0d69:
        sub dword ptr [ebp - 0xc], eax
        mov eax, dword ptr [ebp - 0xc]
        mov ecx, dword ptr [ebp - 0x14]
        cmp eax, dword ptr [ecx + 0x158]
        jg loc_7f0cb5
    loc_7f0d7e:
        lea esp, [ebp - 0x24]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007F4AB0] sub_007F4AB0 (414 bytes)
extern "C" void ext_007F48F0();
extern "C" void ext_007F4A60();
extern "C" __declspec(naked) void __cdecl fn_007F4AB0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0Ch]
        push ebp
        mov ebp, dword ptr [esp + 34h]
        push esi
        xor ecx, ecx
        test ebp, ebp
        push edi
        je L_AFD
        fldz
    L_OUT:
        mov eax, 20h
    L_ROW:
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 4*ecx]
        fst dword ptr [edx + eax - 20h]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 4*ecx]
        fst dword ptr [edx + eax - 10h]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 4*ecx]
        fst dword ptr [eax + edx]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 4*ecx]
        fst dword ptr [edx + eax + 10h]
        add eax, 4
        cmp eax, 2Ch
        jne L_ROW
        add ecx, 1
        cmp ecx, ebp
        jne L_OUT
        __asm _emit 0xdd
        __asm _emit 0xd8
    L_AFD:
        mov eax, dword ptr [esp + 2Ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebx + 4], ebp
        je L_B77
        mov esi, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 44h]
        add esi, 3Ch
        mov dword ptr [esp + 18h], eax
        __asm _emit 0x8b
        __asm _emit 0xff
    L_B20:
        cmp dword ptr [esi - 30h], -1
        mov eax, dword ptr [esi - 10h]
        mov ebp, dword ptr [esi]
        mov dword ptr [esp + 28h], eax
        je L_B47
        mov edx, dword ptr [esi - 20h]
        mov eax, dword ptr [ebx]
        push 0
        push edi
        lea ecx, [esi - 3Ch]
        push ecx
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ext_007F48F0
        add esp, 10h
    L_B47:
        cmp dword ptr [esp + 28h], -1
        je L_B63
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 4*ebp]
        push 1
        push edi
        lea edx, [esi - 3Ch]
        push edx
        push ecx
        call ext_007F48F0
        add esp, 10h
    L_B63:
        add edi, 10h
        add esi, 100h
        sub dword ptr [esp + 18h], 1
        jne L_B20
        mov ebp, dword ptr [esp + 3Ch]
    L_B77:
        mov ecx, dword ptr [esp + 20h]
        test ecx, ecx
        mov esi, dword ptr [esp + 14h]
        je L_BF1
        mov edi, dword ptr [esp + 1Ch]
        xor eax, eax
        mov dword ptr [esp + 18h], ecx
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_B90:
        mov edx, dword ptr [eax + edi]
        xor ecx, ecx
    L_B95:
        mov ebp, dword ptr [esi]
        fld dword ptr [edx + ecx]
        mov ebp, dword ptr [eax + ebp]
        fstp dword ptr [ecx + ebp]
        add ecx, 4
        cmp ecx, 0Ch
        jne L_B95
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ecx + 0Ch], 0
        mov edx, dword ptr [eax + edi]
        mov ecx, 10h
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_BC0:
        mov ebp, dword ptr [esi]
        fld dword ptr [edx + ecx]
        mov ebp, dword ptr [eax + ebp]
        fstp dword ptr [ecx + ebp]
        add ecx, 4
        cmp ecx, 1Ch
        jne L_BC0
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [eax + edx]
        add eax, 4
        sub dword ptr [esp + 18h], 1
        mov dword ptr [ecx + 1Ch], 0
        jne L_B90
        mov ecx, dword ptr [esp + 20h]
        mov ebp, dword ptr [esp + 3Ch]
    L_BF1:
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esi + 4], ecx
        je L_C49
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_C00:
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [ecx + 8*edi]
        cmp eax, -1
        mov ebp, dword ptr [ecx + 8*edi + 4]
        je L_C24
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [edx + 4*edi]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4*eax]
        push ecx
        push eax
        call ext_007F4A60
        add esp, 8
    L_C24:
        cmp ebp, -1
        je L_C40
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 4*ebp]
        add edx, 20h
        push edx
        push ecx
        call ext_007F4A60
        add esp, 8
    L_C40:
        add edi, 1
        cmp edi, dword ptr [esp + 3Ch]
        jne L_C00
    L_C49:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007FAF80] sub_007FAF80 (434 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();

extern "C" __declspec(naked) void __fastcall fn_007FAF80(void* self) {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+30h]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi+4]
        push ecx
        mov ebx, eax
        call ext_007C6F70
        mov edx, dword ptr [esi+4]
        push edx
        mov edi, eax
        call ext_007C6F30
        fstp qword ptr [esp+1Ch]
        mov eax, dword ptr [esi]
        push eax
        call ext_007C6F30
        fadd qword ptr [esp+20h]
        mov ecx, dword ptr [esi]
        push ecx
        fstp dword ptr [esp+24h]
        call ext_007C7000
        mov edx, dword ptr [esi+4]
        push edx
        mov ebp, eax
        call ext_007C7000
        mov esi, dword ptr [esp+50h]
        xor eax, eax
        push ebp
        mov dword ptr [esi+0Ch], eax
        mov dword ptr [esi+1Ch], eax
        call ext_007CB970
        fstp dword ptr [esp+54h]
        fld dword ptr [ebx+30h]
        add esp, 1Ch
        fsub dword ptr [edi+30h]
        fstp dword ptr [esp+24h]
        fld dword ptr [ebx+34h]
        fsub dword ptr [edi+34h]
        fstp dword ptr [esp+28h]
        fld dword ptr [ebx+38h]
        fsub dword ptr [edi+38h]
        fstp dword ptr [esp+2Ch]
        fld dword ptr [edi+20h]
        fstp dword ptr [esp+18h]
        fld dword ptr [edi+24h]
        fstp dword ptr [esp+1Ch]
        fld dword ptr [edi+28h]
        fstp dword ptr [esp+20h]
        fld dword ptr [esp+28h]
        fld dword ptr [esp+1Ch]
        fld st(0)
        fmulp st(2), st(0)
        fld dword ptr [esp+24h]
        fld dword ptr [esp+18h]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(3)
        faddp st(1), st(0)
        fld dword ptr [esp+20h]
        fld st(0)
        fmul dword ptr [esp+2Ch]
        faddp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp+34h]
        fld dword ptr [esp+34h]
        fld dword ptr [esp+38h]
        fld st(0)
        fsubp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp+34h]
        fld dword ptr [esp+34h]
        fld dword ptr [esp+10h]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L_7FB081
        fstp st(3)
        pop edi
        fstp st(3)
        pop esi
        fstp st(0)
        pop ebp
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop ebx
        add esp, 20h
        ret
    L_7FB081:
        cmp dword ptr [esi+8], 0
        mov eax, 1
        jle L_7FB11D
        mov ecx, dword ptr [esi+4]
        fxch st(4)
        mov word ptr [ecx+1Ch], 203h
        mov ecx, dword ptr [esi+4]
        fst dword ptr [ecx+0Ch]
        add ecx, 0Ch
        fxch st(3)
        fst dword ptr [ecx+4]
        pop edi
        fxch st(2)
        fst dword ptr [ecx+8]
        mov edx, dword ptr [esi+4]
        fxch st(4)
        fstp dword ptr [edx+18h]
        mov ecx, dword ptr [esi+4]
        fld st(2)
        fmul st(0), st(1)
        fstp dword ptr [esp+20h]
        fld st(1)
        fmul st(0), st(1)
        fstp dword ptr [esp+24h]
        fmul st(0), st(3)
        fstp dword ptr [esp+28h]
        fld dword ptr [ebx+30h]
        fsub dword ptr [esp+20h]
        fstp dword ptr [esp+14h]
        fld dword ptr [ebx+34h]
        fsub dword ptr [esp+24h]
        fstp dword ptr [esp+18h]
        fld dword ptr [ebx+38h]
        fsub dword ptr [esp+28h]
        fstp dword ptr [esp+1Ch]
        fld dword ptr [esp+14h]
        fstp dword ptr [ecx]
        fld dword ptr [esp+18h]
        fstp dword ptr [ecx+4]
        fld dword ptr [esp+1Ch]
        fstp dword ptr [ecx+8]
        fxch st(1)
        fstp dword ptr [esi+10h]
        fstp dword ptr [esi+14h]
        fstp dword ptr [esi+18h]
        mov dword ptr [esi+0Ch], eax
        mov dword ptr [esi+1Ch], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret
    L_7FB11D:
        fstp st(3)
        pop edi
        fstp st(3)
        mov dword ptr [esi+1Ch], eax
        fstp st(0)
        pop esi
        fstp st(1)
        pop ebp
        fstp st(0)
        pop ebx
        add esp, 20h
        ret
    }
}

// [0x007F7A30] sub_007F7A30 (444 bytes)
extern "C" double mem_0099EDE0;

extern "C" __declspec(naked) void __cdecl fn_007F7A30() {
    __asm {
        fld dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        push ebx
        fld st(0)
        push esi
        fld dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x24]
        fmul st, st(3)
        push edi
        fld dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x24]
        fld st(0)
        mov ebx, 0x17
        fmul st, st(3)
        fsubp st(2), st
        fxch st(4)
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x14]
        fldz

    loc_7F7A6A:
        test edx, edx
        fld dword ptr [edi + edx*4]
        fstp dword ptr [esp + 0x18]
        mov eax, edx
        fld dword ptr [esp + 0x14]
        je loc_7F7A94

    loc_7F7A7B:
        fld st(0)

    loc_7F7A7D:
        fld dword ptr [edi + eax*4 - 0x4]
        sub eax, 1
        fld dword ptr [esp + 0x18]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        jne loc_7F7A7D

        fstp st(0)

    loc_7F7A94:
        fld dword ptr [esp + 0x18]
        fld st(0)
        fld st(4)
        fmul st, st(1)
        fcomp st(4)
        fnstsw ax
        test ah, 0x5
        jp loc_7F7ABB

        fstp st(5)
        fxch st(1)
        fst dword ptr [esp + 0x14]
        fxch st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        jmp loc_7F7AE4

    loc_7F7ABB:
        fstp st(4)
        fld dword ptr [esp + 0x1c]
        fmul st, st(4)
        fcomp st(3)
        fnstsw ax
        test ah, 0x5
        jp loc_7F7BE0

        fxch st(1)
        fst dword ptr [esp + 0x10]
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fxch st(3)
        fxch st(4)

    loc_7F7AE4:
        fld dword ptr [esi + edx*4 - 0x4]
        lea eax, [edx - 1]
        test eax, eax
        fstp dword ptr [esp + 0x14]
        je loc_7F7B0C

        fld st(1)

    loc_7F7AF5:
        fld dword ptr [esi + eax*4 - 0x4]
        sub eax, 1
        fld dword ptr [esp + 0x14]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        jne loc_7F7AF5

        fstp st(0)

    loc_7F7B0C:
        fldz
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne loc_7F7B24
        mov ecx, 1
        jmp loc_7F7B26

    loc_7F7B24:
        xor ecx, ecx

    loc_7F7B26:
        fld dword ptr [esp + 0x10]
        fld st(3)
        fsub st, st(1)
        fmul st, st(2)
        fsub st, st(7)
        fcomp st(5)
        fnstsw ax
        test ah, 0x41
        jne loc_7F7B42
        mov eax, 1
        jmp loc_7F7B44

    loc_7F7B42:
        xor eax, eax

    loc_7F7B44:
        cmp eax, ecx
        jne loc_7F7B70
        fld st(2)
        fsub st, st(4)
        fmul st, st(2)
        fadd st, st(7)
        fcomp st(5)
        fnstsw ax
        test ah, 0x41
        jne loc_7F7B60
        mov eax, 1
        jmp loc_7F7B62

    loc_7F7B60:
        xor eax, eax

    loc_7F7B62:
        cmp eax, ecx
        jne loc_7F7B70
        fstp st(0)
        fdivp st(5), st
        fld st(1)
        fsubrp st(5), st
        jmp loc_7F7B88

    loc_7F7B70:
        fstp st(1)
        fstp st(5)
        fld dword ptr [esp + 0x1c]
        fld st(4)
        fld st(1)
        fmulp st(7), st
        fld st(2)
        fmul st, st(1)
        fsubp st(7), st
        fsubp st(1), st
        fdivp st(5), st

    loc_7F7B88:
        fxch st(4)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld st(0)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        fld qword ptr [mem_0099EDE0]
        fmul st(2), st
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        je loc_7F7BD2
        sub ebx, 1
        jne loc_7F7A6A

    loc_7F7BD2:
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebx
        fld dword ptr [esp + 0x8]
        ret

    loc_7F7BE0:
        fstp st(0)
        pop edi
        fstp st(2)
        pop esi
        fstp st(0)
        pop ebx
        fstp st(1)
        ret
    }
}

// [0x007FADC0] sub_007FADC0 (444 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();
extern "C" void ext_007CC4E0();
extern "C" void ext_007CC510();
extern "C" int mem_00993868;

extern "C" __declspec(naked) void __fastcall fn_007FADC0(void* self) {
    __asm {
        sub esp, 0x3c
        mov eax, dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x44]
        push ebx
        fstp dword ptr [eax + 0x4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        fld dword ptr [ecx + 0xa0]
        push edi
        push eax
        fstp dword ptr [esp + 0x18]
        call ext_007C6FA0
        mov edx, dword ptr [esi]
        push edx
        mov edi, eax
        call ext_007C6F70
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C6FA0
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov ebx, eax
        call ext_007C6F70
        mov edx, dword ptr [esi]
        push edx
        call ext_007C7000
        mov dword ptr [esp + 0x64], eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C7000
        fld dword ptr [edi]
        mov ecx, dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [edi + 0x4]
        push ecx
        fstp dword ptr [esp + 0x3c]
        mov ebp, eax
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [esp + 0x4c]
        call ext_007CB970
        mov eax, dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x34]
        add esp, 0x1c
        lea edx, [esp + 0x40]
        push edx
        push eax
        call ext_007C6F70
        add esp, 0x4
        push eax
        push ebp
        call ext_007CC4E0
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi + 0x4]
        add esp, 0xc
        fstp dword ptr [esp + 0x34]
        add ecx, 0x30
        fld dword ptr [esp + 0x20]
        push ecx
        fsub dword ptr [esp + 0x30]
        push edx
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x2c]
        fsub dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x44]
        call ext_007C6F70
        add esp, 0x4
        push eax
        push ebp
        call ext_007CC510
        fstp dword ptr [esp + 0x1c]
        add esp, 0xc
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmul dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fmul dword ptr [esp + 0x34]
        faddp st(2), st(0)
        fld dword ptr [esp + 0x48]
        fld st(0)
        fmul dword ptr [esp + 0x3c]
        faddp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fld st(0)
        fmulp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x38]
        fmulp st(1), st(0)
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x3c]
        fld st(1)
        fmulp st(2), st(0)
        fld st(2)
        fmulp st(3), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fmul st(0), st(0)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        call ext_006A7250
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        pop edi
        fstp dword ptr [esp + 0x4c]
        pop esi
        fld dword ptr [esp + 0x48]
        pop ebp
        fld st(0)
        pop ebx
        fmul dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_00993868]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne loc_7FAF63
        fstp st(0)
        xor eax, eax
        add esp, 0x3c
        ret
    loc_7FAF63:
        fld dword ptr [esp]
        mov eax, dword ptr [esp + 0x48]
        fsub dword ptr [esp + 0x8]
        fdivrp st(1), st(0)
        fstp dword ptr [eax + 0x4]
        mov eax, 0x1
        add esp, 0x3c
        ret
    }
}

// [0x007F4160] sub_007F4160 (453 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_0099EDA0;
extern "C" int mem_0099ED90;

extern "C" __declspec(naked) void __cdecl fn_007F4160(void) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x18]
        fld dword ptr [ebp + 0x58]
        mov eax, dword ptr [ebp + 0x8]
        fst dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebp + 0xc]
        movss xmm4, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x38], edx
        mov edx, dword ptr [ebp + 0x44]
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [ebp + 0x48]
        mov dword ptr [esp + 0x38], edx
        mov edx, dword ptr [ebp + 0x50]
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [ebp + 0x54]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x38], edx
        cdq
        and edx, 0x3
        mov ebx, dword ptr [ebp + 0x4c]
        add eax, edx
        xorps xmm6, xmm6
        sar eax, 0x2
        or esi, -0x1
        test eax, eax
        movaps xmm5, xmm6
        mov edi, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0x18], ecx
        mov ecx, dword ptr [ebp + 0x40]
        movaps xmm7, xmm5
        shufps xmm4, xmm4, 0x0
        movaps xmmword ptr [esp + 0x30], xmm7
        jle L_after_loop
        sub edi, ecx
        sub ebx, ecx
L_loop:
        movaps xmm3, xmmword ptr [edi + ecx]
        movaps xmm1, xmmword ptr [mem_0099EDA0]
        andnps xmm1, xmm3
        movaps xmm2, xmm4
        cmpltps xmm2, xmm1
        movmskps edx, xmm2
        test edx, edx
        je L_skip
        movaps xmm0, xmmword ptr [ebx + ecx]
        movaps xmm7, xmm3
        cmpltps xmm7, xmm6
        andps xmm0, xmm7
        movaps xmm7, xmm6
        cmpltps xmm7, xmm3
        movaps xmm3, xmmword ptr [ecx]
        andps xmm7, xmm3
        orps xmm0, xmm7
        movaps xmm7, xmmword ptr [esp + 0x30]
        andps xmm0, xmm2
        movaps xmm2, xmm0
        andps xmm2, xmm1
        movaps xmm1, xmm0
        andnps xmm1, xmm4
        orps xmm2, xmm1
        movaps xmm1, xmm0
        andnps xmm0, xmm5
        andps xmm1, xmm7
        orps xmm1, xmm0
        movaps xmm4, xmm2
        movaps xmm5, xmm1
L_skip:
        movaps xmm0, xmmword ptr [mem_0099ED90]
        addps xmm0, xmm7
        add ecx, 0x10
        sub eax, 0x1
        movaps xmm7, xmm0
        movaps xmmword ptr [esp + 0x30], xmm7
        jne L_loop
L_after_loop:
        movaps xmmword ptr [esp + 0x30], xmm4
        fld dword ptr [esp + 0x30]
        fcom st(1)
        movaps xmmword ptr [esp + 0x20], xmm5
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_b
        fstp dword ptr [esp + 0x14]
        xor esi, esi
        jmp L_c
L_b:
        fstp st(0)
L_c:
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_d
        fstp dword ptr [esp + 0x14]
        mov esi, 0x1
        jmp L_e
L_d:
        fstp st(0)
L_e:
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_f
        fstp dword ptr [esp + 0x14]
        mov esi, 0x2
        jmp L_g
L_f:
        fstp st(0)
L_g:
        fld dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_h
        mov esi, 0x3
        fld dword ptr [esp + 4*esi + 0x20]
        call ext_006A6DE0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], eax
        mov dword ptr [edx], esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_h:
        cmp esi, -0x1
        je L_none
        fld dword ptr [esp + 4*esi + 0x20]
        call ext_006A6DE0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], eax
        mov dword ptr [edx], esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_none:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        or eax, -0x1
        pop edi
        mov dword ptr [ecx], eax
        mov dword ptr [edx], esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007F28F0] sub_007F28F0 (460 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F28F0(void* self) {
    __asm {
        sub esp, 0x0c
        mov eax, dword ptr [esp + 0xa4]
        push esi
        xor esi, esi
        push edi
        xor edi, edi
        cmp eax, esi
        mov dword ptr [esp + 0x08], esi
        je L_7f2ab6
        mov ecx, dword ptr [esp + 0xa8]
        fldz
        push ebx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], eax
        push ebp
L_7f291f:
        cmp dword ptr [ecx], 0
        mov dword ptr [esp + 0xb0], 0
        je L_7f2a3e
        mov eax, dword ptr [esp + 0xbc]
        mov edx, dword ptr [esp + 0x10]
        lea ebp, [eax + 4*edx]
L_7f2941:
        xor ebx, ebx
        cmp dword ptr [ebp], ebx
        je L_7f2a04
L_7f294c:
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        mov ecx, edi
        sar eax, 2
        and ecx, 0x80000003
        jns L_7f2966
        dec ecx
        or ecx, -4
        inc ecx
L_7f2966:
        lea ecx, [ecx + 4*eax]
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        add ecx, ecx
        mov edx, esi
        add ecx, ecx
        sar eax, 2
        and edx, 0x80000003
        jns L_7f2987
        dec edx
        or edx, -4
        inc edx
L_7f2987:
        lea eax, [edx + 4*eax]
        mov edx, dword ptr [esp + 0x68]
        fld dword ptr [ecx + edx]
        mov edx, dword ptr [esp + 0x20]
        add eax, eax
        add eax, eax
        fstp dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x74]
        fld dword ptr [ecx + edx]
        mov edx, dword ptr [esp + 0x2c]
        fstp dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x80]
        fld dword ptr [ecx + edx]
        mov edx, dword ptr [esp + 0x38]
        fstp dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x8c]
        fld dword ptr [ecx + edx]
        mov edx, dword ptr [esp + 0x44]
        fstp dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x98]
        fld dword ptr [ecx + edx]
        mov edx, dword ptr [esp + 0x50]
        fstp dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0xa4]
        fld dword ptr [ecx + edx]
        mov ecx, dword ptr [esp + 0x5c]
        add ebx, 1
        fstp dword ptr [eax + ecx]
        add esi, 1
        add edi, 1
        cmp ebx, dword ptr [ebp]
        jne L_7f294c
        mov ecx, dword ptr [esp + 0x14]
L_7f2a04:
        mov eax, edi
        and eax, 0x80000003
        jns L_7f2a12
        dec eax
        or eax, -4
        inc eax
L_7f2a12:
        je L_7f2a1d
        mov edx, 4
        sub edx, eax
        add edi, edx
L_7f2a1d:
        mov eax, dword ptr [esp + 0xb0]
        add dword ptr [esp + 0x10], 1
        add eax, 1
        add ebp, 4
        cmp eax, dword ptr [ecx]
        mov dword ptr [esp + 0xb0], eax
        jne L_7f2941
L_7f2a3e:
        mov ebp, esi
L_7f2a40:
        mov ebx, esi
        and ebx, 0x80000003
        jns L_7f2a4f
        dec ebx
        or ebx, -4
        inc ebx
L_7f2a4f:
        mov eax, esi
        je L_7f2a58
        sub eax, ebx
        add eax, 4
L_7f2a58:
        cmp ebp, eax
        je L_7f2aa0
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        mov edx, dword ptr [esp + 0x20]
        sar eax, 2
        lea eax, [ebx + 4*eax]
        add eax, eax
        add eax, eax
        add esi, 1
        fst dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x2c]
        add ebp, 1
        fst dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x38]
        fst dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x44]
        fst dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x50]
        fst dword ptr [eax + edx]
        mov edx, dword ptr [esp + 0x5c]
        fst dword ptr [eax + edx]
        jmp L_7f2a40
L_7f2aa0:
        add ecx, 4
        sub dword ptr [esp + 0x18], 1
        mov dword ptr [esp + 0x14], ecx
        jne L_7f291f
        pop ebp
        fstp st(0)
        pop ebx
L_7f2ab6:
        pop edi
        pop esi
        add esp, 0x0c
        ret
    }
}
