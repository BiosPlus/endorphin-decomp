// Decompiled translation unit: src/leaf/decompiled_520000.cpp

extern "C" void ext_00521FD0();
extern "C" void ext_00522080();
extern "C" void ext_00532770();
extern "C" void ext_00537E90();
extern "C" void ext_00539660();
extern "C" void ext_0053B240();
extern "C" int mem_00924FF4;
extern "C" void ext_0051F8C0();
extern "C" void ext_006A6DD2();

extern "C" void ext_006A6DD2();
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

// [0x0052FF10] sub_0052FF10 (90 bytes)
extern "C" void ext_0053F550();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEE270;
extern "C" __declspec(naked) void __fastcall fn_0052FF10(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x894d8e
        push eax
        mov eax, 1
        mov fs:[0], esp
        test byte ptr [mem_00AEE270], al
        jne done_0052FF10
        or dword ptr [mem_00AEE270], eax
        mov ecx, 0xaee268
        mov dword ptr [esp + 8], 0
        call ext_0053F550
        push 0x91a3d0
        call ext_006A6C87
        add esp, 4
    done_0052FF10:
        mov ecx, dword ptr [esp]
        mov eax, 0xaee268
        mov fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x00524610] sub_00524610 (91 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_00524610(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x8], ecx
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x94f484
        mov dword ptr [esi + 0x4], eax
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00522760] sub_00522760 (95 bytes)
extern "C" void ext_00522530();

extern "C" __declspec(naked) int __cdecl fn_00522760(int a1, int a2, int a3) {
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
        call ext_00522530
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add eax, eax
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00522FD0] sub_00522FD0 (43 bytes)
extern "C" void ext_00522760();

extern "C" __declspec(naked) void __fastcall fn_00522FD0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00522760
        add esp, 0x1c
        ret
    }
}

// [0x00524540] sub_00524540 (96 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00524540(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x8], ecx
        push edx
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x94f484
        mov dword ptr [esi + 0x4], eax
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00524B50] sub_00524B50 (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_00524B50(void* self, int edx_unused, float v) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 4]
        test esi, esi
        je L_ret
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        je L_call1
        mov ecx, dword ptr [esi + 0x28]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_cont
L_call1:
        call ebx
L_cont:
        mov esi, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 8]
        mov edi, dword ptr [edi + 8]
        add esi, 4
        test ecx, ecx
        je L_call2
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jb L_store
L_call2:
        call ebx
L_store:
        fld dword ptr [esp + 20]
        mov ecx, dword ptr [esi + 4]
        fstp qword ptr [ecx + 8*edi]
        pop ebx
L_ret:
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x00527D60] sub_00527D60 (99 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void* __fastcall fn_00527D60(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        jne L_527D60_a
        call ebp
L_527D60_a:
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [ebx + 0x8]
        jb L_527D60_b
        call ebp
L_527D60_b:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_527D60_c
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_527D60_c:
        mov eax, dword ptr [edi + 0x8]
        lea ecx, [esi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle L_527D60_d
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L_527D60_d:
        mov eax, dword ptr [esp + 0x14]
        add dword ptr [edi + 0x8], -0x4
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        ret 0xc
    }
}

// [0x00528D60] sub_00528D60 (32 bytes)
extern "C" int mem_009534CC;
extern "C" void ext_00403560();
extern "C" __declspec(naked) void* __fastcall fn_00528D60(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00403560
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], offset mem_009534CC
        mov dword ptr [esi + 0x28], ecx
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00524AE0] sub_00524AE0 (104 bytes)
extern "C" void ext_00504970();
extern "C" void ext_005049B0();
extern "C" void ext_005245D0();

extern "C" __declspec(naked) float __fastcall fn_00524AE0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_zero
        call ext_00504970
        mov ecx, eax
        test ecx, ecx
        je L_zero
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_zero
        mov edx, dword ptr [ecx + 0x8]
        sub edx, eax
        mov eax, 0x4ec4ec4f
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je L_zero
        push 0
        call ext_005049B0
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je L_zero
        mov edx, dword ptr [eax + 0xc]
        sub edx, ecx
        sar edx, 0x3
        je L_zero
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        mov ecx, eax
        call ext_005245D0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        pop esi
        pop ecx
        ret
    L_zero:
        fldz
        pop esi
        pop ecx
        ret
    }
}

// [0x0052EBA0] sub_0052EBA0 (105 bytes)
extern "C" void ext_0052A230();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_0052EBA0(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0052A230
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0052A1C0] sub_0052A1C0 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052A1C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_0052A1C0
        call edi
    L_skip_call_0052A1C0:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 61h], 0
        je L_not_nil_0052A1C0
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_0052A1C0:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 61h], 0
        jne L_right_nil_0052A1C0
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 61h], 0
        jne L_store_left_0052A1C0
    L_leftmost_loop_0052A1C0:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 61h], 0
        je L_leftmost_loop_0052A1C0
    L_store_left_0052A1C0:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_0052A1C0:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 61h], 0
        jne L_done_0052A1C0
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_climb_loop_0052A1C0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_0052A1C0
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 61h], 0
        je L_climb_loop_0052A1C0
    L_done_0052A1C0:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x005230B0] sub_005230B0 (108 bytes)
extern "C" void ext_00522840();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005230B0(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_00522840
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 0x28
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x00527690] sub_00527690 (109 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00527690(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_005276A5
        call dword ptr [mem_00925134]
    L_005276A5:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_005276B0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_005276BE
        call dword ptr [mem_00925134]
    L_005276BE:
        cmp esi, esi
        je L_005276C8
        call dword ptr [mem_00925134]
    L_005276C8:
        cmp edi, ebx
        je L_005276F6
        cmp edi, dword ptr [esi + 0x8]
        jb L_005276D7
        call dword ptr [mem_00925134]
    L_005276D7:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        push edx
        push ebp
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb L_005276F1
        call dword ptr [mem_00925134]
    L_005276F1:
        add edi, 0x4
        jmp L_005276B0
    L_005276F6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00527AC0] sub_00527AC0 (33 bytes)
extern "C" void ext_00527690();
extern "C" void ext_00678D70();

extern "C" __declspec(naked) void __fastcall fn_00527AC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00527690
        push 0x1
        mov ecx, esi
        call ext_00678D70
        pop esi
        ret 0x8
    }
}

// [0x0052F340] sub_0052F340 (81 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052F340(void* self) {
    __asm {
        push -0x1
        push 0x894d68
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0053B240
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x953cec
        mov dword ptr [esi + 0x14], 0x953ce4
        call ext_00537E90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F3C0] sub_0052F3C0 (81 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052F3C0(void* self) {
    __asm {
        push -0x1
        push 0x894d68
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0053B240
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x953dfc
        mov dword ptr [esi + 0x14], 0x953df4
        call ext_00539660
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FC10] sub_0052FC10 (81 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052FC10(void* self) {
    __asm {
        push -0x1
        push 0x894d48
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0053B240
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x9541b4
        mov dword ptr [esi + 0x14], 0x9541ac
        call ext_00537E90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F020] sub_0052F020 (86 bytes)
extern "C" void ext_0053B9C0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F020(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x4c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053B9C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F080] sub_0052F080 (86 bytes)
extern "C" void ext_0053B800();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F080(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x50
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053B800
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F0E0] sub_0052F0E0 (86 bytes)
extern "C" void ext_0053BBA0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F0E0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053BBA0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052EFC0] sub_0052EFC0 (86 bytes)
extern "C" void ext_0053B6B0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052EFC0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053B6B0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F2E0] sub_0052F2E0 (86 bytes)
extern "C" void ext_0053D220();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F2E0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x4c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053D220
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F480] sub_0052F480 (86 bytes)
extern "C" void ext_0053C4C0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F480(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x4c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053C4C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FCD0] sub_0052FCD0 (86 bytes)
extern "C" void ext_0052F340();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052FCD0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052F340
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FDF0] sub_0052FDF0 (86 bytes)
extern "C" void ext_0052F3C0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052FDF0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x64
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052F3C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F280] sub_0052F280 (87 bytes)
extern "C" void ext_0053B240();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F280(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x44
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052F280
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953c64
        mov dword ptr [esi + 0x14], 0x00953c5c
        mov eax, esi
done_0052F280:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F770] sub_0052F770 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052F770(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x3c
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052F770
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953a84
        mov dword ptr [esi + 0x14], 0x00953a7c
        mov eax, esi
    done_0052F770:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F7D0] sub_0052F7D0 (87 bytes)
extern "C" void ext_0053B240();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F7D0(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x3c
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052F7D0
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953b0c
        mov dword ptr [esi + 0x14], 0x00953b04
        mov eax, esi
    done_0052F7D0:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FD90] sub_0052FD90 (87 bytes)
extern "C" void ext_0053B240();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052FD90(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x3c
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052FD90
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953d74
        mov dword ptr [esi + 0x14], 0x00953d6c
        mov eax, esi
    done_0052FD90:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FEB0] sub_0052FEB0 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052FEB0(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x3c
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052FEB0
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953e84
        mov dword ptr [esi + 0x14], 0x00953e7c
        mov eax, esi
    done_0052FEB0:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F4E0] sub_0052F4E0 (89 bytes)
extern "C" void ext_0053D280();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F4E0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xa0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053D280
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F610] sub_0052F610 (90 bytes)
extern "C" void ext_0053B240();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F610(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x9c
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_0052F610
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x00953994
        mov dword ptr [esi + 0x14], 0x0095398c
        mov eax, esi
    done_0052F610:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F690] sub_0052F690 (91 bytes)
extern "C" void ext_00538530();
extern "C" void ext_0053B240();

extern "C" __declspec(naked) void __fastcall fn_0052F690(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_0053B240
        lea edi, [esi + 0x3c]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x953f0c
        mov dword ptr [esi + 0x14], 0x953f04
        call ext_00538530
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x953a14
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F9C0] sub_0052F9C0 (91 bytes)
extern "C" void ext_00538530();
extern "C" void ext_0053B240();

extern "C" __declspec(naked) void __fastcall fn_0052F9C0(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_0053B240
        lea edi, [esi + 0x3c]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x9540a4
        mov dword ptr [esi + 0x14], 0x95409c
        call ext_00538530
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x953bf4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F830] sub_0052F830 (86 bytes)
extern "C" void ext_0052F690();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F830(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x58
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052F690
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00524A60] sub_00524A60 (114 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00524A60(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je short L_null_524A60
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        je short L_inv1_524A60
        mov ecx, dword ptr [esi + 0x28]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne short L_cont_524A60
L_inv1_524A60:
        call ebx
L_cont_524A60:
        mov esi, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x8]
        mov edi, dword ptr [edi + 0x8]
        add esi, 0x4
        test ecx, ecx
        je short L_inv2_524A60
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_ok_524A60
L_inv2_524A60:
        call ebx
L_ok_524A60:
        mov ecx, dword ptr [esi + 0x4]
        fld qword ptr [ecx + 8*edi]
        pop ebx
        fstp dword ptr [esp + 0x8]
        pop edi
        fld dword ptr [esp + 0x4]
        pop esi
        pop ecx
        ret
L_null_524A60:
        fldz
        pop edi
        fstp dword ptr [esp + 0x4]
        pop esi
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

extern "C" void ext_0053B240();
extern "C" void ext_006A5C62();

// [0x0052FFD0] sub_0052FFD0 (114 bytes)
extern "C" __declspec(naked) void __fastcall fn_0052FFD0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x40
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x4], esi
        test esi, esi
        mov dword ptr [esp + 0x10], 0x0
        je short L_fail_0052FFD0
        mov ecx, esi
        call ext_0053B240
        mov dword ptr [esi], 0x953f94
        mov dword ptr [esi + 0x14], 0x953f8c
        mov dword ptr [esi + 0x3c], 0x0
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
L_fail_0052FFD0:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052EC80] sub_0052EC80 (117 bytes)
extern "C" void ext_0052A410();
extern "C" int mem_00AED9D0;

