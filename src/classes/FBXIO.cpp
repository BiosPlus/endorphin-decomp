// Decompiled translation unit: src/classes/FBXIO.cpp

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9EED4;

extern "C" __declspec(naked) void __fastcall fn_0055DE50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EED4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push eax
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

// [0x00562A30] FBXIO::vfunc_13 (70 bytes)
extern "C" void ext_0055E990();
extern "C" void ext_0055F4E0();
extern "C" void ext_005605A0();
extern "C" void ext_005619C0();
extern "C" void ext_006629B0();

extern "C" __declspec(naked) void __fastcall fn_00562A30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0055F4E0
        test al, al
        je done
        cmp byte ptr [esi + 0x214], 0
        je skip1
        lea eax, [esi + 0x1f8]
        push eax
        call ext_006629B0
        add esp, 4
        test al, al
        jne skip2
    skip1:
        mov ecx, esi
        call ext_005605A0
    skip2:
        mov ecx, esi
        call ext_005619C0
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0055E990
    done:
        pop esi
        ret 4
    }
}

// [0x005607E0] FBXIO::vfunc_33 (305 bytes)
extern "C" void ext_0041CD60();
extern "C" void ext_0047B170();
extern "C" int mem_00944238;
extern "C" int mem_0094423C;
extern "C" int mem_009563EC;
extern "C" int mem_0092944C;
extern "C" int mem_0095894C;
extern "C" int mem_00958948;
extern "C" int mem_00958944;
extern "C" int mem_00925134;
extern "C" int mem_00993838;

extern "C" __declspec(naked) int __fastcall fn_005607E0(void* self, int edx_unused, void* a1, float a2) {
    __asm {
        push ecx
        fld dword ptr [mem_00944238]
        push ebx
        push esi
        fstp dword ptr [esp + 0x8]
        mov esi, dword ptr [esp + 0x14]
        push edi
        lea eax, [esp + 0xc]
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0094423C]
        lea ecx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_009563EC]
        lea edx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0092944C]
        lea eax, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0095894C]
        lea ecx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_00958948]
        lea edx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_00958944]
        lea eax, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [edi + 0x174]
        mov ecx, esi
        fstp dword ptr [esp + 0x18]
        xor edi, edi
        call ext_0041CD60
        test eax, eax
        jle L_5608E3
        mov ebx, dword ptr [mem_00925134]
    L_5608A1:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_5608B4
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_5608B6
    L_5608B4:
        call ebx
    L_5608B6:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [ecx + 4*edi]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x41
        jnp L_5608F6
        mov ecx, esi
        add edi, 0x1
        call ext_0041CD60
        cmp edi, eax
        jl L_5608A1
    L_5608E3:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_5608FF
        xor esi, esi
        pop edi
        lea eax, [esi - 0x1]
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    L_5608F6:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    L_5608FF:
        mov esi, dword ptr [esi + 0x8]
        sub esi, eax
        sar esi, 0x2
        pop edi
        lea eax, [esi - 0x1]
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_00403560();
extern "C" void ext_0055E180();
extern "C" void ext_0055E490();
extern "C" void ext_0055F2C0();
extern "C" void ext_00562A80();
extern "C" void ext_00662120();
extern "C" void ext_00663B30();
extern "C" void ext_006A6DD2();
extern "C" void ext_006BC800();
extern "C" void ext_006BC970();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006E7460();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FD0;
extern "C" int mem_00B37F40;

// [0x00562F80] FBXIO::vfunc_10 (574 bytes)
extern "C" __declspec(naked) void __fastcall fn_00562F80(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x89b501
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xb0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x424], 0x0
        push edi
        je L_562FEB
        push 0x9589d4
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x424]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0x28]
        push edx
        mov dword ptr [esp + 0xcc], 0x0
        call eax
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xc8], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_562FEB:
        mov ecx, dword ptr [esi + 0x414]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x84]
        add ecx, 0x4
        call eax
        push 0xb392cc
        lea ecx, [esp + 0x64]
        call dword ptr [mem_00924FE0]
        mov ebp, dword ptr [esp + 0xd0]
        mov edi, 0x1
        mov ecx, ebp
        mov dword ptr [esp + 0xc8], edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        call ext_00663B30
        push 0xb39614
        push eax
        lea edx, [esp + 0x54]
        push edx
        mov byte ptr [esp + 0xdc], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0x14
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xc8], 0x4
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x414]
        mov eax, dword ptr [ecx + 0x4]
        mov eax, dword ptr [eax + 0x5c]
        add ecx, 0x4
        lea edx, [esp + 0x60]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x414]
        mov edx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [edx + 0x60]
        add ecx, 0x4
        lea eax, [esp + 0x44]
        push eax
        call edx
        add dword ptr [mem_00B37F40], edi
        mov ecx, dword ptr [esi + 0x420]
        call ext_00662120
        mov ecx, ebp
        lea edi, [esi + 0x470]
        lea ebx, [esi + 0x46c]
        call dword ptr [mem_00924FF0]
        push eax
        push edi
        push ebx
        mov ecx, esi
        call ext_0055E490
        push ebp
        mov ecx, esi
        call ext_0055F2C0
        push 0x4
        push 0x10
        lea ecx, [esp + 0x18]
        call ext_006D2130
        lea eax, [esp + 0x20]
        mov dword ptr [esp + 0x24], eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [edi]
        mov byte ptr [esp + 0xcc], 0x5
        call ext_006BC970
        mov eax, dword ptr [esi + 0xa4]
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [edx + 4*eax]
        call ext_006E7460
        mov ecx, dword ptr [edi]
        push eax
        call ext_006BC800
        mov ecx, esi
        call ext_00562A80
        test al, al
        push ebx
        mov ecx, esi
        jne L_563166
        call ext_0055E180
        push 0x9589b8
        lea ecx, [esp + 0xa8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xa4]
        push eax
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0xcc], 0x6
        call ext_00403560
        push 0x9fa84c
        lea ecx, [esp + 0x80]
        push ecx
        mov dword ptr [esp + 0x84], 0x95879c
        call ext_006A6DD2
    L_563166:
        call ext_0055E180
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xc8], 0x4
        call ext_006D2160
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0xc8], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0xc8], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xc0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xbc
        ret 0x4
    }
}
