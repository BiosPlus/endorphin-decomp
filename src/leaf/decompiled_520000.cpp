// Decompiled translation unit: src/leaf/decompiled_520000.cpp

extern "C" void ext_00521FD0();
extern "C" void ext_00522080();
extern "C" void ext_00532770();
extern "C" int mem_00924FF4;

// [0x00522190] sub_00522190 (25 bytes)
extern "C" void __fastcall fn_00522190(char* self, int edx_unused, int a1) {
    *(int*)(self + 0xc4) = a1;
    void** vtbl = *(void***)self;
    typedef void (__fastcall *VFn)(char*, int, int);
    ((VFn)vtbl[0x17])(self, (int)vtbl, 0);
}

// [0x005220B0] sub_005220B0 (10 bytes)
extern "C" __declspec(naked) void __cdecl fn_005220B0() {
    __asm {
        call ext_00521FD0
        jmp ext_00522080
    }
}

// [0x00525E70] sub_00525E70 (10 bytes)
extern "C" void ext_00525C40();

extern "C" __declspec(naked) void __fastcall fn_00525E70(void* self) {
    __asm {
        push ecx
        add ecx, 0x60
        call ext_00525C40
        ret
    }
}

// [0x0052ADA0] sub_0052ADA0 (16 bytes)
extern "C" void ext_0052AD00();

extern "C" __declspec(naked) int __stdcall fn_0052ADA0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_0052AD00
        add eax, 8
        ret 4
    }
}

// [0x0052F140] sub_0052F140 (18 bytes)
extern "C" void ext_00538530();
extern "C" int mem_00953A14;
extern "C" __declspec(naked) void __fastcall fn_0052F140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00538530
        mov dword ptr [esi], offset mem_00953A14
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0052F1C0] sub_0052F1C0 (18 bytes)
extern "C" void ext_00538530();
extern "C" char mem_00953B8C;

extern "C" void* __fastcall fn_0052F1C0(void* self) {
    ext_00538530();
    *(void**)self = (void*)&mem_00953B8C;
    return self;
}

// [0x0052F1F0] sub_0052F1F0 (18 bytes)
extern "C" void ext_00538530();
extern "C" char mem_00953BF4;

extern "C" void* __fastcall fn_0052F1F0(void* self) {
    ext_00538530();
    *(void**)self = (void*)&mem_00953BF4;
    return self;
}

// [0x00522580] sub_00522580 (35 bytes)
extern "C" int mem_00AED298;
extern "C" int mem_00AED294;
extern "C" int* __cdecl fn_00522580() {
    if (!(mem_00AED298 & 1)) {
        mem_00AED298 |= 1;
        mem_00AED294 = 0x952968;
    }
    return &mem_00AED294;
}

// [0x00527660] sub_00527660 (35 bytes)
extern "C" int mem_00AED310;
extern "C" int mem_00AED30C;
extern "C" int* __cdecl fn_00527660() {
    if (!(mem_00AED310 & 1)) {
        mem_00AED310 |= 1;
        mem_00AED30C = 0x95330c;
    }
    return &mem_00AED30C;
}

// [0x00528B60] sub_00528B60 (36 bytes)
extern "C" void __fastcall fn_00528B60(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 4) != 0) {
        *(int*)(*(char**)(s + 4) + 8) = 0;
        void* o = *(void**)(s + 4);
        typedef void (__thiscall *VFn)(void*);
        ((VFn)(*(void***)o)[7])(o);
        *(int*)(s + 4) = 0;
    }
}

// [0x00528CD0] sub_00528CD0 (40 bytes)
extern "C" unsigned int __cdecl fn_00528CD0(unsigned int x) {
    return ((x & 0x000000FFu) << 24) | ((x & 0x0000FF00u) << 8) |
           ((x & 0x00FF0000u) >> 8) | ((x & 0xFF000000u) >> 24);
}

// [0x00528D30] sub_00528D30 (42 bytes)
extern "C" void ext_00528CC0();

