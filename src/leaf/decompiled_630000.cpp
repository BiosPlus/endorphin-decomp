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

// [0x00630740] sub_00630740 (201 bytes)
// [0x00630740] sub_00630740 (201 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630740(void* self) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 24h]
        mov esi, ecx
        mov ecx, dword ptr [esi + 4]
        fst dword ptr [esp + 20h]
        fstp dword ptr [esp + 1Ch]
        lea edx, [esp + 1Ch]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 48h]
        push edx
        call eax
        fldz
        mov ecx, dword ptr [esi + 4]
        fst dword ptr [esp + 18h]
        fst dword ptr [esp + 14h]
        lea eax, [esp + 10h]
        fstp dword ptr [esp + 10h]
        push eax
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 44h]
        call edx
        fld dword ptr [esi + 90h]
        fstp dword ptr [esp + 4]
        lea eax, [esi + 16Ch]
        fld dword ptr [esi + 94h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esi + 98h]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 4]
        fadd dword ptr [esp + 10h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 8]
        fadd dword ptr [esp + 14h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0Ch]
        fadd dword ptr [esp + 18h]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 4]
        fstp dword ptr [eax]
        fld dword ptr [esp + 8]
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [eax + 8]
        fld dword ptr [eax]
        fdiv dword ptr [esp + 1Ch]
        fstp dword ptr [eax]
        fld dword ptr [esi + 170h]
        fdiv dword ptr [esp + 20h]
        fstp dword ptr [esi + 170h]
        fld dword ptr [esi + 174h]
        fdiv dword ptr [esp + 24h]
        fstp dword ptr [esi + 174h]
        pop esi
        add esp, 24h
        ret
    }
}

// [0x0063DF00] sub_0063DF00 (206 bytes)
extern "C" int mem_00925134;
extern "C" int mem_0092F678;
extern "C" __declspec(naked) void __fastcall fn_0063DF00(void* self) {
    __asm {
        push ecx
        fldz
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fst dword ptr [esi + 0x40]
        push edi
        fst dword ptr [esi + 0x3c]
        lea edi, [esi + 0x28]
        fstp dword ptr [esi + 0x38]
        mov ebx, dword ptr [edi + 0x4]
    L_loop:
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_c1
        call dword ptr [mem_00925134]
    L_c1:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_c2
        call dword ptr [mem_00925134]
    L_c2:
        cmp edi, edi
        je L_c3
        call dword ptr [mem_00925134]
    L_c3:
        cmp ebx, ebp
        je L_done
        cmp ebx, dword ptr [edi + 0x8]
        jb L_c4
        call dword ptr [mem_00925134]
    L_c4:
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        fld dword ptr [eax]
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esi + 0x3c]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x40]
        cmp ebx, dword ptr [edi + 0x8]
        jb L_c5
        call dword ptr [mem_00925134]
    L_c5:
        add ebx, 0x4
        jmp L_c1
    L_done:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne L_nz
        xor edi, edi
        jmp L_cnt
    L_nz:
        mov edi, dword ptr [edi + 0x8]
        sub edi, eax
        sar edi, 0x2
    L_cnt:
        test edi, edi
        mov dword ptr [esp + 0x10], edi
        fild dword ptr [esp + 0x10]
        jge L_pos
        fadd dword ptr [mem_0092F678]
    L_pos:
        fld1
        pop edi
        fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x38]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi + 0x38]
        fld st(0)
        fmul dword ptr [esi + 0x3c]
        fstp dword ptr [esi + 0x3c]
        fmul dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x40]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

extern "C" void ext_00630480();
extern "C" void ext_006946C0();

// [0x00630D90] sub_00630D90 (53 bytes)
extern "C" void __fastcall fn_00630D90(void* self, int edx_unused, void* a1) {
    float vec[3];
    vec[2] = 0.0f;
    vec[1] = 0.0f;
    vec[0] = 0.0f;
    ((void (__thiscall *)(void*, float*))ext_006946C0)(a1, vec);
    ((void (__thiscall *)(void*, const float*))ext_00630480)(self, vec);
}

extern "C" void ext_006304B0();

// [0x00630DD0] sub_00630DD0 (53 bytes)
extern "C" void __fastcall fn_00630DD0(void* self, int edx_unused, void* a1) {
    float vec[3];
    vec[2] = 0.0f;
    vec[1] = 0.0f;
    vec[0] = 0.0f;
    ((void (__thiscall *)(void*, float*))ext_006946C0)(a1, vec);
    ((void (__thiscall *)(void*, const float*))ext_006304B0)(self, vec);
}

// [0x00630E10] sub_00630E10 (35 bytes)
extern "C" void ext_00630D90();
extern "C" void ext_00693C30();
extern "C" void __fastcall fn_00630E10(void* self, int edx_unused, void* a1) {
    char* sub = (char*)self + 0x15c;
    ((void (__thiscall *)(void*, void*))ext_00693C30)(sub, a1);
    ((void (__thiscall *)(void*, void*))ext_00630D90)(self, sub);
}

extern "C" int mem_0093F7B8;

