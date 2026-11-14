// Decompiled translation unit: src/leaf/decompiled_610000.cpp

// [0x00611160] sub_00611160 (11 bytes)
extern "C" void ext_005B11E0();
extern "C" void __fastcall fn_00611160(void* self) {
    // push 3; add ecx, 8; call sub_005B11E0 (ret 4); ret
    __asm {
        push 3
        add ecx, 8
        call ext_005B11E0
    }
}

// [0x00611120] sub_00611120 (20 bytes)
extern "C" void __stdcall ext_006110A0();
extern "C" __declspec(naked) void __fastcall fn_00611120(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006110A0
        fld dword ptr [ecx + eax*4 + 0A0h]
        ret 4
    }
}

// [0x00611140] sub_00611140 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00611140(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006110A0
        fld dword ptr [ecx + eax*4 + 0ACh]
        ret 4
    }
}

// [0x00611100] sub_00611100 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_00611100(void* self, int edx_unused, int a1, float a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006110A0
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx + eax*4 + 0ACh]
        ret 8
    }
}

// [0x00610AF0] sub_00610AF0 (37 bytes)
extern "C" int mem_0092C8CC;
extern "C" int mem_0093F8EC;
extern "C" int mem_0093E990;
extern "C" void __fastcall fn_00610AF0(void* self) {
    unsigned char* p = (unsigned char*)self;
    p[4] = 0;
    *(float*)(p + 8) = 0.0f;
    *(float*)(p + 0xC) = *(float*)&mem_0092C8CC;
    *(float*)(p + 0x10) = *(float*)&mem_0093F8EC;
    *(float*)(p + 0x14) = *(float*)&mem_0093E990;
}

// [0x00610B20] sub_00610B20 (32 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_00610B20(void* self) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x00610CB0] sub_00610CB0 (39 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00594000();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_00610CB0(void* self) {
    __asm {
        push ecx
        push 0
        add ecx, 20h
        call ext_005B11E0
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x00610CE0] sub_00610CE0 (39 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" void __fastcall fn_00610CE0(void* self) {
    float f = ((float (__thiscall*)(void*, int))ext_005B11E0)((char*)self + 0x20, 1);
    void* p = ((void* (__cdecl*)())ext_00594000)();
    ((void (__thiscall*)(void*, float))ext_00678130)((char*)p + 0x2E0, f);
}

// [0x00611170] sub_00611170 (39 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" __declspec(naked) void __fastcall fn_00611170(void* self) {
    __asm {
        push ecx
        push 0
        add ecx, 8
        call ext_005B11E0
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x006111A0] sub_006111A0 (39 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" __declspec(naked) void __fastcall fn_006111A0(void* self) {
    __asm {
        push ecx
        push 1
        add ecx, 8
        call ext_005B11E0
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x006111D0] sub_006111D0 (39 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" __declspec(naked) void __fastcall fn_006111D0(void* self) {
    __asm {
        push ecx
        push 2
        add ecx, 8
        call ext_005B11E0
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00678130();

// [0x00611870] sub_00611870 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00611870(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10c]
        push 0x0
        call edx
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x006118E0] sub_006118E0 (41 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" __declspec(naked) void __fastcall fn_006118E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10c]
        push 1
        call edx
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x00611950] sub_00611950 (41 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00678130();
extern "C" __declspec(naked) void __fastcall fn_00611950(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10c]
        push 2
        call edx
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x00610B40] sub_00610B40 (34 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006781B0();

extern "C" __declspec(naked) void __fastcall fn_00610B40(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        fld dword ptr [esp + 8]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_006781B0
        fstp dword ptr [esi + 8]
        pop esi
        ret 4
    }
}

// [0x006118A0] sub_006118A0 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_006118A0(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        fld dword ptr [esp + 8]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_006781B0
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 0xF0]
        push ecx
        fstp dword ptr [esp]
        push 0
        mov ecx, esi
        call edx
        pop esi
        ret 4
    }
}

// [0x00611910] sub_00611910 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_00611910(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        fld dword ptr [esp + 8]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_006781B0
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 0F0h]
        push ecx
        fstp dword ptr [esp]
        push 1
        mov ecx, esi
        call edx
        pop esi
        ret 4
    }
}

// [0x00611980] sub_00611980 (57 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006781B0();
extern "C" __declspec(naked) void __fastcall fn_00611980(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        fld dword ptr [esp + 8]
        push ecx
        lea ecx, [eax + 2E0h]
        fstp dword ptr [esp]
        call ext_006781B0
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 0F0h]
        push ecx
        fstp dword ptr [esp]
        push 2
        mov ecx, esi
        call edx
        pop esi
        ret 4
    }
}

// [0x006123C0] sub_006123C0 (65 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_005E1330();
extern "C" void ext_00493EE0();
extern "C" __declspec(naked) void __fastcall fn_006123C0(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        push 1
        lea ecx, [esi + 8]
        call ext_005B11D0
        fld dword ptr [esp + 8]
        fstp dword ptr [eax]
        mov byte ptr [esi + 0Ch], 1
        mov esi, dword ptr [esi + 0BCh]
        cmp dword ptr [esi], 0
        je short L_skip_e1330
        mov ecx, dword ptr [esi]
        call ext_005E1330
    L_skip_e1330:
        call ext_00594000
        test eax, eax
        pop esi
        je short L_ret
        lea ecx, [eax + 258h]
        call ext_00493EE0
    L_ret:
        ret 4
    }
}

// [0x00612410] sub_00612410 (65 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005B11D0();
extern "C" void ext_005E1330();

extern "C" __declspec(naked) void __fastcall fn_00612410(void* self, int edx_unused, float value) {
    __asm {
        push esi
        mov esi, ecx
        push 2
        lea ecx, [esi + 8]
        call ext_005B11D0
        fld dword ptr [esp + 8]
        fstp dword ptr [eax]
        mov byte ptr [esi + 0Ch], 1
        mov esi, dword ptr [esi + 0BCh]
        cmp dword ptr [esi], 0
        je skip_e1330
        mov ecx, dword ptr [esi]
        call ext_005E1330
skip_e1330:
        call ext_00594000
        test eax, eax
        pop esi
        je done
        lea ecx, [eax + 258h]
        call ext_00493EE0
done:
        ret 4
    }
}

// [0x00612460] sub_00612460 (65 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005B11D0();
extern "C" void ext_005E1330();

extern "C" __declspec(naked) void __fastcall fn_00612460(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        push 3
        lea ecx, [esi + 8]
        call ext_005B11D0
        fld dword ptr [esp + 8]
        fstp dword ptr [eax]
        mov byte ptr [esi + 0Ch], 1
        mov esi, dword ptr [esi + 0BCh]
        cmp dword ptr [esi], 0
        je skip_5E1330
        mov ecx, dword ptr [esi]
        call ext_005E1330
skip_5E1330:
        call ext_00594000
        test eax, eax
        pop esi
        je done
        lea ecx, [eax + 258h]
        call ext_00493EE0
done:
        ret 4
    }
}

