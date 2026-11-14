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

extern "C" {
    void ext_00404F00();
    void ext_004237D0();
    void ext_004238A0();
    void ext_00423AD0();
    void ext_00424320();
    void ext_00424520();
    void ext_00424600();
    void ext_004246E0();
    void ext_004248F0();
    void ext_00424A10();
    void ext_00430380();
    void ext_0045C1C0();
    void ext_0045C5F0();
    void ext_0045C620();
    void ext_00594000();
    void ext_00664840();
    void ext_00678130();
    void ext_006A5EDE();
    void ext_006A5F50();
    void ext_006A5FC8();
    void ext_006A5FDA();
    void ext_006A6442();
    void ext_006A644E();
    extern int mem_0087862F;
    extern int mem_0092565C;
    extern int mem_00925694;
    extern int mem_00924300;
    extern int mem_00924FE4;
    extern int mem_00924FF4;
    extern int mem_00ACDB40;
    extern int mem_00924FF0;
    extern int mem_0092A0D0;
    extern int mem_00ACD338;
    extern int mem_00ACD33C;
    extern int mem_00ACD340;
    extern int mem_00ACD0F4;
    extern int mem_00ACD14C;
    extern int mem_00ACD32C;
    extern int mem_00ACD330;
    extern int mem_00ACD334;
    extern int mem_00A9F414;
    extern int mem_0092D00C;
    extern int mem_0092D000;
    extern int mem_00A9ED98;
    extern int mem_00ACD350;
    extern int mem_00ACD354;
    extern int mem_00ACD344;
    extern int mem_00ACD348;
    extern int mem_00ACD34C;
    extern int mem_00925134;
    extern int mem_009242F8;
    extern int mem_0092ECB4;
}

