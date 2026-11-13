// Decompiled translation unit: src/leaf/decompiled_5D0000.cpp
#include <string>

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
extern "C" void ext_005DF720();
extern "C" void ext_005DF840();
extern "C" void ext_006A5C5C();

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

// [0x005D0530] sub_005D0530 (126 bytes)
extern "C" int mem_00B40644;

struct Mat4_005D0530 {
    float m[16];
};

typedef Mat4_005D0530* (__thiscall *GetMat_005D0530)(void* self, int arg);
typedef void (__thiscall *Apply_005D0530)(void* self, int flag, Mat4_005D0530* m, int ctx);

extern "C" __declspec(naked) void __fastcall fn_005D0530(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x40
        cmp byte ptr [ecx + 0x1f1], 0
        jne done_005D0530
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x14]
        push ebx
        push esi
        lea ebx, [ecx + 0x4]
        mov ecx, dword ptr [mem_00B40644]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [esp + 0x50]
        mov ecx, 0x10
        lea edi, [esp + 0xc]
        rep movsd
        fld dword ptr [esp + 0x3c]
        fsub dword ptr [eax]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x40]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x44]
        fsub dword ptr [eax + 0x8]
        mov ecx, dword ptr [mem_00B40644]
        push ecx
        lea edx, [esp + 0x10]
        fstp dword ptr [esp + 0x48]
        push edx
        fld dword ptr [esp + 0x50]
        push 0
        fsub dword ptr [eax + 0xc]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax]
        mov ecx, ebx
        fstp dword ptr [esp + 0x54]
        call eax
        pop edi
        pop esi
        pop ebx
done_005D0530:
        add esp, 0x40
        ret 4
    }
}

// [0x005D02D0] sub_005D02D0 (127 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00493EE0();

extern "C" __declspec(naked) void __fastcall fn_005D02D0(void* self, int edx_unused, unsigned int a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov eax, dword ptr [esp + 0x20]
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [ebx + 0x208], eax
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D0760] sub_005D0760 (34 bytes)
extern "C" void ext_005CFDB0();
extern "C" void ext_005D02D0();

extern "C" __declspec(naked) void __fastcall fn_005D0760(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x1f1], 0x0
        jne done
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_005CFDB0
        push eax
        mov ecx, esi
        call ext_005D02D0
done:
        pop esi
        ret 0x4
    }
}

// [0x005DC1E0] sub_005DC1E0 (133 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005DA110();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005DC1E0(void* self) {
    __asm {
        push -0x1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x44]
        push eax
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esi + 0x20], eax
        call ext_005DA110
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -0x1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005DC270] sub_005DC270 (133 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005DA130();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005DC270(void* self) {
    __asm {
        push -0x1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x44]
        push eax
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esi + 0x24], eax
        call ext_005DA130
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -0x1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005DC390] sub_005DC390 (133 bytes)
extern "C" void ext_005DA170();

extern "C" __declspec(naked) void __fastcall fn_005DC390(void* self) {
    __asm {
        push -0x1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x44]
        push eax
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esi + 0x28], eax
        call ext_005DA170
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -0x1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D0240] sub_005D0240 (136 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005D0240(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0
        jne epilogue
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x204]
        mov dword ptr [esp + 0x18], 0
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        pop edi
        pop esi
epilogue:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005DA150();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

// [0x005DC300] sub_005DC300 (136 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DC300(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x2c]
        push ecx
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x1c], 0
        call ext_005DA150
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005D9EF0] sub_005D9EF0 (56 bytes)
extern "C" void ext_00480920();
extern "C" int mem_00B40644;
extern "C" int mem_00965D08;

extern "C" __declspec(naked) void __fastcall fn_005D9EF0(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 1f1h], 0
        jne L_ret_5D9EF0
        mov eax, dword ptr [mem_00B40644]
        push ebx
        mov ebx, dword ptr [edi + 4]
        push esi
        lea esi, [edi + 4]
        push eax
        call ext_00480920
        mov edx, dword ptr [ebx]
        push eax
        push 0
        mov ecx, esi
        call edx
        fld dword ptr [mem_00965D08]
        pop esi
        fstp dword ptr [edi + 1f4h]
        pop ebx
L_ret_5D9EF0:
        pop edi
        ret
    }
}

// [0x005DC430] sub_005DC430 (65 bytes)
extern "C" void ext_005DC1E0();
extern "C" void ext_005DC270();
extern "C" void ext_005DC300();
extern "C" void ext_005DC390();

extern "C" __declspec(naked) void __fastcall fn_005DC430(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x4]
        test esi, esi
        je L_done_5DC430
        mov eax, dword ptr [esi + 0x68]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_005DC390
        mov ecx, dword ptr [esi + 0x5c]
        push ecx
        mov ecx, edi
        call ext_005DC1E0
        mov edx, dword ptr [esi + 0x60]
        push edx
        mov ecx, edi
        call ext_005DC270
        fld dword ptr [esi + 0x64]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_005DC300
        pop edi
    L_done_5DC430:
        pop esi
        ret 0x4
    }
}

