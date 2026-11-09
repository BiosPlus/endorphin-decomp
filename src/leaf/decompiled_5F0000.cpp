// Decompiled translation unit: src/leaf/decompiled_5F0000.cpp

// [0x005F3570] sub_005F3570 (24 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_005F34E0();

extern "C" __declspec(naked) void __fastcall fn_005F3570(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x945310
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_005F34E0
        pop ecx
        ret
    }
}

// [0x005F5BA0] sub_005F5BA0 (25 bytes)
extern "C" void ext_005F5240();
extern "C" void ext_005F5470();

extern "C" __declspec(naked) void __fastcall fn_005F5BA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005F5240
        push eax
        mov ecx, esi
        call ext_005F5470
        pop esi
        ret 4
    }
}

// [0x005F53E0] sub_005F53E0 (44 bytes)
extern "C" void __fastcall fn_005F53E0(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    *(float*)(p + 0x170) = src[0];
    *(float*)(p + 0x174) = src[1];
    *(float*)(p + 0x178) = src[2];
    char* sub = *(char**)(p + 0x10);
    if (sub) {
        sub[0x4] = 1;
    }
}

// [0x005F5670] sub_005F5670 (44 bytes)
extern "C" int mem_00B40640;

extern "C" void __fastcall fn_005F5670(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    char* obj = *(char**)(p + 0x4);
    typedef char* (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(obj + 0xc);
    char* dst = fn(p + 0x4, mem_00B40640);
    dst += 0x30;
    *(float*)(dst + 0x0) = src[0];
    *(float*)(dst + 0x4) = src[1];
    *(float*)(dst + 0x8) = src[2];
}
