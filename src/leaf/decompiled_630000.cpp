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

// [0x0063CC00] sub_0063CC00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B53180;
extern "C" int mem_00B5317C;

extern "C" __declspec(naked) void* __fastcall fn_0063CC00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ae8fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B53180], al
        jne L_done
        or dword ptr [mem_00B53180], eax
        mov ecx, offset mem_00B5317C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5317C], 0x97c844
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5317C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" int mem_00925134;
extern "C" int mem_009251EC;

// [0x0063F480] sub_0063F480 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063F480(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        test ebx, ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov esi, ecx
        jne short L_nonnull
        call ebp
    L_nonnull:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [ebx + 0x8]
        jb short L_inrange
        call ebp
    L_inrange:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je short L_noelem
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_noelem:
        mov eax, dword ptr [esi + 0x2c]
        lea ecx, [edi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle short L_done
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_done:
        add dword ptr [esi + 0x2c], -0x4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x0063D8F0] sub_0063D8F0 (92 bytes)
extern "C" int mem_009518E0;
extern "C" int mem_00956EE0;

// [0x0063D8F0] sub_0063D8F0 (92 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063D8F0(void* self) {
    __asm {
        fldz
        mov byte ptr [ecx + 38h], 1
        fst dword ptr [ecx + 8h]
        xor eax, eax
        fst dword ptr [ecx + 4h]
        fst dword ptr [ecx]
        fst dword ptr [ecx + 14h]
        fst dword ptr [ecx + 10h]
        fst dword ptr [ecx + 0ch]
        fst dword ptr [ecx + 20h]
        fst dword ptr [ecx + 1ch]
        fst dword ptr [ecx + 18h]
        fst dword ptr [ecx + 2ch]
        fst dword ptr [ecx + 28h]
        fst dword ptr [ecx + 24h]
        fld dword ptr [mem_009518E0]
        mov dword ptr [ecx + 30h], eax
        fst dword ptr [ecx + 3ch]
        mov dword ptr [ecx + 34h], eax
        fst dword ptr [ecx + 40h]
        fst dword ptr [ecx + 44h]
        fst dword ptr [ecx + 48h]
        fld dword ptr [mem_00956EE0]
        fst dword ptr [ecx + 4ch]
        fst dword ptr [ecx + 50h]
        fstp dword ptr [ecx + 5ch]
        fst dword ptr [ecx + 54h]
        fstp dword ptr [ecx + 58h]
        fstp dword ptr [ecx + 60h]
        ret
    }
}

// [0x0063E610] sub_0063E610 (94 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0063E610(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x8aed58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_0063E0C0
        mov edx, dword ptr [esp + 0x20]
        push edx
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x97cbec
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00630420] sub_00630420 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630420(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4Ch]
        lea edx, [esp + 4h]
        push edx
        call eax
        fld dword ptr [esi + 9Ch]
        fstp dword ptr [esi + 144h]
        lea eax, [esi + 144h]
        fld dword ptr [esi + 0A0h]
        fstp dword ptr [eax + 4h]
        fld dword ptr [esi + 0A4h]
        pop esi
        fstp dword ptr [eax + 8h]
        fld dword ptr [esp]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [eax]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [eax + 4h]
        fmul st, st(1)
        fstp dword ptr [eax + 4h]
        fmul dword ptr [eax + 8h]
        fstp dword ptr [eax + 8h]
        pop ecx
        ret
    }
}

