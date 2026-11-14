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
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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

extern "C" void ext_007EFF60(void* a, int b);
extern "C" void ext_007F0160(void* a, int b);

struct StructDC_007F0290 {
    int d[0x37];
};

// [0x007F0290] sub_007F0290 (216 bytes)
extern "C" void __cdecl fn_007F0290(void* self) {
    char* p = (char*)self;
    ext_007EFF60(p, *(int*)(p + 0x234));
    int i = *(int*)(p + 0x234);
    if (i < *(int*)(p + 0x238)) {
        int next = i + 1;
        do {
            char* edx = *(char**)(p + 0x1fc);
            int* eax = *(int**)(edx + 0x88);
            if (eax[i] != 0) {
                typedef void (__thiscall *VFn)(void*, void*, void*, StructDC_007F0290);
                VFn fn = (*(VFn**)p)[2];
                fn(p, p + 0x4, p + 0x14, *(StructDC_007F0290*)(p + 0x38));
                int* arr = *(int**)(p + 0x138);
                arr[i] = *(int*)(p + 0x10);
            } else {
                int* arr = *(int**)(p + 0x138);
                arr[i] = 0;
            }
            if (next < *(int*)(p + 0x238)) {
                ext_007F0160(p, i);
            }
            ++next;
            ++i;
        } while (i < *(int*)(p + 0x238));
    }
    *(int*)(p + 0x23c) = *(int*)(p + 0x238);
}

// [0x007FE5F0] sub_007FE5F0 (519 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();
extern "C" int mem_00993868;
extern "C" int mem_00993838;
extern "C" int mem_00993830;

extern "C" __declspec(naked) int __cdecl fn_007FE5F0(void* p, float t, void* out) {
    __asm {
        sub esp, 0x44
        mov eax, dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x4c]
        push ebx
        fstp dword ptr [eax + 0x4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x54]
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6FA0
        mov ecx, dword ptr [esi]
        push ecx
        mov edi, eax
        call ext_007C6F70
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov ebx, eax
        call ext_007C6FA0
        mov ebp, eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C6F70
        fld dword ptr [ebx + 0x30]
        fstp dword ptr [esp + 0x34]
        mov ecx, dword ptr [esi]
        fld dword ptr [ebx + 0x34]
        push ecx
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [ebx + 0x38]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [ebp]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [ebp + 0x4]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [ebp + 0x8]
        fstp dword ptr [esp + 0x4c]
        call ext_007C7000
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov edi, eax
        call ext_007C7000
        push edi
        mov esi, eax
        call ext_007CB970
        fstp dword ptr [esp + 0x2c]
        push esi
        call ext_007CB970
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        add esp, 0x20
        fsub dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x1c]
        fsub dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x20]
        fsub dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x30]
        fsub dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x34]
        fsub dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x20]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        call ext_006A7250
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        pop edi
        fmul dword ptr [esp + 0x58]
        pop esi
        pop ebp
        pop ebx
        fcomp qword ptr [mem_00993868]
        fnstsw ax
        test ah, 5
        jnp L_zero
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x3c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        fld st(2)
        test ah, 5
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        jp L_mul
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        call ext_006A7250
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        mov eax, dword ptr [esp + 0x50]
        fsub dword ptr [esp]
        fsub dword ptr [esp + 0x4]
        fdiv dword ptr [esp + 0x48]
        fstp dword ptr [eax + 0x4]
        mov eax, 1
        add esp, 0x44
        ret
    L_mul:
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        call ext_006A7250
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x50]
        fsub dword ptr [esp]
        fsub dword ptr [esp + 0x4]
        fmul qword ptr [mem_00993830]
        fdiv dword ptr [esp + 0x48]
        fstp dword ptr [ecx + 0x4]
    L_zero:
        xor eax, eax
        add esp, 0x44
        ret
    }
}

// [0x007F2440] sub_007F2440 (540 bytes)
extern "C" void ext_007F2330();
extern "C" __declspec(naked) void __fastcall fn_007F2440(void* self) {
    __asm {
        sub esp, 0xc
        mov edx, dword ptr [esp + 0x54]
        test edx, edx
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x10], 0x0
        je L_END
        mov eax, dword ptr [esp + 0x50]
        mov ecx, dword ptr [esp + 0x54]
        mov ebx, dword ptr [esp + 0x4c]
        mov ebp, dword ptr [esp + 0x24]
        sub ecx, eax
        mov edi, eax
        sub ebx, eax
        mov dword ptr [esp + 0x50], edi
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x4c], edx
L_LOOP:
        cmp dword ptr [ecx + edi], 0x0
        jle L_NEXT
        mov ecx, dword ptr [edi]
        mov edx, ecx
        and edx, 0x80000003
        jns L_1
        dec edx
        or edx, -0x4
        inc edx
L_1:
        mov eax, ecx
        je L_2
        sub eax, edx
        add eax, 0x4
L_2:
        cdq
        and edx, 0x3
        add eax, edx
        mov esi, eax
        mov eax, dword ptr [ebx + edi]
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        mov dword ptr [esp + 0x64], eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax + 2*eax]
        add edx, edx
        add edx, edx
        mov eax, ecx
        sar esi, 0x2
        sub eax, edx
        je L_3
        sub ecx, eax
        add ecx, 0xc
L_3:
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        mov ebx, eax
        sar ebx, 0x2
        mov dword ptr [esp + 0x54], ebx
        mov edx, 0x0
        je L_A
        mov eax, dword ptr [esp + 0x28]
        mov edi, edi
L_INNER:
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 4*edx], 0x0
        mov ecx, 0xfffffffd
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        add edx, 0x1
        add eax, 0x20
        cmp edx, ebx
        jne L_INNER
L_A:
        xor edi, edi
        test esi, esi
        je L_B
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x30]
        sub edx, eax
L_OUTER2:
        mov dword ptr [ebp + 4*edi], 0x0
        mov ecx, 0x8
        mov edi, edi
L_INNER2:
        mov dword ptr [edx + eax], 0xfffffffd
        mov dword ptr [eax], 0xffffffff
        add eax, 0x4
        sub ecx, 0x1
        jne L_INNER2
        add edi, 0x1
        cmp edi, esi
        jne L_OUTER2
L_B:
        mov edx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x64]
        mov ecx, dword ptr [esp + 0x40]
        push edx
        mov edx, dword ptr [esp + 0x48]
        mov edi, dword ptr [esp + 0x30]
        push esi
        push eax
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x60]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x50]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x60]
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [esp + 0x54]
        push eax
        push edi
        lea ecx, [esp + 0x3c]
        push ebp
        push ecx
        call ext_007F2330
        add esp, 0x34
        test esi, esi
        je L_C
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x20]
        mov ebx, ebp
        sub edi, eax
        sub ebx, ecx
        mov dword ptr [esp + 0x64], esi
        jmp L_COPY
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_COPY:
        mov edx, dword ptr [ebx + ecx]
        mov dword ptr [ecx], edx
        mov edx, 0x8
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_COPY2:
        mov ebp, dword ptr [edi + eax]
        mov dword ptr [eax], ebp
        add eax, 0x4
        sub edx, 0x1
        jne L_COPY2
        add ecx, 0x4
        sub dword ptr [esp + 0x64], 0x1
        jne L_COPY
        mov ebp, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x54]
L_C:
        mov eax, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x50]
        lea ecx, [eax + 4*ebx]
        lea ebp, [ebp + 4*esi]
        shl ebx, 0x5
        add dword ptr [esp + 0x28], ebx
        mov ebx, dword ptr [esp + 0x14]
        shl esi, 0x5
        add dword ptr [esp + 0x30], esi
        add dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x20], ecx
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x24], ebp
L_NEXT:
        add edi, 0x4
        sub dword ptr [esp + 0x4c], 0x1
        mov dword ptr [esp + 0x50], edi
        jne L_LOOP
L_END:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x48
    }
}

extern "C" void ext_007F6750();
extern "C" void ext_007F6810();
extern "C" void ext_007F6830();
extern "C" void ext_007F6850();

// [0x007F6880] sub_007F6880 (555 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F6880() {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x4]
        push ebx
        mov ebx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [ebx + 0x8]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        push edi
        mov edi, dword ptr [esp + 0x24]
        push esi
        push edx
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [eax]
        push edi
        xor ebp, ebp
        push eax
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], ebp
        call ext_007F6750
        fldz
        fcom st(1)
        add esp, 0x10
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_68CB
        mov dl, 0x1
        jmp L_68CD
    L_68CB:
        xor dl, dl
    L_68CD:
        mov eax, dword ptr [ebx]
        fld dword ptr [edi]
        fsub dword ptr [eax]
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x8]
        mov ecx, dword ptr [ecx]
        fsub dword ptr [eax + 0x8]
        fld dword ptr [edi + 0x4]
        fsub dword ptr [eax + 0x4]
        fld dword ptr [esi + 0x8]
        fmul st, st(3)
        fld dword ptr [esi]
        fmul st, st(3)
        fsubp st(1), st
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fmulp st(1), st
        fld dword ptr [esi]
        fmul st, st(2)
        fld dword ptr [esi + 0x4]
        fmulp st(5), st
        fsubrp st(4), st
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fmulp st(4), st
        faddp st(3), st
        fld dword ptr [esi + 0x4]
        fmulp st(2), st
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fmulp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_6934
        mov al, 0x1
        jmp L_6936
    L_6934:
        xor al, al
    L_6936:
        mov cl, al
        xor cl, dl
        je L_6948
        test al, al
        je L_6946
        mov dword ptr [esp + 0x14], ebx
        jmp L_6948
    L_6946:
        mov ebp, ebx
    L_6948:
        mov dl, al
        mov eax, ebx
        cmp eax, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0x10], ecx
        jne L_68CD
        test ebp, ebp
        fstp st(0)
        je L_6AA3
        mov eax, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [esp + 0x14]
        cmp eax, ebx
        je L_698B
    L_6976:
        mov edx, dword ptr [esp + 0x20]
        push eax
        push edx
        call ext_007F6850
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x8
        cmp eax, ebx
        jne L_6976
    L_698B:
        mov eax, dword ptr [esp + 0x20]
        push edi
        push eax
        call ext_007F6810
        push eax
        push ebp
        mov dword ptr [esp + 0x30], eax
        call ext_007F6830
        fld dword ptr [edi]
        mov eax, dword ptr [ebp]
        fsub dword ptr [eax]
        mov ecx, dword ptr [ebx]
        fld dword ptr [edi + 0x8]
        add esp, 0x10
        fsub dword ptr [eax + 0x8]
        fld dword ptr [edi + 0x4]
        fsub dword ptr [eax + 0x4]
        fld dword ptr [esi]
        fmul st, st(1)
        fld dword ptr [esi + 0x4]
        fmul st, st(4)
        fsubp st(1), st
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fmulp st(1), st
        fld dword ptr [esi + 0x8]
        fmulp st(4), st
        fld dword ptr [esi]
        fmul st, st(3)
        fsubp st(4), st
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fmulp st(4), st
        faddp st(3), st
        fld dword ptr [esi + 0x4]
        fmulp st(2), st
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st
        fld dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x20]
        fsub dword ptr [eax]
        fmulp st(1), st
        faddp st(1), st
        fstp dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx]
        fsub dword ptr [eax + 0x4]
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x8]
        fmul st, st(2)
        fld dword ptr [esi]
        fmul st, st(2)
        fsubp st(1), st
        fld dword ptr [edi + 0x4]
        fsub dword ptr [eax + 0x4]
        fmulp st(1), st
        fld dword ptr [esi]
        fmul st, st(4)
        fld dword ptr [esi + 0x4]
        fmulp st(4), st
        fsubrp st(3), st
        fld dword ptr [edi + 0x8]
        fsub dword ptr [eax + 0x8]
        fmulp st(3), st
        faddp st(2), st
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fsubrp st(2), st
        fld dword ptr [edi]
        fsub dword ptr [eax]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebx + 0x8]
        fld dword ptr [eax + 0x4]
        mov ecx, dword ptr [ecx]
        fsub dword ptr [edi + 0x4]
        fld dword ptr [eax]
        fsub dword ptr [edi]
        fld dword ptr [eax + 0x8]
        fsub dword ptr [edi + 0x8]
        fld dword ptr [esi]
        fmul st, st(3)
        fld dword ptr [esi + 0x4]
        fmul st, st(3)
        fsubp st(1), st
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [edi + 0x8]
        fmulp st(1), st
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fld dword ptr [esi]
        fmul st, st(2)
        fsubp st(3), st
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [edi + 0x4]
        fmulp st(3), st
        faddp st(2), st
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fsubrp st(2), st
        fld dword ptr [ecx]
        fsub dword ptr [edi]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [ebx + 0x4]
    L_6AA3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x007F3F00] sub_007F3F00 (600 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_0099EDA0;
extern "C" int mem_0099ED90;
extern "C" __declspec(naked) void __cdecl fn_007F3F00(void) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 84h
        push ebx
        push esi
        push edi
        mov edx, DWORD PTR [ebp+18h]
        fld DWORD PTR [ebp+58h]
        mov DWORD PTR [esp+18h], edx
        fst DWORD PTR [esp+0ch]
        mov edx, DWORD PTR [ebp+20h]
        mov DWORD PTR [esp+14h], edx
        mov edx, DWORD PTR [ebp+24h]
        mov DWORD PTR [esp+18h], edx
        mov edx, DWORD PTR [ebp+2ch]
        mov DWORD PTR [esp+14h], edx
        mov edx, DWORD PTR [ebp+30h]
        mov DWORD PTR [esp+18h], edx
        mov edx, DWORD PTR [ebp+34h]
        mov eax, DWORD PTR [ebp+8]
        mov DWORD PTR [esp+40h], edx
        mov edx, DWORD PTR [ebp+38h]
        mov DWORD PTR [esp+44h], edx
        mov edx, DWORD PTR [ebp+3ch]
        mov ecx, DWORD PTR [ebp+0ch]
        mov DWORD PTR [esp+48h], edx
        mov edx, DWORD PTR [ebp+40h]
        movaps xmm1, XMMWORD PTR mem_0099EDA0
        movss xmm4, DWORD PTR [esp+0ch]
        mov DWORD PTR [esp+50h], edx
        mov edx, DWORD PTR [ebp+44h]
        mov DWORD PTR [esp+54h], edx
        mov edx, DWORD PTR [ebp+48h]
        mov DWORD PTR [esp+58h], edx
        mov edx, DWORD PTR [ebp+4ch]
        mov DWORD PTR [esp+10h], edx
        mov edx, DWORD PTR [ebp+50h]
        mov DWORD PTR [esp+20h], eax
        mov eax, DWORD PTR [ebp+14h]
        mov DWORD PTR [esp+14h], edx
        mov edx, DWORD PTR [ebp+54h]
        mov DWORD PTR [esp+18h], edx
        cdq
        and edx, 3
        mov ebx, DWORD PTR [ebp+28h]
        add eax, edx
        or esi, 0FFFFFFFFh
        sar eax, 2
        test eax, eax
        xorps xmm7, xmm7
        movaps xmm0, xmm7
        movaps XMMWORD PTR [esp+80h], xmm1
        movaps xmm1, XMMWORD PTR mem_0099ED90
        mov edi, DWORD PTR [ebp+10h]
        mov DWORD PTR [esp+24h], ecx
        mov ecx, DWORD PTR [ebp+1ch]
        mov DWORD PTR [esp+2ch], esi
        shufps xmm4, xmm4, 0
        movaps XMMWORD PTR [esp+70h], xmm0
        movaps XMMWORD PTR [esp+60h], xmm1
        movaps xmm5, xmm0
        jle L4090
        mov esi, ebx
        mov ebx, DWORD PTR [esp+50h]
        sub ebx, ecx
        mov edx, edi
        mov edi, DWORD PTR [esp+40h]
        mov DWORD PTR [esp+30h], ebx
        mov ebx, DWORD PTR [esp+10h]
        sub edx, ecx
        sub esi, ecx
        sub edi, ecx
        sub ebx, ecx
        mov DWORD PTR [esp+28h], eax
L3FFF:
        movaps xmm0, XMMWORD PTR [ecx]
        movaps xmm2, XMMWORD PTR [esi+ecx]
        movaps xmm6, XMMWORD PTR [edi+ecx]
        movaps xmm3, XMMWORD PTR [edx+ecx]
        mov eax, DWORD PTR [esp+30h]
        movaps xmm1, XMMWORD PTR [esp+80h]
        cmpltps xmm2, xmm0
        cmpltps xmm0, xmm6
        movaps xmm6, xmm0
        movaps XMMWORD PTR [eax+ecx], xmm2
        movaps XMMWORD PTR [ebx+ecx], xmm6
        andnps xmm1, xmm3
        movaps xmm0, xmm3
        cmpltps xmm0, xmm7
        andps xmm0, xmm6
        movaps xmm6, xmm7
        cmpltps xmm6, xmm3
        andps xmm6, xmm2
        orps xmm0, xmm6
        movaps xmm2, xmm4
        cmpltps xmm2, xmm1
        andps xmm0, xmm2
        movaps xmm2, xmm0
        andps xmm2, xmm1
        movaps xmm1, xmm0
        andnps xmm1, xmm4
        orps xmm2, xmm1
        movaps xmm1, xmm0
        andnps xmm0, XMMWORD PTR [esp+70h]
        andps xmm1, xmm5
        addps xmm5, XMMWORD PTR [esp+60h]
        orps xmm1, xmm0
        add ecx, 10h
        sub DWORD PTR [esp+28h], 1
        movaps xmm0, xmm1
        movaps xmm4, xmm2
        movaps XMMWORD PTR [esp+70h], xmm0
        jne L3FFF
        mov esi, DWORD PTR [esp+2ch]
L4090:
        movaps XMMWORD PTR [esp+10h], xmm4
        fld DWORD PTR [esp+10h]
        fcom ST(1)
        movaps XMMWORD PTR [esp+60h], xmm0
        fnstsw ax
        fstp ST(1)
        test ah, 41h
        jne L40B1
        fstp DWORD PTR [esp+0ch]
        xor esi, esi
        jmp L40B3
L40B1:
        fstp ST(0)
L40B3:
        fld DWORD PTR [esp+14h]
        fld DWORD PTR [esp+0ch]
        fcomp ST(1)
        fnstsw ax
        test ah, 5
        jp L40CF
        fstp DWORD PTR [esp+0ch]
        mov esi, 1
        jmp L40D1
L40CF:
        fstp ST(0)
L40D1:
        fld DWORD PTR [esp+18h]
        fld DWORD PTR [esp+0ch]
        fcomp ST(1)
        fnstsw ax
        test ah, 5
        jp L40ED
        fstp DWORD PTR [esp+0ch]
        mov esi, 2
        jmp L40EF
L40ED:
        fstp ST(0)
L40EF:
        fld DWORD PTR [esp+1ch]
        fld DWORD PTR [esp+0ch]
        fcompp
        fnstsw ax
        test ah, 5
        jp L4121
        mov esi, 3
        fld DWORD PTR [esp+4*esi+60h]
        call ext_006A6DE0
        mov ecx, DWORD PTR [esp+20h]
        mov edx, DWORD PTR [esp+24h]
        mov DWORD PTR [ecx], eax
        mov DWORD PTR [edx], esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L4121:
        cmp esi, 0FFFFFFFFh
        je L4142
        fld DWORD PTR [esp+4*esi+60h]
        call ext_006A6DE0
        mov ecx, DWORD PTR [esp+20h]
        mov edx, DWORD PTR [esp+24h]
        mov DWORD PTR [ecx], eax
        mov DWORD PTR [edx], esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L4142:
        mov ecx, DWORD PTR [esp+20h]
        mov edx, DWORD PTR [esp+24h]
        or eax, 0FFFFFFFFh
        pop edi
        mov DWORD PTR [ecx], eax
        mov DWORD PTR [edx], esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007F3440] sub_007F3440 (635 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F3440() {
    __asm {
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x5c]
        cdq
        fstp dword ptr [esp + 0x5c]
        and edx, 0x3
        push esi
        add eax, edx
        sar eax, 0x2
        push edi
        or ecx, -0x1
        or esi, -0x1
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x24], eax
        jle L_007F36A9

        mov esi, dword ptr [esp + 0x58]
        fldz
        mov edx, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [esi + 0xc]
        push ebx
        push ebp
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esp + 0x48]
        mov ebp, eax
        sub ebp, dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x3c], ebp
        mov ebp, edx
        sub ebp, eax
        mov dword ptr [esp + 0x1c], ebp
        mov ebp, esi
        sub ebp, eax
        add ecx, 0x4
        sub edx, esi
        mov esi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x28], edx
        mov edx, dword ptr [esp + 0x24]
        lea ebx, [eax + 0x8]
        mov dword ptr [esp + 0x18], ebp

    L_007F34C3:
        fld dword ptr [ecx - 0x4]
        fabs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x6c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F3526
        fxch st(1)
        fcom dword ptr [ecx - 0x4]
        fnstsw ax
        test ah, 0x5
        jp L_007F34FB
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [ebx - 0x8]
        fld dword ptr [eax]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F3514

    L_007F34FB:
        fcom dword ptr [ecx - 0x4]
        fnstsw ax
        test ah, 0x41
        jne L_007F352A
        fld dword ptr [ebx - 0x8]
        fld dword ptr [esi - 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_007F352A

    L_007F3514:
        fxch st(1)
        mov edx, edi
        fstp dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x10], 0x0
        jmp L_007F352C

    L_007F3526:
        fstp st(0)
        jmp L_007F352C

    L_007F352A:
        fstp st(1)

    L_007F352C:
        fld dword ptr [ecx]
        fabs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x6c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F359D
        fxch st(1)
        fcom dword ptr [ecx]
        fnstsw ax
        test ah, 0x5
        jp L_007F356D
        mov eax, dword ptr [esp + 0x3c]
        fld dword ptr [eax + ecx]
        mov ebp, dword ptr [esp + 0x1c]
        add eax, ecx
        fld dword ptr [eax + ebp]
        mov ebp, dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F358B

    L_007F356D:
        fcom dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        jne L_007F35A1
        mov eax, dword ptr [esp + 0x3c]
        fld dword ptr [eax + ecx]
        add eax, ecx
        fld dword ptr [eax + ebp]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_007F35A1

    L_007F358B:
        fxch st(1)
        mov edx, edi
        fstp dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x10], 0x1
        jmp L_007F35A3

    L_007F359D:
        fstp st(0)
        jmp L_007F35A3

    L_007F35A1:
        fstp st(1)

    L_007F35A3:
        fld dword ptr [ecx + 0x4]
        fabs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x6c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F3605
        fxch st(1)
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x5
        jp L_007F35DB
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [ebx]
        fld dword ptr [eax + ebx]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F35F3

    L_007F35DB:
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x41
        jne L_007F3609
        fld dword ptr [ebx]
        fld dword ptr [ebx + ebp]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_007F3609

    L_007F35F3:
        fxch st(1)
        mov edx, edi
        fstp dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x10], 0x2
        jmp L_007F360B

    L_007F3605:
        fstp st(0)
        jmp L_007F360B

    L_007F3609:
        fstp st(1)

    L_007F360B:
        fld dword ptr [ecx + 0x8]
        fabs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x6c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F366E
        fxch st(1)
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x5
        jp L_007F3644
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x4]
        fld dword ptr [esi + eax]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F365C

    L_007F3644:
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x41
        jne L_007F3672
        fld dword ptr [ebx + 0x4]
        fld dword ptr [esi]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_007F3672

    L_007F365C:
        fxch st(1)
        mov edx, edi
        fstp dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x10], 0x3
        jmp L_007F3674

    L_007F366E:
        fstp st(0)
        jmp L_007F3674

    L_007F3672:
        fstp st(1)

    L_007F3674:
        add dword ptr [esp + 0x14], 0x10
        add edi, 0x1
        add ebx, 0x10
        add esi, 0x10
        add ecx, 0x10
        cmp edi, dword ptr [esp + 0x2c]
        jl L_007F34C3

        mov ecx, dword ptr [esp + 0x34]
        fstp st(0)
        mov eax, dword ptr [esp + 0x10]
        pop ebp
        pop ebx
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 0x30]
        pop edi
        mov dword ptr [edx], eax
        pop esi
        add esp, 0x20
        ret

    L_007F36A9:
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x30]
        mov dword ptr [edx], ecx
        pop edi
        mov dword ptr [eax], esi
        pop esi
        add esp, 0x20
        ret
    }
}

// [0x007FE360] sub_007FE360 (650 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CB970();
extern "C" void ext_007EC6E0();
extern "C" int mem_0099EC8C;
extern "C" __declspec(naked) void __fastcall fn_007FE360(void* self) {
    __asm {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x48]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov edi, eax
        call ext_007C6F70
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov ebx, eax
        call ext_007C6F30
        fstp qword ptr [esp + 0x24]
        mov eax, dword ptr [esi]
        push eax
        call ext_007C6F30
        fadd qword ptr [esp + 0x28]
        mov ecx, dword ptr [esi]
        push ecx
        fstp dword ptr [esp + 0x2c]
        call ext_007C7000
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov ebp, eax
        call ext_007C7000
        mov esi, dword ptr [esp + 0x68]
        mov dword ptr [esp + 0x64], eax
        xor eax, eax
        push ebp
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x1c], eax
        call ext_007CB970
        fstp dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x68]
        push eax
        call ext_007CB970
        fstp dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x70]
        add esp, 0x20
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x30]
        fsub dword ptr [ebx + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x34]
        fsub dword ptr [ebx + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x38]
        fsub dword ptr [ebx + 0x38]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x2c]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4c]
        fldz
        fld st(0)
        fld dword ptr [esp + 0x4c]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L_nan
        fxch st(1)
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x28]
        fld1
        jmp L_a
    L_nan:
        fstp st(1)
        call ext_006A7250
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fcomp dword ptr [mem_0099EC8C]
        fnstsw ax
        test ah, 0x41
        jne L_z
        fld st(0)
        fld1
        __asm _emit 0xde
        __asm _emit 0xf1
        jmp L_b
    L_z:
        fldz
    L_b:
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fld st(0)
        fmul dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fmul st, st(1)
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x2c]
    L_a:
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x14]
        fld st(0)
        __asm _emit 0xde
        __asm _emit 0xea
        fxch st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x18]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_ok
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret
    L_ok:
        cmp dword ptr [esi + 0x8], 0x0
        mov ecx, 0x1
        jle L_fail
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x24]
        mov word ptr [edx + 0x1c], 0x303
        mov eax, dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0x28]
        add eax, 0xc
        fstp dword ptr [eax + 0x4]
        push ecx
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x8]
        mov eax, dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x18]
        fstp dword ptr [esp]
        call ext_007EC6E0
        fstp dword ptr [esp + 0x50]
        mov eax, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x50]
        add esp, 0x4
        fld st(0)
        fmul dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [ebx + 0x30]
        fld dword ptr [esp + 0x4c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ebx + 0x34]
        fmul st, st(1)
        fstp dword ptr [esp + 0x34]
        fmul dword ptr [ebx + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [edi + 0x30]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 0x34]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fmul dword ptr [edi + 0x38]
        pop edi
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [eax + 0x8]
        mov eax, ecx
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi + 0x18]
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [esi + 0x1c], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret
    L_fail:
        pop edi
        fstp st(1)
        mov dword ptr [esi + 0xc], 0x0
        fstp st(0)
        mov dword ptr [esi + 0x1c], ecx
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x38
        ret
    }
}

// [0x007F2660] sub_007F2660 (652 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F2660(void* self) {
    __asm {
        sub esp, 1Ch
        mov eax, dword ptr [esp+38h]
        push ebx
        mov ebx, dword ptr [esp+40h]
        push ebp
        push esi
        xor esi, esi
        mov dword ptr [eax], esi
        mov eax, dword ptr [esp+74h]
        xor ebp, ebp
        cmp eax, esi
        mov dword ptr [esp+0Ch], ebp
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        je L_28E5
        mov ecx, dword ptr [esp+38h]
        fldz
        push edi
        mov edi, dword ptr [esp+74h]
        sub edi, ecx
        mov edx, ecx
        mov dword ptr [esp+24h], edi
        mov edi, dword ptr [esp+30h]
        mov dword ptr [esp+4Ch], edx
        mov dword ptr [esp+28h], eax
L_26AB:
        mov ecx, dword ptr [esp+24h]
        mov dword ptr [edx], 0
        cmp dword ptr [ecx+edx], 0
        mov dword ptr [esp+20h], 0
        je L_2873
        mov eax, dword ptr [esp+68h]
        mov ecx, dword ptr [esp+18h]
        lea eax, [eax+4*ecx]
        mov dword ptr [esp+74h], eax
L_26D6:
        mov ecx, dword ptr [esp+74h]
        cmp dword ptr [ecx], 0
        mov dword ptr [esp+1Ch], 0
        je L_27AE
L_26EB:
        mov eax, ebp
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        lea edx, [eax+2*eax]
        mov eax, ebp
        xor ecx, ecx
        shl edx, 4
        and eax, 80000003h
        jns short L_270C
        dec eax
        or eax, -4
        inc eax
L_270C:
        lea esi, [edx+eax]
        lea eax, [edi+4*esi]
L_2712:
        fld dword ptr [ebx+4*ecx]
        add ecx, 1
        fstp dword ptr [eax]
        add eax, 10h
        cmp ecx, 3
        jne short L_2712
        lea ecx, [ebx+10h]
        lea eax, [edi+4*esi+30h]
        mov edx, 3
L_272E:
        fld dword ptr [ecx]
        add eax, 10h
        fstp dword ptr [eax-10h]
        add ecx, 4
        sub edx, 1
        jne short L_272E
        lea ecx, [ebx+20h]
        lea eax, [edi+4*esi+60h]
        mov edx, 3
L_274A:
        fld dword ptr [ecx]
        add eax, 10h
        fstp dword ptr [eax-10h]
        add ecx, 4
        sub edx, 1
        jne short L_274A
        lea ecx, [ebx+30h]
        lea eax, [edi+4*esi+90h]
        mov edx, 3
L_2769:
        fld dword ptr [ecx]
        add eax, 10h
        fstp dword ptr [eax-10h]
        add ecx, 4
        sub edx, 1
        jne short L_2769
        mov eax, dword ptr [esp+4Ch]
        add dword ptr [eax], 1
        mov eax, dword ptr [esp+1Ch]
        mov ecx, dword ptr [esp+74h]
        add dword ptr [esp+14h], 1
        add eax, 1
        add ebx, 40h
        add ebp, 1
        cmp eax, dword ptr [ecx]
        mov dword ptr [esp+1Ch], eax
        jne L_26EB
        mov esi, dword ptr [esp+14h]
        mov edx, dword ptr [esp+4Ch]
        mov dword ptr [esp+10h], ebp
L_27AE:
        mov ecx, esi
        and ecx, 80000003h
        jns short L_27BD
        dec ecx
        or ecx, -4
        inc ecx
L_27BD:
        mov eax, esi
        je short L_27C6
        sub eax, ecx
        add eax, 4
L_27C6:
        sub eax, esi
        shl eax, 6
        add ebx, eax
        test ecx, ecx
        je short L_27DE
        mov eax, 4
        sub eax, ecx
        add esi, eax
        mov dword ptr [esp+14h], esi
L_27DE:
        mov ecx, ebp
        and ecx, 80000003h
        jns short L_27ED
        dec ecx
        or ecx, -4
        inc ecx
L_27ED:
        je short L_2851
        mov esi, ebp
        mov ebp, 4
L_27F6:
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        lea edx, [eax+2*eax]
        mov eax, esi
        shl edx, 4
        and eax, 80000003h
        jns short L_2815
        dec eax
        or eax, -4
        inc eax
L_2815:
        lea ecx, [edx+eax]
        lea eax, [edi+4*ecx]
        lea ecx, [edi+4*ecx+60h]
        mov edx, 6
L_2824:
        fst dword ptr [eax]
        add eax, 10h
        fst dword ptr [ecx]
        add ecx, 10h
        sub edx, 1
        jne short L_2824
        add esi, 1
        sub ebp, 1
        jne short L_27F6
        add dword ptr [esp+10h], 4
        mov eax, dword ptr [esp+4Ch]
        add dword ptr [eax], 4
        mov ebp, dword ptr [esp+10h]
        mov esi, dword ptr [esp+14h]
        mov edx, eax
L_2851:
        mov eax, dword ptr [esp+20h]
        mov ecx, dword ptr [esp+24h]
        add dword ptr [esp+18h], 1
        add dword ptr [esp+74h], 4
        add eax, 1
        cmp eax, dword ptr [ecx+edx]
        mov dword ptr [esp+20h], eax
        jne L_26D6
L_2873:
        mov eax, ebp
        and eax, 80000003h
        jns short L_2881
        dec eax
        or eax, -4
        inc eax
L_2881:
        je short L_28C8
        lea ecx, [ebp-4]
        mov eax, ecx
        and eax, 80000003h
        jns short L_2894
        dec eax
        or eax, -4
        inc eax
L_2894:
        jne short L_289E
        mov dword ptr [esp+10h], ecx
        mov ebp, ecx
        jmp short L_28A4
L_289E:
        sub ebp, eax
        mov dword ptr [esp+10h], ebp
L_28A4:
        mov eax, dword ptr [edx]
        lea edx, [eax-4]
        mov ecx, edx
        and ecx, 80000003h
        jns short L_28B8
        dec ecx
        or ecx, -4
        inc ecx
L_28B8:
        jne short L_28BE
        mov eax, edx
        jmp short L_28C0
L_28BE:
        sub eax, ecx
L_28C0:
        mov ecx, dword ptr [esp+4Ch]
        mov dword ptr [ecx], eax
        mov edx, ecx
L_28C8:
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [esp+48h]
        add dword ptr [eax], ecx
        add edx, 4
        sub dword ptr [esp+28h], 1
        mov dword ptr [esp+4Ch], edx
        jne L_26AB
        fstp st(0)
        pop edi
L_28E5:
        pop esi
        pop ebp
        pop ebx
        add esp, 1Ch
        ret
    }
}

// [0x007FA260] sub_007FA260 (765 bytes)
extern "C" int mem_0099EE70;
extern "C" int mem_0099EE64;
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __fastcall fn_007FA260(void* self) {
    __asm {
        push	ebx
        mov	ebx, dword ptr [esp + 0x8]
        fld	dword ptr [ebx]
        push	ebp
        push	esi
        push	edi
        push	ecx
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        mov	ebp, dword ptr [esp + 0x24]
        mov	esi, dword ptr [esp + 0x1c]
        fstp	dword ptr [ebp]
        fld	dword ptr [esi]
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        mov	edi, dword ptr [esp + 0x28]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x1c]
        add	esp, 0x4
        fst	dword ptr [edi]
        fld	dword ptr [ebp]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp loc_007fa2c5
        fld	dword ptr [ebx]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esi]
        fstp	dword ptr [ebx]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esi]
        fld	dword ptr [edi]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [ebp]
        fstp	dword ptr [edi]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [ebp]
    loc_007fa2c5:
        fld	dword ptr [esi]
        push	ecx
        fsub	dword ptr [ebx]
        mov	ebx, dword ptr [esp + 0x20]
        fmul	qword ptr [mem_0099EE70]
        fadd	dword ptr [esi]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x1c]
        fst	dword ptr [ebx]
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        mov	ebp, dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x1c]
        add	esp, 0x4
        fst	dword ptr [ebp]
        fld	dword ptr [edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne loc_007fa558
    loc_007fa308:
        fldz
        mov	eax, dword ptr [esp + 0x14]
        fld	dword ptr [esi]
        mov	ecx, dword ptr [esp + 0x20]
        fsub	dword ptr [eax]
        fld	dword ptr [edi]
        fsub	dword ptr [ebp]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esi]
        fsub	dword ptr [ebx]
        fld	dword ptr [edi]
        fsub	dword ptr [ecx]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fld	dword ptr [esp + 0x24]
        fld	st(0)
        fsubp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [mem_0099EE64]
        fld	dword ptr [esp + 0x18]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x41
        je loc_007fa374
        fstp	st(0)
        fld	dword ptr [mem_0099EE64]
    loc_007fa374:
        fstp	dword ptr [esp + 0x18]
        fldz
        fcompp
        fnstsw	ax
        fld	dword ptr [esp + 0x18]
        test	ah, 0x41
        fabs
        jp loc_007fa393
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        jmp loc_007fa39d
    loc_007fa393:
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        fchs
    loc_007fa39d:
        fstp	dword ptr [esp + 0x18]
        push	ecx
        fxch	st(1)
        fmulp	st(2), st
        fmulp	st(2), st
        fsubrp	st(1), st
        fld	dword ptr [esp + 0x1c]
        fadd	st(0), st
        fdivp	st(1), st
        fsubr	dword ptr [esi]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [ebx]
        fsub	dword ptr [esi]
        fld	qword ptr [mem_009334D8]
        fmul	st, st(1)
        fadd	dword ptr [esi]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fsubp	st(2), st
        fld	st(0)
        fsub	dword ptr [ebx]
        fmulp	st(2), st
        fxch	st(1)
        fcomp	st(3)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007fa42e
        fstp	st(1)
        fstp	st(1)
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        add	esp, 0x4
        fld	dword ptr [esp + 0x24]
        fld	dword ptr [ebp]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        je loc_007fa532
        fld	dword ptr [edi]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x5
        jnp loc_007fa54f
        fstp	st(0)
        fld	dword ptr [ebx]
        fsub	dword ptr [esi]
        fmul	qword ptr [mem_0099EE70]
        fadd	dword ptr [ebx]
        fstp	dword ptr [esp + 0x18]
        jmp loc_007fa493
    loc_007fa42e:
        fld	st(0)
        fld	dword ptr [esp + 0x28]
        fld	st(0)
        fsubp	st(2), st
        fld	dword ptr [ebx]
        fsub	st, st(3)
        fmul	st, st(2)
        fcomp	st(5)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007fa4a8
        fstp	st(3)
        fstp	st(2)
        fstp	st(1)
        fstp	st(1)
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        add	esp, 0x4
        fld	dword ptr [esp + 0x24]
        fld	dword ptr [ebp]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007fa4f3
        fld	dword ptr [ebx]
        fstp	dword ptr [esi]
        fld	dword ptr [esp + 0x18]
        fst	dword ptr [ebx]
        fld	st(0)
        fsub	dword ptr [esi]
        fmul	qword ptr [mem_0099EE70]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [ebp]
        fstp	dword ptr [edi]
        fstp	dword ptr [ebp]
    loc_007fa493:
        fld	dword ptr [esp + 0x18]
        push	ecx
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        add	esp, 0x4
        jmp loc_007fa4f5
    loc_007fa4a8:
        fstp	st(2)
        fld	st(1)
        fsub	dword ptr [ebx]
        fmulp	st(1), st
        fcomp	st(3)
        fnstsw	ax
        fstp	st(2)
        test	ah, 0x1
        jne loc_007fa4d1
        fstp	st(0)
        fst	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        add	esp, 0x4
        jmp loc_007fa4f5
    loc_007fa4d1:
        fstp	st(1)
        fmul	qword ptr [mem_0099EE70]
        fadd	dword ptr [ebx]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp]
        call	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        add	esp, 0x4
        jmp loc_007fa4f5
    loc_007fa4f3:
        fstp	st(0)
    loc_007fa4f5:
        fld	dword ptr [esi]
        mov	edx, dword ptr [esp + 0x14]
        mov	eax, dword ptr [esp + 0x20]
        fstp	dword ptr [edx]
        fld	dword ptr [ebx]
        fstp	dword ptr [esi]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [ebx]
        fld	dword ptr [edi]
        fstp	dword ptr [eax]
        fld	dword ptr [ebp]
        fstp	dword ptr [edi]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [ebp]
        fld	dword ptr [edi]
        fld	dword ptr [ebp]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jnp loc_007fa308
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        ret
    loc_007fa532:
        fld	dword ptr [esi]
        mov	ecx, dword ptr [esp + 0x14]
        mov	edx, dword ptr [esp + 0x20]
        fstp	dword ptr [ecx]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esi]
        fld	dword ptr [edi]
        fstp	dword ptr [edx]
        fstp	dword ptr [edi]
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        ret
    loc_007fa54f:
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [ebx]
        fstp	dword ptr [ebp]
    loc_007fa558:
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        ret
    }
}


