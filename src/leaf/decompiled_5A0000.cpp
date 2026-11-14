// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

#include <vector>
#include <algorithm>

extern "C" void ext_005A1070();
extern "C" void ext_006657F0();
extern "C" void ext_0059F5C0();
extern "C" int mem_00924FE8;
extern "C" void ext_005BF5F0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// [0x005A3610] sub_005A3610 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_005A3610() {
    __asm {
        push 3
        call ext_005A1070
        ret
    }
}

// [0x005AE4C0] sub_005AE4C0 (21 bytes)
extern "C" void ext_005AD3F0();
extern "C" void __fastcall fn_005AE4C0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_005AD3F0)(self, 0);
    ((Fn)ext_005AD3F0)(self, 1);
}

// [0x005AAD10] sub_005AAD10 (25 bytes)
extern "C" void ext_005AA830();
extern "C" void ext_005AAA00();
extern "C" __declspec(naked) void __fastcall fn_005AAD10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005AAA00
        push eax
        mov ecx, esi
        call ext_005AA830
        pop esi
        ret 0x4
    }
}

// [0x005AC670] sub_005AC670 (29 bytes)
extern "C" void* __fastcall fn_005AC670(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int);
    ((Callee)&ext_006657F0)(self, 0);
    *(int*)((char*)self + 0x10) = a1;
    *(int*)self = 0x95f4e4;
    return self;
}

// [0x005AD1C0] sub_005AD1C0 (36 bytes)
extern "C" __declspec(naked) void __cdecl fn_005AD1C0(void* dst, void* end, void* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp eax, edx
        je done
        mov ecx, dword ptr [esp + 0xc]
        push esi
    fill:
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], esi
        add eax, 0x8
        cmp eax, edx
        jne fill
        pop esi
    done:
        ret
    }
}

// [0x005A3DC0] sub_005A3DC0 (43 bytes)
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_005A3DC0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebp - 0x14]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        add ecx, 0xc
        push ecx
        push edx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x5a3dad
        ret
    }
}

// [0x005AA8D0] sub_005AA8D0 (45 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_005AA8D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x170]
        call dword ptr [mem_00924FDC]
        cmp dword ptr [esi + 0x190], 0x0
        je done
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    done:
        pop esi
        ret 0x4
    }
}

// [0x005ABBE0] sub_005ABBE0 (45 bytes)
extern "C" void ext_005AAD10();
extern "C" __declspec(naked) void __fastcall fn_005ABBE0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x190], 0x0
        je do_call
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je done
    do_call:
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_005AAD10
    done:
        pop esi
        ret 0x4
    }
}

// [0x005AA850] sub_005AA850 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AA850(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0x158]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x15c]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x160]
        cmp dword ptr [ecx + 0x190], 0x0
        je done
        mov ecx, dword ptr [ecx + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
    done:
        ret 0x4
    }
}

// [0x005AA890] sub_005AA890 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AA890(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0x164]
        fld dword ptr [eax + 4]
        fstp dword ptr [ecx + 0x168]
        fld dword ptr [eax + 8]
        fstp dword ptr [ecx + 0x16c]
        cmp dword ptr [ecx + 0x190], 0
        je done
        mov ecx, dword ptr [ecx + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
done:
        ret 4
    }
}

// [0x005AD180] sub_005AD180 (55 bytes)
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005AD180(void* self) {
    __asm {
        push 0x2c
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_005AD194
        mov dword ptr [eax], 0x0
    L_005AD194:
        lea ecx, [eax + 0x4]
        test ecx, ecx
        je L_005AD1A1
        mov dword ptr [ecx], 0x0
    L_005AD1A1:
        lea ecx, [eax + 0x8]
        test ecx, ecx
        je L_005AD1AE
        mov dword ptr [ecx], 0x0
    L_005AD1AE:
        mov byte ptr [eax + 0x28], 0x1
        mov byte ptr [eax + 0x29], 0x0
        ret
    }
}

// [0x005ACC50] sub_005ACC50 (57 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005ACC50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        call ext_006657F0
        fldz
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi], 0x95f594
        mov dword ptr [esi + 0x14], ecx
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x18], 0x0
        fst dword ptr [esi + 0x20]
        mov eax, esi
        fstp dword ptr [esi + 0x1c]
        pop esi
        ret 0x8
    }
}

// [0x005ACEE0] sub_005ACEE0 (57 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005ACEE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push 0
        mov esi, ecx
        call ext_006657F0
        fldz
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi], 0x95f5c4
        mov dword ptr [esi + 0x14], ecx
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x18], 0x0
        fst dword ptr [esi + 0x20]
        mov eax, esi
        fstp dword ptr [esi + 0x1c]
        pop esi
        ret 0x8
    }
}

// [0x005AAA00] sub_005AAA00 (64 bytes)
// __stdcall (ret 4): linear scan of a 0x1c-stride table at 0xB42600..0xB426C4 comparing each
// entry against the std::string argument via the imported basic_string operator== (mem_00924FC4).
// Returns the index of the first match, or 0 if none matches.
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __stdcall fn_005AAA00(const void* name) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xb42600
loop_top:
        push ebx
        push esi
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xb426c4
        jl loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x005AD010] sub_005AD010 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_005AD010(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x29], 0x0
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
        cmp byte ptr [esi + 0x29], 0x0
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

// [0x005ACB00] sub_005ACB00 (77 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005ACB00(void* self, int edx_unused, int a1, int a2, const float* a3) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        call ext_006657F0
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0x95f57c
        mov dword ptr [esi + 0x10], 0x0
        mov dword ptr [esi + 0x18], ecx
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x1c], 0x0
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x24]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x28]
        fld dword ptr [eax + 0xc]
        mov eax, esi
        fstp dword ptr [esi + 0x2c]
        pop esi
        ret 0xc
    }
}

// [0x005ACD30] sub_005ACD30 (77 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005ACD30(void* self, int edx_unused, int a1, int a2, const float* a3) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        call ext_006657F0
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0x95f5ac
        mov dword ptr [esi + 0x10], 0x0
        mov dword ptr [esi + 0x18], ecx
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x1c], 0x0
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x24]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x28]
        fld dword ptr [eax + 0xc]
        mov eax, esi
        fstp dword ptr [esi + 0x2c]
        pop esi
        ret 0xc
    }
}

// [0x005ACFC0] sub_005ACFC0 (78 bytes)
extern "C" void __fastcall fn_005ACFC0(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x29) == 0) {
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

// [0x005AC860] sub_005AC860 (82 bytes)
extern "C" void __fastcall fn_005AC860(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x29] == 0) {
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

// [0x005ACD80] sub_005ACD80 (83 bytes)
extern "C" void ext_00665810();
extern "C" __declspec(naked) void __fastcall fn_005ACD80(void* self) {
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
        mov ecx, dword ptr [esi + 0x1c]
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

extern "C" void ext_00678520();
extern "C" int mem_00924FE8;

// [0x005A9E70] sub_005A9E70 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A9E70(void* self) {
    __asm {
        push -1
        push 0x008a2184
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00678520
        lea ecx, [esi + 0x2c]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x0095ee1c
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005A9F50] sub_005A9F50 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A9F50(void* self) {
    __asm {
        push -1
        push 0x008a2184
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00678520
        lea ecx, [esi + 0x2c]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x0095ee74
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005A9EE0] sub_005A9EE0 (97 bytes)
extern "C" void ext_00678280();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A9EE0(void* self) {
    __asm {
        push -1
        push 0x008A2184
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0095EE1C
        lea ecx, [esi + 0x48]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2C]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00678280
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005A9FB0] sub_005A9FB0 (97 bytes)
extern "C" void ext_00678280();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A9FB0(void* self) {
    __asm {
        push -1
        push 0x008A2184
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0095EE74
        lea ecx, [esi + 0x48]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2C]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00678280
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005A07A0] sub_005A07A0 (105 bytes)
extern "C" void ext_0055C490();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_005A07A0(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0055C490
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
        ret 8
    }
}

// [0x005AE100] sub_005AE100 (105 bytes)
extern "C" void ext_005AD010();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_005AE100(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_005AD010
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
        ret 8
    }
}

// [0x005AC8C0] sub_005AC8C0 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AC8C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_005AC8C0
        call edi
    L_skip_call_005AC8C0:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 29h], 0
        je L_not_nil_005AC8C0
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_005AC8C0:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 29h], 0
        jne L_right_nil_005AC8C0
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 29h], 0
        jne L_store_left_005AC8C0
    L_leftmost_loop_005AC8C0:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 29h], 0
        je L_leftmost_loop_005AC8C0
    L_store_left_005AC8C0:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_005AC8C0:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 29h], 0
        jne L_done_005AC8C0
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_inner_loop_005AC8C0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_005AC8C0
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 29h], 0
        je L_inner_loop_005AC8C0
    L_done_005AC8C0:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x005A0380] sub_005A0380 (61 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A0380(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x1c]
    L_loop_005A0380:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_call_005A0380
        cmp eax, edi
        je L_check_005A0380
    L_call_005A0380:
        call ebp
    L_check_005A0380:
        cmp dword ptr [esp + 0x18], ebx
        je L_done_005A0380
        add dword ptr [esi], 1
        lea ecx, [esp + 0x14]
        call ext_00673C20
        jmp L_loop_005A0380
    L_done_005A0380:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x005A28A0] sub_005A28A0 (83 bytes)
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A28A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_loop_005A28A0:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_005A28A0
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_005A28A0
    L_inv1_005A28A0:
        call ebx
    L_ok1_005A28A0:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_005A28A0
        lea ecx, [esp + 0x14]
        call ext_00673C20
        test esi, esi
        jne L_skip2_005A28A0
        call ebx
    L_skip2_005A28A0:
        cmp edi, dword ptr [esi + 0x4]
        jne L_skip3_005A28A0
        call ebx
    L_skip3_005A28A0:
        mov eax, dword ptr [edi + 0x28]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        jmp L_loop_005A28A0
    L_done_005A28A0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x005A0200] sub_005A0200 (53 bytes)
extern "C" void ext_0059FDE0();
extern "C" __declspec(naked) void __fastcall fn_005A0200(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ecx
        call ext_0059FDE0
        add esp, 0x24
        ret
    }
}

// [0x005A0910] sub_005A0910 (86 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A0910(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_top_005A0910:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_005A0910
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_005A0910
    L_inv1_005A0910:
        call ebx
    L_ok1_005A0910:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_005A0910
        lea ecx, [esp + 0x14]
        call ext_00673C20
        test esi, esi
        jne L_s1_005A0910
        call ebx
    L_s1_005A0910:
        cmp edi, dword ptr [esi + 0x4]
        jne L_s2_005A0910
        call ebx
    L_s2_005A0910:
        mov ecx, dword ptr [edi + 0x28]
        test ecx, ecx
        je L_top_005A0910
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
        jmp L_top_005A0910
    L_done_005A0910:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x005AC360] sub_005AC360 (112 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005AC360(void* self, int edx_unused, const float* a, const float* b, const float* c, const float* d) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x28]
        fld dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x2c]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x38]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0x3c]
        ret 0x10
    }
}

// [0x005A0970] sub_005A0970 (94 bytes)
extern "C" void ext_00621B70();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A0970(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_loop_005A0970:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_005A0970
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_005A0970
    L_inv1_005A0970:
        call ebx
    L_ok1_005A0970:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_005A0970
        lea ecx, [esp + 0x14]
        call ext_00673C20
        test esi, esi
        jne L_skip2_005A0970
        call ebx
    L_skip2_005A0970:
        cmp edi, dword ptr [esi + 0x4]
        jne L_skip3_005A0970
        call ebx
    L_skip3_005A0970:
        mov edi, dword ptr [edi + 0x28]
        test edi, edi
        je L_loop_005A0970
        mov ecx, edi
        call ext_00621B70
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_loop_005A0970
    L_done_005A0970:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x005A71E0] sub_005A71E0 (118 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005A71E0(void* self) {
    __asm {
        push -1
        push 0x8a8684
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        lea ecx, [edi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [edi], 0x95e870
        call dword ptr [mem_00924FE8]
        lea esi, [edi + 0x20]
        mov ecx, esi
        mov byte ptr [esp + 0x14], 1
        call ext_0059F5C0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, edi
        mov dword ptr [esi + 0x8], 0
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005A1600] sub_005A1600 (59 bytes)
extern "C" void __cdecl ext_005B8EA0(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7);

extern "C" __declspec(naked) void __fastcall fn_005A1600(void* self) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0x5ec], 0
        je done
        push esi
        push edi
        lea eax, [ecx + 0x598]
        mov ecx, dword ptr [eax + 4]
        xor esi, esi
        push esi
        mov edx, 0x5b67a0
        push edx
        push ecx
        push eax
        mov edi, ecx
        mov edi, dword ptr [edi]
        push edi
        push eax
        lea eax, [esp + 0x20]
        push eax
        call ext_005B8EA0
        add esp, 0x1c
        pop edi
        pop esi
    done:
        add esp, 8
        ret
    }
}

// [0x005AC930] sub_005AC930 (132 bytes)
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AC930(void* self) {
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
        cmp byte ptr [eax + 0x29], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x29], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x29], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x29], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x29], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x29], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x29], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x29], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x005A0BB0] sub_005A0BB0 (49 bytes)
extern "C" void ext_0059E220();
extern "C" void ext_00673C20();
extern "C" void __cdecl fn_005A0BB0(int a, int b) {
    int c = a;
    if (b > 0) {
        do {
            ((void (__fastcall*)(int))ext_00673C20)(c);
        } while (--b > 0);
    }
    if (b < 0) {
        b = -b;
        do {
            ((void (__fastcall*)(int))ext_0059E220)(c);
        } while (--b != 0);
    }
}

// [0x005AC4D0] sub_005AC4D0 (125 bytes)
extern "C" void ext_00664A80();
extern "C" int mem_00A88884;
extern "C" int mem_00A88880;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __cdecl fn_005AC4D0() {
    __asm {
        push -0x1
        push offset ext_00664A80
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
        push esi
        mov dword ptr [esp + 0x4], 0x0
        mov eax, dword ptr [mem_00A88884]
        mov ecx, dword ptr [mem_00A88880]
        push 0x0
        push eax
        push ecx
        lea edx, [esp + 0x28]
        push edx
        mov dword ptr [esp + 0x20], 0x1
        call ext_00664A80
        mov esi, dword ptr [esp + 0x28]
        add esp, 0x10
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
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

// [0x005A7060] sub_005A7060 (162 bytes)
extern "C" void ext_00555470();

extern "C" __declspec(naked) void* __fastcall fn_005A7060(void* self) {
    __asm {
        push -1
        push 0x8a1a2a
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi + 0x4], 0x93bf24
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi], 0x95e844
        mov dword ptr [esi + 0x4], 0x95e810
        call dword ptr [mem_00924FE8]
        lea edi, [esi + 0x28]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 0x24], 0x95e808
        call ext_00555470
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x39], 1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], 0
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x14], 3
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0x50], 0
        pop edi
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

// [0x005A1710] sub_005A1710 (177 bytes)
extern "C" void ext_00647F30();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A1710(void* self) {
    __asm {
        sub esp, 0xc
        cmp dword ptr [ecx + 0x5ec], 0x0
        fldz
        fstp dword ptr [ecx + 0x4f4]
        mov dword ptr [esp], ecx
        je L_ret_005A1710
        mov eax, dword ptr [ecx + 0x59c]
        push ebp
        push esi
        lea ebp, [ecx + 0x598]
        push edi
        mov edi, dword ptr [eax]
        mov esi, ebp
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
        push ebx
    L_loop_005A1710:
        test esi, esi
        mov ebx, dword ptr [ebp + 0x4]
        je L_inv1_005A1710
        cmp esi, ebp
        je L_ok1_005A1710
    L_inv1_005A1710:
        call dword ptr [mem_00925134]
    L_ok1_005A1710:
        cmp edi, ebx
        je L_done_005A1710
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne L_ok2_005A1710
        call ebx
    L_ok2_005A1710:
        cmp edi, dword ptr [esi + 0x4]
        jne L_ok3_005A1710
        call ebx
    L_ok3_005A1710:
        mov ecx, dword ptr [edi + 0x28]
        cmp dword ptr [ecx + 0x158], 0x0
        je L_advance_005A1710
        cmp edi, dword ptr [esi + 0x4]
        jne L_ok4_005A1710
        call ebx
    L_ok4_005A1710:
        mov edx, dword ptr [edi + 0x28]
        mov eax, dword ptr [edx + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F30
        mov eax, dword ptr [esp + 0x10]
        fadd dword ptr [eax + 0x4f4]
        fstp dword ptr [eax + 0x4f4]
    L_advance_005A1710:
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp L_loop_005A1710
    L_done_005A1710:
        pop ebx
        pop edi
        pop esi
        pop ebp
    L_ret_005A1710:
        add esp, 0xc
        ret
    }
}

// [0x005A03C0] sub_005A03C0 (194 bytes)
extern "C" void ext_00673C20();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A03C0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8a16e1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x18]
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0x0
        mov edi, edi
    L_loop_005A03C0:
        mov ebx, dword ptr [ebp + 0x8]
        test ebx, ebx
        je L_inv1_005A03C0
        cmp ebx, dword ptr [ebp + 0x10]
        je L_ok1_005A03C0
    L_inv1_005A03C0:
        call dword ptr [mem_00925134]
    L_ok1_005A03C0:
        mov edi, dword ptr [ebp + 0xc]
        cmp edi, dword ptr [ebp + 0x14]
        je L_done_005A03C0
        test ebx, ebx
        jne L_skip2_005A03C0
        call dword ptr [mem_00925134]
    L_skip2_005A03C0:
        cmp edi, dword ptr [ebx + 0x4]
        jne L_skip3_005A03C0
        call dword ptr [mem_00925134]
    L_skip3_005A03C0:
        lea eax, [edi + 0xc]
        mov dword ptr [ebp - 0x18], esi
        mov dword ptr [ebp - 0x1c], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 0x1
        je L_skip4_005A03C0
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    L_skip4_005A03C0:
        add esi, 0x1c
        lea ecx, [ebp + 0x8]
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x18], esi
        call ext_00673C20
        jmp L_loop_005A03C0
    L_unwind_005A03C0:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x18]
        cmp esi, edi
        je L_throw_005A03C0
    L_dtor_005A03C0:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne L_dtor_005A03C0
    L_throw_005A03C0:
        push 0x0
        push 0x0
        call ext_006A6DD2
    L_done_005A03C0:
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

// [0x005A2CB0] sub_005A2CB0 (51 bytes)
extern "C" void ext_005A03C0();
extern "C" __declspec(naked) void __fastcall fn_005A2CB0(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x18]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ecx
        call ext_005A03C0
        add esp, 0x24
        ret 0x14
    }
}

// [0x005A1900] sub_005A1900 (194 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00673C20();
extern "C" void ext_0059B5A0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A1900(void* self) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x5a8]
        push ebx
        push ebp
        lea ebp, [ecx + 0x5a4]
        push esi
        push edi
        mov edi, dword ptr [eax]
        mov ebx, ebp
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], edi
        nop
    L_loop_005A1900:
        test ebx, ebx
        mov esi, dword ptr [ebp + 0x4]
        je short L_inv1_005A1900
        cmp ebx, ebp
        je short L_check_end_005A1900
    L_inv1_005A1900:
        call dword ptr [mem_00925134]
    L_check_end_005A1900:
        cmp edi, esi
        je short L_exit_005A1900
        test ebx, ebx
        mov esi, dword ptr [mem_00925134]
        jne short L_skip1_005A1900
        call esi
    L_skip1_005A1900:
        cmp edi, dword ptr [ebx + 0x4]
        jne short L_skip2_005A1900
        call esi
    L_skip2_005A1900:
        mov ecx, dword ptr [edi + 0x28]
        cmp byte ptr [ecx + 0x179], 0x0
        jne short L_advance_005A1900
        cmp edi, dword ptr [ebx + 0x4]
        jne short L_skip3_005A1900
        call esi
    L_skip3_005A1900:
        mov eax, dword ptr [edi + 0x28]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [edx + 0x24]
        call eax
        cmp edi, dword ptr [ebx + 0x4]
        mov esi, eax
        jne short L_skip4_005A1900
        call dword ptr [mem_00925134]
    L_skip4_005A1900:
        mov ecx, dword ptr [edi + 0x28]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x2c]
        add ecx, 0x4
        call eax
        fld dword ptr [eax + 0x30]
        add eax, 0x30
        fstp dword ptr [esi + 0x30]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x38]
    L_advance_005A1900:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
        jmp L_loop_005A1900
    L_exit_005A1900:
        call ext_00594000
        pop edi
        pop esi
        pop ebp
        mov ecx, eax
        pop ebx
        add esp, 0x8
        jmp ext_0059B5A0
    }
}