// [0x00630600] sub_00630600 (319 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630600(void* self) {
    __asm {
        sub esp, 0x24
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 0x4]
        mov esi, ecx
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [mem_0093F7B8]
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fld1
        test ah, 0x5
        jp loc_63064b
        fstp st(1)
        fxch st(1)
        fst dword ptr [esp + 0x4]
        jmp loc_63065c

    loc_63064b:
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp loc_63065a
        fst dword ptr [esp + 0x4]

    loc_63065a:
        fxch st(1)

    loc_63065c:
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp loc_630671
        fstp st(0)
        fst dword ptr [esp + 0x8]
        jmp loc_630682

    loc_630671:
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne loc_630682
        fxch st(1)
        fst dword ptr [esp + 0x8]
        fxch st(1)

    loc_630682:
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp loc_630699
        fstp st(2)
        fstp st(1)

    loc_630693:
        fstp dword ptr [esp + 0xc]
        jmp loc_6306a6

    loc_630699:
        fstp st(1)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je loc_630693
        fstp st(0)

    loc_6306a6:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x48]
        lea edx, [esp + 0x10]
        push edx
        call eax
        fld dword ptr [esp + 0x4]
        fmul dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x1c]
        push eax
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fldz
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x44]
        call edx
        fld dword ptr [esp + 0x4]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fsub dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fsub dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x90]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0x94]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esi + 0x98]
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x006301E0] sub_006301E0 (386 bytes)
extern "C" void ext_00602EC0();
extern "C" void ext_0063D8F0();
extern "C" __declspec(naked) void __fastcall fn_006301E0(void* self) {
    __asm {
        push -1
        push 0x8a7d28
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        call ext_00602EC0
        fldz
        lea ecx, [esi+0x2c]
        mov dword ptr [esi], 0x971794
        fst dword ptr [ecx+8]
        fst dword ptr [ecx+4]
        mov dword ptr [esp+0x10], 0
        fst dword ptr [ecx]
        fst dword ptr [ecx+0x14]
        fst dword ptr [ecx+0x10]
        fst dword ptr [ecx+0xc]
        fst dword ptr [ecx+0x20]
        fst dword ptr [ecx+0x1c]
        fst dword ptr [ecx+0x18]
        fst dword ptr [ecx+0x2c]
        fst dword ptr [ecx+0x28]
        fstp dword ptr [ecx+0x24]
        call ext_0063D8F0
        fldz
        lea ecx, [esi+0x90]
        fst dword ptr [ecx+8]
        fst dword ptr [ecx+4]
        fst dword ptr [ecx]
        fst dword ptr [ecx+0x14]
        fst dword ptr [ecx+0x10]
        fst dword ptr [ecx+0xc]
        fst dword ptr [ecx+0x20]
        fst dword ptr [ecx+0x1c]
        fst dword ptr [ecx+0x18]
        fst dword ptr [ecx+0x2c]
        fst dword ptr [ecx+0x28]
        fstp dword ptr [ecx+0x24]
        call ext_0063D8F0
        fldz
        mov byte ptr [esi+0xf4], 1
        mov byte ptr [esi+0xf5], 0
        mov byte ptr [esi+0xf6], 0
        fst dword ptr [esi+0x104]
        fst dword ptr [esi+0x100]
        mov ecx, [esp+8]
        fst dword ptr [esi+0xfc]
        mov eax, esi
        fst dword ptr [esi+0xf8]
        fst dword ptr [esi+0x110]
        fst dword ptr [esi+0x10c]
        fst dword ptr [esi+0x108]
        fst dword ptr [esi+0x11c]
        fst dword ptr [esi+0x118]
        fst dword ptr [esi+0x114]
        fst dword ptr [esi+0x128]
        fst dword ptr [esi+0x124]
        fst dword ptr [esi+0x120]
        fst dword ptr [esi+0x134]
        fst dword ptr [esi+0x130]
        fst dword ptr [esi+0x12c]
        fst dword ptr [esi+0x140]
        fst dword ptr [esi+0x13c]
        fst dword ptr [esi+0x138]
        fst dword ptr [esi+0x14c]
        fst dword ptr [esi+0x148]
        fst dword ptr [esi+0x144]
        fst dword ptr [esi+0x158]
        fst dword ptr [esi+0x154]
        fst dword ptr [esi+0x150]
        fst dword ptr [esi+0x168]
        fst dword ptr [esi+0x164]
        fst dword ptr [esi+0x160]
        fst dword ptr [esi+0x15c]
        fst dword ptr [esi+0x174]
        fst dword ptr [esi+0x170]
        fst dword ptr [esi+0x16c]
        fst dword ptr [esi+0x178]
        fstp dword ptr [esi+0x17c]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}


// [0x0063DC20] sub_0063DC20 (453 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063DC20(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        push edi
        je L_invalid1
        mov ecx, dword ptr [esi + 0x30]
        sub ecx, eax
        sar ecx, 2
        jne L_valid1
    L_invalid1:
        mov edi, dword ptr [mem_00925134]
        call edi
        jmp L_after1
    L_valid1:
        mov edi, dword ptr [mem_00925134]
    L_after1:
        mov edx, dword ptr [esi + 0x2c]
        mov ebp, dword ptr [edx]
        mov ecx, edx
        test ecx, ecx
        je L_invalid2
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja L_valid2
    L_invalid2:
        call edi
    L_valid2:
        mov eax, dword ptr [esi + 0x2c]
        mov ebx, dword ptr [eax + 0x4]
        mov ecx, eax
        test ecx, ecx
        je L_invalid3
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja L_valid3
    L_invalid3:
        call edi
    L_valid3:
        mov ecx, dword ptr [esi + 0x2c]
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [ecx + 0x8]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, ebx
        call eax
        fstp qword ptr [esp + 0x10]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, edi
        call eax
        fsubr qword ptr [esp + 0x10]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x60]
        fmul dword ptr [esi + 0x48]
        mov ecx, ebp
        fstp qword ptr [esp + 0x10]
        call eax
        fadd qword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x3c]
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        je L_invalid4
        mov ecx, dword ptr [esi + 0x30]
        sub ecx, eax
        sar ecx, 2
        jne L_valid4
    L_invalid4:
        call dword ptr [mem_00925134]
    L_valid4:
        mov edx, dword ptr [esi + 0x2c]
        mov ebp, dword ptr [edx]
        mov ecx, edx
        test ecx, ecx
        je L_invalid5
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja L_valid5
    L_invalid5:
        call dword ptr [mem_00925134]
    L_valid5:
        mov eax, dword ptr [esi + 0x2c]
        mov ebx, dword ptr [eax + 0x4]
        mov ecx, eax
        test ecx, ecx
        je L_invalid6
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja L_valid6
    L_invalid6:
        call dword ptr [mem_00925134]
    L_valid6:
        mov ecx, dword ptr [esi + 0x2c]
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [ecx + 0x8]
        mov eax, dword ptr [edx + 0x40]
        push 1
        mov ecx, ebx
        call eax
        fstp qword ptr [esp + 0x10]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x40]
        push 1
        mov ecx, edi
        call eax
        fsubr qword ptr [esp + 0x10]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x5c]
        fmul dword ptr [esi + 0x48]
        push 1
        mov ecx, ebp
        fstp qword ptr [esp + 0x14]
        call eax
        fadd qword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x40]
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        je L_invalid7
        mov ecx, dword ptr [esi + 0x30]
        sub ecx, eax
        sar ecx, 2
        jne L_valid7
    L_invalid7:
        mov edi, dword ptr [mem_00925134]
        call edi
        jmp L_after7
    L_valid7:
        mov edi, dword ptr [mem_00925134]
    L_after7:
        mov edx, dword ptr [esi + 0x2c]
        mov ebp, dword ptr [edx]
        mov ecx, edx
        test ecx, ecx
        je L_invalid8
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja L_valid8
    L_invalid8:
        call edi
    L_valid8:
        mov eax, dword ptr [esi + 0x2c]
        mov ebx, dword ptr [eax + 0x4]
        mov ecx, eax
        test ecx, ecx
        je L_invalid9
        mov eax, dword ptr [esi + 0x30]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja L_valid9
    L_invalid9:
        call edi
    L_valid9:
        mov ecx, dword ptr [esi + 0x2c]
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [ecx + 0x8]
        mov eax, dword ptr [edx + 0x40]
        push 2
        mov ecx, ebx
        call eax
        fstp qword ptr [esp + 0x10]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x40]
        push 2
        mov ecx, edi
        call eax
        fsubr qword ptr [esp + 0x10]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x5c]
        fmul dword ptr [esi + 0x48]
        push 2
        mov ecx, ebp
        fstp qword ptr [esp + 0x14]
        call eax
        fadd qword ptr [esp + 0x10]
        pop edi
        fstp dword ptr [esi + 0x44]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

