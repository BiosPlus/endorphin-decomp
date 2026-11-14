// Decompiled translation unit: src/leaf/decompiled_480000.cpp

#include <cmath>
#include <cstdio>
#include <new>
#include <string>
#include <vector>

// [0x004806E0] sub_004806E0 (31 bytes)
extern "C" void ext_004A57F0();

extern "C" __declspec(naked) void __fastcall fn_004806E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x3e4], eax
        mov dword ptr [ecx + 0x3f0], eax
        mov ecx, dword ptr [ecx + 0x3b4]
        mov dword ptr [esp + 0x4], eax
        jmp ext_004A57F0
    }
}

// [0x0048FB30] sub_0048FB30 (33 bytes)
// Returns 0 if this->f4 is 0; otherwise (this->f8 - this->f4) / 124 (signed).
extern "C" int __fastcall fn_0048FB30(const int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 124;
}

// [0x0048A9A0] sub_0048A9A0 (22 bytes)
extern "C" void ext_0048A120();

extern "C" void __fastcall fn_0048A9A0(void* self, int edx_unused, int a1, int a2) {
    typedef void (__cdecl *fn_t)(int, int, void*);
    ((fn_t)ext_0048A120)(a1, a2, self);
}

// [0x0048ABB0] sub_0048ABB0 (22 bytes)
extern "C" void ext_0048A360();

extern "C" __declspec(naked) void __fastcall fn_0048ABB0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x234]
        test ecx, ecx
        je done
        fldz
        push ecx
        fstp dword ptr [esp]
        call ext_0048A360
done:
        ret
    }
}

// [0x00480750] sub_00480750 (25 bytes)
extern "C" void ext_004A7870();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00480750(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004A7870
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x0048A9F0] sub_0048A9F0 (26 bytes)
extern "C" void ext_0048A1D0();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0048A9F0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x234]
        test ecx, ecx
        je done
        mov edx, dword ptr [mem_00B40640]
        push edx
        push eax
        call ext_0048A1D0
    done:
        ret
    }
}

// [0x0048ABD0] sub_0048ABD0 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048ABD0(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x234]
        test ecx, ecx
        je done
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_0048A360
    done:
        ret 0x4
    }
}

// [0x0048CCA0] sub_0048CCA0 (27 bytes)
extern "C" void ext_0048CB80();

extern "C" __declspec(naked) void __fastcall fn_0048CCA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0048CB80
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_004A6970();

// [0x00482640] sub_00482640 (28 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00482640(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], eax
        call ext_004A6970
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x004809B0] sub_004809B0 (35 bytes)
// Returns 0 if this->f8 is non-null, this->fc - this->f8 is non-zero (in elements),
// and this->f20 == 0; otherwise returns 1.
extern "C" __declspec(naked) int __fastcall fn_004809B0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        je short L_ret1_004809B0
        mov edx, dword ptr [ecx + 0xc]
        sub edx, eax
        sar edx, 0x2
        je short L_ret1_004809B0
        cmp byte ptr [ecx + 0x20], 0x0
        jne short L_ret1_004809B0
        xor eax, eax
        pop ecx
        ret
L_ret1_004809B0:
        mov eax, 0x1
        pop ecx
        ret
    }
}

// [0x00480280] sub_00480280 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00480280(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        test edx, edx
        jne short L_nonzero
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
    L_nonzero:
        mov eax, dword ptr [ecx + 0x8]
        sub eax, edx
        sar eax, 0x2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
    }
}

// [0x00480530] sub_00480530 (37 bytes)
extern "C" void ext_00494050();
extern "C" void ext_004A5860();
extern "C" __declspec(naked) void __fastcall fn_00480530(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x3dc]
        call ext_00494050
        lea ecx, [esi + 0x3e8]
        call ext_00494050
        mov ecx, dword ptr [esi + 0x3b4]
        pop esi
        jmp ext_004A5860
    }
}

// [0x004805A0] sub_004805A0 (40 bytes)
extern "C" void ext_004AF850();

extern "C" __declspec(naked) void __fastcall fn_004805A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x8]
        mov dword ptr [esi + 0x3b8], edi
        call ext_004AF850
        mov eax, dword ptr [esi + 0x3b4]
        mov dword ptr [eax + 0x2ac], edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00480130] sub_00480130 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00480130(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x54]
        lea ecx, [esi + 0x10]
        call edx
        test eax, eax
        jne L_call
        mov eax, dword ptr [esi + 0x240]
        test eax, eax
        je L_done
    L_call:
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x4]
        push 0x1
        call eax
    L_done:
        pop esi
        ret
    }
}

// [0x00480C70] sub_00480C70 (41 bytes)
extern "C" __declspec(naked) void __cdecl fn_00480C70(void* dst, void* end, const void* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp eax, edx
        je done_00480C70
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        push edi
    loop_00480C70:
        mov edi, eax
        add eax, 0x40
        cmp eax, edx
        mov ecx, 0x10
        mov esi, ebx
        rep movsd
        jne loop_00480C70
        pop edi
        pop esi
        pop ebx
    done_00480C70:
        ret
    }
}

// [0x00489320] sub_00489320 (42 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00489320(void* self, int edx_unused, int* out) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [edi], 0x0
        jbe skip_call
        call dword ptr [mem_00925134]
skip_call:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00481C20] sub_00481C20 (42 bytes)
extern "C" void __fastcall fn_00481C20(void* self) {
    void** s = (void**)self;
    void* p = s[2];
    if (p) {
        typedef void (__cdecl *PFN)(void*);
        reinterpret_cast<PFN>(ext_006A5C5C)(p);
    }
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
}

// [0x00486850] sub_00486850 (43 bytes)
extern "C" __declspec(naked) float __fastcall fn_00486850(float* self, int edx_unused, const float* other) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0xc]
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x0048E2E0] sub_0048E2E0 (43 bytes)
extern "C" void ext_006657F0();

extern "C" __declspec(naked) void __fastcall fn_0048E2E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        call ext_006657F0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi], 0x93e5e8
        mov dword ptr [esi + 0x14], 0x0
        mov dword ptr [esi + 0x18], ecx
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00486BB0] sub_00486BB0 (45 bytes)
extern "C" void ext_004C0340();
extern "C" int mem_00924FEC;
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_00486BB0(void* self, int edx_unused, const void* s) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jne short done_00486BB0
        push edi
        lea ecx, [esi + 0x180]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_004C0340
done_00486BB0:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00480560] sub_00480560 (46 bytes)
// Virtual call self->m10 vfunc[3] (returns pointer to a {vptr,?,first,end} vector-like);
// returns true if first == NULL or (end - first) / 4 == 0.
extern "C" __declspec(naked) void __fastcall fn_00480560(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [eax + 0xc]
        add ecx, 0x10
        call edx
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne short size_00480560
        xor eax, eax
        test eax, eax
        sete cl
        mov al, cl
        ret
size_00480560:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
    }
}

// [0x00480DD0] sub_00480DD0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_00480DD0(const void* src, const void* end, void* dst) {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 0Ch]
        push ebx
        mov ebx, dword ptr [esp + 0Ch]
        cmp edx, ebx
        je done
        push esi
        push edi
    loop_top:
        test eax, eax
        je skip
        mov ecx, 10h
        mov esi, edx
        mov edi, eax
        rep movsd
    skip:
        add edx, 40h
        add eax, 40h
        cmp edx, ebx
        jne loop_top
        pop edi
        pop esi
    done:
        pop ebx
        ret
    }
}

// [0x00481770] sub_00481770 (48 bytes)
// For each of `count` 64-byte blocks starting at dst: if dst is non-null, copy 16 dwords from src into it.
extern "C" __declspec(naked) void __cdecl fn_00481770(void* dst, int count, const void* src) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        test edx, edx
        jbe done
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        push edi
    lp:
        test eax, eax
        je skp
        mov ecx, 0x10
        mov esi, ebx
        mov edi, eax
        rep movsd
    skp:
        sub edx, 0x1
        add eax, 0x40
        test edx, edx
        ja lp
        pop edi
        pop esi
        pop ebx
    done:
        ret
    }
}

// [0x0048A120] sub_0048A120 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_0048A120(void* first, void* last) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp eax, edi
        je done
        push esi
        lea esi, [eax + 0x4]
loop_top:
        cmp dword ptr [esi], 0x0
        je skip
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esi - 0x4]
        push edx
        call eax
skip:
        add esi, 0x8
        lea ecx, [esi - 0x4]
        cmp ecx, edi
        jne loop_top
        pop esi
done:
        pop edi
        ret
    }
}

// [0x0048C860] sub_0048C860 (49 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00519CE0();
extern "C" __declspec(naked) void __fastcall fn_0048C860(void* self) {
    __asm {
        mov eax, [ecx+0x34]
        test eax, eax
        push esi
        lea esi, [ecx+4]
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
    skip:
        mov dword ptr [esi+0x30], 0
        mov dword ptr [esi+0x34], 0
        mov dword ptr [esi+0x38], 0
        mov ecx, esi
        pop esi
        jmp ext_00519CE0
    }
}

// [0x00480E00] sub_00480E00 (53 bytes)
extern "C" __declspec(naked) void __cdecl fn_00480E00(const float* src, const float* end, float* dst) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp ecx, edx
        mov eax, dword ptr [esp + 0xc]
        je done
    loop_top:
        test eax, eax
        je skip_copy
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
    skip_copy:
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        jne loop_top
    done:
        ret
    }
}

// [0x004820D0] sub_004820D0 (41 bytes)
extern "C" void ext_00480E00();

extern "C" __declspec(naked) void __fastcall fn_004820D0(void* self, int edx_unused, const float* a1, const float* a2, float* a3) {
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
        call ext_00480E00
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004817A0] sub_004817A0 (53 bytes)
extern "C" __declspec(naked) void __cdecl fn_004817A0(float* dst, unsigned int count, const float* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        jbe done
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x4]
    loop_top:
        test eax, eax
        je skip
        fld dword ptr [edx]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [eax + 0xc]
    skip:
        sub ecx, 0x1
        add eax, 0x10
        test ecx, ecx
        ja loop_top
    done:
        ret
    }
}

// [0x004803F0] sub_004803F0 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_004803F0(void* self) {
    __asm {
        fld1
        mov eax, ecx
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
        ret
    }
}

// [0x00480CA0] sub_00480CA0 (55 bytes)
// Fills each 16-byte slot in [dst, end) with the 4-float vector at src.
extern "C" __declspec(naked) void __cdecl fn_00480CA0(float* dst, float* end, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp eax, edx
        je l480ca0_done
        mov ecx, dword ptr [esp + 0xc]
        add eax, 0x8
        push esi
    l480ca0_top:
        fld dword ptr [ecx]
        add eax, 0x10
        fstp dword ptr [eax - 0x18]
        lea esi, [eax - 0x8]
        cmp esi, edx
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax - 0x14]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax - 0x10]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax - 0xc]
        jne l480ca0_top
        pop esi
    l480ca0_done:
        ret
    }
}

// [0x00481DE0] sub_00481DE0 (55 bytes)
extern "C" void ext_00481770();

extern "C" __declspec(naked) void __fastcall fn_00481DE0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00481770
        mov eax, esi
        add esp, 0x18
        shl eax, 0x6
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00481E20] sub_00481E20 (55 bytes)
extern "C" void ext_004817A0();

extern "C" __declspec(naked) int __fastcall fn_00481E20(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004817A0
        mov eax, esi
        add esp, 0x18
        shl eax, 0x4
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00489350] sub_00489350 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00489350(void* self) {
    __asm {
        push 0x6c
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_skip0
        mov dword ptr [eax], 0
L_skip0:
        lea ecx, [eax + 4]
        test ecx, ecx
        je L_skip1
        mov dword ptr [ecx], 0
L_skip1:
        lea ecx, [eax + 8]
        test ecx, ecx
        je L_skip2
        mov dword ptr [ecx], 0
L_skip2:
        mov byte ptr [eax + 68h], 1
        mov byte ptr [eax + 69h], 0
        ret
    }
}

// [0x0048AFA0] sub_0048AFA0 (56 bytes)
extern "C" void __fastcall fn_0048AFA0(void* self) {
    typedef void (__cdecl *PFN3)(int, int, void*);
    typedef void (__cdecl *PFN1)(int);
    int* p = (int*)self;
    if (p[1] != 0) {
        ((PFN3)ext_0048A120)(p[1], p[2], self);
        ((PFN1)ext_006A5C5C)(p[1]);
    }
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

// [0x0048C960] sub_0048C960 (56 bytes)
extern "C" __declspec(naked) void __stdcall fn_0048C960(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x34]
        add esi, 0x4
        test eax, eax
        je skip_0048C960
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_0048C960:
        mov ecx, esi
        mov dword ptr [esi + 0x30], 0x0
        mov dword ptr [esi + 0x34], 0x0
        mov dword ptr [esi + 0x38], 0x0
        call ext_00519CE0
        pop esi
        ret 0x4
    }
}

// [0x00481700] sub_00481700 (62 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00481700(void* a1, void* a2, void* a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, edx
        sub eax, ebx
        sar eax, 0x6
        shl eax, 0x6
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        mov ecx, eax
        mov eax, ebp
        sub eax, ecx
        cmp ebx, edx
        je done_00481700
        push esi
        sub ebp, edx
        push edi
    loop_00481700:
        sub edx, 0x40
        cmp edx, ebx
        lea edi, [edx + ebp]
        mov ecx, 0x10
        mov esi, edx
        rep movsd
        jne loop_00481700
        pop edi
        pop esi
    done_00481700:
        pop ebp
        pop ebx
        ret
    }
}

// [0x00480C30] sub_00480C30 (54 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_006A5C5C();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_00480C30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je L_00480C64
        cmp dword ptr [esi], 0
        je L_00480C5B
        sub dword ptr [mem_00AD89B4], 1
        jne L_00480C5B
        mov eax, dword ptr [esi]
        mov byte ptr [eax + 0x153], 0
        cmp byte ptr [esi + 4], 0
        je L_00480C5B
        mov ecx, dword ptr [esi]
        call ext_0046F930
L_00480C5B:
        push esi
        call ext_006A5C5C
        add esp, 4
L_00480C64:
        pop esi
        ret
    }
}

// [0x004801C0] sub_004801C0 (44 bytes)
extern "C" void ext_00584B10();

extern "C" __declspec(naked) void __fastcall fn_004801C0(void* unused, int edx_unused, void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        xor al, al
        test ecx, ecx
        je done
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        je done_pop_edi
        push esi
        call ext_00584B10
        mov ecx, edi
        mov esi, eax
        call ext_00584B10
        cmp esi, eax
        setne al
        pop esi
    done_pop_edi:
        pop edi
    done:
        ret 0x8
    }
}

// [0x00486880] sub_00486880 (67 bytes)
// Formats d with "%lf" into a 50-byte buffer via _snprintf, then constructs
// the std::string at out (first stack arg) and returns out. ecx is not used.
extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __cdecl fn_00486880(std::string* out, double d) {
    __asm {
        sub esp, 0x38
        fld qword ptr [esp + 0x40]
        push esi
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x93c670
        lea eax, [esp + 0x14]
        push 0x32
        push eax
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x54]
        add esp, 0x14
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x0048CB80] sub_0048CB80 (67 bytes)
extern "C" __declspec(naked) void __cdecl fn_0048CB80(void* first, void* last) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, ebp
        je done
        push ebx
        push esi
        lea esi, [edi + 0x34]
        xor ebx, ebx
    loop_top:
        mov eax, dword ptr [esi]
        cmp eax, ebx
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip_free:
        lea ecx, [esi - 0x30]
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        call ext_00519CE0
        add edi, 0x68
        add esi, 0x68
        cmp edi, ebp
        jne loop_top
        pop esi
        pop ebx
    done:
        pop edi
        pop ebp
        ret
    }
}

