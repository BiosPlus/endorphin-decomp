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

extern "C" int mem_00A9F738;
extern "C" int mem_00A9F9AC;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F5D0;
extern "C" int mem_00924FEC;
extern "C" int mem_00924EAC;
extern "C" int mem_0092500C;
extern "C" int mem_00925134;
extern "C" int mem_00A9F7F8;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F7FC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9EDA8;
extern "C" void ext_00412690();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_00427A60();
extern "C" void ext_0053F5F0();
extern "C" void ext_0058F630();
extern "C" void ext_005A35D0();
extern "C" void ext_005ED750();
extern "C" void ext_005EE9A0();
extern "C" void ext_005F28D0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();

// [0x005F2970] NMData::NullRelationshipData::vfunc_21 (1490 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F2970(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 87621bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 78h
        push ebx
        mov ebx, dword ptr [esp + 8Ch]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr [esp + 14h], ebp
        call ext_0058F630
        mov eax, dword ptr [mem_00A9F724]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je L_5F29F5
        cmp eax, 0B53B30h
        je L_5F29F5
        cmp eax, 0B53AB0h
        je L_5F29F5
        cmp eax, 0B53A70h
        je L_5F29F5
        cmp eax, 0B53AF0h
        je L_5F29F5
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        lea edx, [esp + 14h]
        mov dword ptr [esp + 14h], eax
        push edx
        lea eax, [ebp + 178h]
        push eax
        call ext_00427640
        add esp, 8
L_5F29F5:
        mov ecx, dword ptr [mem_00A9F738]
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        lea edx, [esp + 14h]
        mov dword ptr [esp + 14h], eax
        push edx
        lea eax, [ebp + 179h]
        push eax
        call ext_00427640
        mov ecx, dword ptr [mem_00A9F9AC]
        add esp, 8
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        lea edx, [esp + 14h]
        mov dword ptr [esp + 14h], eax
        push edx
        lea eax, [ebp + 238h]
        push eax
        call ext_0053F5F0
        add esp, 8
        lea ecx, [esp + 50h]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [mem_00A9F5D0]
        push ecx
        xor esi, esi
        mov ecx, ebx
        mov dword ptr [esp + 94h], esi
        call ext_0063EFE0
        push eax
        lea edx, [esp + 54h]
        push edx
        call ext_004275E0
        add esp, 8
        push 96AD94h
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je L_5F2ACB
        cmp eax, 0B53B30h
        je L_5F2ACB
        cmp eax, 0B53AB0h
        je L_5F2ACB
        cmp eax, 0B53A70h
        je L_5F2ACB
        cmp eax, 0B53AF0h
        je L_5F2ACB
        push 96AD94h
        mov ecx, ebx
        call ext_0063EFE0
        mov dword ptr [esp + 14h], eax
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 1ch]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [esp + 20h]
        add esp, 8
        mov dword ptr [ebp + 1E0h], edx
L_5F2ACB:
        push 96AD84h
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je L_5F2B16
        cmp eax, 0B53B30h
        je L_5F2B16
        cmp eax, 0B53AB0h
        je L_5F2B16
        cmp eax, 0B53A70h
        je L_5F2B16
        cmp eax, 0B53AF0h
        je L_5F2B16
        push 96AD84h
        mov ecx, ebx
        call ext_0063EFE0
        push eax
        lea eax, [ebp + 1E4h]
        push eax
        call ext_004275E0
        add esp, 8
L_5F2B16:
        push 1
        push esi
        push 96AD78h
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_5F2B48
        cmp eax, 0B53B30h
        je L_5F2B48
        cmp eax, 0B53AB0h
        je L_5F2B48
        cmp eax, 0B53A70h
        je L_5F2B48
        cmp eax, 0B53AF0h
        jne L_5F2B4D
L_5F2B48:
        mov eax, 0B53B30h