extern "C" __declspec(naked) void __fastcall fn_0052EC80(void* self) {
    __asm {
        push -1
        push 0x008B4838
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        lea esi, [edi + 0x8]
        mov dword ptr [edi], 0x00953938
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [edi + 0x4], 0x00953930
        call ext_0052A410
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x61], 1
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [mem_00AED9D0], edi
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00526DC0] sub_00526DC0 (117 bytes)
extern "C" void ext_00506030();
extern "C" void ext_00526C70();
extern "C" void ext_008703B0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_00526DC0(void* self) {
    __asm {
        push -1
        push 0x00893BC9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00506030
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x0094F6CC
        call ext_008703B0
        lea ecx, [esi + 0x4C]
        mov byte ptr [esp + 0x10], 0x1
        call ext_008703B0
        lea ecx, [esi + 0x60]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00526C70
        lea ecx, [esi + 0xA4]
        mov byte ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00523220] sub_00523220 (110 bytes)
extern "C" void ext_00526DC0();

extern "C" __declspec(naked) void __fastcall fn_00523220(void* self) {
    __asm {
        push -1
        push 0x008937B6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00526DC0
        xor eax, eax
        mov dword ptr [esi], 0x0094F74C
        mov dword ptr [esi + 0xC0], eax
        mov dword ptr [esi + 0xC4], eax
        mov dword ptr [esi + 0xC8], eax
        mov dword ptr [esi + 0xD0], eax
        mov dword ptr [esi + 0xD4], eax
        mov dword ptr [esi + 0xD8], eax
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0xE0], eax
        mov dword ptr [esi + 0xE4], eax
        mov dword ptr [esi + 0xE8], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00528040] sub_00528040 (89 bytes)
extern "C" void ext_00506090();
extern "C" void ext_006246B0();
extern "C" __declspec(naked) void __fastcall fn_00528040(void* self) {
    __asm {
        push -1
        push 0x893c78
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x94f654
        mov dword ptr [esi + 0x38], 0x94f648
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00506090
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052A280] sub_0052A280 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0052A280(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x61], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x61], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x61], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x61], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x61], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x61], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x61], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x61], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x00524670] sub_00524670 (35 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F838;

extern "C" void __fastcall fn_00524670(void* self, int edx_unused, void* a1) {
    typedef void* (__fastcall *FnA)(void* self, int edx_unused, void* a1);
    typedef void (__cdecl *FnB)(void* dst, void* src);
    void* r = ((FnA)ext_0063EFE0)(a1, edx_unused, (void*)mem_00A9F838);
    ((FnB)ext_004275E0)((char*)self + 0x0c, r);
}

// [0x0052A140] sub_0052A140 (82 bytes)
extern "C" void ext_00532900();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0052A140(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00532900
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00526960] sub_00526960 (102 bytes)
extern "C" void ext_005013F0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00526960(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov byte ptr [esi + 0x40], 0
        jbe m526960_ok1
        call ebp
    m526960_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m526960_ok2
        call ebp
    m526960_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_005013F0
        mov edi, dword ptr [esi + 0x18]
        add esi, 0x10
        cmp dword ptr [esi + 0x4], edi
        jbe m526960_ok3
        call ebp
    m526960_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m526960_ok4
        call ebp
    m526960_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_005013F0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00527310] sub_00527310 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00527310(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa43f48
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x953344
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip_00527310
        mov dword ptr [esi + 0x8], edi
    L_skip_00527310:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00527EC0] sub_00527EC0 (150 bytes)
extern "C" void ext_00527D60();
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00527EC0(void* self, int edx_unused, const int* a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        cmp esi, edi
        mov dword ptr [esp + 0x10], esi
        je L_found
        mov eax, dword ptr [esp + 0x18]
        mov eax, dword ptr [eax]
    L_loop:
        cmp dword ptr [esi], eax
        je L_found
        add esi, 0x4
        cmp esi, edi
        jne L_loop
    L_found:
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        cmp ebp, dword ptr [ebx + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        test ebx, ebx
        je L_bad4
        cmp ebx, ebx
        je L_ok4
    L_bad4:
        call dword ptr [mem_00925134]
    L_ok4:
        mov edi, esi
        sub edi, ebp
        sar edi, 0x2
        test ebx, ebx
        pop ebp
        jne L_ok5
        call dword ptr [mem_00925134]
    L_ok5:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_ok6
        call dword ptr [mem_00925134]
    L_ok6:
        push esi
        push ebx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, ebx
        mov dword ptr [esi], 0x0
        call ext_00527D60
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x005285A0] sub_005285A0 (157 bytes)
extern "C" int mem_00AED340;
extern "C" float mem_00AED330;
extern "C" float mem_00AED32C;
extern "C" int mem_00AED320;
extern "C" float mem_00AED328;
extern "C" float mem_00AED324;
extern "C" float mem_00AED33C;
extern "C" float mem_00AED338;
extern "C" float mem_00AED334;
extern "C" int mem_00AED31C;
extern "C" void* __cdecl fn_005285A0(int a) {
    switch (a) {
    case 0:
        if (!(mem_00AED340 & 1)) {
            mem_00AED340 |= 1;
            mem_00AED31C = 0x953400;
            ((void (__cdecl*)(int))ext_006A6C87)(0x91a200);
        }
        return &mem_00AED31C;
    case 1:
        if (!(mem_00AED340 & 2)) {
            mem_00AED340 |= 2;
            mem_00AED330 = 0.0f;
            mem_00AED32C = 0.0f;
            mem_00AED320 = 0x953414;
            mem_00AED328 = 0.0f;
            mem_00AED324 = 0.0f;
            mem_00AED33C = 0.0f;
            mem_00AED338 = 0.0f;
            mem_00AED334 = 0.0f;
            ((void (__cdecl*)(int))ext_006A6C87)(0x91a1f0);
        }
        return &mem_00AED320;
    }
    return 0;
}

// [0x0052F710] sub_0052F710 (83 bytes)
extern "C" void ext_0053A810();
extern "C" __declspec(naked) void __fastcall fn_0052F710(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov ecx, dword ptr [esi + 0x3c]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052FB80] sub_0052FB80 (111 bytes)
extern "C" void ext_00532B40();
extern "C" void ext_00538CD0();
extern "C" void ext_0053A810();

extern "C" __declspec(naked) void __fastcall fn_0052FB80(void* self) {
    __asm {
        push -1
        push 0x894d34
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x108]
        mov dword ptr [esp + 0x10], 0x2
        call ext_00532B40
        lea ecx, [esi + 0xec]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00532B40
        lea ecx, [esi + 0xc4]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00538CD0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052F920] sub_0052F920 (121 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00532B40();
extern "C" void ext_00537E70();
extern "C" void ext_00539900();
extern "C" void ext_0053A810();
extern "C" __declspec(naked) void __fastcall fn_0052F920(void* self) {
    __asm {
        push -1
        push 0x894cfc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xbc]
        mov dword ptr [esp + 0x10], 0x3
        call ext_00493D90
        lea ecx, [esi + 0xa0]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00532B40
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00539900
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00537E70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00523000] sub_00523000 (171 bytes)
// Copy-constructs `count` 0x28-byte polymorphic elements at dst from *src (vptr, two dwords, std::string at +0xc).
// Inline SEH frame: on exception, destroys the already-constructed elements via vtable[0] and rethrows.
// Written as naked asm so the handler stays inline (a C++ try/catch emits separate __ehhandler/funclet symbols).
extern "C" int mem_00924FE0;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_00523000(void* dst, unsigned int count, const void* src) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x893789
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0x0
loop_top:
        test ebx, ebx
        jbe done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        je skip_ctor
        mov dword ptr [esi], 0x94f484
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edi + 0x8]
        lea edx, [edi + 0xc]
        mov dword ptr [esi + 0x8], ecx
        push edx
        lea ecx, [esi + 0xc]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE0]
skip_ctor:
        sub ebx, 0x1
        add esi, 0x28
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
        mov edi, edi
dtor_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0x0
        mov ecx, esi
        call edx
        add esi, 0x28
        cmp esi, edi
        jne dtor_loop
rethrow:
        push 0x0
        push 0x0
        call ext_006A6DD2
done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00523120] sub_00523120 (54 bytes)
extern "C" void ext_00523000();

extern "C" __declspec(naked) void* __fastcall fn_00523120(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00523000
        lea ecx, [esi + 4*esi]
        add esp, 0x18
        lea eax, [edi + 8*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005231F0] sub_005231F0 (41 bytes)
extern "C" void ext_00505A80();

extern "C" __declspec(naked) void __fastcall fn_005231F0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_00505A80
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00526180] sub_00526180 (83 bytes)
extern "C" void ext_00501140();
extern "C" void* __cdecl ext_00671F30(void* out);
extern "C" void* __cdecl ext_006721F0(void* out, void* val);

extern "C" void* __fastcall fn_00526180(void* self, int edx_unused, void* out, void* key) {
    typedef void* (__thiscall *FindFn)(void* self, void* key);
    volatile int dummy = 0;
    void* res = ((FindFn)ext_00501140)(self, key);
    if (!res) {
        res = ((FindFn)ext_00501140)((char*)self + 0x10, key);
    }
    if (res) {
        ext_006721F0(out, res);
    } else {
        ext_00671F30(out);
    }
    return out;
}

// [0x00526BE0] sub_00526BE0 (125 bytes)
extern "C" void ext_00506090();
extern "C" void ext_005069B0();
extern "C" void ext_008703A0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00526BE0(void* self) {
    __asm {
        push -1
        push 0x00893BC9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0094F6CC
        lea ecx, [esi + 0xa4]
        mov dword ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x60]
        mov byte ptr [esp + 0x10], 0x2
        call ext_005069B0
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x10], 0x1
        call ext_008703A0
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 0x0
        call ext_008703A0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00506090
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00523160] sub_00523160 (134 bytes)
extern "C" void ext_00505DC0();
extern "C" void ext_00526BE0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00523160(void* self) {
    __asm {
        push -1
        push 0x8937b6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x94f74c
        lea ecx, [esi + 0xdc]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00505DC0
        mov eax, dword ptr [esi + 0xd0]
        test eax, eax
        je L_00523160_skip
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_00523160_skip:
        mov ecx, esi
        mov dword ptr [esi + 0xd0], 0x0
        mov dword ptr [esi + 0xd4], 0x0
        mov dword ptr [esi + 0xd8], 0x0
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00526BE0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00521B00] sub_00521B00 (107 bytes)
extern "C" void ext_00661980();
extern "C" void ext_005B0CA0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_00521B00(void* self) {
    __asm {
        push -1
        push 0x008934af
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi + 0x4], 0x928efc
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [esi], 0x95272c
        mov dword ptr [esi + 0x4], 0x9526fc
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x10], 0x2
        call ext_005B0CA0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00528D80] sub_00528D80 (264 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00404F00();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) void __fastcall fn_00528D80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x893f92
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x64
        push esi
        mov esi, dword ptr [esp + 0x78]
        movzx eax, word ptr [esi + 0xe]
        cmp eax, 0x8
        je L_8e6f
        cmp eax, 0x18
        je L_8e53
        cmp eax, 0x20
        je L_8e3c
        push 0x9534e4
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        movzx eax, word ptr [esi + 0xe]
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov dword ptr [esp + 0x78], 0x0
        call ext_00404F00
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x74], 0x1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x70], 0x0
        call dword ptr [mem_00924FF4]
        push 0x9534d4
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924ED0]
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00403560
        push 0x9f2dd4
        lea edx, [esp + 0x40]
        push edx
        mov dword ptr [esp + 0x44], 0x9534cc
        mov dword ptr [esp + 0x6c], esi
        call ext_006A6DD2

    L_8e3c:
        mov eax, dword ptr [esi + 0x4]
        add eax, eax
        add eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret

    L_8e53:
        mov esi, dword ptr [esi + 0x4]
        add esi, 0x1
        lea eax, [esi + 2*esi]
        and eax, -0x4
        pop esi
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret

    L_8e6f:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esp + 0x68]
        add eax, 0x3
        and eax, -0x4
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret
    }
}