// [0x007F83B0] sub_007F83B0 (333 bytes)
extern "C" void ext_007D5490();
extern "C" void ext_007DB720();
extern "C" void ext_007FC4E0();
extern "C" int mem_0094CE80;

// [0x007F83B0] sub_007F83B0 (333 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F83B0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [ebx + 48h]
        call ext_007FC4E0
        mov eax, dword ptr [esp + 1Ch]
        cmp eax, 1
        jle done
        push ebp
        push esi
        add eax, -1
        push edi
        lea esi, [ecx + 20h]
        mov dword ptr [esp + 24h], eax
        _emit 0x8b
        _emit 0xff
    loop_top:
        push ebx
        call ext_007DB720
        fld dword ptr [esi - 10h]
        mov edi, eax
        fmul dword ptr [edi + 4]
        lea eax, [esi - 20h]
        fld dword ptr [edi]
        mov ecx, dword ptr [ebx + 10h]
        fmul dword ptr [eax]
        add esp, 4
        push eax
        mov eax, dword ptr [ebx + 14h]
        faddp st(1), st
        push eax
        fld dword ptr [esi]
        push ecx
        fmul dword ptr [edi + 8]
        sub esp, 8
        lea ebp, [esi + 20h]
        faddp st(1), st
        fstp dword ptr [esp + 24h]
        fld dword ptr [esi - 1Ch]
        fmul dword ptr [edi]
        fld dword ptr [esi - 0Ch]
        fmul dword ptr [edi + 4]
        faddp st(1), st
        fld dword ptr [esi + 4]
        fmul dword ptr [edi + 8]
        faddp st(1), st
        fstp dword ptr [esp + 28h]
        fld dword ptr [esi - 18h]
        fmul dword ptr [edi]
        fld dword ptr [esi - 8]
        fmul dword ptr [edi + 4]
        faddp st(1), st
        fld dword ptr [esi + 8]
        fmul dword ptr [edi + 8]
        faddp st(1), st
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [esp + 40h]
        fstp dword ptr [esp + 4]
        fld dword ptr [mem_0094CE80]
        fstp dword ptr [esp]
        push ebp
        call ext_007D5490
        fld dword ptr [esp + 28h]
        fadd dword ptr [esi + 50h]
        add esp, 18h
        fstp dword ptr [esi + 50h]
        fld dword ptr [esp + 14h]
        fadd dword ptr [esi + 54h]
        fstp dword ptr [esi + 54h]
        fld dword ptr [esp + 18h]
        fadd dword ptr [esi + 58h]
        fstp dword ptr [esi + 58h]
        fld dword ptr [esi + 30h]
        fmul dword ptr [edi + 4]
        fld dword ptr [edi]
        fmul dword ptr [ebp]
        faddp st(1), st
        fld dword ptr [esi + 40h]
        fmul dword ptr [edi + 8]
        faddp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [esi + 34h]
        fmul dword ptr [edi + 4]
        fld dword ptr [esi + 24h]
        fmul dword ptr [edi]
        faddp st(1), st
        fld dword ptr [esi + 44h]
        fmul dword ptr [edi + 8]
        faddp st(1), st
        fstp dword ptr [esp + 14h]
        fld dword ptr [esi + 38h]
        fmul dword ptr [edi + 4]
        fld dword ptr [esi + 28h]
        fmul dword ptr [edi]
        faddp st(1), st
        fld dword ptr [esi + 48h]
        fmul dword ptr [edi + 8]
        faddp st(1), st
        fstp dword ptr [esp + 18h]
        add esi, 40h
        sub dword ptr [esp + 24h], 1
        fld dword ptr [esi + 10h]
        fsub dword ptr [esp + 10h]
        fstp dword ptr [esi + 10h]
        fld dword ptr [esi + 14h]
        fsub dword ptr [esp + 14h]
        fstp dword ptr [esi + 14h]
        fld dword ptr [esi + 18h]
        fsub dword ptr [esp + 18h]
        fstp dword ptr [esi + 18h]
        jne loop_top
        pop edi
        pop esi
        pop ebp
    done:
        pop ebx
        add esp, 0ch
        ret
    }
}

extern "C" void ext_007F4C50();

// [0x007F4CD0] sub_007F4CD0 (781 bytes)
extern "C" __declspec(naked) void __cdecl fn_007F4CD0() {
    __asm {
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 2Ch]
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 34h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 18h]
        mov dword ptr [esi + 64h], eax
        push edi
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        test edi, edi
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6Ch], ecx
        je L_7f4d1b
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7f4d00:
        mov edx, dword ptr [esi + 4Ch]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ecx + eax*4], 0
        add eax, 1
        cmp eax, edi
        jne L_7f4d00
    L_7f4d1b:
        mov eax, dword ptr [esp + 24h]
        cdq
        and edx, 3
        add eax, edx
        mov ebp, eax
        sar ebp, 2
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esp + 14h], ebp
        je L_7f4d8b
        mov eax, dword ptr [esp + 20h]
        add eax, 2Ch
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_7f4d40:
        cmp dword ptr [eax - 20h], -1
        je L_7f4d60
        mov edx, dword ptr [eax - 20h]
        mov ecx, dword ptr [esi + 4Ch]
        add dword ptr [ecx + edx*4], 1
        lea ecx, [ecx + edx*4]
        mov edx, dword ptr [eax - 20h]
        mov ecx, dword ptr [esi + 4]
        add dword ptr [ecx + edx*4], 1
        lea ecx, [ecx + edx*4]
    L_7f4d60:
        cmp dword ptr [eax], -1
        je L_7f4d7d
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esi + 4Ch]
        add dword ptr [ecx + edx*4], 1
        lea ecx, [ecx + edx*4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esi + 4]
        add dword ptr [ecx + edx*4], 1
        lea ecx, [ecx + edx*4]
    L_7f4d7d:
        add eax, 100h
        sub ebp, 1
        jne L_7f4d40
        mov ebp, dword ptr [esp + 14h]
    L_7f4d8b:
        xor eax, eax
        xor ecx, ecx
        test ebx, ebx
        je L_7f4de3
        mov ebp, dword ptr [esp + 3Ch]
        mov dword ptr [esp + 1Ch], ebx
        jmp L_7f4da0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_7f4da0:
        xor ebx, ebx
        xor edi, edi
        cmp dword ptr [ebp], ebx
        je L_7f4dd1
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7f4db0:
        mov edx, dword ptr [esi + 40h]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [edx + ecx*4], edi
        mov edx, dword ptr [esi + 4Ch]
        mov edx, dword ptr [edx + ecx*4]
        add ebx, 1
        add eax, edx
        add edi, edx
        add ecx, 1
        cmp ebx, dword ptr [ebp]
        jne L_7f4db0
    L_7f4dd1:
        add ebp, 4
        sub dword ptr [esp + 1Ch], 1
        jne L_7f4da0
        mov edi, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 14h]
    L_7f4de3:
        mov dword ptr [esi + 74h], eax
        xor eax, eax
        test edi, edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 78h], ebp
        je L_7f4e11
        jmp L_7f4e00
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7f4e00:
        mov ecx, dword ptr [esi + 4Ch]
        mov dword ptr [ecx + eax*4], 0
        add eax, 1
        cmp eax, edi
        jne L_7f4e00
    L_7f4e11:
        xor ecx, ecx
        test edi, edi
        je L_7f4e41
    L_7f4e17:
        xor eax, eax
        cmp dword ptr [esi + 78h], eax
        je L_7f4e3a
        mov edi, edi
    L_7f4e20:
        mov edx, dword ptr [esi + 78h]
        mov ebx, dword ptr [esi + 34h]
        imul edx, ecx
        add edx, eax
        add eax, 1
        mov dword ptr [ebx + edx*4], -1
        cmp eax, dword ptr [esi + 78h]
        jne L_7f4e20
    L_7f4e3a:
        add ecx, 1
        cmp ecx, edi
        jne L_7f4e17
    L_7f4e41:
        xor edi, edi
        cmp dword ptr [esp + 34h], edi
        mov dword ptr [esp + 1Ch], 0
        mov dword ptr [esp + 3Ch], edi
        je L_7f4fd5
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7f4e60:
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + edi*4], 0
        mov eax, dword ptr [ecx + edi*4]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [esp + 10h], 0
        je L_7f4fc0
        mov ecx, dword ptr [esp + 1Ch]
        shl ecx, 8
        add ecx, dword ptr [esp + 20h]
        mov dword ptr [esp + 14h], ecx
    L_7f4e97:
        mov ebx, dword ptr [ecx + 0Ch]
        cmp ebx, -1
        mov ebp, dword ptr [ecx + 2Ch]
        je L_7f4f16
        mov edx, dword ptr [esi + 40h]
        mov eax, dword ptr [esi + 4Ch]
        mov edi, dword ptr [edx + ebx*4]
        add edi, dword ptr [eax + ebx*4]
        push 0
        push ecx
        lea ecx, [edi + edi*2]
        shl ecx, 5
        add ecx, dword ptr [esi]
        push ecx
        call ext_007F4C50
        mov eax, dword ptr [esi + 78h]
        mov edx, dword ptr [esi + 4Ch]
        imul eax, ebx
        mov edx, dword ptr [edx + ebx*4]
        add eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 34h]
        mov dword ptr [ecx + eax*4], edx
        mov eax, dword ptr [esi + 4Ch]
        lea ebx, [eax + ebx*4]
        mov eax, dword ptr [esp + 28h]
        mov edx, 1
        add dword ptr [ebx], edx
        mov ecx, dword ptr [esi + 28h]
        mov dword ptr [ecx + edi*4], eax
        mov ecx, dword ptr [esi + 1Ch]
        mov eax, dword ptr [esp + 1Ch]
        mov dword ptr [ecx + edi*4], eax
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esp + 48h]
        add dword ptr [ecx + eax*4], edx
        add dword ptr [esi + 2Ch], edx
        mov edi, dword ptr [esp + 48h]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [esp + 20h]
        add esp, 0Ch
        add dword ptr [esi + 20h], edx
        jmp L_7f4f1b
    L_7f4f16:
        mov edx, 1
    L_7f4f1b:
        cmp ebp, -1
        je L_7f4f90
        mov eax, dword ptr [esi + 40h]
        mov ebx, dword ptr [esi + 4Ch]
        mov edi, dword ptr [eax + ebp*4]
        add edi, dword ptr [ebx + ebp*4]
        push edx
        push ecx
        lea ecx, [edi + edi*2]
        shl ecx, 5
        add ecx, dword ptr [esi]
        push ecx
        call ext_007F4C50
        mov ecx, dword ptr [esi + 78h]
        mov edx, dword ptr [esi + 4Ch]
        imul ecx, ebp
        mov edx, dword ptr [edx + ebp*4]
        mov eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [esi + 34h]
        add ecx, eax
        mov dword ptr [ebx + ecx*4], edx
        mov ecx, dword ptr [esi + 4Ch]
        lea ebp, [ecx + ebp*4]
        mov edx, 1
        add dword ptr [ebp], edx
        mov ecx, dword ptr [esi + 28h]
        mov dword ptr [ecx + edi*4], eax
        mov eax, dword ptr [esi + 1Ch]
        mov ecx, dword ptr [esp + 1Ch]
        mov dword ptr [eax + edi*4], ecx
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esp + 48h]
        add dword ptr [eax + ecx*4], edx
        add dword ptr [esi + 2Ch], edx
        mov edi, dword ptr [esp + 48h]
        lea eax, [eax + ecx*4]
        mov ecx, dword ptr [esp + 20h]
        add esp, 0Ch
        add dword ptr [esi + 20h], edx
    L_7f4f90:
        add dword ptr [esp + 1Ch], edx
        mov ebx, dword ptr [esp + 10h]
        add ebx, edx
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + edi*4]
        cdq
        and edx, 3
        add eax, edx
        add ecx, 100h
        sar eax, 2
        cmp ebx, eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 10h], ebx
        jne L_7f4e97
    L_7f4fc0:
        add dword ptr [esi + 5Ch], 1
        add edi, 1
        cmp edi, dword ptr [esp + 34h]
        mov dword ptr [esp + 3Ch], edi
        jne L_7f4e60
    L_7f4fd5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007F53C0] sub_007F53C0 (791 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F53C0(void* self) {
    __asm {
        sub	esp, 0x1c
        mov	ecx, dword ptr [esp + 0x20]
        mov	eax, dword ptr [ecx]
        push	ebx
        push	ebp
        mov	ebp, dword ptr [esp + 0x30]
        test	ebp, ebp
        push	esi
        mov	esi, dword ptr [ecx + 0x18]
        mov	dword ptr [esp + 0x24], esi
        mov	dword ptr [esp + 0x10], eax
        jl	loc_007F53E3
        cmp	ebp, esi
        jl	loc_007F53E5
    loc_007F53E3:
        xor	ebp, ebp
    loc_007F53E5:
        lea	edx, [ebp + 2*ebp]
        lea	eax, [eax + 4*edx]
        mov	edx, dword ptr [esp + 0x30]
        fld	dword ptr [edx + 0x4]
        or	ebx, -0x1
        cmp	esi, -0x2
        fld	dword ptr [edx]
        fld	dword ptr [edx + 0x8]
        mov	dword ptr [esp + 0xc], ebp
        fld	dword ptr [eax + 0x4]
        mov	dword ptr [esp + 0x14], 0xfffffffe
        fmul	st, st(3)
        fld	dword ptr [eax]
        fmul	st, st(3)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(2)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x34]
        jle	loc_007F56C0
        fld	dword ptr [esp + 0x38]
        push	edi
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F5435
    loc_007F5431:
        mov	ebx, dword ptr [esp + 0x1c]
    loc_007F5435:
        cmp	ebx, ebp
        je	loc_007F5694
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        je	loc_007F56AA
        mov	eax, dword ptr [ecx + 0x4]
        lea	edx, [4*ebp]
        mov	esi, dword ptr [eax + edx + 0x4]
        sub	esi, dword ptr [eax + edx]
        add	eax, edx
        xor	eax, eax
        cmp	esi, 0x4
        mov	dword ptr [esp + 0x1c], ebp
        mov	dword ptr [esp + 0x20], edx
        jl	loc_007F5605
        mov	eax, dword ptr [ecx + 0x4]
        mov	edx, dword ptr [edx + eax]
        mov	eax, dword ptr [ecx + 0x14]
        mov	edi, dword ptr [ecx + 0x10]
        lea	ecx, [eax + 4*edx + 0x8]
        lea	eax, [esi - 0x4]
        shr	eax, 0x2
        add	eax, 0x1
        lea	edx, [4*eax]
        mov	dword ptr [esp + 0x34], eax
        mov	dword ptr [esp + 0x24], edx
    loc_007F5498:
        mov	eax, dword ptr [ecx - 0x8]
        lea	eax, [eax + 4*eax]
        mov	edx, dword ptr [edi + 4*eax + 0x8]
        cmp	edx, ebx
        je	loc_007F54ED
        mov	ebp, dword ptr [esp + 0x14]
        lea	eax, [edx + 2*edx]
        fld	dword ptr [ebp + 4*eax + 0x4]
        lea	eax, [ebp + 4*eax]
        fmul	st, st(5)
        fld	dword ptr [eax]
        fmul	st, st(5)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(4)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne	loc_007F54E7
        fstp	st(1)
        mov	ebp, edx
        fstp	dword ptr [esp + 0x38]
        mov	dword ptr [esp + 0x10], ebp
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F54ED
    loc_007F54E7:
        mov	ebp, dword ptr [esp + 0x10]
        fstp	st(0)
    loc_007F54ED:
        mov	eax, dword ptr [ecx - 0x4]
        lea	edx, [eax + 4*eax]
        mov	edx, dword ptr [edi + 4*edx + 0x8]
        cmp	edx, ebx
        je	loc_007F5542
        mov	ebp, dword ptr [esp + 0x14]
        lea	eax, [edx + 2*edx]
        fld	dword ptr [ebp + 4*eax + 0x4]
        lea	eax, [ebp + 4*eax]
        fmul	st, st(5)
        fld	dword ptr [eax]
        fmul	st, st(5)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(4)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne	loc_007F553C
        fstp	st(1)
        mov	ebp, edx
        fstp	dword ptr [esp + 0x38]
        mov	dword ptr [esp + 0x10], ebp
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F5542
    loc_007F553C:
        mov	ebp, dword ptr [esp + 0x10]
        fstp	st(0)
    loc_007F5542:
        mov	eax, dword ptr [ecx]
        lea	edx, [eax + 4*eax]
        mov	edx, dword ptr [edi + 4*edx + 0x8]
        cmp	edx, ebx
        je	loc_007F5596
        mov	ebp, dword ptr [esp + 0x14]
        lea	eax, [edx + 2*edx]
        fld	dword ptr [ebp + 4*eax + 0x4]
        lea	eax, [ebp + 4*eax]
        fmul	st, st(5)
        fld	dword ptr [eax]
        fmul	st, st(5)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(4)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne	loc_007F5590
        fstp	st(1)
        mov	ebp, edx
        fstp	dword ptr [esp + 0x38]
        mov	dword ptr [esp + 0x10], ebp
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F5596
    loc_007F5590:
        mov	ebp, dword ptr [esp + 0x10]
        fstp	st(0)
    loc_007F5596:
        mov	eax, dword ptr [ecx + 0x4]
        lea	edx, [eax + 4*eax]
        mov	edx, dword ptr [edi + 4*edx + 0x8]
        cmp	edx, ebx
        je	loc_007F55EB
        mov	ebp, dword ptr [esp + 0x14]
        lea	eax, [edx + 2*edx]
        fld	dword ptr [ebp + 4*eax + 0x4]
        lea	eax, [ebp + 4*eax]
        fmul	st, st(5)
        fld	dword ptr [eax]
        fmul	st, st(5)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(4)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne	loc_007F55E5
        fstp	st(1)
        mov	ebp, edx
        fstp	dword ptr [esp + 0x38]
        mov	dword ptr [esp + 0x10], ebp
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F55EB
    loc_007F55E5:
        mov	ebp, dword ptr [esp + 0x10]
        fstp	st(0)
    loc_007F55EB:
        add	ecx, 0x10
        sub	dword ptr [esp + 0x34], 0x1
        jne	loc_007F5498
        mov	edx, dword ptr [esp + 0x20]
        mov	eax, dword ptr [esp + 0x24]
        mov	ecx, dword ptr [esp + 0x30]
    loc_007F5605:
        cmp	eax, esi
        jge	loc_007F567F
        mov	edi, dword ptr [ecx + 0x10]
        mov	dword ptr [esp + 0x34], edi
        mov	edi, dword ptr [ecx + 0x4]
        mov	edx, dword ptr [edx + edi]
        mov	ecx, dword ptr [ecx + 0x14]
        add	edx, eax
        lea	edx, [ecx + 4*edx]
        sub	esi, eax
    loc_007F5620:
        mov	eax, dword ptr [edx]
        mov	ecx, dword ptr [esp + 0x34]
        lea	eax, [eax + 4*eax]
        mov	ecx, dword ptr [ecx + 4*eax + 0x8]
        cmp	ecx, ebx
        je	loc_007F566F
        mov	edi, dword ptr [esp + 0x14]
        lea	eax, [ecx + 2*ecx]
        fld	dword ptr [edi + 4*eax + 0x4]
        lea	eax, [edi + 4*eax]
        fmul	st, st(5)
        fld	dword ptr [eax]
        fmul	st, st(5)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmul	st, st(4)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne	loc_007F566D
        fstp	st(1)
        mov	ebp, ecx
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        jmp	loc_007F566F
    loc_007F566D:
        fstp	st(0)
    loc_007F566F:
        add	edx, 0x4
        sub	esi, 0x1
        jne	loc_007F5620
        mov	ecx, dword ptr [esp + 0x30]
        mov	dword ptr [esp + 0x10], ebp
    loc_007F567F:
        mov	eax, dword ptr [esp + 0x18]
        add	eax, 0x1
        cmp	eax, dword ptr [esp + 0x28]
        mov	dword ptr [esp + 0x18], eax
        jl	loc_007F5431
    loc_007F5694:
        mov	ecx, dword ptr [esp + 0x40]
        fstp	st(4)
        pop	edi
        fstp	st(2)
        pop	esi
        fstp	st(0)
        mov	dword ptr [ecx], ebp
        fstp	st(0)
        pop	ebp
        pop	ebx
        add	esp, 0x1c
        ret
    loc_007F56AA:
        mov	edx, dword ptr [esp + 0x40]
        fstp	st(4)
        pop	edi
        fstp	st(2)
        pop	esi
        fstp	st(0)
        mov	dword ptr [edx], ebp
        fstp	st(0)
        pop	ebp
        pop	ebx
        add	esp, 0x1c
        ret
    loc_007F56C0:
        mov	eax, dword ptr [esp + 0x3c]
        fstp	st(2)
        pop	esi
        fstp	st(0)
        mov	dword ptr [eax], ebp
        fstp	st(0)
        fld	dword ptr [esp + 0x30]
        pop	ebp
        pop	ebx
        add	esp, 0x1c
        ret
    }
}

// [0x007F5850] sub_007F5850 (250 bytes)
extern "C" void ext_007F53C0();
extern "C" __declspec(naked) float __cdecl fn_007F5850(void* src, const float* a, float* out) {
    __asm {
        sub esp, 16
        push esi
        mov esi, dword ptr [esp + 24]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        mov esi, eax
        mov eax, dword ptr [esp + 40]
        fld dword ptr [esi]
        fmul dword ptr [eax]
        add esp, 8
        fld dword ptr [esi + 4]
        add edi, 16
        fmul dword ptr [eax + 4]
        faddp st(1), st
        fld dword ptr [esi + 8]
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fstp dword ptr [esp + 12]
        fld dword ptr [esi + 16]
        fmul dword ptr [eax]
        fld dword ptr [esi + 20]
        fmul dword ptr [eax + 4]
        faddp st(1), st
        fld dword ptr [esi + 24]
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fstp dword ptr [esp + 16]
        fld dword ptr [esi + 36]
        fmul dword ptr [eax + 4]
        fld dword ptr [esi + 32]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [esi + 40]
        fmul dword ptr [eax + 8]
        lea eax, [esp + 8]
        push eax
        push ecx
        faddp st(1), st
        lea ecx, [esp + 20]
        fstp dword ptr [esp + 28]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [esp]
        push 0
        push ecx
        push edi
        call ext_007F53C0
        fstp dword ptr [esp + 52]
        mov eax, dword ptr [esp + 28]
        fld dword ptr [esi]
        mov ecx, dword ptr [esp + 56]
        lea edx, [eax + 2 * eax]
        mov eax, dword ptr [edi]
        fmul dword ptr [eax + 4 * edx]
        lea eax, [eax + 4 * edx]
        fld dword ptr [eax + 4]
        add esp, 20
        fmul dword ptr [esi + 16]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esi + 32]
        faddp st(1), st
        fadd dword ptr [esi + 48]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 4]
        fmul dword ptr [esi + 20]
        fld dword ptr [eax]
        fmul dword ptr [esi + 4]
        faddp st(1), st
        fld dword ptr [eax + 8]
        fmul dword ptr [esi + 36]
        faddp st(1), st
        fadd dword ptr [esi + 52]
        fstp dword ptr [ecx + 4]
        fld dword ptr [esi + 8]
        fmul dword ptr [eax]
        fld dword ptr [esi + 24]
        fmul dword ptr [eax + 4]
        faddp st(1), st
        fld dword ptr [eax + 8]
        pop edi
        fmul dword ptr [esi + 40]
        faddp st(1), st
        fadd dword ptr [esi + 56]
        pop esi
        fstp dword ptr [ecx + 8]
        fld dword ptr [esp + 24]
        add esp, 16
        ret
    }
}

// [0x007F7BF0] sub_007F7BF0 (931 bytes)
extern "C" void ext_007F7A30();
extern "C" int mem_0092F678;
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __cdecl fn_007F7BF0() {
    __asm {
        mov edx, dword ptr [esp + 0x10]
        sub esp, 0x24
        test edx, edx
        push esi
        je L_7F7C24
        mov esi, dword ptr [esp + 0x3c]
        fldz
    L_7F7C02:
        fcom dword ptr [esi + 4*edx]
        fnstsw ax
        test ah, 0x44
        jp L_7F7C1A
        sub edx, 1
        jne L_7F7C02
        fstp st(0)
        xor eax, eax
        pop esi
        add esp, 0x24
        ret
    L_7F7C1A:
        test edx, edx
        fstp st(0)
        mov dword ptr [esp + 0x38], edx
        jne L_7F7C2B
    L_7F7C24:
        xor eax, eax
        pop esi
        add esp, 0x24
        ret
    L_7F7C2B:
        push ebx
        mov ecx, 1
        lea eax, [edx - 1]
        cmp eax, ecx
        push ebp
        push edi
        mov dword ptr [esp + 0x1c], ecx
        jb L_7F7D5E
    L_7F7C42:
        lea eax, [4*edx + 4]
        mov ebx, edx
        sub ebx, ecx
        mov ebp, esi
        add esi, eax
        lea eax, [ebx + 1]
        xor edi, edi
        cmp eax, 4
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0x18], ebx
        jl L_7F7D13
        mov edi, esi
        sub edi, ebp
        add ebx, 1
        shr ebx, 2
        mov dword ptr [esp + 0x20], edi
        mov ecx, 2
        lea edx, [esi + 0xc]
        lea eax, [ebp + 8]
        lea edi, [4*ebx]
    L_7F7C87:
        lea ebp, [ecx - 1]
        test ebp, ebp
        mov dword ptr [esp + 0x28], ebp
        fild dword ptr [esp + 0x28]
        jge L_7F7C9C
        fadd dword ptr [mem_0092F678]
    L_7F7C9C:
        fmul dword ptr [eax - 4]
        mov ebp, ecx
        test ebp, ebp
        mov dword ptr [esp + 0x28], ebp
        fstp dword ptr [edx - 0xc]
        fild dword ptr [esp + 0x28]
        jge L_7F7CB6
        fadd dword ptr [mem_0092F678]
    L_7F7CB6:
        fmul dword ptr [eax]
        lea ebp, [ecx + 1]
        test ebp, ebp
        mov dword ptr [esp + 0x28], ebp
        fstp dword ptr [edx - 8]
        fild dword ptr [esp + 0x28]
        jge L_7F7CD0
        fadd dword ptr [mem_0092F678]
    L_7F7CD0:
        fmul dword ptr [eax + 4]
        mov ebp, dword ptr [esp + 0x20]
        fstp dword ptr [eax + ebp]
        lea ebp, [ecx + 2]
        test ebp, ebp
        mov dword ptr [esp + 0x28], ebp
        fild dword ptr [esp + 0x28]
        jge L_7F7CEF
        fadd dword ptr [mem_0092F678]
    L_7F7CEF:
        fmul dword ptr [eax + 8]
        add eax, 0x10
        add edx, 0x10
        add ecx, 4
        sub ebx, 1
        fstp dword ptr [edx - 0x10]
        jne L_7F7C87
        mov ebx, dword ptr [esp + 0x18]
        cmp edi, ebx
        mov edx, dword ptr [esp + 0x44]
        ja L_7F7D48
        mov ebp, dword ptr [esp + 0x14]
    L_7F7D13:
        lea eax, [edi + 1]
        lea ebp, [ebp + 4*edi + 4]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7F7D20:
        mov ecx, eax
        test ecx, ecx
        mov dword ptr [esp + 0x28], ecx
        fild dword ptr [esp + 0x28]
        jge L_7F7D34
        fadd dword ptr [mem_0092F678]
    L_7F7D34:
        fmul dword ptr [ebp]
        add edi, 1
        add eax, 1
        add ebp, 4
        cmp edi, ebx
        fstp dword ptr [esi + 4*edi - 4]
        jbe L_7F7D20
    L_7F7D48:
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, 1
        lea eax, [edx - 1]
        cmp ecx, eax
        mov dword ptr [esp + 0x1c], ecx
        jbe L_7F7C42
    L_7F7D5E:
        fld dword ptr [esi]
        mov dword ptr [esp + 0x10], 0
        fchs
        fdiv dword ptr [esi + 4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld dword ptr [esp + 0x3c]
        fst qword ptr [esp + 0x2c]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jp L_7F7DA9
        fld dword ptr [esp + 0x40]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 1
        jne L_7F7DAB
        mov eax, dword ptr [esp + 0x38]
        fxch st(1)
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x10], 1
        jmp short L_7F7DAD
    L_7F7DA9:
        fstp st(1)
    L_7F7DAB:
        fstp st(1)
    L_7F7DAD:
        mov edi, 2
        cmp edx, edi
        jb L_7F7F85
        lea ecx, [4*edx]
        mov dword ptr [esp + 0x24], ecx
        jmp short L_7F7DD4
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_7F7DD0:
        fld qword ptr [esp + 0x2c]
    L_7F7DD4:
        fld dword ptr [esp + 0x3c]
        mov eax, 0xfffffffc
        sub eax, dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x1c]
        mov ecx, esi
        add esi, eax
        fld dword ptr [esi + 4*edi]
        xor ebx, ebx
        test edi, edi
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x28], ecx
        mov eax, edi
        je L_7F7E11
    L_7F7DFC:
        fld dword ptr [esi + 4*eax - 4]
        sub eax, 1
        fld dword ptr [esp + 0x14]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        jne L_7F7DFC
    L_7F7E11:
        fstp st(0)
        xor ebp, ebp
        cmp dword ptr [esp + 0x10], ebp
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        jbe L_7F7EEC
    L_7F7E27:
        test edi, edi
        mov eax, dword ptr [esp + 0x38]
        fld dword ptr [eax + 4*ebp]
        mov eax, edi
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 4*edi]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x20]
        je L_7F7E5C
        fld st(0)
    L_7F7E45:
        fld dword ptr [esi + 4*eax - 4]
        sub eax, 1
        fld dword ptr [esp + 0x14]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        jne L_7F7E45
        fstp st(0)
    L_7F7E5C:
        fldz
        fld dword ptr [esp + 0x14]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L_7F7E7B
        mov eax, dword ptr [esp + 0x38]
        fxch st(1)
        fst dword ptr [eax + 4*ebx]
        add ebx, 1
        jmp short L_7F7ED7
    L_7F7E7B:
        fld st(0)
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 5
        jp L_7F7ED3
        push ecx
        fxch st(1)
        push esi
        push edi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fstp dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call ext_007F7A30
        mov ecx, dword ptr [esp + 0x54]
        mov edx, dword ptr [esp + 0x60]
        fstp dword ptr [ecx + 4*ebx]
        fld dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x30]
        add esp, 0x1c
        add ebx, 1
        jmp short L_7F7ED5
    L_7F7ED3:
        fstp st(0)
    L_7F7ED5:
        fxch st(1)
    L_7F7ED7:
        fstp dword ptr [esp + 0x1c]
        add ebp, 1
        cmp ebp, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x18]
        jb L_7F7E27
    L_7F7EEC:
        test edi, edi
        fld dword ptr [esi + 4*edi]
        fstp dword ptr [esp + 0x14]
        mov eax, edi
        je L_7F7F14
        fld dword ptr [esp + 0x40]
    L_7F7EFD:
        fld dword ptr [esi + 4*eax - 4]
        sub eax, 1
        fld dword ptr [esp + 0x14]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        jne L_7F7EFD
        fstp st(0)
    L_7F7F14:
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 5
        jp L_7F7F68
        push ecx
        fxch st(1)
        push esi
        push edi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call ext_007F7A30
        mov edx, dword ptr [esp + 0x54]
        fstp dword ptr [edx + 4*ebx]
        mov edx, dword ptr [esp + 0x60]
        add esp, 0x1c
        add ebx, 1
        jmp short L_7F7F6C
    L_7F7F68:
        fstp st(1)
        fstp st(0)
    L_7F7F6C:
        add edi, 1
        cmp edi, edx
        mov dword ptr [esp + 0x10], ebx
        jbe L_7F7DD0
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x24
        ret
    L_7F7F85:
        mov eax, dword ptr [esp + 0x10]
        fstp st(0)
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x007FC700] sub_007FC700 (940 bytes)
extern "C" void ext_007FC670();
extern "C" void ext_007FC5E0();
extern "C" int mem_00958CC8;

extern "C" __declspec(naked) void __fastcall fn_007FC700(void* self) {
    __asm {
        sub esp, 0c8h
        fld dword ptr [esp+0d4h]
        push ebx
        fmul qword ptr [mem_00958CC8]
        push ebp
        push esi
        push edi
        fstp dword ptr [esp+14h]
        mov edi, ecx
        fld dword ptr [esp+14h]
        mov ebx, eax
        add edi, 8
        fstp qword ptr [esp+0d0h]
        sub edx, ebx
        mov dword ptr [esp+18h], 0fh
        mov dword ptr [esp+6ch], edx
        mov ebp, 3
L700_loop:
        fld dword ptr [edx+ebx]
        fstp dword ptr [esp+14h]
        fld dword ptr [ebx]
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fcomp qword ptr [esp+0d0h]
        fnstsw ax
        test ah, 41h
        jp L700_big
        fld dword ptr [edi-8]
        xor ecx, ecx
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fstp dword ptr [esp+4ch]
        fld dword ptr [edi-4]
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fstp dword ptr [esp+50h]
        fld dword ptr [edi]
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fstp dword ptr [esp+54h]
        fld dword ptr [edi+4]
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fstp dword ptr [esp+58h]
        fld dword ptr [esp+14h]
        fld dword ptr [esp+4ch]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L700_c1
        mov ecx, 1
L700_c1:
        fld dword ptr [esp+50h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L700_c2
        or ecx, 2
L700_c2:
        fld dword ptr [esp+54h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jp L700_c3
        or ecx, 4
L700_c3:
        fld dword ptr [esp+58h]
        fcompp
        fnstsw ax
        test ah, 41h
        jp L700_c4
        or ecx, 8
L700_c4:
        and dword ptr [esp+18h], ecx
        jmp L700_cont
L700_big:
        fld dword ptr [ebx]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fld st(0)
        fabs
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+10h]
        fld dword ptr [esp+14h]
        fld dword ptr [esp+10h]
        fmul st, st(1)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+0a0h]
        fst dword ptr [esp+0a4h]
        fst dword ptr [esp+0a8h]
        fstp dword ptr [esp+0ach]
        fld dword ptr [edi-8]
        fmul st, st(3)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+80h]
        fld dword ptr [edi-4]
        fmul st, st(4)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+84h]
        fld dword ptr [edi]
        fmul st, st(5)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+88h]
        fld dword ptr [edi+4]
        fmulp st(6), st
        fxch st(5)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+8ch]
        fld dword ptr [esp+80h]
        fchs
        fstp dword ptr [esp+1ch]
        fld dword ptr [esp+84h]
        fchs
        fstp dword ptr [esp+20h]
        fld dword ptr [esp+88h]
        fchs
        fstp dword ptr [esp+24h]
        fld dword ptr [esp+8ch]
        fchs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+1ch]
        fsub dword ptr [esp+0a0h]
        fstp dword ptr [esp+2ch]
        fld dword ptr [esp+20h]
        fsub dword ptr [esp+0a4h]
        fstp dword ptr [esp+30h]
        fld dword ptr [esp+24h]
        fsub dword ptr [esp+0a8h]
        fstp dword ptr [esp+34h]
        fld dword ptr [esp+28h]
        fsub dword ptr [esp+0ach]
        fstp dword ptr [esp+38h]
        fld dword ptr [esp+2ch]
        fstp dword ptr [esp+0c0h]
        fld dword ptr [esp+30h]
        fstp dword ptr [esp+0c4h]
        fld dword ptr [esp+34h]
        fstp dword ptr [esp+0c8h]
        fld dword ptr [esp+38h]
        fstp dword ptr [esp+0cch]
        fxch st(4)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [esp+70h]
        fst dword ptr [esp+74h]
        fst dword ptr [esp+78h]
        mov edx, dword ptr [esp+0dch]
        fstp dword ptr [esp+7ch]
        lea ecx, [esp+0c0h]
        mov esi, edx
        fstp dword ptr [esp+3ch]
        fstp dword ptr [esp+40h]
        fxch st(1)
        fstp dword ptr [esp+44h]
        fstp dword ptr [esp+48h]
        fld dword ptr [esp+3ch]
        fchs
        fstp dword ptr [esp+5ch]
        fld dword ptr [esp+40h]
        fchs
        fstp dword ptr [esp+60h]
        fld dword ptr [esp+44h]
        fchs
        fstp dword ptr [esp+64h]
        fld dword ptr [esp+48h]
        fchs
        fstp dword ptr [esp+68h]
        fld dword ptr [esp+5ch]
        fadd dword ptr [esp+70h]
        fstp dword ptr [esp+90h]
        fld dword ptr [esp+60h]
        fadd dword ptr [esp+74h]
        fstp dword ptr [esp+94h]
        fld dword ptr [esp+64h]
        fadd dword ptr [esp+78h]
        fstp dword ptr [esp+98h]
        fld dword ptr [esp+68h]
        fadd dword ptr [esp+7ch]
        fstp dword ptr [esp+9ch]
        fld dword ptr [esp+90h]
        fstp dword ptr [esp+0b0h]
        fld dword ptr [esp+94h]
        fstp dword ptr [esp+0b4h]
        fld dword ptr [esp+98h]
        fstp dword ptr [esp+0b8h]
        fld dword ptr [esp+9ch]
        fstp dword ptr [esp+0bch]
        call ext_007FC670
        mov edx, dword ptr [esp+0e0h]
        lea ecx, [esp+0b0h]
        mov esi, edx
        call ext_007FC5E0
        mov edx, dword ptr [esp+6ch]