// [0x00610C60] sub_00610C60 (66 bytes)
extern "C" void ext_005B11D0();
extern "C" __declspec(naked) void __fastcall fn_00610C60(void* self, int edx_unused, const float* a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x8]
        mov esi, ecx
        push ebx
        fstp dword ptr [esp + 0x14]
        lea ecx, [esi + 0x20]
        call ext_005B11D0
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esi + 4*ebx + 0x8]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [esi + 4*ebx + 0x18]
        fld dword ptr [edi + 0x10]
        pop edi
        fstp dword ptr [esi + 4*ebx + 0x10]
        mov byte ptr [esi + 0x4], 1
        pop esi
        pop ebx
        ret 8
    }
}

// [0x00612370] sub_00612370 (69 bytes)
extern "C" __declspec(naked) void __fastcall fn_00612370(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        push 0
        lea ecx, [esi + 8]
        mov edi, eax
        call ext_005B11D0
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [eax]
        mov byte ptr [esi + 0Ch], 1
        mov esi, dword ptr [esi + 0BCh]
        cmp dword ptr [esi], 0
        je skip_e1330
        mov ecx, dword ptr [esi]
        call ext_005E1330
skip_e1330:
        test edi, edi
        je skip_493ee0
        lea ecx, [edi + 258h]
        call ext_00493EE0
skip_493ee0:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00610C10] sub_00610C10 (76 bytes)
extern "C" void ext_005B11D0();
extern "C" __declspec(naked) void __fastcall fn_00610C10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 20h]
        push 1
        mov ecx, edi
        mov byte ptr [esi + 4], 0
        call ext_005B11D0
        fldz
        push 0
        fstp dword ptr [eax]
        mov ecx, edi
        call ext_005B11D0
        fldz
        fstp dword ptr [eax]
        pop edi
        fld dword ptr [mem_0092C8CC]
        fst dword ptr [esi + 0Ch]
        fstp dword ptr [esi + 8]
        fld dword ptr [mem_0093E990]
        fst dword ptr [esi + 1Ch]
        fstp dword ptr [esi + 18h]
        fld dword ptr [mem_0093F8EC]
        fst dword ptr [esi + 14h]
        fstp dword ptr [esi + 10h]
        pop esi
        ret
    }
}

// [0x0061DC40] sub_0061DC40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490D8;
extern "C" int mem_00B490D4;

extern "C" __declspec(naked) void* __fastcall fn_0061DC40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a93ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B490D8], al
        jne L_done
        or dword ptr [mem_00B490D8], eax
        mov ecx, offset mem_00B490D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490D4], 0x972e34
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490D4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061DCA0] sub_0061DCA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490E0;
extern "C" int mem_00B490DC;

extern "C" __declspec(naked) void* __fastcall fn_0061DCA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a940e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B490E0], al
        jne L_done
        or dword ptr [mem_00B490E0], eax
        mov ecx, offset mem_00B490DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490DC], 0x972fe4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490DC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061ECD0] sub_0061ECD0 (30 bytes)
extern "C" void ext_0061DC40();

extern "C" __declspec(naked) void __fastcall fn_0061ECD0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DC40
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061ECF0] sub_0061ECF0 (30 bytes)
extern "C" void ext_0061DCA0();

extern "C" __declspec(naked) void __fastcall fn_0061ECF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DCA0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DD00] sub_0061DD00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490E8;
extern "C" int mem_00B490E4;

extern "C" __declspec(naked) void* __fastcall fn_0061DD00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a942e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B490E8], al
        jne L_done
        or dword ptr [mem_00B490E8], eax
        mov ecx, offset mem_00B490E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490E4], 0x973194
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061ED10] sub_0061ED10 (30 bytes)
extern "C" void ext_0061DD00();

extern "C" __declspec(naked) void __fastcall fn_0061ED10(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DD00
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DD60] sub_0061DD60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490F0;
extern "C" int mem_00B490EC;

extern "C" __declspec(naked) void* __fastcall fn_0061DD60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a944e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B490F0], al
        jne L_done
        or dword ptr [mem_00B490F0], eax
        mov ecx, offset mem_00B490EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490EC], 0x973344
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061ED30] sub_0061ED30 (30 bytes)
extern "C" void ext_0061DD60();

extern "C" __declspec(naked) void __fastcall fn_0061ED30(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DD60
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DDC0] sub_0061DDC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490F8;
extern "C" int mem_00B490F4;

extern "C" __declspec(naked) void* __fastcall fn_0061DDC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a946e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B490F8], al
        jne L_done
        or dword ptr [mem_00B490F8], eax
        mov ecx, offset mem_00B490F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490F4], 0x9734f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061ED50] sub_0061ED50 (30 bytes)
extern "C" void ext_0061DDC0();

extern "C" __declspec(naked) void __fastcall fn_0061ED50(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DDC0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DE20] sub_0061DE20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B490FC;
extern "C" int mem_00B49100;

extern "C" __declspec(naked) void* __fastcall fn_0061DE20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a948e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49100], al
        jne L_done
        or dword ptr [mem_00B49100], eax
        mov ecx, offset mem_00B490FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B490FC], 0x9736a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B490FC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061DE80] sub_0061DE80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49108;
extern "C" int mem_00B49104;

extern "C" __declspec(naked) void* __fastcall fn_0061DE80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a94ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49108], al
        jne L_done
        or dword ptr [mem_00B49108], eax
        mov ecx, offset mem_00B49104
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49104], 0x973854
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49104
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061ED70] sub_0061ED70 (30 bytes)
extern "C" void ext_0061DE20();

extern "C" __declspec(naked) void __fastcall fn_0061ED70(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DE20
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061ED90] sub_0061ED90 (30 bytes)
extern "C" void ext_0061DE80();

extern "C" __declspec(naked) void __fastcall fn_0061ED90(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DE80
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DEE0] sub_0061DEE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4910C;
extern "C" int mem_00B49110;

extern "C" __declspec(naked) void* __fastcall fn_0061DEE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a94ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49110], al
        jne L_done
        or dword ptr [mem_00B49110], eax
        mov ecx, offset mem_00B4910C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4910C], 0x973a04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4910C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061DF40] sub_0061DF40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49118;
extern "C" int mem_00B49114;

extern "C" __declspec(naked) void* __fastcall fn_0061DF40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a94ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49118], al
        jne L_done
        or dword ptr [mem_00B49118], eax
        mov ecx, offset mem_00B49114
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49114], 0x973bb4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49114
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EDB0] sub_0061EDB0 (30 bytes)
extern "C" void ext_0061DEE0();

