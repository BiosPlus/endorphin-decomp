// Decompiled translation unit: src/leaf/decompiled_4B0000.cpp

extern "C" int mem_00924FE8;

// [0x004B6CC0] sub_004B6CC0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6CC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_00924FE8]
        fldz
        fst dword ptr [esi + 0x1c]
        mov eax, esi
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x2c]
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

extern "C" int mem_00940694;
extern "C" int mem_00943350;

// [0x004B6CF0] sub_004B6CF0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6CF0(void* self) {
    __asm {
        fld dword ptr [mem_00940694]
        fstp dword ptr [ecx + 0x1c]
        fld dword ptr [mem_00943350]
        fstp dword ptr [ecx + 0x20]
        fldz
        fst dword ptr [ecx + 0x24]
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x2c]
        fstp dword ptr [ecx + 0x30]
        ret
    }
}