// [0x0063E5B0] sub_0063E5B0 (96 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_00A9B148;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0063E5B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8aed58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9B148]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_0063E0C0
        mov edx, dword ptr [esp + 0x1c]
        push edx
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x97cbec
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0063D990] sub_0063D990 (101 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0063D990(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+2ch]
        test eax, eax
        push edi
        mov edi, dword ptr [mem_00925134]
        je short L_0063D9AF
        mov ecx, dword ptr [esi+30h]
        sub ecx, eax
        sar ecx, 2
        jne short L_0063D9B1
L_0063D9AF:
        call edi
L_0063D9B1:
        mov edx, dword ptr [esi+2ch]
        mov ebx, dword ptr [edx]
        mov ecx, edx
        test ecx, ecx
        je short L_0063D9C9
        mov eax, dword ptr [esi+30h]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja short L_0063D9CB
L_0063D9C9:
        call edi
L_0063D9CB:
        mov eax, dword ptr [esi+2ch]
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [eax+4]
        mov eax, dword ptr [edx+44h]
        mov ecx, ebx
        call eax
        fstp qword ptr [esp+0ch]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx+44h]
        mov ecx, edi
        call eax
        fsubr qword ptr [esp+0ch]
        pop edi
        fstp dword ptr [esi+38h]
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0063E050] sub_0063E050 (102 bytes)
extern "C" int mem_00925070;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0063E050(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 08b56f9h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1ch
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        sub edx, dword ptr [esp + 30h]
        lea ecx, [esp]
        push edx
        push eax
        call dword ptr [mem_00925070]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        mov dword ptr [esp + 28h], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp]
        mov dword ptr [esp + 24h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 8
    }
}

// [0x0063EC10] sub_0063EC10 (117 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0063EC10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        lea ebp, [ecx + 0x24]
    L_0063EC21:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_0063EC2B
        call ebx
    L_0063EC2B:
        mov eax, dword ptr [esi]
        test eax, eax
        je L_0063EC35
        cmp eax, ebp
        je L_0063EC37
    L_0063EC35:
        call ebx
    L_0063EC37:
        cmp dword ptr [esi + 0x4], edi
        jae L_0063EC7C
        cmp dword ptr [esi], 0
        jne L_0063EC43
        call ebx
    L_0063EC43:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jb L_0063EC4F
        call ebx
    L_0063EC4F:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x14]
        cmp dword ptr [edx], eax
        je L_0063EC73
        cmp dword ptr [esi], 0
        jne L_0063EC61
        call ebx
    L_0063EC61:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        cmp edx, dword ptr [ecx + 0x8]
        jb L_0063EC6D
        call ebx
    L_0063EC6D:
        add dword ptr [esi + 0x4], 0x4
        jmp L_0063EC21
    L_0063EC73:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x8
    L_0063EC7C:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    }
}

// [0x0063F4E0] sub_0063F4E0 (80 bytes)
extern "C" void ext_0063EC10();
extern "C" void ext_0063F480();
extern "C" __declspec(naked) void __fastcall fn_0063F4E0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x28]
        cmp ebx, dword ptr [edi + 0x2c]
        lea esi, [edi + 0x24]
        jbe short L_inrange
        call dword ptr [mem_00925134]
    L_inrange:
        mov ecx, dword ptr [esp + 0x18]
        lea eax, [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], ebx
        call ext_0063EC10
        test al, al
        je short L_done
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_0063F480
    L_done:
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0063E290] sub_0063E290 (119 bytes)
extern "C" void ext_0063E240();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063E290(void* self, int edx_unused, void* a1, unsigned char a2) {
    __asm {
        push -1
        push 0x8aecb1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call ext_0063E240
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 2
        call dword ptr [mem_00924FF4]
        mov dl, byte ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esi], 0x97cba8
        mov byte ptr [esi + 0x24], dl
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 8
    }
}

