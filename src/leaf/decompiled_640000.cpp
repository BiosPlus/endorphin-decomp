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
