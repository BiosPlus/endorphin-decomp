// Decompiled translation unit: src/leaf/decompiled_640000.cpp

// [0x00648480] sub_00648480 (15 bytes)
extern "C" void ext_007C6F70();

extern "C" __declspec(naked) void __fastcall fn_00648480(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x5c]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6F70
        add esp, 4
        ret
    }
}

// [0x00647F00] sub_00647F00 (18 bytes)
extern "C" void ext_007C5F80();

extern "C" __declspec(naked) void __fastcall fn_00647F00(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C5F80
        add esp, 4
        ret
    }
}

// [0x00647F30] sub_00647F30 (18 bytes)
extern "C" void ext_007C5F90();

extern "C" __declspec(naked) void __fastcall fn_00647F30(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C5F90
        add esp, 4
        ret
    }
}

// [0x006481C0] sub_006481C0 (18 bytes)
extern "C" void ext_007C6120();

extern "C" __declspec(naked) void __fastcall fn_006481C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6120
        add esp, 4
        ret
    }
}

// [0x006481E0] sub_006481E0 (18 bytes)
extern "C" void ext_007C6110();

extern "C" __declspec(naked) void __fastcall fn_006481E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6110
        add esp, 4
        ret
    }
}

// [0x0064DE80] sub_0064DE80 (18 bytes)
extern "C" void __stdcall ext_0064DE00(int a, float b);

extern "C" void __fastcall fn_0064DE80(void* self, int edx_unused, float a1) {
    ext_0064DE00(0, a1);
}

// [0x0064DEA0] sub_0064DEA0 (18 bytes)
extern "C" void __fastcall fn_0064DEA0(void* self, int edx_unused, float a1) {
    ext_0064DE00(1, a1);
}

// [0x0064DEC0] sub_0064DEC0 (18 bytes)
extern "C" void __fastcall fn_0064DEC0(void* self, int edx_unused, float a1) {
    ext_0064DE00(2, a1);
}

// [0x00642630] sub_00642630 (19 bytes)
extern "C" void ext_00648900();

extern "C" __declspec(naked) void __fastcall fn_00642630(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_00648900
        ret 0x4
    }
}

// [0x00642600] sub_00642600 (19 bytes)
extern "C" void ext_00648DB0();
extern "C" void ext_006425E0();

extern "C" __declspec(naked) void __fastcall fn_00642600(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc]
        call ext_00648DB0
        mov ecx, esi
        pop esi
        jmp ext_006425E0
    }
}

// [0x006426D0] sub_006426D0 (19 bytes)
extern "C" void ext_006489F0();

extern "C" __declspec(naked) void __fastcall fn_006426D0(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_006489F0
        ret 4
    }
}

// [0x00642720] sub_00642720 (19 bytes)
extern "C" void ext_00648A60();

extern "C" __declspec(naked) void __fastcall fn_00642720(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_00648A60
        ret 4
    }
}

// [0x00648940] sub_00648940 (20 bytes)
extern "C" void ext_0065BB70();
extern "C" void ext_0065B5E0();

extern "C" __declspec(naked) void __fastcall fn_00648940(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2c]
        call ext_0065BB70
        mov ecx, dword ptr [esi + 0x30]
        pop esi
        jmp ext_0065B5E0
    }
}

// [0x00647BF0] sub_00647BF0 (20 bytes)
extern "C" void ext_0065AA30();

extern "C" __declspec(naked) void __fastcall fn_00647BF0(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AA30
        ret
    }
}

// [0x00647C10] sub_00647C10 (20 bytes)
extern "C" void ext_0065ABE0();

extern "C" __declspec(naked) void __fastcall fn_00647C10(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065ABE0
        ret
    }
}

// [0x00647C30] sub_00647C30 (20 bytes)
extern "C" void ext_0065AAB0();

extern "C" __declspec(naked) void __fastcall fn_00647C30(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AAB0
        ret
    }
}

// [0x00647C50] sub_00647C50 (20 bytes)
extern "C" void ext_0065AB40();

extern "C" __declspec(naked) void __fastcall fn_00647C50(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AB40
        ret
    }
}

// [0x0064C950] sub_0064C950 (20 bytes)
extern "C" void __stdcall ext_0064BDE0(void* p, float f);

extern "C" __declspec(naked) void __fastcall fn_0064C950(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        lea eax, [ecx + 0x6c]
        fstp dword ptr [esp]
        push eax
        call ext_0064BDE0
        ret 0x4
    }
}

// [0x0064CB00] sub_0064CB00 (20 bytes)
extern "C" void ext_0064C970();

extern "C" __declspec(naked) void __fastcall fn_0064CB00(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        lea eax, [ecx + 0x6c]
        fstp dword ptr [esp]
        push eax
        call ext_0064C970
        ret 0x4
    }
}

// [0x0064DDE0] sub_0064DDE0 (20 bytes)
extern "C" void __cdecl ext_007C5C00(int a, int b);

extern "C" void __fastcall fn_0064DDE0(void* self, int edx_unused, int a1) {
    ext_007C5C00(*(int*)((char*)self + 0x64), a1);
}

// [0x00641F80] sub_00641F80 (22 bytes)
extern "C" void __cdecl ext_00641E90(int a1);
extern "C" void __cdecl ext_00641F10(int a1);

extern "C" void __cdecl fn_00641F80(int a1) {
    ext_00641F10(a1);
    ext_00641E90(a1);
}
