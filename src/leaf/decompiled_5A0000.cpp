// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

extern "C" void ext_005A1070();
extern "C" void ext_006657F0();

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