L_5F2B4D:
        push eax
        lea ecx, [esp + 48h]
        push ecx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [ebp + 210h]
        add esp, 8
        fld dword ptr [eax + 4]
        push 1
        fstp dword ptr [ebp + 214h]
        push esi
        fld dword ptr [eax + 8]
        push 96AD68h
        mov ecx, ebx
        fstp dword ptr [ebp + 218h]
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_5F2BA7
        cmp eax, 0B53B30h
        je L_5F2BA7
        cmp eax, 0B53AB0h
        je L_5F2BA7
        cmp eax, 0B53A70h
        je L_5F2BA7
        cmp eax, 0B53AF0h
        jne L_5F2BAC
L_5F2BA7:
        mov eax, 0B53B30h
L_5F2BAC:
        push eax
        lea edx, [esp + 48h]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [ebp + 21Ch]
        add esp, 8
        fld dword ptr [eax + 4]
        lea ecx, [esp + 50h]
        fstp dword ptr [ebp + 220h]
        fld dword ptr [eax + 8]
        fstp dword ptr [ebp + 224h]
        call dword ptr [mem_00924FEC]
        test al, al
        je L_5F2BF1
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 10Ch]
        mov ecx, ebp
        call edx
        jmp L_5F2C42
L_5F2BF1:
        lea ecx, [esp + 50h]
        call dword ptr [mem_00924EAC]
        test eax, eax
        jbe L_5F2C42
        fldz
        lea edi, [ebp + 168h]
        fstp dword ptr [esp + 1ch]
        jmp L_5F2C10
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_5F2C10:
        push esi
        lea ecx, [esp + 54h]
        call dword ptr [mem_0092500C]
        movsx eax, byte ptr [eax]
        lea ecx, [esp + 18h]
        sub eax, 30h
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 1ch], eax
        call ext_00412690
        lea ecx, [esp + 50h]
        add esi, 1
        call dword ptr [mem_00924EAC]
        cmp esi, eax
        jb L_5F2C10
L_5F2C42:
        mov esi, dword ptr [ebx + 40h]
        cmp esi, dword ptr [ebx + 44h]
        lea eax, [ebx + 3Ch]
        jbe L_5F2C53
        call dword ptr [mem_00925134]
L_5F2C53:
        mov eax, dword ptr [esp + 98h]
        mov edi, dword ptr [eax + 44h]
        add eax, 3Ch
        cmp dword ptr [eax + 4], edi
        mov ebx, esi
        mov dword ptr [esp + 18h], edi
        jbe L_5F2C71
        call dword ptr [mem_00925134]
L_5F2C71:
        mov esi, dword ptr [esp + 98h]
        add esi, 3Ch
        test esi, esi
        je L_5F2C83
        cmp esi, esi
        je L_5F2C89
L_5F2C83:
        call dword ptr [mem_00925134]
L_5F2C89:
        cmp ebx, edi
        jae L_5F2D5D
        test esi, esi
        jne L_5F2C9B
        call dword ptr [mem_00925134]
L_5F2C9B:
        cmp ebx, dword ptr [esi + 8]
        jb L_5F2CA6
        call dword ptr [mem_00925134]
L_5F2CA6:
        mov esi, dword ptr [ebx]
        mov edx, dword ptr [mem_00A9F7F8]
        push edx
        lea edi, [esi + 4]
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_5F2CDE
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        lea ecx, [esp + 6ch]
        push ecx
        mov ecx, esi
        call edx
        mov byte ptr [esp + 90h], 1
        lea ecx, [ebp + 198h]
        jmp L_5F2D23
L_5F2CDE:
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        jne L_5F2D07
        mov ecx, dword ptr [mem_00A9F7FC]
        push ecx
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_5F2D3C
L_5F2D07:
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 8]
        lea eax, [esp + 6ch]
        push eax
        mov ecx, esi
        call edx
        mov byte ptr [esp + 90h], 2
        lea ecx, [ebp + 1B4h]
L_5F2D23:
        push eax
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 6ch]
        mov byte ptr [esp + 90h], 0
        call dword ptr [mem_00924FF4]
L_5F2D3C:
        mov eax, dword ptr [esp + 98h]
        add eax, 3Ch
        cmp ebx, dword ptr [eax + 8]
        jb L_5F2D51
        call dword ptr [mem_00925134]