// [0x005D0110] sub_005D0110 (143 bytes)
extern "C" void ext_00493F00();

extern "C" __declspec(naked) void __fastcall fn_005D0110(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0
        jne epilogue
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x1f4]
        mov dword ptr [esp + 0x18], 0
        call ext_00493F00
        mov ecx, esi
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        pop edi
        pop esi
epilogue:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D01A0] sub_005D01A0 (145 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_005B11D0();
extern "C" void ext_00493EE0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005D01A0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x008A56C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne L_exit
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        push 0x5
        lea ecx, [ebx + 0x210]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_005B11D0
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [eax]
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop esi
    L_exit:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D0350] sub_005D0350 (125 bytes)
extern "C" void ext_005CFEC0();
extern "C" void ext_005CFF60();
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;

extern "C" __declspec(naked) void __fastcall fn_005D0350(void* self) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x1f1], 0
        jne short L_ret_005D0350
        push esi
        call ext_005CFF60
        fld dword ptr [eax]
        mov ecx, dword ptr [edi + 0x154]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        lea esi, [edi + 0x1f4]
        fstp dword ptr [esp + 0xc]
        push esi
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x18]
        call edx
        fmul dword ptr [esp + 0x1c]
        fadd dword ptr [esi]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fst dword ptr [esi]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 0x5
        jp short L_skip_005D0350
        fld dword ptr [mem_0093F8EC]
        fstp dword ptr [esi]
    L_skip_005D0350:
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        call ext_005CFEC0
        pop esi
    L_ret_005D0350:
        pop edi
        add esp, 0x10
        ret 4
    }
}

// [0x005DC730] sub_005DC730 (148 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005DC730(void* self, int edx_unused, void* other) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_00661980
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 4]
        push eax
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x968ad4
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x20]
        mov dword ptr [esi + 0x20], ecx
        mov edx, dword ptr [edi + 0x24]
        mov dword ptr [esi + 0x24], edx
        mov eax, dword ptr [edi + 0x28]
        mov dword ptr [esi + 0x28], eax
        fld dword ptr [edi + 0x2c]
        fstp dword ptr [esi + 0x2c]
        mov cl, byte ptr [edi + 0x30]
        mov byte ptr [esi + 0x30], cl
        mov edx, dword ptr [edi + 0x34]
        mov dword ptr [esi + 0x34], edx
        mov eax, dword ptr [edi + 0x38]
        mov dword ptr [esi + 0x38], eax
        mov ecx, dword ptr [edi + 0x3c]
        mov dword ptr [esi + 0x3c], ecx
        mov edx, dword ptr [edi + 0x40]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x40], edx
        mov dword ptr [esi + 0x44], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005D1020] sub_005D1020 (152 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_005B11D0();
extern "C" void ext_00493EE0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005D1020(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x008A56C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne L_exit
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        push 0x1
        lea ecx, [ebx + 0x210]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_005B11D0
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        mov ecx, esi
        mov byte ptr [ebx + 0x214], 0x1
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop esi
    L_exit:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D10C0] sub_005D10C0 (152 bytes)
extern "C" __declspec(naked) void __fastcall fn_005D10C0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x008A56C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne L_exit
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        push 0x2
        lea ecx, [ebx + 0x210]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_005B11D0
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        mov ecx, esi
        mov byte ptr [ebx + 0x214], 0x1
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop esi
    L_exit:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D1160] sub_005D1160 (152 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_005B11D0();
extern "C" void ext_00493EE0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005D1160(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x008A56C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne L_exit
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        push 0x3
        lea ecx, [ebx + 0x210]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_005B11D0
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        mov ecx, esi
        mov byte ptr [ebx + 0x214], 0x1
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop esi
    L_exit:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D9EA0] sub_005D9EA0 (69 bytes)
extern "C" void ext_005D0710();
extern "C" void ext_005D1020();
extern "C" __declspec(naked) void __fastcall fn_005D9EA0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x1f1], 0x0
        jne done
        call ext_005D0710
        fstp dword ptr [esp + 0x4]
        push 0x1
        lea ecx, [esi + 0x210]
        call ext_005B11E0
        fld dword ptr [esp + 0xc]
        fdiv dword ptr [esp + 0x4]
        push ecx
        mov ecx, esi
        fmulp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_005D1020
