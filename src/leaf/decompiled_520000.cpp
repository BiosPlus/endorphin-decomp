// Decompiled translation unit: src/leaf/decompiled_520000.cpp

extern "C" void ext_00521FD0();
extern "C" void ext_00522080();

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
