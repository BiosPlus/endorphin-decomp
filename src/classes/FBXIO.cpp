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

// [0x00560300] FBXIO::vfunc_14 (659 bytes)
extern "C" void ext_00406940();
extern "C" void ext_0040ECB0();
extern "C" void ext_0055F3D0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006BC370();
extern "C" void ext_006D3DF0();
extern "C" void ext_006D5C30();
extern "C" void ext_006D5C40();
extern "C" void ext_006D5FD0();
extern "C" void ext_006D6AD0();
extern "C" void ext_006D6B10();
extern "C" __declspec(naked) int __fastcall fn_00560300(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x89b312
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x6c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x27c]
        mov edx, dword ptr [eax + 0x84]
        lea ebp, [esi + 0x27c]
        push edi
        mov ecx, ebp
        call edx
        mov ecx, dword ptr [esp + 0x8c]
        lea ebx, [esi + 0x470]
        lea edi, [esi + 0x46c]
        call dword ptr [mem_00924FF0]
        push eax
        push ebx
        push edi
        mov ecx, esi
        call ext_0055E490
        mov ecx, dword ptr [edi]
        call ext_006D3DF0
        mov ecx, dword ptr [esp + 0x8c]
        mov edi, eax
        mov eax, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, edi
        call eax
        lea ecx, [esi + 0x40]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006D6AD0
        mov ecx, dword ptr [ebx]
        push 0x0
        push ecx
        mov ecx, edi
        call ext_006D5FD0
        test al, al
        jne L_560423
        mov ecx, edi
        call ext_006D5C30
        cmp eax, 0x9
        jne L_5603DE
        lea eax, [esi + 0x46c]
        push eax
        mov ecx, esi
        mov byte ptr [esi + 0x90], 0x1
        call ext_0055E180
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x6c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x78
        ret 0x4
L_5603DE:
        mov ecx, edi
        call ext_006D5C40
        push eax
        lea ecx, [esp + 0x64]
        call dword ptr [mem_00924FE4]
        lea eax, [esi + 0x46c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x88], 0x0
        call ext_0055E180
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x84], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_56057C
L_560423:
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x94]
        push ecx
        mov ecx, edi
        mov byte ptr [esi + 0x90], 0x0
        call ext_006D6B10
        mov edx, dword ptr [esp + 0x8c]
        push 0x4
        push 0x10
        lea ecx, [esp + 0x34]
        mov dword ptr [esi + 0x4b8], edx
        call ext_006D2130
        lea eax, [esp + 0x3c]
        mov dword ptr [esp + 0x40], eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [ebx]
        mov dword ptr [esp + 0x88], 0x1
        call ext_006BC970
        xor edi, edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        cmp dword ptr [esp + 0x2c], edi
        mov byte ptr [esp + 0x84], 0x2
        jle L_5604E8
        jmp L_5604A0
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_5604A0:
        mov edx, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [edx + edi * 4]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x88], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x84], 0x2
        call dword ptr [mem_00924FF4]
        add edi, 0x1
        cmp edi, dword ptr [esp + 0x2c]
        jl L_5604A0
L_5604E8:
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esi + 0x94]
        call ext_00406940
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x84]
        mov ecx, ebp
        call eax
        mov ecx, dword ptr [ebx]
        call ext_006BC370
        push eax
        push ebp
        mov ecx, esi
        call ext_0055F3D0
        lea eax, [esi + 0x46c]
        push eax
        mov ecx, esi
        call ext_0055E180
        mov esi, dword ptr [esp + 0x20]
        xor ebx, ebx
        cmp esi, ebx
        mov byte ptr [esp + 0x84], 0x1
        je L_56055C
        mov edi, dword ptr [esp + 0x24]
        cmp esi, edi
        je L_560553
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_560540:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne L_560540
        mov esi, dword ptr [esp + 0x20]
L_560553:
        push esi
        call ext_006A5C5C
        add esp, 0x4
L_56055C:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x84], 0xffffffff
        call ext_006D2160
L_56057C:
        mov ecx, dword ptr [esp + 0x7c]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x78
        ret 0x4
    }
}

