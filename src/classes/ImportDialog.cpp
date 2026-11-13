// Decompiled translation unit: src/classes/ImportDialog.cpp

// [0x00423580] ImportDialog::vfunc_63 (586 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00423580(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4c5, p + 0xdc);
    ddx(a1, 0x427, p + 0x130);
    ddx(a1, 0x428, p + 0x184);
    ddx(a1, 0x487, p + 0x22c);
    ddx(a1, 0x488, p + 0x280);
    ddx(a1, 0x429, p + 0x1d8);
    ddx(a1, 0x482, p + 0x520);
    ddx(a1, 0x480, p + 0x3d0);
    ddx(a1, 0x4b2, p + 0x424);
    ddx(a1, 0x4b3, p + 0x478);
    ddx(a1, 0x43b, p + 0x4cc);
    ddx(a1, 0x432, p + 0x2d4);
    ddx(a1, 0x430, p + 0x328);
    ddx(a1, 0x431, p + 0x37c);
    ddx(a1, 0x42f, p + 0x574);
    ddx(a1, 0x4b6, p + 0x5c8);
    ddx(a1, 0x4b7, p + 0x61c);
    ddx(a1, 0x4d2, p + 0x670);
    ddx(a1, 0x4d3, p + 0x6c4);
    ddx(a1, 0x4b8, p + 0x718);
    ddx(a1, 0x481, p + 0x76c);
    ddx(a1, 0x4bc, p + 0x8bc);
    ddx(a1, 0x3f2, p + 0x910);
    ddx(a1, 0x4cd, p + 0x964);
    ddx(a1, 0x4e8, p + 0x9b8);
    ddx(a1, 0x4ea, p + 0xa0c);
    ddx(a1, 0x438, p + 0xab4);
    ddx(a1, 0x44a, p + 0xb08);
    ddx(a1, 0x436, p + 0xb5c);
    ddx(a1, 0x439, p + 0xa60);
    ddx(a1, 0x451, p + 0xbb0);
    ddx(a1, 0x1, p + 0xc0c);
}