extern "C" __declspec(naked) void __fastcall fn_0061EDB0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DEE0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061EDD0] sub_0061EDD0 (30 bytes)
extern "C" void ext_0061DF40();

extern "C" __declspec(naked) void __fastcall fn_0061EDD0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DF40
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061DFA0] sub_0061DFA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4911C;
extern "C" int mem_00B49120;

extern "C" __declspec(naked) void* __fastcall fn_0061DFA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a950e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49120], al
        jne L_done
        or dword ptr [mem_00B49120], eax
        mov ecx, offset mem_00B4911C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4911C], 0x973d64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4911C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061E000] sub_0061E000 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49128;
extern "C" int mem_00B49124;

extern "C" __declspec(naked) void* __fastcall fn_0061E000(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a952e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49128], al
        jne L_done
        or dword ptr [mem_00B49128], eax
        mov ecx, offset mem_00B49124
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49124], 0x973f14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49124
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EDF0] sub_0061EDF0 (30 bytes)
extern "C" void ext_0061DFA0();

extern "C" __declspec(naked) void __fastcall fn_0061EDF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061DFA0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061EE10] sub_0061EE10 (30 bytes)
extern "C" void ext_0061E000();

extern "C" __declspec(naked) void __fastcall fn_0061EE10(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E000
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E060] sub_0061E060 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49130;
extern "C" int mem_00B4912C;

extern "C" __declspec(naked) void* __fastcall fn_0061E060(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a954e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49130], al
        jne L_done
        or dword ptr [mem_00B49130], eax
        mov ecx, offset mem_00B4912C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4912C], 0x9740c4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4912C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EE30] sub_0061EE30 (30 bytes)
extern "C" void ext_0061E060();

extern "C" __declspec(naked) void __fastcall fn_0061EE30(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E060
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E0C0] sub_0061E0C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49138;
extern "C" int mem_00B49134;

extern "C" __declspec(naked) void* __fastcall fn_0061E0C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a956e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49138], al
        jne L_done
        or dword ptr [mem_00B49138], eax
        mov ecx, offset mem_00B49134
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49134], 0x974274
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49134
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EE50] sub_0061EE50 (30 bytes)
extern "C" void ext_0061E0C0();

extern "C" __declspec(naked) void __fastcall fn_0061EE50(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E0C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E120] sub_0061E120 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4913C;
extern "C" int mem_00B49140;

extern "C" __declspec(naked) void* __fastcall fn_0061E120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a958e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49140], al
        jne L_done
        or dword ptr [mem_00B49140], eax
        mov ecx, offset mem_00B4913C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4913C], 0x974424
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4913C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EE70] sub_0061EE70 (30 bytes)
extern "C" void ext_0061E120();

extern "C" __declspec(naked) void __fastcall fn_0061EE70(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E120
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E180] sub_0061E180 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49148;
extern "C" int mem_00B49144;

extern "C" __declspec(naked) void* __fastcall fn_0061E180(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a95ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49148], al
        jne L_done
        or dword ptr [mem_00B49148], eax
        mov ecx, offset mem_00B49144
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49144], 0x9745d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49144
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061E1E0] sub_0061E1E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49150;
extern "C" int mem_00B4914C;

extern "C" __declspec(naked) void* __fastcall fn_0061E1E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a95ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49150], al
        jne L_done
        or dword ptr [mem_00B49150], eax
        mov ecx, offset mem_00B4914C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4914C], 0x974784
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4914C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EE90] sub_0061EE90 (30 bytes)
extern "C" void ext_0061E180();

extern "C" __declspec(naked) void __fastcall fn_0061EE90(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E180
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061EEB0] sub_0061EEB0 (30 bytes)
extern "C" void ext_0061E1E0();

extern "C" __declspec(naked) void __fastcall fn_0061EEB0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E1E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E240] sub_0061E240 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49158;
extern "C" int mem_00B49154;

extern "C" __declspec(naked) void* __fastcall fn_0061E240(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a95ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49158], al
        jne L_done
        or dword ptr [mem_00B49158], eax
        mov ecx, offset mem_00B49154
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49154], 0x974934
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49154
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EED0] sub_0061EED0 (30 bytes)
extern "C" void ext_0061E240();

extern "C" __declspec(naked) void __fastcall fn_0061EED0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E240
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E2A0] sub_0061E2A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49160;
extern "C" int mem_00B4915C;

extern "C" __declspec(naked) void* __fastcall fn_0061E2A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a960e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49160], al
        jne L_done
        or dword ptr [mem_00B49160], eax
        mov ecx, offset mem_00B4915C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4915C], 0x974ae4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4915C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EEF0] sub_0061EEF0 (30 bytes)
extern "C" void ext_0061E2A0();

extern "C" __declspec(naked) void __fastcall fn_0061EEF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E2A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E300] sub_0061E300 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49168;
extern "C" int mem_00B49164;

extern "C" __declspec(naked) void* __fastcall fn_0061E300(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a962e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49168], al
        jne L_done
        or dword ptr [mem_00B49168], eax
        mov ecx, offset mem_00B49164
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49164], 0x974c94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49164
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061E360] sub_0061E360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49170;
extern "C" int mem_00B4916C;

extern "C" __declspec(naked) void* __fastcall fn_0061E360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a964e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49170], al
        jne L_done
        or dword ptr [mem_00B49170], eax
        mov ecx, offset mem_00B4916C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4916C], 0x974e44
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4916C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EF10] sub_0061EF10 (30 bytes)
extern "C" void ext_0061E300();

extern "C" __declspec(naked) void __fastcall fn_0061EF10(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E300
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061EF30] sub_0061EF30 (30 bytes)
extern "C" void ext_0061E360();

extern "C" __declspec(naked) void __fastcall fn_0061EF30(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E360
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E3C0] sub_0061E3C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49178;
extern "C" int mem_00B49174;

extern "C" __declspec(naked) void* __fastcall fn_0061E3C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a966e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49178], al
        jne L_done
        or dword ptr [mem_00B49178], eax
        mov ecx, offset mem_00B49174
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49174], 0x974ff4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49174
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EF50] sub_0061EF50 (30 bytes)
extern "C" void ext_0061E3C0();

extern "C" __declspec(naked) void __fastcall fn_0061EF50(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E3C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E420] sub_0061E420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49180;
extern "C" int mem_00B4917C;

extern "C" __declspec(naked) void* __fastcall fn_0061E420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a968e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49180], al
        jne L_done
        or dword ptr [mem_00B49180], eax
        mov ecx, offset mem_00B4917C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4917C], 0x9751a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4917C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EF70] sub_0061EF70 (30 bytes)
extern "C" void ext_0061E420();

extern "C" __declspec(naked) void __fastcall fn_0061EF70(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E420
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E480] sub_0061E480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49188;
extern "C" int mem_00B49184;

