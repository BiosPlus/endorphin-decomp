// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

extern "C" void ext_005A1070();
extern "C" void ext_006657F0();
extern "C" void ext_0059F5C0();
extern "C" int mem_00924FE8;
extern "C" void ext_005BF5F0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

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