// [0x00423B50] ImportDialog::vfunc_86 (1864 bytes)
extern "C" void ext_00422C80(); extern "C" void ext_0045BC70(); extern "C" void ext_00594000(); extern "C" void ext_006781B0(); extern "C" void ext_006A5E60(); extern "C" void ext_006A5F4A(); extern "C" void ext_006A5FB0(); extern "C" void ext_006A6238(); extern "C" int mem_009242FC; extern "C" int mem_00925694; extern "C" int mem_00924494; extern "C" int mem_00924300; extern "C" int mem_0092449C; extern "C" int mem_009242F4; extern "C" int mem_009251F0; extern "C" int mem_009251E4; extern "C" int mem_00924FDC; extern "C" int mem_009242F0; extern "C" int mem_00924FE4; extern "C" int mem_00924FF4; extern "C" int mem_00924FEC; extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00423B50(void* self) {
    __asm {
        push -01h
        push 087855fh
        mov eax, dword ptr fs:[00h]
        push eax
        mov dword ptr fs:[00h], esp
        sub esp, 044h
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0ch]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 09ch]
        mov dword ptr [esp + 058h], 00h
        call edx
        test al, al
        mov edi, dword ptr [mem_00925694]
        je L_00423BFD
        push 0acd350h
        lea ecx, [esp + 014h]
        call dword ptr [mem_00924494]
        mov ecx, dword ptr [esi + 02a0h]
        lea eax, [esp + 010h]
        push eax
        push 00h
        push 00h
        push 0147h
        push ecx
        mov byte ptr [esp + 06ch], 01h
        call edi
        push eax
        lea ecx, [esi + 0280h]
        call ext_006A6238
        mov ecx, 0acd350h
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 014h]
        call dword ptr [mem_0092449C]
        mov ecx, dword ptr [esi + 078h]
        test eax, eax
        sete al
        mov byte ptr [ecx + 014h], al
        lea ecx, [esp + 010h]
        mov byte ptr [esp + 058h], 00h
        call dword ptr [mem_009242F4]
    L_00423BFD:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ach]
        call eax
        test al, al
        je L_00423C40
        lea ecx, [esp + 0ch]
        push ecx
        lea ecx, [esi + 0574h]
        call ext_006A5F4A
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 018h]
        mov eax, dword ptr [esi + 078h]
        fld dword ptr [esp + 018h]
        fstp dword ptr [eax + 08h]
        add esp, 04h
    L_00423C40:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0cch]
        call eax
        test al, al
        je L_00423C99
        lea ecx, [esp + 0ch]
        push ecx
        lea ecx, [esi + 05c8h]
        call ext_006A5F4A
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        mov ecx, dword ptr [esi + 078h]
        add esp, 04h
        push 00h
        push 00h
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [esi + 063ch]
        push 0f0h
        push edx
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete al
        mov byte ptr [ecx + 016h], al
    L_00423C99:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0d0h]
        call eax
        test al, al
        je L_00423CC8
        mov ecx, dword ptr [esi + 0690h]
        push 00h
        push 00h
        push 0f0h
        push ecx
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete dl
        mov byte ptr [ecx + 017h], dl
    L_00423CC8:
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0d4h]
        call edx
        test al, al
        je L_00423CFD
        cmp byte ptr [esi + 07dh], 00h
        jne L_00423CFD
        mov eax, dword ptr [esi + 06e4h]
        push 00h
        push 00h
        push 0f0h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete dl
        mov byte ptr [ecx + 018h], dl
    L_00423CFD:
        mov eax, dword ptr [esi + 0738h]
        push 00h
        push 00h
        push 0f0h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete dl
        mov byte ptr [ecx + 019h], dl
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0b8h]
        call edx
        test al, al
        je L_00423D47
        mov eax, dword ptr [esi + 0b28h]
        push 00h
        push 00h
        push 0147h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        add eax, 01h
        mov dword ptr [ecx + 048h], eax
    L_00423D47:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0b4h]
        call eax
        test al, al
        je L_00423F2A
        mov ecx, dword ptr [esi + 078ch]
        push 00h
        push 00h
        push 0f0h
        push ecx
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete al
        test al, al
        mov byte ptr [ecx + 0b8h], al
        je L_00423F2A
        mov eax, dword ptr [esi + 078h]
        lea edx, [esi + 0a0h]
        push edx
        lea ecx, [eax + 0bch]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 0984h]
        push 00h
        push 00h
        push 0147h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        push 00h
        push 00h
        mov dword ptr [ecx + 0b4h], eax
        mov ecx, dword ptr [esi + 0984h]
        push 0147h
        push ecx
        call edi
        sub eax, 00h
        je L_00423E0F
        sub eax, 01h
        je L_00423DF3
        sub eax, 01h
        jne L_00423E29
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0b0h], 0ah
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0ach], 032h
        jmp L_00423E29
    L_00423DF3:
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0b0h], 05h
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0ach], 01eh
        jmp L_00423E29
    L_00423E0F:
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0b0h], 02h
        mov eax, dword ptr [esi + 078h]
        mov dword ptr [eax + 0ach], 0ch
    L_00423E29:
        push 0928b5dh
        lea ecx, [esp + 018h]
        call dword ptr [mem_009242F0]
        push 0928b5dh
        lea ecx, [esp + 014h]
        mov byte ptr [esp + 05ch], 02h
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [esi + 09d8h]
        lea edx, [esp + 014h]
        push edx
        push 00h
        push 00h
        push 0147h
        push eax
        mov byte ptr [esp + 06ch], 03h
        call edi
        push eax
        lea ecx, [esi + 09b8h]
        call ext_006A6238
        mov edx, dword ptr [esi + 0a2ch]
        lea ecx, [esp + 010h]
        push ecx
        push 00h
        push 00h
        push 0147h
        push edx
        call edi
        push eax
        lea ecx, [esi + 0a0ch]
        call ext_006A6238
        lea ecx, [esp + 014h]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 038h]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 010h]
        mov byte ptr [esp + 058h], 04h
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 01ch]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 078h]
        lea ecx, [esp + 034h]
        push ecx
        lea ecx, [eax + 0d8h]
        mov byte ptr [esp + 05ch], 05h
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 078h]
        lea edx, [esp + 018h]
        push edx
        lea ecx, [eax + 0f4h]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 018h]
        mov byte ptr [esp + 058h], 04h
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 034h]
        mov byte ptr [esp + 058h], 03h
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 010h]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 014h]
        mov byte ptr [esp + 058h], 00h
        call dword ptr [mem_009242F4]
    L_00423F2A:
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0bch]
        call edx
        test al, al
        je L_00423FEB
        mov eax, dword ptr [esi + 0ad4h]
        push 00h
        push 00h
        push 0f0h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete dl
        lea eax, [esp + 018h]
        mov byte ptr [ecx + 06ch], dl
        push eax
        lea ecx, [esi + 0bb0h]
        call ext_0045BC70
        lea ecx, [esp + 018h]
        mov byte ptr [esp + 058h], 06h
        call dword ptr [mem_00924FEC]
        test al, al
        je L_00423FA2
        push 00h
        push 030h
        push 092ec78h
        call ext_006A5E60
        lea ecx, [esp + 018h]
        mov byte ptr [esp + 058h], 00h
        call dword ptr [mem_00924FF4]
        jmp L_0042427C
    L_00423FA2:
        sub esp, 01ch
        lea edx, [esp + 034h]
        mov ecx, esp
        mov dword ptr [esp + 030h], esp
        push edx
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esi + 078h]
        call ext_00422C80
        mov eax, dword ptr [esi + 0a80h]
        push 00h
        push 00h
        push 0f0h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete dl
        mov byte ptr [ecx + 015h], dl
        lea ecx, [esp + 018h]
        mov byte ptr [esp + 058h], 00h
        call dword ptr [mem_00924FF4]
    L_00423FEB:
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0a0h]
        call edx
        test al, al
        je L_00424014
        mov eax, dword ptr [esi + 0150h]
        push 00h
        push 00h
        push 0147h
        push eax
        call edi
        mov ecx, dword ptr [esi + 078h]
        mov dword ptr [ecx + 02ch], eax
    L_00424014:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0a4h]
        call eax
        test al, al
        je L_0042403D
        mov ecx, dword ptr [esi + 01a4h]
        push 00h
        push 00h
        push 0147h
        push ecx
        call edi
        mov edx, dword ptr [esi + 078h]
        mov dword ptr [edx + 028h], eax
    L_0042403D:
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0a8h]
        call edx
        test al, al
        je L_0042408C
        lea eax, [esp + 0ch]
        push eax
        lea ecx, [esi + 01d8h]
        call ext_006A5F4A
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        mov ecx, dword ptr [esi + 078h]
        fld1
        add esp, 04h
        fdivrp st(1), st
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fstp dword ptr [ecx + 024h]
    L_0042408C:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0c4h]
        call eax
        test al, al
        je L_004240B5
        mov ecx, dword ptr [esi + 024ch]
        push 00h
        push 00h
        push 0147h
        push ecx
        call edi
        mov edx, dword ptr [esi + 078h]
        mov dword ptr [edx + 070h], eax
    L_004240B5:
        mov ecx, dword ptr [esi + 074h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0d8h]
        call edx
        test al, al
        je L_00424130
        mov eax, dword ptr [esi + 03f0h]
        push 00h
        push 00h
        push 0f0h
        push eax
        call edi
        mov edx, dword ptr [esi + 078h]
        cmp eax, 01h
        sete cl
        lea eax, [esp + 0ch]
        mov byte ptr [edx + 076h], cl
        push eax
        lea ecx, [esi + 02d4h]
        call ext_006A5F4A
        call ext_00594000
        lea ecx, [esp + 0ch]
        mov ebp, eax
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        lea ecx, [ebp + 02e0h]
        fstp dword ptr [esp]
        call ext_006781B0
        mov ecx, dword ptr [esi + 078h]
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fstp dword ptr [ecx + 07ch]
    L_00424130:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0e0h]
        call eax
        test al, al
        je L_0042415F
        mov ecx, dword ptr [esi + 04ech]
        push 00h
        push 00h
        push 0f0h
        push ecx
        call edi
        cmp eax, 01h
        mov eax, dword ptr [esi + 078h]
        sete dl
        mov byte ptr [eax + 079h], dl
    L_0042415F:
        mov ecx, dword ptr [esi + 074h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0dch]
        call eax
        test al, al
        je L_0042424E
        mov ecx, dword ptr [esi + 0444h]
        push 00h
        push 00h
        push 0f0h
        push ecx
        call edi
        cmp eax, 01h
        mov eax, dword ptr [esi + 078h]
        push 00h
        sete dl
        push 00h
        mov byte ptr [eax + 077h], dl
        mov ecx, dword ptr [esi + 0498h]
        push 0f0h
        push ecx
        call edi
        cmp eax, 01h
        mov eax, dword ptr [esi + 078h]
        lea ecx, [esp + 0ch]
        sete dl
        push ecx
        lea ecx, [esi + 0328h]
        mov byte ptr [eax + 078h], dl
        call ext_006A5F4A
        call ext_00594000
        lea ecx, [esp + 0ch]
        mov ebp, eax
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        lea ecx, [ebp + 02e0h]
        fstp dword ptr [esp]
        call ext_006781B0
        mov edx, dword ptr [esi + 078h]
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        lea eax, [esp + 0ch]
        push eax
        fstp dword ptr [edx + 080h]
        lea ecx, [esi + 037ch]
        call ext_006A5F4A
        call ext_00594000
        lea ecx, [esp + 0ch]
        mov ebp, eax
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 018h]
        fld dword ptr [esp + 018h]
        lea ecx, [ebp + 02e0h]
        fstp dword ptr [esp]
        call ext_006781B0
        mov ecx, dword ptr [esi + 078h]
        fstp dword ptr [esp + 014h]
        fld dword ptr [esp + 014h]
        fstp dword ptr [ecx + 084h]
    L_0042424E:
        mov edx, dword ptr [esi + 0540h]
        push 00h
        push 00h
        push 0f0h
        push edx
        call edi
        cmp eax, 01h
        jne L_0042426E
        mov eax, dword ptr [esi + 078h]
        mov byte ptr [eax + 075h], 01h
        jmp L_00424275
    L_0042426E:
        mov ecx, dword ptr [esi + 078h]
        mov byte ptr [ecx + 075h], 00h
    L_00424275:
        mov ecx, esi
        call ext_006A5FB0
    L_0042427C:
        lea ecx, [esp + 0ch]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 050h]
        pop edi
        pop esi
        mov dword ptr fs:[00h], ecx
        pop ebp
        add esp, 050h
        ret
    }
}
