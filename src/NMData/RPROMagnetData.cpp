// Decompiled translation unit: src/NMData/RPROMagnetData.cpp

// [0x00584F50] NMData::RPROMagnetData::vfunc_59 (35 bytes)
extern "C" int mem_00A9F1E8;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_00584F50(void* self, int edx_unused, void* sret) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1E8]
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

// [0x005EC2D0] NMData::RPROMagnetData::vfunc_22 (80 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F724;

extern "C" __declspec(naked) void* __fastcall fn_005EC2D0(void* self, int edx_unused, void* sret) {
    __asm {
        mov eax, dword ptr [mem_00A9F1E8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
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
        cmp byte ptr [esi + 0x178], 0
        jne done
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [esi + 0x178]
        push edx
        push eax
        call ext_00640A80
        add esp, 8
    done:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
    }
}