// [0x0048D310] sub_0048D310 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048D310(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_0048D337
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0048CB80
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
L_0048D337:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00487C00] sub_00487C00 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_00487C00(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x69], 0x0
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
        cmp byte ptr [esi + 0x69], 0x0
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

// [0x00481BD0] sub_00481BD0 (71 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00481BD0(void* self, int edx_unused, int value) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0xc]
        cmp dword ptr [esi + 0x8], ebx
        jbe L_chk2
        call ebp
L_chk2:
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp edi, dword ptr [esi + 0xc]
        jbe L_pre
        call ebp
L_pre:
        mov eax, edi
        cmp edi, ebx
        pop edi
        je L_done
        mov ecx, dword ptr [esp + 0x10]
        jmp L_loop
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_loop:
        cmp dword ptr [eax], ecx
        jne L_next
        mov dword ptr [eax], 0
L_next:
        add eax, 4
        cmp eax, ebx
        jne L_loop
L_done:
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00489080] sub_00489080 (71 bytes)
extern "C" __declspec(naked) void __cdecl fn_00489080(void) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 08h]
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp esi, edi
        je done_00489080
        lea ecx, [eax + 0Ch]
        lea edx, [esi + 0Ch]
    loop_00489080:
        fld dword ptr [esi]
        add esi, 14h
        fstp dword ptr [eax]
        add eax, 14h
        fld dword ptr [edx - 8]
        add ecx, 14h
        fstp dword ptr [ecx - 1Ch]
        add edx, 14h
        cmp esi, edi
        fld dword ptr [edx - 18h]
        fstp dword ptr [ecx - 18h]
        fld dword ptr [edx - 14h]
        fstp dword ptr [ecx - 14h]
        fld dword ptr [edx - 10h]
        fstp dword ptr [ecx - 10h]
        jne loop_00489080
    done_00489080:
        pop edi
        pop esi
        ret
    }
}

// [0x00489DC0] sub_00489DC0 (73 bytes)
extern "C" __declspec(naked) void __cdecl fn_00489DC0(void* first, void* last, void* dst) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        lea ecx, [eax + 0xc]
        lea edx, [esi + 0xc]
    copy:
        test eax, eax
        je skip
        fld dword ptr [esi]
        fstp dword ptr [eax]
        fld dword ptr [edx - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx - 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [edx]
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [ecx + 0x4]
    skip:
        add esi, 0x14
        add eax, 0x14
        add ecx, 0x14
        add edx, 0x14
        cmp esi, edi
        jne copy
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0048A9C0] sub_0048A9C0 (41 bytes)
extern "C" void ext_00489DC0();

extern "C" __declspec(naked) void __fastcall fn_0048A9C0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00489DC0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0048E3D0] sub_0048E3D0 (77 bytes)
// Copies the 12-byte records in [first, last) forward to dest; returns dest + count (count = (last-first)/12).
extern "C" __declspec(naked) void* __cdecl fn_0048E3D0(void* first, void* last, void* dest) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        __asm __asm _emit 0xD1 __asm _emit 0xFA // sar edx, 1
        mov eax, edx
        __asm __asm _emit 0xC1 __asm _emit 0xE8 __asm _emit 0x1F // shr eax, 0x1f
        add eax, edx
        cmp ecx, esi
        mov edx, dword ptr [esp + 0x10]
        __asm __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0x40 // lea eax, [eax + 2*eax]
        __asm __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0x82 // lea eax, [edx + 4*eax]
        je L_0048E41B
        sub edx, ecx
        push edi
        __asm __asm _emit 0x8B __asm _emit 0xFF // mov edi, edi
L_0048E400:
        mov edi, dword ptr [ecx]
        __asm __asm _emit 0x89 __asm _emit 0x3C __asm _emit 0x0A // mov dword ptr [edx + ecx], edi
        mov edi, dword ptr [ecx + 0x4]
        __asm __asm _emit 0x89 __asm _emit 0x7C __asm _emit 0x0A __asm _emit 0x04 // mov dword ptr [edx + ecx + 0x4], edi
        mov edi, dword ptr [ecx + 0x8]
        __asm __asm _emit 0x89 __asm _emit 0x7C __asm _emit 0x0A __asm _emit 0x08 // mov dword ptr [edx + ecx + 0x8], edi
        add ecx, 0xc
        cmp ecx, esi
        jne L_0048E400
        pop edi
L_0048E41B:
        pop esi
        ret
    }
}

// [0x00486D80] sub_00486D80 (78 bytes)
extern "C" void __fastcall fn_00486D80(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x69) == 0) {
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

// [0x00480010] sub_00480010 (78 bytes)
extern "C" int __cdecl ext_005631C0(double, double);
extern "C" double mem_0093C2D8;

extern "C" __declspec(naked) void __fastcall fn_00480010(void* self) {
    __asm {
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
    outer:
        xor ecx, ecx
        mov edx, esi
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    inner:
        fld qword ptr [mem_0093C2D8]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [edx]
        fstp qword ptr [esp]
        call ext_005631C0
        add esp, 0x10
        test al, al
        je fail
        add ecx, 1
        add edx, 4
        cmp ecx, 4
        jl inner
        add edi, 1
        add esi, 0x10
        cmp edi, 4
        jl outer
        pop edi
        mov al, 1
        pop esi
        ret
    fail:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x00486DD0] sub_00486DD0 (82 bytes)
extern "C" void __fastcall fn_00486DD0(void* self, int edx_unused, void* a1) {
    char* x = (char*)a1;
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x69] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)((char*)self + 0x4);
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

// [0x004898F0] sub_004898F0 (82 bytes)
// lower_bound over 104-byte records keyed by an unsigned dword at offset 0.
extern "C" char* __cdecl fn_004898F0(char* first, char* last, const unsigned int* value) {
    char* cur = first;
    int count = (int)(last - first) / 104;
    if (count > 0) {
        unsigned int key = *value;
        do {
            int half = count / 2;
            char* mid = cur + half * 104;
            if (*(unsigned int*)mid < key) {
                cur = mid + 104;
                count = count - half - 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
    return cur;
}

// [0x0048E310] sub_0048E310 (83 bytes)
extern "C" void ext_00665810();
extern "C" __declspec(naked) void __fastcall fn_0048E310(void* self) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
skip_release:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00665810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00480770] sub_00480770 (85 bytes)
// Backward copy of 16-byte (4-float) elements from [first, last) ending at d_last; returns d_last - count.
extern "C" __declspec(naked) void* __cdecl fn_00480770(const void* first, const void* last, void* d_last) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, edi
        sar eax, 0x4
        shl eax, 0x4
        mov ecx, eax
        mov eax, ebx
        sub eax, ecx
        cmp edi, edx
        je done
        push esi
        mov esi, edx
        lea ecx, [ebx + 0x8]
        sub esi, ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        fld dword ptr [edx - 0x10]
        sub edx, 0x10
        sub ecx, 0x10
        cmp edx, edi
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [esi + ecx]
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [ecx + 0x4]
        jne loop_top
        pop esi
    done:
        pop edi
        pop ebx
        ret
    }
}

// [0x00481740] sub_00481740 (43 bytes)
extern "C" void ext_00480770();
extern "C" __declspec(naked) void __fastcall fn_00481740(void* self) {
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
        call ext_00480770
        add esp, 0x1c
        ret
    }
}

// [0x00489A80] sub_00489A80 (86 bytes)
extern "C" void ext_00489080();
extern "C" __declspec(naked) void* __cdecl fn_00489A80(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
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
        call ext_00489080
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4 * eax]
        lea eax, [edi + 4 * eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0048B730] sub_0048B730 (58 bytes)
extern "C" void ext_00489A80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048B730(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk1
        call ebp
    L_chk1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
    L_chk2:
        cmp ebx, edi
        je L_done
        mov eax, dword ptr [esi + 0x8]
        push ebx
        push eax
        push edi
        call ext_00489A80
        add esp, 0x0c
        mov dword ptr [esi + 0x8], eax
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004890D0] sub_004890D0 (87 bytes)
// Three-element sorting network over std::string refs (a=arg1, b=arg2, c=arg3) using a comparator
// loaded from an IAT slot; swaps go through the MSVCP80 std::string::swap IAT slot.
extern "C" int mem_00924EF4;
extern "C" int mem_00924FBC;

extern "C" __declspec(naked) void __cdecl fn_004890D0(std::string* a, std::string* b, std::string* c) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924EF4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_skip1
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FBC]
    L_skip1:
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        je L_skip2
        push esi
        mov ecx, ebp
        call dword ptr [mem_00924FBC]
    L_skip2:
        push edi
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_skip3
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FBC]
    L_skip3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00487ED0] sub_00487ED0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9DF0;
extern "C" int mem_00AD9DEC;

extern "C" __declspec(naked) void* __fastcall fn_00487ED0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8849fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9DF0], al
        jne L_done
        or dword ptr [mem_00AD9DF0], eax
        mov ecx, offset mem_00AD9DEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9DEC], 0x93ce3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9DEC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00487F30] sub_00487F30 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9DF8;
extern "C" int mem_00AD9DF4;

extern "C" __declspec(naked) void* __fastcall fn_00487F30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884a1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9DF8], al
        jne L_done
        or dword ptr [mem_00AD9DF8], eax
        mov ecx, offset mem_00AD9DF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9DF4], 0x93cf14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9DF4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00487F90] sub_00487F90 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E00;
extern "C" int mem_00AD9DFC;

extern "C" __declspec(naked) void* __fastcall fn_00487F90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884a3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E00], al
        jne L_done
        or dword ptr [mem_00AD9E00], eax
        mov ecx, offset mem_00AD9DFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9DFC], 0x93cfec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9DFC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00487FF0] sub_00487FF0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E08;
extern "C" int mem_00AD9E04;

extern "C" __declspec(naked) void* __fastcall fn_00487FF0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884a5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E08], al
        jne L_done
        or dword ptr [mem_00AD9E08], eax
        mov ecx, offset mem_00AD9E04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9E04], 0x93d0c4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9E04
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00488050] sub_00488050 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E10;
extern "C" int mem_00AD9E0C;

extern "C" __declspec(naked) void* __fastcall fn_00488050(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884a7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E10], al
        jne L_done
        or dword ptr [mem_00AD9E10], eax
        mov ecx, offset mem_00AD9E0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9E0C], 0x93d19c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9E0C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004880B0] sub_004880B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E18;
extern "C" int mem_00AD9E14;

extern "C" __declspec(naked) void* __fastcall fn_004880B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884a9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E18], al
        jne L_done
        or dword ptr [mem_00AD9E18], eax
        mov ecx, offset mem_00AD9E14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9E14], 0x93d274
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9E14
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00488110] sub_00488110 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E20;
extern "C" int mem_00AD9E1C;

extern "C" __declspec(naked) void* __fastcall fn_00488110(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884abe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E20], al
        jne L_done
        or dword ptr [mem_00AD9E20], eax
        mov ecx, offset mem_00AD9E1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9E1C], 0x93d34c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9E1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00488170] sub_00488170 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E28;
extern "C" int mem_00AD9E24;

extern "C" __declspec(naked) void* __fastcall fn_00488170(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884ade
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9E28], al
        jne L_done
        or dword ptr [mem_00AD9E28], eax
        mov ecx, offset mem_00AD9E24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD9E24], 0x93d424
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9E24
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00489230] sub_00489230 (88 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00489230(void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [8*eax]
        sub ecx, eax
        add ecx, ecx
        add ecx, ecx
        mov ebx, ebp
        sub ebx, ecx
        cmp edi, esi
        je L_done
        sub ebp, esi
        __asm _emit 0x8b
        __asm _emit 0xff
    L_loop:
        sub esi, 0x1c
        push esi
        lea ecx, [esi + ebp]
        call dword ptr [mem_00924FDC]
        cmp esi, edi
        jne L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x0048EF20] sub_0048EF20 (89 bytes)
extern "C" void ext_0048E3D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0048EF20(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        push esi
        push edi
        mov esi, ecx
        je L_invalid
        cmp ebx, dword ptr [esp + 0x1c]
        je L_ok
L_invalid:
        call dword ptr [mem_00925134]
L_ok:
        mov edi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        cmp edi, ecx
        je L_store
        mov eax, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push edx
        push edi
        push eax
        push ecx
        call ext_0048E3D0
        add esp, 0x18
        mov dword ptr [esi + 0x8], eax
L_store:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edi
        pop edi
        pop esi
        mov dword ptr [eax], ebx
        pop ebx
        ret 0x14
    }
}

// [0x00481C50] sub_00481C50 (59 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00481C50(void* self) {
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
        jbe m481c50_ok1
        call ebp
    m481c50_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m481c50_ok2
        call ebp
    m481c50_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00481D80] sub_00481D80 (90 bytes)
extern "C" void ext_004080C0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00481D80(void* self) {
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
        jbe m481d80_ok1
        call ebp
    m481d80_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m481d80_ok2
        call ebp
    m481d80_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004080C0
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m481d80_ok3
        call ebp
    m481d80_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m481d80_ok4
        call ebp
    m481d80_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0048DFF0] sub_0048DFF0 (94 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_00468180();
extern "C" void ext_00469570();
extern "C" int mem_0093E560;
extern "C" __declspec(naked) void* __fastcall fn_0048DFF0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 1
        mov dword ptr [esp + 8], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x18]
        push 5
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], offset mem_0093E560
        mov dword ptr [esi + 0x10], eax
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 8], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00481300] sub_00481300 (95 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00480920();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00481300(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [eax + 0x10]
        add ecx, 0x10
        push esi
        push edi
        call edx
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je no_items_00481300
        mov eax, dword ptr [edi + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 0x2
        je no_items_00481300
        cmp esi, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jbe check2_00481300
        call ebx
    check2_00481300:
        cmp esi, dword ptr [edi + 0x8]
        jb do_work_00481300
        call ebx
    do_work_00481300:
        mov esi, dword ptr [esi]
        add esi, 0x4
        call ext_00594000
        mov edx, dword ptr [esi]
        add eax, 0x1c8
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov ecx, esi
        call eax
        pop ebx
        pop edi
        pop esi
        pop ecx
        ret
    no_items_00481300:
        pop edi
        pop esi
        add esp, 0x4
        jmp ext_00480920
    }
}

// [0x00481B50] sub_00481B50 (96 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __cdecl fn_00481B50(int* first, int* last, void* range, int* first2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, ebp
        sub esi, ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        sar esi, 0x2
        test edi, edi
        jne L_range_ok
        call dword ptr [mem_00925134]
    L_range_ok:
        mov eax, dword ptr [esp + 0x20]
        lea eax, [eax + 4*esi]
        cmp eax, dword ptr [edi + 0x8]
        ja L_range_fail
        cmp eax, dword ptr [edi + 0x4]
        jae L_range_ok2
    L_range_fail:
        call dword ptr [mem_00925134]
    L_range_ok2:
        cmp ebx, ebp
        mov eax, ebx
        je L_done
        mov ecx, dword ptr [esp + 0x20]
        sub ecx, ebx
    L_loop:
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + eax]
        jne L_done
        add eax, 0x4
        cmp eax, ebp
        jne L_loop
    L_done:
        pop edi
        xor ecx, ecx
        cmp eax, ebp
        pop esi
        sete cl
        pop ebp
        mov al, cl
        pop ebx
        ret
    }
}

