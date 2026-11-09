// Decompiled translation unit: src/leaf/decompiled_480000.cpp

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