extern "C" __declspec(naked) void __cdecl fn_00528D30() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ecx, ecx
        test esi, esi
        jle done
        mov edx, dword ptr [esp + 0x8]
        _emit 0x90
    loop_top:
        movzx eax, word ptr [edx + 2*ecx]
        push eax
        call ext_00528CC0
        mov word ptr [edx + 2*ecx], ax
        add ecx, 1
        add esp, 4
        cmp ecx, esi
        jl loop_top
    done:
        pop esi
        ret
    }
}

// [0x00528D00] sub_00528D00 (43 bytes)
extern "C" unsigned int __cdecl ext_00528CD0(unsigned int x);

extern "C" void __cdecl fn_00528D00(unsigned int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = ext_00528CD0(arr[i]);
    }
}

extern "C" int mem_00925134;

// [0x005245D0] sub_005245D0 (52 bytes)
extern "C" __declspec(naked) double __fastcall fn_005245D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esi + 0x8]
        fld qword ptr [eax + 8*edi]
        pop edi
        pop esi
        ret 0x4
    L_ok:
        fld qword ptr [ecx + 8*edi]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0052A410] sub_0052A410 (55 bytes)
extern "C" void ext_006A5C62();

extern "C" void* __cdecl fn_0052A410() {
    typedef void* (__cdecl *AllocFn)(unsigned int);
    char* p = (char*)((AllocFn)ext_006A5C62)(0x64);
    if (p) {
        *(int*)p = 0;
    }
    int* q = (int*)(p + 0x4);
    if (q) {
        *q = 0;
    }
    int* r = (int*)(p + 0x8);
    if (r) {
        *r = 0;
    }
    p[0x60] = 1;
    p[0x61] = 0;
    return p;
}

// [0x00522220] sub_00522220 (57 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_00522220(void* first, void* last, void* src) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je done
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0xc]
    loop_top:
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x8], ecx
        push ebx
        lea ecx, [esi + 0xc]
        call dword ptr [mem_00924FDC]
        add esi, 0x28
        cmp esi, ebp
        jne loop_top
        pop edi
        pop ebx
    done:
        pop esi
        pop ebp
        ret
    }
}

// [0x00527AF0] sub_00527AF0 (66 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00527AF0(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_527B08
        call ebp
    L_527B08:
        lea eax, [edi - 0x4]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_527B1C
        cmp eax, dword ptr [esi + 0x4]
        jae L_527B1E
    L_527B1C:
        call ebp
    L_527B1E:
        lea esi, [edi - 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_527B29
        call ebp
    L_527B29:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x005224E0] sub_005224E0 (67 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_005224E0(void* begin, void* end, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0xc]
        push esi
        mov esi, dword ptr [esp+0xc]
        cmp esi, ebx
        je empty_005224E0
        push edi
        mov edi, dword ptr [esp+0x18]
    loop_005224E0:
        mov eax, dword ptr [esi+0x4]
        mov dword ptr [edi+0x4], eax
        mov ecx, dword ptr [esi+0x8]
        lea edx, [esi+0xc]
        mov dword ptr [edi+0x8], ecx
        push edx
        lea ecx, [edi+0xc]
        call dword ptr [mem_00924FDC]
        add esi, 0x28
        add edi, 0x28
        cmp esi, ebx
        jne loop_005224E0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty_005224E0:
        mov eax, dword ptr [esp+0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00522530] sub_00522530 (67 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00522530(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0x8]
        push esi
        mov esi, dword ptr [esp+0x10]
        cmp ebx, esi
        je empty_00522530
        push edi
        mov edi, dword ptr [esp+0x18]
    loop_00522530:
        mov eax, dword ptr [esi-0x24]
        sub esi, 0x28
        sub edi, 0x28
        mov dword ptr [edi+0x4], eax
        mov ecx, dword ptr [esi+0x8]
        lea edx, [esi+0xc]
        mov dword ptr [edi+0x8], ecx
        push edx
        lea ecx, [edi+0xc]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne loop_00522530
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty_00522530:
        mov eax, dword ptr [esp+0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0052A230] sub_0052A230 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_0052A230(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x61], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        lea eax, [esi + 0xc]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je go_left
        mov esi, dword ptr [esi + 0x8]
        jmp loop_check
    go_left:
        mov edi, esi
        mov esi, dword ptr [esi]
    loop_check:
        cmp byte ptr [esi + 0x61], 0x0
        je loop_top
        pop ebp
        mov eax, edi
        pop ebx
    done_early:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00524BC0] sub_00524BC0 (77 bytes)
extern "C" void ext_00504970();
extern "C" void ext_005049B0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00524BC0(void* self, int edx_unused, float v) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short done
        call ext_00504970
        test eax, eax
        je short done
        push edi
        mov edi, dword ptr [esi + 0x8]
        push 0x0
        mov ecx, eax
        call ext_005049B0
        mov esi, eax
        mov ecx, dword ptr [esi + 0x8]
        add esi, 0x4
        test ecx, ecx
        je short invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short store
    invalid:
        call dword ptr [mem_00925134]
    store:
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x4]
        fstp qword ptr [eax + edi * 8]
        pop edi
    done:
        pop esi
        ret 0x4
    }
}