// [0x00486F20] sub_00486F20 (98 bytes)
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) std::string* __cdecl fn_00486F20(std::string* first, std::string* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp esi, ebx
        push edi
        mov edi, esi
        je L_ret_last
        mov ebp, dword ptr [mem_00924FC4]
    L_top:
        add esi, 0x1c
        cmp esi, ebx
        je L_ret_last
        push esi
        push edi
        call ebp
        add esp, 8
        test al, al
        jne L_p2
        mov edi, esi
        jmp L_top
    L_p2:
        add esi, 0x1c
        cmp esi, ebx
        je L_ret_dest
    L_p2loop:
        push esi
        push edi
        call ebp
        add esp, 8
        test al, al
        jne L_skip
        add edi, 0x1c
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
    L_skip:
        add esi, 0x1c
        cmp esi, ebx
        jne L_p2loop
    L_ret_dest:
        lea eax, [edi + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_ret_last:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x004868F0] sub_004868F0 (100 bytes)
extern "C" int mem_00925248;

extern "C" int __stdcall fn_004868F0(double a, double b, double c) {
    typedef int (__cdecl *finite_t)(double);
    finite_t is_finite = (finite_t)mem_00925248;
    return (is_finite(a) && is_finite(b) && is_finite(c) && fabs(a - b) <= c) ? 1 : 0;
}

// [0x0048E200] sub_0048E200 (101 bytes)
// SEH-framed thiscall (ret 8): calls 0x6657F0(1) on self, stores vtable + two args,
// then stores *0x46FD70(arg1, &local) into self->f18.
extern "C" void ext_006657F0();
extern "C" void ext_0046FD70();
extern "C" int mem_0093E5B8;
extern "C" __declspec(naked) void* __fastcall fn_0048E200(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8852f8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        push 1
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esi], offset mem_0093E5B8
        mov dword ptr [esi + 0x10], ecx
        mov dword ptr [esi + 0x14], eax
        call ext_0046FD70
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x18], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 0x8
    }
}

// [0x0048E270] sub_0048E270 (102 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_0046FD70();
extern "C" int mem_0093E5D0;
extern "C" __declspec(naked) void* __fastcall fn_0048E270(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8852f8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        push 1
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esi], offset mem_0093E5D0
        mov dword ptr [esi + 0x10], ecx
        mov dword ptr [esi + 0x14], eax
        call ext_0046FD70
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x18], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 0x8
    }
}

// [0x0048BBA0] sub_0048BBA0 (105 bytes)
extern "C" void ext_00487C00();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0048BBA0(void* self, int edx_unused, void* out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_00487C00
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne check_end
        call dword ptr [mem_00925134]
check_end:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je take_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne take_end
        lea ecx, [esp + 0xc]
        jmp store
take_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
store:
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

// [0x0048EF80] sub_0048EF80 (106 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048EF80(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        je L_0048EF93
        cmp ebp, dword ptr [esp + 0x1c]
        je L_0048EF99
    L_0048EF93:
        call dword ptr [mem_00925134]
    L_0048EF99:
        mov esi, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x20]
        cmp esi, eax
        je L_0048EFDB
        mov ecx, dword ptr [edi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x3
        cmp eax, ecx
        push ebx
        lea ebx, [esi + edx*8]
        je L_0048EFD7
        mov edx, esi
        sub edx, eax
        jmp L_0048EFC0
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
    L_0048EFC0:
        mov ebp, dword ptr [eax]
        mov dword ptr [edx + eax], ebp
        mov ebp, dword ptr [eax + 0x4]
        mov dword ptr [edx + eax + 0x4], ebp
        add eax, 0x8
        cmp eax, ecx
        jne L_0048EFC0
        mov ebp, dword ptr [esp + 0x18]
    L_0048EFD7:
        mov dword ptr [edi + 0x8], ebx
        pop ebx
    L_0048EFDB:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        ret 0x14
    }
}

// [0x0048FC00] sub_0048FC00 (107 bytes)
extern "C" __declspec(naked) void fn_0048FC00() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je L_empty
        push edi
        mov edi, dword ptr [esp + 0x18]
L_loop:
        cmp edi, esi
        je L_next
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_nullold
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push edi
        call edx
L_nullold:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], eax
        cmp dword ptr [esi + 0x4], 0
        je L_nullsrc
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp L_store
L_nullsrc:
        mov dword ptr [esp + 0x18], 0
        lea eax, [esp + 0x18]
L_store:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
L_next:
        add esi, 8
        add edi, 8
        cmp esi, ebx
        jne L_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
L_empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00486E30] sub_00486E30 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00486E30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne check_node
        call edi
    check_node:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x69], 0x0
        je advance
        call edi
        pop edi
        pop esi
        ret
    advance:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x69], 0x0
        jne climb
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x69], 0x0
        jne store_left
    leftmost:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x69], 0x0
        je leftmost
    store_left:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    climb:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x69], 0x0
        jne done
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    climb_loop:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jne done
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x69], 0x0
        je climb_loop
    done:
        pop edi
        mov dword ptr [esi + 0x4], eax
        pop esi
        ret
    }
}

// [0x0048F590] sub_0048F590 (108 bytes)
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0048F590(void* self) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esi + 0x20]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x14], edi
        je short L_skip_release
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip_release:
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov ecx, dword ptr [esi + 0x14]
        cmp ecx, edi
        je short L_skip_vcall
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_skip_vcall:
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665810
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0048E120] sub_0048E120 (110 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_00468180();
extern "C" void ext_00469570();

extern "C" __declspec(naked) void* __fastcall fn_0048E120(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        push 0x5
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x93e588
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], ecx
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov edx, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [edx + 0x18]
        mov dword ptr [esi + 0x18], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0048E190] sub_0048E190 (110 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_00468180();
extern "C" void ext_00469570();

extern "C" __declspec(naked) void* __fastcall fn_0048E190(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        push 0x5
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x93e5a0
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], ecx
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov edx, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [edx + 0x1c]
        mov dword ptr [esi + 0x18], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00480370] sub_00480370 (118 bytes)
extern "C" void __cdecl fn_00480370(void** first, int hole, int top, void* val) {
    int idx = (hole - 1) / 2;
    while (top < hole) {
        char* p = (char*)first[idx];
        char* v = (char*)val;
        bool less;
        if (*(int*)(p + 0x98) == *(int*)(v + 0x98))
            less = *(int*)(p + 0x9c) > *(int*)(v + 0x9c);
        else
            less = *(int*)(p + 0x98) < *(int*)(v + 0x98);
        if (!less)
            break;
        first[hole] = first[idx];
        hole = idx;
        idx = (hole - 1) / 2;
    }
    first[hole] = val;
}

extern "C" void ext_006657F0();
extern "C" void ext_00468180();
extern "C" void ext_00469570();

// [0x0048F510] sub_0048F510 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F510(void* self) {
    __asm {
        push -1
        push 0x008853DE
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x18]
        xor eax, eax
        mov dword ptr [esi], 0x0093E730
        mov dword ptr [esi + 0x10], ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x14], ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x18], ecx
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        push eax
        mov byte ptr [esp + 0x14], 0x2
        mov dword ptr [esi + 0xc], eax
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x8], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0048F070] sub_0048F070 (89 bytes)
extern "C" void ext_006246B0();
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_0048F070(void* self) {
    __asm {
        push -1
        push 0x00885393
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006246B0
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00665810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00480430] sub_00480430 (100 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067DB10();
extern "C" __declspec(naked) void __fastcall fn_00480430(void* self) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        lea ecx, [esp + 4]
        call ext_0067B7F0
        lea ecx, [esp + 10h]
        call ext_0067B7F0
        lea ecx, [esp + 1ch]
        call ext_0067B7F0
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret
    }
}

extern "C" void ext_00468180();
extern "C" void ext_00469570();
extern "C" void ext_006657F0();

// [0x0048F2F0] sub_0048F2F0 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F2F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8853b3
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        mov [esp + 0xc], esi
        call ext_006657F0
        mov eax, [esp + 0x1c]
        mov ecx, [esp + 0x20]
        mov dword ptr [esi], 0x93e718
        mov [esi + 0x10], eax
        mov [esi + 0x14], ecx
        mov [esp + 0x14], edi
        mov [esi + 0x20], edi
        mov [esi + 0x24], edi
        mov [esi + 0x28], edi
        mov edx, [esp + 0x24]
        push edi
        mov byte ptr [esp + 0x18], 1
        mov [esi + 0x2c], edx
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov [esi + 0x8], eax
        mov eax, [esi + 0x10]
        mov ecx, [eax + 0x15c]
        mov [esi + 0x18], ecx
        mov ecx, [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0048F740] sub_0048F740 (133 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00469570();
extern "C" void ext_006657F0();
extern "C" int mem_00885403;
extern "C" int mem_0093E748;

extern "C" __declspec(naked) void __fastcall fn_0048F740(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push offset mem_00885403
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov cl, byte ptr [esp + 0x20]
        mov dword ptr [esi], offset mem_0093E748
        mov dword ptr [esi + 0x10], eax
        mov byte ptr [esi + 0x14], cl
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        mov edx, dword ptr [esp + 0x24]
        push edi
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi + 0x28], edx
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esi + 0x10]
        movzx ecx, byte ptr [eax + 0x17c]
        mov byte ptr [esi + 0x15], cl
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00482080] sub_00482080 (69 bytes)
extern "C" void ext_00451670();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00482080(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je short L_inv
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short L_ok
    L_inv:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esi + 0x54]
        mov eax, dword ptr [eax + 4*edi]
        test eax, eax
        pop edi
        pop esi
        je short L_ret
        mov ecx, dword ptr [esp + 0x8]
        lea edx, [esp + 0x4]
        mov dword ptr [esp + 0x4], ecx
        push edx
        lea ecx, [eax + 0x14]
        call ext_00451670
    L_ret:
        ret 0x8
    }
}

// [0x00480920] sub_00480920 (138 bytes)
extern "C" void ext_006A6C87(int);
extern "C" int mem_00AD9778;
extern "C" float mem_00AD9738;
extern "C" float mem_00AD973C;
extern "C" float mem_00AD9740;
extern "C" float mem_00AD9744;
extern "C" float mem_00AD9748;
extern "C" float mem_00AD974C;
extern "C" float mem_00AD9750;
extern "C" float mem_00AD9754;
extern "C" float mem_00AD9758;
extern "C" float mem_00AD975C;
extern "C" float mem_00AD9760;
extern "C" float mem_00AD9764;
extern "C" float mem_00AD9768;
extern "C" float mem_00AD976C;
extern "C" float mem_00AD9770;
extern "C" float mem_00AD9774;
extern "C" void* __cdecl fn_00480920() {
    if (mem_00AD9778 & 1) {
        return &mem_00AD9738;
    }
    mem_00AD9778 |= 1;
    mem_00AD9738 = 1.0f;
    mem_00AD973C = 0.0f;
    mem_00AD9740 = 0.0f;
    mem_00AD9744 = 0.0f;
    mem_00AD9748 = 0.0f;
    mem_00AD9750 = 0.0f;
    mem_00AD9754 = 0.0f;
    mem_00AD9758 = 0.0f;
    mem_00AD975C = 0.0f;
    mem_00AD9764 = 0.0f;
    mem_00AD9768 = 0.0f;
    mem_00AD976C = 0.0f;
    mem_00AD9770 = 0.0f;
    mem_00AD974C = 1.0f;
    mem_00AD9760 = 1.0f;
    mem_00AD9774 = 1.0f;
    ext_006A6C87(0x917090);
    return &mem_00AD9738;
}

// [0x00481E60] sub_00481E60 (139 bytes)
extern "C" void ext_00481B50();
extern "C" __declspec(naked) bool __cdecl fn_00481E60(void* a, void* b) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne L_a_nonnull
        xor ecx, ecx
        jmp L_a_size_done
    L_a_nonnull:
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
    L_a_size_done:
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [ebx + 0x4]
        test esi, esi
        jne L_b_nonnull
        xor eax, eax
        jmp L_b_size_done
    L_b_nonnull:
        mov eax, dword ptr [ebx + 0x8]
        sub eax, esi
        sar eax, 0x2
    L_b_size_done:
        cmp ecx, eax
        jne L_not_equal
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        push ebp
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        mov edi, dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x14]
        cmp edi, dword ptr [eax + 0x8]
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        push esi
        push ebx
        push ebp
        push edi
        call ext_00481B50
        add esp, 0x18
        test al, al
        pop ebp
        je L_not_equal
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    L_not_equal:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x00486CB0] sub_00486CB0 (143 bytes)
extern "C" void ext_004765B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FB0;
extern "C" int mem_00924FE4;
// Naked: the target is a esp-relative EH frame with a 0x90-byte local area, so the
// frame is written out directly instead of relying on the C++ EH lowering.
extern "C" __declspec(naked) void __fastcall fn_00486CB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88490c
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push esi
        mov esi, dword ptr [esp + 0xa8]
        push edi
        mov edi, dword ptr [esp + 0xa8]
        push esi
        push edi
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je no_throw
        mov eax, dword ptr [esp + 0xb0]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        push esi
        push edi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xac], 0x0
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    no_throw:
        mov ecx, dword ptr [esp + 0x98]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 0xc
    }
}

// [0x00480880] sub_00480880 (148 bytes)
extern "C" void ext_00480370();

extern "C" void __cdecl fn_00480880(void** first, int hole, int bottom, void* val, int pred) {
    int top = hole;
    int idx = 2 * hole + 2;
    while (idx < bottom) {
        char* p2 = (char*)first[idx - 1];
        char* p1 = (char*)first[idx];
        bool less;
        if (*(int*)(p1 + 0x98) == *(int*)(p2 + 0x98))
            less = *(int*)(p1 + 0x9c) > *(int*)(p2 + 0x9c);
        else
            less = *(int*)(p1 + 0x98) < *(int*)(p2 + 0x98);
        if (less)
            --idx;
        first[hole] = first[idx];
        hole = idx;
        idx = 2 * idx + 2;
    }
    if (idx == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    ((void (__cdecl*)(void**, int, int, void*, int))ext_00480370)(first, hole, top, val, pred);
}

// [0x00480D90] sub_00480D90 (63 bytes)
extern "C" void __cdecl fn_00480D90(void** first, void** last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        fn_00480880(first, hole, len, first[hole], comp);
    }
}

// [0x00481C90] sub_00481C90 (74 bytes)
extern "C" void ext_00480880();

extern "C" __declspec(naked) void __cdecl fn_00481C90(unsigned int* first, unsigned int* last, int comp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_00480880
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x14
        cmp eax, 0x1
        jg loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x004807D0] sub_004807D0 (169 bytes)
static inline bool less_004807D0(char* x, char* y) {
    int xa = *(int*)(x + 0x98);
    int ya = *(int*)(y + 0x98);
    if (xa == ya) return *(int*)(x + 0x9c) > *(int*)(y + 0x9c);
    return xa < ya;
}

extern "C" void __cdecl fn_004807D0(char** a1, char** a2, char** a3) {
    char* p;
    char* q;
    if (less_004807D0(*a2, *a1)) { p = *a1; q = *a2; *a2 = p; *a1 = q; }
    if (less_004807D0(*a3, *a2)) { p = *a2; q = *a3; *a3 = p; *a2 = q; }
    if (less_004807D0(*a2, *a1)) { p = *a1; q = *a2; *a2 = p; *a1 = q; }
}

// [0x00480CE0] sub_00480CE0 (162 bytes)
extern "C" void ext_004807D0();

extern "C" __declspec(naked) void __cdecl fn_00480CE0(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [8*eax]
        mov dword ptr [esp + 0x1c], edx
        push ebx
        lea edi, [4*eax]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x24], eax
        call ext_004807D0
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_004807D0
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_004807D0
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_004807D0
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    small_path:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push esi
        push eax
        push ecx
        call ext_004807D0
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x0048D4C0] sub_0048D4C0 (70 bytes)
extern "C" void ext_0067FA00();
extern "C" __declspec(naked) void* __fastcall fn_0048D4C0(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x98
        _emit 0x4f
        _emit 0x88
        _emit 0x00
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x10], eax
        call ext_0067FA00
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x004804A0] sub_004804A0 (144 bytes)
extern "C" void ext_004A6C70();
extern "C" void ext_004E81C0();
extern "C" __declspec(naked) void __fastcall fn_004804A0(void* self) {
    __asm {
        fld1
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x36c], 0
        fst dword ptr [esi + 0x370]
        fldz
        fst dword ptr [esi + 0x374]
        fst dword ptr [esi + 0x378]
        fst dword ptr [esi + 0x37c]
        fst dword ptr [esi + 0x380]
        fst dword ptr [esi + 0x388]
        fst dword ptr [esi + 0x38c]
        fst dword ptr [esi + 0x390]
        fst dword ptr [esi + 0x394]
        fst dword ptr [esi + 0x39c]
        fst dword ptr [esi + 0x3a0]
        fst dword ptr [esi + 0x3a4]
        fstp dword ptr [esi + 0x3a8]
        fst dword ptr [esi + 0x384]
        fst dword ptr [esi + 0x398]
        fstp dword ptr [esi + 0x3ac]
        mov ecx, dword ptr [esi + 0x3b4]
        call ext_004A6C70
        lea ecx, [esi + 0x3f8]
        call ext_004E81C0
        lea ecx, [esi + 0x4f4]
        pop esi
        jmp ext_004E81C0
    }
}