extern "C" void ext_005B67E0();
extern "C" void ext_0067C8F0();
extern "C" void ext_00694C10();
extern "C" int mem_00925134;

// [0x0063DE30] sub_0063DE30 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063DE30(void* self) {
    __asm {
        sub esp, 0x34
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        push edi
        je L_invalid
        mov ecx, dword ptr [esi + 0x30]
        sub ecx, eax
        sar ecx, 2
        jne L_valid
    L_invalid:
        call dword ptr [mem_00925134]
    L_valid:
        mov edx, dword ptr [esi + 0x2c]
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x38]
        lea edi, [esi + 0x38]
        fld dword ptr [eax + 4]
        fstp dword ptr [edi + 4]
        fld dword ptr [eax + 8]
        fstp dword ptr [edi + 8]
        mov ecx, dword ptr [esi + 0x44]
        test ecx, ecx
        fld1
        fst dword ptr [esp + 0x18]
        fldz
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x38]
        je L_skip
        lea eax, [esp + 0xc]
        push eax
        call ext_005B67E0
        push eax
        lea ecx, [esp + 0x1c]
        call ext_00694C10
    L_skip:
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_0067C8F0
        pop edi
        pop esi
        add esp, 0x34
        ret
    }
}

// [0x0063D460] sub_0063D460 (31 bytes)
extern "C" int mem_00924FDC;
extern "C" void ext_0063CFD0();

extern "C" void __fastcall fn_0063D460(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *MfcFn)(void*, int);
    MfcFn f = (MfcFn)mem_00924FDC;
    f((char*)self + 0x8c, a1);
    ((void (__thiscall *)(void*))ext_0063CFD0)(self);
}

extern "C" void ext_0063CCE0();
extern "C" void ext_0063CD60();
extern "C" void ext_006798D0();

// [0x0063CDF0] sub_0063CDF0 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063CDF0(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_0063CD60
        push 0x97c9ec
        lea ecx, [esp + 4]
        call ext_0063CCE0
        pop ecx
        ret
    }
}

extern "C" void ext_0041C7C0();

// [0x0063CE20] sub_0063CE20 (64 bytes)
extern "C" void __fastcall fn_0063CE20(void* self, int edx_unused, const float* val) {
    struct RingBuf {
        int pad0;
        float* first;
        int pad8;
        float* last;
        unsigned int count;
    };
    typedef float* (__thiscall *AtFn)(void*, unsigned int);
    RingBuf* rb = (RingBuf*)self;
    unsigned int cap = (rb->first == 0) ? 0 : (unsigned int)(rb->last - rb->first);
    unsigned int cnt = rb->count;
    unsigned int rem = cnt % cap;
    if (rem == 0 && cnt != 0) {
        rb->count = cap;
    }
    rb->count += 1;
    *((AtFn)ext_0041C7C0)(self, rem) = *val;
}

extern "C" void ext_0062F660();
extern "C" void ext_0062F710();
extern "C" void ext_0062F790();
extern "C" void ext_00630100();
extern "C" void ext_006798D0();
extern "C" int mem_00A9EDD8;

// [0x00630190] sub_00630190 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630190(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EDD8]
        push eax
        lea ecx, [esp + 4]
        push ecx
        call ext_006798D0
        mov ecx, eax
        call ext_00630100
        push 0x979abc
        lea ecx, [esp + 4]
        call ext_0062F660
        push 0x979ab0
        lea ecx, [esp + 4]
        call ext_0062F710
        push 0x979aa4
        lea ecx, [esp + 4]
        call ext_0062F790
        pop ecx
        ret
    }
}

