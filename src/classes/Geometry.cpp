// Decompiled translation unit: src/classes/Geometry.cpp

// [0x005B5C30] Geometry::vfunc_15 (67 bytes)
extern "C" void ext_005B4130();

extern "C" __declspec(naked) int __fastcall fn_005B5C30(void* self, int a2, int a1) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        cmp edx, 0x361
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_005B5C62
        mov eax, dword ptr [ecx + 0xc]
        push edi
        mov edi, dword ptr [eax]
        push ecx
        push edx
        mov ecx, eax
        mov eax, dword ptr [edi + 0x48]
        push esi
        call eax
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_005B5C62:
        push ecx
        push esi
        call ext_005B4130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
