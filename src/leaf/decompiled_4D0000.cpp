// Decompiled translation unit: src/leaf/decompiled_4D0000.cpp

extern "C" int mem_00924FF0;

// [0x004DDE10] sub_004DDE10 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DDE10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        push 0
        push 0
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi + 0x8]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004DE440] sub_004DE440 (12 bytes)
extern "C" void ext_004DE160();

extern "C" __declspec(naked) void __fastcall fn_004DE440(void* self) {
    __asm {
        call ext_004DE160
        add eax, dword ptr [ecx + 0x9d0]
        ret
    }
}

// [0x004D0E00] sub_004D0E00 (16 bytes)
extern "C" void ext_004D0B60();

extern "C" __declspec(naked) void __fastcall fn_004D0E00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x188]
        push eax
        call ext_004D0B60
        add esp, 0x4
        ret
    }
}

// [0x004D3B30] sub_004D3B30 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B30(unsigned char* self, int edx_unused, unsigned char a1) {
    self[0x192] = a1;
    ext_004C0340();
}

// [0x004D3B50] sub_004D3B50 (18 bytes)
extern "C" void __fastcall fn_004D3B50(void* self, int edx_unused, int a1) {
    *(unsigned char*)((char*)self + 0x193) = (unsigned char)a1;
    ext_004C0340();
}

// [0x004D3B70] sub_004D3B70 (18 bytes)
extern "C" void __fastcall fn_004D3B70(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x344) = a1;
    ext_004C0340();
}

// [0x004D3B90] sub_004D3B90 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B90(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x340) = a1;
    ext_004C0340();
}

// [0x004D3BB0] sub_004D3BB0 (18 bytes)
extern "C" void ext_004C0340();
extern "C" void __fastcall fn_004D3BB0(void* self, int edx_unused, int value) {
    (void)edx_unused;
    *(int*)((char*)self + 0x394) = value;
    ext_004C0340();
}

// [0x004D3BD0] sub_004D3BD0 (18 bytes)
extern "C" void __fastcall fn_004D3BD0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x194) = a1;
    ext_004C0340();
}

// [0x004D3BF0] sub_004D3BF0 (18 bytes)
extern "C" void __fastcall fn_004D3BF0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x195) = a1;
    ext_004C0340();
}
