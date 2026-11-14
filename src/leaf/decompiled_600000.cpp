// Decompiled translation unit: src/leaf/decompiled_600000.cpp

// [0x00609730] sub_00609730 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_00609730(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x0C // mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x04 // mov eax, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x24 // mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}

extern "C" void ext_00602F20();

// [0x00602F40] sub_00602F40 (9 bytes)
extern "C" __declspec(naked) float __cdecl fn_00602F40() {
    __asm {
        call ext_00602F20
        fld dword ptr [eax + 0x8]
        ret
    }
}

extern "C" void ext_00602810();
extern "C" void ext_00620BC0();
extern "C" void ext_0062E120();

// [0x00602D50] sub_00602D50 (15 bytes)
extern "C" void __cdecl fn_00602D50() {
    ext_00602810();
    ext_00620BC0();
    ext_0062E120();
}

// [0x0060E860] sub_0060E860 (33 bytes)
extern "C" int __fastcall fn_0060E860(void* self) {
    int begin = *(int*)((char*)self + 0x4);
    if (begin == 0) {
        return 0;
    }
    int diff = *(int*)((char*)self + 0x8) - begin;
    return diff / 56;
}

extern "C" int mem_00B478D8;
extern "C" int mem_00B478D4;

// [0x0060A520] sub_0060A520 (35 bytes)
extern "C" int* __cdecl fn_0060A520() {
    if (!(mem_00B478D8 & 1)) {
        mem_00B478D8 |= 1;
        mem_00B478D4 = 0x971f90;
    }
    return &mem_00B478D4;
}

// [0x00602EC0] sub_00602EC0 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_00602EC0(void* self) {
    __asm {
        fldz
        mov eax, ecx
        mov dword ptr [eax], 0x0096F81C
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        fst dword ptr [eax + 0x1C]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x20]
        ret
    }
}

// [0x0060B050] sub_0060B050 (46 bytes)
extern "C" void* __stdcall fn_0060B050(void* dst, unsigned int count, const void* src) {
    unsigned int n = count;
    unsigned int* p = (unsigned int*)dst;
    if (n > 0) {
        do {
            *p = *(const unsigned int*)src;
            n = n - 1;
            p = p + 1;
        } while (n > 0);
    }
    return (char*)dst + count * 4;
}

extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;

// [0x0060B8D0] sub_0060B8D0 (62 bytes)
// Formats into a local buffer via _snprintf, then constructs the std::string at a1 from it; returns a1.
extern "C" __declspec(naked) void* __cdecl fn_0060B8D0(void* a1, int a2) {
    __asm {
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x40]
        push esi
        push eax
        push 0x9720e8
        lea ecx, [esp + 0x10]
        push 0x32
        push ecx
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x50]
        add esp, 0x10
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x0060C4C0] sub_0060C4C0 (77 bytes)
extern "C" void ext_0060BCC0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060C4C0(void* self) {
    __asm {
        push -1
        push 0x008A8748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0060BCC0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006053C0] sub_006053C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B476E0;
extern "C" int mem_00B476DC;

extern "C" __declspec(naked) void* __fastcall fn_006053C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7d6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B476E0], al
        jne L_done
        or dword ptr [mem_00B476E0], eax
        mov ecx, offset mem_00B476DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B476DC], 0x96f934
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B476DC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605420] sub_00605420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B476E8;
extern "C" int mem_00B476E4;

extern "C" __declspec(naked) void* __fastcall fn_00605420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7d8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B476E8], al
        jne L_done
        or dword ptr [mem_00B476E8], eax
        mov ecx, offset mem_00B476E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B476E4], 0x96fa0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B476E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605480] sub_00605480 (87 bytes)
extern "C" int mem_00B476F0;
extern "C" int mem_00B476EC;

extern "C" __declspec(naked) void* __fastcall fn_00605480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7dae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B476F0], al
        jne L_done
        or dword ptr [mem_00B476F0], eax
        mov ecx, offset mem_00B476EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B476EC], 0x96fae4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B476EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006054E0] sub_006054E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B476F8;
extern "C" int mem_00B476F4;

extern "C" __declspec(naked) void* __fastcall fn_006054E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7dce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B476F8], al
        jne L_done
        or dword ptr [mem_00B476F8], eax
        mov ecx, offset mem_00B476F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B476F4], 0x96fbbc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B476F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605540] sub_00605540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47700;
extern "C" int mem_00B476FC;

extern "C" __declspec(naked) void* __fastcall fn_00605540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7dee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47700], al
        jne L_done
        or dword ptr [mem_00B47700], eax
        mov ecx, offset mem_00B476FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B476FC], 0x96fc94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B476FC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006055A0] sub_006055A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47708;
extern "C" int mem_00B47704;

extern "C" __declspec(naked) void* __fastcall fn_006055A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7e0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47708], al
        jne L_done
        or dword ptr [mem_00B47708], eax
        mov ecx, offset mem_00B47704
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47704], 0x96fd6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47704
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605600] sub_00605600 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47710;
extern "C" int mem_00B4770C;

extern "C" __declspec(naked) void* __fastcall fn_00605600(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7e2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47710], al
        jne L_done
        or dword ptr [mem_00B47710], eax
        mov ecx, offset mem_00B4770C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4770C], 0x96fe44
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4770C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605660] sub_00605660 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47718;
extern "C" int mem_00B47714;

extern "C" __declspec(naked) void* __fastcall fn_00605660(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7e4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47718], al
        jne L_done
        or dword ptr [mem_00B47718], eax
        mov ecx, offset mem_00B47714
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47714], 0x96ff1c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47714
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006056C0] sub_006056C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47720;
extern "C" int mem_00B4771C;

extern "C" __declspec(naked) void* __fastcall fn_006056C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7e6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47720], al
        jne L_done
        or dword ptr [mem_00B47720], eax
        mov ecx, offset mem_00B4771C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4771C], 0x96fff4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4771C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605720] sub_00605720 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47728;
extern "C" int mem_00B47724;

extern "C" __declspec(naked) void* __fastcall fn_00605720(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7e8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47728], al
        jne L_done
        or dword ptr [mem_00B47728], eax
        mov ecx, offset mem_00B47724
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47724], 0x9700cc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47724
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605780] sub_00605780 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47730;
extern "C" int mem_00B4772C;

extern "C" __declspec(naked) void* __fastcall fn_00605780(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7eae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47730], al
        jne L_done
        or dword ptr [mem_00B47730], eax
        mov ecx, offset mem_00B4772C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4772C], 0x9701a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4772C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006057E0] sub_006057E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47738;
extern "C" int mem_00B47734;

extern "C" __declspec(naked) void* __fastcall fn_006057E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7ece
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47738], al
        jne L_done
        or dword ptr [mem_00B47738], eax
        mov ecx, offset mem_00B47734
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47734], 0x97027c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47734
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605840] sub_00605840 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47740;
extern "C" int mem_00B4773C;

extern "C" __declspec(naked) void* __fastcall fn_00605840(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7eee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47740], al
        jne L_done
        or dword ptr [mem_00B47740], eax
        mov ecx, offset mem_00B4773C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4773C], 0x970354
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4773C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006058A0] sub_006058A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47748;
extern "C" int mem_00B47744;

extern "C" __declspec(naked) void* __fastcall fn_006058A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7f0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47748], al
        jne L_done
        or dword ptr [mem_00B47748], eax
        mov ecx, offset mem_00B47744
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47744], 0x97042c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47744
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00605900] sub_00605900 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47750;
extern "C" int mem_00B4774C;

extern "C" __declspec(naked) void* __fastcall fn_00605900(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7f2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47750], al
        jne L_done
        or dword ptr [mem_00B47750], eax
        mov ecx, offset mem_00B4774C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4774C], 0x970504
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4774C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_0067A670();
extern "C" int mem_00B478D0;
extern "C" int mem_00B478CC;

// [0x0060A1E0] sub_0060A1E0 (87 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060A1E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a834e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B478D0], al
        jne L_done
        or dword ptr [mem_00B478D0], eax
        mov ecx, offset mem_00B478CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B478CC], 0x971ebc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B478CC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00609670] sub_00609670 (88 bytes)
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) bool __fastcall fn_00609670(void* self, int edx_unused, void* other) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov esi, ecx
        lea edi, [ebp + 0x4]
        lea ebx, [esi + 0x4]
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne ret_true
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je ret_false
        add ebp, 0x20
        push ebp
        add esi, 0x20
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne ret_true
ret_false:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
ret_true:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x0060A340] sub_0060A340 (85 bytes)
extern "C" void ext_00609670();

