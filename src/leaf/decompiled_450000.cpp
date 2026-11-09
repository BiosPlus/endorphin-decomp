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

// [0x00458840] sub_00458840 (21 bytes)
// Pushes arg0 and &arg1 (pointer into the caller's stack args), loads ecx = this->[0x54], then calls 0x004586E0 and returns 0xc.
extern "C" void ext_004586E0();

extern "C" __declspec(naked) void __fastcall fn_00458840(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x54]
        push eax
        lea edx, [esp + 0xc]
        push edx
        call ext_004586E0
        ret 0xc
    }
}

// [0x004535B0] sub_004535B0 (22 bytes)
extern "C" void ext_00453430();
extern "C" void ext_006A5FDA();

extern "C" void __fastcall fn_004535B0(void* self) {
    int r = ((int (__fastcall*)(void*))ext_00453430)(self);
    ((void (__thiscall*)(void*, int))ext_006A5FDA)((char*)self + 0x2cc, r);
}

// [0x00453230] sub_00453230 (24 bytes)
extern "C" void ext_00450B00();
extern "C" void ext_00452830();

extern "C" __declspec(naked) void __fastcall fn_00453230(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x74], 0
        je done
        call ext_00450B00
        mov ecx, esi
        pop esi
        jmp ext_00452830
    done:
        pop esi
        ret
    }
}

// [0x00453FE0] sub_00453FE0 (24 bytes)
extern "C" void ext_00453620();
extern "C" void __fastcall fn_00453FE0(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    if (a1 == *(int*)((char*)self + 0x74)) {
        *(int*)((char*)self + 0x74) = 0;
        ext_00453620();
    }
}

// [0x00455CF0] sub_00455CF0 (25 bytes)
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5ECC();

extern "C" __declspec(naked) void __fastcall fn_00455CF0(void* self) {
    __asm {
        sub esp, 0x54
        push ecx
        lea ecx, [esp + 0x4]
        call ext_006A5ECC
        lea ecx, [esp]
        call ext_006A5EBA
        add esp, 0x54
        ret
    }
}

// [0x0045BBF0] sub_0045BBF0 (26 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_0045BBF0(void* self) {
    unsigned char* esi = static_cast<unsigned char*>(self);
    ext_006A5C6E();
    *reinterpret_cast<unsigned int*>(esi + 0x54) = 0;
    *(esi + 0x58) = 0;
    *reinterpret_cast<unsigned int*>(esi) = 0x00937D4C;
    return esi;
}

// [0x00453E00] sub_00453E00 (27 bytes)
extern "C" void ext_0044E190();
extern "C" void ext_00453250();
extern "C" void __fastcall fn_00453E00(void* self) {
    ext_0044E190();
    if (*(reinterpret_cast<unsigned char*>(self) + 0xa9) != 0) {
        typedef void (__fastcall *Tail)(void*);
        reinterpret_cast<Tail>(ext_00453250)(self);
    }
}

// [0x00455F40] sub_00455F40 (27 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_00455CB0();

extern "C" __declspec(naked) int __cdecl fn_00455F40() {
    __asm {
        call ext_00455CB0
        test eax, eax
        jne fail
        call ext_004090C0
        test eax, eax
        jne fail
        mov eax, 1
        ret
    fail:
        xor eax, eax
        ret
    }
}

// [0x00453FC0] sub_00453FC0 (28 bytes)
extern "C" void ext_00451180();
extern "C" void ext_00453620();

extern "C" void __fastcall fn_00453FC0(void* self, int edx_unused, int a1) {
    typedef unsigned char (__fastcall *Fn1)(void*, int, int);
    typedef void (__fastcall *Fn2)(void*);
    if (reinterpret_cast<Fn1>(ext_00451180)(self, edx_unused, a1)) {
        reinterpret_cast<Fn2>(ext_00453620)(self);
    }
}

// [0x00458670] sub_00458670 (30 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_004584A0();

extern "C" __declspec(naked) void __fastcall fn_00458670(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp + 8]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0x54]
        call ext_004584A0
        pop esi
        ret 0xc
    }
}

// [0x00456250] sub_00456250 (33 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00456250(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x8c], 0
        je no_obj
        mov ecx, dword ptr [ecx + 0x90]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        call edx
        ret 0xc
    no_obj:
        call ext_006A5EA8
        ret 0xc
    }
}