extern "C" __declspec(naked) void* __fastcall fn_0061E480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a96ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49188], al
        jne L_done
        or dword ptr [mem_00B49188], eax
        mov ecx, offset mem_00B49184
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49184], 0x975354
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49184
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EF90] sub_0061EF90 (30 bytes)
extern "C" void ext_0061E480();

extern "C" __declspec(naked) void __fastcall fn_0061EF90(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E480
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E4E0] sub_0061E4E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4918C;
extern "C" int mem_00B49190;

extern "C" __declspec(naked) void* __fastcall fn_0061E4E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a96ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49190], al
        jne L_done
        or dword ptr [mem_00B49190], eax
        mov ecx, offset mem_00B4918C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4918C], 0x975504
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4918C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EFB0] sub_0061EFB0 (30 bytes)
extern "C" void ext_0061E4E0();

extern "C" __declspec(naked) void __fastcall fn_0061EFB0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E4E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E540] sub_0061E540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B49198;
extern "C" int mem_00B49194;

extern "C" __declspec(naked) void* __fastcall fn_0061E540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a96ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49198], al
        jne L_done
        or dword ptr [mem_00B49198], eax
        mov ecx, offset mem_00B49194
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B49194], 0x9756b4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49194
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061E5A0] sub_0061E5A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4919C;
extern "C" int mem_00B491A0;

extern "C" __declspec(naked) void* __fastcall fn_0061E5A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a970e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B491A0], al
        jne L_done
        or dword ptr [mem_00B491A0], eax
        mov ecx, offset mem_00B4919C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4919C], 0x975864
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4919C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061EFD0] sub_0061EFD0 (30 bytes)
extern "C" void ext_0061E540();

extern "C" __declspec(naked) void __fastcall fn_0061EFD0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E540
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061EFF0] sub_0061EFF0 (30 bytes)
extern "C" void ext_0061E5A0();

extern "C" __declspec(naked) void __fastcall fn_0061EFF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E5A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E600] sub_0061E600 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B491A8;
extern "C" int mem_00B491A4;

extern "C" __declspec(naked) void* __fastcall fn_0061E600(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a972e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B491A8], al
        jne L_done
        or dword ptr [mem_00B491A8], eax
        mov ecx, offset mem_00B491A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B491A4], 0x975a14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B491A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061F010] sub_0061F010 (30 bytes)
extern "C" void ext_0061E600();

extern "C" __declspec(naked) void __fastcall fn_0061F010(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E600
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E660] sub_0061E660 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B491B0;
extern "C" int mem_00B491AC;

extern "C" __declspec(naked) void* __fastcall fn_0061E660(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a974e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B491B0], al
        jne L_done
        or dword ptr [mem_00B491B0], eax
        mov ecx, offset mem_00B491AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B491AC], 0x975bc4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B491AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061F030] sub_0061F030 (30 bytes)
extern "C" void ext_0061E660();

extern "C" __declspec(naked) void __fastcall fn_0061F030(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E660
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061E6C0] sub_0061E6C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B491B8;
extern "C" int mem_00B491B4;

extern "C" __declspec(naked) void* __fastcall fn_0061E6C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a976e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B491B8], al
        jne L_done
        or dword ptr [mem_00B491B8], eax
        mov ecx, offset mem_00B491B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B491B4], 0x975d74
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B491B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061E720] sub_0061E720 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B491C0;
extern "C" int mem_00B491BC;

extern "C" __declspec(naked) void* __fastcall fn_0061E720(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a978e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B491C0], al
        jne L_done
        or dword ptr [mem_00B491C0], eax
        mov ecx, offset mem_00B491BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B491BC], 0x975f24
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B491BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0061F050] sub_0061F050 (30 bytes)
extern "C" void ext_0061E6C0();

extern "C" __declspec(naked) void __fastcall fn_0061F050(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E6C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0061F070] sub_0061F070 (30 bytes)
extern "C" void ext_0061E720();

extern "C" __declspec(naked) void __fastcall fn_0061F070(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0061E720
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00612130] sub_00612130 (87 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_005B11D0();
extern "C" void ext_005E1330();

typedef float* (__thiscall *GetFloatPtrFn00612130)(void* ecx_this, int arg);
typedef void   (__thiscall *VoidThisFn00612130)(void* ecx_this);
typedef void*  (__cdecl    *GetPtrFn00612130)();

extern "C" void __fastcall fn_00612130(void* self, int edx_unused, float a1) {
    char* p = reinterpret_cast<char*>(self);
    void* sub = p + 0x20;
    float* cur = ((GetFloatPtrFn00612130)ext_005B11D0)(sub, 0);
    if (!(a1 < *cur)) {
        float* dst = ((GetFloatPtrFn00612130)ext_005B11D0)(sub, 1);
        *dst = a1;
        void* obj = *reinterpret_cast<void**>(p + 0x6c);
        *reinterpret_cast<unsigned char*>(p + 0x24) = 1;
        if (obj) {
            ((VoidThisFn00612130)ext_005E1330)(obj);
        }
        void* r = ((GetPtrFn00612130)ext_00594000)();
        if (r) {
            ((VoidThisFn00612130)ext_00493EE0)(reinterpret_cast<char*>(r) + 0x258);
        }
    }
}

// [0x00612190] sub_00612190 (87 bytes)
extern "C" void __fastcall fn_00612190(void* self, int edx_unused, float a1) {
    char* p = reinterpret_cast<char*>(self);
    void* sub = p + 0x20;
    float* cur = ((GetFloatPtrFn00612130)ext_005B11D0)(sub, 1);
    if (!(a1 > *cur)) {
        float* dst = ((GetFloatPtrFn00612130)ext_005B11D0)(sub, 0);
        *dst = a1;
        void* obj = *reinterpret_cast<void**>(p + 0x6c);
        *reinterpret_cast<unsigned char*>(p + 0x24) = 1;
        if (obj) {
            ((VoidThisFn00612130)ext_005E1330)(obj);
        }
        void* r = ((GetPtrFn00612130)ext_00594000)();
        if (r) {
            ((VoidThisFn00612130)ext_00493EE0)(reinterpret_cast<char*>(r) + 0x258);
        }
    }
}

// [0x006121F0] sub_006121F0 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006781B0();
extern "C" void ext_00612190();
typedef void*  (__cdecl    *GetPtrFn006121F0)();
typedef float  (__thiscall *FloatThisFloatFn006121F0)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn006121F0)(void* ecx_this, float a);
extern "C" void __fastcall fn_006121F0(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn006121F0)ext_00594000)();
    float v = ((FloatThisFloatFn006121F0)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn006121F0)ext_00612190)(self, v);
}

// [0x00612230] sub_00612230 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006781B0();
extern "C" void ext_00612130();
typedef void*  (__cdecl    *GetPtrFn00612230)();
typedef float  (__thiscall *FloatThisFloatFn00612230)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn00612230)(void* ecx_this, float a);
extern "C" void __fastcall fn_00612230(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn00612230)ext_00594000)();
    float v = ((FloatThisFloatFn00612230)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn00612230)ext_00612130)(self, v);
}

