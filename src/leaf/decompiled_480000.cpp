// Decompiled translation unit: src/leaf/decompiled_480000.cpp

#include <cstdio>
#include <new>
#include <string>

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