done:
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005D1200] sub_005D1200 (152 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_005B11D0();
extern "C" void ext_00493EE0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005D1200(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x008A56C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne L_exit
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        push 0x4
        lea ecx, [ebx + 0x210]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_005B11D0
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        mov ecx, esi
        mov byte ptr [ebx + 0x214], 0x1
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop esi
    L_exit:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005D9E00] sub_005D9E00 (158 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00493EE0();
extern "C" void ext_005D1430();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006619D0();
extern "C" int mem_00B40644;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005D9E00(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0
        jne L_done_005D9E00
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov eax, dword ptr [mem_00B40644]
        mov ecx, dword ptr [mem_00B40640]
        push eax
        mov dword ptr [esp + 0x1c], 0
        call ext_006619D0
        fld dword ptr [esp + 0x20]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        call ext_005D1430
        mov ecx, esi
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        pop edi
        pop esi
    L_done_005D9E00:
        mov ecx, dword ptr [esp + 0x8]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005DF780] sub_005DF780 (190 bytes)
extern "C" void ext_005DF2B0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005DF780(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        push edi
        mov byte ptr [esp + 10h], 0
        jbe L_005DF79C
        call dword ptr [mem_00925134]
    L_005DF79C:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_005DF7AA
        call dword ptr [mem_00925134]
    L_005DF7AA:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_005DF2B0
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_005DF7D4
        call dword ptr [mem_00925134]
    L_005DF7D4:
        test esi, esi
        je L_005DF7DC
        cmp esi, esi
        je L_005DF7E2
    L_005DF7DC:
        call dword ptr [mem_00925134]
    L_005DF7E2:
        cmp ebx, edi
        je L_005DF815
        test esi, esi
        jne L_005DF7F0
        call dword ptr [mem_00925134]
    L_005DF7F0:
        cmp ebx, dword ptr [esi + 8]
        jb L_005DF7FB
        call dword ptr [mem_00925134]
    L_005DF7FB:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jl L_005DF815
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_005DF815:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_005DF82D
        call dword ptr [mem_00925134]
    L_005DF82D:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret 8
    }
}

// [0x005DFA60] sub_005DFA60 (102 bytes)
extern "C" void ext_005DF780();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005DFA60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_005DF780
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_005DFA8A
        call ebp
    L_005DFA8A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_005DFA96
        cmp edi, esi
        je L_005DFA98
    L_005DFA96:
        call ebp
    L_005DFA98:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_005DFABA
        test edi, edi
        jne L_005DFAA6
        call ebp
    L_005DFAA6:
        cmp esi, dword ptr [edi + 8]
        jb L_005DFAAD
        call ebp
    L_005DFAAD:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_005DFABA:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x005DCA20] sub_005DCA20 (184 bytes)
extern "C" void ext_00401D20();
extern "C" void ext_005B1870();
extern "C" void ext_005CFC80();
extern "C" void ext_005DC6C0();
extern "C" void ext_006A6D5C();

extern "C" __declspec(naked) void __fastcall fn_005DCA20(void* self) {
    __asm {
        push -1
        push 0x8a572a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x968c1c
        mov dword ptr [esi + 4], 0x968bd4
        mov dword ptr [esi + 8], 0x968b94
        mov dword ptr [esi + 0xc], 0x968b44
        mov dword ptr [esi + 0x150], 0x968b2c
        mov dword ptr [esp + 0x10], 4
        call ext_005CFC80
        push 0x401cc0
        push 2
        push 8
        lea eax, [esi + 0x264]
        push eax
        mov byte ptr [esp + 0x20], 3
        call ext_006A6D5C
        lea ecx, [esi + 0x210]
        mov byte ptr [esp + 0x10], 2
        call ext_005B1870
        lea ecx, [esi + 0x1a8]
        mov byte ptr [esp + 0x10], 1
        call ext_005DC6C0
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x10], 0
        call ext_005B1870
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DF5C0] sub_005DF5C0 (228 bytes)
extern "C" void ext_005A07A0();
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_005DF5C0(void* self) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 8], 0
        mov dword ptr [esp + 0x14], 0
        jne short loc_005DF60F
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x14], 0xffffffff
        call dword ptr [mem_00924FF4]
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x1c

    loc_005DF60F:
        push ebx
        push ebp
        push edi
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je short loc_005DF638
        cmp edi, esi
        je short loc_005DF63A

    loc_005DF638:
        call ebp

    loc_005DF63A:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je short loc_005DF67B
        test edi, edi
        jne short loc_005DF648
        call ebp

    loc_005DF648:
        cmp esi, dword ptr [edi + 4]
        jne short loc_005DF64F
        call ebp

    loc_005DF64F:
        mov esi, dword ptr [esi + 0x28]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        pop ebp
        pop ebx
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x1c

    loc_005DF67B:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x1c
    }
}

