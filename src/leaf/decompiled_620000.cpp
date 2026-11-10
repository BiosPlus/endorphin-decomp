// Decompiled translation unit: src/leaf/decompiled_620000.cpp

// [0x00627510] sub_00627510 (27 bytes)
extern "C" void ext_00647F20();

extern "C" __declspec(naked) void __fastcall fn_00627510(void* self) {
    __asm {
        lea eax, [ecx + 0x54]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        mov dword ptr [esp + 4], eax
        jmp ext_00647F20
    }
}

// [0x006294F0] sub_006294F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006294F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x20c]
        mov ecx, dword ptr [ecx + 0x234]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        push 0x0
        call eax
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

// [0x00624630] sub_00624630 (16 bytes)
extern "C" void ext_00624540();
extern "C" void ext_00624590();

extern "C" __declspec(naked) void __fastcall fn_00624630(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00624540
        mov ecx, esi
        pop esi
        jmp ext_00624590
    }
}

// [0x00629DA0] sub_00629DA0 (18 bytes)
extern "C" void __fastcall ext_006203B0(void* self);
extern "C" int mem_00976CAC;

extern "C" void* __fastcall fn_00629DA0(void* self) {
    ext_006203B0(self);
    *(int*)self = (int)&mem_00976CAC;
    return self;
}

// [0x0062E360] sub_0062E360 (18 bytes)
extern "C" void __fastcall ext_0062E290(void* self);
extern "C" int mem_0097961C;

extern "C" void* __fastcall fn_0062E360(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_0097961C;
    return self;
}

// [0x0062E380] sub_0062E380 (18 bytes)
extern "C" void __fastcall ext_0062E290(void* self);
extern "C" int mem_00979694;

extern "C" void* __fastcall fn_0062E380(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_00979694;
    return self;
}

// [0x0062E3A0] sub_0062E3A0 (18 bytes)
extern "C" int mem_0097970C;

extern "C" void* __fastcall fn_0062E3A0(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_0097970C;
    return self;
}

// [0x00629DC0] sub_00629DC0 (20 bytes)
extern "C" void* ext_00594000();
extern "C" float __fastcall ext_00594010(void* a);
extern "C" void __fastcall fn_00629DC0(void* self) {
    void* p = ext_00594000();
    float v = ext_00594010(p);
    *(float*)((char*)self + 0x28) = v;
}

// [0x00629DF0] sub_00629DF0 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629DF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

// [0x006271D0] sub_006271D0 (25 bytes)
extern "C" void ext_00647E00();

extern "C" __declspec(naked) void __fastcall fn_006271D0(void* self) {
    __asm {
        lea eax, [ecx + 0x30]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        push eax
        call ext_00647E00
        ret
    }
}

// [0x00627280] sub_00627280 (25 bytes)
extern "C" void ext_00647E20();

extern "C" __declspec(naked) void __fastcall fn_00627280(void* self) {
    __asm {
        lea eax, [ecx + 0x30]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        push eax
        call ext_00647E20
        ret
    }
}

// [0x006294D0] sub_006294D0 (25 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void __fastcall fn_006294D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        mov dword ptr [esi], 0x978154
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00629E20] sub_00629E20 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629E20(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        mov dword ptr [esi], 0x9785c4
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00629E60] sub_00629E60 (26 bytes)
extern "C" void* __fastcall fn_00629E60(void* self) {
    ext_006203B0(self);
    *(float*)((char*)self + 0x30) = 0.0f;
    *(int*)self = 0x976D1C;
    *(float*)((char*)self + 0x2C) = 0.0f;
    return self;
}

// [0x00629EB0] sub_00629EB0 (26 bytes)
extern "C" void* ext_00594000();
extern "C" float __fastcall ext_00594010(void* a);
extern "C" void __fastcall fn_00629EB0(void* self, int edx_unused, float a1) {
    void* p = ext_00594000();
    float v = ext_00594010(p);
    *(float*)((char*)self + 0x30) = v - a1;
}

