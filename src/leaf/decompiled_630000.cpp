// Decompiled translation unit: src/leaf/decompiled_630000.cpp

extern "C" void ext_0063CFD0();

// [0x0063D480] sub_0063D480 (18 bytes)
extern "C" void __fastcall fn_0063D480(void* self, int edx_unused, float a1) {
    *(float*)((char*)self + 0xb0) = a1;
    ext_0063CFD0();
}

extern "C" void* __stdcall ext_00630540(void* a1);
extern "C" void __fastcall ext_00693FE0(void* self);

// [0x00630E40] sub_00630E40 (24 bytes)
extern "C" void* __fastcall fn_00630E40(void* self) {
    void* esi = (char*)self + 0x150;
    void* eax = ext_00630540(esi);
    ext_00693FE0(eax);
    return esi;
}

extern "C" void ext_00630580();
extern "C" void ext_00693F40();

// [0x00630E60] sub_00630E60 (24 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630E60(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0f8h]
        call ext_00630580
        push eax
        mov ecx, esi
        call ext_00693F40
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_00630E60();

// [0x00630E80] sub_00630E80 (24 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630E80(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 108h]
        push esi
        call ext_00630E60
        mov ecx, eax
        call ext_00693FE0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00630540] sub_00630540 (25 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630540(void* self) {
    __asm {
        push esi
        __asm _emit 0x8D __asm _emit 0xB1 __asm _emit 0x5C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea esi, [ecx + 0x15c]
        __asm _emit 0x81 __asm _emit 0xC1 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, 0x90
        push ecx
        mov ecx, esi
        call ext_00693F40
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_0062CD30();

// [0x0063D950] sub_0063D950 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063D950(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 9793d4h
        fst dword ptr [esi + 48h]
        fst dword ptr [esi + 44h]
        mov eax, esi
        fstp dword ptr [esi + 40h]
        pop esi
        ret
    }
}

// [0x0063D970] sub_0063D970 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063D970(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 979284h
        fst dword ptr [esi + 44h]
        fst dword ptr [esi + 40h]
        mov eax, esi
        fstp dword ptr [esi + 3ch]
        pop esi
        ret
    }
}

// [0x0063DAB0] sub_0063DAB0 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063DAB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 9792f4h
        fst dword ptr [esi + 44h]
        fst dword ptr [esi + 40h]
        mov eax, esi
        fstp dword ptr [esi + 3ch]
        pop esi
        ret
    }
}

// [0x0063DDF0] sub_0063DDF0 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063DDF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 9794b4h
        fst dword ptr [esi + 40h]
        fst dword ptr [esi + 3ch]
        mov eax, esi
        fstp dword ptr [esi + 38h]
        pop esi
        ret
    }
}

// [0x0063DE10] sub_0063DE10 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063DE10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 979444h
        fst dword ptr [esi + 40h]
        fst dword ptr [esi + 3ch]
        mov eax, esi
        fstp dword ptr [esi + 38h]
        pop esi
        ret
    }
}

extern "C" int mem_00924FE0;

// [0x0063E0C0] sub_0063E0C0 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063E0C0(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi+4]
        mov dword ptr [esi], 0x97cb4c
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [esi+20h], ecx
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x0063E240] sub_0063E240 (32 bytes)
extern "C" void ext_0063E0C0();

extern "C" __declspec(naked) void* __fastcall fn_0063E240(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_0063E0C0
        mov dword ptr [esi], 0x97cb8c
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x0063EA50] sub_0063EA50 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063EA50(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 28h]
        test edx, edx
        jne short L_0063EA50_nonzero
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
L_0063EA50_nonzero:
        mov eax, dword ptr [ecx + 2ch]
        sub eax, edx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
    }
}

// [0x00630480] sub_00630480 (40 bytes)
extern "C" void __fastcall fn_00630480(void* self, int edx_unused, const float* src) {
    unsigned char* p = static_cast<unsigned char*>(self);
    *reinterpret_cast<float*>(p + 0x90) = src[0];
    *reinterpret_cast<float*>(p + 0x94) = src[1];
    *reinterpret_cast<float*>(p + 0x98) = src[2];
    *reinterpret_cast<volatile unsigned char*>(p + 0xf5) = 0;
}

// [0x006304B0] sub_006304B0 (40 bytes)
extern "C" void __fastcall fn_006304B0(void* self, int edx_unused, const float* src) {
    unsigned char* p = static_cast<unsigned char*>(self);
    *reinterpret_cast<float*>(p + 0x90) = src[0];
    *reinterpret_cast<float*>(p + 0x94) = src[1];
    *reinterpret_cast<float*>(p + 0x98) = src[2];
    *reinterpret_cast<volatile unsigned char*>(p + 0xf5) = 1;
}

// [0x006304E0] sub_006304E0 (40 bytes)
extern "C" void __fastcall fn_006304E0(void* self, int edx_unused, const float* src) {
    unsigned char* p = static_cast<unsigned char*>(self);
    *reinterpret_cast<float*>(p + 0xb4) = src[0];
    *reinterpret_cast<float*>(p + 0xb8) = src[1];
    *reinterpret_cast<float*>(p + 0xbc) = src[2];
    *reinterpret_cast<volatile unsigned char*>(p + 0xf6) = 0;
}