// [0x00610D10] sub_00610D10 (89 bytes)
extern "C" void ext_005B1870();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_00610D10(void* self) {
    __asm {
        push -1
        push 0x008A8E63
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0x1
        call ext_005B1870
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x10], 0x0
        call ext_005B1870
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

// [0x0061E780] sub_0061E780 (178 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00610AF0();
extern "C" void ext_00661980();
extern "C" int mem_00958C0C;
extern "C" int mem_008A97B9;

extern "C" __declspec(naked) void* __fastcall fn_0061E780(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push offset mem_008A97B9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_00661980
        mov ecx, esi
        mov dword ptr [esi], offset mem_00958C0C
        call ext_00610AF0
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [edi + 4*eax + 0x10]
        push eax
        fstp dword ptr [esp + 0x24]
        lea ecx, [edi + 0x20]
        fld dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x18], 0x0
        fstp dword ptr [esi + 0x10]
        mov dword ptr [esp + 0xc], 0x1
        fld dword ptr [edi + 4*eax + 0x18]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [edi + 4*eax + 0x8]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esi + 0xc]
        call ext_005B11E0
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esi + 0x8]
        mov al, byte ptr [edi + 0x4]
        mov byte ptr [esi + 0x4], al
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0061D990] sub_0061D990 (95 bytes)
extern "C" void ext_00401D20();
extern "C" void ext_00610D10();

extern "C" __declspec(naked) void __fastcall fn_0061D990(void* self) {
    __asm {
        push -1
        push 0x008A93B6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x224]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00610D10
        lea ecx, [esi + 0x164]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00610D10
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0061D380] sub_0061D380 (107 bytes)
extern "C" void ext_005B1870();
extern "C" void ext_0065F440();
extern "C" void ext_00401D20();

extern "C" __declspec(naked) void __fastcall fn_0061D380(void* self) {
    __asm {
        push -1
        push 0x8a9340
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        lea edi, [esi + 0x164]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esp + 0xc], edi
        lea ecx, [edi + 0x20]
        mov byte ptr [esp + 0x18], 1
        call ext_005B1870
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0
        call ext_0065F440
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00611EE0] sub_00611EE0 (329 bytes)
extern "C" void ext_0046C0A0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F3A8;
extern "C" int mem_00A9F2C4;
extern "C" int mem_00A9F210;
extern "C" int mem_00A9EE08;

extern "C" __declspec(naked) void __fastcall fn_00611EE0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F3A8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 1
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je  p1
        cmp eax, 0xb53b30
        je  p1
        cmp eax, 0xb53ab0
        je  p1
        cmp eax, 0xb53a70
        je  p1
        cmp eax, 0xb53af0
        jne q1
    p1:
        mov eax, 0xb53b30
    q1:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x8]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F2C4]
        add esp, 0x8
        push 1
        push 0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je  p2
        cmp eax, 0xb53b30
        je  p2
        cmp eax, 0xb53ab0
        je  p2
        cmp eax, 0xb53a70
        je  p2
        cmp eax, 0xb53af0
        jne q2
    p2:
        mov eax, 0xb53b30
    q2:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0xc]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F210]
        add esp, 0x8
        push 1
        push 0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je  p3
        cmp eax, 0xb53b30
        je  p3
        cmp eax, 0xb53ab0
        je  p3
        cmp eax, 0xb53a70
        je  p3
        cmp eax, 0xb53af0
        jne q3
    p3:
        mov eax, 0xb53b30
    q3:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x10]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9EE08]
        add esp, 0x8
        push 1
        push 0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je  p4
        cmp eax, 0xb53b30
        je  p4
        cmp eax, 0xb53ab0
        je  p4
        cmp eax, 0xb53a70
        je  p4
        cmp eax, 0xb53af0
        jne q4
    p4:
        mov eax, 0xb53b30
    q4:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x14]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        mov byte ptr [esi + 0x4], 1
        pop esi
        ret 0x4
    }
}

// [0x006125B0] sub_006125B0 (147 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694880();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void* __fastcall fn_006125B0(void* self) {
    __asm {
        sub esp, 0x24
        mov edx, dword ptr [mem_00B40640]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x4]
        push edi
        push edx
        call eax
        fldz
        fst dword ptr [esp + 0x10]
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0x20]
        mov ecx, eax
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld1
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        call ext_0067DAD0
        lea edi, [esi + 0x160]
        push edi
        lea ecx, [esp + 0xc]
        call ext_00694880
        fld dword ptr [edi]
        fdiv dword ptr [esi + 0x154]
        mov eax, edi
        fstp dword ptr [edi]
        fld dword ptr [esi + 0x164]
        fdiv dword ptr [esi + 0x158]
        pop edi
        fstp dword ptr [esi + 0x164]
        fld dword ptr [esi + 0x168]
        fdiv dword ptr [esi + 0x15c]
        fstp dword ptr [esi + 0x168]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x0061E840] sub_0061E840 (79 bytes)
extern "C" void ext_0058F200();
extern "C" int mem_00928EAC;
extern "C" int mem_009761BC;
extern "C" int mem_00976174;
extern "C" int mem_00976134;
extern "C" int mem_009760E4;
extern "C" int mem_009760D0;

extern "C" __declspec(naked) void* __fastcall fn_0061E840(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0058F200
        fld1
        mov dword ptr [esi + 0x150], offset mem_00928EAC
        mov dword ptr [esi], offset mem_009761BC
        mov dword ptr [esi + 0x4], offset mem_00976174
        mov dword ptr [esi + 0x8], offset mem_00976134
        mov dword ptr [esi + 0xC], offset mem_009760E4
        mov dword ptr [esi + 0x150], offset mem_009760D0
        fst dword ptr [esi + 0x154]
        fst dword ptr [esi + 0x158]
        mov eax, esi
        fstp dword ptr [esi + 0x15C]
        pop esi
        ret
    }
}

// [0x0061E9D0] sub_0061E9D0 (59 bytes)
extern "C" void ext_0061E840();

extern "C" void* __fastcall fn_0061E9D0(void* self) {
    ext_0061E840();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x976a9c;
    p[1] = 0x976a54;
    p[2] = 0x976a14;
    p[3] = 0x9769c4;
    p[0x150 / 4] = 0x9769b0;
    p[0x160 / 4] = 0;
    return self;
}

// [0x0061EA70] sub_0061EA70 (59 bytes)
extern "C" void ext_0061E840();

extern "C" void* __fastcall fn_0061EA70(void* self) {
    ext_0061E840();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x97662c;
    p[1] = 0x9765e4;
    p[2] = 0x9765a4;
    p[3] = 0x976554;
    p[0x150 / 4] = 0x97653c;
    p[0x160 / 4] = 0;
    return self;
}

extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_0067E600();
extern "C" int mem_00B40640;

// [0x00611200] sub_00611200 (98 bytes)
extern "C" __declspec(naked) void __fastcall fn_00611200(char* self, int edx_unused, float* arg) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x154]
        fmul dword ptr [edx]
        lea eax, [ecx + 0x160]
        push eax
        add ecx, 0x4
        fstp dword ptr [eax]
        mov eax, dword ptr [ecx]
        fld dword ptr [ecx + 0x154]
        mov eax, dword ptr [eax + 0xc]
        fmul dword ptr [edx + 0x4]
        fstp dword ptr [ecx + 0x160]
        fld dword ptr [ecx + 0x158]
        fmul dword ptr [edx + 0x8]
        fstp dword ptr [ecx + 0x164]
        mov edx, dword ptr [mem_00B40640]
        push edx
        call eax
        mov ecx, eax
        call ext_0067E600
        call ext_00594000
        test eax, eax
        je done
        lea ecx, [eax + 0x258]
        call ext_00493EE0
    done:
        ret 0x4
    }
}

// [0x0061F510] sub_0061F510 (579 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_0053F5F0();
extern "C" void ext_00610AF0();
extern "C" void ext_00611EE0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0065F440();
extern "C" void ext_00661980();
extern "C" int mem_00925134;
extern "C" int mem_00A9F5CC;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0061F510(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a9821
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        push esi
        mov esi, dword ptr [esp + 0x64]
        cmp esi, 0xb53a34
        push edi
        mov edi, ecx
        je done
        cmp esi, 0xb53b30
        je done
        cmp esi, 0xb53ab0
        je done
        cmp esi, 0xb53a70
        je done
        cmp esi, 0xb53af0
        je done
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x138]
        call edx
        test eax, eax
        je done
        add esi, 0x24
        push ebp
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe skip_inv1
        call dword ptr [mem_00925134]
    skip_inv1:
        push ebx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], ebp
        call ext_00427A60
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe skip_inv2
        call dword ptr [mem_00925134]
    skip_inv2:
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], ebx
        lea ecx, [esp + 0x20]
    loop_outer:
        call ext_00427A60
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je do_inv3
        cmp ebx, dword ptr [esp + 0x24]
        je skip_inv3
    do_inv3:
        call dword ptr [mem_00925134]
    skip_inv3:
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [esp + 0x28]
        jae done_pop
        test ebx, ebx
        jne skip_inv4
        call dword ptr [mem_00925134]
    skip_inv4:
        cmp esi, dword ptr [ebx + 0x8]
        jb skip_inv5
        call dword ptr [mem_00925134]
    skip_inv5:
        mov eax, dword ptr [mem_00A9F5CC]
        mov ecx, dword ptr [esi]
        push eax
        call ext_0063EFE0
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x138]
        add esp, 0x8
        mov ecx, edi
        call edx
        cmp dword ptr [esp + 0x70], eax
        jge next_outer_cmp
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x140]
        mov ecx, edi
        xor ebp, ebp
        call edx
        test eax, eax
        jle next_outer_cmp
        nop
    loop_inner:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x114]
        push ebp
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, edi
        call edx
        mov ebx, eax
        mov eax, dword ptr [esp + 0x18]
        cmp esi, dword ptr [eax + 0x8]
        mov dword ptr [esp + 0x68], 0x0
        jb skip_inv6
        call dword ptr [mem_00925134]
    skip_inv6:
        mov eax, dword ptr [esi]
        add eax, 0x4
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        lea ecx, [esp + 0x44]
        mov bl, al
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        test bl, bl
        je next_inner
        lea ecx, [esp + 0x2c]
        call ext_00661980
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x2c], 0x958c0c
        call ext_00610AF0
        mov ecx, dword ptr [esp + 0x18]
        cmp esi, dword ptr [ecx + 0x8]
        mov dword ptr [esp + 0x68], 0x1
        jb skip_inv7
        call dword ptr [mem_00925134]
    skip_inv7:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x30]
        call ext_00611EE0
        mov eax, dword ptr [esp + 0x70]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0xec]
        push ebp
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call edx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x68], -1
        call ext_0065F440
    next_inner:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x140]
        mov ecx, edi
        add ebp, 0x1
        call edx
        cmp ebp, eax
        jl loop_inner
    next_outer:
        mov ebx, dword ptr [esp + 0x18]
    next_outer_cmp:
        cmp esi, dword ptr [ebx + 0x8]
        jb skip_inv8
        call dword ptr [mem_00925134]
    skip_inv8:
        add esi, 0x4
        mov dword ptr [esp + 0x1c], esi
        lea ecx, [esp + 0x14]
        jmp loop_outer
    done_pop:
        pop ebx
        pop ebp
    done:
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret 0x4
    }
}

// [0x006124B0] sub_006124B0 (32 bytes)
extern "C" void ext_005B5990();
extern "C" void ext_00612460();
extern "C" void __fastcall fn_006124B0(void* self, int edx_unused, float a1) {
    ((void (__thiscall*)(void*, float))ext_00612460)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_005B5990)((char*)self + 0x54, (char*)self + 0x8);
}

// [0x00610B70] sub_00610B70 (159 bytes)
extern "C" void ext_00640390();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9F3A8;
extern "C" int mem_00A9F2C4;
extern "C" int mem_00A9F210;
extern "C" int mem_00A9EE08;

extern "C" __declspec(naked) void* __fastcall fn_00610B70(void* self, int edx_unused, void* a1) {
    __asm {
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x4], 0
        je loc_610C07
        mov eax, dword ptr [mem_00A9F3A8]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0
        push eax
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x8]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F2C4]
        add esp, 8
        push 0
        push ecx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0xc]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F210]
        add esp, 8
        push 0
        push edx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x10]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9EE08]
        add esp, 8
        push 0
        push eax
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x14]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 8
        mov eax, esi
        pop esi
        pop edi
        ret 4
    loc_610C07:
        mov eax, dword ptr [esp + 8]
        pop edi
        ret 4
    }
}

extern "C" void ext_00594000();
extern "C" void ext_005B5990();
extern "C" void ext_00612370();
extern "C" void ext_006781B0();

// [0x006124D0] sub_006124D0 (62 bytes)
extern "C" void __fastcall fn_006124D0(void* self, int edx_unused, float a1) {
    char* r = ((char* (__cdecl*)())ext_00594000)();
    a1 = ((float (__thiscall*)(void*, float))ext_006781B0)(r + 0x2e0, a1);
    ((void (__thiscall*)(void*, float))ext_00612370)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_005B5990)((char*)self + 0x54, (char*)self + 0x8);
}