// [0x0063CFD0] sub_0063CFD0 (1164 bytes)
extern "C" void ext_0041C7C0();
extern "C" void ext_0063CE20();
extern "C" void ext_0067F5B0();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FD4;
extern "C" int mem_00925134;
extern "C" int mem_0092F678;
extern "C" int mem_0092A270;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_0063CFD0(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00924FC0]
        mov ebp, ecx
        lea esi, [ebp + 0x8c]
        push 0x9719c4
        push esi
        mov dword ptr [esp + 0x20], ebp
        call edi
        add esp, 0x8
        test al, al
        jne L_63d060
    L_63cff8:
        push 0x97ca48
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_63d110
        push 0x97ca3c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_63d1a0
        push 0x97ca30
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_63d251
        push 0x97ca28
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_63d42a
        push 0x9719c4
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        push 0x9719c4
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_63cff8

    L_63d060:
        cmp dword ptr [ebp + 0x74], 0x0
        mov dword ptr [esp + 0x14], 0x0
        jbe L_63d454
        lea esi, [ebp + 0x60]
    L_63d075:
        mov edi, dword ptr [esi + 0x4]
        fld dword ptr [ebp + 0xb0]
        test edi, edi
        fstp dword ptr [esp + 0x18]
        jne L_63d08a
        xor ecx, ecx
        jmp L_63d092
    L_63d08a:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, edi
        sar ecx, 0x2
    L_63d092:
        mov eax, dword ptr [esi + 0x10]
        xor edx, edx
        div ecx
        mov ebx, edx
        test ebx, ebx
        jne L_63d0a7
        cmp dword ptr [esi + 0x10], edx
        je L_63d0a7
        mov dword ptr [esi + 0x10], ecx
    L_63d0a7:
        add dword ptr [esi + 0x10], 0x1
        test edi, edi
        je L_63d10b
        mov ecx, dword ptr [esi + 0x8]
        mov eax, ecx
        sub eax, edi
        sar eax, 0x2
        cmp eax, ebx
        jbe L_63d10b
        cmp edi, ecx
        jbe L_63d0c7
        call dword ptr [mem_00925134]
    L_63d0c7:
        mov dword ptr [esp + 0x24], edi
        lea edi, [edi + 4*ebx]
        cmp edi, dword ptr [esi + 0x8]
        ja L_63d0d8
        cmp edi, dword ptr [esi + 0x4]
        jae L_63d0de
    L_63d0d8:
        call dword ptr [mem_00925134]
    L_63d0de:
        cmp edi, dword ptr [esi + 0x8]
        jb L_63d0e9
        call dword ptr [mem_00925134]
    L_63d0e9:
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        add eax, 0x1
        fstp dword ptr [edi]
        cmp eax, dword ptr [ebp + 0x74]
        mov dword ptr [esp + 0x14], eax
        jb L_63d075
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret

    L_63d10b:
        jmp ext_0067F5B0

    L_63d110:
        mov eax, dword ptr [ebp + 0x74]
        xor edi, edi
        test eax, eax
        jbe L_63d454
        lea esi, [ebp + 0x60]
    L_63d120:
        mov ecx, edi
        test ecx, ecx
        mov dword ptr [esp + 0x20], ecx
        fild dword ptr [esp + 0x20]
        jge L_63d134
        fadd dword ptr [mem_0092F678]
    L_63d134:
        add eax, -0x1
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        jge L_63d149
        fadd dword ptr [mem_0092F678]
    L_63d149:
        fdivp st(1), st(0)
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        fmul dword ptr [ebp + 0xb0]
        fstp dword ptr [esp + 0x18]
        jne L_63d160
        xor ecx, ecx
        jmp L_63d168
    L_63d160:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
    L_63d168:
        mov ebx, dword ptr [esi + 0x10]
        xor edx, edx
        mov eax, ebx
        div ecx
        test edx, edx
        jne L_63d17c
        test ebx, ebx
        je L_63d17c
        mov dword ptr [esi + 0x10], ecx
    L_63d17c:
        add dword ptr [esi + 0x10], 0x1
        push edx
        mov ecx, esi
        call ext_0041C7C0
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax]
        mov eax, dword ptr [ebp + 0x74]
        add edi, 0x1
        cmp edi, eax
        jb L_63d120
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret

    L_63d1a0:
        xor ebx, ebx
        cmp dword ptr [ebp + 0x74], ebx
        jbe L_63d454
        lea esi, [ebp + 0x60]
        _emit 0x8b
        _emit 0xff
    L_63d1b0:
        mov eax, dword ptr [ebp + 0x74]
        mov edx, eax
        test edx, edx
        mov dword ptr [esp + 0x20], edx
        fild dword ptr [esp + 0x20]
        jge L_63d1c7
        fadd dword ptr [mem_0092F678]
    L_63d1c7:
        fsub qword ptr [mem_0092A270]
        mov ecx, ebx
        test ecx, ecx
        mov dword ptr [esp + 0x20], ecx
        fild dword ptr [esp + 0x20]
        jge L_63d1e1
        fadd dword ptr [mem_0092F678]
    L_63d1e1:
        add eax, -0x1
        fsubp st(1), st(0)
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        jge L_63d1f8
        fadd dword ptr [mem_0092F678]
    L_63d1f8:
        fdivp st(1), st(0)
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        fmul dword ptr [ebp + 0xb0]
        fstp dword ptr [esp + 0x18]
        jne L_63d20f
        xor ecx, ecx
        jmp L_63d217
    L_63d20f:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
    L_63d217:
        mov edi, dword ptr [esi + 0x10]
        xor edx, edx
        mov eax, edi
        div ecx
        test edx, edx
        jne L_63d22b
        test edi, edi
        je L_63d22b
        mov dword ptr [esi + 0x10], ecx
    L_63d22b:
        add dword ptr [esi + 0x10], 0x1
        push edx
        mov ecx, esi
        call ext_0041C7C0
        fld dword ptr [esp + 0x18]
        add ebx, 0x1
        fstp dword ptr [eax]
        cmp ebx, dword ptr [ebp + 0x74]
        jb L_63d1b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret

    L_63d251:
        mov edx, dword ptr [ebp + 0x74]
        shr edx, 1
        test edx, edx
        mov dword ptr [esp + 0x20], edx
        fild dword ptr [esp + 0x20]
        jge L_63d268
        fadd dword ptr [mem_0092F678]
    L_63d268:
        fadd qword ptr [mem_00993828]
        xor ebx, ebx
        fnstcw word ptr [esp + 0x10]
        movzx eax, word ptr [esp + 0x10]
        or eax, 0xc00
        mov dword ptr [esp + 0x14], eax
        fldcw word ptr [esp + 0x14]
        fistp qword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        fldcw word ptr [esp + 0x10]
        jbe L_63d328
        add eax, -0x1
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        jge L_63d2b3
        fadd dword ptr [mem_0092F678]
    L_63d2b3:
        fstp dword ptr [esp + 0x10]
        lea esi, [ebp + 0x60]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_63d2c0:
        mov eax, ebx
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        jge L_63d2d4
        fadd dword ptr [mem_0092F678]
    L_63d2d4:
        fdiv dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        fmul dword ptr [ebp + 0xb0]
        fstp dword ptr [esp + 0x1c]
        jne L_63d2ed
        xor ecx, ecx
        jmp L_63d2f5
    L_63d2ed:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
    L_63d2f5:
        mov edi, dword ptr [esi + 0x10]
        xor edx, edx
        mov eax, edi
        div ecx
        test edx, edx
        jne L_63d309
        test edi, edi
        je L_63d309
        mov dword ptr [esi + 0x10], ecx
    L_63d309:
        add dword ptr [esi + 0x10], 0x1
        push edx
        mov ecx, esi
        call ext_0041C7C0
        fld dword ptr [esp + 0x1c]
        add ebx, 0x1
        fstp dword ptr [eax]
        cmp ebx, dword ptr [esp + 0x14]
        jb L_63d2c0
        mov eax, dword ptr [esp + 0x14]
    L_63d328:
        cmp eax, dword ptr [ebp + 0x74]
        mov dword ptr [esp + 0x14], eax
        jae L_63d454
        mov ecx, eax
        test ecx, ecx
        mov dword ptr [esp + 0x20], ecx
        fild dword ptr [esp + 0x20]
        jge L_63d349
        fadd dword ptr [mem_0092F678]
    L_63d349:
        add eax, -0x1
        fstp dword ptr [esp + 0x1c]
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        jge L_63d362
        fadd dword ptr [mem_0092F678]
    L_63d362:
        fstp dword ptr [esp + 0x10]
        lea esi, [ebp + 0x60]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_63d370:
        mov edx, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        test edx, edx
        fild dword ptr [esp + 0x14]
        jge L_63d386
        fadd dword ptr [mem_0092F678]
    L_63d386:
        fsubp st(1), st(0)
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        fdiv dword ptr [esp + 0x10]
        fadd qword ptr [mem_0092A270]
        fmul dword ptr [ebp + 0xb0]
        fstp dword ptr [esp + 0x20]
        jne L_63d3a7
        xor ecx, ecx
        jmp L_63d3af
    L_63d3a7:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, edi
        sar ecx, 0x2
    L_63d3af:
        mov ebp, dword ptr [esi + 0x10]
        xor edx, edx
        mov eax, ebp
        div ecx
        mov ebx, edx
        test ebx, ebx
        jne L_63d3c5
        test ebp, ebp
        je L_63d3c5
        mov dword ptr [esi + 0x10], ecx
    L_63d3c5:
        add dword ptr [esi + 0x10], 0x1
        test edi, edi
        je L_63d10b
        mov ecx, dword ptr [esi + 0x8]
        mov eax, ecx
        sub eax, edi
        sar eax, 0x2
        cmp eax, ebx
        jbe L_63d10b
        cmp edi, ecx
        mov ebp, dword ptr [mem_00925134]
        jbe L_63d3ef
        call ebp
    L_63d3ef:
        mov dword ptr [esp + 0x2c], edi
        lea edi, [edi + 4*ebx]
        cmp edi, dword ptr [esi + 0x8]
        ja L_63d400
        cmp edi, dword ptr [esi + 0x4]
        jae L_63d402
    L_63d400:
        call ebp
    L_63d402:
        cmp edi, dword ptr [esi + 0x8]
        jb L_63d409
        call ebp
    L_63d409:
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        fstp dword ptr [edi]
        add eax, 0x1
        cmp eax, dword ptr [ecx + 0x74]
        mov dword ptr [esp + 0x14], eax
        jae L_63d454
        mov ebp, ecx
        jmp L_63d370

    L_63d42a:
        xor esi, esi
        cmp dword ptr [ebp + 0x74], esi
        jbe L_63d454
        fldz
        lea edi, [ebp + 0x60]
        fstp dword ptr [esp + 0x20]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_63d440:
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        call ext_0063CE20
        add esi, 0x1
        cmp esi, dword ptr [ebp + 0x74]
        jb L_63d440

    L_63d454:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret
    }
}

