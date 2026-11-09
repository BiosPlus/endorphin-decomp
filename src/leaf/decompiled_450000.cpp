// Decompiled translation unit: src/leaf/decompiled_450000.cpp

extern "C" void ext_00454BB0();

// [0x00454BE0] sub_00454BE0 (25 bytes)
// Stores arg0 into this->[0x120], replaces stack arg0 with it, then tail-jumps to 0x00454BB0 with ecx = this + 0x10c.
extern "C" __declspec(naked) void __fastcall fn_00454BE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x120], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0x10c
        jmp ext_00454BB0
    }
}

// [0x00455CD0] sub_00455CD0 (26 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_00455CB0();

extern "C" __declspec(naked) void __fastcall fn_00455CD0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x98]
        cmp eax, 0xa
        je take_path
        cmp eax, 0xb
        je take_path
        jmp ext_004090C0
    take_path:
        jmp ext_00455CB0
    }
}

// [0x00455AD0] sub_00455AD0 (28 bytes)
extern "C" void ext_00455820();
extern "C" int mem_00928B5D;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_00455AD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_00928B5D
        lea ecx, [esi + 0x13c]
        call dword ptr [mem_00924FD4]
        mov ecx, esi
        pop esi
        jmp ext_00455820
    }
}

// [0x00455280] sub_00455280 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_00455280(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x009367A4
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x004584C0] sub_004584C0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_004584C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax], 0x00937394
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0xc], ecx
        ret 0xc
    }
}

// [0x00450A80] sub_00450A80 (8 bytes)
extern "C" void ext_0044F780();

extern "C" __declspec(naked) void __fastcall fn_00450A80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        call ext_0044F780
        ret 0x8
    }
}

// [0x0045E4A0] sub_0045E4A0 (14 bytes)
extern "C" void ext_006A5E72();

extern "C" __declspec(naked) void __fastcall fn_0045E4A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x2d0]
        push 0
        call ext_006A5E72
        ret
    }
}

// [0x00451AE0] sub_00451AE0 (16 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00451AE0(void* self, int edx_unused, void* a1) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x14
        call ext_00451670
        ret 0x4
    }
}

// [0x004543F0] sub_004543F0 (16 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_004543F0(void* self) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x14
        call ext_005A6300
        ret 0x4
    }
}

// [0x00452100] sub_00452100 (17 bytes)
extern "C" void __stdcall ext_00451CE0(int a, int b);

extern "C" __declspec(naked) void __fastcall fn_00452100(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x74]
        push eax
        push edx
        call ext_00451CE0
        ret 0x4
    }
}