L700_cont:
        add ebx, 4
        add edi, 10h
        sub ebp, 1
        jne L700_loop
        mov esi, dword ptr [esp+0dch]
        fld dword ptr [esi]
        mov edx, dword ptr [esp+0e0h]
        fld dword ptr [edx]
        xor ecx, ecx
        fcompp
        fnstsw ax
        test ah, 1
        jne L700_e1
        mov ecx, 1
L700_e1:
        fld dword ptr [esi+4]
        fld dword ptr [edx+4]
        fcompp
        fnstsw ax
        test ah, 1
        jne L700_e2
        or ecx, 2
L700_e2:
        fld dword ptr [esi+8]
        fld dword ptr [edx+8]
        fcompp
        fnstsw ax
        test ah, 1
        jne L700_e3
        or ecx, 4
L700_e3:
        fld dword ptr [esi+0ch]
        pop edi
        fld dword ptr [edx+0ch]
        pop esi
        fcompp
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 1
        jne L700_e4
        or ecx, 8
L700_e4:
        mov eax, ecx
        and eax, dword ptr [esp+8]
        add esp, 0c8h
        ret
    }
}

// [0x007F7660] sub_007F7660 (967 bytes)
extern "C" int mem_0099EC5C;

extern "C" __declspec(naked) int __cdecl fn_007F7660(...) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x18]
        fsub dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fmul st(0), st
        fld1
        _emit 0xDE
        _emit 0xE1
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmul dword ptr [eax + 0x4]
        faddp st(3), st
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx]
        fmulp st(2), st
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [mem_0099EC5C]
        fld dword ptr [esp + 0x28]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne near ptr L_007F791A
        fld dword ptr [esp + 0x14]
        push esi
        fld dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x38]
        fmulp st(3), st
        push edi
        sub esp, 0x10
        _emit 0xDE
        _emit 0xE2
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push esi
        call fn_007F7190
        mov edi, dword ptr [esp + 0x54]
        add esp, 0x14
        test eax, eax
        je near ptr L_007F781B
        fld dword ptr [esi]
        sub esp, 0xc
        fmul dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp]
        push edi
        call fn_007F71F0
        add esp, 0x10
        test eax, eax
        je near ptr L_007F7907
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x2c]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x28]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_007F77B7
        fxch st(1)
        fst dword ptr [esp + 0x2c]
        jmp short L_007F77BD
    L_007F77B7:
        fst dword ptr [esp + 0x2c]
        fxch st(1)
    L_007F77BD:
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne short L_007F77F1
        fstp st(1)
    L_007F77D2:
        mov eax, dword ptr [esp + 0x44]
        fstp st(1)
        fstp dword ptr [esp + 0x2c]
        pop edi
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi]
        pop esi
        fldz
        fstp dword ptr [eax]
        mov eax, 0x1
        add esp, 0x10
        ret
    L_007F77F1:
        fstp st(0)
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jnp short L_007F77D2
        mov eax, dword ptr [esp + 0x44]
        fstp st(0)
        fstp dword ptr [esp + 0x2c]
        pop edi
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi]
        pop esi
        fldz
        fstp dword ptr [eax]
        mov eax, 0x1
        add esp, 0x10
        ret
    L_007F781B:
        fld dword ptr [esp + 0x1c]
        sub esp, 0x10
        fmul dword ptr [esp + 0x3c]
        fsub dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp]
        push edi
        call fn_007F7190
        add esp, 0x14
        test eax, eax
        je near ptr L_007F78E9
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x2c]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x28]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_007F7885
        fxch st(1)
        fst dword ptr [esp + 0x2c]
        jmp short L_007F788B
    L_007F7885:
        fst dword ptr [esp + 0x2c]
        fxch st(1)
    L_007F788B:
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne short L_007F78BF
        fstp st(1)
    L_007F78A0:
        mov eax, dword ptr [esp + 0x44]
        fstp st(1)
        fstp dword ptr [esp + 0x2c]
        pop edi
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi]
        pop esi
        fldz
        fstp dword ptr [eax]
        mov eax, 0x1
        add esp, 0x10
        ret
    L_007F78BF:
        fstp st(0)
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jnp short L_007F78A0
        mov eax, dword ptr [esp + 0x44]
        fstp st(0)
        fstp dword ptr [esp + 0x2c]
        pop edi
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi]
        pop esi
        fldz
        fstp dword ptr [eax]
        mov eax, 0x1
        add esp, 0x10
        ret
    L_007F78E9:
        fld dword ptr [esp + 0x30]
        fld1
        _emit 0xDE
        _emit 0xF1
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esi]
        fmul dword ptr [esp + 0x20]
        fstp dword ptr [edi]
    L_007F7907:
        fldz
        mov eax, dword ptr [esp + 0x44]
        pop edi
        fstp dword ptr [eax]
        mov eax, 0x1
        pop esi
        add esp, 0x10
        ret
    L_007F791A:
        fstp st(0)
        fldz
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_007F7935
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x30]
        jmp short L_007F7941
    L_007F7935:
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x2c]
    L_007F7941:
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fmul st(0), st(3)
        fld dword ptr [esp + 0x14]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmul st(0), st(5)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fcom st(1)
        fnstsw ax
        test ah, 0x1
        jne short L_007F799C
        mov ecx, dword ptr [esp + 0x34]
        fstp st(5)
        mov edx, dword ptr [esp + 0x3c]
        fstp st(2)
        mov eax, dword ptr [esp + 0x38]
        fstp st(1)
        fxch st(2)
        fstp dword ptr [ecx]
        fstp dword ptr [edx]
        fstp dword ptr [eax]
        xor eax, eax
        add esp, 0x10
        ret
    L_007F799C:
        fstp st(2)
        fstp st(3)
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x20]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jp short L_007F79D5
        mov ecx, dword ptr [esp + 0x34]
        fstp st(5)
        mov edx, dword ptr [esp + 0x3c]
        fstp st(1)
        mov eax, dword ptr [esp + 0x38]
        fstp st(2)
        fstp st(1)
        fxch st(1)
        fstp dword ptr [ecx]
        fldz
        fstp dword ptr [edx]
        fstp dword ptr [eax]
        xor eax, eax
        add esp, 0x10
        ret
    L_007F79D5:
        fstp st(3)
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_007F79E4
        fstp st(1)
        jmp short L_007F79E6
    L_007F79E4:
        fstp st(0)
    L_007F79E6:
        mov ecx, dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fst dword ptr [ecx]
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 0x5
        jp short L_007F7A03
        fstp st(2)
        jmp short L_007F7A05
    L_007F7A03:
        fstp st(0)
    L_007F7A05:
        mov edx, dword ptr [esp + 0x3c]
        fxch st(1)
        mov eax, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x24]
        fsubr dword ptr [esp + 0x24]
        fstp dword ptr [edx]
        fmul dword ptr [ecx]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [eax]
        xor eax, eax
        add esp, 0x10
        ret
    }
}

// [0x007FCF50] sub_007FCF50 (480 bytes)
extern "C" void ext_007FC1D0();
extern "C" void ext_007FC230();
extern "C" void ext_007FC700();
extern "C" int mem_00AB2CBC;
extern "C" int mem_00AB2CC0;
extern "C" int mem_00AB2CC4;
extern "C" int mem_00AB2CC8;
extern "C" int mem_00AB2CCC;
extern "C" int mem_00AB2CD0;
extern "C" int mem_00AB2CD4;
extern "C" int mem_00AB2CD8;
extern "C" __declspec(naked) void __fastcall fn_007FCF50(void* self) {
    __asm {
        sub esp, 0x88
        fld dword ptr [mem_00AB2CBC]
        push ebx
        fstp dword ptr [esp + 0x3c]
        mov ebx, ecx
        fld dword ptr [mem_00AB2CC0]
        push ebp
        mov ebp, dword ptr [esp + 0x94]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [mem_00AB2CC4]
        xor eax, eax
        fstp dword ptr [esp + 0x48]
        add ebx, 0x8
        fld dword ptr [mem_00AB2CC8]
        push esi
        fstp dword ptr [esp + 0x50]
        mov ecx, ebx
        fld dword ptr [mem_00AB2CCC]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [mem_00AB2CD0]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [mem_00AB2CD4]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [mem_00AB2CD8]
        fstp dword ptr [esp + 0x60]
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loop_fill:
        fld dword ptr [ecx - 0x8]
        add eax, 0x1
        fstp dword ptr [esp + 4*eax + 0x60]
        add ecx, 0xc
        cmp eax, 0x4
        fld dword ptr [ecx - 0x10]
        fstp dword ptr [esp + 4*eax + 0x70]
        fld dword ptr [ecx - 0xc]
        fstp dword ptr [esp + 4*eax + 0x80]
        jl loop_fill
        fld dword ptr [esp + 0xa0]
        mov edx, dword ptr [esp + 0x9c]
        push ecx
        lea eax, [esp + 0x58]
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        mov eax, edi
        lea ecx, [esp + 0x70]
        call ext_007FC700
        mov esi, eax
        add esp, 0xc
        test esi, esi
        je done
        push offset mem_00AB2CBC
        lea ecx, [esp + 0x48]
        call ext_007FC230
        and eax, esi
        push offset mem_00AB2CCC
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x38], eax
        call ext_007FC1D0
        and eax, esi
        xor ecx, ecx
        mov edx, ebx
        __asm _emit 0x90
    axis_loop:
        mov esi, dword ptr [esp + 0x34]
        mov ebx, 0x1
        shl ebx, cl
        __asm _emit 0x85 __asm _emit 0xde
        je skip_a
        fld dword ptr [esp + 4*ecx + 0x44]
        mov esi, dword ptr [ebp]
        fstp dword ptr [esp + 0xc]
        add esi, 0xc
        fld dword ptr [esp + 0xc]
        fld dword ptr [edi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [edi + 0x8]
        mov dword ptr [ebp], esi
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edx - 0x8]
        fadd dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [edx - 0x4]
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [edx]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esi - 0xc]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esi - 0x8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esi - 0x4]
    skip_a:
        __asm _emit 0x85 __asm _emit 0xd8
        je skip_b
        fld dword ptr [esp + 4*ecx + 0x54]
        mov esi, dword ptr [ebp]
        fstp dword ptr [esp + 0xc]
        add esi, 0xc
        fld dword ptr [esp + 0xc]
        fld dword ptr [edi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fmul dword ptr [edi + 0x8]
        mov dword ptr [ebp], esi
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edx - 0x8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx - 0x4]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edx]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esi - 0xc]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esi - 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esi - 0x4]
    skip_b:
        add ecx, 0x1
        add edx, 0xc
        cmp ecx, 0x4
        jl axis_loop
    done:
        pop esi
        pop ebp
        pop ebx
        add esp, 0x88
        ret
    }
}

// [0x007F82D0] sub_007F82D0 (221 bytes)
extern "C" void ext_007C7000();
extern "C" void ext_007D4D40();
extern "C" void ext_007F7FA0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __cdecl fn_007F82D0(void) {
    __asm {
        sub     esp, 18h
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 24h]
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 4]
        push    edi
        push    eax
        call    ext_007C7000
        mov     edi, eax
        mov     eax, dword ptr [edi + 34h]
        add     esp, 4
        test    eax, eax
        je      L82D0_fallback
        fld     dword ptr [esp + 2Ch]
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        push    esi
        push    ebp
        call    eax
        add     esp, 10h
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 18h
        ret
L82D0_fallback:
        fld     dword ptr [ebx]
        mov     eax, ebx
        fsub    dword ptr [esi]
        mov     ecx, esi
        fld     qword ptr [mem_00993828]
        fmul    st(1), st
        fld     dword ptr [esi]
        faddp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0Ch]
        fld     dword ptr [ebx + 4]
        fsub    dword ptr [esi + 4]
        fmul    st, st(1)
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [ebx + 8]
        fsub    dword ptr [esi + 8]
        fmulp   st(1), st
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esp + 14h]
        call    ext_007F7FA0
        fmul    qword ptr [mem_00993828]
        mov     ecx, dword ptr [edi + 28h]
        mov     eax, dword ptr [edi + 38h]
        push    ecx
        fadd    dword ptr [esp + 30h]
        push    ecx
        mov     ecx, dword ptr [edi + 30h]
        lea     edx, [esp + 14h]
        fstp    dword ptr [esp + 30h]
        fld     dword ptr [esp + 30h]
        fstp    dword ptr [esp]
        push    edx
        push    eax
        push    ebp
        call    ecx
        mov     edi, dword ptr [edi + 38h]
        mov     ebp, eax
        add     esp, 14h
        test    ebp, ebp
        jle     L82D0_done
        mov     ebx, ebp
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L82D0_loop:
        mov     edx, dword ptr [edi + 8]
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [edi]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 24h]
        push    esi
        push    edx
        call    ext_007D4D40
        fstp    dword ptr [edi + 10h]
        add     esp, 14h
        add     edi, 1Ch
        sub     ebx, 1
        jne     L82D0_loop
L82D0_done:
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 18h
        ret
    }
}

// [0x007FD130] sub_007FD130 (920 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FD130(void* self) {
    __asm {
        sub esp, 0x80
        fld dword ptr [mem_00AB2CBC]
        push ebp
        fstp dword ptr [esp + 0x34]
        lea ebp, [edi + 0x8]
        fld dword ptr [mem_00AB2CC0]
        xor eax, eax
        fstp dword ptr [esp + 0x38]
        mov ecx, ebp
        fld dword ptr [mem_00AB2CC4]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [mem_00AB2CC8]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [mem_00AB2CCC]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [mem_00AB2CD0]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [mem_00AB2CD4]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [mem_00AB2CD8]
        fstp dword ptr [esp + 0x50]
        mov edi, edi
        loop_top:
        fld dword ptr [ecx - 0x8]
        add eax, 0x1
        fstp dword ptr [esp + 4*eax + 0x50]
        add ecx, 0xc
        cmp eax, 0x4
        fld dword ptr [ecx - 0x10]
        fstp dword ptr [esp + 4*eax + 0x60]
        fld dword ptr [ecx - 0xc]
        fstp dword ptr [esp + 4*eax + 0x70]
        jl loop_top
        fld dword ptr [esp + 0x8c]
        mov edx, dword ptr [esp + 0x88]
        push ecx
        lea eax, [esp + 0x48]
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 0x3c]
        push ecx
        mov eax, esi
        lea ecx, [esp + 0x60]
        call ext_007FC700
        add esp, 0xc
        test eax, eax
        je done
        test al, 0x1
        je skip1
        fld dword ptr [esp + 0x34]
        mov ecx, dword ptr [ebx]
        fld dword ptr [esi]
        add ecx, 0xc
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        add ecx, 0xc
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ebp]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx - 0x18]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [ecx - 0x14]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x4]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [ebp]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [ecx - 0x4]
        skip1:
        test al, 0x2
        je skip2
        fld dword ptr [esp + 0x38]
        mov ecx, dword ptr [ebx]
        fld dword ptr [esi]
        add ecx, 0xc
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        add ecx, 0xc
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0xc]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x10]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x14]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx - 0x18]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [ecx - 0x14]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esp + 0x48]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0xc]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x10]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x14]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [ecx - 0x4]
        skip2:
        test al, 0x4
        je skip3
        fld dword ptr [esp + 0x3c]
        mov ecx, dword ptr [ebx]
        fld dword ptr [esi]
        add ecx, 0xc
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        add ecx, 0xc
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x18]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x1c]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x20]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx - 0x18]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [ecx - 0x14]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esp + 0x4c]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], ecx
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x18]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x1c]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x20]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [ecx - 0xc]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [ecx - 0x4]
        skip3:
        test al, 0x8
        je done
        fld dword ptr [esp + 0x40]
        mov eax, dword ptr [ebx]
        fld dword ptr [esi]
        add eax, 0xc
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], eax
        add eax, 0xc
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x24]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x28]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x2c]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax - 0x18]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax - 0x14]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax - 0x10]
        fld dword ptr [esp + 0x50]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x8]
        mov dword ptr [ebx], eax
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x24]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x28]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x2c]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax - 0xc]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax - 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax - 0x4]
        done:
        pop ebp
        add esp, 0x80
        ret
    }
}

// [0x007FD4D0] sub_007FD4D0 (960 bytes)
extern "C" void ext_007FCF50();
extern "C" void ext_007FD130();
extern "C" __declspec(naked) void __fastcall fn_007FD4D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0xcc
        fld dword ptr [eax]
        push ebx
        fstp dword ptr [esp + 0x8]
        push esi
        fld dword ptr [esp + 0xc]
        mov esi, edx
        fld dword ptr [esi]
        push edi
        fmul st, st(1)
        mov ebx, ecx
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0xac]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0xb0]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0xb4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x10]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x14]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fmul dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esp + 0xb8]
        fld dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0xbc]
        fld dword ptr [esp + 0x20]
        fst dword ptr [esp + 0xc0]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x20]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x24]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fmul dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esp + 0xc4]
        fld dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0xc8]
        fld dword ptr [esp + 0x20]
        fst dword ptr [esp + 0xcc]
        fld dword ptr [esi + 0x30]
        fst qword ptr [esp + 0x68]
        fxch st(6)
        fst qword ptr [esp + 0x78]
        fld st(0)
        faddp st(7), st
        fxch st(6)
        fst qword ptr [esp + 0x88]
        fxch st(3)
        fst qword ptr [esp + 0x98]
        fld st(0)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fst qword ptr [esp + 0x70]
        fxch st(5)
        fst qword ptr [esp + 0x80]
        fld st(0)
        faddp st(6), st
        fxch st(5)
        fst qword ptr [esp + 0xa0]
        fxch st(2)
        fst qword ptr [esp + 0x90]
        fld st(0)
        faddp st(3), st
        mov eax, dword ptr [ebp + 0x8]
        fxch st(2)
        push ecx
        lea edi, [esp + 0xb0]
        fstp dword ptr [esp + 0x40]
        lea ecx, [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fst qword ptr [esp + 0x14]
        fxch st(4)
        fst qword ptr [esp + 0x1c]
        fld st(0)
        faddp st(5), st
        fxch st(1)
        fst qword ptr [esp + 0xd4]
        fld st(0)
        fadd st, st(5)
        fstp dword ptr [esp + 0x44]
        fld qword ptr [esp + 0x6c]
        __asm _emit 0xde __asm _emit 0xe7
        fld st(6)
        fadd st, st(4)
        fstp dword ptr [esp + 0x48]
        fld qword ptr [esp + 0x74]
        __asm _emit 0xde __asm _emit 0xe6
        fld st(5)
        fadd st, st(3)
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [esp + 0x14]
        __asm _emit 0xde __asm _emit 0xe2
        fld st(1)
        fadd st, st(1)
        fstp dword ptr [esp + 0x50]
        fld qword ptr [esp + 0x8c]
        __asm _emit 0xd8 __asm _emit 0xe4
        fstp dword ptr [esp + 0x54]
        fld qword ptr [esp + 0xa4]
        __asm _emit 0xd8 __asm _emit 0xe3
        fstp dword ptr [esp + 0x58]
        __asm _emit 0xdc __asm _emit 0xec
        fxch st(4)
        fstp dword ptr [esp + 0x5c]
        fxch st(5)
        __asm _emit 0xde __asm _emit 0xe2
        fxch st(1)
        fstp dword ptr [esp + 0x60]
        __asm _emit 0xde __asm _emit 0xea
        fxch st(1)
        fstp dword ptr [esp + 0x64]
        __asm _emit 0xde __asm _emit 0xe9
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ebp + 0xc]
        fstp dword ptr [esp]
        push ebx
        push eax
        call ext_007FCF50
        fld dword ptr [esi + 0x30]
        fld dword ptr [esp + 0x34]
        fst qword ptr [esp + 0x1c]
        fld st(0)
        fadd st, st(2)
        fst qword ptr [esp + 0xac]
        fld qword ptr [esp + 0xa4]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x34]
        fst qword ptr [esp + 0xa4]
        fld dword ptr [esp + 0x38]
        fst qword ptr [esp + 0x7c]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fst qword ptr [esp + 0x94]
        fld qword ptr [esp + 0x9c]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x38]
        fst qword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x3c]
        fst qword ptr [esp + 0x74]
        mov ecx, dword ptr [ebp + 0x8]
        fld st(0)
        add esp, 0x8
        faddp st(2), st
        lea edi, [esp + 0xbc]
        fxch st(1)
        fst qword ptr [esp + 0x2c]
        fld qword ptr [esp + 0xd4]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x44]
        fxch st(6)
        __asm _emit 0xde __asm _emit 0xe5
        fld st(4)
        fadd st, st(4)
        fstp dword ptr [esp + 0x48]
        fld qword ptr [esp + 0x9c]
        __asm _emit 0xde __asm _emit 0xe3
        fld st(2)
        fadd st, st(2)
        fstp dword ptr [esp + 0x4c]
        fsubr qword ptr [esp + 0x94]
        fld st(0)
        fadd st, st(6)
        fstp dword ptr [esp + 0x50]
        fld qword ptr [esp + 0xa4]
        __asm _emit 0xd8 __asm _emit 0xe4
        fstp dword ptr [esp + 0x54]
        fld qword ptr [esp + 0x8c]
        __asm _emit 0xd8 __asm _emit 0xe2
        fstp dword ptr [esp + 0x58]
        fld qword ptr [esp + 0x2c]
        __asm _emit 0xd8 __asm _emit 0xe6
        fstp dword ptr [esp + 0x5c]
        fxch st(4)
        __asm _emit 0xde __asm _emit 0xe3
        fxch st(2)
        fstp dword ptr [esp + 0x60]
        __asm _emit 0xde __asm _emit 0xe1
        fstp dword ptr [esp + 0x64]
        __asm _emit 0xde __asm _emit 0xe1
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ebp + 0xc]
        fstp dword ptr [esp]
        push ebx
        push ecx
        lea ecx, [esp + 0x44]
        call ext_007FCF50
        fld dword ptr [esi + 0x30]
        fld qword ptr [esp + 0x1c]
        fadd st, st(1)
        fld st(0)
        fld qword ptr [esp + 0x84]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x34]
        fld qword ptr [esp + 0x7c]
        fadd st, st(1)
        fld st(0)
        fld qword ptr [esp + 0x8c]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x38]
        fst qword ptr [esp + 0x8c]
        fadd qword ptr [esp + 0x74]
        fst qword ptr [esp + 0x84]
        fld qword ptr [esp + 0x24]
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x4c]
        fxch st(6)
        fsub qword ptr [esp + 0x1c]
        fld st(0)
        fadd st, st(5)
        fstp dword ptr [esp + 0x50]
        fxch st(3)
        fsub qword ptr [esp + 0x7c]
        fld st(0)
        fadd st, st(2)
        add esp, 0x8
        lea esi, [esp + 0xc8]
        lea edi, [esp + 0x3c]
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [esp + 0x84]
        fsub qword ptr [esp + 0x6c]
        fst qword ptr [esp + 0x1c]
        fadd st, st(7)
        fstp dword ptr [esp + 0x50]
        fxch st(5)
        __asm _emit 0xd8 __asm _emit 0xe4
        fstp dword ptr [esp + 0x54]
        __asm _emit 0xdc __asm _emit 0xe9
        fxch st(1)
        fstp dword ptr [esp + 0x58]
        fld qword ptr [esp + 0x7c]
        __asm _emit 0xd8 __asm _emit 0xe5
        fstp dword ptr [esp + 0x5c]
        fxch st(1)
        __asm _emit 0xde __asm _emit 0xe2
        fxch st(1)
        fstp dword ptr [esp + 0x60]
        __asm _emit 0xde __asm _emit 0xe9
        fstp dword ptr [esp + 0x64]
        fsubr qword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ebp + 0xc]
        fstp dword ptr [esp]
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        call ext_007FD130
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007FDF50] sub_007FDF50 (235 bytes)
extern "C" void ext_00401000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007E5230();
extern "C" void ext_007E8F00();
extern "C" void ext_007FD4D0();

extern "C" __declspec(naked) void __cdecl fn_007FDF50() {
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x17c
        push    ecx
        fld     dword ptr [ebp + 0x18]
        fstp    dword ptr [esp]
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        call    ext_007FD4D0
        add     esp, 0x8
        lea     ecx, [ebp - 0x160]
        call    ext_007E5230
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        lea     ecx, [ebp - 0x160]
        call    ext_007E8F00
        push    offset ext_007E5230
        push    0x18
        push    0xc
        lea     edx, [ebp - 0x120]
        push    edx
        call    ext_00401000
        lea     eax, [ebp - 0x120]
        mov     dword ptr [ebp - 0x168], eax
        lea     ecx, [ebp - 0x120]
        mov     dword ptr [ebp - 0x164], ecx
        push    ecx
        fld     dword ptr [ebp + 0x18]
        fstp    dword ptr [esp]
        lea     edx, [ebp - 0x168]
        push    edx
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        lea     edx, [ebp - 0x160]
        call    ext_007FD4D0
        add     esp, 0x8
    loc_7FDFDE:
        mov     eax, dword ptr [ebp - 0x164]
        cmp     eax, dword ptr [ebp - 0x168]
        je      loc_7FE037
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x178], edx
        mov     eax, dword ptr [ebp - 0x164]
        mov     dword ptr [ebp - 0x17c], eax
        mov     ecx, dword ptr [ebp - 0x164]
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x164], ecx
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx]
        add     eax, 0xc
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [ebp - 0x178]
        push    edx
        mov     eax, dword ptr [ebp - 0x17c]
        push    eax
        mov     ecx, dword ptr [ebp + 0xc]
        call    ext_007CA7C0
        jmp     loc_7FDFDE
    loc_7FE037:
        mov     esp, ebp
        pop     ebp
        ret
    }
}

extern "C" void ext_006A7250();
extern "C" int mem_00993828;
extern "C" int mem_0092A278;

// [0x007F4FE0] sub_007F4FE0 (992 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F4FE0(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x6c
        push    ebx
        xor     eax, eax
        cmp     dword ptr [ebp + 0xc], eax
        push    esi
        push    edi
        je      loc_007F53B9
        mov     edi, dword ptr [ebp + 0x8]
        fld     dword ptr [edi]
        lea     ecx, [edi + 0x8]
        fstp    dword ptr [esp + 0x58]
        xor     edx, edx
        fld     dword ptr [esp + 0x58]
        xor     ebx, ebx
        fstp    dword ptr [esp + 0x6c]
        mov     esi, 0x1
        cmp     dword ptr [ebp + 0xc], esi
        fld     dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x38], edx
        fld     dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x48], eax
        fstp    dword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x3c], eax
        fld     dword ptr [ecx]
        mov     dword ptr [esp + 0x4c], ebx
        fstp    dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x1c], ecx
        fld     dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x40], eax
        fstp    dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x50], eax
        jle     loc_007F50AA
        lea     edx, [edi + 0xc]
    loc_007F5055:
        xor     ecx, ecx
    loc_007F5057:
        fld     dword ptr [edx]
        fld     dword ptr [esp + ecx + 0x6c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_007F5074
        fstp    st(0)
        mov     dword ptr [esp + ecx + 0x48], esi
        fld     dword ptr [edx]
        fstp    dword ptr [esp + ecx + 0x6c]
        jmp     loc_007F508B
    loc_007F5074:
        fld     dword ptr [esp + ecx + 0x58]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      loc_007F508B
        fld     dword ptr [edx]
        mov     dword ptr [esp + ecx + 0x38], esi
        fstp    dword ptr [esp + ecx + 0x58]
    loc_007F508B:
        add     ecx, 0x4
        add     edx, 0x4
        cmp     ecx, 0xc
        jl      loc_007F5057
        add     esi, 0x1
        cmp     esi, dword ptr [ebp + 0xc]
        jl      loc_007F5055
        mov     ebx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x38]
    loc_007F50AA:
        fldz
        lea     eax, [eax + 2*eax]
        fst     dword ptr [esp + 0x10]
        lea     ecx, [edi + 4*eax]
        lea     edx, [edx + 2*edx]
        fld     dword ptr [edi + 4*edx]
        fsub    dword ptr [ecx]
        lea     eax, [edi + 4*edx]
        mov     esi, dword ptr [ebp + 0x10]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x60]
        fld     st(2)
        fmul    st, st(3)
        fldz
        fadd    st(1), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fcom    st(5)
        fnstsw  ax
        fstp    st(5)
        test    ah, 0x41
        fld     qword ptr [mem_00993828]
        jne     loc_007F51DB
        fxch    st(5)
        fstp    dword ptr [esp + 0x10]
        fxch    st(3)
        fmul    st, st(4)
        fadd    dword ptr [ecx]
        fstp    dword ptr [esi]
        fxch    st(1)
        fmul    st, st(3)
        fadd    dword ptr [ecx + 0x4]
        fstp    dword ptr [esi + 0x4]
        fmul    st, st(2)
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esi + 0x8]
        fxch    st(1)
    loc_007F514D:
        lea     eax, [ebx + 2*ebx]
        lea     ecx, [edi + 4*eax]
        mov     eax, dword ptr [esp + 0x3c]
        lea     edx, [eax + 2*eax]
        fld     dword ptr [edi + 4*edx]
        lea     eax, [edi + 4*edx]
        fsub    dword ptr [ecx]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x60]
        fld     st(2)
        fmul    st, st(3)
        fadd    st, st(5)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(1)
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_007F51E8
        fstp    dword ptr [esp + 0x10]
        fxch    st(2)
        fmul    st, st(3)
        fadd    dword ptr [ecx]
        fstp    dword ptr [esi]
        fmul    st, st(2)
        fadd    dword ptr [ecx + 0x4]
        fstp    dword ptr [esi + 0x4]
        fmul    st, st(1)
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esi + 0x8]
        jmp     loc_007F51F0
    loc_007F51DB:
        fstp    st(4)
        fstp    st(2)
        fstp    st(0)
        fstp    st(2)
        jmp     loc_007F514D
    loc_007F51E8:
        fstp    st(3)
        fstp    st(1)
        fstp    st(0)
        fstp    st(0)
    loc_007F51F0:
        mov     eax, dword ptr [esp + 0x50]
        lea     eax, [eax + 2*eax]
        lea     ecx, [edi + 4*eax]
        mov     eax, dword ptr [esp + 0x40]
        lea     edx, [eax + 2*eax]
        fld     dword ptr [edi + 4*edx]
        lea     eax, [edi + 4*edx]
        fsub    dword ptr [ecx]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x60]
        fld     st(2)
        fmul    st, st(3)
        faddp   st(5), st
        fxch    st(4)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(1)
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(4)
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_007F5284
        fstp    dword ptr [esp + 0x10]
        fxch    st(1)
        fmul    st, st(2)
        fadd    dword ptr [ecx]
        fstp    dword ptr [esi]
        fmul    st, st(1)
        fadd    dword ptr [ecx + 0x4]
        fstp    dword ptr [esi + 0x4]
        fmulp   st(1), st
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esi + 0x8]
        jmp     loc_007F528E
    loc_007F5284:
        fstp    st(3)
        fstp    st(1)
        fstp    st(0)
        fstp    st(1)
        fstp    st(0)
    loc_007F528E:
        fld     dword ptr [esp + 0x10]
        call    ext_006A7250
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        mov     ebx, dword ptr [ebp + 0xc]
        test    ebx, ebx
        fmul    qword ptr [mem_00993828]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fst     qword ptr [esp + 0x10]
        fmul    st(0), st
        fstp    dword ptr [esp + 0x18]
        jle     loc_007F53B4
        mov     edi, dword ptr [esp + 0x1c]
    loc_007F52C8:
        fld     dword ptr [esi]
        fst     qword ptr [esp + 0x28]
        fsubr   dword ptr [edi - 0x8]
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esi + 0x4]
        fst     qword ptr [esp + 0x38]
        fsubr   dword ptr [edi - 0x4]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esi + 0x8]
        fst     qword ptr [esp + 0x58]
        fsubr   dword ptr [edi]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x6c]
        fst     qword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x70]
        fst     qword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x74]
        fst     qword ptr [esp + 0x48]
        fld     st(2)
        fmulp   st(3), st
        fxch    st(2)
        fadd    qword ptr [mem_0092A278]
        fstp    dword ptr [esp + 0x1c]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_007F53A6
        fstp    st(1)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        fld     qword ptr [esp + 0x10]
        fadd    st, st(1)
        fmul    qword ptr [mem_00993828]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fst     qword ptr [esp + 0x10]
        fld     st(0)
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x18]
        fsubr   st, st(2)
        fdivrp  st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(1)
        fadd    qword ptr [esp + 0x28]
        fstp    dword ptr [esi]
        fld     qword ptr [esp + 0x30]
        fmul    st, st(1)
        fadd    qword ptr [esp + 0x38]
        fstp    dword ptr [esi + 0x4]
        fmul    qword ptr [esp + 0x48]
        fadd    qword ptr [esp + 0x58]
        fstp    dword ptr [esi + 0x8]
        jmp     loc_007F53A8
    loc_007F53A6:
        fstp    st(0)
    loc_007F53A8:
        add     edi, 0xc
        sub     ebx, 0x1
        jne     loc_007F52C8
    loc_007F53B4:
        mov     eax, dword ptr [ebp + 0x14]
        fstp    dword ptr [eax]
    loc_007F53B9:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}


extern "C" void ext_006A7250();
extern "C" int mem_0092A278;
extern "C" int mem_0099D148;
extern "C" int mem_0092C180;
extern "C" int mem_0093F7B8;