// [0x0052A090] sub_0052A090 (78 bytes)
extern "C" void __fastcall fn_0052A090(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x61) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00526C70] sub_00526C70 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00526C70(void* self) {
    __asm {
        push -1
        push 0893BFEh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        mov dword ptr [eax + 1Ch], ecx
        mov dword ptr [eax + 24h], ecx
        mov dword ptr [eax + 28h], ecx
        mov dword ptr [eax + 2Ch], ecx
        mov dword ptr [eax + 34h], ecx
        mov dword ptr [eax + 38h], ecx
        mov dword ptr [eax + 3Ch], ecx
        mov byte ptr [eax + 40h], cl
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x0052A0E0] sub_0052A0E0 (82 bytes)
extern "C" void __fastcall fn_0052A0E0(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x61] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

extern "C" int mem_00953474;
extern "C" int mem_00953454;

// [0x00528AE0] sub_00528AE0 (83 bytes)
extern "C" __declspec(naked) void __fastcall fn_00528AE0(void* self) {
    __asm {
        push -1
        push 0x893e78
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset mem_00953474
        mov eax, dword ptr [esi + 0x4]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x10], ecx
        je L_00528B1D
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
    L_00528B1D:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], offset mem_00953454
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052A020] sub_0052A020 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052A020(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00532770
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00522840] sub_00522840 (86 bytes)
extern "C" void ext_005224E0();

extern "C" __declspec(naked) void* __cdecl fn_00522840(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_005224E0
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 4
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        lea eax, [edi + 8*eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00524750] sub_00524750 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED2B0;
extern "C" int mem_00AED2AC;

extern "C" __declspec(naked) void* __fastcall fn_00524750(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8939ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AED2B0], al
        jne L_done
        or dword ptr [mem_00AED2B0], eax
        mov ecx, offset mem_00AED2AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AED2AC], 0x952c34
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AED2AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005247B0] sub_005247B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED2B8;
extern "C" int mem_00AED2B4;

extern "C" __declspec(naked) void* __fastcall fn_005247B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x893a0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AED2B8], al
        jne L_done
        or dword ptr [mem_00AED2B8], eax
        mov ecx, offset mem_00AED2B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AED2B4], 0x952d0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AED2B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00528E90] sub_00528E90 (33 bytes)
extern "C" void ext_00401C60();
extern "C" void* __fastcall fn_00528E90(void* self, int edx_unused, const int* a1) {
    typedef void (__fastcall *Callee)(void*, int, const int*);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x009534CC;
    *((int*)self + 10) = a1[10];
    return self;
}

// [0x00528100] sub_00528100 (79 bytes)
extern "C" void ext_00506030();

extern "C" __declspec(naked) void* __fastcall fn_00528100(void* self) {
    __asm {
        push -1
        push 0x00893C78
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00506030
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x38], 0x0094F0DC
        mov dword ptr [esi], 0x0094F654
        mov dword ptr [esi + 0x38], 0x0094F648
        xor eax, eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x48], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