// [0x0048F870] sub_0048F870 (173 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00469570();
extern "C" void ext_006657F0();
extern "C" __declspec(naked) void* __fastcall fn_0048F870(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        push 0x88542e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x10], eax
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [esi], 0x93e760
        mov dword ptr [esi + 0x14], ecx
        mov dword ptr [esi + 0x1c], edx
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x44], edi
        mov dword ptr [esi + 0x48], edi
        mov ecx, dword ptr [esp + 0x2c]
        push edi
        mov byte ptr [esp + 0x18], 2
        mov dword ptr [esi + 0x4c], ecx
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x15c]
        mov dword ptr [esi + 0x18], edx
        mov ecx, dword ptr [eax + 0x160]
        mov dword ptr [esi + 0x20], ecx
        mov edx, dword ptr [eax + 0x164]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x24], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x14
    }
}

// [0x00489950] sub_00489950 (177 bytes)
extern "C" void ext_004890D0(std::string* a, std::string* b, std::string* c);

extern "C" void __cdecl fn_00489950(std::string* first, std::string* mid, std::string* last) {
    int count = last - first;
    if (count > 40) {
        int step = (count + 1) / 8;
        ext_004890D0(first, first + step, first + step + step);
        ext_004890D0(mid - step, mid, mid + step);
        ext_004890D0(last - step - step, last - step, last);
        ext_004890D0(first + step, mid, last - step);
    } else {
        ext_004890D0(first, mid, last);
    }
}

// [0x0048B4C0] sub_0048B4C0 (191 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048B4C0(void* self) {
    __asm {
        push -1
        push 0x884d5a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        lea eax, [esi + 0x54]
        xor ebx, ebx
        cmp dword ptr [eax + 4], ebx
        mov dword ptr [esp + 0x14], 3
        je loc_0048B4FB
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
loc_0048B4FB:
        mov eax, dword ptr [esi + 0x48]
        cmp eax, ebx
        je loc_0048B50B
        push eax
        call ext_006A5C5C
        add esp, 4
loc_0048B50B:
        push edi
        lea edi, [esi + 0x34]
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x50], ebx
        mov eax, dword ptr [edi + 4]
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 1
        je loc_0048B53B
        mov ecx, dword ptr [edi + 8]
        push edi
        push ecx
        push eax
        call ext_0048A120
        mov eax, dword ptr [edi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x10
loc_0048B53B:
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 0x28]
        cmp eax, ebx
        pop edi
        je loc_0048B555
        push eax
        call ext_006A5C5C
        add esp, 4
loc_0048B555:
        mov ecx, esi
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esp + 0x14], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0048D390] sub_0048D390 (113 bytes)
extern "C" void ext_0048B4C0();

extern "C" __declspec(naked) void __fastcall fn_0048D390(void* self) {
    __asm {
        push -1
        push 0x884f98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        xor edi, edi
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x14], edi
        call ext_0048B4C0
        mov eax, dword ptr [esi + 4]
        cmp eax, edi
        mov dword ptr [esp + 0x14], 0xffffffff
        je loc_0048D3E7
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esi + 8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0048CB80
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
loc_0048D3E7:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0xc], edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004874D0] sub_004874D0 (195 bytes)
extern "C" __declspec(naked) void __cdecl fn_004874D0() {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884b59
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x20]
        lea eax, [edi - 1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x18], 0
        jge short loc_00487556
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_00487510:
        lea eax, [8*esi]
        sub eax, esi
        lea ecx, [esp + 0x2c]
        lea ebx, [ebp + 4*eax]
        push ecx
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je short loc_00487556
        lea edx, [8*edi]
        sub edx, edi
        push ebx
        lea ecx, [ebp + 4*edx]
        call dword ptr [mem_00924FDC]
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x28], edi
        mov esi, eax
        jl short loc_00487510
    loc_00487556:
        lea ecx, [8*edi]
        lea eax, [esp + 0x2c]
        sub ecx, edi
        push eax
        lea ecx, [ebp + 4*ecx]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00487A30] sub_00487A30 (207 bytes)
// Naked: EH frame (0x884944) with a 0x130+ local area, plus raw thiscall-style
// constructor calls and a CxxThrowException on the failure path.
extern "C" void ext_004765B0();
extern "C" void ext_00486880();
extern "C" void ext_004868F0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_00487A30(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x884944
        push eax
        mov dword ptr fs:[0x0], esp
        fld qword ptr [ecx]
        sub esp, 0x130
        push esi
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [ebp + 0xc]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ebp + 0x8]
        fstp qword ptr [esp]
        call ext_004868F0
        test al, al
        jne L_done
        mov eax, dword ptr [ebp + 0x10]
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE4]
        fld dword ptr [ebp + 0xc]
        sub esp, 0x8
        lea ecx, [esp + 0x5c]
        fstp qword ptr [esp]
        push ecx
        mov dword ptr [esp + 0x148], 0x0
        call ext_00486880
        mov esi, eax
        fld dword ptr [ebp + 0x8]
        add esp, 0x4
        lea edx, [esp + 0x78]
        fstp qword ptr [esp]
        push edx
        mov byte ptr [esp + 0x148], 0x1
        call ext_00486880
        add esp, 0xc
        lea ecx, [esp + 0x38]
        push ecx
        push esi
        push eax
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x148], 0x2
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x90]
        push edx
        call ext_006A6DD2
    L_done:
        mov ecx, dword ptr [esp + 0x134]
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x0048A810] sub_0048A810 (211 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00A8F2B8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048A810(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe loc_0048A840
        call ebp
        mov edi, edi
    loc_0048A840:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe loc_0048A850
        call ebp
        mov ebp, dword ptr [mem_00925134]
    loc_0048A850:
        test ebx, ebx
        je loc_0048A858
        cmp ebx, ebx
        je loc_0048A860
    loc_0048A858:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    loc_0048A860:
        cmp edi, esi
        je loc_0048A8D0
        test ebx, ebx
        jne loc_0048A86A
        call ebp
    loc_0048A86A:
        cmp edi, dword ptr [ebx + 0x8]
        jb loc_0048A871
        call ebp
    loc_0048A871:
        mov ecx, dword ptr [mem_00A8F2B8]
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 0x40]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x38], 0
        call edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        mov ecx, esi
        call edx
        cmp edi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jb loc_0048A8C8
        call ebp
    loc_0048A8C8:
        add edi, 0x68
        jmp loc_0048A840
    loc_0048A8D0:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

extern "C" void ext_00609850();

// [0x00481A60] sub_00481A60 (235 bytes)
// cdecl(first, last): insertion sort over pointer array, key = (+0x98 asc, +0x9c desc), rotate via ext_00609850
extern "C" __declspec(naked) void __cdecl fn_00481A60(void* first, void* last) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        je L_ret_edi
        push esi
        lea esi, [edi + 0x4]
        cmp esi, eax
        je L_ret_esi
        push ebx
        push ebp
        lea ebp, [esi + 0x4]
        mov dword ptr [esp + 0x10], ebp
        jmp L_outer
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
    L_outer:
        mov eax, dword ptr [edi]
        mov ebx, dword ptr [esi]
        mov ecx, dword ptr [ebx + 0x98]
        mov edx, dword ptr [eax + 0x98]
        cmp ecx, edx
        jne L_c1
        mov ecx, dword ptr [ebx + 0x9c]
        cmp ecx, dword ptr [eax + 0x9c]
        setg al
        jmp L_c2
    L_c1:
        setl al
    L_c2:
        test al, al
        je L_scan
        cmp edi, esi
        je L_next
        cmp esi, ebp
        je L_next
        push 0x0
        push 0x0
        push ebp
        push esi
        push edi
        call ext_00609850
        add esp, 0x14
        jmp L_next
    L_scan:
        mov edi, dword ptr [ebx + 0x98]
        mov ebp, esi
        mov edx, esi
        nop
    L_scanloop:
        mov eax, dword ptr [edx - 0x4]
        mov ecx, dword ptr [eax + 0x98]
        sub edx, 0x4
        cmp edi, ecx
        jne L_s1
        mov ecx, dword ptr [ebx + 0x9c]
        cmp ecx, dword ptr [eax + 0x9c]
        setg al
        jmp L_s2
    L_s1:
        setl al
    L_s2:
        test al, al
        je L_scanend
        mov ebp, edx
        jmp L_scanloop
    L_scanend:
        cmp ebp, esi
        je L_post
        cmp esi, dword ptr [esp + 0x10]
        je L_post
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push edx
        push esi
        push ebp
        call ext_00609850
        add esp, 0x14
    L_post:
        mov edi, dword ptr [esp + 0x18]
    L_next:
        mov ebp, dword ptr [esp + 0x10]
        add esi, 0x4
        add ebp, 0x4
        cmp esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x10], ebp
        jne L_outer
        pop ebp
        pop ebx
    L_ret_esi:
        pop esi
    L_ret_edi:
        pop edi
        pop ecx
        ret
    }
}

// [0x00489130] sub_00489130 (247 bytes)
// std::_Adjust_heap over std::string elements: sift the hole down, then push value back up via ext_004874D0.
extern "C" void ext_004874D0();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// The by-value std::string is passed as its 28-byte POD image (naked functions cannot take objects needing unwind).
struct Str28Image_00489130 {
    int words[7];
};

extern "C" __declspec(naked) void __cdecl fn_00489130(std::string* first, int hole, int bottom, Str28Image_00489130 val) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x884b59
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x20]
        lea esi, [edi + edi + 0x2]
        cmp esi, ebp
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x24], edi
        jge L_after_loop
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        lea eax, [8 * esi]
        sub eax, esi
        lea eax, [ebx + 4 * eax]
        lea ecx, [eax - 0x1c]
        push ecx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_noadj
        sub esi, 0x1
    L_noadj:
        lea edx, [8 * esi]
        sub edx, esi
        lea ecx, [8 * edi]
        lea eax, [ebx + 4 * edx]
        sub ecx, edi
        push eax
        lea ecx, [ebx + 4 * ecx]
        call dword ptr [mem_00924FDC]
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, ebp
        jl L_loop
    L_after_loop:
        jne L_push
        lea edx, [8 * ebp]
        sub edx, ebp
        lea ecx, [8 * edi]
        lea eax, [ebx + 4 * edx - 0x1c]
        sub ecx, edi
        push eax
        lea ecx, [ebx + 4 * ecx]
        call dword ptr [mem_00924FDC]
        lea edi, [ebp - 0x1]
    L_push:
        sub esp, 0x1c
        lea edx, [esp + 0x48]
        mov ecx, esp
        mov dword ptr [esp + 0x44], esp
        push edx
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x40]
        push eax
        push edi
        push ebx
        call ext_004874D0
        add esp, 0x28
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00489A10] sub_00489A10 (106 bytes)
// make_heap over std::string elements: for (hole = n/2; hole > 0; ) { val = first[--hole]...; adjust(first, hole, n, val); }
extern "C" __declspec(naked) void __cdecl fn_00489A10(std::string* first, std::string* last) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        push esi
        sar edx, 0x4
        push edi
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 0x1
        test esi, esi
        jle L_done
        lea eax, [8 * esi]
        sub eax, esi
        lea ebx, [ebp + 4 * eax]
        jmp L_top
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_top:
        sub esp, 0x1c
        sub ebx, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push ebx
        sub esi, 0x1
        call dword ptr [mem_00924FE0]
        push edi
        push esi
        push ebp
        call fn_00489130
        add esp, 0x28
        test esi, esi
        jg L_top
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00489290] sub_00489290 (136 bytes)
// pop_heap-style helper over std::string elements: save *last into a temp, *last = *first, then adjust_heap(first, 0, (last-first)/28, temp).
extern "C" __declspec(naked) void __cdecl fn_00489290(std::string* first, int unused, std::string* last) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x884b59
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        push esi
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FDC]
        sub esp, 0x1c
        lea eax, [esp + 0x3c]
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        push ecx
        push 0x0
        push esi
        call fn_00489130
        add esp, 0x28
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0048A150] sub_0048A150 (117 bytes)
extern "C" void ext_00489290();
extern "C" __declspec(naked) void __cdecl fn_0048A150(std::string* first, std::string* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        push edi
        jle L_done
        mov edi, 0x1c
        add esi, -0x1c
        sub edi, ebx
        cmp eax, 0x1
        jle L_skip
    L_top:
        push 0x0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push esi
        call dword ptr [mem_00924FE0]
        push esi
        push esi
        push ebx
        call ext_00489290
        add esp, 0x2c
    L_skip:
        sub esi, 0x1c
        lea ecx, [edi + esi]
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        jg L_top
    L_done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00489CA0] sub_00489CA0 (279 bytes)
extern "C" void ext_00489230();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00489CA0() {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push 0xffffffff
        push 0x8b56f9
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp + 0x38]
        cmp esi, eax
        je loc_00489DA7
        push edi
        lea edi, [esi + 0x1c]
        cmp edi, eax
        je loc_00489DA6
        push ebx
        mov ebx, dword ptr [mem_00924EF4]
        lea eax, [edi - 0x1c]
        push ebp
        mov dword ptr [esp + 0x10], eax
    loc_00489CE4:
        push edi
        lea ecx, [esp + 0x1c]
        mov ebp, edi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x18]
        push esi
        push ecx
        mov dword ptr [esp + 0x44], 0x0
        call ebx
        add esp, 0x8
        test al, al
        je loc_00489D3D
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x44]
        mov byte ptr [esp + 0x14], 0x0
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        add edx, 0x38
        push edx
        push edi
        push esi
        call ext_00489230
        add esp, 0x18
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        jmp loc_00489D80
    loc_00489D3D:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        call ebx
        add esp, 0x8
        test al, al
        je loc_00489D6F
    loc_00489D52:
        push esi
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        mov ebp, esi
        sub esi, 0x1c
        lea eax, [esp + 0x18]
        push esi
        push eax
        call ebx
        add esp, 0x8
        test al, al
        jne loc_00489D52
    loc_00489D6F:
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        mov esi, dword ptr [esp + 0x44]
    loc_00489D80:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
        add dword ptr [esp + 0x10], 0x1c
        add edi, 0x1c
        cmp edi, dword ptr [esp + 0x48]
        jne loc_00489CE4
        pop ebp
        pop ebx
    loc_00489DA6:
        pop edi
    loc_00489DA7:
        mov ecx, dword ptr [esp + 0x28]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
    }
}

// [0x00487C50] sub_00487C50 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" int mem_00AD9DC8;
extern "C" int mem_00AD9DAC;
extern "C" __declspec(naked) void* __fastcall fn_00487C50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88495e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9DC8], al
        jne done_487C50
        or dword ptr [mem_00AD9DC8], eax
        push 0xa33760
        push offset mem_00AD9DAC
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x917190
        call ext_006A6C87
        add esp, 0xc
    done_487C50:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9DAC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00489AE0] sub_00489AE0 (436 bytes)
// MSVC 2005 std::_Unguarded_partition over std::string elements (28-byte stride).
// Args: (pair* out, string* first, string* last), cdecl; pair returned via out.
extern "C" void ext_00489950();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FBC;