// [0x007FB180] sub_007FB180 (992 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FB180(void* self) {
    __asm {
        sub	esp, 0x1c
        fldz
        xor	ecx, ecx
        fst	dword ptr [esp + 0x4]
        push	ebp
        mov	ebp, dword ptr [esp + 0x28]
        fst	dword ptr [esi + 0x8]
        fst	dword ptr [esi + 0x4]
        fstp	dword ptr [esi]
        fld	dword ptr [edi]
        fld	dword ptr [edx]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jp loc_007FB1C6
    loc_007FB1A5:
        fsubrp	st(1), st
        mov	ecx, 0x1
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x4]
        fld	st(0)
        fmul	st(0), st
        fadd	qword ptr [mem_0092A278]
        fstp	dword ptr [esp + 0x8]
        fstp	dword ptr [esi]
        jmp loc_007FB1D9
    loc_007FB1C6:
        fstp	st(0)
        fld	dword ptr [edx]
        fchs
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        je loc_007FB1A5
        fstp	st(1)
        fstp	st(0)
    loc_007FB1D9:
        fld	dword ptr [edi + 0x4]
        fld	dword ptr [edx + 0x4]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jp loc_007FB206
    loc_007FB1E8:
        fsubrp	st(1), st
        add	ecx, 0x1
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x4]
        fld	st(0)
        fmul	st(0), st
        fadd	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x8]
        fstp	dword ptr [esi + 0x4]
        jmp loc_007FB21A
    loc_007FB206:
        fstp	st(0)
        fld	dword ptr [edx + 0x4]
        fchs
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        je loc_007FB1E8
        fstp	st(1)
        fstp	st(0)
    loc_007FB21A:
        fld	dword ptr [edi + 0x8]
        fld	dword ptr [edx + 0x8]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jp loc_007FB247
    loc_007FB229:
        fsubrp	st(1), st
        add	ecx, 0x1
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x4]
        fld	st(0)
        fmul	st(0), st
        fadd	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x8]
        fstp	dword ptr [esi + 0x8]
        jmp loc_007FB25B
    loc_007FB247:
        fstp	st(0)
        fld	dword ptr [edx + 0x8]
        fchs
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        je loc_007FB229
        fstp	st(1)
        fstp	st(0)
    loc_007FB25B:
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x30]
        fst	qword ptr [esp + 0x8]
        fld	st(1)
        fadd	st, st(1)
        fmul	st(0), st
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(3)
        fnstsw	ax
        test	ah, 0x5
        jp loc_007FB28F
        fstp	st(1)
        xor	al, al
        fstp	st(1)
        pop	ebp
        fstp	st(0)
        add	esp, 0x1c
        ret
    loc_007FB28F:
        fld	st(1)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(2)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x5
        jp loc_007FB38A
        fstp	st(0)
        mov	eax, 0x3
        sub	eax, ecx
        or	eax, 0x300
        mov	word ptr [ebp], ax
        fld	dword ptr [esi]
        fmul	dword ptr [esi]
        fld	dword ptr [esi + 0x4]
        fmul	dword ptr [esi + 0x4]
        faddp	st(1), st
        fld	dword ptr [esi + 0x8]
        fmul	dword ptr [esi + 0x8]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x2c]
        call ext_006A7250
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x2c]
        mov	ecx, dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x2c]
        mov	al, 0x1
        fld	dword ptr [esp + 0x2c]
        pop	ebp
        fld1
        fdiv	st, st(1)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fld	dword ptr [esi]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fst	dword ptr [esi]
        fld	dword ptr [esi + 0x4]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fst	dword ptr [esi + 0x4]
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(2)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fst	dword ptr [esi + 0x8]
        fld	qword ptr [esp + 0x4]
        fmul	st(2), st
        fxch	st(2)
        fstp	dword ptr [esp + 0x4]
        fxch	st(2)
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x8]
        fmul	st(1), st
        fxch	st(1)
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [edi]
        fadd	dword ptr [esp + 0x4]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x8]
        fadd	dword ptr [edi + 0x4]
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi + 0x8]
        fadd	dword ptr [esp + 0xc]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [ebx]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [ebx + 0x4]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [ebx + 0x8]
        fsubp	st(1), st
        fstp	dword ptr [ecx]
        add	esp, 0x1c
        ret
    loc_007FB38A:
        fld	dword ptr [mem_0099D148]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [edx]
        fld	dword ptr [edi]
        fld	st(1)
        fsub	st, st(1)
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x30]
        fabs
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x30]
        fcom	qword ptr [mem_0092C180]
        fnstsw	ax
        fld	dword ptr [mem_0093F7B8]
        test	ah, 0x5
        jp loc_007FB3CF
        fxch	st(1)
        xor	ecx, ecx
        fstp	dword ptr [esp + 0x2c]
        fst	dword ptr [esp + 0x30]
        jmp loc_007FB3D5
    loc_007FB3CF:
        mov	ecx, dword ptr [esp + 0x2c]
        fstp	st(1)
    loc_007FB3D5:
        fxch	st(2)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fabs
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(1)
        fnstsw	ax
        fld1
        test	ah, 0x41
        jne loc_007FB408
        fxch	st(1)
        xor	ecx, ecx
        fstp	dword ptr [esp + 0x2c]
        fst	dword ptr [esp + 0x30]
        jmp loc_007FB40A
    loc_007FB408:
        fstp	st(1)
    loc_007FB40A:
        fld	dword ptr [edx + 0x4]
        fld	dword ptr [edi + 0x4]
        fld	st(1)
        fsub	st, st(1)
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fabs
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007FB474
        fstp	dword ptr [esp + 0x2c]
        mov	ecx, 0x1
        fxch	st(3)
        fst	dword ptr [esp + 0x30]
        fxch	st(3)
    loc_007FB444:
        faddp	st(1), st
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fabs
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007FB478
        fstp	dword ptr [esp + 0x2c]
        mov	ecx, 0x1
        fst	dword ptr [esp + 0x30]
        jmp loc_007FB47A
    loc_007FB474:
        fstp	st(0)
        jmp loc_007FB444
    loc_007FB478:
        fstp	st(0)
    loc_007FB47A:
        fld	dword ptr [edx + 0x8]
        fld	dword ptr [edi + 0x8]
        fld	st(1)
        fsub	st, st(1)
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fabs
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007FB4B4
        fstp	dword ptr [esp + 0x2c]
        mov	ecx, 0x2
        fxch	st(3)
        fstp	dword ptr [esp + 0x30]
        jmp loc_007FB4B8
    loc_007FB4B4:
        fstp	st(0)
        fstp	st(3)
    loc_007FB4B8:
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fabs
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne loc_007FB4E6
        fstp	dword ptr [esp + 0x30]
        mov	ecx, 0x2
        jmp loc_007FB4E8
    loc_007FB4E6:
        fstp	st(0)
    loc_007FB4E8:
        fld	dword ptr [esp + 0x30]
        mov	al, 0x1
        fstp	dword ptr [esi + 4*ecx]
        fld	dword ptr [edi + 4*ecx]
        fabs
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x2c]
        fsub	dword ptr [edx + 4*ecx]
        mov	edx, dword ptr [esp + 0x24]
        fsub	st, st(1)
        fstp	dword ptr [edx]
        fld	dword ptr [esi]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esi + 0x4]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x18]
        fmul	dword ptr [esi + 0x8]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x14]
        fadd	dword ptr [edi]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x18]
        fadd	dword ptr [edi + 0x4]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [edi + 0x8]
        fadd	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x8]
        fstp	dword ptr [ebx]
        fld	dword ptr [esp + 0xc]
        fstp	dword ptr [ebx + 0x4]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [ebx + 0x8]
        mov	word ptr [ebp], 0x302
        pop	ebp
        add	esp, 0x1c
        ret
    }
}


// [0x007FB660] sub_007FB660 (315 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007CA8D0();
extern "C" void ext_007CB970();
extern "C" void ext_007E4870();
extern "C" void ext_007E48D0();
extern "C" void ext_007FB180();

extern "C" __declspec(naked) void __fastcall fn_007FB660(void* self) {
    __asm {
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    edi
        push    eax
        call    ext_007C6F70
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, eax
        push    ecx
        mov     dword ptr [esp + 0x28], edi
        call    ext_007C6F70
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        mov     ebx, eax
        call    ext_007C6F30
        fstp    qword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007C6F30
        fadd    qword ptr [esp + 0x24]
        mov     ecx, dword ptr [esi]
        push    ecx
        fstp    dword ptr [esp + 0x24]
        call    ext_007C7000
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        mov     ebp, eax
        call    ext_007C7000
        push    ebp
        mov     esi, eax
        call    ext_007CA8D0
        push    esi
        mov     dword ptr [esp + 0x34], eax
        call    ext_007CB970
        fstp    dword ptr [esp + 0x94]
        mov     ebp, dword ptr [esp + 0x98]
        add     esp, 0x20
        xor     eax, eax
        push    edi
        push    ebx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x1c], eax
        call    ext_007E48D0
        fld     dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x14]
        sub     esp, 0x8
        fstp    dword ptr [esp + 0x4]
        lea     eax, [esp + 0x7c]
        fld     dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x80]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        lea     edi, [esp + 0x70]
        lea     ebx, [esp + 0x34]
        lea     esi, [esp + 0x24]
        call    ext_007FB180
        add     esp, 0x10
        test    al, al
        jne     loc_007FB72F
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x60
        ret
    loc_007FB72F:
        cmp     dword ptr [ebp + 0x8], 0x0
        mov     ebx, 0x1
        jle     loc_007FB78E
        mov     edi, dword ptr [esp + 0x20]
        lea     esi, [ebp + 0x10]
        push    esi
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, edi
        call    ext_007E4870
        fld     dword ptr [esp + 0x78]
        mov     eax, dword ptr [ebp + 0x4]
        mov     cx, word ptr [esp + 0x74]
        mov     word ptr [eax + 0x1c], cx
        mov     edx, dword ptr [ebp + 0x4]
        fstp    dword ptr [edx + 0x18]
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, edi
        call    ext_007CA7C0
        fld     dword ptr [esi]
        mov     eax, dword ptr [ebp + 0x4]
        fstp    dword ptr [eax + 0xc]
        fld     dword ptr [esi + 0x4]
        add     eax, 0xc
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esi + 0x8]
        fstp    dword ptr [eax + 0x8]
        mov     dword ptr [ebp + 0xc], ebx
    loc_007FB78E:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x1c], ebx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x60
        ret
    }
}

// [0x007F7240] sub_007F7240 (1049 bytes)
extern "C" double mem_0099EC60;

extern "C" __declspec(naked) int __cdecl fn_007F7240(...) {
    __asm {
        sub	esp, 0x14
        mov	eax, dword ptr [esp + 0x28]
        mov	ecx, dword ptr [esp + 0x18]
        fld	dword ptr [eax]
        fsub	dword ptr [ecx]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [eax + 0x4]
        fsub	dword ptr [ecx + 0x4]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [eax + 0x8]
        mov	eax, dword ptr [esp + 0x2c]
        fsub	dword ptr [ecx + 0x8]
        mov	ecx, dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [eax + 0x4]
        fld	dword ptr [eax]
        fld	dword ptr [eax + 0x8]
        fld	st(1)
        fmulp	st(2), st
        fld	st(2)
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	st(0), st
        faddp	st(1), st
        fstp	dword ptr [esp]
        fld	dword ptr [ecx + 0x4]
        fmul	dword ptr [eax + 0x4]
        fld	dword ptr [eax]
        fmul	dword ptr [ecx]
        faddp	st(1), st
        fld	dword ptr [ecx + 0x8]
        fmul	dword ptr [eax + 0x8]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fld	st(0)
        fld	dword ptr [esp]
        fld	st(0)
        fld	st(2)
        fmulp	st(3), st
        _emit 0xDE
        _emit 0xE2
        fxch	st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [ecx]
        fld	dword ptr [esp + 0x8]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [ecx + 0x4]
        fld	dword ptr [esp + 0xc]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [ecx + 0x8]
        fld	dword ptr [esp + 0x10]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [eax]
        fmulp	st(2), st
        fld	dword ptr [eax + 0x4]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [eax + 0x8]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x1c]
        fld	st(1)
        fmul qword ptr [mem_0099EC60]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x4]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x5
        jp near ptr L_007F7540
        fld	dword ptr [esp + 0x18]
        push	esi
        fmulp	st(2), st
        mov	esi, dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x30]
        push	edi
        fmulp	st(3), st
        sub	esp, 0x10
        fxch	st(1)
        _emit 0xDE
        _emit 0xE2
        fxch	st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x3c]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [esp + 0x38]
        fstp	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp]
        push	esi
        call fn_007F7190
        mov	edi, dword ptr [esp + 0x58]
        add	esp, 0x14
        sub	esp, 0x10
        test	eax, eax
        je near ptr L_007F7444
        fld	dword ptr [esi]
        fmul	dword ptr [esp + 0x40]
        fsub	dword ptr [esp + 0x44]
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [esp + 0x4c]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [esp + 0x48]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x44]
        fstp	dword ptr [esp]
        push	edi
        call fn_007F7190
        add	esp, 0x14
        test	eax, eax
        je near ptr L_007F7437
        fld	dword ptr [edi]
        fmul	dword ptr [esp + 0x30]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x2c]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne short L_007F73D3
        fxch	st(1)
        fst	dword ptr [esp + 0x30]
        jmp short L_007F73D9
    L_007F73D3:
        fst	dword ptr [esp + 0x30]
        fxch	st(1)
    L_007F73D9:
        fld	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x28]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x41
        jne short L_007F740D
        fstp	st(1)
    L_007F73EE:
        mov	eax, dword ptr [esp + 0x48]
        fstp	st(1)
        fstp	dword ptr [esp + 0x30]
        pop	edi
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esi]
        pop	esi
        fldz
        fstp	dword ptr [eax]
        mov	eax, 0x1
        add	esp, 0x14
        ret
    L_007F740D:
        fstp	st(0)
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jnp short L_007F73EE
        mov	eax, dword ptr [esp + 0x48]
        fstp	st(0)
        fstp	dword ptr [esp + 0x30]
        pop	edi
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esi]
        pop	esi
        fldz
        fstp	dword ptr [eax]
        mov	eax, 0x1
        add	esp, 0x14
        ret
    L_007F7437:
        fld	dword ptr [esp + 0x34]
        fdiv	dword ptr [esp + 0x8]
        jmp near ptr L_007F752B
    L_007F7444:
        fld	dword ptr [esp + 0x30]
        fmul	dword ptr [esp + 0x40]
        fsub	dword ptr [esp + 0x44]
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [esp + 0x4c]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [esp + 0x48]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x34]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x44]
        fstp	dword ptr [esp]
        push	edi
        call fn_007F7190
        add	esp, 0x14
        test	eax, eax
        je near ptr L_007F750F
        fld	dword ptr [edi]
        fmul	dword ptr [esp + 0x30]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x2c]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne short L_007F74AB
        fxch	st(1)
        fst	dword ptr [esp + 0x30]
        jmp short L_007F74B1
    L_007F74AB:
        fst	dword ptr [esp + 0x30]
        fxch	st(1)
    L_007F74B1:
        fld	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x28]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x41
        jne short L_007F74E5
        fstp	st(1)
    L_007F74C6:
        mov	eax, dword ptr [esp + 0x48]
        fstp	st(1)
        fstp	dword ptr [esp + 0x30]
        pop	edi
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esi]
        pop	esi
        fldz
        fstp	dword ptr [eax]
        mov	eax, 0x1
        add	esp, 0x14
        ret
    L_007F74E5:
        fstp	st(0)
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jnp short L_007F74C6
        mov	eax, dword ptr [esp + 0x48]
        fstp	st(0)
        fstp	dword ptr [esp + 0x30]
        pop	edi
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esi]
        pop	esi
        fldz
        fstp	dword ptr [eax]
        mov	eax, 0x1
        add	esp, 0x14
        ret
    L_007F750F:
        fld	dword ptr [esp + 0x24]
        fld1
        _emit 0xDE
        _emit 0xF1
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x30]
        fld	st(0)
        fmul	dword ptr [esp + 0xc]
        fstp	dword ptr [esi]
        fmul	dword ptr [esp + 0x34]
    L_007F752B:
        mov	eax, dword ptr [esp + 0x48]
        fstp	dword ptr [edi]
        fldz
        pop	edi
        fstp	dword ptr [eax]
        pop	esi
        mov	eax, 0x1
        add	esp, 0x14
        ret
    L_007F7540:
        fstp	st(0)
        fldz
        fcomp	st(2)
        fnstsw	ax
        test	ah, 0x5
        jp short L_007F755B
        fld	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x34]
        jmp short L_007F7567
    L_007F755B:
        fld	dword ptr [esp + 0x34]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x30]
    L_007F7567:
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x28]
        fld	st(0)
        fmul	st, st(3)
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmul	st, st(5)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x20]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x1
        jne short L_007F75C6
        mov	ecx, dword ptr [esp + 0x38]
        fstp	st(5)
        mov	edx, dword ptr [esp + 0x40]
        fstp	st(3)
        mov	eax, dword ptr [esp + 0x3c]
        fstp	st(1)
        fstp	st(1)
        fxch	st(1)
        fstp	dword ptr [ecx]
        fldz
        fstp	dword ptr [edx]
        fstp	dword ptr [eax]
        xor	eax, eax
        add	esp, 0x14
        ret
    L_007F75C6:
        fstp	st(2)
        fld	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x24]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x41
        jp short L_007F75FD
        mov	ecx, dword ptr [esp + 0x38]
        fstp	st(2)
        mov	edx, dword ptr [esp + 0x40]
        fstp	st(4)
        mov	eax, dword ptr [esp + 0x3c]
        fstp	st(2)
        fstp	st(2)
        fstp	dword ptr [ecx]
        fldz
        fstp	dword ptr [edx]
        fstp	dword ptr [eax]
        xor	eax, eax
        add	esp, 0x14
        ret
    L_007F75FD:
        fstp	st(3)
        fld	dword ptr [esp + 0x28]
        fcom	st(2)
        fnstsw	ax
        test	ah, 0x41
        jne short L_007F7610
        fstp	st(2)
        jmp short L_007F7612
    L_007F7610:
        fstp	st(0)
    L_007F7612:
        mov	ecx, dword ptr [esp + 0x38]
        fxch	st(1)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x28]
        fst	dword ptr [ecx]
        fxch	st(2)
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jp short L_007F7631
        fstp	st(1)
        jmp short L_007F7633
    L_007F7631:
        fstp	st(0)
    L_007F7633:
        mov	edx, dword ptr [esp + 0x40]
        fstp	dword ptr [esp + 0x28]
        fsubr	dword ptr [esp + 0x28]
        mov	eax, dword ptr [esp + 0x3c]
        fstp	dword ptr [edx]
        fld	dword ptr [ecx]
        fmulp	st(2), st
        fld	dword ptr [esp + 0x2c]
        _emit 0xDE
        _emit 0xEA
        _emit 0xDE
        _emit 0xF9
        fstp	dword ptr [eax]
        xor	eax, eax
        add	esp, 0x14
        ret
    }
}

extern "C" void ext_007ECCD0();
extern "C" void ext_007FB860();

// [0x007FB960] sub_007FB960 (1101 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FB960(void* self) {
    __asm {
        sub	esp, 0x54
        fld	dword ptr [eax]
        push	ebx
        fstp	dword ptr [esp + 0xc]
        push	ebp
        fld	dword ptr [esi]
        mov	ebp, dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x10]
        push	edi
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esi + 0x4]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x40]
        fmul	dword ptr [esi + 0x8]
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [eax + 0x4]
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esi + 0x14]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x28]
        fmul	dword ptr [esi + 0x18]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [eax + 0x8]
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esi + 0x24]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x1c]
        fmul	dword ptr [esi + 0x28]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0x44]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x14]
        fld	dword ptr [mem_0099EC8C]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x5
        fldz
        fld1
        jp L_007FBA0B
        fld	st(0)
        fdivrp	st(4), st
        jmp L_007FBA11
L_007FBA0B:
        fstp	st(3)
        fld	st(0)
        fxch	st(3)
L_007FBA11:
        fxch	st(3)
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [esp + 0x2c]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x14]
        fcomp	st(3)
        fnstsw	ax
        test	ah, 0x41
        jne L_007FBA36
        fld	st(0)
        fdivr	st, st(4)
        jmp L_007FBA38
L_007FBA36:
        fld	st(1)
L_007FBA38:
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x20]
        fld	st(0)
        fabs
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x14]
        fcomp	st(4)
        fnstsw	ax
        fstp	st(3)
        test	ah, 0x41
        jne L_007FBA5F
        fstp	st(1)
        fld	st(1)
        fdivp	st(3), st
        jmp L_007FBA63
L_007FBA5F:
        fstp	st(3)
        fxch	st(2)
L_007FBA63:
        fxch	st(2)
        push	ecx
        fstp	dword ptr [esp + 0x18]
        lea	edi, [esp + 0x40]
        fld	dword ptr [esi + 0x30]
        lea	ebx, [esp + 0x58]
        fld	dword ptr [esp + 0x28]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esi + 0x34]
        fld	dword ptr [esp + 0x2c]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esi + 0x38]
        fadd	st, st(4)
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esi + 0x30]
        fsubrp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x4c]
        fsubr	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [esi + 0x38]
        fsubrp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x54]
        fld	dword ptr [esp + 0x34]
        fadd	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x38]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fadd	dword ptr [esp + 0x3c]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x20]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        fsub	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x50]
        fsub	dword ptr [esp + 0x20]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x50]
        fsub	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x54]
        fsub	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x10]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x50]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x54]
        fadd	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x58]
        fadd	dword ptr [esp + 0x28]
        fstp	dword ptr [esp + 0x64]
        fld	dword ptr [esp + 0x14]
        add	esp, 0x4
        fstp	dword ptr [esp]
        push	ebp
        lea	ebx, [esp + 0x5c]
        call ext_007ECCD0
        fld	dword ptr [esi + 0x30]
        fld	dword ptr [esp + 0x44]
        add	esp, 0x4
        fld	st(0)
        lea	edi, [esp + 0x28]
        faddp	st(2), st
        lea	ebx, [esp + 0x58]
        fxch	st(1)
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esi + 0x34]
        fld	dword ptr [esp + 0x44]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esi + 0x38]
        fld	dword ptr [esp + 0x48]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esi + 0x30]
        fsubrp	st(3), st
        fxch	st(2)
        fstp	dword ptr [esp + 0x40]
        fsubr	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x44]
        fsubr	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x48]
        fld	dword ptr [esp + 0x34]
        fadd	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x38]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        fadd	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x44]
        fadd	dword ptr [esp + 0x20]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x44]
        fadd	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x48]
        fadd	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x44]
        fsub	dword ptr [esp + 0x20]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x44]
        fsub	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x48]
        fsub	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        add	esp, 0x4
        fsub	dword ptr [esp + 0x20]
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        fsub	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007ECCD0
        fld	dword ptr [esp + 0x38]
        fadd	dword ptr [esp + 0x2c]
        add	esp, 0x4
        lea	edi, [esp + 0x1c]
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x38]
        fadd	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        fadd	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007FB860
        fld	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x2c]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x3c]
        fsub	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007FB860
        fld	dword ptr [esp + 0x44]
        fsub	dword ptr [esp + 0x2c]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x44]
        fsub	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x48]
        fsub	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007FB860
        fld	dword ptr [esp + 0x44]
        fadd	dword ptr [esp + 0x2c]
        add	esp, 0x4
        lea	ebx, [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [esp + 0x44]
        fadd	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x48]
        fadd	dword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp]
        push	ebp
        call ext_007FB860
        add	esp, 0x8
        pop	edi
        pop	ebp
        pop	ebx
        add	esp, 0x54
        ret
    }
}


// [0x007F2F80] sub_007F2F80 (1207 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F2F80(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 0ach
        mov     eax, dword ptr [ebp + 0a4h]
        mov     ecx, dword ptr [ebp + 90h]
        shl     eax, 6
        fld     dword ptr [eax + ecx]
        add     eax, ecx
        fld     dword ptr [ebp + 0a0h]
        mov     edx, dword ptr [eax + 0ch]
        cmp     edx, -1
        fld     st(0)
        fmulp   st(2), st
        mov     ecx, dword ptr [eax + 2ch]
        fxch    st(1)
        push    ebx
        push    esi
        fstp    dword ptr [esp + 74h]
        push    edi
        fld     dword ptr [eax + 4]
        mov     dword ptr [esp + 14h], ecx
        fmul    st, st(1)
        fstp    dword ptr [esp + 7ch]
        fld     dword ptr [eax + 8]
        fmul    st, st(1)
        fstp    dword ptr [esp + 80h]
        fld     dword ptr [eax + 10h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 88h]
        fld     dword ptr [eax + 14h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 8ch]
        fld     dword ptr [eax + 18h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 90h]
        fld     dword ptr [eax + 20h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 98h]
        fld     dword ptr [eax + 24h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 9ch]
        fld     dword ptr [eax + 28h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0a0h]
        fld     dword ptr [eax + 30h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0a8h]
        fld     dword ptr [eax + 34h]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0ach]
        fmul    dword ptr [eax + 38h]
        fstp    dword ptr [esp + 0b0h]
        je      L_7F322E
        mov     eax, dword ptr [ebp + 60h]
        xor     ebx, ebx
        cmp     dword ptr [eax + 4*edx], ebx
        je      L_7F322E
        fld     dword ptr [esp + 90h]
        fld     dword ptr [esp + 8ch]
        fld     dword ptr [esp + 88h]
        fld     dword ptr [esp + 80h]
        fld     dword ptr [esp + 7ch]
    L_7F3073:
        mov     ecx, dword ptr [ebp + 24h]
        mov     eax, dword ptr [ecx + 4*edx]
        add     eax, ebx
        lea     esi, [eax + 2*eax]
        shl     esi, 5
        add     esi, dword ptr [ebp + 14h]
        mov     ecx, 18h
        lea     edi, [esp + 18h]
        rep     movsd
        fld     dword ptr [esp + 18h]
        fmul    dword ptr [esp + 78h]
        mov     ecx, dword ptr [ebp + 30h]
        mov     eax, dword ptr [ecx + 4*eax]
        shl     eax, 4
        add     eax, dword ptr [ebp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 28h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 38h]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 48h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 58h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 68h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 1ch]
        fmul    dword ptr [esp + 78h]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 2ch]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 3ch]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 4ch]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 5ch]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 6ch]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 4]
        fld     dword ptr [esp + 20h]
        fmul    dword ptr [esp + 78h]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 30h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 40h]
        add     ebx, 1
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 50h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 60h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 70h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 8]
        fld     dword ptr [esp + 24h]
        fmul    dword ptr [esp + 78h]
        fadd    dword ptr [eax + 0ch]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 34h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 44h]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 54h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 64h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 74h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 0ch]
        mov     eax, dword ptr [ebp + 60h]
        cmp     ebx, dword ptr [eax + 4*edx]
        jne     L_7F3073
        mov     ecx, dword ptr [esp + 14h]
        fstp    st(4)
        fstp    st(2)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
    L_7F322E:
        cmp     ecx, -1
        je      L_7F3430
        mov     eax, dword ptr [ebp + 60h]
        xor     edx, edx
        cmp     dword ptr [eax + 4*ecx], edx
        je      L_7F3430
        fld     dword ptr [esp + 0b0h]
        fld     dword ptr [esp + 0ach]
        fld     dword ptr [esp + 0a8h]
        fld     dword ptr [esp + 0a0h]
        fld     dword ptr [esp + 9ch]
    L_7F3268:
        mov     eax, dword ptr [ebp + 24h]
        mov     ecx, dword ptr [eax + 4*ecx]
        lea     eax, [edx + ecx]
        lea     esi, [eax + 2*eax]
        shl     esi, 5
        add     esi, dword ptr [ebp + 14h]
        mov     ecx, 18h
        lea     edi, [esp + 18h]
        rep     movsd
        fld     dword ptr [esp + 18h]
        fmul    dword ptr [esp + 98h]
        mov     ecx, dword ptr [ebp + 30h]
        mov     eax, dword ptr [ecx + 4*eax]
        shl     eax, 4
        add     eax, dword ptr [ebp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 28h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 38h]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 48h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 58h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 68h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 1ch]
        fmul    dword ptr [esp + 98h]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 2ch]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 3ch]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 4ch]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 5ch]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 6ch]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 4]
        fld     dword ptr [esp + 20h]
        fmul    dword ptr [esp + 98h]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 30h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 40h]
        mov     ecx, dword ptr [esp + 14h]
        fmul    st, st(3)
        add     edx, 1
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 50h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 60h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 70h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 8]
        fld     dword ptr [esp + 24h]
        fmul    dword ptr [esp + 98h]
        fadd    dword ptr [eax + 0ch]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 34h]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 44h]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 54h]
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 64h]
        fmul    st, st(5)
        faddp   st(1), st
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esp + 10h]
        fld     dword ptr [esp + 74h]
        fmul    st, st(6)
        faddp   st(1), st
        fstp    dword ptr [eax + 0ch]
        mov     eax, dword ptr [ebp + 60h]
        cmp     edx, dword ptr [eax + 4*ecx]
        jne     L_7F3268
        fstp    st(4)
        fstp    st(2)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
    L_7F3430:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007FBDB0] sub_007FBDB0 (248 bytes)
extern "C" void ext_007FB960();
extern "C" __declspec(naked) void __fastcall fn_007FBDB0(void* self) {
    __asm {
        sub     esp, 10h
        push    esi
        mov     esi, eax
        fld     dword ptr [esi + 8h]
        fabs
        fstp    dword ptr [esp + 4h]
        fld     dword ptr [esp + 4h]
        fstp    dword ptr [esp + 8h]
        fld     dword ptr [esi + 18h]
        fabs
        fstp    dword ptr [esp + 4h]
        fld     dword ptr [esp + 4h]
        fstp    dword ptr [esp + 0ch]
        fld     dword ptr [esi + 28h]
        fabs
        fstp    dword ptr [esp + 4h]
        fld     dword ptr [esp + 4h]
        fstp    dword ptr [esp + 10h]
        fld     dword ptr [esi + 38h]
        fld     dword ptr [ecx + 4h]
        fld     dword ptr [esp + 0ch]
        fld     st(0)
        fmulp   st(2), st(0)
        fld     dword ptr [ecx]
        fld     dword ptr [esp + 8h]
        fld     st(0)
        fmulp   st(2), st(0)
        fxch    st(3)
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 8h]
        fld     dword ptr [esp + 10h]
        fld     st(0)
        fmulp   st(2), st(0)
        fxch    st(2)
        faddp   st(1), st(0)
        fsubp   st(4), st(0)
        fxch    st(3)
        fstp    dword ptr [esp + 4h]
        fld     dword ptr [esp + 4h]
        fld     dword ptr [esp + 24h]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 5h
        jp      L_7FBE3C
        fstp    st(2)
        xor     al, al
        fstp    st(1)
        pop     esi
        fstp    st(0)
        fstp    st(0)
        add     esp, 10h
        ret
    L_7FBE3C:
        mov     eax, dword ptr [esp + 18h]
        fstp    dword ptr [eax]
        push    edi
        fld     qword ptr [mem_009453D8]
        fcom    st(2)
        fnstsw  ax
        fstp    st(2)
        test    ah, 41h
        jne     L_7FBE5B
        mov     edi, 1
        jmp     L_7FBE5D
    L_7FBE5B:
        xor     edi, edi
    L_7FBE5D:
        fcomp   st(1)
        fnstsw  ax
        test    ah, 5h
        jp      L_7FBE6D
        mov     edx, 1
        jmp     L_7FBE6F
    L_7FBE6D:
        xor     edx, edx
    L_7FBE6F:
        fcompp
        fnstsw  ax
        test    ah, 41h
        jne     L_7FBE7F
        mov     eax, 1
        jmp     L_7FBE81
    L_7FBE7F:
        xor     eax, eax
    L_7FBE81:
        add     eax, edx
        mov     edx, dword ptr [esp + 24h]
        add     eax, edi
        or      eax, 200h
        mov     word ptr [edx], ax
        mov     eax, dword ptr [esp + 20h]
        push    eax
        mov     eax, ecx
        call    ext_007FB960
        add     esp, 4
        pop     edi
        mov     al, 1
        pop     esi
        add     esp, 10h
        ret
    }
}

extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007F66D0();
extern "C" void ext_007F6750();
extern "C" void ext_007F67C0();
extern "C" void ext_007F6810();
extern "C" void ext_007F6830();
extern "C" void ext_007F6850();
extern "C" void ext_007F6880();
extern "C" int mem_00AA7E40;
extern "C" int mem_0092A278;
extern "C" int mem_0099D148;

// [0x007F6AB0] sub_007F6AB0 (1349 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F6AB0(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x50
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp + 0x20]
        push    ebx
        fld     qword ptr [mem_009453D8]
        mov     ebx, dword ptr [ebp + 0x18]
        fmul    st, st(1)
        push    esi
        lea     eax, [ebx + 0x1]
        push    edi
        fmulp   st(1), st
        shl     eax, 0x4
        fstp    dword ptr [ebp - 0x14]
        call    ext_006A6EC0
        mov     dword ptr [ebp - 0x24], esp
        lea     eax, [ebx + 0x1]
        push    eax
        lea     ecx, [ebp - 0x24]
        push    ecx
        call    ext_007F67C0
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        call    ext_007F6810
        mov     edi, eax
        mov     esi, 0x1
        add     esp, 0x10
        cmp     ebx, esi
        mov     edx, edi
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [edi + 0xc], edi
        mov     dword ptr [edi + 0x8], edi
        je      L_7F6F34
        mov     ebx, dword ptr [ebp + 0x10]
        cmp     ebx, esi
        jle     L_7F6B4C
        mov     edx, dword ptr [ebp + 0xc]
        add     edx, 0x28
    L_7F6B28:
        fld     dword ptr [ebp + 0x20]
        mov     eax, dword ptr [edi]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    edx
        call    ext_007F66D0
        add     esp, 0xc
        test    al, al
        je      L_7F6B49
        add     esi, 0x1
        add     edx, 0x28
        cmp     esi, ebx
        jl      L_7F6B28
    L_7F6B49:
        mov     edx, dword ptr [ebp - 0x20]
    L_7F6B4C:
        cmp     esi, ebx
        je      L_7F6F34
        mov     edx, dword ptr [ebp + 0xc]
        lea     ecx, [esi + 4*esi]
        lea     eax, [edx + 8*ecx]
        push    eax
        lea     eax, [ebp - 0x24]
        push    eax
        call    ext_007F6810
        push    eax
        push    edi
        mov     dword ptr [ebp - 0x10], eax
        add     esi, 0x1
        call    ext_007F6830
        add     esp, 0x10
        cmp     esi, ebx
        je      L_7F6F31
        cmp     dword ptr [ebp + 0x18], 0x2
        je      L_7F6F31
        cmp     esi, ebx
        jge     L_7F6D73
        mov     edx, dword ptr [ebp + 0xc]
        fld     dword ptr [ebp - 0x14]
        lea     ecx, [esi + 4*esi]
        fstp    qword ptr [ebp - 0x50]
        lea     eax, [edx + 8*ecx]
        mov     dword ptr [ebp - 0xc], eax
    L_7F6BA3:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [edi]
        push    edx
        push    ecx
        push    eax
        push    ebx
        call    ext_007F6750
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        add     esp, 0x10
        fld     st(0)
        fld     qword ptr [ebp - 0x50]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x5
        jnp     L_7F6D09
        fld     dword ptr [ebp - 0x14]
        fchs
        fcompp
        fnstsw  ax
        test    ah, 0x41
        je      L_7F6D38
        fstp    st(0)
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [edx]
        fld     dword ptr [ebx]
        fsub    dword ptr [ecx]
        mov     edx, dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebx + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebx + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x28]
        fld     st(2)
        fmulp   st(3), st
        fxch    st(2)
        fadd    qword ptr [mem_0092A278]
        fstp    dword ptr [ebp - 0x8]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [edx]
        fld     dword ptr [ebx]
        fsub    st, st(1)
        fstp    dword ptr [ebp - 0x3c]
        fld     dword ptr [edx + 0x4]
        fld     dword ptr [ebx + 0x4]
        fsub    st, st(1)
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [edx + 0x8]
        fld     dword ptr [ebx + 0x8]
        fsub    st, st(1)
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x8]
        fld     st(3)
        fmulp   st(4), st
        fxch    st(3)
        fadd    qword ptr [mem_0092A278]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fld     st(2)
        fmulp   st(3), st
        faddp   st(2), st
        fxch    st(1)
        fstp    dword ptr [ebp - 0xc]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_7F6CA2
        mov     eax, dword ptr [ebp - 0x10]
        fstp    st(3)
        fstp    st(1)
        mov     dword ptr [eax], edx
        fstp    st(0)
        fstp    st(0)
        jmp     L_7F6CF5
    L_7F6CA2:
        fld     dword ptr [ecx]
        fsubrp  st(4), st
        fxch    st(3)
        fstp    dword ptr [ebp - 0x48]
        fld     dword ptr [ecx + 0x4]
        fsubrp  st(2), st
        fxch    st(1)
        fstp    dword ptr [ebp - 0x44]
        fsubr   dword ptr [ecx + 0x8]
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x48]
        fld     dword ptr [ebp - 0x44]
        fld     dword ptr [ebp - 0x40]
        fld     st(2)
        fmulp   st(3), st
        fxch    st(2)
        fadd    qword ptr [mem_0092A278]
        fstp    dword ptr [ebp - 0xc]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     st(0)
        fmulp   st(1), st
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_7F6CF5
        mov     dword ptr [edi], edx
    L_7F6CF5:
        add     esi, 0x1
        add     edx, 0x28
        cmp     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 0xc], edx
        jl      L_7F6BA3
        jmp     L_7F6D6E
    L_7F6D09:
        mov     edx, dword ptr [ebp + 0xc]
        fstp    st(0)
        lea     ecx, [esi + 4*esi]
        lea     eax, [edx + 8*ecx]
        push    eax
        lea     eax, [ebp - 0x24]
        push    eax
        call    ext_007F6810
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ebx, eax
        push    ebx
        push    ecx
        add     esi, 0x1
        call    ext_007F6830
        fst     dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ebp - 0x10]
        fst     dword ptr [edx + 0x4]
        jmp     L_7F6D68
    L_7F6D38:
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [esi + 4*esi]
        lea     eax, [ecx + 8*eax]
        push    eax
        lea     edx, [ebp - 0x24]
        push    edx
        call    ext_007F6810
        mov     ebx, eax
        push    ebx
        push    edi
        add     esi, 0x1
        call    ext_007F6830
        fchs
        mov     eax, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x14]
        fst     dword ptr [ebx + 0x4]
        fst     dword ptr [eax + 0x4]
    L_7F6D68:
        fstp    dword ptr [edi + 0x4]
        add     esp, 0x10
    L_7F6D6E:
        mov     ebx, dword ptr [ebp + 0x10]
        cmp     esi, ebx
    L_7F6D73:
        je      L_7F6F31
        cmp     esi, ebx
        jge     L_7F6E31
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, ebx
        lea     ecx, [esi + 4*esi]
        sub     eax, esi
        lea     edi, [edx + 8*ecx]
        mov     dword ptr [ebp - 0x14], eax
    L_7F6D91:
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        lea     ecx, [ebp - 0x24]
        push    edi
        push    ecx
        call    ext_007F6880
        mov     edx, dword ptr [ebp - 0x18]
        add     edi, 0x28
        add     esp, 0xc
        cmp     edx, dword ptr [ebp + 0x18]
        mov     dword ptr [ebp - 0x10], edi
        jle     L_7F6E27
        mov     edx, dword ptr [ebp - 0x20]
        fld     dword ptr [edx + 0x4]
        mov     ebx, edx
        fstp    dword ptr [ebp - 0x8]
        mov     ecx, edx
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_7F6DC0:
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [ebp - 0x8]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_7F6DD7
        fld     dword ptr [ecx + 0x4]
        mov     ebx, ecx
        fstp    dword ptr [ebp - 0x8]
    L_7F6DD7:
        mov     ecx, dword ptr [ecx + 0x8]
        cmp     ecx, edx
        jne     L_7F6DC0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0xc]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    ext_007F6750
        fstp    dword ptr [edi + 0x4]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edi]
        push    edx
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        push    eax
        call    ext_007F6750
        fstp    dword ptr [esi + 0x4]
        lea     ecx, [ebp - 0x24]
        push    ebx
        push    ecx
        call    ext_007F6850
        mov     ebx, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp - 0x10]
        add     esp, 0x28
    L_7F6E27:
        sub     dword ptr [ebp - 0x14], 0x1
        jne     L_7F6D91
    L_7F6E31:
        fld     dword ptr [mem_0099D148]
        xor     edi, edi
        xor     esi, esi
        fstp    dword ptr [ebp - 0x8]
        cmp     ebx, 0x4
        jl      L_7F6EC9
        mov     ecx, dword ptr [ebp + 0xc]
        lea     edx, [ebx - 0x4]
        shr     edx, 0x2
        add     ecx, 0x40
        add     edx, 0x1
        lea     esi, [4*edx]
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_7F6E60:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ecx - 0x28]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_7F6E78
        fld     dword ptr [ecx - 0x28]
        lea     edi, [ecx - 0x40]
        fstp    dword ptr [ebp - 0x8]
    L_7F6E78:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ecx]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_7F6E8E
        fld     dword ptr [ecx]
        lea     edi, [ecx - 0x18]
        fstp    dword ptr [ebp - 0x8]
    L_7F6E8E:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ecx + 0x28]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_7F6EA6
        fld     dword ptr [ecx + 0x28]
        lea     edi, [ecx + 0x10]
        fstp    dword ptr [ebp - 0x8]
    L_7F6EA6:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ecx + 0x50]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_7F6EBE
        fld     dword ptr [ecx + 0x50]
        lea     edi, [ecx + 0x38]
        fstp    dword ptr [ebp - 0x8]
    L_7F6EBE:
        add     ecx, 0xa0
        sub     edx, 0x1
        jne     L_7F6E60
    L_7F6EC9:
        cmp     esi, ebx
        jge     L_7F6EFE
        mov     eax, dword ptr [ebp + 0xc]
        lea     edx, [esi + 4*esi]
        lea     ecx, [eax + 8*edx + 0x18]
        sub     ebx, esi
        _emit   0x8d
        _emit   0xa4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_7F6EE0:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ecx]
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_7F6EF6
        fld     dword ptr [ecx]
        lea     edi, [ecx - 0x18]
        fstp    dword ptr [ebp - 0x8]
    L_7F6EF6:
        add     ecx, 0x28
        sub     ebx, 0x1
        jne     L_7F6EE0
    L_7F6EFE:
        mov     edx, dword ptr [ebp - 0x20]
        fld     dword ptr [edx + 0x4]
        mov     esi, edx
        fstp    dword ptr [ebp - 0x8]
        mov     ecx, edx
    L_7F6F0B:
        cmp     dword ptr [ecx], edi
        je      L_7F6F34
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [ebp - 0x8]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_7F6F26
        fld     dword ptr [ecx + 0x4]
        mov     esi, ecx
        fstp    dword ptr [ebp - 0x8]
    L_7F6F26:
        mov     ecx, dword ptr [ecx + 0x8]
        cmp     ecx, edx
        jne     L_7F6F0B
        mov     dword ptr [esi], edi
        jmp     L_7F6F34
    L_7F6F31:
        mov     edx, dword ptr [ebp - 0x20]
    L_7F6F34:
        xor     edi, edi
        cmp     dword ptr [ebp + 0x1c], edi
        mov     dword ptr [ebp - 0x10], edi
        je      L_7F6F9B
        cmp     dword ptr [ebp - 0x18], edi
        mov     eax, edx
        jle     L_7F6F9B
        mov     ecx, dword ptr [ebp - 0x18]
        mov     ebx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp - 0x14], ecx
        _emit   0x8b
        _emit   0xff
    L_7F6F50:
        mov     esi, dword ptr [eax]
        movzx   ecx, word ptr [esi + 0x1c]
        cmp     cl, 0x2
        je      L_7F6F6D
        and     ecx, 0xffffff00
        cmp     cx, 0x200
        je      L_7F6F6D
        mov     eax, dword ptr [eax + 0x8]
        jmp     L_7F6F92
    L_7F6F6D:
        add     dword ptr [ebp - 0x10], 0x1
        mov     edi, ebx
        push    eax
        lea     edx, [ebp - 0x24]
        mov     ecx, 0xa
        rep     movsd
        mov     esi, dword ptr [eax + 0x8]
        push    edx
        add     ebx, 0x28
        call    ext_007F6850
        mov     edi, dword ptr [ebp - 0x10]
        add     esp, 0x8
        mov     eax, esi
    L_7F6F92:
        sub     dword ptr [ebp - 0x14], 0x1
        jne     L_7F6F50
        mov     edx, dword ptr [ebp - 0x20]
    L_7F6F9B:
        mov     ebx, dword ptr [ebp - 0x18]
        test    ebx, ebx
        mov     eax, edx
        jle     L_7F6FDF
        mov     edx, dword ptr [ebp + 0x14]
        lea     ecx, [edi + 4*edi]
        add     edi, ebx
        lea     edx, [edx + 8*ecx]
        mov     dword ptr [ebp - 0x10], edi
    L_7F6FB2:
        mov     esi, dword ptr [eax]
        mov     edi, edx
        mov     ecx, 0xa
        add     edx, 0x28
        sub     ebx, 0x1
        rep     movsd
        mov     eax, dword ptr [eax + 0x8]
        jne     L_7F6FB2
        mov     eax, dword ptr [ebp - 0x10]
        lea     esp, [ebp - 0x5c]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 0x4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
    L_7F6FDF:
        mov     eax, edi
        lea     esp, [ebp - 0x5c]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 0x4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007FC020] sub_007FC020 (358 bytes)
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA7C0();
extern "C" void ext_007CA8D0();
extern "C" void ext_007E48D0();
extern "C" void ext_007FBDB0();
extern "C" int mem_0092A280;

