// Decompiled translation unit: src/leaf/decompiled_5D0000.cpp

// [0x005D07E0] sub_005D07E0 (12 bytes)
extern "C" void ext_005CFCB0();
extern "C" void ext_005CFCC0();

extern "C" __declspec(naked) void __cdecl fn_005D07E0() {
    __asm {
        call ext_005CFCB0
        __asm _emit 0x50
        call ext_005CFCC0
        ret
    }
}

// [0x005D06D0] sub_005D06D0 (14 bytes)
extern "C" void ext_005B11E0();

extern "C" __declspec(naked) void __fastcall fn_005D06D0(void* self) {
    __asm {
        push 0x0
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005D0790] sub_005D0790 (33 bytes)
extern "C" void __fastcall fn_005D0790(void* self, int edx_unused, void* value) {
    void** slot = (void**)self;
    void* old = *slot;
    if (value != old && old != 0) {
        typedef void (__thiscall *VFn)(void*, int);
        VFn fn = (VFn)((*(void***)old)[0]);
        fn(old, 1);
    }
    *slot = value;
}

// [0x005D1430] sub_005D1430 (33 bytes)
extern "C" void ext_005B11D0();

extern "C" void __fastcall fn_005D1430(unsigned char* self, int edx_unused, float value) {
    typedef float* (__thiscall *AllocFn)(void* ecx_this, int arg);
    float* slot = ((AllocFn)ext_005B11D0)((void*)(self + 0x210), 0);
    *slot = value;
    self[0x214] = 1;
}

// [0x005D0830] sub_005D0830 (47 bytes)
extern "C" int mem_00924EA8;

extern "C" void __fastcall fn_005D0830(void* self) {
    unsigned char* p = (unsigned char*)self;
    typedef void (__thiscall *ClearFn)(void*);
    ((ClearFn)mem_00924EA8)(p + 4);
    *(float*)(p + 0x2c) = 0.0f;
    *(float*)(p + 0x3c) = 0.0f;
    *(int*)(p + 0x20) = 0;
    *(float*)(p + 0x40) = 0.0f;
    *(int*)(p + 0x24) = 0;
    *(int*)(p + 0x28) = 0;
    *(float*)(p + 0x34) = 1.0f;
    *(unsigned char*)(p + 0x30) = 0;
    *(float*)(p + 0x38) = 1.0f;
}

// [0x005D0710] sub_005D0710 (47 bytes)
extern "C" void ext_005B11E0();

extern "C" float __fastcall fn_005D0710(void* self) {
    typedef float (__thiscall *GetFn)(void*, int);
    GetFn get = (GetFn)ext_005B11E0;
    void* p = (char*)self + 0x210;
    double a = get(p, 1);
    double b = get(p, 2);
    return (float)(a / b);
}

// [0x005D0740] sub_005D0740 (32 bytes)
extern "C" void ext_005CFD20();

extern "C" void __fastcall fn_005D0740(unsigned char* self, int edx_unused, int a1) {
    typedef int (__stdcall *Fn)(int);
    if (self[0x1f1] == 0) {
        *(int*)(self + 0x25c) = ((Fn)ext_005CFD20)(a1);
    }
}

// [0x005DC480] sub_005DC480 (66 bytes)
extern "C" void ext_00552940();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005DC480(void* self) {
    __asm {
        push edi
        mov edi, dword ptr [ecx + 0x4]
        test edi, edi
        je tail_005DC480
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx]
        add esi, 0x8
        cmp dword ptr [esi], 0x0
        jne skip1_005DC480
        call ebx
skip1_005DC480:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x4]
        jne skip2_005DC480
        call ebx
skip2_005DC480:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x50]
        mov ecx, edi
        call eax
        pop esi
        pop ebx
        pop edi
        ret
tail_005DC480:
        pop edi
        jmp ext_00552940
    }
}

// [0x005D00C0] sub_005D00C0 (75 bytes)
extern "C" int mem_00B40644;

struct Mat4_005D00C0 {
    float m[16];
};

typedef Mat4_005D00C0* (__thiscall *GetMat_005D00C0)(void* self, int arg);

extern "C" void __fastcall fn_005D00C0(void* self, int edx_unused, float* out) {
    void* obj = (char*)self + 4;
    void** vtbl = *(void***)obj;
    GetMat_005D00C0 fn = (GetMat_005D00C0)vtbl[5];
    Mat4_005D00C0 m = *fn(obj, mem_00B40644);
    out[0] = m.m[4];
    out[1] = m.m[5];
    out[2] = m.m[6];
    out[3] = m.m[7];
}