// [0x0063E310] sub_0063E310 (106 bytes)
extern "C" void ext_0063E290();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0063E310(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x28
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je null_path
        movsx ecx, byte ptr [esi + 0x24]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        push edx
        __asm _emit 0x8B __asm _emit 0xC8 // mov ecx, eax
        call ext_0063E290
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    null_path:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" int mem_00925134;

// [0x0063DAD0] sub_0063DAD0 (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063DAD0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 2ch]
        test ecx, ecx
        push edi
        mov edi, dword ptr [mem_00925134]
        je L_call1
        mov eax, dword ptr [esi + 30h]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja L_after1
    L_call1:
        call edi
    L_after1:
        mov eax, dword ptr [esi + 2ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 44h]
        call eax
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        je L_call2
        mov ecx, dword ptr [esi + 30h]
        sub ecx, eax
        sar ecx, 2
        jne L_after2
    L_call2:
        call edi
    L_after2:
        mov edx, dword ptr [esi + 2ch]
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 44h]
        call edx
        fstp dword ptr [esp + 0ch]
        fld dword ptr [esp + 8]
        fld dword ptr [esp + 0ch]
        fcompp
        fnstsw ax
        test ah, 41h
        lea eax, [esp + 8]
        je L_pick
        lea eax, [esp + 0ch]
    L_pick:
        fld dword ptr [eax]
        pop edi
        fstp dword ptr [esi + 38h]
        pop esi
        add esp, 8
        ret
    }
}

// [0x0063E100] sub_0063E100 (126 bytes)
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_0063E100(void* self) {
    __asm {
        push -1
        push 8aecd1h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push 97cb80h
        lea ecx, [esp+0ch]
        mov dword ptr [esp+8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp+34h]
        lea eax, [esp+8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp+34h], 0
        call ext_0063E0C0
        lea ecx, [esp+8]
        mov byte ptr [esp+2ch], 2
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+38h]
        push edx
        lea ecx, [esi+24h]
        mov dword ptr [esi], 97cb68h
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+24h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 8
    }
}

// [0x0063E460] sub_0063E460 (126 bytes)
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0063E460(void* self) {
    __asm {
        push -1
        push 8aecd1h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push 97cbdch
        lea ecx, [esp+0ch]
        mov dword ptr [esp+8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp+34h]
        lea eax, [esp+8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp+34h], 0
        call ext_0063E0C0
        lea ecx, [esp+8]
        mov byte ptr [esp+2ch], 2
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+38h]
        push edx
        lea ecx, [esi+24h]
        mov dword ptr [esi], 97cbc4h
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+24h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 8
    }
}

// [0x0063E1A0] sub_0063E1A0 (105 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new) inside an MSVC SEH frame (state -1,
// __ehhandler 0x8A7A5B). On success calls the 2-arg ctor ext_0063E100 (ret 8) with
// (arg, this+0x24) on the new object and returns its eax; NULL if the allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_0063E100();

extern "C" __declspec(naked) void* __fastcall fn_0063E1A0(void* self, int edx_unused, int arg) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        je null_path_63E1A0
        mov ecx, dword ptr [esp + 18h]
        add esi, 24h
        push esi
        push ecx
        mov ecx, eax
        call ext_0063E100
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    null_path_63E1A0:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x0063E7F0] sub_0063E7F0 (126 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0063E7F0(void* self) {
    __asm {
        push -1
        push 8aecd1h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push 97cc20h
        lea ecx, [esp+0ch]
        mov dword ptr [esp+8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp+34h]
        lea eax, [esp+8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp+34h], 0
        call ext_0063E0C0
        lea ecx, [esp+8]
        mov byte ptr [esp+2ch], 2
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+38h]
        push edx
        lea ecx, [esi+24h]
        mov dword ptr [esi], 97cc08h
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+24h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 8
    }
}

// [0x0063E3E0] sub_0063E3E0 (128 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9B148;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0063E3E0(void* self) {
    __asm {
        push -1
        push 8aecd1h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push 97cbdch
        lea ecx, [esp+0ch]
        mov dword ptr [esp+8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [mem_00A9B148]
        lea eax, [esp+8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp+34h], 0
        call ext_0063E0C0
        lea ecx, [esp+8]
        mov byte ptr [esp+2ch], 2
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+34h]
        push edx
        lea ecx, [esi+24h]
        mov dword ptr [esi], 97cbc4h
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+24h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 4
    }
}