// [0x00529120] sub_00529120 (111 bytes)
extern "C" int ext_00528D80(void* self);

extern "C" __declspec(naked) void __cdecl fn_00529120(void* self, unsigned char flag) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x10], ecx
        jle done
        push ebx
        mov bl, byte ptr [esp + 0x18]
        push edi
outer:
        xor edi, edi
        cmp dword ptr [esp + 0x18], edi
        jle next
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
inner:
        push esi
        call ext_00528D80
        imul eax, ebp
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        mov cl, byte ptr [esi + eax + 0x29]
        mov dl, byte ptr [esi + eax + 0x2b]
        add esp, 4
        test bl, bl
        jne skip
        mov byte ptr [esi + eax + 0x29], dl
        mov byte ptr [esi + eax + 0x2b], cl
skip:
        add edi, 1
        cmp edi, dword ptr [esp + 0x18]
        jl inner
        mov eax, dword ptr [esp + 0x10]
next:
        add ebp, 1
        cmp ebp, eax
        jl outer
        pop edi
        pop ebx
done:
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret
    }
}

// [0x005290A0] sub_005290A0 (117 bytes)
extern "C" __declspec(naked) void* __cdecl fn_005290A0(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0x4]
        xor ebp, ebp
        test ecx, ecx
        mov dword ptr [esp + 0x8], ecx
        mov dword ptr [esp + 0xc], eax
        jle L_ret
        push ebx
        mov bl, byte ptr [esp + 0x1c]
        push edi
    L_outer_test:
        test eax, eax
        jle L_outer_inc
        lea ecx, [esi + 0x29]
        xor edi, edi
        mov dword ptr [esp + 0x1c], eax
    L_inner_push:
        push esi
        call ext_00528D80
        imul eax, ebp
        add eax, edi
        mov cl, byte ptr [eax + esi + 0x28]
        mov dl, byte ptr [esi + eax + 0x2a]
        add esp, 0x4
        test bl, bl
        jne L_skip_swap
        mov byte ptr [eax + esi + 0x28], dl
        mov byte ptr [esi + eax + 0x2a], cl
    L_skip_swap:
        add edi, 0x3
        sub dword ptr [esp + 0x1c], 0x1
        jne L_inner_push
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
    L_outer_inc:
        add ebp, 0x1
        cmp ebp, ecx
        jl L_outer_test
        pop edi
        pop ebx
    L_ret:
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x0052FA40] sub_0052FA40 (281 bytes)
extern "C" void ext_00538530();
extern "C" void ext_00539660();
extern "C" void ext_0053B240();
extern "C" __declspec(naked) void* __fastcall fn_0052FA40(void* self) {
    __asm {
        push -1
        push 0x894d34
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp+8], esi
        call ext_0053B240
        fld1
        mov dword ptr [esi], 0x95412c
        mov dword ptr [esi+0x14], 0x954124
        fst dword ptr [esi+0x44]
        fldz
        lea ecx, [esi+0xc4]
        fst dword ptr [esi+0x48]
        mov dword ptr [esp+0x14], 0
        fst dword ptr [esi+0x4c]
        fst dword ptr [esi+0x50]
        fst dword ptr [esi+0x54]
        fst dword ptr [esi+0x5c]
        fst dword ptr [esi+0x60]
        fst dword ptr [esi+0x64]
        fst dword ptr [esi+0x68]
        fst dword ptr [esi+0x70]
        fst dword ptr [esi+0x74]
        fst dword ptr [esi+0x78]
        fst dword ptr [esi+0x7c]
        fxch st(1)
        fst dword ptr [esi+0x58]
        fst dword ptr [esi+0x6c]
        fst dword ptr [esi+0x80]
        fst dword ptr [esi+0x84]
        fxch st(1)
        fst dword ptr [esi+0x88]
        fst dword ptr [esi+0x8c]
        fst dword ptr [esi+0x90]
        fst dword ptr [esi+0x94]
        fst dword ptr [esi+0x9c]
        fst dword ptr [esi+0xa0]
        fst dword ptr [esi+0xa4]
        fst dword ptr [esi+0xa8]
        fst dword ptr [esi+0xb0]
        fst dword ptr [esi+0xb4]
        fst dword ptr [esi+0xb8]
        fstp dword ptr [esi+0xbc]
        fst dword ptr [esi+0x98]
        fst dword ptr [esi+0xac]
        fstp dword ptr [esi+0xc0]
        call ext_00539660
        lea edi, [esi+0xec]
        mov ecx, edi
        mov byte ptr [esp+0x14], 1
        call ext_00538530
        mov dword ptr [edi], 0x953b8c
        lea ecx, [esi+0x108]
        mov byte ptr [esp+0x14], 2
        call ext_00538530
        mov ecx, [esp+0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052A310] sub_0052A310 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEDC28;
extern "C" int mem_00AEDC0C;
extern "C" __declspec(naked) void __fastcall fn_0052A310(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89400e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEDC28], al
        jne skip_init
        or dword ptr [mem_00AEDC28], eax
        push 0xa4415c
        push offset mem_00AEDC0C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91a2d0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEDC0C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005273B0] sub_005273B0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AED308;
extern "C" int mem_00AED2EC;
extern "C" __declspec(naked) void __fastcall fn_005273B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x893c3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AED308], al
        jne skip_init
        or dword ptr [mem_00AED308], eax
        push 0xa40d44
        push offset mem_00AED2EC
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91a130
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AED2EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00527570] sub_00527570 (33 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_005273B0();
extern "C" __declspec(naked) void __fastcall fn_00527570(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp+4], 0
        call ext_005273B0
        mov esi, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00527B40] sub_00527B40 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00527B40(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa43f48
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x953390
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne l1
        mov [esi+8], edi
    l1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je l5
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe l3
        call dword ptr [mem_00925134]
    l3:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe l4
        call dword ptr [mem_00925134]
    l4:
        cmp edi, ebp
        mov [esp+0x14], edi
        je l8
    lp:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je l8
        add edi, 4
        cmp edi, ebp
        jne lp
    l8:
        test ebx, ebx
        je l9
        cmp ebx, [esp+0x28]
        je la
    l9:
        call dword ptr [mem_00925134]
    la:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp l6
    l5:
        test ecx, ecx
        jne l5b
        xor eax, eax
        jmp l5c
    l5b:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    l5c:
        mov [esi+0x20], eax
    l6:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne m1
        xor eax, eax
        jmp m2
    m1:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m2:
        cmp [esi+0x20], eax
        jbe m5
        test edx, edx
        jne m3
        xor eax, eax
        jmp m4
    m3:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m4:
        mov [esi+0x20], eax
    m5:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x00528EC0] sub_00528EC0 (466 bytes)
extern "C" void ext_006A6EF8();
extern "C" int mem_00925208;
extern "C" int mem_00925260;
extern "C" int mem_0092525C;
extern "C" int mem_00925258;
extern "C" int mem_009251D8;
extern "C" int mem_00953534;
extern "C" int mem_00953500;