// [0x005A0F70] sub_005A0F70 (122 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_005A0F70(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push ebx
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x5a4]
        call ext_005DF5C0
        test eax, eax
        jne out_ret
        mov eax, dword ptr [esi + 0x160]
        mov edx, dword ptr [eax + 0x24]
        lea edi, [esi + 0x160]
        push ebx
        mov ecx, edi
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je not_equal
        test edi, edi
        jne ret_edi
    not_equal:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push ebx
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x58c]
        call ext_005DF5C0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    ret_edi:
        mov eax, edi
    out_ret:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x005A3F20] sub_005A3F20 (177 bytes)
extern "C" void ext_005DF5C0();
extern "C" void ext_00673C20();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A3F20(void* self) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x568]
        call ext_005DF5C0
        test eax, eax
        je loc_5a3fc7
        mov ecx, dword ptr [esi + 0x560]
        mov edi, dword ptr [ecx]
        lea ebp, [esi + 0x55c]
        mov esi, ebp
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
loc_5a3f64:
        test esi, esi
        mov ebx, dword ptr [ebp + 0x4]
        je loc_5a3f6f
        cmp esi, ebp
        je loc_5a3f75
loc_5a3f6f:
        call dword ptr [mem_00925134]
loc_5a3f75:
        cmp edi, ebx
        je loc_5a3fc7
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne loc_5a3f85
        call ebx
loc_5a3f85:
        cmp edi, dword ptr [esi + 0x4]
        jne loc_5a3f8c
        call ebx
loc_5a3f8c:
        mov ecx, dword ptr [edi + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x40]
        call eax
        cmp eax, 0x1
        je loc_5a3fb4
        cmp edi, dword ptr [esi + 0x4]
        jne loc_5a3fa2
        call ebx
loc_5a3fa2:
        mov ecx, dword ptr [edi + 0x28]
        mov ecx, dword ptr [ecx + 0x40]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0x3c]
        push eax
        call edx
loc_5a3fb4:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loc_5a3f64
loc_5a3fc7:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x005AC3D0] sub_005AC3D0 (252 bytes)
#include <string>
extern "C" void ext_00664B20();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A88880;
extern "C" int mem_00A88884;

extern "C" __declspec(naked) std::string* __fastcall fn_005AC3D0(void* self, int edx_unused, std::string* a1, const std::string* a2) {
    __asm {
        push -0x1
        push 0x8a289c
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
        sub esp, 0x20
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x3c]
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], ebx
        mov edi, dword ptr [esp + 0x3c]
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x38], ebx
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [mem_00A88880]
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x10]
        push ecx
        push esi
        mov dword ptr [esp + 0x3c], 0x1
        call ext_00664B20
        add esp, 0x8
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x40], al
        mov byte ptr [esp + 0x34], bl
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x40], bl
        je short PATH_B
        mov edx, dword ptr [mem_00A88884]
        mov eax, dword ptr [mem_00A88880]
        push ebx
        push edx
        push eax
        jmp short CALL_REPLACE
PATH_B:
        mov ecx, dword ptr [mem_00A88884]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x10]
        push edx
        push esi
        mov dword ptr [esp + 0x3c], 0x2
        call ext_00664B20
        add esp, 0x8
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x40], al
        mov byte ptr [esp + 0x34], bl
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x40], bl
        je short EPILOGUE
        mov eax, dword ptr [mem_00A88880]
        mov ecx, dword ptr [mem_00A88884]
        push ebx
        push eax
        push ecx
CALL_REPLACE:
        push edi
        call ext_00664A80
        add esp, 0x10
EPILOGUE:
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x2c
        ret 0x8
    }
}

// [0x005AC9C0] sub_005AC9C0 (286 bytes)
extern "C" int mem_008A28E8;
extern "C" int mem_0095F564;
extern "C" int mem_00B40640;
extern "C" void ext_006657F0();
extern "C" __declspec(naked) void __fastcall fn_005AC9C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push offset mem_008A28E8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0
        mov [esp+0x14], ebp
        call ext_006657F0
        mov dword ptr [ebp], offset mem_0095F564
        mov eax, [esp+0x68]
        mov [ebp+0x10], eax
        mov eax, [esp+0x6c]
        mov ecx, [esp+0x64]
        mov [ebp+0x14], ecx
        fld dword ptr [eax]
        fstp dword ptr [ebp+0x18]
        lea edi, [ebp+0x28]
        fld dword ptr [eax+4]
        lea ebx, [ebp+0x68]
        fstp dword ptr [ebp+0x1c]
        mov dword ptr [esp+0x5c], 0
        fld dword ptr [eax+8]
        fstp dword ptr [ebp+0x20]
        fld dword ptr [eax+0xc]
        fstp dword ptr [ebp+0x24]
        fld1
        fst dword ptr [edi]
        fldz
        fst dword ptr [edi+4]
        fst dword ptr [edi+8]
        fst dword ptr [edi+0xc]
        fst dword ptr [edi+0x10]
        fst dword ptr [edi+0x18]
        fst dword ptr [edi+0x1c]
        fst dword ptr [edi+0x20]
        fst dword ptr [edi+0x24]
        fst dword ptr [edi+0x2c]
        fst dword ptr [edi+0x30]
        fst dword ptr [edi+0x34]
        fst dword ptr [edi+0x38]
        fxch st(1)
        fst dword ptr [edi+0x14]
        fst dword ptr [edi+0x28]
        fst dword ptr [edi+0x3c]
        fst dword ptr [ebx]
        fst dword ptr [ebx+0x14]
        fst dword ptr [ebx+0x28]
        fstp dword ptr [ebx+0x3c]
        fst dword ptr [ebx+4]
        fst dword ptr [ebx+8]
        fst dword ptr [ebx+0xc]
        fst dword ptr [ebx+0x10]
        fst dword ptr [ebx+0x18]
        fst dword ptr [ebx+0x1c]
        fst dword ptr [ebx+0x20]
        fst dword ptr [ebx+0x24]
        fst dword ptr [ebx+0x2c]
        fst dword ptr [ebx+0x30]
        fst dword ptr [ebx+0x34]
        fstp dword ptr [ebx+0x38]
        mov eax, [ebp+0x14]
        mov edx, [eax+4]
        mov edx, [edx+0x10]
        lea ecx, [eax+4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        push 2
        lea eax, [esp+0x1c]
        push eax
        call edx
        mov esi, eax
        mov ecx, 0x10
        rep movsd
        mov eax, [ebp+0x14]
        lea ecx, [eax+4]
        mov eax, [ecx]
        mov edx, [eax+0x2c]
        call edx
        mov ecx, 0x10
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov ecx, [esp+0x54]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x50
        ret 0xc
    }
}

// [0x005AD060] sub_005AD060 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B428C0;
extern "C" int mem_00B428A4;

extern "C" __declspec(naked) void __fastcall fn_005AD060(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a293e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B428C0], al
        jne skip_init
        or dword ptr [mem_00B428C0], eax
        push 0xa85d18
        push offset mem_00B428A4
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91db00
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B428A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005A0240] sub_005A0240 (308 bytes)
extern "C" void ext_004E76B0();
extern "C" __declspec(naked) void __fastcall fn_005A0240(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebp
        sub eax, edi
        sar eax, 0x2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        lea eax, [ebp - 0x4]
        push eax
        push esi
        push edi
        call ext_004E76B0
        add esp, 0xc
        cmp edi, esi
        mov ecx, esi
        lea ebx, [esi + 0x4]
        jae loc_5a0285

    loc_5a0273:
        mov eax, dword ptr [ecx - 0x4]
        mov edx, dword ptr [ecx]
        cmp edx, eax
        ja loc_5a0285
        jb loc_5a0285
        add ecx, -0x4
        cmp edi, ecx
        jb loc_5a0273

    loc_5a0285:
        cmp ebx, ebp
        jae loc_5a029f
        mov edx, dword ptr [ecx]
        jmp loc_5a0290

        _emit 0x8d
        _emit 0x49
        _emit 0x00

    loc_5a0290:
        mov eax, dword ptr [ebx]
        cmp edx, eax
        ja loc_5a029f
        jb loc_5a029f
        add ebx, 0x4
        cmp ebx, ebp
        jb loc_5a0290

    loc_5a029f:
        mov eax, ebx
        mov edx, ecx

    loc_5a02a3:
        cmp eax, ebp
        jae loc_5a02c7

    loc_5a02a7:
        mov edi, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edi, esi
        ja loc_5a02c0
        jb loc_5a02c7
        mov esi, ebx
        mov ebp, dword ptr [esi]
        mov dword ptr [esi], edi
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [esp + 0x20]
        add ebx, 0x4

    loc_5a02c0:
        add eax, 0x4
        cmp eax, ebp
        jb loc_5a02a7

    loc_5a02c7:
        cmp edx, dword ptr [esp + 0x1c]
        jbe loc_5a02f6

        _emit 0x8d
        _emit 0x49
        _emit 0x00

    loc_5a02d0:
        mov esi, dword ptr [edx - 0x4]
        mov edi, dword ptr [ecx]
        cmp edi, esi
        ja loc_5a02e9
        jb loc_5a02f2
        mov edi, dword ptr [edx - 0x4]
        mov esi, dword ptr [ecx - 0x4]
        sub ecx, 0x4
        mov dword ptr [ecx], edi
        mov dword ptr [edx - 0x4], esi

    loc_5a02e9:
        add edx, -0x4
        cmp dword ptr [esp + 0x1c], edx
        jb loc_5a02d0

    loc_5a02f2:
        cmp edx, dword ptr [esp + 0x1c]

    loc_5a02f6:
        jne loc_5a032e
        cmp eax, ebp
        je loc_5a0365
        cmp ebx, eax
        je loc_5a0308
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ecx]
        mov dword ptr [ecx], edi
        mov dword ptr [ebx], esi

    loc_5a0308:
        mov edi, ecx
        mov ebp, dword ptr [edi]
        mov esi, eax
        mov dword ptr [esp + 0x10], ebp
        mov ebp, dword ptr [esi]
        mov dword ptr [edi], ebp
        mov edi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x20]
        add ebx, 0x4
        add ecx, 0x4
        add eax, 0x4
        mov dword ptr [esi], edi
        jmp loc_5a02a3

    loc_5a032e:
        sub edx, 0x4
        cmp eax, ebp
        jne loc_5a0355
        sub ecx, 0x4
        cmp edx, ecx
        je loc_5a0344
        mov edi, dword ptr [ecx]
        mov esi, dword ptr [edx]
        mov dword ptr [edx], edi
        mov dword ptr [ecx], esi

    loc_5a0344:
        mov edi, dword ptr [ebx - 0x4]
        mov esi, dword ptr [ecx]
        sub ebx, 0x4
        mov dword ptr [ecx], edi
        mov dword ptr [ebx], esi
        jmp loc_5a02a3

    loc_5a0355:
        mov esi, dword ptr [eax]
        mov edi, dword ptr [edx]
        mov dword ptr [eax], edi
        mov dword ptr [edx], esi
        add eax, 0x4
        jmp loc_5a02a3

    loc_5a0365:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        mov dword ptr [eax], ecx
        pop ebx
        pop ecx
        ret
    }
}

// [0x005A2DC0] sub_005A2DC0 (362 bytes)
extern "C" void ext_00536230();
extern "C" void ext_00586BE0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_005A2DC0(void* self) {
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, dword ptr [edi + 0x74]
        cmp     ebp, dword ptr [edi + 0x78]
        lea     ebx, [edi + 0x70]
        mov     dword ptr [esp + 0x14], edi
        jbe     loc_5A2DDE
        call    dword ptr [mem_00925134]
loc_5A2DDE:
        mov     dword ptr [esp + 0x1c], ebp
loc_5A2DE2:
        mov     esi, dword ptr [ebx + 0x8]
        cmp     dword ptr [ebx + 0x4], esi
        jbe     loc_5A2DF0
        call    dword ptr [mem_00925134]
loc_5A2DF0:
        cmp     ebx, ebx
        je      loc_5A2DFA
        call    dword ptr [mem_00925134]
loc_5A2DFA:
        cmp     ebp, esi
        je      loc_5A2EBF
        cmp     ebp, dword ptr [ebx + 0x8]
        jb      loc_5A2E0D
        call    dword ptr [mem_00925134]
loc_5A2E0D:
        mov     eax, dword ptr [edi + 0x88]
        cmp     dword ptr [edi + 0x84], eax
        lea     esi, [edi + 0x80]
        mov     dword ptr [esp + 0x10], eax
        jbe     loc_5A2E2B
        call    dword ptr [mem_00925134]
loc_5A2E2B:
        mov     ebp, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], ebp
        jbe     loc_5A2E39
        call    dword ptr [mem_00925134]
loc_5A2E39:
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     loc_5A2E47
        call    dword ptr [mem_00925134]
loc_5A2E47:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x30]
        push    esi
        push    ecx
        call    ext_00586BE0
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [eax + 0x4]
        add     esp, 0x18
        test    ecx, ecx
        je      loc_5A2E6A
        cmp     ecx, esi
        je      loc_5A2E70
loc_5A2E6A:
        call    dword ptr [mem_00925134]
loc_5A2E70:
        mov     edx, dword ptr [esp + 0x10]
        cmp     edi, edx
        je      loc_5A2E9E
        mov     eax, dword ptr [esi + 0x8]
        sub     eax, edx
        sar     eax, 2
        test    eax, eax
        lea     ecx, [4*eax]
        lea     ebp, [ecx + edi]
        jle     loc_5A2E9B
        push    ecx
        push    edx
        push    ecx
        push    edi
        call    dword ptr [mem_009251EC]
        add     esp, 0x10
loc_5A2E9B:
        mov     dword ptr [esi + 0x8], ebp
loc_5A2E9E:
        mov     edx, dword ptr [esp + 0x1c]
        cmp     edx, dword ptr [ebx + 0x8]
        jb      loc_5A2EAD
        call    dword ptr [mem_00925134]
loc_5A2EAD:
        add     dword ptr [esp + 0x1c], 4
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x14]
        jmp     loc_5A2DE2
loc_5A2EBF:
        mov     ebp, dword ptr [ebx + 0x8]
        cmp     dword ptr [ebx + 0x4], ebp
        mov     edi, dword ptr [mem_00925134]
        jbe     loc_5A2ECF
        call    edi
loc_5A2ECF:
        mov     esi, dword ptr [ebx + 0x4]
        cmp     esi, dword ptr [ebx + 0x8]
        jbe     loc_5A2ED9
        call    edi
loc_5A2ED9:
        push    ebp
        push    ebx
        push    esi
        push    ebx
        mov     ecx, ebx
        call    ext_00536230
        mov     esi, dword ptr [ebx + 0x8]
        cmp     dword ptr [ebx + 0x4], esi
        jbe     loc_5A2EEE
        call    edi
loc_5A2EEE:
        mov     ebp, dword ptr [ebx + 0x4]
        cmp     ebp, dword ptr [ebx + 0x8]
        jbe     loc_5A2EF8
        call    edi
loc_5A2EF8:
        cmp     ebp, esi
        je      loc_5A2F22
        mov     eax, dword ptr [ebx + 0x8]
        sub     eax, esi
        sar     eax, 2
        test    eax, eax
        lea     ecx, [4*eax]
        lea     edi, [ecx + ebp]
        jle     loc_5A2F1F
        push    ecx
        push    esi
        push    ecx
        push    ebp
        call    dword ptr [mem_009251EC]
        add     esp, 0x10
loc_5A2F1F:
        mov     dword ptr [ebx + 0x8], edi
loc_5A2F22:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}

// [0x005A1150] sub_005A1150 (339 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A1150(void* self) {
    __asm {
        sub     esp, 0x10
        push    edi
        mov     edi, ecx
        cmp     dword ptr [edi + 0x5ec], 0x0
        mov     dword ptr [esp + 0x8], edi
        je      L_ret_5A1150
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, 0x7
        mov     eax, dword ptr [edi + 0x5f0]
        mov     dword ptr [esp + 0x4], eax
        je      L_skip_5A1180
        mov     dword ptr [esp + 0x4], ecx
        mov     eax, ecx
L_skip_5A1180:
        cmp     eax, dword ptr [edi + 0x5f4]
        je      L_ret_5A1150
        mov     edx, dword ptr [edi + 0x160]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x28]
        lea     ecx, [edi + 0x160]
        push    esi
        push    eax
        mov     eax, dword ptr [edx + 0xfc]
        call    eax
        mov     ecx, dword ptr [edi + 0x590]
        mov     eax, dword ptr [ecx]
        add     edi, 0x58c
        mov     esi, edi
        mov     ebx, eax
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
L_loop1_5A11C3:
        test    esi, esi
        mov     ebp, dword ptr [edi + 0x4]
        je      L_inv1_5A11CE
        cmp     esi, edi
        je      L_chk1_5A11D4
L_inv1_5A11CE:
        call    dword ptr [mem_00925134]
L_chk1_5A11D4:
        cmp     ebx, ebp
        je      L_part2_5A1217
        test    esi, esi
        jne     L_ok1_5A11E2
        call    dword ptr [mem_00925134]
L_ok1_5A11E2:
        cmp     ebx, dword ptr [esi + 0x4]
        jne     L_ok2_5A11ED
        call    dword ptr [mem_00925134]
L_ok2_5A11ED:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0xfc]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    edx
        lea     ecx, [esp + 0x18]
        call    ext_00673C20
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_loop1_5A11C3
L_part2_5A1217:
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x5f4]
        jle     L_store_5A1293
        cmp     eax, 0x1
        jle     L_store_5A1293
        mov     eax, dword ptr [edi + 0x59c]
        mov     eax, dword ptr [eax]
        add     edi, 0x598
        mov     esi, edi
        mov     ebp, eax
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebp
L_loop2_5A1246:
        test    esi, esi
        mov     ebx, dword ptr [edi + 0x4]
        je      L_inv2_5A1251
        cmp     esi, edi
        je      L_chk2_5A1257
L_inv2_5A1251:
        call    dword ptr [mem_00925134]
L_chk2_5A1257:
        cmp     ebp, ebx
        je      L_after2_5A128B
        test    esi, esi
        jne     L_ok3_5A1265
        call    dword ptr [mem_00925134]
L_ok3_5A1265:
        cmp     ebp, dword ptr [esi + 0x4]
        jne     L_ok4_5A1270
        call    dword ptr [mem_00925134]
L_ok4_5A1270:
        mov     ecx, dword ptr [ebp + 0x28]
        call    ext_005BF5F0
        lea     ecx, [esp + 0x18]
        call    ext_00673C20
        mov     ebp, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_loop2_5A1246
L_after2_5A128B:
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x14]
L_store_5A1293:
        pop     esi
        pop     ebp
        mov     dword ptr [edi + 0x5f4], eax
        pop     ebx
L_ret_5A1150:
        pop     edi
        add     esp, 0x10
        ret     0x8
    }
}

// [0x005ABD70] sub_005ABD70 (175 bytes)
extern "C" void ext_0058F200();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_005ABD70(void* self) {
    __asm {
        push    -1
        push    0x8A2518
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x8], esi
        call    ext_0058F200
        mov     dword ptr [esi + 0x150], 0x928EAC
        fldz
        mov     dword ptr [esi], 0x95F3AC
        mov     dword ptr [esi + 0x4], 0x95F364
        mov     dword ptr [esi + 0x8], 0x95F324
        mov     dword ptr [esi + 0xC], 0x95F2D4
        mov     dword ptr [esi + 0x150], 0x95F2C0
        xor     ebx, ebx
        mov     dword ptr [esi + 0x154], ebx
        fst     dword ptr [esi + 0x160]
        fst     dword ptr [esi + 0x15C]
        lea     ecx, [esi + 0x170]
        fst     dword ptr [esi + 0x158]
        mov     dword ptr [esp + 0x14], ebx
        fst     dword ptr [esi + 0x16C]
        fst     dword ptr [esi + 0x168]
        fstp    dword ptr [esi + 0x164]
        call    dword ptr [mem_00924FE8]
        mov     ecx, dword ptr [esp + 0xC]
        mov     byte ptr [esi + 0x18C], bl
        mov     dword ptr [esi + 0x190], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x005AFB30] sub_005AFB30 (575 bytes)