// [0x0063E770] sub_0063E770 (128 bytes)
extern "C" void ext_0063E0C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9B148;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0063E770(void* self) {
    __asm {
        push -1
        push 8aecd1h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push 97cc20h
        lea ecx, [esp+0ch]
        mov dword ptr [esp+8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [mem_00A9B148]
        lea eax, [esp+8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp+34h], 0
        call ext_0063E0C0
        lea ecx, [esp+8]
        mov byte ptr [esp+2ch], 2
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+34h]
        push edx
        lea ecx, [esi+24h]
        mov dword ptr [esi], 97cc08h
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp+24h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 4
    }
}

// [0x00630390] sub_00630390 (131 bytes)
extern "C" void ext_0067B7F0();

extern "C" __declspec(naked) void __fastcall fn_00630390(void* self, int edx_unused, const float* in) {
    __asm {
        sub esp, 1ch
        mov eax, dword ptr [esp + 20h]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 14h]
        mov esi, ecx
        fld dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 4]
        fstp dword ptr [esp + 18h]
        lea edx, [esp + 24h]
        fld dword ptr [eax + 8]
        push edx
        fstp dword ptr [esp + 20h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4Ch]
        call eax
        fld dword ptr [esp + 24h]
        lea ecx, [esp + 14h]
        fstp dword ptr [esp + 4]
        call ext_0067B7F0
        fld dword ptr [eax]
        fld dword ptr [esp + 4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 8]
        fld dword ptr [eax + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 0Ch]
        fmul dword ptr [eax + 8]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 8]
        fstp dword ptr [esi + 9Ch]
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esi + 0A0h]
        fld dword ptr [esp + 10h]
        fstp dword ptr [esi + 0A4h]
        pop esi
        add esp, 1ch
        ret 4
    }
}

// [0x0063EFE0] sub_0063EFE0 (133 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void* __fastcall fn_0063EFE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x40]
        cmp esi, dword ptr [ecx + 0x44]
        push edi
        lea edi, [ecx + 0x3c]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_head:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, edi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp esi, ebx
        jae L_notfound
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_chk4
        call ebx
L_chk4:
        mov eax, dword ptr [esi]
        add eax, 0x4
        push ebp
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        jne L_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk5
        call ebx
L_chk5:
        add esi, 0x4
        jmp L_head
L_found:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk6
        call ebx
L_chk6:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_notfound:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xb53a34
        pop ebx
        ret 0x4
    }
}

// [0x0063F620] sub_0063F620 (136 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void* __fastcall fn_0063F620(void* self, int edx_unused, const char* a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x40]
        cmp esi, dword ptr [ecx + 0x44]
        push edi
        lea edi, [ecx + 0x3c]
        jbe L_0063F637
        call ebp
    L_0063F637:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0063F647
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0063F647:
        test edi, edi
        je L_0063F64F
        cmp edi, edi
        je L_0063F657
    L_0063F64F:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0063F657:
        cmp esi, ebx
        jae L_0063F69C
        test edi, edi
        jne L_0063F661
        call ebp
    L_0063F661:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0063F668
        call ebp
    L_0063F668:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x14]
        add eax, 0x4
        push ecx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        jne L_0063F68C
        cmp esi, dword ptr [edi + 0x8]
        jb L_0063F687
        call ebp
    L_0063F687:
        add esi, 0x4
        jmp L_0063F637
    L_0063F68C:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0063F693
        call ebp
    L_0063F693:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    L_0063F69C:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xb53a34
        pop ebx
        ret 0x4
    }
}

extern "C" int mem_00925134;
extern "C" int mem_009251EC;

