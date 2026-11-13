// Decompiled translation unit: src/classes/RelationshipRPROMagnet.cpp

extern "C" void ext_006457F0();
extern "C" void ext_00645A00();
extern "C" void ext_0064B900();
extern "C" void ext_0067E510();
extern "C" void ext_0067E7B0();
extern "C" void ext_007C9260();
extern "C" void ext_007C9370();
extern "C" void ext_007C97F0();
extern "C" void ext_007C9860();
extern "C" void ext_007C9930();
extern "C" void ext_007C9A60();
extern "C" void ext_007D8700();
extern "C" void ext_00480920();
extern "C" void ext_00647F00();
extern "C" void ext_007C9480();
extern "C" void ext_007C9BC0();
extern "C" void ext_007C97A0();
extern "C" int mem_00B55748;
extern "C" int mem_00A9BEB0;
extern "C" int mem_00968ED8;

// [0x00648EF0] RelationshipRPROMagnet::vfunc_49 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648EF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 0x8
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x00648F10] RelationshipRPROMagnet::vfunc_6 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        jnz loc_648F41
        mov ecx, dword ptr [esi + 0x94]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C97F0
        add esp, 8
loc_648F41:
        pop esi
        ret
    }
}

// [0x00648F50] RelationshipRPROMagnet::vfunc_7 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        je loc_648F81
        mov ecx, dword ptr [esi + 0x94]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 8
    loc_648F81:
        pop esi
        ret
    }
}

// [0x00648F90] RelationshipRPROMagnet::vfunc_50 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x94], 0
        je done_648FC2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9930
        add esp, 0x8
        mov dword ptr [esi + 0x94], 0
    done_648FC2:
        pop esi
        ret
    }
}

// [0x0064C010] RelationshipRPROMagnet::vfunc_47 (141 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064C010(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        fldz
        push esi
        push edi
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x10]
        push eax
        fst dword ptr [esp + 0x10]
        mov edi, ecx
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x94]
        push 0x0
        push ecx
        call ext_007C9A60
        mov esi, dword ptr [esp + 0x28]
        add esp, 0xc
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_0067E510
        fld qword ptr [mem_00A9BEB0]
        fstp dword ptr [esp + 0x1c]
        push ecx
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0067E7B0
        fld dword ptr [mem_00968ED8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064B900
        mov eax, dword ptr [edi + 0x94]
        add esi, 0x30
        push esi
        push eax
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9370
        add esp, 0x8
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_004F9950();
extern "C" void ext_0067DAD0();
extern "C" void ext_00694D80();

// [0x00649A50] RelationshipRPROMagnet::vfunc_8 (226 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649A50(void* self) {
    __asm {
        sub esp, 0x74
        fld1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xbc]
        fst dword ptr [esp + 0x34]
        fldz
        push esi
        fst dword ptr [esp + 0x3c]
        lea edx, [esp + 0x38]
        fst dword ptr [esp + 0x40]
        push edx
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x6c]
        fst dword ptr [esp + 0x70]
        fstp dword ptr [esp + 0x74]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x78]
        call eax
        mov esi, dword ptr [esp + 0x7c]
        cmp esi, 0x3
        jae lbl_649b0b
        fldz
        lea ecx, [esp + 0x14]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x3c]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x30]
        fld1
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x38]
        call ext_0067DAD0
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esp + 0x18]
        call ext_00694D80
        fld dword ptr [esp + 4*esi + 0x4]
        pop esi
        add esp, 0x74
        ret 0x4
    lbl_649b0b:
        cmp esi, 0x6
        jae lbl_649b29
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x3c]
        call ext_004F9950
        fld dword ptr [esp + 4*esi - 0x8]
        pop esi
        add esp, 0x74
        ret 0x4
    lbl_649b29:
        fldz
        pop esi
        add esp, 0x74
        ret 0x4
    }
}

// [0x00648FD0] RelationshipRPROMagnet::vfunc_52 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648FD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00645A00
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        add ecx, 0x4
        mov byte ptr [esi + 0x98], 0x0
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        call eax
        push eax
        mov ecx, esi
        call ext_006457F0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        mov ecx, esi
        call eax
        pop esi
        ret 0x8
    }
}