extern "C" void ext_0046A3C0();
extern "C" void ext_0059F5C0();
extern "C" void ext_005AD180();
extern "C" void ext_00697290();
extern "C" __declspec(naked) void* __fastcall fn_005AFB30(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push    -1
        push    0x8a2c7a
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebp, [esi + 4]
        push    edi
        mov     ecx, ebp
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esi], eax
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     bl, 1
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        xor     edi, edi
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x10]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], edi
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x1c]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], bl
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x28]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 2
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x34]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 3
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        mov     byte ptr [esp + 0x1c], 4
        lea     ebp, [esi + 0x40]
        mov     ecx, ebp
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x4c]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 5
        call    ext_005AD180
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x29], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x5c]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 6
        mov     dword ptr [esi + 0x58], 0x95f6c4
        call    ext_0059F5C0
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x2d], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        mov     dword ptr [esi + 0x6c], edi
        mov     dword ptr [esi + 0x70], edi
        mov     dword ptr [esi + 0x74], edi
        mov     dword ptr [esi + 0x7c], edi
        mov     dword ptr [esi + 0x80], edi
        mov     dword ptr [esi + 0x84], edi
        lea     ebp, [esi + 0x88]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 9
        call    ext_0046A3C0
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x11], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        lea     ebp, [esi + 0x94]
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1c], 0xa
        call    ext_0046A3C0
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + 0x11], bl
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [ebp + 8], edi
        mov     edi, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        mov     byte ptr [esp + 0x1c], 0xb
        push    edi
        push    ecx
        lea     ecx, [esi + 0xa0]
        call    ext_00697290
        fld1
        mov     edx, dword ptr [esp + 0x30]
        fstp    dword ptr [esi + 0x200]
        fldz
        mov     ecx, dword ptr [esp + 0x14]
        fst     dword ptr [esi + 0x204]
        mov     eax, esi
        fst     dword ptr [esi + 0x208]
        fstp    dword ptr [esi + 0x20c]
        mov     dword ptr [esi + 0x210], edi
        pop     edi
        mov     dword ptr [esi + 0x214], edx
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x005A0D10] sub_005A0D10 (602 bytes)
extern "C" void ext_00665010();
extern "C" void ext_00673C20();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_005A0D10(void* self) {
    __asm {
        push    -0x1
        push    0x8a6bc4
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x48
        mov     eax, dword ptr [esp + 0x58]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        xor     esi, esi
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x14], esi
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     dword ptr [esp + 0x64], esi
        call    ext_00665010
        mov     eax, dword ptr [ebp + 0x5a8]
        mov     eax, dword ptr [eax]
        add     esp, 0x4
        add     ebp, 0x5a4
        mov     esi, ebp
        mov     edi, eax
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
    L_5A0D72:
        test    esi, esi
        mov     ebx, dword ptr [ebp + 0x4]
        je      L_5A0D7D
        cmp     esi, ebp
        je      L_5A0D83
    L_5A0D7D:
        call    dword ptr [mem_00925134]
    L_5A0D83:
        cmp     edi, ebx
        je      L_5A0E0C
        test    esi, esi
        mov     ebx, dword ptr [mem_00925134]
        jne     L_5A0D97
        call    ebx
    L_5A0D97:
        cmp     edi, dword ptr [esi + 0x4]
        jne     L_5A0D9E
        call    ebx
    L_5A0D9E:
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x24]
        call    eax
        push    eax
        lea     ecx, [esp + 0x40]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     byte ptr [esp + 0x64], 0x1
        call    ext_00665010
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        call    dword ptr [mem_00924FC4]
        add     esp, 0xc
        test    al, al
        je      L_5A0DE7
        cmp     edi, dword ptr [esi + 0x4]
        jne     L_5A0DE0
        call    ebx
    L_5A0DE0:
        mov     ecx, dword ptr [edi + 0x28]
        mov     dword ptr [esp + 0x10], ecx
    L_5A0DE7:
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x60], 0x0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x18]
        call    ext_00673C20
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_5A0D72
    L_5A0E0C:
        cmp     dword ptr [esp + 0x10], 0x0
        jne     L_5A0F3F
        mov     ebx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x160]
        mov     eax, dword ptr [edx + 0x24]
        lea     esi, [ebx + 0x160]
        mov     ecx, esi
        call    eax
        push    eax
        lea     ecx, [esp + 0x40]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     byte ptr [esp + 0x64], 0x2
        call    ext_00665010
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        call    dword ptr [mem_00924FC4]
        add     esp, 0xc
        test    al, al
        je      L_5A0E63
        mov     dword ptr [esp + 0x10], esi
    L_5A0E63:
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x60], 0x0
        call    dword ptr [mem_00924FF4]
        cmp     dword ptr [esp + 0x10], 0x0
        jne     L_5A0F3F
        mov     eax, dword ptr [ebx + 0x590]
        mov     eax, dword ptr [eax]
        add     ebx, 0x58c
        mov     esi, ebx
        mov     edi, eax
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
    L_5A0E97:
        test    esi, esi
        mov     ebp, dword ptr [ebx + 0x4]
        je      L_5A0EA2
        cmp     esi, ebx
        je      L_5A0EA8
    L_5A0EA2:
        call    dword ptr [mem_00925134]
    L_5A0EA8:
        cmp     edi, ebp
        je      L_5A0F3F
        test    esi, esi
        mov     ebp, dword ptr [mem_00925134]
        jne     L_5A0EBC
        call    ebp
    L_5A0EBC:
        cmp     edi, dword ptr [esi + 0x4]
        jne     L_5A0EC3
        call    ebp
    L_5A0EC3:
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x24]
        call    eax
        push    eax
        lea     ecx, [esp + 0x40]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     byte ptr [esp + 0x64], 0x3
        call    ext_00665010
        add     esp, 0x4
        push    eax
        lea     ecx, [esp + 0x40]
        call    dword ptr [mem_00924FDC]
        lea     edx, [esp + 0x3c]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    dword ptr [mem_00924FC4]
        add     esp, 0x8
        test    al, al
        je      L_5A0F1A
        cmp     edi, dword ptr [esi + 0x4]
        jne     L_5A0F13
        call    ebp
    L_5A0F13:
        mov     ecx, dword ptr [edi + 0x28]
        mov     dword ptr [esp + 0x10], ecx
    L_5A0F1A:
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x60], 0x0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x18]
        call    ext_00673C20
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_5A0E97
    L_5A0F3F:
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x60], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x58]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x54
        ret     0x4
    }
}

extern "C" void ext_0046FF90();
extern "C" void ext_004EF730();
extern "C" void ext_00553E80();
extern "C" void ext_0059DE00();
extern "C" void ext_00667030();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// [0x005A2900] sub_005A2900 (709 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A2900(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x39], 0x0
        push ebp
        mov ebp, ecx
        je L_5A297E
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

    L_5A297E:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00667030
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x39], 0x0
        je L_5A299D
        mov edi, dword ptr [ebx + 0x8]
        jmp L_5A29B5

    L_5A299D:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x39], 0x0
        je L_5A29AA
        mov edi, eax
        jmp L_5A29B5

    L_5A29AA:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_5A2A20

    L_5A29B5:
        cmp byte ptr [edi + 0x39], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_5A29C1
        mov dword ptr [edi + 0x4], esi

    L_5A29C1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5A29CE
        mov dword ptr [eax + 0x4], edi
        jmp L_5A29D9

    L_5A29CE:
        cmp dword ptr [esi], ebx
        jne L_5A29D6
        mov dword ptr [esi], edi
        jmp L_5A29D9

    L_5A29D6:
        mov dword ptr [esi + 0x8], edi

    L_5A29D9:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_5A29F9
        cmp byte ptr [edi + 0x39], 0x0
        je L_5A29EE
        mov eax, esi
        jmp L_5A29F7

    L_5A29EE:
        push edi
        call ext_0059DE00
        add esp, 0x4

    L_5A29F7:
        mov dword ptr [ebx], eax

    L_5A29F9:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_5A2A77
        cmp byte ptr [edi + 0x39], 0x0
        je L_5A2A12
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_5A2A77

    L_5A2A12:
        push edi
        call ext_00553E80
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_5A2A77

    L_5A2A20:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_5A2A30
        mov esi, ecx
        jmp L_5A2A4A

    L_5A2A30:
        cmp byte ptr [edi + 0x39], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_5A2A3C
        mov dword ptr [edi + 0x4], esi

    L_5A2A3C:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx

    L_5A2A4A:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5A2A57
        mov dword ptr [eax + 0x4], ecx
        jmp L_5A2A65

    L_5A2A57:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_5A2A62
        mov dword ptr [eax], ecx
        jmp L_5A2A65

    L_5A2A62:
        mov dword ptr [eax + 0x8], ecx

    L_5A2A65:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x38]
        mov al, byte ptr [ecx + 0x38]
        mov byte ptr [ecx + 0x38], dl
        mov byte ptr [ebx + 0x38], al

    L_5A2A77:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x38], bl
        jne L_5A2B78
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_5A2B75

    L_5A2A92:
        cmp byte ptr [edi + 0x38], bl
        jne L_5A2B75
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_5A2B04
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x38], 0x0
        jne L_5A2ABC
        mov byte ptr [eax + 0x38], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x38], 0x0
        call ext_0046FF90
        mov eax, dword ptr [esi + 0x8]

    L_5A2ABC:
        cmp byte ptr [eax + 0x39], 0x0
        jne L_5A2B34
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x38], bl
        jne L_5A2AD1
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x38], bl
        je L_5A2B30

    L_5A2AD1:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x38], bl
        jne L_5A2AEB
        mov byte ptr [edx + 0x38], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x38], 0x0
        call ext_004EF730
        mov eax, dword ptr [esi + 0x8]

    L_5A2AEB:
        mov cl, byte ptr [esi + 0x38]
        mov byte ptr [eax + 0x38], cl
        mov byte ptr [esi + 0x38], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x38], bl
        call ext_0046FF90
        jmp L_5A2B75

    L_5A2B04:
        cmp byte ptr [eax + 0x38], 0x0
        jne L_5A2B1B
        mov byte ptr [eax + 0x38], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x38], 0x0
        call ext_004EF730
        mov eax, dword ptr [esi]

    L_5A2B1B:
        cmp byte ptr [eax + 0x39], 0x0
        jne L_5A2B34
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x38], bl
        jne L_5A2B47
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x38], bl
        jne L_5A2B47

    L_5A2B30:
        mov byte ptr [eax + 0x38], 0x0

    L_5A2B34:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_5A2A92
        jmp L_5A2B75

    L_5A2B47:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x38], bl
        jne L_5A2B5F
        mov byte ptr [edx + 0x38], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x38], 0x0
        call ext_0046FF90
        mov eax, dword ptr [esi]

    L_5A2B5F:
        mov cl, byte ptr [esi + 0x38]
        mov byte ptr [eax + 0x38], cl
        mov byte ptr [esi + 0x38], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x38], bl
        call ext_004EF730

    L_5A2B75:
        mov byte ptr [edi + 0x38], bl

    L_5A2B78:
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
        jbe L_5A2BA2
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax

    L_5A2BA2:
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

extern "C" void ext_005AC820();
extern "C" void ext_005AC840();
extern "C" void ext_005AC860();
extern "C" void ext_005AC8C0();
extern "C" void ext_005ACFC0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// [0x005ADE30] sub_005ADE30 (709 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ADE30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x29], 0x0
        push ebp
        mov ebp, ecx
        je L_5ADEAE
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
L_5ADEAE:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_005AC8C0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x29], 0x0
        je L_5ADECD
        mov edi, dword ptr [ebx + 0x8]
        jmp L_5ADEE5
L_5ADECD:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x29], 0x0
        je L_5ADEDA
        mov edi, eax
        jmp L_5ADEE5
L_5ADEDA:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_5ADF50
L_5ADEE5:
        cmp byte ptr [edi + 0x29], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_5ADEF1
        mov dword ptr [edi + 0x4], esi
L_5ADEF1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5ADEFE
        mov dword ptr [eax + 0x4], edi
        jmp L_5ADF09
L_5ADEFE:
        cmp dword ptr [esi], ebx
        jne L_5ADF06
        mov dword ptr [esi], edi
        jmp L_5ADF09
L_5ADF06:
        mov dword ptr [esi + 0x8], edi
L_5ADF09:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_5ADF29
        cmp byte ptr [edi + 0x29], 0x0
        je L_5ADF1E
        mov eax, esi
        jmp L_5ADF27
L_5ADF1E:
        push edi
        call ext_005AC840
        add esp, 0x4
L_5ADF27:
        mov dword ptr [ebx], eax
L_5ADF29:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_5ADFA7
        cmp byte ptr [edi + 0x29], 0x0
        je L_5ADF42
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_5ADFA7
L_5ADF42:
        push edi
        call ext_005AC820
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_5ADFA7
L_5ADF50:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_5ADF60
        mov esi, ecx
        jmp L_5ADF7A
L_5ADF60:
        cmp byte ptr [edi + 0x29], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_5ADF6C
        mov dword ptr [edi + 0x4], esi
L_5ADF6C:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
L_5ADF7A:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5ADF87
        mov dword ptr [eax + 0x4], ecx
        jmp L_5ADF95
L_5ADF87:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_5ADF92
        mov dword ptr [eax], ecx
        jmp L_5ADF95
L_5ADF92:
        mov dword ptr [eax + 0x8], ecx
L_5ADF95:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x28]
        mov al, byte ptr [ecx + 0x28]
        mov byte ptr [ecx + 0x28], dl
        mov byte ptr [ebx + 0x28], al
L_5ADFA7:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x28], bl
        jne L_5AE0A8
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_5AE0A5
L_5ADFC2:
        cmp byte ptr [edi + 0x28], bl
        jne L_5AE0A5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_5AE034
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x28], 0x0
        jne L_5ADFEC
        mov byte ptr [eax + 0x28], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x28], 0x0
        call ext_005ACFC0
        mov eax, dword ptr [esi + 0x8]
L_5ADFEC:
        cmp byte ptr [eax + 0x29], 0x0
        jne L_5AE064
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x28], bl
        jne L_5AE001
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x28], bl
        je L_5AE060
L_5AE001:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x28], bl
        jne L_5AE01B
        mov byte ptr [edx + 0x28], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x28], 0x0
        call ext_005AC860
        mov eax, dword ptr [esi + 0x8]
L_5AE01B:
        mov cl, byte ptr [esi + 0x28]
        mov byte ptr [eax + 0x28], cl
        mov byte ptr [esi + 0x28], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x28], bl
        call ext_005ACFC0
        jmp L_5AE0A5
L_5AE034:
        cmp byte ptr [eax + 0x28], 0x0
        jne L_5AE04B
        mov byte ptr [eax + 0x28], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x28], 0x0
        call ext_005AC860
        mov eax, dword ptr [esi]
L_5AE04B:
        cmp byte ptr [eax + 0x29], 0x0
        jne L_5AE064
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x28], bl
        jne L_5AE077
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x28], bl
        jne L_5AE077
L_5AE060:
        mov byte ptr [eax + 0x28], 0x0
L_5AE064:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_5ADFC2
        jmp L_5AE0A5
L_5AE077:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x28], bl
        jne L_5AE08F
        mov byte ptr [edx + 0x28], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x28], 0x0
        call ext_005ACFC0
        mov eax, dword ptr [esi]
L_5AE08F:
        mov cl, byte ptr [esi + 0x28]
        mov byte ptr [eax + 0x28], cl
        mov byte ptr [esi + 0x28], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x28], bl
        call ext_005AC860
L_5AE0A5:
        mov byte ptr [edi + 0x28], bl
L_5AE0A8:
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
        jbe L_5AE0D2
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
L_5AE0D2:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc    }
}


// [0x005AE1B0] sub_005AE1B0 (709 bytes)
extern "C" void ext_00476B80();
extern "C" void ext_00476EC0();
extern "C" void ext_0055E8C0();
extern "C" void ext_006244E0();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AE1B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x2d], 0x0
        push ebp
        mov ebp, ecx
        je L_5AE22E
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
    L_5AE22E:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00673C20
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x2d], 0x0
        je L_5AE24D
        mov edi, dword ptr [ebx + 0x8]
        jmp L_5AE265
    L_5AE24D:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x2d], 0x0
        je L_5AE25A
        mov edi, eax
        jmp L_5AE265
    L_5AE25A:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_5AE2D0
    L_5AE265:
        cmp byte ptr [edi + 0x2d], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_5AE271
        mov dword ptr [edi + 0x4], esi
    L_5AE271:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5AE27E
        mov dword ptr [eax + 0x4], edi
        jmp L_5AE289
    L_5AE27E:
        cmp dword ptr [esi], ebx
        jne L_5AE286
        mov dword ptr [esi], edi
        jmp L_5AE289
    L_5AE286:
        mov dword ptr [esi + 0x8], edi
    L_5AE289:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_5AE2A9
        cmp byte ptr [edi + 0x2d], 0x0
        je L_5AE29E
        mov eax, esi
        jmp L_5AE2A7
    L_5AE29E:
        push edi
        call ext_0055E8C0
        add esp, 0x4
    L_5AE2A7:
        mov dword ptr [ebx], eax
    L_5AE2A9:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_5AE327
        cmp byte ptr [edi + 0x2d], 0x0
        je L_5AE2C2
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_5AE327
    L_5AE2C2:
        push edi
        call ext_00476B80
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_5AE327
    L_5AE2D0:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_5AE2E0
        mov esi, ecx
        jmp L_5AE2FA
    L_5AE2E0:
        cmp byte ptr [edi + 0x2d], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_5AE2EC
        mov dword ptr [edi + 0x4], esi
    L_5AE2EC:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_5AE2FA:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_5AE307
        mov dword ptr [eax + 0x4], ecx
        jmp L_5AE315
    L_5AE307:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_5AE312
        mov dword ptr [eax], ecx
        jmp L_5AE315
    L_5AE312:
        mov dword ptr [eax + 0x8], ecx
    L_5AE315:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x2c]
        mov al, byte ptr [ecx + 0x2c]
        mov byte ptr [ecx + 0x2c], dl
        mov byte ptr [ebx + 0x2c], al
    L_5AE327:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x2c], bl
        jne L_5AE428
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_5AE425
    L_5AE342:
        cmp byte ptr [edi + 0x2c], bl
        jne L_5AE425
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_5AE3B4
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x2c], 0x0
        jne L_5AE36C
        mov byte ptr [eax + 0x2c], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x2c], 0x0
        call ext_00476EC0
        mov eax, dword ptr [esi + 0x8]
    L_5AE36C:
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_5AE3E4
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x2c], bl
        jne L_5AE381
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x2c], bl
        je L_5AE3E0
    L_5AE381:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_5AE39B
        mov byte ptr [edx + 0x2c], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x2c], 0x0
        call ext_006244E0
        mov eax, dword ptr [esi + 0x8]
    L_5AE39B:
        mov cl, byte ptr [esi + 0x2c]
        mov byte ptr [eax + 0x2c], cl
        mov byte ptr [esi + 0x2c], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x2c], bl
        call ext_00476EC0
        jmp L_5AE425
    L_5AE3B4:
        cmp byte ptr [eax + 0x2c], 0x0
        jne L_5AE3CB
        mov byte ptr [eax + 0x2c], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x2c], 0x0
        call ext_006244E0
        mov eax, dword ptr [esi]
    L_5AE3CB:
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_5AE3E4
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x2c], bl
        jne L_5AE3F7
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_5AE3F7
    L_5AE3E0:
        mov byte ptr [eax + 0x2c], 0x0
    L_5AE3E4:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_5AE342
        jmp L_5AE425
    L_5AE3F7:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_5AE40F
        mov byte ptr [edx + 0x2c], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x2c], 0x0
        call ext_00476EC0
        mov eax, dword ptr [esi]
    L_5AE40F:
        mov cl, byte ptr [esi + 0x2c]
        mov byte ptr [eax + 0x2c], cl
        mov byte ptr [esi + 0x2c], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x2c], bl
        call ext_006244E0
    L_5AE425:
        mov byte ptr [edi + 0x2c], bl
    L_5AE428:
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
        jbe L_5AE452
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_5AE452:
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

// [0x005A3FE0] sub_005A3FE0 (358 bytes)
extern "C" void ext_005AE1B0();
extern "C" void ext_006239A0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_005A3FE0(void* self) {
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x560]
        mov     ebp, dword ptr [eax]
        push    esi
        lea     esi, [ebx + 0x55c]
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], esi
L_store:
        mov     dword ptr [esp + 0x18], ebp
        jmp     L_head
        _emit   0x8d
        _emit   0xa4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
L_head:
        test    esi, esi
        mov     edi, dword ptr [ebx + 0x560]
        lea     eax, [ebx + 0x55c]
        je      L_chk1
        cmp     esi, eax
        je      L_chk2
L_chk1:
        call    dword ptr [mem_00925134]
L_chk2:
        cmp     ebp, edi
        je      L_end
        test    esi, esi
        jne     L_chk3
        call    dword ptr [mem_00925134]
L_chk3:
        cmp     ebp, dword ptr [esi + 0x4]
        jne     L_chk4
        call    dword ptr [mem_00925134]
L_chk4:
        mov     eax, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, 0x20
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC4]
        add     esp, 0x8
        test    al, al
        je      L_fail
        mov     edx, dword ptr [ebx + 0x56c]
        mov     eax, dword ptr [edx]
        add     ebx, 0x568
        mov     esi, ebx
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], eax
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
L_inner:
        test    esi, esi
        mov     edi, dword ptr [ebx + 0x4]
        je      L_i1
        cmp     esi, ebx
        je      L_i2