extern "C" __declspec(naked) void __cdecl fn_00489AE0(void* out, void* first, void* last) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        lea ecx, [8*eax]
        sub ecx, eax
        lea edx, [edi - 0x1c]
        push edx
        lea esi, [ebx + 4*ecx]
        push esi
        push ebx
        call ext_00489950
        add esp, 0xc
        cmp ebx, esi
        lea ebp, [esi + 0x1c]
        jae L_s2
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_s1:
        lea edi, [esi - 0x1c]
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_s1x
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_s1x
        mov esi, edi
        cmp ebx, esi
        jb L_s1
    L_s1x:
        mov edi, dword ptr [esp + 0x20]
    L_s2:
        cmp ebp, edi
        jae L_p1
        _emit 0x90
    L_s2l:
        mov ebx, dword ptr [mem_00924EF4]
        push esi
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        jne L_p1
        push ebp
        push esi
        call ebx
        add esp, 0x8
        test al, al
        jne L_p1
        add ebp, 0x1c
        cmp ebp, edi
        jb L_s2l
    L_p1:
        mov ebx, esi
        mov edi, ebp
        mov dword ptr [esp + 0x10], ebx
        jmp L_top
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_top:
        cmp edi, dword ptr [esp + 0x20]
        jae L_after
    L_body:
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_gnext
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_after
        mov ecx, ebp
        push edi
        add ebp, 0x1c
        call dword ptr [mem_00924FBC]
    L_gnext:
        add edi, 0x1c
        cmp edi, dword ptr [esp + 0x20]
        jb L_body
    L_after:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L_jne
        add ebx, -0x1c
    L_gl:
        push esi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_gldec
        push ebx
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_glbrk
        sub esi, 0x1c
        push ebx
        mov ecx, esi
        call dword ptr [mem_00924FBC]
    L_gldec:
        mov eax, dword ptr [esp + 0x10]
        sub eax, 0x1c
        sub ebx, 0x1c
        cmp dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], eax
        jb L_gl
    L_glbrk:
        mov ebx, dword ptr [esp + 0x10]
        cmp ebx, dword ptr [esp + 0x1c]
    L_jne:
        jne L_notfirst
        cmp edi, dword ptr [esp + 0x20]
        je L_ret
        cmp ebp, edi
        je L_ns1
        push ebp
        mov ecx, esi
        call dword ptr [mem_00924FBC]
    L_ns1:
        mov eax, edi
        mov ecx, esi
        push eax
        add ebp, 0x1c
        add esi, 0x1c
        add edi, 0x1c
        call dword ptr [mem_00924FBC]
        jmp L_top
    L_notfirst:
        sub ebx, 0x1c
        cmp edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], ebx
        jne L_else
        sub esi, 0x1c
        cmp ebx, esi
        je L_ns2
        push esi
        mov ecx, ebx
        call dword ptr [mem_00924FBC]
    L_ns2:
        sub ebp, 0x1c
        push ebp
        mov ecx, esi
        call dword ptr [mem_00924FBC]
        jmp L_top
    L_else:
        push ebx
        mov ecx, edi
        call dword ptr [mem_00924FBC]
        add edi, 0x1c
        jmp L_top
    L_ret:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

extern "C" void ext_00494000();
extern "C" void ext_004A7690();
extern "C" void ext_004B01F0();
extern "C" void ext_004E7F30();
extern "C" void ext_006A5C62();
extern "C" int mem_00884394;
extern "C" int mem_0093C3F4;

// [0x00482EB0] sub_00482EB0 (444 bytes)
extern "C" __declspec(naked) void __fastcall fn_00482EB0(void* self, int edx_unused, void* arg0) {
    __asm {
        push -0x1
        push offset mem_00884394
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], offset mem_0093C3F4
        mov dword ptr [esi + 0x4], ebx
        call ext_004B01F0
        fld1
        mov byte ptr [esi + 0x36c], bl
        fst dword ptr [esi + 0x370]
        fldz
        mov edi, dword ptr [esp + 0x24]
        fst dword ptr [esi + 0x374]
        push 0x2d8
        fst dword ptr [esi + 0x378]
        mov dword ptr [esp + 0x20], ebx
        fst dword ptr [esi + 0x37c]
        fst dword ptr [esi + 0x380]
        fst dword ptr [esi + 0x388]
        fst dword ptr [esi + 0x38c]
        fst dword ptr [esi + 0x390]
        fst dword ptr [esi + 0x394]
        fst dword ptr [esi + 0x39c]
        fst dword ptr [esi + 0x3a0]
        fst dword ptr [esi + 0x3a4]
        fstp dword ptr [esi + 0x3a8]
        fst dword ptr [esi + 0x384]
        fst dword ptr [esi + 0x398]
        fstp dword ptr [esi + 0x3ac]
        mov dword ptr [esi + 0x3b0], edi
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x24], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x1c], 0x1
        je L_00482F7F
        push edi
        mov ecx, eax
        call ext_004A7690
        jmp L_00482F81
    L_00482F7F:
        xor eax, eax
    L_00482F81:
        mov dword ptr [esi + 0x3b4], eax
        mov dword ptr [esi + 0x3b8], ebx
        mov dword ptr [esi + 0x3c0], ebx
        mov dword ptr [esi + 0x3c4], ebx
        mov dword ptr [esi + 0x3c8], ebx
        mov dword ptr [esi + 0x3d0], ebx
        mov dword ptr [esi + 0x3d4], ebx
        mov dword ptr [esi + 0x3d8], ebx
        push ebx
        push ebx
        push -0x1
        lea ecx, [esi + 0x3dc]
        mov byte ptr [esp + 0x28], 0x4
        call ext_00494000
        push ebx
        push ebx
        push -0x1
        lea ecx, [esi + 0x3e8]
        call ext_00494000
        mov dword ptr [esi + 0x3f4], ebx
        lea edi, [esi + 0x3f8]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x5
        call ext_004E7F30
        lea ebp, [esi + 0x4f4]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 0x6
        call ext_004E7F30
        fldz
        fst dword ptr [esi + 0x5f8]
        mov dword ptr [esi + 0x600], ebx
        fst dword ptr [esi + 0x5f4]
        fstp dword ptr [esi + 0x5f0]
        mov dword ptr [esi + 0x604], ebx
        mov dword ptr [esi + 0x608], ebx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        push 0x8
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xa
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x4]
        push 0x8
        mov ecx, edi
        call edx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax]
        push 0x8
        mov ecx, ebp
        call edx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x4]
        push 0x8
        mov ecx, ebp
        call edx
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}


extern "C" void ext_0048FB00();
extern "C" void ext_004B0ED0();
extern "C" void ext_004B1100();
extern "C" void ext_004B1130();
extern "C" int mem_00925134;

// [0x0048FC70] sub_0048FC70 (527 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048FC70(void* self) {
    __asm {
        sub esp, 0x24
        cmp byte ptr [esp + 0x28], 0x0
        fldz
        fst dword ptr [esp]
        push esi
        fld1
        mov esi, ecx
        fstp dword ptr [esp + 0x8]
        je L_48FD1D
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [esi + 0x44]
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x38], eax
        add eax, ecx
        mov ecx, dword ptr [esi + 0x60]
        test ecx, ecx
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esi + 0x3c], eax
        je L_48FD1D
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [esp + 0x10]
        fild dword ptr [esp + 0x2c]
        fmul qword ptr [esi + 0x50]
        fstp dword ptr [esp + 0x18]
        fild dword ptr [esp + 0xc]
        fmul qword ptr [esi + 0x50]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fcomp dword ptr [ecx + 0x2c]
        fnstsw ax
        test ah, 0x5
        jp L_48FD11
        fld dword ptr [esp + 0x1c]
        fsub dword ptr [ecx + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        lea eax, [esp + 0x18]
        je L_48FD0B
        lea eax, [esp + 0x2c]
    L_48FD0B:
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x18]
    L_48FD11:
        lea edx, [esp + 0x18]
        push edx
        call ext_004B0ED0
        jmp L_48FD1F
    L_48FD1D:
        fstp st(0)
    L_48FD1F:
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je L_48FD34
        fld dword ptr [eax + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x28]
        fstp dword ptr [esp + 0x8]
    L_48FD34:
        cmp byte ptr [esi + 0x48], 0x0
        je L_48FE2E
        push ebx
        push ebp
        push edi
        xor bl, bl
        xor edi, edi
        xor ebp, ebp
        jmp L_48FD50
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_48FD50:
        mov eax, dword ptr [esi + 0x1c]
        test eax, eax
        je L_48FE07
        mov ecx, dword ptr [esi + 0x20]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 0x6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_48FE07
        mov eax, dword ptr [esi + 0x1c]
        test eax, eax
        je L_48FD9E
        mov ecx, dword ptr [esi + 0x20]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 0x6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_48FDA4
    L_48FD9E:
        call dword ptr [mem_00925134]
    L_48FDA4:
        mov ecx, dword ptr [esi + 0x1c]
        add ecx, ebp
        call ext_0048FB00
        test al, al
        je L_48FDFC
        test bl, bl
        jne L_48FDCE
        fld dword ptr [ecx + 0x74]
        add edi, 0x1
        fstp dword ptr [esp + 0x10]
        mov bl, 0x1
        fld dword ptr [ecx + 0x78]
        add ebp, 0x7c
        fstp dword ptr [esp + 0x14]
        jmp L_48FD50
    L_48FDCE:
        fld dword ptr [ecx + 0x74]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_48FDE5
        fld dword ptr [ecx + 0x74]
        fstp dword ptr [esp + 0x10]
    L_48FDE5:
        fld dword ptr [ecx + 0x78]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_48FDFC
        fld dword ptr [ecx + 0x78]
        fstp dword ptr [esp + 0x14]
    L_48FDFC:
        add edi, 0x1
        add ebp, 0x7c
        jmp L_48FD50
    L_48FE07:
        mov ecx, dword ptr [esi + 0x60]
        test ecx, ecx
        pop edi
        pop ebp
        pop ebx
        je L_48FE2E
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_004B1100
        fld dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi + 0x60]
        fstp dword ptr [esp]
        call ext_004B1130
    L_48FE2E:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_48FE78
        mov esi, dword ptr [esi + 0x60]
        fld dword ptr [esi + 0x20]
        lea edx, [esp + 0x18]
        fstp dword ptr [esp + 0x2c]
        push edx
        fld dword ptr [esi + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x28]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        call eax
    L_48FE78:
        pop esi
        add esp, 0x24
        ret 0x4
    }
}

extern "C" void ext_00480CE0();

// [0x004817E0] sub_004817E0 (631 bytes)
extern "C" __declspec(naked) void __cdecl fn_004817E0() {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov eax, esi
        sub eax, ebp
        sar eax, 0x2
        cdq
        sub eax, edx
        push edi
        sar eax, 1
        lea edi, [ebp + 4*eax]
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [esi - 0x4]
        push ecx
        push edi
        push ebp
        call ext_00480CE0
        add esp, 0x10
        cmp ebp, edi
        lea ebx, [edi + 0x4]
        mov dword ptr [esp + 0x10], ebx
        jae L_48187c
        jmp L_481820
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_481820:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edi - 0x4]
        mov edx, dword ptr [ecx + 0x98]
        mov esi, dword ptr [eax + 0x98]
        cmp edx, esi
        jne L_481846
        mov edx, dword ptr [ecx + 0x9c]
        cmp edx, dword ptr [eax + 0x9c]
        setg dl
        jmp L_481849
    L_481846:
        setl dl
    L_481849:
        test dl, dl
        jne L_481878
        mov edx, esi
        mov esi, dword ptr [ecx + 0x98]
        cmp edx, esi
        jne L_48186a
        mov eax, dword ptr [eax + 0x9c]
        cmp eax, dword ptr [ecx + 0x9c]
        setg al
        jmp L_48186d
    L_48186a:
        setl al
    L_48186d:
        test al, al
        jne L_481878
        add edi, -0x4
        cmp ebp, edi
        jb L_481820
    L_481878:
        mov esi, dword ptr [esp + 0x20]
    L_48187c:
        cmp ebx, esi
        jae L_4818dd
        mov esi, dword ptr [edi]
    L_481882:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 0x98]
        mov edx, dword ptr [esi + 0x98]
        cmp ecx, edx
        jne L_4818a5
        mov ecx, dword ptr [eax + 0x9c]
        cmp ecx, dword ptr [esi + 0x9c]
        setg cl
        jmp L_4818a8
    L_4818a5:
        setl cl
    L_4818a8:
        test cl, cl
        jne L_4818d9
        mov ecx, edx
        mov edx, dword ptr [eax + 0x98]
        cmp ecx, edx
        jne L_4818c9
        mov edx, dword ptr [esi + 0x9c]
        cmp edx, dword ptr [eax + 0x9c]
        setg al
        jmp L_4818cc
    L_4818c9:
        setl al
    L_4818cc:
        test al, al
        jne L_4818d9
        add ebx, 0x4
        cmp ebx, dword ptr [esp + 0x20]
        jb L_481882
    L_4818d9:
        mov dword ptr [esp + 0x10], ebx
    L_4818dd:
        mov ebp, edi
        nop
    L_4818e0:
        cmp ebx, dword ptr [esp + 0x20]
        jae L_481952
    L_4818e6:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 0x98]
        mov esi, dword ptr [eax + 0x98]
        cmp edx, esi
        jne L_48190b
        mov edx, dword ptr [ecx + 0x9c]
        cmp edx, dword ptr [eax + 0x9c]
        setg dl
        jmp L_48190e
    L_48190b:
        setl dl
    L_48190e:
        test dl, dl
        jne L_481949
        mov edx, esi
        mov esi, dword ptr [ecx + 0x98]
        cmp edx, esi
        jne L_48192f
        mov edx, dword ptr [eax + 0x9c]
        cmp edx, dword ptr [ecx + 0x9c]
        setg cl
        jmp L_481932
    L_48192f:
        setl cl
    L_481932:
        test cl, cl
        jne L_481952
        mov edx, dword ptr [esp + 0x10]
        mov ecx, edx
        add edx, 0x4
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx], eax
        mov dword ptr [ebx], edx
    L_481949:
        add ebx, 0x4
        cmp ebx, dword ptr [esp + 0x20]
        jb L_4818e6
    L_481952:
        cmp ebp, dword ptr [esp + 0x1c]
        jbe L_4819c9
        jmp L_481960
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_481960:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ebp - 0x4]
        mov edx, dword ptr [ecx + 0x98]
        mov esi, dword ptr [eax + 0x98]
        cmp edx, esi
        jne L_481986
        mov edx, dword ptr [ecx + 0x9c]
        cmp edx, dword ptr [eax + 0x9c]
        setg dl
        jmp L_481989
    L_481986:
        setl dl
    L_481989:
        test dl, dl
        jne L_4819bc
        mov edx, esi
        mov esi, dword ptr [ecx + 0x98]
        cmp edx, esi
        jne L_4819aa
        mov eax, dword ptr [eax + 0x9c]
        cmp eax, dword ptr [ecx + 0x9c]
        setg al
        jmp L_4819ad
    L_4819aa:
        setl al
    L_4819ad:
        test al, al
        jne L_4819c5
        mov eax, dword ptr [edi - 0x4]
        sub edi, 0x4
        mov dword ptr [edi], ecx
        mov dword ptr [ebp - 0x4], eax
    L_4819bc:
        add ebp, -0x4
        cmp dword ptr [esp + 0x1c], ebp
        jb L_481960
    L_4819c5:
        cmp ebp, dword ptr [esp + 0x1c]
    L_4819c9:
        jne L_4819ff
        cmp ebx, dword ptr [esp + 0x20]
        je L_481a44
        mov ecx, dword ptr [esp + 0x10]
        cmp ecx, ebx
        je L_4819e1
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edi]
        mov dword ptr [edi], edx
        mov dword ptr [ecx], eax
    L_4819e1:
        add ecx, 0x4
        mov eax, ebx
        mov esi, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, edi
        mov edx, dword ptr [ecx]
        add edi, 0x4
        mov dword ptr [ecx], esi
        add ebx, 0x4
        mov dword ptr [eax], edx
        jmp L_4818e0
    L_4819ff:
        sub ebp, 0x4
        cmp ebx, dword ptr [esp + 0x20]
        jne L_481a32
        sub edi, 0x4
        cmp ebp, edi
        je L_481a19
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ebp]
        mov dword ptr [ebp], ecx
        mov dword ptr [edi], eax
    L_481a19:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx - 0x4]
        mov eax, dword ptr [edi]
        sub ecx, 0x4
        mov dword ptr [edi], edx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [ecx], eax
        jmp L_4818e0
    L_481a32:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebp]
        mov dword ptr [ebx], ecx
        mov dword ptr [ebp], eax
        add ebx, 0x4
        jmp L_4818e0
    L_481a44:
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], edx
        pop ebx
        pop ecx
        ret
    }
}

