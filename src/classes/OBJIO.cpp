// Decompiled translation unit: src/classes/OBJIO.cpp

// [0x005731A0] OBJIO::vfunc_3 (37 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" __declspec(naked) void* __fastcall fn_005731A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92fe24
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

// [0x005746E0] OBJIO::vfunc_12 (728 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00435D00();
extern "C" void ext_00554D40();
extern "C" void ext_00573550();
extern "C" void ext_00573EB0();
extern "C" void ext_00587920();
extern "C" void ext_005B11D0();
extern "C" void ext_005B18E0();
extern "C" void ext_005B5A70();
extern "C" void ext_006201B0();
extern "C" void ext_0067E650();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_009250DC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009250C8;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00957768;
extern "C" int mem_009250CC;

extern "C" __declspec(naked) void __fastcall fn_005746E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x89d8dd
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xf4
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10c]
        push edi
        push 0x1
        push 0x40
        mov ebp, ecx
        push 0x1
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x84]
        call dword ptr [mem_009250C4]
        mov eax, dword ptr [esp + 0x74]
        mov ecx, dword ptr [eax + 0x4]
        xor edi, edi
        lea ecx, [esp + ecx + 0x74]
        mov dword ptr [esp + 0x108], edi
        call dword ptr [mem_009250DC]
        test eax, eax
        je L574954
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push 0x9598ec
        push edx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        fld1
        push ecx
        fstp dword ptr [esp]
        lea ecx, [ebp + 0x5c]
        call ext_00554D40
        fstp dword ptr [esp + 0xc]
        push 0x1a0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, edi
        mov byte ptr [esp + 0x108], 0x1
        je L5747A0
        mov ecx, eax
        call ext_006201B0
        mov edi, eax
L5747A0:
        mov dword ptr [esp + 0x10], edi
        push esi
        push edi
        mov ecx, ebp
        mov byte ptr [esp + 0x110], 0x2
        call ext_00573550
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xd8]
        mov ecx, edi
        call edx
        push 0x9598e4
        lea ecx, [esp + 0x18]
        mov esi, eax
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x10c], 0x3
        call ext_005B5A70
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x108], 0x2
        call dword ptr [mem_00924FF4]
        push 0x2
        mov ecx, esi
        call ext_005B11D0
        fld dword ptr [esp + 0xc]
        push 0x1
        fstp dword ptr [eax]
        mov ecx, esi
        call ext_005B11D0
        fld dword ptr [esp + 0xc]
        push 0x0
        fstp dword ptr [eax]
        mov ecx, esi
        call ext_005B11D0
        fld dword ptr [esp + 0xc]
        push 0x934b0c
        fstp dword ptr [eax]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x10c], 0x4
        call ext_005B18E0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x108], 0x2
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x74]
        push edx
        push esi
        mov ecx, ebp
        call ext_00573EB0
        test al, al
        lea ecx, [esp + 0x74]
        jne L5748E0
        call dword ptr [mem_009250C8]
        mov eax, dword ptr [esp + 0x110]
        push eax
        lea ecx, [esp + 0x18]
        push 0x959898
        push ecx
        call dword ptr [mem_00924FCC]
        push 0x941f08
        push eax
        lea edx, [esp + 0x6c]
        push edx
        mov byte ptr [esp + 0x120], 0x5
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x108], 0x7
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0x58]
        push eax
        lea ecx, [esp + 0x34]
        call ext_00403560
        push 0x9f8908
        lea ecx, [esp + 0x34]
        push ecx
        mov dword ptr [esp + 0x38], 0x9570dc
        call ext_006A6DD2
L5748E0:
        call dword ptr [mem_009250C8]
        cmp byte ptr [ebp + 0x70], 0x0
        jne L57490F
        fld dword ptr [mem_00957768]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ebp + 0x420]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [edi + 0x4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E650
L57490F:
        mov ecx, dword ptr [ebp + 0x3d0]
        push 0x1
        push edi
        mov dword ptr [esp + 0x18], 0x0
        call ext_00587920
        lea ecx, [esp + 0x74]
        mov dword ptr [esp + 0x108], 0xffffffff
        call dword ptr [mem_009250CC]
        mov ecx, dword ptr [esp + 0x100]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x100
        ret 0x4
L574954:
        push esi
        lea eax, [esp + 0x5c]
        push 0x959848
        push eax
        call dword ptr [mem_00924FCC]
        push 0x941f08
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x120], 0x8
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x108], 0xa
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x34]
        call ext_00403560
        push 0x9f8908
        lea eax, [esp + 0x34]
        push eax
        mov dword ptr [esp + 0x38], 0x9570dc
        call ext_006A6DD2
    }
}