L_i1:
        call    dword ptr [mem_00925134]
L_i2:
        cmp     dword ptr [esp + 0x20], edi
        je      L_else
        mov     eax, dword ptr [esp + 0x14]
        cmp     ebp, dword ptr [eax + 0x4]
        jne     L_i3
        call    dword ptr [mem_00925134]
L_i3:
        test    esi, esi
        lea     edi, [ebp + 0xc]
        jne     L_i4
        call    dword ptr [mem_00925134]
L_i4:
        mov     ecx, dword ptr [esp + 0x20]
        cmp     ecx, dword ptr [esi + 0x4]
        jne     L_i5
        call    dword ptr [mem_00925134]
L_i5:
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [edx + 0x28]
        push    edi
        call    ext_006239A0
        lea     ecx, [esp + 0x1c]
        call    ext_00673C20
        mov     esi, dword ptr [esp + 0x1c]
        jmp     L_inner
L_else:
        mov     esi, dword ptr [esp + 0x14]
        cmp     ebp, dword ptr [esi + 0x4]
        jne     L_e1
        call    dword ptr [mem_00925134]
L_e1:
        mov     ecx, dword ptr [ebp + 0x28]
        test    ecx, ecx
        je      L_e2
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    0x1
        call    edx
L_e2:
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x2c]
        add     esi, 0x55c
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        mov     ecx, dword ptr [esi + 0x4]
        mov     ebp, dword ptr [ecx]
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], esi
        jmp     L_store
L_fail:
        lea     ecx, [esp + 0x14]
        call    ext_00673C20
        mov     ebp, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        jmp     L_head
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    }
}

// [0x005A1B20] sub_005A1B20 (125 bytes)
extern "C" void ext_0059E060();
extern "C" void ext_005E1760();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A1B20(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        call ext_0059E060
        test al, al
        je L_ret
        mov eax, dword ptr [esi + 0x5a8]
        mov eax, dword ptr [eax]
        push ebp
        push edi
        lea edi, [esi + 0x5a4]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ebp
        push ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_inv1
        cmp esi, edi
        je L_ok1
    L_inv1:
        call dword ptr [mem_00925134]
    L_ok1:
        cmp ebp, ebx
        je L_done
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov ecx, dword ptr [ebp + 0x28]
        call ext_005E1760
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop
    L_done:
        pop ebx
        pop edi
        pop ebp
    L_ret:
        pop esi
        add esp, 8
        ret
    }
}

extern "C" void ext_005A12B0();
extern "C" void ext_00624630();

// [0x005A13C0] sub_005A13C0 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A13C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x5ec], 0
        je done
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_005A12B0
        mov ecx, dword ptr [esi + 0x5ec]
        call ext_00624630
    done:
        pop esi
        ret 4
    }
}

extern "C" void ext_005AEF00();

// [0x005AF8B0] sub_005AF8B0 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AF8B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        cmp eax, 2
        jne check_3
        lea eax, [ecx + 0x10]
        lea edx, [ecx + 0x04]
        push eax
        push edx
        call ext_005AEF00
        ret
    check_3:
        cmp eax, 3
        jne done
        lea eax, [ecx + 0x04]
        lea edx, [ecx + 0x10]
        push eax
        push edx
        call ext_005AEF00
    done:
        ret
    }
}

// [0x005A1490] sub_005A1490 (153 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00A9EE30;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A1490(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x57c], 0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [mem_00A9EE30]
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        push edi
        push eax
        call ext_006404E0
        mov ecx, dword ptr [esi + 0x578]
        lea edi, [esi + 0x574]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [ecx]
        mov esi, edi
        mov ebx, eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ebx
        push ebp
    loc_5A14D3:
        test esi, esi
        mov ebp, dword ptr [edi + 0x4]
        je loc_5A14DE
        cmp esi, edi
        je loc_5A14E4
    loc_5A14DE:
        call dword ptr [mem_00925134]
    loc_5A14E4:
        cmp ebx, ebp
        je loc_5A151F
        test esi, esi
        jne loc_5A14F2
        call dword ptr [mem_00925134]
    loc_5A14F2:
        cmp ebx, dword ptr [esi + 0x4]
        jne loc_5A14FD
        call dword ptr [mem_00925134]
    loc_5A14FD:
        mov ecx, dword ptr [ebx + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0xc]
        push eax
        call edx
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loc_5A14D3
    loc_5A151F:
        pop ebp
        pop edi
        pop ebx
    loc_5A1522:
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x005A09D0] sub_005A09D0 (228 bytes)
extern "C" __declspec(naked) void* __cdecl fn_005A09D0(void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, dword ptr [esp + 14h]
        cmp dword ptr [esi + 8], 0
        jne L5A09D0_1
        mov eax, 0b53b30h
        pop esi
        add esp, 0ch
        ret
L5A09D0_1:
        mov eax, dword ptr [esp + 1ch]
        test eax, eax
        push ebx
        push ebp
        push edi
        je L5A09D0_2
        mov ecx, dword ptr [esp + 24h]
        push eax
        call ext_006404E0
        mov ebx, eax
        jmp L5A09D0_3
L5A09D0_2:
        mov ebx, dword ptr [esp + 24h]
L5A09D0_3:
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [esp + 2ch]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 18h], edi
        _emit 0x8d
        _emit 0x9b
        _emit 0
        _emit 0
        _emit 0
        _emit 0
L5A09D0_4:
        test esi, esi
        je L5A09D0_5
        cmp esi, dword ptr [esp + 20h]
        je L5A09D0_6
L5A09D0_5:
        call dword ptr [mem_00925134]
L5A09D0_6:
        cmp edi, dword ptr [esp + 10h]
        je L5A09D0_ret
        test ebp, ebp
        je L5A09D0_7
        test esi, esi
        jne L5A09D0_8
        call dword ptr [mem_00925134]
L5A09D0_8:
        cmp edi, dword ptr [esi + 4]
        jne L5A09D0_9
        call dword ptr [mem_00925134]
L5A09D0_9:
        mov edi, dword ptr [edi + 28h]
        mov esi, dword ptr [edi]
        push ebp
        mov ecx, ebx
        add esi, 58h
        call ext_006404E0
        push eax
        mov eax, dword ptr [esi]
        mov ecx, edi
        jmp L5A09D0_10
L5A09D0_7:
        test esi, esi
        jne L5A09D0_11
        call dword ptr [mem_00925134]
L5A09D0_11:
        cmp edi, dword ptr [esi + 4]
        jne L5A09D0_12
        call dword ptr [mem_00925134]
L5A09D0_12:
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 58h]
        push ebx
L5A09D0_10:
        call eax
        mov ecx, dword ptr [esp + 30h]
        test ecx, ecx
        je L5A09D0_13
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
L5A09D0_13:
        lea ecx, [esp + 14h]
        call ext_00673C20
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 14h]
        jmp L5A09D0_4
L5A09D0_ret:
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0ch
        ret
    }
}

// [0x005A19D0] sub_005A19D0 (83 bytes)
extern "C" void ext_005BF4E0();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A19D0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push edi
        call dword ptr [mem_00924FE0]
        add esi, 0x598
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je done_5A19D0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push edi
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        call ext_005BF4E0
done_5A19D0:
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005A0AC0] sub_005A0AC0 (228 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A0AC0(void* self) {
    __asm {
        sub esp, 0x0c
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp dword ptr [esi + 0x08], 0
        jne loc_5a0ad8
        mov eax, 0x00b53b30
        pop esi
        add esp, 0x0c
        ret
    loc_5a0ad8:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        push ebx
        push ebp
        push edi
        je loc_5a0af1
        mov ecx, dword ptr [esp + 0x24]
        push eax
        call ext_006404E0
        mov ebx, eax
        jmp loc_5a0af5
    loc_5a0af1:
        mov ebx, dword ptr [esp + 0x24]
    loc_5a0af5:
        mov eax, dword ptr [esi + 0x04]
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_5a0b10:
        test esi, esi
        je loc_5a0b1a
        cmp esi, dword ptr [esp + 0x20]
        je loc_5a0b20
    loc_5a0b1a:
        call dword ptr [mem_00925134]
    loc_5a0b20:
        cmp edi, dword ptr [esp + 0x10]
        je loc_5a0b9a
        test ebp, ebp
        je loc_5a0b56
        test esi, esi
        jne loc_5a0b34
        call dword ptr [mem_00925134]
    loc_5a0b34:
        cmp edi, dword ptr [esi + 0x04]
        jne loc_5a0b3f
        call dword ptr [mem_00925134]
    loc_5a0b3f:
        mov edi, dword ptr [edi + 0x28]
        mov esi, dword ptr [edi]
        push ebp
        mov ecx, ebx
        add esi, 0x38
        call ext_006404E0
        push eax
        mov eax, dword ptr [esi]
        mov ecx, edi
        jmp loc_5a0b74
    loc_5a0b56:
        test esi, esi
        jne loc_5a0b60
        call dword ptr [mem_00925134]
    loc_5a0b60:
        cmp edi, dword ptr [esi + 0x04]
        jne loc_5a0b6b
        call dword ptr [mem_00925134]
    loc_5a0b6b:
        mov ecx, dword ptr [edi + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x38]
        push ebx
    loc_5a0b74:
        call eax
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        je loc_5a0b84
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    loc_5a0b84:
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp loc_5a0b10
    loc_5a0b9a:
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x0c
        ret
    }
}

// [0x005A34C0] sub_005A34C0 (50 bytes)
extern "C" void ext_005A1E90();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A34C0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ecx
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x550]
        call ext_005A1E90
    done:
        pop esi
        ret 4
    }
}

// [0x005A3500] sub_005A3500 (50 bytes)
extern "C" void ext_005A2440();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A3500(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ecx
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x55c]
        call ext_005A2440
    done:
        pop esi
        ret 4
    }
}

// [0x005A3540] sub_005A3540 (50 bytes)
extern "C" void ext_005A1D90();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005A3540(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ecx
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x598]
        call ext_005A1D90
    done:
        pop esi
        ret 4
    }
}

// [0x005AED40] sub_005AED40 (52 bytes)
extern "C" void ext_005AE4E0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005AED40(void* self) {
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
        call ext_005AE4E0
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

// [0x005A2F30] sub_005A2F30 (55 bytes)
extern "C" void ext_005A2340();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A2F30(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        je done
        mov eax, dword ptr [esp + 0xc]
        push edi
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x5e0]
        call ext_005A2340
        mov dword ptr [edi + 0x174], esi
    done:
        pop edi
        pop esi
        ret 8
    }
}

// [0x005A35D0] sub_005A35D0 (56 bytes)
extern "C" void ext_005A1C90();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005A35D0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ecx
        mov dword ptr [ecx + 0x18c], esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x5a4]
        call ext_005A1C90
    done:
        pop esi
        ret 4
    }
}

// [0x005A3620] sub_005A3620 (56 bytes)
extern "C" void ext_005A1150();
extern "C" void ext_00675050();
extern "C" __declspec(naked) void __fastcall fn_005A3620(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0x7
        mov esi, ecx
        call ext_005A1150
        test esi, esi
        je null_path_5A3620
        mov ecx, dword ptr [esi + 0x5fc]
        lea eax, [esi + 0x4]
        push eax
        call ext_00675050
        pop esi
        ret 0x4
null_path_5A3620:
        mov ecx, dword ptr [esi + 0x5fc]
        xor eax, eax
        push eax
        call ext_00675050
        pop esi
        ret 0x4
    }
}

// [0x005A6E20] sub_005A6E20 (59 bytes)
extern "C" void ext_005A5690();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005A6E20(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x95e808
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005A5690
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

// [0x005AFAF0] sub_005AFAF0 (59 bytes)
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005AFAF0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x95f6c4
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AEC70
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

// [0x005A2F70] sub_005A2F70 (61 bytes)
extern "C" void ext_005A1F90();
extern "C" void ext_00623970();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A2F70(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        mov esi, ecx
        je done
        mov eax, dword ptr [esp + 0xc]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x568]
        call ext_005A1F90
        mov ecx, dword ptr [esp + 0x10]
        push edi
        push ecx
        mov ecx, eax
        call ext_00623970
done:
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x005A2BD0] sub_005A2BD0 (62 bytes)
extern "C" void ext_005A2BD0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A2BD0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x39], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_005A2BD0
        mov esi, dword ptr [esi]
        lea ecx, [edi + 0xc]
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x39], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005AE170] sub_005AE170 (62 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AE170(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x29], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_005AE170
        mov esi, dword ptr [esi]
        lea ecx, [edi + 0xc]
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x29], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005A5690] sub_005A5690 (203 bytes)
extern "C" void ext_005A2900();
extern "C" void ext_005A2BD0();
extern "C" void ext_00667030();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A5690(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
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
        je L_5A56AA
        cmp edi, esi
        je L_5A56B0
L_5A56AA:
        call dword ptr [mem_00925134]
L_5A56B0:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_5A5711
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_5A56C7
        cmp eax, esi
        je L_5A56CD
L_5A56C7:
        call dword ptr [mem_00925134]
L_5A56CD:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_5A5711
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005A2BD0
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
L_5A5711:
        test edi, edi
        je L_5A571B
        cmp edi, dword ptr [esp + 0x28]
        je L_5A5721
L_5A571B:
        call dword ptr [mem_00925134]
L_5A5721:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5A5748
        lea ecx, [esp + 0x20]
        call ext_00667030
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005A2900
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_5A5711
L_5A5748:
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

// [0x005A7120] sub_005A7120 (178 bytes)
extern "C" void ext_005A5690();
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A7120(void* self) {
    __asm {
        push -1
        push 8a1a86h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0Ch], edi
        lea ecx, [edi + 34h]
        mov dword ptr [esp + 20h], 3
        call dword ptr [mem_00924FF4]
        lea esi, [edi + 28h]
        mov dword ptr [edi + 24h], 95e808h
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 34h], 2
        call ext_005A5690
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        lea ecx, [edi + 8]
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        mov byte ptr [esp + 20h], 1
        call dword ptr [mem_00924FF4]
        test edi, edi
        mov byte ptr [esp + 20h], 0
        je short L_noself
        lea ecx, [edi + 4]
        jmp short L_call
L_noself:
        xor ecx, ecx
L_call:
        call ext_0065F440
        mov ecx, edi
        mov dword ptr [esp + 20h], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 18h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 1ch
        ret
    }
}

// [0x005AE4E0] sub_005AE4E0 (203 bytes)
extern "C" void ext_005AC8C0();
extern "C" void ext_005ADE30();
extern "C" void ext_005AE170();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AE4E0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
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
        je L_5AE4FA
        cmp edi, esi
        je L_5AE500
L_5AE4FA:
        call dword ptr [mem_00925134]
L_5AE500:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_5AE561
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_5AE517
        cmp eax, esi
        je L_5AE51D
L_5AE517:
        call dword ptr [mem_00925134]
L_5AE51D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_5AE561
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005AE170
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
L_5AE561:
        test edi, edi
        je L_5AE56B
        cmp edi, dword ptr [esp + 0x28]
        je L_5AE571
L_5AE56B:
        call dword ptr [mem_00925134]
L_5AE571:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5AE598
        lea ecx, [esp + 0x20]
        call ext_005AC8C0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005ADE30
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_5AE561
L_5AE598:
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

// [0x005AE480] sub_005AE480 (62 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AE480(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x2d], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_005AE480
        mov esi, dword ptr [esi]
        lea ecx, [edi + 0xc]
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x2d], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005AEC70] sub_005AEC70 (203 bytes)
extern "C" void ext_005AE1B0();
extern "C" void ext_005AE480();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AEC70(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
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
        je L_5AEC8A
        cmp edi, esi
        je L_5AEC90
L_5AEC8A:
        call dword ptr [mem_00925134]
L_5AEC90:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_5AECF1
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_5AECA7
        cmp eax, esi
        je L_5AECAD
L_5AECA7:
        call dword ptr [mem_00925134]
L_5AECAD:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_5AECF1
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005AE480
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
L_5AECF1:
        test edi, edi
        je L_5AECFB
        cmp edi, dword ptr [esp + 0x28]
        je L_5AED01
L_5AECFB:
        call dword ptr [mem_00925134]
L_5AED01:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5AED28
        lea ecx, [esp + 0x20]
        call ext_00673C20
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005AE1B0
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_5AECF1
L_5AED28:
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

// [0x005A6650] sub_005A6650 (126 bytes)
extern "C" int mem_00875928;
extern "C" void ext_005A0910();
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005A6650(void* self) {
    __asm {
        push -1
        push offset mem_00875928
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        mov dword ptr [esp + 24h], 0
        call ext_005A0910
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], -1
        call ext_005AEC70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 10h]
        add esp, 4
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret
    }
}

// [0x005A66D0] sub_005A66D0 (126 bytes)
extern "C" void ext_005A0970();
extern "C" __declspec(naked) void __fastcall fn_005A66D0(void* self) {
    __asm {
        push -1
        push offset mem_00875928
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        mov dword ptr [esp + 24h], 0
        call ext_005A0970
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], -1
        call ext_005AEC70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 10h]
        add esp, 4
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret
    }
}

// [0x005A7280] sub_005A7280 (145 bytes)
extern "C" void ext_005A28A0();
extern "C" void ext_005AEC70();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A7280(void* self) {
    __asm {
        push -1
        push 8a1aa4h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0Ch
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov eax, dword ptr [edi + 24h]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 20h]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        mov dword ptr [esp + 2Ch], 1
        call ext_005A28A0
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 1Ch]
        push eax
        mov ecx, esi
        call ext_005AEC70
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        xor eax, eax
        add esp, 4
        lea ecx, [edi + 4]
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov byte ptr [esp + 1Ch], al
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov dword ptr [esp + 1Ch], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret
    }
}

// [0x005A9E30] sub_005A9E30 (63 bytes)
extern "C" void ext_00496E80();
extern "C" void ext_005A6750();
extern "C" void ext_005A6800();
extern "C" void ext_005A9C90();

extern "C" void __cdecl fn_005A9E30(void* self) {
    void* local;
    ((void (__thiscall*)(void*, void*, const void*))ext_005A9C90)(self, &local, (const void*)0x00945310);
    ((void (__thiscall*)(void*, const void*))ext_005A6750)(&local, (const void*)0x0095A9A4);
    ((void (__thiscall*)(void*, const void*))ext_005A6800)(&local, (const void*)0x009576C4);
    ((void (__cdecl*)(void*))ext_00496E80)(self);
}

// [0x005A3580] sub_005A3580 (71 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005A1C90();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005A3580(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push esi
        mov ecx, esi
        mov dword ptr [esi + 0x18c], edi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x58c]
        call ext_005A1C90
        push 0
        push esi
        lea ecx, [edi + 4]
        call ext_00587920
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005AF8E0] sub_005AF8E0 (84 bytes)
extern "C" void ext_00412690();
extern "C" void ext_0046AB70();
struct Pair_5AF8E0 {
    int a;
    int b;
    int c;
};
extern "C" void __fastcall fn_005AF8E0(void* self, int edx_unused, int a1, int a2) {
    Pair_5AF8E0 p;
    p.a = a1;
    p.b = a2;
    ((void (__thiscall*)(void*, Pair_5AF8E0*))ext_00412690)((char*)self + 0x78, &p);
    ((void (__thiscall*)(void*, Pair_5AF8E0*, int*))ext_0046AB70)((char*)self + 0x88, &p, &a1);
    ((void (__thiscall*)(void*, Pair_5AF8E0*, int*))ext_0046AB70)((char*)self + 0x94, &p, &a2);
}

extern "C" void ext_005AC3D0();
extern "C" void ext_005AF8E0();
extern "C" int mem_00924FF4;

// [0x005AF940] sub_005AF940 (287 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AF940(void* self, int edx_unused, void* vec, void* obj) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x60]
        test ecx, ecx
        mov dword ptr [esp + 0x8], esi
        je L_done
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0x30]
        push edx
        call eax
        lea ecx, [esp + 0x30]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x5c], 0
        call ext_005AC3D0
        mov eax, dword ptr [esi + 0x58]
        mov eax, dword ptr [eax]
        lea ecx, [esi + 0x58]
        lea edx, [esp + 0x14]
        push edx
        mov byte ptr [esp + 0x58], 1
        call eax
        test eax, eax
        je L_cleanup
        mov ecx, dword ptr [eax]
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x64]
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        mov dword ptr [esp + 0xc], ecx
        jbe L_1
        call dword ptr [mem_00925134]
    L_1:
        push ebp
        mov ebp, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebp
        jbe L_2
        call dword ptr [mem_00925134]
    L_2:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_3
        call dword ptr [mem_00925134]
    L_3:
        cmp esi, ebp
        mov eax, edi
        mov dword ptr [esp + 0x1c], esi
        je L_found_end
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_loop:
        mov edx, dword ptr [esi]
        cmp edx, dword ptr [esp + 0x10]
        je L_found_end
        add esi, 4
        cmp esi, ebp
        jne L_loop
    L_found_end:
        test eax, eax
        pop ebp
        je L_inv
        cmp eax, edi
        je L_after_inv
    L_inv:
        call dword ptr [mem_00925134]
    L_after_inv:
        cmp esi, ebx
        setne al
        test al, al
        pop edi
        pop ebx
        jne L_cleanup
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 0x60]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        call ext_005AF8E0
    L_cleanup:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x54], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x54], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_done:
        mov ecx, dword ptr [esp + 0x4c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x005A4EB0] sub_005A4EB0 (293 bytes)