// [0x00630510] sub_00630510 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630510(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0xb4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0xb8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0xbc]
        mov byte ptr [ecx + 0xf6], 0x1
        ret 0x4
    }
}

extern "C" void* __cdecl ext_00594000();
extern "C" float __fastcall ext_00594070(void* self);

// [0x00630CB0] sub_00630CB0 (43 bytes)
extern "C" void __fastcall fn_00630CB0(void* self, int edx_unused, float a1) {
    char* esi = reinterpret_cast<char*>(self);
    *reinterpret_cast<float*>(esi + 0x178) = 0.0f;
    void* eax = ext_00594000();
    *reinterpret_cast<float*>(esi + 0x17c) = ext_00594070(eax);
    *reinterpret_cast<float*>(esi + 0xf0) = a1;
}

extern "C" int mem_00940694;

// [0x0063DB50] sub_0063DB50 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063DB50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 979364h
        fst dword ptr [esi + 44h]
        fst dword ptr [esi + 40h]
        mov eax, esi
        fstp dword ptr [esi + 3ch]
        fld dword ptr [mem_00940694]
        fstp dword ptr [esi + 48h]
        pop esi
        ret
    }
}

// [0x0063EA80] sub_0063EA80 (69 bytes)
extern "C" void ext_0063E970();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0063EA80(void* self) {
    __asm {
        push -1
        push 0x008AED18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_0063E970
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0063E0F0();
extern "C" int mem_00924FF4;

// [0x0063E9E0] sub_0063E9E0 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063E9E0(void* self) {
    __asm {
        push -1
        push 0x008AED58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0063E0F0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0063FFF0] sub_0063FFF0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063FFF0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x8aed18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov eax, dword ptr [esp + 0x18]
        add eax, 0x4
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x97cc3c
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0063E980] sub_0063E980 (82 bytes)
extern "C" void ext_0063E960();
extern "C" __declspec(naked) void __fastcall fn_0063E980(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x8aed18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0063E960
        mov eax, dword ptr [esp + 0x18]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x97cc3c
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0063F350] sub_0063F350 (85 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_0097CC44;

extern "C" __declspec(naked) void* __fastcall fn_0063F350(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8aed58
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        call ext_0063E0C0
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi], offset mem_0097CC44
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0063F600] sub_0063F600 (32 bytes)
extern "C" void ext_0063F350();

extern "C" __declspec(naked) void* __fastcall fn_0063F600(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_0063F350
        mov dword ptr [esi], 0x97cc60
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x0063F960] sub_0063F960 (82 bytes)
extern "C" void ext_0063F350();

extern "C" __declspec(naked) void* __fastcall fn_0063F960(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8aede8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        call ext_0063F350
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi], 0x97ccb0
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x48], eax
        mov byte ptr [esi + 0x4c], al
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00632A20] sub_00632A20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529A8;
extern "C" int mem_00B529A4;

extern "C" __declspec(naked) void* __fastcall fn_00632A20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ade6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529A8], al
        jne L_done
        or dword ptr [mem_00B529A8], eax
        mov ecx, offset mem_00B529A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529A4], 0x979b04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632A80] sub_00632A80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529B0;
extern "C" int mem_00B529AC;

extern "C" __declspec(naked) void* __fastcall fn_00632A80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ade8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529B0], al
        jne L_done
        or dword ptr [mem_00B529B0], eax
        mov ecx, offset mem_00B529AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529AC], 0x979bdc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632AE0] sub_00632AE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529B8;
extern "C" int mem_00B529B4;

extern "C" __declspec(naked) void* __fastcall fn_00632AE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adeae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529B8], al
        jne L_done
        or dword ptr [mem_00B529B8], eax
        mov ecx, offset mem_00B529B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529B4], 0x979cb4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632B40] sub_00632B40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529C0;
extern "C" int mem_00B529BC;

extern "C" __declspec(naked) void* __fastcall fn_00632B40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adece
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529C0], al
        jne L_done
        or dword ptr [mem_00B529C0], eax
        mov ecx, offset mem_00B529BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529BC], 0x979d8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632BA0] sub_00632BA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529C8;
extern "C" int mem_00B529C4;

extern "C" __declspec(naked) void* __fastcall fn_00632BA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adeee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529C8], al
        jne L_done
        or dword ptr [mem_00B529C8], eax
        mov ecx, offset mem_00B529C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529C4], 0x979e64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529C4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632C00] sub_00632C00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529D0;
extern "C" int mem_00B529CC;

extern "C" __declspec(naked) void* __fastcall fn_00632C00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adf0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529D0], al
        jne L_done
        or dword ptr [mem_00B529D0], eax
        mov ecx, offset mem_00B529CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529CC], 0x979f3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529CC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632C60] sub_00632C60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529D8;
extern "C" int mem_00B529D4;

extern "C" __declspec(naked) void* __fastcall fn_00632C60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adf2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529D8], al
        jne L_done
        or dword ptr [mem_00B529D8], eax
        mov ecx, offset mem_00B529D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529D4], 0x97a014
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529D4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00632CC0] sub_00632CC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B529E0;
extern "C" int mem_00B529DC;

extern "C" __declspec(naked) void* __fastcall fn_00632CC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adf4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B529E0], al
        jne L_done
        or dword ptr [mem_00B529E0], eax
        mov ecx, offset mem_00B529DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B529DC], 0x97a0ec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B529DC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