extern "C" __declspec(naked) void* __cdecl fn_00528EC0(void* src, unsigned char flag) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esi + 0x4]
        push edi
        add eax, 0x1
        lea edi, [eax + eax*2]
        mov eax, dword ptr [esi + 0x20]
        and edi, -4
        imul edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        add edi, 0x28
        cmp eax, ebp
        jne L_528ef1
        mov cl, byte ptr [esi + 0xe]
        mov eax, 0x1
        shl eax, cl
    L_528ef1:
        add eax, eax
        add eax, eax
        push eax
        call dword ptr [mem_00925208]
        mov ebx, eax
        add esp, 0x4
        cmp ebx, ebp
        jne L_528f25
        push offset mem_00953534
    L_528f0a:
        call dword ptr [mem_00925260]
        add eax, 0x40
        push eax
        call dword ptr [mem_0092525C]
        add esp, 0x8
        push 0x1
        call dword ptr [mem_00925258]
    L_528f25:
        mov eax, dword ptr [esi + 0x20]
        cmp eax, ebp
        jne L_528f36
        mov cl, byte ptr [esi + 0xe]
        mov eax, 0x1
        shl eax, cl
    L_528f36:
        lea ecx, [eax*4]
        push ecx
        lea edx, [esi + 0x28]
        push edx
        push ebx
        call ext_006A6EF8
        push edi
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x10
        cmp edi, ebp
        jne L_528f5f
        push offset mem_00953500
        jmp L_528f0a
    L_528f5f:
        mov dword ptr [edi], 0x28
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], eax
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [edi + 0x8], ecx
        mov word ptr [edi + 0xc], 0x1
        mov word ptr [edi + 0xe], 0x18
        mov dword ptr [edi + 0x10], ebp
        mov dword ptr [edi + 0x14], ebp
        mov dword ptr [edi + 0x18], ebp
        mov dword ptr [edi + 0x1c], ebp
        mov dword ptr [edi + 0x20], ebp
        mov dword ptr [edi + 0x24], ebp
        mov eax, dword ptr [esi + 0x20]
        cmp eax, ebp
        jne L_528fa0
        mov cl, byte ptr [esi + 0xe]
        mov eax, 0x1
        shl eax, cl
    L_528fa0:
        mov edx, dword ptr [esi + 0x4]
        lea ebp, [esi + eax*4 + 0x28]
        mov eax, dword ptr [esi + 0x8]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x10], ecx
        jle L_529079
    L_528fc0:
        cmp dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x14], ecx
        jle L_529066
        mov dword ptr [esp + 0x18], ecx
    L_528fd2:
        push esi
        call ext_00528D80
        mov esi, eax
        imul esi, dword ptr [esp + 0x14]
        add esi, dword ptr [esp + 0x18]
        push edi
        call ext_00528D80
        imul eax, dword ptr [esp + 0x18]
        add eax, dword ptr [esp + 0x20]
        movzx ecx, byte ptr [esi + ebp]
        add esp, 0x8
        cmp byte ptr [esp + 0x2c], 0x0
        je L_529020
        movzx edx, byte ptr [ebx + ecx*4]
        mov byte ptr [eax + edi + 0x28], dl
        movzx ecx, byte ptr [esi + ebp]
        movzx edx, byte ptr [ebx + ecx*4 + 0x1]
        mov byte ptr [edi + eax + 0x29], dl
        movzx ecx, byte ptr [esi + ebp]
        movzx edx, byte ptr [ebx + ecx*4 + 0x2]
        jmp L_52903e
    L_529020:
        movzx edx, byte ptr [ebx + ecx*4 + 0x2]
        mov byte ptr [eax + edi + 0x28], dl
        movzx ecx, byte ptr [esi + ebp]
        movzx edx, byte ptr [ebx + ecx*4 + 0x1]
        mov byte ptr [edi + eax + 0x29], dl
        movzx ecx, byte ptr [esi + ebp]
        movzx edx, byte ptr [ebx + ecx*4]
    L_52903e:
        add dword ptr [esp + 0x18], 0x3
        mov esi, dword ptr [esp + 0x28]
        mov byte ptr [edi + eax + 0x2a], dl
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x1
        cmp eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x14], eax
        jl L_528fd2
        mov eax, dword ptr [esp + 0x20]
        xor ecx, ecx
    L_529066:
        mov edx, dword ptr [esp + 0x10]
        add edx, 0x1
        cmp edx, eax
        mov dword ptr [esp + 0x10], edx
        jl L_528fc0
    L_529079:
        push ebx
        mov ebx, dword ptr [mem_009251D8]
        call ebx
        push esi
        call ebx
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x00525C40] sub_00525C40 (557 bytes)
extern "C" void ext_00672080();
extern "C" int mem_008B33B8;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00525C40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008B33B8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 4]
        test edi, edi
        jne loc_525C68
        xor ebp, ebp
        jmp loc_525C7E
    loc_525C68:
        mov ecx, dword ptr [esi + 8]
        sub ecx, edi
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 3
        mov ebp, edx
        shr ebp, 0x1f
        add ebp, edx
    loc_525C7E:
        cmp edi, dword ptr [esi + 8]
        mov dword ptr [esp + 0xc], ebp
        jbe loc_525C8D
        call dword ptr [mem_00925134]
    loc_525C8D:
        mov eax, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], eax
        mov dword ptr [esp + 0x10], eax
        jbe loc_525C9F
        call dword ptr [mem_00925134]
    loc_525C9F:
        push ebx
        xor ebx, ebx
        test ebp, ebp
        jbe loc_525D1B
    loc_525CA6:
        test esi, esi
        je loc_525CAE
        cmp esi, esi
        je loc_525CB4
    loc_525CAE:
        call dword ptr [mem_00925134]
    loc_525CB4:
        cmp edi, dword ptr [esp + 0x14]
        je loc_525D1B
        test esi, esi
        jne loc_525CC4
        call dword ptr [mem_00925134]
    loc_525CC4:
        cmp edi, dword ptr [esi + 8]
        jb loc_525CCF
        call dword ptr [mem_00925134]
    loc_525CCF:
        mov ecx, dword ptr [edi + 0x20]
        mov edx, dword ptr [ecx]
        lea eax, [edi + 0x1c]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        fstp dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        je loc_525CF4
        mov eax, dword ptr [esi + 0x28]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jb loc_525CFA
    loc_525CF4:
        call dword ptr [mem_00925134]
    loc_525CFA:
        mov ecx, dword ptr [esi + 0x24]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx + ebx*4]
        add ebx, 1
        cmp edi, dword ptr [esi + 8]
        jb loc_525D12
        call dword ptr [mem_00925134]
    loc_525D12:
        add edi, 0x24
        cmp ebx, dword ptr [esp + 0x10]
        jb loc_525CA6
    loc_525D1B:
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x74]
        lea edi, [esi + 0x30]
        push edi
        lea eax, [esi + 0x20]
        push eax
        call edx
        lea ebp, [esi + 0x10]
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        mov dword ptr [esp + 0x34], 0
        mov dword ptr [esp + 0x10], ebp
        jbe loc_525D4B
        call dword ptr [mem_00925134]
    loc_525D4B:
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], eax
        mov ebx, ebp
        mov dword ptr [esp + 0x18], eax
        jbe loc_525D60
        call dword ptr [mem_00925134]
        nop
    loc_525D60:
        test ebx, ebx
        je loc_525D68
        cmp ebx, ebp
        je loc_525D72
    loc_525D68:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp loc_525D78
    loc_525D72:
        mov ebp, dword ptr [mem_00925134]
    loc_525D78:
        cmp esi, dword ptr [esp + 0x18]
        je loc_525E1C
        mov ecx, dword ptr [edi + 4]
        test ecx, ecx
        je loc_525D97
        mov eax, dword ptr [edi + 8]
        sub eax, ecx
        sar eax, 2
        cmp dword ptr [esp + 0x34], eax
        jb loc_525D99
    loc_525D97:
        call ebp
    loc_525D99:
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [edi + 4]
        fld dword ptr [eax + ecx*4]
        lea eax, [eax + ecx*4]
        fstp dword ptr [esp + 0x14]
        push ecx
        fld dword ptr [esp + 0x18]
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp]
        call ext_00672080
        test ebx, ebx
        mov dword ptr [esp + 0x2c], 0
        jne loc_525DC9
        call ebp
    loc_525DC9:
        cmp esi, dword ptr [ebx + 8]
        jb loc_525DD0
        call ebp
    loc_525DD0:
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x1c]
        lea ebp, [esp + 0x1c]
        push ebp
        push eax
        mov eax, dword ptr [edx + 0xa4]
        call eax
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov dword ptr [esp + 0x2c], 0xffffffff
        je loc_525E00
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        mov eax, ebp
        push eax
        call edx
    loc_525E00:
        add dword ptr [esp + 0x34], 1
        cmp esi, dword ptr [ebx + 8]
        jb loc_525E10
        call dword ptr [mem_00925134]
    loc_525E10:
        mov ebp, dword ptr [esp + 0x10]
        add esi, 0x24
        jmp loc_525D60
    loc_525E1C:
        mov eax, dword ptr [edi + 4]
        test eax, eax
        pop ebx
        je loc_525E57
        mov ecx, dword ptr [edi + 8]
        sub ecx, eax
        sar ecx, 2
        je loc_525E57
        test eax, eax
        je loc_525E3C
        mov edx, dword ptr [edi + 8]
        sub edx, eax
        sar edx, 2
        jne loc_525E3E
    loc_525E3C:
        call ebp
    loc_525E3E:
        mov eax, dword ptr [edi + 4]
        fld dword ptr [eax]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 4
    loc_525E57:
        mov ecx, dword ptr [esp + 0x20]
        fldz
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 4
    }
}

// [0x00529D70] sub_00529D70 (684 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00528530();
extern "C" void ext_00528CC0();
extern "C" void ext_00528D00();
extern "C" void ext_00528D30();
extern "C" void ext_00528EC0();
extern "C" void ext_005290A0();
extern "C" void ext_00529120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_00924ED0;
extern "C" int mem_009252A8;
extern "C" int mem_009252AC;
extern "C" int mem_00925208;
extern "C" int mem_009251D8;
extern "C" int mem_00925264;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00529D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x00893FE9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        call ext_00528530
        mov ebp, eax
        push 0x009536D8
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x10], ebp
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x78]
        xor ebx, ebx
        push esi
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x74], ebx
        call dword ptr [mem_00924ED0]
        push 0x009536D4
        push esi
        call dword ptr [mem_009252A8]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        jne loc_529E07
        push 0x009536C4
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924ED0]
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00403560
        push 0x009F2DD4
        lea ecx, [esp + 0x40]
        push ecx
        mov dword ptr [esp + 0x44], 0x009534CC
        mov dword ptr [esp + 0x6C], ebx
        call ext_006A6DD2
    loc_529E07:
        push edi
        mov edi, dword ptr [mem_009252AC]
        push esi
        push 1
        lea edx, [esp + 0x1C]
        push 2
        push edx
        call edi
        push esi
        push 1
        lea eax, [esp + 0x30]
        push 4
        push eax
        call edi
        push esi
        push 1
        lea ecx, [esp + 0x44]
        push 2
        push ecx
        call edi
        push esi
        push 1
        lea edx, [esp + 0x56]
        push 2
        push edx
        call edi
        add esp, 0x40
        push esi
        push 1
        lea eax, [esp + 0x28]
        push 4
        push eax
        call edi
        add esp, 0x10
        cmp ebp, 1
        jne loc_529EA1
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_00528CC0
        mov edx, dword ptr [esp + 0x1C]
        push edx
        mov word ptr [esp + 0x1C], ax
        call ext_00528CD0
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        call ext_00528CC0
        mov ecx, dword ptr [esp + 0x2A]
        push ecx
        mov word ptr [esp + 0x2C], ax
        call ext_00528CC0
        mov edx, dword ptr [esp + 0x30]
        push edx
        mov word ptr [esp + 0x32], ax
        call ext_00528CD0
        add esp, 0x14
        mov dword ptr [esp + 0x20], eax
    loc_529EA1:
        mov ebp, dword ptr [esp + 0x18]
        add ebp, -0xE
        cmp ebp, ebx
        ja loc_529ED5
        lea eax, [esp + 0x24]
        push eax
        lea ecx, [esp + 0x44]
        call ext_00403560
        push 0x009F2DD4
        lea ecx, [esp + 0x44]
        push ecx
        mov dword ptr [esp + 0x48], 0x009534CC
        mov dword ptr [esp + 0x70], ebx
        call ext_006A6DD2
    loc_529ED5:
        push ebp
        call dword ptr [mem_00925208]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne loc_529F27
        push eax
        call dword ptr [mem_009251D8]
        add esp, 4
        push 0x0095364C
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924ED0]
        lea edx, [esp + 0x24]
        push edx
        lea ecx, [esp + 0x44]
        call ext_00403560
        push 0x009F2DD4
        lea eax, [esp + 0x44]
        push eax
        mov dword ptr [esp + 0x48], 0x009534CC
        mov dword ptr [esp + 0x70], ebx
        call ext_006A6DD2
    loc_529F27:
        push esi
        push 1
        push ebp
        push ebx
        call edi
        add esp, 0x10
        test eax, eax
        jne loc_529F7B
        push ebx
        call dword ptr [mem_009251D8]
        add esp, 4
        push 0x009536A8
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924ED0]
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x44]
        call ext_00403560
        push 0x009F2DD4
        lea edx, [esp + 0x44]
        push edx
        mov dword ptr [esp + 0x48], 0x009534CC
        mov dword ptr [esp + 0x70], 0
        call ext_006A6DD2
    loc_529F7B:
        cmp dword ptr [esp + 0x10], 1
        jne loc_529FA3
        push 3
        push ebx
        call ext_00528D00
        lea eax, [ebx + 0xC]
        push 2
        push eax
        call ext_00528D30
        lea ecx, [ebx + 0x10]
        push 6
        push ecx
        call ext_00528D00
        add esp, 0x18
    loc_529FA3:
        movzx eax, word ptr [ebx + 0xE]
        cmp eax, 8
        je loc_529FD6
        cmp eax, 0x18
        je loc_529FC6
        cmp eax, 0x20
        jne loc_529FE9
        mov edx, dword ptr [esp + 0x80]
        push edx
        push ebx
        call ext_00529120
        jmp loc_529FE6
    loc_529FC6:
        mov eax, dword ptr [esp + 0x80]
        push eax
        push ebx
        call ext_005290A0
        jmp loc_529FE6
    loc_529FD6:
        mov ecx, dword ptr [esp + 0x80]
        push ecx
        push ebx
        call ext_00528EC0
        mov ebx, eax
    loc_529FE6:
        add esp, 8
    loc_529FE9:
        push esi
        call dword ptr [mem_00925264]
        add esp, 4
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x74], 0xFFFFFFFF
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x6C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 8
    }
}

