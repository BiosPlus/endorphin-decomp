// Decompiled translation unit: src/classes/GWCCategoryItem.cpp

extern "C" void ext_006A7B90();
extern "C" void ext_006ACDF0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" void ext_006A9540();
extern "C" void ext_006AD010();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006AECA0] GWCCategoryItem::vfunc_5 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AECA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7B90
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ACDF0
        pop esi
        ret 0x8
    }
}

// [0x006ACF60] GWCCategoryItem::vfunc_8 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006ACF60(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        test dl, dl
        mov eax, ecx
        je short L_006ACF76
        mov ecx, dword ptr [eax + 0x3c]
        test ecx, ecx
        je short L_006ACF76
        cmp byte ptr [ecx], 0x1
        jne short L_006ACF7C
L_006ACF76:
        mov ecx, dword ptr [eax + 0x4]
        mov byte ptr [ecx + 0x4], dl
L_006ACF7C:
        mov ecx, dword ptr [eax + 0x14]
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0x13c]
        push eax
        call edx
        pop esi
        ret 0x4
    }
}

extern "C" void ext_008B76A9();
extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006AF1F0] GWCCategoryItem::vfunc_15 (287 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AF1F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push offset ext_008B76A9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 3
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [edi + 0x14]
        sub edx, 4
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], edx
        call ext_006A7C00
        cmp eax, edi
        jne L_271
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_267
        test eax, eax
        je L_258
        mov eax, dword ptr [eax + 0x20]
L_258:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je L_271
L_267:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_279
L_271:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
L_279:
        mov esi, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        cmp dword ptr [edi + 0x84], 0x10
        jb L_2a0
        mov edi, dword ptr [edi + 0x70]
        jmp L_2a3
L_2a0:
        add edi, 0x70
L_2a3:
        push edi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F0]
        mov edi, dword ptr [esi]
        push 0x8024
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [edi + 0x70]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 8
    }
}

// [0x006AF0B0] GWCCategoryItem::vfunc_13 (311 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AF0B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 008b76a9h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [eax + 8]
        push ebx
        push ebp
        mov ebp, dword ptr [eax + 4]
        push esi
        mov esi, dword ptr [esp + 2ch]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov ebx, dword ptr [edi + 68h]
        mov eax, dword ptr [eax + 0ch]
        add ecx, 3
        sub edx, 4
        cmp ebx, -1
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 18h], edx
        je short L_AF11F
        sub eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        lea eax, [eax + ebp - 8]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 14h]
        push esi
        push ebx
        call ext_006A9540
        test al, al
        je short L_AF11F
        add dword ptr [esp + 10h], 14h
L_AF11F:
        mov ecx, dword ptr [edi + 14h]
        call ext_006A7C00
        cmp eax, edi
        jne short L_AF15E
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 14h]
        cmp eax, ecx
        je short L_AF154
        test eax, eax
        je short L_AF145
        mov eax, dword ptr [eax + 20h]
L_AF145:
        mov ecx, dword ptr [ecx + 20h]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je short L_AF15E
L_AF154:
        mov ecx, dword ptr [edi + 14h]
        call ext_006A7D70
        jmp short L_AF166
L_AF15E:
        mov ecx, dword ptr [edi + 14h]
        call ext_006A7D50
L_AF166:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 38h]
        mov ecx, esi
        call eax
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        lea ecx, [esp + 34h]
        push ecx
        mov ecx, edi
        call ext_006AD010
        mov edi, eax
        mov ebp, dword ptr [esi]
        push 8024h
        lea edx, [esp + 14h]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 30h], 0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [ebp + 70h]
        mov ecx, esi
        call eax
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 28h], 0ffffffffh
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 38h]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 20h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 1ch
        ret 8
    }
}

extern "C" void ext_004545A0();
extern "C" void ext_00626440();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A61AE();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" void ext_006AEC90();
extern "C" void ext_006AF840();
extern "C" int mem_00925654;
extern "C" int mem_00925604;
extern "C" int mem_00924070;

// [0x006AFAD0] GWCCategoryItem::vfunc_14 (498 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AFAD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b7690
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x58]
        test eax, eax
        je L_exit
        call ext_006AF840
        test al, al
        je L_exit
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x4c]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [ebx + 0x14]
        push edi
        mov dword ptr [esp + 0x34], edx
        mov dword ptr [esp + 0x38], eax
        call ext_00626440
        mov ecx, dword ptr [esp + 0x2c]
        lea eax, [eax + ecx - 3]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esp + 0x34], eax
        add eax, -9
        mov dword ptr [esp + 0x2c], eax
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        lea eax, [eax + ecx - 4]
        mov ecx, dword ptr [ebx + 0x14]
        mov dword ptr [esp + 0x30], eax
        add eax, 9
        mov dword ptr [esp + 0x38], eax
        call ext_006A7C00
        cmp eax, ebx
        jne L_not_focused
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [ebx + 0x14]
        cmp eax, ecx
        je L_focused
        push eax
        call ext_004545A0
        test eax, eax
        je L_not_focused
    L_focused:
        mov ecx, dword ptr [ebx + 0x14]
        call ext_006A7D70
        jmp L_after_color
    L_not_focused:
        mov ecx, dword ptr [ebx + 0x14]
        call ext_006A7D50
    L_after_color:
        mov esi, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esi]
        mov edi, eax
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [edx + 0x38]
        push edi
        mov ecx, esi
        call eax
        push edi
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
        mov edi, eax
        mov eax, dword ptr [esp + 0x2c]
        add eax, ecx
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 0x50]
        push edx
        push 1
        mov ebp, eax
        push 0
        lea ecx, [esp + 0x20]
        sar edi, 1
        sar ebp, 1
        call ext_006A6148
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x48], 1
        call ext_006A610C
        push edi
        lea ecx, [ebp - 2]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        call ext_006A6106
        push edi
        lea eax, [ebp + 3]
        push eax
        mov ecx, esi
        call ext_006A6100
        mov ecx, ebx
        call ext_006AEC90
        test al, al
        jne L_skip_vertical
        lea ecx, [edi - 2]
        push ecx
        push ebp
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        call ext_006A6106
        add edi, 3
        push edi
        push ebp
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
        pop edi
        pop esi
        pop ebp
    L_exit:
        mov ecx, dword ptr [esp + 0x30]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 8
    }
}