// [0x00612510] sub_00612510 (62 bytes)
extern "C" void ext_006123C0();
extern "C" void __fastcall fn_00612510(void* self, int edx_unused, float a1) {
    char* r = ((char* (__cdecl*)())ext_00594000)();
    a1 = ((float (__thiscall*)(void*, float))ext_006781B0)(r + 0x2e0, a1);
    ((void (__thiscall*)(void*, float))ext_006123C0)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_005B5990)((char*)self + 0x54, (char*)self + 0x8);
}

// [0x00612550] sub_00612550 (62 bytes)
extern "C" void ext_00612410();
extern "C" void __fastcall fn_00612550(void* self, int edx_unused, float a1) {
    char* r = ((char* (__cdecl*)())ext_00594000)();
    a1 = ((float (__thiscall*)(void*, float))ext_006781B0)(r + 0x2e0, a1);
    ((void (__thiscall*)(void*, float))ext_00612410)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_005B5990)((char*)self + 0x54, (char*)self + 0x8);
}

// [0x006105E0] sub_006105E0 (68 bytes)
extern "C" void ext_005FFFB0();
extern "C" void ext_0060F3B0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_006105E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_005FFFB0
        mov ecx, eax
        add ecx, 0x14
        call ext_0060F3B0
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        je loc_610614
        push eax
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    loc_610614:
        push offset mem_00928B5D
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00610730] sub_00610730 (68 bytes)
extern "C" void ext_0060F3B0();
extern "C" void ext_00610480();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00610730(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_00610480
        mov ecx, eax
        add ecx, 0x14
        call ext_0060F3B0
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        je loc_610764
        push eax
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    loc_610764:
        push offset mem_00928B5D
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0061D750] sub_0061D750 (70 bytes)
extern "C" void ext_0061D1E0();
extern "C" void* __fastcall fn_0061D750(void* self, int edx_unused, const void* other) {
    ((void (__thiscall*)(void*, const void*))ext_0061D1E0)(self, other);
    ((unsigned int*)self)[0] = 0x97662c;
    ((unsigned int*)self)[1] = 0x9765e4;
    ((unsigned int*)self)[2] = 0x9765a4;
    ((unsigned int*)self)[3] = 0x976554;
    ((unsigned int*)self)[0x150 / 4] = 0x97653c;
    ((unsigned int*)self)[0x160 / 4] = ((const unsigned int*)other)[0x160 / 4];
    return self;
}

// [0x00612310] sub_00612310 (82 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_006110E0();
extern "C" void ext_00611100();
extern "C" __declspec(naked) void __fastcall fn_00612310(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0Ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        fld dword ptr [edi + 8]
        mov esi, ecx
        push ebx
        fstp dword ptr [esp + 14h]
        lea ecx, [esi + 8]
        call ext_005B11D0
        fld dword ptr [esp + 10h]
        fstp dword ptr [eax]
        push ecx
        fld dword ptr [edi + 0Ch]
        mov ecx, esi
        fstp dword ptr [esp]
        push ebx
        call ext_006110E0
        fld dword ptr [edi + 14h]
        push ecx
        fstp dword ptr [esp]
        push ebx
        call ext_00611100
        push ebx
        call ext_006110A0
        mov cl, byte ptr [edi + 4]
        pop edi
        mov byte ptr [eax + esi + 4], cl
        pop esi
        pop ebx
        ret 8
    }
}

// [0x006110A0] sub_006110A0 (88 bytes)
extern "C" __declspec(naked) void __fastcall fn_006110A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 3
        _emit 0x77
        _emit 0x1c
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0xd0
        _emit 0x10
        _emit 0x61
        _emit 0x00
        xor eax, eax
        ret 4
        mov eax, 1
        ret 4
        mov eax, 2
        ret 4
        mov eax, 4
        ret 4
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xb0
        _emit 0x10
        _emit 0x61
        _emit 0x00
        _emit 0xb5
        _emit 0x10
        _emit 0x61
        _emit 0x00
        _emit 0xb5
        _emit 0x10
        _emit 0x61
        _emit 0x00
        _emit 0xbd
        _emit 0x10
        _emit 0x61
        _emit 0x00
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006110A0
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx + eax*4 + 0A0h]
        ret 8
    }
}

// [0x0061CF90] sub_0061CF90 (170 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_00610AF0();
extern "C" void ext_00611120();
extern "C" void ext_00611140();
extern "C" void ext_00661980();
extern "C" __declspec(naked) void __fastcall fn_0061CF90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8a97b9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        xor ebx, ebx
        mov dword ptr [esp + 0x8], ebx
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], ebx
        call ext_00661980
        mov ecx, esi
        mov dword ptr [esi], 0x958c0c
        call ext_00610AF0
        mov dword ptr [esp + 0x18], ebx
        mov ebx, dword ptr [esp + 0x24]
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x10], 1
        call ext_00611140
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        push ebx
        fstp dword ptr [esi + 0x14]
        call ext_00611120
        fstp dword ptr [esp + 0x24]
        push ebx
        fld dword ptr [esp + 0x28]
        lea ecx, [edi + 0x8]
        fstp dword ptr [esi + 0xc]
        call ext_005B11E0
        fstp dword ptr [esp + 0x20]
        push ebx
        fld dword ptr [esp + 0x24]
        mov ecx, edi
        fstp dword ptr [esi + 0x8]
        call ext_006110A0
        mov al, byte ptr [eax + edi + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esi + 0x4], al
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00610480] sub_00610480 (90 bytes)
extern "C" void ext_0060FEB0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B48600;

extern "C" __declspec(naked) void __fastcall fn_00610480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a8bae
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B48600], al
        jne done_00610480
        or dword ptr [mem_00B48600], eax
        mov ecx, 0xb485dc
        mov dword ptr [esp + 0x8], 0x0
        call ext_0060FEB0
        push 0x91ea30
        call ext_006A6C87
        add esp, 0x4
    done_00610480:
        mov ecx, dword ptr [esp]
        mov eax, 0xb485dc
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00610630] sub_00610630 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_0060E820();
extern "C" void ext_00610480();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00610630(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_00610480
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_61068A
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
    L_61068A:
        cmp byte ptr [esp + 0xe4], 0x0
        je L_61070E
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
        call ext_0060E820
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
    L_61070E:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x00610400] sub_00610400 (118 bytes)
extern "C" void ext_0060FF90();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_00610400(void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        push 0x1
        lea ecx, [esp + 0xc]
        push 0x0
        push ecx
        mov dword ptr [esp + 0x38], 0x0
        call ext_0060FF90
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x54]
        add esp, 0xc
        push edi
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00610390] sub_00610390 (101 bytes)
extern "C" void ext_0060FF30();
extern "C" void ext_00610090();
extern "C" void ext_00610190();
extern "C" void ext_00610290();
extern "C" int mem_00A9F268;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9EDD8;
extern "C" int mem_00A9ED44;
extern "C" __declspec(naked) void __fastcall fn_00610390(void* self) {
    __asm {
        push ecx
        call ext_0060FF30
        mov eax, dword ptr [mem_00A9F268]
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        call ext_00610090
        mov edx, dword ptr [mem_00A9EDD8]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        call dword ptr [mem_00924FE4]
        call ext_00610190
        mov eax, dword ptr [mem_00A9ED44]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        call ext_00610290
        add esp, 0x24
        ret
    }
}