L_5F2D51:
        mov edi, dword ptr [esp + 18h]
        add ebx, 4
        jmp L_5F2C71
L_5F2D5D:
        cmp dword ptr [ebp + 18Ch], 0
        je L_5F2F12
        mov esi, dword ptr [esp + 98h]
        mov edi, dword ptr [esi + 28h]
        mov ebx, dword ptr [mem_00925134]
        add esi, 24h
        cmp edi, dword ptr [esi + 8]
        mov dword ptr [esp + 18h], esi
        jbe L_5F2D88
        call ebx
L_5F2D88:
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 24h], esi
        mov dword ptr [esp + 28h], edi
        call ext_00427A60
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_5F2DA0:
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L_5F2DAA
        call ebx
L_5F2DAA:
        lea ecx, [esp + 38h]
        mov dword ptr [esp + 38h], esi
        mov dword ptr [esp + 3ch], esi
        mov dword ptr [esp + 40h], edi
        call ext_00427A60
        mov esi, dword ptr [esp + 24h]
        test esi, esi
        je L_5F2DCD
        cmp esi, dword ptr [esp + 3ch]
        je L_5F2DCF
L_5F2DCD:
        call ebx
L_5F2DCF:
        mov edi, dword ptr [esp + 28h]
        cmp edi, dword ptr [esp + 40h]
        je L_5F2F0B
        test esi, esi
        jne L_5F2DE3
        call ebx
L_5F2DE3:
        cmp edi, dword ptr [esi + 8]
        jb L_5F2DEA
        call ebx
L_5F2DEA:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [mem_00A9EDA8]
        push eax
        lea ecx, [esi + 4]
        push ecx
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_5F2ED7
        mov edi, dword ptr [mem_00925134]
        lea ebx, [esi + 24h]
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        jbe L_5F2E1A
        call edi
L_5F2E1A:
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 34h], esi
        call ext_00427A60
        nop
L_5F2E30:
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        jbe L_5F2E3A
        call edi
L_5F2E3A:
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 44h], ebx
        mov dword ptr [esp + 48h], ebx
        mov dword ptr [esp + 4ch], esi
        call ext_00427A60
        mov ebp, dword ptr [esp + 30h]
        test ebp, ebp
        je L_5F2E5D
        cmp ebp, dword ptr [esp + 48h]
        je L_5F2E5F
L_5F2E5D:
        call edi
L_5F2E5F:
        mov edi, dword ptr [esp + 34h]
        cmp edi, dword ptr [esp + 4ch]
        je L_5F2ED7
        test ebp, ebp
        jne L_5F2E73
        call dword ptr [mem_00925134]
L_5F2E73:
        cmp edi, dword ptr [ebp + 8]
        jb L_5F2E7E
        call dword ptr [mem_00925134]
L_5F2E7E:
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx + 18Ch]
        mov eax, dword ptr [edi]
        push ecx
        push edx
        push eax
        call ext_005F28D0
        mov esi, eax
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax + 18Ch]
        add esp, 0ch
        push esi
        call ext_005A35D0
        mov ecx, dword ptr [esp + 10h]
        push esi
        call ext_005EE9A0
        cmp edi, dword ptr [ebp + 8]
        jb L_5F2EBC
        call dword ptr [mem_00925134]
L_5F2EBC:
        add edi, 4
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 34h], edi
        call ext_00427A60
        mov edi, dword ptr [mem_00925134]
        jmp L_5F2E30
L_5F2ED7:
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        cmp edx, dword ptr [ecx + 8]
        jb L_5F2EEA
        call dword ptr [mem_00925134]
L_5F2EEA:
        add dword ptr [esp + 28h], 4
        lea ecx, [esp + 20h]
        call ext_00427A60
        mov ebx, dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 10h]
        jmp L_5F2DA0
L_5F2F0B:
        mov ecx, ebp
        call ext_005ED750
L_5F2F12:
        lea ecx, [esp + 50h]
        mov dword ptr [esp + 90h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 88h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 84h
        ret 4
    }
}