extern "C" void ext_005A0910();
extern "C" void ext_00427A60();
extern "C" void ext_005AE480();
extern "C" void ext_005F28D0();
extern "C" void ext_005A3580();
extern "C" void ext_005A3500();
extern "C" void ext_0060E4A0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A4EB0(void* self, int edx_unused, unsigned int arg1) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x590]
        mov ecx, dword ptr [eax]
        lea esi, [ebx + 0x58c]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x24]
        cmp eax, 0xb53a34
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        je done
        cmp eax, 0xb53b30
        je done
        cmp eax, 0xb53ab0
        je done
        cmp eax, 0xb53a70
        je done
        cmp eax, 0xb53af0
        je done
        push ebp
        mov ebp, dword ptr [mem_00925134]
        lea esi, [eax + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L1
        call ebp
L1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L2
        call ebp
L2:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
L_loop:
        call ext_00427A60
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L3
        cmp edi, dword ptr [esp + 0x20]
        je L4
L3:
        call ebp
L4:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_end
        test edi, edi
        jne L5
        call ebp
L5:
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
L6:
        mov eax, dword ptr [esi]
        push 0
        push ebx
        push eax
        call ext_005F28D0
        add esp, 0xc
        push eax
        mov ecx, ebx
        call ext_005A3580
        cmp esi, dword ptr [edi + 0x8]
        jb L7
        call ebp
L7:
        add esi, 4
        mov dword ptr [esp + 0x18], esi
        lea ecx, [esp + 0x10]
        jmp L_loop
L_end:
        pop edi
        pop ebp
done:
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
    }
}

// [0x005A4FE0] sub_005A4FE0 (297 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A4FE0(void* self, int edx_unused, unsigned int arg1) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x560]
        mov ecx, dword ptr [eax]
        lea esi, [ebx + 0x55c]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x24]
        cmp eax, 0xb53a34
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        je done
        cmp eax, 0xb53b30
        je done
        cmp eax, 0xb53ab0
        je done
        cmp eax, 0xb53a70
        je done
        cmp eax, 0xb53af0
        je done
        push ebp
        mov ebp, dword ptr [mem_00925134]
        lea esi, [eax + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L1
        call ebp
L1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L2
        call ebp
L2:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
L_loop:
        call ext_00427A60
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L3
        cmp edi, dword ptr [esp + 0x20]
        je L4
L3:
        call ebp
L4:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_end
        test edi, edi
        jne L5
        call ebp
L5:
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
L6:
        mov eax, dword ptr [esi]
        push eax
        call ext_0060E4A0
        add esp, 4
        push eax
        mov ecx, ebx
        call ext_005A3500
        cmp esi, dword ptr [edi + 0x8]
        jb L7
        call ebp
L7:
        add esi, 4
        mov dword ptr [esp + 0x18], esi
        lea ecx, [esp + 0x10]
        jmp L_loop
L_end:
        pop edi
        pop ebp
done:
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
    }
}

// [0x005A5110] sub_005A5110 (297 bytes)
extern "C" void ext_005A0910();
extern "C" void ext_00427A60();
extern "C" void ext_005AE480();
extern "C" void ext_00610400();
extern "C" void ext_005A34C0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A5110(void* self, int edx_unused, unsigned int arg1) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x554]
        mov ecx, dword ptr [eax]
        lea esi, [ebx + 0x550]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x24]
        cmp eax, 0xb53a34
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        je done
        cmp eax, 0xb53b30
        je done
        cmp eax, 0xb53ab0
        je done
        cmp eax, 0xb53a70
        je done
        cmp eax, 0xb53af0
        je done
        push ebp
        mov ebp, dword ptr [mem_00925134]
        lea esi, [eax + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L1
        call ebp
L1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L2
        call ebp
L2:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
L_loop:
        call ext_00427A60
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L3
        cmp edi, dword ptr [esp + 0x20]
        je L4
L3:
        call ebp
L4:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_end
        test edi, edi
        jne L5
        call ebp
L5:
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
L6:
        mov eax, dword ptr [esi]
        push eax
        call ext_00610400
        add esp, 4
        push eax
        mov ecx, ebx
        call ext_005A34C0
        cmp esi, dword ptr [edi + 0x8]
        jb L7
        call ebp
L7:
        add esi, 4
        mov dword ptr [esp + 0x18], esi
        lea ecx, [esp + 0x10]
        jmp L_loop
L_end:
        pop edi
        pop ebp
done:
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
    }
}

extern "C" void ext_00623010();
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00A9ED78;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// [0x005A13F0] sub_005A13F0 (148 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A13F0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x570], 0
        je done
        mov eax, dword ptr [mem_00A9ED78]
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        push edi
        push eax
        call ext_006404E0
        mov ecx, dword ptr [esi + 0x56C]
        lea edi, [esi + 0x568]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [ecx]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0xC], esi
        mov dword ptr [esp + 0x10], ebp
        push ebx
        nop
    loop_start:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je invalid1
        cmp esi, edi
        je valid1
    invalid1:
        call dword ptr [mem_00925134]
    valid1:
        cmp ebp, ebx
        je loop_end
        test esi, esi
        jne valid2
        call dword ptr [mem_00925134]
    valid2:
        cmp ebp, dword ptr [esi + 4]
        jne valid3
        call dword ptr [mem_00925134]
    valid3:
        mov edx, dword ptr [esp + 0x1C]
        mov ecx, dword ptr [ebp + 0x28]
        push edx
        call ext_00623010
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_start
    loop_end:
        pop ebx
        pop edi
        pop ebp
    done:
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x005A0490] sub_005A0490 (423 bytes)
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_006404E0();
extern "C" void ext_00667030();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F0C4;
extern "C" __declspec(naked) void __fastcall fn_005A0490(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x877622
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 48h
        push ebx
        lea eax, [ecx + 650h]
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [ecx]
        push ebp
        push esi
        push edi
        mov edi, eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 18h], edi
    L_top:
        test edi, edi
        mov esi, dword ptr [eax + 4]
        je L_a
        cmp edi, eax
        je L_b
    L_a:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_c
    L_b:
        mov ebp, dword ptr [mem_00925134]
    L_c:
        cmp ebx, esi
        je L_end
        mov ecx, dword ptr [esp + 68h]
        push 0x95e6dc
        call ext_006404E0
        test edi, edi
        mov esi, eax
        mov dword ptr [esp + 10h], esi
        jne L_s1
        call ebp
    L_s1:
        cmp ebx, dword ptr [edi + 4]
        jne L_s2
        call ebp
    L_s2:
        mov eax, dword ptr [mem_00A9F838]
        push eax
        mov ecx, esi
        lea ebp, [ebx + 0ch]
        call ext_00640110
        mov ecx, ebp
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 24h]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 64h], 0
        call ext_00640270
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 60h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        cmp ebx, dword ptr [edi + 4]
        mov ebp, dword ptr [mem_00925134]
        jne L_s3
        call ebp
    L_s3:
        mov edi, dword ptr [ebx + 2ch]
        cmp edi, dword ptr [ebx + 30h]
        jbe L_s4
        call ebp
    L_s4:
        mov esi, dword ptr [ebx + 30h]
        cmp dword ptr [ebx + 2ch], esi
        jbe L_s5
        call ebp
    L_s5:
        cmp edi, esi
        je L_s6
        cmp edi, dword ptr [ebx + 30h]
        jb L_s7
        call ebp
    L_s7:
        mov edx, dword ptr [mem_00A9F0C4]
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [mem_00A9F838]
        push edx
        call ext_006404E0
        push esi
        mov ecx, eax
        call ext_00640110
        mov ecx, edi
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 40h]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 3ch]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 64h], 1
        call ext_00640270
        lea ecx, [esp + 3ch]
        mov dword ptr [esp + 60h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebx + 30h]
        jb L_s8
        call dword ptr [mem_00925134]
    L_s8:
        mov ebp, dword ptr [mem_00925134]
        add edi, 1ch
        jmp L_s4
    L_s6:
        lea ecx, [esp + 18h]
        call ext_00667030
        mov ebx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        jmp L_top
    L_end:
        mov ecx, dword ptr [esp + 58h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 54h
        ret 4
    }
}

// [0x005A1530] sub_005A1530 (198 bytes)
extern "C" void ext_00427550();
extern "C" void ext_006212A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00A9EDF8;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F584;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005A1530(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0Ch
        push ebp
        mov ebp, ecx
        cmp dword ptr [ebp + 588h], 0
        je L_5A15EF
        mov eax, [mem_00A9EDF8]
        mov ecx, dword ptr [esp + 14h]
        push esi
        push edi
        push eax
        call ext_006404E0
        mov ecx, dword ptr [ebp + 584h]
        mov edi, dword ptr [ecx]
        add ebp, 580h
        mov esi, ebp
        mov dword ptr [esp + 1Ch], eax
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], edi
        push ebx
    L_5A1571:
        test esi, esi
        mov ebx, dword ptr [ebp + 4]
        je L_5A157C
        cmp esi, ebp
        je L_5A1582
    L_5A157C:
        call dword ptr [mem_00925134]
    L_5A1582:
        cmp edi, ebx
        je L_5A15EC
        test esi, esi
        jne L_5A1590
        call dword ptr [mem_00925134]
    L_5A1590:
        cmp edi, dword ptr [esi + 4]
        jne L_5A159B
        call dword ptr [mem_00925134]
    L_5A159B:
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + 28h]
        push edx
        call ext_006212A0
        cmp edi, dword ptr [esi + 4]
        mov ebx, eax
        jne L_5A15B5
        call dword ptr [mem_00925134]
    L_5A15B5:
        mov eax, [mem_00A9F584]
        push eax
        mov ecx, ebx
        call ext_00640110
        lea ecx, [edi + 0Ch]
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        lea ecx, [esp + 14h]
        call ext_00673C20
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 14h]
        jmp L_5A1571
    L_5A15EC:
        pop ebx
        pop edi
        pop esi
    L_5A15EF:
        pop ebp
        add esp, 0Ch
        ret 4
    }
}

// [0x005A1A30] sub_005A1A30 (108 bytes)
extern "C" void ext_005A13C0();
extern "C" void ext_00586A50();
extern "C" __declspec(naked) void __fastcall fn_005A1A30(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B40640]
        push esi
        push edi
        push eax
        mov esi, ecx
        call ext_005A13C0
        mov ecx, dword ptr [mem_00B40640]
        mov edi, dword ptr [esp + 0xc]
        push ecx
        push edi
        mov ecx, esi
        call ext_005A1150
        add esi, 0x4
        test edi, edi
        sete dl
        mov ecx, esi
        push edx
        push 0x200000
        call ext_00586A50
        cmp edi, 0x2
        je L_true
        cmp edi, 0x4
        je L_true
        xor al, al
        mov ecx, esi
        push eax
        push 0x1000000
        call ext_00586A50
        pop edi
        pop esi
        ret 0x4
    L_true:
        mov eax, 0x1
        push eax
        push 0x1000000
        mov ecx, esi
        call ext_00586A50
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005A6E60] sub_005A6E60 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0059E9C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6E60(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0059E9C0
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

// [0x005A6EE0] sub_005A6EE0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0059EA20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6EE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0059EA20
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

// [0x005A6F60] sub_005A6F60 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0059EA80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6F60(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0059EA80
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

// [0x005A6FE0] sub_005A6FE0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0059EAE0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6FE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0059EAE0
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

// [0x005A4AE0] sub_005A4AE0 (625 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_00427A60();
extern "C" void ext_00584A40();
extern "C" void ext_00587920();
extern "C" void ext_005A0910();
extern "C" void ext_005A2F30();
extern "C" void ext_005AE480();
extern "C" void ext_0063EFE0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_008709B0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_005A4AE0(void* self) {
    __asm {
        push -1
        push 0x8a183a
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x9c
        push edi
        mov edi, dword ptr [esp + 0xb0]
        cmp edi, 0xb53a34
        mov dword ptr [esp + 0x8], ecx
        je L_exit
        cmp edi, 0xb53b30
        je L_exit
        cmp edi, 0xb53ab0
        je L_exit
        cmp edi, 0xb53a70
        je L_exit
        cmp edi, 0xb53af0
        je L_exit
        mov eax, dword ptr [ecx + 0x5e4]
        push ebx
        push esi
        lea esi, [ecx + 0x5e0]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        xor ebx, ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        lea esi, [edi + 0x24]
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_skip1
        call dword ptr [mem_00925134]
    L_skip1:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip2
        call dword ptr [mem_00925134]
    L_skip2:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], edi
        call ext_00427A60
        push ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop:
        mov ebp, dword ptr [esp + 0x1c]
        cmp ebp, ebx
        je L_inv1
        cmp ebp, dword ptr [esp + 0x28]
        je L_inv2
    L_inv1:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_after_inv
    L_inv2:
        mov esi, dword ptr [mem_00925134]
    L_after_inv:
        mov edi, dword ptr [esp + 0x20]
        cmp edi, dword ptr [esp + 0x2c]
        je L_loop_end
        cmp ebp, ebx
        jne L_not_zero
        call esi
    L_not_zero:
        cmp edi, dword ptr [ebp + 0x8]
        jb L_below
        call esi
    L_below:
        mov esi, dword ptr [edi]
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [mem_00A9F838]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0xb8], ebx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xb8], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xb4], bl
        call dword ptr [mem_00924FF4]
        push 0x178
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov byte ptr [esp + 0xb4], 2
        je L_null_new
        push esi
        mov ecx, eax
        call ext_008709B0
        mov esi, eax
        jmp L_after_new
    L_null_new:
        xor esi, esi
    L_after_new:
        mov dword ptr [esp + 0x10], esi
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esi + 0x154]
        push eax
        add ecx, 0x4
        mov byte ptr [esp + 0xb8], 3
        call ext_00584A40
        cmp eax, ebx
        je L_throw
        push ebx
        push esi
        mov ecx, eax
        call ext_00587920
        push esi
        lea ecx, [esp + 0x50]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], ebx
        call ext_005A2F30
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0xb4], -1
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebp + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add edi, 0x4
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x20], edi
        call ext_00427A60
        jmp L_loop
    L_throw:
        push 0x95e7bc
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        add esi, 0x154
        push esi
        lea edx, [esp + 0x34]
        push edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0xbc], 4
        call ext_0041FF30
        push 0x9d3748
        lea eax, [esp + 0x6c]
        push eax
        call ext_006A6DD2
    L_loop_end:
        pop ebp
        pop esi
        pop ebx
    L_exit:
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        mov fs:[0], ecx
        add esp, 0xa8
        ret 0x4
    }
}

extern "C" void ext_00587920();
extern "C" void ext_005A2F30();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C62();
extern "C" void ext_00870AD0();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;

// [0x005A4220] sub_005A4220 (295 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A4220(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    -1
        push    0x8b783b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x24]
        push    esi
        push    edi
        call    edx
        mov     ebp, dword ptr [esp + 0x34]
        add     ebp, 0x5e0
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [ebp + 4]
        mov     eax, dword ptr [eax]
        mov     esi, ebp
        mov     edi, eax
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_loop:
        test    esi, esi
        mov     ebx, dword ptr [ebp + 4]
        je      short L_inv1
        cmp     esi, ebp
        je      short L_ok1
    L_inv1:
        call    dword ptr [mem_00925134]
    L_ok1:
        cmp     edi, ebx
        je      L_done
        test    esi, esi
        jne     short L_ok2
        call    dword ptr [mem_00925134]
    L_ok2:
        cmp     edi, dword ptr [esi + 4]
        jne     short L_ok3
        call    dword ptr [mem_00925134]
    L_ok3:
        mov     eax, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        add     eax, 0x154
        push    eax
        call    dword ptr [mem_00924FC4]
        add     esp, 8
        test    al, al
        je      short L_next
        push    0x178
        call    ext_006A5C62
        mov     ebx, eax
        add     esp, 4
        mov     dword ptr [esp + 0x34], ebx
        test    ebx, ebx
        mov     dword ptr [esp + 0x28], 0
        je      short L_null
        cmp     edi, dword ptr [esi + 4]
        jne     short L_ok4
        call    dword ptr [mem_00925134]
    L_ok4:
        mov     edx, dword ptr [edi + 0x28]
        push    edx
        mov     ecx, ebx
        call    ext_00870AD0
        mov     esi, eax
        jmp     short L_after_new
    L_null:
        xor     esi, esi
    L_after_new:
        mov     ecx, dword ptr [esp + 0x30]
        push    0
        push    esi
        mov     dword ptr [esp + 0x30], -1
        call    ext_00587920
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x24]
        push    esi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_005A2F30
    L_next:
        lea     ecx, [esp + 0x18]
        call    ext_00673C20
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_loop
    L_done:
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     8
    }
}

// [0x005ABA70] sub_005ABA70 (241 bytes)
extern "C" void ext_0058F2F0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005ABA70(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x8a2518
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
        call ext_0058F2F0
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x95f3ac
        mov dword ptr [esi + 0x4], 0x95f364
        mov dword ptr [esi + 0x8], 0x95f324
        mov dword ptr [esi + 0xc], 0x95f2d4
        mov dword ptr [esi + 0x150], 0x95f2c0
        mov eax, dword ptr [edi + 0x154]
        mov dword ptr [esi + 0x154], eax
        fld dword ptr [edi + 0x158]
        fstp dword ptr [esi + 0x158]
        lea ecx, [edi + 0x170]
        fld dword ptr [edi + 0x15c]
        push ecx
        fstp dword ptr [esi + 0x15c]
        lea ecx, [esi + 0x170]
        fld dword ptr [edi + 0x160]
        mov dword ptr [esp + 0x18], 0x0
        fstp dword ptr [esi + 0x160]
        fld dword ptr [edi + 0x164]
        fstp dword ptr [esi + 0x164]
        fld dword ptr [edi + 0x168]
        fstp dword ptr [esi + 0x168]
        fld dword ptr [edi + 0x16c]
        fstp dword ptr [esi + 0x16c]
        call dword ptr [mem_00924FE0]
        mov dl, byte ptr [edi + 0x18c]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0x18c], dl
        mov dword ptr [esi + 0x190], 0x0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005A4640] sub_005A4640 (117 bytes)
extern "C" void ext_005A27F0();

extern "C" __declspec(naked) void __fastcall fn_005A4640(void* self) {
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
        call    ext_005A27F0
        mov     dword ptr [edi + 0x4], eax
        mov     ecx, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, dword ptr [edx + 0x4]
        cmp     byte ptr [eax + 0x45], 0x0
        jne     loc_5A46A7
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0x45], 0x0
        jne     loc_5A4682
    loc_5A4678:
        mov     eax, ecx
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0x45], 0x0
        je      loc_5A4678
    loc_5A4682:
        mov     dword ptr [edx], eax
        mov     esi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0x45], 0x0
        jne     loc_5A469E
    loc_5A4693:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0x45], 0x0
        je      loc_5A4693
    loc_5A469E:
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        pop     esi
        pop     ebx
        ret     0x4
    loc_5A46A7:
        mov     dword ptr [edx], edx
        mov     esi, dword ptr [esi + 0x4]
        pop     edi
        mov     dword ptr [esi + 0x8], esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}

// [0x005A0FF0] sub_005A0FF0 (118 bytes)
extern "C" void ext_005A0640();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_005A0FF0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push ebx
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x5a4]
        call ext_005DF5C0
        test eax, eax
        jne out_ret
        mov eax, dword ptr [esi + 0x160]
        mov edx, dword ptr [eax + 0x24]
        lea edi, [esi + 0x160]
        push ebx
        mov ecx, edi
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je not_equal
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    not_equal:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push ebx
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x58c]
        call ext_005A0640
    out_ret:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x005A6300] sub_005A6300 (119 bytes)