// [0x00424F40] ImportDialog::vfunc_84 (3640 bytes)
extern "C" __declspec(naked) void __fastcall fn_00424F40(void* self) {
    __asm {
        push -0x1
        push offset mem_0087862F
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        mov ecx, esi
        call ext_004237D0
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        mov edi, dword ptr [mem_00925694]
        push ebx
        push 0x1
        mov ebp, eax
        mov eax, dword ptr [esi + 0x20]
        push 0x80
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push ebp
        push 0x0
        push 0x80
        push ecx
        call edi
        lea ecx, [esi + 0xbc]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov dword ptr [esp + 0x60], 0x0
        call eax
        or ebp, -0x1
        lea ecx, [esp + 0x1c]
        mov ebx, eax
        mov dword ptr [esp + 0x5c], ebp
        call dword ptr [mem_00924FF4]
        cmp ebx, 0x3
        jne L_425001
        push 0x2
        mov ecx, esi
        call ext_006A644E
    L_425001:
        mov ecx, dword ptr [esi + 0x74]
        lea edx, [ecx + 0x27c]
        mov dword ptr [esi + 0x80], edx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xac]
        call edx
        test al, al
        je L_425078
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430380
        test al, al
        jne L_425078
        mov eax, dword ptr [esi + 0x78]
        fld dword ptr [eax + 0x8]
        push ecx
        fstp dword ptr [esp + 0x14]
        lea ecx, [esp + 0x20]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x574]
        call ext_006A5F50
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], ebp
        call dword ptr [mem_00924FF4]
        jmp L_425085
    L_425078:
        push 0x0
        lea ecx, [esi + 0x574]
        call ext_006A5FDA
    L_425085:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xcc]
        call eax
        test al, al
        je L_425115
        mov ebx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0xe4]
        mov ecx, ebx
        call eax
        test al, 0x2
        je L_425115
        cmp byte ptr [ebx + 0x428], 0x0
        je L_425115
        mov ecx, dword ptr [esi + 0x78]
        mov eax, dword ptr [ecx + 0xc]
        push eax
        lea edx, [esp + 0x20]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x2
        lea ebx, [esi + 0x5c8]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        push 0x1
        mov ecx, ebx
        call ext_006A5FDA
        mov eax, dword ptr [esi + 0x63c]
        push 0x0
        push 0x1
        push 0xf1
        push eax
        call edi
        push 0x1
        jmp L_425144
    L_425115:
        lea ebx, [esi + 0x5c8]
        push offset mem_0092A0D0
        mov ecx, ebx
        call ext_006A5F50
        push 0x0
        mov ecx, ebx
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x63c]
        push 0x0
        push 0x0
        push 0xf1
        push ecx
        call edi
        push 0x0
    L_425144:
        lea ebp, [esi + 0x61c]
        mov ecx, ebp
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xd0]
        call eax
        test al, al
        je L_4251EB
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xe4]
        mov dword ptr [esp + 0x10], ecx
        call eax
        test al, 0x2
        je L_4251EB
        mov ecx, dword ptr [esp + 0x10]
        cmp byte ptr [ecx + 0x428], 0x0
        je L_4251EB
        mov edx, dword ptr [esi + 0x78]
        cmp byte ptr [edx + 0x17], 0x0
        push 0x0
        je L_4251D7
        mov eax, dword ptr [esi + 0x690]
        push 0x1
        push 0xf1
        push eax
        call edi
        push offset mem_0092A0D0
        mov ecx, ebx
        call ext_006A5F50
        push 0x0
        mov ecx, ebx
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x63c]
        push 0x0
        push 0x1
        push 0xf1
        push ecx
        call edi
        push 0x0
        mov ecx, ebp
        call ext_006A5FDA
        push 0x1
        jmp L_4251FF
    L_4251D7:
        mov edx, dword ptr [esi + 0x690]
        push 0x0
        push 0xf1
        push edx
        call edi
        push 0x1
        jmp L_4251FF
    L_4251EB:
        mov eax, dword ptr [esi + 0x690]
        push 0x0
        push 0x0
        push 0xf1
        push eax
        call edi
        push 0x0
    L_4251FF:
        lea ecx, [esi + 0x670]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xd4]
        call eax
        test al, al
        je L_42524D
        mov ebx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0xe4]
        mov ecx, ebx
        call eax
        test al, 0x2
        je L_42524D
        cmp byte ptr [ebx + 0x428], 0x0
        je L_42524D
        mov ecx, dword ptr [esi + 0x6e4]
        push 0x0
        push 0x1
        push 0xf1
        push ecx
        call edi
        push 0x1
        jmp L_425261
    L_42524D:
        mov edx, dword ptr [esi + 0x6e4]
        push 0x0
        push 0x0
        push 0xf1
        push edx
        call edi
        push 0x0
    L_425261:
        lea ecx, [esi + 0x6c4]
        call ext_006A5FDA
        mov ebx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xe4]
        mov ecx, ebx
        call edx
        test al, 0x2
        je L_42529E
        cmp byte ptr [ebx + 0x428], 0x0
        je L_42529E
        mov eax, dword ptr [esi + 0x738]
        push 0x0
        push 0x0
        push 0xf1
        push eax
        call edi
        push 0x1
        jmp L_4252B2
    L_42529E:
        mov ecx, dword ptr [esi + 0x738]
        push 0x0
        push 0x0
        push 0xf1
        push ecx
        call edi
        push 0x0
    L_4252B2:
        lea ecx, [esi + 0x718]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xa4]
        call eax
        test al, al
        jne L_4252DD
        push 0x0
        lea ecx, [esi + 0x184]
        call ext_006A5FDA
        jmp L_425348
    L_4252DD:
        mov ecx, offset mem_00ACD338
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x1a4]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, offset mem_00ACD33C
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x1a4]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov ecx, offset mem_00ACD340
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x1a4]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        mov eax, dword ptr [ecx + 0x28]
        mov edx, dword ptr [esi + 0x1a4]
        push 0x0
        push eax
        push 0x14e
        push edx
        call edi
    L_425348:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xa0]
        call edx
        test al, al
        jne L_42536B
        push 0x0
        lea ecx, [esi + 0x130]
        call ext_006A5FDA
        jmp L_42540E
    L_42536B:
        mov ecx, offset mem_00ACD0F4
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x150]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACD14C
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x150]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, offset mem_00ACD32C
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x150]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov ecx, offset mem_00ACD330
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x150]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACD334
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x150]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov eax, dword ptr [edx + 0x2c]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x150]
        push 0x14e
        push eax
        call edi
    L_42540E:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc4]
        call eax
        test al, al
        jne L_425445
        mov ecx, dword ptr [mem_00A9F414]
        mov edx, dword ptr [esi + 0x24c]
        push ecx
        push 0x0
        push 0x143
        push edx
        call edi
        push 0x0
        lea ecx, [esi + 0x22c]
        call ext_006A5FDA
        jmp L_4254BD
    L_425445:
        mov eax, dword ptr [mem_00A9F414]
        mov ecx, dword ptr [esi + 0x24c]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc8]
        call eax
        test al, al
        mov ecx, dword ptr [esi + 0x24c]
        je L_425496
        push offset mem_0092D00C
        push 0x0
        push 0x143
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x24c]
        push offset mem_0092D000
        push 0x0
        push 0x143
        push edx
        jmp L_4254A4
    L_425496:
        mov eax, dword ptr [mem_00A9ED98]
        push eax
        push 0x0
        push 0x143
        push ecx
    L_4254A4:
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov eax, dword ptr [edx + 0x70]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x24c]
        push 0x14e
        push eax
        call edi
    L_4254BD:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xa8]
        call eax
        test al, al
        jne L_4254DD
        push 0x0
        lea ecx, [esi + 0x1d8]
        call ext_006A5FDA
        jmp L_42552E
    L_4254DD:
        mov ecx, dword ptr [esi + 0x78]
        fld dword ptr [ecx + 0x24]
        push ecx
        fld1
        lea edx, [esp + 0x20]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x3
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x1d8]
        call ext_006A5F50
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_42552E:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x9c]
        call edx
        test al, al
        lea ecx, [esi + 0x280]
        jne L_42554E
        push 0x0
        call ext_006A5FDA
        jmp L_4255AB
    L_42554E:
        push 0x1
        call ext_006A5FDA
        mov ecx, offset mem_00ACD350
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x2a0]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACD354
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x2a0]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov al, byte ptr [edx + 0x14]
        mov edx, dword ptr [esi + 0x2a0]
        xor ecx, ecx
        test al, al
        sete cl
        push 0x0
        push ecx
        push 0x14e
        push edx
        call edi
    L_4255AB:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        call edx
        test al, al
        je L_4256E3
        cmp byte ptr [esi + 0x7c], 0x0
        je L_4256E3
        mov ecx, esi
        call ext_004238A0
        mov eax, dword ptr [esi + 0x78]
        mov al, byte ptr [eax + 0xb8]
        mov edx, dword ptr [esi + 0x78c]
        push 0x0
        movzx ecx, al
        push ecx
        push 0xf1
        push edx
        call edi
        push 0x1
        lea ecx, [esi + 0x76c]
        call ext_006A5FDA
        lea ecx, [esi + 0x84]
        lea ebx, [esi + 0x8bc]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        mov eax, dword ptr [esi + 0x78]
        movzx ecx, byte ptr [eax + 0xb8]
        push ecx
        mov ecx, ebx
        call ext_006A5FDA
        mov edx, dword ptr [esi + 0x8dc]
        push 0x0
        push 0x1
        push 0xcf
        push edx
        call edi
        mov eax, dword ptr [esi + 0x78]
        movzx ecx, byte ptr [eax + 0xb8]
        push ecx
        lea ecx, [esi + 0x910]
        call ext_006A5FDA
        mov ecx, offset mem_00ACD344
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x984]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov ecx, offset mem_00ACD348
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x984]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACD34C
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x984]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov eax, dword ptr [edx + 0xb4]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x984]
        push 0x14e
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        movzx edx, byte ptr [ecx + 0xb8]
        push edx
        lea ecx, [esi + 0x964]
        call ext_006A5FDA
        mov ecx, esi
        call ext_004248F0
        mov ecx, esi
        call ext_00424A10
        jmp L_425750
    L_4256E3:
        mov eax, dword ptr [esi + 0x78c]
        push 0x0
        push 0x0
        push 0xf1
        push eax
        call edi
        push 0x0
        lea ecx, [esi + 0x76c]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x8bc]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x910]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x964]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x520]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x9b8]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0xa0c]
        call ext_006A5FDA
    L_425750:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb0]
        call eax
        test al, al
        je L_42578C
        mov ecx, dword ptr [esi + 0x78]
        cmp byte ptr [ecx + 0x34], 0x0
        je L_42578C
        push 0x1
        lea ecx, [esi + 0xb5c]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0xbb0]
        call ext_006A5FDA
        lea ecx, [esi + 0xc0c]
        jmp L_425792
    L_42578C:
        lea ecx, [esi + 0xb5c]
    L_425792:
        push 0x0
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb8]
        call eax
        test al, al
        jne L_4257BC
        push 0x0
        lea ecx, [esi + 0xb08]
        call ext_006A5FDA
        jmp L_42586B
    L_4257BC:
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0x34], 0x0
        jne L_42586B
        mov ebx, dword ptr [eax + 0x3c]
        cmp ebx, dword ptr [eax + 0x40]
        lea ebp, [eax + 0x38]
        jbe L_4257DA
        call dword ptr [mem_00925134]
    L_4257DA:
        mov dword ptr [esp + 0x18], ebx
        add ebx, 0x1c
        cmp ebx, dword ptr [ebp + 0x8]
        ja L_4257EB
        cmp ebx, dword ptr [ebp + 0x4]
        jae L_4257F1
    L_4257EB:
        call dword ptr [mem_00925134]
    L_4257F1:
        mov eax, ebp
        mov ecx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ecx
        mov dword ptr [esp + 0x14], ecx
        jbe L_425807
        call dword ptr [mem_00925134]
        mov eax, ebp
    L_425807:
        test ebp, ebp
        je L_42580F
        cmp ebp, eax
        je L_425815
    L_42580F:
        call dword ptr [mem_00925134]
    L_425815:
        cmp ebx, dword ptr [esp + 0x14]
        je L_425859
        test ebp, ebp
        jne L_425825
        call dword ptr [mem_00925134]
    L_425825:
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_425830
        call dword ptr [mem_00925134]
    L_425830:
        mov ecx, ebx
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0xb28]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_425854
        call dword ptr [mem_00925134]
    L_425854:
        add ebx, 0x1c
        jmp L_4257F1
    L_425859:
        mov edx, dword ptr [esi + 0xb28]
        push 0x0
        push 0x0
        push 0x14e
        push edx
        call edi
    L_42586B:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xbc]
        call edx
        test al, al
        jne L_4258A8
        push 0x0
        lea ecx, [esi + 0xbb0]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0xab4]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0xa60]
        call ext_006A5FDA
        jmp L_425A30
    L_4258A8:
        mov eax, dword ptr [esi + 0x80]
        lea ebx, [esi + 0xbb0]
        push eax
        mov ecx, ebx
        call ext_0045C5F0
        mov ecx, dword ptr [esi + 0xbd0]
        push 0x0
        push 0x0
        push 0x110a
        push ecx
        call edi
        push eax
        mov ecx, esi
        call ext_00423AD0
        mov edx, dword ptr [esi + 0xbd0]
        push 0x0
        push 0x0
        push 0x110a
        push edx
        call edi
        push eax
        mov eax, dword ptr [esi + 0xbd0]
        push 0x9
        push 0x110b
        push eax
        call edi
        mov ecx, dword ptr [esi + 0xbd0]
        push 0x0
        push 0x0
        push 0x110a
        push ecx
        call edi
        push 0x0
        push 0x2
        push 0x2
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push eax
        mov ecx, ebx
        call ext_006A6442
        mov edx, dword ptr [esi + 0xbd0]
        push 0x0
        push 0x0
        push 0x110a
        push edx
        call edi
        push 0x0
        push 0x10
        push 0x10
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push eax
        mov ecx, ebx
        call ext_006A6442
        mov ebp, dword ptr [esi + 0x80]
        mov eax, dword ptr [ebp + 0x80]
        add ebp, 0x7c
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        je L_4259EB
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [esp + 0x10]
        mov eax, ecx
        sub eax, edx
        sar eax, 0x2
        cmp eax, 0x1
        jne L_4259EB
        cmp edx, ecx
        jbe L_425985
        call dword ptr [mem_00925134]
        mov edx, dword ptr [esp + 0x10]
    L_425985:
        cmp edx, dword ptr [ebp + 0x8]
        jb L_425990
        call dword ptr [mem_00925134]
    L_425990:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        mov ecx, ebx
        call ext_0045C620
        mov ecx, ebx
        mov ebp, eax
        call ext_0045C1C0
        mov ecx, dword ptr [esi + 0xbd0]
        push ebp
        push 0x9
        push 0x110b
        push ecx
        call edi
        push 0x0
        push 0x2
        push 0x2
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push ebp
        mov ecx, ebx
        call ext_006A6442
        push 0x0
        push 0x10
        push 0x10
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push ebp
        mov ecx, ebx
        call ext_006A6442
    L_4259EB:
        mov edx, dword ptr [esi + 0x78]
        cmp byte ptr [edx + 0x6c], 0x0
        push 0x0
        je L_425A06
        mov eax, dword ptr [esi + 0xad4]
        push 0x1
        push 0xf1
        push eax
        jmp L_425A14
    L_425A06:
        mov ecx, dword ptr [esi + 0xad4]
        push 0x0
        push 0xf1
        push ecx
    L_425A14:
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov al, byte ptr [edx + 0x15]
        mov ecx, dword ptr [esi + 0xa80]
        push 0x0
        movzx eax, al
        push eax
        push 0xf1
        push ecx
        call edi
    L_425A30:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xd8]
        call eax
        test al, al
        je L_425AF2
        cmp byte ptr [esi + 0x7c], 0x0
        jne L_425AF2
        mov ecx, dword ptr [esi + 0x78]
        mov al, byte ptr [ecx + 0x76]
        movzx edx, al
        mov eax, dword ptr [esi + 0x3f0]
        push 0x0
        push edx
        push 0xf1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        fld dword ptr [ecx + 0x7c]
        fstp dword ptr [esp + 0x14]
        call ext_00594000
        fld dword ptr [esp + 0x14]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        push ecx
        lea edx, [esp + 0x20]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x4
        lea ebx, [esi + 0xc8]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call dword ptr [mem_009242F8]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, ebx
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x2d4]
        call ext_006A5F50
        mov ecx, esi
        call ext_00424520
        jmp L_425B2C
    L_425AF2:
        mov eax, dword ptr [esi + 0x3f0]
        push 0x0
        push 0x0
        push 0xf1
        push eax
        call edi
        push 0x0
        lea ecx, [esi + 0x3d0]
        call ext_006A5FDA
        lea ebx, [esi + 0x2d4]
        push offset mem_0092ECB4
        mov ecx, ebx
        call ext_006A5F50
        push 0x0
        mov ecx, ebx
        call ext_006A5FDA
    L_425B2C:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xdc]
        call eax
        test al, al
        je L_425C95
        cmp byte ptr [esi + 0x7c], 0x0
        jne L_425C95
        mov ecx, dword ptr [esi + 0x78]
        mov al, byte ptr [ecx + 0x77]
        movzx edx, al
        mov eax, dword ptr [esi + 0x444]
        push 0x0
        push edx
        push 0xf1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        mov al, byte ptr [ecx + 0x78]
        movzx edx, al
        mov eax, dword ptr [esi + 0x498]
        push 0x0
        push edx
        push 0xf1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        fld dword ptr [ecx + 0x80]
        fstp dword ptr [esp + 0x14]
        call ext_00594000
        fld dword ptr [esp + 0x14]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        lea edx, [esp + 0x20]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x5
        lea ebx, [esi + 0xcc]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call dword ptr [mem_009242F8]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x78]
        fld dword ptr [eax + 0x84]
        fstp dword ptr [esp + 0x14]
        call ext_00594000
        fld dword ptr [esp + 0x14]
        push ecx
        lea ecx, [eax + 0x2e0]
        fstp dword ptr [esp]
        call ext_00678130
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x3c]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x6
        lea ebp, [esi + 0xd0]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call dword ptr [mem_009242F8]
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, ebx
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x328]
        call ext_006A5F50
        mov ecx, ebp
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x37c]
        call ext_006A5F50
        mov ecx, esi
        call ext_00424600
        mov ecx, esi
        call ext_004246E0
        jmp L_425D09
    L_425C95:
        mov edx, dword ptr [esi + 0x444]
        push 0x0
        push 0x0
        push 0xf1
        push edx
        call edi
        mov eax, dword ptr [esi + 0x498]
        push 0x0
        push 0x0
        push 0xf1
        push eax
        call edi
        push 0x0
        lea ecx, [esi + 0x424]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x478]
        call ext_006A5FDA
        lea ebx, [esi + 0x328]
        push offset mem_0092ECB4
        mov ecx, ebx
        call ext_006A5F50
        lea ebp, [esi + 0x37c]
        push offset mem_0092ECB4
        mov ecx, ebp
        call ext_006A5F50
        push 0x0
        mov ecx, ebx
        call ext_006A5FDA
        push 0x0
        mov ecx, ebp
        call ext_006A5FDA
    L_425D09:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xe0]
        call eax
        test al, al
        je L_425D41
        cmp byte ptr [esi + 0x7c], 0x0
        jne L_425D41
        mov ecx, dword ptr [esi + 0x78]
        movzx edx, byte ptr [ecx + 0x79]
        mov eax, dword ptr [esi + 0x4ec]
        push 0x0
        push edx
        push 0xf1
        push eax
        call edi
        mov ecx, esi
        call ext_00424320
        jmp L_425D60
    L_425D41:
        mov ecx, dword ptr [esi + 0x4ec]
        push 0x0
        push 0x0
        push 0xf1
        push ecx
        call edi
        push 0x0
        lea ecx, [esi + 0x4cc]
        call ext_006A5FDA
    L_425D60:
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret
    }
}