extern "C" __declspec(naked) void __cdecl fn_0060A340(int* a1, int* a2, int* a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        push eax
        call ext_00609670
        test al, al
        je L_0060A360
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
    L_0060A360:
        mov eax, dword ptr [esi]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        call ext_00609670
        test al, al
        je L_0060A37B
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
    L_0060A37B:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00609670
        test al, al
        pop ebx
        je L_0060A392
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
    L_0060A392:
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

// [0x006098F0] sub_006098F0 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_006098F0(void* self) {
    __asm {
        push -1
        push 0x00891c94
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00661980
        lea ecx, [esi + 0x04]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x00971af4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x20]
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

// [0x006096D0] sub_006096D0 (91 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006096D0(void* self) {
    __asm {
        push -1
        push 0x00891C94
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00602F70] sub_00602F70 (91 bytes)
extern "C" void ext_00602EC0();
extern "C" void ext_0060BCD0();

extern "C" __declspec(naked) void* __fastcall fn_00602F70(void* self) {
    __asm {
        push -1
        push 0x008A7D28
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00602EC0
        fldz
        xor eax, eax
        fst dword ptr [esi + 0x2c]
        lea ecx, [esi + 0x38]
        fstp dword ptr [esi + 0x30]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi], 0x0096F8A4
        mov dword ptr [esi + 0x34], eax
        call ext_0060BCD0
        lea ecx, [esi + 0x4C]
        call ext_0060BCD0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060BA10] sub_0060BA10 (97 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060BA10(void* self) {
    __asm {
        push -1
        push 0x008A8684
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009720F4
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060B910] sub_0060B910 (98 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_0060B910(void* self) {
    __asm {
        push -1
        push 0x008a8684
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x04]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x009720f4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 0x40], 0
        mov dword ptr [esi + 0x3c], 0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060C570] sub_0060C570 (33 bytes)
extern "C" void ext_0060B910();
extern "C" __declspec(naked) void* __fastcall fn_0060C570(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0060B910
        lea ecx, [esi + 0x48]
        mov dword ptr [esi], 0x0097215c
        mov dword ptr [esi + 0x44], 0x0
        call ext_0060BCD0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0060D730] sub_0060D730 (65 bytes)
extern "C" void ext_0060B910();

extern "C" __declspec(naked) void __fastcall fn_0060D730(void* self) {
    __asm {
        push -1
        push 0x008A87A8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_0060B910
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x009723F4
        xor eax, eax
        mov dword ptr [esi + 0x48], eax
        mov dword ptr [esi + 0x4C], eax
        mov dword ptr [esi + 0x50], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060CCC0] sub_0060CCC0 (85 bytes)
extern "C" void ext_0060BDF0();
extern "C" void ext_0060C570();
extern "C" __declspec(naked) void* __fastcall fn_0060CCC0(void* self) {
    __asm {
        push -0x1
        push 0x008A8748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0060C570
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x009721BC
        call ext_0060BDF0
        fldz
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x5c]
        mov dword ptr [esi + 0x60], 0x14
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00661980();

// [0x0060B240] sub_0060B240 (102 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060B240(void* self) {
    __asm {
        push -1
        push 0x008A8373
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        mov dword ptr [esi + 0x4], 0x00971B4C
        mov dword ptr [esi + 0x8], 0x009443BC
        xor eax, eax
        mov dword ptr [esi], 0x0097202C
        mov dword ptr [esi + 0x4], 0x00972020
        mov dword ptr [esi + 0x8], 0x00972010
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1C], eax
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2C], eax
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060ECF0] sub_0060ECF0 (103 bytes)
extern "C" int mem_00924EF4;
typedef bool (__cdecl *LessStr_0060ECF0)(const void*, const void*);
extern "C" void* __cdecl fn_0060ECF0(char* first, char* last, const void* val) {
    int count = (int)((last - first) / 56);
    while (count > 0) {
        int half = count / 2;
        char* mid = first + half * 56;
        if (((LessStr_0060ECF0)mem_00924EF4)(mid, val)) {
            first = mid + 56;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}

// [0x0060B990] sub_0060B990 (114 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0060B990(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x008a8684
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 4]
        push eax
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x009720f4
        call dword ptr [mem_00924FE0]
        add edi, 0x20
        push edi
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x3c], 0
        mov dword ptr [esi + 0x40], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0060BBA0] sub_0060BBA0 (66 bytes)
extern "C" void ext_0060B990();
extern "C" __declspec(naked) void* __fastcall fn_0060BBA0(void* self, int edx_unused, void* src) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0060B990
        mov dword ptr [esi], 0x97215c
        mov eax, dword ptr [edi + 0x44]
        mov dword ptr [esi + 0x44], eax
        mov ecx, dword ptr [edi + 0x48]
        lea eax, [edi + 0x48]
        mov dword ptr [esi + 0x48], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4c], edx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x50], ecx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esi + 0x54], edx
        mov eax, dword ptr [eax + 0x10]
        mov dword ptr [esi + 0x58], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0060C360] sub_0060C360 (112 bytes)
extern "C" void ext_0060BBA0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_0060C360(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x8a8748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_0060BBA0
        lea ecx, [edi + 0x60]
        mov dword ptr [esi], 0x972234
        mov eax, dword ptr [edi + 0x5c]
        push ecx
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi + 0x5c], eax
        call dword ptr [mem_00924FE0]
        fld dword ptr [edi + 0x7c]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x7c]
        fld dword ptr [edi + 0x80]
        pop edi
        fstp dword ptr [esi + 0x80]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00603230] sub_00603230 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603230(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
        fsub dword ptr [esi + 0x2c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x30]
        fchs
        fmul dword ptr [esi + 0x4c]
        fld dword ptr [esi + 0x50]
        fchs
        fld dword ptr [esi + 0x50]
        fxch st(2)
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L603230_b
L603230_a:
        fstp st(0)
L603230_c:
        fstp st(1)
L603230_d:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x34]
        mov edx, dword ptr [edx + 0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        push eax
        call edx
        fld dword ptr [esi + 0x2c]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x14]
        sub esp, 0x8
        fstp qword ptr [esp]
        push edx
        call eax
        pop esi
        pop ecx
        ret
L603230_b:
        fstp st(1)
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L603230_c
        fstp st(0)
        jmp L603230_d
    }
}

// [0x0060B2B0] sub_0060B2B0 (109 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_0060B2B0(void* self) {
    __asm {
        push -1
        push 0x008a8373
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x0097202c
        mov dword ptr [esi + 4], 0x00972020
        mov dword ptr [esi + 8], 0x00972010
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 1
        call ext_004026E0
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0060BDF0();
extern "C" void ext_0060C570();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD4;
extern "C" int mem_009518E0;

// [0x0060CD40] sub_0060CD40 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060CD40(void* self) {
    __asm {
        push -1
        push 0x8a8774
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+8], esi
        call ext_0060C570
        lea edi, [esi+0x60]
        mov ecx, edi
        mov dword ptr [esp+0x14], 0
        mov dword ptr [esi], 0x972234
        call dword ptr [mem_00924FE8]
        mov ecx, esi
        mov byte ptr [esp+0x14], 1
        call ext_0060BDF0
        push 0x9719c4
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        fldz
        mov ecx, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x7c]
        fld dword ptr [mem_009518E0]
        mov dword ptr [esi+0x5c], 0x14
        fstp dword ptr [esi+0x80]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006080D0] sub_006080D0 (140 bytes)
extern "C" void ext_00602EF0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006080D0(void* self) {
    __asm {
        push -1
        push 0x8a819e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        lea ecx, [esi + 0x8c]
        mov dword ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x7c]
        xor edi, edi
        cmp eax, edi
        je L_00608114
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_00608114:
        mov dword ptr [esi + 0x7c], edi
        mov dword ptr [esi + 0x80], edi
        mov dword ptr [esi + 0x84], edi
        mov eax, dword ptr [esi + 0x64]
        cmp eax, edi
        je L_00608133
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_00608133:
        mov ecx, esi
        mov dword ptr [esi + 0x64], edi
        mov dword ptr [esi + 0x68], edi
        mov dword ptr [esi + 0x6c], edi
        mov dword ptr [esp + 0x14], -1
        call ext_00602EF0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00609970] sub_00609970 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00609970(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa94cc0
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x971fc8
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00609850] sub_00609850 (151 bytes)
extern "C" __declspec(naked) void __cdecl fn_00609850(int* first, int* mid, int* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x14]
        sub esi, ebx
        mov ecx, ebp
        sub ecx, ebx
        sar esi, 0x2
        sar ecx, 0x2
        test esi, esi
        push edi
        mov eax, ecx
        mov edi, esi
        je gcd_done
gcd_loop:
        cdq
        idiv edi
        mov eax, edi
        test edx, edx
        mov edi, edx
        jne gcd_loop
gcd_done:
        cmp eax, ecx
        jge fn_end
        test eax, eax
        jle fn_end
        lea ebx, [ebx + 4 * eax]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
outer_loop:
        mov ecx, dword ptr [ebx]
        lea edx, [ebx + 4 * esi]
        cmp edx, ebp
        mov edi, ebx
        mov dword ptr [esp + 0x18], ecx
        jne check_next
        mov edx, dword ptr [esp + 0x14]