// [0x0063F8D0] sub_0063F8D0 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063F8D0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0063F8E7
        call ebp
    L_0063F8E7:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_0063F8F1
        call ebp
    L_0063F8F1:
        cmp esi, esi
        je L_0063F8F7
        call ebp
    L_0063F8F7:
        cmp edi, ebx
        jae L_0063F91C
        cmp edi, dword ptr [esi + 0x8]
        jb L_0063F902
        call ebp
    L_0063F902:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je L_0063F910
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_0063F910:
        cmp edi, dword ptr [esi + 0x8]
        jb L_0063F917
        call ebp
    L_0063F917:
        add edi, 0x4
        jmp L_0063F8E7
    L_0063F91C:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_0063F926
        call ebp
    L_0063F926:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0063F930
        call ebp
    L_0063F930:
        cmp edi, ebx
        je L_0063F95A
        mov eax, dword ptr [esi + 0x8]
        sub eax, ebx
        sar eax, 0x2
        test eax, eax
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0x39
        jle L_0063F957
        push ecx
        push ebx
        push ecx
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_0063F957:
        mov dword ptr [esi + 0x8], ebp
    L_0063F95A:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0063E500] sub_0063E500 (151 bytes)
// SEH-framed (state -1, handler 0x8AED05). Allocates 0x40 bytes via ext_006A5C62 (operator new);
// if non-null, calls vtbl slot 1 of self with a std::string sret temp at [esp+0x14], constructs
// the new object via ext_0063E460(obj, a1, &tmp), then destroys tmp (flag bl). Returns the object
// in eax, or NULL when the allocation failed.
extern "C" void ext_0063E460();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063E500(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8aed05h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push 40h
        mov esi, ecx
        mov dword ptr [esp + 10h], ebx
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 38h], ebx
        je null_path_63E500
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call edx
        push eax
        mov eax, dword ptr [esp + 44h]
        mov ebx, 1
        push eax
        mov ecx, edi
        mov byte ptr [esp + 40h], 1
        mov dword ptr [esp + 14h], ebx
        call ext_0063E460
        mov esi, eax
        jmp done_path_63E500
    null_path_63E500:
        xor esi, esi
    done_path_63E500:
        test bl, 1
        mov dword ptr [esp + 38h], 0ffffffffh
        je skip_dtor_63E500
        lea ecx, [esp + 14h]
        call dword ptr [mem_00924FF4]
    skip_dtor_63E500:
        mov ecx, dword ptr [esp + 30h]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 30h
        ret 4
    }
}

// [0x0063E890] sub_0063E890 (151 bytes)
// SEH-framed (state -1, handler 0x8AED05). Allocates 0x40 bytes via ext_006A5C62 (operator new);
// if non-null, calls vtbl slot 1 of self with a std::string sret temp at [esp+0x14], constructs
// the new object via ext_0063E7F0(obj, a1, &tmp), then destroys tmp (flag bl). Returns the object
// in eax, or NULL when the allocation failed.
extern "C" void ext_0063E7F0();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063E890(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8aed05h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push 40h
        mov esi, ecx
        mov dword ptr [esp + 10h], ebx
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 38h], ebx
        je null_path_63E890
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call edx
        push eax
        mov eax, dword ptr [esp + 44h]
        mov ebx, 1
        push eax
        mov ecx, edi
        mov byte ptr [esp + 40h], 1
        mov dword ptr [esp + 14h], ebx
        call ext_0063E7F0
        mov esi, eax
        jmp done_path_63E890
    null_path_63E890:
        xor esi, esi
    done_path_63E890:
        test bl, 1
        mov dword ptr [esp + 38h], 0ffffffffh
        je skip_dtor_63E890
        lea ecx, [esp + 14h]
        call dword ptr [mem_00924FF4]
    skip_dtor_63E890:
        mov ecx, dword ptr [esp + 30h]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 30h
        ret 4
    }
}