// [0x0063C400] sub_0063C400 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00632A20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063C400(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632A20
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

// [0x0063C480] sub_0063C480 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00632A80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063C480(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632A80
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

// [0x0063C500] sub_0063C500 (114 bytes)
extern "C" void ext_00632AE0();

extern "C" __declspec(naked) void __fastcall fn_0063C500(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632AE0
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

// [0x0063C580] sub_0063C580 (114 bytes)
extern "C" void ext_00632B40();

extern "C" __declspec(naked) void __fastcall fn_0063C580(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632B40
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

// [0x0063C600] sub_0063C600 (114 bytes)
extern "C" void ext_00632BA0();

extern "C" __declspec(naked) void __fastcall fn_0063C600(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632BA0
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

// [0x0063C680] sub_0063C680 (114 bytes)
extern "C" void ext_00632C00();

extern "C" __declspec(naked) void __fastcall fn_0063C680(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632C00
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

// [0x0063C700] sub_0063C700 (114 bytes)
extern "C" void ext_00632C60();

extern "C" __declspec(naked) void __fastcall fn_0063C700(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632C60
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

// [0x0063C780] sub_0063C780 (114 bytes)
extern "C" void ext_00632CC0();

extern "C" __declspec(naked) void __fastcall fn_0063C780(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00632CC0
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

// [0x0063CCE0] sub_0063CCE0 (114 bytes)
extern "C" void ext_0063CC00();

extern "C" __declspec(naked) void __fastcall fn_0063CCE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0063CC00
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

// [0x0063FF60] sub_0063FF60 (120 bytes)
extern "C" void ext_0063E240();
extern "C" void ext_0063E980();
extern "C" void ext_0063FEE0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A9B148;
extern "C" int mem_008AEE68;
extern "C" int mem_0097CCE8;
extern "C" int mem_00A11020;

extern "C" __declspec(naked) void __fastcall fn_0063FF60(void* self) {
    __asm {
        push -1
        push offset mem_008AEE68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        mov eax, dword ptr [mem_00A9B148]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x10], esi
        call ext_0063E240
        xor eax, eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esi], offset mem_0097CCE8
        mov byte ptr [esi + 0x24], al
        call ext_0063FEE0
        test al, al
        jne skip_throw
        push edi
        lea ecx, [esp + 0x10]
        call ext_0063E980
        push offset mem_00A11020
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    skip_throw:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0063FEE0] sub_0063FEE0 (121 bytes)
extern "C" void ext_005A07A0();
extern "C" void ext_0063FDA0();
extern "C" int mem_00B53A30;
extern "C" int mem_00B53A2C;
extern "C" int mem_00B53A28;
extern "C" __declspec(naked) void __fastcall fn_0063FEE0(void* self) {
    __asm {
        sub esp, 8
        cmp dword ptr [mem_00B53A30], 0
        push ebp
        push esi
        push edi
        mov ebp, ecx
        jne L_0063FEF6
        call ext_0063FDA0
L_0063FEF6:
        push ebx
        lea eax, [ebp + 4]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, offset mem_00B53A28
        call ext_005A07A0
        mov esi, dword ptr [eax]
        test esi, esi
        mov edi, dword ptr [eax + 4]
        mov ebx, dword ptr [mem_00B53A2C]
        je L_0063FF21
        cmp esi, offset mem_00B53A28
        je L_0063FF27
L_0063FF21:
        call dword ptr [mem_00925134]
L_0063FF27:
        cmp edi, ebx
        pop ebx
        jne L_0063FF35
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret
L_0063FF35:
        test esi, esi
        jne L_0063FF3F
        call dword ptr [mem_00925134]
L_0063FF3F:
        cmp edi, dword ptr [esi + 4]
        jne L_0063FF4A
        call dword ptr [mem_00925134]
L_0063FF4A:
        mov dl, byte ptr [edi + 28h]
        pop edi
        pop esi
        mov byte ptr [ebp + 24h], dl
        mov al, 1
        pop ebp
        add esp, 8
        ret
    }
}

// [0x00630100] sub_00630100 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00630100(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa98d08
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_630153
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_630153:
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

// [0x0063C800] sub_0063C800 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063C800(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa9b014
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_63C853
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_63C853:
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

// [0x0063CD60] sub_0063CD60 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063CD60(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa9b104
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_63CDB3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_63CDB3:
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

// [0x0063B4E0] sub_0063B4E0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AA0;
extern "C" int mem_00B52A9C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B4E0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae257
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AA0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AA0], 0x1
        mov     ecx, offset mem_00B52A9C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52A9C], 0x97a29c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52A9C
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

// [0x0063B590] sub_0063B590 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AA8;
extern "C" int mem_00B52AA4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B590(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae287
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AA8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AA8], 0x1
        mov     ecx, offset mem_00B52AA4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AA4], 0x97a44c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AA4
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

// [0x0063B640] sub_0063B640 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AB0;
extern "C" int mem_00B52AAC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B640(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae2b7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AB0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AB0], 0x1
        mov     ecx, offset mem_00B52AAC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AAC], 0x97a5fc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AAC
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

// [0x0063B6F0] sub_0063B6F0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AB8;
extern "C" int mem_00B52AB4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B6F0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae2e7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AB8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AB8], 0x1
        mov     ecx, offset mem_00B52AB4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AB4], 0x97a7ac
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AB4
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