// [0x006AED70] GWCCategoryItem::vfunc_7 (819 bytes)
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
extern "C" void ext_006A7D10();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_00924FC8;
extern "C" int mem_00924094;
extern "C" int mem_009240D4;

extern "C" __declspec(naked) void __fastcall fn_006AED70(void* self) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    0x8b7653
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x7c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        push    edi
        call    ext_006A7C50
        test    al, al
        mov     edi, dword ptr [esp + 0x9c]
        je      L_6aedb9
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BA0
        push    eax
        lea     eax, [esp + 0xa4]
        push    eax
        mov     ecx, edi
        call    ext_006A6172
    L_6aedb9:
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x38]
        lea     eax, [esp + 0xa0]
        push    eax
        push    edi
        mov     ecx, esi
        call    edx
        mov     eax, dword ptr [esp + 0xa0]
        mov     ecx, dword ptr [esp + 0xa4]
        mov     edx, dword ptr [esp + 0xa8]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0xac]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x3c], eax
        call    ext_00626440
        mov     ecx, dword ptr [esp + 0x30]
        lea     edx, [ecx + eax + 1]
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x30], edx
        call    ext_006A7C00
        cmp     eax, esi
        jne     L_6aeea1
        call    dword ptr [mem_00925654]
        push    eax
        call    ext_006A5E00
        mov     ecx, dword ptr [esi + 0x14]
        cmp     eax, ecx
        je      L_6aee4e
        test    eax, eax
        je      L_6aee35
        mov     eax, dword ptr [eax + 0x20]
    L_6aee35:
        push    eax
        mov     eax, dword ptr [ecx + 0x20]
        push    eax
        call    dword ptr [mem_009256BC]
        test    eax, eax
        jne     L_6aee4e
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BA0
        jmp     L_6aee56
    L_6aee4e:
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7D10
    L_6aee56:
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        call    ext_006A7C50
        test    al, al
        jne     L_6aee94
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7C40
        add     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
    L_6aee94:
        push    ebx
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, edi
        call    ext_006A6172
    L_6aeea1:
        lea     ebp, [esi + 0x6c]
        push    0x928b5d
        push    ebp
        call    dword ptr [mem_00924FC8]
        add     esp, 8
        test    al, al
        jne     L_6aeecf
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BE0
        test    al, al
        je      L_6aeedf
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7C50
        test    al, al
        jne     L_6aeedf
    L_6aeecf:
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7C40
        add     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x38], eax
    L_6aeedf:
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BE0
        test    al, al
        je      L_6aef75
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7C50
        test    al, al
        jne     L_6aef75
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BA0
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x24]
        call    ext_006A6148
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x98], 0
        call    ext_006A610C
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
        push    ecx
        mov     ebx, eax
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, edi
        call    ext_006A6106
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x38]
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006A6100
        push    ebx
        mov     ecx, edi
        call    ext_006A610C
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x94], -1
        mov     dword ptr [esp + 0x18], 0x92a23c
        call    ext_006A5FF2
    L_6aef75:
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BF0
        mov     edx, dword ptr [eax + 4]
        lea     ecx, [esp + 0x50]
        push    ecx
        push    0x3c
        push    edx
        call    dword ptr [mem_00924094]
        mov     dword ptr [esp + 0x60], 0x2bc
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x10], 0x92a5d4
        lea     eax, [esp + 0x50]
        push    eax
        mov     dword ptr [esp + 0x98], 1
        call    dword ptr [mem_009240D4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_006A5FFE
        mov     edx, dword ptr [edi]
        mov     edx, dword ptr [edx + 0x30]
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    edx
        sub     dword ptr [esp + 0x38], 1
        lea     ecx, [esp + 0x30]
        mov     ebx, eax
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x34]
        push    ecx
        push    edi
        mov     ecx, esi
        call    edx
        push    0x928b5d
        push    ebp
        call    dword ptr [mem_00924FC8]
        add     esp, 8
        test    al, al
        je      L_6af062
        mov     ecx, dword ptr [esi + 0x14]
        call    ext_006A7BE0
        test    al, al
        je      L_6af062
        mov     eax, dword ptr [esp + 0xa0]
        mov     ecx, dword ptr [esp + 0xa4]
        mov     edx, dword ptr [esp + 0xa8]
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0xac]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], eax
        call    ext_00626440
        mov     ecx, dword ptr [esi + 0x14]
        mov     ebp, eax
        call    ext_006A7C40
        add     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x3c]
        lea     ecx, [eax + ebp + 1]
        lea     eax, [esp + 0x40]
        push    eax
        mov     dword ptr [esp + 0x44], ecx
        push    edi
        mov     ecx, esi
        call    edx
    L_6af062:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0x30]
        push    ebx
        mov     ecx, edi
        call    edx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x94], -1
        mov     dword ptr [esp + 0x10], 0x92a23c
        call    ext_006A5FF2
        mov     ecx, dword ptr [esp + 0x8c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x88
        ret     0x18
    }
}
