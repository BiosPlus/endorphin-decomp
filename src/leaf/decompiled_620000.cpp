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