extern "C" void ext_0059A140();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A6300(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L1
        call ebp
    L1:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L2
        call ebp
    L2:
        cmp esi, ebx
        mov dword ptr [esp + 0x14], esi
        je L5
        mov eax, dword ptr [esp + 0x1c]
        mov eax, dword ptr [eax]
    L3:
        cmp dword ptr [esi], eax
        je L5
        add esi, 4
        cmp esi, ebx
        jne L3
    L5:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L6
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L6:
        test edi, edi
        je L7
        cmp edi, edi
        je L8
    L7:
        call ebp
    L8:
        cmp esi, ebx
        jne L9
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push esi
        push edi
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, edi
        call ext_0059A140
    L9:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x005AFD70] sub_005AFD70 (607 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0046A810();
extern "C" void ext_005AE4E0();
extern "C" void ext_005AEC70();
extern "C" void ext_00697210();
extern "C" __declspec(naked) void __fastcall fn_005AFD70(void* self) {
    __asm {
        push -1
        push 0x8a2d1a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea ecx, [esi + 0xa0]
        mov dword ptr [esp + 0x20], 0xb
        call ext_00697210
        mov eax, dword ptr [esi + 0x98]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x94]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0xa
        call ext_0046A810
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        xor ebx, ebx
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x8c]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x88]
        push eax
        push edi
        push ecx
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x9
        call ext_0046A810
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x7c]
        add esp, 0x4
        cmp eax, ebx
        je L_skip_7c
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_skip_7c:
        lea ecx, [esi + 0x68]
        mov dword ptr [esi + 0x7c], ebx
        mov dword ptr [esi + 0x80], ebx
        mov dword ptr [esi + 0x84], ebx
        mov byte ptr [esp + 0x20], 0x7
        call ext_004026E0
        lea edi, [esi + 0x5c]
        mov dword ptr [esi + 0x58], 0x95f6c4
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x6
        call ext_005AEC70
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x50]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x4c]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x5
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x44]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x40]
        push eax
        push edi
        push ecx
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x4
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x38]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x34]
        push eax
        push edi
        push ecx
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x3
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        add esp, 0x4
        mov byte ptr [esp + 0x20], 0x2
        lea edi, [esi + 0x28]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x1c]
        push eax
        push edi
        push ecx
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x34], 0x1
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax]
        add esp, 0x4
        lea edi, [esi + 0x10]
        push eax
        push edi
        push ecx
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x34], bl
        call ext_005AE4E0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        add esi, 0x4
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_005AE4E0
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0x4
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x005A3D40] sub_005A3D40 (128 bytes)
extern "C" void ext_005A17D0();
extern "C" void ext_005B0CA0();
extern "C" void ext_005B0D90();
extern "C" void ext_0065C830();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005A3D40(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8a17eb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        lea ecx, [ebp - 0x9c]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], ebx
        call ext_005B0CA0
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push eax
        lea ecx, [ebp - 0x9c]
        mov byte ptr [ebp - 0x4], 1
        call ext_0065C830
        mov ecx, dword ptr [mem_00B40640]
        push ecx
        lea edx, [ebp - 0x9c]
        push edx
        mov ecx, esi
        call ext_005A17D0
        lea ecx, [ebp - 0x9c]
        mov byte ptr [ebp - 0x4], bl
        call ext_005B0D90
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x005A45A0] sub_005A45A0 (158 bytes)
extern "C" void ext_004ECB40();
extern "C" void ext_005A3D40();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005A45A0(void* self) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        push edi
        lea eax, [esp + 8]
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        call ext_004ECB40
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x60]
        mov dword ptr [esp + 0x1c], 0
        call eax
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov esi, eax
        mov dword ptr [esp + 0x18], -1
        je short lbl_skip1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 8]
        push eax
        call edx
    lbl_skip1:
        test esi, esi
        je short lbl_done
        push 0
        push 0xa434b0
        push 0xa2e2f8
        push 0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je short lbl_done
        lea ecx, [eax + 8]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_005A3D40
    lbl_done:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

extern "C" void ext_005A2040();
extern "C" void ext_005A71E0();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;

// [0x005A7320] sub_005A7320 (139 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A7320(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b783b
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x1c]
        test esi, esi
        push edi
        mov ebx, ecx
        jne short lbl_6d
        push 0x2c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        test eax, eax
        mov dword ptr [esp + 0x14], esi
        je short lbl_61
        mov ecx, eax
        call ext_005A71E0
        jmp short lbl_63
    lbl_61:
        xor eax, eax
    lbl_63:
        mov dword ptr [esp + 0x14], 0xffffffff
        mov esi, eax
    lbl_6d:
        mov edi, dword ptr [esp + 0x1c]
        push edi
        lea ecx, [esi + 4]
        call dword ptr [mem_00924FDC]
        push esi
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x40], esp
        push edi
        call dword ptr [mem_00924FE0]
        lea ecx, [ebx + 0x568]
        call ext_005A2040
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 8
    }
}

// [0x005AFA60] sub_005AFA60 (140 bytes)
extern "C" void ext_005AF940();
extern "C" void ext_005AFA60();

extern "C" __declspec(naked) void __fastcall fn_005AFA60(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ebx + 0x80]
        cmp edi, dword ptr [ebx + 0x84]
        mov ebp, ecx
        jbe short L1
        call dword ptr [mem_00925134]
        mov edi, edi
    L1:
        mov esi, dword ptr [ebx + 0x84]
        cmp dword ptr [ebx + 0x80], esi
        jbe short L2
        call dword ptr [mem_00925134]
    L2:
        cmp edi, esi
        je short L_exit
        cmp edi, dword ptr [ebx + 0x84]
        jb short L3
        call dword ptr [mem_00925134]
    L3:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc4]
        mov ecx, esi
        call edx
        test al, al
        jne short L4
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov ecx, ebp
        call ext_005AF940
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push ecx
        mov ecx, ebp
        call ext_005AFA60
    L4:
        cmp edi, dword ptr [ebx + 0x84]
        jb short L5
        call dword ptr [mem_00925134]
    L5:
        add edi, 4
        jmp short L1
    L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

// [0x005AFFD0] sub_005AFFD0 (172 bytes)
extern "C" void ext_005AF8E0();
extern "C" void ext_005AF940();
extern "C" void ext_005AFA60();
extern "C" __declspec(naked) void __fastcall fn_005AFFD0(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x20], eax
        jbe L1
        call ebp
    L1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L2
        call ebp
    L2:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L3
        call ebp
    L3:
        cmp esi, ebx
        mov ebp, dword ptr [esp + 0x24]
        mov eax, edi
        mov dword ptr [esp + 0x18], esi
        je L5
    L4:
        cmp dword ptr [esi], ebp
        je L5
        add esi, 4
        cmp esi, ebx
        jne L4
    L5:
        test eax, eax
        je L6
        cmp eax, edi
        je L7
    L6:
        call dword ptr [mem_00925134]
    L7:
        cmp esi, dword ptr [esp + 0x20]
        je L_exit
        mov eax, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x10]
        push eax
        push ebp
        mov ecx, ebx
        call ext_005AF8E0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0xc4]
        mov ecx, ebp
        call eax
        test al, al
        je L_exit
        mov esi, dword ptr [ebp + 0x94]
        test esi, esi
        je L_exit
        push esi
        push edi
        mov ecx, ebx
        call ext_005AF940
        push esi
        push edi
        mov ecx, ebx
        call ext_005AFA60
    L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

// [0x005A9C90] sub_005A9C90 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A9C90(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa88248
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_5A9CE3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_5A9CE3:
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

// [0x005AC190] sub_005AC190 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AC190(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa88844
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_5AC1E3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_5AC1E3:
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

// [0x005A9D50] sub_005A9D50 (214 bytes)
extern "C" void ext_005A6E60();
extern "C" void ext_005A6EE0();
extern "C" void ext_005A6F60();
extern "C" void ext_005A6FE0();
extern "C" void ext_005A9C90();
extern "C" void ext_006790C0();
extern "C" void ext_006798D0();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A9D50(void* self) {
    __asm {
        push -1
        push 08b2ae2h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 03ch
        lea eax, [esp]
        push 0945310h
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_005A9C90
        push 095ed90h
        lea ecx, [esp+24h]
        call dword ptr [mem_00924FE4]
        push 095ed80h
        lea ecx, [esp+8]
        mov dword ptr [esp+48h], 0
        call dword ptr [mem_00924FE4]
        lea ecx, [esp+20h]
        push ecx
        lea edx, [esp+8]
        push edx
        mov byte ptr [esp+4ch], 1
        call ext_006798D0
        mov ecx, eax
        call ext_006790C0
        lea ecx, [esp+4]
        mov byte ptr [esp+44h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+20h]
        mov dword ptr [esp+44h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        push 095ed70h
        lea ecx, [esp+4]
        call ext_005A6E60
        push 095ed68h
        lea ecx, [esp+4]
        call ext_005A6EE0
        push 095ed60h
        lea ecx, [esp+4]
        call ext_005A6F60
        push 095ed50h
        lea ecx, [esp+4]
        call ext_005A6FE0
        mov ecx, dword ptr [esp+3ch]
        mov dword ptr fs:[0], ecx
        add esp, 48h
        ret
    }
}

// [0x005A6750] sub_005A6750 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B414C0;
extern "C" int mem_00B414BC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6750(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a1947
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B414C0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B414C0], 0x1
        mov     ecx, offset mem_00B414BC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B414BC], 0x95e384
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B414BC
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

// [0x005A6800] sub_005A6800 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B414C8;
extern "C" int mem_00B414C4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A6800(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a1977
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B414C8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B414C8], 0x1
        mov     ecx, offset mem_00B414C4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B414C4], 0x95e534
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B414C4
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

// [0x005AC030] sub_005AC030 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B4226C;
extern "C" int mem_00B42268;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AC030(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a2567
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B4226C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B4226C], 0x1
        mov     ecx, offset mem_00B42268
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B42268], 0x95ef64
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B42268
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

// [0x005AC0E0] sub_005AC0E0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B42274;
extern "C" int mem_00B42270;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AC0E0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a2597
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B42274], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B42274], 0x1
        mov     ecx, offset mem_00B42270
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B42270], 0x95f114
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B42270
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

// [0x005AC220] sub_005AC220 (317 bytes)
extern "C" void ext_005AC030();
extern "C" void ext_005AC0E0();
extern "C" void ext_005AC190();
extern "C" void ext_006790C0();
extern "C" int mem_00A9F808;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F29C;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F21C;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F2F8;

extern "C" __declspec(naked) void __fastcall fn_005AC220(void* self) {
    __asm {
        push    -0x1
        push    0x8a25d4
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x74
        push    esi
        mov     esi, dword ptr [esp + 0x88]
        push    0x945310
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    ext_005AC190
        mov     ecx, dword ptr [mem_00A9F808]
        push    ecx
        lea     ecx, [esp + 0x8]
        call    ext_005AC030
        mov     edx, dword ptr [mem_00A9F7F4]
        push    edx
        lea     ecx, [esp + 0x8]
        call    ext_005AC0E0
        mov     eax, dword ptr [mem_00A9F29C]
        push    eax
        lea     ecx, [esp + 0x28]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F21C]
        push    ecx
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x84], 0x0
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x88], 0x1
        call    ext_006790C0
        lea     ecx, [esp + 0x8]
        mov     byte ptr [esp + 0x80], 0x0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x80], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [mem_00A9F2F8]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    dword ptr [mem_00924FE4]
        mov     edx, dword ptr [mem_00A9F21C]
        push    edx
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x84], 0x2
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x88], 0x3
        call    ext_006790C0
        lea     ecx, [esp + 0x40]
        mov     byte ptr [esp + 0x80], 0x2
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x80], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x80
        ret
    }
}

// [0x005A5AD0] sub_005A5AD0 (1331 bytes)
extern "C" void ext_0063EFE0();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_00599E40();
extern "C" void ext_0058F630();
extern "C" void ext_0059A8D0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0046C0A0();
extern "C" void ext_005A3580();
extern "C" void ext_006A5C62();
extern "C" void ext_005EEEF0();
extern "C" void ext_00587920();
extern "C" void ext_00673C20();
extern "C" void ext_005A4EB0();
extern "C" void ext_0059D660();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F590;
extern "C" int mem_00A9F72C;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00A9F200;
extern "C" int mem_00A9F288;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00B40640;
extern "C" int mem_00A9F224;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;

// [0x005A5AD0] sub_005A5AD0 (1331 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A5AD0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8a18ec
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x48]
        push edi
        mov ebx, ecx
        push 0x95e770
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebx
        call ext_0063EFE0
        push eax
        lea eax, [ebx + 0x490]
        push eax
        call ext_004275E0
        add esp, 0x8
        push 0x95e768
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [ebx + 0x4ac]
        push ecx
        call ext_004275E0
        mov ecx, dword ptr [ebx + 0x5f8]
        add esp, 0x8
        test ecx, ecx
        je L_41
        lea edx, [ebx + 0x18]
        push edx
        call ext_00599E40
    L_41:
        lea edi, [ebx + 0x4]
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x18], edi
        call ext_0058F630
        mov ecx, dword ptr [ebx + 0x5f8]
        test ecx, ecx
        je L_42
        push edi
        lea eax, [ebx + 0x18]
        push eax
        call ext_0059A8D0
    L_42:
        mov ecx, dword ptr [mem_00A9F590]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_43
        cmp eax, 0xb53b30
        je L_43
        cmp eax, 0xb53ab0
        je L_43
        cmp eax, 0xb53a70
        je L_43
        cmp eax, 0xb53af0
        je L_43
        mov edx, dword ptr [mem_00A9F590]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x4c], eax
        lea eax, [esp + 0x4c]
        push eax
        lea ecx, [ebx + 0x4e0]
        push ecx
        call ext_00427640
        add esp, 0x8
    L_43:
        mov edx, dword ptr [mem_00A9F72C]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_44
        cmp eax, 0xb53b30
        je L_44
        cmp eax, 0xb53ab0
        je L_44
        cmp eax, 0xb53a70
        je L_44
        cmp eax, 0xb53af0
        je L_44
        mov eax, dword ptr [mem_00A9F72C]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x4c]
        push ecx
        lea edx, [ebx + 0x4e6]
        push edx
        mov dword ptr [esp + 0x54], eax
        call ext_00427640
        add esp, 0x8
    L_44:
        push 0x95e754
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_45
        cmp eax, 0xb53b30
        je L_45
        cmp eax, 0xb53ab0
        je L_45
        cmp eax, 0xb53a70
        je L_45
        cmp eax, 0xb53af0
        je L_45
        push 0x95e754
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x4c], eax
        lea eax, [esp + 0x4c]
        push eax
        lea ecx, [ebx + 0x4e8]
        push ecx
        call ext_0053F5F0
        add esp, 0x8
    L_45:
        push 0x95e748
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_46
        cmp eax, 0xb53b30
        je L_46
        cmp eax, 0xb53ab0
        je L_46
        cmp eax, 0xb53a70
        je L_46
        cmp eax, 0xb53af0
        je L_46
        push 0x95e748
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x4c]
        mov dword ptr [esp + 0x4c], eax
        push edx
        lea eax, [ebx + 0x4ec]
        push eax
        call ext_0046C0A0
        add esp, 0x8
    L_46:
        push 0x95e738
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_47
        cmp eax, 0xb53b30
        je L_47
        cmp eax, 0xb53ab0
        je L_47
        cmp eax, 0xb53a70
        je L_47
        cmp eax, 0xb53af0
        je L_47
        push 0x95e738
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x4c]
        push ecx
        lea edx, [ebx + 0x4f0]
        push edx
        mov dword ptr [esp + 0x54], eax
        call ext_0046C0A0
        add esp, 0x8
    L_47:
        mov eax, dword ptr [mem_00A9F0C0]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_48
        cmp eax, 0xb53b30
        je L_48
        cmp eax, 0xb53ab0
        je L_48
        cmp eax, 0xb53a70
        je L_48
        cmp eax, 0xb53af0
        jne L_49
    L_48:
        mov eax, 0xb53b30
    L_49:
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x50]
        mov ecx, ebx
        call eax
        mov ecx, dword ptr [mem_00A9F200]
        push 0x1
        push 0x0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_50
        cmp eax, 0xb53b30
        je L_50
        cmp eax, 0xb53ab0
        je L_50
        cmp eax, 0xb53a70
        je L_50
        cmp eax, 0xb53af0
        jne L_51
    L_50:
        mov eax, 0xb53b30
    L_51:
        push eax
        mov ecx, ebx
        call ext_005A4EB0
        mov edx, dword ptr [mem_00A9F288]
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_52
        cmp eax, 0xb53b30
        je L_52
        cmp eax, 0xb53ab0
        je L_52
        cmp eax, 0xb53a70
        je L_52
        cmp eax, 0xb53af0
        jne L_53
    L_52:
        mov eax, 0xb53b30
    L_53:
        push eax
        mov ecx, ebx
        call ext_0059D660
        mov eax, dword ptr [ebx + 0x59c]
        mov eax, dword ptr [eax]
        lea edi, [ebx + 0x598]
        mov ebp, eax
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebp
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        test edi, edi
        mov esi, dword ptr [ebx + 0x59c]
        lea eax, [ebx + 0x598]
        je L_chk1
        cmp edi, eax
        je L_chk2
    L_chk1:
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebp, esi
        je L_exit
        test edi, edi
        jne L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp ebp, dword ptr [edi + 0x4]
        jne L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov eax, dword ptr [ebp + 0x28]
        cmp dword ptr [eax + 0x20c], 0x0
        jne L_body
        push 0x2f8
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x4c], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr [esp + 0x44], ebx
        je L_nonull
        mov ecx, esi
        call ext_005EEEF0
        mov dword ptr [esi], 0x958674
        mov dword ptr [esi + 0x4], 0x95862c
        mov dword ptr [esi + 0x8], 0x9585ec
        mov dword ptr [esi + 0xc], 0x95859c
        mov dword ptr [esi + 0x150], 0x958584
        mov dword ptr [esi + 0x154], 0x95857c
        mov ebx, esi
    L_nonull:
        mov dword ptr [esp + 0x4c], ebx
        cmp ebp, dword ptr [edi + 0x4]
        mov esi, dword ptr [mem_00925134]
        mov dword ptr [esp + 0x44], 0x1
        jne L_c5
        call esi
    L_c5:
        mov eax, dword ptr [ebp + 0x28]
        mov dword ptr [eax + 0x20c], ebx
        cmp ebp, dword ptr [edi + 0x4]
        jne L_c6
        call esi
    L_c6:
        mov eax, dword ptr [ebp + 0x28]
        mov dword ptr [ebx + 0x22c], eax
        cmp ebp, dword ptr [edi + 0x4]
        jne L_c7
        call esi
    L_c7:
        mov ecx, dword ptr [ebp + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [ebx + 0x1b4]
        call dword ptr [mem_00924FDC]
        cmp ebp, dword ptr [edi + 0x4]
        jne L_c8
        call esi
    L_c8:
        mov ecx, dword ptr [ebp + 0x28]
        push 0x0
        push ecx
        mov ecx, ebx
        call ext_00587920
        cmp ebp, dword ptr [edi + 0x4]
        jne L_c9
        call esi
    L_c9:
        mov eax, dword ptr [ebp + 0x28]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea edi, [ebx + 0x4]
        call edx
        mov ecx, dword ptr [mem_00B40640]
        mov esi, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, edi
        call edx
        mov edi, eax
        mov eax, dword ptr [esp + 0x18]
        mov ecx, 0x10
        rep movsd
        cmp ebp, dword ptr [eax + 0x4]
        jne L_c10
        call dword ptr [mem_00925134]
    L_c10:
        mov eax, dword ptr [ebp + 0x28]
        mov edx, dword ptr [eax + 0x4]
        mov esi, dword ptr [ebx + 0x4]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [edx + 0x18]
        lea edi, [ebx + 0x4]
        add esi, 0x4
        call eax
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [eax + 0x4]
        jne L_c11
        call dword ptr [mem_00925134]
    L_c11:
        mov ebp, dword ptr [ebp + 0x28]
        mov ecx, dword ptr [mem_00A9F224]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x24]
        push ecx
        mov ecx, ebp
        call eax
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, ebx
        mov byte ptr [esp + 0x48], 0x2
        call eax
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x44], 0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        mov dword ptr [esp + 0x50], 0x0
        call ext_005A3580
        mov ebx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x44], 0xffffffff
    L_body:
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        jmp L_loop
    L_exit:
        mov ecx, dword ptr [esp + 0x14]
        push 0x0
        add ebx, 0x160
        push ebx
        call ext_00587920
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 0x4
    }
}

// [0x005A1070] sub_005A1070 (224 bytes)
extern "C" void ext_00586300();
extern "C" void ext_00673C20();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005A1070(void* self, int edx_unused, void* arg0) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [eax + 0x4]
        lea esi, [edi + 0x8]
        push 0x2
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_00B40640]
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        lea ecx, [edi + 0x160]
        call ext_00586300
        mov ecx, dword ptr [edi + 0x590]
        mov eax, dword ptr [ecx]
        lea ebx, [edi + 0x58c]
        mov edi, ebx
        mov ebp, eax
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], ebp
    loop_start:
        test edi, edi
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [esp + 0x1c], edx
        je invalid1
        cmp edi, ebx
        je check_end
    invalid1:
        call dword ptr [mem_00925134]
    check_end:
        cmp ebp, dword ptr [esp + 0x1c]
        je loop_end
        test edi, edi
        jne check_node
        call dword ptr [mem_00925134]
    check_node:
        cmp ebp, dword ptr [edi + 0x4]
        jne do_body
        call dword ptr [mem_00925134]
    do_body:
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_00B40640]
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [ebp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        call ext_00586300
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
        jmp loop_start
    loop_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005A17D0] sub_005A17D0 (298 bytes)