extern "C" __declspec(naked) void __cdecl fn_007FC020() {
    __asm {
        sub esp, 0x178
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x188]
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov edi, eax
        call ext_007C6F70
        mov edx, dword ptr [esi]
        push edx
        mov ebx, eax
        call ext_007C7000
        mov ebp, eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C6F30
        fstp qword ptr [esp + 0x30]
        mov ecx, dword ptr [esi]
        push ecx
        call ext_007C6F30
        fadd qword ptr [esp + 0x34]
        push ebp
        fstp dword ptr [esp + 0x28]
        call ext_007CA8D0
        add esp, 0x18
        push ebx
        lea edx, [esp + 0x6c]
        push edi
        lea ecx, [esp + 0x30]
        mov esi, eax
        mov dword ptr [esp + 0x20], edx
        call ext_007E48D0
        fld dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        lea eax, [esp + 0x38]
        mov ecx, esi
        call ext_007FBDB0
        mov esi, dword ptr [esp + 0x1a0]
        movzx eax, al
        xor edx, edx
        add esp, 0x10
        cmp eax, edx
        mov dword ptr [esi + 0x1c], eax
        jne L_7FC0D3
        pop edi
        mov dword ptr [esi + 0xc], edx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x178
        ret
    L_7FC0D3:
        fld dword ptr [ebx + 0x20]
        lea ecx, [esp + 0x68]
        fstp dword ptr [esi + 0x10]
        mov eax, ecx
        cmp eax, dword ptr [esp + 0x18]
        fld dword ptr [ebx + 0x24]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [ebx + 0x28]
        fstp dword ptr [esi + 0x18]
        mov ebp, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x10], ecx
        fmul qword ptr [mem_0092A280]
        mov dword ptr [esi + 0xc], edx
        fstp dword ptr [esp + 0x20]
        je L_7FC176
        lea edi, [ebp + 0x14]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_7FC110:
        mov edx, dword ptr [esi + 0xc]
        cmp edx, dword ptr [esi + 0x8]
        jge L_7FC176
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_7FC169
        push ebp
        push ecx
        mov ecx, ebx
        call ext_007CA7C0
        fld dword ptr [esp + 0x1c]
        mov ax, word ptr [esp + 0x14]
        fstp dword ptr [edi + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        mov word ptr [edi + 0x8], ax
        fld dword ptr [esi + 0x10]
        fstp dword ptr [edi - 0x8]
        add ebp, 0x28
        fld dword ptr [esi + 0x14]
        add edi, 0x28
        fstp dword ptr [edi - 0x2c]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [edi - 0x28]
        add dword ptr [esi + 0xc], 0x1
    L_7FC169:
        add ecx, 0xc
        cmp ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x10], ecx
        jne L_7FC110
    L_7FC176:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x178
        ret
    }
}

extern "C" void ext_006A6E8C();
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007F6AB0();
extern "C" int mem_00AA7E40;
extern "C" int mem_009357B0;

// [0x007F7000] sub_007F7000 (397 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F7000(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 28h
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp - 4], eax
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 10h]
        push    edi
        xor     edi, edi
        test    esi, esi
        mov     dword ptr [ebp - 20h], edi
        je      L_ret0
        cmp     dword ptr [ebp + 18h], edi
        je      L_ret0
        cmp     esi, 1
        jne     L_general
        mov     esi, dword ptr [ebp + 0Ch]
        mov     edi, dword ptr [ebp + 14h]
        mov     ecx, 0Ah
        rep movsd
        mov     eax, 1
        lea     esp, [ebp - 34h]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
L_general:
        lea     eax, [esi + 4*esi]
        add     eax, eax
        add     eax, eax
        add     eax, eax
        call    ext_006A6EC0
        lea     ebx, [4*esi]
        mov     eax, ebx
        mov     dword ptr [ebp - 14h], esp
        call    ext_006A6EC0
        mov     eax, esp
        push    ebx
        push    0
        push    eax
        mov     dword ptr [ebp - 1Ch], eax
        mov     dword ptr [ebp - 18h], edi
        call    ext_006A6E8C
        add     esp, 0Ch
        test    esi, esi
        jle     L_done
        mov     eax, dword ptr [ebp + 0Ch]
        add     eax, 0Ch
        mov     dword ptr [ebp - 24h], eax
        jmp     short L_outer
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_outer:
        mov     edx, dword ptr [ebp - 14h]
        fld     qword ptr [mem_009357B0]
        xor     ebx, ebx
        xor     ecx, ecx
        mov     dword ptr [ebp - 0Ch], edx
        mov     edx, dword ptr [ebp - 24h]
        mov     dword ptr [ebp - 8], ecx
        mov     dword ptr [ebp - 10h], ebx
L_inner:
        mov     eax, dword ptr [ebp - 1Ch]
        cmp     dword ptr [eax + 4*ebx], 0
        jne     L_inner_next
        test    ecx, ecx
        jne     L_skip_set
        mov     dword ptr [ebp - 8], edx
        mov     ecx, edx
L_skip_set:
        fld     dword ptr [edx + 4]
        fmul    dword ptr [ecx + 4]
        fld     dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp   st(1), st
        fld     dword ptr [ecx + 8]
        fmul    dword ptr [edx + 8]
        faddp   st(1), st
        fstp    dword ptr [ebp - 28h]
        fld     dword ptr [ebp - 28h]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 41h
        jne     L_inner_next
        mov     edi, dword ptr [ebp - 0Ch]
        add     dword ptr [ebp - 10h], 1
        add     dword ptr [ebp - 0Ch], 28h
        lea     esi, [edx - 0Ch]
        mov     ecx, 0Ah
        rep movsd
        mov     ecx, dword ptr [ebp - 1Ch]
        mov     edi, dword ptr [ebp - 20h]
        mov     esi, dword ptr [ebp + 10h]
        mov     dword ptr [ecx + 4*ebx], 1
        mov     ecx, dword ptr [ebp - 8]
L_inner_next:
        add     ebx, 1
        add     edx, 28h
        cmp     ebx, esi
        jl      L_inner
        mov     edx, dword ptr [ebp + 1Ch]
        fstp    st(0)
        fld     dword ptr [ebp + 20h]
        mov     eax, dword ptr [ebp + 18h]
        mov     ebx, dword ptr [ebp - 10h]
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        push    eax
        mov     eax, dword ptr [ebp + 14h]
        lea     edx, [edi + 4*edi]
        lea     edx, [eax + 8*edx]
        mov     eax, dword ptr [ebp - 14h]
        push    edx
        push    ebx
        push    eax
        push    ecx
        call    ext_007F6AB0
        add     edi, eax
        mov     eax, dword ptr [ebp - 18h]
        add     eax, ebx
        add     esp, 1Ch
        cmp     eax, esi
        mov     dword ptr [ebp - 20h], edi
        mov     dword ptr [ebp - 18h], eax
        jl      L_outer
L_done:
        mov     eax, edi
        lea     esp, [ebp - 34h]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
L_ret0:
        xor     eax, eax
        lea     esp, [ebp - 34h]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007F6420] sub_007F6420 (424 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F20();
extern "C" void ext_007C8850();
extern "C" void ext_007C89F0();
extern "C" void ext_007C8A10();
extern "C" void ext_007C8A30();
extern "C" void ext_007D58E0();
extern "C" void ext_007DAD40();
extern "C" void ext_007DEC00();
extern "C" void ext_007F7000();
extern "C" int mem_00AA7E40;
extern "C" int mem_0099EBF4;

extern "C" __declspec(naked) int __cdecl fn_007F6420(void* a, void* b) {
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp - 0x4], eax
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [eax]
        push    eax
        call    ext_007C6F20
        movsx   ebx, ax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    ext_007C6F20
        mov     ecx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebp + 0xc]
        movsx   eax, ax
        push    eax
        push    ebx
        push    edi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [esi], ecx
        call    ext_007C89F0
        add     esp, 0x14
        cmp     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [ebp - 0xc], eax
        jne     L_007F64F7
        mov     edx, dword ptr [ebp - 0x8]
        push    edx
        push    ebx
        push    edi
        call    ext_007C8A10
        add     esp, 0xc
        test    eax, eax
        jne     L_007F64F4
        call    ext_007DAD40
        movsx   eax, ax
        cmp     ebx, eax
        je      L_007F64D8
        call    ext_007DAD40
        movsx   ecx, ax
        mov     eax, dword ptr [ebp - 0x8]
        cmp     eax, ecx
        je      L_007F64D8
        push    eax
        push    edi
        call    ext_007C8850
        add     esp, 0x8
        push    eax
        push    ebx
        push    edi
        call    ext_007C8850
        mov     edx, dword ptr [edi + 0xb0]
        add     esp, 0x8
        push    eax
        push    offset mem_0099EBF4
        push    edx
        push    0x1
        call    ext_007D58E0
        mov     eax, dword ptr [ebp - 0x8]
        push    0x1
        push    eax
        push    ebx
        push    edi
        call    ext_007C8A30
        add     esp, 0x24
    L_007F64D8:
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0xc], eax
        lea     esp, [ebp - 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 0x4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
    L_007F64F4:
        mov     eax, dword ptr [ebp - 0xc]
    L_007F64F7:
        cmp     dword ptr [eax + 0xc], 0x0
        je      L_007F6509
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 0x4], edx
    L_007F6509:
        cmp     dword ptr [eax + 0x10], 0x0
        je      L_007F653F
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, 0x80
        mov     dword ptr [ebp - 0x8], eax
        jge     L_007F6521
        mov     eax, 0x80
    L_007F6521:
        mov     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], eax
        lea     eax, [eax + 4*eax]
        add     eax, eax
        add     eax, eax
        add     eax, eax
        call    ext_006A6EC0
        mov     eax, esp
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [ebp - 0xc]
        jmp     L_007F6542
    L_007F653F:
        mov     ebx, dword ptr [ebp - 0x8]
    L_007F6542:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        push    esi
        push    ecx
        call    edx
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [ebp - 0xc]
        add     esp, 0x8
        cmp     dword ptr [eax + 0x10], 0x0
        je      L_007F6593
        mov     ecx, dword ptr [ebp + 0x8]
        fld     dword ptr [edi + 0xa0]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        fstp    dword ptr [esp]
        push    edx
        mov     edx, dword ptr [esi + 0x4]
        push    eax
        push    ebx
        push    ecx
        push    edx
        lea     eax, [esi + 0x10]
        push    eax
        call    ext_007F7000
        mov     ecx, dword ptr [ebp - 0x8]
        add     esp, 0x1c
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], ecx
    L_007F6593:
        mov     edx, dword ptr [ebp - 0xc]
        cmp     dword ptr [edx + 0xc], 0x0
        je      L_007F65AF
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax], edx
        mov     edx, esi
        mov     dword ptr [eax + 0x4], ecx
        call    ext_007DEC00
    L_007F65AF:
        mov     eax, 0x1
        lea     esp, [ebp - 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp - 0x4]
        xor     ecx, ebp
        call    ext_006A745E
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007FE840] sub_007FE840 (1365 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FE840(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        mov eax, ecx
        mov ebx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x8]
        mov ebp, dword ptr [eax + 0x10]
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x20], ebp
        jle L_007FE8C3
        xor esi, esi
        mov ecx, ebx
        shl ecx, 0x6
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x10], ecx
        mov edx, ebp
        mov dword ptr [esp + 0x18], ebp
    L_007FE875:
        mov ebp, ebx
    L_007FE877:
        mov ecx, dword ptr [eax + 0x20]
        mov dword ptr [esi + ecx], edx
        add edx, 0x40
        add esi, 0x4
        sub ebp, 0x1
        jne L_007FE877
        mov edx, dword ptr [eax + 0x30]
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [edx + 4*edi], 0x0
        mov edx, dword ptr [eax + 0x2c]
        lea ecx, [ebx - 0x1]
        mov dword ptr [edx + 4*edi], ecx
        mov edx, dword ptr [esp + 0x18]
        add edx, dword ptr [esp + 0x10]
        lea ecx, [4*ebx]
        add edi, 0x1
        add esi, ecx
        cmp edi, ebx
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x18], edx
        jl L_007FE875
        mov ebp, dword ptr [esp + 0x20]
    L_007FE8C3:
        fldz
        xor eax, eax
        xor ebx, ebx
        cmp dword ptr [esp + 0x40], eax
        mov dword ptr [esp + 0x18], eax
        jle L_007FE9F4
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ecx + 0x1c]
        mov dword ptr [esp + 0x10], edx
    L_007FE8E2:
        mov ecx, dword ptr [esp + 0x38]
        mov edi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        lea edx, [ebp + 4*ebx]
        xor esi, esi
        sar ecx, 0x2
        mov dword ptr [esp + 0x1c], edx
    L_007FE8F8:
        mov eax, dword ptr [esp + 0x38]
        mov edx, dword ptr [eax + 4*esi]
        cmp edx, edi
        mov ebp, dword ptr [esp + 0x48]
        jg L_007FE915
        mov eax, ecx
        imul eax, ebp
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FE91F
    L_007FE915:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebp
        add eax, ecx
    L_007FE91F:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FE95A
        cmp edx, edi
        mov ebp, edi
        jg L_007FE946
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        fld dword ptr [eax + 4*edx]
        mov edx, dword ptr [esp + 0x1c]
        fstp dword ptr [edx]
        jmp L_007FE960
    L_007FE946:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
        fld dword ptr [eax + 4*edx]
        mov edx, dword ptr [esp + 0x1c]
        fstp dword ptr [edx]
        jmp L_007FE960
    L_007FE95A:
        mov eax, dword ptr [esp + 0x1c]
        fst dword ptr [eax]
    L_007FE960:
        add dword ptr [esp + 0x1c], 0x10
        add esi, 0x1
        cmp esi, dword ptr [esp + 0x40]
        jl L_007FE8F8
        mov ecx, dword ptr [esp + 0x14]
        cmp esi, ecx
        mov ebp, dword ptr [esp + 0x20]
        jge L_007FE991
        mov eax, ecx
        lea edx, [ebx + 4*esi]
        sub eax, esi
        lea edx, [ebp + 4*edx]
        add esi, eax
    L_007FE987:
        fst dword ptr [edx]
        add edx, 0x10
        sub eax, 0x1
        jne L_007FE987
    L_007FE991:
        add ebx, 0x1
        and ebx, 0x3
        lea eax, [ebx - 0x1]
        and eax, ecx
        shl eax, 0x4
        add ebp, eax
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x1
        cmp eax, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x18], eax
        jl L_007FE8E2
        test ebx, ebx
        je L_007FE9FC
        cmp ebx, 0x4
        je L_007FE9FC
        mov ecx, 0x4
        sub ecx, ebx
        lea edi, [ebp + 4*ebx]
        add ebx, ecx
    L_007FE9D0:
        xor esi, esi
        cmp dword ptr [esp + 0x14], esi
        jle L_007FE9EA
        mov edx, dword ptr [esp + 0x14]
        mov eax, edi
        mov esi, edx
    L_007FE9E0:
        fst dword ptr [eax]
        add eax, 0x10
        sub edx, 0x1
        jne L_007FE9E0
    L_007FE9EA:
        add edi, 0x4
        sub ecx, 0x1
        jne L_007FE9D0
        jmp L_007FE9F8
    L_007FE9F4:
        mov esi, dword ptr [esp + 0x14]
    L_007FE9F8:
        mov ecx, dword ptr [esp + 0x14]
    L_007FE9FC:
        mov edi, dword ptr [esp + 0x40]
        lea eax, [edi - 0x1]
        and eax, 0x3
        add eax, 0x1
        sub esi, 0x1
        sub ebx, 0x1
        cmp eax, 0x4
        jge L_007FEA35
        fld1
        add esi, esi
        mov edx, 0x4
        add esi, esi
        sub edx, eax
    L_007FEA21:
        lea eax, [esi + ebx]
        sub esi, 0x4
        fst dword ptr [ebp + 4*eax]
        sub ebx, 0x1
        sub edx, 0x1
        jne L_007FEA21
        fstp st(0)
    L_007FEA35:
        mov ebp, dword ptr [esp + 0x28]
        xor ebx, ebx
        cmp edi, 0x4
        mov edi, dword ptr [esp + 0x30]
        jl L_007FEA9C
        mov esi, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x38]
        add esi, -0x4
        lea edx, [ecx + 0xc]
        shr esi, 0x2
        sub ecx, ebp
        add esi, 0x1
        lea eax, [ebp + 0x4]
        lea ebx, [4*esi]
    L_007FEA64:
        mov ebp, dword ptr [edx - 0xc]
        fld dword ptr [edi + 4*ebp]
        add eax, 0x10
        fstp dword ptr [eax - 0x14]
        mov ebp, dword ptr [ecx + eax - 0x10]
        fld dword ptr [edi + 4*ebp]
        add edx, 0x10
        sub esi, 0x1
        fstp dword ptr [eax - 0x10]
        mov ebp, dword ptr [edx - 0x14]
        fld dword ptr [edi + 4*ebp]
        fstp dword ptr [eax - 0xc]
        mov ebp, dword ptr [edx - 0x10]
        fld dword ptr [edi + 4*ebp]
        fstp dword ptr [eax - 0x8]
        jne L_007FEA64
        mov ebp, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x14]
    L_007FEA9C:
        mov edx, dword ptr [esp + 0x40]
        cmp ebx, edx
        jge L_007FEAC7
        mov esi, dword ptr [esp + 0x38]
        sub edx, ebx
        lea eax, [ebp + 4*ebx]
        sub esi, ebp
        add ebx, edx
    L_007FEAB2:
        mov ebp, dword ptr [eax + esi]
        fld dword ptr [edi + 4*ebp]
        add eax, 0x4
        sub edx, 0x1
        fstp dword ptr [eax - 0x4]
        jne L_007FEAB2
        mov ebp, dword ptr [esp + 0x28]
    L_007FEAC7:
        cmp ebx, ecx
        jge L_007FEAD9
        mov ecx, dword ptr [esp + 0x14]
        sub ecx, ebx
        lea edi, [ebp + 4*ebx]
        xor eax, eax
        rep stosd
    L_007FEAD9:
        xor eax, eax
        cmp dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x18], eax
        jle L_007FED89
    L_007FEAE9:
        mov ecx, dword ptr [esp + 0x3c]
        fld st(0)
        mov ecx, dword ptr [ecx + 4*eax]
        mov edx, dword ptr [esp + 0x34]
        fcomp dword ptr [edx + 4*ecx]
        fnstsw ax
        test ah, 0x44
        jnp L_007FED74
        mov ebx, dword ptr [esp + 0x40]
        xor edx, edx
        cmp ebx, 0x4
        jl L_007FECDC
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [eax + 0x1c]
        mov eax, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x10], edx
        lea edx, [eax + 0xc]
        sub eax, ebp
        mov dword ptr [esp + 0x20], eax
        lea eax, [ebx - 0x4]
        mov ebx, dword ptr [esp + 0x48]
        shr eax, 0x2
        add eax, 0x1
        mov dword ptr [esp + 0x1c], eax
        mov edi, ecx
        add eax, eax
        sar edi, 0x2
        add eax, eax
        mov dword ptr [esp + 0x30], edx
        lea esi, [ebp + 0x4]
        mov dword ptr [esp + 0x14], eax
    L_007FEB50:
        mov edx, dword ptr [esp + 0x30]
        mov edx, dword ptr [edx - 0xc]
        cmp edx, ecx
        jg L_007FEB69
        mov eax, edi
        imul eax, ebx
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FEB73
    L_007FEB69:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebx
        add eax, edi
    L_007FEB73:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FEBAC
        cmp edx, ecx
        mov ebp, ecx
        jg L_007FEB91
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        jmp L_007FEB9A
    L_007FEB91:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
    L_007FEB9A:
        fld dword ptr [esi - 0x4]
        fld dword ptr [eax + 4*edx]
        mov eax, dword ptr [esp + 0x34]
        fmul dword ptr [eax + 4*ecx]
        fsubp st(1), st
        fstp dword ptr [esi - 0x4]
    L_007FEBAC:
        mov edx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esi + edx]
        cmp edx, ecx
        jg L_007FEBC5
        mov eax, edi
        imul eax, ebx
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FEBCF
    L_007FEBC5:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebx
        add eax, edi
    L_007FEBCF:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FEC06
        cmp edx, ecx
        mov ebp, ecx
        jg L_007FEBED
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        jmp L_007FEBF6
    L_007FEBED:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
    L_007FEBF6:
        fld dword ptr [esi]
        fld dword ptr [eax + 4*edx]
        mov eax, dword ptr [esp + 0x34]
        fmul dword ptr [eax + 4*ecx]
        fsubp st(1), st
        fstp dword ptr [esi]
    L_007FEC06:
        mov edx, dword ptr [esp + 0x30]
        mov edx, dword ptr [edx - 0x4]
        cmp edx, ecx
        jg L_007FEC1F
        mov eax, edi
        imul eax, ebx
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FEC29
    L_007FEC1F:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebx
        add eax, edi
    L_007FEC29:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FEC62
        cmp edx, ecx
        mov ebp, ecx
        jg L_007FEC47
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        jmp L_007FEC50
    L_007FEC47:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
    L_007FEC50:
        fld dword ptr [esi + 0x4]
        fld dword ptr [eax + 4*edx]
        mov eax, dword ptr [esp + 0x34]
        fmul dword ptr [eax + 4*ecx]
        fsubp st(1), st
        fstp dword ptr [esi + 0x4]
    L_007FEC62:
        mov edx, dword ptr [esp + 0x30]
        mov edx, dword ptr [edx]
        cmp edx, ecx
        jg L_007FEC7A
        mov eax, edi
        imul eax, ebx
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FEC84
    L_007FEC7A:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebx
        add eax, edi
    L_007FEC84:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FECBD
        cmp edx, ecx
        mov ebp, ecx
        jg L_007FECA2
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        jmp L_007FECAB
    L_007FECA2:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
    L_007FECAB:
        fld dword ptr [esi + 0x8]
        fld dword ptr [eax + 4*edx]
        mov eax, dword ptr [esp + 0x34]
        fmul dword ptr [eax + 4*ecx]
        fsubp st(1), st
        fstp dword ptr [esi + 0x8]
    L_007FECBD:
        add dword ptr [esp + 0x30], 0x10
        add esi, 0x10
        sub dword ptr [esp + 0x1c], 0x1
        jne L_007FEB50
        mov ebp, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x40]
    L_007FECDC:
        cmp edx, ebx
        jge L_007FED74
        mov eax, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0x1c]
        mov ebx, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x38]
        mov edi, ecx
        sub eax, ebp
        sar edi, 0x2
        lea esi, [ebp + 4*edx]
        mov dword ptr [esp + 0x20], eax
        sub ebx, edx
        jmp L_007FED0E
    L_007FED0A:
        mov eax, dword ptr [esp + 0x20]
    L_007FED0E:
        mov edx, dword ptr [eax + esi]
        cmp edx, ecx
        mov ebp, dword ptr [esp + 0x48]
        jg L_007FED27
        mov eax, edi
        imul eax, ebp
        mov ebp, edx
        sar ebp, 0x2
        add eax, ebp
        jmp L_007FED31
    L_007FED27:
        mov eax, edx
        sar eax, 0x2
        imul eax, ebp
        add eax, edi
    L_007FED31:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_007FED68
        cmp edx, ecx
        mov ebp, ecx
        jg L_007FED4F
        and edx, 0x3
        and ebp, 0x3
        lea edx, [ebp + 4*edx]
        jmp L_007FED58
    L_007FED4F:
        and ebp, 0x3
        and edx, 0x3
        lea edx, [edx + 4*ebp]
    L_007FED58:
        fld dword ptr [esi]
        fld dword ptr [eax + 4*edx]
        mov edx, dword ptr [esp + 0x34]
        fmul dword ptr [edx + 4*ecx]
        fsubp st(1), st
        fstp dword ptr [esi]
    L_007FED68:
        add esi, 0x4
        sub ebx, 0x1
        jne L_007FED0A
        mov ebp, dword ptr [esp + 0x28]
    L_007FED74:
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x1
        cmp eax, dword ptr [esp + 0x44]
        mov dword ptr [esp + 0x18], eax
        jl L_007FEAE9
    L_007FED89:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x24
    }
}

extern "C" int mem_00993828; extern "C" int mem_0092C510; extern "C" int mem_0099ECC0; extern "C" int mem_00993838;
// [0x007FA560] sub_007FA560 (1496 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FA560(void* self) {
    __asm {
        fld dword ptr [esp + 0x8]
        
        sub esp, 0x40
        fld dword ptr [esp + 0x50]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_007FA57C
        fxch st(1)
        fst dword ptr [esp + 0x8]
        jmp loc_007FA582
    loc_007FA57C:
        fst dword ptr [esp + 0x8]
        fxch st(1)
    loc_007FA582:
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_007FA58F
        fstp st(1)
        jmp loc_007FA591
    loc_007FA58F:
        fstp st(0)
    loc_007FA591:
        fstp dword ptr [esp + 0x50]
        push esi
        fld dword ptr [esp + 0x50]
        push ecx
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        call dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        call dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0xc]
        add esp, 0x4
        
        fld dword ptr [esp + 0x8]
        mov esi, 0x64
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x20]
        fldz
        fst dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [mem_00993828]
        fld qword ptr [mem_0092C510]
        fld dword ptr [esp + 0x14]
        jmp loc_007FA613
    loc_007FA5FD:
        fld qword ptr [mem_00993828]
        fld qword ptr [mem_0092C510]
        fxch st(2)
        fxch st(3)
        fxch st(1)
        fxch st(2)
        fxch st(1)
    loc_007FA613:
        fld dword ptr [esp + 0x54]
        sub esi, 0x1
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fmul st, st(5)
        fstp dword ptr [esp + 0x3c]
        fld st(2)
        fabs
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fadd qword ptr [mem_0099ECC0]
        fmul dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fmul st, st(4)
        fstp dword ptr [esp + 0x38]
        fsubp st(1), st
        fld st(1)
        fsub dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        fld st(2)
        fmul st, st(6)
        fsubp st(1), st
        fcompp
        fnstsw ax
        test ah, 0x1
        je loc_007FAB12
        fld dword ptr [esp + 0x4c]
        fabs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp loc_007FA907
        fstp st(3)
        fxch st(2)
        fmulp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld st(4)
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp loc_007FA6DD
        fstp st(1)
        fld dword ptr [esp + 0x10]
        fsub st, st(2)
        fmul st, st(3)
        fld st(3)
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        jmp loc_007FA6DF
    loc_007FA6DD:
        fstp st(0)
    loc_007FA6DF:
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fld st(4)
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp loc_007FA704
        fld dword ptr [esp + 0x1c]
        fsub st, st(3)
        fmul st, st(4)
        fld st(4)
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x4]
        jmp loc_007FA706
    loc_007FA704:
        fstp st(0)
    loc_007FA706:
        fld st(0)
        fadd st, st(2)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x4]
        fadd st, st(2)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x40]
        fld st(0)
        fsubp st(2), st
        fld dword ptr [esp + 0x54]
        fld st(0)
        fsubp st(2), st
        fxch st(2)
        fmulp st(1), st
        fldz
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp loc_007FA753
        fld st(3)
        fmul st, st(6)
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp loc_007FA753
        mov ecx, 0x1
        jmp loc_007FA755
    loc_007FA753:
        xor ecx, ecx
    loc_007FA755:
        fld st(2)
        fsub dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fsubrp st(3), st
        fmulp st(2), st
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp loc_007FA788
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmul st, st(6)
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp loc_007FA78E
        mov eax, 0x1
        jmp loc_007FA790
    loc_007FA788:
        fstp st(0)
        fld dword ptr [esp + 0x4]
    loc_007FA78E:
        xor eax, eax
    loc_007FA790:
        test ecx, ecx
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x4c]
        jne loc_007FA7F1
        test eax, eax
        fstp st(2)
        jne loc_007FA81C
        fstp st(1)
        fldz
        fcomp st(3)
        fnstsw ax
        fstp st(2)
        test ah, 0x5
        jp loc_007FA7D2
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fmul qword ptr [mem_00993828]
        jmp loc_007FA92C
    loc_007FA7D2:
        fstp st(1)
        fld dword ptr [esp + 0x54]
        fsub st, st(1)
        fxch st(1)
        fxch st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fmul qword ptr [mem_00993828]
        jmp loc_007FA92C
    loc_007FA7F1:
        test eax, eax
        je loc_007FA81A
        fld st(2)
        fabs
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld st(1)
        fabs
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fcompp
        fnstsw ax
        test ah, 0x41
        je loc_007FA81A
        fstp st(2)
        jmp loc_007FA81C
    loc_007FA81A:
        fstp st(0)
    loc_007FA81C:
        fxch st(1)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x34]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fabs
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne loc_007FA8D2
        fstp st(4)
        fstp st(3)
        fld st(1)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fsubrp st(3), st
        fld dword ptr [esp + 0x38]
        fcom st(3)
        fnstsw ax
        fstp st(3)
        test ah, 0x41
        je loc_007FA897
        fsubr dword ptr [esp + 0x54]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp loc_007FA930
        jmp loc_007FA89B
    loc_007FA897:
        fstp st(0)
        fstp st(1)
    loc_007FA89B:
        fld dword ptr [esp + 0x3c]
        fsub st, st(1)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        fld dword ptr [esp + 0x18]
        test ah, 0x1
        fabs
        jne loc_007FA8C6
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        jmp loc_007FA92C
    loc_007FA8C6:
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fchs
        jmp loc_007FA92C
    loc_007FA8D2:
        fstp st(1)
        fldz
        fcomp st(4)
        fnstsw ax
        fstp st(3)
        test ah, 0x5
        jp loc_007FA8F1
        fsub st, st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fmulp st(2), st
        fxch st(1)
        jmp loc_007FA92C
    loc_007FA8F1:
        fstp st(0)
        fld dword ptr [esp + 0x54]
        fsub st, st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fmulp st(2), st
        fxch st(1)
        jmp loc_007FA92C
    loc_007FA907:
        fstp st(0)
        fstp st(1)
        fldz
        fcomp st(3)
        fnstsw ax
        fstp st(2)
        test ah, 0x5
        jp loc_007FA91E
        fld dword ptr [esp + 0xc]
        jmp loc_007FA922
    loc_007FA91E:
        fld dword ptr [esp + 0x54]
    loc_007FA922:
        fsub st, st(2)
        fstp dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x4c]
    loc_007FA92C:
        fstp dword ptr [esp + 0x50]
    loc_007FA930:
        fld dword ptr [esp + 0x50]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x18]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jp loc_007FA96C
        fstp st(0)
        push ecx
        faddp st(1), st
        fstp dword ptr [esp + 0x8]
        
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x38]
        add esp, 0x4
        jmp loc_007FA9C7
    loc_007FA96C:
        fldz
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        fabs
        jp loc_007FA985
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        jmp loc_007FA98F
    loc_007FA985:
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fchs
    loc_007FA98F:
        fstp dword ptr [esp + 0x3c]
        push ecx
        fadd dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x8]
        
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x38]
        add esp, 0x4
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x24]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp loc_007FAB29
        fstp st(0)
    loc_007FA9C7:
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x1c]
        add esp, 0x4
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x24]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_007FAA46
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jp loc_007FAA02
        fst dword ptr [esp + 0xc]
        jmp loc_007FAA06
    loc_007FAA02:
        fst dword ptr [esp + 0x54]
    loc_007FAA06:
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x10]
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        jmp loc_007FAAB0
    loc_007FAA46:
        fstp st(0)
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fxch st(1)
        test ah, 0x41
        jne loc_007FAA61
        fst dword ptr [esp + 0xc]
        jmp loc_007FAA65
    loc_007FAA61:
        fst dword ptr [esp + 0x54]
    loc_007FAA65:
        fld dword ptr [esp + 0x30]
        fcom st(3)
        fnstsw ax
        fld dword ptr [esp + 0x10]
        test ah, 0x41
        je loc_007FAAEE
        fld st(0)
        fld st(4)
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp loc_007FAAEE
        fstp st(1)
        fld dword ptr [esp + 0x28]
        fcomp st(4)
        fnstsw ax
        test ah, 0x41
        je loc_007FAAD8
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fld st(4)
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp loc_007FAAD6
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp loc_007FAADA
        fstp st(2)
        fstp st(1)
    loc_007FAAB0:
        test esi, esi
        fld dword ptr [esp + 0x8]
        
        jg loc_007FA5FD
        mov edx, dword ptr [esp + 0x48]
        fstp st(1)
        fstp st(0)
        push ecx
        fld dword ptr [edx]
        fstp dword ptr [esp]
        call dword ptr [esp + 0x5c]
        add esp, 0x4
        pop esi
        add esp, 0x40
        ret
    loc_007FAAD6:
        fstp st(0)
    loc_007FAAD8:
        fstp st(0)
    loc_007FAADA:
        fstp dword ptr [esp + 0x1c]
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x2c]
        jmp loc_007FAAB0
    loc_007FAAEE:
        fstp dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x10]
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x20]
        jmp loc_007FAAB0
    loc_007FAB12:
        mov eax, dword ptr [esp + 0x48]
        fstp st(0)
        fstp st(3)
        pop esi
        fstp st(0)
        fstp st(0)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x20]
        add esp, 0x40
        ret
    loc_007FAB29:
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x48]
        fstp dword ptr [ecx]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x007FD890] sub_007FD890 (1722 bytes)
