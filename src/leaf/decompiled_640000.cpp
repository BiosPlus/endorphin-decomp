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