check_next:
        cmp edx, ebx
        je cycle_end
inner_loop:
        mov ecx, dword ptr [edx]
        mov dword ptr [edi], ecx
        mov ecx, ebp
        sub ecx, edx
        sar ecx, 0x2
        cmp esi, ecx
        mov edi, edx
        jge wrap_case
        _emit 0x8d
        _emit 0x0c
        _emit 0xb5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add edx, ecx
        jmp next_done
wrap_case:
        mov edx, esi
        sub edx, ecx
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [ecx + 4 * edx]
next_done:
        cmp edx, ebx
        jne inner_loop
cycle_end:
        mov edx, dword ptr [esp + 0x18]
        sub eax, 0x1
        sub ebx, 0x4
        test eax, eax
        mov dword ptr [edi], edx
        jg outer_loop
fn_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006035D0] sub_006035D0 (157 bytes)
struct Rec006035D0 {
    float a[12];
    int b;
    int c;
    unsigned char d;
    float e[10];
};

extern "C" void* __fastcall fn_006035D0(void* self, int edx_unused, const void* src) {
    Rec006035D0* dst = static_cast<Rec006035D0*>(self);
    const Rec006035D0* s = static_cast<const Rec006035D0*>(src);
    dst->a[0] = s->a[0];
    dst->a[1] = s->a[1];
    dst->a[2] = s->a[2];
    dst->a[3] = s->a[3];
    dst->a[4] = s->a[4];
    dst->a[5] = s->a[5];
    dst->a[6] = s->a[6];
    dst->a[7] = s->a[7];
    dst->a[8] = s->a[8];
    dst->a[9] = s->a[9];
    dst->a[10] = s->a[10];
    dst->a[11] = s->a[11];
    dst->b = s->b;
    dst->c = s->c;
    dst->d = s->d;
    dst->e[0] = s->e[0];
    dst->e[1] = s->e[1];
    dst->e[2] = s->e[2];
    dst->e[3] = s->e[3];
    dst->e[4] = s->e[4];
    dst->e[5] = s->e[5];
    dst->e[6] = s->e[6];
    dst->e[7] = s->e[7];
    dst->e[8] = s->e[8];
    dst->e[9] = s->e[9];
    return self;
}

// [0x00603090] sub_00603090 (158 bytes)
extern "C" int mem_00A93710;
extern "C" int mem_0093F7B8;
extern "C" int mem_0092A270;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00603090(void* self, int edx_unused, float out) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x9c]
        push edx
        call eax
        fadd dword ptr [mem_00A93710]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x8]
        mov edx, dword ptr [edx + 0x98]
        push eax
        call edx
        fsub dword ptr [mem_00A93710]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x2c]
        fstp dword ptr [esp + 0x4]
        fld1
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea edx, [esp + 0x18]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp]
        push edx
        call eax
        fld dword ptr [esp + 0x10]
        fst dword ptr [esi + 0x58]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        __asm _emit 0xd9
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0xc9
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0xca
        fadd qword ptr [mem_0092A270]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        __asm _emit 0xde
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0xc1
        fstp dword ptr [esi + 0x2c]
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00607D50] sub_00607D50 (161 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00607D50(void* self, int edx_unused, const void* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], 0x0096F81C
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xC]
        mov dword ptr [eax + 0xC], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], edx
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0x14]
        add ecx, 0x4C
        fld dword ptr [ecx - 0x34]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx - 0x30]
        fstp dword ptr [eax + 0x1C]
        fld dword ptr [ecx - 0x2C]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx - 0x28]
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx - 0x24]
        fstp dword ptr [eax + 0x28]
        mov dword ptr [eax], 0x0096F8A4
        fld dword ptr [ecx - 0x20]
        fstp dword ptr [eax + 0x2C]
        fld dword ptr [ecx - 0x1C]
        fstp dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx - 0x18]
        mov dword ptr [eax + 0x34], edx
        mov edx, dword ptr [ecx - 0x14]
        mov dword ptr [eax + 0x38], edx
        mov edx, dword ptr [ecx - 0x10]
        mov dword ptr [eax + 0x3C], edx
        mov edx, dword ptr [ecx - 0xC]
        mov dword ptr [eax + 0x40], edx
        mov edx, dword ptr [ecx - 0x8]
        mov dword ptr [eax + 0x44], edx
        mov edx, dword ptr [ecx - 0x4]
        mov dword ptr [eax + 0x48], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x4C], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x50], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x54], edx
        mov edx, dword ptr [ecx + 0xC]
        mov dword ptr [eax + 0x58], edx
        mov ecx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x5C], ecx
        ret 4
    }
}

// [0x0060A550] sub_0060A550 (162 bytes)
extern "C" void ext_0060A340();

extern "C" __declspec(naked) void __cdecl fn_0060A550(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
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
        call ext_0060A340
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_0060A340
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_0060A340
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_0060A340
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
        call ext_0060A340
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x00603130] sub_00603130 (167 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603130(void* self, int edx_unused, float out) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x9c]
        push edx
        call eax
        fadd dword ptr [mem_00A93710]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x4]
        mov edx, dword ptr [edx + 0x98]
        push eax
        call edx
        fsub dword ptr [mem_00A93710]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x8]
        test ah, 0x41
        jne L_le
        fstp st(2)
        fst dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp L_store
    L_le:
        fcom st(2)
        fnstsw ax
        test ah, 0x5
        jp L_gt
        fstp st(2)
        fxch st(1)
        fst dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fxch st(1)
        fxch st(2)
        fxch st(1)
    L_store:
        fst dword ptr [esi + 0x2c]
        fsub st, st(1)
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x10]
        fdiv dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fadd st(0), st
        fsub qword ptr [mem_0092A270]
        fstp dword ptr [esi + 0x58]
        pop esi
        add esp, 0x8
        ret 0x4
    L_gt:
        fxch st(2)
        jmp L_store
    }
}

// [0x006032B0] sub_006032B0 (55 bytes)
extern "C" void ext_00603130();
extern "C" __declspec(naked) void __fastcall fn_006032B0(void* self, int edx_unused, float v) {
    __asm {
        fld dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        fchs
        fdiv dword ptr [esi + 0x4c]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi + 0x34]
        push edx
        fstp dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        call eax
        fsub dword ptr [esi + 0x30]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp]
        call ext_00603130
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0060B8D0();
extern "C" void ext_004765B0();
extern "C" void ext_006A6DD2();

// [0x0060C070] sub_0060C070 (181 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060C070(void* self, int edx_unused, const void* a1, const void* a2, const void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x883734
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        mov esi, dword ptr [esp + 0xe0]
        push edi
        mov edi, dword ptr [esp + 0xe0]
        mov eax, dword ptr [edi]
        cmp eax, dword ptr [esi]
        je done
        mov ecx, dword ptr [esp + 0xe8]
        push ecx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0xe0], 0x0
        call ext_0060B8D0
        mov esi, eax
        mov ecx, dword ptr [edi]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        mov byte ptr [esp + 0xe8], 0x1
        call ext_0060B8D0
        add esp, 0x10
        lea ecx, [esp + 0x8]
        push ecx
        push esi
        push eax
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xe4], 0x2
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xd4
        ret 0xc
    }
}

// [0x00609790] sub_00609790 (185 bytes)
// Heap sift-up (push_heap-style) over an array of element pointers; element+4 and
// element+0x20 are std::string keys compared via the imported basic_string operators.
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __cdecl fn_00609790(void* first, int hole, int top, void* value) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        lea eax, [ebp - 0x1]
        cdq
        sub eax, edx
        push esi
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x14], ebp
        jge L_end
        push edi
        mov edi, dword ptr [esp + 0x10]
        push ebx
    L_loop:
        mov ebx, dword ptr [edi + 4*esi]
        mov eax, dword ptr [esp + 0x20]
        add eax, 0x4
        mov dword ptr [esp + 0x14], ebx
        push eax
        add ebx, 0x4
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_move
        mov eax, dword ptr [esp + 0x20]
        add eax, 0x4
        push eax
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_store
        mov ebx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [ebx + 0x20]
        push eax
        add ecx, 0x20
        push ecx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_store_ebx
    L_move:
        mov edx, dword ptr [edi + 4*esi]
        lea eax, [esi - 0x1]
        mov dword ptr [edi + 4*ebp], edx
        cdq
        sub eax, edx
        mov ebp, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], ebp
        mov esi, eax
        jl L_loop
    L_exit:
        mov eax, dword ptr [esp + 0x20]
        pop ebx
        mov dword ptr [edi + 4*ebp], eax
        pop edi
        pop esi
        pop ebp
        ret
    L_store:
        mov ecx, dword ptr [esp + 0x20]
        pop ebx
        mov dword ptr [edi + 4*ebp], ecx
        pop edi
        pop esi
        pop ebp
        ret
    L_store_ebx:
        mov dword ptr [edi + 4*ebp], ebx
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    L_end:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr [eax + 4*ebp], edx
        pop ebp
        ret
    }
}

