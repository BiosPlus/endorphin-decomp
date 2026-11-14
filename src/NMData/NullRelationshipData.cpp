// Decompiled translation unit: src/NMData/NullRelationshipData.cpp

extern "C" int mem_00A9F118;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F724;
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055DE20(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F118]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x005EBE00] NMData::NullRelationshipData::vfunc_22 (156 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005EBE00(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr [mem_00A9F118]
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, ebx
        call ext_006404E0
        mov edi, eax
        push edi
        mov ecx, esi
        call ext_005EB5A0
        cmp dword ptr [esi + 0x190], 0
        je loc_5ebe94
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je loc_5ebe61
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [esi + 0x178]
        push edx
        push eax
        call ext_00640A80
        add esp, 8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4

    loc_5ebe61:
        mov eax, dword ptr [esi + 0x190]
        mov cl, byte ptr [eax + 0x178]
        cmp cl, byte ptr [esi + 0x178]
        je loc_5ebe94
        mov edx, dword ptr [mem_00A9F724]
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x178]
        push ecx
        push eax
        call ext_00640A80
        add esp, 8

    loc_5ebe94:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
    }
}