// [0x005DF910] sub_005DF910 (42 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) bool __fastcall fn_005DF910(void* self, int edx_unused, const std::string& a1) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x4]
        call ext_005DF5C0
        test eax, eax
        setne al
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005DFAD0] sub_005DFAD0 (60 bytes)
extern "C" void ext_005DF5C0();
extern "C" void ext_005DF940();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) int __fastcall fn_005DFAD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x4]
        call ext_005DF5C0
        test eax, eax
        je L_005DFB05
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call ext_005DF940
        pop esi
        pop ecx
        ret 0x8
    L_005DFB05:
        xor eax, eax
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005D12A0] sub_005D12A0 (264 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_005D0670();
extern "C" void ext_005D0710();
extern "C" void ext_006A73C0();
extern "C" int mem_00955AD8;
extern "C" int mem_00965CE8;
extern "C" __declspec(naked) float __fastcall fn_005D12A0(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x154], 0x0
        je fail_5d12a0
        cmp dword ptr [esi + 0x260], 0x0
        jne fail_5d12a0
        call ext_005D0710
        fmul dword ptr [esi + 0x204]
        mov ecx, dword ptr [esi + 0x154]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcomp qword ptr [ecx + 0xc0]
        fnstsw ax
        test ah, 0x41
        jne fail_5d12a0
        fld qword ptr [ecx + 0xc0]
        push 0x2
        lea ecx, [esi + 0x210]
        fstp qword ptr [esp + 0xc]
        call ext_005B11E0
        fmul dword ptr [esi + 0x204]
        fld dword ptr [esp + 0x4]
        mov ecx, esi
        fld qword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fdiv dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [esp + 0x4]
        fmul qword ptr [mem_00955AD8]
        fstp qword ptr [esp + 0x8]
        call ext_005D0670
        fdivr qword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A73C0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        pop esi
        fadd st(0), st
        fmul qword ptr [mem_00965CE8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0xc
        ret
    fail_5d12a0:
        push 0x2
        lea ecx, [esi + 0x210]
        call ext_005B11E0
        fmul dword ptr [esi + 0x204]
        mov ecx, esi
        fmul qword ptr [mem_00955AD8]
        fstp qword ptr [esp + 0x8]
        call ext_005D0670
        fdivr qword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A73C0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        pop esi
        fadd st(0), st
        fmul qword ptr [mem_00965CE8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0xc
        ret
    }
}

// [0x005DF210] sub_005DF210 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B45B74;
extern "C" int mem_00B45B58;

extern "C" __declspec(naked) void __fastcall fn_005DF210(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a600e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45B74], al
        jne skip_init
        or dword ptr [mem_00B45B74], eax
        push 0xa43218
        push offset mem_00B45B58
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e2e0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45B58
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_004275E0(); extern "C" void ext_00427640(); extern "C" void ext_0046C0A0(); extern "C" void ext_004974E0(); extern "C" void ext_004B7060(); extern "C" void ext_0053F5F0(); extern "C" void ext_0063EFE0(); extern "C" void ext_0063F530();
extern "C" int mem_00A9F644; extern "C" int mem_00A9F684; extern "C" int mem_00A9F688; extern "C" int mem_00A9FA20; extern "C" int mem_00A9F238; extern "C" int mem_00A9F148;
extern "C" int mem_00B53A34; extern "C" int mem_00B53B30; extern "C" int mem_00B53AB0; extern "C" int mem_00B53A70; extern "C" int mem_00B53AF0;
// [0x005D0860] sub_005D0860 (286 bytes)
extern "C" __declspec(naked) void __fastcall fn_005D0860(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A9F644]
        push esi
        mov esi, [esp+8]
        push edi
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi+4]
        push ecx
        call ext_004275E0
        mov edx, [mem_00A9F684]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov [esp+0xc], eax
        lea eax, [esp+0xc]
        push eax
        lea ecx, [edi+0x28]
        push ecx
        call ext_0053F5F0
        mov edx, [mem_00A9F688]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov [esp+0xc], eax
        lea eax, [esp+0xc]
        push eax
        lea ecx, [edi+0x2c]
        push ecx
        call ext_0046C0A0
        mov edx, [mem_00A9FA20]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov [esp+0xc], eax
        lea eax, [esp+0xc]
        push eax
        lea ecx, [edi+0x30]
        push ecx
        call ext_00427640
        add esp, 8
        push esi
        lea ecx, [edi+0x20]
        call ext_004B7060
        mov edx, [mem_00A9F238]
        push 1
        push 0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L1
        cmp eax, offset mem_00B53B30
        je L1
        cmp eax, offset mem_00B53AB0
        je L1
        cmp eax, offset mem_00B53A70
        je L1
        cmp eax, offset mem_00B53AF0
        jne L2