// [0x00629F10] sub_00629F10 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629F10(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x38]
        pop esi
        ret 0x4
    }
}

// [0x00621720] sub_00621720 (27 bytes)
extern "C" void ext_00621680();

extern "C" __declspec(naked) void __fastcall fn_00621720(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00621680
        add esp, 0x10
        ret 8
    }
}

// [0x0062C0E0] sub_0062C0E0 (27 bytes)
extern "C" void ext_0062C010();

extern "C" __declspec(naked) void __fastcall fn_0062C0E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0062C010
        add esp, 0x10
        ret 0x8
    }
}

// [0x00629E80] sub_00629E80 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629E80(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x28]
        fsub dword ptr [esi + 0x30]
        fstp dword ptr [esi + 0x2c]
        pop esi
        pop ecx
        ret
    }
}

// [0x00629EE0] sub_00629EE0 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629EE0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x30]
        fsub dword ptr [esi + 0x38]
        fstp dword ptr [esi + 0x34]
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_00647F00();

// [0x00627450] sub_00627450 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00627450(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x28]
        mov ecx, dword ptr [eax + 0x158]
        mov ecx, dword ptr [ecx + 0xac]
        call ext_00647F00
        add edi, 0x60
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        ret
    }
}

// [0x00622290] sub_00622290 (41 bytes)
extern "C" int mem_00976FC4;
extern "C" __declspec(naked) void __fastcall fn_00622290(void* self) {
    __asm {
        fldz
        mov eax, ecx
        fst dword ptr [eax + 0x4]
        mov dword ptr [eax], offset mem_00976FC4
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x28]
        ret
    }
}

// [0x00624EE0] sub_00624EE0 (42 bytes)
extern "C" __declspec(naked) int __stdcall fn_00624EE0(const unsigned int* a, const unsigned int* b) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [edx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        cmp ecx, eax
        ja L_ret1
        jb L_ret0
        mov eax, dword ptr [edx + 0x4]
        cmp eax, dword ptr [esi + 0x4]
        jb L_ret1
    L_ret0:
        xor eax, eax
        pop esi
        ret 0x8
    L_ret1:
        mov eax, 0x1
        pop esi
        ret 0x8
    }
}

// [0x00626770] sub_00626770 (54 bytes)
extern "C" int mem_00924FC0;
extern "C" int mem_00A97F70;

extern "C" __declspec(naked) int __cdecl fn_00626770(void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor esi, esi
        nop
    loop_top:
        mov eax, dword ptr mem_00A97F70[esi*4]
        push eax
        push edi
        call ebx
        add esp, 8
        test al, al
        jne found
        add esi, 1
        cmp esi, 9
        jl loop_top
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    found:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}

// [0x0062B1F0] sub_0062B1F0 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_005FF040();
extern "C" int mem_00978F64;

extern "C" __declspec(naked) void __fastcall fn_0062B1F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], offset mem_00978F64
        mov eax, dword ptr [esi + 0x34]
        test eax, eax
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
skip:
        mov dword ptr [esi + 0x34], 0
        mov dword ptr [esi + 0x38], 0
        mov dword ptr [esi + 0x3c], 0
        mov ecx, esi
        pop esi
        jmp ext_005FF040
    }
}

// [0x0062CCF0] sub_0062CCF0 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062CCF0(void* self) {
    __asm {
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        __asm _emit 0xC7 __asm _emit 0x06 __asm _emit 0xA4 __asm _emit 0x91 __asm _emit 0x97 __asm _emit 0x00 // mov dword ptr [esi], 0x9791a4
        __asm _emit 0x8B __asm _emit 0x46 __asm _emit 0x2C // mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x74 __asm _emit 0x09 // je +9
        __asm _emit 0x50 // push eax
        call ext_006A5C5C
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x04 // add esp, 0x4
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x2C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x2c], 0
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x34], 0
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        pop esi
        jmp ext_005FF040
    }
}