// [0x0063E6C0] sub_0063E6C0 (155 bytes)
// SEH-framed (state -1, handler 0x8AED05). Allocates 0x40 bytes via ext_006A5C62 (operator new);
// if non-null, calls vtbl slot 1 of self with a std::string sret temp at [esp+0x14], constructs
// the new object via ext_0063E610(obj, self+4, &tmp), then destroys tmp (flag bl). Returns the object
// in eax, or NULL when the allocation failed.
extern "C" void ext_0063E610();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063E6C0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8aed05h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push 40h
        mov esi, ecx
        mov dword ptr [esp + 10h], ebx
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 38h], ebx
        je null_path_63E6C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call edx
        push eax
        mov eax, dword ptr [esp + 44h]
        add esi, 4
        push esi
        mov ebx, 1
        push eax
        mov ecx, edi
        mov byte ptr [esp + 44h], 1
        mov dword ptr [esp + 18h], ebx
        call ext_0063E610
        mov esi, eax
        jmp done_path_63E6C0
    null_path_63E6C0:
        xor esi, esi
    done_path_63E6C0:
        test bl, 1
        mov dword ptr [esp + 38h], 0ffffffffh
        je skip_dtor_63E6C0
        lea ecx, [esp + 14h]
        call dword ptr [mem_00924FF4]
    skip_dtor_63E6C0:
        mov ecx, dword ptr [esp + 30h]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 30h
        ret 4
    }
}

// [0x0063F6B0] sub_0063F6B0 (156 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00A9B148;
extern "C" int mem_00924FF4;
extern "C" void ext_0063F350();

extern "C" __declspec(naked) void* __fastcall fn_0063F6B0(void* self) {
    __asm {
        push -1
        push 0x8aedad
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x97cca0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [mem_00A9B148]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call ext_0063F350
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 2
        call dword ptr [mem_00924FF4]
        push 0x97cc9c
        lea ecx, [esi + 0x3c]
        mov dword ptr [esi], 0x97cc84
        call dword ptr [mem_00924FE4]
        push 0x97cc78
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x30], 3
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x24]
        mov byte ptr [esi + 0x74], 1
        mov dword ptr [esi + 0x78], 0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

#define _DLL
#include <vector>

struct TargetItem_63DB80 {
    virtual void vfunc_0() = 0;
    virtual void vfunc_4() = 0;
    virtual void vfunc_8() = 0;
    virtual void vfunc_c() = 0;
    virtual void vfunc_10() = 0;
    virtual void vfunc_14() = 0;
    virtual void vfunc_18() = 0;
    virtual void vfunc_1c() = 0;
    virtual void vfunc_20() = 0;
    virtual void vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual void vfunc_2c() = 0;
    virtual void vfunc_30() = 0;
    virtual void vfunc_34() = 0;
    virtual void vfunc_38() = 0;
    virtual void vfunc_3c() = 0;
    virtual void vfunc_40() = 0;
    virtual double vfunc_44() = 0;
    virtual void vfunc_48() = 0;
    virtual void vfunc_4c() = 0;
    virtual void vfunc_50() = 0;
    virtual void vfunc_54() = 0;
    virtual void vfunc_58() = 0;
    virtual void vfunc_5c() = 0;
    virtual double vfunc_60() = 0;
};

struct TargetClass_63DB80 {
    char pad_00[0x28];
    std::vector<TargetItem_63DB80*> items;
    float result;
    char pad_3c[0xc];
    float rate;
};

// [0x0063DB80] sub_0063DB80 (157 bytes)
extern "C" void __fastcall fn_0063DB80(TargetClass_63DB80* self) {
    TargetItem_63DB80* item0 = self->items[0];
    TargetItem_63DB80* item1 = self->items[1];
    TargetItem_63DB80* item2 = self->items[2];
    double diff = (item1->vfunc_44() - item2->vfunc_44() - 0.03) * self->rate;
    self->result = (float)(item0->vfunc_60() + diff);
}