L1:     mov eax, offset mem_00B53B30
L2:     push eax
        lea ecx, [edi+0x34]
        call ext_004974E0
        mov eax, [mem_00A9F148]
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L3
        cmp eax, offset mem_00B53B30
        je L3
        cmp eax, offset mem_00B53AB0
        je L3
        cmp eax, offset mem_00B53A70
        je L3
        cmp eax, offset mem_00B53AF0
        jne L4
L3:     mov eax, offset mem_00B53B30
L4:     push eax
        lea ecx, [edi+0x3c]
        call ext_004974E0
        pop edi
        pop esi
        ret 4
    }
}

// [0x005DD020] sub_005DD020 (112 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00530720();
extern "C" void ext_00662880();

extern "C" __declspec(naked) void __fastcall fn_005DD020(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a1908
        push eax
        mov dword ptr fs:[0], esp
        mov ecx, dword ptr [ecx + 0x158]
        xor eax, eax
        sub esp, 0x10
        cmp ecx, eax
        je L_005DD07F
        mov dword ptr [esp + 0x4], eax
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x18], eax
        lea eax, [esp]
        push eax
        call ext_00530720
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x4]
        push edx
        call ext_00662880
        add esp, 0x8
        lea ecx, [esp]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_004026E0
    L_005DD07F:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x005DFB10] sub_005DFB10 (112 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0041FF30();
extern "C" void ext_005DF210();
extern "C" void ext_005DFA60();
extern "C" void ext_006A6DD2();

// [0x005DFB10] sub_005DFB10 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DFB10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_005DFA60
        test eax, eax
        jne done_005DFB10
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0x0
        call ext_005DF210
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
done_005DFB10:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x005D9F90] sub_005D9F90 (379 bytes)
// Inline SEH frame (try/catch) with four local std::string temporaries; written as naked asm so the
// catch funnel and state numbers stay byte-identical (a C++ try/catch emits separate funclets).
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E90;
extern "C" int mem_00925074;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" void ext_00559770();
extern "C" void ext_005D0790();
extern "C" void ext_00663580();
extern "C" void ext_00664ED0();

extern "C" __declspec(naked) void __fastcall fn_005D9F90(void* self, int edx_unused, const void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8a5667
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x7c
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [ebp - 0x34]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        call dword ptr [mem_00924FE8]
        lea ecx, [ebp - 0x88]
        mov dword ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FE8]
        lea ecx, [ebp - 0x6c]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [ebp - 0x50]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [ebp + 0x8]
        lea eax, [ebp - 0x34]
        push eax
        lea ecx, [ebp - 0x50]
        push ecx
        lea edx, [ebp - 0x6c]
        push edx
        lea eax, [ebp - 0x88]
        add edi, 0x4
        push eax
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 0x3
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00663580
        lea ecx, [ebp - 0x34]
        push ecx
        call ext_00664ED0
        lea edx, [ebp - 0x34]
        push edx
        mov byte ptr [ebp - 0x4], 0x4
        call ext_00559770
        mov ecx, dword ptr [esi + 0x4]
        mov ebx, eax
        add esp, 0x1c
        cmp ebx, ecx
        je L_after_release
        test ecx, ecx
        je L_after_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_after_release:
        mov ecx, ebx
        test ecx, ecx
        mov dword ptr [esi + 0x4], ebx
        je L_skip_vcall
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x54]
        push 0x100
        call edx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x58]
        push 0x100
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        mov dword ptr [eax + 0x420], ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        push edi
        call edx
L_skip_vcall:
        mov dword ptr [ebp - 0x4], 0x3
L_resume:
        lea ecx, [ebp - 0x50]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x6c]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x88]
        mov byte ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x34]
        mov dword ptr [ebp - 0x4], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
catch_funnel:
        mov ecx, dword ptr [ebp - 0x14]
        push 0x0
        add ecx, 0x4
        call ext_005D0790
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebp - 0x18]
        mov edx, dword ptr [mem_00925074]
        push eax
        add ecx, 0xc
        push ecx
        push edx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x5da086
        ret
    }
}

// [0x005DC890] sub_005DC890 (152 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005D1480();
extern "C" void ext_005D9F30();
extern "C" void ext_005D9F90();
extern "C" void ext_005DC430();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005DC890(void* self) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x8
        mov esi, ecx
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0xc], edi
        test edi, edi
        mov dword ptr [esp + 0x18], 0x0
        je loc_5dc8dd
        call ext_00594000
        add eax, 0x1c8
        push eax
        mov ecx, edi
        call ext_005D1480
        mov ebx, eax
        jmp loc_5dc8df
loc_5dc8dd:
        xor ebx, ebx
loc_5dc8df:
        mov edi, dword ptr [esi + 0x44]
        cmp ebx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        je loc_5dc902
        test edi, edi
        je loc_5dc902
        mov ecx, edi
        call ext_005D9F30
        push edi
        call ext_006A5C5C
        add esp, 0x4