// [0x0064B970] RelationshipRPROMagnet::vfunc_48 (293 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064B970(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ebx + 0x228]
        test eax, eax
        push ebp
        push esi
        push edi
        mov esi, ecx
        je loc_64B99B
        mov eax, dword ptr [eax + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        mov edx, dword ptr [ecx + 0xa4]
        mov ebp, dword ptr [edx]
        jmp loc_64B99D
loc_64B99B:
        xor ebp, ebp
loc_64B99D:
        mov eax, dword ptr [ebx + 0x22c]
        test eax, eax
        je loc_64B9C1
        mov eax, dword ptr [eax + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        mov edx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 0x18], eax
        jmp loc_64B9C9
loc_64B9C1:
        mov dword ptr [esp + 0x18], 0
loc_64B9C9:
        mov ecx, dword ptr [mem_00B55748]
        mov edi, dword ptr [ecx + 0x28]
        mov eax, dword ptr [edi + 0x40]
        push eax
        call ext_007C9BC0
        push eax
        mov dword ptr [esi + 0x94], eax
        call ext_007D8700
        mov edx, dword ptr [ebx + 0x22c]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [edx + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        add esp, 8
        call ext_00647F00
        test ebp, ebp
        mov dword ptr [esi + 0x90], eax
        je loc_64BA2C
        mov ecx, dword ptr [ebx + 0x228]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647F00
        mov byte ptr [esi + 0x64], 1
        jmp loc_64BA35
loc_64BA2C:
        call ext_00480920
        mov byte ptr [esi + 0x64], 0
loc_64BA35:
        mov ecx, dword ptr [esi + 0x94]
        mov dword ptr [esi + 0x68], eax
        mov eax, dword ptr [esp + 0x18]
        push ebp
        push eax
        push ecx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        mov edx, dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [edx + 0x14]
        lea ecx, [ebx + 4]
        add esp, 0xc
        push eax
        call edx
        push eax
        mov ecx, esi
        call ext_006457F0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov ecx, esi
        call edx
        mov eax, dword ptr [edi + 0x38]
        mov edx, dword ptr [esp + 0x10]
        push eax
        lea ecx, [eax + 1]
        push edx
        mov dword ptr [edi + 0x38], ecx
        call ext_007C97A0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}

extern "C" void ext_0067E560();
extern "C" void ext_007C9B60();
extern "C" void ext_007C9B90();
extern "C" int mem_00925134;

// [0x0064BAA0] RelationshipRPROMagnet::vfunc_0 (831 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064BAA0(void* self) {
    __asm {
        sub esp, 0x60
        fld1
        push ebx
        fst dword ptr [esp + 0x24]
        push ebp
        fldz
        mov ebp, dword ptr [mem_00925134]
        fst dword ptr [esp + 0x2c]
        push esi
        fst dword ptr [esp + 0x34]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        fst dword ptr [esp + 0x38]
        test eax, eax
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x44]
        push edi
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x6c]
        je L_64bb15
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x5
        ja L_64bb1b
    L_64bb15:
        fstp st(0)
        call ebp
        fld1
    L_64bb1b:
        mov ebx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add ebx, 0x78
        test eax, eax
        je L_64bb43
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x4
        ja L_64bb49
    L_64bb43:
        fstp st(0)
        call ebp
        fld1
    L_64bb49:
        mov edi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add edi, 0x60
        test eax, eax
        je L_64bb71
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x3
        ja L_64bb77
    L_64bb71:
        fstp st(0)
        call ebp
        fld1
    L_64bb77:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld qword ptr [eax + 0x50]
        fstp dword ptr [esp + 0x18]
        fld qword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x1c]
        fld qword ptr [ebx + 0x8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x6c]
        je L_64bbca
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x2
        ja L_64bbcc
    L_64bbca:
        call ebp
    L_64bbcc:
        mov ebx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add ebx, 0x30
        test eax, eax
        je L_64bbf4
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_64bbf6
    L_64bbf4:
        call ebp
    L_64bbf6:
        mov edi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add edi, 0x18
        test eax, eax
        je L_64bc1b
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_64bc1d
    L_64bc1b:
        call ebp
    L_64bc1d:
        fld qword ptr [edi + 0x8]
        mov edx, dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x10]
        lea eax, [esp + 0x24]
        fld qword ptr [ebx + 0x8]
        push eax
        fstp dword ptr [esp + 0x18]
        lea ecx, [esp + 0x34]
        fld qword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x30]
        call ext_0067E560
        cmp byte ptr [esi + 0x98], 0x0
        jne L_64bc6d
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xac]
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        call edx
    L_64bc6d:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je L_64bc8f
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x5
        ja L_64bc91
    L_64bc8f:
        call ebp
    L_64bc91:
        mov ebx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add ebx, 0x78
        test eax, eax
        je L_64bcb9
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x4
        ja L_64bcbb
    L_64bcb9:
        call ebp
    L_64bcbb:
        mov edi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add edi, 0x60
        test eax, eax
        je L_64bce3
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x3
        ja L_64bce5
    L_64bce3:
        call ebp
    L_64bce5:
        fld qword ptr [ebx]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x94]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld qword ptr [edi]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld qword ptr [eax + 0x48]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push ecx
        call ext_007C9B90
        mov eax, dword ptr [esi + 0x10]
        add esp, 0x10
        test eax, eax
        je L_64bd46
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x2
        ja L_64bd48
    L_64bd46:
        call ebp
    L_64bd48:
        mov ebx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add ebx, 0x30
        test eax, eax
        je L_64bd70
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_64bd72
    L_64bd70:
        call ebp
    L_64bd72:
        mov edi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add edi, 0x18
        test eax, eax
        je L_64bd97
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_64bd99
    L_64bd97:
        call ebp
    L_64bd99:
        fld qword ptr [ebx]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi + 0x94]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld qword ptr [edi]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push edx
        call ext_007C9B60
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret
    }
}
