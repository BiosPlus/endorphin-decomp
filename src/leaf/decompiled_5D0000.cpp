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

// [0x005DC4D0] sub_005DC4D0 (30 bytes)
extern "C" void ext_005DA7C0();

extern "C" __declspec(naked) void __fastcall fn_005DC4D0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005DA7C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005DC4F0] sub_005DC4F0 (30 bytes)
extern "C" void ext_005DA820();

extern "C" __declspec(naked) void __fastcall fn_005DC4F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005DA820
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005DF6B0] sub_005DF6B0 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DF6B0(void* self, int edx_unused, void** out, int* key) {
    __asm {
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        sub esp, 10h
        cmp byte ptr [eax + 15h], 0
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        jne L_after
        mov esi, dword ptr [edi]
    L_loop:
        cmp dword ptr [eax + 0ch], esi
        jge L_left
        mov eax, dword ptr [eax + 8]
        jmp L_join
    L_left:
        mov edx, eax
        mov eax, dword ptr [eax]
    L_join:
        cmp byte ptr [eax + 15h], 0
        je L_loop
    L_after:
        mov eax, dword ptr [ecx + 4]
        cmp edx, eax
        mov dword ptr [esp + 0ch], edx
        mov dword ptr [esp + 8], ecx
        je L_pb
        mov esi, dword ptr [edi]
        cmp esi, dword ptr [edx + 0ch]
        jl L_pb
        lea ecx, [esp + 8]
        jmp L_out
    L_pb:
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], eax
        lea ecx, [esp + 10h]
    L_out:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4]
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        pop esi
        add esp, 10h
        ret 8
    }
}

// [0x005DC6C0] sub_005DC6C0 (107 bytes)
extern "C" void ext_005D9F30();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005DC6C0(void* self) {
    __asm {
        push -1
        push 0x891c94
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp + 8], esi
        mov edi, [esi + 0x44]
        test edi, edi
        mov dword ptr [esp + 0x14], 1
        je L_skip
        mov ecx, edi
        call ext_005D9F30
        push edi
        call ext_006A5C5C
        add esp, 4
L_skip:
        lea ecx, [esi + 4]
        mov byte ptr [esp + 0x14], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_0065F440
        mov ecx, [esp + 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DF720] sub_005DF720 (83 bytes)
extern "C" void ext_00419F50();
extern "C" __declspec(naked) void __fastcall fn_005DF720(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_loop_005DF720:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_005DF720
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_005DF720
    L_inv1_005DF720:
        call ebx
    L_ok1_005DF720:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_005DF720
        lea ecx, [esp + 0x14]
        call ext_00419F50
        test esi, esi
        jne L_skip2_005DF720
        call ebx
    L_skip2_005DF720:
        cmp edi, dword ptr [esi + 0x4]
        jne L_skip3_005DF720
        call ebx
    L_skip3_005DF720:
        mov eax, dword ptr [edi + 0x10]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        jmp L_loop_005DF720
    L_done_005DF720:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x005DC650] sub_005DC650 (109 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005DC650(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        xor ebx, ebx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi], 0x968ad4
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        fst dword ptr [esi + 0x2c]
        fld1
        mov dword ptr [esi + 0x28], ebx
        mov byte ptr [esi + 0x30], bl
        fst dword ptr [esi + 0x34]
        fstp dword ptr [esi + 0x38]
        mov dword ptr [esi + 0x44], ebx
        mov eax, esi
        fst dword ptr [esi + 0x3c]
        fstp dword ptr [esi + 0x40]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DF940] sub_005DF940 (110 bytes)
extern "C" void ext_005DF6B0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005DF940(void* self, int edx_unused, int key) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 8], 0
        jne L_nonempty
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
    L_nonempty:
        push ebx
        push ebp
        push edi
        lea eax, [esp + 1ch]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_005DF6B0
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_chk1
        cmp edi, esi
        je L_chk2
    L_chk1:
        call ebp
    L_chk2:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_chk3
        call ebp
    L_chk3:
        cmp esi, dword ptr [edi + 4]
        jne L_ret_val
        call ebp
    L_ret_val:
        mov eax, dword ptr [esi + 10h]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x005DFE30] sub_005DFE30 (114 bytes)
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005DFE30(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        xor ebx, ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je inv1
        cmp esi, dword ptr [esp + 0x1c]
        je skip1
    inv1:
        call ebp
    skip1:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x20]
        je done
        lea ecx, [esp + 0x14]
        call ext_00673C20
        cmp esi, ebx
        jne skip2
        call ebp
    skip2:
        cmp edi, dword ptr [esi + 0x4]
        jne skip3
        call ebp
    skip3:
        mov esi, dword ptr [edi + 0x28]
        cmp esi, ebx
        je loop_top
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebx
        je skip4
        push eax
        call ext_006A5C5C
        add esp, 4
    skip4:
        push esi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        call ext_006A5C5C
        add esp, 4
        jmp loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}
