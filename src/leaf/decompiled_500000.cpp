// Decompiled translation unit: src/leaf/decompiled_500000.cpp

// [0x00504930] sub_00504930 (10 bytes)
extern "C" void ext_00527280();
extern "C" void ext_005220C0();

extern "C" __declspec(naked) void __cdecl fn_00504930() {
    __asm {
        call ext_00527280
        jmp ext_005220C0
    }
}

// [0x00506E10] sub_00506E10 (16 bytes)
extern "C" void __cdecl ext_00506BD0(void* a, void* b, int c);

extern "C" void __fastcall fn_00506E10(void* self) {
    ext_00506BD0((char*)self + 4, self, 1);
}

// [0x00504970] sub_00504970 (26 bytes)
extern "C" void ext_00516EB0();

extern "C" __declspec(naked) void* __fastcall fn_00504970(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x30]
        test ecx, ecx
        je short zero_ret
        push eax
        call ext_00516EB0
        test eax, eax
        je short zero_ret
        add eax, 0x20
        ret
zero_ret:
        xor eax, eax
        ret
    }
}

// [0x0050D7A0] sub_0050D7A0 (26 bytes)
extern "C" int mem_00A9F178;
extern "C" void __cdecl ext_0050D360(int a, void* b, int c);

extern "C" void __fastcall fn_0050D7A0(void* self, int edx_unused, int a1) {
    ext_0050D360(a1, (char*)self + 4, mem_00A9F178);
}

// [0x0050D0B0] sub_0050D0B0 (28 bytes)
extern "C" void __cdecl ext_0050CE30(int a, void* b, int c, int d);

extern "C" void __fastcall fn_0050D0B0(void* self, int edx_unused, int a1) {
    ext_0050CE30(a1, (char*)self + 4, mem_00A9F178, 1);
}

// [0x00500120] sub_00500120 (35 bytes)
extern "C" int mem_00AEB2D8;
extern "C" int mem_00AEB2D4;
extern "C" int* __cdecl fn_00500120() {
    if (!(mem_00AEB2D8 & 1)) {
        mem_00AEB2D8 |= 1;
        mem_00AEB2D4 = 0x94EC3C;
    }
    return &mem_00AEB2D4;
}

// [0x005054E0] sub_005054E0 (35 bytes)
extern "C" int mem_00AEBB78;
extern "C" int mem_00AEBB74;

extern "C" void* __cdecl fn_005054E0() {
    if (!(*(unsigned char*)&mem_00AEBB78 & 1)) {
        mem_00AEBB78 |= 1;
        mem_00AEBB74 = 0x94f0e8;
    }
    return &mem_00AEBB74;
}