// [0x0060F190] sub_0060F190 (198 bytes)
extern "C" void ext_0060ECF0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;
extern "C" __declspec(naked) void* __fastcall fn_0060F190(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_0060F1AC
        call dword ptr [mem_00925134]
    L_0060F1AC:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_0060F1BA
        call dword ptr [mem_00925134]
    L_0060F1BA:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_0060ECF0
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_0060F1E4
        call dword ptr [mem_00925134]
    L_0060F1E4:
        test esi, esi
        je L_0060F1EC
        cmp esi, esi
        je L_0060F1F2
    L_0060F1EC:
        call dword ptr [mem_00925134]
    L_0060F1F2:
        cmp ebx, edi
        je L_0060F22D
        test esi, esi
        jne L_0060F200
        call dword ptr [mem_00925134]
    L_0060F200:
        cmp ebx, dword ptr [esi + 8]
        jb L_0060F20B
        call dword ptr [mem_00925134]
    L_0060F20B:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_0060F22D
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_0060F22D:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_0060F245
        call dword ptr [mem_00925134]
    L_0060F245:
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

// [0x0060F3B0] sub_0060F3B0 (102 bytes)
extern "C" void ext_0060F190();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0060F3B0(void* self, int edx_unused, void* a1) {
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
        call ext_0060F190
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0060F3DA
        call ebp
    L_0060F3DA:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_0060F3E6
        cmp edi, esi
        je L_0060F3E8
    L_0060F3E6:
        call ebp
    L_0060F3E8:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0060F40A
        test edi, edi
        jne L_0060F3F6
        call ebp
    L_0060F3F6:
        cmp esi, dword ptr [edi + 8]
        jb L_0060F3FD
        call ebp
    L_0060F3FD:
        pop edi
        lea eax, [esi + 1ch]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0060F40A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0060A3A0] sub_0060A3A0 (200 bytes)
// Heap adjust (sift-down to a leaf, then push_heap back up via fn_00609790).
// Element pointers are compared by std::string keys at +4 and +0x20.
extern "C" void ext_00609790();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __cdecl fn_0060A3A0(void* first, int hole, int bottom, void* value, int extra) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        push esi
        lea esi, [eax + eax + 0x2]
        cmp esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x10], eax
        jge L_437
        push ebx
        push ebp
        nop
    L_loop:
        mov ebx, dword ptr [edi + 4*esi - 0x4]
        mov ebp, dword ptr [edi + 4*esi]
        mov dword ptr [esp + 0x10], ebx
        add ebx, 0x4
        mov dword ptr [esp + 0x14], ebp
        add ebp, 0x4
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_dec
        push ebx
        push ebp
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_keep
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        add eax, 0x20
        push eax
        add ecx, 0x20
        push ecx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_keep
    L_dec:
        sub esi, 0x1
    L_keep:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edi + 4*esi]
        mov dword ptr [esp + 0x24], esi
        lea esi, [esi + esi + 0x2]
        cmp esi, dword ptr [esp + 0x28]
        mov dword ptr [edi + 4*eax], edx
        jl L_loop
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        pop ebp
        pop ebx
        cmp esi, ecx
    L_437:
        jne L_449
        mov edx, dword ptr [edi + 4*ecx - 0x4]
        add ecx, -0x1
        mov dword ptr [edi + 4*eax], edx
        mov dword ptr [esp + 0x1c], ecx
        mov eax, ecx
    L_449:
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push ecx
        push eax
        push edi
        call ext_00609790
        add esp, 0x14
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0060A600] sub_0060A600 (63 bytes)
extern "C" void ext_0060A3A0();

extern "C" void __cdecl fn_0060A600(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_0060A3A0)(first, hole, len, first[hole], comp);
    }
}

// [0x0060AF10] sub_0060AF10 (74 bytes)
extern "C" __declspec(naked) void __cdecl fn_0060AF10(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_0060A3A0
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

extern "C" void ext_00401D20();
extern "C" int mem_00924FF4;

// [0x0060EB90] sub_0060EB90 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060EB90(void* self) {
    __asm {
        push -1
        push 0x8a2518
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9725ac
        mov dword ptr [esi + 0x4], 0x972564
        mov dword ptr [esi + 0x8], 0x972524
        mov dword ptr [esi + 0xc], 0x9724d4
        mov dword ptr [esi + 0x150], 0x9724bc
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0060EB90();

// [0x0060F5E0] sub_0060F5E0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060F5E0(void* self) {
    __asm {
        push -1
        push 0x8a8b46
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x190]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x180]
        mov byte ptr [esp + 0x10], 0x0
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0060EB90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0060EB90();
extern "C" int mem_00924FF4;

// [0x0060ED60] sub_0060ED60 (114 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060ED60(void* self) {
    __asm {
        push -1
        push 0x008A8B26
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1bc]
        mov dword ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x180]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0060EB90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060FBE0] sub_0060FBE0 (123 bytes)
extern "C" void ext_0041DD40();
extern "C" void ext_0060ED60();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0060FBE0(void* self) {
    __asm {
        push -1
        push 0x8a8b68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x1dc]
        lea esi, [edi + 0x1d8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], ebx
        je skip_block
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    skip_block:
        mov ecx, edi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0060ED60
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00487A30();
extern "C" void ext_0049AD90();
extern "C" void ext_0060C070();
extern "C" void ext_0060C530();
extern "C" int mem_00972364;
extern "C" int mem_00972344;
extern "C" int mem_00972324;
extern "C" int mem_00972300;
extern "C" int mem_009722D4;
extern "C" int mem_009722B4;

// [0x0060C820] sub_0060C820 (229 bytes)
// Naked: forwards (a1, a2, a3) to vfunc_21, then compares the 0x44..0x58 fields of
// self and a1 through the `this = &a2` helpers (0x60C070 / 0x487A30 / 0x49AD90).
extern "C" __declspec(naked) void __fastcall fn_0060C820(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0060C530
        mov edx, dword ptr [edi + 0x44]
        mov eax, dword ptr [esi + 0x44]
        push offset mem_00972364
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], edx
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x14], eax
        call ext_0060C070
        fld dword ptr [edi + 0x48]
        push offset mem_00972344
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x48]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x4c]
        push offset mem_00972324
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x4c]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x50]
        push offset mem_00972300
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x50]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x54]
        push offset mem_009722D4
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x54]
        fstp dword ptr [esp]
        call ext_00487A30
        mov al, byte ptr [edi + 0x58]
        mov cl, byte ptr [esi + 0x58]
        push offset mem_009722B4
        lea edx, [esp + 0x14]
        mov byte ptr [esp + 0x14], al
        push edx
        lea eax, [esp + 0x1c]
        mov byte ptr [esp + 0x1c], cl
        push eax
        lea ecx, [esp + 0x20]
        call ext_0049AD90
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0060A240] sub_0060A240 (245 bytes)
// unique-style compaction over a range of pointers to structs (std::string at +4 and +0x20).
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void* __cdecl fn_0060A240(void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, eax
        push edi
        mov dword ptr [esp + 0x18], esi
        je done
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    advance:
        add esi, 0x4
        cmp esi, eax
        je done
        mov eax, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esi]
        mov ebx, dword ptr [eax]
        lea edi, [ebp + 0x4]
        mov dword ptr [esp + 0x10], ebx
        add ebx, 0x4
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne dup_path
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je keep_b
        mov ecx, dword ptr [esp + 0x10]
        add ebp, 0x20
        add ecx, 0x20
        push ebp
        push ecx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne dup_path
    keep_b:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], esi
        jmp advance
    dup_path:
        add esi, 0x4
        cmp esi, dword ptr [esp + 0x1c]
        je finish
    scan:
        mov edx, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esi]
        mov ebx, dword ptr [edx]
        lea edi, [ebp + 0x4]
        mov dword ptr [esp + 0x10], ebx
        add ebx, 0x4
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne scan_next
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je scan_copy
        mov eax, dword ptr [esp + 0x10]
        add ebp, 0x20
        add eax, 0x20
        push ebp
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne scan_next
    scan_copy:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi]
        add eax, 0x4
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [eax], ecx
    scan_next:
        add esi, 0x4
        cmp esi, dword ptr [esp + 0x1c]
        jne scan
    finish:
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00605AC0] sub_00605AC0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B47770;
extern "C" int mem_00B47754;

extern "C" __declspec(naked) void __fastcall fn_00605AC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7f4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47770], al
        jne skip_init
        or dword ptr [mem_00B47770], eax
        push 0xa947ac
        push offset mem_00B47754
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e6f0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47754
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00609A10] sub_00609A10 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B478B8;
extern "C" int mem_00B4789C;

