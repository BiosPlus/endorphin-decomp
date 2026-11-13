// Decompiled translation unit: src/classes/GWCCategoryWithButtonsItem.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" void ext_006AD010();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006B3980] GWCCategoryWithButtonsItem::vfunc_13 (271 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3980(void* self) {
    __asm {
        push -1
        push 0x8b76a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x3
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [edi + 0x14]
        sub edx, 0x4
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x18], edx
        call ext_006A7C00
        cmp eax, edi
        jne L_006B3A02
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_006B39F8
        test eax, eax
        je L_006B39E9
        mov eax, dword ptr [eax + 0x20]
    L_006B39E9:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je L_006B3A02
    L_006B39F8:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_006B3A0A
    L_006B3A02:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
    L_006B3A0A:
        mov esi, dword ptr [esp + 0x30]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 0x1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_006AD010
        mov edi, eax
        mov ebp, dword ptr [esi]
        push 0x8024
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [ebp + 0x70]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}

// [0x006B0B60] GWCCategoryWithButtonsItem::vfunc_10 (136 bytes)
extern "C" void ext_006B0770();
extern "C" int mem_00925628;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_006B0B60(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x90]
        test eax, eax
        je L_end
        cmp dword ptr [eax + 4], 0
        je L_end
        push ebx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_006B0770
        cmp byte ptr [esi + 0x88], 0
        mov edi, dword ptr [esp + 0x30]
        mov ebx, dword ptr [mem_00925628]
        je L_b6
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ebx
        test eax, eax
        je L_b6
        mov edx, dword ptr [esi + 0xa8]
        jmp L_ce
    L_b6:
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        call ebx
        test eax, eax
        je L_df
        mov edx, dword ptr [esi + 0xac]
    L_ce:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x20]
        push 0
        push esi
        push edx
        push ecx
        call dword ptr [mem_00925694]
    L_df:
        pop edi
        pop ebx
    L_end:
        pop esi
        add esp, 0x20
        ret 4
    }
}

// [0x006B0AB0] GWCCategoryWithButtonsItem::vfunc_9 (163 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A63D6();
extern "C" void ext_006B0770();
extern "C" int mem_00925628;
extern "C" int mem_0092571C;
extern "C" int mem_00925704;
extern "C" __declspec(naked) int __fastcall fn_006B0AB0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x90]
        test eax, eax
        je l1
        cmp dword ptr [eax + 4], 0
        jne l2
    l1:
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    l2:
        push edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B0770
        cmp byte ptr [esi + 0x88], 0
        mov esi, dword ptr [esp + 0x2c]
        mov edi, dword ptr [mem_00925628]
        je l3
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        call edi
        test eax, eax
        jne l4
    l3:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        call edi
        test eax, eax
        je l5
    l4:
        call ext_006A5EDE
        push 0x2af8
        push 0xc
        push 0x2af8
        call ext_006A63D6
        push eax
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 4
    l5:
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    }
}

// [0x006B08E0] GWCCategoryWithButtonsItem::vfunc_15 (459 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D10();
extern "C" void ext_006A7D70();
extern "C" void ext_006ACE20();
extern "C" void ext_006ACE40();
extern "C" void ext_006B0720();
extern "C" int mem_00924300;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_009242F4;
extern "C" int mem_00924858;

extern "C" __declspec(naked) void __fastcall fn_006B08E0(void* self) {
    __asm {
        push -1
        push 0x8b77d2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        lea eax, [esp + 0x28]
        push eax
        mov edi, ecx
        call ext_006ACE20
        lea ecx, [esp + 0x28]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, edi
        call ext_006ACE40
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x20], ecx
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call ext_006B0720
        mov esi, dword ptr [esp + 0x48]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [edi + 0x90]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x14]
        sub dword ptr [esp + 0x24], 0x1
        mov dword ptr [esp + 0x14], eax
        mov eax, 0x3
        add dword ptr [esp + 0x18], eax
        sub dword ptr [esp + 0x20], eax
        call ext_006A7C00
        cmp eax, edi
        mov ecx, dword ptr [edi + 0x14]
        jne L_006B0970
        call ext_006A7D70
        jmp L_006B0975
    L_006B0970:
        call ext_006A7D10
    L_006B0975:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 0x1
        mov ecx, esi
        mov ebp, eax
        call ext_006A6010
        lea ecx, [edi + 0xa4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_009242F0]
        mov ebx, dword ptr [esi]
        push 0x26
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x48], 0x0
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_009242F4]
        cmp byte ptr [edi + 0x88], 0x0
        je L_006B0A41
        lea ecx, [edi + 0xa0]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        mov ebx, dword ptr [esi]
        push 0x24
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x48], 0x1
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_009242F4]
    L_006B0A41:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, esi
        call edx
        cmp byte ptr [edi + 0x88], 0x0
        jne L_006B0A96
        add edi, 0x8c
        mov ecx, edi
        call dword ptr [mem_00924858]
        test al, al
        jne L_006B0A96
        mov ebx, dword ptr [esi]
        push 0x24
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, esi
        call edx
    L_006B0A96:
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 0x8
    }
}