// [0x0063B7A0] sub_0063B7A0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AC0;
extern "C" int mem_00B52ABC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B7A0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae317
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AC0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AC0], 0x1
        mov     ecx, offset mem_00B52ABC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52ABC], 0x97a95c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52ABC
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

// [0x0063B850] sub_0063B850 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AC8;
extern "C" int mem_00B52AC4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B850(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae347
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AC8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AC8], 0x1
        mov     ecx, offset mem_00B52AC4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AC4], 0x97ab0c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AC4
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

// [0x0063B900] sub_0063B900 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AD0;
extern "C" int mem_00B52ACC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B900(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae377
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AD0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AD0], 0x1
        mov     ecx, offset mem_00B52ACC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52ACC], 0x97acbc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52ACC
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

// [0x0063B9B0] sub_0063B9B0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AD8;
extern "C" int mem_00B52AD4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063B9B0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae3a7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AD8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AD8], 0x1
        mov     ecx, offset mem_00B52AD4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AD4], 0x97ae6c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AD4
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

// [0x0063BA60] sub_0063BA60 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AE0;
extern "C" int mem_00B52ADC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BA60(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae3d7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AE0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AE0], 0x1
        mov     ecx, offset mem_00B52ADC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52ADC], 0x97b01c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52ADC
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

// [0x0063BB10] sub_0063BB10 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AE8;
extern "C" int mem_00B52AE4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BB10(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae407
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AE8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AE8], 0x1
        mov     ecx, offset mem_00B52AE4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AE4], 0x97b1cc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AE4
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

// [0x0063BBC0] sub_0063BBC0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52AF0;
extern "C" int mem_00B52AEC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BBC0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae437
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AF0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AF0], 0x1
        mov     ecx, offset mem_00B52AEC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AEC], 0x97b37c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AEC
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

// [0x0063BC70] sub_0063BC70 (165 bytes)
extern "C" int mem_00B52AF8;
extern "C" int mem_00B52AF4;

extern "C" __declspec(naked) void __fastcall fn_0063BC70(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae467
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52AF8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52AF8], 0x1
        mov     ecx, offset mem_00B52AF4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AF4], 0x97b52c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AF4
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

// [0x0063BD20] sub_0063BD20 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52B00;
extern "C" int mem_00B52AFC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BD20(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae497
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B00], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B00], 0x1
        mov     ecx, offset mem_00B52AFC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52AFC], 0x97b6dc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52AFC
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

// [0x0063BDD0] sub_0063BDD0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52B08;
extern "C" int mem_00B52B04;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BDD0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae4c7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B08], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B08], 0x1
        mov     ecx, offset mem_00B52B04
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B04], 0x97b88c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B04
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

// [0x0063BE80] sub_0063BE80 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52B10;
extern "C" int mem_00B52B0C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BE80(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae4f7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B10], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B10], 0x1
        mov     ecx, offset mem_00B52B0C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B0C], 0x97ba3c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B0C
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

// [0x0063BF30] sub_0063BF30 (165 bytes)
extern "C" int mem_00B52B18;
extern "C" int mem_00B52B14;

extern "C" __declspec(naked) void __fastcall fn_0063BF30(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae527
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B18], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B18], 0x1
        mov     ecx, offset mem_00B52B14
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B14], 0x97bbec
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B14
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

// [0x0063BFE0] sub_0063BFE0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B52B20;
extern "C" int mem_00B52B1C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063BFE0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae557
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B20], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B20], 0x1
        mov     ecx, offset mem_00B52B1C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B1C], 0x97bd9c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B1C
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

// [0x0063C090] sub_0063C090 (165 bytes)
extern "C" int mem_00B52B28;
extern "C" int mem_00B52B24;
extern "C" __declspec(naked) void __fastcall fn_0063C090(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae587
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B28], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B28], 0x1
        mov     ecx, offset mem_00B52B24
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B24], 0x97bf4c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B24
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

// [0x0063C140] sub_0063C140 (165 bytes)
extern "C" int mem_00B52B30;
extern "C" int mem_00B52B2C;
extern "C" __declspec(naked) void __fastcall fn_0063C140(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae5b7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B30], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B30], 0x1
        mov     ecx, offset mem_00B52B2C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B2C], 0x97c0fc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B2C
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

// [0x0063C1F0] sub_0063C1F0 (165 bytes)
extern "C" int mem_00B52B38;
extern "C" int mem_00B52B34;

extern "C" __declspec(naked) void __fastcall fn_0063C1F0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae5e7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B38], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B38], 0x1
        mov     ecx, offset mem_00B52B34
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B34], 0x97c1d4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B34
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

// [0x0063C2A0] sub_0063C2A0 (165 bytes)
extern "C" int mem_00B52B40;
extern "C" int mem_00B52B3C;

extern "C" __declspec(naked) void __fastcall fn_0063C2A0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae617
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B40], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B40], 0x1
        mov     ecx, offset mem_00B52B3C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B3C], 0x97c384
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B3C
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

// [0x0063C350] sub_0063C350 (165 bytes)
extern "C" int mem_00B52B48;
extern "C" int mem_00B52B44;

extern "C" __declspec(naked) void __fastcall fn_0063C350(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8ae647
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B52B48], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B52B48], 0x1
        mov     ecx, offset mem_00B52B44
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B52B44], 0x97c534
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B52B44
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

// [0x0063C890] sub_0063C890 (448 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_0063C800();
extern "C" void ext_0063B4E0();
extern "C" void ext_0063B590();
extern "C" void ext_0063B640();
extern "C" void ext_0063B6F0();
extern "C" void ext_0063B7A0();
extern "C" void ext_0063B850();
extern "C" void ext_0063B900();
extern "C" void ext_0063B9B0();
extern "C" void ext_0063BA60();
extern "C" void ext_0063BB10();
extern "C" void ext_0063BBC0();
extern "C" void ext_0063BC70();
extern "C" void ext_0063BD20();
extern "C" void ext_0063BDD0();
extern "C" void ext_0063BE80();
extern "C" void ext_0063BF30();
extern "C" void ext_0063BFE0();
extern "C" void ext_0063C090();
extern "C" void ext_0063C140();
extern "C" void ext_0063C1F0();
extern "C" void ext_0063C2A0();
extern "C" void ext_0063C350();
extern "C" void ext_0063C400();
extern "C" void ext_0063C480();
extern "C" void ext_0063C500();
extern "C" void ext_0063C580();
extern "C" void ext_0063C600();
extern "C" void ext_0063C680();
extern "C" void ext_0063C700();
extern "C" void ext_0063C780();
extern "C" int mem_00A9F1B0;
extern "C" int mem_00A9F038;

