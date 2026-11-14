// Decompiled translation unit: src/NMData/ValuePtrData.cpp

// [0x00682C20] NMData::ValuePtrData::vfunc_19 (70 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) int __fastcall fn_00682C20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4c]
        test eax, eax
        je ret_arg
        mov edx, dword ptr [eax]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        add ecx, 0x48
        push 0x0
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je ret_arg
        xor eax, eax
        cmp dword ptr [esp + 0x4], 0x67
        sete al
        add eax, 0x66
        ret 0x4
ret_arg:
        mov eax, dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00682C70] NMData::ValuePtrData::vfunc_14 (110 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) int __fastcall fn_00682C70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x67
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je do_cast
        cmp eax, 0x66
        jne fallback
do_cast:
        mov eax, dword ptr [ecx + 0x4c]
        test eax, eax
        je fallback
        mov edx, dword ptr [eax]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        add ecx, 0x48
        push 0x0
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je fallback
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
fallback:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00685F80] NMData::ValuePtrData::vfunc_15 (172 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_006836F0();
extern "C" void ext_00685BA0();
extern "C" void ext_00685BC0();
extern "C" void ext_00685BE0();
extern "C" void ext_00685C00();

extern "C" __declspec(naked) void* __fastcall fn_00685F80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x0c]
        cmp eax, 0x2f6
        push esi
        mov dword ptr [esp + 0x4], 0
        jg short L_fe2
        je short L_fcd
        sub eax, 0x280
        je short L_fb8
        sub eax, 0x54
        jne short L_fee
    L_fa3:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BA0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fb8:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BE0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fcd:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685C00
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fe2:
        sub eax, 0x361
        je short L_17
        sub eax, 0x25
        je short L_02
    L_fee:
        mov esi, dword ptr [esp + 0x0c]
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_02:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_006836F0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_17:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BC0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00682CE0] NMData::ValuePtrData::vfunc_17 (85 bytes)
extern "C" void ext_0067A050();

extern "C" __declspec(naked) int __fastcall fn_00682CE0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, 0x280
        push esi
        mov esi, ecx
        jne ret_arg
        cmp dword ptr [esi + 0x28], 0x0
        je check_64
        mov ecx, dword ptr [esi + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        cmp eax, 0x5
        jne check_64
        pop esi
        mov eax, 0x46
        pop ebx
        ret 0xc
check_64:
        cmp dword ptr [esi + 0x64], 0x0
        je ret_arg
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je pop_edi
        mov ecx, dword ptr [esp + 0x14]
        add esi, 0x50
        push esi
        call ext_0067A050
        mov dword ptr [edi], eax
pop_edi:
        pop edi
ret_arg:
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xc
    }
}

// [0x006863A0] NMData::ValuePtrData::vfunc_1_off_8 (654 bytes)
extern "C" void ext_0063EFE0();
extern "C" void ext_004275E0();
extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_00671100();
extern "C" void ext_006722B0();
extern "C" void ext_006824E0();
extern "C" void ext_00685900();
extern "C" void ext_00685E40();
extern "C" void ext_0053F5F0();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FC0;
extern "C" int mem_00924EA8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00B599BC;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F6E8;
extern "C" int mem_00A9F8C0;
extern "C" int mem_00A9F57C;
extern "C" int mem_00AA2400;
extern "C" int mem_00AA23DC;
extern "C" int mem_00AA23D4;
extern "C" int mem_00AA23E4;
extern "C" int mem_00AA23A0;
extern "C" int mem_00AA2404;

extern "C" __declspec(naked) void __fastcall fn_006863A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b55c2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        mov eax, dword ptr [mem_00A9FA6C]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x5c]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x14]
        mov ebp, eax
        call dword ptr [mem_00924FE8]
        cmp ebp, 0xb53a34
        mov dword ptr [esp + 0x54], 0x0
        je L472
        cmp ebp, 0xb53b30
        je L472
        cmp ebp, 0xb53ab0
        je L472
        cmp ebp, 0xb53a70
        je L472
        cmp ebp, 0xb53af0
        je L472
        lea ecx, [esp + 0x14]
        push ebp
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F838]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x4]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F6E8]
        add esp, 0x8
        push ecx
        mov ecx, edi
        lea ebp, [esi + 0x24]
        call ext_0063EFE0
        push eax
        push ebp
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F8C0]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x48]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F57C]
        jmp L4DC
