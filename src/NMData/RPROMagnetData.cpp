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

// [0x005E2470] NMData::RPROMagnetData::vfunc_54 (128 bytes)
extern "C" void __cdecl ext_005B5780();
extern "C" void __cdecl ext_005E0380();
extern "C" void __cdecl ext_006A6C87();
extern "C" int mem_00B45E0C;
extern "C" int mem_00B45E04;
extern "C" __declspec(naked) void __fastcall fn_005E2470(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a61ae
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00B45E0C], al
        push esi
        mov esi, ecx
        jne loc_5e24c4
        or dword ptr [mem_00B45E0C], eax
        push 0xc
        mov ecx, 0xb45dc0
        mov dword ptr [esp + 0x10], 0
        call ext_005B5780
        push 0x91e460
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0xc], -1

    loc_5e24c4:
        push 0xb45dc0
        mov ecx, esi
        call ext_005E0380
        mov al, byte ptr [esi + 0x178]
        mov ecx, dword ptr [esp + 4]
        mov byte ptr [mem_00B45E04], al
        mov eax, 0xb45dc0
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}