extern "C" __declspec(naked) void __fastcall fn_0063C890(void* self) {
    __asm {
        push    ecx
        lea     eax, [esp]
        push    0x96cc8c
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_0063C800
        push    0x97c804
        lea     ecx, [esp + 0x4]
        call    ext_0063B4E0
        push    0x97c7f4
        lea     ecx, [esp + 0x4]
        call    ext_0063B590
        push    0x97c7e0
        lea     ecx, [esp + 0x4]
        call    ext_0063B640
        push    0x97c7d0
        lea     ecx, [esp + 0x4]
        call    ext_0063B6F0
        push    0x97c7c0
        lea     ecx, [esp + 0x4]
        call    ext_0063B7A0
        push    0x97c7b0
        lea     ecx, [esp + 0x4]
        call    ext_0063B850
        push    0x97c7a0
        lea     ecx, [esp + 0x4]
        call    ext_0063B900
        push    0x97c790
        lea     ecx, [esp + 0x4]
        call    ext_0063B9B0
        push    0x97c780
        lea     ecx, [esp + 0x4]
        call    ext_0063BA60
        push    0x97c76c
        lea     ecx, [esp + 0x4]
        call    ext_0063BB10
        push    0x97c75c
        lea     ecx, [esp + 0x4]
        call    ext_0063BBC0
        push    0x97c750
        lea     ecx, [esp + 0x4]
        call    ext_0063BC70
        push    0x97c748
        lea     ecx, [esp + 0x4]
        call    ext_0063BD20
        mov     ecx, dword ptr [mem_00A9F1B0]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0063BDD0
        mov     edx, dword ptr [mem_00A9F038]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_0063BE80
        push    0x97c734
        lea     ecx, [esp + 0x4]
        call    ext_0063BF30
        push    0x97c724
        lea     ecx, [esp + 0x4]
        call    ext_0063BFE0
        push    0x97c710
        lea     ecx, [esp + 0x4]
        call    ext_0063C090
        push    0x97c6f8
        lea     ecx, [esp + 0x4]
        call    ext_0063C140
        push    0x97c6e0
        lea     ecx, [esp + 0x4]
        call    ext_0063C1F0
        push    0x97c6c8
        lea     ecx, [esp + 0x4]
        call    ext_0063C2A0
        push    0x97c6ac
        lea     ecx, [esp + 0x4]
        call    ext_0063C350
        push    0x97c69c
        lea     ecx, [esp + 0x4]
        call    ext_0063C400
        push    0x97c684
        lea     ecx, [esp + 0x4]
        call    ext_0063C480
        push    0x97c668
        lea     ecx, [esp + 0x4]
        call    ext_0063C500
        push    0x97c654
        lea     ecx, [esp + 0x4]
        call    ext_0063C580
        push    0x97c630
        lea     ecx, [esp + 0x4]
        call    ext_0063C600
        push    0x97c61c
        lea     ecx, [esp + 0x4]
        call    ext_0063C680
        push    0x97c604
        lea     ecx, [esp + 0x4]
        call    ext_0063C700
        push    0x93e0ec
        lea     ecx, [esp + 0x4]
        call    ext_0063C780
        pop     ecx
        ret
    }
}

// [0x0063FCE0] sub_0063FCE0 (184 bytes)
extern "C" void ext_0055C490();
extern "C" void ext_0063FAB0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063FCE0(void* self, int edx_unused, const void* key) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push -1
        push 0x8b4158
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr [esp + 0x3c]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call ext_0055C490
        test esi, esi
        mov edi, eax
        jne loc_63fd13
        call dword ptr [mem_00925134]
    loc_63fd13:
        cmp edi, dword ptr [esi + 0x4]
        je loc_63fd2a
        lea eax, [edi + 0xc]
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je loc_63fd6c
    loc_63fd2a:
        push ebp
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE0]
        mov byte ptr [esp + 0x30], 0x0
        lea ecx, [esp + 0x14]
        push ecx
        push edi
        push esi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0x0
        call ext_0063FAB0
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
    loc_63fd6c:
        test esi, esi
        jne loc_63fd76
        call dword ptr [mem_00925134]
    loc_63fd76:
        cmp edi, dword ptr [esi + 0x4]
        jne loc_63fd81
        call dword ptr [mem_00925134]
    loc_63fd81:
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        pop ebp
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x34
        ret 0x4
    }
}

extern "C" double __cdecl fabs(double);
extern "C" void ext_0063CE60();

// [0x0063D4A0] sub_0063D4A0 (219 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063D4A0(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        push 0x0
        lea ebx, [esi + 0x4c]
        call edx
        fsub dword ptr [esi + 0x2c]
        mov eax, dword ptr [esi + 0x7c]
        test eax, eax
        fstp dword ptr [esp + 0xc]
        lea ecx, [esi + 0x78]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jne L_nonnull
        xor edi, edi
        jmp L_after_cap
    L_nonnull:
        mov edi, dword ptr [ecx + 0xc]
        sub edi, eax
        sar edi, 0x2
    L_after_cap:
        push ebp
        mov ebp, dword ptr [ecx + 0x10]
        xor edx, edx
        mov eax, ebp
        div edi
        test edx, edx
        jne L_inc
        test ebp, ebp
        je L_inc
        mov dword ptr [ecx + 0x10], edi
    L_inc:
        add dword ptr [ecx + 0x10], 0x1
        push edx
        call ext_0041C7C0
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax]
        pop ebp
        fld dword ptr [ebx]
        fmul dword ptr [esp + 0xc]
        fchs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ebx + 0x4]
        fchs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_check_hi
        fstp st(1)
    L_store_clamped:
        fstp dword ptr [esp + 0xc]
        jmp L_after_clamp
    L_check_hi:
        fstp st(0)
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_store_clamped
        fstp st(0)
    L_after_clamp:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [eax + 0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        push edx
        call eax
        push ebx
        mov ecx, esi
        call ext_0063CE60
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x0063F7B0] sub_0063F7B0 (243 bytes)
extern "C" void ext_0059E220();
extern "C" void ext_0063F150();

