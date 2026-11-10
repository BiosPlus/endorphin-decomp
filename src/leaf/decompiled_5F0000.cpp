// Decompiled translation unit: src/leaf/decompiled_5F0000.cpp

// [0x005F3570] sub_005F3570 (24 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_005F34E0();

extern "C" __declspec(naked) void __fastcall fn_005F3570(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x945310
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_005F34E0
        pop ecx
        ret
    }
}

// [0x005F5BA0] sub_005F5BA0 (25 bytes)
extern "C" void ext_005F5240();
extern "C" void ext_005F5470();

extern "C" __declspec(naked) void __fastcall fn_005F5BA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005F5240
        push eax
        mov ecx, esi
        call ext_005F5470
        pop esi
        ret 4
    }
}

// [0x005F53E0] sub_005F53E0 (44 bytes)
extern "C" void __fastcall fn_005F53E0(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    *(float*)(p + 0x170) = src[0];
    *(float*)(p + 0x174) = src[1];
    *(float*)(p + 0x178) = src[2];
    char* sub = *(char**)(p + 0x10);
    if (sub) {
        sub[0x4] = 1;
    }
}

// [0x005F5670] sub_005F5670 (44 bytes)
extern "C" int mem_00B40640;

extern "C" void __fastcall fn_005F5670(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    char* obj = *(char**)(p + 0x4);
    typedef char* (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(obj + 0xc);
    char* dst = fn(p + 0x4, mem_00B40640);
    dst += 0x30;
    *(float*)(dst + 0x0) = src[0];
    *(float*)(dst + 0x4) = src[1];
    *(float*)(dst + 0x8) = src[2];
}

// [0x005FEFD0] sub_005FEFD0 (45 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_005FEFD0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        add esi, 0x20
        cmp esi, ebx
        jne loop_top
        pop edi
    done:
        pop esi
        pop ebx
        ret
    }
}

// [0x005F5470] sub_005F5470 (47 bytes)
extern "C" void ext_005B11D0();

extern "C" void __fastcall fn_005F5470(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    char* p = (char*)self;
    *(int*)(p + 0x210) = a1;
    typedef float* (__thiscall *Fn)(void*, int);
    Fn fn = (Fn)ext_005B11D0;
    float* dst = fn(p + 0x1c0, 2);
    *dst = (float)a1;
    char* q = *(char**)(p + 0x10);
    if (q) {
        q[0x4] = 1;
    }
}

// [0x005F53A0] sub_005F53A0 (49 bytes)
extern "C" void ext_005B11D0();
typedef float* (__thiscall *GetFloatPtrFn5F53A0)(void* self, int idx);

extern "C" void __fastcall fn_005F53A0(char* self, int edx_unused, float value) {
    *(float*)(self + 0x160) = value;
    float* p = ((GetFloatPtrFn5F53A0)ext_005B11D0)(self + 0x1c0, 0);
    *p = *(float*)(self + 0x160);
    char* child = *(char**)(self + 0x10);
    if (child) {
        child[4] = 1;
    }
}

// [0x005F05E0] sub_005F05E0 (52 bytes)
extern "C" void ext_005EF450();
extern "C" __declspec(naked) void __fastcall fn_005F05E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x96ba3c
        mov dword ptr [ecx + 0x4], 0x96b9f4
        mov dword ptr [ecx + 0x8], 0x96b9b4
        mov dword ptr [ecx + 0xc], 0x96b964
        mov dword ptr [ecx + 0x150], 0x96b950
        mov dword ptr [ecx + 0x154], 0x96b948
        jmp ext_005EF450
    }
}

// [0x005F09E0] sub_005F09E0 (52 bytes)
extern "C" void ext_005EF450();
extern "C" __declspec(naked) void __fastcall fn_005F09E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x95a52c
        mov dword ptr [ecx + 0x4], 0x95a4e4
        mov dword ptr [ecx + 0x8], 0x95a4a4
        mov dword ptr [ecx + 0xc], 0x95a454
        mov dword ptr [ecx + 0x150], 0x95a440
        mov dword ptr [ecx + 0x154], 0x95a438
        jmp ext_005EF450
    }
}

// [0x005F0F60] sub_005F0F60 (52 bytes)
extern "C" void ext_005EF450();

extern "C" void __fastcall fn_005F0F60(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned int*)(p + 0x00) = 0x0096bc4cu;
    *(unsigned int*)(p + 0x04) = 0x0096bc04u;
    *(unsigned int*)(p + 0x08) = 0x0096bbc4u;
    *(unsigned int*)(p + 0x0c) = 0x0096bb74u;
    *(unsigned int*)(p + 0x150) = 0x0096bb60u;
    *(unsigned int*)(p + 0x154) = 0x0096bb58u;
    ext_005EF450();
}

// [0x005FF040] sub_005FF040 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_005FF040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x96eaec
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je skip_release
        push eax
        call ext_006A5C5C
        add esp, 4
skip_release:
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [esi + 0xc], 0
        mov dword ptr [esi + 0x10], 0
        mov ecx, esi
        pop esi
        jmp ext_0065F440
    }
}
