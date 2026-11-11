// Decompiled translation unit: src/Geometry/PlaneType.cpp

extern "C" void ext_006484E0();

// [0x005B1090] Geometry::PlaneType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void __stdcall fn_005B1090(void* self, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006484E0
        ret 0x8
    }
}

extern "C" void ext_005B3FF0();
extern "C" void ext_005B4010();
extern "C" void ext_00671F30();

// [0x005B4270] Geometry::PlaneType::vfunc_18 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B4270(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x271
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_271
        cmp eax, 0x37e
        je L_37e
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_37e:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B3FF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_271:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_005B4010
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