extern "C" void ext_00582A70();
extern "C" void ext_00586D00();
extern "C" void ext_005A0F70();
extern "C" void ext_005A1070();
extern "C" void ext_00486E30();
extern "C" int mem_0094CE80;
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A17D0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        sub esp, 0Ch
        push esi
        mov esi, dword ptr [esp+14h]
        cmp dword ptr [esi+10h], 0
        mov dword ptr [esp+4], ecx
        jne L1802
        cmp dword ptr [esi+20h], 0
        jne L1802
        fld dword ptr [mem_0094CE80]
        push ecx
        lea ecx, [esi+24h]
        fstp dword ptr [esp]
        call ext_00582A70
        test al, al
        jne L18F3
L1802:
        mov eax, dword ptr [esi+1Ch]
        push ebx
        lea ebx, [esi+18h]
        push ebp
        mov ebp, dword ptr [eax]
        push edi
        mov dword ptr [esp+14h], ebx
        mov dword ptr [esp+18h], ebp
L1815:
        test ebx, ebx
        mov edi, dword ptr [esi+1Ch]
        lea eax, [esi+18h]
        je L1823
        cmp ebx, eax
        je L1829
L1823:
        call dword ptr [mem_00925134]
L1829:
        cmp ebp, edi
        je L18AC
        test ebx, ebx
        jne L1837
        call dword ptr [mem_00925134]
L1837:
        cmp ebp, dword ptr [ebx+4]
        jne L1842
        call dword ptr [mem_00925134]
L1842:
        mov ecx, dword ptr [esp+10h]
        lea esi, [ebp+0Ch]
        push esi
        call ext_005A0F70
        mov edi, eax
        test edi, edi
        je L1892
        cmp ebp, dword ptr [ebx+4]
        jne L1860
        call dword ptr [mem_00925134]
L1860:
        mov edx, dword ptr [edi+4]
        mov eax, dword ptr [esp+24h]
        mov edx, dword ptr [edx+0Ch]
        lea ebx, [edi+4]
        push eax
        mov ecx, ebx
        call edx
        mov edi, eax
        add esi, 1Ch
        mov ecx, 10h
        rep movsd
        mov ecx, dword ptr [esp+20h]
        mov edx, dword ptr [ecx+80h]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax+4]
        push edx
        mov ecx, ebx
        call eax
L1892:
        lea ecx, [esp+14h]
        call ext_00486E30
        mov ebp, dword ptr [esp+18h]
        mov ebx, dword ptr [esp+14h]
        mov esi, dword ptr [esp+20h]
        jmp L1815
L18AC:
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [ecx+8]
        mov eax, dword ptr [esp+24h]
        mov edx, dword ptr [edx+0Ch]
        add ecx, 8
        push eax
        call edx
        mov edi, eax
        add esi, 24h
        mov ecx, 10h
        rep movsd
        mov edi, dword ptr [esp+10h]
        mov eax, dword ptr [edi+4]
        mov edx, dword ptr [eax+0B0h]
        lea esi, [edi+4]
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_00586D00
        push 3
        mov ecx, edi
        call ext_005A1070
        pop edi
        pop ebp
        pop ebx
L18F3:
        pop esi
        add esp, 0Ch
        ret 8
    }
}

// [0x005A12B0] sub_005A12B0 (260 bytes)
extern "C" void ext_005A1150();
extern "C" void ext_005C2C30();
extern "C" void ext_005EBAC0();
extern "C" __declspec(naked) void __fastcall fn_005A12B0(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push 0
        mov ebx, ecx
        call ext_005A1150
        mov ecx, dword ptr [ebx + 0x59c]
        mov eax, dword ptr [ecx]
        lea edi, [ebx + 0x598]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebp
        nop
    L_loop1:
        test esi, esi
        mov edx, dword ptr [edi + 4]
        mov dword ptr [esp + 0x1c], edx
        je L_a
        cmp esi, edi
        je L_b
    L_a:
        call dword ptr [mem_00925134]
    L_b:
        cmp ebp, dword ptr [esp + 0x1c]
        je L_second
        test esi, esi
        jne L_c
        call dword ptr [mem_00925134]
    L_c:
        cmp ebp, dword ptr [esi + 4]
        jne L_d
        call dword ptr [mem_00925134]
    L_d:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [ebp + 0x28]
        push eax
        call ext_005C2C30
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop1
    L_second:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        lea ecx, [ebx + 0x160]
        call ext_005EBAC0
        mov edx, dword ptr [ebx + 0x590]
        mov eax, dword ptr [edx]
        lea edi, [ebx + 0x58c]
        mov esi, edi
        mov ebx, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop2:
        test esi, esi
        mov ebp, dword ptr [edi + 4]
        je L_e
        cmp esi, edi
        je L_f
    L_e:
        call dword ptr [mem_00925134]
    L_f:
        cmp ebx, ebp
        je L_end
        test esi, esi
        jne L_g
        call dword ptr [mem_00925134]
    L_g:
        cmp ebx, dword ptr [esi + 4]
        jne L_h
        call dword ptr [mem_00925134]
    L_h:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [ebx + 0x28]
        push eax
        call ext_005EBAC0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop2
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005A1640] sub_005A1640 (203 bytes)
extern "C" void ext_005A12B0();
extern "C" void ext_005A1150();
extern "C" void ext_005A1600();
extern "C" void ext_005B67C0();
extern "C" void ext_00673C20();
extern "C" void ext_00675050();
extern "C" void ext_00587110();
extern "C" int mem_00925134;
extern "C" void ext_005A0810();
extern "C" void ext_004F9EA0();
extern "C" void ext_004142E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_0093F8EC;
extern "C" __declspec(naked) void __fastcall fn_005A1640(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x5ec], 0
        je L_5A1704
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        push esi
        call ext_005A12B0
        cmp dword ptr [ebx + 0x5f0], 0
        push esi
        mov ecx, ebx
        jne L_5A1670
        push 0
        jmp L_5A1672
L_5A1670:
        push 3
L_5A1672:
        call ext_005A1150
        mov ecx, ebx
        call ext_005A1600
        mov eax, dword ptr [ebx + 0x59c]
        mov eax, dword ptr [eax]
        lea edi, [ebx + 0x598]
        mov esi, edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], eax
L_5A1696:
        test esi, esi
        mov ebp, dword ptr [edi + 4]
        je L_5A16A1
        cmp esi, edi
        je L_5A16A7
L_5A16A1:
        call dword ptr [mem_00925134]
L_5A16A7:
        cmp dword ptr [esp + 0x14], ebp
        je L_5A16EB
        test esi, esi
        jne L_5A16B7
        call dword ptr [mem_00925134]
L_5A16B7:
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [esi + 4]
        jne L_5A16C6
        call dword ptr [mem_00925134]
L_5A16C6:
        mov edx, dword ptr [esp + 0x14]
        fld dword ptr [mem_0093F8EC]
        push ecx
        mov ecx, dword ptr [edx + 0x28]
        fstp dword ptr [esp]
        call ext_005B67C0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov esi, dword ptr [esp + 0x10]
        jmp L_5A1696
L_5A16EB:
        lea esi, [ebx + 4]
        mov ecx, esi
        call ext_00587110
        mov ecx, dword ptr [ebx + 0x5fc]
        push esi
        call ext_00675050
        pop edi
        pop esi
        pop ebp
L_5A1704:
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x005A9BC0] sub_005A9BC0 (179 bytes)
extern "C" void ext_005A9110();
extern "C" int mem_0093BED0;
extern "C" int mem_00924FD4;
extern "C" int mem_0093BEDC;

extern "C" __declspec(naked) void* __fastcall fn_005A9BC0(void* self) {
    __asm {
        push    -0x1
        push    0x8a1ec8
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        call    ext_005A9110
        mov     dword ptr [esi], 0x95ecfc
        mov     dword ptr [esi + 0x4], 0x95ec0c
        mov     dword ptr [esi + 0x8], 0x95ebc4
        mov     dword ptr [esi + 0xc], 0x95eb84
        mov     dword ptr [esi + 0x10], 0x95eb34
        mov     dword ptr [esi + 0x154], 0x95eb1c
        mov     dword ptr [esi + 0x158], 0x95eb14
        mov     dword ptr [esi + 0x15c], 0x95eb0c
        mov     eax, dword ptr [mem_0093BED0]
        push    eax
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [mem_00924FD4]
        mov     ecx, dword ptr [mem_0093BEDC]
        push    ecx
        lea     ecx, [esi + 0x34]
        call    dword ptr [mem_00924FD4]
        push    0x95eaf0
        lea     ecx, [esi + 0x458]
        mov     byte ptr [esi + 0x4e2], 0x1
        call    dword ptr [mem_00924FD4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}

extern "C" void ext_004E7E40();
extern "C" void ext_0059FE40();
extern "C" void ext_0059FE80();
extern "C" void ext_005A0240();
extern "C" void ext_005A4740();

// [0x005A4740] sub_005A4740 (205 bytes)
extern "C" __declspec(naked) void __cdecl fn_005A4740(void* first, void* last, int ideal) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        cmp eax, 0x20
        jle L_LE_20
        mov esi, dword ptr [esp + 0x24]
        nop
    L_LOOP:
        test esi, esi
        jle L_SMALL_HI
        push edi
        lea eax, [esp + 0x14]
        push ebx
        push eax
        call ext_005A0240
        mov ebp, dword ptr [esp + 0x20]
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        mov esi, eax
        cdq
        sub eax, edx
        sar eax, 1
        add esi, eax
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, edi
        mov edx, eax
        sub ecx, ebp
        sub edx, ebx
        add esp, 0xc
        and ecx, -4
        and edx, -4
        cmp edx, ecx
        push esi
        jge L_RIGHT
        push eax
        push ebx
        call fn_005A4740
        mov ebx, ebp
        jmp L_AFTER
    L_RIGHT:
        push edi
        push ebp
        call fn_005A4740
        mov edi, dword ptr [esp + 0x1c]
    L_AFTER:
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        add esp, 0xc
        cmp eax, 0x20
        jg L_LOOP
    L_LE_20:
        cmp eax, 0x1
        jle L_EPILOG
        push 0
        push edi
        push ebx
        call ext_0059FE80
        add esp, 0xc
    L_EPILOG:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    L_SMALL_HI:
        cmp eax, 0x20
        jle L_LE_20
        mov eax, edi
        sub eax, ebx
        and eax, -4
        cmp eax, 0x4
        jle L_TAIL
        push 0
        push 0
        push edi
        push ebx
        call ext_0059FE40
        add esp, 0x10
    L_TAIL:
        push edi
        push ebx
        call ext_004E7E40
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x005A2640] sub_005A2640 (214 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005A2640(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8a1758
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xa8]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE0]
        mov esi, dword ptr [esp + 0xb4]
        mov ecx, 0x10
        lea edi, [esp + 0x60]
        rep movsd
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [ebx + 0x4]
        mov dword ptr [esp + 0xb0], 0
        call ext_005A0810
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0xa8], -1
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x18], 0
        jne L_5A2640_OK
        push ebp
        call ext_004F9EA0
        push eax
        lea ecx, [esp + 0x24]
        call ext_004142E0
        push 0x9d1278
        lea edx, [esp + 0x20]
        push edx
        call ext_006A6DD2
L_5A2640_OK:
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne L_5A2640_NZ1
        call ebx
L_5A2640_NZ1:
        mov edi, dword ptr [esp + 0x14]
        cmp edi, dword ptr [esi + 0x4]
        jne L_5A2640_NZ2
        call ebx
L_5A2640_NZ2:
        mov ecx, dword ptr [esp + 0xa0]
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 8
    }
}

// [0x005A1BA0] sub_005A1BA0 (229 bytes)
extern "C" void ext_00474540();
extern "C" void ext_0059E340();
extern "C" __declspec(naked) void __fastcall fn_005A1BA0(void* self) {
    __asm {
        push -1
        push 0x008B57BA
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x6c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x84]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x88]
        push eax
        lea ecx, [esp + 0x5c]
        mov dword ptr [esp + 0x80], 0
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x84], 1
        call ext_00474540
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x7c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x7c], -1
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x10], 0
        jne short L_005A1C52
        push edi
        call ext_0059E340
        push eax
        lea ecx, [esp + 0x1c]
        call ext_004142E0
        push 0x009D1278
        lea eax, [esp + 0x18]
        push eax
        call ext_006A6DD2
    L_005A1C52:
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne short L_005A1C63
        call ebx
    L_005A1C63:
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 0x4]
        jne short L_005A1C6E
        call ebx
    L_005A1C6E:
        mov ecx, dword ptr [esp + 0x78]
        pop ebx
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x78
        ret 0x8
    }
}

// [0x005A6130] sub_005A6130 (234 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00406510();
extern "C" void ext_00410390();
extern "C" void ext_00495CB0();
extern "C" int mem_00A34654;
extern "C" int mem_00924FC8;

extern "C" __declspec(naked) void __fastcall fn_005A6130(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a1908
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne short L_5a6161
        mov ecx, edi
        call ext_00410390
        test al, al
        je short L_5a617c
    L_5a6161:
        mov ecx, edi
        call ext_00410390
        test al, al
        jne short L_5a617c
        pop edi
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret
    L_5a617c:
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        xor ecx, ecx
        push ecx
        lea eax, [esp + 0x18]
        push eax
        mov edx, eax
        xor esi, esi
        push esi
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edx
        mov dword ptr [esp + 0x40], ebx
        call ext_00406510
        push ebx
        lea ecx, [esp + 0x18]
        push edi
        push ecx
        call ext_00495CB0
        mov esi, dword ptr [esp + 0x24]
        add esp, 0xc
        cmp esi, ebx
        je short L_5a61f5
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, ebx
        jbe short L_5a61f5
        mov edx, dword ptr [mem_00A34654]
        push edx
        push esi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je short L_5a61f5
        mov bl, 0x1
    L_5a61f5:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov al, bl
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret
    }
}

// [0x005A0810] sub_005A0810 (243 bytes)
extern "C" void ext_0059E2B0();
extern "C" void ext_005A0000();
extern "C" __declspec(naked) void __fastcall fn_005A0810(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0Ch
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 4]
        mov esi, dword ptr [edi + 4]
        cmp byte ptr [esi + 69h], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_LOOP_END
        nop
    L_LOOP:
        lea eax, [esi + 0Ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_NOTEQ
        mov esi, dword ptr [esi]
        jmp L_LOOP_CHK
    L_NOTEQ:
        mov esi, dword ptr [esi + 8]
    L_LOOP_CHK:
        cmp byte ptr [esi + 69h], 0
        je L_LOOP
    L_LOOP_END:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_TAIL
        mov ecx, dword ptr [ebp + 4]
        cmp edi, dword ptr [ecx]
        jne L_SLOW
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_005A0000
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1Ch]
        mov ecx, dword ptr [ecx + 4]
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    L_SLOW:
        lea ecx, [esp + 14h]
        call ext_0059E2B0
        mov esi, dword ptr [esp + 18h]
    L_TAIL:
        lea edx, [esi + 0Ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_FALSE
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_005A0000
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1Ch]
        mov ecx, dword ptr [ecx + 4]
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    L_FALSE:
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 8], 0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    }
}

// [0x005ADD30] sub_005ADD30 (243 bytes)
extern "C" void ext_005AC930();
extern "C" void ext_005AD1F0();

extern "C" __declspec(naked) void __fastcall fn_005ADD30(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0Ch
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 4]
        mov esi, dword ptr [edi + 4]
        cmp byte ptr [esi + 29h], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_5ADD75
        nop
    L_5ADD50:
        lea eax, [esi + 0Ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_5ADD6C
        mov esi, dword ptr [esi]
        jmp L_5ADD6F
    L_5ADD6C:
        mov esi, dword ptr [esi + 8]
    L_5ADD6F:
        cmp byte ptr [esi + 29h], 0
        je L_5ADD50
    L_5ADD75:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_5ADDC5
        mov ecx, dword ptr [ebp + 4]
        cmp edi, dword ptr [ecx]
        jne L_5ADDB8
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_005AD1F0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1Ch]
        mov ecx, dword ptr [ecx + 4]
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    L_5ADDB8:
        lea ecx, [esp + 14h]
        call ext_005AC930
        mov esi, dword ptr [esp + 18h]
    L_5ADDC5:
        lea edx, [esi + 0Ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_5ADE08
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_005AD1F0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1Ch]
        mov ecx, dword ptr [ecx + 4]
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    L_5ADE08:
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 8], 0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0Ch
        ret 8
    }
}

// [0x005A1C90] sub_005A1C90 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00A2E458;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_005A1C90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A1D24
        mov ecx, dword ptr [mem_00A2E458]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_005A1D24:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A1D90] sub_005A1D90 (254 bytes)
extern "C" int mem_00A2E45C;

extern "C" __declspec(naked) void* __fastcall fn_005A1D90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A1E24
        mov ecx, dword ptr [mem_00A2E45C]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_005A1E24:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A1E90] sub_005A1E90 (254 bytes)
extern "C" int mem_00A2E460;

extern "C" __declspec(naked) void* __fastcall fn_005A1E90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A1F24
        mov ecx, dword ptr [mem_00A2E460]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_005A1F24:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2040] sub_005A2040 (254 bytes)
extern "C" int mem_00A2E464;

extern "C" __declspec(naked) void* __fastcall fn_005A2040(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A20D4
        mov ecx, dword ptr [mem_00A2E464]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_005A20D4:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2140] sub_005A2140 (254 bytes)
extern "C" int mem_00A2E468;

extern "C" __declspec(naked) void* __fastcall fn_005A2140(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A21D4
        mov ecx, dword ptr [mem_00A2E468]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_005A21D4:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2240] sub_005A2240 (254 bytes)
extern "C" int mem_00A2E46C;

extern "C" __declspec(naked) void* __fastcall fn_005A2240(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1742
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A22D4
        mov ecx, dword ptr [mem_00A2E46C]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
loc_005A22D4:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2340] sub_005A2340 (254 bytes)
extern "C" int mem_00AC74E4;

extern "C" __declspec(naked) void* __fastcall fn_005A2340(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_005A23D4
        mov ecx, dword ptr [mem_00AC74E4]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
loc_005A23D4:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2440] sub_005A2440 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00A2E470;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_005A2440(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je done_5A2440
        mov ecx, dword ptr [mem_00A2E470]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    done_5A2440:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A2540] sub_005A2540 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00A9FB00;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_005A2540(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je done_5A2540
        mov ecx, dword ptr [mem_00A9FB00]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    done_5A2540:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x005A3C10] sub_005A3C10 (295 bytes)
extern "C" void ext_00596A70();
extern "C" void ext_005EBB60();
extern "C" void ext_00673C20();
extern "C" void ext_005BE990();
extern "C" void ext_0059DEC0();
extern "C" void ext_0060BB70();

extern "C" __declspec(naked) void __fastcall fn_005A3C10(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x160]
        call ext_005EBB60
        mov ecx, dword ptr [esi + 0x590]
        mov eax, dword ptr [ecx]
        lea ebx, [esi + 0x58c]
        mov edi, ebx
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], eax
    loop_top:
        test edi, edi
        mov ebp, dword ptr [ebx + 0x4]
        je bad_1
        cmp edi, ebx
        je ok_1
    bad_1:
        call dword ptr [mem_00925134]
    ok_1:
        cmp dword ptr [esp + 0x14], ebp
        je done_block
        test edi, edi
        jne ok_2
        call dword ptr [mem_00925134]
    ok_2:
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [edi + 0x4]
        jne ok_3
        call dword ptr [mem_00925134]
    ok_3:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 0x28]
        push eax
        call ext_005EBB60
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x10]
        jmp loop_top
    done_block:
        mov edi, dword ptr [esi + 0x59c]
        xor edx, edx
        push edx
        lea eax, [esi + 0x598]
        mov ecx, offset ext_005BE990
        push ecx
        push edi
        push eax
        mov ebx, edi
        mov ebx, dword ptr [ebx]
        push ebx
        push eax
        lea edx, [esp + 0x28]
        push edx
        call ext_005B8EA0
        mov edi, dword ptr [esi + 0x554]
        xor edx, edx
        push edx
        lea eax, [esi + 0x550]
        mov ecx, offset ext_0059DEC0
        push ecx
        push edi
        push eax
        mov ebx, edi
        mov ebx, dword ptr [ebx]
        push ebx
        push eax
        lea eax, [esp + 0x44]
        push eax
        xor ebp, ebp
        call ext_005B8EA0
        mov ecx, dword ptr [esi + 0x560]
        lea eax, [esi + 0x55c]
        push offset ext_0060BB70
        push ecx
        push eax
        mov edx, ecx
        mov edx, dword ptr [edx]
        push edx
        push eax
        lea eax, [esp + 0x68]
        push eax
        call ext_00596A70
        mov ecx, dword ptr [esi + 0x5ec]
        add esp, 0x50
        cmp ecx, ebp
        je skip_release
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    skip_release:
        fld1
        mov dword ptr [esi + 0x5ec], ebp
        pop edi
        fstp dword ptr [esi + 0x604]
        mov dword ptr [esi + 0x5f4], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x005A3DF0] sub_005A3DF0 (296 bytes)
