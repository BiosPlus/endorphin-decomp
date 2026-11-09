// Decompiled translation unit: src/leaf/decompiled_4C0000.cpp

// [0x004CEA30] sub_004CEA30 (13 bytes)
extern "C" void __stdcall ext_004CE810(int value);

extern "C" void __fastcall fn_004CEA30(void* self) {
    ext_004CE810(*reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180));
}

// [0x004C4E80] sub_004C4E80 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C4E80(void* self, int edx_unused, float value) {
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x180) = value;
    ext_004C0340();
}

// [0x004CCC60] sub_004CCC60 (22 bytes)
extern "C" void ext_004CC9E0();
extern "C" void ext_0050BE20();

extern "C" __declspec(naked) void __fastcall fn_004CCC60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x14], 0
        je skip_004CCC60
        call ext_004CC9E0
    skip_004CCC60:
        mov ecx, esi
        pop esi
        jmp ext_0050BE20
    }
}