extern "C" void ext_007FC540();
extern "C" __declspec(naked) void __fastcall fn_007FD890(void* self) {
    __asm {
        sub esp, 0x8c
        fld dword ptr [mem_0093C1A8]
        mov eax, dword ptr [esp + 0xac]
        push ebx
        fstp dword ptr [esp + 0x18]
        fld1
        push ebp
        mov ebp, dword ptr [esp + 0xac]
        fstp dword ptr [esp + 0x24]
        push esi
        push edi
        lea ecx, [esp + 0x5c]
        push ecx
        push eax
        mov bl, 0xf
        lea esi, [eax + 0x30]
        call ext_007FC540
        fld dword ptr [esp + 0xb8]
        lea edx, [esp + 0x64]
        mov eax, ebp
        add esp, 0x8
        xor ecx, ecx
        sub esi, edx
        sub eax, edx
        mov dword ptr [esp + 0x14], eax
        jmp L_007FD8E8
    L_007FD8E4:
        mov eax, dword ptr [esp + 0x14]
    L_007FD8E8:
        mov edi, dword ptr [esp + 0xb8]
        lea edx, [esi + 4*ecx]
        fld dword ptr [esp + edx + 0x5c]
        lea edx, [eax + 4*ecx]
        fstp dword ptr [esp + 0x18]
        lea edx, [esp + edx + 0x5c]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 4*ecx + 0x5c]
        fmul dword ptr [edi]
        fadd dword ptr [edx]
        fld dword ptr [esp + 4*ecx + 0x6c]
        fmul dword ptr [edi + 0x4]
        faddp st(1), st
        fld dword ptr [esp + 4*ecx + 0x7c]
        fmul dword ptr [edi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x24]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007FD970
        fst dword ptr [esp + 0x24]
        mov bl, cl
        fld dword ptr [edx]
        or bl, 0xc
        fchs
        fsub st, st(1)
        fstp dword ptr [esp + 0x38]
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_007FDCA0
        jmp L_007FD974
    L_007FD970:
        fstp st(0)
        fstp st(0)
    L_007FD974:
        add ecx, 0x1
        cmp ecx, 0x3
        jl L_007FD8E4
        mov ecx, dword ptr [esp + 0xbc]
        lea eax, [esp + 0x5c]
        xor edx, edx
        add ecx, 0x8
        sub eax, dword ptr [esp + 0xbc]
        lea esi, [esp + 0x60]
        mov dword ptr [esp + 0x50], eax
    L_007FD99F:
        mov eax, dword ptr [esp + 0xbc]
        fld dword ptr [ecx - 0x8]
        fmul dword ptr [eax + 0x30]
        add eax, 0x30
        fld dword ptr [ecx - 0x4]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx]
        fmul dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x50]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esi - 0x4]
        fmul dword ptr [ebp]
        fadd dword ptr [edi + 4*edx]
        fld dword ptr [esi]
        fmul dword ptr [ebp + 0x4]
        faddp st(1), st
        fld dword ptr [eax + ecx]
        fmul dword ptr [ebp + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x24]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007FDA42
        fst dword ptr [esp + 0x24]
        mov bl, dl
        fld dword ptr [edi + 4*edx]
        add bl, bl
        fsubrp st(2), st
        add bl, bl
        fxch st(1)
        or bl, 0x3
        fstp dword ptr [esp + 0x38]
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_007FDCA0
        jmp L_007FDA48
    L_007FDA42:
        fstp st(0)
        fstp st(1)
        fstp st(0)
    L_007FDA48:
        add edx, 0x1
        add ecx, 0x10
        add esi, 0x10
        cmp edx, 0x3
        jl L_007FD99F
        fadd dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0xbc]
        xor ecx, ecx
        mov byte ptr [esp + 0x13], bl
        fstp dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x40], ecx
    L_007FDA73:
        mov esi, 0x1
        shl esi, cl
        mov edi, 0x1
        and esi, 0x3
        mov ecx, esi
        shl edi, cl
        shl ecx, 0x4
        lea edx, [esp + ecx + 0x5c]
        mov dword ptr [esp + 0x14], edx
        and edi, 0x3
        mov eax, edi
        shl eax, 0x4
        lea eax, [esp + eax + 0x5c]
        mov edx, ebp
        sub edx, eax
        mov dword ptr [esp + 0x58], edx
        mov edx, dword ptr [esp + 0x14]
        xor ecx, ecx
        sub edx, eax
        mov dword ptr [esp + 0x3c], ecx
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x1c], edx
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_007FDAC0:
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x58]
        fld dword ptr [edx + eax]
        fmul st(0), st
        fld1
        fsubrp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [mem_0094CE80]
        fld dword ptr [esp + 0x30]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_007FDC22
        mov ebx, dword ptr [esp + 0x1c]
        mov eax, 0x1
        shl eax, cl
        mov edx, 0x1
        and eax, 0x3
        mov ecx, eax
        shl edx, cl
        mov ecx, dword ptr [esp + 0xb8]
        fld dword ptr [ecx + 4*edi]
        mov ecx, dword ptr [esp + 0x34]
        fmul dword ptr [ebx + ecx]
        mov ebx, dword ptr [esp + 0xb8]
        fld dword ptr [ebx + 4*esi]
        mov ebx, dword ptr [esp + 0xb4]
        fmul dword ptr [ecx]
        mov ecx, dword ptr [esp + 0xbc]
        and edx, 0x3
        add ecx, 0x30
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ebp + 4*eax]
        fmul dword ptr [ecx + 4*edx]
        fld dword ptr [ebp + 4*edx]
        fmul dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0x50]
        add ecx, ebp
        fsubp st(1), st
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x54]
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [ecx + 4*eax]
        fmul dword ptr [ebx + 4*edx]
        fld dword ptr [ecx + 4*edx]
        fmul dword ptr [ebx + 4*eax]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fsub dword ptr [esp + 0x20]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x20]
        call ext_006A7250
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x30]
        fld st(0)
        fmul dword ptr [esp + 0xb0]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jnp L_007FDC9E
        mov ecx, dword ptr [esp + 0x3c]
        fld st(0)
        fmul dword ptr [esp + 0x28]
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp L_007FDC1C
        fld1
        mov bl, byte ptr [esp + 0x40]
        fdivrp st(1), st
        add bl, bl
        add bl, bl
        or bl, cl
        mov byte ptr [esp + 0x13], bl
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x18]
        fsub dword ptr [esp + 0x14]
        fmulp st(1), st
        fstp dword ptr [esp + 0x38]
        jmp L_007FDC24
    L_007FDC1C:
        mov bl, byte ptr [esp + 0x13]
        fstp st(1)
    L_007FDC22:
        fstp st(0)
    L_007FDC24:
        add dword ptr [esp + 0x34], 0x4
        add ecx, 0x1
        cmp ecx, 0x3
        mov dword ptr [esp + 0x3c], ecx
        jl L_007FDAC0
        mov ecx, dword ptr [esp + 0x40]
        add ecx, 0x1
        add ebp, 0x10
        cmp ecx, 0x3
        mov dword ptr [esp + 0x40], ecx
        jl L_007FDA73
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0xa0]
        mov eax, dword ptr [esp + 0xa8]
        fstp dword ptr [edx]
        fld dword ptr [esp + 0x38]
        mov cl, bl
        and cl, 0xc
        fstp dword ptr [eax]
        cmp cl, 0xc
        jne L_007FDD33
        and bl, 0x3
        movsx edx, bl
        add edx, edx
        add edx, edx
        fld dword ptr [esp + edx + 0x5c]
        fld qword ptr [mem_009453D8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_007FDCAF
        mov esi, 0x1
        jmp L_007FDCB1
    L_007FDC9E:
        fstp st(1)
    L_007FDCA0:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x8c
        ret
    L_007FDCAF:
        xor esi, esi
    L_007FDCB1:
        fld dword ptr [esp + edx + 0x6c]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007FDCC5
        mov ecx, 0x1
        jmp L_007FDCC7
    L_007FDCC5:
        xor ecx, ecx
    L_007FDCC7:
        fld dword ptr [esp + edx + 0x7c]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007FDCDB
        mov eax, 0x1
        jmp L_007FDCDD
    L_007FDCDB:
        xor eax, eax
    L_007FDCDD:
        fldz
        add eax, ecx
        mov ecx, dword ptr [esp + 0xa4]
        fst dword ptr [ecx]
        fst dword ptr [ecx + 0x4]
        add eax, esi
        fst dword ptr [ecx + 0x8]
        movzx ebx, ax
        fcomp dword ptr [esp + 0x2c]
        fnstsw ax
        test ah, 0x41
        jne L_007FDD04
        fld1
        jmp L_007FDD0A
    L_007FDD04:
        fld dword ptr [mem_0093F7B8]
    L_007FDD0A:
        mov eax, dword ptr [esp + 0xac]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        pop edi
        fstp dword ptr [edx + ecx]
        xor edx, edx
        mov dh, bl
        pop esi
        pop ebp
        pop ebx
        or edx, 0x2
        mov word ptr [eax], dx
        mov al, 0x1
        add esp, 0x8c
        ret
    L_007FDD33:
        mov cl, bl
        and cl, 0x3
        cmp cl, 0x3
        jne L_007FDE0A
        shr bl, 0x2
        and bl, cl
        movsx ecx, bl
        shl ecx, 0x4
        fld dword ptr [esp + ecx + 0x5c]
        fld qword ptr [mem_009453D8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_007FDD68
        mov esi, 0x1
        jmp L_007FDD6A
    L_007FDD68:
        xor esi, esi
    L_007FDD6A:
        fld dword ptr [esp + ecx + 0x60]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007FDD7E
        mov edx, 0x1
        jmp L_007FDD80
    L_007FDD7E:
        xor edx, edx
    L_007FDD80:
        fld dword ptr [esp + ecx + 0x64]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007FDD94
        mov eax, 0x1
        jmp L_007FDD96
    L_007FDD94:
        xor eax, eax
    L_007FDD96:
        fldz
        add eax, edx
        fcomp dword ptr [esp + 0x2c]
        add eax, esi
        movzx edx, ax
        fnstsw ax
        test ah, 0x5
        mov eax, dword ptr [esp + 0xbc]
        jp L_007FDDD4
        fld dword ptr [ecx + eax]
        fchs
        fstp dword ptr [esp + 0x44]
        fld dword ptr [ecx + eax + 0x4]
        fchs
        fstp dword ptr [esp + 0x48]
        fld dword ptr [ecx + eax + 0x8]
        lea eax, [esp + 0x44]
        fchs
        fstp dword ptr [esp + 0x4c]
        jmp L_007FDDD6
    L_007FDDD4:
        add eax, ecx
    L_007FDDD6:
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0xa4]
        fstp dword ptr [ecx]
        pop edi
        fld dword ptr [eax + 0x4]
        pop esi
        fstp dword ptr [ecx + 0x4]
        or edx, 0x200
        fld dword ptr [eax + 0x8]
        pop ebp
        fstp dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0xa0]
        mov word ptr [ecx], dx
        mov al, 0x1
        pop ebx
        add esp, 0x8c
        ret
    L_007FDE0A:
        fldz
        mov edx, 0x1
        fcom dword ptr [esp + 0x2c]
        mov esi, edx
        fnstsw ax
        test ah, 0x41
        jne L_007FDE5A
        movzx ecx, bl
        mov eax, ecx
        and ecx, 0x3
        shl edx, cl
        shr eax, 0x2
        mov edi, ecx
        and eax, 0x3
        and edx, 0x3
        mov ecx, edx
        fstp dword ptr [esp + 4*edi + 0x44]
        shl esi, cl
        shl eax, 0x4
        add eax, dword ptr [esp + 0xbc]
        and esi, 0x3
        fld dword ptr [eax + 4*esi]
        fchs
        fstp dword ptr [esp + 4*edx + 0x44]
        fld dword ptr [eax + 4*edx]
        fstp dword ptr [esp + 4*esi + 0x44]
        jmp L_007FDE94
    L_007FDE5A:
        movzx eax, bl
        mov edi, eax
        and edi, 0x3
        mov ecx, edi
        shl edx, cl
        shr eax, 0x2
        fstp dword ptr [esp + 4*edi + 0x44]
        and eax, 0x3
        shl eax, 0x4
        add eax, dword ptr [esp + 0xbc]
        and edx, 0x3
        mov ecx, edx
        shl esi, cl
        and esi, 0x3
        fld dword ptr [eax + 4*esi]
        fstp dword ptr [esp + 4*edx + 0x44]
        fld dword ptr [eax + 4*edx]
        fchs
        fstp dword ptr [esp + 4*esi + 0x44]
    L_007FDE94:
        mov esi, dword ptr [esp + 0xa4]
        lea eax, [esp + 0x44]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fst dword ptr [esi + 0x8]
        fld dword ptr [esi]
        fmulp st(3), st
        fld dword ptr [esi + 0x4]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        call ext_006A7250
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fldz
        fld dword ptr [esp + 0x1c]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp L_007FDF2F
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x18]
        fmul st, st(1)
        fstp dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esi + 0x8]
        jmp L_007FDF31
    L_007FDF2F:
        fstp st(0)
    L_007FDF31:
        mov edx, dword ptr [esp + 0xac]
        pop edi
        pop esi
        pop ebp
        mov word ptr [edx], 0x101
        mov al, 0x1
        pop ebx
        add esp, 0x8c
        ret
    }
}

// [0x007FAB40] sub_007FAB40 (214 bytes)
extern "C" void ext_007F9CE0();
extern "C" void ext_007F9FB0();
extern "C" void ext_007FA260();
extern "C" void ext_007FA560();
extern "C" void ext_007FA1B0();
extern "C" void ext_007FA200();
extern "C" int mem_00B61F7C;
extern "C" int mem_00B61F8C;
extern "C" int mem_00B61F9C;
extern "C" int mem_00B61FA0;
extern "C" int mem_00B61FA4;

extern "C" __declspec(naked) void __cdecl fn_007FAB40() {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x24]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        push edi
        push offset mem_00B61F7C
        push esi
        mov dword ptr [mem_00B61FA0], eax
        mov dword ptr [mem_00B61FA4], ecx
        mov dword ptr [mem_00B61F9C], esi
        call ext_007F9CE0
        mov ebx, dword ptr [esp + 0x30]
        push ebx
        push offset mem_00B61F8C
        push esi
        call ext_007F9CE0
        fldz
        push offset ext_007FA1B0
        fstp dword ptr [esp + 0x4c]
        fld1
        lea edx, [esp + 0x28]
        push edx
        fstp dword ptr [esp + 0x4c]
        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x44]
        push edx
        lea eax, [esp + 0x58]
        push eax
        lea ecx, [esp + 0x60]
        push ecx
        call ext_007FA260
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x30]
        add esp, 0x30
        fld dword ptr [esp + 0x20]
        push offset ext_007FA200
        push offset ext_007FA1B0
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        lea edx, [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp]
        push edx
        call ext_007FA560
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x48]
        add esp, 0x1c
        push edi
        push ecx
        fstp dword ptr [esp]
        push ebx
        push edi
        push esi
        call ext_007F9FB0
        fld dword ptr [esp + 0x44]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x007FE040] sub_007FE040 (729 bytes)
extern "C" void ext_00401000();
extern "C" void ext_007C6F30();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007CA8D0();
extern "C" void ext_007E48D0();
extern "C" void ext_007E5230();
extern "C" void ext_007FC290();
extern "C" void ext_007FC2B0();
extern "C" void ext_007FC440();
extern "C" void ext_007FC490();
extern "C" void ext_007FD890();
extern "C" void ext_007FDF50();
extern "C" int mem_0092A280;

extern "C" __declspec(naked) int __cdecl fn_007FE040(void* a, void* b) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x2dc
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [eax]
        push ecx
        call ext_007C6F70
        add esp, 0x4
        mov dword ptr [ebp - 0x26c], eax
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [edx + 0x4]
        push eax
        call ext_007C6F70
        add esp, 0x4
        mov dword ptr [ebp - 0x268], eax
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx]
        push edx
        call ext_007C6F30
        add esp, 0x4
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        fstp qword ptr [ebp - 0x2dc]
        call ext_007C6F30
        add esp, 0x4
        fadd qword ptr [ebp - 0x2dc]
        fstp dword ptr [ebp - 0x254]
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [edx]
        push eax
        call ext_007C7000
        add esp, 0x4
        mov dword ptr [ebp - 0x284], eax
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        call ext_007C7000
        add esp, 0x4
        mov dword ptr [ebp - 0x260], eax
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [eax + 0x1c], 0x0
        mov ecx, dword ptr [ebp + 0xc]
        mov dword ptr [ecx + 0xc], 0x0
        mov edx, dword ptr [ebp - 0x284]
        push edx
        call ext_007CA8D0
        add esp, 0x4
        mov dword ptr [ebp - 0x25c], eax
        mov eax, dword ptr [ebp - 0x260]
        push eax
        call ext_007CA8D0
        add esp, 0x4
        mov dword ptr [ebp - 0x2d0], eax
        lea ecx, [ebp - 0x2c8]
        call ext_007E5230
        mov ecx, dword ptr [ebp - 0x26c]
        push ecx
        mov edx, dword ptr [ebp - 0x268]
        push edx
        lea ecx, [ebp - 0x2c8]
        call ext_007E48D0
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0x2cc], edx
        lea ecx, [ebp - 0x278]
        call ext_007E5230
        lea eax, [ebp - 0x2c8]
        push eax
        mov ecx, dword ptr [ebp - 0x2d0]
        push ecx
        mov edx, dword ptr [ebp - 0x25c]
        push edx
        push ecx
        fld dword ptr [ebp - 0x254]
        fstp dword ptr [esp]
        lea eax, [ebp - 0x250]
        push eax
        lea ecx, [ebp - 0x24c]
        push ecx
        lea edx, [ebp - 0x278]
        push edx
        lea eax, [ebp - 0x27c]
        push eax
        call ext_007FD890
        add esp, 0x20
        movzx ecx, al
        test ecx, ecx
        jne L_found
        xor eax, eax
        jmp L_ret
L_found:
        push offset ext_007E5230
        push 0x30
        push 0xc
        lea edx, [ebp - 0x248]
        push edx
        call ext_00401000
        lea eax, [ebp - 0x248]
        mov dword ptr [ebp - 0x258], eax
        mov ecx, dword ptr [ebp - 0x2cc]
        push ecx
        fld dword ptr [ecx + 0xa0]
        fstp dword ptr [esp]
        mov edx, dword ptr [ebp - 0x2d0]
        push edx
        mov eax, dword ptr [ebp - 0x25c]
        push eax
        lea ecx, [ebp - 0x2c8]
        push ecx
        lea edx, [ebp - 0x258]
        push edx
        call ext_007FDF50
        add esp, 0x14
        mov eax, dword ptr [ebp - 0x258]
        lea ecx, [ebp - 0x248]
        sub eax, ecx
        cdq
        mov ecx, 0xc
        idiv ecx
        mov dword ptr [ebp - 0x264], eax
        lea edx, [ebp - 0x248]
        mov dword ptr [ebp - 0x4], edx
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x280], ecx
        mov edx, dword ptr [ebp + 0xc]
        mov dword ptr [edx + 0xc], 0x0
        mov edx, dword ptr [ebp + 0xc]
        add edx, 0x10
        lea eax, [ebp - 0x278]
        mov ecx, dword ptr [ebp - 0x26c]
        call ext_007FC490
        mov dword ptr [ebp - 0x8], 0x0
        jmp L_cond
L_inc:
        mov eax, dword ptr [ebp - 0x8]
        add eax, 0x1
        mov dword ptr [ebp - 0x8], eax
L_cond:
        mov ecx, dword ptr [ebp - 0x8]
        cmp ecx, dword ptr [ebp - 0x264]
        jae L_success
        lea eax, [ebp - 0x278]
        mov ecx, dword ptr [ebp - 0x4]
        call ext_007FC2B0
        fsub dword ptr [ebp - 0x24c]
        fstp dword ptr [ebp - 0x2d4]
        fld dword ptr [ebp - 0x27c]
        fmul qword ptr [mem_0092A280]
        fld dword ptr [ebp - 0x2d4]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_skip
        mov ecx, dword ptr [ebp - 0x4]
        mov eax, dword ptr [ebp - 0x26c]
        mov edx, dword ptr [ebp - 0x280]
        call ext_007FC440
        mov edx, dword ptr [ebp - 0x280]
        mov ax, word ptr [ebp - 0x250]
        mov word ptr [edx + 0x1c], ax
        mov ecx, dword ptr [ebp - 0x280]
        fld dword ptr [ebp - 0x2d4]
        fstp dword ptr [ecx + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        add eax, 0x10
        mov ecx, dword ptr [ebp - 0x280]
        add ecx, 0xc
        call ext_007FC290
        mov edx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [edx + 0xc]
        add eax, 0x1
        mov ecx, dword ptr [ebp + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov edx, dword ptr [ebp - 0x280]
        add edx, 0x28
        mov dword ptr [ebp - 0x280], edx
L_skip:
        mov eax, dword ptr [ebp - 0x4]
        add eax, 0xc
        mov dword ptr [ebp - 0x4], eax
        jmp L_inc
L_success:
        mov ecx, dword ptr [ebp + 0xc]
        mov dword ptr [ecx + 0x1c], 0x1
        mov eax, 0x1
L_ret:
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007FAC20] sub_007FAC20 (416 bytes)
extern "C" void ext_007F9CE0();
extern "C" void ext_007F9D50();
extern "C" void ext_007F9DB0();
extern "C" void ext_007F9EB0();
extern "C" void ext_007F9FB0();
extern "C" void ext_007FA050();
extern "C" void ext_007FA0F0();
extern "C" void ext_007FAB40();
extern "C" int mem_0099ECC0;

extern "C" __declspec(naked) void __cdecl fn_007FAC20() {
    __asm {
        sub esp, 0x4c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x64]
        push edi
        call dword ptr [esp + 0x74]
        fstp dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x78]
        lea eax, [esp + 0x20]
        push edi
        push eax
        call ebp
        mov esi, dword ptr [esp + 0x6c]
        lea ecx, [esp + 0x28]
        push ecx
        push esi
        call ext_007F9D50
        lea edx, [esp + 0x30]
        push edx
        lea eax, [esp + 0x44]
        push eax
        push esi
        call ext_007F9CE0
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0x60]
        push edx
        push esi
        call ext_007F9CE0
        add esp, 0x2c
        mov ebx, 0x64
L_7FAC77:
        mov eax, dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x68]
        push ebp
        push eax
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x28]
        push ecx
        push edi
        push esi
        sub ebx, 1
        call ext_007FAB40
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [esp + 0x8c]
        add esp, 0x18
        fld st(0)
        fld dword ptr [esp + 0x10]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fadd st(0), st
        fld st(2)
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fxch st(2)
        fabs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        faddp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0099ECC0]
        fmul dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 1
        je L_7FADB8
        lea edx, [esp + 0x2c]
        fstp st(0)
        push edx
        push esi
        call ext_007FA0F0
        fstp dword ptr [esp + 0x1c]
        fldz
        add esp, 8
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x44
        jnp L_7FADB4
        push edi
        call dword ptr [esp + 0x74]
        fstp dword ptr [esp + 0x14]
        lea eax, [esp + 0x20]
        push edi
        push eax
        call ebp
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        lea eax, [esp + 0x60]
        push eax
        push esi
        call ext_007F9EB0
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x6c]
        push edx
        push esi
        call ext_007FA050
        fstp dword ptr [esp + 0x40]
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x58]
        push ecx
        push esi
        call ext_007F9DB0
        fld dword ptr [esp + 0x4c]
        fdiv dword ptr [esp + 0x48]
        add esp, 0x34
        lea edx, [esp + 0x2c]
        push edx
        push ecx
        lea eax, [esp + 0x44]
        mov ecx, eax
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push eax
        push ecx
        push esi
        call ext_007F9FB0
        lea edx, [esp + 0x50]
        push edx
        lea eax, [esp + 0x34]
        push eax
        push esi
        call ext_007F9CE0
        add esp, 0x20
        test ebx, ebx
        jg L_7FAC77
L_7FADB4:
        fld dword ptr [esp + 0x74]
L_7FADB8:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4c
        ret
    }
}

extern "C" void ext_00803AE0();
extern "C" int mem_00993840;
extern "C" int mem_00993828;
extern "C" int mem_0093F7B0;
extern "C" int mem_0092C510;
extern "C" int mem_00999B40;
extern "C" int mem_009548E0;
extern "C" int mem_00996628;
extern "C" int mem_0099EDD8;
extern "C" int mem_0099EDD0;
extern "C" int mem_0099EDC8;
extern "C" int mem_0099EDC0;
extern "C" int mem_0099EDB8;
extern "C" int mem_0099EDB0;