extern "C" __declspec(naked) void __fastcall fn_00609A10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a82ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B478B8], al
        jne skip_init
        or dword ptr [mem_00B478B8], eax
        push 0xa948b0
        push offset mem_00B4789C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e800
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4789C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0060A4F0] sub_0060A4F0 (33 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_00609A10();
extern "C" __declspec(naked) void __fastcall fn_0060A4F0(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp+4], 0
        call ext_00609A10
        mov esi, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0060CC60] sub_0060CC60 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B47F38;
extern "C" int mem_00B47F1C;

extern "C" __declspec(naked) void __fastcall fn_0060CC60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a872e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47F38], al
        jne skip_init
        or dword ptr [mem_00B47F38], eax
        push 0xa94f1c
        push offset mem_00B47F1C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e900
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47F1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006033E0] sub_006033E0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A93750;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_006033E0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A93750
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0060C130] sub_0060C130 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A93768;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_0060C130(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A93768
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0060E7E0] sub_0060E7E0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A94FCC;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_0060E7E0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A94FCC
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0060E820] sub_0060E820 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A94FEC;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_0060E820(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A94FEC
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0060EB30] sub_0060EB30 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B485B0;
extern "C" int mem_00B48594;

extern "C" __declspec(naked) void __fastcall fn_0060EB30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a8aee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B485B0], al
        jne skip_init
        or dword ptr [mem_00B485B0], eax
        push 0xa9500c
        push offset mem_00B48594
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91ea10
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B48594
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_00609850();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;

// [0x0060AB90] sub_0060AB90 (308 bytes)
extern "C" __declspec(naked) void __cdecl fn_0060AB90() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x10
        cmp eax, ecx
        je loc_60acc0
        push esi
        lea esi, [eax + 0x4]
        cmp esi, ecx
        je loc_60acbf
        push ebx
        push ebp
        lea ecx, [esi + 0x4]
        push edi
        mov dword ptr [esp + 0x10], ecx
        jmp loc_60abc4

        jmp loc_60abc0
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]

    loc_60abc0:
        mov eax, dword ptr [esp + 0x24]

    loc_60abc4:
        mov ebp, dword ptr [eax]
        mov ebx, dword ptr [esi]
        lea edi, [ebp + 0x4]
        mov dword ptr [esp + 0x18], ebx
        add ebx, 0x4
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne loc_60ac09
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je loc_60ac28
        mov edx, dword ptr [esp + 0x18]
        add ebp, 0x20
        add edx, 0x20
        push ebp
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je loc_60ac28

    loc_60ac09:
        mov eax, dword ptr [esp + 0x24]
        cmp eax, esi
        je loc_60acaa
        mov ecx, dword ptr [esp + 0x10]
        cmp esi, ecx
        je loc_60acaa
        push 0x0
        push 0x0
        push ecx
        jmp loc_60aca0

    loc_60ac28:
        mov dword ptr [esp + 0x18], esi
        mov eax, esi
        mov edi, edi

    loc_60ac30:
        mov ebp, dword ptr [eax - 0x4]
        mov ebx, dword ptr [esi]
        sub eax, 0x4
        lea edi, [ebp + 0x4]
        mov dword ptr [esp + 0x1c], ebx
        add ebx, 0x4
        push edi
        push ebx
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne loc_60ac7d
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je loc_60ac89
        mov eax, dword ptr [esp + 0x1c]
        add ebp, 0x20
        add eax, 0x20
        push ebp
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je loc_60ac89

    loc_60ac7d:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x18], ecx
        mov eax, ecx
        jmp loc_60ac30

    loc_60ac89:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, esi
        je loc_60acaa
        cmp esi, dword ptr [esp + 0x10]
        je loc_60acaa
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push edx

    loc_60aca0:
        push esi
        push eax
        call ext_00609850
        add esp, 0x14

    loc_60acaa:
        add dword ptr [esp + 0x10], 0x4
        add esi, 0x4
        cmp esi, dword ptr [esp + 0x28]
        jne loc_60abc0

        pop edi
        pop ebp
        pop ebx

    loc_60acbf:
        pop esi

    loc_60acc0:
        add esp, 0x10
        ret
    }
}

// [0x0060ACD0] sub_0060ACD0 (326 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060ACD0(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa94cc0
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x971ff8
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne l1
        mov [esi+8], edi
    l1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je l5
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe l3
        call dword ptr [mem_00925134]
    l3:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe l4
        call dword ptr [mem_00925134]
    l4:
        cmp edi, ebp
        mov [esp+0x14], edi
        je l8
    lp:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je l8
        add edi, 4
        cmp edi, ebp
        jne lp
    l8:
        test ebx, ebx
        je l9
        cmp ebx, [esp+0x28]
        je la
    l9:
        call dword ptr [mem_00925134]
    la:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp l6
    l5:
        test ecx, ecx
        jne l5b
        xor eax, eax
        jmp l5c
    l5b:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    l5c:
        mov [esi+0x20], eax
    l6:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne m1
        xor eax, eax
        jmp m2
    m1:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m2:
        cmp [esi+0x20], eax
        jbe m5
        test edx, edx
        jne m3
        xor eax, eax
        jmp m4
    m3:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m4:
        mov [esi+0x20], eax
    m5:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x0060CB10] sub_0060CB10 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060BBA0();
extern "C" void ext_0060C130();
extern "C" void ext_0060C570();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0060CB10(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa93790
        push 0xa93768
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x5c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060BBA0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060C130
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x5c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0060C570
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0060C170] sub_0060C170 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060C130();
extern "C" void ext_006267B0();
extern "C" void ext_00626E80();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0060C170(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa94e98
        push 0xa93768
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0xa8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00626E80
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060C130
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0xa8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_006267B0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0060D130] sub_0060D130 (335 bytes)
extern "C" void ext_0060C360();
extern "C" void ext_0060CD40();

extern "C" __declspec(naked) void __fastcall fn_0060D130(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa94ef0
        push 0xa93768
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x84
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060C360
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060C130
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x84
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0060CD40
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0060CFC0] sub_0060CFC0 (354 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060BBA0();
extern "C" void ext_0060C130();
extern "C" void ext_0060CCC0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void* __cdecl fn_0060CFC0(void* p) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x80
        test eax, eax
        je L_null_0060CFC0
        push esi
        push edi
        push 0x0
        push 0xa94ec4
        push 0xa93768
        push 0x0
        push eax
        call ext_006A6E9E
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je L_fallback_0060CFC0
        push 0x64
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x8], esi
        test esi, esi
        mov dword ptr [esp + 0x90], 0x0
        je L_zero_0060CFC0
        push edi
        mov ecx, esi
        call ext_0060BBA0
        mov dword ptr [esi], 0x9721bc
        fld dword ptr [edi + 0x5c]
        fstp dword ptr [esi + 0x5c]
        mov eax, dword ptr [edi + 0x60]
        mov dword ptr [esi + 0x60], eax
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
    L_zero_0060CFC0:
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
    L_fallback_0060CFC0:
        lea ecx, [esp + 0xc]
        push ecx
        call ext_0060C130
        add esp, 0x4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x94], 0x1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea edx, [esp + 0x4c]
        push edx
        mov byte ptr [esp + 0x9c], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x94], 0x3
        call ext_00403560
        push 0x9d47a4
        lea eax, [esp + 0x64]
        push eax
        call ext_006A6DD2
    L_null_0060CFC0:
        push 0x64
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 0x4
        je L_ret0_0060CFC0
        mov ecx, eax
        call ext_0060CCC0
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
    L_ret0_0060CFC0:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
    }
}

extern "C" void ext_0058F200();
extern "C" int mem_00924FE8;
extern "C" int mem_0093F7B8;

// [0x0060EDE0] sub_0060EDE0 (169 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060EDE0(void* self) {
    __asm {
        push -1
        push 0x8a2518
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x9725ac
        mov dword ptr [esi + 4], 0x972564
        mov dword ptr [esi + 8], 0x972524
        mov dword ptr [esi + 0xc], 0x9724d4
        mov dword ptr [esi + 0x150], 0x9724bc
        call dword ptr [mem_00924FE8]
        fld dword ptr [mem_0093F7B8]
        mov ecx, dword ptr [esp + 8]
        fstp dword ptr [esi + 0x174]
        fld1
        mov dword ptr [esi + 0x170], 0
        fstp dword ptr [esi + 0x178]
        mov dword ptr [esi + 0x17c], 0
        mov dword ptr [esi + 0xe8], 0xffffffff
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060F550] sub_0060F550 (130 bytes)
extern "C" void ext_0060EDE0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_0060F550(void* self) {
    __asm {
        push -1
        push 0x8a8b46
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0060EDE0
        xor eax, eax
        mov dword ptr [esi], 0x97299c
        mov dword ptr [esi + 0x4], 0x972954
        mov dword ptr [esi + 0x8], 0x972914
        mov dword ptr [esi + 0xc], 0x9728c4
        mov dword ptr [esi + 0x150], 0x9728ac
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x184], eax
        mov dword ptr [esi + 0x188], eax
        mov dword ptr [esi + 0x18c], eax
        lea ecx, [esi + 0x190]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0060EDE0();
extern "C" int mem_00924FE8;

// [0x0060F0D0] sub_0060F0D0 (153 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060F0D0(void* self) {
    __asm {
        push    -1
        push    0x8a8b26
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        call    ext_0060EDE0
        lea     ecx, [esi + 0x180]
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esi], 0x9727a4
        mov     dword ptr [esi + 4], 0x97275c
        mov     dword ptr [esi + 8], 0x97271c
        mov     dword ptr [esi + 0xc], 0x9726cc
        mov     dword ptr [esi + 0x150], 0x9726b4
        call    dword ptr [mem_00924FE8]
        lea     ecx, [esi + 0x19c]
        mov     byte ptr [esp + 0x10], 1
        call    dword ptr [mem_00924FE8]
        lea     ecx, [esi + 0x1bc]
        mov     byte ptr [esp + 0x10], 2
        call    dword ptr [mem_00924FE8]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0xe8], -1
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

