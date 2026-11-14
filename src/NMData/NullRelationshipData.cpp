// Decompiled translation unit: src/NMData/NullRelationshipData.cpp

extern "C" int mem_00A9F118;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F724;
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_005B5780();
extern "C" void ext_005E0380();
extern "C" void ext_006A6C87();
extern "C" int mem_00B45C2C;
extern "C" int mem_00B45C24;
extern "C" void ext_005EEEF0();
extern "C" void ext_006A5C62();
extern "C" int mem_00B40640;

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

// [0x005E1830] NMData::NullRelationshipData::vfunc_54 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E1830(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a60ee
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00B45C2C], al
        push esi
        mov esi, ecx
        jne loc_5e1884
        or dword ptr [mem_00B45C2C], eax
        push 0x16
        mov ecx, 0xb45be0
        mov dword ptr [esp + 0x10], 0
        call ext_005B5780
        push 0x91e3e0
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0xc], -1

    loc_5e1884:
        push 0xb45be0
        mov ecx, esi
        call ext_005E0380
        mov al, byte ptr [esi + 0x178]
        mov ecx, dword ptr [esp + 4]
        mov byte ptr [mem_00B45C24], al
        mov eax, 0xb45be0
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x005F17B0] NMData::NullRelationshipData::vfunc_17_off_C (249 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F17B0(void* self) {
    __asm {
        push -0x1
        push 0x8a6b6b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push ebx
        push esi
        push edi
        push 0x2f8
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0xc], esi
        test esi, esi
        mov dword ptr [esp + 0x58], 0x0
        je loc_5f1824
        mov ecx, esi
        call ext_005EEEF0
        mov dword ptr [esi], 0x958674
        mov dword ptr [esi + 0x4], 0x95862c
        mov dword ptr [esi + 0x8], 0x9585ec
        mov dword ptr [esi + 0xc], 0x95859c
        mov dword ptr [esi + 0x150], 0x958584
        mov dword ptr [esi + 0x154], 0x95857c
        jmp loc_5f1826

    loc_5f1824:
        xor esi, esi

    loc_5f1826:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        lea ecx, [edi + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x5c], 0xffffffff
        call edx
        mov al, byte ptr [edi + 0x16c]
        mov byte ptr [esi + 0x178], al
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edi - 0x8]
        mov edx, dword ptr [edx + 0x10]
        push eax
        add edi, -0x8
        push 0x0
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call edx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax]
        push ecx
        lea ebx, [esi + 0x4]
        lea edx, [esp + 0x14]
        push edx
        push 0x0
        mov ecx, ebx
        call eax
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x4]
        push 0x0
        mov ecx, ebx
        call eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x20]
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esp + 0x50]
        mov byte ptr [esi + 0x148], al
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret
    }
}