extern "C" __declspec(naked) void __fastcall fn_0063F7B0(void* self) {
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
        cmp byte ptr [esi + 2Dh], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_after
        nop
    L_top:
        lea eax, [esi + 0Ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_else
        mov esi, dword ptr [esi]
        jmp L_chk
    L_else:
        mov esi, dword ptr [esi + 8]
    L_chk:
        cmp byte ptr [esi + 2Dh], 0
        je L_top
    L_after:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_null
        mov ecx, dword ptr [ebp + 4]
        cmp edi, dword ptr [ecx]
        jne L_callE220
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_0063F150
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
    L_callE220:
        lea ecx, [esp + 14h]
        call ext_0059E220
        mov esi, dword ptr [esp + 18h]
    L_null:
        lea edx, [esi + 0Ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_false
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_0063F150
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
    L_false:
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

// [0x0063FDA0] sub_0063FDA0 (319 bytes)
extern "C" int mem_008AEE4D;
extern "C" int mem_0097CCE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00B53A28;
extern "C" int mem_00924FF4;
extern "C" int mem_0097CCDC;
extern "C" int mem_0097CCD8;
extern "C" int mem_0097CCD0;
extern "C" int mem_0097CCC8;

extern "C" __declspec(naked) void __fastcall fn_0063FDA0(void* self) {
    __asm {
        push -1
        push offset mem_008AEE4D
        __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x38
        push esi
        push offset mem_0097CCE0
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 4]
        push eax
        mov ecx, offset mem_00B53A28
        mov dword ptr [esp + 0x48], 0
        call fn_0063FCE0
        or esi, -1
        lea ecx, [esp + 4]
        mov byte ptr [eax], 0x3c
        mov dword ptr [esp + 0x44], esi
        call dword ptr [mem_00924FF4]

        push offset mem_0097CCDC
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 4]
        push ecx
        mov ecx, offset mem_00B53A28
        mov dword ptr [esp + 0x48], 1
        call fn_0063FCE0
        lea ecx, [esp + 4]
        mov byte ptr [eax], 0x3e
        mov dword ptr [esp + 0x44], esi
        call dword ptr [mem_00924FF4]

        push offset mem_0097CCD8
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 4]
        push edx
        mov ecx, offset mem_00B53A28
        mov dword ptr [esp + 0x48], 2
        call fn_0063FCE0
        lea ecx, [esp + 4]
        mov byte ptr [eax], 0x26
        mov dword ptr [esp + 0x44], esi
        call dword ptr [mem_00924FF4]

        push offset mem_0097CCD0
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 4]
        push eax
        mov ecx, offset mem_00B53A28
        mov dword ptr [esp + 0x48], 3
        call fn_0063FCE0
        lea ecx, [esp + 4]
        mov byte ptr [eax], 0x27
        mov dword ptr [esp + 0x44], esi
        call dword ptr [mem_00924FF4]

        push offset mem_0097CCC8
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, offset mem_00B53A28
        mov dword ptr [esp + 0x48], 4
        call fn_0063FCE0
        lea ecx, [esp + 0x20]
        mov byte ptr [eax], 0x22
        mov dword ptr [esp + 0x44], esi
        call dword ptr [mem_00924FF4]

        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x44
        ret
    }
}

// [0x0063CE60] sub_0063CE60 (366 bytes)
extern "C" void ext_0067F5B0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0063CE60(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x14
        fldz
        push ebx
        push ebp
        fstp dword ptr [esp + 0x10]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ecx + 0x74], edi
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], edi
        jbe L_end
    L_loop:
        mov esi, dword ptr [ecx + 0x7c]
        test esi, esi
        lea ebx, [ecx + 0x78]
        jne L_nz
        xor ecx, ecx
        jmp L_m1
    L_nz:
        mov ecx, dword ptr [ebx + 0xc]
        sub ecx, esi
        sar ecx, 0x2
    L_m1:
        mov eax, dword ptr [ebx + 0x10]
        cmp eax, ecx
        jb L_m2
        add eax, edi
        xor edx, edx
        div ecx
        mov edi, edx
    L_m2:
        test esi, esi
        je L_fail
        mov ecx, dword ptr [ebx + 0x8]
        mov eax, ecx
        sub eax, esi
        sar eax, 0x2
        cmp eax, edi
        jbe L_fail
        cmp esi, ecx
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [esp + 0x14]
        lea ebp, [esi + 4*edi]
        add eax, 0x78
        cmp ebp, dword ptr [eax + 0x8]
        mov dword ptr [esp + 0x20], esi
        ja L_bad1
        cmp ebp, dword ptr [eax + 0x4]
        jae L_ok2
    L_bad1:
        call dword ptr [mem_00925134]
    L_ok2:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov esi, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x64]
        add esi, 0x60
        test edi, edi
        jne L_nz2
        xor ecx, ecx
        jmp L_m3
    L_nz2:
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, edi
        sar ecx, 0x2
    L_m3:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, ecx
        jb L_m4
        mov edx, dword ptr [esp + 0x10]
        add eax, edx
        xor edx, edx
        div ecx
        mov ebx, edx
        jmp L_m5
    L_m4:
        mov ebx, dword ptr [esp + 0x10]
    L_m5:
        test edi, edi
        je L_fail
        mov ecx, dword ptr [esi + 0x8]
        mov eax, ecx
        sub eax, edi
        sar eax, 0x2
        cmp eax, ebx
        jbe L_fail
        cmp edi, ecx
        jbe L_ok4
        call dword ptr [mem_00925134]
    L_ok4:
        mov dword ptr [esp + 0x20], edi
        lea edi, [edi + 4*ebx]
        cmp edi, dword ptr [esi + 0x8]
        ja L_bad2
        cmp edi, dword ptr [esi + 0x4]
        jae L_ok5
    L_bad2:
        call dword ptr [mem_00925134]
    L_ok5:
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok6
        call dword ptr [mem_00925134]
    L_ok6:
        fld dword ptr [edi]
        mov eax, dword ptr [esp + 0x10]
        fmul dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x14]
        add eax, 0x1
        cmp eax, dword ptr [ecx + 0x74]
        fadd dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x10], eax
        fstp dword ptr [esp + 0x18]
        jae L_end
        mov edi, eax
        jmp L_loop
    L_fail:
        call ext_0067F5B0
    L_end:
        mov edx, dword ptr [esp + 0x28]
        fld dword ptr [edx + 0x8]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fst dword ptr [ecx + 0xa8]
        fld dword ptr [ecx + 0xac]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_skip
        fld dword ptr [ecx + 0xac]
        fstp dword ptr [ecx + 0xa8]
    L_skip:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}
