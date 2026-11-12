// Decompiled translation unit: src/NMData/NetworkConnectorData.cpp

extern "C" void ext_00525E80();
extern "C" void ext_00526E40();

// [0x005261E0] NMData::NetworkConnectorData::vfunc_27 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_005261E0(void* self) {
    __asm {
        push ecx
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x60 // add ecx, 0x60
        call ext_00525E80
        ret
    }
}

// [0x005270D0] NMData::NetworkConnectorData::vfunc_26 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_005270D0(void* self) {
    __asm {
        push ecx
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x60 // add ecx, 0x60
        call ext_00526E40
        ret
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_005049B0();
extern "C" void ext_005049F0();
extern "C" void ext_00661650();
extern "C" void ext_00870320();
extern "C" int mem_00A9EFE8;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9F168;
extern "C" int mem_00A9EDB4;

// [0x00524CE0] NMData::NetworkConnectorData::vfunc_13 (184 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00524CE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EFE8]
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0
        call ebx
        add esp, 8
        test al, al
        je short label_1
        mov edi, dword ptr [esp + 0x14]
        push edi
        lea ecx, [esi + 0x38]
        call ext_00870320
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_1:
        mov ecx, dword ptr [mem_00A9F168]
        push ecx
        push edi
        call ebx
        add esp, 8
        test al, al
        je short label_2
        mov edi, dword ptr [esp + 0x14]
        push edi
        lea ecx, [esi + 0x4c]
        call ext_00870320
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_2:
        mov edx, dword ptr [mem_00A9EDB4]
        push edx
        push edi
        call ebx
        add esp, 8
        test al, al
        je short label_3
        add esi, 0x20
        mov ecx, esi
        call ext_005049F0
        test al, al
        jne short label_3
        push 0
        mov ecx, esi
        call ext_005049B0
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_3:
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_0046F7D0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8
    }
}
