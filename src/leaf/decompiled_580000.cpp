// Decompiled translation unit: src/leaf/decompiled_580000.cpp

// [0x0058CFB0] sub_0058CFB0 (8 bytes)
extern "C" void ext_0058B230();

extern "C" __declspec(naked) void __cdecl fn_0058CFB0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax]
        ret
    }
}

// [0x0058CFC0] sub_0058CFC0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFC0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x0058CFD0] sub_0058CFD0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFD0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 8]
        ret
    }
}

// [0x0058F570] sub_0058F570 (16 bytes)
extern "C" void ext_0058B4E0();

extern "C" __declspec(naked) void __fastcall fn_0058F570(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B4E0
        ret 4
    }
}

// [0x0058F580] sub_0058F580 (16 bytes)
extern "C" void __fastcall ext_0058B540(void* self, int edx_unused, float a1);

extern "C" void __fastcall fn_0058F580(void* self, int edx_unused, float a1) {
    ext_0058B540(self, edx_unused, a1);
}

// [0x0058F590] sub_0058F590 (16 bytes)
extern "C" void ext_0058B5A0();

extern "C" __declspec(naked) void __fastcall fn_0058F590(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B5A0
        ret 4
    }
}

// [0x0058F600] sub_0058F600 (16 bytes)
extern "C" void ext_0058ABC0();

extern "C" __declspec(naked) void __fastcall fn_0058F600(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058ABC0
        ret 4
    }
}

// [0x0058F610] sub_0058F610 (16 bytes)
extern "C" void ext_0058ACA0();
extern "C" void __fastcall fn_0058F610(void* self, int edx_unused, float a1) {
    ((void (__stdcall*)(float))ext_0058ACA0)(a1);
}

// [0x0058F620] sub_0058F620 (16 bytes)
extern "C" void ext_0058AD80();

extern "C" __declspec(naked) void __fastcall fn_0058F620(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058AD80
        ret 4
    }
}

// [0x00587450] sub_00587450 (18 bytes)
extern "C" void ext_00586D00();

extern "C" void __fastcall fn_00587450(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x94) = a1;
    ext_00586D00();
}

// [0x0058F550] sub_0058F550 (27 bytes)
extern "C" void ext_0058F4C0();

extern "C" __declspec(naked) void __fastcall fn_0058F550(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0058F4C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00584A10] sub_00584A10 (34 bytes)
extern "C" int mem_00924FC8;
extern "C" __declspec(naked) void* __fastcall fn_00584A10(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x30]
        push 0x928b5d
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        mov eax, edi
        jne done
        lea eax, [esi + 0x14]
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00584BD0] sub_00584BD0 (34 bytes)
extern "C" int mem_00924FC8;
extern "C" __declspec(naked) void* __fastcall fn_00584BD0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x4c]
        push 0x928b5d
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        mov eax, edi
        jne short done_00584BD0
        lea eax, [esi + 0x14]
    done_00584BD0:
        pop edi
        pop esi
        ret
    }
}

// [0x0058A170] sub_0058A170 (35 bytes)
extern "C" int mem_00A9F3AC;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0058A170(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F3AC]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" int mem_00B40644;

// [0x0058AB30] sub_0058AB30 (44 bytes)
extern "C" __declspec(naked) float __fastcall fn_0058AB30(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x0058AB60] sub_0058AB60 (44 bytes)
extern "C" int mem_00B40644;
extern "C" __declspec(naked) float __fastcall fn_0058AB60(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x34]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x0058AB90] sub_0058AB90 (44 bytes)
extern "C" __declspec(naked) float __fastcall fn_0058AB90(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x38]
        pop esi
        add esp, 0x40
        ret
    }
}