loc_5dc902:
        push esi
        mov ecx, ebx
        mov dword ptr [esi + 0x44], ebx
        call ext_005D9F90
        mov ecx, dword ptr [esi + 0x44]
        push esi
        call ext_005DC430
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DC7D0] sub_005DC7D0 (182 bytes)
extern "C" void ext_005DA110();
extern "C" void ext_005DA130();
extern "C" void ext_005DA150();

extern "C" __declspec(naked) void __fastcall fn_005DC7D0(void* self) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x8
        mov esi, ecx
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0xc], edi
        test edi, edi
        mov dword ptr [esp + 0x18], 0x0
        je loc_5dc81d
        call ext_00594000
        add eax, 0x1c8
        push eax
        mov ecx, edi
        call ext_005D1480
        mov ebx, eax
        jmp loc_5dc81f
loc_5dc81d:
        xor ebx, ebx
loc_5dc81f:
        mov edi, dword ptr [esi + 0x44]
        cmp ebx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        je loc_5dc842
        test edi, edi
        je loc_5dc842
        mov ecx, edi
        call ext_005D9F30
        push edi
        call ext_006A5C5C
        add esp, 0x4
loc_5dc842:
        push esi
        mov ecx, ebx
        mov dword ptr [esi + 0x44], ebx
        call ext_005D9F90
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esi + 0x44]
        push eax
        call ext_005DA110
        mov ecx, dword ptr [esi + 0x24]
        push ecx
        mov ecx, dword ptr [esi + 0x44]
        call ext_005DA130
        fld dword ptr [esi + 0x2c]
        push ecx
        mov ecx, dword ptr [esi + 0x44]
        fstp dword ptr [esp]
        call ext_005DA150
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005DC970] sub_005DC970 (161 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005DC890();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_005DC970(void* self, int edx_unused, void* arg1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea ebx, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov esi, eax
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_0065C640
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ebp, [edi + 0x4]
        push ebp
        mov dword ptr [esp + 0x24], 0
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne loc_5dc9ed
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        mov ecx, edi
        call ext_005DC890
        mov ecx, ebx
        call ext_00493EE0
loc_5dc9ed:
        mov ecx, esi
        mov dword ptr [esp + 0x1c], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005DCBC0] sub_005DCBC0 (184 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00547CD0();
extern "C" void ext_00594000();
extern "C" void ext_005DC7D0();
extern "C" void ext_005DC930();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005DCBC0(void* self, int edx_unused, unsigned char arg1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov al, byte ptr [esp + 0x20]
        test al, al
        mov dword ptr [esp + 0x18], 0
        mov byte ptr [esi + 0x1f0], al
        je loc_5dcc36
        push ebp
        lea ebp, [esi + 0x1a8]
        mov ecx, ebp
        call ext_005DC7D0
        mov ecx, dword ptr [esi + 0x154]
        push ebp
        call ext_00547CD0
        pop ebp
        jmp loc_5dcc4e
loc_5dcc36:
        mov ecx, dword ptr [esi + 0x154]
        push 0
        call ext_00547CD0
        lea ecx, [esi + 0x1a8]
        call ext_005DC930
loc_5dcc4e:
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_005CFF60();
extern "C" void ext_005CFFE0();
extern "C" void ext_005D00C0();
extern "C" void ext_0067E020();
extern "C" int mem_00B40644;

struct Mat16_5D03D0 {
    int d[16];
};

struct Vec4_5D03D0 {
    int d[4];
};

// [0x005D03D0] sub_005D03D0 (135 bytes)
extern "C" void __fastcall fn_005D03D0(void* self, int edx_unused, float angle) {
    if (*((unsigned char*)self + 0x1f1) != 0) {
        return;
    }
    Vec4_5D03D0 vec;
    Mat16_5D03D0 mat;
    ((void (__stdcall*)(Vec4_5D03D0*))ext_005D00C0)(&vec);
    void* obj = (char*)self + 4;
    void* src = ((void* (__thiscall*)(void*, int))(*(void***)obj)[5])(obj, mem_00B40644);
    mat = *(Mat16_5D03D0*)src;
    void* r = ((void* (__thiscall*)(void*, float))ext_005CFF60)(self, -angle);
    ((void (__thiscall*)(int*, int*, void*))ext_0067E020)(&mat.d[1], &vec.d[1], r);
    ((void (__thiscall*)(void*, int, Mat16_5D03D0*, int))(*(void***)obj)[0])(obj, 0, &mat, mem_00B40644);
    ((void (__thiscall*)(void*, Vec4_5D03D0*))ext_005CFFE0)(self, &vec);
}

extern "C" void ext_005CFF60();
extern "C" void ext_005CFFE0();
extern "C" void ext_005D00C0();
extern "C" void ext_0067E020();
extern "C" int mem_0093F8F0;

// [0x005D0460] sub_005D0460 (197 bytes)
extern "C" __declspec(naked) void __fastcall fn_005D0460(void* self) {
    __asm {
        sub esp, 0x50
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x1f1], 0x0
        jne exit_early
        push ebp
        push esi
        push edi
        lea eax, [esp + 0x10]
        push eax
        call ext_005D00C0
        mov edx, dword ptr [ebx + 0x4]
        mov eax, dword ptr [mem_00B40644]
        mov edx, dword ptr [edx + 0x14]
        lea ebp, [ebx + 0x4]
        push eax
        mov ecx, ebp
        call edx
        fld dword ptr [esp + 0x64]
        mov esi, eax
        fchs
        mov ecx, 0x10
        lea edi, [esp + 0x20]
        rep movsd
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        call ext_005CFF60
        push eax
        lea eax, [esp + 0x28]
        push eax
        mov ecx, eax
        call ext_0067E020
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x38]
        fmul dword ptr [esp + 0x18]
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x1c]
        faddp st(1), st
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x64]
        fcomp dword ptr [mem_0093F8F0]
        fnstsw ax
        test ah, 0x1
        jne exit_pop
        mov eax, dword ptr [mem_00B40644]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        push 0x0
        mov ecx, ebp
        call edx
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebx
        call ext_005CFFE0
    exit_pop:
        pop edi
        pop esi
        pop ebp
    exit_early:
        pop ebx
        add esp, 0x50
        ret 0x4
    }
}