// [0x0063DA00] sub_0063DA00 (163 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063DA00(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2c]
        test ecx, ecx
        push edi
        je L_call1
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x1
        ja L_chk2
    L_call1:
        call ebx
    L_chk2:
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        mov edi, dword ptr [eax + 0x4]
        je L_call2
        mov ecx, dword ptr [esi + 0x30]
        sub ecx, eax
        sar ecx, 0x2
        jne L_main
    L_call2:
        call ebx
    L_main:
        mov edx, dword ptr [esi + 0x2c]
        mov eax, dword ptr [edi]
        mov ebx, dword ptr [edx]
        mov edx, dword ptr [eax + 0x38]
        mov ecx, edi
        call edx
        mov edi, eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x38]
        mov ecx, ebx
        call edx
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fsub dword ptr [edi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fsub dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fsub dword ptr [edi + 0x8]
        pop edi
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x40]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0x44]
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x0063CA70] sub_0063CA70 (175 bytes)
extern "C" void ext_00697650();
extern "C" void ext_00697690();
extern "C" __declspec(naked) void __fastcall fn_0063CA70(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        push 0x0
        call edx
        fsub dword ptr [esi + 0x2c]
        push ecx
        lea edi, [esi + 0x6c]
        fstp dword ptr [esp + 0xc]
        mov ecx, edi
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x30]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp]
        call ext_00697690
        fld dword ptr [esi + 0x4c]
        fmul dword ptr [esi + 0x30]
        fchs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x50]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_cade
        fstp st(1)
    L_cad8:
        fstp dword ptr [esp + 0x8]
        jmp L_caf1
    L_cade:
        fstp st(0)
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_cad8
        fstp st(0)
    L_caf1:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        push edx
        call eax
        mov ecx, edi
        call ext_00697650
        fmul dword ptr [esi + 0x60]
        pop edi
        fadd dword ptr [esi + 0x54]
        fstp dword ptr [esi + 0x64]
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0063EC90] sub_0063EC90 (176 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0063EC90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        lea ebp, [ecx + 0x24]
    L_0063ECA1:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_0063ECAB
        call ebx
    L_0063ECAB:
        mov eax, dword ptr [esi]
        test eax, eax
        je L_0063ECB5
        cmp eax, ebp
        je L_0063ECB7
    L_0063ECB5:
        call ebx
    L_0063ECB7:
        cmp dword ptr [esi + 0x4], edi
        jae L_0063ED37
        cmp dword ptr [esi], 0x0
        jne L_0063ECC3
        call ebx
    L_0063ECC3:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jb L_0063ECCF
        call ebx
    L_0063ECCF:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 0x14]
        add eax, 0x4
        push ecx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_0063ED12
        cmp dword ptr [esi], 0x0
        jne L_0063ECF1
        call ebx
    L_0063ECF1:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [edx + 0x8]
        jb L_0063ECFD
        call ebx
    L_0063ECFD:
        mov ecx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx + 0xc]
        push eax
        call edx
        test al, al
        jne L_0063ED2E
    L_0063ED12:
        cmp dword ptr [esi], 0x0
        jne L_0063ED19
        call ebx
    L_0063ED19:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jb L_0063ED25
        call ebx
    L_0063ED25:
        add dword ptr [esi + 0x4], 0x4
        jmp L_0063ECA1
    L_0063ED2E:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x0c
    L_0063ED37:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x0c
    }
}

extern "C" void ext_006A5C5C();