extern "C" void __fastcall ext_0060F0D0(void* self);

// [0x0060FB70] sub_0060FB70 (105 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060FB70(void* self) {
    __asm {
        push    -1
        push    0x8a8b68
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        call    ext_0060F0D0
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esi], 0x972b9c
        mov     dword ptr [esi + 4], 0x972b54
        mov     dword ptr [esi + 8], 0x972b14
        mov     dword ptr [esi + 0xc], 0x972ac4
        mov     dword ptr [esi + 0x150], 0x972aac
        xor     eax, eax
        mov     dword ptr [esi + 0x1dc], eax
        mov     dword ptr [esi + 0x1e0], eax
        mov     dword ptr [esi + 0x1e4], eax
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x0060A770] sub_0060A770 (1048 bytes)
// MSVC 3-way (equal-range) partition returning pair(pfirst, plast); naked to match MSVC codegen.
extern "C" void ext_0060A550();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void __cdecl fn_0060A770() {
    __asm {
        sub esp, 0x10
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov eax, ecx
        sub eax, edi
        sar eax, 0x2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        mov eax, dword ptr [esp + 0x30]
        push eax
        add ecx, -0x4
        push ecx
        push esi
        push edi
        call ext_0060A550
        add esp, 0x10
        lea ebp, [esi + 0x4]
        cmp edi, esi
        mov edi, dword ptr [mem_00924EF4]
        mov dword ptr [esp + 0x10], ebp
        jae near ptr L_60A861
L_60A7B6:
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [esi - 0x4]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14], eax
        add ebx, 0x4
        add eax, 0x4
        push ebx
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne near ptr L_60A861
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x4
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A807
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        add ecx, 0x20
        push ecx
        add edx, 0x20
        push edx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A861
L_60A807:
        mov ebx, dword ptr [esi - 0x4]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14], eax
        add ebx, 0x4
        add eax, 0x4
        push ebx
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A861
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x4
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A854
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        add eax, 0x20
        push eax
        add ecx, 0x20
        push ecx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A861
L_60A854:
        add esi, -0x4
        cmp dword ptr [esp + 0x28], esi
        jb near ptr L_60A7B6
L_60A861:
        cmp ebp, dword ptr [esp + 0x2c]
        jae near ptr L_60A91F
        jmp short L_60A870
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
L_60A870:
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [ebp]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14], eax
        add ebx, 0x4
        add eax, 0x4
        push ebx
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne near ptr L_60A91B
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x4
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A8C1
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        add edx, 0x20
        push edx
        add eax, 0x20
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A91B
L_60A8C1:
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14], eax
        add ebx, 0x4
        add eax, 0x4
        push ebx
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A91B
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x4
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A90E
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        add ecx, 0x20
        push ecx
        add edx, 0x20
        push edx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A91B
L_60A90E:
        add ebp, 0x4
        cmp ebp, dword ptr [esp + 0x2c]
        jb near ptr L_60A870
L_60A91B:
        mov dword ptr [esp + 0x10], ebp
L_60A91F:
        mov eax, esi
        mov ebx, ebp
        mov dword ptr [esp + 0x14], eax
        jmp short L_60A930
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_60A930:
        cmp ebx, dword ptr [esp + 0x2c]
        jae near ptr L_60AA06
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_60A940:
        mov ebp, dword ptr [ebx]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x18], eax
        add ebp, 0x4
        add eax, 0x4
        push ebp
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne near ptr L_60A9F1
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A990
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        add eax, 0x20
        push eax
        add ecx, 0x20
        push ecx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A9F1
L_60A990:
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x18], eax
        add ebp, 0x4
        add eax, 0x4
        push ebp
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A9FE
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60A9DC
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        add edx, 0x20
        push edx
        add eax, 0x20
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60A9FE
L_60A9DC:
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebx]
        mov ecx, eax
        add eax, 0x4
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx], edx
        mov dword ptr [ebx], eax
L_60A9F1:
        add ebx, 0x4
        cmp ebx, dword ptr [esp + 0x2c]
        jb near ptr L_60A940
L_60A9FE:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
L_60AA06:
        cmp eax, dword ptr [esp + 0x28]
        jbe near ptr L_60AAEB
        jmp short L_60AA16
L_60AA12:
        mov eax, dword ptr [esp + 0x14]
L_60AA16:
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [eax - 0x4]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x18], eax
        add ebp, 0x4
        add eax, 0x4
        push ebp
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne near ptr L_60AACA
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60AA67
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        add eax, 0x20
        push eax
        add ecx, 0x20
        push ecx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60AACA
L_60AA67:
        mov edx, dword ptr [esp + 0x14]
        mov ebp, dword ptr [edx - 0x4]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x18], eax
        add ebp, 0x4
        add eax, 0x4
        push ebp
        push eax
        call edi
        add esp, 0x8
        test al, al
        jne short L_60AADF
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_60AAB8
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        add eax, 0x20
        push eax
        add ecx, 0x20
        push ecx
        call edi
        add esp, 0x8
        test al, al
        jne short L_60AADF
L_60AAB8:
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax - 0x4]
        mov ecx, dword ptr [esi - 0x4]
        sub esi, 0x4
        mov dword ptr [esi], edx
        mov dword ptr [eax - 0x4], ecx
L_60AACA:
        mov eax, dword ptr [esp + 0x14]
        add eax, -0x4
        cmp dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0x14], eax
        jb near ptr L_60AA12
L_60AADF:
        mov eax, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x10]
        cmp eax, dword ptr [esp + 0x28]
L_60AAEB:
        jne short L_60AB35
        cmp ebx, dword ptr [esp + 0x2c]
        je near ptr L_60AB77
        cmp ebp, ebx
        je short L_60AB05
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [ebp], ecx
L_60AB05:
        mov ecx, esi
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        add ebp, 0x4
        add esi, 0x4
        mov dword ptr [esp + 0x10], ebp
        add ebx, 0x4
        mov dword ptr [edx], ecx
        jmp near ptr L_60A930
L_60AB35:
        sub eax, 0x4
        cmp ebx, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x14], eax
        jne short L_60AB67
        sub esi, 0x4
        cmp eax, esi
        je short L_60AB51
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [eax]
        mov dword ptr [eax], edx
        mov dword ptr [esi], ecx
L_60AB51:
        mov edx, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [esi]
        sub ebp, 0x4
        mov dword ptr [esi], edx
        mov dword ptr [esp + 0x10], ebp
        mov dword ptr [ebp], ecx
        jmp near ptr L_60A930
L_60AB67:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [eax]
        mov dword ptr [ebx], edx
        mov dword ptr [eax], ecx
        add ebx, 0x4
        jmp near ptr L_60A930
L_60AB77:
        mov eax, dword ptr [esp + 0x24]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x0060B890] sub_0060B890 (63 bytes)
extern "C" void ext_0060B620();
extern "C" void ext_0060B6A0();
extern "C" void ext_0060B750();
extern "C" void ext_0060B800();
extern "C" int mem_00A9F554;
extern "C" __declspec(naked) void __fastcall fn_0060B890(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0060B800
        mov     ecx, dword ptr [mem_00A9F554]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0060B620
        push    0x9720a0
        lea     ecx, [esp + 0x4]
        call    ext_0060B6A0
        push    0x972080
        lea     ecx, [esp + 0x4]
        call    ext_0060B750
        pop     ecx
        ret
    }
}

// [0x00609370] sub_00609370 (67 bytes)
extern "C" void ext_00609110();
extern "C" void ext_00609170();
extern "C" void ext_00609270();
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00609370(void* self) {
    __asm {
        push ecx
        call ext_00609110
        push 0x1
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x009719d8
        call dword ptr [mem_00924FE4]
        call ext_00609170
        add esp, 0x20
        push 0x1
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x009719cc
        call dword ptr [mem_00924FE4]
        call ext_00609270
        add esp, 0x24
        ret
    }
}