// [0x007F5A40] sub_007F5A40 (1985 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F5A40(void* self) {
    __asm {
    L_007F5A40: push ebp
    L_007F5A41: mov ebp, esp
    L_007F5A43: and esp, -0x8
    L_007F5A46: sub esp, 0x9c
    L_007F5A4C: fldz
    L_007F5A4E: mov eax, dword ptr [ebp + 0x14]
    L_007F5A51: mov ecx, dword ptr [ebp + 0x10]
    L_007F5A54: fst dword ptr [eax + 0x8]
    L_007F5A57: mov edx, dword ptr [ebp + 0xc]
    L_007F5A5A: fst dword ptr [eax + 0x4]
    L_007F5A5D: fst dword ptr [eax]
    L_007F5A5F: push ebx
    L_007F5A60: mov ebx, dword ptr [ebp + 0x8]
    L_007F5A63: fst dword ptr [ecx + 0x8]
    L_007F5A66: fst dword ptr [ecx + 0x4]
    L_007F5A69: push esi
    L_007F5A6A: fst dword ptr [ecx]
    L_007F5A6C: xor esi, esi
    L_007F5A6E: fst dword ptr [edx + 0x8]
    L_007F5A71: push edi
    L_007F5A72: fst dword ptr [edx + 0x4]
    L_007F5A75: mov dword ptr [esp + 0x58], esi
    L_007F5A79: fst dword ptr [edx]
    L_007F5A7B: cmp dword ptr [ebx + 0x1c], esi
    L_007F5A7E: fstp dword ptr [esp + 0x78]
    L_007F5A82: fld qword ptr [mem_00993840]
    L_007F5A88: fld qword ptr [mem_00993828]
    L_007F5A8E: jle L_007F61B4
    L_007F5A94: fstp st(0)
    L_007F5A96: mov dword ptr [esp + 0x6c], esi
    L_007F5A9A:
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_007F5AA0: mov eax, dword ptr [ebx + 0xc]
    L_007F5AA3: fstp st(0)
    L_007F5AA5: mov ecx, dword ptr [esp + 0x58]
    L_007F5AA9: mov esi, dword ptr [ebx + 0x8]
    L_007F5AAC: add esi, dword ptr [esp + 0x6c]
    L_007F5AB0: lea ecx, [eax + 4*ecx]
    L_007F5AB3: mov eax, dword ptr [ecx]
    L_007F5AB5: mov ecx, dword ptr [ecx + 0x4]
    L_007F5AB8: sub ecx, eax
    L_007F5ABA: lea edx, [eax + 4*eax]
    L_007F5ABD: mov eax, dword ptr [ebx + 0x10]
    L_007F5AC0: mov eax, dword ptr [eax + 4*edx + 0x4]
    L_007F5AC4: mov edx, dword ptr [ebx]
    L_007F5AC6: mov dword ptr [esp + 0x40], ecx
    L_007F5ACA: lea ecx, [eax + 2*eax]
    L_007F5ACD: fld dword ptr [edx + 4*ecx + 0x4]
    L_007F5AD1: lea eax, [edx + 4*ecx]
    L_007F5AD4: fmul dword ptr [esi + 0x4]
    L_007F5AD7: push esi
    L_007F5AD8: fld dword ptr [eax]
    L_007F5ADA: fmul dword ptr [esi]
    L_007F5ADC: faddp st(1), st
    L_007F5ADE: fld dword ptr [eax + 0x8]
    L_007F5AE1: fmul dword ptr [esi + 0x8]
    L_007F5AE4: faddp st(1), st
    L_007F5AE6: fstp dword ptr [esp + 0x18]
    L_007F5AEA: fld dword ptr [esp + 0x18]
    L_007F5AEE: fchs
    L_007F5AF0: fstp dword ptr [esp + 0x84]
    L_007F5AF7: call ext_00803AE0
    L_007F5AFC: fldz
    L_007F5AFE: mov ecx, eax
    L_007F5B00: mov edx, 0x1
    L_007F5B05: fst dword ptr [esp + 0x28]
    L_007F5B09: shl edx, cl
    L_007F5B0B: fst dword ptr [esp + 0x30]
    L_007F5B0F: fst dword ptr [esp + 0x20]
    L_007F5B13: mov edi, 0x1
    L_007F5B18: fst dword ptr [esp + 0x50]
    L_007F5B1C: add esp, 0x4
    L_007F5B1F: fst dword ptr [esp + 0x20]
    L_007F5B23: and edx, 0x3
    L_007F5B26: fst dword ptr [esp + 0x48]
    L_007F5B2A: mov ecx, edx
    L_007F5B2C: fst dword ptr [esp + 0x38]
    L_007F5B30: shl edi, cl
    L_007F5B32: fst dword ptr [esp + 0x30]
    L_007F5B36: fst dword ptr [esp + 0x18]
    L_007F5B3A: fstp dword ptr [esp + 0x50]
    L_007F5B3E: fld qword ptr [mem_00993840]
    L_007F5B44: and edi, 0x3
    L_007F5B47: cmp dword ptr [esp + 0x40], 0x0
    L_007F5B4C: jle L_007F5E6D
    L_007F5B52: mov ecx, dword ptr [ebx]
    L_007F5B54: mov dword ptr [esp + 0x10], ecx
    L_007F5B58: mov ecx, dword ptr [ebx + 0xc]
    L_007F5B5B: mov ebx, dword ptr [esp + 0x58]
    L_007F5B5F: mov ecx, dword ptr [ecx + 4*ebx]
    L_007F5B62: mov ebx, dword ptr [ebp + 0x8]
    L_007F5B65: mov ebx, dword ptr [ebx + 0x10]
    L_007F5B68: lea ecx, [ecx + 4*ecx]
    L_007F5B6B: lea ecx, [ebx + 4*ecx + 0x8]
    L_007F5B6F: mov dword ptr [esp + 0x5c], ecx
    L_007F5B73: mov ecx, dword ptr [esp + 0x40]
    L_007F5B77: mov dword ptr [esp + 0x14], ecx
    L_007F5B7B: mov ecx, dword ptr [esp + 0x10]
    L_007F5B7F: jmp L_007F5B83
    L_007F5B81: fstp st(0)
    L_007F5B83: mov ebx, dword ptr [esp + 0x5c]
    L_007F5B87: mov ebx, dword ptr [ebx - 0x4]
    L_007F5B8A: lea ebx, [ebx + 2*ebx]
    L_007F5B8D: mov dword ptr [esp + 0x10], ebx
    L_007F5B91: add ebx, edx
    L_007F5B93: fld dword ptr [ecx + 4*ebx]
    L_007F5B96: mov ebx, dword ptr [esp + 0x10]
    L_007F5B9A: fstp dword ptr [esp + 0x60]
    L_007F5B9E: add ebx, edi
    L_007F5BA0: fld dword ptr [ecx + 4*ebx]
    L_007F5BA3: mov ebx, dword ptr [esp + 0x5c]
    L_007F5BA7: fstp dword ptr [esp + 0x34]
    L_007F5BAB: mov ebx, dword ptr [ebx]
    L_007F5BAD: lea ebx, [ebx + 2*ebx]
    L_007F5BB0: mov dword ptr [esp + 0x10], ebx
    L_007F5BB4: add ebx, edx
    L_007F5BB6: fld dword ptr [ecx + 4*ebx]
    L_007F5BB9: mov ebx, dword ptr [esp + 0x10]
    L_007F5BBD: fstp dword ptr [esp + 0x3c]
    L_007F5BC1: add ebx, edi
    L_007F5BC3: fld dword ptr [ecx + 4*ebx]
    L_007F5BC6: fstp dword ptr [esp + 0x10]
    L_007F5BCA: fld dword ptr [esp + 0x3c]
    L_007F5BCE: fld st(0)
    L_007F5BD0: fld dword ptr [esp + 0x60]
    L_007F5BD4: fld st(0)
    L_007F5BD6: fsubp st(2), st
    L_007F5BD8: fxch st(1)
    L_007F5BDA: fstp dword ptr [esp + 0x40]
    L_007F5BDE: fld dword ptr [esp + 0x10]
    L_007F5BE2: fld st(0)
    L_007F5BE4: fld dword ptr [esp + 0x34]
    L_007F5BE8: fld st(0)
    L_007F5BEA: fsubp st(2), st
    L_007F5BEC: fxch st(1)
    L_007F5BEE: fstp dword ptr [esp + 0x3c]
    L_007F5BF2: fld st(2)
    L_007F5BF4: fmul st(0), st
    L_007F5BF6: fstp dword ptr [esp + 0x10]
    L_007F5BFA: fld dword ptr [esp + 0x10]
    L_007F5BFE: fld st(0)
    L_007F5C00: fmul st, st(4)
    L_007F5C02: fstp dword ptr [esp + 0x7c]
    L_007F5C06: fld st(1)
    L_007F5C08: fmul st(0), st
    L_007F5C0A: fstp dword ptr [esp + 0x54]
    L_007F5C0E: fld dword ptr [esp + 0x54]
    L_007F5C12: fmul st, st(2)
    L_007F5C14: fstp dword ptr [esp + 0x68]
    L_007F5C18: fld st(4)
    L_007F5C1A: fmul st(0), st
    L_007F5C1C: fstp dword ptr [esp + 0x8c]
    L_007F5C23: fld st(2)
    L_007F5C25: fmul st(0), st
    L_007F5C27: fstp dword ptr [esp + 0xa0]
    L_007F5C2E: fld dword ptr [esp + 0xa0]
    L_007F5C35: fmul st, st(3)
    L_007F5C37: fstp dword ptr [esp + 0x10]
    L_007F5C3B: fld st(4)
    L_007F5C3D: fadd st, st(4)
    L_007F5C3F: fstp dword ptr [esp + 0x90]
    L_007F5C46: fld dword ptr [esp + 0x90]
    L_007F5C4D: fmul st, st(5)
    L_007F5C4F: fadd st, st(1)
    L_007F5C51: fstp dword ptr [esp + 0x98]
    L_007F5C58: fld dword ptr [esp + 0x98]
    L_007F5C5F: fmul st, st(5)
    L_007F5C61: fadd dword ptr [esp + 0x7c]
    L_007F5C65: fstp dword ptr [esp + 0x28]
    L_007F5C69: fld st(2)
    L_007F5C6B: fadd st, st(2)
    L_007F5C6D: fmul st, st(3)
    L_007F5C6F: fadd dword ptr [esp + 0x54]
    L_007F5C73: fstp dword ptr [esp + 0x70]
    L_007F5C77: fld dword ptr [esp + 0x70]
    L_007F5C7B: fmul st, st(3)
    L_007F5C7D: fadd dword ptr [esp + 0x68]
    L_007F5C81: fstp dword ptr [esp + 0xc]
    L_007F5C85: fld st(4)
    L_007F5C87: fadd st(0), st
    L_007F5C89: fmul st, st(4)
    L_007F5C8B: fst qword ptr [esp + 0x60]
    L_007F5C8F: fld dword ptr [esp + 0x8c]
    L_007F5C96: fmul st, st(7)
    L_007F5C98: faddp st(1), st
    L_007F5C9A: fadd st, st(1)
    L_007F5C9C: fstp dword ptr [esp + 0x34]
    L_007F5CA0: fld dword ptr [esp + 0x8c]
    L_007F5CA7: fadd qword ptr [esp + 0x60]
    L_007F5CAB: fxch st(1)
    L_007F5CAD: fmulp st(6), st
    L_007F5CAF: faddp st(5), st
    L_007F5CB1: fxch st(4)
    L_007F5CB3: fstp dword ptr [esp + 0x60]
    L_007F5CB7: fld dword ptr [esp + 0x90]
    L_007F5CBE: fld dword ptr [esp + 0x3c]
    L_007F5CC2: fld st(0)
    L_007F5CC4: fmulp st(2), st
    L_007F5CC6: fld dword ptr [esp + 0x50]
    L_007F5CCA: faddp st(2), st
    L_007F5CCC: fxch st(1)
    L_007F5CCE: fstp dword ptr [esp + 0x50]
    L_007F5CD2: fld dword ptr [esp + 0x98]
    L_007F5CD9: fmul st, st(1)
    L_007F5CDB: fadd dword ptr [esp + 0x18]
    L_007F5CDF: fstp dword ptr [esp + 0x18]
    L_007F5CE3: fld dword ptr [esp + 0x28]
    L_007F5CE7: fld st(0)
    L_007F5CE9: fmul st, st(2)
    L_007F5CEB: fadd dword ptr [esp + 0x38]
    L_007F5CEF: fstp dword ptr [esp + 0x38]
    L_007F5CF3: fld dword ptr [esp + 0x7c]
    L_007F5CF7: fmul st, st(4)
    L_007F5CF9: fstp dword ptr [esp + 0x28]
    L_007F5CFD: fld st(4)
    L_007F5CFF: fmulp st(1), st
    L_007F5D01: fadd dword ptr [esp + 0x28]
    L_007F5D05: fstp dword ptr [esp + 0x28]
    L_007F5D09: fld dword ptr [esp + 0x28]
    L_007F5D0D: fmul st, st(1)
    L_007F5D0F: fadd dword ptr [esp + 0x4c]
    L_007F5D13: fstp dword ptr [esp + 0x4c]
    L_007F5D17: fld dword ptr [esp + 0x70]
    L_007F5D1B: fld dword ptr [esp + 0x40]
    L_007F5D1F: fld st(0)
    L_007F5D21: fmulp st(2), st
    L_007F5D23: fld dword ptr [esp + 0x30]
    L_007F5D27: faddp st(2), st
    L_007F5D29: fxch st(1)
    L_007F5D2B: fstp dword ptr [esp + 0x30]
    L_007F5D2F: fld dword ptr [esp + 0xc]
    L_007F5D33: fld st(0)
    L_007F5D35: fmulp st(2), st
    L_007F5D37: fld dword ptr [esp + 0x20]
    L_007F5D3B: faddp st(2), st
    L_007F5D3D: fxch st(1)
    L_007F5D3F: fstp dword ptr [esp + 0x20]
    L_007F5D43: fld dword ptr [esp + 0x68]
    L_007F5D47: fmul st, st(6)
    L_007F5D49: fstp dword ptr [esp + 0xc]
    L_007F5D4D: fld st(2)
    L_007F5D4F: fmulp st(1), st
    L_007F5D51: fadd dword ptr [esp + 0xc]
    L_007F5D55: fstp dword ptr [esp + 0xc]
    L_007F5D59: fld dword ptr [esp + 0xc]
    L_007F5D5D: fmul dword ptr [esp + 0x40]
    L_007F5D61: fadd dword ptr [esp + 0x24]
    L_007F5D65: fstp dword ptr [esp + 0x24]
    L_007F5D69: fld dword ptr [esp + 0x34]
    L_007F5D6D: fmul st, st(2)
    L_007F5D6F: fld dword ptr [esp + 0x60]
    L_007F5D73: fmul st, st(6)
    L_007F5D75: faddp st(1), st
    L_007F5D77: fmulp st(1), st
    L_007F5D79: fadd dword ptr [esp + 0x48]
    L_007F5D7D: fstp dword ptr [esp + 0x48]
    L_007F5D81: fld dword ptr [esp + 0x8c]
    L_007F5D88: fmul st, st(3)
    L_007F5D8A: fstp dword ptr [esp + 0xc]
    L_007F5D8E: fld dword ptr [esp + 0xc]
    L_007F5D92: fld qword ptr [mem_0093F7B0]
    L_007F5D98: fmul st(1), st
    L_007F5D9A: fld dword ptr [esp + 0x34]
    L_007F5D9E: add dword ptr [esp + 0x5c], 0x14
    L_007F5DA3: sub dword ptr [esp + 0x14], 0x1
    L_007F5DA8: fmul st, st(4)
    L_007F5DAA: faddp st(2), st
    L_007F5DAC: fxch st(1)
    L_007F5DAE: fstp dword ptr [esp + 0xc]
    L_007F5DB2: fld dword ptr [esp + 0xc]
    L_007F5DB6: fmul st, st(2)
    L_007F5DB8: fld dword ptr [esp + 0x60]
    L_007F5DBC: fmul st, st(5)
    L_007F5DBE: fld dword ptr [esp + 0x7c]
    L_007F5DC2: fmul st, st(3)
    L_007F5DC4: faddp st(1), st
    L_007F5DC6: fstp dword ptr [esp + 0xc]
    L_007F5DCA: fld dword ptr [esp + 0xc]
    L_007F5DCE: fmul st, st(6)
    L_007F5DD0: faddp st(1), st
    L_007F5DD2: fmul dword ptr [esp + 0x3c]
    L_007F5DD6: fadd dword ptr [esp + 0x1c]
    L_007F5DDA: fstp dword ptr [esp + 0x1c]
    L_007F5DDE: fld dword ptr [esp + 0xa0]
    L_007F5DE5: fld qword ptr [mem_00993840]
    L_007F5DEB: fmul st(1), st
    L_007F5DED: fld st(6)
    L_007F5DEF: fmulp st(2), st
    L_007F5DF1: fld dword ptr [esp + 0x10]
    L_007F5DF5: fmulp st(3), st
    L_007F5DF7: fxch st(1)
    L_007F5DF9: faddp st(2), st
    L_007F5DFB: fld st(2)
    L_007F5DFD: fadd st(0), st
    L_007F5DFF: fmul dword ptr [esp + 0x54]
    L_007F5E03: faddp st(2), st
    L_007F5E05: fld dword ptr [esp + 0x68]
    L_007F5E09: fld st(0)
    L_007F5E0B: faddp st(3), st
    L_007F5E0D: fxch st(2)
    L_007F5E0F: fstp dword ptr [esp + 0xc]
    L_007F5E13: fld dword ptr [esp + 0xc]
    L_007F5E17: fmulp st(5), st
    L_007F5E19: fld dword ptr [esp + 0xa0]
    L_007F5E20: fld qword ptr [mem_0092C510]
    L_007F5E26: fmul st(1), st
    L_007F5E28: fxch st(1)
    L_007F5E2A: fmulp st(7), st
    L_007F5E2C: fld dword ptr [esp + 0x10]
    L_007F5E30: faddp st(7), st
    L_007F5E32: fxch st(3)
    L_007F5E34: fmul st, st(1)
    L_007F5E36: fmul dword ptr [esp + 0x54]
    L_007F5E3A: faddp st(6), st
    L_007F5E3C: fxch st(1)
    L_007F5E3E: fmul qword ptr [mem_0093F7B0]
    L_007F5E44: faddp st(5), st
    L_007F5E46: fxch st(4)
    L_007F5E48: fstp dword ptr [esp + 0xc]
    L_007F5E4C: fld dword ptr [esp + 0xc]
    L_007F5E50: fmulp st(2), st
    L_007F5E52: fxch st(2)
    L_007F5E54: faddp st(1), st
    L_007F5E56: fmul dword ptr [esp + 0x40]
    L_007F5E5A: fadd dword ptr [esp + 0x2c]
    L_007F5E5E: fstp dword ptr [esp + 0x2c]
    L_007F5E62: jne L_007F5B81
    L_007F5E68: mov ebx, dword ptr [ebp + 0x8]
    L_007F5E6B: jmp L_007F5E73
    L_007F5E6D: fld qword ptr [mem_0092C510]
    L_007F5E73: fld dword ptr [esp + 0x50]
    L_007F5E77: fmul qword ptr [mem_00993828]
    L_007F5E7D: fstp dword ptr [esp + 0x50]
    L_007F5E81: fld dword ptr [esp + 0x18]
    L_007F5E85: fdiv qword ptr [mem_00999B40]
    L_007F5E8B: fstp dword ptr [esp + 0x18]
    L_007F5E8F: fld dword ptr [esp + 0x38]
    L_007F5E93: fdiv qword ptr [mem_009548E0]
    L_007F5E99: fstp dword ptr [esp + 0x38]
    L_007F5E9D: fld dword ptr [esp + 0x4c]
    L_007F5EA1: fdiv qword ptr [mem_00996628]
    L_007F5EA7: fstp dword ptr [esp + 0x4c]
    L_007F5EAB: fld dword ptr [esp + 0x30]
    L_007F5EAF: fdiv qword ptr [mem_0099EDD8]
    L_007F5EB5: fstp dword ptr [esp + 0x30]
    L_007F5EB9: fld dword ptr [esp + 0x20]
    L_007F5EBD: fdiv qword ptr [mem_0099EDD0]
    L_007F5EC3: fstp dword ptr [esp + 0x20]
    L_007F5EC7: fld dword ptr [esp + 0x24]
    L_007F5ECB: fdiv qword ptr [mem_0099EDC8]
    L_007F5ED1: fstp dword ptr [esp + 0x24]
    L_007F5ED5: fld dword ptr [esp + 0x48]
    L_007F5ED9: fdiv qword ptr [mem_0099EDC0]
    L_007F5EDF: fstp dword ptr [esp + 0x48]
    L_007F5EE3: fld dword ptr [esp + 0x1c]
    L_007F5EE7: fdiv qword ptr [mem_0099EDB8]
    L_007F5EED: fstp dword ptr [esp + 0x1c]
    L_007F5EF1: fld dword ptr [esp + 0x2c]
    L_007F5EF5: fdiv qword ptr [mem_0099EDB0]
    L_007F5EFB: fstp dword ptr [esp + 0x2c]
    L_007F5EFF: fld dword ptr [esi + 4*eax]
    L_007F5F02: fld1
    L_007F5F04: fdivrp st(1), st
    L_007F5F06: fstp dword ptr [esp + 0xc]
    L_007F5F0A: fld dword ptr [esp + 0xc]
    L_007F5F0E: fld st(0)
    L_007F5F10: fmul st(0), st
    L_007F5F12: fstp dword ptr [esp + 0x10]
    L_007F5F16: fld dword ptr [esp + 0x10]
    L_007F5F1A: fmul st, st(1)
    L_007F5F1C: fstp dword ptr [esp + 0x14]
    L_007F5F20: fld st(0)
    L_007F5F22: fld dword ptr [esp + 0x38]
    L_007F5F26: fld st(0)
    L_007F5F28: fmulp st(2), st
    L_007F5F2A: fxch st(1)
    L_007F5F2C: fstp dword ptr [esp + 0xc]
    L_007F5F30: fld st(1)
    L_007F5F32: fmul dword ptr [esp + 0x20]
    L_007F5F36: fstp dword ptr [esp + 0x28]
    L_007F5F3A: fld dword ptr [esi + 4*edx]
    L_007F5F3D: fmul st, st(3)
    L_007F5F3F: fmul dword ptr [esi + 4*edi]
    L_007F5F42: fst qword ptr [esp + 0x98]
    L_007F5F49: fld dword ptr [esi + 4*edx]
    L_007F5F4C: fmul st(0), st
    L_007F5F4E: fld dword ptr [esi + 4*edi]
    L_007F5F51: fmul st(0), st
    L_007F5F53: fst qword ptr [esp + 0xa0]
    L_007F5F5A: fxch st(3)
    L_007F5F5C: fmul st, st(1)
    L_007F5F5E: fld dword ptr [esp + 0x48]
    L_007F5F62: fmulp st(3), st
    L_007F5F64: faddp st(2), st
    L_007F5F66: fld dword ptr [esp + 0x20]
    L_007F5F6A: fmul st, st(3)
    L_007F5F6C: faddp st(2), st
    L_007F5F6E: fxch st(1)
    L_007F5F70: fstp qword ptr [esp + 0x70]
    L_007F5F74: fld dword ptr [esi + 4*edi]
    L_007F5F77: fmul dword ptr [esp + 0x30]
    L_007F5F7B: fld dword ptr [esi + 4*edx]
    L_007F5F7E: fmul dword ptr [esp + 0x18]
    L_007F5F82: faddp st(1), st
    L_007F5F84: fstp qword ptr [esp + 0x90]
    L_007F5F8B: fld dword ptr [esp + 0x50]
    L_007F5F8F: fld dword ptr [esp + 0x80]
    L_007F5F96: fld st(0)
    L_007F5F98: fmulp st(2), st
    L_007F5F9A: fxch st(1)
    L_007F5F9C: fst qword ptr [esp + 0x40]
    L_007F5FA0: fld qword ptr [esp + 0x90]
    L_007F5FA7: fmulp st(6), st
    L_007F5FA9: faddp st(5), st
    L_007F5FAB: fld st(0)
    L_007F5FAD: fmulp st(5), st
    L_007F5FAF: fxch st(4)
    L_007F5FB1: fadd qword ptr [esp + 0x70]
    L_007F5FB5: fmul dword ptr [esp + 0x14]
    L_007F5FB9: fstp dword ptr [esp + 0x3c]
    L_007F5FBD: fld st(2)
    L_007F5FBF: fld dword ptr [esp + 0x4c]
    L_007F5FC3: fld st(0)
    L_007F5FC5: fmulp st(2), st
    L_007F5FC7: fxch st(1)
    L_007F5FC9: fstp dword ptr [esp + 0x60]
    L_007F5FCD: fld st(3)
    L_007F5FCF: fmul dword ptr [esp + 0x24]
    L_007F5FD3: fstp dword ptr [esp + 0x34]
    L_007F5FD7: fxch st(4)
    L_007F5FD9: fst qword ptr [esp + 0x80]
    L_007F5FE0: fld dword ptr [esi + 4*edx]
    L_007F5FE3: fmul st, st(2)
    L_007F5FE5: fmulp st(5), st
    L_007F5FE7: fld st(1)
    L_007F5FE9: fmul st, st(6)
    L_007F5FEB: fmul dword ptr [esi + 4*edi]
    L_007F5FEE: fmul dword ptr [esp + 0x1c]
    L_007F5FF2: faddp st(5), st
    L_007F5FF4: fld dword ptr [esi + 4*edx]
    L_007F5FF7: fmul st, st(6)
    L_007F5FF9: fmul st, st(3)
    L_007F5FFB: fmul dword ptr [esp + 0x2c]
    L_007F5FFF: faddp st(5), st
    L_007F6001: fld dword ptr [esi + 4*edi]
    L_007F6004: fmulp st(3), st
    L_007F6006: fld dword ptr [esp + 0x24]
    L_007F600A: fmulp st(3), st
    L_007F600C: fxch st(4)
    L_007F600E: faddp st(2), st
    L_007F6010: fld st(3)
    L_007F6012: fmul st, st(5)
    L_007F6014: fmul qword ptr [esp + 0x70]
    L_007F6018: faddp st(2), st
    L_007F601A: fld qword ptr [esp + 0x90]
    L_007F6021: fmul st, st(5)
    L_007F6023: fadd qword ptr [esp + 0x40]
    L_007F6027: fld qword ptr [esp + 0x80]
    L_007F602E: fmul st(0), st
    L_007F6030: fmulp st(1), st
    L_007F6032: faddp st(2), st
    L_007F6034: fld dword ptr [esp + 0x14]
    L_007F6038: fld st(0)
    L_007F603A: fmul st, st(4)
    L_007F603C: fstp dword ptr [esp + 0x80]
    L_007F6043: fld dword ptr [esp + 0x80]
    L_007F604A: fchs
    L_007F604C: fmulp st(3), st
    L_007F604E: fxch st(2)
    L_007F6050: fstp dword ptr [esp + 0x80]
    L_007F6057: fld st(2)
    L_007F6059: fmul dword ptr [esp + 0x1c]
    L_007F605D: fstp dword ptr [esp + 0x70]
    L_007F6061: fld dword ptr [esp + 0x10]
    L_007F6065: fchs
    L_007F6067: fstp dword ptr [esp + 0x14]
    L_007F606B: fld dword ptr [esi + 4*edi]
    L_007F606E: fmul dword ptr [esp + 0x24]
    L_007F6072: fld dword ptr [esi + 4*edx]
    L_007F6075: fmul dword ptr [esp + 0x2c]
    L_007F6079: faddp st(1), st
    L_007F607B: fld dword ptr [esp + 0x20]
    L_007F607F: fmul st, st(5)
    L_007F6081: faddp st(1), st
    L_007F6083: fmul dword ptr [esp + 0x14]
    L_007F6087: fstp dword ptr [esp + 0x10]
    L_007F608B: fld dword ptr [esi + 4*edi]
    L_007F608E: fmul dword ptr [esp + 0x48]
    L_007F6092: fld dword ptr [esi + 4*edx]
    L_007F6095: fmul dword ptr [esp + 0x38]
    L_007F6099: faddp st(1), st
    L_007F609B: fadd st(0), st
    L_007F609D: test edx, edx
    L_007F609F: fld dword ptr [esp + 0x18]
    L_007F60A3: fmul st, st(5)
    L_007F60A5: faddp st(1), st
    L_007F60A7: fmulp st(4), st
    L_007F60A9: fmul dword ptr [esp + 0x4c]
    L_007F60AD: fld dword ptr [esp + 0x1c]
    L_007F60B1: fmul qword ptr [esp + 0x98]
    L_007F60B8: faddp st(1), st
    L_007F60BA: fld dword ptr [esp + 0x2c]
    L_007F60BE: fmul qword ptr [esp + 0xa0]
    L_007F60C5: faddp st(1), st
    L_007F60C7: faddp st(3), st
    L_007F60C9: fmulp st(2), st
    L_007F60CB: fxch st(1)
    L_007F60CD: fstp dword ptr [esp + 0x98]
    L_007F60D4: jne L_007F60DC
    L_007F60D6: fmul dword ptr [esp + 0x18]
    L_007F60DA: jmp L_007F60F7
    L_007F60DC: test edi, edi
    L_007F60DE: jne L_007F60E6
    L_007F60E0: fmul dword ptr [esp + 0x30]
    L_007F60E4: jmp L_007F60F7
    L_007F60E6: fstp st(0)
    L_007F60E8: fld qword ptr [esp + 0x40]
    L_007F60EC: fadd qword ptr [esp + 0x90]
    L_007F60F3: fmul dword ptr [esp + 0x14]
    L_007F60F7: fstp dword ptr [esp + 0x40]
    L_007F60FB: mov ecx, dword ptr [ebp + 0xc]
    L_007F60FE: fld dword ptr [esp + 0x40]
    L_007F6102: add dword ptr [esp + 0x6c], 0xc
    L_007F6107: fmul dword ptr [esi]
    L_007F6109: fadd dword ptr [esp + 0x78]
    L_007F610D: fstp dword ptr [esp + 0x78]
    L_007F6111: fld dword ptr [esi + 4*edx]
    L_007F6114: fmul dword ptr [esp + 0xc]
    L_007F6118: fadd dword ptr [ecx + 4*edx]
    L_007F611B: fstp dword ptr [ecx + 4*edx]
    L_007F611E: fld dword ptr [esi + 4*edi]
    L_007F6121: fmul dword ptr [esp + 0x28]
    L_007F6125: fadd dword ptr [ecx + 4*edi]
    L_007F6128: fstp dword ptr [ecx + 4*edi]
    L_007F612B: fld dword ptr [esp + 0x3c]
    L_007F612F: fmul dword ptr [esi + 4*eax]
    L_007F6132: fadd dword ptr [ecx + 4*eax]
    L_007F6135: fstp dword ptr [ecx + 4*eax]
    L_007F6138: mov ecx, dword ptr [ebp + 0x10]
    L_007F613B: fld dword ptr [esp + 0x60]
    L_007F613F: fmul dword ptr [esi + 4*edx]
    L_007F6142: fadd dword ptr [ecx + 4*edx]
    L_007F6145: fstp dword ptr [ecx + 4*edx]
    L_007F6148: fld dword ptr [esi + 4*edi]
    L_007F614B: fmul dword ptr [esp + 0x34]
    L_007F614F: fadd dword ptr [ecx + 4*edi]
    L_007F6152: fstp dword ptr [ecx + 4*edi]
    L_007F6155: fld dword ptr [esp + 0x80]
    L_007F615C: fmul dword ptr [esi + 4*eax]
    L_007F615F: fadd dword ptr [ecx + 4*eax]
    L_007F6162: fstp dword ptr [ecx + 4*eax]
    L_007F6165: mov ecx, dword ptr [ebp + 0x14]
    L_007F6168: fld dword ptr [esp + 0x70]
    L_007F616C: fmul dword ptr [esi + 4*edx]
    L_007F616F: fadd dword ptr [ecx + 4*edx]
    L_007F6172: fstp dword ptr [ecx + 4*edx]
    L_007F6175: fld dword ptr [esi + 4*edi]
    L_007F6178: fmul dword ptr [esp + 0x10]
    L_007F617C: fadd dword ptr [ecx + 4*edi]
    L_007F617F: fstp dword ptr [ecx + 4*edi]
    L_007F6182: fld dword ptr [esp + 0x98]
    L_007F6189: fmul dword ptr [esi + 4*eax]
    L_007F618C: fadd dword ptr [ecx + 4*eax]
    L_007F618F: fstp dword ptr [ecx + 4*eax]
    L_007F6192: mov eax, dword ptr [esp + 0x58]
    L_007F6196: add eax, 0x1
    L_007F6199: cmp eax, dword ptr [ebx + 0x1c]
    L_007F619C: mov dword ptr [esp + 0x58], eax
    L_007F61A0: jl L_007F5AA0
    L_007F61A6: fld qword ptr [mem_00993828]
    L_007F61AC: mov edx, dword ptr [ebp + 0xc]
    L_007F61AF: mov eax, ecx
    L_007F61B1: mov ecx, dword ptr [ebp + 0x10]
    L_007F61B4: fld dword ptr [edx]
    L_007F61B6: pop edi
    L_007F61B7: fmul st, st(1)
    L_007F61B9: pop esi
    L_007F61BA: pop ebx
    L_007F61BB: fstp dword ptr [edx]
    L_007F61BD: fld dword ptr [edx + 0x4]
    L_007F61C0: fmul st, st(1)
    L_007F61C2: fstp dword ptr [edx + 0x4]
    L_007F61C5: fld dword ptr [edx + 0x8]
    L_007F61C8: fmul st, st(1)
    L_007F61CA: fstp dword ptr [edx + 0x8]
    L_007F61CD: fld dword ptr [ecx]
    L_007F61CF: fdiv st, st(2)
    L_007F61D1: fstp dword ptr [ecx]
    L_007F61D3: fld dword ptr [ecx + 0x4]
    L_007F61D6: fdiv st, st(2)
    L_007F61D8: fstp dword ptr [ecx + 0x4]
    L_007F61DB: fld dword ptr [ecx + 0x8]
    L_007F61DE: fdivrp st(2), st
    L_007F61E0: fxch st(1)
    L_007F61E2: fstp dword ptr [ecx + 0x8]
    L_007F61E5: fld dword ptr [eax]
    L_007F61E7: fmul st, st(1)
    L_007F61E9: fstp dword ptr [eax]
    L_007F61EB: fld dword ptr [eax + 0x4]
    L_007F61EE: fmul st, st(1)
    L_007F61F0: fstp dword ptr [eax + 0x4]
    L_007F61F3: fmul dword ptr [eax + 0x8]
    L_007F61F6: fstp dword ptr [eax + 0x8]
    L_007F61F9: fld dword ptr [esp + 0x6c]
    L_007F61FD: mov esp, ebp
    L_007F61FF: pop ebp
    L_007F6200: ret
    }
}

// [0x007F0370] sub_007F0370 (942 bytes)
extern "C" void ext_007D95F0();
extern "C" void ext_007D9610();
extern "C" void ext_008023C0();
extern "C" void ext_00802600();
extern "C" int mem_0099ECE4;
extern "C" int mem_0099ED0C;

extern "C" __declspec(naked) void __cdecl fn_007F0370() {
    __asm {
        sub esp, 0xc4
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xd4]
        mov ebp, dword ptr [esi + 0x8]
        cmp ebp, dword ptr [esi]
        push edi
        jge L_007F0472
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_007F0390:
        mov eax, dword ptr [esi + 0xf4]
        mov eax, dword ptr [eax + 0x7c]
        mov ecx, dword ptr [eax + 4*ebp]
        test ecx, ecx
        je L_007F0467
        mov eax, ecx
        and eax, 0x80000003
        jns L_007F03B2
        dec eax
        or eax, -0x4
        inc eax
    L_007F03B2:
        mov ebx, ecx
        je L_007F03BB
        sub ebx, eax
        add ebx, 0x4
    L_007F03BB:
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax + 2*eax]
        add edx, edx
        add edx, edx
        mov eax, ecx
        sub eax, edx
        je L_007F03DD
        sub ecx, eax
        add ecx, 0xc
    L_007F03DD:
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        mov ecx, eax
        mov eax, dword ptr [esi + 0x10]
        lea edi, [eax + 4*ebp]
        mov eax, dword ptr [edi]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, eax
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        lea edx, [eax + 2*eax]
        shl edx, 0x6
        add dword ptr [esi + 0x134], edx
        mov eax, dword ptr [edi]
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        lea eax, [eax + 2*eax]
        shl eax, 0x6
        add dword ptr [esi + 0x138], eax
        mov eax, ebx
        cdq
        and edx, 0x3
        add eax, edx
        sar ecx, 0x2
        sar eax, 0x2
        shl eax, 0x4
        add dword ptr [esi + 0x13c], eax
        add dword ptr [esi + 0x154], eax
        add dword ptr [esi + 0x160], eax
        add dword ptr [esi + 0x16c], eax
        __asm _emit 0x8d __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add dword ptr [esi + 0x12c], edx
        shl ecx, 0x5
        add dword ptr [esi + 0x130], ecx
        add dword ptr [esi + 0xc4], eax
    L_007F0467:
        add ebp, 0x1
        cmp ebp, dword ptr [esi]
        jl L_007F0390
    L_007F0472:
        mov edi, dword ptr [esi]
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0xc8], 0x0
        mov dword ptr [esp + 0x10], edi
        jge L_007F070D
        jmp L_007F0490
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
    L_007F0490:
        mov eax, dword ptr [esi + 0xe8]
        mov dword ptr [eax + 4*edi], 0x0
        mov ecx, dword ptr [esi + 0xf4]
        mov edx, dword ptr [ecx + 0x7c]
        cmp dword ptr [edx + 4*edi], 0x0
        je L_007F06EC
        mov eax, dword ptr [esi + 0xc]
        push eax
        call ext_007D95F0
        mov ecx, dword ptr [esi + 0xf4]
        mov edx, dword ptr [ecx + 0x7c]
        mov ecx, dword ptr [edx + 4*edi]
        mov eax, ecx
        add esp, 0x4
        and eax, 0x80000003
        mov dword ptr [esp + 0x14], ecx
        jns L_007F04DA
        dec eax
        or eax, -0x4
        inc eax
    L_007F04DA:
        mov ebp, ecx
        je L_007F04E3
        sub ebp, eax
        add ebp, 0x4
    L_007F04E3:
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax + 2*eax]
        add edx, edx
        add edx, edx
        mov eax, ecx
        sub eax, edx
        mov edi, ecx
        je L_007F0507
        sub edi, eax
        add edi, 0xc
    L_007F0507:
        mov eax, ebp
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        mov dword ptr [esp + 0x18], eax
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        mov ebx, eax
        mov eax, dword ptr [esi + 0x11c]
        sar ebx, 0x2
        mov dword ptr [esp + 0x1c], offset mem_0099ECE4
        mov dword ptr [esp + 0x50], offset mem_0099ED0C
        cmp dword ptr [eax + 0x30], 0x2
        lea edi, [esp + 0x50]
        je L_007F0547
        lea edi, [esp + 0x1c]
    L_007F0547:
        mov eax, dword ptr [esp + 0xdc]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx]
        push eax
        mov eax, dword ptr [esi + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esp + 0xdc]
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 0x90]
        call ext_00802600
        mov eax, dword ptr [esi + 0x11c]
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x130]
        fld1
        mov edx, dword ptr [edi]
        fdivrp st(1), st
        mov edx, dword ptr [edx + 0x4]
        sub esp, 0x8
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp]
        mov eax, dword ptr [esi + 0x16c]
        push eax
        mov eax, dword ptr [esi + 0x12c]
        push ecx
        mov ecx, dword ptr [esi + 0x138]
        push eax
        mov eax, dword ptr [esi + 0x134]
        push ecx
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esp + 0xdc]
        mov eax, dword ptr [esi + 0x11c]
        fld dword ptr [eax + 0x24]
        mov edx, dword ptr [eax + 0x30]
        mov eax, dword ptr [eax + 0xc]
        push ecx
        push ecx
        mov ecx, dword ptr [esi + 0x160]
        fstp dword ptr [esp]
        push edx
        mov edx, dword ptr [esi + 0x154]
        push eax
        mov eax, dword ptr [esi + 0x13c]
        push ecx
        push edx
        push eax
        push edi
        lea ecx, [esp + 0xa4]
        call ext_008023C0
        xor ecx, ecx
        test ebp, ebp
        je L_007F0657
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
    L_007F0620:
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        mov edx, ecx
        sar eax, 0x2
        and edx, 0x80000003
        jns L_007F063A
        dec edx
        or edx, -0x4
        inc edx
    L_007F063A:
        mov edi, dword ptr [esp + 0xb4]
        fld dword ptr [edi + 4*ecx]
        lea eax, [edx + 4*eax]
        mov edx, dword ptr [esi + 0xc4]
        add ecx, 0x1
        fstp dword ptr [edx + 4*eax]
        cmp ecx, ebp
        jne L_007F0620
    L_007F0657:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esp + 0x10]
        add dword ptr [esi + 0xc8], ebp
        lea ecx, [eax + 4*ecx]
        mov eax, dword ptr [ecx]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, eax
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        lea edx, [eax + 2*eax]
        shl edx, 0x6
        add dword ptr [esi + 0x134], edx
        mov eax, dword ptr [ecx]
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        lea eax, [eax + 2*eax]
        shl eax, 0x6
        add dword ptr [esi + 0x138], eax
        mov eax, dword ptr [esp + 0x18]
        mov ecx, eax
        shl eax, 0x4
        add dword ptr [esi + 0x154], eax
        add dword ptr [esi + 0x160], eax
        add dword ptr [esi + 0x16c], eax
        add dword ptr [esi + 0xc4], eax
        mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8d __asm _emit 0x14 __asm _emit 0x9d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add dword ptr [esi + 0x12c], edx
        shl ecx, 0x4
        add dword ptr [esi + 0x13c], ecx
        shl ebx, 0x5
        add dword ptr [esi + 0x130], ebx
        push eax
        call ext_007D9610
        mov edi, dword ptr [esp + 0x14]
        add esp, 0x4
    L_007F06EC:
        add edi, 0x1
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x10], edi
        jl L_007F0490
        mov ecx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [esi + 0x8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc4
        ret
    L_007F070D:
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [esi + 0x8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc4
        ret
    }
}

// [0x007F6210] sub_007F6210 (436 bytes)
extern "C" void ext_007F5A40();
extern "C" __declspec(naked) void __fastcall fn_007F6210(void* self) {
    __asm {
        sub esp, 0x24
        lea eax, [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x8]
        push edx
        add eax, 0x10
        push eax
        call ext_007F5A40
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x44]
        fst dword ptr [ecx]
        mov eax, dword ptr [esp + 0x3c]
        fld1
        mov ecx, dword ptr [esp + 0x40]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x38]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x14]
        fmul st, st(1)
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x18]
        fmul st, st(1)
        fstp dword ptr [eax + 0x38]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fld dword ptr [esp + 0x20]
        fld st(0)
        faddp st(2), st
        fld st(3)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fst dword ptr [ecx]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        faddp st(4), st
        fld st(4)
        fmulp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fst dword ptr [ecx + 0x10]
        fxch st(3)
        faddp st(2), st
        fld st(3)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [ecx + 0x20]
        fxch st(2)
        fchs
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fst dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0x4]
        fld st(1)
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fst dword ptr [ecx + 0x1c]
        fst dword ptr [ecx + 0x14]
        fld dword ptr [esp + 0x30]
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fst dword ptr [ecx + 0x8]
        fst dword ptr [ecx + 0x18]
        fld dword ptr [eax + 0x38]
        fld dword ptr [eax + 0x34]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fsubp st(5), st
        fxch st(4)
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x38]
        fld dword ptr [eax + 0x30]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x34]
        fld dword ptr [eax + 0x30]
        fld st(0)
        fmulp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fsubr dword ptr [esp + 0x38]
        fstp dword ptr [ecx + 0x20]
        fld dword ptr [eax + 0x30]
        fmul dword ptr [eax + 0x34]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fst dword ptr [ecx + 0xc]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x38]
        fmul dword ptr [eax + 0x34]
        faddp st(1), st
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fst dword ptr [ecx + 0x1c]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x30]
        fmul dword ptr [eax + 0x38]
        xor ax, ax
        faddp st(1), st
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fst dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x18]
        add esp, 0x34
        ret
    }
}