// [0x00489E10] sub_00489E10 (709 bytes)
extern "C" void ext_00486D40();
extern "C" void ext_00486D60();
extern "C" void ext_00486D80();
extern "C" void ext_00486DD0();
extern "C" void ext_00486E30();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00489E10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x69], 0x0
        push ebp
        mov ebp, ecx
        je L_489e8e
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
    L_489e8e:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00486E30
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x69], 0x0
        je L_489ead
        mov edi, dword ptr [ebx + 0x8]
        jmp L_489ec5
    L_489ead:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x69], 0x0
        je L_489eba
        mov edi, eax
        jmp L_489ec5
    L_489eba:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_489f30
    L_489ec5:
        cmp byte ptr [edi + 0x69], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_489ed1
        mov dword ptr [edi + 0x4], esi
    L_489ed1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_489ede
        mov dword ptr [eax + 0x4], edi
        jmp L_489ee9
    L_489ede:
        cmp dword ptr [esi], ebx
        jne L_489ee6
        mov dword ptr [esi], edi
        jmp L_489ee9
    L_489ee6:
        mov dword ptr [esi + 0x8], edi
    L_489ee9:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_489f09
        cmp byte ptr [edi + 0x69], 0x0
        je L_489efe
        mov eax, esi
        jmp L_489f07
    L_489efe:
        push edi
        call ext_00486D60
        add esp, 0x4
    L_489f07:
        mov dword ptr [ebx], eax
    L_489f09:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_489f87
        cmp byte ptr [edi + 0x69], 0x0
        je L_489f22
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_489f87
    L_489f22:
        push edi
        call ext_00486D40
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_489f87
    L_489f30:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_489f40
        mov esi, ecx
        jmp L_489f5a
    L_489f40:
        cmp byte ptr [edi + 0x69], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_489f4c
        mov dword ptr [edi + 0x4], esi
    L_489f4c:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_489f5a:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_489f67
        mov dword ptr [eax + 0x4], ecx
        jmp L_489f75
    L_489f67:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_489f72
        mov dword ptr [eax], ecx
        jmp L_489f75
    L_489f72:
        mov dword ptr [eax + 0x8], ecx
    L_489f75:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x68]
        mov al, byte ptr [ecx + 0x68]
        mov byte ptr [ecx + 0x68], dl
        mov byte ptr [ebx + 0x68], al
    L_489f87:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x68], bl
        jne L_48a088
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_48a085
    L_489fa2:
        cmp byte ptr [edi + 0x68], bl
        jne L_48a085
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_48a014
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x68], 0x0
        jne L_489fcc
        mov byte ptr [eax + 0x68], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x68], 0x0
        call ext_00486D80
        mov eax, dword ptr [esi + 0x8]
    L_489fcc:
        cmp byte ptr [eax + 0x69], 0x0
        jne L_48a044
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x68], bl
        jne L_489fe1
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x68], bl
        je L_48a040
    L_489fe1:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x68], bl
        jne L_489ffb
        mov byte ptr [edx + 0x68], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x68], 0x0
        call ext_00486DD0
        mov eax, dword ptr [esi + 0x8]
    L_489ffb:
        mov cl, byte ptr [esi + 0x68]
        mov byte ptr [eax + 0x68], cl
        mov byte ptr [esi + 0x68], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x68], bl
        call ext_00486D80
        jmp L_48a085
    L_48a014:
        cmp byte ptr [eax + 0x68], 0x0
        jne L_48a02b
        mov byte ptr [eax + 0x68], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x68], 0x0
        call ext_00486DD0
        mov eax, dword ptr [esi]
    L_48a02b:
        cmp byte ptr [eax + 0x69], 0x0
        jne L_48a044
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x68], bl
        jne L_48a057
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x68], bl
        jne L_48a057
    L_48a040:
        mov byte ptr [eax + 0x68], 0x0
    L_48a044:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_489fa2
        jmp L_48a085
    L_48a057:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x68], bl
        jne L_48a06f
        mov byte ptr [edx + 0x68], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x68], 0x0
        call ext_00486D80
        mov eax, dword ptr [esi]
    L_48a06f:
        mov cl, byte ptr [esi + 0x68]
        mov byte ptr [eax + 0x68], cl
        mov byte ptr [esi + 0x68], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x68], bl
        call ext_00486DD0
    L_48a085:
        mov byte ptr [edi + 0x68], bl
    L_48a088:
        mov ecx, dword ptr [esp + 0x10]
        add ecx, 0xc
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
        jbe L_48a0b2
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_48a0b2:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}

// [0x004875A0] sub_004875A0 (1166 bytes)
extern "C" __declspec(naked) void __fastcall fn_004875A0(float* self, int edx_unused, float* out, const float* src) {
    __asm {
        sub esp, 0x50
        mov eax, dword ptr [esp + 0x54]
        fld1
        fst dword ptr [eax]
        mov edx, ecx
        fldz
        push esi
        fst dword ptr [eax + 0x4]
        mov esi, dword ptr [esp + 0x5c]
        fst dword ptr [eax + 0x8]
        push edi
        fst dword ptr [eax + 0xc]
        mov ecx, 0x10
        fst dword ptr [eax + 0x10]
        lea edi, [esp + 0x18]
        fst dword ptr [eax + 0x18]
        rep movsd
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
        fld dword ptr [edx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmul dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmul dword ptr [esp + 0xc]
        faddp st(2), st
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmul dword ptr [esp + 0x10]
        faddp st(3), st
        fld dword ptr [esp + 0x48]
        fld st(0)
        fmul dword ptr [esp + 0x14]
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [eax]
        fld dword ptr [edx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmul dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fld dword ptr [esp + 0x40]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x50]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x54]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x10]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 0x14]
        fld st(2)
        fmul dword ptr [esp + 0xc]
        fld st(5)
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld st(2)
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x10]
        fld dword ptr [edx + 0x10]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0xc]
        fld st(1)
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x14]
        fld dword ptr [edx + 0x10]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x40]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x50]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x18]
        fld dword ptr [edx + 0x10]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x54]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [edx + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x2c]
        fstp dword ptr [esp + 0x14]
        fld st(2)
        fmul dword ptr [esp + 0xc]
        fld st(5)
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld st(2)
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld st(4)
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x20]
        fld dword ptr [edx + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x2c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0xc]
        fld st(1)
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x24]
        fld dword ptr [edx + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x2c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x40]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x50]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x28]
        fld dword ptr [edx + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x2c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x54]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x2c]
        fld dword ptr [edx + 0x30]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x3c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fmulp st(3), st
        fld dword ptr [esp + 0x8]
        fmulp st(5), st
        fxch st(2)
        faddp st(4), st
        fmul dword ptr [esp + 0x10]
        faddp st(3), st
        fld dword ptr [esp + 0x14]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [eax + 0x30]
        fld dword ptr [edx + 0x30]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x3c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x10]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [eax + 0x34]
        fld dword ptr [edx + 0x30]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x3c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esp + 0x8]
        pop edi
        pop esi
        faddp st(1), st
        fld dword ptr [esp + 0x38]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fstp dword ptr [eax + 0x38]
        fld dword ptr [edx + 0x30]
        fstp dword ptr [esp]
        fld dword ptr [edx + 0x34]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [edx + 0x38]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x3c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esp]
        faddp st(1), st
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fstp dword ptr [eax + 0x3c]
        add esp, 0x50
        ret 0x8
    }
}

// [0x0048F1D0] sub_0048F1D0 (31 bytes)
extern "C" void ext_0048F0F0();

extern "C" __declspec(naked) void __fastcall fn_0048F1D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        add eax, 8
        push eax
        lea ecx, [esi + 0x20]
        push ecx
        mov ecx, esi
        call ext_0048F0F0
        pop esi
        ret
    }
}

extern "C" void ext_00484C00();
extern "C" void ext_00486040();

// [0x00486680] sub_00486680 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00486680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00484C00
        lea eax, [esi + 0xA0]
        push eax
        lea ecx, [esi + 0x80]
        push ecx
        lea edx, [esi + 0x60]
        push edx
        mov ecx, esi
        call ext_00486040
        pop esi
        ret
    }
}

// [0x00486AA0] sub_00486AA0 (37 bytes)
extern "C" void ext_004C0340();
extern "C" void ext_005A3DF0();
extern "C" __declspec(naked) void __fastcall fn_00486AA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x19c]
        push ecx
        mov ecx, dword ptr [esi + 0x168]
        call ext_005A3DF0
        mov ecx, esi
        call ext_004C0340
        pop esi
        ret 4
    }
}

// [0x0048CDB0] sub_0048CDB0 (41 bytes)
extern "C" void ext_0048CAE0();

extern "C" __declspec(naked) void __fastcall fn_0048CDB0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0048CAE0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00486400] sub_00486400 (42 bytes)
extern "C" void ext_00484970();
extern "C" void ext_00485EF0();
extern "C" __declspec(naked) void __fastcall fn_00486400(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00484970
        lea eax, [esi + 0xb4]
        push eax
        lea ecx, [esi + 0xa0]
        push ecx
        lea edx, [esi + 0x80]
        push edx
        lea eax, [esi + 0x60]
        push eax
        mov ecx, esi
        call ext_00485EF0
        pop esi
        ret
    }
}

// [0x0048CC70] sub_0048CC70 (43 bytes)
extern "C" void ext_0048CA80();
extern "C" __declspec(naked) void __fastcall fn_0048CC70(void* self) {
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
        call ext_0048CA80
        add esp, 0x1c
        ret
    }
}

// [0x00483450] sub_00483450 (49 bytes)
extern "C" void ext_0059A140();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00483450(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 0x18]
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        lea eax, [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0059A140
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

extern "C" void ext_0048AC80();

// [0x0048AFE0] sub_0048AFE0 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048AFE0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0048AC80
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x0048CC30] sub_0048CC30 (55 bytes)
extern "C" void ext_0048C9E0();

extern "C" __declspec(naked) int __fastcall fn_0048CC30(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0048C9E0
        mov eax, esi
        imul eax, eax, 0x68
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0048C9A0] sub_0048C9A0 (58 bytes)
extern "C" void ext_0048C8A0();

struct Item_0048C9A0 {
    int f0;
    char f4[0x64];
    Item_0048C9A0& operator=(const Item_0048C9A0& rhs) {
        f0 = rhs.f0;
        ((void (__thiscall*)(void*, const void*))ext_0048C8A0)(f4, rhs.f4);
        return *this;
    }
};

extern "C" Item_0048C9A0* __cdecl fn_0048C9A0(Item_0048C9A0* first, Item_0048C9A0* last, Item_0048C9A0* dst) {
    for (; first != last; ++first, ++dst) {
        *dst = *first;
    }
    return dst;
}

// [0x0048CBD0] sub_0048CBD0 (85 bytes)
extern "C" void ext_0048C9A0();

extern "C" __declspec(naked) void* __cdecl fn_0048CBD0(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
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
        call ext_0048C9A0
        sub esi, ebx
        mov eax, 0x4ec4ec4f
        imul esi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x68
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0048CCC0] sub_0048CCC0 (89 bytes)
extern "C" void ext_0048CB80();
extern "C" void ext_0048CBD0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048CCC0(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        mov esi, ecx
        je L_call_invalid
        cmp ebp, dword ptr [esp + 0x1c]
        je L_cont
    L_call_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x20]
        cmp ebx, eax
        je L_ret
        mov ecx, dword ptr [esi + 0x8]
        push edi
        push ebx
        push ecx
        push eax
        call ext_0048CBD0
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_0048CB80
        add esp, 0x1c
        mov dword ptr [esi + 0x8], edi
        pop edi
    L_ret:
        mov eax, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        ret 0x14
    }
}