extern "C" void ext_00402800();
extern "C" void ext_0060B990();
extern "C" int mem_008A87A8;
extern "C" int mem_009723F4;

// [0x0060D470] sub_0060D470 (87 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060D470(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    offset mem_008A87A8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_0060B990
        add     edi, 0x44
        push    edi
        lea     ecx, [esi + 0x44]
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esi], offset mem_009723F4
        call    ext_00402800
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x0060F990] sub_0060F990 (176 bytes)
extern "C" void ext_005558E0();
extern "C" void ext_00687DC0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0060F990(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8a8b50
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x18], edi
        je L_0060F9D8
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_0060F9D8:
        push eax
        mov ecx, edi
        call ext_00687DC0
        test al, al
        je L_0060FA2B
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [ebp - 0x4], 0
        mov dword ptr [ebp - 0x14], eax
        jbe L_0060F9FC
        call dword ptr [mem_00925134]
    L_0060F9FC:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_0060FA0A
        call dword ptr [mem_00925134]
    L_0060FA0A:
        mov eax, dword ptr [edi + 0x4]
        mov byte ptr [ebp + 0x8], 0
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push edi
        push eax
        mov eax, dword ptr [ebp - 0x14]
        push eax
        push ebx
        call ext_005558E0
        add esp, 0x18
        mov dword ptr [edi + 0x8], eax
    L_0060FA2B:
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x0060D910] sub_0060D910 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060C130();
extern "C" void ext_0060D470();
extern "C" void ext_0060D730();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0060D910(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa94f50
        push 0xa93768
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x54
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060D470
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060C130
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x54
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0060D730
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

extern "C" void ext_00602F70();
extern "C" void ext_006977E0();

// [0x00607E70] sub_00607E70 (85 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00607E70(void* self) {
    __asm {
        push -1
        push 0x008A8168
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00602F70
        fldz
        push ecx
        fst dword ptr [esi + 0x60]
        fstp dword ptr [esp]
        lea ecx, [esi + 0x6C]
        push 0x14
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x009718A4
        call ext_006977E0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00609110] sub_00609110 (90 bytes)
extern "C" void ext_006082D0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B47840;

extern "C" __declspec(naked) void __fastcall fn_00609110(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a82ae
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47840], al
        jne done_00609110
        or dword ptr [mem_00B47840], eax
        mov ecx, 0xb4781c
        mov dword ptr [esp + 0x8], 0x0
        call ext_006082D0
        push 0x91e700
        call ext_006A6C87
        add esp, 0x4
    done_00609110:
        mov ecx, dword ptr [esp]
        mov eax, 0xb4781c
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0060DDA0] sub_0060DDA0 (90 bytes)
extern "C" void ext_0060DB80();
extern "C" void ext_006A6C87();
extern "C" int mem_00B47F60;

extern "C" __declspec(naked) void __fastcall fn_0060DDA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a883e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47F60], al
        jne done_0060DDA0
        or dword ptr [mem_00B47F60], eax
        mov ecx, 0xb47f3c
        mov dword ptr [esp + 0x8], 0x0
        call ext_0060DB80
        push 0x91e910
        call ext_006A6C87
        add esp, 0x4
    done_0060DDA0:
        mov ecx, dword ptr [esp]
        mov eax, 0xb47f3c
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0060FF30] sub_0060FF30 (90 bytes)
extern "C" void ext_0060FA60();
extern "C" void ext_006A6C87();
extern "C" int mem_00B485D8;

extern "C" __declspec(naked) void __fastcall fn_0060FF30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a8b8e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B485D8], al
        jne done_0060FF30
        or dword ptr [mem_00B485D8], eax
        mov ecx, 0xb485b4
        mov dword ptr [esp + 0x8], 0x0
        call ext_0060FA60
        push 0x91ea20
        call ext_006A6C87
        add esp, 0x4
    done_0060FF30:
        mov ecx, dword ptr [esp]
        mov eax, 0xb485b4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0060DE00] sub_0060DE00 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_0060C130();
extern "C" void ext_0060DDA0();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0060DE00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_0060DDA0
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_60DE5A
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_60DE5A:
        cmp byte ptr [esp + 0xe4], 0x0
        je L_60DEDE
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0x0
        call ext_0060C130
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], -1
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 0x1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_60DEDE:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x0060FF90] sub_0060FF90 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_0060E7E0();
extern "C" void ext_0060FF30();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0060FF90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_0060FF30
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_60FFEA
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_60FFEA:
        cmp byte ptr [esp + 0xe4], 0x0
        je L_61006E
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0x0
        call ext_0060E7E0
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], -1
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 0x1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_61006E:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x0060E4A0] sub_0060E4A0 (160 bytes)
extern "C" void ext_0063EFE0();
extern "C" void ext_0060DE00();
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __cdecl fn_0060E4A0(void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1ch
        mov eax, dword ptr [mem_00A9FA6C]
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, eax
        call edx
        lea ecx, [esp + 8]
        mov dword ptr [esp + 2ch], 0
        call dword ptr [mem_00924FEC]
        test al, al
        je skip_assign
        push 0x9719fc
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924FD4]
skip_assign:
        push 1
        lea eax, [esp + 0ch]
        push 0
        push eax
        call ext_0060DE00
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 34h]
        add esp, 0ch
        push edi
        mov ecx, esi
        call eax
        lea ecx, [esp + 8]
        mov dword ptr [esp + 2ch], 0ffffffffh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 24h]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret
    }
}

extern "C" void ext_00405FB0();
extern "C" void ext_004A59A0();

// [0x00607F20] sub_00607F20 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_00607F20(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x0c]
        test edi, edi
        mov esi, ecx
        mov dword ptr [esi + 0x04], 0
        mov dword ptr [esi + 0x08], 0
        mov dword ptr [esi + 0x0c], 0
        je L_exit
        cmp edi, 0x3fffffff
        jbe L_alloc
        call ext_00405FB0
    L_alloc:
        push 0
        push edi
        call ext_004A59A0
        lea ecx, [eax + 4*edi]
        add esp, 8
        test edi, edi
        mov dword ptr [esi + 0x0c], ecx
        mov dword ptr [esi + 0x04], eax
        mov dword ptr [esi + 0x08], eax
        mov ecx, edi
        mov edx, eax
        jbe L_after_loop
        push ebx
        mov ebx, dword ptr [esp + 0x14]
    L_loop:
        fld dword ptr [ebx]
        sub ecx, 1
        fstp dword ptr [edx]
        add edx, 4
        test ecx, ecx
        ja L_loop
        pop ebx
    L_after_loop:
        lea edx, [eax + 4*edi]
        mov dword ptr [esi + 0x08], edx
    L_exit:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00608350] sub_00608350 (154 bytes)
extern "C" void ext_00602F70();
extern "C" void ext_00607F20();
extern "C" int mem_00924FE4;
extern "C" int mem_00956EE0;
extern "C" __declspec(naked) void __fastcall fn_00608350(void* self) {
    __asm {
        push -1
        push 0x8a819e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00602F70
        xor ebx, ebx
        mov dword ptr [esi], 0x971934
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0x64], ebx
        mov dword ptr [esi + 0x68], ebx
        mov dword ptr [esi + 0x6c], ebx
        mov dword ptr [esi + 0x70], ebx
        fldz
        lea eax, [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        push eax
        lea edi, [esi + 0x78]
        push 0x14
        mov ecx, edi
        mov byte ptr [esp + 0x24], 1
        mov dword ptr [esi + 0x74], 0x14
        call ext_00607F20
        mov dword ptr [edi + 0x10], ebx
        push 0x9719c4
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x20], 2
        call dword ptr [mem_00924FE4]
        fld dword ptr [mem_00956EE0]
        mov ecx, dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0xac]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0060B080] sub_0060B080 (111 bytes)
