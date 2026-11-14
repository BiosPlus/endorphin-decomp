// Decompiled translation unit: src/NMData/MagnetJointData.cpp

// [0x005F0D20] NMData::MagnetJointData::vfunc_8 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_005F0D20(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xec]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005F0D40] NMData::MagnetJointData::vfunc_59 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_005F0D40(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x96afe8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005EE590] NMData::MagnetJointData::vfunc_33 (104 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005EDFD0();
extern "C" __declspec(naked) void __fastcall fn_005EE590(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005EDFD0
        mov ecx, dword ptr [esi + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x180]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x184]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov dword ptr [esi + 0x2fc], 0x0
        mov eax, dword ptr [esi + 0x180]
        push 0x0
        push eax
        mov ecx, esi
        call ext_00587920
        mov ecx, dword ptr [esi + 0x184]
        push 0x0
        push ecx
        mov ecx, dword ptr [esi + 0x17c]
        call ext_00587920
        pop esi
        ret
    }
}

// [0x005F0FA0] NMData::MagnetJointData::vfunc_17_off_C (106 bytes)
extern "C" void ext_005F0AE0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void* __fastcall fn_005F0FA0(void* self) {
    __asm {
        push 0xffffffff
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x318
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x14], esi
        je loc_5f0fde
        mov ecx, eax
        call ext_005F0AE0
        mov esi, eax
    loc_5f0fde:
        mov eax, dword ptr [edi - 8]
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [edi - 8]
        mov dword ptr [esp + 0x14], 0xffffffff
        call edx
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0x148], al
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005EC320] NMData::MagnetJointData::vfunc_22 (225 bytes)
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_00640AA0();
extern "C" int mem_00A9F724;
extern "C" __declspec(naked) void* __fastcall fn_005EC320(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, ecx
        push 0x96afe8
        mov ecx, ebx
        call ext_006404E0
        mov edi, eax
        push edi
        mov ecx, esi
        call ext_005EB5A0
        push 0x96afd8
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x2fc]
        push ecx
        push eax
        call ext_00640AA0
        mov ecx, dword ptr [esi + 0x17c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        add esp, 0x8
        push edi
        call eax
        mov ecx, dword ptr [esi + 0x180]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push edi
        call eax
        mov ecx, dword ptr [esi + 0x184]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push edi
        call eax
        cmp dword ptr [esi + 0x190], 0x0
        je end_ec320
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je alt_ec320
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [esi + 0x178]
        push edx
        push eax
        call ext_00640A80
        add esp, 0x8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
    alt_ec320:
        mov eax, dword ptr [esi + 0x190]
        mov cl, byte ptr [eax + 0x178]
        cmp cl, byte ptr [esi + 0x178]
        je end_ec320
        mov edx, dword ptr [mem_00A9F724]
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x178]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
    end_ec320:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
    }
}