extern "C" void ext_004545A0();
extern "C" void ext_00626440();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A61AE();
extern "C" void ext_006AD150();
extern "C" void ext_006AEC90();
extern "C" void ext_006AF840();
extern "C" int mem_0092564C;
extern "C" int mem_00925604;
extern "C" int mem_00924070;

// [0x006B3750] GWCCategoryWithButtonsItem::vfunc_14 (546 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3750(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b7690
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x58]
        test eax, eax
        je L_exit
        call ext_006AF840
        test al, al
        je L_exit
        push ebx
        push ebp
        push esi
        mov ecx, edi
        call ext_006AD150
        mov esi, dword ptr [esp + 0x50]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x2c], eax
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esp + 0x34], edx
        mov dword ptr [esp + 0x38], eax
        call ext_00626440
        mov ecx, dword ptr [esp + 0x2c]
        mov ebx, dword ptr [esi + 4]
        lea ecx, [eax + ecx - 3]
        mov eax, dword ptr [esi + 0xc]
        lea edx, [ecx - 9]
        sub eax, ebx
        mov dword ptr [esp + 0x2c], edx
        cdq
        sub eax, edx
        mov dword ptr [esp + 0x34], ecx
        sub ecx, dword ptr [esp + 0x2c]
        sar eax, 1
        lea ebx, [eax + ebx - 4]
        mov dword ptr [esp + 0x30], ebx
        mov esi, ecx
        mov ecx, dword ptr [edi + 0x14]
        add ebx, 9
        mov dword ptr [esp + 0x38], ebx
        call ext_00626440
        add esi, 3
        add ebp, -1
        imul esi, ebp
        add eax, esi
        push 0
        push eax
        lea eax, [esp + 0x34]
        push eax
        call dword ptr [mem_0092564C]
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7C00
        cmp eax, edi
        jne L_not_focused
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_focused
        push eax
        call ext_004545A0
        test eax, eax
        je L_not_focused
    L_focused:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_after_color
    L_not_focused:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
    L_after_color:
        mov esi, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esi]
        mov ebx, eax
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [edx + 0x38]
        push ebx
        mov ecx, esi
        call eax
        push ebx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], eax
        call ext_006A61AE
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esi + 4]
        push ecx
        lea edx, [esp + 0x30]
        push edx
        push eax
        mov dword ptr [esp + 0x50], 0
        call dword ptr [mem_00925604]
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x38]
        lea eax, [edx + ecx]
        mov ecx, dword ptr [esp + 0x34]
        cdq
        sub eax, edx
        mov ebp, eax
        mov eax, dword ptr [esp + 0x2c]
        add eax, ecx
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 0x50]
        push edx
        push 1
        mov ebx, eax
        push 0
        lea ecx, [esp + 0x20]
        sar ebp, 1
        sar ebx, 1
        call ext_006A6148
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x48], 1
        call ext_006A610C
        push ebp
        lea ecx, [ebx - 2]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_006A6106
        push ebp
        lea eax, [ebx + 3]
        push eax
        mov ecx, esi
        call ext_006A6100
        mov ecx, edi
        call ext_006AEC90
        test al, al
        jne L_skip_vertical
        lea ecx, [ebp - 2]
        push ecx
        push ebx
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        call ext_006A6106
        add ebp, 3
        push ebp
        push ebx
        mov ecx, esi
        call ext_006A6100
    L_skip_vertical:
        mov ecx, dword ptr [esi + 4]
        lea eax, [esp + 0x10]
        push eax
        push ecx
        call dword ptr [mem_00924070]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x4c]
        mov edx, dword ptr [edx + 0x38]
        push eax
        mov ecx, esi
        call edx
        mov esi, 0x92a23c
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x44], 0
        mov dword ptr [esp + 0x14], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x44], -1
        mov dword ptr [esp + 0x1c], esi
        call ext_006A5FF2
        pop esi
        pop ebp
        pop ebx
    L_exit:
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 8
    }
}

extern "C" void ext_00626440();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A6172();
extern "C" void ext_006A7BA0();
extern "C" void ext_006A7BE0();
extern "C" void ext_006A7BF0();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7C40();
extern "C" void ext_006A7C50();
extern "C" void ext_006A7C60();
extern "C" void ext_006A7D10();
extern "C" void ext_006A7D30();
extern "C" void ext_006AF310();
extern "C" void ext_006B13F0();
extern "C" void ext_006B1510();
extern "C" int mem_00993828;
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_00924FC8;
extern "C" int mem_00924094;
extern "C" int mem_009240D4;

