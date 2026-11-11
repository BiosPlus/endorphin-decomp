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