extern "C" void ext_00401AF0();
extern "C" void ext_00419F50();
extern "C" void ext_0041A0A0();
extern "C" void ext_0043CB50();
extern "C" void ext_0045DB00();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

// [0x005DF300] sub_005DF300 (696 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DF300(void* self) {
    __asm {
        mov eax, fs:[0]
        push -0x1
        push 0x88f4c2
        push eax
        mov fs:[0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x15], 0x0
        push ebp
        mov ebp, ecx
        je L_5DF37E
        push 0x929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], 0x928ee4
        call ext_006A6DD2

    L_5DF37E:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00419F50
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x15], 0x0
        je L_5DF39D
        mov edi, dword ptr [ebx + 0x8]
        jmp L_5DF3B5

    L_5DF39D:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x15], 0x0
        je L_5DF3AA
        mov edi, eax
        jmp L_5DF3B5

    L_5DF3AA:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_5DF420

    L_5DF3B5:
        cmp byte ptr [edi + 0x15], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_5DF3C1
        mov dword ptr [edi + 0x4], esi

    L_5DF3C1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5DF3CE
        mov dword ptr [eax + 0x4], edi
        jmp L_5DF3D9

    L_5DF3CE:
        cmp dword ptr [esi], ebx
        jne L_5DF3D6
        mov dword ptr [esi], edi
        jmp L_5DF3D9

    L_5DF3D6:
        mov dword ptr [esi + 0x8], edi

    L_5DF3D9:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_5DF3F9
        cmp byte ptr [edi + 0x15], 0x0
        je L_5DF3EE
        mov eax, esi
        jmp L_5DF3F7

    L_5DF3EE:
        push edi
        call ext_00401AF0
        add esp, 0x4

    L_5DF3F7:
        mov dword ptr [ebx], eax

    L_5DF3F9:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_5DF477
        cmp byte ptr [edi + 0x15], 0x0
        je L_5DF412
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_5DF477

    L_5DF412:
        push edi
        call ext_0043CB50
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_5DF477

    L_5DF420:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_5DF430
        mov esi, ecx
        jmp L_5DF44A

    L_5DF430:
        cmp byte ptr [edi + 0x15], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_5DF43C
        mov dword ptr [edi + 0x4], esi

    L_5DF43C:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx

    L_5DF44A:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5DF457
        mov dword ptr [eax + 0x4], ecx
        jmp L_5DF465

    L_5DF457:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_5DF462
        mov dword ptr [eax], ecx
        jmp L_5DF465

    L_5DF462:
        mov dword ptr [eax + 0x8], ecx

    L_5DF465:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x14]
        mov al, byte ptr [ecx + 0x14]
        mov byte ptr [ecx + 0x14], dl
        mov byte ptr [ebx + 0x14], al

    L_5DF477:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x14], bl
        jne L_5DF578
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_5DF575

    L_5DF492:
        cmp byte ptr [edi + 0x14], bl
        jne L_5DF575
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_5DF504
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x14], 0x0
        jne L_5DF4BC
        mov byte ptr [eax + 0x14], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x14], 0x0
        call ext_0045DB00
        mov eax, dword ptr [esi + 0x8]

    L_5DF4BC:
        cmp byte ptr [eax + 0x15], 0x0
        jne L_5DF534
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x14], bl
        jne L_5DF4D1
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x14], bl
        je L_5DF530

    L_5DF4D1:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x14], bl
        jne L_5DF4EB
        mov byte ptr [edx + 0x14], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x14], 0x0
        call ext_0041A0A0
        mov eax, dword ptr [esi + 0x8]

    L_5DF4EB:
        mov cl, byte ptr [esi + 0x14]
        mov byte ptr [eax + 0x14], cl
        mov byte ptr [esi + 0x14], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x14], bl
        call ext_0045DB00
        jmp L_5DF575

    L_5DF504:
        cmp byte ptr [eax + 0x14], 0x0
        jne L_5DF51B
        mov byte ptr [eax + 0x14], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x14], 0x0
        call ext_0041A0A0
        mov eax, dword ptr [esi]

    L_5DF51B:
        cmp byte ptr [eax + 0x15], 0x0
        jne L_5DF534
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x14], bl
        jne L_5DF547
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x14], bl
        jne L_5DF547

    L_5DF530:
        mov byte ptr [eax + 0x14], 0x0

    L_5DF534:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_5DF492
        jmp L_5DF575

    L_5DF547:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x14], bl
        jne L_5DF55F
        mov byte ptr [edx + 0x14], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x14], 0x0
        call ext_0045DB00
        mov eax, dword ptr [esi]

    L_5DF55F:
        mov cl, byte ptr [esi + 0x14]
        mov byte ptr [eax + 0x14], cl
        mov byte ptr [esi + 0x14], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x14], bl
        call ext_0041A0A0

    L_5DF575:
        mov byte ptr [edi + 0x14], bl

    L_5DF578:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_5DF595
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax

    L_5DF595:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov fs:[0], ecx
        add esp, 0x54
        ret 0xc
    }
}

