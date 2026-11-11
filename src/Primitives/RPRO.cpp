// Decompiled translation unit: src/Primitives/RPRO.cpp

extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;

// [0x0053C1A0] Primitives::RPRO::vfunc_28 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053C1A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push 0x4
        mov esi, ecx
        call dword ptr [mem_0092546C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x44]
        push eax
        call dword ptr [mem_009253C8]
        mov edx, dword ptr [esi + 0x108]
        mov eax, dword ptr [edx + 0x58]
        lea ecx, [esi + 0x108]
        push 0x1
        call eax
        call dword ptr [mem_00925404]
        call dword ptr [mem_0092552C]
        pop esi
        ret 0x4
    }
}

// [0x0053C150] Primitives::RPRO::vfunc_29 (75 bytes)
extern "C" void ext_0053AD10();

extern "C" __declspec(naked) void __fastcall fn_0053C150(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053AD10
        fld1
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x44]
        fldz
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x68]
        fst dword ptr [esi + 0x70]
        fst dword ptr [esi + 0x74]
        fst dword ptr [esi + 0x78]
        fstp dword ptr [esi + 0x7c]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x6c]
        fstp dword ptr [esi + 0x80]
        mov dword ptr [esi + 0x40], 0x0
        pop esi
        ret
    }
}