// [0x0052A650] sub_0052A650 (739 bytes)
extern "C" void ext_0052A070();
extern "C" void ext_0052A090();
extern "C" void ext_0052A0E0();
extern "C" void ext_0052A1A0();
extern "C" void ext_0052A1C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0052A650(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a0d5b
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x4c
        cmp byte ptr [eax + 0x61], 0x0
        push ebp
        mov ebp, ecx
        je L_52A6CE
        push 0x929218
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x5c], 0x1
        mov dword ptr [esp + 0x2c], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x2c]
        push ecx
        mov byte ptr [esp + 0x60], 0x0
        mov dword ptr [esp + 0x30], 0x928ee4
        call ext_006A6DD2
    L_52A6CE:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x10], ebx
        call ext_0052A1C0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x61], 0x0
        je L_52A6ED
        mov edi, dword ptr [ebx + 0x8]
        jmp L_52A705
    L_52A6ED:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x61], 0x0
        je L_52A6FA
        mov edi, eax
        jmp L_52A705
    L_52A6FA:
        mov ecx, dword ptr [esp + 0x74]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_52A770
    L_52A705:
        cmp byte ptr [edi + 0x61], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_52A711
        mov dword ptr [edi + 0x4], esi
    L_52A711:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_52A71E
        mov dword ptr [eax + 0x4], edi
        jmp L_52A729
    L_52A71E:
        cmp dword ptr [esi], ebx
        jne L_52A726
        mov dword ptr [esi], edi
        jmp L_52A729
    L_52A726:
        mov dword ptr [esi + 0x8], edi
    L_52A729:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_52A749
        cmp byte ptr [edi + 0x61], 0x0
        je L_52A73E
        mov eax, esi
        jmp L_52A747
    L_52A73E:
        push edi
        call ext_0052A070
        add esp, 0x4
    L_52A747:
        mov dword ptr [ebx], eax
    L_52A749:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_52A7C7
        cmp byte ptr [edi + 0x61], 0x0
        je L_52A762
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_52A7C7
    L_52A762:
        push edi
        call ext_0052A1A0
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_52A7C7
    L_52A770:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_52A780
        mov esi, ecx
        jmp L_52A79A
    L_52A780:
        cmp byte ptr [edi + 0x61], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_52A78C
        mov dword ptr [edi + 0x4], esi
    L_52A78C:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_52A79A:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_52A7A7
        mov dword ptr [eax + 0x4], ecx
        jmp L_52A7B5
    L_52A7A7:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_52A7B2
        mov dword ptr [eax], ecx
        jmp L_52A7B5
    L_52A7B2:
        mov dword ptr [eax + 0x8], ecx
    L_52A7B5:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x60]
        mov al, byte ptr [ecx + 0x60]
        mov byte ptr [ecx + 0x60], dl
        mov byte ptr [ebx + 0x60], al
    L_52A7C7:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x60], bl
        jne L_52A8C8
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_52A8C5
    L_52A7E2:
        cmp byte ptr [edi + 0x60], bl
        jne L_52A8C5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_52A854
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x60], 0x0
        jne L_52A80C
        mov byte ptr [eax + 0x60], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x60], 0x0
        call ext_0052A090
        mov eax, dword ptr [esi + 0x8]
    L_52A80C:
        cmp byte ptr [eax + 0x61], 0x0
        jne L_52A884
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x60], bl
        jne L_52A821
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x60], bl
        je L_52A880
    L_52A821:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x60], bl
        jne L_52A83B
        mov byte ptr [edx + 0x60], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x60], 0x0
        call ext_0052A0E0
        mov eax, dword ptr [esi + 0x8]
    L_52A83B:
        mov cl, byte ptr [esi + 0x60]
        mov byte ptr [eax + 0x60], cl
        mov byte ptr [esi + 0x60], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x60], bl
        call ext_0052A090
        jmp L_52A8C5
    L_52A854:
        cmp byte ptr [eax + 0x60], 0x0
        jne L_52A86B
        mov byte ptr [eax + 0x60], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x60], 0x0
        call ext_0052A0E0
        mov eax, dword ptr [esi]
    L_52A86B:
        cmp byte ptr [eax + 0x61], 0x0
        jne L_52A884
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x60], bl
        jne L_52A897
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x60], bl
        jne L_52A897
    L_52A880:
        mov byte ptr [eax + 0x60], 0x0
    L_52A884:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_52A7E2
        jmp L_52A8C5
    L_52A897:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x60], bl
        jne L_52A8AF
        mov byte ptr [edx + 0x60], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x60], 0x0
        call ext_0052A090
        mov eax, dword ptr [esi]
    L_52A8AF:
        mov cl, byte ptr [esi + 0x60]
        mov byte ptr [eax + 0x60], cl
        mov byte ptr [esi + 0x60], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x60], bl
        call ext_0052A0E0
    L_52A8C5:
        mov byte ptr [edi + 0x60], bl
    L_52A8C8:
        mov esi, dword ptr [esp + 0x10]
        add esi, 0xc
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x64], 0x2
        call ext_00532770
        mov ecx, esi
        mov dword ptr [esp + 0x64], -0x1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_52A910
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_52A910:
        mov ecx, dword ptr [esp + 0x64]
        mov eax, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x00525E80] sub_00525E80 (754 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004276B0();
extern "C" void ext_00500DA0();
extern "C" void ext_005011B0();
extern "C" void ext_0066AD10();
extern "C" void ext_00685900();
extern "C" void ext_006A6C87();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00AEB248;

extern "C" __declspec(naked) void __fastcall fn_00525E80(void* self) {
    __asm {
        push -1
        push 0x893aaa
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x84
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x9c]
        mov ebx, dword ptr [ebp + 0x40]
        cmp ebx, dword ptr [ebp + 0x44]
        push esi
        mov esi, dword ptr [mem_00925134]
        push edi
        mov dword ptr [esp + 0x1c], ecx
        jbe L_LOOPHEAD_PRE
        call esi
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_LOOPHEAD_PRE:
        mov edi, dword ptr [ebp + 0x44]
        cmp dword ptr [ebp + 0x40], edi
        jbe L_ECA
        call esi
L_ECA:
        cmp ebx, edi
        je L_F8D
        cmp ebx, dword ptr [ebp + 0x44]
        jb L_ED9
        call esi
L_ED9:
        cmp ebx, dword ptr [ebp + 0x44]
        mov edi, dword ptr [ebx]
        jb L_EE2
        call esi
L_EE2:
        mov ecx, dword ptr [ebx]
        push 1
        push 0
        lea eax, [esp + 0x1c]
        push eax
        call ext_00685900
        mov esi, eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, edi
        mov dword ptr [esp + 0x9c], 0x0
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        call ext_005011B0
        mov edi, eax
        cmp edi, esi
        je L_F55
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_F27
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
L_F27:
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], ecx
        cmp dword ptr [esi + 0x4], 0x0
        je L_F45
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        lea eax, [esp + 0x2c]
        push eax
        call edx
        jmp L_F51
L_F45:
        mov dword ptr [esp + 0x10], 0x0
        lea eax, [esp + 0x10]
L_F51:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
L_F55:
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x9c], 0xffffffff
        je L_F74
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx
L_F74:
        cmp ebx, dword ptr [ebp + 0x44]
        jb L_F7F
        call dword ptr [mem_00925134]
L_F7F:
        mov esi, dword ptr [mem_00925134]
        add ebx, 0x4
        jmp L_LOOPHEAD_PRE
L_F8D:
        mov edi, dword ptr [ebp + 0x54]
        cmp edi, dword ptr [ebp + 0x58]
        jbe L_F97
        call esi
L_F97:
        mov dword ptr [esp + 0x18], edi
        jmp L_FA0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_FA0:
        mov ebx, dword ptr [ebp + 0x58]
        cmp dword ptr [ebp + 0x54], ebx
        jbe L_FAA
        call esi
L_FAA:
        cmp edi, ebx
        je L_6157
        cmp edi, dword ptr [ebp + 0x58]
        jb L_FB9
        call esi
L_FB9:
        cmp edi, dword ptr [ebp + 0x58]
        mov esi, dword ptr [edi]
        jb L_FC6
        call dword ptr [mem_00925134]
L_FC6:
        mov ecx, dword ptr [edi]
        push 1
        push 0
        lea eax, [esp + 0x34]
        push eax
        call ext_00685900
        mov ebx, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        mov dword ptr [esp + 0x9c], 0x1
        call eax
        mov esi, dword ptr [esp + 0x1c]
        mov ebp, eax
        push ebp
        lea ecx, [esp + 0x24]
        add esi, 0x10
        push ecx
        mov ecx, esi
        call ext_00500DA0
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_6010
        call dword ptr [mem_00925134]
L_6010:
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        je L_601C
        cmp eax, esi
        je L_6026
L_601C:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
L_6026:
        mov esi, dword ptr [esp + 0x24]
        cmp esi, edi
        je L_60E5
        test eax, eax
        jne L_6040
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
L_6040:
        cmp esi, dword ptr [eax + 0x8]
        jb L_604B
        call dword ptr [mem_00925134]
L_604B:
        add esi, 0x1c
        je L_60E5
        cmp esi, ebx
        je L_6095
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_6067
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push esi
        call eax
L_6067:
        mov ecx, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x4], ecx
        cmp dword ptr [ebx + 0x4], 0x0
        je L_6085
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        lea eax, [esp + 0x2c]
        push eax
        call edx
        jmp L_6091
L_6085:
        mov dword ptr [esp + 0x10], 0x0
        lea eax, [esp + 0x10]
L_6091:
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
L_6095:
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        mov dword ptr [esp + 0x9c], 0xffffffff
        je L_60B4
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x2c]
        push eax
        call edx
L_60B4:
        mov eax, dword ptr [esp + 0xa4]
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, dword ptr [eax + 0x58]
        jb L_60CA
        call dword ptr [mem_00925134]
L_60CA:
        add dword ptr [esp + 0x18], 0x4
        mov edi, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0xa4]
        mov esi, dword ptr [mem_00925134]
        jmp L_FA0
L_60E5:
        lea edx, [esp + 0x34]
        push ebp
        push edx
        call ext_004276B0
        add esp, 0x8
        mov esi, eax
        test byte ptr [mem_00AEB248], 0x1
        mov bl, 0x2
        mov byte ptr [esp + 0x9c], bl
        jne L_6139
        or dword ptr [mem_00AEB248], 0x1
        push 0xa40484
        push 0xaeb22c
        mov byte ptr [esp + 0xa4], 0x3
        call ext_0066AD10
        push 0x919c80
        call ext_006A6C87
        add esp, 0xc
        mov byte ptr [esp + 0x9c], bl