// [0x006B3380] GWCCategoryWithButtonsItem::vfunc_7 (967 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3380(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        push -1
        push 0x8b7956
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe8
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x20], ecx
        mov ecx, dword ptr [esi + 0x14]
        push edi
        mov dword ptr [esp + 0x28], edx
        mov dword ptr [esp + 0x2c], eax
        call ext_00626440
        mov ecx, dword ptr [esp + 0x20]
        lea edx, [ecx + eax + 1]
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x20], edx
        call ext_006A7C50
        test al, al
        mov edi, dword ptr [ebp + 0x8]
        je L_006B346E
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C60
        test al, al
        je L_006B346E
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BA0
        lea ecx, [esp + 0x68]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        lea ecx, [esp + 0x68]
        push ecx
        push eax
        call ext_006B1510
        mov ecx, dword ptr [esi + 0x14]
        add esp, 0x10
        call ext_006A7D30
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x7c]
        push ecx
        lea edx, [esp + 0x48]
        push edx
        push eax
        call ext_006B1510
        fld qword ptr [esp + 0x40]
        fadd qword ptr [esp + 0x78]
        sub esp, 0x8
        fmul qword ptr [mem_00993828]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x88]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x78]
        fstp qword ptr [esp]
        call ext_006B13F0
        add esp, 0x18
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        call ext_006A6172
    L_006B346E:
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C00
        cmp eax, esi
        jne L_006B3504
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x14]
        cmp eax, ecx
        je L_006B34B1
        test eax, eax
        je L_006B3498
        mov eax, dword ptr [eax + 0x20]
    L_006B3498:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        jne L_006B34B1
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BA0
        jmp L_006B34B9
    L_006B34B1:
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D10
    L_006B34B9:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x28]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x40], edx
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x48], ecx
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x4c], edx
        call ext_006A7C50
        test al, al
        jne L_006B34F7
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C40
        add eax, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x48], eax
    L_006B34F7:
        push ebx
        lea eax, [esp + 0x44]
        push eax
        mov ecx, edi
        call ext_006A6172
    L_006B3504:
        lea eax, [esi + 0x6c]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        jne L_006B3532
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BE0
        test al, al
        je L_006B354C
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C50
        test al, al
        jne L_006B354C
    L_006B3532:
        mov ecx, dword ptr [esi + 0x14]
        call ext_00626440
        mov ecx, dword ptr [esi + 0x14]
        mov ebx, eax
        call ext_006A7C40
        lea ecx, [ebx + eax + 1]
        mov dword ptr [esp + 0x28], ecx
    L_006B354C:
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BE0
        test al, al
        je L_006B35E2
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C50
        test al, al
        jne L_006B35E2
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BA0
        push eax
        push 1
        push 0
        lea ecx, [esp + 0x3c]
        call ext_006A6148
        lea edx, [esp + 0x30]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x100], 0
        call ext_006A610C
        mov ecx, dword ptr [esp + 0x28]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        push ecx
        lea edx, [esp + 0x48]
        push edx
        mov ecx, edi
        call ext_006A6106
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        mov ecx, edi
        call ext_006A6100
        push ebx
        mov ecx, edi
        call ext_006A610C
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xfc], 0xffffffff
        mov dword ptr [esp + 0x30], 0x92a23c
        call ext_006A5FF2
    L_006B35E2:
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x10]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 0x14]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [ebp + 0x18]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        mov ecx, esi
        call ext_006AF310
        mov ecx, dword ptr [esi + 0x14]
        add dword ptr [esp + 0x20], eax
        mov ebx, dword ptr [edi]
        call ext_006A7BF0
        mov edx, dword ptr [ebx + 0x30]
        push eax
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x30], eax
        call ext_006A7BF0
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x84]
        push ecx
        push 0x3c
        push edx
        call dword ptr [mem_00924094]
        mov dword ptr [esp + 0x94], 0x2bc
        mov dword ptr [esp + 0x3c], 0
        mov dword ptr [esp + 0x38], 0x92a5d4
        lea eax, [esp + 0x84]
        mov ebx, 1
        push eax
        mov dword ptr [esp + 0x100], ebx
        call dword ptr [mem_009240D4]
        push eax
        lea ecx, [esp + 0x3c]
        call ext_006A5FFE
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x34]
        sub dword ptr [esp + 0x28], ebx
        lea eax, [esp + 0x20]
        push eax
        push edi
        mov ecx, esi
        call edx
        lea eax, [esi + 0x6c]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_006B36F8
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7BE0
        test al, al
        je L_006B36F8
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x54], ecx
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x58], edx
        mov dword ptr [esp + 0x5c], eax
        call ext_00626440
        mov ecx, dword ptr [esi + 0x14]
        mov ebx, eax
        call ext_006A7C40
        add eax, dword ptr [esp + 0x50]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x3c]
        lea ecx, [eax + ebx + 1]
        lea eax, [esp + 0x50]
        push eax
        mov dword ptr [esp + 0x54], ecx
        push edi
        mov ecx, esi
        call edx
    L_006B36F8:
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        lea ecx, [ebp + 0xc]
        push ecx
        push edi
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xfc], 0xffffffff
        mov dword ptr [esp + 0x38], 0x92a23c
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0xf4]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    }
}