// [0x0048D350] sub_0048D350 (59 bytes)
extern "C" void ext_0048CCC0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048D350(void* self) {
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
        jbe m48d350_ok1
        call ebp
    m48d350_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m48d350_ok2
        call ebp
    m48d350_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048CCC0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0048C920] sub_0048C920 (59 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0048C920(unsigned char* first, unsigned char* last, unsigned char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je L_done_0048C920
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_loop_0048C920:
        mov eax, dword ptr [esi - 0x68]
        sub esi, 0x68
        lea ecx, [esi + 0x4]
        sub edi, 0x68
        push ecx
        lea ecx, [edi + 0x4]
        mov dword ptr [edi], eax
        call ext_0048C8A0
        cmp esi, ebx
        jne L_loop_0048C920
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    L_done_0048C920:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0048CA80] sub_0048CA80 (89 bytes)
extern "C" void ext_0048C920();

extern "C" __declspec(naked) int __cdecl fn_0048CA80(int a1, int a2, int a3) {
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
        call ext_0048C920
        sub esi, ebx
        mov eax, 0x4ec4ec4f
        imul esi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x68
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

// [0x0048BB60] sub_0048BB60 (59 bytes)
extern "C" void ext_0048AC80();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0048BB60(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x93e17c
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0048AC80
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

extern "C" int mem_00924FF4;

// [0x0048A0E0] sub_0048A0E0 (62 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048A0E0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x69], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_0048A0E0
        mov esi, dword ptr [esi]
        lea ecx, [edi + 0xc]
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x69], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0048AC80] sub_0048AC80 (203 bytes)
extern "C" void ext_00486E30();
extern "C" void ext_00489E10();
extern "C" void ext_0048A0E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048AC80(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
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
        je L_48AC9A
        cmp edi, esi
        je L_48ACA0
L_48AC9A:
        call dword ptr [mem_00925134]
L_48ACA0:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_48AD01
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_48ACB7
        cmp eax, esi
        je L_48ACBD
L_48ACB7:
        call dword ptr [mem_00925134]
L_48ACBD:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_48AD01
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_0048A0E0
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
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
L_48AD01:
        test edi, edi
        je L_48AD0B
        cmp edi, dword ptr [esp + 0x28]
        je L_48AD11
L_48AD0B:
        call dword ptr [mem_00925134]
L_48AD11:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_48AD38
        lea ecx, [esp + 0x20]
        call ext_00486E30
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00489E10
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_48AD01
L_48AD38:
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

// [0x0048DC60] sub_0048DC60 (202 bytes)
extern "C" void ext_0048D390();
extern "C" void ext_004C2330();
extern "C" void ext_005B0D90();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048DC60(void* self) {
    __asm {
        push -1
        push 0885053h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 093e39ch
        mov dword ptr [esi + 4], 093e354h
        mov dword ptr [esi + 8], 093e314h
        mov dword ptr [esi + 0ch], 093e2c4h
        mov dword ptr [esi + 150h], 093e2ach
        mov dword ptr [esi + 154h], 093e29ch
        mov dword ptr [esi + 158h], 093e270h
        mov edi, dword ptr [esi + 234h]
        test edi, edi
        mov dword ptr [esp + 14h], 3
        je skip_del
        mov ecx, edi
        call ext_0048D390
        push edi
        call ext_006A5C5C
        add esp, 4
    skip_del:
        lea ecx, [esi + 224h]
        mov byte ptr [esp + 14h], 2
        call ext_0065F440
        lea ecx, [esi + 19ch]
        mov byte ptr [esp + 14h], 1
        call ext_005B0D90
        lea ecx, [esi + 180h]
        mov byte ptr [esp + 14h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        call ext_004C2330
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x0048FA40] sub_0048FA40 (89 bytes)
extern "C" void ext_005A6650();
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_0048FA40(void* self) {
    __asm {
        push -1
        push 0x00885483
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x1
        call ext_005A6650
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x10], 0x0
        call ext_005A6650
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00665810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00480B00] sub_00480B00 (292 bytes)
extern "C" void ext_0041CD60();
extern "C" void ext_00586D00();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00480B00(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [esp + 0x10], esi
        call edx
        mov ebx, eax
        mov ecx, ebx
        xor ebp, ebp
        call ext_0041CD60
        test eax, eax
        jbe L_end
        mov dword ptr [esp + 0xc], ebp
        push edi
        mov edi, edi
L_loop:
        mov ecx, dword ptr [ebx + 0x4]
        test ecx, ecx
        je L_bad1
        mov eax, dword ptr [ebx + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp ebp, eax
        jb L_ok1
L_bad1:
        call dword ptr [mem_00925134]
L_ok1:
        mov eax, dword ptr [ebx + 0x4]
        mov esi, dword ptr [esp + 0x1c]
        mov edi, dword ptr [eax + 4*ebp]
        mov ecx, dword ptr [esi + 0x4]
        add edi, 0x4
        test ecx, ecx
        je L_bad2
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x6
        cmp ebp, eax
        jb L_ok2
L_bad2:
        call dword ptr [mem_00925134]
L_ok2:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [mem_00B40640]
        mov esi, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0xc]
        add esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, edi
        call edx
        mov edi, eax
        mov ecx, 0x10
        rep movsd
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je L_bad3
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        cmp ebp, ecx
        jb L_ok3
L_bad3:
        call dword ptr [mem_00925134]
L_ok3:
        mov eax, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [eax + 4*ebp]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb0]
        call eax
        mov ecx, dword ptr [ebx + 0x4]
        test ecx, ecx
        je L_bad4
        mov eax, dword ptr [ebx + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp ebp, eax
        jb L_ok4
L_bad4:
        call dword ptr [mem_00925134]
L_ok4:
        mov ecx, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [ecx + 4*ebp]
        call ext_00586D00
        add dword ptr [esp + 0x10], 0x40
        mov ecx, ebx
        add ebp, 0x1
        call ext_0041CD60
        cmp ebp, eax
        jb L_loop
        mov esi, dword ptr [esp + 0x14]
        pop edi
L_end:
        mov edx, dword ptr [esi + 0x10]
        mov byte ptr [edx + 0xf8], 0x1
        cmp dword ptr [esi + 0x14], 0x0
        je L_skip
        mov ecx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x18]
        call edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

extern "C" void ext_00586440();
extern "C" void ext_00586540();
extern "C" void ext_0065D120();

// [0x00480700] sub_00480700 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_00480700(void* self) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        je done
        push esi
        call ext_00594000
        mov esi, eax
        lea ecx, [esi + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [esi + 0x26c]
        test eax, eax
        je zero_eax
        add eax, 0x8
        jmp do_call
    zero_eax:
        xor eax, eax
    do_call:
        push 0x0
        push eax
        mov ecx, edi
        call ext_00586540
        add esi, 0x168
        push esi
        mov ecx, edi
        call ext_00586440
        pop esi
    done:
        pop edi
        ret 0x4
    }
}

// [0x004898A0] sub_004898A0 (75 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_006226A0();

extern "C" __declspec(naked) bool __fastcall fn_004898A0(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_4898BE
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_4898BE:
        cmp edi, 0xccccccc
        jbe L_4898CB
        call ext_00405FB0
    L_4898CB:
        push eax
        push edi
        call ext_006226A0
        lea ecx, [edi + 4*edi]
        add esp, 0x8
        lea edx, [eax + 4*ecx]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0048B890] sub_0048B890 (321 bytes)
extern "C" void ext_004898A0();
extern "C" void ext_00489A80();
extern "C" void ext_0048A9C0();
extern "C" void ext_0048B730();
extern "C" void ext_00553E40();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_0048B890(void* self, int edx_unused, void* other) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebx
        je L_9CA
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        test ebp, ebp
        je L_clear
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, ebp
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_nonempty
    L_clear:
        mov ecx, esi
        call ext_0048B730
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_nonempty:
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne L_8DB
        xor eax, eax
        jmp L_8F1
    L_8DB:
        mov edx, dword ptr [esi + 0x8]
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_8F1:
        cmp ecx, eax
        ja L_94A
        mov eax, dword ptr [ebx + 0x8]
        push edi
        push eax
        push ebp
        call ext_00489A80
        mov eax, dword ptr [ebx + 0x4]
        add esp, 0xc
        test eax, eax
        jne L_91F
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [eax + 4*eax]
        pop edi
        lea edx, [ecx + 4*eax]
        pop ebp
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_91F:
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        mov ecx, dword ptr [esi + 0x4]
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        pop edi
        lea edx, [ecx + 4*eax]
        pop ebp
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_94A:
        test edi, edi
        jne L_952
        xor eax, eax
        jmp L_968
    L_952:
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_968:
        cmp ecx, eax
        ja L_992
        mov ecx, esi
        call ext_00553E40
        lea eax, [eax + 4*eax]
        lea eax, [ebp + 4*eax]
        push edi
        push eax
        push ebp
        mov dword ptr [esp + 0x20], eax
        call ext_00489A80
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        jmp L_9B8
    L_992:
        test edi, edi
        je L_99F
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_99F:
        mov ecx, ebx
        call ext_00553E40
        push eax
        mov ecx, esi
        call ext_004898A0
        test al, al
        je L_9C8
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ebx + 0x4]
    L_9B8:
        mov edx, dword ptr [ebx + 0x8]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0048A9C0
        mov dword ptr [esi + 0x8], eax
    L_9C8:
        pop edi
        pop ebp
    L_9CA:
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0048C8A0] sub_0048C8A0 (118 bytes)
extern "C" void ext_0048B890();
extern "C" __declspec(naked) void __fastcall fn_0048C8A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 0x20]
        mov dword ptr [esi + 0x20], ecx
        mov edx, dword ptr [edi + 0x24]
        lea ecx, [edi + 0x2c]
        mov dword ptr [esi + 0x24], edx
        mov eax, dword ptr [edi + 0x28]
        push ecx
        lea ecx, [esi + 0x2c]
        mov dword ptr [esi + 0x28], eax
        call ext_0048B890
        fld dword ptr [edi + 0x3c]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [edi + 0x40]
        fstp dword ptr [esi + 0x40]
        fld dword ptr [edi + 0x44]
        fstp dword ptr [esi + 0x44]
        fld dword ptr [edi + 0x48]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [edi + 0x50]
        fstp dword ptr [esi + 0x50]
        fld dword ptr [edi + 0x54]
        fstp dword ptr [esi + 0x54]
        fld dword ptr [edi + 0x58]
        fstp dword ptr [esi + 0x58]
        mov edx, dword ptr [edi + 0x5c]
        mov dword ptr [esi + 0x5c], edx
        mov eax, dword ptr [edi + 0x60]
        mov dword ptr [esi + 0x60], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

extern "C" void ext_0048F0F0();
extern "C" void ext_005864C0();
extern "C" void ext_00594000();
extern "C" void ext_00598A90();

// [0x0048F1F0] sub_0048F1F0 (80 bytes)
extern "C" void __fastcall fn_0048F1F0(void* self, int edx_unused, int arg1) {
    if (*((unsigned char*)self + 0x30) == 0) {
        void* edi = ((void* (__cdecl*)())ext_00594000)();
        ((void (__thiscall*)(void*, int))ext_005864C0)(edi, *(int*)((char*)self + 0x2c));
        ((void (__thiscall*)(void*, int, int))ext_0048F0F0)(self, *(int*)((char*)edi + 0x26c) + 8, arg1);
        ((void (__thiscall*)(void*))ext_00598A90)(edi);
    }
    void* obj = *(void**)((char*)self + 0x10);
    if (obj != 0) {
        (*(void (__thiscall**)(void*))(*(int*)obj + 8))(obj);
    }
    *((unsigned char*)self + 0x30) = 0;
}

// [0x0048CDE0] sub_0048CDE0 (81 bytes)
extern "C" void ext_0048BE70();
extern "C" void ext_0048BF20();
extern "C" void ext_0048BFD0();
extern "C" void ext_0048CD20();
extern "C" void ext_004EB950();
extern "C" int mem_00A9F9C4;
extern "C" int mem_00A9F554;

extern "C" void __cdecl fn_0048CDE0(void* arg) {
    int local;
    ((void (__thiscall*)(void*, int*, int))ext_0048CD20)(arg, &local, 0x0093e1b8);
    ((void (__thiscall*)(int*, int))ext_0048BE70)(&local, mem_00A9F9C4);
    ((void (__thiscall*)(int*, int))ext_0048BF20)(&local, mem_00A9F554);
    ((void (__thiscall*)(int*, int))ext_0048BFD0)(&local, 0x0093e1ac);
    ((void (__cdecl*)(void*))ext_004EB950)(arg);
}

// [0x00482990] sub_00482990 (105 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00482990(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x881818
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        lea eax, [edi + 0x4]
        lea ecx, [esi + 0x4]
        push eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x92fb68
        call ext_004A6970
        lea ecx, [edi + 0x14]
        push ecx
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x93c4f8
        call ext_004A6970
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x24], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00486B10] sub_00486B10 (156 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00A9EE28;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00486B10(void* self) {
    __asm {
        push -0x1
        push 0x8848f2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        push edi
        mov esi, ecx
        call ext_006690D0
        mov edi, eax
        mov eax, dword ptr [mem_00A9EE28]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x54], 0x0
        call ext_00669AD0
        mov edx, dword ptr [esi + 0x19c]
        lea ecx, [esi + 0x19c]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        mov byte ptr [esp + 0x4c], 0x1
        call eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}

// [0x0048BC80] sub_0048BC80 (199 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048BC80(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        push edi
        mov ebx, ecx
        jbe loc_0048BC9B
        call dword ptr [mem_00925134]
loc_0048BC9B:
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        jbe loc_0048BCA9
        call dword ptr [mem_00925134]
loc_0048BCA9:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00596660
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        jbe loc_0048BCD0
        call dword ptr [mem_00925134]
        jmp loc_0048BCD0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loc_0048BCD0:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe loc_0048BCDE
        call dword ptr [mem_00925134]
loc_0048BCDE:
        cmp esi, edi
        je loc_0048BD3D
        cmp esi, dword ptr [ebp + 0x8]
        jb loc_0048BCED
        call dword ptr [mem_00925134]
loc_0048BCED:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push 0xa2fbbc
        push 0xa2e2f8
        push 0x0
        push 0x0
        push 0x0
        push eax
        push esi
        mov ecx, ebx
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x1c], eax
        je loc_0048BD2D
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [esp + 0x1c]
        push eax
        call ext_0041A920
loc_0048BD2D:
        cmp esi, dword ptr [ebp + 0x8]
        jb loc_0048BD38
        call dword ptr [mem_00925134]
loc_0048BD38:
        add esi, 0x1c
        jmp loc_0048BCD0
loc_0048BD3D:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

extern "C" void ext_00484E90();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

// [0x00485E40] sub_00485E40 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_00485E40(void* self) {
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x10]
        push    esi
        push    edi
        call    edx
        mov     edi, eax
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_check_end
        call    dword ptr [mem_00925134]
    L_check_end:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_deref
        call    dword ptr [mem_00925134]
    L_deref:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [mem_00B40640]
        lea     ecx, [eax + 4]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x0c]
        push    edx
        call    eax
        push    eax
        lea     ecx, [ebp + 0x50]
        call    ext_00484E90
        cmp     esi, dword ptr [edi + 8]
        jb      L_next
        call    dword ptr [mem_00925134]
    L_next:
        add     esi, 4
        jmp     L_check_end
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}

// [0x0048DAB0] sub_0048DAB0 (193 bytes)
extern "C" void ext_004C30D0();
extern "C" void ext_004E9DB0();
extern "C" void ext_005B0CA0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_0048DAB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0885015h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 8], esi
        call ext_004C30D0
        lea ecx, [esi + 180h]
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esi], 093E39Ch
        mov dword ptr [esi + 4], 093E354h
        mov dword ptr [esi + 8], 093E314h
        mov dword ptr [esi + 0ch], 093E2C4h
        mov dword ptr [esi + 150h], 093E2ACh
        mov dword ptr [esi + 154h], 093E29Ch
        mov dword ptr [esi + 158h], 093E270h
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 19Ch]
        mov byte ptr [esp + 10h], 1
        call ext_005B0CA0
        fldz
        lea ecx, [esi + 224h]
        fstp dword ptr [esi + 220h]
        mov byte ptr [esp + 10h], 2
        call ext_004E9DB0
        mov ecx, dword ptr [esp + 8]
        mov byte ptr [esi + 230h], 0
        mov dword ptr [esi + 234h], 0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x0048C1A0] sub_0048C1A0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00487ED0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C1A0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00487ED0
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

// [0x0048D960] sub_0048D960 (215 bytes)
extern "C" void ext_004C31B0();
extern "C" void ext_004E9DB0();
extern "C" void ext_005B0CA0();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0048D960(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -0x1
        push 0x885015
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_004C31B0
        push 0x92f17c
        lea ecx, [esi + 0x180]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x93e39c
        mov dword ptr [esi + 0x4], 0x93e354
        mov dword ptr [esi + 0x8], 0x93e314
        mov dword ptr [esi + 0xc], 0x93e2c4
        mov dword ptr [esi + 0x150], 0x93e2ac
        mov dword ptr [esi + 0x154], 0x93e29c
        mov dword ptr [esi + 0x158], 0x93e270
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x10], 0x1
        call ext_005B0CA0
        fldz
        lea ecx, [esi + 0x224]
        fstp dword ptr [esi + 0x220]
        mov byte ptr [esp + 0x10], 0x2
        call ext_004E9DB0
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [esi + 0x230], 0x0
        mov dword ptr [esi + 0x234], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0048C220] sub_0048C220 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00487F30();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C220(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00487F30
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

// [0x0048C400] sub_0048C400 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00487F90();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C400(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00487F90
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

// [0x0048C5E0] sub_0048C5E0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00487FF0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C5E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00487FF0
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

// [0x0048C660] sub_0048C660 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00488050();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C660(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00488050
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

// [0x0048C6E0] sub_0048C6E0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_004880B0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C6E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004880B0
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

// [0x0048C760] sub_0048C760 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00488110();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C760(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00488110
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

// [0x0048C7E0] sub_0048C7E0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00488170();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C7E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00488170
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

extern "C" void ext_0048A8F0();

// [0x0048AC00] sub_0048AC00 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048AC00(void* self) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0x4]
        add     eax, 0x4
        mov     eax, dword ptr [eax]
        push    edi
        push    eax
        call    ext_0048A8F0
        mov     dword ptr [edi + 0x4], eax
        mov     ecx, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, dword ptr [edx + 0x4]
        cmp     byte ptr [eax + 0x69], 0x0
        jne     loc_48AC67
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0x69], 0x0
        jne     loc_48AC42
    loc_48AC38:
        mov     eax, ecx
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0x69], 0x0
        je      loc_48AC38
    loc_48AC42:
        mov     dword ptr [edx], eax
        mov     esi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0x69], 0x0
        jne     loc_48AC5E
    loc_48AC53:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0x69], 0x0
        je      loc_48AC53
    loc_48AC5E:
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        pop     esi
        pop     ebx
        ret     0x4
    loc_48AC67:
        mov     dword ptr [edx], edx
        mov     esi, dword ptr [esi + 0x4]
        pop     edi
        mov     dword ptr [esi + 0x8], esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}

