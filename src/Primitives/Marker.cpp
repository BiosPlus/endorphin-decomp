// Decompiled translation unit: src/Primitives/Marker.cpp

// [0x0052F6F0] Primitives::Marker::vfunc_13 (25 bytes)
extern "C" void ext_00538550();

extern "C" __declspec(naked) void __fastcall fn_0052F6F0(void* self, int edx_unused, const float* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        push 0
        push 0
        push ecx
        add ecx, 0x3c
        fstp dword ptr [esp]
        call ext_00538550
        ret 4
    }
}

// [0x0053BDD0] Primitives::Marker::vfunc_28 (53 bytes)
extern "C" int mem_0092546C;
extern "C" int mem_00955998;
extern "C" int mem_00925520;
extern "C" int mem_0092552C;

extern "C" __declspec(naked) void __fastcall fn_0053BDD0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        call dword ptr [mem_0092546C]
        fld dword ptr [mem_00955998]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov eax, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x3c]
        push edx
        call eax
        call dword ptr [mem_0092552C]
        pop esi
        ret 4
    }
}