extern "C" void ext_005A2640();
extern "C" void ext_005B0780();
extern "C" __declspec(naked) void __fastcall fn_005A3DF0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ebp, ecx
        push edi
        mov ecx, esi
        call ext_005B0780
        lea eax, [ebp + 0x18]
        push eax
        lea ecx, [esi + 0x64]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x80], 0x2
        mov edx, dword ptr [ebp + 0x164]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [ebp + 0x164]
        lea edi, [esi + 0x14]
        push eax
        lea esi, [ebp + 0x160]
        call edx
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        push eax
        mov ecx, edi
        call ext_005A2640
        mov eax, dword ptr [ebp + 0x5a8]
        mov edi, dword ptr [eax]
        lea ebx, [ebp + 0x5a4]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], edi
    L_loop_check:
        test ebx, ebx
        mov esi, dword ptr [ebp + 0x5a8]
        lea eax, [ebp + 0x5a4]
        je L_invalid_1
        cmp ebx, eax
        je L_check_end
    L_invalid_1:
        call dword ptr [mem_00925134]
    L_check_end:
        cmp edi, esi
        je L_done_loop
        test ebx, ebx
        mov esi, dword ptr [mem_00925134]
        jne L_not_null
        call esi
    L_not_null:
        cmp edi, dword ptr [ebx + 0x4]
        jne L_not_end_1
        call esi
    L_not_end_1:
        mov ecx, dword ptr [edi + 0x28]
        cmp byte ptr [ecx + 0x179], 0x0
        jne L_next_iter
        cmp edi, dword ptr [ebx + 0x4]
        jne L_not_end_2
        call esi
    L_not_end_2:
        mov esi, dword ptr [edi + 0x28]
        add esi, 0x4
        cmp edi, dword ptr [ebx + 0x4]
        jne L_not_end_3
        call dword ptr [mem_00925134]
    L_not_end_3:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        add edi, 0xc
        push edi
        add ecx, 0x14
        call ext_005A2640
    L_next_iter:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
        jmp L_loop_check
    L_done_loop:
        mov eax, dword ptr [ebp + 0x8]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [ebp + 0x8]
        push edx
        call eax
        mov edi, dword ptr [esp + 0x1c]
        add edi, 0x24
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}

// [0x005AE5B0] sub_005AE5B0 (367 bytes)
extern "C" void ext_005ADD30();
extern "C" int mem_00925014;
extern "C" int mem_00924EC4;

extern "C" __declspec(naked) void __fastcall fn_005AE5B0(void* self) {
    __asm {
        sub esp, 0x3c
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x2c]
        mov ecx, dword ptr [eax + 0x4]
        push esi
        lea esi, [ebx + 0x28]
        push edi
        push ecx
        mov ecx, esi
        call ext_005AE170
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        xor ebp, ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov edx, dword ptr [ebx + 0x38]
        mov eax, dword ptr [edx + 0x4]
        lea edi, [ebx + 0x34]
        push eax
        mov ecx, edi
        call ext_005AE170
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [edi + 0x8], ebp
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov ecx, dword ptr [ebx + 0x44]
        mov edx, dword ptr [ecx + 0x4]
        lea ebp, [ebx + 0x40]
        push edx
        mov ecx, ebp
        call ext_005AE170
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [ebp + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [ebx + 0x20]
        mov ecx, dword ptr [eax]
        add ebx, 0x1c
        mov eax, ebx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], ecx
    L_5ae640:
        test eax, eax
        mov ecx, dword ptr [ebx + 0x4]
        mov dword ptr [esp + 0x24], ecx
        je L_5ae64f
        cmp eax, ebx
        je L_5ae659
    L_5ae64f:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x18]
    L_5ae659:
        mov edx, dword ptr [esp + 0x24]
        cmp dword ptr [esp + 0x1c], edx
        je L_5ae717
        test eax, eax
        jne L_5ae675
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x18]
    L_5ae675:
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_5ae684
        call dword ptr [mem_00925134]
    L_5ae684:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [mem_00A88880]
        push 0x0
        add ecx, 0xc
        push edx
        mov dword ptr [esp + 0x1c], ecx
        call dword ptr [mem_00925014]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        mov edx, dword ptr [mem_00A88884]
        mov ecx, dword ptr [esp + 0x14]
        push 0x0
        push edx
        setne byte ptr [esp + 0x1b]
        call dword ptr [mem_00925014]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        setne al
        cmp byte ptr [esp + 0x13], 0x0
        je L_5ae6e2
        test al, al
        jne L_5ae6e6
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        lea edx, [esp + 0x38]
        push edx
        mov ecx, esi
        jmp L_5ae700
    L_5ae6e2:
        test al, al
        jne L_5ae6f4
    L_5ae6e6:
        mov edx, dword ptr [esp + 0x14]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, ebp
        jmp L_5ae700
    L_5ae6f4:
        mov eax, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x40]
        push eax
        push ecx
        mov ecx, edi
    L_5ae700:
        call ext_005ADD30
        lea ecx, [esp + 0x18]
        call ext_005AC8C0
        mov eax, dword ptr [esp + 0x18]
        jmp L_5ae640
    L_5ae717:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret
    }
}

// [0x005AED80] sub_005AED80 (381 bytes)
extern "C" {
    void ext_0040ECB0();
    void ext_00435D00();
    void ext_005ADD30();
    void ext_00664C60();
    void ext_00674150();
    extern int mem_00924FEC;
    extern int mem_00924FF4;
    extern int mem_00924E90;
    extern int mem_00924FA0;
    extern int mem_00924E94;
    extern int mem_00925134;
    extern int mem_00924E98;
}

extern "C" __declspec(naked) void __fastcall fn_005AED80(void* self, void* dummy, void* arg) {
    __asm {
        push    -0x1
        push    0x8848f2
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        mov     ebp, ecx
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    edx
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     dword ptr [esp + 0x64], 0x0
        call    ext_00664C60
        add     esp, 0x8
        mov     ecx, eax
        mov     byte ptr [esp + 0x5c], 0x1
        call    dword ptr [mem_00924FEC]
        test    al, al
        lea     ecx, [esp + 0x38]
        sete    bl
        mov     byte ptr [esp + 0x5c], 0x0
        call    dword ptr [mem_00924FF4]
        test    bl, bl
        je      L_5aeeb3
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [ebp + 0x1c]
        call    ext_005ADD30
        cmp     byte ptr [eax + 0x8], 0x0
        jne     L_5aee3f
        mov     ecx, dword ptr [mem_00924E90]
        mov     eax, dword ptr [mem_00924FA0]
        push    ecx
        push    0x95f684
        lea     edx, [esp + 0x24]
        push    edx
        push    0x95f67c
        push    eax
        call    ext_00435D00
        add     esp, 0x8
        push    eax
        call    dword ptr [mem_00924E94]
        add     esp, 0x8
        push    eax
        jmp     L_5aeec6
    L_5aee3f:
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebp + 0x68]
        call    ext_0040ECB0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebp + 0x5c]
        call    ext_00674150
        mov     dword ptr [eax], esi
        mov     edi, dword ptr [esi + 0x80]
        cmp     edi, dword ptr [esi + 0x84]
        jbe     L_5aee70
        call    dword ptr [mem_00925134]
        nop
    L_5aee70:
        mov     ebx, dword ptr [esi + 0x84]
        cmp     dword ptr [esi + 0x80], ebx
        jbe     L_5aee84
        call    dword ptr [mem_00925134]
    L_5aee84:
        cmp     edi, ebx
        je      L_5aeed6
        cmp     edi, dword ptr [esi + 0x84]
        jb      L_5aee96
        call    dword ptr [mem_00925134]
    L_5aee96:
        mov     eax, dword ptr [edi]
        push    eax
        mov     ecx, ebp
        call    fn_005AED80
        cmp     edi, dword ptr [esi + 0x84]
        jb      L_5aeeae
        call    dword ptr [mem_00925134]
    L_5aeeae:
        add     edi, 0x4
        jmp     L_5aee70
    L_5aeeb3:
        mov     ecx, dword ptr [mem_00924E90]
        mov     edx, dword ptr [mem_00924FA0]
        push    ecx
        push    0x95f668
        push    edx
    L_5aeec6:
        call    ext_00435D00
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
    L_5aeed6:
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x5c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x50
        ret     0x4
    }
}

// [0x005AE720] sub_005AE720 (409 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AE720(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        push    -0x1
        push    0x8a2a89
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x50]
        mov     ecx, dword ptr [eax + 0x4]
        lea     edi, [ebp + 0x4c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebp
        call    fn_005AE170
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0x4], eax
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [edi + 0x8], 0x0
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [edi + 0x4]
        lea     esi, [ebp + 0x28]
        mov     dword ptr [eax + 0x8], eax
        mov     eax, dword ptr [esi + 0x4]
        mov     eax, dword ptr [eax]
        mov     ebx, eax
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], ebx
    L_5ae783:
        test    esi, esi
        mov     edx, dword ptr [ebp + 0x2c]
        lea     eax, [ebp + 0x28]
        mov     dword ptr [esp + 0x38], edx
        je      L_5ae795
        cmp     esi, eax
        je      L_5ae79b
    L_5ae795:
        call    dword ptr [mem_00925134]
    L_5ae79b:
        cmp     ebx, dword ptr [esp + 0x38]
        je      L_5ae8a6
        test    esi, esi
        jne     L_5ae7af
        call    dword ptr [mem_00925134]
    L_5ae7af:
        cmp     ebx, dword ptr [esi + 0x4]
        jne     L_5ae7ba
        call    dword ptr [mem_00925134]
    L_5ae7ba:
        sub     esp, 0x1c
        add     ebx, 0xc
        mov     ecx, esp
        mov     dword ptr [esp + 0x34], esp
        push    ebx
        mov     dword ptr [esp + 0x30], ebx
        call    dword ptr [mem_00924FE0]
        lea     eax, [esp + 0x70]
        push    eax
        call    fn_005AC4D0
        add     esp, 0x20
        lea     ecx, [esp + 0x54]
        lea     esi, [ebp + 0x34]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x80], 0x0
        call    fn_005AD010
        test    esi, esi
        mov     ebx, eax
        mov     dword ptr [esp + 0x28], ebx
        jne     L_5ae808
        call    dword ptr [mem_00925134]
    L_5ae808:
        cmp     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x24], esi
        je      L_5ae82d
        add     ebx, 0xc
        lea     edx, [esp + 0x54]
        push    ebx
        push    edx
        call    dword ptr [mem_00924EF4]
        add     esp, 0x8
        test    al, al
        jne     L_5ae82d
        lea     eax, [esp + 0x24]
        jmp     L_5ae83c
    L_5ae82d:
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x2c], esi
        lea     eax, [esp + 0x2c]
    L_5ae83c:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     ebx, dword ptr [eax + 0x4]
        mov     ebp, dword ptr [esi + 0x4]
        je      L_5ae84c
        cmp     ecx, esi
        je      L_5ae852
    L_5ae84c:
        call    dword ptr [mem_00925134]
    L_5ae852:
        cmp     ebx, ebp
        je      L_5ae864
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, edi
        jmp     L_5ae875
    L_5ae864:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x48]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        add     ecx, 0x40
    L_5ae875:
        call    fn_005ADD30
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x7c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x1c]
        call    fn_005AC8C0
        mov     ebx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x14]
        jmp     L_5ae783
    L_5ae8a6:
        mov     ecx, dword ptr [esp + 0x74]
        pop     edi
        mov     dword ptr fs:[0x0], ecx
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x005A5240] sub_005A5240 (434 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_005A0970();
extern "C" void ext_005A2240();
extern "C" void ext_005AE480();
extern "C" void ext_00621B30();
extern "C" void ext_00621D50();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F584;
extern "C" __declspec(naked) void __fastcall fn_005A5240(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891cab
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [ecx + 0x584]
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x580]
        mov ecx, dword ptr [eax]
        push edi
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0970
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x38]
        cmp edi, 0xb53a34
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        je L_end
        cmp edi, 0xb53b30
        je L_end
        cmp edi, 0xb53ab0
        je L_end
        cmp edi, 0xb53a70
        je L_end
        cmp edi, 0xb53af0
        je L_end
        mov ebx, dword ptr [edi + 0x28]
        add edi, 0x24
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebx
        call ext_00427A60
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], ebx
        lea ecx, [esp + 0x1c]
L_loop:
        call ext_00427A60
        mov ebx, dword ptr [esp + 0x14]
        xor ebp, ebp
        cmp ebx, ebp
        je L_c
        cmp ebx, dword ptr [esp + 0x20]
        je L_d
L_c:
        call dword ptr [mem_00925134]
L_d:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x24]
        jae L_end
        push 0x20
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x38], eax
        cmp eax, ebp
        mov dword ptr [esp + 0x30], ebp
        je L_e
        mov ecx, eax
        call ext_00621B30
        mov ebp, eax
L_e:
        test ebx, ebx
        mov dword ptr [esp + 0x30], -1
        jne L_f
        call dword ptr [mem_00925134]
L_f:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_g
        call dword ptr [mem_00925134]
L_g:
        mov eax, dword ptr [edi]
        push eax
        mov ecx, ebp
        call ext_00621D50
        cmp edi, dword ptr [ebx + 0x8]
        jb L_h
        call dword ptr [mem_00925134]
L_h:
        mov edx, dword ptr [mem_00A9F584]
        mov ecx, dword ptr [edi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        push ebp
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push ecx
        mov ecx, eax
        call edx
        mov ecx, esi
        call ext_005A2240
        cmp edi, dword ptr [ebx + 0x8]
        jb L_i
        call dword ptr [mem_00925134]
L_i:
        add edi, 0x4
        mov dword ptr [esp + 0x18], edi
        lea ecx, [esp + 0x10]
        jmp L_loop
L_end:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x24
        ret 0x4
    }
}

// [0x005A73B0] sub_005A73B0 (436 bytes)
extern "C" void ext_005A2140();
extern "C" void ext_005A7060();
extern "C" void ext_005AE480();
extern "C" void ext_005A0910();
extern "C" void ext_00427A60();
extern "C" void ext_006A5C62();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F838;
extern "C" __declspec(naked) void __fastcall fn_005A73B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891cab
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [ecx + 0x578]
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x574]
        mov ecx, dword ptr [eax]
        push edi
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x38]
        cmp edi, 0xb53a34
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        je L_end
        cmp edi, 0xb53b30
        je L_end
        cmp edi, 0xb53ab0
        je L_end
        cmp edi, 0xb53a70
        je L_end
        cmp edi, 0xb53af0
        je L_end
        mov ebx, dword ptr [edi + 0x28]
        add edi, 0x24
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebx
        call ext_00427A60
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], ebx
        lea ecx, [esp + 0x1c]
        call ext_00427A60
L_loop:
        mov ebp, dword ptr [esp + 0x14]
        xor ebx, ebx
        cmp ebp, ebx
        je L_bad1
        cmp ebp, dword ptr [esp + 0x20]
        je L_ok3
L_bad1:
        call dword ptr [mem_00925134]
L_ok3:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x24]
        jae L_end
        push 0x54
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x38], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x30], ebx
        je L_skip1
        mov ecx, eax
        call ext_005A7060
        mov ebx, eax
L_skip1:
        test ebp, ebp
        mov dword ptr [esp + 0x30], 0xffffffff
        jne L_ok4
        call dword ptr [mem_00925134]
L_ok4:
        cmp edi, dword ptr [ebp + 0x8]
        jb L_ok5
        call dword ptr [mem_00925134]
L_ok5:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, ebx
        call eax
        cmp edi, dword ptr [ebp + 0x8]
        jb L_ok6
        call dword ptr [mem_00925134]
L_ok6:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [edi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        push ebx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push ecx
        mov ecx, eax
        call edx
        mov ecx, esi
        call ext_005A2140
        cmp edi, dword ptr [ebp + 0x8]
        jb L_ok7
        call dword ptr [mem_00925134]
L_ok7:
        add edi, 0x4
        mov dword ptr [esp + 0x18], edi
        lea ecx, [esp + 0x10]
        jmp L_loop
L_end:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x24
        ret 4
    }
}

// [0x005A7B30] sub_005A7B30 (458 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_005A0910();
extern "C" void ext_005A71E0();
extern "C" void ext_005A7320();
extern "C" void ext_005AE480();
extern "C" void ext_00623790();
extern "C" void ext_0063EFE0();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A7B30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3ea4
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x56c]
        mov ecx, dword ptr [eax]
        lea esi, [ebp + 0x568]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x4c]
        cmp eax, 0xb53a34
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        je fn_end
        cmp eax, 0xb53b30
        je fn_end
        cmp eax, 0xb53ab0
        je fn_end
        cmp eax, 0xb53a70
        je fn_end
        cmp eax, 0xb53af0
        je fn_end
        lea esi, [eax + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], edi
        call ext_00427A60
        push ebx
L_top:
        mov edi, dword ptr [esp + 0x14]
        xor ebx, ebx
        cmp edi, ebx
        je L_c
        cmp edi, dword ptr [esp + 0x20]
        je L_d
L_c:
        call dword ptr [mem_00925134]
L_d:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_pop
        push 0x2c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x54], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x4c], ebx
        je L_e
        mov ecx, eax
        call ext_005A71E0
        mov ebx, eax
L_e:
        test edi, edi
        mov dword ptr [esp + 0x4c], 0xffffffff
        jne L_f
        call dword ptr [mem_00925134]
L_f:
        cmp esi, dword ptr [edi + 0x8]
        jb L_g
        call dword ptr [mem_00925134]
L_g:
        mov eax, dword ptr [esi]
        push eax
        mov ecx, ebx
        call ext_00623790
        cmp esi, dword ptr [edi + 0x8]
        jb L_h
        call dword ptr [mem_00925134]
L_h:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, eax
        call edx
        push ebx
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x54], 1
        call ext_005A7320
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4c], -1
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_i
        call dword ptr [mem_00925134]
L_i:
        add esi, 4
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x18], esi
        call ext_00427A60
        jmp L_top
L_pop:
        pop ebx
        pop edi
fn_end:
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 4
    }
}

// [0x005A0000] sub_005A0000 (508 bytes)
extern "C" void ext_00486D80();
extern "C" void ext_00486DD0();
extern "C" void ext_00489390();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_005A0000(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x2c8590a
        jb L_005a007d
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_005a007d:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_00489390
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_005a00b7
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_005a00d9
    L_005a00b7:
        cmp byte ptr [esp + 0x68], 0x0
        je L_005a00cb
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_005a00d9
        mov dword ptr [eax], ebp
        jmp L_005a00d9
    L_005a00cb:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_005a00d9
        mov dword ptr [eax + 0x8], ebp
    L_005a00d9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x68], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_005a01d5
        jmp L_005a00f0
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_005a00f0:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_005a014a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x68], 0x0
        jne L_005a011b
        mov byte ptr [ecx + 0x68], bl
        mov byte ptr [edx + 0x68], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x68], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_005a01c5
    L_005a011b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_005a012a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00486D80
    L_005a012a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x68], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x68], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00486DD0
        jmp L_005a01c5
    L_005a014a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x68], 0x0
        jne L_005a0168
        mov byte ptr [ecx + 0x68], bl
        mov byte ptr [edx + 0x68], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x68], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_005a01c5
    L_005a0168:
        cmp esi, dword ptr [ecx]
        jne L_005a0176
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00486DD0
    L_005a0176:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x68], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x68], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x69], 0x0
        jne L_005a019f
        mov dword ptr [edx + 0x4], eax
    L_005a019f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_005a01b2
        mov dword ptr [edx + 0x4], ecx
        jmp L_005a01c0
    L_005a01b2:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_005a01bd
        mov dword ptr [edx], ecx
        jmp L_005a01c0
    L_005a01bd:
        mov dword ptr [edx + 0x8], ecx
    L_005a01c0:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_005a01c5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x68], 0x0
        lea eax, [esi + 0x4]
        je L_005a00f0
    L_005a01d5:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x68], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}