extern "C" void ext_006098F0();
extern "C" void ext_0060AFD0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0060B080(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x3c
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je no_alloc
        mov ecx, eax
        call ext_006098F0
        jmp after_alloc
    no_alloc:
        xor eax, eax
    after_alloc:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0060AFD0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00608990] sub_00608990 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006053C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608990(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006053C0
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

// [0x00608A10] sub_00608A10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605420();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608A10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605420
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

// [0x00608A90] sub_00608A90 (114 bytes)
extern "C" void ext_00605480();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608A90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605480
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

// [0x00608B10] sub_00608B10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006054E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608B10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006054E0
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

// [0x00608B90] sub_00608B90 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605540();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608B90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605540
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

// [0x00608C10] sub_00608C10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006055A0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608C10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006055A0
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

// [0x00608C90] sub_00608C90 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605600();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608C90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605600
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

// [0x00608D10] sub_00608D10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605660();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608D10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605660
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

// [0x00608D90] sub_00608D90 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006056C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608D90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006056C0
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

// [0x00608E10] sub_00608E10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605720();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608E10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605720
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

// [0x00608E90] sub_00608E90 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605780();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608E90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605780
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

// [0x00608F10] sub_00608F10 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006057E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608F10(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006057E0
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

// [0x00608F90] sub_00608F90 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605840();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608F90(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605840
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

// [0x00609010] sub_00609010 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006058A0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00609010(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006058A0
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

// [0x00609090] sub_00609090 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00605900();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00609090(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00605900
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

// [0x0060B620] sub_0060B620 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0060A1E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060B620(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0060A1E0
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

// [0x0060EC30] sub_0060EC30 (183 bytes)
extern "C" void ext_0058F2F0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0060EC30(void* self, int edx_unused, void* other) {
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
        lea eax, [edi + 0x154]
        push eax
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x9725ac
        mov dword ptr [esi + 0x4], 0x972564
        mov dword ptr [esi + 0x8], 0x972524
        mov dword ptr [esi + 0xc], 0x9724d4
        mov dword ptr [esi + 0x150], 0x9724bc
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x170]
        mov dword ptr [esi + 0x170], ecx
        mov edx, dword ptr [edi + 0x174]
        mov dword ptr [esi + 0x174], edx
        mov eax, dword ptr [edi + 0x178]
        mov dword ptr [esi + 0x178], eax
        mov ecx, dword ptr [edi + 0x17c]
        mov dword ptr [esi + 0x17c], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0060F4A0] sub_0060F4A0 (148 bytes)
extern "C" void ext_00402800();
extern "C" void ext_0060EC30();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0060F4A0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a8b46
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_0060EC30
        lea eax, [edi + 0x180]
        push eax
        lea ecx, [esi + 0x180]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x97299c
        mov dword ptr [esi + 0x4], 0x972954
        mov dword ptr [esi + 0x8], 0x972914
        mov dword ptr [esi + 0xc], 0x9728c4
        mov dword ptr [esi + 0x150], 0x9728ac
        call ext_00402800
        add edi, 0x190
        push edi
        lea ecx, [esi + 0x190]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0060EFE0] sub_0060EFE0 (185 bytes)
extern "C" void ext_0060EC30();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0060EFE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a8b26
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_0060EC30
        lea eax, [edi + 0x180]
        push eax
        lea ecx, [esi + 0x180]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x9727a4
        mov dword ptr [esi + 0x4], 0x97275c
        mov dword ptr [esi + 0x8], 0x97271c
        mov dword ptr [esi + 0xc], 0x9726cc
        mov dword ptr [esi + 0x150], 0x9726b4
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x19c]
        push ecx
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [edi + 0x1b8]
        add edi, 0x1bc
        push edi
        lea ecx, [esi + 0x1bc]
        mov byte ptr [esp + 0x18], 2
        mov dword ptr [esi + 0x1b8], edx
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0060FAE0] sub_0060FAE0 (124 bytes)
extern "C" void ext_0060EFE0();
extern "C" void ext_0060F990();

extern "C" __declspec(naked) void __fastcall fn_0060FAE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a8b68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_0060EFE0
        add edi, 0x1d8
        push edi
        lea ecx, [esi + 0x1d8]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x972b9c
        mov dword ptr [esi + 0x4], 0x972b54
        mov dword ptr [esi + 0x8], 0x972b14
        mov dword ptr [esi + 0xc], 0x972ac4
        mov dword ptr [esi + 0x150], 0x972aac
        call ext_0060F990
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0060F260] sub_0060F260 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060E7E0();
extern "C" void ext_0060EFE0();
extern "C" void __fastcall ext_0060F0D0(void* self);
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0060F260(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa95038
        push 0xa94fcc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x1d8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060EFE0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060E7E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x1d8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0060F0D0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

extern "C" void ext_0060F4A0();
extern "C" void ext_0060F550();

// [0x0060F820] sub_0060F820 (335 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060F820(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa95060
        push 0xa94fcc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x1ac
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060F4A0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0060E7E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x1ac
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0060F550
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0060FD40] sub_0060FD40 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060E7E0();
extern "C" void ext_0060FAE0();
extern "C" void ext_0060FB70();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0060FD40(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa950bc
        push 0xa94fcc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x1e8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0060FAE0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E7E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x1e8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_null_ret0
        mov ecx, eax
        call ext_0060FB70
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_null_ret0:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0060A470] sub_0060A470 (117 bytes)
extern "C" void ext_00609970();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0060A470(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_0060A470
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_00609970
        jmp L_DONE_0060A470
    L_NULL_0060A470:
        xor eax, eax
    L_DONE_0060A470:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0060AFD0] sub_0060AFD0 (126 bytes)
extern "C" void ext_0060ACD0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0060AFD0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_60B022
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_0060ACD0
        jmp short L_60B024
L_60B022:
        xor eax, eax
L_60B024:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00607F90] sub_00607F90 (127 bytes)
extern "C" void ext_004A6970();
extern "C" void ext_00607D50();

extern "C" __declspec(naked) void* __fastcall fn_00607F90(void* self, int edx_unused, const void* src) {
    __asm {
        push -1
        push 0x008A8168
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00607D50
        mov dword ptr [esi], 0x009718A4
        fld dword ptr [edi + 0x60]
        fstp dword ptr [esi + 0x60]
        add edi, 0x6C
        fld dword ptr [edi - 0x8]
        lea ebx, [esi + 0x6C]
        fstp dword ptr [esi + 0x64]
        mov eax, dword ptr [edi - 0x4]
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x1C], 0
        mov dword ptr [esi + 0x68], eax
        call ext_004A6970
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [ebx + 0x10], ecx
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ebx + 0x14], edx
        fld dword ptr [edi + 0x18]
        pop edi
        fstp dword ptr [ebx + 0x18]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00608180] sub_00608180 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_006033E0();
extern "C" void ext_00607E70();
extern "C" void ext_00607F90();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00608180(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa947f0
        push 0xa93750
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x88
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00607F90
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_006033E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x88
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_00607E70
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x006082D0] sub_006082D0 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_006033E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_006082D0(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x9719c0
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_006033E0
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0060DB80] sub_0060DB80 (128 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060DB80(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x972468
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_0060C130
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0060FA60] sub_0060FA60 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_0060E7E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060FA60(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x972aa4
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_0060E7E0
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0060FEB0] sub_0060FEB0 (128 bytes)
extern "C" void ext_0060E820();
extern "C" void ext_0040ECB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060FEB0(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x972ca4
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_0060E820
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00602D60] sub_00602D60 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00602D60(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa936f8
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_602DB3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_602DB3:
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

// [0x006093C0] sub_006093C0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006093C0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa94860
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_6093C0_skip
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_6093C0_skip:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], -0x1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

extern "C" void ext_005FFCB0();
extern "C" void ext_005FFD30();
extern "C" void ext_005FFDB0();
extern "C" void ext_005FFE30();
extern "C" void ext_005FFEB0();
extern "C" void ext_005FFF30();
extern "C" void ext_00602D60();
extern "C" void ext_00629170();
extern "C" void ext_0062A4F0();
extern "C" void ext_0062A520();
extern "C" void ext_0062B680();
extern "C" void ext_006798D0();
extern "C" void ext_00630190();
extern "C" int mem_00A9F420;
extern "C" int mem_00A9F428;
extern "C" int mem_00A9F430;

// [0x00602DF0] sub_00602DF0 (178 bytes)
extern "C" __declspec(naked) void __fastcall fn_00602DF0(void* self) {
    __asm {
        push    ecx
        lea     eax, [esp]
        push    0x0
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_00602D60
        push    0x960940
        lea     ecx, [esp + 0x4]
        call    ext_005FFCB0
        push    0x95e77c
        lea     ecx, [esp + 0x4]
        call    ext_005FFD30
        mov     ecx, dword ptr [mem_00A9F420]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_005FFDB0
        push    0x96f7e4
        lea     ecx, [esp + 0x4]
        call    ext_005FFDB0
        mov     edx, dword ptr [mem_00A9F428]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_005FFE30
        push    0x96f7dc
        lea     ecx, [esp + 0x4]
        call    ext_005FFE30
        mov     eax, dword ptr [mem_00A9F430]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_005FFEB0
        push    0x96f7d4
        lea     ecx, [esp + 0x4]
        call    ext_005FFEB0
        push    0x96e578
        lea     ecx, [esp + 0x4]
        call    ext_005FFF30
        call    ext_0062A4F0
        call    ext_0062A520
        call    ext_0062B680
        call    ext_00629170
        add     esp, 0x4
        jmp     ext_00630190
    }
}

// [0x00609450] sub_00609450 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_00609450(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa9487c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_609450_skip
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_609450_skip:
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

// [0x0060B800] sub_0060B800 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060B800(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa94e4c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_60B800_skip
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_60B800_skip:
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

// [0x00608620] sub_00608620 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B477F8;
extern "C" int mem_00B477F4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00608620(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a81c7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B477F8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B477F8], 0x1
        mov     ecx, offset mem_00B477F4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B477F4], 0x970f24
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B477F4
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
