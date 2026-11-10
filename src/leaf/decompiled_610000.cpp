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