// [0x0063F3B0] sub_0063F3B0 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063F3B0(void* self) {
    __asm {
        push -1
        push 0x8aed83
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 0x0c], ebp
        mov dword ptr [ebp], 0x97cc44
        mov edi, dword ptr [ebp + 0x28]
        cmp edi, dword ptr [ebp + 0x2c]
        lea esi, [ebp + 0x24]
        mov dword ptr [esp + 0x18], 1
        jbe L_0063F3EF
        call dword ptr [mem_00925134]
    L_0063F3EF:
        push ebx
    L_0063F3F0:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_0063F3FE
        call dword ptr [mem_00925134]
    L_0063F3FE:
        cmp esi, esi
        je L_0063F408
        call dword ptr [mem_00925134]
    L_0063F408:
        cmp edi, ebx
        jae L_0063F435
        cmp edi, dword ptr [esi + 8]
        jb L_0063F417
        call dword ptr [mem_00925134]
    L_0063F417:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je L_0063F425
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_0063F425:
        cmp edi, dword ptr [esi + 8]
        jb L_0063F430
        call dword ptr [mem_00925134]
    L_0063F430:
        add edi, 4
        jmp L_0063F3F0
    L_0063F435:
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp eax, edi
        pop ebx
        je L_0063F448
        push eax
        call ext_006A5C5C
        add esp, 4
    L_0063F448:
        mov ecx, ebp
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0x0c], edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0063E0F0
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0063F750] sub_0063F750 (91 bytes)
extern "C" void ext_0063F3B0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063F750(void* self) {
    __asm {
        push -1
        push 0x008AEDD4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0063F3B0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0063F9C0] sub_0063F9C0 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063F9C0(void* self) {
    __asm {
        push -1
        push 0x008AEE13
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 0x0c], ebp
        mov dword ptr [ebp], 0x97ccb0
        mov edi, dword ptr [ebp + 0x40]
        cmp edi, dword ptr [ebp + 0x44]
        lea esi, [ebp + 0x3c]
        mov dword ptr [esp + 0x18], 1
        jbe L_0063F9FF
        call dword ptr [mem_00925134]
    L_0063F9FF:
        push ebx
    L_0063FA00:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_0063FA0E
        call dword ptr [mem_00925134]
    L_0063FA0E:
        cmp esi, esi
        je L_0063FA18
        call dword ptr [mem_00925134]
    L_0063FA18:
        cmp edi, ebx
        jae L_0063FA45
        cmp edi, dword ptr [esi + 8]
        jb L_0063FA27
        call dword ptr [mem_00925134]
    L_0063FA27:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je L_0063FA35
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_0063FA35:
        cmp edi, dword ptr [esi + 8]
        jb L_0063FA40
        call dword ptr [mem_00925134]
    L_0063FA40:
        add edi, 4
        jmp L_0063FA00
    L_0063FA45:
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp eax, edi
        pop ebx
        je L_0063FA58
        push eax
        call ext_006A5C5C
        add esp, 4
    L_0063FA58:
        mov ecx, ebp
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0x0c], edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0063F3B0
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0063F530] sub_0063F530 (197 bytes)
extern "C" int mem_00A9B148;
extern "C" void ext_0063EC90();
extern "C" __declspec(naked) int __fastcall fn_0063F530(void* self, int edx_unused, int a1, unsigned int count, int a3) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0063F54A
        call dword ptr [mem_00925134]
    L_0063F54A:
        mov ebx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], esi
        xor esi, esi
        test ebx, ebx
        mov dword ptr [esp + 0x14], edi
        jbe L_0063F5A3
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_0063F560:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x10]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call ext_0063EC90
        test al, al
        je L_0063F5E6
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        jne L_0063F588
        call dword ptr [mem_00925134]
    L_0063F588:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [edi + 0x8]
        jb L_0063F597
        call dword ptr [mem_00925134]
    L_0063F597:
        add dword ptr [esp + 0x14], 0x4
        add esi, 0x1
        cmp esi, ebx
        jb L_0063F560
    L_0063F5A3:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x10]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        call ext_0063EC90
        test al, al
        je L_0063F5E6
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        jne L_0063F5CB
        call dword ptr [mem_00925134]
    L_0063F5CB:
        mov edi, dword ptr [esp + 0x14]
        cmp edi, dword ptr [esi + 0x8]
        jb L_0063F5DA
        call dword ptr [mem_00925134]
    L_0063F5DA:
        mov eax, dword ptr [edi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    L_0063F5E6:
        mov eax, dword ptr [mem_00A9B148]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}