// [0x00562C50] FBXIO::vfunc_11 (803 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0055DF80();
extern "C" void ext_0055E180();
extern "C" void ext_0055E490();
extern "C" void ext_0055F2C0();
extern "C" void ext_00562580();
extern "C" void ext_00661A10();
extern "C" void ext_00661F70();
extern "C" void ext_006620E0();
extern "C" void ext_00662120();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" void ext_006A7310();
extern "C" void ext_006BB760();
extern "C" void ext_006BC370();
extern "C" void ext_006BC7F0();
extern "C" void ext_006BC800();
extern "C" void ext_006BC970();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D98F0();
extern "C" void ext_006DAE00();
extern "C" void ext_006E7460();
extern "C" int mem_00924FF0;
extern "C" int mem_00928E78;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00993828;
extern "C" int mem_0092C528;
extern "C" int mem_00993868;
extern "C" int mem_00925134;
extern "C" int mem_00924FD4;
extern "C" int mem_0089B4A8;
extern "C" int mem_00958968;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00562C50(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push offset mem_0089B4A8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x54]
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
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
        mov ecx, dword ptr [edi]
        call ext_006BC7F0
        mov ecx, eax
        call ext_006BB760
        push eax
        call ext_006D98F0
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edi]
        fdivr qword ptr [mem_00928E78]
        add esp, 0x4
        fstp dword ptr [esp + 0x5c]
        call ext_006BC370
        mov ebp, eax
        lea eax, [esi + 0xac]
        push eax
        mov ecx, esi
        call ext_0055DF80
        push 0x4
        push 0x10
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x28], eax
        call ext_006D2130
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x48], ecx
        mov ecx, dword ptr [edi]
        lea edx, [esp + 0x34]
        push edx
        mov dword ptr [esp + 0x58], 0x0
        call ext_006BC970
        mov eax, dword ptr [esi + 0xa4]
        mov ecx, dword ptr [esp + 0x44]
        mov ecx, dword ptr [ecx + 4*eax]
        call ext_006E7460
        mov ecx, dword ptr [edi]
        push eax
        call ext_006BC800
        lea eax, [esp + 0x2c]
        mov dword ptr [esp + 0x24], 0xffffffff
        mov dword ptr [esp + 0x28], 0x7fffffff
        mov dword ptr [esp + 0x2c], 0x1
        mov dword ptr [esp + 0x30], 0x80000000
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0x30]
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, ebp
        call edx
        test al, al
        jne L_562d8a
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push offset mem_00958968
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov edi, 0x1
        jmp L_562df8
    L_562d8a:
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        push 0x0
        push 0x2c0beae
        push edx
        push eax
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        push 0x0
        push 0x2c0beae
        push ecx
        push edx
        mov edi, eax
        call ext_006A7310
        sub eax, edi
        mov dword ptr [esp + 0x1c], eax
        fild dword ptr [esp + 0x1c]
        sub esp, 0x8
        mov dword ptr [esp + 0x1c], edi
        fdiv dword ptr [esp + 0x64]
        fadd qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp + 0x24]
        add esp, 0x8
        fld dword ptr [esp + 0x1c]
        call ext_006A6DE0
        mov edi, eax
        add edi, 0x1
    L_562df8:
        mov ecx, dword ptr [esi + 0x420]
        call ext_00662120
        mov ecx, dword ptr [esi + 0x420]
        push 0x1
        call ext_00661F70
        cmp dword ptr [esi + 0x424], 0x0
        je L_562e2c
        mov ecx, dword ptr [esi + 0x424]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        lea edx, [edi + edi]
        push edx
        push 0x0
        call eax
    L_562e2c:
        fld dword ptr [esp + 0x5c]
        add edi, -0x1
        fmul qword ptr [mem_0092C528]
        fstp dword ptr [esp + 0x1c]
        fild dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x1c], edi
        fstp dword ptr [esp + 0x14]
        js L_562f1e
        lea ebp, [esi + 0x4c0]
        align 16
    L_562e60:
        cmp dword ptr [esi + 0x424], 0x0
        je L_562e7b
        mov ecx, dword ptr [esi + 0x424]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x4]
        push eax
        call edx
    L_562e7b:
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x474]
        fmul qword ptr [mem_00993868]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_006DAE00
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        jbe L_562ea4
        call dword ptr [mem_00925134]
    L_562ea4:
        mov ebx, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], ebx
        jbe L_562eb2
        call dword ptr [mem_00925134]
    L_562eb2:
        cmp ebp, ebp
        je L_562ebc
        call dword ptr [mem_00925134]
    L_562ebc:
        cmp edi, ebx
        je L_562eec
        cmp edi, dword ptr [ebp + 0x8]
        jb L_562ecb
        call dword ptr [mem_00925134]
    L_562ecb:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [edi]
        push 0x1
        push eax
        push ecx
        mov ecx, esi
        call ext_00562580
        cmp edi, dword ptr [ebp + 0x8]
        jb L_562ee7
        call dword ptr [mem_00925134]
    L_562ee7:
        add edi, 0x4
        jmp L_562ea4
    L_562eec:
        mov edi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x1c]
        cmp edi, ebx
        jge L_562f03
        mov ecx, dword ptr [esi + 0x420]
        call ext_006620E0
    L_562f03:
        fld dword ptr [esp + 0x14]
        add edi, 0x1
        cmp edi, ebx
        fadd dword ptr [esp + 0x5c]
        mov dword ptr [esp + 0x10], edi
        fstp dword ptr [esp + 0x14]
        jle L_562e60
    L_562f1e:
        push offset mem_00928B5D
        lea ecx, [esi + 0x40]
        call dword ptr [mem_00924FD4]
        lea eax, [esi + 0x46c]
        push eax
        mov ecx, esi
        call ext_0055E180
        fld dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0x420]
        fstp dword ptr [esp]
        call ext_00661A10
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x54], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x4c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x4
    }
}