L472:
        mov eax, dword ptr [mem_00AA2400]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_004275E0
        mov eax, dword ptr [mem_00AA23DC]
        test eax, eax
        setne dl
        push eax
        lea eax, [esi + 0x4]
        push edx
        push eax
        push edi
        call ext_006824E0
        mov ecx, dword ptr [mem_00AA23D4]
        add esp, 0x18
        push ecx
        mov ecx, edi
        lea ebp, [esi + 0x24]
        call ext_0063EFE0
        push eax
        push ebp
        call ext_004275E0
        mov edx, dword ptr [mem_00AA23E4]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x48]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00AA23A0]
L4DC:
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x64]
        push edx
        call ext_004275E0
        add esp, 0x8
        cmp dword ptr [esp + 0x28], 0x0
        je L50D
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esi - 0x8]
        call ext_00685E40
        jmp L5FF
L50D:
        mov ecx, dword ptr [mem_00AA2404]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x5c]
        mov dword ptr [esp + 0x5c], eax
        push edx
        lea eax, [esp + 0x10]
        push eax
        call ext_0053F5F0
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_00671100
        push 0x92a0d0
        push ebp
        mov dword ptr [esi + 0x20], eax
        call dword ptr [mem_00924FC0]
        add esp, 0x14
        test al, al
        je L5C7
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x48]
        push 0x0
        call eax
        push eax
        lea ecx, [esp + 0x10]
        call ext_0041CF00
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        mov byte ptr [esp + 0x54], 0x1
        je L579
        cmp eax, dword ptr [mem_00B599BC]
        jne L583
L579:
        mov ecx, ebp
        call dword ptr [mem_00924EA8]
        jmp L5AE
L583:
        lea ecx, [esp + 0x30]
        push ecx
        lea ecx, [esp + 0x10]
        call ext_0041CEB0
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x58], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        call dword ptr [mem_00924FF4]
L5AE:
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov byte ptr [esp + 0x54], 0x0
        je L5C7
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
L5C7:
        push 0x0
        push 0x0
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esi - 0x8]
        call ext_00685900
        push eax
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x58], 0x3
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov byte ptr [esp + 0x54], 0x0
        je L5FF
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx
L5FF:
        push edi
        lea ecx, [esi + 0x40]
        call ext_006722B0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x54], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x4c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x00682A00] NMData::ValuePtrData::vfunc_3_off_8 (208 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640A50();
extern "C" void ext_00662810();
extern "C" void ext_006722D0();
extern "C" void ext_00682460();
extern "C" int mem_00AA23DC;
extern "C" int mem_00AA2404;
extern "C" int mem_00AA23D4;
extern "C" int mem_00AA23E4;
extern "C" int mem_00924FF0;
extern "C" int mem_00AA23A0;
extern "C" int mem_00B5A0B8;

extern "C" __declspec(naked) void __fastcall fn_00682A00(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x18], 0x0
        push edi
        mov edi, dword ptr [esp + 0xc]
        je skip_a
        mov eax, dword ptr [mem_00AA23DC]
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        push edi
        call ext_00682460
        add esp, 0xc
    skip_a:
        mov edx, dword ptr [mem_00AA2404]
        push ebx
        push edx
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x20]
        mov ebx, eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push eax
        push ebx
        call ext_00640A50
        mov ecx, dword ptr [mem_00AA23D4]
        lea eax, [esi + 0x24]
        push eax
        push ecx
        push edi
        call ext_00662810
        add esp, 0x14
        cmp dword ptr [esi + 0x5c], 0x0
        pop ebx
        je skip_b
        mov edx, dword ptr [mem_00AA23E4]
        push edx
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x48]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
    skip_b:
        cmp dword ptr [esi + 0x78], 0x0
        je skip_c
        mov eax, dword ptr [mem_00AA23A0]
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x64]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
    skip_c:
        mov ecx, dword ptr [esi + 0x84]
        test ecx, ecx
        je use_40
        cmp dword ptr [mem_00B5A0B8], 0x0
        jne use_ecx
    use_40:
        lea ecx, [esi + 0x40]
    use_ecx:
        push edi
        call ext_006722D0
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}