L_6139:
        push esi
        push 0xaeb22c
        lea ecx, [esp + 0x58]
        call ext_0041FF30
        push 0x9d3748
        lea eax, [esp + 0x54]
        push eax
        call ext_006A6DD2
L_6157:
        mov ecx, dword ptr [esp + 0x94]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x90
        ret 0x4
    }
}

// [0x00520BD0] sub_00520BD0 (30 bytes)
extern "C" void ext_0051E2C0();
extern "C" void ext_0051E800();
extern "C" void ext_0051E940();
extern "C" void ext_00520910();

extern "C" __declspec(naked) void __fastcall fn_00520BD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0051E800
        mov ecx, esi
        call ext_0051E940
        mov ecx, esi
        call ext_0051E2C0
        mov ecx, esi
        pop esi
        jmp ext_00520910
    }
}

// [0x00521FD0] sub_00521FD0 (32 bytes)
extern "C" void ext_00521ED0();
extern "C" int mem_00924FE4;
extern "C" int mem_00928B5D;
extern "C" __declspec(naked) void __fastcall fn_00521FD0(void* self) {
    __asm {
        push ecx
        push 0x0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push offset mem_00928B5D
        call dword ptr [mem_00924FE4]
        call ext_00521ED0
        add esp, 0x24
        ret
    }
}

extern "C" void ext_00521C50();
extern "C" void ext_00521FF0();
extern "C" int mem_00952780;

// [0x00522080] sub_00522080 (33 bytes)
extern "C" __declspec(naked) void __cdecl fn_00522080(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_00521FF0
        push    offset mem_00952780
        lea     ecx, [esp + 0x4]
        call    ext_00521C50
        pop     ecx
        ret
    }
}

extern "C" void ext_006798D0();
extern "C" void ext_00527170();
extern "C" void ext_00526D40();
extern "C" int mem_009532F8;

// [0x00527280] sub_00527280 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00527280(void* self) {
    __asm {
        push    ecx
        lea     eax, [esp]
        push    0x0
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_00527170
        push    offset mem_009532F8
        lea     ecx, [esp + 0x4]
        call    ext_00526D40
        pop     ecx
        ret
    }
}

// [0x00524510] sub_00524510 (36 bytes)
extern "C" void ext_00524480();
extern "C" void ext_00524130();
extern "C" int mem_00952940;
extern "C" int mem_00952C14;

extern "C" __declspec(naked) void __cdecl fn_00524510(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    offset mem_00952940
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_00524480
        push    offset mem_00952C14
        lea     ecx, [esp + 0x4]
        call    ext_00524130
        pop     ecx
        ret
    }
}

// [0x00527250] sub_00527250 (39 bytes)
extern "C" void ext_00526B30();
extern "C" void ext_00527170();
extern "C" int mem_00A9EFF4;
extern "C" int mem_00A9F838;

extern "C" __declspec(naked) void __fastcall fn_00527250(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EFF4]
        push eax
        lea ecx, [esp + 4]
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        call ext_00527170
        mov edx, dword ptr [mem_00A9F838]
        push edx
        lea ecx, [esp + 4]
        call ext_00526B30
        pop ecx
        ret
    }
}

// [0x00520AB0] sub_00520AB0 (41 bytes)
extern "C" void ext_00520380();

extern "C" __declspec(naked) void __fastcall fn_00520AB0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_00520380
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00520D90] sub_00520D90 (41 bytes)
extern "C" void ext_00520AE0();

extern "C" __declspec(naked) void __cdecl fn_00520D90(void* first, void* last, const void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        push ebx
        mov ecx, esi
        call ext_00520AE0
        add esi, 0x168
        cmp esi, edi
        jne loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00520DC0] sub_00520DC0 (43 bytes)
extern "C" void ext_00520D30();

extern "C" __declspec(naked) void __fastcall fn_00520DC0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00520D30
        add esp, 0x1c
        ret
    }
}

// [0x005246A0] sub_005246A0 (51 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void* __fastcall fn_005246A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005275A0] sub_005275A0 (184 bytes)
extern "C" void ext_005246A0();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_005275A0() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_5275B6
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_5275BD
    loc_5275B6:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_5275BD:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_5275D6
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_5275DA
    loc_5275D6:
        mov     ebp, dword ptr [esp + 0x18]
    loc_5275DA:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_5275E8
        call    dword ptr [mem_00925134]
    loc_5275E8:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_5275FA
        call    dword ptr [mem_00925134]
    loc_5275FA:
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, edi
    loc_527600:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_527651
        test    ebx, ebx
        je      loc_527620
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_527615
        call    dword ptr [mem_00925134]
    loc_527615:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_52762C
    loc_527620:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_52762B
        call    dword ptr [mem_00925134]
    loc_52762B:
        push    ebp
    loc_52762C:
        mov     ecx, dword ptr [esi]
        call    ext_005246A0
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_527641
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_527641:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_52764C
        call    dword ptr [mem_00925134]
    loc_52764C:
        add     esi, 0x4
        jmp     loc_527600
    loc_527651:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x00520B90] sub_00520B90 (56 bytes)
extern "C" void ext_00520AE0();
extern "C" __declspec(naked) void* __cdecl fn_00520B90(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je skip_00520B90
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_00520B90:
        sub esi, 0x168
        sub edi, 0x168
        push esi
        mov ecx, edi
        call ext_00520AE0
        cmp esi, ebx
        jne loop_00520B90
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    skip_00520B90:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00520D30] sub_00520D30 (94 bytes)
extern "C" void ext_00520B90();

extern "C" __declspec(naked) int __cdecl fn_00520D30(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_00520B90
        sub esi, ebx
        mov eax, 0xb60b60b7
        imul esi
        add edx, esi
        sar edx, 0x8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x168
        add esp, 0x18
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00520740] sub_00520740 (58 bytes)
extern "C" void ext_00520500();

extern "C" __declspec(naked) int __fastcall fn_00520740(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00520500
        mov eax, esi
        imul eax, eax, 0x168
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_005B0D90();
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

// [0x00521360] sub_00521360 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_00521360(void* self) {
    __asm {
        push -1
        push 0x89342b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 4]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x95272c
        mov dword ptr [edi], 0x9526fc
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x18], 2
        call ext_005B0D90
        lea ecx, [esi + 8]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0052F210] sub_0052F210 (89 bytes)
extern "C" void ext_0053D070();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F210(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xd8
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053D070
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00527200] sub_00527200 (65 bytes)
extern "C" void ext_005269D0();
extern "C" void ext_00526A80();
extern "C" void ext_00526CC0();
extern "C" void ext_005270E0();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F6E8;
extern "C" __declspec(naked) void __fastcall fn_00527200(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_005270E0
        mov     ecx, dword ptr [mem_00A9F838]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_00526CC0
        mov     edx, dword ptr [mem_00A9F6E8]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_005269D0
        push    0x9532ec
        lea     ecx, [esp + 0x4]
        call    ext_00526A80
        pop     ecx
        ret
    }
}

// [0x005201F0] sub_005201F0 (389 bytes)
extern "C" void ext_0051DE50();
extern "C" void ext_0051E0D0();
extern "C" void ext_0051F270();
extern "C" void ext_0051F540();
extern "C" void ext_0051F640();
extern "C" void ext_0051F670();
extern "C" void ext_0051FEB0();

extern "C" __declspec(naked) void* __fastcall fn_005201F0(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_end_005201f0
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        push edi
        je L_220_005201f0
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_231_005201f0
    L_220_005201f0:
        mov ecx, esi
        call ext_0051FEB0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_231_005201f0:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        jne L_23d_005201f0
        xor eax, eax
        jmp L_253_005201f0
    L_23d_005201f0:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ebx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_253_005201f0:
        cmp ecx, eax
        ja L_2cc_005201f0
        mov byte ptr [esp + 0x14], 0x0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [ebp + 0x4]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        call ext_0051F270
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0x18
        push ecx
        push eax
        mov ecx, esi
        call ext_0051F670
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jne L_2a1_005201f0
        lea edx, [eax + 2*eax]
        shl edx, 0x6
        add edx, dword ptr [esi + 0x4]
        pop ebx
        pop edi
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_2a1_005201f0:
        mov ebp, dword ptr [ebp + 0x8]
        sub ebp, eax
        mov eax, 0x2aaaaaab
        imul ebp
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax + 2*eax]
        shl edx, 0x6
        add edx, dword ptr [esi + 0x4]
        pop ebx
        pop edi
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_2cc_005201f0:
        test ebx, ebx
        jne L_2d4_005201f0
        xor eax, eax
        jmp L_2ea_005201f0
    L_2d4_005201f0:
        mov edx, dword ptr [esi + 0xc]
        sub edx, ebx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_2ea_005201f0:
        cmp ecx, eax
        ja L_327_005201f0
        mov ecx, esi
        call ext_0051DE50
        lea edi, [eax + 2*eax]
        mov eax, dword ptr [ebp + 0x4]
        shl edi, 0x6
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_0051F540
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ebp + 0x8]
        add esp, 0xc
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0051F640
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_327_005201f0:
        test ebx, ebx
        je L_343_005201f0
        mov edx, dword ptr [esi + 0x8]
        push edx
        push ebx
        mov ecx, esi
        call ext_0051F670
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_343_005201f0:
        mov ecx, ebp
        call ext_0051DE50
        push eax
        mov ecx, esi
        call ext_0051E0D0
        test al, al
        je L_36c_005201f0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0x4]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0051F640
        mov dword ptr [esi + 0x8], eax
    L_36c_005201f0:
        pop ebx
        pop edi
    L_end_005201f0:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x00520780] sub_00520780 (399 bytes)
extern "C" void ext_0051DE70();
extern "C" void ext_0051E070();
extern "C" void ext_0051E120();
extern "C" void ext_0051E170();
extern "C" void ext_0051E530();
extern "C" void ext_0051EC00();
extern "C" void ext_00520AB0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00520780(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_00520908

        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        je L_005207b1

        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 0x8
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_005207bf

    L_005207b1:
        mov ecx, esi
        call ext_0051EC00
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4

    L_005207bf:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        push edi
        jne L_005207cc
        xor eax, eax
        jmp L_005207e4

    L_005207cc:
        mov edi, dword ptr [esi + 0x8]
        sub edi, ebx
        mov eax, 0xb60b60b7
        imul edi
        add edx, edi
        sar edx, 0x8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx

    L_005207e4:
        cmp ecx, eax
        ja L_00520862

        mov byte ptr [esp + 0x14], 0x0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push ebx
        push eax
        mov eax, dword ptr [ebp + 0x4]
        push eax
        call ext_0051E070
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0x18
        push ecx
        push eax
        mov ecx, esi
        call ext_0051E530
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jne L_00520835
        imul eax, eax, 0x168
        add eax, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4

    L_00520835:
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 0x8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x168
        add eax, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4

    L_00520862:
        test ebx, ebx
        jne L_0052086a
        xor eax, eax
        jmp L_00520882

    L_0052086a:
        mov edi, dword ptr [esi + 0xc]
        sub edi, ebx
        mov eax, 0xb60b60b7
        imul edi
        add edx, edi
        sar edx, 0x8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx

    L_00520882:
        cmp ecx, eax
        ja L_005208c1

        mov ecx, esi
        call ext_0051DE70
        mov edi, eax
        mov eax, dword ptr [ebp + 0x4]
        imul edi, edi, 0x168
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_0051E170
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0xc
        push edx
        push eax
        push edi
        mov ecx, esi
        call ext_00520AB0
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4

    L_005208c1:
        test ebx, ebx
        je L_005208dd
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push ebx
        mov ecx, esi
        call ext_0051E530
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4

    L_005208dd:
        mov ecx, ebp
        call ext_0051DE70
        push eax
        mov ecx, esi
        call ext_0051E120
        test al, al
        je L_00520906
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_00520AB0
        mov dword ptr [esi + 0x8], eax

    L_00520906:
        pop edi
        pop ebx

    L_00520908:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x00520AE0] sub_00520AE0 (171 bytes)
