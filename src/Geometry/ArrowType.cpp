// Decompiled translation unit: src/Geometry/ArrowType.cpp

// [0x005B4470] Geometry::ArrowType::vfunc_18 (61 bytes)
extern "C" void ext_005B3FF0();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005B4470(void* self) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x29e
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_005B4498
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
L_005B4498:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B3FF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