// [0x007F88F0] sub_007F88F0 (5100 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F88F0(void* self) {
    __asm {
        sub esp, 0x98
        mov eax, dword ptr [esp + 0xb0]
        fld dword ptr [eax]
        mov edx, dword ptr [esp + 0xac]
        mov ecx, dword ptr [esp + 0xa0]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xac]
        fsub dword ptr [esi]
        mov ebx, dword ptr [esp + 0xc0]
        push edi
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x8]
        fsub dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [edx + 0x30]
        fsub dword ptr [ecx + 0x30]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edx + 0x34]
        fsub dword ptr [ecx + 0x34]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edx + 0x38]
        fsub dword ptr [ecx + 0x38]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x50]
        fld dword ptr [esp + 0xc0]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x20]
        fld st(0)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x80]
        fld dword ptr [esp + 0x54]
        fmul st, st(1)
        fld dword ptr [esp + 0x24]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x84]
        fld dword ptr [esp + 0x58]
        fmulp st(2), st
        fld dword ptr [esp + 0x28]
        fld st(0)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x88]
        fldz
        fstp dword ptr [ebx]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [edx]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [edx + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx + 0x14]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [ecx]
        fmul dword ptr [edx + 0x10]
        faddp st(1), st
        fld dword ptr [edx + 0x18]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x60]
        fld dword ptr [edx + 0x24]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [edx + 0x20]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [edx + 0x28]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x64]
        fld st(2)
        fmul dword ptr [ecx]
        fld st(1)
        fmul dword ptr [ecx + 0x4]
        mov esi, dword ptr [esp + 0xb4]
        mov edi, dword ptr [esp + 0xa8]
        faddp st(1), st
        fld st(2)
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x84]
        fld st(0)
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x80]
        fld st(0)
        fmul dword ptr [ecx]
        faddp st(2), st
        fld dword ptr [esp + 0x88]
        fmul dword ptr [ecx + 0x8]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x5c]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x60]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x64]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x30]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x2c]
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [esp + 0x8c]
        fadd dword ptr [edi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_007F8B0B
        fld dword ptr [esp + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F8ADB
    L_007F8AC3:
        fstp st(0)
        pop edi
        fstp st(4)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        fstp st(0)
        add esp, 0x98
        ret
    L_007F8ADB:
        fld dword ptr [esp + 0x20]
        fld st(0)
        fsubp st(2), st
        fld dword ptr [esp + 0xc0]
    L_007F8AEA:
        fmulp st(2), st
        fsubr dword ptr [esp + 0x14]
        fdivp st(1), st
        fstp dword ptr [esp + 0xc]
        fldz
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_007F8B48
        fstp dword ptr [ebx]
        jmp L_007F8B4A
    L_007F8B0B:
        fld st(0)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_007F8B48
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_007F8AC3
        fld dword ptr [esp + 0x20]
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        jmp L_007F8AEA
    L_007F8B48:
        fstp st(0)
    L_007F8B4A:
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx + 0x14]
        fld dword ptr [edx]
        fmul dword ptr [ecx + 0x10]
        faddp st(1), st
        fld dword ptr [edx + 0x8]
        fmul dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [edx + 0x14]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [edx + 0x10]
        faddp st(1), st
        fld dword ptr [edx + 0x18]
        fmul dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [edx + 0x20]
        fld dword ptr [edx + 0x24]
        fmul dword ptr [ecx + 0x14]
        faddp st(1), st
        fld dword ptr [edx + 0x28]
        fmul dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x70]
        fld st(4)
        fmul dword ptr [ecx + 0x10]
        fld st(3)
        fmul dword ptr [ecx + 0x14]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ecx + 0x14]
        fmul st, st(2)
        fld dword ptr [ecx + 0x10]
        fmul st, st(2)
        faddp st(1), st
        fld dword ptr [esp + 0x88]
        fmul dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x68]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x6c]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x70]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x3c]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x38]
        faddp st(1), st
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x40]
        faddp st(1), st
        fstp dword ptr [esp + 0x90]
        fld dword ptr [edi + 0x4]
        fadd dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8C7F
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F8AC3
        fld dword ptr [esp + 0x10]
        fsub st, st(1)
        fmul dword ptr [esp + 0xc0]
        fld dword ptr [esp + 0x18]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8CDB
        fstp dword ptr [ebx]
        jmp L_007F8CDD
    L_007F8C7F:
        fld dword ptr [esp + 0x10]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F8CDB
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_007F8AC3
        fld st(0)
        fadd dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(1), st
        fld dword ptr [esp + 0x18]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8CDB
        fstp dword ptr [ebx]
        jmp L_007F8CDD
    L_007F8CDB:
        fstp st(0)
    L_007F8CDD:
        fld dword ptr [edx]
        fmul dword ptr [ecx + 0x20]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx + 0x24]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x74]
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [edx + 0x10]
        fld dword ptr [edx + 0x14]
        fmul dword ptr [ecx + 0x24]
        faddp st(1), st
        fld dword ptr [edx + 0x18]
        fmul dword ptr [ecx + 0x28]
        faddp st(1), st
        fstp dword ptr [esp + 0x78]
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [edx + 0x20]
        fld dword ptr [edx + 0x24]
        fmul dword ptr [ecx + 0x24]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [edx + 0x28]
        faddp st(1), st
        fstp dword ptr [esp + 0x7c]
        fld st(2)
        fmul dword ptr [ecx + 0x24]
        fld st(5)
        fmul dword ptr [ecx + 0x20]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [ecx + 0x28]
        faddp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ecx + 0x20]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr [ecx + 0x24]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [esp + 0x88]
        faddp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x74]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x78]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x7c]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x44]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fadd dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8E0C
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F8AC3
        fld dword ptr [esp + 0x10]
        fsub st, st(1)
        fmul dword ptr [esp + 0xc0]
        fld dword ptr [esp + 0x1c]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8E68
        fstp dword ptr [ebx]
        jmp L_007F8E6A
    L_007F8E0C:
        fld dword ptr [esp + 0x10]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F8E68
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_007F8AC3
        fld st(0)
        fadd dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(1), st
        fld dword ptr [esp + 0x1c]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8E68
        fstp dword ptr [ebx]
        jmp L_007F8E6A
    L_007F8E68:
        fstp st(0)
    L_007F8E6A:
        fld st(2)
        fmul dword ptr [edx + 0x4]
        fld st(5)
        fmul dword ptr [edx]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [edx]
        fmul st, st(1)
        fld dword ptr [edx + 0x4]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [edx + 0x8]
        fmul dword ptr [esp + 0x88]
        faddp st(1), st
        fstp dword ptr [esp + 0x50]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [edi]
        faddp st(1), st
        fld dword ptr [esp + 0x44]
        fmul dword ptr [edi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x98]
        fld dword ptr [esi]
        fadd dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8F1F
        fld dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F8AC3
        fld dword ptr [esp + 0x10]
        fsub st, st(1)
        fmul dword ptr [esp + 0xc0]
    L_007F8F00:
        fld dword ptr [esp + 0x50]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8F5E
        fstp dword ptr [ebx]
        jmp L_007F8F60
    L_007F8F1F:
        fld dword ptr [esp + 0x10]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F8F5E
        fld dword ptr [esp + 0x50]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_007F8AC3
        fld st(0)
        fadd dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(1), st
        jmp L_007F8F00
    L_007F8F5E:
        fstp st(0)
    L_007F8F60:
        fld st(4)
        fmul dword ptr [edx + 0x10]
        fld st(3)
        fmul dword ptr [edx + 0x14]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [edx + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x90]
        fld st(1)
        fmul dword ptr [edx + 0x14]
        fld st(1)
        fmul dword ptr [edx + 0x10]
        faddp st(1), st
        fld dword ptr [edx + 0x18]
        fmul dword ptr [esp + 0x88]
        faddp st(1), st
        fstp dword ptr [esp + 0x54]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [edi]
        faddp st(1), st
        fld dword ptr [esp + 0x48]
        fmul dword ptr [edi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x9c]
        fadd dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x90]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9018
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_007F8AC3
        fld dword ptr [esp + 0x10]
        fsub st, st(1)
        fmul dword ptr [esp + 0xc0]
        fld dword ptr [esp + 0x54]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9074
        fstp dword ptr [ebx]
        jmp L_007F9076
    L_007F9018:
        fld dword ptr [esp + 0x10]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9074
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_007F8AC3
        fld st(0)
        fadd dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(1), st
        fld dword ptr [esp + 0x54]
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9074
        fstp dword ptr [ebx]
        jmp L_007F9076
    L_007F9074:
        fstp st(0)
    L_007F9076:
        fld dword ptr [edx + 0x24]
        fmulp st(3), st
        fld dword ptr [edx + 0x20]
        fmulp st(5), st
        fxch st(2)
        faddp st(4), st
        fld dword ptr [edx + 0x28]
        fmulp st(3), st
        fxch st(3)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x94]
        fld dword ptr [edx + 0x24]
        fmulp st(2), st
        fmul dword ptr [edx + 0x20]
        faddp st(1), st
        fld dword ptr [esp + 0x88]
        fmul dword ptr [edx + 0x28]
        faddp st(1), st
        fstp dword ptr [esp + 0x58]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x34]
        fld st(0)
        fmul dword ptr [edi]
        faddp st(2), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [edi + 0x8]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fadd dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9140
        fld dword ptr [esp + 0x58]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9110
    L_007F90FC:
        fstp st(2)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        xor eax, eax
        fstp st(0)
        pop ebx
        add esp, 0x98
        ret
    L_007F9110:
        fld st(2)
        fsubp st(2), st
        fld dword ptr [esp + 0xc0]
        fld st(0)
        fmulp st(3), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(1)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F91A5
        fstp dword ptr [ebx]
        jmp L_007F91A7
    L_007F9140:
        fld st(0)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_007F9196
        fld dword ptr [esp + 0x58]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_007F90FC
        fld st(2)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fld st(0)
        fchs
        fmulp st(3), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(1)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F91A5
        fstp dword ptr [ebx]
        jmp L_007F91A7
    L_007F9196:
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 0xc0]
        jmp L_007F91A7
    L_007F91A5:
        fstp st(0)
    L_007F91A7:
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x68]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x74]
        fld st(0)
        fmul dword ptr [esp + 0x24]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fmul dword ptr [edi + 0x4]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x38]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul st, st(5)
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x30]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F926E
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(4), st
        fld dword ptr [esp + 0x18]
        fmulp st(5), st
        fxch st(3)
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        test ah, 0x41
        jne L_007F9245
        fstp st(1)
        pop edi
        fstp st(2)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop ebx
        fstp st(1)
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9245:
        fld st(1)
        fsubp st(4), st
        fld st(4)
        fmulp st(4), st
    L_007F924D:
        fsubrp st(1), st
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F92EA
        fstp dword ptr [ebx]
        jmp L_007F92EC
    L_007F926E:
        fstp st(3)
        fld st(2)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F92DC
        fstp st(4)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(3), st
        fld dword ptr [esp + 0x74]
        fmul dword ptr [esp + 0x18]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(4)
        fnstsw ax
        fstp st(4)
        test ah, 0x5
        jp L_007F92C4
    L_007F92AE:
        fstp st(0)
        pop edi
        fstp st(1)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F92C4:
        fld st(0)
        faddp st(3), st
        fld dword ptr [esp + 0xc0]
        fld st(0)
        fchs
        fmulp st(4), st
        fxch st(4)
        jmp L_007F924D
    L_007F92DC:
        fstp st(1)
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 0x1c]
        jmp L_007F92EC
    L_007F92EA:
        fstp st(0)
    L_007F92EC:
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x6c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x78]
        fld st(0)
        fmul dword ptr [esp + 0x24]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [edi + 0x4]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x3c]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x2c]
        fld dword ptr [esi]
        fmulp st(7), st
        faddp st(6), st
        fxch st(5)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        faddp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F93B5
        fld st(3)
        fmulp st(6), st
        fld dword ptr [esp + 0x18]
        fmulp st(3), st
        fxch st(5)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(4)
        fnstsw ax
        test ah, 0x41
        jne L_007F9389
        fstp st(1)
        pop edi
        fstp st(3)
        pop esi
        fstp st(2)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9389:
        fld st(1)
        fsubp st(5), st
        fld st(3)
        fmulp st(5), st
        fsubrp st(1), st
        fdivp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F94F5
        fstp dword ptr [ebx]
        jmp L_007F943B
    L_007F93B5:
        fstp st(4)
        fld st(3)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F94DF
        fld st(3)
        fmulp st(6), st
        fld dword ptr [esp + 0x18]
        fmulp st(3), st
        fxch st(5)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(4)
        fnstsw ax
        fstp st(4)
        test ah, 0x5
        jp L_007F9407
        fstp st(0)
    L_007F93F5:
        fstp st(1)
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        xor eax, eax
        pop ebx
        add esp, 0x98
        ret
    L_007F9407:
        fld st(0)
        faddp st(3), st
        fld dword ptr [esp + 0xc0]
        fld st(0)
        fchs
        fmulp st(4), st
        fxch st(4)
        fsubrp st(1), st
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F94D8
        fstp dword ptr [ebx]
    L_007F9439:
        fxch st(1)
    L_007F943B:
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x70]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x7c]
        fld st(0)
        fmul dword ptr [esp + 0x24]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [edi + 0x4]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x40]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x2c]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x30]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9521
        fld st(5)
        fmulp st(3), st
        fld st(3)
        fmul dword ptr [esp + 0x18]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_007F94FC
        fstp st(1)
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        xor eax, eax
        fstp st(2)
        pop ebx
        fstp st(1)
        fstp st(0)
        add esp, 0x98
        ret
    L_007F94D8:
        fstp st(0)
        jmp L_007F9439
    L_007F94DF:
        fstp st(1)
        fstp st(3)
        fstp st(3)
        fstp st(1)
        fstp st(1)
        fld dword ptr [esp + 0xc0]
        jmp L_007F943B
    L_007F94F5:
        fstp st(0)
        jmp L_007F943B
    L_007F94FC:
        fld st(1)
        fsubp st(3), st
        fxch st(2)
        fmulp st(4), st
    L_007F9504:
        fsubp st(1), st
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F958A
        fstp dword ptr [ebx]
        jmp L_007F958C
    L_007F9521:
        fstp st(4)
        fld st(3)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9580
        fld st(5)
        fmulp st(3), st
        fld st(3)
        fmul dword ptr [esp + 0x18]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 0x5
        jp L_007F956F
        fstp st(0)
        pop edi
        fstp st(2)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F956F:
        fld st(0)
        faddp st(4), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(4), st
        jmp L_007F9504
    L_007F9580:
        fstp st(1)
        fstp st(3)
        fstp st(0)
        fstp st(1)
        jmp L_007F958C
    L_007F958A:
        fstp st(0)
    L_007F958C:
        fld dword ptr [esp + 0x74]
        fld st(0)
        fmul dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x5c]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fmul dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x2c]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x3c]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9658
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(5), st
        fld st(6)
        fmulp st(4), st
        fxch st(4)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_007F9629
    L_007F9611:
        fstp st(1)
        pop edi
        fstp st(1)
        pop esi
        fstp st(0)
        xor eax, eax
        fstp st(0)
        pop ebx
        fstp st(1)
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9629:
        fld st(1)
        fsubp st(3), st
        fld dword ptr [esp + 0xc0]
        fmulp st(3), st
        fsubrp st(1), st
        fdivp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F97A1
        fstp dword ptr [ebx]
        jmp L_007F96D8
    L_007F9658:
        fstp st(3)
        fld st(2)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9789
        fstp st(4)
        fld dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fld st(6)
        fmulp st(4), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(4)
        fnstsw ax
        fstp st(4)
        test ah, 0x5
        jnp L_007F92AE
        fld st(0)
        faddp st(3), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(3), st
        fsubp st(3), st
        fxch st(1)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F979A
        fstp dword ptr [ebx]
    L_007F96D2:
        fld dword ptr [esp + 0x7c]
        fxch st(1)
    L_007F96D8:
        fld dword ptr [esp + 0x78]
        fmul dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x60]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x30]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x38]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x40]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F97A8
        fld dword ptr [esp + 0x78]
        fmul st, st(4)
        fld st(6)
        fmulp st(4), st
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        je L_007F9611
        fld st(1)
        fsubp st(3), st
        fld dword ptr [esp + 0xc0]
        fmulp st(3), st
        fsubrp st(1), st
        fdivp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F98CD
        fstp dword ptr [ebx]
        jmp L_007F9830
    L_007F9789:
        fstp st(1)
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 0x14]
        jmp L_007F96D8
    L_007F979A:
        fstp st(0)
        jmp L_007F96D2
    L_007F97A1:
        fstp st(0)
        jmp L_007F96D8
    L_007F97A8:
        fstp st(2)
        fld st(1)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F98C9
        fstp st(4)
        fld dword ptr [esp + 0x78]
        fmul st, st(3)
        fld st(5)
        fmul dword ptr [esp + 0x60]
        fsubp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(4)
        fnstsw ax
        fstp st(4)
        test ah, 0x5
        jp L_007F97FC
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        fstp st(1)
        xor eax, eax
        fstp st(0)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F97FC:
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(2), st
        fsubp st(3), st
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F98C2
        fstp dword ptr [ebx]
    L_007F982A:
        fld dword ptr [esp + 0x7c]
        fxch st(1)
    L_007F9830:
        fld st(1)
        fmul dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x64]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x38]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x3c]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9900
        fld st(3)
        fmulp st(5), st
        fld st(2)
        fmulp st(6), st
        fxch st(4)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        test ah, 0x41
        jne L_007F98D4
        fstp st(4)
        pop edi
        fstp st(2)
        pop esi
        fstp st(2)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F98C2:
        fstp st(0)
        jmp L_007F982A
    L_007F98C9:
        fstp st(1)
        fstp st(1)
    L_007F98CD:
        fstp st(0)
        jmp L_007F9830
    L_007F98D4:
        fld st(4)
        fsubp st(4), st
        fld dword ptr [esp + 0xc0]
        fmulp st(4), st
        fsubrp st(4), st
        fxch st(2)
    L_007F98E5:
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9975
        fstp dword ptr [ebx]
        jmp L_007F9977
    L_007F9900:
        fstp st(2)
        fld st(1)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9965
        fld st(3)
        fmulp st(5), st
        fld dword ptr [esp + 0x64]
        fld st(0)
        fmulp st(7), st
        fxch st(5)
        fsubrp st(6), st
        fxch st(5)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(5)
        fnstsw ax
        fstp st(5)
        test ah, 0x5
        jp L_007F9952
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        fstp st(2)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9952:
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(2), st
        fsubp st(4), st
        jmp L_007F98E5
    L_007F9965:
        fstp st(1)
        fstp st(1)
        fstp st(0)
        fstp st(2)
        fstp st(0)
        fld dword ptr [esp + 0x64]
        jmp L_007F9977
    L_007F9975:
        fstp st(0)
    L_007F9977:
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x5c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x68]
        fld st(0)
        fmul dword ptr [esp + 0x20]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x38]
        fmul dword ptr [edi]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9A38
        fld dword ptr [esp + 0x18]
        fmulp st(3), st
        fld st(5)
        fmulp st(4), st
        fxch st(2)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9A10
    L_007F99FA:
        fstp st(2)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9A10:
        fld st(2)
        fsubp st(2), st
        fld dword ptr [esp + 0xc0]
        fmulp st(2), st
        fsubrp st(2), st
    L_007F9A1F:
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9AA1
        fstp dword ptr [ebx]
        jmp L_007F9AA3
    L_007F9A38:
        fstp st(2)
        fld st(1)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9A9B
        fld dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0x5c]
        fld st(6)
        fmulp st(5), st
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        fstp st(3)
        test ah, 0x5
        jp L_007F9A88
    L_007F9A72:
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        xor eax, eax
        fstp st(1)
        pop ebx
        fstp st(0)
        add esp, 0x98
        ret
    L_007F9A88:
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(2), st
        fsubp st(2), st
        jmp L_007F9A1F
    L_007F9A9B:
        fstp st(1)
        fstp st(1)
        fstp st(1)
    L_007F9AA1:
        fstp st(0)
    L_007F9AA3:
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x60]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x6c]
        fld st(0)
        fmul dword ptr [esp + 0x20]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esi + 0x8]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x4c]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [edi]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9B51
        fld dword ptr [esp + 0x18]
        fmulp st(3), st
        fld st(5)
        fmulp st(4), st
        fxch st(2)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_007F99FA
        fld st(2)
        fsubp st(2), st
        fld dword ptr [esp + 0xc0]
        fmulp st(2), st
        fsubrp st(2), st
    L_007F9B38:
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9BA8
        fstp dword ptr [ebx]
        jmp L_007F9BAA
    L_007F9B51:
        fstp st(2)
        fld st(1)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F9BA2
        fld dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0x60]
        fld st(6)
        fmulp st(5), st
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        fstp st(3)
        test ah, 0x5
        jnp L_007F9A72
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(2), st
        fsubp st(2), st
        jmp L_007F9B38
    L_007F9BA2:
        fstp st(1)
        fstp st(1)
        fstp st(1)
    L_007F9BA8:
        fstp st(0)
    L_007F9BAA:
        fld dword ptr [esp + 0x24]
        fmul st, st(1)
        fld dword ptr [esp + 0x70]
        fld st(0)
        fmul dword ptr [esp + 0x20]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x48]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x40]
        fmul dword ptr [edi]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9C5F
        fld dword ptr [esp + 0x18]
        fmulp st(4), st
        fxch st(2)
        fmulp st(4), st
        fxch st(2)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        je L_007F93F5
        fld st(1)
        fsubp st(3), st
        fld dword ptr [esp + 0xc0]
        fmulp st(3), st
        fsubrp st(1), st
        fdivp st(1), st
    L_007F9C3B:
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F9CCB
        pop edi
        fstp dword ptr [ebx]
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x98
        ret
    L_007F9C5F:
        fld st(0)
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_007F9CC1
        fld dword ptr [esp + 0x18]
        fmulp st(5), st
        fxch st(3)
        fmulp st(5), st
        fxch st(3)
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_007F9CA9
        fstp st(2)
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        xor eax, eax
        pop ebx
        add esp, 0x98
        ret
    L_007F9CA9:
        fld st(2)
        faddp st(2), st
        fld dword ptr [esp + 0xc0]
        fchs
        fmulp st(2), st
        fsubrp st(2), st
        fdivrp st(1), st
        jmp L_007F9C3B
    L_007F9CC1:
        fstp st(2)
        fstp st(0)
        fstp st(1)
        fstp st(2)
        fstp st(1)
    L_007F9CCB:
        pop edi
        fstp st(0)
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x98
        ret
    }
}

// [0x007FB560] sub_007FB560 (250 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C7000();
extern "C" void ext_007CA8D0();
extern "C" void ext_007CB970();
extern "C" void ext_007F88F0();
extern "C" int mem_0092C510;
extern "C" int mem_0092A270;

extern "C" __declspec(naked) void __cdecl fn_007FB560(void) {
    __asm {
        sub esp, 0x28
        fld dword ptr [esp + 0x30]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x38]
        push edi
        mov edi, dword ptr [esp + 0x44]
        fstp dword ptr [edi + 0x4]
        mov dword ptr [edi], esi
        mov eax, dword ptr [esi]
        push eax
        call ext_007C6FA0
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov ebx, eax
        call ext_007C6FA0
        mov edx, dword ptr [esi]
        push edx
        mov ebp, eax
        call ext_007C6F70
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C6F70
        mov ecx, dword ptr [esi]
        push ecx
        mov dword ptr [esp + 0x28], eax
        call ext_007C7000
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov dword ptr [esp + 0x28], eax
        call ext_007C7000
        push eax
        call ext_007CB970
        fstp dword ptr [esp + 0x60]
        fld qword ptr [mem_0092C510]
        add esp, 0x1c
        call ext_006A7250
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x10]
        fadd qword ptr [mem_0092A270]
        push eax
        fdivr qword ptr [mem_0092C510]
        fmul dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x40]
        call ext_007CA8D0
        fld dword ptr [esp + 0x40]
        add esp, 0x4
        lea ecx, [esp + 0x2c]
        fst dword ptr [esp + 0x20]
        push ecx
        fst dword ptr [esp + 0x28]
        lea edx, [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x44]
        push edx
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        lea edx, [esp + 0x34]
        push edx
        push ebx
        push ecx
        push eax
        call ext_007F88F0
        add esp, 0x24
        test eax, eax
        je short L_007FB64B
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [edi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
L_007FB64B:
        fld dword ptr [esp + 0x40]
        fstp dword ptr [edi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x007FCAB0] sub_007FCAB0 (1170 bytes)
extern "C" void ext_006A6DE0();
extern "C" void ext_006A7250();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C6FC0();
extern "C" void ext_007C7000();
extern "C" void ext_007CA8D0();
extern "C" void ext_007D5170();
extern "C" void ext_007E4740();
extern "C" void ext_007F88F0();
extern "C" void ext_007FC2D0();
extern "C" void ext_007FC3D0();
extern "C" void ext_007FC4E0();
extern "C" int mem_00AB2CB8;
extern "C" int mem_00958CC8;

extern "C" __declspec(naked) int __cdecl fn_007FCAB0(void* self, float t, void* out) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x144
        mov eax, dword ptr [ebp + 0x10]
        fld dword ptr [ebp + 0xc]
        push ebx
        fstp dword ptr [eax + 0x4]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi]
        push edi
        push eax
        call ext_007C6FA0
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov edi, eax
        call ext_007C6FA0
        mov edx, dword ptr [esi]
        mov ebx, eax
        push edx
        mov dword ptr [esp + 0x48], ebx
        call ext_007C6FC0
        mov dword ptr [esp + 0x44], eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C6FC0
        add esp, 0x10
        test edi, edi
        mov dword ptr [esp + 0x48], eax
        je L_fail
        test ebx, ebx
        je L_fail
        cmp dword ptr [esp + 0x38], 0x0
        je L_fail
        test eax, eax
        je L_fail
        mov ecx, dword ptr [esi]
        push ecx
        call ext_007C6F70
        mov edx, dword ptr [esi + 0x4]
        push edx
        mov ebx, eax
        call ext_007C6F70
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esi]
        push eax
        call ext_007C7000
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov dword ptr [esp + 0x20], eax
        call ext_007C7000
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov esi, eax
        call ext_007CA8D0
        push esi
        mov dword ptr [esp + 0x68], eax
        call ext_007CA8D0
        fld dword ptr [ebp + 0xc]
        mov ecx, dword ptr [esp + 0x60]
        fstp qword ptr [esp + 0x58]
        add esp, 0x18
        mov dword ptr [esp + 0x4c], eax
        call ext_007E4740
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x38]
        call ext_007E4740
        fadd dword ptr [esp + 0x10]
        fld qword ptr [esp + 0x40]
        fmul st(1), st
        fld dword ptr [mem_00AB2CB8]
        fdivp st(2), st
        fxch st(1)
        call ext_006A6DE0
        mov esi, eax
        add esi, 0x1
        mov dword ptr [esp + 0x10], esi
        fidiv dword ptr [esp + 0x10]
        mov eax, ebx
        lea ecx, [esp + 0x100]
        mov dword ptr [esp + 0x10], 0x0
        fstp dword ptr [esp + 0x40]
        call ext_007FC4E0
        mov eax, dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc0]
        call ext_007FC4E0
        lea eax, [esp + 0x100]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        call ext_007D5170
        lea edx, [esp + 0xc8]
        push edx
        lea eax, [esp + 0x24]
        push eax
        call ext_007D5170
        add esp, 0x10
        xor ebx, ebx
        test esi, esi
        jle L_ret
    L_loop:
        fld dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x3c]
        lea ecx, [esp + 0x144]
        push ecx
        lea edx, [esp + 0x58]
        push edx
        mov edx, dword ptr [esp + 0x54]
        push ecx
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 0xd0]
        push ecx
        mov ecx, dword ptr [esp + 0x64]
        push edx
        push edi
        lea eax, [esp + 0x11c]
        push eax
        push ecx
        call ext_007F88F0
        add esp, 0x24
        test eax, eax
        jne L_store
        lea edx, [esi - 0x1]
        cmp ebx, edx
        jge L_cont
        mov eax, dword ptr [esp + 0x38]
        lea ecx, [esp + 0x28]
        lea edx, [esp + 0x68]
        call ext_007FC3D0
        mov eax, dword ptr [esp + 0x48]
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x58]
        call ext_007FC3D0
        fld dword ptr [esp + 0x40]
        fst qword ptr [esp + 0xb8]
        fld dword ptr [esp + 0x68]
        fmul st, st(1)
        fadd dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x58]
        fmul st, st(1)
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x6c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x5c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x70]
        fmul st, st(1)
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x60]
        fmul st, st(1)
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x74]
        fmul st, st(1)
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0x64]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fst qword ptr [esp + 0x90]
        fld dword ptr [esp + 0x2c]
        fst qword ptr [esp + 0x78]
        fld dword ptr [esp + 0x30]
        fst qword ptr [esp + 0xb0]
        fld dword ptr [esp + 0x34]
        fst qword ptr [esp + 0xa8]
        fld st(3)
        fmulp st(4), st
        fldz
        fadd st(4), st
        fxch st(4)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld st(3)
        fmulp st(4), st
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fst qword ptr [esp + 0x80]
        fld dword ptr [esp + 0x1c]
        fst qword ptr [esp + 0xa0]
        fld dword ptr [esp + 0x20]
        fst qword ptr [esp + 0x88]
        fld dword ptr [esp + 0x24]
        fst qword ptr [esp + 0x98]
        fld st(3)
        fmulp st(4), st
        fxch st(3)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x14]
        call ext_006A7250
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        lea eax, [esp + 0x28]
        fld1
        lea ecx, [esp + 0x100]
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x14]
        fld qword ptr [esp + 0x90]
        fmul st, st(1)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0xc]
        fld qword ptr [esp + 0x80]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld qword ptr [esp + 0x78]
        fmul st, st(2)
        fstp dword ptr [esp + 0x2c]
        fld qword ptr [esp + 0xa0]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld qword ptr [esp + 0xb0]
        fmul st, st(2)
        fstp dword ptr [esp + 0x30]
        fld qword ptr [esp + 0x88]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fld qword ptr [esp + 0xa8]
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fmul qword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x24]
        call ext_007FC2D0
        lea eax, [esp + 0x18]
        lea ecx, [esp + 0xc0]
        call ext_007FC2D0
        fld dword ptr [edi]
        fld qword ptr [esp + 0xb8]
        mov eax, dword ptr [esp + 0x3c]
        fmul st(1), st
        fld dword ptr [esp + 0x130]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x130]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd dword ptr [esp + 0xf0]
        fstp dword ptr [esp + 0xf0]
        fld dword ptr [edi + 0x4]
        fmul st, st(1)
        fadd dword ptr [esp + 0x134]
        fstp dword ptr [esp + 0x134]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fadd dword ptr [esp + 0xf4]
        fstp dword ptr [esp + 0xf4]
        fld dword ptr [edi + 0x8]
        fmul st, st(1)
        fadd dword ptr [esp + 0x138]
        fstp dword ptr [esp + 0x138]
        fmul dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0xf8]
        fstp dword ptr [esp + 0xf8]
    L_cont:
        add ebx, 0x1
        cmp ebx, esi
        jl L_loop
    L_epi:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    L_store:
        mov eax, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0xc], ebx
        fild dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x10], 0x1
        fmul dword ptr [esp + 0x40]
        fadd dword ptr [esp + 0x54]
        fadd qword ptr [mem_00958CC8]
        fstp dword ptr [eax + 0x4]
    L_ret:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_007C6F70();
extern "C" void ext_007C8810();
extern "C" void ext_007DB190();
extern "C" void ext_00803C40();
extern "C" void ext_00804BC0();
extern "C" int mem_0092C528;
extern "C" int mem_0094CE80;
extern "C" int mem_0092A270;

// [0x007F7FF0] sub_007F7FF0 (732 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F7FF0(void* self) {
    __asm {
        sub esp, 0x104
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x120]
        mov eax, dword ptr [esi]
        push edi
        mov edi, dword ptr [eax + 0x14]
        mov eax, dword ptr [esp + 0x118]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push eax
        lea ecx, [edi + 0x10]
        xor ebx, ebx
        push ecx
        mov dword ptr [esp + 0x2c], ebx
        call ext_007DB190
        push esi
        mov dword ptr [esp + 0xec], edi
        call ext_007C6F70
        mov edx, dword ptr [esi]
        push edx
        mov dword ptr [esp + 0xf4], eax
        call ext_007C8810
        fstp dword ptr [esp + 0xc8]
        mov ebp, dword ptr [esp + 0x138]
        lea eax, [esp + 0xac]
        lea ecx, [esp + 0x70]
        lea edx, [esp + 0x50]
        mov dword ptr [esp + 0x54], eax
        push edx
        mov eax, ecx
        push eax
        mov dword ptr [esp + 0x58], ebp
        mov dword ptr [esp + 0x68], ecx
        call ext_00803C40
        mov ecx, dword ptr [ebp]
        fld dword ptr [ecx + 0xa0]
        mov eax, dword ptr [ebp + 0x48]
        fmul qword ptr [mem_0092C528]
        add esp, 0x20
        cmp dword ptr [esp + 0x12c], ebx
        mov dword ptr [esp + 0x20], eax
        fstp dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x24], ebx
        fldz
        fstp dword ptr [esp + 0x18]
        jle loc_007F82A4
        mov esi, dword ptr [esp + 0x128]
        mov edi, dword ptr [esp + 0x134]
        add esi, 0x38
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

loc_007F80C0:
        fld dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x11c]
        fld dword ptr [edx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne loc_007F82B4
        fld dword ptr [esi - 0x8]
        lea eax, [esi - 0x38]
        fstp dword ptr [esp + 0x2c]
        mov dword ptr [ebp + 0x48], eax
        fld dword ptr [esi - 0x4]
        xor ebx, ebx
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x10]
        jmp short loc_007F8102

        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00

loc_007F8100:
        fstp st(0)

loc_007F8102:
        lea ecx, [esp + 0x38]
        push ecx
        call ext_00804BC0
        add esp, 0x4
        cmp eax, 0x1
        je loc_007F821C
        fld dword ptr [esp + 0x88]
        fld dword ptr [esp + 0x28]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je loc_007F821A
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x5c]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x58]
        faddp st(1), st
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x60]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fchs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [mem_0094CE80]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp short loc_007F81E0
        fdivp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fdiv dword ptr [esp + 0x138]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x130]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp short loc_007F81FD
        mov edx, dword ptr [esp + 0x11c]
        fld dword ptr [edx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp short loc_007F8222
        fld dword ptr [edi]
        add ebx, 0x1
        cmp ebx, 0x5
        fmul st, st(2)
        fadd dword ptr [esi - 0x8]
        fstp dword ptr [esi - 0x8]
        fld dword ptr [edi + 0x4]
        fmul st, st(2)
        fadd dword ptr [esi - 0x4]
        fstp dword ptr [esi - 0x4]
        fld dword ptr [edi + 0x8]
        fmulp st(2), st
        fld dword ptr [esi]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esi]
        jl loc_007F8100
        jmp short loc_007F8224

loc_007F81E0:
        mov eax, dword ptr [esp + 0x11c]
        fstp st(0)
        fstp st(0)
        fld dword ptr [eax]
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short loc_007F8224

loc_007F81FD:
        mov ecx, dword ptr [esp + 0x11c]
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx]
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short loc_007F8224

loc_007F821A:
        fstp st(0)

loc_007F821C:
        fld dword ptr [esp + 0x10]
        jmp short loc_007F8224

loc_007F8222:
        fstp st(1)

loc_007F8224:
        mov ecx, dword ptr [esp + 0x11c]
        fld dword ptr [ecx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short loc_007F824D
        fldz
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp short loc_007F824D
        fstp dword ptr [ecx]
        mov dword ptr [esp + 0x1c], 0x1
        jmp short loc_007F824F

loc_007F824D:
        fstp st(0)

loc_007F824F:
        fld dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x24]
        fstp dword ptr [esi - 0x8]
        add eax, 0x1
        fld dword ptr [esp + 0x30]
        add esi, 0x40
        cmp eax, dword ptr [esp + 0x12c]
        fstp dword ptr [esi - 0x44]
        fld dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x24], eax
        fstp dword ptr [esi - 0x40]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x130]
        fstp dword ptr [esp + 0x18]
        jl loc_007F80C0
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [ebp + 0x48], edx
        pop ebp
        pop ebx
        add esp, 0x104
        ret

loc_007F82A4:
        pop edi
        pop esi
        mov dword ptr [ebp + 0x48], eax
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x104
        ret

loc_007F82B4:
        mov eax, dword ptr [esp + 0x20]
        fstp st(0)
        pop edi
        pop esi
        mov dword ptr [ebp + 0x48], eax
        mov eax, dword ptr [esp + 0x14]
        pop ebp
        pop ebx
        add esp, 0x104
        ret
    }
}

// [0x007F8550] sub_007F8550 (887 bytes)
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6EC0();
extern "C" void ext_006A7250();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F40();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C6FC0();
extern "C" void ext_007C7000();
extern "C" void ext_007D58E0();
extern "C" void ext_007DB720();
extern "C" void ext_007E46B0();
extern "C" void ext_007F7FF0();
extern "C" void ext_007F82D0();
extern "C" void ext_007F83B0();
extern "C" int mem_00AA7E40;
extern "C" int mem_00925298;
extern "C" int mem_0092A278;
extern "C" int mem_0099EE50;
extern "C" int mem_00993828;
extern "C" int mem_0099D220;

extern "C" __declspec(naked) void __fastcall fn_007F8550(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        push edi
        call ext_007C7000
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_007C7000
        fld dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x10], eax
        mov eax, dword ptr [ebp + 0x10]
        push edi
        fstp dword ptr [eax + 0x4]
        mov dword ptr [eax], esi
        call ext_007DB720
        push edi
        mov esi, eax
        call ext_007C6F70
        fld dword ptr [eax + 0x10]
        fmul dword ptr [esi + 0x4]
        lea ecx, [ebp - 0x14]
        fld dword ptr [esi]
        push ecx
        fmul dword ptr [eax]
        lea edx, [ebp - 0x48]
        push edx
        push edi
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x30]
        fstp dword ptr [ebp - 0x2c]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [esi]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [esi + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x34]
        fstp dword ptr [ebp - 0x28]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [esi]
        fld dword ptr [eax + 0x18]
        fmul dword ptr [esi + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fadd dword ptr [eax + 0x38]
        fstp dword ptr [ebp - 0x24]
        call ext_007C6F40
        fld dword ptr [ebp - 0x48]
        add esp, 0x1c
        fsub dword ptr [ebp - 0x2c]
        fstp dword ptr [ebp - 0x20]
        fld dword ptr [ebp - 0x44]
        fsub dword ptr [ebp - 0x28]
        fstp dword ptr [ebp - 0x1c]
        fld dword ptr [ebp - 0x40]
        fsub dword ptr [ebp - 0x24]
        fstp dword ptr [ebp - 0x18]
        fld dword ptr [ebp - 0x1c]
        fld dword ptr [ebp - 0x20]
        fld dword ptr [ebp - 0x18]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x8]
        call ext_006A7250
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x8]
        push edi
        fadd dword ptr [ebp - 0x14]
        fstp dword ptr [ebp - 0x14]
        call ext_007C6FA0
        push edi
        mov ebx, eax
        call ext_007C6FC0
        fld dword ptr [ebx]
        fld dword ptr [ebp + 0xc]
        mov esi, dword ptr [ebp - 0x10]
        fld st(0)
        mov dword ptr [ebp - 0x8], eax
        fmulp st(2), st
        add esp, 0x8
        fld dword ptr [ebp - 0x2c]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ebp - 0x54]
        fld dword ptr [ebx + 0x4]
        fmul st, st(1)
        fadd dword ptr [ebp - 0x28]
        fstp dword ptr [ebp - 0x50]
        fmul dword ptr [ebx + 0x8]
        fadd dword ptr [ebp - 0x24]
        fstp dword ptr [ebp - 0x4c]
        mov ecx, dword ptr [esi + 0x28]
        lea eax, [8*ecx]
        sub eax, ecx
        add eax, eax
        add eax, eax
        call ext_006A6EC0
        mov eax, esp
        mov dword ptr [esi + 0x38], eax
        fld dword ptr [ebp - 0x14]
        mov eax, dword ptr [ebp + 0x8]
        push ecx
        fstp dword ptr [esp]
        push eax
        lea eax, [ebp - 0x54]
        lea esi, [ebp - 0x2c]
        call ext_007F82D0
        add esp, 0x8
        test eax, eax
        mov dword ptr [ebp - 0x34], eax
        je L_007F88B1
        cmp eax, 0x1
        mov ecx, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [ecx + 0x38]
        mov dword ptr [ebp - 0x10], ecx
        jle L_007F86DB
        push 0x007F8500
        push 0x1c
        push eax
        push ecx
        call dword ptr [mem_00925298]
        add esp, 0x10
    L_007F86DB:
        fld dword ptr [ebx]
        lea esi, [ebp - 0x20]
        fstp dword ptr [ebp - 0x20]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [ebp - 0x1c]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [ebp - 0x18]
        call ext_007E46B0
        mov eax, dword ptr [ebp - 0x8]
        fstp dword ptr [ebp - 0x3c]
        fld dword ptr [eax + 0x4]
        fld dword ptr [eax]
        fld dword ptr [eax + 0x8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x8]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ebp - 0x8]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [ebp - 0x8]
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x8]
        call ext_006A7250
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x8]
        fld dword ptr [ebp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fmul qword ptr [mem_0099EE50]
        fadd qword ptr [mem_00993828]
        call ext_006A6DE0
        mov ebx, eax
        cmp ebx, 0x1
        mov dword ptr [ebp - 0xc], ebx
        jge L_007F8765
        mov ebx, 0x1
        mov dword ptr [ebp - 0xc], ebx
        jmp L_007F878F
    L_007F8765:
        cmp ebx, 0x32
        jle L_007F878F
        mov edx, dword ptr [edi]
        fstp st(0)
        mov eax, dword ptr [edx + 0xb0]
        push 0x0099EDE8
        push eax
        mov ebx, 0x32
        push 0x0
        mov dword ptr [ebp - 0xc], ebx
        call ext_007D58E0
        fld dword ptr [ebp + 0xc]
        add esp, 0xc
    L_007F878F:
        fld st(0)
        mov eax, ebx
        fidiv dword ptr [ebp - 0xc]
        shl eax, 0x6
        add eax, 0x10
        mov dword ptr [ebp - 0x8], 0x0
        fstp dword ptr [ebp - 0x38]
        fstp dword ptr [ebp - 0xc]
        call ext_006A6EC0
        fld dword ptr [ebp - 0x38]
        mov esi, esp
        push ecx
        fstp dword ptr [esp]
        push ebx
        add esi, 0xf
        and esi, -0x10
        push edi
        push esi
        call ext_007F83B0
        add esp, 0x10
        cmp dword ptr [ebp - 0x34], 0x0
        mov dword ptr [ebp - 0x30], 0x0
        jle L_007F8837
    L_007F87D5:
        mov ecx, dword ptr [ebp - 0x10]
        fld dword ptr [ebp - 0x3c]
        fld dword ptr [ecx + 0x10]
        fld dword ptr [ebp - 0xc]
        fld st(0)
        fmul st, st(3)
        fadd dword ptr [ebp - 0x14]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_007F883C
        mov eax, dword ptr [ebp + 0x8]
        fstp st(0)
        push ecx
        fstp dword ptr [esp]
        lea edx, [ebp - 0x20]
        fld dword ptr [ebp - 0x38]
        push edx
        mov edx, dword ptr [eax + 0x4]
        push ecx
        fstp dword ptr [esp]
        push ebx
        push esi
        push edx
        push edi
        lea eax, [ebp - 0xc]
        push eax
        push ecx
        call ext_007F7FF0
        add esp, 0x24
        test eax, eax
        je L_007F8825
        mov ecx, dword ptr [ebp - 0x10]
        mov dword ptr [ebp - 0x8], ecx
    L_007F8825:
        mov eax, dword ptr [ebp - 0x30]
        add dword ptr [ebp - 0x10], 0x1c
        add eax, 0x1
        cmp eax, dword ptr [ebp - 0x34]
        mov dword ptr [ebp - 0x30], eax
        jl L_007F87D5
    L_007F8837:
        fld dword ptr [ebp - 0xc]
        jmp L_007F883E
    L_007F883C:
        fstp st(1)
    L_007F883E:
        fld dword ptr [ebp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_007F885E
        fld qword ptr [mem_0099D220]
        fmul st, st(1)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ebp - 0xc]
        fld dword ptr [ebp - 0xc]
        fxch st(1)
    L_007F885E:
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_007F8871
        fstp st(1)
        fst dword ptr [ebp - 0xc]
        fld dword ptr [ebp - 0xc]
        fxch st(1)
    L_007F8871:
        mov ecx, dword ptr [ebp - 0x8]
        fxch st(1)
        test ecx, ecx
        mov eax, dword ptr [ebp + 0x10]
        fst dword ptr [eax + 0x4]
        je L_007F8888
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0xc], edx
        jmp L_007F888F
    L_007F8888:
        mov dword ptr [eax + 0xc], 0x0
    L_007F888F:
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_007F88B1
        mov eax, 0x1
        lea esp, [ebp - 0x60]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        mov esp, ebp
        pop ebp
        ret
    L_007F88B1:
        xor eax, eax
        lea esp, [ebp - 0x60]
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
