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