// [0x005DD310] sub_005DD310 (34 bytes)
extern "C" void ext_005CFCE0();
extern "C" void ext_005DD2D0();

extern "C" __declspec(naked) void __fastcall fn_005DD310(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x1f1], 0x0
        jne done
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_005CFCE0
        push eax
        mov ecx, esi
        call ext_005DD2D0
done:
        pop esi
        ret 0x4
    }
}

// [0x005DFEB0] sub_005DFEB0 (40 bytes)
extern "C" void ext_005DFD20();
extern "C" __declspec(naked) void __fastcall fn_005DFEB0(void* self, int edx_unused, int a1, const std::string& a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        push esi
        push eax
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push edx
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x4]
        call ext_005DFD20
        pop esi
        ret 0x8
    }
}

// [0x005DF270] sub_005DF270 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DF270(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x15], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_005DF270
        mov esi, dword ptr [esi]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x15], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005DF840] sub_005DF840 (203 bytes)
extern "C" void ext_00419F50();
extern "C" void ext_005DF270();
extern "C" void ext_005DF300();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005DF840(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_5DF85A
        cmp edi, esi
        je L_5DF860
L_5DF85A:
        call dword ptr [mem_00925134]
L_5DF860:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_5DF8C1
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_5DF877
        cmp eax, esi
        je L_5DF87D
L_5DF877:
        call dword ptr [mem_00925134]
L_5DF87D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_5DF8C1
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005DF270
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_5DF8C1:
        test edi, edi
        je L_5DF8CB
        cmp edi, dword ptr [esp + 0x28]
        je L_5DF8D1
L_5DF8CB:
        call dword ptr [mem_00925134]
L_5DF8D1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5DF8F8
        lea ecx, [esp + 0x20]
        call ext_00419F50
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005DF300
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_5DF8C1
L_5DF8F8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x005DFC70] sub_005DFC70 (84 bytes)
extern "C" void ext_005DF720();
extern "C" void ext_005DF840();
extern "C" __declspec(naked) void __fastcall fn_005DFC70(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done_005DFC70
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005DF720
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005DF840
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_006A5C5C
        push esi
        mov dword ptr [esi + 0x4], 0
        mov dword ptr [esi + 0x8], 0
        call ext_006A5C5C
        add esp, 8
done_005DFC70:
        pop esi
        add esp, 8
        ret
    }
}

// [0x005DFC00] sub_005DFC00 (112 bytes)
extern "C" __declspec(naked) void __stdcall fn_005DFC00(void* a1, void* b) {
    __asm {
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        jne skip_null_a1
        call ebp
skip_null_a1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edi + 0x4]
        jne skip_mismatch
        call ebp
skip_mismatch:
        mov esi, dword ptr [esi + 0x28]
        test esi, esi
        je done
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005DF720
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_005DF840
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_006A5C5C
        push esi
        mov dword ptr [esi + 0x4], 0
        mov dword ptr [esi + 0x8], 0
        call ext_006A5C5C
        add esp, 8
done:
        pop edi
        pop esi
        pop ebp
        ret 8
    }
}
