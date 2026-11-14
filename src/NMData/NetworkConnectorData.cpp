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

extern "C" void ext_00526180();
extern "C" void ext_0041CF50();
extern "C" void ext_00870350();
extern "C" void ext_0065F450();
extern "C" int mem_00B599BC;

// [0x005261F0] NMData::NetworkConnectorData::vfunc_2 (342 bytes)
extern "C" __declspec(naked) void __fastcall fn_005261F0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x893af9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebp
        push esi
        xor eax, eax
        mov dword ptr [esp + 0x8], eax
        push edi
        mov edi, dword ptr [esp + 0x30]
        mov esi, ecx
        mov dword ptr [edi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [edi + 0x4], ecx
        cmp byte ptr [esi + 0xa0], al
        mov ebp, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0xc], 1
        push ebp
        je short L_else
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esi + 0x60]
        call ext_00526180
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x2c], 1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov byte ptr [esp + 0x28], 0
        je near ptr L_tail
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x10]
        push edx
        call eax
        jmp short L_tail
    L_else:
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esi + 0x38]
        call ext_00870350
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x28], 2
        je short L_skip1
        cmp ecx, dword ptr [mem_00B599BC]
        jne short L_test2
    L_skip1:
        push ebp
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [esi + 0x4c]
        call ext_00870350
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x2c], 3
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov byte ptr [esp + 0x28], 2
        je short L_load2
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x18]
        push edx
        call eax
    L_load2:
        mov ecx, dword ptr [esp + 0x14]
    L_test2:
        test ecx, ecx
        mov byte ptr [esp + 0x28], 0
        je short L_tail
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
    L_tail:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je short L_p
        cmp eax, dword ptr [mem_00B599BC]
        jne short L_end
    L_p:
        push ebp
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_0065F450
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x2c], 4
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov byte ptr [esp + 0x28], 0
        je short L_end
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x18]
        push eax
        call edx
    L_end:
        mov ecx, dword ptr [esp + 0x20]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 8
    }
}

extern "C" void ext_0065F550();
extern "C" void ext_008703F0();

// [0x005245A0] NMData::NetworkConnectorData::vfunc_7 (39 bytes)
extern "C" void __fastcall fn_005245A0(void* self, int edx_unused, void* a1) {
    typedef void (__thiscall *t_sub_008703F0)(void*, void*);
    typedef void (__thiscall *t_sub_0065F550)(void*, void*);
    ((t_sub_008703F0)ext_008703F0)((char*)self + 0x38, a1);
    ((t_sub_008703F0)ext_008703F0)((char*)self + 0x4c, a1);
    ((t_sub_0065F550)ext_0065F550)(self, a1);
}

extern "C" void ext_004275E0();
extern "C" void ext_00507D10();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_008703D0();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9EFE0;
extern "C" int mem_00A9F154;

// [0x00524C10] NMData::NetworkConnectorData::vfunc_21 (196 bytes)
extern "C" __declspec(naked) void __fastcall fn_00524C10(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, ecx
        call ext_00507D10
        mov eax, dword ptr [mem_00A9F838]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 0xa4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9EFE8]
        add esp, 0x8
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_00524C70
        cmp eax, 0xb53b30
        je loc_00524C70
        cmp eax, 0xb53ab0
        je loc_00524C70
        cmp eax, 0xb53a70
        je loc_00524C70
        cmp eax, 0xb53af0
        jne loc_00524C75
    loc_00524C70:
        mov eax, 0xb53b30
    loc_00524C75:
        mov ecx, dword ptr [mem_00A9EFE0]
        push ecx
        push eax
        lea ecx, [edi + 0x38]
        call ext_008703D0
        mov edx, dword ptr [mem_00A9F168]
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_00524CBA
        cmp eax, 0xb53b30
        je loc_00524CBA
        cmp eax, 0xb53ab0
        je loc_00524CBA
        cmp eax, 0xb53a70
        je loc_00524CBA
        cmp eax, 0xb53af0
        jne loc_00524CBF
    loc_00524CBA:
        mov eax, 0xb53b30
    loc_00524CBF:
        mov ecx, dword ptr [mem_00A9F154]
        push ecx
        push eax
        lea ecx, [edi + 0x4c]
        call ext_008703D0
        pop edi
        pop esi
        ret 0x4
    }
}