// [0x0061D1E0] sub_0061D1E0 (104 bytes)
extern "C" void ext_0058F2F0();
extern "C" void* __fastcall fn_0061D1E0(void* self, int edx_unused, const void* other) {
    ((void (__thiscall*)(void*, const void*))ext_0058F2F0)(self, other);
    *(volatile int*)((char*)self + 0x150) = 0x928eac;
    *(int*)((char*)self + 0x0) = 0x9761bc;
    *(int*)((char*)self + 0x4) = 0x976174;
    *(int*)((char*)self + 0x8) = 0x976134;
    *(int*)((char*)self + 0xc) = 0x9760e4;
    *(int*)((char*)self + 0x150) = 0x9760d0;
    *(float*)((char*)self + 0x154) = *(const float*)((const char*)other + 0x154);
    *(float*)((char*)self + 0x158) = *(const float*)((const char*)other + 0x158);
    *(float*)((char*)self + 0x15c) = *(const float*)((const char*)other + 0x15c);
    return self;
}

extern "C" int mem_00A9FA54;
extern "C" int mem_00A9F9D8;
extern "C" int mem_00A9F9E4;
extern "C" int mem_00A9F8C4;
extern "C" int mem_00A9FA5C;
extern "C" int mem_00A9F9FC;
extern "C" int mem_00A9F780;
extern "C" int mem_00A9FA44;
extern "C" int mem_00A9F9EC;
extern "C" int mem_00A9F770;
extern "C" void ext_005B11E0();
extern "C" void ext_0067EF60();

// [0x00610F40] sub_00610F40 (338 bytes)
struct Dummy_00610F40 {};
extern "C" void* __fastcall fn_00610F40(void* self, int edx_unused, void* a1) {
    typedef float (Dummy_00610F40::*pm_5b11e0_t)(int);
    typedef void (__cdecl *fn_67ef60_t)(void*, float, const char*, int);
    union { void (*p)(); pm_5b11e0_t m; } u;
    u.p = ext_005B11E0;
    pm_5b11e0_t f1 = u.m;
    fn_67ef60_t f2 = (fn_67ef60_t)ext_0067EF60;
    Dummy_00610F40* sub = (Dummy_00610F40*)((char*)self + 0x54);
    f2(a1, (sub->*f1)(0), (const char*)0x972d54, mem_00A9FA54);
    f2(a1, (sub->*f1)(1), (const char*)0x972d48, mem_00A9F9D8);
    f2(a1, (sub->*f1)(2), (const char*)0x972d3c, mem_00A9F9E4);
    f2(a1, (sub->*f1)(3), (const char*)0x972d34, mem_00A9F8C4);
    f2(a1, *(float*)((char*)self + 0xa0), (const char*)0x972d24, mem_00A9FA5C);
    f2(a1, *(float*)((char*)self + 0xa4), (const char*)0x972d14, mem_00A9F9FC);
    f2(a1, *(float*)((char*)self + 0xa8), (const char*)0x972d00, mem_00A9F780);
    f2(a1, *(float*)((char*)self + 0xac), (const char*)0x972cf0, mem_00A9FA44);
    f2(a1, *(float*)((char*)self + 0xb0), (const char*)0x972ce0, mem_00A9F9EC);
    f2(a1, *(float*)((char*)self + 0xb4), (const char*)0x972cd0, mem_00A9F770);
    return a1;
}

extern "C" void ext_00610B70();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" int mem_00A9F008;
extern "C" int mem_00924FF0;

// [0x006112B0] sub_006112B0 (492 bytes)
extern "C" __declspec(naked) void __fastcall fn_006112B0(void* self) {
    __asm {
        push -1
        push 0x8a8e81
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x138]
        mov byte ptr [esp + 0xb], 0
        xor ebp, ebp
        call edx
        test eax, eax
        jle loc_611489
        push ebx
        push edi
        jmp loc_6112f0
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
loc_6112f0:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x140]
        mov ecx, esi
        xor edi, edi
        call edx
        test eax, eax
        jle loc_61133d
loc_611302:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x118]
        push edi
        push ebp
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call edx
        mov bl, byte ptr [eax + 0x4]
        lea ecx, [esp + 0x18]
        call ext_0065F440
        test bl, bl
        je loc_61132a
        mov byte ptr [esp + 0x13], 1
loc_61132a:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x140]
        mov ecx, esi
        add edi, 1
        call edx
        cmp edi, eax
        jl loc_611302
loc_61133d:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x138]
        mov ecx, esi
        add ebp, 1
        call edx
        cmp ebp, eax
        jl loc_6112f0
        cmp byte ptr [esp + 0x13], 0
        je loc_611487
        mov eax, dword ptr [mem_00A9F008]
        mov ecx, dword ptr [esp + 0x5c]
        push 0
        push eax
        call ext_00640390
        mov edx, dword ptr [esi]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edx + 0x138]
        mov ecx, esi
        xor ebx, ebx
        call eax
        test eax, eax
        jle loc_611487
loc_611386:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x140]
        mov ecx, esi
        xor edi, edi
        call eax
        test eax, eax
        jle loc_611470
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
loc_6113a0:
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x118]
        push edi
        push ebx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call edx
        mov al, byte ptr [eax + 0x4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x5c], al
        call ext_0065F440
        cmp byte ptr [esp + 0x5c], 0
        je loc_611459
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x114]
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0x54], 0
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        lea ecx, [esp + 0x18]
        mov ebp, eax
        mov dword ptr [esp + 0x54], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00A9F5CC]
        push eax
        mov ecx, ebp
        call ext_00640110
        push ebx
        push eax
        call ext_00640A50
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x118]
        add esp, 8
        push edi
        push ebx
        lea eax, [esp + 0x3c]
        push eax
        mov ecx, esi
        call edx
        push ebp
        mov ecx, eax
        mov dword ptr [esp + 0x58], 1
        call ext_00610B70
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x54], 0xffffffff
        call ext_0065F440
loc_611459:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x140]
        mov ecx, esi
        add edi, 1
        call edx
        cmp edi, eax
        jl loc_6113a0
loc_611470:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x138]
        mov ecx, esi
        add ebx, 1
        call edx
        cmp ebx, eax
        jl loc_611386
loc_611487:
        pop edi
        pop ebx
loc_611489:
        mov ecx, dword ptr [esp + 0x44]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 4
    }
}