// [0x005DF2B0] sub_005DF2B0 (80 bytes)
struct LB20Entry_005DF2B0 {
    int key;
    unsigned int rest[4];
};

extern "C" LB20Entry_005DF2B0* __cdecl fn_005DF2B0(LB20Entry_005DF2B0* first, LB20Entry_005DF2B0* last, const int* value) {
    LB20Entry_005DF2B0* it = first;
    int count = (int)(last - first);
    if (count > 0) {
        int key = *value;
        do {
            int half = count / 2;
            LB20Entry_005DF2B0* mid = it + half;
            if (mid->key < key) {
                it = mid + 1;
                count = count - half - 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
    return it;
}

// [0x005D9F30] sub_005D9F30 (81 bytes)
namespace {
struct Decomp5D9F30Obj { virtual ~Decomp5D9F30Obj() {} };
struct Decomp5D9F30Owner { int pad; Decomp5D9F30Obj* m_p; };
}
extern "C" void __fastcall ext_005D14A0();
extern "C" __declspec(naked) void __fastcall fn_005D9F30(void* self) {
    __asm {
        push -1
        push 0x8a562b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esp + 0x10], 0
        call ext_005D14A0
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0xffffffff
        pop esi
        je L_skip_5D9F30
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_skip_5D9F30:
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DC930] sub_005DC930 (37 bytes)
extern "C" void ext_005D9F30();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_005DC930(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x44]
        test esi, esi
        je L_skip_5DC930
        mov ecx, esi
        call ext_005D9F30
        push esi
        call ext_006A5C5C
        add esp, 4
L_skip_5DC930:
        mov dword ptr [edi + 0x44], 0
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_005B11E0();
extern "C" void ext_006A7262();
extern "C" int mem_00955AD8;
extern "C" int mem_00965CE0;
extern "C" int mem_00993828;

// [0x005D0610] sub_005D0610 (84 bytes)
extern "C" __declspec(naked) float __fastcall fn_005D0610(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        push 0x1
        lea ecx, [esi + 0x210]
        call ext_005B11E0
        fmul dword ptr [esi + 0x204]
        fmul qword ptr [mem_00955AD8]
        fld dword ptr [esp + 0x10]
        fmul qword ptr [mem_00965CE0]
        fmul qword ptr [mem_00993828]
        fxch st(1)
        fstp qword ptr [esp + 0x4]
        call ext_006A7262
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        pop esi
        fdivr qword ptr [esp]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    }
}

// [0x005D1460] sub_005D1460 (31 bytes)
extern "C" void ext_005D0610();
extern "C" void ext_005D1430();

extern "C" __declspec(naked) void __fastcall fn_005D1460(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push esi
        push ecx
        fstp dword ptr [esp]
        mov esi, ecx
        call ext_005D0610
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_005D1430
        pop esi
        ret 0x4
    }
}

// [0x005D05B0] sub_005D05B0 (86 bytes)
extern "C" int mem_00B3F200;

extern "C" __declspec(naked) float __fastcall fn_005D05B0(void* self) {
    __asm {
        push -1
        push 0x008A5248
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        mov byte ptr [mem_00B3F200], 0x1
        lea eax, [ecx + 0x26c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x14], 0x0
        call eax
        fstp dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        mov byte ptr [mem_00B3F200], 0x0
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x005D0670] sub_005D0670 (86 bytes)
extern "C" __declspec(naked) float __fastcall fn_005D0670(void* self) {
    __asm {
        push -1
        push 0x008A5248
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        mov byte ptr [mem_00B3F200], 0x1
        lea eax, [ecx + 0x264]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x14], 0x0
        call eax
        fstp dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        mov byte ptr [mem_00B3F200], 0x0
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x005DA7C0] sub_005DA7C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A84;
extern "C" int mem_00B45A80;

extern "C" __declspec(naked) void* __fastcall fn_005DA7C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a568e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45A84], al
        jne L_done
        or dword ptr [mem_00B45A84], eax
        mov ecx, offset mem_00B45A80
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45A80], 0x968774
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45A80
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005DA820] sub_005DA820 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A8C;
extern "C" int mem_00B45A88;

extern "C" __declspec(naked) void* __fastcall fn_005DA820(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a56ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45A8C], al
        jne L_done
        or dword ptr [mem_00B45A8C], eax
        mov ecx, offset mem_00B45A88
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45A88], 0x968924
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45A88
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