extern "C" void ext_00491150();
extern "C" void ext_0051ED10();
extern "C" void ext_005201F0();
extern "C" void ext_00520780();

extern "C" void* __fastcall fn_00520AE0(void* self, int edx_unused, void* other) {
    *(int*)((char*)self + 0x4) = *(int*)((char*)other + 0x4);
    *((char*)self + 0x8) = *((char*)other + 0x8);
    *((char*)self + 0x9) = *((char*)other + 0x9);
    ((void (__thiscall*)(void*, void*))ext_00491150)((char*)self + 0xc, (char*)other + 0xc);
    ((void (__thiscall*)(void*, void*))ext_00491150)((char*)self + 0x68, (char*)other + 0x68);
    ((void (__thiscall*)(void*, void*))ext_00491150)((char*)self + 0xc4, (char*)other + 0xc4);
    ((void (__thiscall*)(void*, void*))ext_005201F0)((char*)self + 0x120, (char*)other + 0x120);
    ((void (__thiscall*)(void*, void*))ext_005201F0)((char*)self + 0x130, (char*)other + 0x130);
    ((void (__thiscall*)(void*, void*))ext_00520780)((char*)self + 0x140, (char*)other + 0x140);
    *(int*)((char*)self + 0x150) = *(int*)((char*)other + 0x150);
    *(int*)((char*)self + 0x154) = *(int*)((char*)other + 0x154);
    ((void (__thiscall*)(void*, void*))ext_0051ED10)((char*)self + 0x158, (char*)other + 0x158);
    return self;
}

// [0x00528310] sub_00528310 (83 bytes)
extern "C" void ext_0059A140();
extern "C" int mem_00925134;
extern "C" void __fastcall fn_00528310(void* self, int edx_unused, int val, int idx) {
    int v = val;
    int* p = (int*)self;
    int begin = p[1];
    int end = p[2];
    typedef void (__cdecl *InvalidParamFn)();
    InvalidParamFn invalid_param = *(InvalidParamFn*)&mem_00925134;
    if ((unsigned int)begin > (unsigned int)end) {
        invalid_param();
    }
    int local_iter[2];
    local_iter[1] = begin;
    int ptr = begin + idx * 4;
    if ((unsigned int)ptr > (unsigned int)p[2] || (unsigned int)ptr < (unsigned int)p[1]) {
        invalid_param();
    }
    ((void (__thiscall*)(void*, int*, void*, int, int*))ext_0059A140)(self, local_iter, self, ptr, &v);
}

// [0x0052F160] sub_0052F160 (89 bytes)
extern "C" void ext_0053CAA0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0052F160(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x894
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0053CAA0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0052AA80] sub_0052AA80 (237 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0052A1C0();
extern "C" void ext_005329A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" int mem_00A9F838;
extern "C" int mem_00925134;
extern "C" int mem_00A9F06C;
extern "C" int mem_00924FF0;
extern "C" int mem_00953720;

extern "C" __declspec(naked) void __fastcall fn_0052AA80(void* self, int edx_unused, int arg0) {
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [mem_00A9F838]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        call    ext_00640110
        push    offset mem_00953720
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        call    ext_00427550
        mov     ecx, dword ptr [esi + 0xc]
        mov     edi, dword ptr [ecx]
        lea     ebp, [esi + 0x8]
        mov     esi, ebp
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], esi
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    loop_head:
        test    esi, esi
        mov     ebx, dword ptr [ebp + 0x4]
        je      short inv1
        cmp     esi, ebp
        je      short ok1
    inv1:
        call    dword ptr [mem_00925134]
    ok1:
        cmp     edi, ebx
        je      done_loop
        test    esi, esi
        jne     short ok2
        call    dword ptr [mem_00925134]
    ok2:
        cmp     edi, dword ptr [esi + 0x4]
        jne     short ok3
        call    dword ptr [mem_00925134]
    ok3:
        cmp     byte ptr [edi + 0x2c], 0x0
        je      short next_iter
        mov     edx, dword ptr [mem_00A9F06C]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        call    ext_006404E0
        cmp     edi, dword ptr [esi + 0x4]
        mov     ebx, eax
        jne     short ok4
        call    dword ptr [mem_00925134]
    ok4:
        mov     eax, dword ptr [mem_00A9F838]
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [edi + 0xc]
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
        cmp     edi, dword ptr [esi + 0x4]
        jne     short ok5
        call    dword ptr [mem_00925134]
    ok5:
        push    ebx
        lea     ecx, [edi + 0x28]
        call    ext_005329A0
    next_iter:
        lea     ecx, [esp + 0x14]
        call    ext_0052A1C0
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        jmp     loop_head
    done_loop:
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}

// [0x00528150] sub_00528150 (331 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_0050BE20();
extern "C" void ext_00524610();
extern "C" void ext_00524670();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_00528150(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08921ABh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        cmp byte ptr [esp+34h], 0
        je short loc_528178
        mov ecx, dword ptr [esp+2Ch]
        call ext_0050BE20
loc_528178:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+34h]
        add esi, 24h
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe short loc_528191
        call dword ptr [mem_00925134]
loc_528191:
        lea ecx, [esp+10h]
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe short loc_5281B4
        call dword ptr [mem_00925134]
loc_5281B4:
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+1Ch], esi
        mov dword ptr [esp+20h], esi
        mov dword ptr [esp+24h], edi
        call ext_00427A60
        mov ebx, dword ptr [esp+40h]
        _emit 0x8D
        _emit 0x49
        _emit 0x00
loc_5281D0:
        mov ebp, dword ptr [esp+14h]
        test ebp, ebp
        je short loc_5281DE
        cmp ebp, dword ptr [esp+20h]
        je short loc_5281E8
loc_5281DE:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_5281EE
loc_5281E8:
        mov esi, dword ptr [mem_00925134]
loc_5281EE:
        mov edi, dword ptr [esp+18h]
        cmp edi, dword ptr [esp+24h]
        jae loc_528288
        test ebp, ebp
        jne short loc_528202
        call esi
loc_528202:
        cmp edi, dword ptr [ebp+8]
        jb short loc_528209
        call esi
loc_528209:
        mov esi, dword ptr [edi]
        lea eax, [esi+4]
        push ebx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short loc_528268
        push 28h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+44h], eax
        test eax, eax
        mov dword ptr [esp+30h], 0
        je short loc_528244
        push 0
        push 0
        mov ecx, eax
        call ext_00524610
        jmp short loc_528246
loc_528244:
        xor eax, eax
loc_528246:
        push esi
        mov ecx, eax
        mov dword ptr [esp+34h], -1
        mov dword ptr [esp+48h], eax
        call ext_00524670
        mov ecx, dword ptr [esp+3Ch]
        lea eax, [esp+44h]
        push eax
        call ext_0041A920
loc_528268:
        cmp edi, dword ptr [ebp+8]
        jb short loc_528273
        call dword ptr [mem_00925134]
loc_528273:
        add edi, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        jmp loc_5281D0
loc_528288:
        mov ecx, dword ptr [esp+28h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret
    }
}

// [0x00526CC0] sub_00526CC0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00524750();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00526CC0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00524750
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00526D40] sub_00526D40 (114 bytes)
extern "C" void ext_005247B0();

extern "C" __declspec(naked) void __fastcall fn_00526D40(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005247B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00527F60] sub_00527F60 (115 bytes)
extern "C" void ext_00524610();
extern "C" void ext_00527E40();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00527F60(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_null
        push 0x0
        push 0x0
        mov ecx, eax
        call ext_00524610
        jmp L_continue
    L_null:
        xor eax, eax
    L_continue:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_00527E40
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

extern "C" void ext_0048AC00();
extern "C" void ext_0048AC80();
extern "C" int mem_00924FDC;

// [0x00521B70] sub_00521B70 (141 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00521B70(void* self, int edx_unused, void* other) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov ebx, ecx
        push edi
        lea edi, [ebp + 8]
        lea esi, [ebx + 8]
        cmp esi, edi
        je loc_521BA4
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048AC80
        push edi
        mov ecx, esi
        call ext_0048AC00
loc_521BA4:
        lea edi, [ebp + 0x18]
        lea esi, [ebx + 0x18]
        cmp esi, edi
        je loc_521BCB
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_0048AC80
        push edi
        mov ecx, esi
        call ext_0048AC00
loc_521BCB:
        lea esi, [ebp + 0x24]
        lea edi, [ebx + 0x24]
        mov ecx, 0x10
        lea edx, [ebp + 0x64]
        rep movsd
        push edx
        lea ecx, [ebx + 0x64]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [ebp + 0x80]
        pop edi
        pop esi
        mov dword ptr [ebx + 0x80], eax
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x005274F0] sub_005274F0 (117 bytes)
extern "C" void ext_00527310();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005274F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_005274F0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_00527310
        jmp L_DONE_005274F0
    L_NULL_005274F0:
        xor eax, eax
    L_DONE_005274F0:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00521D00] sub_00521D00 (118 bytes)
extern "C" void ext_0048C080();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00521D00(void* self) {
    __asm {
        push -1
        push 0x008934af
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi + 0x4], 0x928efc
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 0x8]
        push eax
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi], 0x95272c
        mov dword ptr [esi + 0x4], 0x9526fc
        call dword ptr [mem_00924FE0]
        add edi, 0x24
        push edi
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x18], 0x2
        call ext_0048C080
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00521D80] sub_00521D80 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0041CDA0();
extern "C" void ext_00521B00();
extern "C" void ext_00521D00();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00521D80(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa434b0
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0xa8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00521D00
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0041CDA0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0xa8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00521B00
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x00527E40] sub_00527E40 (126 bytes)
extern "C" void ext_00527B40();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00527E40(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_527E92
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_00527B40
        jmp short L_527E94
L_527E92:
        xor eax, eax
L_527E94:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x005220C0] sub_005220C0 (137 bytes)
extern "C" void ext_006790C0();
extern "C" void ext_006798D0();
extern "C" int mem_00A9F32C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00952940;

