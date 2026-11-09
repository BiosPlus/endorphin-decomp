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

extern "C" int mem_00A3849C;
extern "C" int mem_00A384A0;
extern "C" int mem_00A384A4;

// [0x004B7030] sub_004B7030 (33 bytes)
extern "C" __declspec(naked) void __stdcall fn_004B7030(void* out) {
    __asm {
        fld dword ptr [mem_00A3849C]
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [mem_00A384A0]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [mem_00A384A4]
        fstp dword ptr [eax + 0x8]
        ret 0x4
    }
}

// [0x004BA040] sub_004BA040 (26 bytes)
extern "C" void ext_006A5C5C(void* p);
extern "C" int mem_00924FF4;

extern "C" void __fastcall fn_004BA040(void* self) {
    void* p = *(void**)self;
    if (p) {
        ((void (__fastcall*)(void*))mem_00924FF4)(p);
        ext_006A5C5C(p);
    }
}

// [0x004B01C0] sub_004B01C0 (27 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_004B01C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x250
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}

extern "C" void ext_005A6300();

// [0x004B0820] sub_004B0820 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0820(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x250
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}