// [0x0048EFF0] sub_0048EFF0 (122 bytes)
extern "C" void ext_0059ACD0();
extern "C" int mem_0088536E;
extern "C" int mem_0093E700;
extern "C" __declspec(naked) void __fastcall fn_0048EFF0(void* self) {
    __asm {
        push    -0x1
        push    offset mem_0088536E
        mov     eax, fs:[0x0]
        push    eax
        mov     fs:[0x0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_006657F0
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x10], eax
        lea     eax, [esi + 0x14]
        mov     dword ptr [esi], offset mem_0093E700
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0x2c], edi
        mov     dword ptr [esi + 0x30], edi
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        mov     byte ptr [esp + 0x18], 0x2
        mov     dword ptr [esi + 0x34], ecx
        call    ext_00594000
        mov     ecx, eax
        call    ext_0059ACD0
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     fs:[0x0], ecx
        add     esp, 0x10
        ret     0x8
    }
}

extern "C" void ext_00468180();
extern "C" void ext_0046F930();
extern "C" void ext_00482080();
extern "C" void ext_004A5880();
extern "C" void ext_004A8330();
extern "C" void ext_004AFF30();
extern "C" void ext_006A5C5C();
extern "C" int mem_00AD89B4;

// [0x004825C0] sub_004825C0 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_004825C0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x3b4]
        push    edi
        call    ext_004A5880
        push    eax
        lea     ecx, [esi + 0x3bc]
        call    ext_004AFF30
        mov     eax, dword ptr [esi + 0x3b4]
        push    eax
        push    0x5
        call    ext_00468180
        mov     ecx, eax
        call    ext_00482080
        mov     ecx, dword ptr [esi + 0x3b4]
        call    ext_004A8330
        mov     edi, dword ptr [esi + 0x3f4]
        test    edi, edi
        je      L_done_free
        cmp     dword ptr [edi], 0x0
        je      L_free
        sub     dword ptr [mem_00AD89B4], 0x1
        jne     L_free
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax + 0x153], 0x0
        cmp     byte ptr [edi + 0x4], 0x0
        je      L_free
        mov     ecx, dword ptr [edi]
        call    ext_0046F930
    L_free:
        push    edi
        call    ext_006A5C5C
        add     esp, 0x4
    L_done_free:
        pop     edi
        mov     dword ptr [esi + 0x3f4], 0x0
        pop     esi
        ret
    }
}

extern "C" void ext_00481770();
extern "C" void ext_00483630();
extern "C" int mem_00925134;

// [0x00484E90] sub_00484E90 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_00484E90(void* self, int edx_unused, void* val) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        push edi
        jne L_484ea2
        xor ecx, ecx
        jmp L_484eaa
    L_484ea2:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
        sar ecx, 0x6
    L_484eaa:
        test edx, edx
        je L_484eeb
        mov eax, dword ptr [esi + 0xc]
        sub eax, edx
        sar eax, 0x6
        cmp ecx, eax
        jae L_484eeb
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
        call ext_00481770
        add esp, 0x18
        add edi, 0x40
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_484eeb:
        mov edi, dword ptr [esi + 0x8]
        cmp edx, edi
        jbe L_484ef8
        call dword ptr [mem_00925134]
    L_484ef8:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00483630
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00485C90] sub_00485C90 (232 bytes)
extern "C" void ext_00482990();
extern "C" void ext_00484E90();
extern "C" void ext_006657F0();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00485C90(void* self) {
    __asm {
        push -1
        push 0x008845b9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        mov dword ptr [esp + 0x14], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x14], ecx
        push edx
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esi], 0x0093c600
        mov dword ptr [esi + 0x10], eax
        call ext_00482990
        lea ebp, [esi + 0x40]
        mov dword ptr [ebp + 0x4], edi
        mov dword ptr [ebp + 0x8], edi
        mov dword ptr [ebp + 0xc], edi
        mov dword ptr [esi + 0x54], edi
        mov dword ptr [esi + 0x58], edi
        mov dword ptr [esi + 0x5c], edi
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        mov byte ptr [esp + 0x1c], 0x3
        call edx
        mov edi, eax
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_485D11
        call dword ptr [mem_00925134]
    L_485D11:
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x24], eax
        jbe L_485D27
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x24]
    L_485D27:
        cmp ebx, eax
        je L_485D61
        cmp ebx, dword ptr [edi + 0x8]
        jb L_485D36
        call dword ptr [mem_00925134]
    L_485D36:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        push eax
        mov ecx, ebp
        call ext_00484E90
        cmp ebx, dword ptr [edi + 0x8]
        jb L_485D5C
        call dword ptr [mem_00925134]
    L_485D5C:
        add ebx, 0x4
        jmp L_485D11
    L_485D61:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00484F20] sub_00484F20 (131 bytes)
extern "C" void ext_004817A0();
extern "C" void ext_004836C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00484F20(void* self, int edx_unused, void* val) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        push edi
        jne L_484f32
        xor ecx, ecx
        jmp L_484f3a
    L_484f32:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
        sar ecx, 0x4
    L_484f3a:
        test edx, edx
        je L_484f7b
        mov eax, dword ptr [esi + 0xc]
        sub eax, edx
        sar eax, 0x4
        cmp ecx, eax
        jae L_484f7b
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
        call ext_004817A0
        add esp, 0x18
        add edi, 0x10
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_484f7b:
        mov edi, dword ptr [esi + 0x8]
        cmp edx, edi
        jbe L_484f88
        call dword ptr [mem_00925134]
    L_484f88:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004836C0
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00486040] sub_00486040 (231 bytes)
extern "C" void ext_00484E90();
extern "C" void ext_00484F20();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00486040(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr [ecx + 0x1c]
        cmp ebx, dword ptr [ecx + 0x20]
        push ebp
        push esi
        lea esi, [ecx + 0x18]
        push edi
        jbe L_486058
        call dword ptr [mem_00925134]
    L_486058:
        mov ebp, esi
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_486060:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_48606e
        call dword ptr [mem_00925134]
    L_48606e:
        test ebp, ebp
        je L_486076
        cmp ebp, esi
        je L_486080
    L_486076:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_486086
    L_486080:
        mov esi, dword ptr [mem_00925134]
    L_486086:
        cmp ebx, edi
        je L_48611d
        test ebp, ebp
        jne L_486094
        call esi
    L_486094:
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_48609b
        call esi
    L_48609b:
        mov ecx, dword ptr [mem_00B40640]
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push ecx
        lea esi, [edi + 0x4]
        push 2
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x6c]
        call ext_00484E90
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x2c]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x6c]
        push eax
        call ext_00484E90
        fldz
        fst dword ptr [esp + 0x20]
        lea ecx, [edi + 0xc]
        fst dword ptr [esp + 0x1c]
        lea eax, [esp + 0x14]
        fst dword ptr [esp + 0x18]
        push eax
        fstp dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x18]
        call edx
        mov ecx, dword ptr [esp + 0x70]
        lea eax, [esp + 0x14]
        push eax
        call ext_00484F20
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_486113
        call dword ptr [mem_00925134]
    L_486113:
        add ebx, 4
        mov esi, ebp
        jmp L_486060
    L_48611d:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 0xc
    }
}

// [0x00485EF0] sub_00485EF0 (267 bytes)
extern "C" void ext_00484F20();
extern "C" __declspec(naked) void __fastcall fn_00485EF0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub     esp, 0x54
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx + 0x1c]
        cmp     esi, dword ptr [ecx + 0x20]
        push    edi
        lea     edi, [ecx + 0x18]
        jbe     short L_a
        call    dword ptr [mem_00925134]
L_a:
        mov     ebp, edi
        mov     ebx, esi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_loop:
        mov     esi, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], esi
        jbe     short L_b
        call    dword ptr [mem_00925134]
L_b:
        test    ebp, ebp
        je      short L_c
        cmp     ebp, edi
        je      short L_d
L_c:
        mov     edi, dword ptr [mem_00925134]
        call    edi
        jmp     short L_e
L_d:
        mov     edi, dword ptr [mem_00925134]
L_e:
        cmp     ebx, esi
        je      L_end
        test    ebp, ebp
        jne     short L_f
        call    edi
L_f:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short L_g
        call    edi
L_g:
        mov     edi, dword ptr [ebx]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0xc0]
        mov     ecx, edi
        call    edx
        test    al, al
        je      short L_h
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0x80]
        mov     ecx, edi
        call    edx
        mov     eax, dword ptr [esp + 0x74]
        fstp    dword ptr [eax]
        jmp     short L_tail
L_h:
        mov     eax, dword ptr [mem_00B40640]
        mov     edx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edx + 0x10]
        push    eax
        lea     esi, [edi + 0x4]
        push    2
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x68]
        lea     eax, [esp + 0x24]
        push    eax
        call    ext_00484E90
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x2c]
        mov     ecx, esi
        call    eax
        mov     ecx, dword ptr [esp + 0x6c]
        push    eax
        call    ext_00484E90
        fldz
        mov     edx, dword ptr [edi + 0xc]
        fst     dword ptr [esp + 0x20]
        mov     edx, dword ptr [edx + 0x18]
        fst     dword ptr [esp + 0x1c]
        lea     ecx, [edi + 0xc]
        fst     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        push    eax
        call    edx
        mov     ecx, dword ptr [esp + 0x70]
        lea     eax, [esp + 0x14]
        push    eax
        call    ext_00484F20
L_tail:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short L_i
        call    dword ptr [mem_00925134]
L_i:
        add     ebx, 4
        mov     edi, ebp
        jmp     L_loop
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret     0x10
    }
}

// [0x0048CD20] sub_0048CD20 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048CD20(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, fs:[0x0]
        push    eax
        mov     fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3413c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      loc_48CD73
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    loc_48CD73:
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
        mov     fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00483630] sub_00483630 (143 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00482A00();

extern "C" __declspec(naked) void __fastcall fn_00483630(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        push edi
        je zero_begin
        mov eax, dword ptr [esi + 0x8]
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 0x6
        jne check_range
zero_begin:
        xor edi, edi
        jmp after_dist
check_range:
        cmp ebx, eax
        jbe check_out
        call dword ptr [mem_00925134]
check_out:
        test ebp, ebp
        je bad_out
        cmp ebp, esi
        je out_ok
bad_out:
        call dword ptr [mem_00925134]
out_ok:
        mov edi, dword ptr [esp + 0x20]
        sub edi, ebx
        sar edi, 0x6
after_dist:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push edx
        push 0x1
        push eax
        push ebp
        mov ecx, esi
        call ext_00482A00
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe chk_shl
        call dword ptr [mem_00925134]
chk_shl:
        shl edi, 0x6
        add edi, ebx
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja final_chk
        cmp edi, dword ptr [esi + 0x4]
        jae store_res
final_chk:
        call dword ptr [mem_00925134]
store_res:
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

// [0x004836C0] sub_004836C0 (143 bytes)
extern "C" void ext_00482C50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004836C0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        push edi
        je zero_begin
        mov eax, dword ptr [esi + 0x8]
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 0x4
        jne check_range
zero_begin:
        xor edi, edi
        jmp after_dist
check_range:
        cmp ebx, eax
        jbe check_out
        call dword ptr [mem_00925134]
check_out:
        test ebp, ebp
        je bad_out
        cmp ebp, esi
        je out_ok
bad_out:
        call dword ptr [mem_00925134]
out_ok:
        mov edi, dword ptr [esp + 0x20]
        sub edi, ebx
        sar edi, 0x4
after_dist:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push edx
        push 0x1
        push eax
        push ebp
        mov ecx, esi
        call ext_00482C50
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe chk_shl
        call dword ptr [mem_00925134]
chk_shl:
        shl edi, 0x4
        add edi, ebx
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja final_chk
        cmp edi, dword ptr [esi + 0x4]
        jae store_res
final_chk:
        call dword ptr [mem_00925134]
store_res:
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

// [0x0048BE70] sub_0048BE70 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E88;
extern "C" int mem_00AD9E84;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048BE70(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884dc7
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9E88], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9E88], 1
        mov     ecx, offset mem_00AD9E84
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9E84], 0x93dbbc
        mov     dword ptr [esp + 0x2c], -1
guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9E84
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

// [0x0048BF20] sub_0048BF20 (165 bytes)
extern "C" int mem_00AD9E90;
extern "C" int mem_00AD9E8C;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0048BF20(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884df7
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9E90], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9E90], 1
        mov     ecx, offset mem_00AD9E8C
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9E8C], 0x93dd6c
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9E8C
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

// [0x0048BFD0] sub_0048BFD0 (165 bytes)
extern "C" int mem_00AD9E98;
extern "C" int mem_00AD9E94;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0048BFD0(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884e27
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9E98], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9E98], 1
        mov     ecx, offset mem_00AD9E94
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9E94], 0x93df1c
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9E94
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

// [0x0048C2A0] sub_0048C2A0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9EA0;
extern "C" int mem_00AD9E9C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C2A0(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884e87
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9EA0], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9EA0], 1
        mov     ecx, offset mem_00AD9E9C
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9E9C], 0x93c6a4
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9E9C
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0048C350] sub_0048C350 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9EA8;
extern "C" int mem_00AD9EA4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C350(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884eb7
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9EA8], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9EA8], 1
        mov     ecx, offset mem_00AD9EA4
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9EA4], 0x93c77c
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9EA4
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0048C480] sub_0048C480 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9EB0;
extern "C" int mem_00AD9EAC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C480(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884ee7
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9EB0], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9EB0], 1
        mov     ecx, offset mem_00AD9EAC
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9EAC], 0x93c854
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9EAC
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

// [0x0048C530] sub_0048C530 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9EB8;
extern "C" int mem_00AD9EB4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0048C530(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x884f17
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9EB8], 1
        push    esi
        mov     esi, ecx
        jne     guard_done
        or      dword ptr [mem_00AD9EB8], 1
        mov     ecx, offset mem_00AD9EB4
        mov     dword ptr [esp + 0x2c], 0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9EB4], 0x93c92c
        mov     dword ptr [esp + 0x2c], -1
    guard_done:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9EB4
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

// [0x0048CE40] sub_0048CE40 (194 bytes)
extern "C" void ext_0048C1A0();
extern "C" void ext_0048C220();
extern "C" void ext_0048C2A0();
extern "C" void ext_0048C350();
extern "C" void ext_0048C400();
extern "C" void ext_0048C480();
extern "C" void ext_0048C530();
extern "C" void ext_0048C5E0();
extern "C" void ext_0048C660();
extern "C" void ext_0048C6E0();
extern "C" void ext_0048C760();
extern "C" void ext_0048C7E0();
extern "C" void ext_0048CD20();
extern "C" void ext_006798D0();
extern "C" int mem_00A9F9C4;

extern "C" __declspec(naked) void __fastcall fn_0048CE40(void* self) {
    __asm {
        push    ecx
        lea     eax, [esp]
        push    0x93e1b8
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_0048CD20
        push    0x93e254
        lea     ecx, [esp + 4]
        call    ext_0048C1A0
        push    0x93e244
        lea     ecx, [esp + 4]
        call    ext_0048C220
        push    0x93e238
        lea     ecx, [esp + 4]
        call    ext_0048C2A0
        push    0x93e224
        lea     ecx, [esp + 4]
        call    ext_0048C350
        push    0x93e210
        lea     ecx, [esp + 4]
        call    ext_0048C400
        push    0x93e208
        lea     ecx, [esp + 4]
        call    ext_0048C480
        push    0x93e1fc
        lea     ecx, [esp + 4]
        call    ext_0048C530
        push    0x93e1ec
        lea     ecx, [esp + 4]
        call    ext_0048C5E0
        mov     ecx, dword ptr [mem_00A9F9C4]
        push    ecx
        lea     ecx, [esp + 4]
        call    ext_0048C660
        push    0x93e1e4
        lea     ecx, [esp + 4]
        call    ext_0048C6E0
        push    0x93e1cc
        lea     ecx, [esp + 4]
        call    ext_0048C760
        push    0x93c688
        lea     ecx, [esp + 4]
        call    ext_0048C7E0
        pop     ecx
        ret
    }
}