extern "C" __declspec(naked) void __fastcall fn_005220C0(void* self) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        mov eax, dword ptr [mem_00A9F32C]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        push offset mem_00952940
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x4]
        push edx
        mov byte ptr [esp + 0x48], 0x1
        call ext_006798D0
        mov ecx, eax
        call ext_006790C0
        lea ecx, [esp]
        mov byte ptr [esp + 0x40], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0052EB20] sub_0052EB20 (127 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_0052A1C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0052EB20(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0xc]
        push ebx
        push ebp
        lea ebp, [ecx + 0x8]
        push esi
        push edi
        mov edi, dword ptr [eax]
        mov esi, ebp
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x10], esi
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_52EB40:
        test esi, esi
        mov ebx, dword ptr [ebp + 0x4]
        je short loc_52EB4B
        cmp esi, ebp
        je short loc_52EB51
    loc_52EB4B:
        call dword ptr [mem_00925134]
    loc_52EB51:
        cmp edi, ebx
        je short loc_52EB95
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne short loc_52EB61
        call ebx
    loc_52EB61:
        cmp edi, dword ptr [esi + 0x4]
        jne short loc_52EB68
        call ebx
    loc_52EB68:
        cmp byte ptr [edi + 0x5c], 0x0
        je short loc_52EB82
        cmp edi, dword ptr [esi + 0x4]
        jne short loc_52EB75
        call ebx
    loc_52EB75:
        mov ecx, dword ptr [esp + 0x1c]
        add edi, 0xc
        push edi
        call ext_0040ECB0
    loc_52EB82:
        lea ecx, [esp + 0x10]
        call ext_0052A1C0
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp short loc_52EB40
    loc_52EB95:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0052AC70] sub_0052AC70 (129 bytes)
extern "C" void ext_0052AC70();
extern "C" void ext_00532770();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0052AC70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0x61], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_0052AC70
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call ext_00532770
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x61], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x0052AEB0] sub_0052AEB0 (203 bytes)
extern "C" void ext_0052A1C0();
extern "C" void ext_0052A650();
extern "C" void ext_0052AC70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0052AEB0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ebp, dword ptr [eax]
        je L_52AECA
        cmp edi, esi
        je L_52AED0
L_52AECA:
        call dword ptr [mem_00925134]
L_52AED0:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_52AF31
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 4]
        je L_52AEE7
        cmp eax, esi
        je L_52AEED
L_52AEE7:
        call dword ptr [mem_00925134]
L_52AEED:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_52AF31
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, esi
        call ext_0052AC70
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 8], eax
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_52AF31:
        test edi, edi
        je L_52AF3B
        cmp edi, dword ptr [esp + 0x28]
        je L_52AF41
L_52AF3B:
        call dword ptr [mem_00925134]
L_52AF41:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_52AF68
        lea ecx, [esp + 0x20]
        call ext_0052A1C0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0052A650
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_52AF31
L_52AF68:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x0052ED40] sub_0052ED40 (133 bytes)
extern "C" void ext_0052AEB0();
extern "C" void ext_0065C660();
extern "C" void ext_006A5C5C();
extern "C" int mem_00AED9D0;
extern "C" __declspec(naked) void __fastcall fn_0052ED40(void* self) {
    __asm {
        push -1
        push 0x894ba8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [edi], 0x953938
        xor ebx, ebx
        mov dword ptr [mem_00AED9D0], ebx
        lea esi, [edi + 8]
        mov dword ptr [edi + 4], 0x953930
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], ebx
        call ext_0052AEB0
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        mov ecx, edi
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esp + 0x20], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0052F890] sub_0052F890 (136 bytes)
extern "C" void ext_00537E50();
extern "C" void ext_0053A4B0();
extern "C" void ext_0066A310();
extern "C" __declspec(naked) void __fastcall fn_0052F890(void* self) {
    __asm {
        push -1
        push 0x894cfc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_0053B240
        lea ecx, [esi + 0x40]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x95401c
        mov dword ptr [esi + 0x14], 0x954014
        call ext_00537E50
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x14], 1
        call ext_0053A4B0
        lea edi, [esi + 0xa0]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_00538530
        mov dword ptr [edi], 0x953b8c
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x14], 3
        call ext_0066A310
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00521FF0] sub_00521FF0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00521FF0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa436b8
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_521043
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_521043:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00524480] sub_00524480 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00524480(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa438a8
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_5244D3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_5244D3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x005270E0] sub_005270E0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005270E0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa43e58
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_527133
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_527133:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00527170] sub_00527170 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00527170(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa43e7c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_5271C3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_5271C3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00521C50] sub_00521C50 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AECC58;
extern "C" int mem_00AECC54;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00521C50(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x893477
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AECC58], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AECC58], 0x1
        mov     ecx, offset mem_00AECC54
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AECC54], 0x95278c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AECC54
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00524130] sub_00524130 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AED2A8;
extern "C" int mem_00AED2A4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00524130(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8939a7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AED2A8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AED2A8], 0x1
        mov     ecx, offset mem_00AED2A4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AED2A4], 0x9529a4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AED2A4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x005269D0] sub_005269D0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AED2D8;
extern "C" int mem_00AED2D4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005269D0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x893b27
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AED2D8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AED2D8], 0x1
        mov     ecx, offset mem_00AED2D4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AED2D4], 0x952de4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AED2D4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00526A80] sub_00526A80 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AED2E0;
extern "C" int mem_00AED2DC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00526A80(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x893b57
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AED2E0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AED2E0], 0x1
        mov     ecx, offset mem_00AED2DC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AED2DC], 0x952f94
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AED2DC
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00526B30] sub_00526B30 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AED2E8;
extern "C" int mem_00AED2E4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00526B30(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x893b87
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AED2E8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AED2E8], 0x1
        mov     ecx, offset mem_00AED2E4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AED2E4], 0x953144
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AED2E4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00520500] sub_00520500 (158 bytes)
extern "C" void ext_0051F8C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00520500(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x893371
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 4], 0
        mov ebx, 1
    L_loop:
        test edi, edi
        jbe L_done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        mov byte ptr [ebp - 4], bl
        je L_skip_call
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_0051F8C0
    L_skip_call:
        sub edi, ebx
        add esi, 0x168
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp + 8], esi
        jmp L_loop
    L_catch:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 8]
        cmp esi, edi
        je L_after_dtor
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_dtor_loop:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 0x168
        cmp esi, edi
        jne L_dtor_loop
    L_after_dtor:
        push 0
        push 0
        call ext_006A6DD2
    L_done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00520380] sub_00520380 (160 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00520380(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x893351
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0
    loop_top:
        cmp edi, ebx
        je short exit_path
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp + 0x8], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 1
        je short skip_ctor
        push edi
        mov ecx, esi
        call ext_0051F8C0
    skip_ctor:
        add esi, 0x168
        mov byte ptr [ebp - 0x4], 0
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x168
        jmp short loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je short throw_path
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    unwind_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x168
        cmp esi, edi
        jne short unwind_loop
    throw_path:
        push 0
        push 0
        call ext_006A6DD2
    exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005205A0] sub_005205A0 (164 bytes)
extern "C" void ext_0051F570();
extern "C" void ext_00520440();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_005205A0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne short L_nonnull
        xor ecx, ecx
        jmp short L_after_first
L_nonnull:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
L_after_first:
        test edi, edi
        je short L_slow
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae short L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 0x1
        push edi
        call ext_0051F570
        add esp, 0x18
        add edi, 0xc0
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
L_slow:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp edi, ebx
        jbe short L_ok
        call dword ptr [mem_00925134]
L_ok:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_00520440
        pop ebx
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x005211D0] sub_005211D0 (169 bytes)
extern "C" __declspec(naked) void __fastcall fn_005211D0(void* self, int edx_unused, int a1) {
    extern void ext_00520500();
    extern void ext_00521110();
    extern int mem_00925134;
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 4]
        test ebx, ebx
        push edi
        jne L_nonnull
        xor edi, edi
        jmp L_after_count
L_nonnull:
        mov ecx, dword ptr [esi + 8]
        sub ecx, ebx
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 8
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
L_after_count:
        test ebx, ebx
        je L_slow
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, ebx
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_slow
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esp + 0xc], 0
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_00520500
        add esp, 0x18
        add edi, 0x168
        mov dword ptr [esi + 8], edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
L_slow:
        mov edi, dword ptr [esi + 8]
        cmp ebx, edi
        jbe L_skip_invalid
        call dword ptr [mem_00925134]
L_skip_invalid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_00521110
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00520440] sub_00520440 (177 bytes)
extern "C" void ext_0051FEF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00520440(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        je L_zero
        mov ebx, dword ptr [esi + 0x8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_nz
    L_zero:
        mov ebx, dword ptr [esp + 0x1c]
        xor edi, edi
        jmp L_call
    L_nz:
        cmp edi, ebx
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_bad2
        cmp ebx, esi
        je L_ok2
    L_bad2:
        call dword ptr [mem_00925134]
    L_ok2:
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x5
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
    L_call:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push 1
        push ebp
        push ebx
        mov ecx, esi
        call ext_0051FEF0
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 2*edi]
        shl edx, 0x6
        lea edi, [edx + ebx]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja L_bad4
        cmp edi, dword ptr [esi + 0x4]
        jae L_ok4
    L_bad4:
        call dword ptr [mem_00925134]
    L_ok4:
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x00521110] sub_00521110 (180 bytes)
extern "C" void ext_00520DF0();

extern "C" __declspec(naked) void __fastcall fn_00521110(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je L_0052113e
        mov ebx, dword ptr [edi + 0x8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 0x8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_00521146
    L_0052113e:
        mov ebx, dword ptr [esp + 0x1c]
        xor esi, esi
        jmp L_00521179
    L_00521146:
        cmp esi, ebx
        jbe L_00521150
        call dword ptr [mem_00925134]
    L_00521150:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_0052115c
        cmp ebx, edi
        je L_00521162
    L_0052115c:
        call dword ptr [mem_00925134]
    L_00521162:
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0xb60b60b7
        imul ecx
        add edx, ecx
        sar edx, 0x8
        mov esi, edx
        shr esi, 0x1f
        add esi, edx
    L_00521179:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push 0x1
        push ebp
        push ebx
        mov ecx, edi
        call ext_00520DF0
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_00521197
        call dword ptr [mem_00925134]
    L_00521197:
        imul esi, esi, 0x168
        add esi, ebx
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja L_005211ad
        cmp esi, dword ptr [edi + 0x4]
        jae L_005211b3
    L_005211ad:
        call dword ptr [mem_00925134]
    L_005211b3:
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x00521280] sub_00521280 (208 bytes)
extern "C" void ext_0051E740();
extern "C" void ext_0051F9E0();
extern "C" void ext_0051FBB0();
extern "C" void ext_00520BF0();
extern "C" void ext_005211D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00521280(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8933db
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x170
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_5212b3
        call dword ptr [mem_00925134]
    L_5212b3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_5212c1
        call dword ptr [mem_00925134]
    L_5212c1:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_0051E740
        mov ebx, dword ptr [esp + 0x18c]
        mov eax, dword ptr [ebx + 0x8]
        push eax
        mov ecx, esi
        call ext_00520BF0
        mov eax, dword ptr [ebx + 0x4]
        mov edi, dword ptr [eax]
    L_5212e8:
        mov eax, dword ptr [ebx + 0x4]
        cmp edi, eax
        je L_521338
        cmp byte ptr [edi + 0x6d], 0x0
        lea eax, [edi + 0x8]
        jne L_521329
        push eax
        lea ecx, [esp + 0x18]
        call ext_0051F9E0
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x188], 0x0
        call ext_005211D0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x184], 0xffffffff
        call ext_0051FBB0
    L_521329:
        cmp edi, dword ptr [ebx + 0x4]
        jne L_521334
        call dword ptr [mem_00925134]
    L_521334:
        mov edi, dword ptr [edi]
        jmp L_5212e8
    L_521338:
        mov ecx, dword ptr [esp + 0x17c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x17c
        ret
    }
}
