// Decompiled translation unit: src/classes/CDLCharacterIO.cpp

// [0x00570350] CDLCharacterIO::vfunc_3 (37 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" __declspec(naked) void* __fastcall fn_00570350(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92fe0c
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00571B90] CDLCharacterIO::vfunc_10 (565 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00435D00();
extern "C" void ext_00553640();
extern "C" void ext_005705E0();
extern "C" void ext_00570790();
extern "C" void ext_00571970();
extern "C" void ext_005B65D0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_009250DC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_009250C8;
extern "C" int mem_009250CC;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" __declspec(naked) void __fastcall fn_00571B90(void* self) {
    __asm {
        push -0x1
        push 0x89d068
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        sub esp, 0xec
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x414]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        push edi
        call edx
        mov edi, dword ptr [esp + 0x104]
        push 0x1
        push 0x40
        push 0x1
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x78]
        call dword ptr [mem_009250C4]
        mov eax, dword ptr [esp + 0x68]
        mov ecx, dword ptr [eax + 0x4]
        lea ecx, [esp + ecx + 0x68]
        mov dword ptr [esp + 0xfc], 0x0
        call dword ptr [mem_009250DC]
        test eax, eax
        je L_571D61
        cmp dword ptr [esi + 0x424], 0x0
        je L_571C62
        push edi
        mov ecx, esi
        call ext_005705E0
        mov ecx, dword ptr [esi + 0x424]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        push 0x0
        call eax
        push 0x9596b4
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x424]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x100], 0x1
        call edx
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xfc], 0x0
        call dword ptr [mem_00924FF4]
    L_571C62:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x959698
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea edx, [esp + 0x68]
        push edx
        mov ecx, esi
        call ext_00570790
        test al, al
        je L_571CF3
        lea eax, [esp + 0x68]
        push eax
        mov ecx, esi
        call ext_005B65D0
        test al, al
        je L_571CF3
        lea ecx, [esp + 0x68]
        push ecx
        mov ecx, esi
        call ext_00571970
        test al, al
        je L_571CF3
        lea ecx, [esp + 0x68]
        call dword ptr [mem_009250C8]
        mov ecx, esi
        call ext_00553640
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_009250CC]
        mov ecx, dword ptr [esp + 0xf4]
        pop edi
        pop esi
        mov fs:[0x0], ecx
        add esp, 0xf8
        ret 0x4
    L_571CF3:
        lea ecx, [esp + 0x68]
        call dword ptr [mem_009250C8]
        push edi
        lea edx, [esp + 0xc]
        push 0x959648
        push edx
        call dword ptr [mem_00924FCC]
        push 0x941f08
        push eax
        lea eax, [esp + 0x60]
        push eax
        mov byte ptr [esp + 0x114], 0x2
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xfc], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        push ecx
        lea ecx, [esp + 0x28]
        call ext_00403560
        push 0x9f8908
        lea edx, [esp + 0x28]
        push edx
        mov dword ptr [esp + 0x2c], 0x9570dc
        call ext_006A6DD2
    L_571D61:
        push edi
        lea eax, [esp + 0x50]
        push 0x959054
        push eax
        call dword ptr [mem_00924FCC]
        push 0x941f08
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x114], 0x5
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xfc], 0x7
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x8]
        push edx
        lea ecx, [esp + 0x28]
        call ext_00403560
        push 0x9f8908
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0x2c], 0x9570dc
        call ext_006A6DD2
    }
}
