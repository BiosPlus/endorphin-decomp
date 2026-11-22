// Decompiled translation unit: src/leaf/decompiled_7B0000.cpp

extern "C" void ext_00872828();
extern "C" void ext_007B06F0();
extern "C" void ext_007C1450();
extern "C" void ext_007C1480();
extern "C" void ext_007C2E80();
extern "C" void ext_007C3320();
extern "C" void ext_007C3790();
extern "C" void ext_007C38C0();
extern "C" int mem_007C13C0;
extern "C" int mem_007C1434;
extern "C" int mem_0099A4D8;
extern "C" int mem_00AB27D0;
extern "C" int mem_00AB27BC;
extern "C" int mem_00AB27A4;
extern "C" int mem_00AB2788;
extern "C" int mem_00AB2774;
extern "C" int mem_00AB2760;
extern "C" int mem_00AB2740;
extern "C" int mem_00AB271C;
extern "C" int mem_00AB2700;
extern "C" int mem_00AB26E4;
extern "C" int mem_00AB26C8;
extern "C" int mem_00AB26B0;
extern "C" int mem_00AB2694;
extern "C" int mem_00AB267C;
extern "C" int mem_00AB265C;
extern "C" int mem_00AB2644;
extern "C" int mem_00AB262C;
extern "C" int mem_00999AF8;
extern "C" int mem_00999AF0;
extern "C" int mem_00999A78;
extern "C" int mem_009548E0;
extern "C" int mem_00999A70;
extern "C" int mem_009252B4;
extern "C" int mem_00999A60;
extern "C" int mem_00993828;
extern "C" void ext_0079B010();
extern "C" void ext_007BAA40();

extern "C" void ext_007BAA40();
extern "C" __declspec(naked) int __cdecl fn_007BB140(double x, int seed) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999AF8]
        fnstsw ax
        test ah, 0x1
        jne L_7BB157
        mov eax, 0x3ff
        ret
L_7BB157:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999AF0]
        fnstsw ax
        test ah, 0x41
        je L_7BB16B
        xor eax, eax
        ret
L_7BB16B:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        jne L_7BB193
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_009548E0]
        fmul qword ptr [mem_00999A70]
        call ext_00872828
        ret
L_7BB193:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_009548E0]
        fmul qword ptr [mem_00999A70]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
        call ext_00872828
        ret
    }
}

extern "C" int mem_00925208;
extern "C" void ext_007AA510();
extern "C" bool mem_00B61219;

extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void* __cdecl fn_007B3380(int* s) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        cmp eax, 0x80f0
        jg L_7b36e8
        je L_7b385f
        cmp eax, 0x4000
        jg L_7b3541
        je L_7b3792
        cmp eax, 0x1460
        jg L_7b347c
        je L_7b3792
        cmp eax, 0x1100
        jg L_7b33f4
        je L_7b3792
        add eax, -0x2
        cmp eax, 0xfe
        ja L_7b38fa
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b3934]
        jmp dword ptr [4*ecx + 0x7b3920]
    L_7b33e4:
        push 0xc
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b33f4:
        cmp eax, 0x1420
        jg L_7b344f
        je L_7b3806
        cmp eax, 0x1400
        jg L_7b3434
        je L_7b3792
        cmp eax, 0x1200
        je L_7b3914
        cmp eax, 0x1300
        jne L_7b38fa
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3434:
        cmp eax, 0x1410
        jne L_7b38fa
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b344f:
        sub eax, 0x1430
        je L_7b3806
        sub eax, 0x10
        je L_7b3792
        sub eax, 0x10
        jne L_7b38fa
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b347c:
        cmp eax, 0x3030
        jg L_7b34e7
        je L_7b34bd
        cmp eax, 0x2302
        jg L_7b34cd
        je L_7b34bd
        cmp eax, 0x2200
        jg L_7b34b2
        je L_7b34bd
        cmp eax, 0x1500
        je L_7b33e4
        cmp eax, 0x2100
        je L_7b3914
        jmp L_7b38fa
    L_7b34b2:
        cmp eax, 0x2300
        jne L_7b38fa
    L_7b34bd:
        push 0x10
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b34cd:
        sub eax, 0x3000
        je L_7b3914
        sub eax, 0x10
        je L_7b34bd
        sub eax, 0x10
        je L_7b34bd
        jmp L_7b38fa
    L_7b34e7:
        cmp eax, 0x3080
        jg L_7b3521
        je L_7b3792
        add eax, 0xffffcfc0
        cmp eax, 0x30
        ja L_7b38fa
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b3a40]
        jmp dword ptr [4*edx + 0x7b3a34]
        push 0x1c
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3521:
        sub eax, 0x3d3d
        je L_7b3914
        dec eax
        je L_7b3792
        sub eax, 0x6c
        je L_7b3914
        jmp L_7b38fa
    L_7b3541:
        cmp eax, 0x4654
        jg L_7b361b
        je L_7b3792
        cmp eax, 0x4165
        jg L_7b3598
        je L_7b3588
        add eax, 0xffffbf00
        cmp eax, 0x60
        ja L_7b38fa
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b3a88]
        jmp dword ptr [4*ecx + 0x7b3a74]
        push 0x30
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3588:
        push 0x1
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3598:
        cmp eax, 0x4600
        jg L_7b35e2
        je L_7b33e4
        add eax, 0xffffbe90
        cmp eax, 0x20
        ja L_7b38fa
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b3b00]
        jmp dword ptr [4*edx + 0x7b3aec]
        push 0x18
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
        push 0x58
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b35e2:
        sub eax, 0x4610
        je L_7b38d3
        sub eax, 0x31
        je L_7b360b
        sub eax, 0x12
        jne L_7b38fa
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b360b:
        push 0xc
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b361b:
        cmp eax, 0x4700
        jg L_7b3649
        je L_7b3639
        add eax, 0xffffb9aa
        cmp eax, 0x5
        ja L_7b38fa
        jmp dword ptr [4*eax + 0x7b3b24]
    L_7b3639:
        push 0x20
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3649:
        cmp eax, 0x8000
        jg L_7b36c3
        je L_7b3914
        cmp eax, 0x7001
        jg L_7b3686
        je L_7b3676
        cmp eax, 0x4720
        je L_7b36d8
        cmp eax, 0x4d4d
        je L_7b3914
        jmp L_7b38fa
    L_7b3676:
        push 0xe
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3686:
        cmp eax, 0x7011
        jl L_7b38fa
        cmp eax, 0x7012
        jle L_7b36b3
        cmp eax, 0x7020
        jne L_7b38fa
        push 0x8
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b36b3:
        push 0x2c
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b36c3:
        add eax, 0xffff7fff
        cmp eax, 0x8
        ja L_7b38fa
        jmp dword ptr [4*eax + 0x7b3b3c]
    L_7b36d8:
        push 0x8
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b36e8:
        cmp eax, 0xa348
        jg L_7b37cf
        je L_7b3914
        cmp eax, 0xa310
        jg L_7b37a2
        je L_7b33e4
        cmp eax, 0xa087
        jg L_7b3732
        je L_7b3792
        add eax, 0xffff6000
        cmp eax, 0x84
        ja L_7b38fa
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b3b6c]
        jmp dword ptr [4*ecx + 0x7b3b60]
    L_7b3732:
        cmp eax, 0xa220
        jg L_7b3777
        je L_7b3914
        cmp eax, 0xa204
        jg L_7b3767
        je L_7b3914
        cmp eax, 0xa100
        je L_7b3806
        cmp eax, 0xa200
        je L_7b3914
        jmp L_7b38fa
    L_7b3767:
        cmp eax, 0xa210
        je L_7b3914
        jmp L_7b38fa
    L_7b3777:
        sub eax, 0xa230
        je L_7b3914
        sub eax, 0x22
        je L_7b3806
        sub eax, 0xae
        jne L_7b38fa
    L_7b3792:
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b37a2:
        add eax, 0xffff5ce0
        cmp eax, 0x26
        ja L_7b38fa
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b3c00]
        jmp dword ptr [4*edx + 0x7b3bf4]
        push 0x8
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b37cf:
        cmp eax, 0xb00a
        jg L_7b387f
        je L_7b386f
        cmp eax, 0xa35c
        jg L_7b3816
        je L_7b3792
        add eax, 0xffff5cb6
        cmp eax, 0x10
        ja L_7b38fa
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b3c38]
        jmp dword ptr [4*ecx + 0x7b3c28]
    L_7b3806:
        push 0x2
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3816:
        cmp eax, 0xb007
        jg L_7b384d
        cmp eax, 0xafff
        jge L_7b3914
        add eax, 0xffff5ca0
        cmp eax, 0x8
        ja L_7b38fa
        jmp dword ptr [4*eax + 0x7b3c4c]
        push 0x3
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b384d:
        sub eax, 0xb008
        je L_7b36d8
        dec eax
        jne L_7b38fa
    L_7b385f:
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b386f:
        push 0xc
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b387f:
        cmp eax, 0xb020
        jg L_7b38a9
        je L_7b38c3
        add eax, 0xffff4ff0
        cmp eax, 0x5
        ja L_7b38fa
        jmp dword ptr [4*eax + 0x7b3c70]
        push 0xc
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b38a9:
        cmp eax, 0xb030
        jg L_7b38f3
        je L_7b38e3
        add eax, 0xffff4fdf
        cmp eax, 0x8
        ja L_7b38fa
        jmp dword ptr [4*eax + 0x7b3c88]
    L_7b38c3:
        push 0x18
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b38d3:
        push 0x14
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b38e3:
        push 0x2
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b38f3:
        cmp eax, 0xc23d
        je L_7b3914
    L_7b38fa:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0x6
        jbe L_7b391b
        add eax, -0x6
        push eax
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        pop esi
        ret
    L_7b3914:
        mov dword ptr [esi + 0xc], 0x0
    L_7b391b:
        mov eax, dword ptr [esi + 0xc]
        pop esi
        ret
    }
}
extern "C" void ext_0079B030();
extern "C" void ext_007BA3E0();

extern "C" void ext_007BA3E0();
extern "C" void ext_007B78D0();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B7E40(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push eax
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_007B7E62
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_007B7E6E
    L_007B7E62:
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_007B78D0
        add esp, 4
    L_007B7E6E:
        pop esi
        ret
    }
}
extern "C" void ext_006D2130();
extern "C" int mem_007BDA50;
extern "C" void ext_007BFDF0();
extern "C" void ext_00798840();
extern "C" void ext_007AF200();

extern "C" void ext_007AF200();
extern "C" void ext_007BAA40();
extern "C" __declspec(naked) void __fastcall fn_007BA6D0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov dx, word ptr [esp + 0x8]
        mov cx, word ptr [esp + 0xc]
        mov word ptr [eax + 0x2], dx
        mov edx, dword ptr [esp + 0x18]
        mov word ptr [eax], cx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov dword ptr [eax + 0x4], ecx
        push eax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_007BAA40
        add esp, 0xc
        ret
    }
}
extern "C" void ext_007B8BA0();
extern "C" void ext_007B8BB0();
extern "C" void ext_007B8C10();
extern "C" void ext_007B8E60();

extern "C" void ext_007B8BB0();
extern "C" void ext_007B8C10();
extern "C" void ext_007B8E60();
extern "C" int __cdecl fn_007BA690(void* a, unsigned short b, unsigned short c, unsigned char* d, int e, int* f) {
    *(unsigned short*)d = c;
    *(unsigned short*)(d + 2) = b;
    *(int*)(d + 4) = e;
    if (e == 1) {
        *(int*)(d + 8) = *f;
        return 1;
    }
    return ((int (__cdecl*)(void*, unsigned char*, int*))ext_007BAA40)(a, d, f);
}
extern "C" void ext_0079AF40();
extern "C" void ext_0079B140();

extern "C" void ext_0079B140();
extern "C" void ext_0079EBE0();
extern "C" void ext_007B7890();
extern "C" int mem_009252C4;

extern "C" __declspec(naked) void __cdecl fn_007B7D40(int a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        push 0x0
        lea eax, [esi + 0x2]
        push eax
        call ext_0079EBE0
        mov edi, dword ptr [mem_009252C4]
        push eax
        call edi
        mov ebx, dword ptr [esp + 0x20]
        mov ecx, ebx
        sub ecx, esi
        push ecx
        call ext_007B7890
        mov al, byte ptr [mem_00B61218]
        add esp, 0x10
        test al, al
        je short L_skip
        mov al, byte ptr [mem_00B61219]
        test al, al
        je short L_call
    L_skip:
        push 0x0
        push ebx
        call ext_0079EBE0
        push eax
        call edi
        add esp, 0xc
    L_call:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
extern "C" void ext_007BAE90();
extern "C" int mem_00AB2544;
extern "C" void ext_006A5C5C();
extern "C" void ext_00783AF0();
extern "C" int mem_009994DC;

extern "C" void ext_00783AF0();
extern "C" int mem_009994DC;
extern "C" void ext_006D2250();
extern "C" void ext_007B20F0();

extern "C" __declspec(naked) void __fastcall fn_007B23E0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov eax, dword ptr [edi + 8]
        lea ebx, [edi + 8]
        test eax, eax
        jle L_END_007B23E0
        push ebp
L_LOOP_007B23E0:
        mov al, byte ptr [edi + 4]
        test al, al
        je L_SKIP_007B23E0
        mov eax, dword ptr [edi + 0x18]
        mov ecx, dword ptr [eax + 4*esi]
        mov byte ptr [ecx + 0x4c], 0
L_SKIP_007B23E0:
        mov edx, dword ptr [edi + 0x18]
        mov ebp, dword ptr [edx + 4*esi]
        test ebp, ebp
        je L_NEXT_007B23E0
        mov ecx, ebp
        call ext_007B20F0
        push ebp
        call ext_006A5C5C
        add esp, 4
L_NEXT_007B23E0:
        mov eax, dword ptr [ebx]
        inc esi
        cmp esi, eax
        jl L_LOOP_007B23E0
        pop ebp
L_END_007B23E0:
        mov ecx, ebx
        call ext_006D2250
        pop edi
        pop esi
        pop ebx
        ret
    }
}
extern "C" void ext_0079B850();
extern "C" int mem_0092522C;
extern "C" void ext_007BFF40();
extern "C" void ext_007C15F0();

extern "C" void ext_007C15F0();
extern "C" void ext_006D2160();
extern "C" void ext_0079E900();
extern "C" void ext_007B23E0();

extern "C" __declspec(naked) void __fastcall fn_007B22B0(void* self) {
    __asm {
        push -1
        push 0x008C1CCB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009994E4
        push 0x007B2320
        push esi
        mov dword ptr [esp + 0x18], 0x0
        call ext_0079E900
        add esp, 0x8
        mov ecx, esi
        call ext_007B23E0
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();

extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007B3250(void* p) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        jne L_7b326c
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b32bd
    L_7b326c:
        mov eax, dword ptr [edi]
        test eax, eax
        je L_7b32bd
        mov ecx, dword ptr [eax + 0x8]
        push ebx
        mov ebx, dword ptr [mem_009251D8]
        test ecx, ecx
        je L_7b32ae
        mov ecx, dword ptr [eax + 0x4]
        push esi
        xor esi, esi
        test ecx, ecx
        jbe L_7b32a2
    L_7b328a:
        mov eax, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax + 4*esi]
        test eax, eax
        je L_7b329a
        push eax
        call ebx
        add esp, 0x4
    L_7b329a:
        mov eax, dword ptr [edi]
        inc esi
        cmp esi, dword ptr [eax + 0x4]
        jb L_7b328a
    L_7b32a2:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 0x8]
        push edx
        call ebx
        add esp, 0x4
        pop esi
    L_7b32ae:
        mov eax, dword ptr [edi]
        push eax
        call ebx
        add esp, 0x4
        mov dword ptr [edi], 0x0
        pop ebx
    L_7b32bd:
        pop edi
        ret
    }
}
extern "C" int mem_00AB224C;
extern "C" void ext_0079AFE0();
extern "C" void ext_007AF420();

extern "C" void ext_007AF420();
extern "C" void ext_007B2D80();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B7110();
extern "C" __declspec(naked) void __cdecl fn_007B2B60(...) {
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        lea     eax, [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    eax
        push    0x80f0
        push    ecx
        mov     byte ptr [ebx], 0
        call    ext_007B2D80
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0xc
        test    eax, eax
        je      loc_7B2BCD
        push    eax
        call    ext_007B3CF0
        add     esp, 0x4
        test    eax, eax
        je      loc_7B2BCD
        push    edi
        mov     edi, dword ptr [eax]
        test    edi, edi
        je      loc_7B2BBF
        cmp     byte ptr [edi], 0
        je      loc_7B2BBF
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        push    esi
        mov     edx, ecx
        mov     esi, edi
        mov     edi, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     esi
loc_7B2BBF:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ext_007B7110
        add     esp, 0x4
        pop     edi
loc_7B2BCD:
        pop     ebx
        ret
    }
}
extern "C" void ext_007B2480();

// [0x007B7EB0] sub_007B7EB0 (112 bytes)
extern "C" void ext_007B7790(unsigned short);
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B7EB0(const unsigned short* a1) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ax, word ptr [esi]
        push    eax
        call    ext_007B7790
        mov     al, byte ptr [mem_00B61218]
        add     esp, 4
        test    al, al
        je      loc_7B7ED3
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F1E
    loc_7B7ED3:
        mov     cx, word ptr [esi + 2]
        push    ecx
        call    ext_007B7790
        mov     al, byte ptr [mem_00B61218]
        add     esp, 4
        test    al, al
        je      loc_7B7EF2
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F1E
    loc_7B7EF2:
        mov     dx, word ptr [esi + 4]
        push    edx
        call    ext_007B7790
        mov     al, byte ptr [mem_00B61218]
        add     esp, 4
        test    al, al
        je      loc_7B7F11
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F1E
    loc_7B7F11:
        mov     ax, word ptr [esi + 6]
        push    eax
        call    ext_007B7790
        add     esp, 4
    loc_7B7F1E:
        pop     esi
        ret
    }
}

extern "C" unsigned short ext_007B77D0();
extern "C" int mem_00999750;
extern "C" int mem_00999754;
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

// [0x007B7F20] sub_007B7F20 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B7F20(unsigned short* out) {
    __asm {
        mov     eax, dword ptr [mem_00999750]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     dword ptr [esi], eax
        mov     ecx, dword ptr [mem_00999754]
        mov     dword ptr [esi + 4], ecx
        call    ext_007B77D0
        mov     word ptr [esi], ax
        mov     al, byte ptr [mem_00B61218]
        test    al, al
        je      loc_7B7F4F
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F8E
    loc_7B7F4F:
        call    ext_007B77D0
        mov     word ptr [esi + 2], ax
        mov     al, byte ptr [mem_00B61218]
        test    al, al
        je      loc_7B7F6A
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F8E
    loc_7B7F6A:
        call    ext_007B77D0
        mov     word ptr [esi + 4], ax
        mov     al, byte ptr [mem_00B61218]
        test    al, al
        je      loc_7B7F85
        mov     al, byte ptr [mem_00B61219]
        test    al, al
        je      loc_7B7F8E
    loc_7B7F85:
        call    ext_007B77D0
        mov     word ptr [esi + 6], ax
    loc_7B7F8E:
        pop     esi
        ret
    }
}

// [0x007BF4E0] sub_007BF4E0 (144 bytes)
extern "C" void ext_007AF420();
extern "C" __declspec(naked) void __fastcall fn_007BF4E0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push 0x1
        mov edi, dword ptr [esi + 0x1cc]
        push 0x999c40
        push esi
        call ext_007AF420
        mov eax, dword ptr [esi + 0x220]
        add esp, 0xc
        mov dword ptr [edi + 0x1c], eax
        mov ecx, dword ptr [esi + 0x21c]
        mov dword ptr [esi + 0x220], 0x7bfd40
        mov dword ptr [edi + 0x20], ecx
        mov edx, dword ptr [esi + 0x224]
        mov dword ptr [esi + 0x21c], 0x7bfcf0
        mov dword ptr [edi + 0x24], edx
        mov eax, dword ptr [esi + 0x18c]
        mov dword ptr [esi + 0x224], 0x7bfd80
        mov dword ptr [edi + 0x28], eax
        mov ecx, dword ptr [esi + 0x194]
        mov dword ptr [esi + 0x18c], 0x7bf570
        mov dword ptr [edi + 0x2c], ecx
        mov dword ptr [esi + 0x194], 0x7bf6d0
        mov dword ptr [edi], 0x1
        mov dword ptr [edi + 0xc], 0x0
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007B0F30] sub_007B0F30 (144 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007AF5E0();
extern "C" int mem_00AB1498;

// [0x007B0F30]
extern "C" __declspec(naked) void __cdecl fn_007B0F30(void* a1, void* a2, int a3, int a4, float* a5) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        xor ecx, ecx
        sub esp, 0x8
        cmp eax, ecx
        jne L_else
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov cx, word ptr [edx]
        push eax
        push ecx
        push esi
        call ext_007AF5E0
        mov eax, dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi]
        add esp, 0x8
        push eax
        push 0xab1498
        push ecx
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop esi
        add esp, 0x8
        ret
L_else:
        mov edx, dword ptr [esp + 0x10]
        cmp word ptr [edx + 0x2], 0x5
        jne L_other
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x4], ecx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [esp + 0x4], ecx
        mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        fstp dword ptr [eax]
        mov eax, 0x1
        add esp, 0x8
        ret
L_other:
        fild dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, 0x1
        fidiv dword ptr [esp + 0x18]
        fstp dword ptr [ecx]
        add esp, 0x8
        ret
    }
}

// [0x007BC450] sub_007BC450 (159 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079B140();
extern "C" void ext_007BC4F0();

extern "C" __declspec(naked) int __cdecl fn_007BC450(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, dword ptr [ebx + 0x1cc]
        lea edi, [ebx + 0x18]
        cmp dword ptr [esi], -1
        jne short L_470
        push edi
        call ext_007BC4F0
        add esp, 0x4
        mov dword ptr [esi], eax
L_470:
        mov eax, dword ptr [esi]
        _emit 0x83
        _emit 0xE8
        _emit 0x00
        je short L_4A7
        dec eax
        je short L_49E
        _emit 0x83
        _emit 0xE8
        _emit 0x02
        je short L_495
        mov eax, dword ptr [ebx]
        push 0xab20cc
        push eax
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
L_495:
        mov dword ptr [esi + 0x8], 0x1
        jmp short L_4AE
L_49E:
        mov dword ptr [esi + 0x8], 0x2
        jmp short L_4AE
L_4A7:
        mov dword ptr [esi + 0x8], 0x4
L_4AE:
        mov eax, dword ptr [edi + 0x38]
        imul eax, dword ptr [edi + 0xc]
        mov dword ptr [esi + 0x10], eax
        lea ecx, [eax + eax]
        push ecx
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        test eax, eax
        jne short L_4E6
        mov edx, dword ptr [ebx]
        push edx
        push 0xab20a0
        push 0x9999f0
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
L_4E6:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    }
}

// [0x007B2E50] sub_007B2E50 (159 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B7490();
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B2E50() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_call
        test ebx, ebx
        jne L_main
    L_call:
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_restore
    L_main:
        mov eax, dword ptr [ebx]
        push eax
        call ext_007B7490
        mov esi, dword ptr [edi + 0x14]
        add esp, 4
        test esi, esi
        mov ebp, eax
        jne L_nonempty
        mov dword ptr [edi + 0x14], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_nonempty:
        mov eax, dword ptr [esi + 0x10]
        xor edi, edi
        test eax, eax
        je L_tail
    L_loop:
        mov ecx, dword ptr [esi]
        push ecx
        call ext_007B7490
        add esp, 4
        cmp ebp, eax
        jg L_tail
        mov edi, esi
        mov esi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        jne L_loop
    L_tail:
        mov edx, dword ptr [esi]
        push edx
        call ext_007B7490
        add esp, 4
        cmp ebp, eax
        jle L_after
        test edi, edi
        mov dword ptr [ebx + 0x10], esi
        je L_head
        mov dword ptr [edi + 0x10], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_head:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x14], ebx
        pop ebx
        ret
    L_after:
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebx + 0x10], ecx
        mov dword ptr [esi + 0x10], ebx
    L_restore:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B16E0] sub_007B16E0 (224 bytes)
extern "C" void ext_00798FF0();
extern "C" void ext_0079AF50();
extern "C" void ext_007B04C0();
extern "C" void ext_007B0A40();
extern "C" void ext_007B10D0();
extern "C" int mem_00999410;

extern "C" __declspec(naked) void __cdecl fn_007B16E0() {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp word ptr [esi + 0x2], 0x5
        jne L_7b1702
        mov eax, dword ptr [esp + 0x10]
        push esi
        push eax
        call ext_007B0A40
        add esp, 0x8
        pop esi
        add esp, 0x8
        ret
    L_7b1702:
        mov ecx, dword ptr [esi + 0x4]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push edi
        push offset mem_00999410
        shl ecx, 0x2
        push ecx
        push ebp
        call ext_007B04C0
        mov edi, eax
        add esp, 0xc
        test edi, edi
        mov dword ptr [esp + 0x1c], edi
        je L_7b1737
        push edi
        push esi
        push ebp
        call ext_007B10D0
        add esp, 0xc
        test eax, eax
        jne L_7b173b
    L_7b1737:
        xor ebx, ebx
        jmp L_7b17a9
    L_7b173b:
        mov edx, dword ptr [esi + 0x4]
        push offset mem_00999410
        shl edx, 0x2
        push edx
        push ebp
        call ext_007B04C0
        mov edi, eax
        add esp, 0xc
        xor ebx, ebx
        test edi, edi
        setne bl
        test ebx, ebx
        je L_7b17a5
        mov eax, dword ptr [esi + 0x4]
        xor ecx, ecx
        test eax, eax
        jbe L_7b178d
    L_7b1766:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, edi
        sub edx, edi
    L_7b176e:
        mov ebx, dword ptr [edx + eax]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x10], ebx
        inc ecx
        fild qword ptr [esp + 0x10]
        add eax, 0x4
        fstp dword ptr [eax - 0x4]
        cmp ecx, dword ptr [esi + 0x4]
        jb L_7b176e
    L_7b178d:
        xor eax, eax
        push edi
        mov ax, word ptr [esi]
        push eax
        push ebp
        call ext_00798FF0
        push edi
        mov ebx, eax
        call ext_0079AF50
        add esp, 0x10
    L_7b17a5:
        mov edi, dword ptr [esp + 0x1c]
    L_7b17a9:
        test edi, edi
        je L_7b17b6
        push edi
        call ext_0079AF50
        add esp, 0x4
    L_7b17b6:
        pop edi
        mov eax, ebx
        pop ebp
        pop ebx
        pop esi
        add esp, 0x8
        ret
    }
}

// [0x007B2F70] sub_007B2F70 (239 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B2C20();
extern "C" void ext_007B6210();
extern "C" unsigned char mem_009996FC;
extern "C" __declspec(naked) void __cdecl fn_007B2F70(void* src, void* dst) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        test esi, esi
        je L_007B2F82
        test edi, edi
        jne L_007B2F99
    L_007B2F82:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_007B305C
    L_007B2F99:
        push edi
        mov dword ptr [edi], 0x0
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_007B2FBE
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_007B305C
    L_007B2FBE:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 0x8], edx
        mov eax, dword ptr [edi]
        mov cl, byte ptr [esi + 0x18]
        mov byte ptr [eax + 0x18], cl
        mov edx, dword ptr [edi]
        mov al, byte ptr [esi + 0x19]
        mov byte ptr [edx + 0x19], al
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_007B3024
        mov cl, byte ptr [esi + 0x18]
        mov dl, byte ptr [mem_009996FC]
        cmp cl, dl
        je L_007B3006
        mov edx, dword ptr [edi]
        mov dword ptr [edx + 0xc], eax
        mov dword ptr [esi + 0xc], 0x0
        jmp L_007B3012
    L_007B3006:
        mov eax, dword ptr [edi]
        push eax
        push esi
        call ext_007B6210
        add esp, 0x8
    L_007B3012:
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_007B3024
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_007B305C
    L_007B3024:
        mov esi, dword ptr [esi + 0x14]
        test esi, esi
        je L_007B305C
        mov edi, dword ptr [edi]
        add edi, 0x14
        test esi, esi
        je L_007B305C
    L_007B3034:
        push edi
        push esi
        call fn_007B2F70
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_007B3050
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_007B305C
    L_007B3050:
        mov edi, dword ptr [edi]
        mov esi, dword ptr [esi + 0x10]
        add edi, 0x10
        test esi, esi
        jne L_007B3034
    L_007B305C:
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA2F0();
extern "C" void ext_006E7460();
extern "C" void ext_00783700();
extern "C" void ext_00788D00();
extern "C" void ext_00788D10();
extern "C" void ext_00788F40();
extern "C" void ext_00789120();

// [0x007B20F0] sub_007B20F0 (288 bytes)
extern "C" __declspec(naked) void __fastcall fn_007B20F0(void* self) {
    __asm {
        push    -1
        push    0x8c1cb6
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x760
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        mov     al, byte ptr [ebx + 0x4c]
        mov     dword ptr [esp + 0x778], 0
        test    al, al
        je      L_007B21E5
        sub     esp, 0x4c
        mov     ecx, esp
        mov     dword ptr [esp + 0x5c], esp
        push    ebx
        call    ext_006B9D20
        call    ext_00783700
        add     esp, 0x4c
        lea     ecx, [esp + 0x118]
        call    ext_00788D00
        push    0x2f
        mov     ecx, ebx
        mov     byte ptr [esp + 0x77c], 1
        call    ext_006BA2F0
        push    0x5c
        mov     ecx, ebx
        mov     esi, eax
        call    ext_006BA2F0
        xor     ecx, ecx
        cmp     esi, eax
        setl    cl
        dec     ecx
        mov     ebp, ecx
        and     ecx, esi
        not     ebp
        and     ebp, eax
        or      ebp, ecx
        mov     ecx, ebx
        call    ext_006E7460
        mov     edi, eax
        or      ecx, -1
        xor     eax, eax
        lea     edx, [esp + 0x18]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + ebp + 0x19], 0
        push    ecx
        lea     ecx, [esp + 0x11c]
        call    ext_00789120
        test    al, al
        je      L_007B21D1
        lea     edx, [esp + 0x18]
        lea     ecx, [esp + 0x118]
        push    edx
        call    ext_00788F40
    L_007B21D1:
        lea     ecx, [esp + 0x118]
        mov     byte ptr [esp + 0x778], 0
        call    ext_00788D10
    L_007B21E5:
        mov     ecx, ebx
        mov     dword ptr [esp + 0x778], -1
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x770]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x76c
        ret
    }
}

// [0x007BB8E0] sub_007BB8E0 (368 bytes)
extern "C" void ext_007BAE90();
extern "C" int mem_00993840;
extern "C" int mem_00999B48;
extern "C" int mem_0092A278;
extern "C" int mem_0093F7B0;
extern "C" int mem_00999B30;
extern "C" int mem_00999B58;
extern "C" int mem_00999A60;
extern "C" int mem_00993828;
extern "C" int mem_009252B4;

extern "C" __declspec(naked) int __cdecl fn_007BB8E0(void* self, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        fld dword ptr [esi + 0x4]
        push edi
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_007BAE90
        fld dword ptr [esi + 0x8]
        fmul qword ptr [mem_00993840]
        fld dword ptr [esi + 0x4]
        fmul qword ptr [mem_00999B48]
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        faddp st(1), st
        fadd dword ptr [esi]
        je L_7BB961
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        jne L_7BB961
        fld dword ptr [esi]
        fmul qword ptr [mem_0093F7B0]
        fdiv st, st(1)
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul qword ptr [mem_00999B30]
        fdiv st, st(1)
        fstp qword ptr [esp + 0x18]
        fstp st(0)
        fld qword ptr [esp + 0x10]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        je L_7BB983
        xor esi, esi
        jmp L_7BB9CD
L_7BB961:
        fstp st(0)
        mov dword ptr [esp + 0x10], 0xbd156c1a
        mov dword ptr [esp + 0x14], 0x3fcaf286
        mov dword ptr [esp + 0x18], 0x94b8199e
        mov dword ptr [esp + 0x1c], 0x3fde50d7
L_7BB983:
        test edi, edi
        jne L_7BB993
        fld qword ptr [esp + 0x10]
        fmul qword ptr [mem_00999B58]
        jmp L_7BB9B9
L_7BB993:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fld qword ptr [esp + 0x10]
        fmul qword ptr [mem_00999B58]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
L_7BB9B9:
        call ext_00872828
        mov esi, eax
        cmp esi, 0xff
        jbe L_7BB9CD
        mov esi, 0xff
L_7BB9CD:
        fld qword ptr [esp + 0x18]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        je L_7BB9F3
        mov eax, ebx
        xor ecx, ecx
        shl eax, 0x8
        or eax, esi
        shl eax, 0x8
        or eax, ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_7BB9F3:
        test edi, edi
        jne L_7BBA03
        fld qword ptr [esp + 0x18]
        fmul qword ptr [mem_00999B58]
        jmp L_7BBA29
L_7BBA03:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fld qword ptr [esp + 0x18]
        fmul qword ptr [mem_00999B58]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
L_7BBA29:
        call ext_00872828
        mov ecx, eax
        cmp ecx, 0xff
        jbe L_7BBA3D
        mov ecx, 0xff
L_7BBA3D:
        mov eax, ebx
        pop edi
        shl eax, 0x8
        or eax, esi
        pop esi
        shl eax, 0x8
        or eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_0079B140();
extern "C" void ext_007AF5E0();
extern "C" void ext_007B08E0();
extern "C" void ext_007B09C0();
extern "C" void ext_007B1030();
extern "C" void ext_007B10D0();
extern "C" void ext_007B1110();

// [0x007B12E0] sub_007B12E0 (640 bytes)
extern "C" __declspec(naked) int __cdecl fn_007B12E0(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        xor eax, eax
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov ax, word ptr [esi + 0x2]
        dec eax
        cmp eax, 0xb
        ja L1534
        jmp dword ptr [4*eax + 0x7b1560]
L1300:
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edi
        push esi
        push eax
        call ext_007B08E0
        add esp, 0xc
        test eax, eax
        je L1558
        cmp word ptr [esi + 0x2], 0x1
        mov esi, dword ptr [esi + 0x4]
        jne L1359
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 2*esi]
        lea edx, [esi + 0x1]
L1335:
        xor esi, esi
        sub ecx, 0x8
        mov si, word ptr [eax]
        sub eax, 0x2
        mov dword ptr [esp + 0x14], esi
        dec edx
        fild dword ptr [esp + 0x14]
        fstp qword ptr [ecx + 0x8]
        jne L1335
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L1359:
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 2*esi]
        lea edx, [esi + 0x1]
L1369:
        movsx esi, word ptr [eax]
        mov dword ptr [esp + 0x14], esi
        sub eax, 0x2
        fild dword ptr [esp + 0x14]
        sub ecx, 0x8
        dec edx
        fstp qword ptr [ecx + 0x8]
        jne L1369
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L138B:
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        push edi
        push esi
        push ecx
        call ext_007B09C0
        add esp, 0xc
        test eax, eax
        je L1558
        cmp word ptr [esi + 0x2], 0x3
        mov esi, dword ptr [esi + 0x4]
        jne L13E4
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 2*esi]
        lea edx, [esi + 0x1]
L13C0:
        xor esi, esi
        sub ecx, 0x8
        mov si, word ptr [eax]
        sub eax, 0x2
        mov dword ptr [esp + 0x14], esi
        dec edx
        fild dword ptr [esp + 0x14]
        fstp qword ptr [ecx + 0x8]
        jne L13C0
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L13E4:
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 2*esi]
        lea edx, [esi + 0x1]
L13F4:
        movsx esi, word ptr [eax]
        mov dword ptr [esp + 0x14], esi
        sub eax, 0x2
        fild dword ptr [esp + 0x14]
        sub ecx, 0x8
        dec edx
        fstp qword ptr [ecx + 0x8]
        jne L13F4
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L1416:
        mov edi, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        push edi
        push esi
        push edx
        call ext_007B10D0
        add esp, 0xc
        test eax, eax
        je L1558
        cmp word ptr [esi + 0x2], 0x4
        mov esi, dword ptr [esi + 0x4]
        jne L1472
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 4*esi]
        lea edx, [esi + 0x1]
        xor esi, esi
L144D:
        mov edi, dword ptr [eax]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x8], edi
        sub eax, 0x4
        fild qword ptr [esp + 0x8]
        sub ecx, 0x8
        dec edx
        fstp qword ptr [ecx + 0x8]
        jne L144D
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L1472:
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 4*esi]
        lea edx, [esi + 0x1]
L1482:
        fild dword ptr [eax]
        sub eax, 0x4
        sub ecx, 0x8
        dec edx
        fstp qword ptr [ecx + 0x8]
        jne L1482
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L149B:
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edi
        push esi
        push eax
        call ext_007B1030
        add esp, 0xc
        test eax, eax
        je L1558
        mov esi, dword ptr [esi + 0x4]
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 4*esi]
        lea edx, [esi + 0x1]
L14C5:
        fld dword ptr [eax]
        sub eax, 0x4
        fstp qword ptr [ecx]
        sub ecx, 0x8
        dec edx
        jne L14C5
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L14DD:
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        push edi
        push esi
        push ecx
        call ext_007B10D0
        add esp, 0xc
        test eax, eax
        je L1558
        mov esi, dword ptr [esi + 0x4]
        dec esi
        js L1510
        lea ecx, [edi + 8*esi]
        lea eax, [edi + 4*esi]
        lea edx, [esi + 0x1]
L1503:
        fld dword ptr [eax]
        sub eax, 0x4
        fstp qword ptr [ecx]
        sub ecx, 0x8
        dec edx
        jne L1503
L1510:
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret
L151B:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push esi
        push eax
        call ext_007B1110
        add esp, 0xc
        pop edi
        pop esi
        add esp, 0x8
        ret
L1534:
        xor ecx, ecx
        mov cx, word ptr [esi]
        mov esi, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_007AF5E0
        mov edx, dword ptr [eax + 0x10]
        mov eax, dword ptr [esi]
        push edx
        push 0xab1520
        push eax
        call ext_0079B140
        add esp, 0x14
L1558:
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x8
        ret
    }
}

extern "C" void ext_0079AFE0();
extern "C" void ext_0079B010();
extern "C" void ext_0079B850();
extern "C" void ext_007AF620();
extern "C" void ext_007BF4E0();

// [0x007BE050] sub_007BE050 (1552 bytes)
extern "C" __declspec(naked) void __fastcall fn_007BE050(void* self) {
    __asm {
        sub esp, 0x8
        mov ecx, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        mov edx, dword ptr [ecx + 0x1dc]
        push edi
        mov edi, dword ptr [ecx + 0x1d8]
        mov esi, dword ptr [esp + 0x20]
        mov eax, dword ptr [ecx + 0x1e0]
        add edx, edi
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esp + 0x24]
        xor ebp, ebp
        xor edi, edi
        test edx, edx
        jle L_7be236
        jmp short L_7be08d
L_7be089:
        mov esi, dword ptr [esp + 0x10]
L_7be08d:
        mov ebx, dword ptr [esp + 0x24]
        xor edx, edx
        mov dl, byte ptr [esi]
        inc esi
        dec ebx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x10], esi
        mov ecx, dword ptr [esp + 0x24]
        mov ebx, 0x1
        test ecx, ecx
        jle short L_7be0d5
        jmp short L_7be0b6
L_7be0b2:
        mov edx, dword ptr [esp + 0x20]
L_7be0b6:
        xor ecx, ecx
        mov cl, byte ptr [esi]
        cmp edx, ecx
        jne short L_7be0cd
        mov ecx, dword ptr [esp + 0x24]
        inc ebx
        dec ecx
        inc esi
        test ecx, ecx
        mov dword ptr [esp + 0x24], ecx
        jg short L_7be0b2
L_7be0cd:
        mov dword ptr [esp + 0x10], esi
        mov edx, dword ptr [esp + 0x20]
L_7be0d1:
L_7be0d5:
        mov esi, dword ptr [esp + 0x14]
        lea ecx, [eax + 0x2]
        cmp ecx, esi
        jb L_7be177
        cmp ebp, 0x1
        je short L_7be121
        cmp ebp, 0x3
        je short L_7be121
        mov esi, dword ptr [esp + 0x1c]
        push esi
        mov edx, dword ptr [esi + 0x1e0]
        mov ecx, dword ptr [esi + 0x1e4]
        sub eax, edx
        add ecx, eax
        mov dword ptr [esi + 0x1e4], ecx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je L_7be261
        mov eax, dword ptr [esi + 0x1e0]
        jmp short L_7be173
L_7be121:
        sub eax, edi
        mov edx, edi
        mov esi, eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        mov ecx, dword ptr [eax + 0x1e0]
        sub edx, ecx
        mov ecx, dword ptr [eax + 0x1e4]
        add ecx, edx
        mov dword ptr [eax + 0x1e4], ecx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je L_7be261
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, esi
        dec esi
        mov eax, dword ptr [ecx + 0x1e0]
        test edx, edx
        jle short L_7be16d
        inc esi
L_7be164:
        mov dl, byte ptr [edi]
        mov byte ptr [eax], dl
        inc eax
        inc edi
        dec esi
        jne short L_7be164
L_7be16d:
        mov edi, dword ptr [ecx + 0x1e0]
L_7be173:
        mov edx, dword ptr [esp + 0x20]
L_7be177:
        cmp ebp, 0x3
        ja L_7be226
        jmp dword ptr [4*ebp + 0x7be26c]
L_7be187:
        cmp ebx, 0x1
        jle L_7be218
        mov ebp, 0x2
        jmp short L_7be1a8
L_7be197:
        cmp ebx, 0x1
        jle short L_7be204
        mov ebp, 0x3
        jmp short L_7be1a8
L_7be1a3:
        cmp ebx, 0x1
        jle short L_7be218
L_7be1a8:
        cmp ebx, 0x80
        jle short L_7be1f8
        mov byte ptr [eax], 0x81
        inc eax
        mov byte ptr [eax], dl
        inc eax
        sub ebx, 0x80
        jmp L_7be0d5
L_7be1c2:
        cmp ebx, 0x1
        jne short L_7be1ee
        cmp byte ptr [eax - 0x2], 0xff
        jne short L_7be1ee
        mov cl, byte ptr [edi]
        cmp cl, 0x7e
        jae short L_7be1ee
        add cl, 0x2
        xor edx, edx
        cmp cl, 0x7f
        mov byte ptr [edi], cl
        mov cl, byte ptr [eax - 0x1]
        setne dl
        mov ebp, edx
        mov byte ptr [eax - 0x2], cl
        jmp L_7be0d1
L_7be1ee:
        mov ebp, 0x2
        jmp L_7be0d5
L_7be1f8:
        mov cl, 0x1
        sub cl, bl
        mov byte ptr [eax], cl
        inc eax
        mov byte ptr [eax], dl
        inc eax
        jmp short L_7be226
L_7be204:
        mov bl, byte ptr [edi]
        inc bl
        mov cl, bl
        mov byte ptr [edi], bl
        cmp cl, 0x7f
        jne short L_7be213
        xor ebp, ebp
L_7be213:
        mov byte ptr [eax], dl
        inc eax
        jmp short L_7be226
L_7be218:
        mov edi, eax
        mov byte ptr [eax], 0x0
        inc eax
        mov ebp, 0x1
        mov byte ptr [eax], dl
        inc eax
L_7be226:
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        jg L_7be089
        mov ecx, dword ptr [esp + 0x1c]
L_7be236:
        mov edi, dword ptr [ecx + 0x1e0]
        mov esi, dword ptr [ecx + 0x1e4]
        mov edx, eax
        mov dword ptr [ecx + 0x1e0], eax
        sub edx, edi
        pop edi
        add esi, edx
        mov eax, 0x1
        mov dword ptr [ecx + 0x1e4], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
L_7be261:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        add esp, 0x8
        ret

        _emit 0x87
        _emit 0xe1
        _emit 0x7b
        _emit 0x00
        _emit 0x97
        _emit 0xe1
        _emit 0x7b
        _emit 0x00
        _emit 0xa3
        _emit 0xe1
        _emit 0x7b
        _emit 0x00
        _emit 0xc2
        _emit 0xe1
        _emit 0x7b
        _emit 0x00
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [eax + 0x1cc]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        jle short L_7be2c4
        mov ebx, dword ptr [esp + 0x18]
        jmp short L_7be2a0
L_7be29c:
        mov eax, dword ptr [esp + 0x14]
L_7be2a0:
        cmp edi, ebp
        mov esi, ebp
        jge short L_7be2a8
        mov esi, edi
L_7be2a8:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push esi
        push ebx
        push eax
        call fn_007BE050
        add esp, 0x10
        test eax, eax
        jl short L_7be2ce
        sub edi, esi
        add ebx, esi
        test edi, edi
        jg short L_7be29c
L_7be2c4:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
L_7be2ce:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        ret

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        push ecx
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        mov ebx, dword ptr [edx + 0x1e0]
        push esi
        push edi
        mov edi, dword ptr [edx + 0x1e4]
        test edi, edi
        jle L_7be3de
L_7be301:
        test ebp, ebp
        jle L_7be3de
        movsx esi, byte ptr [ebx]
        inc ebx
        dec edi
        cmp esi, 0x80
        jl short L_7be31c
        sub esi, 0x100
L_7be31c:
        test esi, esi
        jge short L_7be394
        cmp esi, -0x80
        je L_7be3d6
        mov ecx, 0x1
        sub ecx, esi
        cmp ebp, ecx
        jge short L_7be34d
        mov eax, dword ptr [edx]
        sub ecx, ebp
        push ecx
        push 0xab238c
        push eax
        call ext_007AF620
        mov edx, dword ptr [esp + 0x24]
        add esp, 0xc
        mov ecx, ebp
L_7be34d:
        movsx eax, byte ptr [ebx]
        sub ebp, ecx
        inc ebx
        dec edi
        mov esi, ecx
        dec ecx
        mov dword ptr [esp + 0x10], edi
        test esi, esi
        jle short L_7be3d6
        mov edi, dword ptr [esp + 0x1c]
        mov dl, al
        mov dh, dl
        inc ecx
        mov eax, edx
        mov dword ptr [esp + 0x20], ecx
        mov esi, ecx
        shl eax, 0x10
        mov ax, dx
        shr ecx, 0x2
        rep stos dword ptr es:[edi]
        mov ecx, esi
        and ecx, 0x3
        rep stos byte ptr es:[edi]
        mov ecx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x10]
        mov eax, esi
        add ecx, eax
        mov dword ptr [esp + 0x1c], ecx
        jmp short L_7be3d2
L_7be394:
        lea ecx, [esi + 0x1]
        cmp ebp, ecx
        jge short L_7be3b2
        mov edx, dword ptr [edx]
        sub esi, ebp
        inc esi
        push esi
        push 0xab238c
        push edx
        call ext_007AF620
        add esp, 0xc
        lea esi, [ebp - 0x1]
L_7be3b2:
        mov eax, dword ptr [esp + 0x1c]
        inc esi
        push esi
        push ebx
        push eax
        call ext_0079B010
        mov eax, dword ptr [esp + 0x28]
        add esp, 0xc
        add eax, esi
        sub ebp, esi
        add ebx, esi
        mov dword ptr [esp + 0x1c], eax
        sub edi, esi
L_7be3d2:
        mov edx, dword ptr [esp + 0x18]
L_7be3d6:
        test edi, edi
        jg L_7be301
L_7be3de:
        mov dword ptr [edx + 0x1e4], edi
        pop edi
        pop esi
        mov dword ptr [edx + 0x1e0], ebx
        test ebp, ebp
        pop ebp
        pop ebx
        jle short L_7be40d
        mov ecx, dword ptr [edx + 0x164]
        mov edx, dword ptr [edx]
        push ecx
        push 0xab2358
        push edx
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop ecx
        ret
L_7be40d:
        mov eax, 0x1
        pop ecx
        ret

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        jne short L_7be456
        push 0x68
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0x1cc], eax
        test eax, eax
        je short L_7be46a
        mov dword ptr [eax + 0x64], 0x0
        mov eax, dword ptr [esi + 0x1cc]
        mov dword ptr [eax + 0x50], 0x0
        jmp short L_7be487
L_7be456:
        push 0x60
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0x1cc], eax
        test eax, eax
        jne short L_7be480
L_7be46a:
        push 0xab23d4
        push 0xab23c8
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop esi
        ret
L_7be480:
        mov dword ptr [eax + 0x5c], 0x0
L_7be487:
        mov ecx, dword ptr [esi + 0x1cc]
        mov edx, dword ptr [esi + 0x8]
        mov eax, 0x7be660
        push esi
        mov dword ptr [ecx + 0x40], edx
        mov dword ptr [esi + 0x1a0], eax
        mov dword ptr [esi + 0x1a8], eax
        mov dword ptr [esi + 0x1b0], eax
        mov eax, 0x7bee40
        mov dword ptr [esi + 0x18c], 0x7be510
        mov dword ptr [esi + 0x190], 0x7be590
        mov dword ptr [esi + 0x194], 0x7beda0
        mov dword ptr [esi + 0x198], 0x7bede0
        mov dword ptr [esi + 0x19c], 0x7bf1d0
        mov dword ptr [esi + 0x1a4], eax
        mov dword ptr [esi + 0x1ac], eax
        mov dword ptr [esi + 0x1b4], eax
        mov dword ptr [esi + 0x1c0], 0x7bf2f0
        call ext_007BF4E0
        add esp, 0x4
        mov eax, 0x1
        pop esi
        ret

        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x1cc]
        mov eax, dword ptr [esi + 0x64]
        test eax, eax
        jne short L_7be57a
        push 0x9ff8
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0x64], eax
        test eax, eax
        jne short L_7be54c
        push 0xab23f4
        push 0x999c1c
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop esi
        ret
L_7be54c:
        mov eax, 0xff
L_7be551:
        mov ecx, dword ptr [esi + 0x64]
        mov byte ptr [ecx + 8*eax + 0x6], al
        mov edx, dword ptr [esi + 0x64]
        mov byte ptr [edx + 8*eax + 0x7], al
        mov ecx, dword ptr [esi + 0x64]
        mov word ptr [ecx + 8*eax + 0x4], 0x1
        mov edx, dword ptr [esi + 0x64]
        mov ecx, eax
        mov dword ptr [edx + 8*eax], 0x0
        dec eax
        test ecx, ecx
        jne short L_7be551
L_7be57a:
        mov eax, 0x1
        pop esi
        ret

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi + 0x1d8]
        mov esi, dword ptr [edi + 0x1cc]
        cmp byte ptr [eax], 0x0
        jne short L_7be5ef
        test byte ptr [eax + 0x1], 0x1
        je short L_7be5ef
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        jne short L_7be5e7
        mov eax, dword ptr [edi]
        push ebp
        push 0xab2410
        push eax
        call ext_007AF620
        mov ebp, 0x7bea30
        push edi
        mov dword ptr [edi + 0x1a0], ebp
        mov dword ptr [edi + 0x1a8], ebp
        mov dword ptr [edi + 0x1b0], ebp
        call dword ptr [edi + 0x18c]
        add esp, 0xc
        mov dword ptr [esi + 0x50], ebp
        pop ebp
L_7be5e7:
        mov word ptr [esi + 0x32], 0x1ff
        jmp short L_7be5fc
L_7be5ef:
        mov word ptr [esi + 0x32], 0x1fe
        mov dword ptr [esi + 0x50], 0x7be660
L_7be5fc:
        mov eax, dword ptr [esi + 0x64]
        mov word ptr [esi + 0x30], 0x9
        mov dword ptr [esi + 0x3c], 0x0
        mov dword ptr [esi + 0x38], 0x0
        mov dword ptr [esi + 0x48], 0x0
        mov dword ptr [esi + 0x44], 0x1ff
        mov ecx, dword ptr [edi + 0x1e4]
        add eax, 0x810
        push 0x97e8
        push 0x0
        shl ecx, 0x3
        push eax
        mov dword ptr [esi + 0x4c], ecx
        mov dword ptr [esi + 0x5c], eax
        call ext_0079AFE0
        mov eax, dword ptr [esi + 0x64]
        mov ecx, dword ptr [esi + 0x44]
        add esp, 0xc
        lea edx, [eax - 0x8]
        mov dword ptr [esi + 0x58], edx
        lea edx, [eax + 8*ecx - 0x8]
        mov dword ptr [esi + 0x60], edx
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}


extern "C" void ext_0079EBE0();
extern "C" void ext_007AA510();
extern "C" int mem_009251D8;
extern "C" int mem_00999784;
extern "C" int mem_00925268;
extern "C" int mem_009252AC;

// [0x007B7130] sub_007B7130 (1631 bytes)
extern "C" __declspec(naked) void __fastcall fn_007B7130(void* self) {
    __asm {
        __asm _emit 0x55
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x56
        mov esi, dword ptr [mem_009251D8]
        __asm _emit 0x3D
        __asm _emit 0x26
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x24
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x4F
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0xE9
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x52
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC9
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0xE0
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x0F
        __asm _emit 0x51
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x4B
        __asm _emit 0x75
        __asm _emit 0xF2
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x5B
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x4F
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x12
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x3D
        __asm _emit 0x11
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x19
        __asm _emit 0x2D
        __asm _emit 0x53
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x17
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x28
        __asm _emit 0x51
        __asm _emit 0xE9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x17
        __asm _emit 0xE9
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x23
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0xF0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x17
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x22
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7E
        __asm _emit 0x3A
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x31
        __asm _emit 0x74
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xD2
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xD2
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x6C
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x8B
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0xEB
        __asm _emit 0x72
        __asm _emit 0x8B
        __asm _emit 0x0F
        __asm _emit 0x51
        __asm _emit 0xEB
        __asm _emit 0x6D
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        __asm _emit 0x51
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5E
        __asm _emit 0x5F
        __asm _emit 0x5D
        __asm _emit 0xC3
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0xDE
        __asm _emit 0x71
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xB1
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xB1
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x3A
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x3F
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x62
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xB1
        __asm _emit 0x73
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x2D
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x3E
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x4B
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x11
        __asm _emit 0x7F
        __asm _emit 0x28
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2B
        __asm _emit 0xC8
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC3
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x21
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x60
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xD2
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x8C
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x21
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x02
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x4D
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x73
        __asm _emit 0x74
        __asm _emit 0x30
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x40
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x3D
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x27
        __asm _emit 0x74
        __asm _emit 0x1A
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x3D
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x0F
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x3E
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x5C
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x19
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x72
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x04
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x37
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x02
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x55
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7F
        __asm _emit 0x1C
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xEB
        __asm _emit 0x1D
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x2A
        __asm _emit 0x33
        __asm _emit 0xC0
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        __asm _emit 0x77
        __asm _emit 0xAB
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x77
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xC3
        __asm _emit 0x8B
        __asm _emit 0xFF
        __asm _emit 0x74
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x75
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x77
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x83
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        call ext_0079EBE0
        __asm _emit 0x50
        mov eax, dword ptr [mem_00999784]
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x50
        __asm _emit 0x51
        call dword ptr [mem_00925268]
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x6A
        __asm _emit 0x11
        call ext_007AA510
        __asm _emit 0x59
        __asm _emit 0xC3
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x51
        call ext_0079EBE0
        __asm _emit 0x50
        mov eax, dword ptr [mem_00999784]
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0B
        __asm _emit 0x50
        __asm _emit 0x51
        call dword ptr [mem_009252AC]
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x17
        __asm _emit 0x6A
        __asm _emit 0x0D
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x32
        __asm _emit 0xC0
        __asm _emit 0x59
        __asm _emit 0xC3
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x59
        __asm _emit 0xC3
    }
}

// [0x007BFF40] sub_007BFF40 (5245 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BFF40(void* strm) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x44
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je L_7BFFB4
        mov esi, dword ptr [eax + 0x1c]
        test esi, esi
        mov dword ptr [esp + 0x38], esi
        je L_7BFFB4
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je L_7BFFB4
        cmp dword ptr [eax], 0x0
        jne L_7BFF6D
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne L_7BFFB4
L_7BFF6D:
        cmp dword ptr [esi], 0xb
        jne L_7BFF78
        mov dword ptr [esi], 0xc
L_7BFF78:
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [eax + 0x10]
        mov edi, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov ebx, dword ptr [esi + 0x30]
        mov ebp, dword ptr [esi + 0x34]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esi]
        cmp ecx, 0x1c
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x40], eax
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x34], 0x0
        jbe L_7BFFC5
L_7BFFB4:
        mov eax, 0xfffffffe
L_7BFFB9:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret
L_7BFFC1:
        mov edx, dword ptr [esp + 0x20]
L_7BFFC5:
        jmp dword ptr [ecx*4 + mem_007C13C0]
L_7BFFCC:
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        jne L_7BFFDE
        mov dword ptr [esi], 0xc
        jmp L_7C1240
L_7BFFDE:
        cmp ebp, 0x10
        jae L_7C000B
L_7BFFE3:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x10
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7BFFE3
L_7C000B:
        mov eax, dword ptr [esi + 0x8]
        test al, 0x2
        je L_7C005F
        cmp ebx, 0x8b1f
        jne L_7C005F
        push 0x0
        push 0x0
        push 0x0
        call ext_007C38C0
        mov dword ptr [esi + 0x14], eax
        mov byte ptr [esp + 0x30], 0x1f
        mov byte ptr [esp + 0x31], 0x8b
        mov ecx, dword ptr [esi + 0x14]
        lea eax, [esp + 0x30]
        push 0x2
        push eax
        push ecx
        call ext_007C38C0
        xor ebx, ebx
        add esp, 0x18
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], ebx
        xor ebp, ebp
        mov dword ptr [esi], 0x1
        jmp L_7C1240
L_7C005F:
        test al, 0x1
        mov dword ptr [esi + 0x10], 0x0
        je L_7C0114
        mov eax, ebx
        mov edx, ebx
        and eax, 0xff
        mov ecx, 0x1f
        shl eax, 0x8
        shr edx, 0x8
        add eax, edx
        xor edx, edx
        div ecx
        test edx, edx
        jne L_7C0114
        mov edx, ebx
        and edx, 0xf
        cmp dl, 0x8
        je L_7C00AE
        mov eax, dword ptr [esp + 0x58]
        mov dword ptr [eax + 0x18], offset mem_00AB27D0
        mov eax, dword ptr [esp + 0x10]
        jmp L_7C123A
L_7C00AE:
        mov eax, dword ptr [esi + 0x1c]
        sub ebp, 0x4
        shr ebx, 0x4
        mov ecx, ebx
        mov dword ptr [esp + 0x14], ebx
        and ecx, 0xf
        add ecx, 0x8
        cmp ecx, eax
        jbe L_7C00DB
        mov edx, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edx + 0x18], offset mem_00AB27BC
        jmp L_7C123A
L_7C00DB:
        push 0x0
        push 0x0
        push 0x0
        call ext_007C3790
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr [esi + 0x14], eax
        not ebx
        and ebx, 0x200
        mov dword ptr [ecx + 0x30], eax
        mov eax, dword ptr [esp + 0x1c]
        or bh, 0x9
        shr ebx, 0x8
        mov dword ptr [esi], ebx
        xor ebx, ebx
        add esp, 0xc
        mov dword ptr [esp + 0x14], ebx
        xor ebp, ebp
        jmp L_7C1240
L_7C0114:
        mov edx, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edx + 0x18], offset mem_00AB27A4
        jmp L_7C123A
L_7C0128:
        cmp ebp, 0x10
        jae L_7C0157
L_7C012D:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, 0x10
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C012D
L_7C0157:
        cmp bl, 0x8
        mov dword ptr [esi + 0x10], ebx
        je L_7C016F
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB27D0
        jmp L_7C123A
L_7C016F:
        test bh, 0xe0
        je L_7C0184
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB2788
        jmp L_7C123A
L_7C0184:
        test bh, 0x2
        je L_7C01AE
        mov byte ptr [esp + 0x24], bl
        lea eax, [esp + 0x24]
        shr ebx, 0x8
        mov byte ptr [esp + 0x25], bl
        mov ecx, dword ptr [esi + 0x14]
        push 0x2
        push eax
        push ecx
        call ext_007C38C0
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C01AE:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esi], 0x2
        jmp L_7C01BF
L_7C01BA:
        cmp ebp, 0x20
        jae L_7C01DF
L_7C01BF:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x20
        jb L_7C01BF
L_7C01DF:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x2
        je L_7C021E
        mov eax, ebx
        mov ecx, ebx
        mov byte ptr [esp + 0x24], bl
        lea edx, [esp + 0x24]
        shr eax, 0x8
        shr ecx, 0x10
        shr ebx, 0x18
        mov byte ptr [esp + 0x25], al
        mov byte ptr [esp + 0x26], cl
        mov byte ptr [esp + 0x27], bl
        mov eax, dword ptr [esi + 0x14]
        push 0x4
        push edx
        push eax
        call ext_007C38C0
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C021E:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esi], 0x3
        jmp L_7C022F
L_7C022A:
        cmp ebp, 0x10
        jae L_7C0255
L_7C022F:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, 0x10
        mov dword ptr [esp + 0x18], edi
        jb L_7C022F
L_7C0255:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x2
        je L_7C0282
        mov byte ptr [esp + 0x24], bl
        lea eax, [esp + 0x24]
        shr ebx, 0x8
        mov byte ptr [esp + 0x25], bl
        mov ecx, dword ptr [esi + 0x14]
        push 0x2
        push eax
        push ecx
        call ext_007C38C0
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C0282:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi], 0x4
L_7C0290:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x4
        je L_7C02F9
L_7C0298:
        cmp ebp, 0x10
        jae L_7C02C1
L_7C029D:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x10
        mov dword ptr [esp + 0x18], edi
        jb L_7C029D
L_7C02C1:
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esi + 0x38], ebx
        test ch, 0x2
        je L_7C02F1
        mov byte ptr [esp + 0x24], bl
        lea eax, [esp + 0x24]
        shr ebx, 0x8
        mov byte ptr [esp + 0x25], bl
        mov ecx, dword ptr [esi + 0x14]
        push 0x2
        push eax
        push ecx
        call ext_007C38C0
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C02F1:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esp + 0x14], ebx
L_7C02F9:
        mov dword ptr [esi], 0x5
L_7C02FF:
        mov edx, dword ptr [esi + 0x10]
        test dh, 0x4
        je L_7C035D
        mov ecx, dword ptr [esi + 0x38]
        cmp ecx, eax
        mov dword ptr [esp + 0x1c], ecx
        jbe L_7C0318
        mov ecx, eax
        mov dword ptr [esp + 0x1c], ecx
L_7C0318:
        test ecx, ecx
        je L_7C0352
        test dh, 0x2
        je L_7C033E
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x14]
        push edx
        push edi
        push eax
        call ext_007C38C0
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C033E:
        mov edx, dword ptr [esi + 0x38]
        sub eax, ecx
        add edi, ecx
        sub edx, ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esi + 0x38], edx
L_7C0352:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        jne L_7C129E
L_7C035D:
        mov dword ptr [esi], 0x6
L_7C0363:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x8
        je L_7C03C2
        test eax, eax
        je L_7C129E
        xor ecx, ecx
L_7C0375:
        xor edx, edx
        mov dl, byte ptr [ecx + edi]
        inc ecx
        test edx, edx
        mov dword ptr [esp + 0x30], edx
        je L_7C0387
        cmp ecx, eax
        jb L_7C0375
L_7C0387:
        test byte ptr [esi + 0x11], 0x20
        mov dword ptr [esp + 0x1c], ecx
        je L_7C03AE
        mov edx, dword ptr [esi + 0x14]
        push ecx
        push edi
        push edx
        call ext_007C38C0
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C03AE:
        sub eax, ecx
        add edi, ecx
        test edx, edx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x18], edi
        jne L_7C129E
L_7C03C2:
        mov dword ptr [esi], 0x7
L_7C03C8:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x10
        je L_7C0429
        test eax, eax
        je L_7C129E
        xor ecx, ecx
L_7C03DA:
        xor edx, edx
        mov dl, byte ptr [ecx + edi]
        inc ecx
        test edx, edx
        mov dword ptr [esp + 0x30], edx
        je L_7C03EC
        cmp ecx, eax
        jb L_7C03DA
L_7C03EC:
        test byte ptr [esi + 0x11], 0x20
        mov dword ptr [esp + 0x1c], ecx
        je L_7C0415
        mov eax, ecx
        mov ecx, dword ptr [esi + 0x14]
        push eax
        push edi
        push ecx
        call ext_007C38C0
        mov edx, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
L_7C0415:
        sub eax, ecx
        add edi, ecx
        test edx, edx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x18], edi
        jne L_7C129E
L_7C0429:
        mov dword ptr [esi], 0x8
L_7C042F:
        mov ecx, dword ptr [esi + 0x10]
        test ch, 0x2
        je L_7C0489
        cmp ebp, 0x10
        jae L_7C0464
L_7C043C:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x10
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C043C
L_7C0464:
        mov ecx, dword ptr [esi + 0x14]
        and ecx, 0xffff
        cmp ebx, ecx
        je L_7C0481
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB2774
        jmp L_7C123A
L_7C0481:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esp + 0x14], ebx
L_7C0489:
        push 0x0
        push 0x0
        push 0x0
        call ext_007C38C0
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr [esi + 0x14], eax
        add esp, 0xc
        mov dword ptr [ecx + 0x30], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0xb
        jmp L_7C1240
L_7C04B0:
        cmp ebp, 0x20
        jae L_7C04DD
L_7C04B5:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x20
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C04B5
L_7C04DD:
        mov ecx, ebx
        mov edx, ebx
        and ecx, 0xff00
        shl edx, 0x10
        add ecx, edx
        xor edx, edx
        mov dh, byte ptr [esp + 0x16]
        shl ecx, 0x8
        add ecx, edx
        mov edx, dword ptr [esp + 0x58]
        shr ebx, 0x18
        add ecx, ebx
        xor ebx, ebx
        mov dword ptr [esi + 0x14], ecx
        mov dword ptr [edx + 0x30], ecx
        xor ebp, ebp
        mov dword ptr [esi], 0xa
L_7C0510:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je L_7C1258
        push 0x0
        push 0x0
        push 0x0
        call ext_007C3790
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr [esi + 0x14], eax
        add esp, 0xc
        mov dword ptr [ecx + 0x30], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0xb
L_7C053D:
        cmp dword ptr [esp + 0x5c], 0x5
        je L_7C129E
L_7C0548:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_7C0567
        mov ecx, ebp
        mov dword ptr [esi], 0x18
        and ecx, 0x7
        shr ebx, cl
        sub ebp, ecx
        mov dword ptr [esp + 0x14], ebx
        jmp L_7C1240
L_7C0567:
        cmp ebp, 0x3
        jae L_7C0590
L_7C056C:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x3
        mov dword ptr [esp + 0x18], edi
        jb L_7C056C
L_7C0590:
        mov ecx, ebx
        and ecx, 0x1
        shr ebx, 1
        mov dword ptr [esi + 0x4], ecx
        mov ecx, ebx
        and ecx, 0x3
        dec ebp
        cmp ecx, 0x3
        ja L_7C0609
        jmp dword ptr [ecx*4 + mem_007C1434]
L_7C05AC:
        shr ebx, 0x2
        mov dword ptr [esi], 0xd
        mov dword ptr [esp + 0x14], ebx
        sub ebp, 0x2
        jmp L_7C1240
L_7C05C1:
        push esi
        call ext_007C1450
        mov eax, dword ptr [esp + 0x14]
        add esp, 0x4
        shr ebx, 0x2
        mov dword ptr [esi], 0x12
        mov dword ptr [esp + 0x14], ebx
        sub ebp, 0x2
        jmp L_7C1240
L_7C05E3:
        shr ebx, 0x2
        mov dword ptr [esi], 0xf
        mov dword ptr [esp + 0x14], ebx
        sub ebp, 0x2
        jmp L_7C1240
L_7C05F8:
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB2760
        mov dword ptr [esi], 0x1b
L_7C0609:
        shr ebx, 0x2
        mov dword ptr [esp + 0x14], ebx
        sub ebp, 0x2
        jmp L_7C1240
L_7C0618:
        mov ecx, ebp
        and ecx, 0x7
        shr ebx, cl
        sub ebp, ecx
        cmp ebp, 0x20
        mov dword ptr [esp + 0x14], ebx
        jae L_7C0654
L_7C062A:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, 0x20
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C062A
L_7C0654:
        mov edx, ebx
        mov ecx, ebx
        not edx
        and ecx, 0xffff
        shr edx, 0x10
        cmp ecx, edx
        je L_7C0677
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB2740
        jmp L_7C123A
L_7C0677:
        xor ebx, ebx
        mov dword ptr [esi + 0x38], ecx
        mov dword ptr [esp + 0x14], ebx
        xor ebp, ebp
        mov dword ptr [esi], 0xe
L_7C0688:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], ecx
        je L_7C0D9D
        cmp ecx, eax
        jbe L_7C06A1
        mov ecx, eax
        mov dword ptr [esp + 0x1c], ecx
L_7C06A1:
        mov edx, dword ptr [esp + 0x20]
        cmp ecx, edx
        jbe L_7C06AF
        mov ecx, edx
        mov dword ptr [esp + 0x1c], ecx
L_7C06AF:
        test ecx, ecx
        je L_7C129E
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x28]
        mov edx, ecx
        mov esi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x20]
        add eax, ecx
        sub esi, ecx
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x10], esi
        mov esi, dword ptr [esp + 0x28]
        sub edi, ecx
        mov edx, dword ptr [eax + 0x38]
        add esi, ecx
        sub edx, ecx
        mov dword ptr [esp + 0x20], edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x28], esi
        mov esi, dword ptr [esp + 0x38]
        mov dword ptr [eax + 0x38], edx
        mov eax, dword ptr [esp + 0x10]
        jmp L_7C1240
L_7C0714:
        cmp ebp, 0xe
        jae L_7C073F
L_7C0719:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, 0xe
        mov dword ptr [esp + 0x18], edi
        jb L_7C0719
L_7C073F:
        mov ecx, ebx
        sub ebp, 0xe
        and ecx, 0x1f
        shr ebx, 0x5
        add ecx, 0x101
        mov edx, ebx
        shr ebx, 0x5
        mov dword ptr [esi + 0x58], ecx
        mov ecx, ebx
        and ecx, 0xf
        and edx, 0x1f
        add ecx, 0x4
        inc edx
        mov dword ptr [esi + 0x54], ecx
        mov ecx, dword ptr [esi + 0x58]
        shr ebx, 0x4
        cmp ecx, 0x11e
        mov dword ptr [esi + 0x5c], edx
        mov dword ptr [esp + 0x14], ebx
        ja L_7C079C
        mov ecx, edx
        cmp ecx, 0x1e
        ja L_7C079C
        mov dword ptr [esi + 0x60], 0x0
        mov dword ptr [esi], 0x10
L_7C0790:
        mov ecx, dword ptr [esi + 0x60]
        mov edx, dword ptr [esi + 0x54]
        cmp ecx, edx
        jae L_7C080A
        jmp L_7C07B0
L_7C079C:
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB271C
        jmp L_7C123A
L_7C07AC:
        mov eax, dword ptr [esp + 0x10]
L_7C07B0:
        cmp ebp, 0x3
        jae L_7C07D9
L_7C07B5:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x3
        mov dword ptr [esp + 0x18], edi
        jb L_7C07B5
L_7C07D9:
        mov ecx, dword ptr [esi + 0x60]
        xor edx, edx
        mov al, bl
        sub ebp, 0x3
        mov dx, word ptr [ecx*2 + mem_0099A4D8]
        and eax, 0x7
        shr ebx, 0x3
        mov word ptr [esi + edx*2 + 0x68], ax
        mov edx, dword ptr [esi + 0x60]
        mov ecx, dword ptr [esi + 0x54]
        inc edx
        mov eax, edx
        mov dword ptr [esi + 0x60], edx
        cmp eax, ecx
        mov dword ptr [esp + 0x14], ebx
        jb L_7C07AC
L_7C080A:
        mov ecx, dword ptr [esi + 0x60]
        mov eax, 0x13
        cmp ecx, eax
        jae L_7C0837
L_7C0816:
        mov ecx, dword ptr [esi + 0x60]
        xor edx, edx
        mov dx, word ptr [ecx*2 + mem_0099A4D8]
        mov word ptr [esi + edx*2 + 0x68], 0x0
        mov edx, dword ptr [esi + 0x60]
        inc edx
        mov ecx, edx
        mov dword ptr [esi + 0x60], edx
        cmp ecx, eax
        jb L_7C0816
L_7C0837:
        lea ecx, [esi + 0x64]
        lea eax, [esi + 0x528]
        mov dword ptr [esi + 0x44], eax
        lea edx, [esi + 0x2e8]
        mov dword ptr [ecx], eax
        lea eax, [esi + 0x4c]
        push edx
        push eax
        mov dword ptr [eax], 0x7
        push ecx
        lea eax, [esi + 0x68]
        push 0x13
        push eax
        push 0x0
        call ext_007C3320
        add esp, 0x18
        mov dword ptr [esp + 0x34], eax
        test eax, eax
        mov eax, dword ptr [esp + 0x10]
        je L_7C0883
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB2700
        jmp L_7C123A
L_7C0883:
        mov dword ptr [esi + 0x60], 0x0
        mov dword ptr [esi], 0x11
L_7C0890:
        mov edx, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esi + 0x58]
        add ecx, edx
        mov edx, dword ptr [esi + 0x60]
        cmp edx, ecx
        mov dword ptr [esp + 0x3c], ecx
        jae L_7C0B11
L_7C08A7:
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, 0x1
        shl edx, cl
        lea ecx, [edx - 0x1]
        mov edx, dword ptr [esi + 0x44]
        mov dword ptr [esp + 0x30], ecx
        and ecx, ebx
        mov ecx, dword ptr [edx + ecx*4]
        mov dword ptr [esp + 0x44], ecx
        mov ecx, dword ptr [esp + 0x45]
        mov edx, ecx
        and edx, 0xff
        cmp edx, ebp
        jbe L_7C0915
L_7C08D4:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esi + 0x44]
        add ebp, 0x8
        add ebx, edx
        mov edx, dword ptr [esp + 0x30]
        and edx, ebx
        inc edi
        mov dword ptr [esp + 0x18], edi
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [esp + 0x44], ecx
        mov ecx, dword ptr [esp + 0x45]
        mov edx, ecx
        and edx, 0xff
        cmp edx, ebp
        ja L_7C08D4
L_7C0915:
        mov edx, dword ptr [esp + 0x46]
        cmp dx, 0x10
        jae L_7C0977
        and ecx, 0xff
        cmp ebp, ecx
        mov dword ptr [esp + 0x1c], ecx
        jae L_7C0956
L_7C092D:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, ecx
        mov dword ptr [esp + 0x18], edi
        jb L_7C092D
L_7C0956:
        mov dx, word ptr [esp + 0x46]
        sub ebp, ecx
        shr ebx, cl
        mov ecx, dword ptr [esi + 0x60]
        mov word ptr [esi + ecx*2 + 0x68], dx
        mov ecx, dword ptr [esi + 0x60]
        inc ecx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi + 0x60], ecx
        jmp L_7C0ADA
L_7C0977:
        jne L_7C09EB
        and ecx, 0xff
        mov dword ptr [esp + 0x1c], ecx
        lea edx, [ecx + 0x2]
        cmp ebp, edx
        jae L_7C09B6
L_7C098A:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        add ebp, 0x8
        add ebx, edx
        lea edx, [ecx + 0x2]
        inc edi
        cmp ebp, edx
        mov dword ptr [esp + 0x18], edi
        jb L_7C098A
L_7C09B6:
        mov edx, dword ptr [esi + 0x60]
        sub ebp, ecx
        shr ebx, cl
        test edx, edx
        mov dword ptr [esp + 0x14], ebx
        je L_7C0AF3
        xor ecx, ecx
        mov cx, word ptr [esi + edx*2 + 0x66]
        mov dword ptr [esp + 0x30], ecx
        mov ecx, ebx
        and ecx, 0x3
        add ecx, 0x3
        shr ebx, 0x2
        mov dword ptr [esp + 0x1c], ecx
        sub ebp, 0x2
        jmp L_7C0A9F
L_7C09EB:
        and ecx, 0xff
        cmp dx, 0x11
        mov dword ptr [esp + 0x1c], ecx
        jne L_7C0A46
        lea edx, [ecx + 0x3]
        cmp ebp, edx
        jae L_7C0A2E
L_7C0A02:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        add ebp, 0x8
        add ebx, edx
        lea edx, [ecx + 0x3]
        inc edi
        cmp ebp, edx
        mov dword ptr [esp + 0x18], edi
        jb L_7C0A02
L_7C0A2E:
        shr ebx, cl
        mov edx, ebx
        and edx, 0x7
        add edx, 0x3
        mov dword ptr [esp + 0x1c], edx
        mov edx, 0xfffffffd
        shr ebx, 0x3
        jmp L_7C0A8F
L_7C0A46:
        lea edx, [ecx + 0x7]
        cmp ebp, edx
        jae L_7C0A79
L_7C0A4D:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        add ebp, 0x8
        add ebx, edx
        lea edx, [ecx + 0x7]
        inc edi
        cmp ebp, edx
        mov dword ptr [esp + 0x18], edi
        jb L_7C0A4D
L_7C0A79:
        shr ebx, cl
        mov edx, ebx
        and edx, 0x7f
        add edx, 0xb
        mov dword ptr [esp + 0x1c], edx
        mov edx, 0xfffffff9
        shr ebx, 0x7
L_7C0A8F:
        sub edx, ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x30], 0x0
        add ebp, edx
L_7C0A9F:
        mov edx, dword ptr [esi + 0x60]
        mov dword ptr [esp + 0x14], ebx
        add edx, ecx
        mov ecx, dword ptr [esp + 0x3c]
        cmp edx, ecx
        ja L_7C0B00
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        je L_7C0ADA
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [esp + 0x30]
L_7C0AC0:
        mov edx, dword ptr [esi + 0x60]
        mov word ptr [esi + edx*2 + 0x68], cx
        mov edx, dword ptr [esi + 0x60]
        inc edx
        mov dword ptr [esi + 0x60], edx
        mov edx, dword ptr [esp + 0x1c]
        dec edx
        mov dword ptr [esp + 0x1c], edx
        jne L_7C0AC0
L_7C0ADA:
        mov ecx, dword ptr [esi + 0x5c]
        mov edx, dword ptr [esi + 0x58]
        add ecx, edx
        mov edx, dword ptr [esi + 0x60]
        cmp edx, ecx
        mov dword ptr [esp + 0x3c], ecx
        jb L_7C08A7
        jmp L_7C0B11
L_7C0AF3:
        mov eax, dword ptr [esp + 0x58]
        mov dword ptr [eax + 0x18], offset mem_00AB26E4
        jmp L_7C0B0B
L_7C0B00:
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB26E4
L_7C0B0B:
        mov dword ptr [esi], 0x1b
L_7C0B11:
        lea ecx, [esi + 0x64]
        lea eax, [esi + 0x528]
        mov dword ptr [esi + 0x44], eax
        lea edx, [esi + 0x2e8]
        mov dword ptr [ecx], eax
        lea eax, [esi + 0x4c]
        push edx
        mov edx, dword ptr [esi + 0x58]
        mov dword ptr [eax], 0x9
        push eax
        push ecx
        lea eax, [esi + 0x68]
        push edx
        push eax
        push 0x1
        call ext_007C3320
        add esp, 0x18
        mov dword ptr [esp + 0x34], eax
        test eax, eax
        je L_7C0B5F
        mov ecx, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x18], offset mem_00AB26C8
        jmp L_7C123A
L_7C0B5F:
        mov edx, dword ptr [esi + 0x64]
        lea ecx, [esi + 0x64]
        mov dword ptr [esi + 0x48], edx
        lea edx, [esi + 0x2e8]
        lea eax, [esi + 0x50]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x58]
        mov dword ptr [eax], 0x6
        mov eax, dword ptr [esi + 0x5c]
        lea edx, [esi + ecx*2 + 0x68]
        push eax
        push edx
        push 0x2
        call ext_007C3320
        add esp, 0x18
        mov dword ptr [esp + 0x34], eax
        test eax, eax
        je L_7C0BAC
        mov eax, dword ptr [esp + 0x58]
        mov dword ptr [eax + 0x18], offset mem_00AB26B0
        mov eax, dword ptr [esp + 0x10]
        jmp L_7C123A
L_7C0BAC:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], 0x12
L_7C0BB6:
        cmp eax, 0x6
        jb L_7C0C22
        cmp dword ptr [esp + 0x20], 0x102
        jb L_7C0C22
        mov eax, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x10], edx
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [eax + 0xc], ecx
        mov ecx, dword ptr [esp + 0x10]
        push edx
        mov dword ptr [eax], edi
        mov dword ptr [eax + 0x4], ecx
        push eax
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebp
        call ext_007C2E80
        mov eax, dword ptr [esp + 0x60]
        mov ebx, dword ptr [esi + 0x30]
        mov ebp, dword ptr [esi + 0x34]
        add esp, 0x8
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [eax + 0x10]
        mov edi, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], ebx
        jmp L_7C1240
L_7C0C22:
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, 0x1
        shl edx, cl
        lea ecx, [edx - 0x1]
        mov edx, dword ptr [esi + 0x44]
        mov dword ptr [esp + 0x30], ecx
        and ecx, ebx
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [esp + 0x44], edx
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        cmp ecx, ebp
        jbe L_7C0C8A
L_7C0C4D:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        mov ecx, dword ptr [esi + 0x44]
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        mov edx, dword ptr [esp + 0x30]
        and edx, ebx
        inc edi
        mov dword ptr [esp + 0x18], edi
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [esp + 0x44], edx
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        cmp ecx, ebp
        ja L_7C0C4D
L_7C0C8A:
        test dl, dl
        je L_7C0D66
        test dl, 0xf0
        jne L_7C0D66
        mov ecx, dword ptr [esp + 0x45]
        mov dword ptr [esp + 0x4c], edx
        and ecx, 0xff
        mov dword ptr [esp + 0x1c], ecx
        mov cl, dl
        mov edx, dword ptr [esp + 0x1c]
        add ecx, edx
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        dec edx
        and edx, ebx
        shr edx, cl
        mov ecx, dword ptr [esp + 0x46]
        and ecx, 0xffff
        add edx, ecx
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 0x4d]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [esp + 0x45]
        and ecx, 0xff
        and edx, 0xff
        add edx, ecx
        mov dword ptr [esp + 0x30], ecx
        cmp edx, ebp
        jbe L_7C0D5E
L_7C0CF9:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov cl, byte ptr [esp + 0x4c]
        add ebp, 0x8
        add ebx, edx
        mov edx, dword ptr [esp + 0x30]
        add ecx, edx
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esp + 0x30]
        inc edi
        mov dword ptr [esp + 0x18], edi
        dec edx
        and edx, ebx
        shr edx, cl
        mov ecx, dword ptr [esp + 0x4e]
        and ecx, 0xffff
        add edx, ecx
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [esp + 0x45]
        and edx, 0xff
        add edx, ecx
        cmp edx, ebp
        ja L_7C0CF9
L_7C0D5E:
        mov edx, dword ptr [esp + 0x44]
        shr ebx, cl
        sub ebp, ecx
L_7C0D66:
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        mov dword ptr [esp + 0x1c], ecx
        sub ebp, ecx
        shr ebx, cl
        mov ecx, dword ptr [esp + 0x46]
        and ecx, 0xffff
        test dl, dl
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi + 0x38], ecx
        jne L_7C0D98
        mov dword ptr [esi], 0x17
        jmp L_7C1240
L_7C0D98:
        test dl, 0x20
        je L_7C0DA8
L_7C0D9D:
        mov dword ptr [esi], 0xb
        jmp L_7C1240
L_7C0DA8:
        test dl, 0x40
        je L_7C0DBD
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB2694
        jmp L_7C123A
L_7C0DBD:
        and edx, 0xf
        mov dword ptr [esi], 0x13
        mov dword ptr [esi + 0x40], edx
L_7C0DC9:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_7C0E15
        cmp ebp, ecx
        jae L_7C0DFC
L_7C0DD4:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr [esi + 0x40]
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, ecx
        mov dword ptr [esp + 0x18], edi
        jb L_7C0DD4
L_7C0DFC:
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esi + 0x38]
        dec edx
        and edx, ebx
        add ecx, edx
        mov dword ptr [esi + 0x38], ecx
        mov ecx, dword ptr [esi + 0x40]
        shr ebx, cl
        sub ebp, ecx
L_7C0E15:
        mov dword ptr [esi], 0x14
L_7C0E1B:
        mov ecx, dword ptr [esi + 0x50]
        mov edx, 0x1
        shl edx, cl
        lea ecx, [edx - 0x1]
        mov edx, dword ptr [esi + 0x48]
        mov dword ptr [esp + 0x3c], ecx
        and ecx, ebx
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [esp + 0x44], edx
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        cmp ecx, ebp
        jbe L_7C0E83
L_7C0E46:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        mov ecx, dword ptr [esi + 0x48]
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        mov edx, dword ptr [esp + 0x3c]
        and edx, ebx
        inc edi
        mov dword ptr [esp + 0x18], edi
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [esp + 0x44], edx
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        cmp ecx, ebp
        ja L_7C0E46
L_7C0E83:
        test dl, 0xf0
        jne L_7C0F57
        mov ecx, dword ptr [esp + 0x45]
        mov dword ptr [esp + 0x4c], edx
        and ecx, 0xff
        mov dword ptr [esp + 0x1c], ecx
        mov cl, dl
        mov edx, dword ptr [esp + 0x1c]
        add ecx, edx
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esp + 0x1c]
        dec edx
        and edx, ebx
        shr edx, cl
        mov ecx, dword ptr [esp + 0x46]
        and ecx, 0xffff
        add edx, ecx
        mov ecx, dword ptr [esi + 0x48]
        mov edx, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 0x4d]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [esp + 0x45]
        and ecx, 0xff
        and edx, 0xff
        add edx, ecx
        mov dword ptr [esp + 0x30], ecx
        cmp edx, ebp
        jbe L_7C0F4F
L_7C0EEA:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        mov cl, byte ptr [esp + 0x4c]
        add ebp, 0x8
        add ebx, edx
        mov edx, dword ptr [esp + 0x30]
        add ecx, edx
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esp + 0x30]
        inc edi
        mov dword ptr [esp + 0x18], edi
        dec edx
        and edx, ebx
        shr edx, cl
        mov ecx, dword ptr [esp + 0x4e]
        and ecx, 0xffff
        add edx, ecx
        mov ecx, dword ptr [esi + 0x48]
        mov edx, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [esp + 0x45]
        and edx, 0xff
        add edx, ecx
        cmp edx, ebp
        ja L_7C0EEA
L_7C0F4F:
        mov edx, dword ptr [esp + 0x44]
        shr ebx, cl
        sub ebp, ecx
L_7C0F57:
        mov ecx, dword ptr [esp + 0x45]
        and ecx, 0xff
        shr ebx, cl
        sub ebp, ecx
        mov dword ptr [esp + 0x1c], ecx
        test dl, 0x40
        mov dword ptr [esp + 0x14], ebx
        je L_7C0F82
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB267C
        jmp L_7C123A
L_7C0F82:
        mov ecx, dword ptr [esp + 0x46]
        mov dword ptr [esi], 0x15
        and ecx, 0xffff
        and edx, 0xf
        mov dword ptr [esi + 0x3c], ecx
        mov dword ptr [esi + 0x40], edx
L_7C0F9B:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_7C0FE9
        cmp ebp, ecx
        jae L_7C0FCC
L_7C0FA6:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        mov ecx, dword ptr [esi + 0x40]
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, ecx
        mov dword ptr [esp + 0x18], edi
        jb L_7C0FA6
L_7C0FCC:
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [esi + 0x3c]
        dec edx
        and edx, ebx
        add ecx, edx
        mov dword ptr [esi + 0x3c], ecx
        mov ecx, dword ptr [esi + 0x40]
        shr ebx, cl
        sub ebp, ecx
        mov dword ptr [esp + 0x14], ebx
L_7C0FE9:
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [esp + 0x20]
        sub ecx, edx
        mov edx, dword ptr [esp + 0x2c]
        add ecx, edx
        mov edx, dword ptr [esi + 0x3c]
        cmp edx, ecx
        jbe L_7C100F
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [edx + 0x18], offset mem_00AB265C
        jmp L_7C123A
L_7C100F:
        mov dword ptr [esi], 0x16
L_7C1015:
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        je L_7C129E
        mov edx, dword ptr [esp + 0x2c]
        sub edx, ecx
        mov ecx, dword ptr [esi + 0x3c]
        cmp ecx, edx
        jbe L_7C106C
        sub ecx, edx
        mov edx, dword ptr [esi + 0x28]
        cmp ecx, edx
        mov dword ptr [esp + 0x1c], ecx
        jbe L_7C104B
        sub ecx, edx
        mov edx, dword ptr [esi + 0x2c]
        add edx, dword ptr [esi + 0x20]
        mov dword ptr [esp + 0x1c], ecx
        sub edx, ecx
        jmp L_7C1059
L_7C104B:
        mov edx, dword ptr [esi + 0x2c]
        sub edx, ecx
        mov ecx, dword ptr [esi + 0x28]
        add edx, ecx
        mov ecx, dword ptr [esp + 0x1c]
L_7C1059:
        mov dword ptr [esp + 0x30], edx
        mov edx, dword ptr [esi + 0x38]
        cmp ecx, edx
        mov dword ptr [esp + 0x3c], edx
        jbe L_7C1081
        mov ecx, edx
        jmp L_7C107D
L_7C106C:
        mov edx, dword ptr [esp + 0x28]
        sub edx, ecx
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [esp + 0x30], edx
        mov dword ptr [esp + 0x3c], ecx
L_7C107D:
        mov dword ptr [esp + 0x1c], ecx
L_7C1081:
        mov edx, dword ptr [esp + 0x20]
        cmp ecx, edx
        jbe L_7C108F
        mov ecx, edx
        mov dword ptr [esp + 0x1c], ecx
L_7C108F:
        sub edx, ecx
        mov dword ptr [esp + 0x20], edx
        mov edx, dword ptr [esp + 0x3c]
        sub edx, ecx
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x38], edx
L_7C10A2:
        mov edx, dword ptr [esp + 0x30]
        inc ecx
        mov dl, byte ptr [edx]
        mov byte ptr [ecx - 0x1], dl
        mov edx, dword ptr [esp + 0x30]
        inc edx
        mov dword ptr [esp + 0x30], edx
        mov edx, dword ptr [esp + 0x1c]
        dec edx
        mov dword ptr [esp + 0x1c], edx
        jne L_7C10A2
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        jne L_7C1240
        mov dword ptr [esi], 0x12
        jmp L_7C1240
L_7C10DA:
        test edx, edx
        je L_7C129E
        mov ecx, dword ptr [esp + 0x28]
        mov dl, byte ptr [esi + 0x38]
        mov byte ptr [ecx], dl
        inc ecx
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esp + 0x20]
        dec ecx
        mov dword ptr [esi], 0x12
        mov dword ptr [esp + 0x20], ecx
        jmp L_7C1240
L_7C1104:
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_7C11E1
        cmp ebp, 0x20
        jae L_7C113E
L_7C1114:
        test eax, eax
        je L_7C129E
        xor ecx, ecx
        dec eax
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0x10], eax
        mov edx, ecx
        mov ecx, ebp
        shl edx, cl
        add ebp, 0x8
        add ebx, edx
        inc edi
        cmp ebp, 0x20
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C1114
L_7C113E:
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x20]
        sub ecx, edx
        mov edx, dword ptr [esp + 0x58]
        mov dword ptr [esp + 0x2c], ecx
        add dword ptr [edx + 0x14], ecx
        mov edx, dword ptr [esi + 0x18]
        add edx, ecx
        test ecx, ecx
        mov dword ptr [esi + 0x18], edx
        je L_7C1197
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esp + 0x28]
        test eax, eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        je L_7C117D
        sub ecx, eax
        push ecx
        push edx
        call ext_007C38C0
        jmp L_7C1186
L_7C117D:
        sub ecx, eax
        push ecx
        push edx
        call ext_007C3790
L_7C1186:
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr [esi + 0x14], eax
        add esp, 0xc
        mov dword ptr [ecx + 0x30], eax
        mov eax, dword ptr [esp + 0x10]
L_7C1197:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov dword ptr [esp + 0x2c], edx
        mov ecx, ebx
        jne L_7C11C7
        mov edx, ebx
        and ecx, 0xff00
        shl edx, 0x10
        add ecx, edx
        xor edx, edx
        mov dh, byte ptr [esp + 0x16]
        shl ecx, 0x8
        add ecx, edx
        mov edx, ebx
        shr edx, 0x18
        add ecx, edx
L_7C11C7:
        cmp ecx, dword ptr [esi + 0x14]
        je L_7C11D9
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB2644
        jmp L_7C123A
L_7C11D9:
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr [esp + 0x14], ebx
L_7C11E1:
        mov dword ptr [esi], 0x19
L_7C11E7:
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_7C1286
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je L_7C1286
        cmp ebp, 0x20
        jae L_7C122A
L_7C1202:
        test eax, eax
        je L_7C129E
        xor edx, edx
        mov ecx, ebp
        mov dl, byte ptr [edi]
        dec eax
        shl edx, cl
        add ebp, 0x8
        mov dword ptr [esp + 0x10], eax
        add ebx, edx
        inc edi
        cmp ebp, 0x20
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        jb L_7C1202
L_7C122A:
        cmp ebx, dword ptr [esi + 0x18]
        je L_7C1282
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [ecx + 0x18], offset mem_00AB262C
L_7C123A:
        mov dword ptr [esi], 0x1b
L_7C1240:
        mov ecx, dword ptr [esi]
        cmp ecx, 0x1c
        jbe L_7BFFC1
        pop edi
        pop esi
        pop ebp
        mov eax, 0xfffffffe
        pop ebx
        add esp, 0x44
        ret
L_7C1258:
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [ecx + 0xc], edx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 0x10], edx
        mov dword ptr [ecx], edi
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebp
        pop edi
        pop esi
        pop ebp
        mov eax, 0x2
        pop ebx
        add esp, 0x44
        ret
L_7C1282:
        xor ebx, ebx
        xor ebp, ebp
L_7C1286:
        mov dword ptr [esi], 0x1a
L_7C128C:
        mov dword ptr [esp + 0x34], 0x1
        jmp L_7C129E
L_7C1296:
        mov dword ptr [esp + 0x34], 0xfffffffd
L_7C129E:
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [ecx + 0xc], edx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 0x10], edx
        mov dword ptr [ecx], edi
        mov dword ptr [ecx + 0x4], eax
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebp
        jne L_7C12D2
        cmp dword ptr [esi], 0x18
        jge L_7C12FB
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ecx + 0x10]
        cmp eax, edx
        je L_7C12FB
L_7C12D2:
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x58]
        push edx
        push eax
        call ext_007C1480
        add esp, 0x8
        test eax, eax
        je L_7C12FB
        mov dword ptr [esi], 0x1c
L_7C12EE:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xfffffffc
        pop ebx
        add esp, 0x44
        ret
L_7C12FB:
        mov edi, dword ptr [esp + 0x58]
        mov ebp, dword ptr [esp + 0x40]
        mov ebx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi + 0x10]
        mov eax, dword ptr [edi + 0x8]
        sub ebp, edx
        mov edx, dword ptr [edi + 0x14]
        sub ebx, ecx
        add eax, ebp
        add edx, ebx
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0x14], edx
        mov ecx, dword ptr [esi + 0x18]
        mov eax, dword ptr [esi + 0x8]
        add ecx, ebx
        test eax, eax
        mov dword ptr [esi + 0x18], ecx
        je L_7C1365
        test ebx, ebx
        je L_7C1365
        mov eax, dword ptr [esi + 0x10]
        push ebx
        test eax, eax
        je L_7C134D
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [esi + 0x14]
        sub ecx, ebx
        push ecx
        push edx
        call ext_007C38C0
        jmp L_7C135C
L_7C134D:
        mov eax, dword ptr [edi + 0xc]
        mov ecx, dword ptr [esi + 0x14]
        sub eax, ebx
        push eax
        push ecx
        call ext_007C3790
L_7C135C:
        mov dword ptr [esi + 0x14], eax
        add esp, 0xc
        mov dword ptr [edi + 0x30], eax
L_7C1365:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        neg edx
        sbb edx, edx
        xor eax, eax
        and edx, 0x40
        cmp ecx, 0xb
        mov ecx, dword ptr [esi + 0x34]
        setne al
        dec eax
        and eax, 0x80
        add edx, eax
        add edx, ecx
        test ebp, ebp
        mov dword ptr [edi + 0x2c], edx
        jne L_7C1391
        test ebx, ebx
        je L_7C1398
L_7C1391:
        cmp dword ptr [esp + 0x5c], 0x4
        jne L_7C13B1
L_7C1398:
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        jne L_7BFFB9
        pop edi
        pop esi
        pop ebp
        mov eax, 0xfffffffb
        pop ebx
        add esp, 0x44
        ret
L_7C13B1:
        mov eax, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret
    }
}

// [0x007B2320] sub_007B2320 (32 bytes)
extern "C" void __stdcall fn_007B2320(int unused, int* a1) {
    if (a1[2] == 0xf) {
        ext_007B23E0();
    }
}

// [0x007B2210] sub_007B2210 (16 bytes)
extern "C" void ext_006BA780();
extern "C" __declspec(naked) void __stdcall fn_007B2210(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006BA780
        ret 4
    }
}

// [0x007B9050] sub_007B9050 (32 bytes)
extern "C" int mem_00B61DB8;
extern "C" __declspec(naked) void* __cdecl fn_007B9050(unsigned short key) {
    __asm {
        mov     eax, dword ptr [mem_00B61DB8]
        test    eax, eax
        je      done
        mov     cx, word ptr [esp + 4]
    loop_top:
        cmp     word ptr [eax], cx
        je      done
        mov     eax, dword ptr [eax + 0x14]
        test    eax, eax
        jne     loop_top
    done:
        ret
    }
}

// [0x007B0680] sub_007B0680 (32 bytes)
extern "C" void ext_0079B140();

extern "C" __declspec(naked) void __cdecl fn_007B0680(void* p, int b) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        push eax
        push 0xab1400
        mov edx, dword ptr [ecx]
        push edx
        call ext_0079B140
        add esp, 0xc
        ret
    }
}

// [0x007B1110] sub_007B1110 (32 bytes)
extern "C" int __cdecl fn_007B1110(int a, int b, int c) {
    return ((int (__cdecl*)(int, int, int))ext_007B06F0)(a, b, c) != 0;
}

// [0x007BFF20] sub_007BFF20 (32 bytes)
extern "C" void ext_007BFE40(...);
extern "C" void __cdecl fn_007BFF20(int a, int b, int c) {
    ext_007BFE40(a, 0x0f, b, c);
}

// [0x007B2DF0] sub_007B2DF0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B2DF0(int* head, int key, int** out) {
    __asm {
        mov eax, dword ptr [esp + 4]
        xor ecx, ecx
        test eax, eax
        je short L_store_zero
        mov edx, dword ptr [esp + 8]
    L_loop:
        test ecx, ecx
        jne short L_store
        cmp dword ptr [eax], edx
        jne short L_skip
        mov ecx, eax
    L_skip:
        mov eax, dword ptr [eax + 10h]
        test eax, eax
        jne short L_loop
    L_store:
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [eax], ecx
        ret
    L_store_zero:
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [edx], ecx
        ret
    }
}

// [0x007B2E20] sub_007B2E20 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B2E20(void* self, void* val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x14]
        test ecx, ecx
        jne chain
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x14], ecx
        ret
    chain:
        mov eax, dword ptr [ecx + 0x10]
        test eax, eax
        je done
    walk:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x10]
        test eax, eax
        jne walk
    done:
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x10], edx
        ret
    }
}

// [0x007B8E30] sub_007B8E30 (48 bytes)
extern "C" int mem_00B61DB8;
extern "C" int mem_009998FE;

// [0x007B8E30]
extern "C" __declspec(naked) void __fastcall fn_007B8E30(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B61DB8]
        test eax, eax
        mov ecx, eax
        je L_end
        mov dx, word ptr [mem_009998FE]
    L_scan:
        cmp word ptr [ecx], dx
        je L_found
        mov ecx, dword ptr [ecx + 0x14]
        test ecx, ecx
        jne L_scan
        ret
    L_found:
        xor ecx, ecx
    L_renum:
        mov word ptr [eax], cx
        mov eax, dword ptr [eax + 0x14]
        inc ecx
        test eax, eax
        jne L_renum
    L_end:
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x007B2CA0] sub_007B2CA0 (48 bytes)
// [0x007B2CA0]
extern "C" __declspec(naked) void __cdecl fn_007B2CA0(int** p, int v) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je write_out
        mov al, byte ptr [mem_00B61219]
        test al, al
        je skip_out
write_out:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
skip_out:
        pop esi
        ret
    }
}

// [0x007BAA10] sub_007BAA10 (48 bytes)
extern "C" void __cdecl ext_007BA470(void* a, void* b, int c);

extern "C" void __cdecl fn_007BAA10(unsigned char* self, unsigned char* out) {
    *(unsigned short*)out = 0x14d;
    *(unsigned short*)(out + 2) = 2;
    *(unsigned int*)(out + 4) = *(unsigned int*)(self + 0x10c);
    ext_007BA470(self, out, *(int*)(self + 0x110));
}

// [0x007B7CE0] sub_007B7CE0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B7CE0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_007B7790
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_call2
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_ret
    L_call2:
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        call ext_007B7890
        pop ecx
    L_ret:
        ret
    }
}

// [0x007B7D10] sub_007B7D10 (48 bytes)
extern "C" unsigned short ext_007B7830();

extern "C" __declspec(naked) void __cdecl fn_007B7D10() {
    __asm {
        call ext_007B77D0
        mov ecx, dword ptr [esp + 0x4]
        and eax, 0xffff
        mov dword ptr [ecx], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_call
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_ret
    L_call:
        call ext_007B7830
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [edx], eax
    L_ret:
        ret
    }
}

// [0x007BB100] sub_007BB100 (64 bytes)
extern "C" int mem_0092A278;
extern "C" int mem_00999AE8;
extern "C" int mem_00999AE0;

extern "C" __declspec(naked) double __cdecl fn_007BB100(int n) {
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jne     short L_nonzero
        fld     qword ptr [mem_0092A278]
        ret
L_nonzero:
        fild    dword ptr [esp + 4]
        fadd    qword ptr [mem_00993828]
        fmul    qword ptr [mem_00999AE8]
        fsub    qword ptr [mem_00999AE0]
        fldl2e
        fmulp   st(1), st
        fld     st(0)
        frndint
        fxch    st(1)
        fsub    st, st(1)
        f2xm1
        fld1
        faddp   st(1), st
        fscale
        fstp    st(1)
        ret
    }
}

// [0x007B2480] sub_007B2480 (64 bytes)
extern "C" int mem_00925208; /* u32 0x00627CA8 */

// strdup-style: strlen + malloc(len+1) + copy. Hand-written to match MSVC codegen.
extern "C" __declspec(naked) void* __cdecl fn_007B2480(const char* s) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, esi
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        inc edi
        push edi
        call dword ptr [mem_00925208]
        mov ecx, edi
        mov edi, eax
        mov edx, ecx
        add esp, 4
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret
    }
}

// [0x007B8B60] sub_007B8B60 (64 bytes)
extern "C" int mem_00AB16BC; /* u32 0x0000B004 */
extern "C" int mem_00999859; /* u32 0x02000000 */
extern "C" int mem_00999858; /* u32 0x00000001 */
extern "C" short __cdecl fn_007B8B60(int x) {
    if (mem_00AB16BC == 0) {
        return (signed char)mem_00999859;
    }
    int* p = &mem_00AB16BC;
    do {
        if (x == *p) {
            return (signed char)mem_00999858;
        }
        ++p;
    } while (*p != 0);
    return (signed char)mem_00999859;
}

// [0x007B79F0] sub_007B79F0 (64 bytes)
extern "C" void ext_007B7720();

extern "C" __declspec(naked) void __cdecl fn_007B79F0(const char* s) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ebx
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov esi, eax
        mov edi, ecx
        je done_7B79F0
    loop_7B79F0:
        mov al, byte ptr [esi + ebx]
        push eax
        call ext_007B7720
        add esp, 4
        inc esi
        cmp esi, edi
        jb loop_7B79F0
    done_7B79F0:
        push 0
        call ext_007B7720
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B79B0] sub_007B79B0 (64 bytes)
extern "C" void ext_007B7750();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B79B0(unsigned int count, char* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        xor esi, esi
        test ebx, ebx
        push edi
        jbe done
        mov edi, dword ptr [esp + 0x14]
    loop_top:
        call ext_007B7750
        mov byte ptr [esi + edi], al
        mov al, byte ptr [mem_00B61218]
        test al, al
        je inc_i
        mov al, byte ptr [mem_00B61219]
        test al, al
        je done
    inc_i:
        inc esi
        cmp esi, ebx
        jb loop_top
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B7970] sub_007B7970 (64 bytes)
extern "C" void ext_007B7720();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B7970(unsigned int count, const unsigned char* buf) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        xor esi, esi
        test ebx, ebx
        push edi
        jbe done
        mov edi, dword ptr [esp + 0x14]
    loop_top:
        mov al, byte ptr [esi + edi]
        push eax
        call ext_007B7720
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je next
        mov al, byte ptr [mem_00B61219]
        test al, al
        je done
    next:
        inc esi
        cmp esi, ebx
        jb loop_top
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B04C0] sub_007B04C0 (64 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079B140();

extern "C" __declspec(naked) int __cdecl fn_007B04C0(int* a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push eax
        call ext_0079AF40
        mov esi, eax
        add esp, 4
        test esi, esi
        jne done
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push 0xab13d8
        mov eax, dword ptr [edx]
        push eax
        call ext_0079B140
        add esp, 0xc
    done:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007B10D0] sub_007B10D0 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_007B10D0(void* a1, int* a2, int* a3) {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp dword ptr [eax + 4], 1
        jne short L_slow
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ecx], eax
        mov eax, 1
        ret
L_slow:
        mov edx, dword ptr [esp + 0ch]
        push edx
        push eax
        mov eax, dword ptr [esp + 0ch]
        push eax
        call ext_007B06F0
        add esp, 0ch
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x007B7E70] sub_007B7E70 (64 bytes)
extern "C" void ext_007B7910();
extern "C" int mem_00999748;
extern "C" int mem_0099974C;
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B7E70(void* self) {
    __asm {
        mov eax, dword ptr [mem_00999748]
        push esi
        mov esi, dword ptr [esp + 8]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_0099974C]
        mov dword ptr [esi + 4], ecx
        call ext_007B7910
        fstp dword ptr [esi]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je CALL_SECOND
        mov al, byte ptr [mem_00B61219]
        test al, al
        je DONE
CALL_SECOND:
        call ext_007B7910
        fstp dword ptr [esi + 4]
DONE:
        pop esi
        ret
    }
}

// [0x007BA3A0] sub_007BA3A0 (64 bytes)
extern "C" void ext_007990D0();
extern "C" void ext_007BA4B0();

extern "C" __declspec(naked) void __cdecl fn_007BA3A0(int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esp + 0xe]
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        push esi
        push edi
        call ext_007990D0
        mov eax, dword ptr [esp + 0x24]
        lea edx, [esp + 0x20]
        push edx
        push 2
        push eax
        push esi
        push 3
        push edi
        call ext_007BA4B0
        add esp, 0x28
        pop edi
        pop esi
        ret
    }
}

// [0x007BA470] sub_007BA470 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BA470(int a1, unsigned char* obj, int a3) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, 0x4
        jbe L_small
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        call ext_007BAA40
        add esp, 0xc
        test eax, eax
        jne L_one
        ret
    L_small:
        mov edx, dword ptr [esp + 0xc]
        push eax
        add ecx, 0x8
        push edx
        push ecx
        call ext_0079B010
        add esp, 0xc
    L_one:
        mov eax, 0x1
        ret
    }
}

// [0x007B92D0] sub_007B92D0 (64 bytes)
extern "C" void ext_007B2D80();
extern "C" void ext_007B3CF0();

extern "C" void __cdecl fn_007B92D0(void* a1, unsigned short a2) {
    ((void (__cdecl*)(void*, int, void**))ext_007B2D80)(a1, 0xb030, &a1);
    void* r = a1;
    if (r != 0) {
        void* q = ((void* (__cdecl*)(void*))ext_007B3CF0)(r);
        if (q != 0) {
            *(unsigned short*)q = a2;
        }
    }
}

// [0x007B3CB0] sub_007B3CB0 (64 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B3380();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B3CB0(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B3CD4
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_7B3CD4
        xor eax, eax
        pop esi
        ret
L_7B3CD4:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi]
        push edx
        call ext_007B3380
        add esp, 0x4
        pop esi
        ret
    }
}

// [0x007B7790] sub_007B7790 (64 bytes)
extern "C" void ext_0079EBE0();
extern "C" void ext_007AA510();
extern "C" void ext_007BAE30();
extern "C" int mem_00999788;
extern "C" int mem_00925268;
extern "C" __declspec(naked) void __fastcall fn_007B7790(void* self) {
    __asm {
        push ecx
        lea eax, [esp + 0x2]
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call ext_007BAE30
        call ext_0079EBE0
        mov edx, dword ptr [mem_00999788]
        push eax
        push 0x1
        lea eax, [esp + 0x12]
        push edx
        push eax
        call dword ptr [mem_00925268]
        add esp, 0x18
        cmp eax, 0x1
        je L_7B77CC
        push 0x11
        call ext_007AA510
        add esp, 0x4
L_7B77CC:
        pop ecx
        ret
    }
}

// [0x007B8B20] sub_007B8B20 (64 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B8BA0();
extern "C" void ext_007B8BB0();
extern "C" void ext_007B9070();
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B8B20(int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7B8B3C
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B8B4F
L_7B8B3C:
        call ext_007B8BA0
        push esi
        call ext_007B9070
        add esp, 0x4
        call ext_007B8BB0
L_7B8B4F:
        pop esi
        ret
    }
}

// [0x007B9620] sub_007B9620 (64 bytes)
extern "C" int __cdecl ext_007AA3D0(int a);
extern "C" void __cdecl ext_007B9310(int a, int b);
extern "C" void __cdecl ext_007B93E0(int a, int b);
extern "C" void __cdecl ext_007B94E0(int a, int b);

extern "C" __declspec(naked) void __cdecl fn_007B9620(int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        call ext_007AA3D0
        mov edi, dword ptr [esp + 0x14]
        add esp, 0x4
        dec eax
        je L_7B963C
        dec eax
        je L_7B9646
        pop edi
        pop esi
        ret
L_7B963C:
        push edi
        push esi
        call ext_007B9310
        add esp, 0x8
L_7B9646:
        push edi
        push esi
        call ext_007B93E0
        push edi
        push esi
        call ext_007B94E0
        add esp, 0x10
        pop edi
        pop esi
        ret
    }
}

// [0x007B2530] sub_007B2530 (64 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();

extern "C" __declspec(naked) void __cdecl fn_007B2530(void) {
    __asm {
        push ecx
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx], 0xb030
        mov edx, dword ptr [esp + 0x4]
        push edx
        call ext_007B3380
        mov ecx, dword ptr [esp + 0x10]
        mov word ptr [eax], 0xffff
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        call ext_007B2E50
        add esp, 0x14
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x007B78D0] sub_007B78D0 (64 bytes)
extern "C" void ext_0079EBE0();
extern "C" void ext_007AA510();
extern "C" void ext_007BAE20();
extern "C" int mem_00999790;
extern "C" int mem_00925268;

extern "C" __declspec(naked) void __fastcall fn_007B78D0(void* self) {
    __asm {
        push ecx
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call ext_007BAE20
        call ext_0079EBE0
        mov edx, dword ptr [mem_00999790]
        push eax
        push 0x1
        lea eax, [esp + 0x10]
        push edx
        push eax
        call dword ptr [mem_00925268]
        add esp, 0x18
        cmp eax, 0x1
        je L_7B790C
        push 0x11
        call ext_007AA510
        add esp, 0x4
    L_7B790C:
        pop ecx
        ret
    }
}

// [0x007B7890] sub_007B7890 (64 bytes)
extern "C" void ext_0079EBE0();
extern "C" void ext_007AA510();
extern "C" void ext_007BAE20();
extern "C" int mem_0099978C;
extern "C" int mem_00925268;

extern "C" __declspec(naked) void __fastcall fn_007B7890(void* self) {
    __asm {
        push ecx
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call ext_007BAE20
        call ext_0079EBE0
        mov edx, dword ptr [mem_0099978C]
        push eax
        push 0x1
        lea eax, [esp + 0x10]
        push edx
        push eax
        call dword ptr [mem_00925268]
        add esp, 0x18
        cmp eax, 0x1
        je L_7B78CC
        push 0x11
        call ext_007AA510
        add esp, 0x4
L_7B78CC:
        pop ecx
        ret
        nop
        nop
    }
}

// [0x007BFDF0] sub_007BFDF0 (80 bytes)
extern "C" int __cdecl fn_007BFDF0(char* self) {
    if (self != 0) {
    char* p = *(char**)(self + 0x1c);
    if (p != 0) {
    *(int*)(p + 0x18) = 0;
    *(int*)(self + 0x14) = 0;
    *(int*)(self + 0x08) = 0;
    *(int*)(self + 0x18) = 0;
    *(int*)(p + 0x00) = 0;
    *(int*)(p + 0x04) = 0;
    *(int*)(p + 0x0c) = 0;
    *(int*)(p + 0x20) = 0;
    *(int*)(p + 0x24) = 0;
    *(int*)(p + 0x30) = 0;
    *(int*)(p + 0x34) = 0;
    *(int*)(p + 0x64) = (int)(p + 0x528);
    *(int*)(p + 0x48) = (int)(p + 0x528);
    *(int*)(p + 0x44) = (int)(p + 0x528);
    return 0;
    }
    }
    return -2;
}

// [0x007B8D80] sub_007B8D80 (80 bytes)
extern "C" int mem_00B61DB8;

extern "C" __declspec(naked) void __cdecl fn_007B8D80(void* out) {
    __asm {
        push esi
        mov esi, dword ptr [mem_00B61DB8]
        push 0x18
        call dword ptr [mem_00925208]
        add esp, 0x4
        test eax, eax
        je L_7B8D9F
        test esi, esi
        jne L_7B8DA7
        mov dword ptr [mem_00B61DB8], eax
L_7B8D9F:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr [ecx], eax
        ret
L_7B8DA7:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_7B8DB7
L_7B8DAE:
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        jne L_7B8DAE
L_7B8DB7:
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x14], eax
        pop esi
        mov dword ptr [edx], eax
        ret
    }
}

// [0x007BAE40] sub_007BAE40 (80 bytes)
extern "C" int mem_0092A278;
extern "C" int mem_00999A50;
extern "C" int mem_00999A48;
extern "C" __declspec(naked) void __fastcall fn_007BAE40(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, eax
        and ecx, 0x7fff
        mov dword ptr [esp + 0x4], ecx
        jne L_7BAE59
        fld qword ptr [mem_0092A278]
        ret
L_7BAE59:
        fild dword ptr [esp + 0x4]
        test ah, 0x80
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999A50]
        fsub qword ptr [mem_00999A48]
        fldl2e
        fmulp st(1), st
        fld st(0)
        frndint
        fxch st(1)
        fsub st, st(1)
        f2xm1
        fld1
        faddp st(1), st
        fscale
        fstp st(1)
        je L_7BAE8C
        fchs
L_7BAE8C:
        ret
    }
}

// [0x007B7D90] sub_007B7D90 (80 bytes)
extern "C" void ext_007B78D0();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B7D90(int* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        push eax
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7DB2
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7DDC
L_7B7DB2:
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7DD0
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7DDC
L_7B7DD0:
        mov edx, dword ptr [esi + 0x8]
        push edx
        call ext_007B78D0
        add esp, 0x4
L_7B7DDC:
        pop esi
        ret
    }
}

// [0x007B2A10] sub_007B2A10 (80 bytes)
extern "C" void ext_007A9950();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) int __cdecl fn_007B2A10(void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        xor edi, edi
        call ext_007A9950
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B2A38
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_7B2A38
        pop edi
        xor eax, eax
        pop esi
        ret
L_7B2A38:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        jbe L_7B2A58
        mov eax, dword ptr [eax + 0x4]
        mov edx, dword ptr [esp + 0x10]
        add eax, 0x4
L_7B2A4B:
        mov esi, dword ptr [eax]
        cmp dword ptr [esi], edx
        jne L_7B2A52
        inc edi
L_7B2A52:
        add eax, 0x8
        dec ecx
        jne L_7B2A4B
L_7B2A58:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x007B2430] sub_007B2430 (80 bytes)
extern "C" __declspec(naked) int __cdecl fn_007B2430(const char* s, int n) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        test ecx, ecx
        jne L_nonnull
        push 0x2
        call ext_007AA510
        add esp, 0x4
        xor eax, eax
        pop esi
        ret
L_nonnull:
        mov eax, dword ptr [esp + 0xc]
        xor esi, esi
        inc eax
        test eax, eax
        jle L_chk
L_loop:
        cmp byte ptr [esi + ecx], 0x0
        je L_chk
        inc esi
        cmp esi, eax
        jl L_loop
L_chk:
        cmp byte ptr [esi + ecx], 0x0
        je L_ret
        push 0x12
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        jne L_ret
        xor eax, eax
        pop esi
        ret
L_ret:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007B06A0] sub_007B06A0 (80 bytes)
extern "C" void ext_007AF5E0();
extern "C" void ext_007AF620();
extern "C" __declspec(naked) void __fastcall fn_007B06A0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx + 0x4]
        cmp edx, eax
        je L_7b06dd
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edx
        push eax
        xor eax, eax
        mov ax, word ptr [ecx]
        push eax
        push esi
        call ext_007AF5E0
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [esi]
        add esp, 0x8
        push ecx
        push 0xab1430
        push edx
        call ext_007AF620
        add esp, 0x14
        xor eax, eax
        pop esi
        ret
    L_7b06dd:
        mov eax, 0x1
        ret
    }
}

// [0x007B2CD0] sub_007B2CD0 (80 bytes)
extern "C" void ext_007B2CD0();
extern "C" void ext_007B7130();
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __cdecl fn_007B2CD0(void** p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je L_end
        mov eax, dword ptr [esi]
        test eax, eax
        je L_free
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je L_r1
        push eax
        call ext_007B7130
        add esp, 0x4
    L_r1:
        mov eax, dword ptr [esi]
        add eax, 0x14
        push eax
        call ext_007B2CD0
        mov ecx, dword ptr [esi]
        add ecx, 0x10
        push ecx
        call ext_007B2CD0
        add esp, 0x8
    L_free:
        mov edx, dword ptr [esi]
        push edx
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [esi], 0x0
    L_end:
        pop esi
        ret
    }
}

// [0x007B2B10] sub_007B2B10 (80 bytes)
extern "C" void ext_007B2570();
extern "C" void ext_007B2DF0();
extern "C" __declspec(naked) void __cdecl fn_007B2B10(void* self, int* out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        mov dword ptr [esp + 0x4], 0x0
        mov ecx, dword ptr [esi + 0x14]
        push eax
        push 0xb000
        push ecx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x10]
        add esp, 0xc
        test eax, eax
        jne L_7B2B53
        push esi
        push 0xb000
        call ext_007B2570
        mov edx, dword ptr [esp + 0x18]
        add esp, 0x8
        mov dword ptr [edx], eax
        pop esi
        pop ecx
        ret
    L_7B2B53:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [ecx], eax
        pop ecx
        ret
    }
}

// [0x007B2570] sub_007B2570 (80 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" bool mem_00B61218;
extern "C" __declspec(naked) void __fastcall fn_007B2570(void* self) {
    __asm {
        push ecx
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push eax
        call ext_007B2C20
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B2594
        mov al, byte ptr [mem_00B61219]
        test al, al
        jne L_7B2594
        xor eax, eax
        pop ecx
        ret
L_7B2594:
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx], edx
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        call ext_007B2E50
        mov eax, dword ptr [esp + 0x8]
        add esp, 0x8
        pop ecx
        ret
    }
}

// [0x007B29C0] sub_007B29C0 (80 bytes)
extern "C" void ext_007A9BE0();
extern "C" void ext_007B2D20();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2F70();

extern "C" __declspec(naked) void __cdecl fn_007B29C0(int a, int b, int c) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        push edx
        call ext_007A9BE0
        add esp, 0xc
        test eax, eax
        jne L_7B2A0D
        lea eax, [esp + 0xc]
        push eax
        push 0x8000
        push 0x0
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je L_7B2A05
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push eax
        call ext_007B2F70
        add esp, 0x8
    L_7B2A05:
        push 0x0
        call ext_007B2D20
        pop ecx
    L_7B2A0D:
        ret
    }
}

// [0x007B2BD0] sub_007B2BD0 (80 bytes)
extern "C" void ext_007B2480();
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();

extern "C" __declspec(naked) void __cdecl fn_007B2BD0(void) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        je L_7b2c15
        lea eax, [esp + 0xc]
        push esi
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [ecx], 0x80f0
        mov edx, dword ptr [esp + 0x14]
        push edx
        call ext_007B3380
        push edi
        mov esi, eax
        call ext_007B2480
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push ecx
        call ext_007B2E50
        add esp, 0x14
        pop esi
    L_7b2c15:
        pop edi
        ret
    }
}

// [0x007B8BB0] sub_007B8BB0 (96 bytes)
extern "C" int mem_00B61DB8;
extern "C" int mem_009251D8; /* "&|b" */
extern "C" __declspec(naked) void __cdecl fn_007B8BB0() {
    __asm {
        push esi
        mov esi, dword ptr [mem_00B61DB8]
        test esi, esi
        je L_7b8bf6
        push ebx
        mov ebx, dword ptr [mem_009251D8]
        push edi
    L_7b8bc3:
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je L_7b8bd0
        push eax
        call ebx
        add esp, 0x4
    L_7b8bd0:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_7b8bdd
        push eax
        call ebx
        add esp, 0x4
    L_7b8bdd:
        mov edi, dword ptr [esi + 0x14]
        push esi
        call ebx
        add esp, 0x4
        mov esi, edi
        test edi, edi
        jne L_7b8bc3
        mov dword ptr [mem_00B61DB8], edi
        pop edi
        pop ebx
        pop esi
        ret
    L_7b8bf6:
        mov dword ptr [mem_00B61DB8], 0x0
        pop esi
        ret
    }
}

// [0x007BC4F0] sub_007BC4F0 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BC4F0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        xor edx, edx
        mov ax, word ptr [ecx + 0x28]
        mov dx, word ptr [ecx + 0x36]
        shl eax, 0x3
        or eax, edx
        xor edx, edx
        mov dx, word ptr [ecx + 0x2a]
        shl eax, 0x3
        or eax, edx
        cmp eax, 0x40a
        jg L_7BC530
        cmp eax, 0x409
        jge L_7BC545
        sub eax, 0x209
        je L_7BC52A
        sub eax, 0x3
        jne L_7BC53E
    L_7BC52A:
        mov eax, 0x3
        ret
    L_7BC530:
        cmp eax, 0x40c
        je L_7BC545
        cmp eax, 0x80b
        je L_7BC542
    L_7BC53E:
        or eax, -0x1
        ret
    L_7BC542:
        xor eax, eax
        ret
    L_7BC545:
        mov eax, 0x1
        ret
    }
}

// [0x007B1920] sub_007B1920 (96 bytes)
extern "C" int mem_00AB15B8;
extern "C" void ext_0079B140();
extern "C" __declspec(naked) int __cdecl fn_007B1920(void* s, void* a, int b) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        or esi, -0x1
        mov cl, byte ptr [edx]
        cmp cl, 0x61
        je L_7B1961
        cmp cl, 0x72
        je L_7B1950
        cmp cl, 0x77
        je L_7B1961
        mov eax, dword ptr [esp + 0xc]
        push edx
        push offset mem_00AB15B8
        push eax
        call ext_0079B140
        add esp, 0xc
        mov eax, esi
        pop esi
        ret
    L_7B1950:
        mov cl, byte ptr [edx + 0x1]
        xor eax, eax
        cmp cl, 0x2b
        jne L_7B1970
        mov eax, 0x2
        pop esi
        ret
    L_7B1961:
        cmp cl, 0x77
        mov eax, 0x102
        jne L_7B1970
        mov eax, 0x302
    L_7B1970:
        pop esi
        ret
    }
}

// [0x007B7A30] sub_007B7A30 (96 bytes)
extern "C" void ext_007B7720();
extern "C" bool mem_00B61218;
extern "C" __declspec(naked) void __cdecl fn_007B7A30(const char* s, int n) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ebx
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov esi, eax
        mov edi, ecx
        je L_7B7A5A
L_7B7A49:
        mov al, byte ptr [esi + ebx]
        push eax
        call ext_007B7720
        add esp, 0x4
        inc esi
        cmp esi, edi
        jb L_7B7A49
L_7B7A5A:
        mov esi, dword ptr [esp + 0x14]
        cmp edi, esi
        jae L_7B7A83
L_7B7A62:
        push 0x0
        call ext_007B7720
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7A7E
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7A83
L_7B7A7E:
        inc edi
        cmp edi, esi
        jb L_7B7A62
L_7B7A83:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B2090] sub_007B2090 (96 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9E60();
extern "C" __declspec(naked) void __fastcall fn_007B2090(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        push -1
        push 0x8c1c88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006B9D10
        mov eax, dword ptr [esp + 0x18]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x14], 0
        call ext_006B9E60
        mov cl, byte ptr [esp + 0x1c]
        mov eax, esi
        mov byte ptr [esi + 0x4c], cl
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x007B2D20] sub_007B2D20 (96 bytes)
extern "C" void ext_007B2CD0();
extern "C" void ext_007B7130();
extern "C" unsigned char mem_009996FC;
extern "C" __declspec(naked) void __cdecl fn_007B2D20(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je L_7B2D71
        mov ecx, dword ptr [esi + 0x14]
        lea eax, [esi + 0x14]
        test ecx, ecx
        je L_7B2D3C
        push eax
        call ext_007B2CD0
        add esp, 0x4
L_7B2D3C:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_7B2D4C
        push esi
        call ext_007B7130
        add esp, 0x4
L_7B2D4C:
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov al, byte ptr [mem_009996FC]
        mov byte ptr [esi + 0x18], al
        mov cl, byte ptr [mem_009996FC]
        mov byte ptr [esi + 0x19], cl
L_7B2D71:
        pop esi
        ret
    }
}

// [0x007B7DE0] sub_007B7DE0 (96 bytes)
extern "C" void ext_007B7910();
extern "C" int mem_00999738;
extern "C" int mem_0099973C;
extern "C" int mem_00999740;
extern "C" bool mem_00B61218;
extern "C" __declspec(naked) void __cdecl fn_007B7DE0(void* out) {
    __asm {
        mov ecx, dword ptr [mem_00999738]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr [eax], ecx
        mov edx, dword ptr [mem_0099973C]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [mem_00999740]
        mov dword ptr [eax + 0x8], ecx
        call ext_007B7910
        fstp dword ptr [esi]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_7B7E1A
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7E3C
    L_7B7E1A:
        call ext_007B7910
        fstp dword ptr [esi + 0x4]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_7B7E34
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7E3C
    L_7B7E34:
        call ext_007B7910
        fstp dword ptr [esi + 0x8]
    L_7B7E3C:
        pop esi
        ret
    }
}

// [0x007B0ED0] sub_007B0ED0 (96 bytes)
extern "C" void ext_007B0F30();
extern "C" int mem_00993860;
extern "C" __declspec(naked) void __cdecl fn_007B0ED0(void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push eax
        push esi
        push edi
        call ext_007B06F0
        add esp, 0xc
        test eax, eax
        je L_7B0F17
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        push eax
        push esi
        push edi
        call ext_007B0F30
        add esp, 0x14
        test eax, eax
        je L_7B0F17
        fld dword ptr [esp + 0x18]
        pop edi
        pop esi
        add esp, 0x8
        ret
    L_7B0F17:
        fld dword ptr [mem_00993860]
        pop edi
        pop esi
        add esp, 0x8
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x007B7910] sub_007B7910 (96 bytes)
extern "C" void ext_0079EBE0();
extern "C" int mem_00999790;
extern "C" int mem_009252AC;
extern "C" int mem_00993838;
extern "C" void ext_007BAE20();
extern "C" __declspec(naked) float __cdecl fn_007B7910() {
    __asm {
        sub esp, 0x8
        call ext_0079EBE0
        push eax
        mov eax, dword ptr [mem_00999790]
        push 0x1
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call dword ptr [mem_009252AC]
        add esp, 0x10
        cmp eax, 0x1
        je L_7B7951
        push 0xd
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        jne L_7B7951
        fld dword ptr [mem_00993838]
        add esp, 0x8
        ret
    L_7B7951:
        lea edx, [esp + 0x4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push edx
        push eax
        call ext_007BAE20
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        add esp, 0x8
        ret
    }
}

// [0x007B7A90] sub_007B7A90 (96 bytes)
extern "C" void ext_007B7750();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B7A90(char* p, int n) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor esi, esi
        test ebx, ebx
        mov byte ptr [edi], 0x0
        jbe L_7B7AC9
L_7B7AA4:
        call ext_007B7750
        mov byte ptr [esi + edi], al
        mov cl, byte ptr [mem_00B61218]
        test cl, cl
        je L_7B7AC0
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_7B7ADD
L_7B7AC0:
        test al, al
        je L_7B7AC9
        inc esi
        cmp esi, ebx
        jb L_7B7AA4
L_7B7AC9:
        cmp byte ptr [esi + edi], 0x0
        je L_7B7ADD
        cmp esi, ebx
        jne L_7B7ADD
        push 0xd
        call ext_007AA510
        add esp, 0x4
L_7B7ADD:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B77D0] sub_007B77D0 (96 bytes)
extern "C" void ext_0079EBE0();
extern "C" void ext_007BAE30();
extern "C" int mem_00999788;
extern "C" int mem_009252AC;
extern "C" __declspec(naked) int __fastcall fn_007B77D0(void* self) {
    __asm {
        push ecx
        call ext_0079EBE0
        push eax
        mov eax, dword ptr [mem_00999788]
        push 0x1
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call dword ptr [mem_009252AC]
        add esp, 0x10
        cmp eax, 0x1
        je L_7B780A
        push 0xd
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        jne L_7B780A
        xor ax, ax
        pop ecx
        ret
    L_7B780A:
        lea edx, [esp + 0x2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push edx
        push eax
        call ext_007BAE30
        mov ax, word ptr [esp + 0xa]
        add esp, 0x8
        pop ecx
        ret
    }
}

// [0x007B8DD0] sub_007B8DD0 (96 bytes)
extern "C" void ext_007B2D80();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B7110();
extern "C" int mem_009998FE;

extern "C" __declspec(naked) unsigned short __cdecl fn_007B8DD0(void* p) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esp + 0x8]
        push esi
        mov si, word ptr [mem_009998FE]
        push eax
        push 0xb030
        push ecx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je L_8DD0_end
        push eax
        call ext_007B3CF0
        add esp, 0x4
        test eax, eax
        je L_8DD0_f3
        mov dx, word ptr [eax]
        mov dword ptr [esp + 0x4], edx
        mov si, dx
    L_8DD0_f3:
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_007B7110
        add esp, 0x4
    L_8DD0_end:
        mov ax, si
        pop esi
        pop ecx
        ret
    }
}

// [0x007B7830] sub_007B7830 (96 bytes)
extern "C" void ext_0079EBE0();
extern "C" void ext_007BAE20();
extern "C" int mem_009252AC;
extern "C" int mem_0099978C;

extern "C" __declspec(naked) int __fastcall fn_007B7830(void* self) {
    __asm {
        sub esp, 0x8
        call ext_0079EBE0
        push eax
        mov eax, dword ptr [mem_0099978C]
        push 0x1
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call dword ptr [mem_009252AC]
        add esp, 0x10
        cmp eax, 0x1
        je L_7b786d
        push 0xd
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        jne L_7b786d
        xor eax, eax
        add esp, 0x8
        ret
    L_7b786d:
        lea edx, [esp + 0x4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push edx
        push eax
        call ext_007BAE20
        mov eax, dword ptr [esp + 0xc]
        add esp, 0x8
        add esp, 0x8
        ret
    }
}

// [0x007B0FC0] sub_007B0FC0 (112 bytes)
extern "C" __declspec(naked) float __cdecl fn_007B0FC0(void* self, void* p) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        cmp word ptr [edx + 0x150], 0x4d4d
        jne L_7B1000
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        push esi
        mov esi, dword ptr [edx + 0x15c]
        mov ax, word ptr [ecx + 0x2]
        push edi
        mov edi, dword ptr [ecx + 0x8]
        shl eax, 0x2
        mov ecx, dword ptr [esi + eax]
        shr edi, cl
        mov ecx, dword ptr [edx + 0x160]
        and edi, dword ptr [ecx + eax]
        mov dword ptr [esp + 0x10], edi
        pop edi
        fld dword ptr [esp + 0xc]
        pop esi
        ret
    L_7B1000:
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [edx + 0x160]
        xor ecx, ecx
        mov cx, word ptr [eax + 0x2]
        mov ecx, dword ptr [edx + 4*ecx]
        mov edx, dword ptr [eax + 0x8]
        and ecx, edx
        mov dword ptr [esp + 0x8], ecx
        fld dword ptr [esp + 0x8]
        ret
    }
}

// [0x007B3120] sub_007B3120 (112 bytes)
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __cdecl fn_007B3120(void* pp) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        je L_end
        mov eax, dword ptr [edi]
        test eax, eax
        je L_end
        mov ecx, dword ptr [eax + 0x4]
        push ebx
        mov ebx, dword ptr [mem_009251D8]
        test ecx, ecx
        je L_free_struct
        mov ecx, dword ptr [eax]
        push esi
        xor esi, esi
        test ecx, ecx
        jbe L_free_arr
    L_loop:
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 8*esi]
        push ecx
        call ebx
        mov edx, dword ptr [edi]
        add esp, 0x4
        inc esi
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [eax + 8*esi - 0x4], 0x0
        mov eax, dword ptr [edi]
        cmp esi, dword ptr [eax]
        jb L_loop
    L_free_arr:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        call ebx
        add esp, 0x4
        pop esi
    L_free_struct:
        mov eax, dword ptr [edi]
        push eax
        call ebx
        add esp, 0x4
        mov dword ptr [edi], 0x0
        pop ebx
    L_end:
        pop edi
        ret
    }
}

// [0x007B8C10] sub_007B8C10 (96 bytes)
extern "C" void ext_007B2D80();
extern "C" void ext_007B8B60();
extern "C" void ext_007B8C70();
extern "C" void ext_007B8E30();
extern "C" int mem_00999858;
extern "C" __declspec(naked) void __cdecl fn_007B8C10(void* a1) {
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        lea     eax, [esp + 0x4]
        push    eax
        push    0xb000
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007B2D80
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0xc
        test    eax, eax
        je      L_7b8c67
        push    esi
        mov     esi, dword ptr [eax + 0x14]
        test    esi, esi
        je      L_7b8c61
    L_7b8c39:
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007B8B60
        movsx   cx, byte ptr [mem_00999858]
        add     esp, 0x4
        cmp     ax, cx
        jne     L_7b8c5a
        push    esi
        call    ext_007B8C70
        add     esp, 0x4
    L_7b8c5a:
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jne     L_7b8c39
    L_7b8c61:
        call    ext_007B8E30
        pop     esi
    L_7b8c67:
        ret
    }
}

// [0x007BA200] sub_007BA200 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BA200(void* self, unsigned short tag, void* out, unsigned int value) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        mov ax, word ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, 0xffff
        mov word ptr [edx], ax
        mov dword ptr [edx + 0x4], 0x1
        jbe L_7BA22B
        mov dword ptr [edx + 0x8], esi
        mov word ptr [edx + 0x2], 0x4
        pop esi
        ret
    L_7BA22B:
        mov ecx, dword ptr [esp + 0x8]
        mov word ptr [edx + 0x2], 0x3
        mov eax, dword ptr [ecx + 0x160]
        cmp word ptr [ecx + 0x150], 0x4d4d
        mov eax, dword ptr [eax + 0xc]
        jne L_7BA25B
        mov ecx, dword ptr [ecx + 0x15c]
        and eax, esi
        pop esi
        mov ecx, dword ptr [ecx + 0xc]
        shl eax, cl
        mov dword ptr [edx + 0x8], eax
        ret
    L_7BA25B:
        and eax, esi
        pop esi
        mov dword ptr [edx + 0x8], eax
        ret
    }
}

// [0x007B7F90] sub_007B7F90 (112 bytes)
extern "C" void ext_007B7790(unsigned short);
extern "C" void ext_007B7890();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B7F90(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ax, word ptr [esi]
        push eax
        call ext_007B7790
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7FB3
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7FFB
L_7B7FB3:
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_007B7890
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7FD1
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7FFB
L_7B7FD1:
        mov edx, dword ptr [esi + 0x8]
        push edx
        call ext_007B7890
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_7B7FEF
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7FFB
L_7B7FEF:
        mov eax, dword ptr [esi + 0xc]
        push eax
        call ext_007B7890
        add esp, 0x4
L_7B7FFB:
        pop esi
        ret
    }
}

// [0x007B2D80] sub_007B2D80 (112 bytes)
extern "C" void ext_007B2D80();
extern "C" __declspec(naked) void __cdecl fn_007B2D80(void* a1, int a2, void* a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        push edi
        test ebx, ebx
        jne L_7B2D9E
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B2DE1
    L_7B2D9E:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_7B2DDB
        mov edi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        cmp ecx, edi
        jne L_7B2DB6
    L_7B2DB0:
        pop edi
        mov dword ptr [ebx], eax
        pop esi
        pop ebx
        ret
    L_7B2DB6:
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        je L_7B2DDB
    L_7B2DBD:
        lea eax, [esp + 0x18]
        push eax
        push edi
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        test eax, eax
        jne L_7B2DB0
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        jne L_7B2DBD
    L_7B2DDB:
        mov dword ptr [ebx], 0x0
    L_7B2DE1:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B2760] sub_007B2760 (112 bytes)
extern "C" void ext_007B24C0();
extern "C" void ext_007B2530();
extern "C" void ext_007B2570();
extern "C" void ext_007B25C0();

extern "C" __declspec(naked) int __cdecl fn_007B2760() {
    __asm {
        mov eax, dword ptr [esp + 0x24]
        push esi
        test eax, eax
        jne L_7B2775
        mov eax, dword ptr [esp + 0x2c]
        push eax
        push 0xb006
        jmp L_7B277F
    L_7B2775:
        mov ecx, dword ptr [esp + 0x2c]
        push ecx
        push 0xb004
    L_7B277F:
        call ext_007B2570
        add esp, 0x8
        mov esi, eax
        push esi
        call ext_007B2530
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        push esi
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        push ecx
        push edx
        call ext_007B24C0
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push esi
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        call ext_007B25C0
        add esp, 0x2c
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007B24C0] sub_007B24C0 (112 bytes)
extern "C" void ext_007B2480();
extern "C" void ext_007B2BD0();
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();

extern "C" __declspec(naked) void __fastcall fn_007B24C0(void* self) {
    __asm {
        push ecx
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push esi
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [ecx], 0xb010
        mov edx, dword ptr [esp + 0x8]
        push edx
        call ext_007B3380
        mov esi, eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_007B2480
        mov cx, word ptr [esp + 0x1c]
        mov dx, word ptr [esp + 0x20]
        mov dword ptr [esi], eax
        mov word ptr [esi + 0x4], cx
        mov ecx, dword ptr [esp + 0x28]
        mov word ptr [esi + 0x6], dx
        mov word ptr [esi + 0x8], 0xffff
        mov eax, dword ptr [esp + 0x10]
        push eax
        push ecx
        call ext_007B2E50
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        call ext_007B2BD0
        add esp, 0x1c
        pop esi
        pop ecx
        ret
    }
}

// [0x007B0E55] sub_007B0E55 (123 bytes)
extern "C" void ext_007AEFF0();

extern "C" __declspec(naked) int __cdecl fn_007B0E55(int a1, int a2, int a3) {
    __asm {
        _emit 0x0d
        _emit 0x7b
        _emit 0x00
        _emit 0x6e
        _emit 0x0c
        _emit 0x7b
        _emit 0x00
        _emit 0xc9
        _emit 0x0c
        _emit 0x7b
        _emit 0x00
        _emit 0x0c
        _emit 0x0d
        _emit 0x7b
        _emit 0x00
        _emit 0x0c
        _emit 0x0d
        _emit 0x7b
        _emit 0x00
        _emit 0x71
        _emit 0x0d
        _emit 0x7b
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp dword ptr [esi + 0x4], 0x4
        ja L_7B0EB6
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esp + 0xc], eax
        test byte ptr [ecx + 0xc], -0x80
        je L_7B0E99
        lea edx, [esp + 0xc]
        push edx
        call ext_007AEFF0
        add esp, 0x4
    L_7B0E99:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0xc]
        push eax
        push ecx
        push edx
        call ext_0079B010
        add esp, 0xc
        mov eax, 0x1
        pop esi
        ret
    L_7B0EB6:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push esi
        push ecx
        call ext_007B06F0
        add esp, 0xc
        pop esi
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x007B09C0] sub_007B09C0 (128 bytes)
extern "C" __declspec(naked) int __cdecl fn_007B09C0(void* a, void* b, void* c) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, 0x2
        ja L_slow
        mov edx, dword ptr [esp + 0x4]
        cmp word ptr [edx + 0x150], 0x4d4d
        jne L_be
        mov edx, dword ptr [esp + 0xc]
        dec eax
        je L_le1
        dec eax
        jne L_ret1
        mov ax, word ptr [ecx + 0x8]
        mov word ptr [edx + 0x2], ax
    L_le1:
        mov ecx, dword ptr [ecx + 0x8]
        mov eax, 0x1
        shr ecx, 0x10
        mov word ptr [edx], cx
        ret
    L_be:
        mov edx, dword ptr [esp + 0xc]
        dec eax
        je L_be1
        dec eax
        jne L_ret1
        mov eax, dword ptr [ecx + 0x8]
        shr eax, 0x10
        mov word ptr [edx + 0x2], ax
    L_be1:
        mov cx, word ptr [ecx + 0x8]
        mov word ptr [edx], cx
    L_ret1:
        mov eax, 0x1
        ret
    L_slow:
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x4]
        push edx
        push ecx
        push eax
        call ext_007B06F0
        add esp, 0xc
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x007B2C20] sub_007B2C20 (128 bytes)
extern "C" unsigned char mem_009996FC;

extern "C" __declspec(naked) void __cdecl fn_007B2C20(void** p) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp esi, ebx
        jne L_7b2c3f
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_7b2c95
    L_7b2c3f:
        push 0x1c
        call dword ptr [mem_00925208]
        add esp, 0x4
        cmp esi, ebx
        mov dword ptr [esi], eax
        jne L_7b2c63
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        cmp al, bl
        je L_7b2c95
    L_7b2c63:
        mov eax, dword ptr [esi]
        mov dword ptr [eax], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x4], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x8], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0xc], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x10], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x14], ebx
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_009996FC]
        mov byte ptr [eax + 0x18], cl
        mov edx, dword ptr [esi]
        mov al, byte ptr [mem_009996FC]
        mov byte ptr [edx + 0x19], al
    L_7b2c95:
        pop esi
        pop ebx
        ret
    }
}

// [0x007B2EF0] sub_007B2EF0 (128 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B2CA0();
extern "C" void ext_007B2D20();
extern "C" void ext_007B2DF0();
extern "C" void ext_007B2E50();
extern "C" bool mem_00B61218;

extern "C" __declspec(naked) void __cdecl fn_007B2EF0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x14]
        test ebx, ebx
        push edi
        je L_7b2f03
        test esi, esi
        jne L_7b2f16
    L_7b2f03:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b2f67
    L_7b2f16:
        mov edi, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebx + 0x14]
        push esi
        push edi
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esi]
        add esp, 0xc
        test eax, eax
        je L_7b2f3f
        push eax
        call ext_007B2D20
        mov ecx, dword ptr [esi]
        add esp, 0x4
        mov dword ptr [ecx], edi
        pop edi
        pop esi
        pop ebx
        ret
    L_7b2f3f:
        push edi
        push esi
        call ext_007B2CA0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_7b2f5b
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7b2f67
    L_7b2f5b:
        mov edx, dword ptr [esi]
        push edx
        push ebx
        call ext_007B2E50
        add esp, 0x8
    L_7b2f67:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B1660] sub_007B1660 (128 bytes)
extern "C" void ext_00798FF0();
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_007B08E0();
extern "C" void ext_007B09C0();

extern "C" __declspec(naked) void* __cdecl fn_007B1660(int a1, void* obj) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        lea esi, [esp + 0x10]
        mov eax, dword ptr [edi + 0x4]
        cmp eax, 0xa
        jbe L_7B1684
        add eax, eax
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov esi, eax
    L_7B1684:
        mov ebp, dword ptr [esp + 0x28]
        cmp word ptr [edi + 0x2], 0x1
        push esi
        push edi
        push ebp
        jne L_7B1699
        call ext_007B08E0
        jmp L_7B169E
    L_7B1699:
        call ext_007B09C0
    L_7B169E:
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je L_7B16BD
        mov ecx, dword ptr [edi + 0x4]
        xor edx, edx
        mov dx, word ptr [edi]
        push esi
        push ecx
        push edx
        push ebp
        call ext_00798FF0
        add esp, 0x10
        mov ebx, eax
    L_7B16BD:
        lea eax, [esp + 0x10]
        cmp esi, eax
        je L_7B16CE
        push esi
        call ext_0079AF50
        add esp, 0x4
    L_7B16CE:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007B8000] sub_007B8000 (144 bytes)
extern "C" unsigned short ext_007B77D0();
extern "C" unsigned short ext_007B7830();
extern "C" int mem_00999758;
extern "C" int mem_0099975C;
extern "C" int mem_00999760;
extern "C" int mem_00999764;
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_007B8000(int* out) {
    __asm {
        mov ecx, dword ptr [mem_00999758]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr [eax], ecx
        mov edx, dword ptr [mem_0099975C]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [mem_00999760]
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [mem_00999764]
        mov dword ptr [eax + 0xc], edx
        call ext_007B77D0
        mov word ptr [esi], ax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_call1
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_call1:
        call ext_007B7830
        mov dword ptr [esi + 0x4], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_call2
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_call2:
        call ext_007B7830
        mov dword ptr [esi + 0x8], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_call3
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_call3:
        call ext_007B7830
        mov dword ptr [esi + 0xc], eax
    L_end:
        pop esi
        ret
    }
}

// [0x007BA3E0] sub_007BA3E0 (144 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BA3E0(void* self, unsigned int a2, void* out, unsigned int count, const unsigned int* arr) {
    __asm {
        mov ax, word ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov edx, 0x1
        push edi
        mov word ptr [esi], ax
        mov word ptr [esi + 0x2], 0x3
        mov cl, byte ptr [ebp + 0x40]
        mov edi, dword ptr [esp + 0x20]
        shl edx, cl
        xor ebx, ebx
        test edi, edi
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [ebp + 0x174]
        mov dword ptr [esp + 0x18], eax
        jbe L_7BA448
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x1c], ecx
L_7BA423:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edx]
        push eax
        push esi
        push ebp
        call ext_007BAA40
        add esp, 0xc
        test eax, eax
        je L_7BA460
        mov ecx, dword ptr [esp + 0x1c]
        inc ebx
        add ecx, 0x4
        cmp ebx, edi
        mov dword ptr [esp + 0x1c], ecx
        jb L_7BA423
L_7BA448:
        imul edi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], ecx
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
L_7BA460:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007BA980] sub_007BA980 (144 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BA980(void* self, int arg2) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, 0x1
        xor eax, eax
        mov cl, byte ptr [edi + 0x40]
        mov ax, word ptr [edi + 0x4e]
        shl esi, cl
        xor ecx, ecx
        lea ebx, [edi + 0xf8]
        mov cx, word ptr [edi + 0x90]
        shl esi, 1
        sub eax, ecx
        js L_7ba9b6
        cmp eax, 0x1
        jle L_7ba9ea
        cmp eax, 0x2
        je L_7ba9d1
    L_7ba9b6:
        mov edx, dword ptr [ebx + 0x8]
        mov eax, dword ptr [ebx]
        push esi
        push edx
        push eax
        call ext_0079B030
        add esp, 0xc
        test eax, eax
        je L_7ba9d1
        mov eax, 0x3
        jmp L_7ba9ef
    L_7ba9d1:
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ebx]
        push esi
        push ecx
        push edx
        call ext_0079B030
        add esp, 0xc
        test eax, eax
        mov eax, 0x3
        jne L_7ba9ef
    L_7ba9ea:
        mov eax, 0x1
    L_7ba9ef:
        push ebx
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push 0x12d
        push edi
        call ext_007BA3E0
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B7C50] sub_007B7C50 (144 bytes)
extern "C" void ext_007B7750();
extern "C" bool mem_00B61218;

extern "C" __declspec(naked) void __cdecl fn_007B7C50(char* buf, unsigned int count) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        xor esi, esi
        test ebp, ebp
        mov byte ptr [ebx], 0x0
        jbe L_7B7C89
    L_7B7C64:
        call ext_007B7750
        mov byte ptr [esi + ebx], al
        mov cl, byte ptr [mem_00B61218]
        test cl, cl
        je L_7B7C80
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_7B7CDA
    L_7B7C80:
        test al, al
        je L_7B7C89
        inc esi
        cmp esi, ebp
        jb L_7B7C64
    L_7B7C89:
        cmp byte ptr [esi + ebx], 0x0
        je L_7B7CA2
        push 0xd
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B7CDA
    L_7B7CA2:
        cmp esi, ebp
        jae L_7B7CDA
        push edi
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        pop edi
        mov esi, ecx
        inc esi
        cmp esi, ebp
        jae L_7B7CDA
    L_7B7CBB:
        call ext_007B7750
        mov byte ptr [esi + ebx], al
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_7B7CD5
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B7CDA
    L_7B7CD5:
        inc esi
        cmp esi, ebp
        jb L_7B7CBB
    L_7B7CDA:
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BA270] sub_007BA270 (144 bytes)
extern "C" void ext_007990D0();
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_007BA4B0();

extern "C" __declspec(naked) void* __fastcall fn_007BA270(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        push esi
        xor esi, esi
        push edi
        mov si, word ptr [ebx + 0x4e]
        lea edi, [esp + 0x10]
        cmp esi, 0xa
        jbe L_7BA298
        lea eax, [esi + esi]
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov edi, eax
    L_7BA298:
        mov ebp, dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x28]
        push ecx
        push ebp
        push ebx
        call ext_007990D0
        add esp, 0xc
        test esi, esi
        jle L_7BA2C1
        mov eax, edi
        mov ecx, esi
    L_7BA2B3:
        mov dx, word ptr [esp + 0x28]
        mov word ptr [eax], dx
        add eax, 0x2
        dec ecx
        jne L_7BA2B3
    L_7BA2C1:
        mov eax, dword ptr [esp + 0x30]
        push edi
        push esi
        push eax
        push ebp
        push 0x3
        push ebx
        call ext_007BA4B0
        lea ecx, [esp + 0x28]
        add esp, 0x18
        cmp edi, ecx
        mov esi, eax
        je L_7BA2E7
        push edi
        call ext_0079AF50
        add esp, 0x4
    L_7BA2E7:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007B2340] sub_007B2340 (160 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_007B2090();
extern "C" void ext_007B2210();

extern "C" __declspec(naked) void __fastcall fn_007B2340(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov ebp, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ebx + 0x8]
        push edi
        lea edi, [ebx + 0x8]
        xor esi, esi
        test eax, eax
        jle L_ALLOC
    L_LOOP:
        mov eax, dword ptr [ebx + 0x18]
        push ebp
        mov ecx, dword ptr [eax + 4*esi]
        call ext_007B2210
        test al, al
        jne L_EXIT
        mov eax, dword ptr [edi]
        inc esi
        cmp esi, eax
        jl L_LOOP
    L_ALLOC:
        push 0x50
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x20], eax
        test eax, eax
        mov dword ptr [esp + 0x18], 0x0
        je L_NULL
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push ebp
        mov ecx, eax
        call ext_007B2090
        jmp L_STORE
    L_NULL:
        xor eax, eax
    L_STORE:
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [edi]
        lea edx, [esp + 0x20]
        mov ecx, edi
        push edx
        push eax
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006D2170
    L_EXIT:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x007BA4B0] sub_007BA4B0 (160 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BA4B0(void* self, unsigned short w2, unsigned short w3,
                                                     void* out, unsigned int count, const void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x10]
        mov dx, word ptr [esp + 0x8]
        mov ax, word ptr [esp + 0xc]
        mov word ptr [ecx + 0x2], dx
        mov edx, dword ptr [esp + 0x14]
        cmp edx, 0x2
        mov word ptr [ecx], ax
        mov dword ptr [ecx + 0x4], edx
        ja L_7BA4B0_ja
        mov eax, dword ptr [esp + 0x4]
        push esi
        cmp word ptr [eax + 0x150], 0x4d4d
        jne L_7BA4B0_b
        mov esi, dword ptr [esp + 0x1c]
        xor eax, eax
        mov ax, word ptr [esi]
        shl eax, 0x10
        cmp edx, 0x2
        mov dword ptr [ecx + 0x8], eax
        jne L_7BA4B0_done
        xor edx, edx
        mov dx, word ptr [esi + 0x2]
        pop esi
        or edx, eax
        mov eax, 0x1
        mov dword ptr [ecx + 0x8], edx
        ret
    L_7BA4B0_b:
        mov esi, dword ptr [esp + 0x1c]
        xor eax, eax
        cmp edx, 0x2
        mov ax, word ptr [esi]
        mov dword ptr [ecx + 0x8], eax
        jne L_7BA4B0_done
        xor edx, edx
        mov dx, word ptr [esi + 0x2]
        shl edx, 0x10
        or edx, eax
        mov dword ptr [ecx + 0x8], edx
    L_7BA4B0_done:
        mov eax, 0x1
        pop esi
        ret
    L_7BA4B0_ja:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        call ext_007BAA40
        add esp, 0xc
        ret
    }
}

// [0x007BA300] sub_007BA300 (160 bytes)
extern "C" void ext_007990D0();
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_007BA700();

extern "C" __declspec(naked) void* __cdecl fn_007BA300(void* a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x5c
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        xor esi, esi
        mov si, word ptr [ebx + 0x4e]
        push edi
        cmp esi, 0xa
        lea edi, [esp + 0x18]
        jbe L_7BA330
        lea eax, [8*esi]
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov edi, eax
    L_7BA330:
        mov edx, dword ptr [ebp + 0x10]
        lea ecx, [esp + 0x10]
        push ecx
        push edx
        push ebx
        call ext_007990D0
        add esp, 0xc
        test esi, esi
        jle L_7BA360
        mov eax, edi
        mov ecx, esi
    L_7BA34A:
        mov edx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x14]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ebx
        add eax, 0x8
        dec ecx
        jne L_7BA34A
        mov ebx, dword ptr [ebp + 0x8]
    L_7BA360:
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0xc]
        push edi
        push esi
        push eax
        push ecx
        push edx
        push ebx
        call ext_007BA700
        mov esi, eax
        lea eax, [esp + 0x30]
        add esp, 0x18
        cmp edi, eax
        je L_7BA38A
        push edi
        call ext_0079AF50
        add esp, 0x4
    L_7BA38A:
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007B1030] sub_007B1030 (160 bytes)
extern "C" int mem_009993C8[];
extern "C" void ext_007B04C0();
extern "C" void ext_007B0F30();
extern "C" void ext_0079AF50();

extern "C" __declspec(naked) int __cdecl fn_007B1030(void* a1, void* a2, int* a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor eax, eax
        mov ebx, dword ptr [esp + 0x18]
        push 0xab14c8
        mov ax, word ptr [edi + 0x2]
        xor ebp, ebp
        mov ecx, dword ptr [eax*4 + mem_009993C8]
        imul ecx, dword ptr [edi + 0x4]
        push ecx
        push ebx
        call ext_007B04C0
        mov esi, eax
        add esp, 0xc
        cmp esi, ebp
        mov dword ptr [esp + 0x10], esi
        je L_7B10C6
        push esi
        push edi
        push ebx
        call ext_007B06F0
        add esp, 0xc
        test eax, eax
        je L_7B10BD
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x1c], ebp
        cmp eax, ebp
        jbe L_7B10BD
        mov ebx, dword ptr [esp + 0x20]
    L_7B1087:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        push edx
        push eax
        push edi
        push ecx
        call ext_007B0F30
        mov ebp, eax
        add esp, 0x14
        test ebp, ebp
        je L_7B10B9
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edi + 0x4]
        inc eax
        add ebx, 0x4
        add esi, 0x8
        cmp eax, ecx
        mov dword ptr [esp + 0x1c], eax
        jb L_7B1087
    L_7B10B9:
        mov esi, dword ptr [esp + 0x10]
    L_7B10BD:
        push esi
        call ext_0079AF50
        add esp, 0x4
    L_7B10C6:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007B7AF0] sub_007B7AF0 (176 bytes)
extern "C" void ext_007B7A90();
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007B7AF0(char** dst, int len) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925208]
        push esi
        lea esi, [eax + 0x1]
        push edi
        push esi
        call ebp
        mov ebx, eax
        add esp, 0x4
        test ebx, ebx
        jne L_007B7B20
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_007B7B95
    L_007B7B20:
        push esi
        push ebx
        call ext_007B7A90
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_007B7B3C
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_007B7B95
    L_007B7B3C:
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call ebp
        mov ebp, dword ptr [esp + 0x18]
        add esp, 0x4
        test eax, eax
        mov dword ptr [ebp], eax
        jne L_007B7B6B
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_007B7B95
    L_007B7B6B:
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        push ebx
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebp]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        call dword ptr [mem_009251D8]
        add esp, 0x4
    L_007B7B95:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B7BA0] sub_007B7BA0 (176 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B7C50();
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __cdecl fn_007B7BA0(void* out, int len) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925208]
        push esi
        lea esi, [eax + 0x1]
        push edi
        push esi
        call ebp
        mov ebx, eax
        add esp, 0x4
        test ebx, ebx
        jne L_7b7bd0
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b7c45
    L_7b7bd0:
        push esi
        push ebx
        call ext_007B7C50
        mov al, byte ptr [mem_00B61218]
        add esp, 0x8
        test al, al
        je L_7b7bec
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7b7c45
    L_7b7bec:
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call ebp
        mov ebp, dword ptr [esp + 0x18]
        add esp, 0x4
        test eax, eax
        mov dword ptr [ebp], eax
        jne L_7b7c1b
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b7c45
    L_7b7c1b:
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        push ebx
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebp]
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        call dword ptr [mem_009251D8]
        add esp, 0x4
    L_7b7c45:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B1FA0] sub_007B1FA0 (22 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007B1FA0(void* self) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        push 0x10
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x14], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007BEA10] sub_007BEA10 (28 bytes)
extern "C" void ext_0079B140();
extern "C" __declspec(naked) void __cdecl fn_007BEA10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x164]
        mov edx, dword ptr [eax]
        push ecx
        push 0xab24a4
        push edx
        call ext_0079B140
        add esp, 0xc
        ret
    }
}

// [0x007BDA20] sub_007BDA20 (33 bytes)
extern "C" __declspec(naked) void fn_007BDA20() {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        mov ecx, offset mem_007BDA50
        __asm _emit 0x89 __asm _emit 0x88 __asm _emit 0xA0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [eax + 0x1a0], ecx
        __asm _emit 0x89 __asm _emit 0x88 __asm _emit 0xA8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [eax + 0x1a8], ecx
        __asm _emit 0x89 __asm _emit 0x88 __asm _emit 0xB0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [eax + 0x1b0], ecx
        __asm _emit 0xB8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, 0x1
        ret
    }
}

// [0x007BADF0] sub_007BADF0 (38 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007AF8F0();

extern "C" __declspec(naked) int __cdecl fn_007BADF0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ax, word ptr [esi + 0x44]
        push eax
        call ext_007AF8F0
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        push ecx
        push 0xab19fc
        push edx
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007BD310] sub_007BD310 (39 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BD310(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov cx, word ptr [eax + 0x46]
        mov word ptr [eax + 0x40], 0x10
        sub cx, 0x804c
        mov word ptr [eax + 0x42], 0x2
        neg cx
        sbb ecx, ecx
        and ecx, 0x2
        inc ecx
        mov word ptr [eax + 0x4e], cx
        ret
    }
}

// [0x007BD640] sub_007BD640 (48 bytes)
extern "C" __declspec(naked) void fn_007BD640() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov ecx, dword ptr [eax + 0x1cc]
        mov esi, dword ptr [eax + 0x1d8]
        mov dword ptr [ecx + 0x30], esi
        mov eax, dword ptr [eax + 0x1e4]
        lea edx, [ecx + 0x30]
        mov dword ptr [ecx + 0x34], eax
        push edx
        call ext_007BFDF0
        add esp, 0x4
        neg eax
        sbb eax, eax
        pop esi
        inc eax
        ret
    }
}

// [0x007BF4A0] sub_007BF4A0 (49 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BF4A0(char* self, int scale) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x1d0]
        mov edx, dword ptr [eax + 0x1e0]
        imul ecx, dword ptr [esp + 0x8]
        add edx, ecx
        mov dword ptr [eax + 0x1e0], edx
        mov edx, dword ptr [eax + 0x1e4]
        sub edx, ecx
        mov dword ptr [eax + 0x1e4], edx
        mov eax, 0x1
        ret
    }
}

// [0x007BFC60] sub_007BFC60 (47 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BFC60(void* a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push ebx
        mov edi, dword ptr [esi + 0x1cc]
        push ebp
        push esi
        call dword ptr [edi + 0xc]
        mov eax, dword ptr [esp + 0x2c]
        push eax
        push ebx
        push ebp
        push esi
        call dword ptr [edi + 0x10]
        add esp, 0x1c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BD7A0] sub_007BD7A0 (46 bytes)
extern "C" void ext_007C19A0();
extern "C" __declspec(naked) void __fastcall fn_007BD7A0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x1cc]
        mov edx, dword ptr [ecx + 0x1d8]
        mov dword ptr [eax + 0x3c], edx
        mov ecx, dword ptr [ecx + 0x1dc]
        mov dword ptr [eax + 0x40], ecx
        add eax, 0x30
        push eax
        call ext_007C19A0
        add esp, 0x4
        neg eax
        sbb eax, eax
        _emit 0x40
        ret
    }
}

// [0x007BD340] sub_007BD340 (54 bytes)
extern "C" void ext_0079AF50();

extern "C" __declspec(naked) void __cdecl fn_007BD340(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, dword ptr [edi + 0x1cc]
        test esi, esi
        je L_7BD373
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_7BD360
        push eax
        call ext_0079AF50
        add esp, 0x4
    L_7BD360:
        push esi
        call ext_0079AF50
        add esp, 0x4
        mov dword ptr [edi + 0x1cc], 0x0
    L_7BD373:
        pop edi
        pop esi
        ret
    }
}

// [0x007BC320] sub_007BC320 (53 bytes)
extern "C" void ext_007BB7F0();

extern "C" __declspec(naked) void __cdecl fn_007BC320(void* self, void* dst, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC352
        push ebx
        lea ebx, [eax + 0x1]
    L_7BC33C:
        mov eax, dword ptr [esi]
        push edi
        push eax
        add esi, 0x4
        call ext_007BB7F0
        add esp, 0x8
        add edi, 0xc
        dec ebx
        jne L_7BC33C
        pop ebx
    L_7BC352:
        pop edi
        pop esi
        ret
    }
}

// [0x007B2040] sub_007B2040 (51 bytes)
extern "C" int mem_00B61D90;
extern "C" int mem_00B61D98;
extern "C" void ext_006A6C87();
extern "C" void ext_007B2220();
extern "C" __declspec(naked) void __fastcall fn_007B2040(void* self) {
    __asm {
        mov cl, byte ptr [mem_00B61D90]
        mov al, 0x1
        test cl, al
        jne L_7b206d
        mov dl, cl
        mov ecx, offset mem_00B61D98
        or dl, al
        mov byte ptr [mem_00B61D90], dl
        call ext_007B2220
        push 0x7b2080
        call ext_006A6C87
        add esp, 0x4
    L_7b206d:
        mov eax, offset mem_00B61D98
        ret
    }
}

// [0x007BD4A0] sub_007BD4A0 (54 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BD4A0(void* self, int cmd, void*** out) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp edx, 0x10018
        mov eax, dword ptr [ecx + 0x1cc]
        je L_7BD4C6
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push edx
        push ecx
        call dword ptr [eax + 0x18]
        add esp, 0xc
        pop esi
        ret
    L_7BD4C6:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, 0x1
        ret
    }
}

// [0x007BC1D0] sub_007BC1D0 (53 bytes)
extern "C" void ext_007BB610();
extern "C" __declspec(naked) void __cdecl fn_007BC1D0(char* a1, char* a2, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC202
        push ebx
        lea ebx, [eax + 0x1]
    L_7BC1EC:
        mov edx, dword ptr [edi]
        push esi
        push edx
        call ext_007BB610
        add esp, 0x8
        add esi, 0xc
        add edi, 0x4
        dec ebx
        jne L_7BC1EC
        pop ebx
    L_7BC202:
        pop edi
        pop esi
        ret
    }
}

// [0x007BD9E0] sub_007BD9E0 (55 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BD9E0(void* self, unsigned int param2, void** out_ptr) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp edx, 0x10015
        mov eax, dword ptr [ecx + 0x1cc]
        je L_7bda06
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push edx
        push ecx
        call dword ptr [eax + 0x70]
        add esp, 0xc
        pop esi
        ret
    L_7bda06:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x68]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, 0x1
        ret
    }
}

// [0x007BC120] sub_007BC120 (55 bytes)
extern "C" void ext_007BAE40();

extern "C" __declspec(naked) void __cdecl fn_007BC120(void* a1, void* a2, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC154
        push ebx
        lea ebx, [eax + 0x1]
    L_7BC13C:
        movsx eax, word ptr [esi]
        push eax
        add esi, 0x2
        call ext_007BAE40
        fstp dword ptr [edi]
        add esp, 0x4
        add edi, 0x4
        dec ebx
        jne L_7BC13C
        pop ebx
    L_7BC154:
        pop edi
        pop esi
        ret
    }
}

// [0x007BFD40] sub_007BFD40 (56 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BFD40(void* self, unsigned int param2, void** out_ptr) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp edx, 0x13d
        mov eax, dword ptr [ecx + 0x1cc]
        je L_7bfd66
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push edx
        push ecx
        call dword ptr [eax + 0x1c]
        add esp, 0xc
        pop esi
        ret
    L_7bfd66:
        mov ecx, dword ptr [esp + 0xc]
        mov ax, word ptr [eax]
        mov edx, dword ptr [ecx]
        mov word ptr [edx], ax
        mov eax, 0x1
        ret
    }
}

// [0x007BE010] sub_007BE010 (56 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BE010(void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x4
        je L_7be033
        call ext_007AF200
        add esp, 0x4
        mov dword ptr [esi + 0x1cc], eax
        mov eax, 0x1
        pop esi
        ret
    L_7be033:
        call ext_00798840
        add esp, 0x4
        mov dword ptr [esi + 0x1cc], eax
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007B8AE0] sub_007B8AE0 (55 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B8AE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7B8AFC
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B8B15
    L_7B8AFC:
        call ext_007B8BA0
        push esi
        call ext_007B8C10
        push esi
        call ext_007B8E60
        add esp, 0x8
        call ext_007B8BB0
    L_7B8B15:
        pop esi
        ret
    }
}

// [0x007BD160] sub_007BD160 (58 bytes)
extern "C" void ext_007BB8E0();
extern "C" __declspec(naked) void __cdecl fn_007BD160(unsigned char* s, int base, int n) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov ecx, eax
        push esi
        dec eax
        mov esi, dword ptr [ebx + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test ecx, ecx
        jle L_7BD196
        push ebp
        lea ebp, [eax + 0x1]
    L_7BD17D:
        mov edx, dword ptr [ebx + 0x4]
        push edx
        push edi
        call ext_007BB8E0
        mov dword ptr [esi], eax
        add esp, 0x8
        add esi, 0x4
        add edi, 0xc
        dec ebp
        jne L_7BD17D
        pop ebp
    L_7BD196:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BCFF0] sub_007BCFF0 (58 bytes)
extern "C" void ext_007BB700();

extern "C" __declspec(naked) void __cdecl fn_007BCFF0(void* self, void* a2, int count) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov ecx, eax
        push esi
        dec eax
        mov esi, dword ptr [ebx + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test ecx, ecx
        jle L_7bd026
        push ebp
        lea ebp, [eax + 0x1]
    L_7bd00d:
        mov edx, dword ptr [ebx + 0x4]
        push edx
        push edi
        call ext_007BB700
        mov dword ptr [esi], eax
        add esp, 0x8
        add esi, 0x4
        add edi, 0xc
        dec ebp
        jne L_7bd00d
        pop ebp
    L_7bd026:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BEDA0] sub_007BEDA0 (59 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BEDA0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 0x11948
        mov esi, dword ptr [eax + 0x1cc]
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0x5c], eax
        test eax, eax
        pop esi
        jne L_success
        push 0xab2528
        push 0x999c2c
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        ret
    L_success:
        mov eax, 1
        ret
    }
}

// [0x007BF2B0] sub_007BF2B0 (63 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BF2B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, 0x465
        mov eax, dword ptr [eax + 0x5c]
        add eax, 0x11940
        or ecx, -0x1
L_7BF2C4:
        mov dword ptr [eax - 0x38], ecx
        mov dword ptr [eax - 0x30], ecx
        mov dword ptr [eax - 0x28], ecx
        mov dword ptr [eax - 0x20], ecx
        mov dword ptr [eax - 0x18], ecx
        mov dword ptr [eax - 0x10], ecx
        mov dword ptr [eax - 0x8], ecx
        mov dword ptr [eax], ecx
        sub eax, 0x40
        dec edx
        jne L_7BF2C4
        mov edx, 0x1
L_7BF2E6:
        mov dword ptr [eax], ecx
        sub eax, 0x8
        dec edx
        jne L_7BF2E6
        ret
    }
}

// [0x007BDC20] sub_007BDC20 (66 bytes)
extern "C" void ext_007BDC70();

extern "C" __declspec(naked) int __cdecl fn_007BDC20(char* self, char* buf, int count) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        push edi
        jle L_done
        mov edi, dword ptr [esp + 0x10]
    L_loop:
        mov eax, dword ptr [edi + 0x24]
        push eax
        push ebx
        push edi
        call ext_007BDC70
        add esp, 0xc
        test eax, eax
        je L_fail
        mov eax, dword ptr [edi + 0x1d0]
        sub esi, eax
        add ebx, eax
        test esi, esi
        jg L_loop
    L_done:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007BF340] sub_007BF340 (66 bytes)
extern "C" void ext_007BF430();
extern "C" void ext_007BF390();
extern "C" void ext_007BF4A0();

extern "C" int __cdecl fn_007BF340(char* self) {
    *(void**)(self + 0x1a0) = (void*)ext_007BF430;
    *(void**)(self + 0x1a8) = (void*)ext_007BF430;
    *(void**)(self + 0x1b0) = (void*)ext_007BF430;
    *(void**)(self + 0x1a4) = (void*)ext_007BF390;
    *(void**)(self + 0x1ac) = (void*)ext_007BF390;
    *(void**)(self + 0x1b4) = (void*)ext_007BF390;
    *(void**)(self + 0x1bc) = (void*)ext_007BF4A0;
    return 1;
}

// [0x007BF9C0] sub_007BF9C0 (66 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BF9C0(void* a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push eax
        push ebx
        mov edi, dword ptr [esi + 0x1cc]
        push ebp
        push esi
        call dword ptr [edi + 0x10]
        add esp, 0x10
        test eax, eax
        je L_7bf9fb
        push ebx
        push ebp
        push esi
        call dword ptr [edi + 0xc]
        add esp, 0xc
        mov eax, 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7bf9fb:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007BBBE0] sub_007BBBE0 (70 bytes)
extern "C" __declspec(naked) bool __cdecl fn_007BBBE0(void* a1, void* a2, int a3, void* a4) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_00798840
        mov ebp, dword ptr [esp + 0x1c]
        add esp, 0x4
        test ebp, ebp
        mov esi, eax
        je L_7bbc1b
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    L_7bbbff:
        mov eax, dword ptr [esp + 0x20]
        push eax
        push esi
        push ebx
        push edi
        call dword ptr [edi + 0x1a4]
        add esp, 0x10
        test eax, eax
        jne L_7bbc1a
        add ebx, esi
        sub ebp, esi
        jne L_7bbbff
    L_7bbc1a:
        pop ebx
    L_7bbc1b:
        xor eax, eax
        pop edi
        test ebp, ebp
        pop esi
        pop ebp
        sete al
        ret
    }
}

// [0x007BBB40] sub_007BBB40 (70 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBB40(void* self, int a2, int a3, int a4) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_00798840
        mov ebp, dword ptr [esp + 0x1c]
        add esp, 0x4
        test ebp, ebp
        mov esi, eax
        je L_7BBB7B
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    L_7BBB5F:
        mov eax, dword ptr [esp + 0x20]
        push eax
        push esi
        push ebx
        push edi
        call dword ptr [edi + 0x1a0]
        add esp, 0x10
        test eax, eax
        je L_7BBB7A
        add ebx, esi
        sub ebp, esi
        jne L_7BBB5F
    L_7BBB7A:
        pop ebx
    L_7BBB7B:
        xor eax, eax
        pop edi
        test ebp, ebp
        pop esi
        pop ebp
        sete al
        ret
    }
}

// [0x007B70E8] sub_007B70E8 (72 bytes)
extern "C" void ext_0079EB80();
extern "C" void ext_007B7130();
extern "C" __declspec(naked) void __fastcall fn_007B70E8(void* self) {
    __asm {
        _emit 0x00
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x01
        _emit 0x02
        _emit 0x03
        _emit 0x04
        _emit 0x04
        _emit 0x03
        _emit 0x05
        _emit 0x04
        _emit 0x04
        _emit 0x06
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x07
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov al, byte ptr [esi + 0x18]
        push eax
        call ext_0079EB80
        add esp, 0x4
        test al, al
        je short L_7B712E
        push esi
        call ext_007B7130
        add esp, 0x4
    L_7B712E:
        pop esi
        ret
    }
}

// [0x007BBB90] sub_007BBB90 (70 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBB90(void* self, int a2, int count, int a4) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_007AF200
        mov ebp, dword ptr [esp + 0x1c]
        add esp, 0x4
        test ebp, ebp
        mov esi, eax
        je L_7bbbcb
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    L_7bbbaf:
        mov eax, dword ptr [esp + 0x20]
        push eax
        push esi
        push ebx
        push edi
        call dword ptr [edi + 0x1a0]
        add esp, 0x10
        test eax, eax
        je L_7bbbca
        add ebx, esi
        sub ebp, esi
        jne L_7bbbaf
    L_7bbbca:
        pop ebx
    L_7bbbcb:
        xor eax, eax
        pop edi
        test ebp, ebp
        pop esi
        pop ebp
        sete al
        ret
    }
}

// [0x007BBC30] sub_007BBC30 (70 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBC30(char* obj, char* buf, unsigned int size, int a4) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_007AF200
        mov ebp, dword ptr [esp + 0x1c]
        add esp, 0x4
        test ebp, ebp
        mov esi, eax
        je L_done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    L_loop:
        mov eax, dword ptr [esp + 0x20]
        push eax
        push esi
        push ebx
        push edi
        call dword ptr [edi + 0x1a4]
        add esp, 0x10
        test eax, eax
        jne L_break
        add ebx, esi
        sub ebp, esi
        jne L_loop
    L_break:
        pop ebx
    L_done:
        xor eax, eax
        pop edi
        test ebp, ebp
        pop esi
        pop ebp
        sete al
        ret
    }
}

// [0x007BD910] sub_007BD910 (74 bytes)
extern "C" void ext_0079AF50();
extern "C" void ext_007C15A0();
extern "C" void ext_007C2010();

extern "C" __declspec(naked) void __cdecl fn_007BD910(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, dword ptr [edi + 0x1cc]
        test esi, esi
        je L_end
        test byte ptr [esi + 0x6c], 0x1
        je L_free
        mov eax, dword ptr [edi + 0x8]
        test eax, eax
        jne L_alt
        lea eax, [esi + 0x30]
        push eax
        call ext_007C15A0
        jmp L_after
    L_alt:
        lea ecx, [esi + 0x30]
        push ecx
        call ext_007C2010
    L_after:
        add esp, 4
    L_free:
        push esi
        call ext_0079AF50
        add esp, 4
        mov dword ptr [edi + 0x1cc], 0
    L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x007BF2F0] sub_007BF2F0 (74 bytes)
extern "C" void ext_0079AF50();
extern "C" __declspec(naked) void __cdecl fn_007BF2F0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x1cc]
        test eax, eax
        je L_7BF338
        mov ecx, dword ptr [eax + 0x40]
        test ecx, ecx
        jne L_7BF30F
        mov eax, dword ptr [eax + 0x64]
        test eax, eax
        je L_7BF31F
        jmp L_7BF316
    L_7BF30F:
        mov eax, dword ptr [eax + 0x5c]
        test eax, eax
        je L_7BF31F
    L_7BF316:
        push eax
        call ext_0079AF50
        add esp, 0x4
    L_7BF31F:
        mov eax, dword ptr [esi + 0x1cc]
        push eax
        call ext_0079AF50
        add esp, 0x4
        mov dword ptr [esi + 0x1cc], 0x0
    L_7BF338:
        pop esi
        ret
    }
}

// [0x007BC2D0] sub_007BC2D0 (74 bytes)
extern "C" void ext_007BB610();
extern "C" void ext_007BAFC0();
extern "C" __declspec(naked) void __cdecl fn_007BC2D0(void* self, int d, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xc
        push esi
        mov esi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC314
        push ebx
        lea ebx, [eax + 0x1]
    L_7BC2EF:
        mov eax, dword ptr [esi]
        lea edx, [esp + 0xc]
        push edx
        push eax
        add esi, 0x4
        call ext_007BB610
        lea eax, [esp + 0x14]
        push edi
        push eax
        call ext_007BAFC0
        add esp, 0x10
        add edi, 0x3
        dec ebx
        jne L_7BC2EF
        pop ebx
    L_7BC314:
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x007BC400] sub_007BC400 (74 bytes)
extern "C" void ext_007BAFC0();
extern "C" void ext_007BB7F0();

extern "C" __declspec(naked) void __cdecl fn_007BC400(void* p1, void* p2, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xc
        push esi
        mov esi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_ret
        push ebx
        lea ebx, [eax + 0x1]
    L_loop:
        mov eax, dword ptr [esi]
        lea edx, [esp + 0xc]
        push edx
        push eax
        add esi, 0x4
        call ext_007BB7F0
        lea eax, [esp + 0x14]
        push edi
        push eax
        call ext_007BAFC0
        add esp, 0x10
        add edi, 0x3
        dec ebx
        jne L_loop
        pop ebx
    L_ret:
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x007BFCF0] sub_007BFCF0 (77 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BFCF0(char* a, int b, unsigned short* c) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp edx, 0x13d
        push esi
        mov ecx, dword ptr [eax + 0x1cc]
        je L_7BFD16
        mov esi, dword ptr [esp + 0x10]
        push esi
        push edx
        push eax
        call dword ptr [ecx + 0x20]
        add esp, 0xc
        pop esi
        ret
    L_7BFD16:
        mov esi, dword ptr [esp + 0x10]
        xor edx, edx
        mov dx, word ptr [esi]
        pop esi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, dword ptr [eax + 0xc]
        or edx, 0x80000000
        or ecx, 0x8
        mov dword ptr [eax + 0x1c], edx
        mov dword ptr [eax + 0xc], ecx
        mov eax, 0x1
        ret
    }
}

// [0x007BFC90] sub_007BFC90 (81 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BFC90(void* a, char* b, int c, int d) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [eax + 0x1cc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebp + 0x8]
        test edi, edi
        jle L_done
    L_loop:
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push ebx
        push ecx
        call dword ptr [ebp + 0xc]
        sub edi, esi
        add esp, 0xc
        add ebx, esi
        test edi, edi
        jg L_loop
        mov edi, dword ptr [esp + 0x1c]
    L_done:
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push edi
        push eax
        push ecx
        call dword ptr [ebp + 0x18]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B1E20] sub_007B1E20 (82 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B1E20(void* self, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        cmp ecx, 0x4d4d
        mov dword ptr [eax + 0x160], 0x999430
        jne L_7B1E56
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x15c], 0x999464
        test ecx, ecx
        jne L_7B1E71
        mov ecx, dword ptr [eax + 0xc]
        or cl, 0x80
        mov dword ptr [eax + 0xc], ecx
        ret
L_7B1E56:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x15c], 0x999498
        test ecx, ecx
        je L_7B1E71
        mov ecx, dword ptr [eax + 0xc]
        or cl, 0x80
        mov dword ptr [eax + 0xc], ecx
L_7B1E71:
        ret
    }
}

// [0x007BFA10] sub_007BFA10 (84 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BFA10(char* a1, char* a2, int a3, int a4) {
    __asm {
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [eax + 0x1cc]
        push edi
        mov edi, dword ptr [esp + 0x18]
        push ecx
        push edi
        push ebx
        push eax
        call dword ptr [ebp + 0x18]
        add esp, 0x10
        test eax, eax
        je L_7bfa5e
        push esi
        mov esi, dword ptr [ebp + 0x8]
        test edi, edi
        jle L_7bfa54
    L_7bfa3f:
        mov edx, dword ptr [esp + 0x14]
        push esi
        push ebx
        push edx
        call dword ptr [ebp + 0xc]
        sub edi, esi
        add esp, 0xc
        add ebx, esi
        test edi, edi
        jg L_7bfa3f
    L_7bfa54:
        pop esi
        pop edi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    L_7bfa5e:
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007BEDE0] sub_007BEDE0 (95 bytes)
extern "C" void ext_007BF2B0();

extern "C" __declspec(naked) int __cdecl fn_007BEDE0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        xor ecx, ecx
        mov esi, dword ptr [eax + 0x1cc]
        push esi
        mov word ptr [esi + 0x30], 0x9
        mov word ptr [esi + 0x32], 0x1ff
        mov word ptr [esi + 0x34], 0x102
        mov dword ptr [esi + 0x3c], ecx
        mov dword ptr [esi + 0x38], ecx
        mov dword ptr [esi + 0x48], 0x2710
        mov dword ptr [esi + 0x4c], ecx
        mov dword ptr [esi + 0x50], ecx
        mov dword ptr [esi + 0x54], ecx
        mov ecx, dword ptr [eax + 0x1dc]
        mov edx, dword ptr [eax + 0x1d8]
        lea eax, [ecx + edx - 0x5]
        mov dword ptr [esi + 0x58], eax
        call ext_007BF2B0
        add esp, 0x4
        mov dword ptr [esi + 0x44], 0xffff
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007BD740] sub_007BD740 (85 bytes)
extern "C" void ext_007C1750();
extern "C" void ext_0079B140();
extern "C" int mem_00AB224C;
extern "C" int mem_00AB2244;
extern "C" int mem_00999B9C;

extern "C" __declspec(naked) int __cdecl fn_007BD740(void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x38
        push offset mem_00AB224C
        mov esi, dword ptr [edi + 0x1cc]
        mov eax, dword ptr [esi + 0x68]
        lea ecx, [esi + 0x30]
        push eax
        push ecx
        call ext_007C1750
        add esp, 0x10
        test eax, eax
        je short L_007BD785
        mov edx, dword ptr [esi + 0x48]
        mov eax, dword ptr [edi]
        push edx
        push eax
        push offset mem_00AB2244
        push offset mem_00999B9C
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        ret
    L_007BD785:
        mov ecx, dword ptr [esi + 0x6c]
        mov eax, 0x1
        or ecx, eax
        pop edi
        mov dword ptr [esi + 0x6c], ecx
        pop esi
        ret
    }
}

// [0x007BD5E0] sub_007BD5E0 (81 bytes)
extern "C" void ext_007BFF20();
extern "C" void ext_0079B140();
extern "C" __declspec(naked) int __cdecl fn_007BD5E0(void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x38
        push 0xab224c
        mov esi, dword ptr [edi + 0x1cc]
        lea eax, [esi + 0x30]
        push eax
        call ext_007BFF20
        add esp, 0xc
        test eax, eax
        je L_7BD621
        mov ecx, dword ptr [esi + 0x48]
        mov edx, dword ptr [edi]
        push ecx
        push edx
        push 0xab2244
        push 0x999b80
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        ret
    L_7BD621:
        mov ecx, dword ptr [esi + 0x6c]
        mov eax, 0x1
        or ecx, eax
        pop edi
        mov dword ptr [esi + 0x6c], ecx
        pop esi
        ret
    }
}

// [0x007BCF90] sub_007BCF90 (91 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BCF90(void* self, float* src, int count) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0xc
        mov eax, dword ptr [ebp + 0x10]
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        mov ecx, eax
        push esi
        mov esi, dword ptr [ebp + 0xc]
        dec eax
        push edi
        mov edi, dword ptr [ebx + 0xc]
        test ecx, ecx
        jle L_7bcfe4
        inc eax
        mov dword ptr [esp + 0xc], eax
    L_7bcfb4:
        fld dword ptr [esi]
        mov edx, dword ptr [ebx + 0x4]
        add esi, 0x4
        fstp qword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        push edx
        push eax
        push ecx
        call ext_007BAE90
        mov word ptr [edi], ax
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        add edi, 0x2
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne L_7bcfb4
    L_7bcfe4:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BC630] sub_007BC630 (106 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BC630(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        xor eax, eax
        xor ecx, ecx
        mov ax, word ptr [edx + 0x28]
        mov cx, word ptr [edx + 0x2a]
        shl eax, 0x3
        or eax, ecx
        add eax, -0x41
        cmp eax, 0xc3
        ja L_7BC677
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7bc6b0]
        jmp dword ptr [4*ecx + 0x7bc69c]
L_7BC65E:
        xor eax, eax
        jmp L_7BC67A
L_7BC662:
        mov eax, 0x2
        jmp L_7BC67A
L_7BC669:
        mov eax, 0x1
        jmp L_7BC67A
L_7BC670:
        mov eax, 0x3
        jmp L_7BC67A
L_7BC677:
        or eax, -0x1
L_7BC67A:
        xor ecx, ecx
        mov cx, word ptr [edx + 0x36]
        dec ecx
        je L_7BC691
        sub ecx, 0x2
        jne L_7BC696
        cmp eax, 0x2
        jne L_7BC699
        or eax, -0x1
        ret
L_7BC691:
        cmp eax, 0x2
        je L_7BC699
L_7BC696:
        or eax, -0x1
L_7BC699:
        ret
    }
}

// [0x007BFD80] sub_007BFD80 (110 bytes)
extern "C" int mem_0092525C;

extern "C" __declspec(naked) void __cdecl fn_007BFD80(void* self, void* a2, int a3) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebp + 0x1c]
        mov ebx, dword ptr [ebp + 0x1cc]
        test eax, 0x80000000
        je L_7BFDD7
        push edi
        mov edi, dword ptr [mem_0092525C]
        push 0xab261c
        push esi
        call edi
        mov eax, dword ptr [ebx]
        add esp, 0x8
        dec eax
        je L_7BFDBC
        dec eax
        jne L_7BFDC7
        push 0xab2600
        jmp L_7BFDC1
    L_7BFDBC:
        push 0xab25f8
    L_7BFDC1:
        push esi
        call edi
        add esp, 0x8
    L_7BFDC7:
        mov eax, dword ptr [ebx]
        push eax
        push eax
        push 0xab25ec
        push esi
        call edi
        add esp, 0x10
        pop edi
    L_7BFDD7:
        mov ebx, dword ptr [ebx + 0x24]
        test ebx, ebx
        je L_7BFDEA
        mov eax, dword ptr [esp + 0x18]
        push eax
        push esi
        push ebp
        call ebx
        add esp, 0xc
    L_7BFDEA:
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B2220] sub_007B2220 (107 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_0079E8C0();

extern "C" __declspec(naked) void* __fastcall fn_007B2220(void* self) {
    __asm {
        push -0x1
        push 0x8c1ccb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        push 0x4
        lea edi, [esi + 0x8]
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x995080
        mov byte ptr [esi + 0x4], 0x1
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        push 0x7b2320
        push esi
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esi], 0x9994e4
        call ext_0079E8C0
        mov ecx, dword ptr [esp + 0x14]
        add esp, 0x8
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x007BF430] sub_007BF430 (107 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BF430(char* s, void* dst, int len) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        cmp     dword ptr [esi + 0x1e4], edi
        jge     short L_7bf45e
        mov     eax, dword ptr [esi + 0x164]
        mov     ecx, dword ptr [esi]
        push    eax
        push    offset mem_00AB2544
        push    ecx
        call    ext_0079B140
        add     esp, 0xc
        xor     eax, eax
        pop     edi
        pop     esi
        ret
    L_7bf45e:
        mov     eax, dword ptr [esi + 0x1e0]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     eax, ecx
        je      short L_7bf477
        push    edi
        push    eax
        push    ecx
        call    ext_0079B010
        add     esp, 0xc
    L_7bf477:
        mov     ecx, dword ptr [esi + 0x1e0]
        mov     eax, dword ptr [esi + 0x1e4]
        add     ecx, edi
        sub     eax, edi
        mov     dword ptr [esi + 0x1e0], ecx
        mov     dword ptr [esi + 0x1e4], eax
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret
    }
}

// [0x007BF930] sub_007BF930 (115 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BF930(void* a, unsigned short* b, int c) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov ecx, dword ptr [eax + 0x1cc]
        mov eax, dword ptr [esp + 0x10]
        cdq
        mov esi, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [esp + 0xc]
        sub eax, edx
        sar eax, 1
        cmp eax, esi
        jle L_7bf9a1
        push edi
        sub eax, esi
    L_7bf952:
        cmp esi, 0x4
        ja L_7bf95e
        jmp dword ptr [4*esi + 0x7bf9a4]
    L_7bf95e:
        lea edx, [esi - 0x4]
        test edx, edx
        jle L_7bf972
    L_7bf965:
        mov di, word ptr [ecx]
        add word ptr [ecx + 2*esi], di
        add ecx, 0x2
        dec edx
        jne L_7bf965
    L_7bf972:
        mov dx, word ptr [ecx]
        add word ptr [ecx + 2*esi], dx
        add ecx, 0x2
        mov dx, word ptr [ecx]
        add word ptr [ecx + 2*esi], dx
        add ecx, 0x2
        mov dx, word ptr [ecx]
        add word ptr [ecx + 2*esi], dx
        add ecx, 0x2
        mov dx, word ptr [ecx]
        add word ptr [ecx + 2*esi], dx
        add ecx, 0x2
        sub eax, esi
        test eax, eax
        jg L_7bf952
        pop edi
    L_7bf9a1:
        pop esi
        ret
    }
}

// [0x007B1FC0] sub_007B1FC0 (116 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_007B1EC0();

extern "C" __declspec(naked) void __fastcall fn_007B1FC0(void* self) {
    __asm {
        push -0x1
        push 0x8c1558
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push esi
        mov dword ptr [esp + 0x8], ebx
        mov esi, dword ptr [ebx]
        mov dword ptr [esp + 0x14], 0x0
        test esi, esi
        je L_7b200d
        push edi
    L_7b1fed:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [eax + 4*esi]
        test edi, edi
        je L_7b2008
        mov ecx, edi
        call ext_007B1EC0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_7b2008:
        test esi, esi
        jne L_7b1fed
        pop edi
    L_7b200d:
        mov ecx, ebx
        call ext_006D2250
        mov ecx, ebx
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007BD960] sub_007BD960 (118 bytes)
extern "C" void ext_007C1A30();
extern "C" void ext_0079B140();
extern "C" int mem_00AB2254;
extern "C" int mem_00999BC8;

extern "C" __declspec(naked) int __cdecl fn_007BD960(void* self, int msg, void* data) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp eax, 0x10015
        mov esi, dword ptr [edi + 0x1cc]
        je L_7BD987
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push eax
        push edi
        call dword ptr [esi + 0x74]
        add esp, 0xc
        pop edi
        pop esi
        ret
    L_7BD987:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edx]
        mov dword ptr [esi + 0x68], eax
        mov ecx, dword ptr [edi + 0x8]
        test ecx, ecx
        je L_7BD9CE
        test byte ptr [esi + 0x6c], 0x1
        je L_7BD9CE
        push 0x0
        push eax
        lea eax, [esi + 0x30]
        push eax
        call ext_007C1A30
        add esp, 0xc
        test eax, eax
        je L_7BD9CE
        mov ecx, dword ptr [esi + 0x48]
        mov edx, dword ptr [edi]
        push ecx
        push edx
        push offset mem_00AB2254
        push offset mem_00999BC8
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        ret
    L_7BD9CE:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007B1EC0] sub_007B1EC0 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_007B1EC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi], offset mem_009994DC
        push eax
        call ext_006A5C5C
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x4
        test edi, edi
        je L_7b1eed
        mov ecx, edi
        call ext_00783AF0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_7b1eed:
        mov edi, dword ptr [esi + 0xc]
        test edi, edi
        je L_7b1f04
        mov ecx, edi
        call ext_00783AF0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_7b1f04:
        mov edi, dword ptr [esi + 0x10]
        test edi, edi
        je L_7b1f1b
        mov ecx, edi
        call ext_00783AF0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_7b1f1b:
        mov esi, dword ptr [esi + 0x14]
        test esi, esi
        je L_7b1f32
        mov ecx, esi
        call ext_00783AF0
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_7b1f32:
        pop edi
        pop esi
        ret
    }
}

// [0x007BC160] sub_007BC160 (107 bytes)
extern "C" void ext_007BAE40();
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;
extern "C" int mem_00999A68;
extern "C" __declspec(naked) void __cdecl fn_007BC160(void* a1, unsigned char* out, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC1C8
        push ebx
        lea ebx, [eax + 0x1]
L_7BC17C:
        movsx eax, word ptr [edi]
        push eax
        add edi, 0x2
        call ext_007BAE40
        fcom qword ptr [mem_0092A278]
        add esp, 0x4
        fnstsw ax
        test ah, 0x41
        je L_7BC19E
        fstp st(0)
        xor eax, eax
        jmp L_7BC1C1
L_7BC19E:
        fcom qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x1
        jne L_7BC1B4
        fstp st(0)
        mov eax, 0xff
        jmp L_7BC1C1
L_7BC1B4:
        fsqrt
        fmul qword ptr [mem_00999A68]
        call ext_00872828
L_7BC1C1:
        mov byte ptr [esi], al
        inc esi
        dec ebx
        jne L_7BC17C
        pop ebx
L_7BC1C8:
        pop edi
        pop esi
        ret
    }
}

// [0x007BFBD0] sub_007BFBD0 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_007BFBD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov ecx, dword ptr [eax + 0x1cc]
        mov eax, dword ptr [esp + 0x10]
        cdq
        mov esi, dword ptr [ecx + 0x4]
        sub eax, edx
        sar eax, 1
        cmp eax, esi
        jle L_END
        mov edx, dword ptr [esp + 0xc]
        sub eax, esi
        push edi
        lea ecx, [edx + 2*eax - 0x2]
L_CMP:
        cmp esi, 0x4
        ja L_BIG
        jmp dword ptr [4*esi + 0x7bfc48]
L_BIG:
        lea edx, [esi - 0x4]
        test edx, edx
        jle L_U1
L_LOOP:
        mov di, word ptr [ecx]
        sub word ptr [ecx + 2*esi], di
        sub ecx, 0x2
        dec edx
        jne L_LOOP
L_U1:
        mov dx, word ptr [ecx]
        sub word ptr [ecx + 2*esi], dx
        sub ecx, 0x2
L_U2:
        mov dx, word ptr [ecx]
        sub word ptr [ecx + 2*esi], dx
        sub ecx, 0x2
L_U3:
        mov dx, word ptr [ecx]
        sub word ptr [ecx + 2*esi], dx
        sub ecx, 0x2
L_U4:
        mov dx, word ptr [ecx]
        sub word ptr [ecx + 2*esi], dx
        sub ecx, 0x2
L_E0:
        sub eax, esi
        test eax, eax
        jg L_CMP
        pop edi
L_END:
        pop esi
        ret
    }
}

// [0x007BF890] sub_007BF890 (129 bytes)
extern "C" void ext_007AF010();

extern "C" __declspec(naked) void __cdecl fn_007BF890(void* p1, void* p2, int p3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x1cc]
        mov eax, dword ptr [esp + 0x14]
        cdq
        sub eax, edx
        push edi
        mov edi, dword ptr [ecx + 0x4]
        mov ebx, eax
        sar ebx, 1
        cmp ebx, edi
        jle L_ret
        push ebx
        push esi
        call ext_007AF010
        add esp, 0x8
        sub ebx, edi
L_loop:
        cmp edi, 0x4
        ja L_above_4
        jmp dword ptr [4*edi + 0x7bf914]
L_above_4:
        lea eax, [edi - 0x4]
        test eax, eax
        jle L_case_4
L_body:
        mov dx, word ptr [esi]
        add word ptr [esi + 2*edi], dx
        add esi, 0x2
        dec eax
        jne L_body
L_case_4:
        mov ax, word ptr [esi]
        add word ptr [esi + 2*edi], ax
        add esi, 0x2
L_case_3:
        mov cx, word ptr [esi]
        add word ptr [esi + 2*edi], cx
        add esi, 0x2
L_case_2:
        mov dx, word ptr [esi]
        add word ptr [esi + 2*edi], dx
        add esi, 0x2
L_case_1:
        mov ax, word ptr [esi]
        add word ptr [esi + 2*edi], ax
        add esi, 0x2
L_case_0:
        sub ebx, edi
        test ebx, ebx
        jg L_loop
L_ret:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BF6D0] sub_007BF6D0 (140 bytes)
extern "C" void ext_007BF630();
extern "C" __declspec(naked) int __cdecl fn_007BF6D0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, dword ptr [esi + 0x1cc]
        call dword ptr [edi + 0x2c]
        add esp, 0x4
        test eax, eax
        je L_7BF757
        push esi
        call ext_007BF630
        add esp, 0x4
        test eax, eax
        je L_7BF757
        cmp dword ptr [edi], 0x2
        jne L_7BF74F
        xor eax, eax
        mov ax, word ptr [esi + 0x40]
        cmp eax, 0x8
        je L_7BF712
        cmp eax, 0x10
        jne L_7BF719
        mov dword ptr [edi + 0xc], 0x7bfbd0
        jmp L_7BF719
    L_7BF712:
        mov dword ptr [edi + 0xc], 0x7bfa70
    L_7BF719:
        mov eax, dword ptr [esi + 0x1a4]
        mov dword ptr [edi + 0x10], eax
        mov ecx, dword ptr [esi + 0x1ac]
        mov dword ptr [esi + 0x1a4], 0x7bfc60
        mov dword ptr [edi + 0x14], ecx
        mov edx, dword ptr [esi + 0x1b4]
        mov eax, 0x7bfc90
        mov dword ptr [esi + 0x1ac], eax
        mov dword ptr [edi + 0x18], edx
        mov dword ptr [esi + 0x1b4], eax
    L_7BF74F:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_7BF757:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007B0840] sub_007B0840 (119 bytes)
extern "C" void ext_00798FF0();
extern "C" void ext_007B08E0();
extern "C" void ext_007B09C0();

extern "C" __declspec(naked) int __cdecl fn_007B0840(void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        xor eax, eax
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        xor edi, edi
        mov ax, word ptr [esi + 0x2]
        dec eax
        cmp eax, 0x7
        ja L_7b08ae
        jmp dword ptr [4*eax + 0x7b08b8]
    L_7b085f:
        mov ebx, dword ptr [esp + 0x18]
        lea eax, [esp + 0xc]
        push eax
        push esi
        push ebx
        call ext_007B09C0
        jmp L_7b0881
    L_7b0871:
        mov ebx, dword ptr [esp + 0x18]
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        push ebx
        call ext_007B08E0
    L_7b0881:
        mov edi, eax
        add esp, 0xc
        test edi, edi
        je L_7b08ae
        mov edx, dword ptr [esp + 0xe]
        mov eax, dword ptr [esp + 0xc]
        and edx, 0xffff
        xor ecx, ecx
        mov cx, word ptr [esi]
        and eax, 0xffff
        push edx
        push eax
        push ecx
        push ebx
        call ext_00798FF0
        add esp, 0x10
    L_7b08ae:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x007BF390] sub_007BF390 (145 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BF390(void* self, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        test ebx, ebx
        push edi
        jle L_ret_1
        mov esi, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x18]
L_loop:
        mov ecx, dword ptr [esi + 0x1e4]
        mov eax, dword ptr [esi + 0x1dc]
        mov edi, ebx
        lea edx, [ecx + ebx]
        cmp edx, eax
        jle L_no_sub
        sub eax, ecx
        mov edi, eax
L_no_sub:
        mov eax, dword ptr [esi + 0x1e0]
        cmp eax, ebp
        je L_skip_call
        push edi
        push ebp
        push eax
        call ext_0079B010
        add esp, 0xc
L_skip_call:
        mov eax, dword ptr [esi + 0x1e0]
        mov edx, dword ptr [esi + 0x1e4]
        mov ecx, dword ptr [esi + 0x1dc]
        add eax, edi
        add edx, edi
        mov dword ptr [esi + 0x1e0], eax
        mov eax, edx
        add ebp, edi
        sub ebx, edi
        cmp eax, ecx
        mov dword ptr [esi + 0x1e4], edx
        jl L_check_ebx
        push esi
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je L_ret_neg1
L_check_ebx:
        test ebx, ebx
        jg L_loop
L_ret_1:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
L_ret_neg1:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        ret
    }
}

// [0x007BD7D0] sub_007BD7D0 (153 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007C1B00();
extern "C" int mem_00AB22C4;
extern "C" int mem_00999BAC;
extern "C" __declspec(naked) int __cdecl fn_007BD7D0(int a, int b, int c) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov esi, dword ptr [edi + 0x1cc]
        push 0
        mov dword ptr [esi + 0x30], eax
        lea ebx, [esi + 0x30]
        mov dword ptr [esi + 0x34], ecx
        push ebx
        call ext_007C1B00
        add esp, 8
        test eax, eax
        jne L_841
    L_7FD:
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        jne L_82B
        mov edx, dword ptr [edi + 0x1dc]
        push edi
        mov dword ptr [edi + 0x1e4], edx
        call ext_0079B850
        mov eax, dword ptr [edi + 0x1d8]
        add esp, 4
        mov dword ptr [esi + 0x3c], eax
        mov ecx, dword ptr [edi + 0x1dc]
        mov dword ptr [esi + 0x40], ecx
    L_82B:
        mov eax, dword ptr [esi + 0x34]
        test eax, eax
        jbe L_860
        push 0
        push ebx
        call ext_007C1B00
        add esp, 8
        test eax, eax
        je L_7FD
    L_841:
        mov edx, dword ptr [esi + 0x48]
        mov eax, dword ptr [edi]
        push edx
        push eax
        push offset mem_00AB22C4
        push offset mem_00999BAC
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_860:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    }
}

// [0x007BD870] sub_007BD870 (158 bytes)
extern "C" void ext_007C1B00();
extern "C" __declspec(naked) void __cdecl fn_007BD870(void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push 0x4
        mov edi, dword ptr [esi + 0x1cc]
        lea ebp, [edi + 0x30]
        mov dword ptr [edi + 0x34], 0x0
        push ebp
        call ext_007C1B00
        mov ebx, eax
        add esp, 0x8
        test ebx, ebx
        jl L_E4_007BD870
    L_899_007BD870:
        cmp ebx, 0x1
        jg L_E4_007BD870
        mov ecx, dword ptr [edi + 0x40]
        mov eax, dword ptr [esi + 0x1dc]
        cmp ecx, eax
        je L_CE_007BD870
        sub eax, ecx
        push esi
        mov dword ptr [esi + 0x1e4], eax
        call ext_0079B850
        mov eax, dword ptr [esi + 0x1d8]
        add esp, 0x4
        mov dword ptr [edi + 0x3c], eax
        mov ecx, dword ptr [esi + 0x1dc]
        mov dword ptr [edi + 0x40], ecx
    L_CE_007BD870:
        cmp ebx, 0x1
        je L_RET1_007BD870
        push 0x4
        push ebp
        call ext_007C1B00
        mov ebx, eax
        add esp, 0x8
        test ebx, ebx
        jge L_899_007BD870
    L_E4_007BD870:
        mov edx, dword ptr [edi + 0x48]
        mov eax, dword ptr [esi]
        push edx
        push eax
        push 0xab2254
        push 0x999bb8
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_RET1_007BD870:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    }
}

// [0x007BC360] sub_007BC360 (159 bytes)
extern "C" int mem_00999B50;
extern "C" int mem_00999B60;
extern "C" __declspec(naked) void __cdecl fn_007BC360(void* a, short* b, int n) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x24]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_end
        push ebx
        push ebp
        lea ebx, [eax + 1]
        xor ebp, ebp
L_loop:
        mov edx, dword ptr [edi]
        mov dword ptr [esp + 0x14], ebp
        shr edx, 0x10
        mov word ptr [esi], dx
        mov eax, dword ptr [edi]
        mov ecx, eax
        mov dword ptr [esp + 0x1c], ebp
        and ecx, 0xff
        add esi, 2
        mov dword ptr [esp + 0x10], ecx
        fild qword ptr [esp + 0x10]
        shr eax, 8
        and eax, 0xff
        fadd qword ptr [mem_00993828]
        mov dword ptr [esp + 0x18], eax
        fmul qword ptr [mem_00999B50]
        fild qword ptr [esp + 0x18]
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B50]
        fmul qword ptr [mem_00999B60]
        call ext_00872828
        fmul qword ptr [mem_00999B60]
        mov word ptr [esi], ax
        add esi, 2
        call ext_00872828
        mov word ptr [esi], ax
        add esi, 2
        add edi, 4
        dec ebx
        jne L_loop
        pop ebp
        pop ebx
L_end:
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x007BF630] sub_007BF630 (159 bytes)
extern "C" void ext_00798840();
extern "C" void ext_0079B140();
extern "C" void ext_007AF200();
extern "C" char mem_00AB25C8[];
extern "C" char mem_00AB2580[];
extern "C" __declspec(naked) int __cdecl fn_007BF630(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax + 0x1cc]
        mov ecx, dword ptr [esi]
        cmp ecx, 1
        je L_ret1
        cmp ecx, 2
        je L_two
        mov eax, dword ptr [eax]
        push ecx
        push offset mem_00AB25C8
        push eax
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop esi
        ret
    L_two:
        mov cx, word ptr [eax + 0x40]
        cmp cx, 8
        je L_ok
        cmp cx, 0x10
        je L_ok
        and ecx, 0xffff
        push ecx
        mov ecx, dword ptr [eax]
        push offset mem_00AB2580
        push ecx
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop esi
        ret
    L_ok:
        cmp word ptr [eax + 0x72], 1
        jne L_else
        xor ecx, ecx
        mov cx, word ptr [eax + 0x4e]
        jmp L_st
    L_else:
        mov ecx, 1
    L_st:
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [eax + 0xc]
        test ch, 4
        push eax
        je L_b
        call ext_007AF200
        add esp, 4
        mov dword ptr [esi + 8], eax
        mov eax, 1
        pop esi
        ret
    L_b:
        call ext_00798840
        add esp, 4
        mov dword ptr [esi + 8], eax
    L_ret1:
        mov eax, 1
        pop esi
        ret
    }
}

// [0x007BB560] sub_007BB560 (176 bytes)
extern "C" int mem_00AB1A4E;
extern "C" int mem_00AB1A48;
extern "C" int mem_00999B28;
extern "C" int mem_00999B08;

extern "C" __declspec(naked) int __cdecl fn_007BB560(void* a1, void* a2, int a3) {
    __asm {
        push ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        jl L_7BB603
        cmp edi, 0x3fa1
        jge L_7BB603
        push ebx
        xor edx, edx
        push esi
        mov dword ptr [esp + 0x1c], edx
        mov esi, 0xa3
L_7BB587:
        lea eax, [esi + edx]
        mov ecx, edi
        sar eax, 1
        movsx ebx, word ptr [8*eax + mem_00AB1A4E]
        sub ecx, ebx
        test ecx, ecx
        jle L_7BB5A0
        mov edx, eax
        jmp L_7BB5A4
L_7BB5A0:
        jge L_7BB5AF
        mov esi, eax
L_7BB5A4:
        mov eax, esi
        sub eax, edx
        cmp eax, 1
        jg L_7BB587
        jmp L_7BB5B1
L_7BB5AF:
        mov edx, eax
L_7BB5B1:
        movsx ecx, word ptr [8*edx + mem_00AB1A4E]
        sub edi, ecx
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [esp + 0x18]
        fild dword ptr [esp + 0xc]
        pop esi
        pop ebx
        pop edi
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B28]
        fadd dword ptr [8*edx + mem_00AB1A48]
        mov edx, dword ptr [esp + 0x8]
        fstp qword ptr [edx]
        fild dword ptr [esp + 0x10]
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B28]
        fadd qword ptr [mem_00999B08]
        fstp qword ptr [eax]
        xor eax, eax
        pop ecx
        ret
L_7BB603:
        or eax, -1
        pop edi
        pop ecx
        ret
    }
}

// [0x007B2910] sub_007B2910 (176 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();
extern "C" int mem_00925208;
extern "C" __declspec(naked) void __cdecl fn_007B2910() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [ecx], 0xb024
        mov edx, dword ptr [esp + 0x14]
        push edx
        call ext_007B3380
        mov ebp, dword ptr [esp + 0x20]
        mov ebx, eax
        mov ax, word ptr [esp + 0x24]
        lea esi, [8*ebp]
        mov word ptr [ebx], ax
        sub esi, ebp
        xor eax, eax
        shl esi, 2
        push esi
        mov dword ptr [ebx + 0xc], ebp
        mov dword ptr [ebx + 8], eax
        mov dword ptr [ebx + 4], eax
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, dword ptr [esp + 0x2c]
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        mov dword ptr [ebx + 0x10], eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        lea esi, [4*ebp]
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, dword ptr [esp + 0x34]
        mov dword ptr [ebx + 0x14], eax
        mov edi, eax
        mov eax, ecx
        mov edx, dword ptr [esp + 0x38]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push edx
        call ext_007B2E50
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007B2A60] sub_007B2A60 (176 bytes)
extern "C" void ext_007A9950();
extern "C" void ext_007AA510();
extern "C" void ext_007B2480();
extern "C" void ext_007B2A10();
extern "C" void ext_007B3190();
extern "C" __declspec(naked) void __cdecl fn_007B2A60(int a, int b, int c) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        test ebx, ebx
        push edi
        je L_a
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        jne L_b
    L_a:
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_end
    L_b:
        push ebx
        call ext_007A9950
        mov al, byte ptr [mem_00B61218]
        add esp, 4
        test al, al
        je L_c
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end
    L_c:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        call ext_007B2A10
        mov ecx, dword ptr [esp + 0x24]
        mov ebp, eax
        push ebp
        push ecx
        call ext_007B3190
        mov eax, dword ptr [ebx + 0x10]
        add esp, 0x10
        xor esi, esi
        xor edi, edi
        cmp dword ptr [eax], 0
        jbe L_end
    L_loop:
        cmp edi, ebp
        jae L_end
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [edx + 8*esi + 4]
        lea eax, [edx + 8*esi]
        mov edx, dword ptr [esp + 0x18]
        cmp dword ptr [ecx], edx
        jne L_next
        mov eax, dword ptr [eax]
        push eax
        call ext_007B2480
        mov ecx, dword ptr [esp + 0x20]
        add esp, 4
        inc edi
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ecx + 4*edi - 4], eax
    L_next:
        mov eax, dword ptr [ebx + 0x10]
        inc esi
        cmp esi, dword ptr [eax]
        jb L_loop
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BBF10] sub_007BBF10 (179 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBF10(void* self, void* out, int count) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        cdq
        mov ecx, dword ptr [ebx + 0x1cc]
        push edi
        mov dword ptr [esp + 0xc], ecx
        idiv dword ptr [ecx + 0x8]
        mov edi, eax
        mov eax, dword ptr [ecx]
        cmp eax, 0x2
        mov eax, dword ptr [esp + 0x18]
        je L_BF10_sel
        mov eax, dword ptr [ecx + 0xc]
    L_BF10_sel:
        mov ecx, dword ptr [ebx + 0x1e0]
        xor esi, esi
        push ebp
        mov ebp, dword ptr [ebx + 0x1e4]
        test edi, edi
        jle L_BF10_done
    L_BF10_loop:
        test ebp, ebp
        jle L_BF10_done
        xor edx, edx
        xor ebx, ebx
        mov dl, byte ptr [ecx + 0x1]
        mov bl, byte ptr [ecx + 0x2]
        mov dh, byte ptr [ecx]
        add ecx, 0x3
        shl edx, 0x8
        or edx, ebx
        mov ebx, dword ptr [esp + 0x18]
        sub ebp, 0x3
        mov dword ptr [eax], edx
        inc esi
        add eax, 0x4
        cmp esi, edi
        jl L_BF10_loop
    L_BF10_done:
        mov dword ptr [ebx + 0x1e4], ebp
        cmp esi, edi
        mov dword ptr [ebx + 0x1e0], ecx
        pop ebp
        je L_BF10_match
        mov eax, dword ptr [ebx + 0x164]
        mov ecx, dword ptr [ebx]
        sub edi, esi
        push edi
        push eax
        push 0xab2028
        push ecx
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    L_BF10_match:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        push edi
        push edx
        push eax
        call dword ptr [eax + 0x14]
        add esp, 0xc
        mov eax, 0x1
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x007B08E0] sub_007B08E0 (183 bytes)
extern "C" __declspec(naked) int __cdecl fn_007B08E0(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        cmp ecx, 0x4
        ja L_default_007B08E0
        mov edx, dword ptr [esp + 0x4]
        cmp word ptr [edx + 0x150], 0x4d4d
        lea edx, [ecx - 0x1]
        jne L_notmm_007B08E0
        cmp edx, 0x3
        ja L_ret1_007B08E0
        mov ecx, dword ptr [esp + 0xc]
        jmp dword ptr [4*edx + 0x7b0998]
    L_mmcase_007B08E0:
        mov dl, byte ptr [eax + 0x8]
        and edx, 0xff
        mov word ptr [ecx + 0x6], dx
        xor edx, edx
        mov dl, byte ptr [eax + 0x9]
        mov word ptr [ecx + 0x4], dx
        xor edx, edx
        mov dl, byte ptr [eax + 0xa]
        mov word ptr [ecx + 0x2], dx
        mov eax, dword ptr [eax + 0x8]
        shr eax, 0x18
        mov word ptr [ecx], ax
        mov eax, 0x1
        ret
    L_notmm_007B08E0:
        cmp edx, 0x3
        ja L_ret1_007B08E0
        mov ecx, dword ptr [esp + 0xc]
        jmp dword ptr [4*edx + 0x7b09a8]
    L_nonmmcase_007B08E0:
        mov edx, dword ptr [eax + 0x8]
        shr edx, 0x18
        mov word ptr [ecx + 0x6], dx
        xor edx, edx
        mov dl, byte ptr [eax + 0xa]
        mov word ptr [ecx + 0x4], dx
        xor edx, edx
        mov dl, byte ptr [eax + 0x9]
        mov word ptr [ecx + 0x2], dx
        mov al, byte ptr [eax + 0x8]
        and eax, 0xff
        mov word ptr [ecx], ax
    L_ret1_007B08E0:
        mov eax, 0x1
        ret
    L_default_007B08E0:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push ecx
        push eax
        push edx
        call ext_007B06F0
        add esp, 0xc
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x007BC210] sub_007BC210 (183 bytes)
extern "C" void ext_007BB560();
extern "C" int mem_00999B60;
extern "C" __declspec(naked) void __cdecl fn_007BC210(void* self, unsigned short* out, int count) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x14
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0xc]
        push edi
        mov edi, dword ptr [eax + 0xc]
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_7BC2C0
        lea ebx, [eax + 0x1]
    L_7BC236:
        mov edx, dword ptr [edi]
        lea ecx, [esp + 0x18]
        shr edx, 0xc
        and edx, 0xffd
        add esi, 0x2
        add edx, 0x3402
        mov word ptr [esi - 0x2], dx
        mov eax, dword ptr [edi]
        and eax, 0x3fff
        lea edx, [esp + 0x10]
        push eax
        push ecx
        push edx
        call ext_007BB560
        add esp, 0xc
        test eax, eax
        jge L_7BC28C
        mov dword ptr [esp + 0x10], 0xbd156c1a
        mov dword ptr [esp + 0x14], 0x3fcaf286
        mov dword ptr [esp + 0x18], 0x94b8199e
        mov dword ptr [esp + 0x1c], 0x3fde50d7
    L_7BC28C:
        fld qword ptr [esp + 0x10]
        fmul qword ptr [mem_00999B60]
        call ext_00872828
        fld qword ptr [esp + 0x18]
        fmul qword ptr [mem_00999B60]
        mov word ptr [esi], ax
        add esi, 0x2
        call ext_00872828
        mov word ptr [esi], ax
        add esi, 0x2
        add edi, 0x4
        dec ebx
        jne L_7BC236
    L_7BC2C0:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007B3060] sub_007B3060 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B3060(void* p1, unsigned int p2) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        push    edi
        jne     L_7B3081
        push    2
        call    ext_007AA510
        mov     al, byte ptr [mem_00B61219]
        add     esp, 4
        test    al, al
        je      L_7B310E
L_7B3081:
        cmp     dword ptr [esi], 0
        jne     L_7B30AA
        push    8
        call    dword ptr [mem_00925208]
        add     esp, 4
        mov     dword ptr [esi], eax
        test    eax, eax
        jne     L_7B30AA
        push    1
        call    ext_007AA510
        mov     al, byte ptr [mem_00B61219]
        add     esp, 4
        test    al, al
        je      L_7B310E
L_7B30AA:
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx + 4], 0
        jbe     L_7B30E9
        push    8
        push    edi
        call    dword ptr [mem_0092522C]
        mov     edx, dword ptr [esi]
        add     esp, 8
        mov     dword ptr [edx + 4], eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        jne     L_7B30E9
        push    1
        call    ext_007AA510
        mov     al, byte ptr [mem_00B61219]
        add     esp, 4
        test    al, al
        je      L_7B310E
L_7B30E9:
        xor     eax, eax
        test    edi, edi
        jbe     L_7B310E
L_7B30EF:
        mov     ecx, dword ptr [esi]
        inc     eax
        cmp     eax, edi
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [edx + 8*eax - 8], 0
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [edx + 8*eax - 4], 0
        jb      L_7B30EF
L_7B310E:
        pop     edi
        pop     esi
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x007B3190] sub_007B3190 (192 bytes)
extern "C" int mem_0092522C;
extern "C" int mem_00999700;
extern "C" __declspec(naked) void __cdecl fn_007B3190(void* pp, int n) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push edi
        jne L_7B31B1
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B3241
L_7B31B1:
        cmp dword ptr [esi], 0x0
        jne L_7B31DA
        push 0xc
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi], eax
        test eax, eax
        jne L_7B31DA
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B3241
L_7B31DA:
        mov eax, dword ptr [esp + 0x10]
        mov edi, dword ptr [mem_00999700]
        test eax, eax
        je L_7B31EA
        mov edi, eax
L_7B31EA:
        mov ecx, dword ptr [esi]
        push 0x4
        push edi
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x8], 0x0
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x4], edi
        call dword ptr [mem_0092522C]
        mov ecx, dword ptr [esi]
        add esp, 0x8
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        test eax, eax
        jne L_7B3229
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B3241
L_7B3229:
        xor eax, eax
        test edi, edi
        jbe L_7B3241
L_7B322F:
        mov ecx, dword ptr [esi]
        inc eax
        cmp eax, edi
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [edx + 4*eax - 0x4], 0x0
        jb L_7B322F
L_7B3241:
        pop edi
        pop esi
        ret
    }
}

// [0x007B9310] sub_007B9310 (181 bytes)
extern "C" void ext_007B2EF0();
extern "C" void ext_007B3380();
extern "C" __declspec(naked) void __cdecl fn_007B9310(void* a1, int code) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_7B9330
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B93C3
L_7B9330:
        cmp dword ptr [esi], 0x0
        jne L_7B9348
        push 0x3
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B93C3
L_7B9348:
        mov eax, dword ptr [esi]
        cmp dword ptr [eax], 0x4d4d
        jne L_7B93C3
        lea ecx, [esp + 0x8]
        push ecx
        push 0x2
        push eax
        call ext_007B2EF0
        mov al, byte ptr [mem_00B61218]
        add esp, 0xc
        test al, al
        je L_7B9374
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_7B93C3
L_7B9374:
        mov edx, dword ptr [esp + 0x8]
        push edx
        call ext_007B3380
        mov cl, byte ptr [mem_00B61218]
        add esp, 0x4
        test cl, cl
        je L_7B9395
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_7B93C3
L_7B9395:
        mov ecx, dword ptr [esp + 0xc]
        cmp ecx, 0x3
        ja L_7B93C3
        jmp dword ptr [4*ecx + 0x7b93c8]
        mov dword ptr [eax], 0x1
        pop esi
        ret
        mov dword ptr [eax], 0x2
        pop esi
        ret
        mov dword ptr [eax], 0x3
        pop esi
        ret
        mov dword ptr [eax], 0x4
L_7B93C3:
        pop esi
        ret
    }
}

// [0x007B32C0] sub_007B32C0 (192 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B2480();
extern "C" int mem_00999700;
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __cdecl fn_007B32C0(int** pp, int value) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
    L_32C0_top:
        test ebp, ebp
        jne L_32C0_e3
        push 2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_32C0_exit
    L_32C0_e3:
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebx]
        cmp ecx, eax
        jb L_32C0_append
        mov ecx, dword ptr [mem_00999700]
        push 4
        lea edi, [eax + ecx]
        push edi
        call dword ptr [mem_0092522C]
        mov esi, eax
        add esp, 8
        test esi, esi
        jne L_32C0_copy
        push 1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je L_32C0_exit
    L_32C0_copy:
        xor eax, eax
        test edi, edi
        jbe L_32C0_free
    L_32C0_cl:
        cmp eax, dword ptr [ebx]
        jae L_32C0_zero
        mov edx, dword ptr [ebx + 8]
        mov ecx, dword ptr [edx + 4*eax]
        mov dword ptr [esi + 4*eax], ecx
        jmp L_32C0_inc
    L_32C0_zero:
        mov dword ptr [esi + 4*eax], 0
    L_32C0_inc:
        inc eax
        cmp eax, edi
        jb L_32C0_cl
    L_32C0_free:
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 8]
        push eax
        call dword ptr [mem_009251D8]
        mov ecx, dword ptr [ebp]
        add esp, 4
        mov dword ptr [ecx + 8], esi
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 4], edi
        jmp L_32C0_top
    L_32C0_append:
        mov eax, dword ptr [esp + 0x18]
        push eax
        call ext_007B2480
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebx + 8]
        add esp, 4
        mov dword ptr [edx + 4*ecx], eax
        mov eax, dword ptr [ebx]
        inc eax
        mov dword ptr [ebx], eax
    L_32C0_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BF570] sub_007BF570 (192 bytes)
extern "C" void ext_007BF630();
extern "C" __declspec(naked) int __cdecl fn_007BF570(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, dword ptr [esi + 0x1cc]
        call dword ptr [edi + 0x28]
        add esp, 0x4
        test eax, eax
        je L_FAIL_007BF570
        push esi
        call ext_007BF630
        add esp, 0x4
        test eax, eax
        je L_FAIL_007BF570
        cmp dword ptr [edi], 0x2
        jne L_DONE_007BF570
        xor eax, eax
        mov ecx, 0x7bf930
        mov ax, word ptr [esi + 0x40]
        cmp eax, 0x8
        je L_EQ8_007BF570
        cmp eax, 0x10
        jne L_AFTER_007BF570
        mov dword ptr [edi + 0xc], ecx
        jmp L_AFTER_007BF570
    L_EQ8_007BF570:
        mov dword ptr [edi + 0xc], 0x7bf760
    L_AFTER_007BF570:
        mov eax, dword ptr [esi + 0x1a0]
        mov dword ptr [edi + 0x10], eax
        mov edx, dword ptr [esi + 0x1a8]
        mov dword ptr [esi + 0x1a0], 0x7bf9c0
        mov dword ptr [edi + 0x14], edx
        mov edx, dword ptr [esi + 0x1b0]
        mov eax, 0x7bfa10
        mov dword ptr [esi + 0x1a8], eax
        mov dword ptr [edi + 0x18], edx
        mov dword ptr [esi + 0x1b0], eax
        mov al, byte ptr [esi + 0xc]
        test al, 0x80
        je L_DONE_007BF570
        cmp dword ptr [edi + 0xc], ecx
        jne L_DONE_007BF570
        mov dword ptr [edi + 0xc], 0x7bf890
        mov dword ptr [esi + 0x210], 0x6d80a0
    L_DONE_007BF570:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_FAIL_007BF570:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007BC550] sub_007BC550 (198 bytes)
extern "C" void ext_007BC630();
extern "C" __declspec(naked) void __cdecl fn_007BC550(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        cmp word ptr [ebx + 0x72], 0x1
        mov esi, dword ptr [ebx + 0x1cc]
        lea edi, [ebx + 0x18]
        je L_7BC57F
        push 0xab2138
        push 0x999a00
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
L_7BC57F:
        cmp dword ptr [esi], -1
        jne L_7BC58F
        push edi
        call ext_007BC630
        add esp, 0x4
        mov dword ptr [esi], eax
L_7BC58F:
        mov eax, dword ptr [esi]
        cmp eax, 0x3
        ja L_7BC600
        jmp dword ptr [4*eax + 0x7bc618]
L_7BC59D:
        mov dword ptr [esi + 0x8], 0xc
        jmp L_7BC5BF
L_7BC5A6:
        mov dword ptr [esi + 0x8], 0x6
        jmp L_7BC5BF
L_7BC5AF:
        mov dword ptr [esi + 0x8], 0x4
        jmp L_7BC5BF
L_7BC5B8:
        mov dword ptr [esi + 0x8], 0x3
L_7BC5BF:
        mov eax, dword ptr [edi + 0x38]
        imul eax, dword ptr [edi + 0xc]
        mov dword ptr [esi + 0x10], eax
        shl eax, 0x2
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        test eax, eax
        jne L_7BC5F7
        mov ecx, dword ptr [ebx]
        push ecx
        push 0xab20a0
        push 0x999a00
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
L_7BC5F7:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
L_7BC600:
        mov edx, dword ptr [ebx]
        push 0xab2100
        push edx
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BD670] sub_007BD670 (204 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BD670(void* p1, int p2, int p3) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        mov esi, dword ptr [edi + 0x1cc]
        push 0x1
        lea ebx, [esi + 0x30]
        mov dword ptr [esi + 0x3c], eax
        push ebx
        mov dword ptr [esi + 0x40], ecx
        call ext_007BFF40
        add esp, 0x8
        cmp eax, 0x1
        je L_7bd6ea
    L_7bd69e:
        cmp eax, -0x3
        jne L_7bd6cf
        mov edx, dword ptr [esi + 0x48]
        mov eax, dword ptr [edi + 0x164]
        mov ecx, dword ptr [edi]
        push edx
        push eax
        push ecx
        push 0xab229c
        push 0x999b90
        call ext_0079B140
        push ebx
        call ext_007C15F0
        add esp, 0x18
        test eax, eax
        jne L_7bd70e
        jmp L_7bd6d3
    L_7bd6cf:
        test eax, eax
        jne L_7bd714
    L_7bd6d3:
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        jbe L_7bd6ea
        push 0x1
        push ebx
        call ext_007BFF40
        add esp, 0x8
        cmp eax, 0x1
        jne L_7bd69e
    L_7bd6ea:
        mov esi, dword ptr [esi + 0x40]
        test esi, esi
        je L_7bd733
        mov ecx, dword ptr [edi + 0x164]
        mov edx, dword ptr [edi]
        push esi
        push ecx
        push edx
        push 0xab2268
        push 0x999b90
        call ext_0079B140
        add esp, 0x14
    L_7bd70e:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    L_7bd714:
        mov edx, dword ptr [esi + 0x48]
        mov eax, dword ptr [edi]
        push edx
        push eax
        push 0xab2254
        push 0x999b90
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_7bd733:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    }
}

// [0x007B25C0] sub_007B25C0 (208 bytes)
extern "C" void ext_007B2C20();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3380();
extern "C" __declspec(naked) void __cdecl fn_007B25C0(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        cmp ebp, 0x1
        push edi
        jb L_7B267E
        mov edi, dword ptr [esp + 0x18]
        xor esi, esi
        cmp edi, esi
        je L_7B267E
        cmp dword ptr [esp + 0x1c], esi
        je L_7B267E
        lea eax, [esp + 0x10]
        push ebx
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], 0xb020
        mov edx, dword ptr [esp + 0x18]
        push edx
        call ext_007B3380
        mov ebx, eax
        mov ax, word ptr [esp + 0x20]
        mov dword ptr [ebx + 0x8], esi
        mov dword ptr [ebx + 0x4], esi
        lea esi, [8*ebp]
        mov word ptr [ebx], ax
        sub esi, ebp
        mov dword ptr [ebx + 0xc], ebp
        shl esi, 0x2
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, edi
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        mov dword ptr [ebx + 0x10], eax
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        lea esi, [ebp + 2*ebp]
        shl esi, 0x2
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, dword ptr [esp + 0x30]
        mov dword ptr [ebx + 0x14], eax
        mov edi, eax
        mov eax, ecx
        mov edx, dword ptr [esp + 0x34]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push edx
        call ext_007B2E50
        add esp, 0x18
        pop ebx
    L_7B267E:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x007B1590] sub_007B1590 (200 bytes)
extern "C" void ext_0079AF50();
extern "C" void ext_007B04C0();
extern "C" void ext_007B06A0();
extern "C" void ext_007B09C0();
extern "C" void ext_007B10D0();

extern "C" __declspec(naked) void __fastcall fn_007B1590(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push ebp
        push ebx
        push edi
        call ext_007B06A0
        add esp, 0xc
        test eax, eax
        jne L_7B15B4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_7B15B4:
        mov esi, dword ptr [esp + 0x20]
        cmp dword ptr [esi], 0x0
        jne L_7B15DE
        lea eax, [4*ebp]
        push 0xab1560
        push eax
        push edi
        call ext_007B04C0
        add esp, 0xc
        mov dword ptr [esi], eax
        test eax, eax
        jne L_7B15DE
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_7B15DE:
        cmp word ptr [ebx + 0x2], 0x3
        mov esi, dword ptr [esi]
        jne L_7B1646
        mov ecx, dword ptr [ebx + 0x4]
        push 0xab154c
        shl ecx, 1
        push ecx
        push edi
        call ext_007B04C0
        mov ebp, eax
        add esp, 0xc
        test ebp, ebp
        jne L_7B1606
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_7B1606:
        push ebp
        push ebx
        push edi
        call ext_007B09C0
        mov edi, eax
        add esp, 0xc
        test edi, edi
        je L_7B1636
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, ebp
        mov edx, ecx
        dec ecx
        test edx, edx
        jle L_7B1636
        inc ecx
L_7B1625:
        xor edx, edx
        add esi, 0x4
        mov dx, word ptr [eax]
        add eax, 0x2
        mov dword ptr [esi - 0x4], edx
        dec ecx
        jne L_7B1625
L_7B1636:
        push ebp
        call ext_0079AF50
        add esp, 0x4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_7B1646:
        push esi
        push ebx
        push edi
        call ext_007B10D0
        add esp, 0xc
        mov edi, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B2690] sub_007B2690 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B2690(unsigned int count, unsigned short a2, void* src1, void* src2, void* a5) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        cmp ebp, 0x1
        push edi
        jb L_007B274E
        mov edi, dword ptr [esp + 0x18]
        xor esi, esi
        cmp edi, esi
        je L_007B274E
        cmp dword ptr [esp + 0x1c], esi
        je L_007B274E
        lea eax, [esp + 0x10]
        push ebx
        push eax
        call ext_007B2C20
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], 0xb025
        mov edx, dword ptr [esp + 0x18]
        push edx
        call ext_007B3380
        mov ebx, eax
        mov ax, word ptr [esp + 0x20]
        mov dword ptr [ebx + 0x8], esi
        mov dword ptr [ebx + 0x4], esi
        lea esi, [8*ebp]
        mov word ptr [ebx], ax
        sub esi, ebp
        mov dword ptr [ebx + 0xc], ebp
        shl esi, 0x2
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, edi
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        mov dword ptr [ebx + 0x10], eax
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        lea esi, [ebp + 2*ebp]
        shl esi, 0x2
        push esi
        call dword ptr [mem_00925208]
        mov ecx, esi
        mov esi, dword ptr [esp + 0x30]
        mov dword ptr [ebx + 0x14], eax
        mov edi, eax
        mov eax, ecx
        mov edx, dword ptr [esp + 0x34]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push edx
        call ext_007B2E50
        add esp, 0x18
        pop ebx
    L_007B274E:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x007B1130] sub_007B1130 (208 bytes)
extern "C" int mem_00AB14E4;
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_0079B140();
extern "C" void ext_007AF5E0();
extern "C" void ext_007B06A0();
extern "C" void ext_007B09C0();
extern "C" __declspec(naked) int __cdecl fn_007B1130(void* a, unsigned short* b, int* c) {
    __asm {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push esi
        xor esi, esi
        mov si, word ptr [ebx + 0x4e]
        push edi
        push esi
        xor edi, edi
        push ebp
        push ebx
        mov dword ptr [esp + 0x34], edi
        call ext_007B06A0
        add esp, 0xc
        test eax, eax
        je L_7B11F2
        cmp esi, 0xa
        lea edi, [esp + 0x10]
        jbe L_7B1175
        lea eax, [esi + esi]
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov edi, eax
L_7B1175:
        push edi
        push ebp
        push ebx
        call ext_007B09C0
        add esp, 0xc
        test eax, eax
        je L_7B11D3
        mov eax, 0x1
        cmp esi, eax
        jle L_7B11A0
        mov dx, word ptr [edi]
        lea ecx, [edi + 0x2]
L_7B1193:
        cmp word ptr [ecx], dx
        jne L_7B11B2
        inc eax
        add ecx, 0x2
        cmp eax, esi
        jl L_7B1193
L_7B11A0:
        mov edx, dword ptr [esp + 0x30]
        xor ecx, ecx
        mov cx, word ptr [edi]
        mov esi, 0x1
        mov dword ptr [edx], ecx
        jmp L_7B11D7
L_7B11B2:
        xor ecx, ecx
        mov cx, word ptr [ebp]
        push ecx
        push ebx
        call ext_007AF5E0
        mov edx, dword ptr [eax + 0x10]
        mov eax, dword ptr [ebx]
        push edx
        push offset mem_00AB14E4
        push eax
        call ext_0079B140
        add esp, 0x14
L_7B11D3:
        mov esi, dword ptr [esp + 0x28]
L_7B11D7:
        lea eax, [esp + 0x10]
        cmp edi, eax
        je L_7B11E8
        push edi
        call ext_0079AF50
        add esp, 0x4
L_7B11E8:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
L_7B11F2:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007BCBC0] sub_007BCBC0 (209 bytes)
extern "C" void ext_0079B850();
extern "C" __declspec(naked) int __cdecl fn_007BCBC0(void* self, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        cdq
        mov ecx, dword ptr [esi + 0x1cc]
        idiv dword ptr [ecx + 0x8]
        mov ebx, eax
        mov eax, dword ptr [ecx]
        cmp eax, 0x2
        jne L_BCBC0_A
        mov edi, dword ptr [esp + 0x18]
        jmp L_BCBC0_B
L_BCBC0_A:
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [ecx + 0xc]
        push ebx
        push eax
        push ecx
        call dword ptr [ecx + 0x14]
        add esp, 0xc
L_BCBC0_B:
        mov ecx, dword ptr [esi + 0x1dc]
        mov ebp, dword ptr [esi + 0x1e4]
        mov eax, dword ptr [esi + 0x1e0]
        sub ecx, ebp
        test ebx, ebx
        lea ebp, [ebx - 0x1]
        je L_BCBC0_END
L_BCBC0_LOOP:
        cmp ecx, 0x3
        jge L_BCBC0_WRITE
        mov edx, dword ptr [esi + 0x1dc]
        push esi
        sub edx, ecx
        mov dword ptr [esi + 0x1e0], eax
        mov dword ptr [esi + 0x1e4], edx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je L_BCBC0_FAIL
        mov ecx, dword ptr [esi + 0x1dc]
        mov edx, dword ptr [esi + 0x1e4]
        mov eax, dword ptr [esi + 0x1e0]
        sub ecx, edx
L_BCBC0_WRITE:
        mov edx, dword ptr [edi]
        add edi, 0x4
        shr edx, 0x10
        mov byte ptr [eax], dl
        mov edx, dword ptr [edi - 0x4]
        inc eax
        sub ecx, 0x3
        shr edx, 0x8
        mov byte ptr [eax], dl
        mov dl, byte ptr [edi - 0x4]
        inc eax
        mov byte ptr [eax], dl
        inc eax
        mov edx, ebp
        dec ebp
        test edx, edx
        jne L_BCBC0_LOOP
L_BCBC0_END:
        mov dword ptr [esi + 0x1e0], eax
        mov eax, dword ptr [esi + 0x1dc]
        sub eax, ecx
        pop edi
        mov dword ptr [esi + 0x1e4], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
L_BCBC0_FAIL:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        ret
    }
}

// [0x007BF1D0] sub_007BF1D0 (219 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BF1D0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [ecx + 0x1cc]
        mov eax, dword ptr [ecx + 0x1e0]
        xor ebp, ebp
        push edi
        mov edx, dword ptr [ebx + 0x58]
        mov edi, dword ptr [ebx + 0x3c]
        mov esi, dword ptr [ebx + 0x38]
        mov bp, word ptr [ebx + 0x30]
        cmp eax, edx
        jbe L_7BF218
        mov edx, dword ptr [ecx + 0x1d8]
        push ecx
        sub eax, edx
        mov dword ptr [ecx + 0x1e4], eax
        call ext_0079B850
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x4
        mov eax, dword ptr [eax + 0x1d8]
    L_7BF218:
        mov edx, dword ptr [ebx + 0x44]
        cmp edx, 0xffff
        je L_7BF251
        mov ecx, ebp
        add edi, ebp
        shl esi, cl
        add edi, -0x8
        mov ecx, edi
        or esi, edx
        mov edx, esi
        sar edx, cl
        inc eax
        cmp edi, 0x8
        mov byte ptr [eax - 0x1], dl
        jl L_7BF24A
        add edi, -0x8
        mov edx, esi
        mov ecx, edi
        sar edx, cl
        inc eax
        mov byte ptr [eax - 0x1], dl
    L_7BF24A:
        mov dword ptr [ebx + 0x44], 0xffff
    L_7BF251:
        mov ecx, ebp
        add edi, ebp
        shl esi, cl
        or esi, 0x101
        mov edx, esi
        lea esi, [edi - 0x8]
        mov ebx, edx
        mov ecx, esi
        sar ebx, cl
        inc eax
        cmp esi, 0x8
        mov byte ptr [eax - 0x1], bl
        jl L_7BF27E
        add esi, -0x8
        mov ebx, edx
        mov ecx, esi
        sar ebx, cl
        inc eax
        mov byte ptr [eax - 0x1], bl
    L_7BF27E:
        test esi, esi
        jle L_7BF28F
        mov ecx, 0x8
        sub ecx, esi
        shl dl, cl
        inc eax
        mov byte ptr [eax - 0x1], dl
    L_7BF28F:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov edx, dword ptr [ecx + 0x1d8]
        pop ebx
        sub eax, edx
        mov dword ptr [ecx + 0x1e4], eax
        mov eax, 0x1
        ret
    }
}

// [0x007BFE40] sub_007BFE40 (224 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BFE40(void* strm, int windowBits, const char* version, int stream_size) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        je L_7bff0d
        mov al, byte ptr [eax]
        mov cl, byte ptr [mem_00AB224C]
        cmp al, cl
        jne L_7bff0d
        cmp dword ptr [esp + 0x18], 0x38
        jne L_7bff0d
        mov esi, dword ptr [esp + 0xc]
        cmp esi, edi
        jne L_7bfe7b
        pop edi
        mov eax, 0xfffffffe
        pop esi
        ret
    L_7bfe7b:
        mov eax, dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x18], edi
        cmp eax, edi
        jne L_7bfe8f
        mov dword ptr [esi + 0x20], 0x7c2e50
        mov dword ptr [esi + 0x28], edi
    L_7bfe8f:
        cmp dword ptr [esi + 0x24], edi
        jne L_7bfe9b
        mov dword ptr [esi + 0x24], 0x7c2e70
    L_7bfe9b:
        mov ecx, dword ptr [esi + 0x28]
        push 0x1ba8
        push 0x1
        push ecx
        call dword ptr [esi + 0x20]
        add esp, 0xc
        cmp eax, edi
        jne L_7bfeb8
        pop edi
        mov eax, 0xfffffffc
        pop esi
        ret
    L_7bfeb8:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x1c], eax
        cmp ecx, edi
        jge L_7bfeca
        mov dword ptr [eax + 0x8], edi
        neg ecx
        jmp L_7bfedb
    L_7bfeca:
        mov edx, ecx
        sar edx, 0x4
        inc edx
        cmp ecx, 0x30
        mov dword ptr [eax + 0x8], edx
        jge L_7bfedb
        and ecx, 0xf
    L_7bfedb:
        cmp ecx, 0x8
        jl L_7bfef7
        cmp ecx, 0xf
        jg L_7bfef7
        push esi
        mov dword ptr [eax + 0x1c], ecx
        mov dword ptr [eax + 0x2c], edi
        call ext_007BFDF0
        add esp, 0x4
        pop edi
        pop esi
        ret
    L_7bfef7:
        push eax
        mov eax, dword ptr [esi + 0x28]
        push eax
        call dword ptr [esi + 0x24]
        add esp, 0x8
        mov dword ptr [esi + 0x1c], edi
        mov eax, 0xfffffffe
        pop edi
        pop esi
        ret
    L_7bff0d:
        pop edi
        mov eax, 0xfffffffa
        pop esi
        ret
    }
}

// [0x007B1200] sub_007B1200 (224 bytes)
extern "C" void ext_0079AF50();
extern "C" void ext_007AF5E0();
extern "C" void ext_007B06A0();
extern "C" void ext_007B12E0();

extern "C" __declspec(naked) int __cdecl fn_007B1200(void* obj, unsigned short* a2, double* out) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x54
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        xor     esi, esi
        push    edi
        mov     si, word ptr [ebx + 0x4e]
        xor     edi, edi
        push    esi
        push    eax
        push    ebx
        mov     dword ptr [esp + 0x18], edi
        call    ext_007B06A0
        add     esp, 0xc
        test    eax, eax
        je      L_7b12d2
        cmp     esi, 0xa
        lea     edi, [esp + 0x10]
        jbe     L_7b124c
        lea     ecx, [8*esi]
        push    ecx
        call    ext_0079AF40
        add     esp, 0x4
        mov     edi, eax
    L_7b124c:
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        push    edx
        push    ebx
        call    ext_007B12E0
        add     esp, 0xc
        test    eax, eax
        je      L_7b12b4
        mov     ecx, 0x1
        cmp     esi, ecx
        jle     L_7b127d
        lea     edx, [edi + 0x8]
    L_7b126a:
        fld     qword ptr [edx]
        fcomp   qword ptr [edi]
        fnstsw  ax
        test    ah, 0x40
        je      L_7b1291
        inc     ecx
        add     edx, 0x8
        cmp     ecx, esi
        jl      L_7b126a
    L_7b127d:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [edi]
        mov     esi, 0x1
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0x4], edx
        jmp     L_7b12b8
    L_7b1291:
        mov     ecx, dword ptr [ebp + 0xc]
        xor     eax, eax
        mov     ax, word ptr [ecx]
        push    eax
        push    ebx
        call    ext_007AF5E0
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ebx]
        push    edx
        push    0x00ab14e4
        push    eax
        call    ext_0079B140
        add     esp, 0x14
    L_7b12b4:
        mov     esi, dword ptr [esp + 0xc]
    L_7b12b8:
        lea     eax, [esp + 0x10]
        cmp     edi, eax
        je      L_7b12c9
        push    edi
        call    ext_0079AF50
        add     esp, 0x4
    L_7b12c9:
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_7b12d2:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007B93E0] sub_007B93E0 (228 bytes)
extern "C" void ext_007B2CA0();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2EF0();
extern "C" __declspec(naked) void __cdecl fn_007B93E0(void** out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        jne L_7B9401_A
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B94C1_A
L_7B9401_A:
        cmp dword ptr [esi], 0x0
        jne L_7B941D_A
        push 0x3
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7B94C1_A
L_7B941D_A:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        cmp ecx, 0x4d4d
        je L_7B9435_A
        cmp ecx, 0xc23d
        jne L_7B94C1_A
L_7B9435_A:
        lea ecx, [esp + 0xc]
        push ecx
        push 0x3d3d
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        jne L_7B946F_A
        lea edx, [esp + 0xc]
        push 0x3d3d
        push edx
        call ext_007B2CA0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        call ext_007B2E50
        add esp, 0x10
L_7B946F_A:
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x4]
        push edx
        push 0x3d3e
        push eax
        call ext_007B2EF0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        call ext_007B3380
        mov ecx, dword ptr [esp + 0x20]
        add esp, 0x10
        cmp ecx, 0x3
        ja L_7B94C1_A
        jmp dword ptr [4*ecx + 0x7b94c4]
L_7B94A0_A:
        mov dword ptr [eax], 0x1
        pop esi
        pop ecx
        ret
L_7B94A9_A:
        mov dword ptr [eax], 0x2
        pop esi
        pop ecx
        ret
L_7B94B2_A:
        mov dword ptr [eax], 0x3
        pop esi
        pop ecx
        ret
L_7B94BB_A:
        mov dword ptr [eax], 0x4
L_7B94C1_A:
        pop esi
        pop ecx
        ret
    }
}

// [0x007BBA50] sub_007BBA50 (237 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBA50(int* a1, int a2) {
    __asm {
        push esi
        push edi
        push 0x20
        call ext_0079AF40
        mov esi, dword ptr [esp + 0x10]
        mov edi, eax
        add esp, 0x4
        test edi, edi
        mov dword ptr [esi + 0x1cc], edi
        jne L_7bba86
        mov eax, dword ptr [esi]
        push eax
        push 0xab1f60
        push 0x999a38
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        ret
    L_7bba86:
        push 0x20
        push 0x0
        push edi
        call ext_0079AFE0
        mov edx, dword ptr [esp + 0x1c]
        xor ecx, ecx
        cmp edx, 0x8775
        push 0x2
        sete cl
        push 0x999a10
        mov dword ptr [edi], 0xffffffff
        mov dword ptr [edi + 0x4], ecx
        mov dword ptr [edi + 0x14], 0x6d80a0
        push esi
        mov dword ptr [esi + 0x18c], 0x7bbc80
        mov dword ptr [esi + 0x1a8], 0x7bbb40
        mov dword ptr [esi + 0x1b0], 0x7bbb90
        mov dword ptr [esi + 0x194], 0x7bc780
        mov dword ptr [esi + 0x1ac], 0x7bbbe0
        mov dword ptr [esi + 0x1b4], 0x7bbc30
        mov dword ptr [esi + 0x1b8], 0x7bd310
        mov dword ptr [esi + 0x1c0], 0x7bd340
        call ext_007AF420
        mov edx, dword ptr [esi + 0x220]
        add esp, 0x18
        mov dword ptr [edi + 0x18], edx
        mov eax, dword ptr [esi + 0x21c]
        mov dword ptr [esi + 0x220], 0x7bd4a0
        mov dword ptr [edi + 0x1c], eax
        mov dword ptr [esi + 0x21c], 0x7bd380
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007BAA40] sub_007BAA40 (235 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007AF010();
extern "C" void ext_007AF040();
extern "C" void ext_007AF080();
extern "C" void ext_007AF5E0();
extern "C" int mem_007BAB2C;
extern "C" int mem_009993C8[];

extern "C" __declspec(naked) void __cdecl fn_007BAA40(void* a, unsigned short* d, int* f) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test byte ptr [edi + 0xc], 0x80
        je L_7baa9e
        xor eax, eax
        mov ax, word ptr [esi + 0x2]
        add eax, -0x3
        cmp eax, 0x9
        ja L_7baa9e
        jmp dword ptr [4*eax + mem_007BAB2C]
    L_7baa6b:
        mov eax, dword ptr [esi + 0x4]
        push eax
        push ebp
        call ext_007AF010
        jmp L_7baa9b
    L_7baa77:
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        push ebp
        call ext_007AF040
        jmp L_7baa9b
    L_7baa83:
        mov edx, dword ptr [esi + 0x4]
        shl edx, 1
        push edx
        push ebp
        call ext_007AF040
        jmp L_7baa9b
    L_7baa91:
        mov eax, dword ptr [esi + 0x4]
        push eax
        push ebp
        call ext_007AF080
    L_7baa9b:
        add esp, 0x8
    L_7baa9e:
        mov eax, dword ptr [edi + 0x174]
        xor ecx, ecx
        mov cx, word ptr [esi + 0x2]
        mov dword ptr [esi + 0x8], eax
        mov edx, dword ptr [edi + 0x1f8]
        push 0x0
        mov ebx, dword ptr [4*ecx + mem_009993C8]
        push eax
        imul ebx, dword ptr [esi + 0x4]
        push edx
        call dword ptr [edi + 0x204]
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0xc
        cmp eax, ecx
        jne L_7bab04
        mov eax, dword ptr [edi + 0x1f8]
        push ebx
        push ebp
        push eax
        call dword ptr [edi + 0x200]
        add esp, 0xc
        cmp eax, ebx
        jne L_7bab04
        mov eax, dword ptr [edi + 0x174]
        inc ebx
        and ebx, -0x2
        add eax, ebx
        mov dword ptr [edi + 0x174], eax
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    L_7bab04:
        xor ecx, ecx
        mov cx, word ptr [esi]
        push ecx
        push edi
        call ext_007AF5E0
        mov edx, dword ptr [eax + 0x10]
        mov eax, dword ptr [edi]
        push edx
        push 0x00AB17E0
        push eax
        call ext_0079B140
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BB610] sub_007BB610 (240 bytes)
extern "C" void ext_007BB100();
extern "C" void ext_007BB560();
extern "C" int mem_0092A278;
extern "C" int mem_00999B20;
extern "C" int mem_00999B40;
extern "C" int mem_00999B38;
extern "C" int mem_009548E0;
extern "C" int mem_0092A270;
extern "C" int mem_00999B30;
extern "C" int mem_0093F7B0;

extern "C" __declspec(naked) void __cdecl fn_007BB610(int a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, esi
        shr eax, 0xe
        and eax, 0x3ff
        push eax
        call ext_007BB100
        fst qword ptr [esp + 0x14]
        fcomp qword ptr [mem_0092A278]
        add esp, 0x4
        fnstsw ax
        test ah, 0x41
        je L_7BB653
        mov eax, dword ptr [ebp + 0xc]
        xor ecx, ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
L_7BB653:
        and esi, 0x3fff
        lea ecx, [esp + 0x18]
        push esi
        lea edx, [esp + 0xc]
        push ecx
        push edx
        call ext_007BB560
        add esp, 0xc
        test eax, eax
        jge L_7BB688
        fld qword ptr [mem_00999B20]
        mov dword ptr [esp + 0x8], 0xbd156c1a
        mov dword ptr [esp + 0xc], 0x3fcaf286
        jmp L_7BB68C
L_7BB688:
        fld qword ptr [esp + 0x18]
L_7BB68C:
        fld qword ptr [esp + 0x8]
        fmul qword ptr [mem_00999B40]
        fld st(1)
        fmul qword ptr [mem_00999B38]
        mov eax, dword ptr [ebp + 0xc]
        pop esi
        fsubp st(1), st
        fadd qword ptr [mem_009548E0]
        fdivr qword ptr [mem_0092A270]
        fld st(0)
        fmul qword ptr [esp + 0x4]
        fmul qword ptr [mem_00999B30]
        fstp qword ptr [esp + 0x4]
        fmulp st(1), st
        fmul qword ptr [mem_0093F7B0]
        fld qword ptr [esp + 0x4]
        fdiv st, st(1)
        fmul qword ptr [esp + 0xc]
        fstp dword ptr [eax]
        fld qword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld qword ptr [mem_0092A270]
        fsub qword ptr [esp + 0x4]
        fsub st, st(1)
        fdiv st, st(1)
        fmul qword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x8]
        fstp st(0)
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BB7F0] sub_007BB7F0 (240 bytes)
extern "C" void ext_007BAE40();
extern "C" int mem_0092A278;
extern "C" int mem_00993828;
extern "C" int mem_00999B50;
extern "C" int mem_00999B40;
extern "C" int mem_00999B38;
extern "C" int mem_009548E0;
extern "C" int mem_0092A270;
extern "C" int mem_00999B30;
extern "C" int mem_0093F7B0;

extern "C" __declspec(naked) void __cdecl fn_007BB7F0(int packed, void* out) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov eax, esi
        sar eax, 0x10
        push eax
        call ext_007BAE40
        fcom qword ptr [mem_0092A278]
        add esp, 0x4
        fnstsw ax
        test ah, 0x41
        je L_7BB828
        mov eax, dword ptr [esp + 0x1c]
        xor ecx, ecx
        fstp st(0)
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax], ecx
        pop esi
        add esp, 0x10
        ret
L_7BB828:
        mov ecx, esi
        mov eax, dword ptr [esp + 0x1c]
        shr ecx, 0x8
        and ecx, 0xff
        mov dword ptr [esp + 0x4], ecx
        xor ecx, ecx
        mov dword ptr [esp + 0x8], ecx
        and esi, 0xff
        fild qword ptr [esp + 0x4]
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x8], ecx
        pop esi
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B50]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x00
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B50]
        fstp qword ptr [esp + 0x8]
        fld st(0)
        fmul qword ptr [mem_00999B40]
        fld qword ptr [esp + 0x8]
        fmul qword ptr [mem_00999B38]
        fsubp st(1), st
        fadd qword ptr [mem_009548E0]
        fdivr qword ptr [mem_0092A270]
        __asm _emit 0xdd
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        fmulp st(1), st
        fmul qword ptr [mem_00999B30]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        fmul qword ptr [esp + 0x8]
        fmul qword ptr [mem_0093F7B0]
        fld st(1)
        fdiv st, st(1)
        fmul st, st(3)
        fstp dword ptr [eax]
        fld st(2)
        fstp dword ptr [eax + 0x4]
        fld qword ptr [mem_0092A270]
        fsub st, st(2)
        fsub st, st(1)
        fdiv st, st(1)
        fmul st, st(3)
        fstp dword ptr [eax + 0x8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        add esp, 0x10
        ret
    }
}

// [0x007BB700] sub_007BB700 (240 bytes)
extern "C" void ext_007BB140();
extern "C" void ext_007BB1D0();
extern "C" int mem_00993840;
extern "C" int mem_00999B48;
extern "C" int mem_0092A278;
extern "C" int mem_0093F7B0;
extern "C" int mem_00999B30;
extern "C" __declspec(naked) void __cdecl fn_007BB700(void* self, int arg1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        push ebx
        fld dword ptr [esi + 0x4]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_007BB140
        fld dword ptr [esi + 0x8]
        fmul qword ptr [mem_00993840]
        fld dword ptr [esi + 0x4]
        fmul qword ptr [mem_00999B48]
        mov edi, eax
        add esp, 0xc
        test edi, edi
        faddp st(1), st
        fadd dword ptr [esi]
        je L_7BB76E
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        jne L_7BB76E
        fld dword ptr [esi]
        fmul qword ptr [mem_0093F7B0]
        fdiv st, st(1)
        fstp qword ptr [esp + 0x18]
        fld dword ptr [esi + 0x4]
        fmul qword ptr [mem_00999B30]
        fdiv st, st(1)
        fstp qword ptr [esp + 0x10]
        fstp st(0)
        jmp L_7BB790
    L_7BB76E:
        fstp st(0)
        mov dword ptr [esp + 0x18], 0xbd156c1a
        mov dword ptr [esp + 0x1c], 0x3fcaf286
        mov dword ptr [esp + 0x10], 0x94b8199e
        mov dword ptr [esp + 0x14], 0x3fde50d7
    L_7BB790:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x1c]
        push ebx
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        call ext_007BB1D0
        mov ecx, eax
        add esp, 0x14
        test ecx, ecx
        jge L_7BB7D3
        push 0x0
        push 0x3fde50d7
        push 0x94b8199e
        push 0x3fcaf286
        push 0xbd156c1a
        call ext_007BB1D0
        add esp, 0x14
        mov ecx, eax
    L_7BB7D3:
        mov eax, edi
        pop edi
        shl eax, 0xe
        pop esi
        or eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BD4E0] sub_007BD4E0 (252 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079B140();
extern "C" void ext_007AF420();
extern "C" void ext_007BF4E0();

extern "C" __declspec(naked) int __cdecl fn_007BD4E0(void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        push 0x78
        call ext_0079AF40
        mov esi, dword ptr [esp + 0x14]
        mov edi, eax
        xor ebx, ebx
        add esp, 0x4
        cmp edi, ebx
        mov dword ptr [esi + 0x1cc], edi
        jne L_7BD517
        push 0xab2224
        push 0xab2218
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_7BD517:
        push 0x1
        push 0x999bd8
        push esi
        mov dword ptr [edi + 0x50], ebx
        mov dword ptr [edi + 0x54], ebx
        mov dword ptr [edi + 0x58], ebx
        mov dword ptr [edi + 0x5c], ebx
        call ext_007AF420
        mov eax, dword ptr [esi + 0x220]
        push esi
        mov dword ptr [edi + 0x70], eax
        mov ecx, dword ptr [esi + 0x21c]
        mov dword ptr [esi + 0x220], 0x7bd9e0
        mov dword ptr [edi + 0x74], ecx
        mov dword ptr [esi + 0x21c], 0x7bd960
        mov eax, 0x7bd670
        mov dword ptr [edi + 0x68], 0xffffffff
        mov dword ptr [edi + 0x6c], ebx
        mov dword ptr [esi + 0x1a0], eax
        mov dword ptr [esi + 0x1a8], eax
        mov dword ptr [esi + 0x1b0], eax
        mov eax, 0x7bd7d0
        mov dword ptr [esi + 0x18c], 0x7bd5e0
        mov dword ptr [esi + 0x190], 0x7bd640
        mov dword ptr [esi + 0x194], 0x7bd740
        mov dword ptr [esi + 0x198], 0x7bd7a0
        mov dword ptr [esi + 0x19c], 0x7bd870
        mov dword ptr [esi + 0x1a4], eax
        mov dword ptr [esi + 0x1ac], eax
        mov dword ptr [esi + 0x1b4], eax
        mov dword ptr [esi + 0x1c0], 0x7bd910
        call ext_007BF4E0
        add esp, 0x10
        mov eax, 0x1
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BD380] sub_007BD380 (263 bytes)
extern "C" void ext_00798840();
extern "C" void ext_00798FF0();
extern "C" void ext_007AF2F0();
extern "C" void ext_0079B140();

extern "C" __declspec(naked) int __cdecl fn_007BD380(void* a1, int a2, int* a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, edx
        push edi
        mov ecx, dword ptr [esi + 0x1cc]
        sub eax, 0x10018
        je L_DF
        dec eax
        je L_AE
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edx
        push esi
        call dword ptr [ecx + 0x1c]
        add esp, 0xc
        pop edi
        pop esi
        pop ebx
        ret
L_AE:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx]
        test eax, eax
        mov dword ptr [ecx + 0x4], eax
        je L_RET1
        cmp eax, 0x1
        je L_RET1
        push eax
        mov eax, dword ptr [esi]
        push 0xab21ec
        push eax
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
L_DF:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx]
        cmp eax, 0x3
        mov dword ptr [ecx], eax
        ja L_ERR
        jmp dword ptr [4*eax + 0x7bd488]
L_F7:
        mov edi, 0x20
        mov ebx, 0x3
        jmp L_COMMON
L_403:
        mov edi, 0x10
        mov ebx, 0x2
        jmp L_COMMON
L_40F:
        mov ebx, 0x1
        mov edi, 0x20
        push ebx
        push 0x115
        push esi
        call ext_00798FF0
        add esp, 0xc
        jmp L_COMMON
L_42A:
        mov edi, 0x8
        mov ebx, 0x1
L_COMMON:
        push edi
        push 0x102
        push esi
        call ext_00798FF0
        push ebx
        push 0x153
        push esi
        call ext_00798FF0
        push esi
        call ext_007AF2F0
        push esi
        mov dword ptr [esi + 0x188], eax
        call ext_00798840
        add esp, 0x20
        mov dword ptr [esi + 0x1d0], eax
L_RET1:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
L_ERR:
        push eax
        mov eax, dword ptr [esi]
        push 0xab21bc
        push eax
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007BDEF8] sub_007BDEF8 (270 bytes)
extern "C" __declspec(naked) void __fastcall fn_007BDEF8(void* self) {
    __asm {
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [esp + 0x4]
        mov ecx, 0x007BE2E0
        mov dword ptr [eax + 0x1a0], ecx
        mov dword ptr [eax + 0x1a8], ecx
        mov dword ptr [eax + 0x1b0], ecx
        mov ecx, 0x007BE280
        mov dword ptr [eax + 0x198], 0x007BE010
        mov dword ptr [eax + 0x1a4], 0x007BE050
        mov dword ptr [eax + 0x1ac], ecx
        mov dword ptr [eax + 0x1b4], ecx
        mov eax, 1
        ret
    }
}

// [0x007B8C70] sub_007B8C70 (272 bytes)
extern "C" void ext_007B2480();
extern "C" void ext_007B2D80();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B7110();
extern "C" void ext_007B8D80();
extern "C" void ext_007B8DD0();

extern "C" __declspec(naked) void __fastcall fn_007B8C70(void* self) {
    __asm {
        sub esp, 0xc
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push esi
        push edi
        push eax
        call ext_007B8D80
        mov eax, dword ptr [esp + 0xc]
        add esp, 0x4
        test eax, eax
        je near ptr L_END_007B8C70
        mov esi, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x10]
        push ecx
        push 0xb010
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je near ptr L_END_007B8C70
        push eax
        call ext_007B3CF0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je near ptr L_END_007B8C70
        mov edx, dword ptr [edi]
        push edx
        call ext_007B2480
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [ecx + 0x8], eax
        call ext_007B8DD0
        mov edx, dword ptr [esp + 0x10]
        add esp, 0x8
        mov word ptr [edx], ax
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov dword ptr [ecx + 0x4], eax
        mov eax, dword ptr [esp + 0x8]
        mov dx, word ptr [edi + 0x8]
        mov word ptr [eax + 0x10], dx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x14], 0x0
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [edx + 0xc], 0x0
        mov eax, dword ptr [esi]
        cmp eax, 0xb002
        jne L_SKIP_007B8C70
        lea eax, [esp + 0xc]
        push eax
        push 0xb011
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je L_SKIP_007B8C70
        push eax
        call ext_007B3CF0
        add esp, 0x4
        test eax, eax
        je L_SKIP_007B8C70
        mov eax, dword ptr [eax]
        test eax, eax
        je L_SKIP_007B8C70
        push eax
        call ext_007B2480
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov edx, dword ptr [esp + 0x10]
        push edx
        call ext_007B7110
        add esp, 0x8
    L_SKIP_007B8C70:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_007B7110
        add esp, 0x4
    L_END_007B8C70:
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x007BF760] sub_007BF760 (274 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BF760(void* self, unsigned char* buf, int len) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x1cc]
        mov eax, dword ptr [esp + 0x10]
        push edi
        mov ecx, dword ptr [ecx + 0x4]
        cmp esi, ecx
        jle L_END_7BF760
        sub esi, ecx
        cmp ecx, 0x3
        jne L_NOT3_7BF760
        movsx ecx, byte ptr [eax]
        movsx edx, byte ptr [eax + 0x1]
        movsx ebx, byte ptr [eax + 0x2]
        add eax, 0x2
    L_LOOP3_7BF760:
        movsx edi, byte ptr [eax + 0x1]
        add eax, 0x3
        add ecx, edi
        sub esi, 0x3
        movsx edi, byte ptr [eax - 0x1]
        add edx, edi
        mov byte ptr [eax - 0x2], cl
        movsx edi, byte ptr [eax]
        add ebx, edi
        mov byte ptr [eax - 0x1], dl
        test esi, esi
        mov byte ptr [eax], bl
        jg L_LOOP3_7BF760
        pop edi
        pop esi
        pop ebx
        ret
    L_NOT3_7BF760:
        cmp ecx, 0x4
        jne L_GEN_7BF760
        movsx ecx, byte ptr [eax]
        movsx edx, byte ptr [eax + 0x1]
        movsx ebx, byte ptr [eax + 0x2]
        lea edi, [eax + 0x2]
        movsx eax, byte ptr [eax + 0x3]
        mov dword ptr [esp + 0x10], eax
        mov eax, edi
        jmp L_N4BODY_7BF760
    L_N4LOOP_7BF760:
        mov ebx, dword ptr [esp + 0x14]
    L_N4BODY_7BF760:
        movsx edi, byte ptr [eax + 0x2]
        add eax, 0x4
        add ecx, edi
        sub esi, 0x4
        movsx edi, byte ptr [eax - 0x1]
        add edx, edi
        mov byte ptr [eax - 0x2], cl
        movsx edi, byte ptr [eax]
        add ebx, edi
        mov byte ptr [eax - 0x1], dl
        movsx edi, byte ptr [eax + 0x1]
        mov dword ptr [esp + 0x14], ebx
        mov byte ptr [eax], bl
        mov ebx, dword ptr [esp + 0x10]
        add ebx, edi
        test esi, esi
        mov dword ptr [esp + 0x10], ebx
        mov byte ptr [eax + 0x1], bl
        jg L_N4LOOP_7BF760
        pop edi
        pop esi
        pop ebx
        ret
    L_CMP_7BF760:
        cmp ecx, 0x4
    L_GEN_7BF760:
        ja L_BIG_7BF760
        jmp dword ptr [4*ecx + 0x7bf874]
    L_BIG_7BF760:
        lea edi, [ecx - 0x4]
        test edi, edi
        jle L_TAIL_7BF760
    L_GLOOP_7BF760:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        add bl, dl
        mov byte ptr [eax + ecx], bl
        inc eax
        dec edi
        jne L_GLOOP_7BF760
    L_TAIL_7BF760:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        add bl, dl
        mov byte ptr [eax + ecx], bl
        inc eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        add bl, dl
        mov byte ptr [eax + ecx], bl
        inc eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        add bl, dl
        mov byte ptr [eax + ecx], bl
        inc eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        add bl, dl
        mov byte ptr [eax + ecx], bl
        inc eax
        sub esi, ecx
        test esi, esi
        jg L_CMP_7BF760
    L_END_7BF760:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B06F0] sub_007B06F0 (281 bytes)
extern "C" void ext_0079B010();
extern "C" void ext_0079B140();
extern "C" void ext_007AF010();
extern "C" void ext_007AF040();
extern "C" void ext_007AF080();
extern "C" void ext_007AF5E0();
extern "C" __declspec(naked) void __cdecl fn_007B06F0(void* self, void* a2, int a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
        xor eax, eax
        mov ax, word ptr [edi + 0x2]
        mov ebx, dword ptr [4*eax + 0x9993c8]
        mov eax, dword ptr [esi + 0xc]
        imul ebx, dword ptr [edi + 0x4]
        test ah, 0x8
        jne L_7b074e
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [esi + 0x1f8]
        push 0x0
        push ecx
        push edx
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [edi + 0x8]
        add esp, 0xc
        cmp eax, ecx
        jne L_7b075e
        mov ebp, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x1f8]
        push ebx
        push ebp
        push eax
        call dword ptr [esi + 0x1fc]
        add esp, 0xc
        cmp eax, ebx
        jne L_7b075e
        jmp L_7b079c
    L_7b074e:
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [esi + 0x1ec]
        lea ecx, [eax + ebx]
        cmp ecx, edx
        jbe L_7b0785
    L_7b075e:
        xor edx, edx
        mov dx, word ptr [edi]
        push edx
        push esi
        call ext_007AF5E0
        mov eax, dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi]
        push eax
        push 0xab1474
        push ecx
        call ext_0079B140
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b0785:
        mov edx, dword ptr [esi + 0x1e8]
        mov ebp, dword ptr [esp + 0x1c]
        add edx, eax
        push ebx
        push edx
        push ebp
        call ext_0079B010
        add esp, 0xc
    L_7b079c:
        test byte ptr [esi + 0xc], 0x80
        je L_7b0802
        xor eax, eax
        mov ax, word ptr [edi + 0x2]
        add eax, -0x3
        cmp eax, 0x9
        ja L_7b0802
        jmp dword ptr [4*eax + 0x7b080c]
    L_7b07b7:
        mov eax, dword ptr [edi + 0x4]
        push eax
        push ebp
        call ext_007AF010
        add esp, 0x8
        mov eax, ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b07cb:
        mov ecx, dword ptr [edi + 0x4]
        push ecx
        push ebp
        call ext_007AF040
        add esp, 0x8
        mov eax, ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b07df:
        mov edx, dword ptr [edi + 0x4]
        shl edx, 1
        push edx
        push ebp
        call ext_007AF040
        add esp, 0x8
        mov eax, ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b07f5:
        mov eax, dword ptr [edi + 0x4]
        push eax
        push ebp
        call ext_007AF080
        add esp, 0x8
    L_7b0802:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B81C0] sub_007B81C0 (288 bytes)
extern "C" unsigned short ext_007B77D0();
extern "C" unsigned short ext_007B7830();
extern "C" void ext_007B7910();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" int mem_0099971A;
extern "C" int mem_0099971C;
extern "C" int mem_0099971E;
extern "C" int mem_00999720;
extern "C" int mem_00999722;

extern "C" __declspec(naked) void __cdecl fn_007B81C0(void* p) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov ecx, 0x7
        mov esi, 0x999768
        mov edi, ebx
        rep movsd
        call ext_007B7830
        mov dword ptr [ebx], eax
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_F2
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_F2:
        call ext_007B77D0
        mov word ptr [ebx + 0x4], ax
        mov cl, byte ptr [mem_00B61218]
        test cl, cl
        je L_213
        mov cl, byte ptr [mem_00B61219]
        test cl, cl
        je L_END
    L_213:
        mov cx, word ptr [mem_0099971A]
        and ax, cx
        cmp ax, cx
        jne L_240
        call ext_007B7910
        fstp dword ptr [ebx + 0x8]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_240
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_240:
        mov eax, dword ptr [mem_0099971C]
        mov ecx, eax
        and cx, word ptr [ebx + 0x4]
        cmp cx, ax
        jne L_26A
        call ext_007B7910
        fstp dword ptr [ebx + 0xc]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_26A
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_26A:
        mov ax, word ptr [mem_0099971E]
        mov dx, ax
        and dx, word ptr [ebx + 0x4]
        cmp dx, ax
        jne L_296
        call ext_007B7910
        fstp dword ptr [ebx + 0x10]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_296
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_296:
        mov eax, dword ptr [mem_00999720]
        mov ecx, eax
        and cx, word ptr [ebx + 0x4]
        cmp cx, ax
        jne L_2C0
        call ext_007B7910
        fstp dword ptr [ebx + 0x14]
        mov al, byte ptr [mem_00B61218]
        test al, al
        je L_2C0
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_END
    L_2C0:
        mov ax, word ptr [mem_00999722]
        mov dx, ax
        and dx, word ptr [ebx + 0x4]
        cmp dx, ax
        jne L_END
        call ext_007B7910
        fstp dword ptr [ebx + 0x18]
    L_END:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007B91B0] sub_007B91B0 (288 bytes)
extern "C" void ext_007B2480();
extern "C" int mem_00B61DB8;
extern "C" int mem_009252DC;
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void* __cdecl fn_007B91B0(const char* s) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00B61DB8]
        push esi
        mov esi, dword ptr [mem_009252DC]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push 0x2e
        push edi
        call esi
        add esp, 0x8
        test eax, eax
        je L_7B926F
        push edi
        call ext_007B2480
        mov ebx, eax
        push 0x2e
        push ebx
        call esi
        push 0x2e
        push edi
        mov byte ptr [eax], 0x0
        call esi
        mov edi, eax
        add esp, 0x14
        inc edi
        test ebp, ebp
        je L_7B925E
L_7B91F3:
        mov ecx, dword ptr [ebp + 0x8]
        mov esi, ebx
L_7B91F8:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L_7B921C
        test dl, dl
        je L_7B9218
        mov al, byte ptr [ecx + 0x1]
        mov dl, al
        cmp al, byte ptr [esi + 0x1]
        jne L_7B921C
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L_7B91F8
L_7B9218:
        xor ecx, ecx
        jmp L_7B9221
L_7B921C:
        sbb ecx, ecx
        sbb ecx, -1
L_7B9221:
        test ecx, ecx
        jne L_7B9257
        mov ecx, dword ptr [ebp + 0xc]
        mov esi, edi
L_7B922A:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L_7B924E
        test dl, dl
        je L_7B924A
        mov al, byte ptr [ecx + 0x1]
        mov dl, al
        cmp al, byte ptr [esi + 0x1]
        jne L_7B924E
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne L_7B922A
L_7B924A:
        xor ecx, ecx
        jmp L_7B9253
L_7B924E:
        sbb ecx, ecx
        sbb ecx, -1
L_7B9253:
        test ecx, ecx
        je L_7B925E
L_7B9257:
        mov ebp, dword ptr [ebp + 0x14]
        test ebp, ebp
        jne L_7B91F3
L_7B925E:
        push ebx
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_7B926F:
        test ebp, ebp
        je L_7B92BC
L_7B9273:
        mov eax, dword ptr [ebp + 0x8]
        mov esi, edi
L_7B9278:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne L_7B92A0
        test cl, cl
        je L_7B929C
        mov dl, byte ptr [eax + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov cl, dl
        cmp dl, bl
        jne L_7B92A0
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_7B9278
L_7B929C:
        xor eax, eax
        jmp L_7B92A5
L_7B92A0:
        sbb eax, eax
        sbb eax, -1
L_7B92A5:
        test eax, eax
        jne L_7B92B5
        mov eax, dword ptr [ebp + 0xc]
        test eax, eax
        je L_7B92BC
        cmp byte ptr [eax], 0x0
        je L_7B92BC
L_7B92B5:
        mov ebp, dword ptr [ebp + 0x14]
        test ebp, ebp
        jne L_7B9273
L_7B92BC:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007BD030] sub_007BD030 (300 bytes)
extern "C" void ext_007BB1D0();
extern "C" int mem_00999B70;
extern "C" int mem_00993CA0;
extern "C" int mem_00999B68;
extern "C" __declspec(naked) void __cdecl fn_007BD030(void* a, short* b, int n) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x1c
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        mov ebx, dword ptr [ebp + 0xc]
        push edi
        mov edi, dword ptr [eax + 0xc]
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jle L_END_7BD030
        inc eax
        mov dword ptr [esp + 0x10], eax
L_LOOP_7BD030:
        mov ax, word ptr [ebx]
        test ax, ax
        jg L_POS_7BD030
        xor esi, esi
        jmp L_AFTER_7BD030
L_POS_7BD030:
        cmp ax, 0x1cf2
        jl L_LT_7BD030
        mov esi, 0x3ff
        jmp L_AFTER_7BD030
L_LT_7BD030:
        mov edx, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [edx + 0x4]
        test ecx, ecx
        jne L_RAND_7BD030
        movsx esi, ax
        sub esi, 0xcf2
        sar esi, 0x2
        jmp L_AFTER_7BD030
L_RAND_7BD030:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0x14], eax
        fild dword ptr [esp + 0x14]
        movsx eax, word ptr [ebx]
        fmul qword ptr [mem_00999A60]
        mov dword ptr [esp + 0x14], eax
        fild dword ptr [esp + 0x14]
        fsub qword ptr [mem_00999B70]
        fmul qword ptr [mem_00993CA0]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
        call ext_00872828
        mov esi, eax
L_AFTER_7BD030:
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x18], eax
        xor eax, eax
        mov dword ptr [esp + 0x1c], eax
        mov edx, dword ptr [ecx + 0x4]
        fild qword ptr [esp + 0x18]
        mov ecx, dword ptr [edi + 0x4]
        push edx
        sub esp, 0x8
        mov dword ptr [esp + 0x2c], ecx
        fadd qword ptr [mem_00993828]
        mov dword ptr [esp + 0x30], eax
        sub esp, 0x8
        fmul qword ptr [mem_00999B68]
        fstp qword ptr [esp + 0x8]
        fild qword ptr [esp + 0x34]
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B68]
        fstp qword ptr [esp]
        call ext_007BB1D0
        add esp, 0x14
        test eax, eax
        jge L_SKIP_7BD030
        push 0x0
        push 0x3fde50d7
        push 0x94b8199e
        push 0x3fcaf286
        push 0xbd156c1a
        call ext_007BB1D0
        add esp, 0x14
L_SKIP_7BD030:
        shl esi, 0xe
        or esi, eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edi], esi
        add edi, 0x4
        add ebx, 0x6
        dec eax
        mov dword ptr [esp + 0x10], eax
        jne L_LOOP_7BD030
L_END_7BD030:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007B94E0] sub_007B94E0 (290 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B2480();
extern "C" void ext_007B2CA0();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2E50();
extern "C" void ext_007B3CB0();
extern "C" void ext_007B3CF0();

extern "C" __declspec(naked) void __cdecl fn_007B94E0(void* p) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        jne L_7b9501
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b95ff
    L_7b9501:
        cmp dword ptr [esi], 0x0
        jne L_7b951d
        push 0x5
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_7b95ff
    L_7b951d:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        cmp ecx, 0x4d4d
        je L_7b9535
        cmp ecx, 0xc23d
        jne L_7b95ff
    L_7b9535:
        lea ecx, [esp + 0xc]
        push ecx
        push 0xb000
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        jne L_7b956f
        lea edx, [esp + 0xc]
        push 0xb000
        push edx
        call ext_007B2CA0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        call ext_007B2E50
        add esp, 0x10
    L_7b956f:
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x4]
        push edx
        push 0xb00a
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x10]
        add esp, 0xc
        test eax, eax
        jne L_7b95c7
        lea ecx, [esp + 0x4]
        push 0xb00a
        push ecx
        call ext_007B3CB0
        push 0xb5d2c0
        mov esi, eax
        call ext_007B2480
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], 0x1e
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        call ext_007B2E50
        add esp, 0x14
        jmp L_7b95d2
    L_7b95c7:
        push eax
        call ext_007B3CF0
        add esp, 0x4
        mov esi, eax
    L_7b95d2:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, 0x3
        ja L_7b95ff
        jmp dword ptr [4*eax + 0x7b9604]
    L_7b95e2:
        mov word ptr [esi], 0x1
        pop esi
        pop ecx
        ret
    L_7b95ea:
        mov word ptr [esi], 0x2
        pop esi
        pop ecx
        ret
    L_7b95f2:
        mov word ptr [esi], 0x5
        pop esi
        pop ecx
        ret
    L_7b95fa:
        mov word ptr [esi], 0x6
    L_7b95ff:
        pop esi
        pop ecx
        ret
    }
}

// [0x007BAE90] sub_007BAE90 (304 bytes)
extern "C" int mem_00999A90;
extern "C" int mem_00999A88;
extern "C" int mem_00999A80;
extern "C" int mem_00999A78;
extern "C" int mem_00999A70;
extern "C" int mem_00999A68;
extern "C" int mem_00999A60;
extern "C" int mem_00993828;
extern "C" int mem_00999A58;

extern "C" __declspec(naked) int __cdecl fn_007BAE90(double x, int seed) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999A90]
        fnstsw ax
        test ah, 0x1
        jne L_7BAEA7
        mov eax, 0x7fff
        ret
L_7BAEA7:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999A88]
        fnstsw ax
        test ah, 0x41
        je L_7BAEBE
        mov eax, 0xffff
        ret
L_7BAEBE:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999A80]
        fnstsw ax
        test ah, 0x41
        jne L_7BAF33
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        jne L_7BAEF7
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_00999A70]
        fmul qword ptr [mem_00999A68]
        call ext_00872828
        ret
L_7BAEF7:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_00999A70]
        fmul qword ptr [mem_00999A68]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
        call ext_00872828
        ret
L_7BAF33:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999A58]
        fnstsw ax
        test ah, 0x1
        je L_7BAFBA
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        jne L_7BAF75
        fld qword ptr [esp + 0x4]
        fchs
        fldln2
        fxch st(1)
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_00999A70]
        fmul qword ptr [mem_00999A68]
        call ext_00872828
        or eax, 0xffff8000
        ret
L_7BAF75:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fld qword ptr [esp + 0x4]
        fchs
        fldln2
        fxch st(1)
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_00999A70]
        fmul qword ptr [mem_00999A68]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
        call ext_00872828
        or eax, 0xffff8000
        ret
L_7BAFBA:
        xor eax, eax
        ret
    }
}

// [0x007B8090] sub_007B8090 (304 bytes)
extern "C" int mem_0099971A;
extern "C" int mem_0099971C;
extern "C" int mem_0099971E;
extern "C" int mem_00999720;
extern "C" int mem_00999722;
extern "C" void ext_007B7790(unsigned short);
extern "C" void ext_007B7890();
extern "C" void ext_007B78D0();
extern "C" __declspec(naked) void __fastcall fn_007B8090(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        push eax
        call ext_007B7890
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_b6_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_b6_7B8090:
        mov cx, word ptr [esi + 0x4]
        push ecx
        call ext_007B7790
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_d9_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_d9_7B8090:
        mov ax, word ptr [mem_0099971A]
        mov dx, ax
        and dx, word ptr [esi + 0x4]
        cmp dx, ax
        jne L_10d_7B8090
        mov eax, dword ptr [esi + 0x8]
        push eax
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_10d_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_10d_7B8090:
        mov eax, dword ptr [mem_0099971C]
        mov ecx, eax
        and cx, word ptr [esi + 0x4]
        cmp cx, ax
        jne L_13b_7B8090
        mov edx, dword ptr [esi + 0xc]
        push edx
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_13b_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_13b_7B8090:
        mov ax, word ptr [mem_0099971E]
        mov cx, ax
        and cx, word ptr [esi + 0x4]
        cmp cx, ax
        jne L_16b_7B8090
        mov edx, dword ptr [esi + 0x10]
        push edx
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_16b_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_16b_7B8090:
        mov eax, dword ptr [mem_00999720]
        mov ecx, eax
        and cx, word ptr [esi + 0x4]
        cmp cx, ax
        jne L_199_7B8090
        mov edx, dword ptr [esi + 0x14]
        push edx
        call ext_007B78D0
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_199_7B8090
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_end_7B8090
L_199_7B8090:
        mov ax, word ptr [mem_00999722]
        mov cx, ax
        and cx, word ptr [esi + 0x4]
        cmp cx, ax
        jne L_end_7B8090
        mov edx, dword ptr [esi + 0x18]
        push edx
        call ext_007B78D0
        add esp, 0x4
L_end_7B8090:
        pop esi
        ret
    }
}

// [0x007BBC80] sub_007BBC80 (310 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007BC450();
extern "C" void ext_007BC550();

extern "C" __declspec(naked) int __cdecl fn_007BBC80(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor eax, eax
        push edi
        mov edi, dword ptr [esi + 0x1cc]
        mov dword ptr [esi + 0x210], 0x6d80a0
        mov ax, word ptr [esi + 0x46]
        mov ecx, eax
        sub ecx, 0x804c
        je L_7BBD71
        dec ecx
        je L_7BBCC8
        push 0xab1fcc
        push eax
        mov eax, dword ptr [esi]
        push 0xab1f84
        push eax
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        ret
L_7BBCC8:
        push esi
        call ext_007BC550
        add esp, 0x4
        test eax, eax
        je L_7BBD7E
        cmp word ptr [esi + 0x44], 0x8775
        jne L_7BBD2B
        mov dword ptr [esi + 0x1a0], 0x7bbf10
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_7BBD1C
        dec eax
        je L_7BBD0D
        sub eax, 0x2
        jne L_7BBDAE
        mov dword ptr [edi + 0x14], 0x7bc2d0
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD0D:
        mov dword ptr [edi + 0x14], 0x7bc210
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD1C:
        mov dword ptr [edi + 0x14], 0x7bc1d0
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD2B:
        mov dword ptr [esi + 0x1a0], 0x7bbfd0
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_7BBD62
        dec eax
        je L_7BBD53
        sub eax, 0x2
        jne L_7BBDAE
        mov dword ptr [edi + 0x14], 0x7bc400
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD53:
        mov dword ptr [edi + 0x14], 0x7bc360
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD62:
        mov dword ptr [edi + 0x14], 0x7bc320
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBD71:
        push esi
        call ext_007BC450
        add esp, 0x4
        test eax, eax
        jne L_7BBD83
L_7BBD7E:
        pop edi
        xor eax, eax
        pop esi
        ret
L_7BBD83:
        mov dword ptr [esi + 0x1a0], 0x7bbdc0
        mov eax, dword ptr [edi]
        test eax, eax
        je L_7BBDA7
        cmp eax, 0x3
        jne L_7BBDAE
        mov dword ptr [edi + 0x14], 0x7bc160
        pop edi
        mov eax, 0x1
        pop esi
        ret
L_7BBDA7:
        mov dword ptr [edi + 0x14], 0x7bc120
L_7BBDAE:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007BAFC0] sub_007BAFC0 (320 bytes)
extern "C" int mem_00999AD8;
extern "C" int mem_00999AD0;
extern "C" int mem_00999AC8;
extern "C" int mem_00999AC0;
extern "C" int mem_00999AB8;
extern "C" int mem_00999AB0;
extern "C" int mem_00999AA8;
extern "C" int mem_00999AA0;
extern "C" int mem_00999A98;
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;
extern "C" int mem_00999A68;
extern "C" __declspec(naked) void __cdecl fn_007BAFC0(void* src, void* dst) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fmul qword ptr [mem_00999AD8]
        fld dword ptr [eax + 0x4]
        fmul qword ptr [mem_00999AD0]
        fld dword ptr [eax + 0x8]
        fmul qword ptr [mem_00999AC8]
        faddp st(1), st
        fsubp st(1), st
        fld dword ptr [eax + 0x8]
        fmul qword ptr [mem_00999AC0]
        fld dword ptr [eax + 0x4]
        fmul qword ptr [mem_00999AB8]
        faddp st(1), st
        fld dword ptr [eax]
        fmul qword ptr [mem_00999AB0]
        fsubp st(1), st
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        fld dword ptr [eax + 0x8]
        fmul qword ptr [mem_00999AA8]
        fld dword ptr [eax + 0x4]
        fmul qword ptr [mem_00999AA0]
        fsubp st(1), st
        fld dword ptr [eax]
        fmul qword ptr [mem_00999A98]
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        je L_c1
        fstp st(0)
        xor eax, eax
        jmp L_e1
L_c1:
        fcom qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x1
        jne L_s1
        fstp st(0)
        mov eax, 0xff
        jmp L_e1
L_s1:
        fsqrt
        fmul qword ptr [mem_00999A68]
        call ext_00872828
L_e1:
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        fcomp qword ptr [mem_0092A278]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov byte ptr [esi], al
        fnstsw ax
        test ah, 0x41
        je L_c2
        xor eax, eax
        jmp L_e2
L_c2:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x1
        jne L_s2
        mov eax, 0xff
        jmp L_e2
L_s2:
        fld qword ptr [esp + 0x4]
        fsqrt
        fmul qword ptr [mem_00999A68]
        call ext_00872828
L_e2:
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [mem_0092A278]
        mov byte ptr [esi + 0x1], al
        fnstsw ax
        test ah, 0x41
        je L_c3
        xor eax, eax
        mov byte ptr [esi + 0x2], al
        pop esi
        add esp, 0x10
        ret
L_c3:
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x1
        jne L_s3
        mov eax, 0xff
        mov byte ptr [esi + 0x2], al
        pop esi
        add esp, 0x10
        ret
L_s3:
        fld qword ptr [esp + 0xc]
        fsqrt
        fmul qword ptr [mem_00999A68]
        call ext_00872828
        mov byte ptr [esi + 0x2], al
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x007BA550] sub_007BA550 (320 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_007AF5E0();
extern "C" void ext_007AF620();
extern "C" int mem_00993838;
extern "C" int mem_009999EC;
extern "C" int mem_009518D8;
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __cdecl fn_007BA550(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0xc
        mov ax, word ptr [ebp + 0x10]
        mov cx, word ptr [ebp + 0xc]
        push ebx
        mov ebx, dword ptr [ebp + 0x14]
        push esi
        mov esi, dword ptr [ebp + 0x18]
        push edi
        mov word ptr [ebx], ax
        lea edx, [esi*8]
        mov word ptr [ebx + 2], cx
        push edx
        mov dword ptr [ebx + 4], esi
        call ext_0079AF40
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        test esi, esi
        jbe L_7BA65F
        mov ebx, dword ptr [ebp + 0x1c]
        mov edi, eax
        mov dword ptr [esp + 0x10], esi
L_7BA599:
        fld dword ptr [ebx]
        fcom dword ptr [mem_00993838]
        mov dword ptr [esp + 0xc], 1
        fnstsw ax
        test ah, 1
        je L_7BA5F2
        cmp dword ptr [ebp + 0xc], 5
        jne L_7BA5E8
        mov eax, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ebp + 8]
        sub esp, 8
        fstp qword ptr [esp]
        push eax
        push esi
        call ext_007AF5E0
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [esi]
        add esp, 8
        push ecx
        push 0xab179c
        push edx
        call ext_007AF620
        fld dword ptr [mem_00993838]
        add esp, 0x14
        jmp L_7BA5F2
L_7BA5E8:
        fchs
        mov dword ptr [esp + 0xc], 0xffffffff
L_7BA5F2:
        fcom dword ptr [mem_00993838]
        mov esi, 1
        fnstsw ax
        test ah, 0x41
        jne L_7BA62F
        fcom dword ptr [mem_009999EC]
        fnstsw ax
        test ah, 1
        je L_7BA62F
L_7BA611:
        cmp esi, 0x10000000
        jae L_7BA62F
        fmul dword ptr [mem_009518D8]
        shl esi, 3
        fcom dword ptr [mem_009999EC]
        fnstsw ax
        test ah, 1
        jne L_7BA611
L_7BA62F:
        fadd qword ptr [mem_00993828]
        fimul dword ptr [esp + 0xc]
        call ext_00872828
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edi + 4], esi
        add ebx, 4
        add edi, 8
        dec eax
        mov dword ptr [esp + 0x10], eax
        jne L_7BA599
        mov eax, dword ptr [esp + 0x14]
        mov ebx, dword ptr [ebp + 0x14]
L_7BA65F:
        push eax
        mov eax, dword ptr [ebp + 8]
        push ebx
        push eax
        call ext_007BAA40
        mov ecx, dword ptr [esp + 0x20]
        mov esi, eax
        push ecx
        call ext_0079AF50
        add esp, 0x10
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007B27D0] sub_007B27D0 (320 bytes)
extern "C" void ext_007AA510();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2DF0();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B7110();
extern "C" bool mem_00B61218;
extern "C" bool mem_00B61219;
extern "C" __declspec(naked) void __cdecl fn_007B27D0(void) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        test esi, esi
        je L_27ED_007B27D0
        test ebx, ebx
        je L_27ED_007B27D0
        mov eax, dword ptr [esp + 0x24]
        test eax, eax
        jne L_2804_007B27D0
    L_27ED_007B27D0:
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_28FF_007B27D0
    L_2804_007B27D0:
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x10]
        push eax
        push 0xb000
        push ecx
        call ext_007B2D80
        mov al, byte ptr [mem_00B61218]
        add esp, 0xc
        test al, al
        je L_282F_007B27D0
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_28FF_007B27D0
    L_282F_007B27D0:
        mov ebp, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x18]
        push eax
        push ebp
        push ecx
        mov dword ptr [edx], 0
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        test eax, eax
        je L_28FF_007B27D0
    L_285C_007B27D0:
        mov eax, dword ptr [eax + 0x14]
        lea edx, [esp + 0x1c]
        push edx
        push 0xb010
        push eax
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x28]
        add esp, 0xc
        test eax, eax
        je L_28C4_007B27D0
        push eax
        call ext_007B3CF0
        mov edi, dword ptr [esp + 0x20]
        add esp, 0x4
        mov eax, ebx
        mov ecx, dword ptr [edi + 0xc]
        mov esi, dword ptr [ecx]
    L_288E_007B27D0:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_28B2_007B27D0
        test cl, cl
        je L_28AE_007B27D0
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_28B2_007B27D0
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_288E_007B27D0
    L_28AE_007B27D0:
        xor eax, eax
        jmp L_28B7_007B27D0
    L_28B2_007B27D0:
        sbb eax, eax
        sbb eax, -1
    L_28B7_007B27D0:
        test eax, eax
        je L_28EC_007B27D0
        push edi
        call ext_007B7110
        add esp, 0x4
    L_28C4_007B27D0:
        mov ecx, dword ptr [esp + 0x18]
        lea eax, [esp + 0x18]
        push eax
        push ebp
        mov edx, dword ptr [ecx + 0x10]
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        test eax, eax
        jne L_285C_007B27D0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    L_28EC_007B27D0:
        mov ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x18]
        push edi
        mov dword ptr [ecx], eax
        call ext_007B7110
        add esp, 0x4
    L_28FF_007B27D0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007B9070] sub_007B9070 (320 bytes)
extern "C" void ext_007B8BA0();
extern "C" void ext_007B2D80();
extern "C" void ext_007B92D0();
extern "C" void ext_007B8B60();
extern "C" void ext_007B8C70();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B7110();
extern "C" void ext_007B91B0();
extern "C" int mem_00999858;
extern "C" int mem_00999859;

extern "C" __declspec(naked) void __cdecl fn_007B9070(void* a1) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        xor edi, edi
        call ext_007B8BA0
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x8]
        push eax
        push 0xb000
        mov edx, dword ptr [ecx]
        push edx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x14]
        add esp, 0xc
        test eax, eax
        je L_END_7B9070
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        je L_7B90F0
    L_7B90A8:
        mov eax, dword ptr [esi]
        cmp eax, 0xb001
        jne L_7B90BE
        push -1
        push esi
        call ext_007B92D0
        add esp, 0x8
        jmp L_7B90E5
    L_7B90BE:
        push eax
        call ext_007B8B60
        movsx cx, byte ptr [mem_00999858]
        add esp, 0x4
        cmp ax, cx
        jne L_7B90E5
        push edi
        push esi
        call ext_007B92D0
        push esi
        call ext_007B8C70
        add esp, 0xc
        inc edi
    L_7B90E5:
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        jne L_7B90A8
        mov eax, dword ptr [esp + 0x8]
    L_7B90F0:
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        je L_END_7B9070
    L_7B90FB:
        mov edx, dword ptr [esi]
        push edx
        call ext_007B8B60
        movsx cx, byte ptr [mem_00999859]
        add esp, 0x4
        cmp ax, cx
        je L_7B919D
        lea edx, [esp + 0x14]
        push edx
        push 0xb010
        push esi
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        test eax, eax
        je L_7B919D
        push eax
        call ext_007B3CF0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je L_7B919D
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp + 0xc]
        push eax
        push 0x80f0
        push ecx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        jne L_7B9168
        mov word ptr [edi + 0x8], 0xffff
        jmp L_7B919D
    L_7B9168:
        push eax
        call ext_007B3CF0
        add esp, 0x4
        test eax, eax
        je L_7B919D
        mov edx, dword ptr [eax]
        push edx
        call ext_007B91B0
        add esp, 0x4
        test eax, eax
        je L_7B9189
        movsx eax, word ptr [eax]
        jmp L_7B918C
    L_7B9189:
        or eax, -1
    L_7B918C:
        mov word ptr [edi + 0x8], ax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_007B7110
        add esp, 0x4
    L_7B919D:
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        jne L_7B90FB
    L_END_7B9070:
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}

// [0x007BBDC0] sub_007BBDC0 (329 bytes)
extern "C" void ext_0079AFE0();
extern "C" void ext_0079B140();
extern "C" int mem_00AB1FEC;

extern "C" __declspec(naked) void __fastcall fn_007BBDC0(void* self) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        cdq
        mov ecx, dword ptr [ebx + 0x1cc]
        push esi
        push edi
        mov dword ptr [esp + 0x18], ecx
        idiv dword ptr [ecx + 0x8]
        mov edi, eax
        mov eax, dword ptr [ecx]
        cmp eax, 1
        mov dword ptr [esp + 0x10], edi
        jne L_7BBDF4
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x28], eax
        jmp L_7BBDFB
L_7BBDF4:
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [esp + 0x28], ecx
L_7BBDFB:
        mov eax, dword ptr [esp + 0x28]
        lea edx, [edi + edi]
        push edx
        push 0
        push eax
        call ext_0079AFE0
        mov esi, dword ptr [ebx + 0x1e0]
        mov ebx, dword ptr [ebx + 0x1e4]
        add esp, 0xc
        mov ecx, 8
L_7BBE1F:
        xor ebp, ebp
        test edi, edi
        jle L_7BBE9A
L_7BBE25:
        test ebx, ebx
        jle L_7BBE9A
        mov al, byte ptr [esi]
        cmp al, 0x80
        jb L_7BBE5F
        movzx dx, byte ptr [esi + 1]
        and eax, 0xff
        sub ebx, 2
        sub eax, 0x7e
        inc esi
        shl edx, cl
        inc esi
        mov edi, eax
        dec eax
        test edi, edi
        je L_7BBE92
        mov edi, dword ptr [esp + 0x28]
        inc eax
        lea edi, [edi + 2*ebp]
        add ebp, eax
L_7BBE54:
        or word ptr [edi], dx
        add edi, 2
        dec eax
        jne L_7BBE54
        jmp L_7BBE92
L_7BBE5F:
        and eax, 0xff
        inc esi
        dec ebx
        je L_7BBE96
        mov edx, dword ptr [esp + 0x28]
        lea edx, [edx + 2*ebp]
        jmp L_7BBE75
L_7BBE71:
        mov eax, dword ptr [esp + 0x14]
L_7BBE75:
        mov edi, eax
        dec eax
        test edi, edi
        mov dword ptr [esp + 0x14], eax
        je L_7BBE92
        movzx ax, byte ptr [esi]
        shl eax, cl
        add edx, 2
        or word ptr [edx - 2], ax
        inc esi
        inc ebp
        dec ebx
        jne L_7BBE71
L_7BBE92:
        mov edi, dword ptr [esp + 0x10]
L_7BBE96:
        cmp ebp, edi
        jl L_7BBE25
L_7BBE9A:
        cmp ebp, edi
        jne L_7BBED5
        sub ecx, 8
        jns L_7BBE1F
L_7BBEA7:
        mov eax, dword ptr [esp + 0x24]
        push edi
        push eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        call dword ptr [eax + 0x14]
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0xc
        mov dword ptr [eax + 0x1e0], esi
        pop edi
        pop esi
        mov dword ptr [eax + 0x1e4], ebx
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xc
        ret
L_7BBED5:
        sub edi, ebp
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [edi + 0x164]
        mov edx, dword ptr [edi]
        push ecx
        push offset mem_00AB1FEC
        push edx
        call ext_0079B140
        add esp, 0x10
        mov dword ptr [edi + 0x1e0], esi
        mov dword ptr [edi + 0x1e4], ebx
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x007BBFD0] sub_007BBFD0 (335 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BBFD0(void) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        cdq
        mov ecx, dword ptr [ebx + 0x1cc]
        push esi
        push edi
        mov dword ptr [esp + 0x18], ecx
        idiv dword ptr [ecx + 0x8]
        mov edi, eax
        mov eax, dword ptr [ecx]
        cmp eax, 0x2
        mov dword ptr [esp + 0x10], edi
        jne L_7BBFF4
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x28], eax
        jmp L_7BBFFB
L_7BBFF4:
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [esp + 0x28], ecx
L_7BBFFB:
        mov eax, dword ptr [esp + 0x28]
        lea edx, [edi*4]
        push edx
        push 0x0
        push eax
        call ext_0079AFE0
        mov esi, dword ptr [ebx + 0x1e0]
        mov ebx, dword ptr [ebx + 0x1e4]
        add esp, 0xc
        mov ecx, 0x18
L_7BC033:
        xor ebp, ebp
L_7BC035:
        test edi, edi
        jle L_7BC0B0
L_7BC039:
        test ebx, ebx
        jle L_7BC0B0
        mov al, byte ptr [esi]
        cmp al, 0x80
        jb L_7BC072
        and eax, 0xff
        xor edx, edx
        mov dl, byte ptr [esi + 0x1]
        sub eax, 0x7e
        inc esi
        sub ebx, 0x2
        shl edx, cl
        inc esi
        mov edi, eax
        dec eax
        test edi, edi
        je L_7BC0A8
        mov edi, dword ptr [esp + 0x28]
        inc eax
        lea edi, [edi + 4*ebp]
        add ebp, eax
L_7BC068:
        or dword ptr [edi], edx
        add edi, 0x4
        dec eax
        jne L_7BC068
        jmp L_7BC0A8
L_7BC072:
        and eax, 0xff
        inc esi
        dec ebx
        je L_7BC0AC
        mov edx, dword ptr [esp + 0x28]
        lea edx, [edx + 4*ebp]
        jmp L_7BC088
L_7BC084:
        mov eax, dword ptr [esp + 0x14]
L_7BC088:
        mov edi, eax
        dec eax
        test edi, edi
        mov dword ptr [esp + 0x14], eax
        je L_7BC0A8
        mov edi, dword ptr [edx]
        xor eax, eax
        mov al, byte ptr [esi]
        add edx, 0x4
        shl eax, cl
        or edi, eax
        inc esi
        mov dword ptr [edx - 0x4], edi
        inc ebp
        dec ebx
        jne L_7BC084
L_7BC0A8:
        mov edi, dword ptr [esp + 0x10]
L_7BC0AC:
        cmp ebp, edi
        jl L_7BC039
L_7BC0B0:
        cmp ebp, edi
        jne L_7BC0EB
        sub ecx, 0x8
        jns L_7BC033
        mov eax, dword ptr [esp + 0x24]
        push edi
        push eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        call dword ptr [eax + 0x14]
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0xc
        mov dword ptr [eax + 0x1e0], esi
        pop edi
        pop esi
        mov dword ptr [eax + 0x1e4], ebx
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0xc
        ret
L_7BC0EB:
        sub edi, ebp
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [edi + 0x164]
        mov edx, dword ptr [edi]
        push ecx
        push 0xab2064
        push edx
        call ext_0079B140
        add esp, 0x10
        mov dword ptr [edi + 0x1e0], esi
        mov dword ptr [edi + 0x1e4], ebx
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x007BFA70] sub_007BFA70 (328 bytes)
extern "C" __declspec(naked) void __cdecl fn_007BFA70(void* a, void* b, int c) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x1cc]
        mov ecx, dword ptr [ecx + 4]
        cmp esi, ecx
        jle Lend
        sub esi, ecx
        cmp ecx, 3
        jne L4
        mov eax, dword ptr [esp + 0x10]
        movsx ecx, byte ptr [eax + 1]
        movsx edx, byte ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        movsx ecx, byte ptr [eax + 2]
        mov dword ptr [esp + 0xc], ecx
        add eax, 4
    L3loop:
        movsx ecx, byte ptr [eax - 1]
        mov bl, cl
        sub esi, 3
        sub bl, dl
        mov edx, ecx
        movsx ecx, byte ptr [eax]
        mov byte ptr [eax - 1], bl
        mov bl, cl
        sub bl, byte ptr [esp + 0x10]
        mov dword ptr [esp + 0x10], ecx
        movsx ecx, byte ptr [eax + 1]
        mov byte ptr [eax], bl
        mov bl, cl
        sub bl, byte ptr [esp + 0xc]
        add eax, 3
        test esi, esi
        mov byte ptr [eax - 2], bl
        mov dword ptr [esp + 0xc], ecx
        jg L3loop
        pop esi
        pop ebx
        ret
    L4:
        cmp ecx, 4
        jne Lgen
        mov eax, dword ptr [esp + 0x10]
        movsx ecx, byte ptr [eax + 1]
        mov dword ptr [esp + 0x10], ecx
        movsx ecx, byte ptr [eax + 2]
        movsx edx, byte ptr [eax]
        mov dword ptr [esp + 0xc], ecx
        movsx ecx, byte ptr [eax + 3]
        mov dword ptr [esp + 0x14], ecx
        add eax, 5
    L4loop:
        movsx ecx, byte ptr [eax - 1]
        mov bl, cl
        sub esi, 4
        sub bl, dl
        mov edx, ecx
        movsx ecx, byte ptr [eax]
        mov byte ptr [eax - 1], bl
        mov bl, cl
        sub bl, byte ptr [esp + 0x10]
        mov dword ptr [esp + 0x10], ecx
        movsx ecx, byte ptr [eax + 1]
        mov byte ptr [eax], bl
        mov bl, cl
        sub bl, byte ptr [esp + 0xc]
        mov dword ptr [esp + 0xc], ecx
        movsx ecx, byte ptr [eax + 2]
        mov byte ptr [eax + 1], bl
        mov bl, cl
        sub bl, byte ptr [esp + 0x14]
        add eax, 4
        test esi, esi
        mov byte ptr [eax - 2], bl
        mov dword ptr [esp + 0x14], ecx
        jg L4loop
        pop esi
        pop ebx
        ret
    Lgen:
        mov edx, dword ptr [esp + 0x10]
        push edi
        lea eax, [edx + esi - 1]
    Lg:
        cmp ecx, 4
        ja Lbig
        jmp dword ptr [4*ecx + 0x7bfbb8]
    Lbig:
        lea edi, [ecx - 4]
        test edi, edi
        jle Lrest
    Lb2:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        sub bl, dl
        mov byte ptr [eax + ecx], bl
        dec eax
        dec edi
        jne Lb2
    Lrest:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        sub bl, dl
        mov byte ptr [eax + ecx], bl
        dec eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        sub bl, dl
        mov byte ptr [eax + ecx], bl
        dec eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        sub bl, dl
        mov byte ptr [eax + ecx], bl
        dec eax
        mov dl, byte ptr [eax]
        mov bl, byte ptr [eax + ecx]
        sub bl, dl
        mov byte ptr [eax + ecx], bl
        dec eax
        sub esi, ecx
        test esi, esi
        jg Lg
        pop edi
    Lend:
        pop esi
        pop ebx
        ret
    }
}

// [0x007B17C0] sub_007B17C0 (352 bytes)
extern "C" void ext_007AF240();
extern "C" void ext_007B04C0();
extern "C" void ext_00798FF0();
extern "C" void ext_0079AF50();

extern "C" __declspec(naked) void __fastcall fn_007B17C0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        push 0x1
        push edi
        mov ecx, dword ptr [edi + 0xd0]
        mov eax, dword ptr [edi + 0xd4]
        mov edx, dword ptr [ecx]
        mov ebx, dword ptr [eax]
        mov dword ptr [esp + 0x18], edx
        call ext_007AF240
        mov ecx, eax
        add esp, 0x8
        cmp ecx, 0x2000
        jle L_7B17C0_a
        mov esi, ecx
        mov dword ptr [esp + 0x24], 0x1
        jmp L_7B17C0_b
L_7B17C0_a:
        mov eax, 0x2000
        cdq
        idiv ecx
        mov esi, eax
        mov dword ptr [esp + 0x24], eax
        imul esi, ecx
L_7B17C0_b:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [edi + 0x50]
        cmp eax, ecx
        jae L_7B17C0_end
        lea eax, [esi + ebx - 0x1]
        xor edx, edx
        div esi
        push 0xab1594
        mov dword ptr [esp + 0x1c], eax
        lea ebp, [4*eax]
        push ebp
        push edi
        call ext_007B04C0
        push 0xab1570
        push ebp
        push edi
        mov dword ptr [esp + 0x34], eax
        call ext_007B04C0
        mov edx, dword ptr [esp + 0x34]
        add esp, 0x18
        test edx, edx
        mov ebp, eax
        je L_7B17C0_fail
        test ebp, ebp
        je L_7B17C0_nullarr
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        jbe L_7B17C0_fill_done
        sub edx, ebp
        mov dword ptr [esp + 0x14], ecx
L_7B17C0_loop:
        cmp esi, ebx
        jle L_7B17C0_skip
        mov esi, ebx
L_7B17C0_skip:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edx + eax], esi
        mov dword ptr [eax], ecx
        add ecx, esi
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [esp + 0x14]
        sub ebx, esi
        add eax, 0x4
        dec ecx
        mov dword ptr [esp + 0x14], ecx
        jne L_7B17C0_loop
        mov ecx, dword ptr [esp + 0x18]
L_7B17C0_fill_done:
        mov dword ptr [edi + 0xcc], ecx
        mov dword ptr [edi + 0xc8], ecx
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push 0x116
        push edi
        call ext_00798FF0
        mov edx, dword ptr [edi + 0xd4]
        push edx
        call ext_0079AF50
        mov eax, dword ptr [edi + 0xd0]
        push eax
        call ext_0079AF50
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x14
        mov dword ptr [edi + 0xd4], ecx
        mov dword ptr [edi + 0xd0], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_7B17C0_nullarr:
        push edx
        call ext_0079AF50
        add esp, 0x4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_7B17C0_fail:
        test ebp, ebp
        je L_7B17C0_end
        push ebp
        call ext_0079AF50
        add esp, 0x4
L_7B17C0_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x007BB1D0] sub_007BB1D0 (352 bytes)
extern "C" void ext_007BB330();
extern "C" int mem_00999B08;
extern "C" int mem_00999B00;

extern "C" __declspec(naked) void __cdecl fn_007BB1D0(int a1, int a2, double x, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push ecx
        fld qword ptr [ebp + 0x10]
        fcomp qword ptr [mem_00999B08]
        push ebx
        push esi
        push edi
        fnstsw ax
        test ah, 0x1
        je L_7BB209_1BB1D0
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0xc]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push eax
        call ext_007BB330
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_7BB209_1BB1D0:
        mov edi, dword ptr [ebp + 0x18]
        mov ebx, dword ptr [mem_009252B4]
        test edi, edi
        jne L_7BB227_1BB1D0
        fld qword ptr [ebp + 0x10]
        fsub qword ptr [mem_00999B08]
        fmul qword ptr [mem_00999B00]
        jmp L_7BB24E_1BB1D0
L_7BB227_1BB1D0:
        call ebx
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fld qword ptr [ebp + 0x10]
        fsub qword ptr [mem_00999B08]
        fmul qword ptr [mem_00999B00]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
L_7BB24E_1BB1D0:
        call ext_00872828
        mov esi, eax
        cmp esi, 0xa3
        jl L_7BB27C_1BB1D0
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push edx
        push eax
        push ecx
        call ext_007BB330
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_7BB27C_1BB1D0:
        fld dword ptr [8*esi + 0xab1a48]
        fcomp qword ptr [ebp + 0x8]
        fnstsw ax
        test ah, 0x41
        jne L_7BB2AC_1BB1D0
        mov edx, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        push edx
        mov edx, dword ptr [ebp + 0x8]
        push eax
        push ecx
        push edx
        call ext_007BB330
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_7BB2AC_1BB1D0:
        test edi, edi
        jne L_7BB2C2_1BB1D0
        fld dword ptr [8*esi + 0xab1a48]
        fsubr qword ptr [ebp + 0x8]
        fmul qword ptr [mem_00999B00]
        jmp L_7BB2EA_1BB1D0
L_7BB2C2_1BB1D0:
        call ebx
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fld dword ptr [8*esi + 0xab1a48]
        fsubr qword ptr [ebp + 0x8]
        fmul qword ptr [mem_00999B00]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
L_7BB2EA_1BB1D0:
        call ext_00872828
        mov ecx, eax
        movsx eax, word ptr [8*esi + 0xab1a4c]
        cmp ecx, eax
        jl L_7BB31C_1BB1D0
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push edx
        push eax
        push ecx
        call ext_007BB330
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_7BB31C_1BB1D0:
        movsx eax, word ptr [8*esi + 0xab1a4e]
        pop edi
        pop esi
        add eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BD1A0] sub_007BD1A0 (357 bytes)
extern "C" int mem_00999B78;
extern "C" __declspec(naked) void __cdecl fn_007BD1A0(int* self, short* src, int count) {
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [ecx + 0x4]
        mov     esi, dword ptr [ecx + 0xc]
        test    eax, eax
        jne     L_7bd217
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jle     L_7bd301
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [edx + 0x2]
        lea     edx, [ecx + 0x1]
    L_7bd1ca:
        movsx   ecx, word ptr [eax + 0x2]
        add     esi, 0x4
        add     eax, 0x6
        lea     edi, [ecx + 4*ecx]
        lea     ecx, [ecx + 8*edi]
        lea     ecx, [ecx + 4*ecx]
        shl     ecx, 1
        mov     edi, ecx
        movsx   ecx, word ptr [eax - 0x6]
        shr     edi, 0x8
        lea     ebx, [ecx + 4*ecx]
        and     edi, 0x7f80
        lea     ecx, [ecx + 8*ebx]
        lea     ecx, [ecx + 4*ecx]
        shl     ecx, 1
        and     ecx, 0x7f8000
        or      edi, ecx
        movsx   ecx, word ptr [eax - 0x8]
        shr     edi, 0x7
        shl     ecx, 0x10
        or      edi, ecx
        dec     edx
        mov     dword ptr [esi - 0x4], edi
        jne     L_7bd1ca
        pop     edi
        pop     esi
        pop     ebx
        ret
    L_7bd217:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, eax
        dec     eax
        test    edx, edx
        jle     L_7bd301
        mov     edx, dword ptr [esp + 0x14]
        push    ebp
        lea     ebp, [eax + 0x1]
        lea     ebx, [edx + 0x4]
        jmp     short L_7bd237
    L_7bd233:
        mov     ecx, dword ptr [esp + 0x14]
    L_7bd237:
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jne     short L_7bd252
        movsx   eax, word ptr [ebx - 0x2]
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        fmul    qword ptr [mem_00999B78]
        jmp     short L_7bd280
    L_7bd252:
        call    dword ptr [mem_009252B4]
        movsx   ecx, word ptr [ebx - 0x2]
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        fmul    qword ptr [mem_00999A60]
        fild    dword ptr [esp + 0x1c]
        fmul    qword ptr [mem_00999B78]
        faddp   st(1), st
        fsub    qword ptr [mem_00993828]
    L_7bd280:
        call    ext_00872828
        mov     edx, dword ptr [esp + 0x14]
        mov     edi, eax
        mov     eax, dword ptr [edx + 0x4]
        test    eax, eax
        jne     short L_7bd2a5
        movsx   eax, word ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        fmul    qword ptr [mem_00999B78]
        jmp     short L_7bd2d2
    L_7bd2a5:
        call    dword ptr [mem_009252B4]
        movsx   ecx, word ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        fmul    qword ptr [mem_00999A60]
        fild    dword ptr [esp + 0x1c]
        fmul    qword ptr [mem_00999B78]
        faddp   st(1), st
        fsub    qword ptr [mem_00993828]
    L_7bd2d2:
        call    ext_00872828
        movsx   edx, word ptr [ebx - 0x4]
        shl     edx, 0x8
        and     edi, 0xff
        and     eax, 0xff
        or      edx, edi
        add     esi, 0x4
        shl     edx, 0x8
        or      edx, eax
        add     ebx, 0x6
        mov     dword ptr [esi - 0x4], edx
        dec     ebp
        jne     L_7bd233
        pop     ebp
    L_7bd301:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}

// [0x007B0500] sub_007B0500 (384 bytes)
// [VA] 0x007B0500
extern "C" void ext_00798840();
extern "C" void ext_0079AF50();
extern "C" void ext_007B04C0();
extern "C" __declspec(naked) void __cdecl fn_007B0500(void* a, int b) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xd4]
        test eax, eax
        je L1
        push eax
        call ext_0079AF50
        add esp, 4
    L1:
        mov eax, dword ptr [esi + 0xcc]
        push ebp
        push edi
        push 0xab13e4
        shl eax, 2
        push eax
        push esi
        call ext_007B04C0
        add esp, 0xc
        cmp word ptr [esi + 0x44], 1
        mov dword ptr [esi + 0xd4], eax
        je L7
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x1f8]
        mov edi, ebx
        and edi, 0xffff
        push eax
        lea ecx, [edi + 2*edi]
        lea edx, [4*ecx + 0xe]
        mov dword ptr [esp + 0x18], edx
        call dword ptr [esi + 0x20c]
        add esp, 4
        mov ebp, eax
        test bx, bx
        jbe L2
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 4
    L3:
        xor edx, edx
        mov dx, word ptr [ecx - 2]
        mov eax, dword ptr [4*edx + 0x9993c8]
        imul eax, dword ptr [ecx]
        cmp eax, 4
        jbe L4
        add dword ptr [esp + 0x14], eax
    L4:
        add ecx, 0xc
        dec edi
        jne L3
    L2:
        mov edx, dword ptr [esp + 0x14]
        mov eax, ebp
        sub eax, edx
        cmp word ptr [esi + 0x72], 2
        jne L5
        xor ecx, ecx
        xor edx, edx
        mov cx, word ptr [esi + 0x4e]
        div ecx
    L5:
        mov edx, dword ptr [esi + 0xcc]
        xor ecx, ecx
        test edx, edx
        jbe L6
        xor edx, edx
    L8:
        mov edi, dword ptr [esi + 0xd4]
        inc ecx
        mov dword ptr [edi + 4*edx], eax
        mov edi, dword ptr [esi + 0xcc]
        mov edx, ecx
        and edx, 0xffff
        cmp edx, edi
        jb L8
    L6:
        mov edx, dword ptr [esi + 0xd4]
        add ecx, 0xffff
        and ecx, 0xffff
        shl ecx, 2
        mov ebx, dword ptr [ecx + edx]
        lea eax, [ecx + edx]
        mov edx, dword ptr [esi + 0xd0]
        mov ecx, dword ptr [edx + ecx]
        mov edx, ecx
        add edx, ebx
        pop ebx
        cmp edx, ebp
        jbe L9
        sub ebp, ecx
        mov dword ptr [eax], ebp
        jmp L9
    L7:
        push esi
        call ext_00798840
        mov ecx, dword ptr [esi + 0xcc]
        mov edi, eax
        mov eax, dword ptr [esi + 0x28]
        xor edx, edx
        div dword ptr [esi + 0xc8]
        add esp, 4
        xor edx, edx
        test ecx, ecx
        jbe L9
        mov ecx, eax
        imul ecx, edi
        xor eax, eax
    L10:
        mov edi, dword ptr [esi + 0xd4]
        inc edx
        mov dword ptr [edi + 4*eax], ecx
        mov edi, dword ptr [esi + 0xcc]
        mov eax, edx
        and eax, 0xffff
        cmp eax, edi
        jb L10
    L9:
        mov ecx, dword ptr [esi + 0x18]
        pop edi
        or ecx, 0x1000000
        pop ebp
        mov eax, ecx
        mov dword ptr [esi + 0x18], ecx
        test eax, 0x20000
        jne L11
        mov eax, dword ptr [esi + 0x28]
        mov dword ptr [esi + 0x50], eax
    L11:
        pop esi
        ret
    }
}

// [0x007B8E60] sub_007B8E60 (496 bytes)
extern "C" void ext_007B2BD0();
extern "C" void ext_007B2D80();
extern "C" void ext_007B2DF0();
extern "C" void ext_007B3CF0();
extern "C" void ext_007B9050();
extern "C" int mem_00AB16BC;
extern "C" int mem_00925208;
extern "C" int mem_00925218;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_007B8E60(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        sub esp, 0x14
        lea eax, [esp + 0x4]
        mov edx, dword ptr [ecx]
        push ebx
        push ebp
        push eax
        push 0xb000
        push edx
        xor ebx, ebx
        xor ebp, ebp
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        test eax, eax
        je L_9044_7B8E60
        mov eax, dword ptr [mem_00AB16BC]
        test eax, eax
        je L_9044_7B8E60
        mov eax, offset mem_00AB16BC
        push esi
        mov esi, eax
        push edi
        mov dword ptr [esp + 0x18], esi
L_8EA8_7B8E60:
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x28]
        push ecx
        push edx
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x34]
        add esp, 0xc
        test eax, eax
        je L_902E_7B8E60
L_8EC9_7B8E60:
        lea ecx, [esp + 0x10]
        push ecx
        push 0xb010
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        test eax, eax
        je L_9006_7B8E60
        mov eax, dword ptr [esp + 0x28]
        lea edx, [esp + 0x1c]
        push edx
        push 0xb030
        push eax
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x28]
        add esp, 0xc
        test eax, eax
        je L_9006_7B8E60
        push eax
        call ext_007B3CF0
        add esp, 0x4
        test eax, eax
        je L_9006_7B8E60
        mov cx, word ptr [eax]
        push ecx
        call ext_007B9050
        add esp, 0x4
        test eax, eax
        je L_9006_7B8E60
        mov ax, word ptr [eax + 0x10]
        cmp ax, 0xffff
        je L_9006_7B8E60
        push eax
        call ext_007B9050
        add esp, 0x4
        test eax, eax
        je short L_8F51_7B8E60
        mov ebx, dword ptr [eax + 0x8]
        mov ebp, dword ptr [eax + 0xc]
L_8F51_7B8E60:
        test ebx, ebx
        je L_9006_7B8E60
        test ebp, ebp
        je short L_8F95_7B8E60
        mov edi, ebp
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ebx
        mov edx, ecx
        or ecx, -1
        repne scasb
        not ecx
        dec ecx
        lea eax, [edx + ecx + 0x2]
        push eax
        call dword ptr [mem_00925208]
        push ebp
        mov esi, eax
        push ebx
        push 0xaae630
        push esi
        call dword ptr [mem_00925218]
        add esp, 0x14
        mov ebx, esi
L_8F95_7B8E60:
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x20]
        push ecx
        push 0x80f0
        push edx
        call ext_007B2D80
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0xc
        test eax, eax
        je short L_8FEA_7B8E60
        push eax
        call ext_007B3CF0
        mov edx, eax
        add esp, 0x4
        test edx, edx
        jne short L_8FC9_7B8E60
        test ebp, ebp
        je L_9006_7B8E60
        jmp short L_8FFC_7B8E60
L_8FC9_7B8E60:
        mov edi, ebx
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [edx]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp short L_8FF8_7B8E60
L_8FEA_7B8E60:
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        push ecx
        call ext_007B2BD0
        add esp, 0x8
L_8FF8_7B8E60:
        test ebp, ebp
        je short L_9006_7B8E60
L_8FFC_7B8E60:
        push ebx
        call dword ptr [mem_009251D8]
        add esp, 0x4
L_9006_7B8E60:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x28]
        lea edx, [esp + 0x28]
        mov eax, dword ptr [esi]
        push edx
        mov edx, dword ptr [ecx + 0x10]
        push eax
        push edx
        call ext_007B2DF0
        mov eax, dword ptr [esp + 0x34]
        add esp, 0xc
        test eax, eax
        jne L_8EC9_7B8E60
L_902E_7B8E60:
        mov ecx, dword ptr [esi + 0x4]
        add esi, 0x4
        test ecx, ecx
        mov dword ptr [esp + 0x18], esi
        mov eax, esi
        jne L_8EA8_7B8E60
        pop edi
        pop esi
L_9044_7B8E60:
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007BC6B0] sub_007BC6B0 (500 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007BC450();
extern "C" void ext_007BC550();

extern "C" __declspec(naked) int __cdecl fn_007BC6B0(void* self) {
    __asm {
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x01
        _emit 0x01
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x02
        _emit 0x03
        _emit 0x02
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor eax, eax
        push edi
        mov ax, word ptr [esi + 0x46]
        mov edi, dword ptr [esi + 0x1cc]
        mov ecx, eax
        sub ecx, 0x804c
        je L_bc84c
        dec ecx
        je L_bc7c1
        push 0xab1fcc
        push eax
        mov eax, dword ptr [esi]
        push 0xab1f84
        push eax
        call ext_0079B140
        add esp, 0x10
        mov eax, 0x1
        pop edi
        pop esi
        ret
    L_bc7c1:
        push esi
        call ext_007BC550
        add esp, 0x4
        test eax, eax
        je L_bc89c
        cmp word ptr [esi + 0x44], 0x8775
        jne L_bc815
        mov dword ptr [esi + 0x1a4], 0x7bcbc0
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_bc806
        dec eax
        je L_bc7f7
        dec eax
        je L_bc89c
        jmp L_bc86d
    L_bc7f7:
        mov dword ptr [edi + 0x14], 0x7bd030
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_bc806:
        mov dword ptr [edi + 0x14], 0x7bcff0
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_bc815:
        mov dword ptr [esi + 0x1a4], 0x7bcca0
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_bc83d
        dec eax
        je L_bc82e
        dec eax
        je L_bc89c
        jmp L_bc86d
    L_bc82e:
        mov dword ptr [edi + 0x14], 0x7bd1a0
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_bc83d:
        mov dword ptr [edi + 0x14], 0x7bd160
        pop edi
        mov eax, 0x1
        pop esi
        ret
    L_bc84c:
        push esi
        call ext_007BC450
        add esp, 0x4
        test eax, eax
        je L_bc89c
        mov dword ptr [esi + 0x1a4], 0x7bc8b0
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_bc895
        dec eax
        je L_bc89c
    L_bc86d:
        cmp word ptr [esi + 0x46], 0x804c
        mov eax, 0xab21b4
        je L_bc87f
        mov eax, 0xab21a8
    L_bc87f:
        mov ecx, dword ptr [esi]
        push eax
        push 0xab2170
        push ecx
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        ret
    L_bc895:
        mov dword ptr [edi + 0x14], 0x7bcf90
    L_bc89c:
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007BDA50] sub_007BDA50 (408 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BDA50(void* ctx, char* dst, int len) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x10]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        test esi, esi
        push edi
        jle L_a
        lea ecx, [esi]
        or eax, -1
        mov ebx, ecx
        mov edi, edx
        shr ecx, 2
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
L_a:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x20], edx
        test esi, esi
        mov ebx, dword ptr [eax + 0x1d0]
        mov edi, dword ptr [eax + 0x1e0]
        mov ebp, dword ptr [eax + 0x1e4]
        mov dword ptr [esp + 0x14], ebx
        jle L_end
L_top:
        xor eax, eax
        mov al, byte ptr [edi]
        inc edi
        dec ebp
        test eax, eax
        je L_zero
        cmp eax, 0x40
        je L_40
        mov ecx, dword ptr [esp + 0x1c]
        xor esi, esi
        mov edx, dword ptr [ecx + 0x24]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [esp + 0x20]
L_c2:
        mov ecx, eax
        and eax, 0x3f
        sar ecx, 6
        and ecx, 3
        mov ebx, eax
        dec eax
        test ebx, ebx
        jle L_c0e
        lea ebx, [eax + 1]
L_d7:
        mov eax, esi
        and eax, 3
        inc esi
        cmp eax, 3
        ja L_b0b
        jmp dword ptr [4*eax + 0x7bdbe8]
        mov al, cl
        shl al, 6
        mov byte ptr [edx], al
        jmp L_b0b
        mov al, cl
        shl al, 4
        or byte ptr [edx], al
        jmp L_b0b
        mov al, cl
        shl al, 2
        or byte ptr [edx], al
        jmp L_b0b
        mov al, byte ptr [edx]
        or al, cl
        mov byte ptr [edx], al
        inc edx
L_b0b:
        dec ebx
        jne L_d7
L_c0e:
        cmp esi, dword ptr [esp + 0x10]
        jge L_b86
        test ebp, ebp
        je L_fail
        xor eax, eax
        mov al, byte ptr [edi]
        inc edi
        dec ebp
        jmp L_c2
L_40:
        xor ecx, ecx
        xor edx, edx
        mov cl, byte ptr [edi + 2]
        mov dl, byte ptr [edi + 3]
        mov esi, ecx
        shl esi, 8
        add esi, edx
        lea eax, [esi + 4]
        cmp ebp, eax
        jl L_fail
        xor edx, edx
        lea ecx, [edi + 4]
        mov dl, byte ptr [edi]
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        shl edx, 8
        xor eax, eax
        add ecx, edx
        mov al, byte ptr [edi + 1]
        add eax, ecx
        push eax
        call ext_0079B010
        mov edx, 0xfffffffc
        add esp, 0xc
        sub edx, esi
        lea edi, [edi + esi + 4]
        add ebp, edx
        jmp L_b8a
L_zero:
        cmp ebp, ebx
        jl L_fail
        push ebx
        push edi
        push edx
        call ext_0079B010
        add esp, 0xc
        add edi, ebx
        sub ebp, ebx
        jmp L_b8a
L_b86:
        mov ebx, dword ptr [esp + 0x14]
L_b8a:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        sub eax, ebx
        add edx, ebx
        test eax, eax
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x20], edx
        jg L_top
        mov eax, dword ptr [esp + 0x1c]
L_end:
        mov dword ptr [eax + 0x1e0], edi
        pop edi
        mov dword ptr [eax + 0x1e4], ebp
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret
L_fail:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 0x164]
        mov edx, dword ptr [eax]
        push ecx
        push 0xab22dc
        push edx
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007BB330] sub_007BB330 (560 bytes)
extern "C" int mem_00B61F4C;
extern "C" int mem_00999B28;
extern "C" int mem_00999B08;
extern "C" int mem_00999B20;
extern "C" int mem_00999B18;
extern "C" int mem_00999B10;
extern "C" int mem_00957450;
extern "C" int mem_009357C0;
extern "C" int mem_00B61DBC;
extern "C" __declspec(naked) int __cdecl fn_007BB330(double a, double b) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x32c
        mov eax, dword ptr [mem_00B61F4C]
        push ebx
        push esi
        push edi
        test eax, eax
        jne L_7BB522
        lea eax, [esp + 0x330]
        mov ecx, 0x64
        mov edx, 0x40000000
L_7BB35D:
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], edx
        dec ecx
        sub eax, 8
        test ecx, ecx
        ja L_7BB35D
        mov dword ptr [esp + 0xc], 0xa2
        mov esi, 0xab1f5c
L_7BB37B:
        fild dword ptr [esp + 0xc]
        movsx eax, word ptr [esi]
        fadd qword ptr [mem_00993828]
        cmp esi, 0xab1f5c
        lea edi, [eax - 1]
        fmul qword ptr [mem_00999B28]
        mov ebx, edi
        fadd qword ptr [mem_00999B08]
        je L_7BB3AD
        cmp esi, 0xab1a4c
        je L_7BB3AD
        test ebx, ebx
        jg L_7BB3B2
L_7BB3AD:
        mov ebx, 1
L_7BB3B2:
        test edi, edi
        mov dword ptr [esp + 0x10], edi
        jl L_7BB42C
        fsub qword ptr [mem_00999B20]
L_7BB3C0:
        fld st(0)
        fild dword ptr [esp + 0x10]
        fadd qword ptr [mem_00993828]
        fmul qword ptr [mem_00999B28]
        fadd dword ptr [esi - 4]
        fsub qword ptr [mem_00999B18]
        fpatan
        fmul qword ptr [mem_00999B10]
        fadd qword ptr [mem_00957450]
        fld st(0)
        call ext_00872828
        mov ecx, eax
        mov dword ptr [esp + 0x14], ecx
        fild dword ptr [esp + 0x14]
        lea edx, [esp + ecx*8 + 0x18]
        fadd qword ptr [mem_00993828]
        fsubp st(1), st
        fabs
        fcom qword ptr [edx]
        fnstsw ax
        test ah, 1
        je L_7BB422
        movsx eax, word ptr [esi + 2]
        fstp qword ptr [edx]
        add eax, edi
        mov dword ptr [ecx*4 + mem_00B61DBC], eax
        jmp L_7BB424
L_7BB422:
        fstp st(0)
L_7BB424:
        sub edi, ebx
        mov dword ptr [esp + 0x10], edi
        jns L_7BB3C0
L_7BB42C:
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        dec edi
        sub esi, 8
        cmp ecx, 0xab1a4c
        mov dword ptr [esp + 0xc], edi
        fstp st(0)
        jne L_7BB37B
        mov ecx, 0xb61f48
        lea edx, [esp + 0x330]
        mov esi, 0x63
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0xc], edx
L_7BB461:
        mov eax, dword ptr [esp + 0xc]
        fld qword ptr [eax]
        fcomp qword ptr [mem_009357C0]
        fnstsw ax
        test ah, 0x41
        jne L_7BB4F8
        mov edi, 1
L_7BB47D:
        lea eax, [edi + esi]
        mov ecx, 0x64
        cdq
        idiv ecx
        fld qword ptr [esp + edx*8 + 0x18]
        fcomp qword ptr [mem_009357C0]
        fnstsw ax
        test ah, 1
        jne L_7BB49F
        inc edi
        cmp edi, 0x32
        jl L_7BB47D
L_7BB49F:
        lea eax, [esi + 0x63]
        mov ecx, 1
        mov dword ptr [esp + 0x14], eax
L_7BB4AB:
        cdq
        mov ebx, 0x64
        idiv ebx
        fld qword ptr [esp + edx*8 + 0x18]
        fcomp qword ptr [mem_009357C0]
        fnstsw ax
        test ah, 1
        jne L_7BB4D3
        mov eax, dword ptr [esp + 0x14]
        inc ecx
        dec eax
        cmp ecx, 0x32
        mov dword ptr [esp + 0x14], eax
        jl L_7BB4AB
L_7BB4D3:
        cmp edi, ecx
        jge L_7BB4DC
        lea eax, [edi + esi]
        jmp L_7BB4E3
L_7BB4DC:
        mov eax, esi
        sub eax, ecx
        add eax, 0x64
L_7BB4E3:
        cdq
        mov ecx, 0x64
        idiv ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx*4 + mem_00B61DBC]
        mov dword ptr [ecx], edx
L_7BB4F8:
        mov ebx, dword ptr [esp + 0xc]
        mov eax, ecx
        dec esi
        sub ebx, 8
        sub ecx, 4
        cmp eax, 0xb61dbc
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [esp + 0x10], ecx
        jne L_7BB461
        mov dword ptr [mem_00B61F4C], 1
L_7BB522:
        fld qword ptr [ebp + 0x10]
        fsub qword ptr [mem_00999B20]
        fld qword ptr [ebp + 8]
        fsub qword ptr [mem_00999B18]
        fpatan
        fmul qword ptr [mem_00999B10]
        fadd qword ptr [mem_00957450]
        call ext_00872828
        mov eax, dword ptr [eax*4 + mem_00B61DBC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BA700] sub_007BA700 (585 bytes)
extern "C" void ext_0079AF50();
extern "C" void __cdecl ext_007BA470(void* a, void* b, int c);
extern "C" void ext_007BA4B0();
extern "C" void ext_007BA690();
extern "C" void ext_007BA6D0();
extern "C" __declspec(naked) int __cdecl fn_007BA700(int a1, int type, int a3, void* out, int count, double* src) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x5c
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x18]
        mov eax, dword ptr [4*ebx + 0x9993c8]
        push edi
        imul eax, esi
        cmp eax, 0x50
        lea edi, [esp + 0x18]
        mov dword ptr [esp + 0x14], 0x0
        jbe L_738
        push eax
        call ext_0079AF40
        add esp, 0x4
        mov edi, eax
    L_738:
        lea eax, [ebx - 0x1]
        cmp eax, 0xb
        ja L_90C
        jmp dword ptr [4*eax + 0x7ba94c]
    L_74B:
        xor ebx, ebx
        test esi, esi
        jle L_776
        mov eax, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0xc], eax
    L_758:
        mov ecx, dword ptr [esp + 0xc]
        fld qword ptr [ecx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [ebx + edi], al
        inc ebx
        add ecx, 0x8
        cmp ebx, esi
        mov dword ptr [esp + 0xc], ecx
        jl L_758
    L_776:
        mov eax, dword ptr [ebp + 0x14]
        mov dx, word ptr [ebp + 0x10]
        mov cx, word ptr [ebp + 0xc]
        push edi
        mov word ptr [eax], dx
        mov edx, dword ptr [ebp + 0x8]
        push eax
        push edx
        mov word ptr [eax + 0x2], cx
        mov dword ptr [eax + 0x4], esi
        call ext_007BA470
        add esp, 0xc
        jmp L_8CB
    L_79E:
        xor ebx, ebx
        test esi, esi
        jle L_776
        mov eax, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0xc], eax
    L_7AB:
        mov ecx, dword ptr [esp + 0xc]
        fld qword ptr [ecx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [ebx + edi], al
        inc ebx
        add ecx, 0x8
        cmp ebx, esi
        mov dword ptr [esp + 0xc], ecx
        jl L_7AB
        jmp L_776
    L_7CB:
        test esi, esi
        jle L_800
        mov ebx, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], esi
    L_7DA:
        fld qword ptr [ebx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0xc]
        add ebx, 0x8
        mov word ptr [ecx], ax
        mov eax, dword ptr [esp + 0x10]
        add ecx, 0x2
        dec eax
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x10], eax
        jne L_7DA
    L_7FD:
        mov ebx, dword ptr [ebp + 0xc]
    L_800:
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push edi
        push esi
        push eax
        push ecx
        push ebx
        push edx
        call ext_007BA4B0
        jmp L_8C8
    L_819:
        test esi, esi
        jle L_800
        mov ebx, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0xc], esi
    L_828:
        fld qword ptr [ebx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0x10]
        add ebx, 0x8
        mov word ptr [ecx], ax
        mov eax, dword ptr [esp + 0xc]
        add ecx, 0x2
        dec eax
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0xc], eax
        jne L_828
        jmp L_7FD
    L_84D:
        test esi, esi
        jle L_8B4
        mov ebx, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0xc], esi
    L_85C:
        fld qword ptr [ebx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0x10]
        add ebx, 0x8
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 0xc]
        add ecx, 0x4
        dec eax
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0xc], eax
        jne L_85C
        jmp L_8B1
    L_880:
        test esi, esi
        jle L_8B4
        mov ebx, dword ptr [ebp + 0x1c]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0xc], esi
    L_88F:
        fld qword ptr [ebx]
        call ext_00872828
        mov ecx, dword ptr [esp + 0x10]
        add ebx, 0x8
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 0xc]
        add ecx, 0x4
        dec eax
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0xc], eax
        jne L_88F
    L_8B1:
        mov ebx, dword ptr [ebp + 0xc]
    L_8B4:
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push edi
        push esi
        push eax
        push ecx
        push ebx
        push edx
        call ext_007BA690
    L_8C8:
        add esp, 0x18
    L_8CB:
        test eax, eax
        je L_90C
        jmp L_904
    L_8D1:
        test esi, esi
        jle L_8E9
        mov eax, dword ptr [ebp + 0x1c]
        mov ecx, edi
        mov edx, esi
    L_8DC:
        fld qword ptr [eax]
        add eax, 0x8
        fstp dword ptr [ecx]
        add ecx, 0x4
        dec edx
        jne L_8DC
    L_8E9:
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push edi
        push esi
        push eax
        push ecx
        push ebx
        push edx
        call ext_007BA690
        add esp, 0x18
        test eax, eax
        je L_90C
    L_904:
        mov dword ptr [esp + 0x14], 0x1
    L_90C:
        lea ecx, [esp + 0x18]
        cmp edi, ecx
        je L_91D
        push edi
        call ext_0079AF50
        add esp, 0x4
    L_91D:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    L_928:
        mov eax, dword ptr [ebp + 0x1c]
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push esi
        push ecx
        push edx
        push ebx
        push eax
        call ext_007BA6D0
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007BAB60] sub_007BAB60 (609 bytes)
extern "C" void ext_007AEFD0();
extern "C" void ext_007AEFF0();
extern "C" __declspec(naked) void __cdecl fn_007BAB60(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push 0x2
        push 0x0
        mov eax, dword ptr [esi + 0x1f8]
        push eax
        call dword ptr [esi + 0x204]
        add esp, 0xc
        inc eax
        and al, 0xfe
        mov bl, 0x80
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esp + 0x8], eax
        test byte ptr [esi + 0xc], bl
        je L_7BAB9B
        lea ecx, [esp + 0x8]
        push ecx
        call ext_007AEFF0
        add esp, 0x4
    L_7BAB9B:
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x20
        je L_7BAC35
        mov edx, dword ptr [esi + 0x17c]
        mov eax, dword ptr [esi + 0x1f8]
        push 0x0
        push edx
        push eax
        call dword ptr [esi + 0x204]
        mov edx, dword ptr [esi + 0x1f8]
        lea ecx, [esp + 0x14]
        push 0x4
        push ecx
        push edx
        call dword ptr [esi + 0x200]
        add esp, 0x18
        cmp eax, 0x4
        je L_7BABF6
        mov eax, dword ptr [esi]
        push eax
        push 0xab1844
        push 0x9999d8
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop esi
        pop ebx
        add esp, 0x8
        ret
    L_7BABF6:
        dec word ptr [esi + 0x178]
        cmp word ptr [esi + 0x178], 0x0
        je L_7BAC21
        mov eax, dword ptr [esi + 0x17c]
        add eax, 0x4
        mov dword ptr [esi + 0x17c], eax
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x8
        ret
    L_7BAC21:
        mov eax, dword ptr [esi + 0xc]
        and ah, 0xdf
        mov dword ptr [esi + 0xc], eax
    L_7BAC2A:
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x8
        ret
    L_7BAC35:
        mov eax, dword ptr [esi + 0x154]
        test eax, eax
        jne L_7BAC8C
        mov edx, dword ptr [esi + 0x1f8]
        mov ecx, dword ptr [esi + 0x10]
        push eax
        push 0x4
        push edx
        mov dword ptr [esi + 0x154], ecx
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esi + 0x1f8]
        lea eax, [esp + 0x14]
        push 0x4
        push eax
        push ecx
        call dword ptr [esi + 0x200]
        add esp, 0x18
        cmp eax, 0x4
        je L_7BAC2A
        mov edx, dword ptr [esi]
        push 0xab1664
        push edx
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop esi
        pop ebx
        add esp, 0x8
        ret
    L_7BAC8C:
        push 0x0
        mov dword ptr [esp + 0x18], eax
        push eax
        mov eax, dword ptr [esi + 0x1f8]
        push eax
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esp + 0x20]
        add esp, 0xc
        cmp eax, ecx
        jne L_7BAD55
    L_7BACAF:
        mov edx, dword ptr [esi + 0x1f8]
        lea ecx, [esp + 0xc]
        push 0x2
        push ecx
        push edx
        call dword ptr [esi + 0x1fc]
        add esp, 0xc
        cmp eax, 0x2
        jne L_7BAD55
        test byte ptr [esi + 0xc], bl
        je L_7BACE1
        lea eax, [esp + 0xc]
        push eax
        call ext_007AEFD0
        add esp, 0x4
    L_7BACE1:
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x1f8]
        and eax, 0xffff
        push 0x1
        lea ecx, [eax + 2*eax]
        shl ecx, 0x2
        push ecx
        push edx
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esi + 0x1f8]
        lea eax, [esp + 0x20]
        push 0x4
        push eax
        push ecx
        call dword ptr [esi + 0x1fc]
        add esp, 0x18
        cmp eax, 0x4
        jne L_7BAD6F
        test byte ptr [esi + 0xc], bl
        je L_7BAD2E
        lea edx, [esp + 0x14]
        push edx
        call ext_007AEFF0
        add esp, 0x4
    L_7BAD2E:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_7BAD76
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x1f8]
        push eax
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esp + 0x20]
        add esp, 0xc
        cmp eax, ecx
        je L_7BACAF
    L_7BAD55:
        push 0xab1824
    L_7BAD5A:
        push 0x9999d8
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop esi
        pop ebx
        add esp, 0x8
        ret
    L_7BAD6F:
        push 0xab1804
        jmp L_7BAD5A
    L_7BAD76:
        mov ecx, dword ptr [esi + 0x1f8]
        push 0x1
        push 0x0
        push ecx
        call dword ptr [esi + 0x204]
        mov edx, dword ptr [esi + 0x1f8]
        add eax, -0x4
        push 0x0
        push eax
        push edx
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esi + 0x1f8]
        lea eax, [esp + 0x20]
        push 0x4
        push eax
        push ecx
        call dword ptr [esi + 0x200]
        add esp, 0x24
        cmp eax, 0x4
        je L_7BAC2A
        push 0xaafc08
        jmp L_7BAD5A
    }
}

// [0x007BDC70] sub_007BDC70 (627 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BDC70(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        xor edx, edx
        push edi
        mov eax, dword ptr [esi + 0x1e0]
        mov ebx, dword ptr [esi + 0x1e4]
        mov dword ptr [esp + 0x10], eax
        xor eax, eax
        test ebx, ebx
        jle L_7bded0
        mov edi, dword ptr [esp + 0x28]
        jmp L_7bdca1
    L_7bdc9d:
        mov esi, dword ptr [esp + 0x24]
    L_7bdca1:
        mov ebp, dword ptr [esp + 0x2c]
        cmp eax, ebp
        jge L_7bde8c
        mov esi, dword ptr [esp + 0x10]
        xor ecx, ecx
        mov cl, byte ptr [esi]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        mov ebp, esi
        inc ecx
        and ebp, 0xc0
        dec ebx
        cmp ebp, 0xc0
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x1c], ebx
        ja L_7bde7c
        xor ecx, ecx
        mov cl, byte ptr [ebp + 0x7bdef8]
        jmp dword ptr [4*ecx + 0x7bdee4]
    L_7bdce8:
        test al, 0x1
        je L_7bdd03
        mov cl, byte ptr [edi]
        or cl, dl
        mov dl, cl
        mov byte ptr [edi], cl
        and edx, 0xff
        inc edi
        inc eax
        mov dword ptr [esp + 0x28], edi
        dec esi
        jmp L_7bdd0a
    L_7bdd03:
        mov ecx, edx
        shl ecx, 0x4
        or edx, ecx
    L_7bdd0a:
        add eax, esi
        test esi, esi
        mov dword ptr [esp + 0x18], eax
        jle L_7bdd52
        mov al, dl
        lea ecx, [esi + 0x1]
        mov bl, al
        mov bh, bl
        shr ecx, 1
        mov eax, ebx
        mov dword ptr [esp + 0x14], ecx
        mov ebp, ecx
        shl eax, 0x10
        mov ax, bx
        mov ebx, dword ptr [esp + 0x1c]
        shr ecx, 2
        rep stosd
        mov ecx, ebp
        and ecx, 0x3
        rep stosb
        mov edi, dword ptr [esp + 0x28]
        mov eax, ebp
        add edi, eax
        neg eax
        mov dword ptr [esp + 0x28], edi
        lea esi, [esi + 2*eax]
        mov eax, dword ptr [esp + 0x18]
    L_7bdd52:
        cmp esi, -0x1
        jne L_7bdd64
        mov cl, byte ptr [edi - 0x1]
        dec edi
        and cl, 0xf0
        mov dword ptr [esp + 0x28], edi
        mov byte ptr [edi], cl
    L_7bdd64:
        and edx, 0xf
        jmp L_7bde7c
    L_7bdd6c:
        mov ecx, esi
        sar ecx, 0x4
        and ecx, 0x3
        cmp ecx, 0x2
        je L_7bdda5
        mov ecx, dword ptr [4*ecx + 0x999bec]
        add ecx, edx
        and ecx, 0xf
        mov edx, ecx
        mov ecx, eax
        and cl, 0x1
        inc eax
        test cl, cl
        je L_7bdd9e
        mov cl, byte ptr [edi]
        or cl, dl
        mov byte ptr [edi], cl
        inc edi
        mov dword ptr [esp + 0x28], edi
        jmp L_7bdda5
    L_7bdd9e:
        mov cl, dl
        shl cl, 0x4
        mov byte ptr [edi], cl
    L_7bdda5:
        mov ecx, esi
        sar ecx, 0x2
        and ecx, 0x3
        cmp ecx, 0x2
        je L_7bddde
        mov ecx, dword ptr [4*ecx + 0x999bec]
        add ecx, edx
        and ecx, 0xf
        mov edx, ecx
        mov ecx, eax
        and cl, 0x1
        inc eax
        test cl, cl
        je L_7bddd7
        mov cl, byte ptr [edi]
        or cl, dl
        mov byte ptr [edi], cl
        inc edi
        mov dword ptr [esp + 0x28], edi
        jmp L_7bddde
    L_7bddd7:
        mov cl, dl
        shl cl, 0x4
        mov byte ptr [edi], cl
    L_7bddde:
        and esi, 0x3
        cmp esi, 0x2
        je L_7bde7c
        mov ecx, dword ptr [4*esi + 0x999bec]
        jmp L_7bde3b
    L_7bddf3:
        mov ecx, esi
        sar ecx, 0x3
        and ecx, 0x7
        cmp ecx, 0x4
        je L_7bde2c
        mov ecx, dword ptr [4*ecx + 0x999bfc]
        add ecx, edx
        and ecx, 0xf
        mov edx, ecx
        mov ecx, eax
        and cl, 0x1
        inc eax
        test cl, cl
        je L_7bde25
        mov cl, byte ptr [edi]
        or cl, dl
        mov byte ptr [edi], cl
        inc edi
        mov dword ptr [esp + 0x28], edi
        jmp L_7bde2c
    L_7bde25:
        mov cl, dl
        shl cl, 0x4
        mov byte ptr [edi], cl
    L_7bde2c:
        and esi, 0x7
        cmp esi, 0x4
        je L_7bde7c
        mov ecx, dword ptr [4*esi + 0x999bfc]
    L_7bde3b:
        add ecx, edx
        and ecx, 0xf
        mov edx, ecx
        mov ecx, eax
        and cl, 0x1
        inc eax
        test cl, cl
        je L_7bde75
        mov cl, byte ptr [edi]
        or cl, dl
        mov byte ptr [edi], cl
        inc edi
        mov dword ptr [esp + 0x28], edi
        jmp L_7bde7c
    L_7bde59:
        mov ecx, eax
        and esi, 0xf
        and cl, 0x1
        inc eax
        test cl, cl
        mov edx, esi
        je L_7bde75
        mov cl, byte ptr [edi]
        or cl, dl
        mov byte ptr [edi], cl
        inc edi
        mov dword ptr [esp + 0x28], edi
        jmp L_7bde7c
    L_7bde75:
        mov cl, dl
        shl cl, 0x4
        mov byte ptr [edi], cl
    L_7bde7c:
        test ebx, ebx
        jg L_7bdc9d
        mov ebp, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x24]
    L_7bde8c:
        mov edx, dword ptr [esp + 0x10]
        cmp eax, ebp
        mov dword ptr [esi + 0x1e0], edx
        mov dword ptr [esi + 0x1e4], ebx
        je L_7bded6
        mov ecx, 0xab234c
        jl L_7bdeac
        mov ecx, 0xab2340
    L_7bdeac:
        push ebp
        push eax
        mov eax, dword ptr [esi + 0x164]
        push eax
        push ecx
        mov ecx, dword ptr [esi]
        push 0xab230c
        push ecx
        call ext_0079B140
        add esp, 0x18
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    L_7bded0:
        mov ebp, dword ptr [esp + 0x2c]
        jmp L_7bde8c
    L_7bded6:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x007BCCA0] sub_007BCCA0 (744 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BCCA0(void* self, int a2, int a3) {
    __asm {
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x28]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x30]
        cdq
        mov ecx, dword ptr [edi + 0x1cc]
        mov dword ptr [esp + 0x10], 0x0
        idiv dword ptr [ecx + 0x8]
        mov esi, eax
        mov eax, dword ptr [ecx]
        cmp eax, 0x2
        mov dword ptr [esp + 0x1c], esi
        jne W_CCD8
        mov eax, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x14], eax
        jmp W_CCEC
W_CCD8:
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [ecx + 0xc]
        push esi
        push eax
        push ecx
        mov dword ptr [esp + 0x20], edx
        call dword ptr [ecx + 0x14]
        add esp, 0xc
W_CCEC:
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x18], 0x18
W_CD0C:
        xor ebx, ebx
        test esi, esi
        mov dword ptr [esp + 0x38], ebx
        jle W_CF4E
        jmp W_CD20
W_CD1C:
        mov eax, dword ptr [esp + 0x34]
W_CD20:
        cmp eax, 0x4
        jge W_CD62
        mov ecx, dword ptr [edi + 0x1dc]
        push edi
        sub ecx, eax
        mov dword ptr [edi + 0x1e0], edx
        mov dword ptr [edi + 0x1e4], ecx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je W_CF7D
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x34], eax
W_CD62:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        mov esi, 0xff
        mov ebp, ebx
        shl esi, cl
        cmp ebx, eax
        jge W_CDC6
W_CD77:
        mov ebx, dword ptr [esp + 0x14]
        mov eax, 0x1
        mov dword ptr [esp + 0x10], eax
        mov ecx, dword ptr [ebx + 4*ebp]
        lea ebx, [ebx + 4*ebp + 0x4]
        and ecx, esi
W_CD8D:
        lea edi, [eax + ebp]
        cmp edi, dword ptr [esp + 0x1c]
        jge W_CDA9
        mov edi, dword ptr [ebx]
        and edi, esi
        cmp edi, ecx
        jne W_CDA9
        inc eax
        add ebx, 0x4
        cmp eax, 0x81
        jl W_CD8D
W_CDA9:
        cmp eax, 0x4
        mov dword ptr [esp + 0x10], eax
        jge W_CDBE
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        add ebp, ecx
        cmp ebp, eax
        jl W_CD77
W_CDBE:
        mov edi, dword ptr [esp + 0x30]
        mov ebx, dword ptr [esp + 0x38]
W_CDC6:
        mov eax, ebp
        sub eax, ebx
        cmp eax, 0x1
        jle W_CE21
        cmp eax, 0x4
        jge W_CE21
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 4*ebx]
        lea eax, [ebx + 0x1]
        mov ebx, dword ptr [esp + 0x14]
        and ecx, esi
        mov dword ptr [esp + 0x24], ecx
        mov ebx, dword ptr [ebx + 4*eax]
        and ebx, esi
        inc eax
        cmp ebx, ecx
        jne W_CE1D
        mov ebx, dword ptr [esp + 0x14]
        lea ebx, [ebx + 4*eax]
        jmp W_CDFF
W_CDFB:
        mov ebx, dword ptr [esp + 0x20]
W_CDFF:
        cmp eax, ebp
        je W_CF02
        mov ecx, esi
        and ecx, dword ptr [ebx]
        add ebx, 0x4
        mov dword ptr [esp + 0x20], ebx
        inc eax
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0x24]
        cmp ebx, ecx
        je W_CDFB
W_CE1D:
        mov ebx, dword ptr [esp + 0x38]
W_CE21:
        cmp ebx, ebp
        jge W_CED6
W_CE29:
        mov eax, dword ptr [esp + 0x38]
        mov ebx, ebp
        sub ebx, eax
        cmp ebx, 0x7f
        jle W_CE3B
        mov ebx, 0x7f
W_CE3B:
        mov ecx, dword ptr [esp + 0x34]
        lea esi, [ebx + 0x3]
        cmp ecx, esi
        jge W_CE87
        mov dword ptr [edi + 0x1e0], edx
        mov edx, dword ptr [edi + 0x1dc]
        sub edx, ecx
        push edi
        mov dword ptr [edi + 0x1e4], edx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je W_CF7D
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x34], eax
        mov eax, dword ptr [esp + 0x38]
W_CE87:
        mov ecx, dword ptr [esp + 0x34]
        mov byte ptr [edx], bl
        inc edx
        dec ecx
        mov dword ptr [esp + 0x34], ecx
        mov ecx, ebx
        dec ebx
        test ecx, ecx
        je W_CECA
        mov ecx, dword ptr [esp + 0x14]
        lea esi, [ebx + 0x1]
        mov ebx, dword ptr [esp + 0x34]
        lea edi, [ecx + 4*eax]
        sub ebx, esi
        add eax, esi
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], eax
W_CEB4:
        mov ebx, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x18]
        shr ebx, cl
        inc edx
        add edi, 0x4
        dec esi
        mov byte ptr [edx - 0x1], bl
        jne W_CEB4
        mov edi, dword ptr [esp + 0x30]
W_CECA:
        cmp eax, ebp
        jl W_CE29
W_CED2:
        mov ebx, dword ptr [esp + 0x38]
W_CED6:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, 0x4
        jl W_CF2A
        mov ecx, dword ptr [esp + 0x18]
        add al, 0x7e
        mov byte ptr [edx], al
        mov eax, dword ptr [esp + 0x14]
        inc edx
        mov eax, dword ptr [eax + 4*ebp]
        shr eax, cl
        inc edx
        mov byte ptr [edx - 0x1], al
        mov eax, dword ptr [esp + 0x34]
        sub eax, 0x2
        mov dword ptr [esp + 0x34], eax
        jmp W_CF32
W_CF02:
        mov bl, byte ptr [esp + 0x38]
        mov dword ptr [esp + 0x38], ebp
        sub al, bl
        add al, 0x7e
        mov byte ptr [edx], al
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x18]
        inc edx
        shr eax, cl
        inc edx
        mov byte ptr [edx - 0x1], al
        mov eax, dword ptr [esp + 0x34]
        sub eax, 0x2
        mov dword ptr [esp + 0x34], eax
        jmp W_CED2
W_CF2A:
        mov dword ptr [esp + 0x10], 0x0
W_CF32:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        add ebx, ecx
        cmp ebx, eax
        mov dword ptr [esp + 0x38], ebx
        jl W_CD1C
        mov esi, eax
        mov eax, dword ptr [esp + 0x34]
W_CF4E:
        mov ecx, dword ptr [esp + 0x18]
        sub ecx, 0x8
        mov dword ptr [esp + 0x18], ecx
        jns W_CD0C
        mov ecx, dword ptr [edi + 0x1dc]
        mov dword ptr [edi + 0x1e0], edx
        sub ecx, eax
        xor eax, eax
        mov dword ptr [edi + 0x1e4], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
W_CF7D:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        add esp, 0x1c
        ret
    }
}

// [0x007BC8B0] sub_007BC8B0 (782 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BC8B0(void* self, int a1, int a2) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x24]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        cdq
        mov ecx, dword ptr [edi + 0x1cc]
        mov dword ptr [esp + 0x10], 0x0
        idiv dword ptr [ecx + 0x8]
        mov esi, eax
        mov eax, dword ptr [ecx]
        cmp eax, 0x1
        mov dword ptr [esp + 0x1c], esi
        jne L8E8
        mov eax, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x14], eax
        jmp L8FC
    L8E8:
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [ecx + 0xc]
        push esi
        push eax
        push ecx
        mov dword ptr [esp + 0x20], edx
        call dword ptr [ecx + 0x14]
        add esp, 0xc
    L8FC:
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x18], 0x8
    L91C:
        xor ebx, ebx
        test esi, esi
        mov dword ptr [esp + 0x34], ebx
        jle LB84
        jmp L930
    L92C:
        mov eax, dword ptr [esp + 0x30]
    L930:
        cmp eax, 0x4
        jge L972
        mov ecx, dword ptr [edi + 0x1dc]
        push edi
        sub ecx, eax
        mov dword ptr [edi + 0x1e0], edx
        mov dword ptr [edi + 0x1e4], ecx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je LBB3
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x30], eax
    L972:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        mov esi, 0xff
        mov ebp, ebx
        shl esi, cl
        cmp ebx, eax
        jge L9ED
    L987:
        mov edi, dword ptr [esp + 0x14]
        mov eax, 0x1
        mov dword ptr [esp + 0x10], eax
        mov cx, word ptr [edi + 2*ebp]
        lea edi, [edi + 2*ebp + 0x2]
        and ecx, esi
        mov dword ptr [esp + 0x10], edi
    L9A2:
        mov ebx, dword ptr [esp + 0x1c]
        lea edi, [eax + ebp]
        cmp edi, ebx
        jge L9D0
        mov edi, dword ptr [esp + 0x10]
        movsx ebx, cx
        movsx edi, word ptr [edi]
        and edi, esi
        cmp edi, ebx
        jne L9D0
        mov ebx, dword ptr [esp + 0x10]
        inc eax
        add ebx, 0x2
        cmp eax, 0x81
        mov dword ptr [esp + 0x10], ebx
        jl L9A2
    L9D0:
        cmp eax, 0x4
        mov dword ptr [esp + 0x10], eax
        jge L9E5
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        add ebp, ecx
        cmp ebp, eax
        jl L987
    L9E5:
        mov edi, dword ptr [esp + 0x2c]
        mov ebx, dword ptr [esp + 0x34]
    L9ED:
        mov eax, ebp
        sub eax, ebx
        cmp eax, 0x1
        jle LA4D
        cmp eax, 0x4
        jge LA4D
        mov eax, dword ptr [esp + 0x14]
        mov cx, word ptr [eax + 2*ebx]
        lea eax, [ebx + 0x1]
        mov ebx, dword ptr [esp + 0x14]
        and ecx, esi
        mov dword ptr [esp + 0x20], ecx
        movsx ebx, word ptr [ebx + 2*eax]
        movsx ecx, cx
        and ebx, esi
        inc eax
        cmp ebx, ecx
        jne LA49
        mov ecx, dword ptr [esp + 0x14]
        lea ecx, [ecx + 2*eax]
        jmp LA2B
    LA27:
        mov ecx, dword ptr [esp + 0x24]
    LA2B:
        cmp eax, ebp
        je LB34
        movsx ebx, word ptr [ecx]
        add ecx, 0x2
        and ebx, esi
        mov dword ptr [esp + 0x24], ecx
        inc eax
        movsx ecx, word ptr [esp + 0x20]
        cmp ebx, ecx
        je LA27
    LA49:
        mov ebx, dword ptr [esp + 0x34]
    LA4D:
        cmp ebx, ebp
        jge LB05
    LA55:
        mov eax, dword ptr [esp + 0x34]
        mov ebx, ebp
        sub ebx, eax
        cmp ebx, 0x7f
        jle LA67
        mov ebx, 0x7f
    LA67:
        mov ecx, dword ptr [esp + 0x30]
        lea esi, [ebx + 0x3]
        cmp ecx, esi
        jge LAB3
        mov dword ptr [edi + 0x1e0], edx
        mov edx, dword ptr [edi + 0x1dc]
        sub edx, ecx
        push edi
        mov dword ptr [edi + 0x1e4], edx
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        je LBB3
        mov eax, dword ptr [edi + 0x1dc]
        mov ecx, dword ptr [edi + 0x1e4]
        mov edx, dword ptr [edi + 0x1e0]
        sub eax, ecx
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [esp + 0x34]
    LAB3:
        mov ecx, dword ptr [esp + 0x30]
        mov byte ptr [edx], bl
        inc edx
        dec ecx
        mov dword ptr [esp + 0x30], ecx
        mov ecx, ebx
        dec ebx
        test ecx, ecx
        je LAF9
        mov ecx, dword ptr [esp + 0x14]
        lea esi, [ebx + 0x1]
        mov ebx, dword ptr [esp + 0x30]
        lea edi, [ecx + 2*eax]
        sub ebx, esi
        add eax, esi
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], eax
    LAE0:
        mov bx, word ptr [edi]
        mov cx, word ptr [esp + 0x18]
        sar bx, cl
        inc edx
        add edi, 0x2
        dec esi
        mov byte ptr [edx - 0x1], bl
        jne LAE0
        mov edi, dword ptr [esp + 0x2c]
    LAF9:
        cmp eax, ebp
        jl LA55
    LB01:
        mov ebx, dword ptr [esp + 0x34]
    LB05:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, 0x4
        jl LB60
        mov cx, word ptr [esp + 0x18]
        add al, 0x7e
        mov byte ptr [edx], al
        mov eax, dword ptr [esp + 0x14]
        inc edx
        mov ax, word ptr [eax + 2*ebp]
        sar ax, cl
        inc edx
        mov byte ptr [edx - 0x1], al
        mov eax, dword ptr [esp + 0x30]
        sub eax, 0x2
        mov dword ptr [esp + 0x30], eax
        jmp LB68
    LB34:
        mov bl, byte ptr [esp + 0x34]
        mov cx, word ptr [esp + 0x18]
        sub al, bl
        mov dword ptr [esp + 0x34], ebp
        add al, 0x7e
        mov byte ptr [edx], al
        mov eax, dword ptr [esp + 0x20]
        sar ax, cl
        inc edx
        inc edx
        mov byte ptr [edx - 0x1], al
        mov eax, dword ptr [esp + 0x30]
        sub eax, 0x2
        mov dword ptr [esp + 0x30], eax
        jmp LB01
    LB60:
        mov dword ptr [esp + 0x10], 0x0
    LB68:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        add ebx, ecx
        cmp ebx, eax
        mov dword ptr [esp + 0x34], ebx
        jl L92C
        mov esi, eax
        mov eax, dword ptr [esp + 0x30]
    LB84:
        mov ecx, dword ptr [esp + 0x18]
        sub ecx, 0x8
        mov dword ptr [esp + 0x18], ecx
        jns L91C
        mov ecx, dword ptr [edi + 0x1dc]
        mov dword ptr [edi + 0x1e0], edx
        sub ecx, eax
        xor eax, eax
        mov dword ptr [edi + 0x1e4], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    LBB3:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x007BEA30] sub_007BEA30 (879 bytes)
extern "C" void ext_007AF620();
extern "C" __declspec(naked) int __cdecl fn_007BEA30(void* a1, int a2, int a3) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [ebp + 0x1cc]
        push edi
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x34], edx
        mov edi, dword ptr [esi + 0x48]
        test edi, edi
        je L_7BEAB1
        mov eax, dword ptr [esi + 0x54]
        xor ecx, ecx
        mov cx, word ptr [eax + 0x4]
        sub ecx, edi
        cmp ecx, edx
        jle L_7BEA92
        add edi, edx
        mov dword ptr [esi + 0x48], edi
    L_7BEA6C:
        mov eax, dword ptr [eax]
        dec ecx
        cmp ecx, edx
        jg L_7BEA6C
        mov esi, dword ptr [esp + 0x34]
        lea ecx, [ebx + edx]
    L_7BEA7A:
        mov dl, byte ptr [eax + 0x6]
        dec ecx
        dec esi
        mov byte ptr [ecx], dl
        mov eax, dword ptr [eax]
        jne L_7BEA7A
    L_7BEA85:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x18
        ret
    L_7BEA92:
        lea edi, [ecx + ebx]
        sub edx, ecx
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x34], edx
    L_7BEA9F:
        mov dl, byte ptr [eax + 0x6]
        dec edi
        dec ecx
        mov byte ptr [edi], dl
        mov eax, dword ptr [eax]
        jne L_7BEA9F
        mov dword ptr [esi + 0x48], 0x0
    L_7BEAB1:
        mov eax, dword ptr [ebp + 0x1e0]
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [esi + 0x58]
        mov ebx, dword ptr [esi + 0x38]
        mov ebp, dword ptr [esi + 0x3c]
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [esi + 0x5c]
        mov dword ptr [esp + 0x18], ecx
        mov ecx, dword ptr [esi + 0x60]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0x34]
        xor edi, edi
        mov di, word ptr [esi + 0x30]
        mov dword ptr [esp + 0x14], edx
        test eax, eax
        mov dword ptr [esp + 0x20], ecx
        jle L_7BED3D
    L_7BEAEF:
        mov edx, dword ptr [esi + 0x4c]
        cmp edx, edi
        jl L_7BECD8
        mov ecx, dword ptr [esp + 0x30]
        xor eax, eax
        mov al, byte ptr [ecx]
        mov ecx, ebp
        shl eax, cl
        add ebp, 0x8
        or ebx, eax
        mov eax, dword ptr [esp + 0x30]
        inc eax
        cmp ebp, edi
        mov dword ptr [esp + 0x30], eax
        jge L_7BEB32
        mov ecx, dword ptr [esp + 0x30]
        xor eax, eax
        mov al, byte ptr [ecx]
        mov ecx, ebp
        shl eax, cl
        mov ecx, dword ptr [esp + 0x30]
        or ebx, eax
        inc ecx
        mov dword ptr [esp + 0x30], ecx
        add ebp, 0x8
    L_7BEB32:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, ebx
        and eax, 0xffff
        and ecx, 0xffff
        and eax, ecx
        mov ecx, edi
        sar ebx, cl
        sub ebp, edi
        sub edx, edi
        cmp eax, 0x101
        mov dword ptr [esi + 0x4c], edx
        mov dword ptr [esp + 0x24], ebx
        je L_7BED3D
        cmp eax, 0x100
        jne L_7BEC11
        mov eax, dword ptr [esi + 0x64]
        mov edi, 0x9
        mov dword ptr [esp + 0x18], 0x1ff
        lea edx, [eax + 0x810]
        add eax, 0xff8
        mov dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [esi + 0x4c]
        cmp edx, edi
        mov dword ptr [esp + 0x20], eax
        jl L_7BECF5
        mov ecx, dword ptr [esp + 0x30]
        xor eax, eax
        mov al, byte ptr [ecx]
        mov ecx, ebp
        shl eax, cl
        add ebp, 0x8
        or ebx, eax
        mov eax, dword ptr [esp + 0x30]
        inc eax
        cmp ebp, edi
        mov dword ptr [esp + 0x30], eax
        jge L_7BEBD0
        mov ecx, dword ptr [esp + 0x30]
        xor eax, eax
        mov al, byte ptr [ecx]
        mov ecx, ebp
        shl eax, cl
        mov ecx, dword ptr [esp + 0x30]
        or ebx, eax
        inc ecx
        mov dword ptr [esp + 0x30], ecx
        add ebp, 0x8
    L_7BEBD0:
        mov eax, ebx
        sub ebp, 0x9
        and eax, 0x1ff
        add edx, -0x9
        sar ebx, 0x9
        cmp eax, 0x101
        mov dword ptr [esi + 0x4c], edx
        je L_7BED3D
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [ecx], al
        mov edx, dword ptr [esi + 0x64]
        inc ecx
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [esp + 0x34]
        dec ecx
        lea eax, [edx + 8*eax]
        mov dword ptr [esp + 0x34], ecx
        mov dword ptr [esp + 0x14], eax
        jmp L_7BECCB
    L_7BEC11:
        mov ecx, dword ptr [esi + 0x64]
        mov ebx, dword ptr [esp + 0x14]
        lea edx, [ecx + 8*eax]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [ecx], ebx
        mov bl, byte ptr [ebx + 0x7]
        mov byte ptr [ecx + 0x7], bl
        mov ebx, dword ptr [esp + 0x14]
        mov bx, word ptr [ebx + 0x4]
        inc bx
        cmp edx, ecx
        mov word ptr [ecx + 0x4], bx
        jae L_7BEC40
        xor ebx, ebx
        mov bl, byte ptr [edx + 0x7]
        jmp L_7BEC45
    L_7BEC40:
        xor ebx, ebx
        mov bl, byte ptr [ecx + 0x7]
    L_7BEC45:
        mov byte ptr [ecx + 0x6], bl
        mov ebx, dword ptr [esp + 0x20]
        add ecx, 0x8
        cmp ecx, ebx
        mov dword ptr [esp + 0x1c], ecx
        jbe L_7BEC7A
        inc edi
        cmp edi, 0xc
        jle L_7BEC62
        mov edi, 0xc
    L_7BEC62:
        mov ebx, 0x1
        mov ecx, edi
        shl ebx, cl
        mov ecx, dword ptr [esi + 0x64]
        dec ebx
        mov dword ptr [esp + 0x18], ebx
        lea ecx, [ecx + 8*ebx]
        mov dword ptr [esp + 0x20], ecx
    L_7BEC7A:
        cmp eax, 0x100
        mov dword ptr [esp + 0x14], edx
        jl L_7BECB3
        mov ecx, dword ptr [esp + 0x34]
        xor eax, eax
        mov ax, word ptr [edx + 0x4]
        cmp eax, ecx
        jg L_7BED12
        mov ebx, dword ptr [esp + 0x10]
        add ebx, eax
        sub ecx, eax
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x34], ecx
        mov eax, ebx
    L_7BECA5:
        mov cl, byte ptr [edx + 0x6]
        dec eax
        mov byte ptr [eax], cl
        mov edx, dword ptr [edx]
        test edx, edx
        jne L_7BECA5
        jmp L_7BECC7
    L_7BECB3:
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [ecx], al
        mov eax, dword ptr [esp + 0x34]
        inc ecx
        dec eax
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x34], eax
    L_7BECC7:
        mov ebx, dword ptr [esp + 0x24]
    L_7BECCB:
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        jle L_7BED3D
        jmp L_7BEAEF
    L_7BECD8:
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [eax + 0x16c]
        mov eax, dword ptr [eax]
        push edx
        push 0xab2470
        push eax
        call ext_007AF620
        add esp, 0xc
        jmp L_7BED3D
    L_7BECF5:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [eax + 0x16c]
        mov edx, dword ptr [eax]
        push ecx
        push 0xab2470
        push edx
        call ext_007AF620
        add esp, 0xc
        jmp L_7BED3D
    L_7BED12:
        mov dword ptr [esi + 0x54], edx
    L_7BED15:
        mov edx, dword ptr [edx]
        xor eax, eax
        mov ax, word ptr [edx + 0x4]
        cmp eax, ecx
        jg L_7BED15
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x48], ecx
        add eax, ecx
    L_7BED2A:
        mov bl, byte ptr [edx + 0x6]
        dec eax
        dec ecx
        mov byte ptr [eax], bl
        mov edx, dword ptr [edx]
        jne L_7BED2A
        mov ebx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x34], ecx
    L_7BED3D:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x1e0], ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x58], ecx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x60], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [esi + 0x44], edx
        mov edx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov word ptr [esi + 0x30], di
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], ebp
        mov dword ptr [esi + 0x5c], edx
        jle L_7BEA85
        mov edx, dword ptr [eax + 0x164]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push 0xab24e4
        push eax
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x007BEE40] sub_007BEE40 (902 bytes)
extern "C" void ext_0079B850();
extern "C" void ext_007BF2B0();
extern "C" __declspec(naked) void __cdecl fn_007BEE40(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        sub esp, 0x34
        push esi
        mov esi, dword ptr [ecx + 0x1cc]
        test esi, esi
        jne L_7BEE59
        xor eax, eax
        pop esi
        add esp, 0x34
        ret
L_7BEE59:
        mov eax, dword ptr [esi + 0x50]
        mov edx, dword ptr [esi + 0x54]
        mov ecx, dword ptr [ecx + 0x1e0]
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esi + 0x48]
        mov dword ptr [esp + 0xc], edx
        mov edx, dword ptr [esi + 0x58]
        mov dword ptr [esp + 0x20], eax
        xor eax, eax
        mov dword ptr [esp + 0x4], ecx
        mov ax, word ptr [esi + 0x34]
        mov cx, word ptr [esi + 0x44]
        mov dword ptr [esp + 0x18], eax
        xor eax, eax
        mov ax, word ptr [esi + 0x32]
        push ebx
        push ebp
        mov ebp, dword ptr [esi + 0x38]
        xor ebx, ebx
        push edi
        mov edi, dword ptr [esi + 0x3c]
        mov bx, word ptr [esi + 0x30]
        mov dword ptr [esp + 0x38], edx
        mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 0x20], eax
        jne L_7BEF22
        test edx, edx
        jle L_7BF176
        mov ecx, ebx
        add edi, ebx
        shl ebp, cl
        add edi, -0x8
        mov ecx, edi
        or ebp, 0x100
        mov edx, ebp
        sar edx, cl
        mov ecx, dword ptr [esp + 0x10]
        inc ecx
        cmp edi, 0x8
        mov dword ptr [esp + 0x10], ecx
        mov byte ptr [ecx - 0x1], dl
        jl L_7BEEF4
        add edi, -0x8
        mov edx, ebp
        mov ecx, edi
        sar edx, cl
        mov ecx, dword ptr [esp + 0x10]
        inc ecx
        mov dword ptr [esp + 0x10], ecx
        mov byte ptr [ecx - 0x1], dl
L_7BEEF4:
        mov ecx, dword ptr [esp + 0x18]
        add ecx, ebx
        mov dword ptr [esp + 0x18], ecx
        mov ecx, dword ptr [esp + 0x4c]
        movzx dx, byte ptr [ecx]
        inc ecx
        mov word ptr [esp + 0x1c], dx
        mov edx, dword ptr [esp + 0x50]
        mov dword ptr [esp + 0x4c], ecx
        mov ecx, dword ptr [esp + 0x14]
        dec edx
        inc ecx
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [esp + 0x1c]
L_7BEF22:
        test edx, edx
        jle L_7BF176
        mov dword ptr [esp + 0x34], edx
        jmp L_7BEF34
L_7BEF30:
        mov ecx, dword ptr [esp + 0x1c]
L_7BEF34:
        mov edx, dword ptr [esp + 0x4c]
        xor eax, eax
        and ecx, 0xffff
        mov al, byte ptr [edx]
        inc edx
        mov dword ptr [esp + 0x4c], edx
        mov edx, dword ptr [esp + 0x14]
        inc edx
        mov dword ptr [esp + 0x40], eax
        mov dword ptr [esp + 0x14], edx
        mov edx, eax
        shl edx, 0xc
        shl eax, 0x5
        mov dword ptr [esp + 0x3c], ecx
        add edx, ecx
        xor eax, ecx
        mov ecx, dword ptr [esi + 0x5c]
        mov dword ptr [esp + 0x28], edx
        lea ecx, [ecx + 8*eax]
        mov dword ptr [esp + 0x50], ecx
        mov ecx, dword ptr [ecx]
        cmp ecx, edx
        jne L_7BEF8A
        mov edx, dword ptr [esp + 0x50]
        mov ax, word ptr [edx + 0x4]
        mov word ptr [esp + 0x1c], ax
        jmp L_7BF15F
L_7BEF8A:
        test ecx, ecx
        jl L_7BEFFA
        mov ecx, 0x2329
        sub ecx, eax
        test eax, eax
        mov dword ptr [esp + 0x30], ecx
        jne L_7BEFA6
        mov ecx, 0x1
        mov dword ptr [esp + 0x30], ecx
L_7BEFA6:
        mov edx, dword ptr [esp + 0x50]
L_7BEFAA:
        sub eax, ecx
        shl ecx, 0x3
        sub edx, ecx
        test eax, eax
        mov dword ptr [esp + 0x1c], edx
        jge L_7BEFC8
        add eax, 0x2329
        add edx, 0x11948
        mov dword ptr [esp + 0x1c], edx
L_7BEFC8:
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x50], edx
        mov edx, dword ptr [edx]
        cmp edx, ecx
        je L_7BEFE4
        test edx, edx
        jl L_7BEFF6
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x1c]
        jmp L_7BEFAA
L_7BEFE4:
        mov ecx, dword ptr [esp + 0x1c]
        mov dx, word ptr [ecx + 0x4]
        mov word ptr [esp + 0x1c], dx
        jmp L_7BF15F
L_7BEFF6:
        mov edx, dword ptr [esp + 0x28]
L_7BEFFA:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x38]
        cmp eax, ecx
        jbe L_7BF033
        mov ecx, eax
        mov eax, dword ptr [esp + 0x48]
        push eax
        sub ecx, dword ptr [eax + 0x1d8]
        mov dword ptr [eax + 0x1e4], ecx
        call ext_0079B850
        mov edx, dword ptr [esp + 0x4c]
        add esp, 0x4
        mov eax, dword ptr [edx + 0x1d8]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x10], eax
L_7BF033:
        mov ecx, ebx
        add edi, ebx
        shl ebp, cl
        mov ecx, dword ptr [esp + 0x3c]
        add edi, -0x8
        or ebp, ecx
        mov ecx, edi
        mov eax, ebp
        sar eax, cl
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        mov byte ptr [eax], cl
        inc eax
        cmp edi, 0x8
        mov dword ptr [esp + 0x10], eax
        jl L_7BF070
        add edi, -0x8
        mov eax, ebp
        mov ecx, edi
        sar eax, cl
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        mov byte ptr [eax], cl
        inc eax
        mov dword ptr [esp + 0x10], eax
L_7BF070:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x50]
        add eax, ebx
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0x24]
        mov word ptr [ecx + 0x4], ax
        inc eax
        cmp eax, 0xffe
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [ecx], edx
        jne L_7BF100
L_7BF09C:
        push esi
        call ext_007BF2B0
        mov ecx, ebx
        add edi, ebx
        shl ebp, cl
        add edi, -0x8
        xor eax, eax
        mov ecx, edi
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x14]
        or ebp, 0x100
        add esp, 0x4
        mov edx, ebp
        mov dword ptr [esp + 0x24], 0x102
        sar edx, cl
        inc eax
        cmp edi, 0x8
        mov dword ptr [esp + 0x10], eax
        mov byte ptr [eax - 0x1], dl
        jl L_7BF0ED
        add edi, -0x8
        mov edx, ebp
        mov ecx, edi
        sar edx, cl
        inc eax
        mov dword ptr [esp + 0x10], eax
        mov byte ptr [eax - 0x1], dl
L_7BF0ED:
        mov dword ptr [esp + 0x18], ebx
        mov ebx, 0x9
        mov dword ptr [esp + 0x20], 0x1ff
        jmp L_7BF15F
L_7BF100:
        cmp eax, dword ptr [esp + 0x20]
        jle L_7BF117
        inc ebx
        mov eax, 0x1
        mov ecx, ebx
        shl eax, cl
        dec eax
        mov dword ptr [esp + 0x20], eax
        jmp L_7BF15F
L_7BF117:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        jl L_7BF15F
        mov eax, ecx
        cmp eax, 0x7fffff
        lea ecx, [eax + 0x2710]
        mov dword ptr [esp + 0x2c], ecx
        jle L_7BF14B
        mov ecx, dword ptr [esp + 0x18]
        sar ecx, 0x8
        jne L_7BF146
        mov eax, 0x7fffffff
        jmp L_7BF153
L_7BF146:
        cdq
        idiv ecx
        jmp L_7BF153
L_7BF14B:
        shl eax, 0x8
        cdq
        idiv dword ptr [esp + 0x18]
L_7BF153:
        cmp eax, dword ptr [esi + 0x4c]
        jle L_7BF09C
        mov dword ptr [esi + 0x4c], eax
L_7BF15F:
        mov eax, dword ptr [esp + 0x34]
        dec eax
        mov dword ptr [esp + 0x34], eax
        jne L_7BEF30
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
L_7BF176:
        mov edx, dword ptr [esp + 0x14]
        and ecx, 0xffff
        mov dword ptr [esi + 0x50], edx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x54], edx
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [esi + 0x44], ecx
        mov cx, word ptr [esp + 0x24]
        mov word ptr [esi + 0x32], ax
        mov eax, dword ptr [esp + 0x48]
        mov dword ptr [esi + 0x48], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x38], ebp
        pop edi
        mov word ptr [esi + 0x34], cx
        mov word ptr [esi + 0x30], bx
        pop ebp
        mov dword ptr [eax + 0x1e0], edx
        pop ebx
        mov eax, 0x1
        pop esi
        add esp, 0x34
        ret
    }
}

// [0x007BE660] sub_007BE660 (944 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_007AF620();
extern "C" void ext_007BEA10();
extern "C" __declspec(naked) int __cdecl fn_007BE660(void* a, unsigned char* b, int c) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x30]
        push esi
        mov esi, dword ptr [ebp + 0x1cc]
        push edi
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x34], edx
        mov edi, dword ptr [esi + 0x48]
        test edi, edi
        je L703
        mov eax, dword ptr [esi + 0x54]
        xor ecx, ecx
        mov cx, word ptr [eax + 0x4]
        sub ecx, edi
        cmp ecx, edx
        jle L6de
        add edi, edx
        mov dword ptr [esi + 0x48], edi
L69c:
        mov eax, dword ptr [eax]
        dec ecx
        cmp ecx, edx
        jle L6b4
        test eax, eax
        jne L69c
L6a7:
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x1c
        ret
L6b4:
        test eax, eax
        je L6a7
        add edx, ebx
L6ba:
        mov cl, byte ptr [eax + 0x6]
        dec edx
        mov byte ptr [edx], cl
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [eax]
        dec ecx
        mov dword ptr [esp + 0x34], ecx
        je L6a7
        test eax, eax
        jne L6ba
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x1c
        ret
L6de:
        lea edi, [ecx + ebx]
        sub edx, ecx
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x34], edx
L6eb:
        xor edx, edx
        dec edi
        mov dl, byte ptr [eax + 0x6]
        mov eax, dword ptr [eax]
        dec ecx
        mov byte ptr [edi], dl
        je L6fc
        test eax, eax
        jne L6eb
L6fc:
        mov dword ptr [esi + 0x48], 0
L703:
        mov eax, dword ptr [esi + 0x44]
        mov edx, dword ptr [ebp + 0x1e0]
        mov ecx, dword ptr [esi + 0x58]
        mov ebx, dword ptr [esi + 0x38]
        mov edi, dword ptr [esi + 0x3c]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esi + 0x60]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esi + 0x5c]
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esp + 0x34]
        xor ebp, ebp
        mov bp, word ptr [esi + 0x30]
        mov dword ptr [esp + 0x18], ecx
        test eax, eax
        mov dword ptr [esp + 0x20], edx
        jle L99f
L741:
        mov eax, dword ptr [esi + 0x4c]
        cmp eax, ebp
        jl L92d
        mov ecx, dword ptr [esp + 0x14]
        xor edx, edx
        shl ebx, 8
        mov dl, byte ptr [ecx]
        add edi, 8
        or ebx, edx
        inc ecx
        cmp edi, ebp
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x14], ecx
        jge L77e
        xor edx, edx
        mov dl, byte ptr [ecx]
        shl ebx, 8
        or ebx, edx
        inc ecx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x14], ecx
        add edi, 8
L77e:
        mov ecx, edi
        mov edi, dword ptr [esp + 0x1c]
        sub ecx, ebp
        mov edx, ebx
        sar edx, cl
        sub eax, ebp
        mov dword ptr [esi + 0x4c], eax
        and edx, edi
        mov edi, ecx
        cmp dx, 0x101
        je L99f
        cmp dx, 0x100
        jne L847
        mov eax, dword ptr [esi + 0x64]
        mov edx, dword ptr [esi + 0x4c]
        mov ebp, 9
        mov dword ptr [esp + 0x1c], 0x1ff
        lea ecx, [eax + 0x810]
        add eax, 0xff0
        cmp edx, ebp
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], eax
        jl L92d
        mov eax, dword ptr [esp + 0x14]
        xor ecx, ecx
        shl ebx, 8
        mov cl, byte ptr [eax]
        add edi, 8
        or ebx, ecx
        inc eax
        cmp edi, ebp
        mov dword ptr [esp + 0x14], eax
        jge L801
        xor ecx, ecx
        mov cl, byte ptr [eax]
        shl ebx, 8
        or ebx, ecx
        inc eax
        mov dword ptr [esp + 0x14], eax
        add edi, 8
L801:
        lea ecx, [edi - 9]
        mov eax, ebx
        sar eax, cl
        add edx, -9
        mov edi, ecx
        mov dword ptr [esi + 0x4c], edx
        and eax, 0x1ff
        cmp ax, 0x101
        je L99f
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x34]
        mov byte ptr [ecx], al
        inc ecx
        dec edx
        and eax, 0xffff
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [esi + 0x64]
        mov dword ptr [esp + 0x10], ecx
        lea eax, [edx + 8*eax]
        mov dword ptr [esp + 0x18], eax
        jmp L920
L847:
        mov eax, dword ptr [esi + 0x64]
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, edx
        and ecx, 0xffff
        lea eax, [eax + 8*ecx]
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [ecx], ebx
        mov bl, byte ptr [ebx + 7]
        mov byte ptr [ecx + 7], bl
        mov ebx, dword ptr [esp + 0x18]
        mov bx, word ptr [ebx + 4]
        inc bx
        cmp eax, ecx
        mov word ptr [ecx + 4], bx
        jae L87e
        xor ebx, ebx
        mov bl, byte ptr [eax + 7]
        jmp L883
L87e:
        xor ebx, ebx
        mov bl, byte ptr [ecx + 7]
L883:
        mov byte ptr [ecx + 6], bl
        mov ebx, dword ptr [esp + 0x24]
        add ecx, 8
        cmp ecx, ebx
        mov dword ptr [esp + 0x20], ecx
        jbe L8b9
        inc ebp
        cmp ebp, 0xc
        jle L8a0
        mov ebp, 0xc
L8a0:
        mov ebx, 1
        mov ecx, ebp
        shl ebx, cl
        mov ecx, dword ptr [esi + 0x64]
        dec ebx
        mov dword ptr [esp + 0x1c], ebx
        lea ecx, [ecx + 8*ebx - 8]
        mov dword ptr [esp + 0x24], ecx
L8b9:
        cmp dx, 0x100
        mov dword ptr [esp + 0x18], eax
        jb L908
        mov ecx, dword ptr [esp + 0x34]
        xor ebx, ebx
        mov bx, word ptr [eax + 4]
        cmp ebx, ecx
        jg L94a
        mov edx, dword ptr [esp + 0x10]
        add edx, ebx
        mov dword ptr [esp + 0x28], edx
L8dc:
        xor ecx, ecx
        dec edx
        mov cl, byte ptr [eax + 6]
        mov eax, dword ptr [eax]
        test eax, eax
        mov byte ptr [edx], cl
        je L8f8
        cmp edx, dword ptr [esp + 0x10]
        ja L8dc
        test eax, eax
        jne L98e
L8f8:
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x34]
        sub eax, ebx
        jmp L918
L908:
        mov eax, dword ptr [esp + 0x10]
        mov byte ptr [eax], dl
        inc eax
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x34]
        dec eax
L918:
        mov ebx, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x34], eax
L920:
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        jle L99f
        jmp L741
L92d:
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [eax + 0x16c]
        mov edx, dword ptr [eax]
        push ecx
        push 0xab2470
        push edx
        call ext_007AF620
        add esp, 0xc
        jmp L99f
L94a:
        mov dword ptr [esi + 0x54], eax
L94d:
        mov eax, dword ptr [eax]
        test eax, eax
        je L99b
        xor edx, edx
        mov dx, word ptr [eax + 4]
        cmp edx, ecx
        jg L94d
        test eax, eax
        je L99b
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x48], ecx
        add edx, ecx
L96a:
        mov bl, byte ptr [eax + 6]
        dec edx
        dec ecx
        mov byte ptr [edx], bl
        mov eax, dword ptr [eax]
        je L97f
        test eax, eax
        jne L96a
        mov dword ptr [esp + 0x34], ecx
        jmp L99b
L97f:
        test eax, eax
        mov dword ptr [esp + 0x34], ecx
        je L99b
        mov eax, dword ptr [esp + 0x30]
        push eax
        jmp L993
L98e:
        mov ecx, dword ptr [esp + 0x30]
        push ecx
L993:
        call ext_007BEA10
        add esp, 4
L99b:
        mov ebx, dword ptr [esp + 0x38]
L99f:
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x1e0], edx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x44], ecx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x5c], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [esi + 0x58], edx
        mov edx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov word ptr [esi + 0x30], bp
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x60], edx
        jle L6a7
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [eax + 0x164]
        push ecx
        push 0xab2434
        push edx
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    }
}

// [0x007B0A40] sub_007B0A40 (970 bytes)
extern "C" void ext_007AF5E0();
extern "C" void ext_007B04C0();
extern "C" void ext_007B06A0();
extern "C" void ext_007B08E0();
extern "C" void ext_007B09C0();
extern "C" void ext_007B0E70();
extern "C" void ext_007B0ED0();
extern "C" void ext_007B0FC0();
extern "C" void ext_007B1030();
extern "C" void ext_007B10D0();
extern "C" void ext_007B1110();
extern "C" void ext_00798FF0();
extern "C" void ext_0079AF50();

extern "C" __declspec(naked) int __cdecl fn_007B0A40(void* a1, void* a2) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor eax, eax
        xor ebp, ebp
        mov ax, word ptr [edi]
        push eax
        push esi
        call ext_007AF5E0
        mov ebx, eax
        mov eax, dword ptr [edi + 0x4]
        add esp, 8
        cmp eax, 1
        mov dword ptr [esp + 0x20], ebx
        jbe L7B0A_C3B
        xor ecx, ecx
        mov cx, word ptr [edi + 0x2]
        dec ecx
        cmp ecx, 0xb
        ja L7B0A_E00
        jmp dword ptr [4*ecx + 0x7b0e0c]
L7B0A_A89:
        lea ecx, [eax + eax]
        push 0x9993fc
        push ecx
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je short L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B08E0
        add esp, 0xc
        test eax, eax
        jne L7B0A_BEE
L7B0A_AB4:
        xor ebp, ebp
        jmp L7B0A_C20
L7B0A_ABB:
        lea edx, [eax + eax]
        push 0x9993fc
        push edx
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je short L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B09C0
        add esp, 0xc
        test eax, eax
        jne L7B0A_BEE
        xor ebp, ebp
        jmp L7B0A_C20
L7B0A_AED:
        shl eax, 2
        push 0x9993fc
        push eax
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je short L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B10D0
        add esp, 0xc
        test eax, eax
        jne L7B0A_BEE
        xor ebp, ebp
        jmp L7B0A_C20
L7B0A_B1F:
        lea ecx, [4*eax]
        push 0x9993fc
        push ecx
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B1030
        add esp, 0xc
        test eax, eax
        jne L7B0A_BEE
        xor ebp, ebp
        jmp L7B0A_C20
L7B0A_B59:
        lea edx, [4*eax]
        push 0x9993fc
        push edx
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B10D0
        add esp, 0xc
        test eax, eax
        jne short L7B0A_BEE
        xor ebp, ebp
        jmp L7B0A_C20
L7B0A_B8F:
        shl eax, 3
        push 0x9993fc
        push eax
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je L7B0A_AB4
        push ebx
        push edi
        push esi
        call ext_007B1110
        add esp, 0xc
        test eax, eax
        jne short L7B0A_BEE
        xor ebp, ebp
        jmp short L7B0A_C20
L7B0A_BBE:
        inc eax
        push 0x9993fc
        push eax
        push esi
        call ext_007B04C0
        mov ebx, eax
        add esp, 0xc
        test ebx, ebx
        je short L7B0A_BE3
        push ebx
        push edi
        push esi
        call ext_007B0E70
        add esp, 0xc
        test eax, eax
        jne short L7B0A_BE7
L7B0A_BE3:
        xor ebp, ebp
        jmp short L7B0A_C20
L7B0A_BE7:
        mov ecx, dword ptr [edi + 0x4]
        mov byte ptr [ecx + ebx], 0
L7B0A_BEE:
        mov edx, dword ptr [esp + 0x20]
        push ebx
        mov al, byte ptr [edx + 0xf]
        test al, al
        je short L7B0A_C0F
        mov eax, dword ptr [edi + 0x4]
        xor ecx, ecx
        mov cx, word ptr [edi]
        push eax
        push ecx
        push esi
        call ext_00798FF0
        add esp, 0x10
        jmp short L7B0A_C1E
L7B0A_C0F:
        xor edx, edx
        mov dx, word ptr [edi]
        push edx
        push esi
        call ext_00798FF0
        add esp, 0xc
L7B0A_C1E:
        mov ebp, eax
L7B0A_C20:
        test ebx, ebx
        je L7B0A_E00
        push ebx
        call ext_0079AF50
        add esp, 4
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
L7B0A_C3B:
        push 1
        push edi
        push esi
        call ext_007B06A0
        add esp, 0xc
        test eax, eax
        je L7B0A_E00
        mov ax, word ptr [edi + 0x2]
        mov edx, eax
        and edx, 0xffff
        lea ecx, [edx - 1]
        cmp ecx, 0xb
        ja L7B0A_E00
        jmp dword ptr [4*ecx + 0x7b0e3c]
L7B0A_C6E:
        mov eax, dword ptr [ebx + 0x8]
        cmp eax, 4
        je short L7B0A_CC9
        cmp eax, 9
        je short L7B0A_CC9
        cmp word ptr [esi + 0x150], 0x4d4d
        jne short L7B0A_CA0
        mov ecx, dword ptr [esi + 0x15c]
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ecx + 4*edx]
        shr eax, cl
        mov ecx, dword ptr [esi + 0x160]
        and ax, word ptr [ecx + 4*edx]
        jmp short L7B0A_CAD
L7B0A_CA0:
        mov eax, dword ptr [esi + 0x160]
        mov eax, dword ptr [eax + 4*edx]
        and ax, word ptr [edi + 0x8]
L7B0A_CAD:
        mov cl, byte ptr [ebx + 0xf]
        mov dword ptr [esp + 0x20], eax
        test cl, cl
        je short L7B0A_CBE
        lea ecx, [esp + 0x20]
        jmp short L7B0A_D32
L7B0A_CBE:
        and eax, 0xffff
L7B0A_CC3:
        push eax
        jmp L7B0A_DEF
L7B0A_CC9:
        cmp word ptr [esi + 0x150], 0x4d4d
        jne short L7B0A_CED
        mov ecx, dword ptr [esi + 0x15c]
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ecx + 4*edx]
        shr eax, cl
        mov ecx, dword ptr [esi + 0x160]
        and eax, dword ptr [ecx + 4*edx]
        jmp short L7B0A_CFB
L7B0A_CED:
        mov eax, dword ptr [esi + 0x160]
        mov ecx, dword ptr [edi + 0x8]
        mov eax, dword ptr [eax + 4*edx]
        and eax, ecx
L7B0A_CFB:
        mov cl, byte ptr [ebx + 0xf]
        mov dword ptr [esp + 0x20], eax
        test cl, cl
        je short L7B0A_CC3
        lea ecx, [esp + 0x20]
        jmp short L7B0A_D32
L7B0A_D0C:
        cmp ax, 0xb
        push edi
        push esi
        jne short L7B0A_D1B
        call ext_007B0FC0
        jmp short L7B0A_D20
L7B0A_D1B:
        call ext_007B0ED0
L7B0A_D20:
        mov al, byte ptr [ebx + 0xf]
        add esp, 8
        fstp dword ptr [esp + 0x20]
        test al, al
        je short L7B0A_D4E
        lea ecx, [esp + 0x20]
L7B0A_D32:
        xor edx, edx
        push ecx
        mov dx, word ptr [edi]
        push 1
        push edx
        push esi
        call ext_00798FF0
        add esp, 0x10
        mov ebp, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
L7B0A_D4E:
        fld dword ptr [esp + 0x20]
        sub esp, 8
        xor eax, eax
        mov ax, word ptr [edi]
        fstp qword ptr [esp]
        push eax
        push esi
        call ext_00798FF0
        add esp, 0x10
        mov ebp, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
L7B0A_D71:
        lea ecx, [esp + 0x10]
        push ecx
        push edi
        push esi
        call ext_007B1110
        add esp, 0xc
        test eax, eax
        je short L7B0A_DC0
        mov al, byte ptr [ebx + 0xf]
        test al, al
        je short L7B0A_D94
        lea edx, [esp + 0x10]
        push edx
        push 1
        jmp short L7B0A_D9E
L7B0A_D94:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        push edx
L7B0A_D9E:
        xor eax, eax
        mov ax, word ptr [edi]
        push eax
        push esi
        call ext_00798FF0
        add esp, 0x10
        test eax, eax
        je short L7B0A_DC0
        mov ebp, 1
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
L7B0A_DC0:
        xor ebp, ebp
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
L7B0A_DCC:
        lea ecx, [esp + 0x20]
        push ecx
        push edi
        push esi
        call ext_007B0E70
        mov ebp, eax
        add esp, 0xc
        neg ebp
        sbb ebp, ebp
        neg ebp
        je short L7B0A_E00
        lea edx, [esp + 0x20]
        mov byte ptr [esp + 0x21], 0
        push edx
L7B0A_DEF:
        xor eax, eax
        mov ax, word ptr [edi]
        push eax
        push esi
        call ext_00798FF0
        add esp, 0xc
        mov ebp, eax
L7B0A_E00:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007B1980] sub_007B1980 (1103 bytes)
extern "C" void ext_00798870();
extern "C" void ext_007994D0();
extern "C" void ext_0079AF40();
extern "C" void ext_0079AFE0();
extern "C" void ext_0079B140();
extern "C" void ext_007AEFD0();
extern "C" void ext_007AEFF0();
extern "C" void ext_007AF800();
extern "C" void ext_007AF940();
extern "C" void ext_007B1920();
extern "C" void ext_007B1E20();
extern "C" __declspec(naked) void* __fastcall fn_007B1980(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        push esi
        push edi
        push 0x9994cc
        push eax
        call ext_007B1920
        mov ebx, eax
        add esp, 0x8
        cmp ebx, -0x1
        je L1980_19D4
        mov esi, dword ptr [esp + 0x14]
        or ecx, -0x1
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0x228
        push ecx
        call ext_0079AF40
        mov ebp, eax
        add esp, 0x4
        test ebp, ebp
        jne L1980_19E7
        push esi
        push 0xab1698
        push 0x9994cc
        call ext_0079B140
        add esp, 0xc
    L1980_19D4:
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        call dword ptr [esp + 0x30]
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_19E7:
        push 0x228
        push 0x0
        push ebp
        call ext_0079AFE0
        lea edx, [ebp + 0x228]
        mov edi, esi
        or ecx, -0x1
        xor eax, eax
        mov dword ptr [ebp], edx
        push ebp
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        mov edx, dword ptr [esp + 0x2c]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        or eax, -0x1
        and ecx, 0x3
        rep movsb
        mov ecx, ebx
        mov dword ptr [ebp + 0x16c], eax
        mov dword ptr [ebp + 0x164], eax
        mov eax, dword ptr [esp + 0x30]
        and ch, -0x4
        mov dword ptr [ebp + 0x1f8], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [ebp + 0x8], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [ebp + 0x1fc], eax
        mov eax, dword ptr [esp + 0x3c]
        mov dword ptr [ebp + 0x200], ecx
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr [ebp + 0x204], edx
        mov edx, dword ptr [esp + 0x44]
        mov dword ptr [ebp + 0x208], eax
        mov eax, dword ptr [esp + 0x48]
        xor edi, edi
        mov word ptr [ebp + 0x168], 0xffff
        mov dword ptr [ebp + 0x170], edi
        mov dword ptr [ebp + 0x20c], ecx
        mov dword ptr [ebp + 0x1f0], edx
        mov dword ptr [ebp + 0x1f4], eax
        call ext_007AF800
        add esp, 0x10
        cmp ebx, edi
        mov dword ptr [ebp + 0xc], 0x1
        jne L1980_1AB1
        mov dword ptr [ebp + 0xc], 0x801
        jmp L1980_1AB6
    L1980_1AB1:
        cmp ebx, 0x2
        jne L1980_1ABF
    L1980_1AB6:
        mov eax, dword ptr [ebp + 0xc]
        or ah, 0x80
        mov dword ptr [ebp + 0xc], eax
    L1980_1ABF:
        mov esi, dword ptr [esp + 0x18]
        cmp byte ptr [esi], 0x0
        je L1980_1B42
        mov ecx, 0xffff7fff
    L1980_1ACD:
        movsx eax, byte ptr [esi]
        add eax, -0x42
        cmp eax, 0x2b
        ja L1980_1B3A
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b1df4]
        jmp dword ptr [4*edx + 0x7b1dd0]
    L1980_1AE7:
        test bh, 0x1
        je L1980_1B3A
        mov eax, dword ptr [ebp + 0xc]
        or al, 0x80
        jmp L1980_1B37
    L1980_1AF3:
        mov edx, dword ptr [ebp + 0xc]
        and edx, -0x2
        or edx, 0x2
        mov dword ptr [ebp + 0xc], edx
        jmp L1980_1B3A
    L1980_1B01:
        mov eax, dword ptr [ebp + 0xc]
        and al, -0x3
        or al, 0x1
        jmp L1980_1B37
    L1980_1B0A:
        cmp ebx, edi
        jne L1980_1B3A
        mov eax, dword ptr [ebp + 0xc]
        or ah, 0x8
        jmp L1980_1B37
    L1980_1B16:
        cmp ebx, edi
        jne L1980_1B3A
        mov eax, dword ptr [ebp + 0xc]
        and ah, -0x9
        jmp L1980_1B37
    L1980_1B22:
        cmp ebx, edi
        jne L1980_1B3A
        mov eax, dword ptr [ebp + 0xc]
        or ah, 0x80
        jmp L1980_1B37
    L1980_1B2E:
        cmp ebx, edi
        jne L1980_1B3A
        mov eax, dword ptr [ebp + 0xc]
        and eax, ecx
    L1980_1B37:
        mov dword ptr [ebp + 0xc], eax
    L1980_1B3A:
        mov al, byte ptr [esi + 0x1]
        inc esi
        test al, al
        jne L1980_1ACD
    L1980_1B42:
        mov ecx, dword ptr [ebp + 0x1f8]
        lea esi, [ebp + 0x150]
        push 0x8
        push esi
        push ecx
        call dword ptr [ebp + 0x1fc]
        add esp, 0xc
        cmp eax, 0x8
        je L1980_1C40
        cmp dword ptr [ebp + 0x8], edi
        jne L1980_1B8E
        mov edx, dword ptr [esp + 0x14]
        push 0xab1680
        push edx
        call ext_0079B140
        add esp, 0x8
        mov dword ptr [ebp + 0x8], edi
        push ebp
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1B8E:
        mov ecx, dword ptr [ebp + 0xc]
        mov word ptr [ebp + 0x152], 0x2a
        and ecx, 0x80
        mov eax, ecx
        neg eax
        sbb eax, eax
        and eax, 0x404
        add eax, 0x4949
        cmp ecx, edi
        mov word ptr [esi], ax
        lea eax, [ebp + 0x152]
        je L1980_1BC6
        push eax
        call ext_007AEFD0
        add esp, 0x4
    L1980_1BC6:
        mov eax, dword ptr [ebp + 0x1f8]
        push edi
        push edi
        push eax
        mov dword ptr [ebp + 0x154], edi
        call dword ptr [ebp + 0x204]
        mov ecx, dword ptr [ebp + 0x1f8]
        push 0x8
        push esi
        push ecx
        call dword ptr [ebp + 0x200]
        add esp, 0x18
        cmp eax, 0x8
        je L1980_1C18
        mov edx, dword ptr [esp + 0x14]
        push 0xab1664
        push edx
        call ext_0079B140
        add esp, 0x8
        mov dword ptr [ebp + 0x8], edi
        push ebp
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1C18:
        xor eax, eax
        push edi
        mov ax, word ptr [esi]
        push eax
        push ebp
        call ext_007B1E20
        push ebp
        call ext_007994D0
        add esp, 0x10
        test eax, eax
        je L1980_1DBC
        mov dword ptr [ebp + 0x10], edi
    L1980_1C39:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1C40:
        mov ax, word ptr [esi]
        cmp ax, 0x4d4d
        je L1980_1C7B
        cmp ax, 0x4949
        je L1980_1C7B
        mov ecx, dword ptr [esp + 0x14]
        and eax, 0xffff
        push eax
        push eax
        push 0xab1638
        push ecx
        call ext_0079B140
        add esp, 0x10
        mov dword ptr [ebp + 0x8], edi
        push ebp
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1C7B:
        and eax, 0xffff
        push edi
        push eax
        push ebp
        call ext_007B1E20
        mov al, byte ptr [ebp + 0xc]
        add esp, 0xc
        test al, 0x80
        je L1980_1CAD
        lea edx, [ebp + 0x152]
        push edx
        call ext_007AEFD0
        lea eax, [ebp + 0x154]
        push eax
        call ext_007AEFF0
        add esp, 0x8
    L1980_1CAD:
        mov ax, word ptr [ebp + 0x152]
        cmp ax, 0x2a
        je L1980_1CE6
        mov ecx, dword ptr [esp + 0x14]
        and eax, 0xffff
        push eax
        push eax
        push 0xab1608
        push ecx
        call ext_0079B140
        add esp, 0x10
        mov dword ptr [ebp + 0x8], edi
        push ebp
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1CE6:
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [esp + 0x18]
        or esi, 0x200
        mov dword ptr [ebp + 0x1d8], edi
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp + 0x1e0], edi
        mov dword ptr [ebp + 0x1dc], edi
        mov al, byte ptr [edx]
        cmp al, 0x61
        mov ecx, esi
        je L1980_1DAB
        cmp al, 0x72
        jne L1980_1DBC
        mov eax, dword ptr [ebp + 0x154]
        test ch, 0x8
        mov dword ptr [ebp + 0x14], eax
        je L1980_1D55
        mov eax, dword ptr [ebp + 0x1f8]
        lea ecx, [ebp + 0x1ec]
        lea edx, [ebp + 0x1e8]
        push ecx
        push edx
        push eax
        call dword ptr [ebp + 0x1f0]
        add esp, 0xc
        test eax, eax
        jne L1980_1D55
        mov eax, dword ptr [ebp + 0xc]
        and ah, -0x9
        mov dword ptr [ebp + 0xc], eax
    L1980_1D55:
        push ebp
        call ext_007AF940
        add esp, 0x4
        test eax, eax
        je L1980_1DBC
        cmp ebx, edi
        je L1980_1D92
        cmp word ptr [ebp + 0x44], 0x1
        je L1980_1D92
        mov ecx, dword ptr [esp + 0x14]
        push 0xab15c8
        push ecx
        call ext_0079B140
        add esp, 0x8
        mov dword ptr [ebp + 0x8], edi
        push ebp
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1D92:
        mov eax, dword ptr [ebp + 0xc]
        pop edi
        or al, 0x10
        mov dword ptr [ebp + 0x1e4], 0xffffffff
        mov dword ptr [ebp + 0xc], eax
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    L1980_1DAB:
        push ebp
        call ext_007994D0
        add esp, 0x4
        test eax, eax
        jne L1980_1C39
    L1980_1DBC:
        push ebp
        mov dword ptr [ebp + 0x8], edi
        call ext_00798870
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B9D00] sub_007B9D00 (1227 bytes)
extern "C" void ext_007990D0();
extern "C" void __cdecl ext_007BA470(void* a, void* b, int c);
extern "C" void ext_007BA4B0();
extern "C" void ext_007BA550();
extern "C" void ext_007BA690();
extern "C" void ext_007BA6D0();

extern "C" __declspec(naked) void __fastcall fn_007B9D00(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov cx, word ptr [esi]
        mov ax, word ptr [esi + 0x6]
        mov word ptr [ebx], cx
        mov dx, word ptr [esi + 0x8]
        mov ecx, eax
        mov word ptr [ebx + 0x2], dx
        and ecx, 0xffff
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [ebx + 0x4], ecx
        mov ecx, dword ptr [esi + 0x8]
        dec ecx
        cmp ecx, 0xb
        ja L_7B9E14
        jmp dword ptr [4*ecx + 0x7ba1cc]
        cmp ax, 0x1
        jbe L_7B9D9E
        lea edx, [esp + 0x18]
        cmp ax, 0xffff
        push edx
        jne L_7B9D6B
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        push edi
        call ext_007990D0
        add esp, 0x10
        jmp L_7B9D7B
L_7B9D6B:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        push eax
        push edi
        call ext_007990D0
        add esp, 0xc
L_7B9D7B:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA4B0
        jmp L_7BA12F
L_7B9D9E:
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push esi
        call ext_007990D0
        add esp, 0xc
        cmp word ptr [esi + 0x150], 0x4d4d
        jne L_7B9DF6
        mov edx, dword ptr [esi + 0x160]
        mov edi, dword ptr [esp + 0x18]
        xor ecx, ecx
        and edi, 0xffff
        mov cx, word ptr [ebx + 0x2]
        shl ecx, 0x2
        mov eax, dword ptr [edx + ecx]
        mov edx, dword ptr [esi + 0x15c]
        and eax, edi
        pop edi
        mov ecx, dword ptr [edx + ecx]
        pop esi
        shl eax, cl
        mov dword ptr [ebx + 0x8], eax
        mov eax, 0x1
        pop ebx
        add esp, 0x8
        ret
L_7B9DF6:
        mov ecx, dword ptr [esi + 0x160]
        mov edx, dword ptr [esp + 0x18]
        xor eax, eax
        and edx, 0xffff
        mov ax, word ptr [ebx + 0x2]
        mov eax, dword ptr [ecx + 4*eax]
        and eax, edx
        mov dword ptr [ebx + 0x8], eax
L_7B9E14:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x8
        ret
        cmp ax, 0x1
        jbe L_7B9E7A
        cmp ax, 0xffff
        lea eax, [esp + 0x18]
        push eax
        jne L_7B9E48
        mov edx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        push edi
        call ext_007990D0
        add esp, 0x10
        jmp L_7B9E58
L_7B9E48:
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        push ecx
        push edi
        call ext_007990D0
        add esp, 0xc
L_7B9E58:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi]
        and eax, 0xffff
        push edx
        mov edx, dword ptr [esi + 0x8]
        push eax
        push ebx
        push ecx
        push edx
        push edi
        call ext_007BA690
        jmp L_7BA12F
L_7B9E7A:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x18]
        add ebx, 0x8
        push ebx
        push eax
        push ecx
        call ext_007990D0
        add esp, 0xc
        mov eax, 0x1
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
        cmp ax, 0x1
        jbe L_7B9EF5
        lea edx, [esp + 0x18]
        cmp ax, 0xffff
        push edx
        jne L_7B9EC2
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        push edi
        call ext_007990D0
        add esp, 0x10
        jmp L_7B9ED2
L_7B9EC2:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        push eax
        push edi
        call ext_007990D0
        add esp, 0xc
L_7B9ED2:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA550
        jmp L_7BA12F
L_7B9EF5:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push edi
        call ext_007990D0
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x24]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA550
        add esp, 0x24
        jmp L_7BA132
        cmp ax, 0x1
        jbe L_7B9F88
        lea edx, [esp + 0x18]
        cmp ax, 0xffff
        push edx
        jne L_7B9F55
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        push edi
        call ext_007990D0
        add esp, 0x10
        jmp L_7B9F65
L_7B9F55:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        push eax
        push edi
        call ext_007990D0
        add esp, 0xc
L_7B9F65:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA690
        jmp L_7BA12F
L_7B9F88:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push edi
        call ext_007990D0
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x24]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA690
        add esp, 0x24
        jmp L_7BA132
        cmp ax, 0x1
        jbe L_7BA01B
        lea edx, [esp + 0x18]
        cmp ax, 0xffff
        push edx
        jne L_7B9FE8
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        push edi
        call ext_007990D0
        add esp, 0x10
        jmp L_7B9FF8
L_7B9FE8:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x1c]
        push eax
        push edi
        call ext_007990D0
        add esp, 0xc
L_7B9FF8:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA6D0
        jmp L_7BA12F
L_7BA01B:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x18]
        lea edx, [esp + 0xc]
        push edx
        push eax
        push edi
        call ext_007990D0
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x18]
        and edx, 0xffff
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push ebx
        push eax
        push ecx
        push edi
        call ext_007BA6D0
        add esp, 0x24
        jmp L_7BA132
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push esi
        call ext_007990D0
        mov edx, dword ptr [esp + 0x24]
        or ecx, -1
        mov edi, edx
        xor eax, eax
        repne scasb
        not ecx
        mov dword ptr [ebx + 0x4], ecx
        jmp L_7BA127
        cmp ax, 0x1
        jbe L_7BA111
        cmp ax, 0xffff
        jne L_7BA0B5
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x20]
        push ecx
        push edx
        push eax
        push esi
        call ext_007990D0
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x10
        and ecx, 0xffff
        mov dword ptr [ebx + 0x4], ecx
        jmp L_7BA0F3
L_7BA0B5:
        cmp ax, 0xfffd
        jne L_7BA0DE
        mov ecx, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        lea eax, [esp + 0x1c]
        push edx
        push eax
        push ecx
        push esi
        call ext_007990D0
        mov edx, dword ptr [esp + 0x2c]
        add esp, 0x10
        mov dword ptr [ebx + 0x4], edx
        jmp L_7BA0F3
L_7BA0DE:
        mov ecx, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        push esi
        call ext_007990D0
        add esp, 0xc
L_7BA0F3:
        mov edx, dword ptr [esp + 0x18]
        push edx
        push ebx
        push esi
        call ext_007BA470
        add esp, 0xc
        test eax, eax
        jne L_7B9E14
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
L_7BA111:
        mov ecx, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        push esi
        call ext_007990D0
        lea edx, [esp + 0x24]
L_7BA127:
        push edx
        push ebx
        push esi
        call ext_007BA470
L_7BA12F:
        add esp, 0x18
L_7BA132:
        test eax, eax
        jne L_7B9E14
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
        cmp ax, 0xffff
        jne L_7BA16F
        mov edx, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x18]
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        push edx
        push esi
        call ext_007990D0
        mov eax, dword ptr [esp + 0x30]
        add esp, 0x10
        and eax, 0xffff
        mov dword ptr [ebx + 0x4], eax
        jmp L_7BA1AD
L_7BA16F:
        cmp ax, 0xfffd
        jne L_7BA198
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x1c]
        push ecx
        push edx
        push eax
        push esi
        call ext_007990D0
        mov ecx, dword ptr [esp + 0x2c]
        add esp, 0x10
        mov dword ptr [ebx + 0x4], ecx
        jmp L_7BA1AD
L_7BA198:
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esp + 0x18]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push esi
        call ext_007990D0
        add esp, 0xc
L_7BA1AD:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push ebx
        push esi
        call ext_007BA470
        add esp, 0xc
        test eax, eax
        jne L_7B9E14
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x007B82E0] sub_007B82E0 (1382 bytes)
extern "C" void ext_0079EEC0();
extern "C" void ext_0079EED0();
extern "C" unsigned short ext_007B77D0();
extern "C" unsigned short ext_007B7830();
extern "C" void ext_007B7A90();
extern "C" int mem_00999838;
extern "C" int mem_0099982C;
extern "C" int mem_00999830;
extern "C" int mem_00999834;
extern "C" int mem_00999840;

extern "C" __declspec(naked) void __cdecl fn_007B82E0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        sub esp, 34h
        mov eax, dword ptr [ecx]
        push esi
        xor esi, esi
        cmp eax, 0a020h
        jg L_7B8645
        je L_7B8831
        cmp eax, 3060h
        jg L_7B846E
        je L_7B845B
        cmp eax, 1500h
        jg L_7B83AF
        je L_7B87D3
        cmp eax, 1100h
        jg short L_7B8363
        je L_7B857B
        add eax, -2
        cmp eax, 0feh
        ja L_7B8823
        xor edx, edx
        mov dl, byte ptr [eax + 07b8860h]
        jmp dword ptr [4*edx + 07b8848h]
L_7B8349:
        mov eax, dword ptr [mem_00999838]
        lea esi, [eax + 2*eax]
        jmp L_7B8831
L_7B8356:
        mov eax, dword ptr [mem_0099982C]
        lea esi, [eax + 2*eax]
        jmp L_7B8831
L_7B8363:
        cmp eax, 1410h
        jg short L_7B8394
        je short L_7B8389
        cmp eax, 1200h
        je L_7B8831
        cmp eax, 1300h
        je short L_7B8389
        cmp eax, 1400h
        jne L_7B8823
L_7B8389:
        mov esi, dword ptr [mem_00999838]
        jmp L_7B8831
L_7B8394:
        sub eax, 1420h
        je short L_7B83A4
        sub eax, 10h
        jne L_7B8823
L_7B83A4:
        mov esi, dword ptr [mem_00999830]
        jmp L_7B8831
L_7B83AF:
        cmp eax, 3000h
        jg L_7B843E
        je L_7B8831
        cmp eax, 2302h
        jg short L_7B841F
        je short L_7B840A
        cmp eax, 2100h
        je L_7B8831
        cmp eax, 2200h
        je short L_7B83F8
        cmp eax, 2300h
        jne L_7B8823
        mov ecx, dword ptr [mem_00999838]
        lea esi, [4*ecx]
        jmp L_7B8831
L_7B83F8:
        mov edx, dword ptr [mem_00999838]
        lea esi, [4*edx]
        jmp L_7B8831
L_7B840A:
        mov esi, dword ptr [mem_00999838]
        mov eax, dword ptr [mem_00999834]
        lea ecx, [eax + 2*esi]
        add esi, ecx
        jmp L_7B8831
L_7B841F:
        sub eax, 2d2dh
        je L_7B8831
        sub eax, 10h
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B843E:
        add eax, 0ffffcff0h
        cmp eax, 40h
        ja L_7B8823
        xor edx, edx
        mov dl, byte ptr [eax + 07b8968h]
        jmp dword ptr [4*edx + 07b8960h]
L_7B845B:
        mov eax, dword ptr [mem_00999838]
        mov ecx, dword ptr [mem_00999840]
        lea esi, [ecx + eax]
        jmp L_7B8831
L_7B846E:
        cmp eax, 4160h
        jg L_7B8545
        je L_7B8535
        cmp eax, 4000h
        jg short L_7B84FD
        je short L_7B84B7
        cmp eax, 3d3eh
        jg short L_7B84DE
        je L_7B882B
        sub eax, 3070h
        je short L_7B84CB
        sub eax, 10h
        je short L_7B84B7
        sub eax, 0cbdh
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B84B7:
        lea edx, [esp + 4]
        push 0bh
        push edx
        call ext_007B7A90
        add esp, 8
        jmp L_7B8831
L_7B84CB:
        mov eax, dword ptr [mem_00999838]
        mov ecx, dword ptr [mem_00999840]
        lea esi, [ecx + 4*eax]
        jmp L_7B8831
L_7B84DE:
        sub eax, 3daah
        je L_7B8831
        sub eax, 55h
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B84FD:
        add eax, 0ffffbf00h
        cmp eax, 50h
        ja L_7B8823
        xor edx, edx
        mov dl, byte ptr [eax + 07b89bch]
        jmp dword ptr [4*edx + 07b89ach]
L_7B851A:
        call ext_007B77D0
        and eax, 0ffffh
        imul eax, dword ptr [mem_00999830]
        shl eax, 2
        mov esi, eax
        jmp L_7B8831
L_7B8535:
        mov eax, dword ptr [mem_00999838]
        lea esi, [eax + 2*eax]
        shl esi, 2
        jmp L_7B8831
L_7B8545:
        cmp eax, 4700h
        jg L_7B85DB
        je short L_7B85C6
        cmp eax, 4600h
        jg short L_7B858F
        je L_7B87D3
        sub eax, 4170h
        je L_7B8823
        sub eax, 11h
        je short L_7B857B
        mov esi, dword ptr [ecx + 4]
        dec eax
        sub esi, 6
        jmp L_7B8831
L_7B857B:
        lea eax, [esp + 4]
        push 0dh
        push eax
        call ext_007B7A90
        add esp, 8
        jmp L_7B8831
L_7B858F:
        sub eax, 4610h
        je short L_7B85B3
        sub eax, 31h
        jne L_7B8823
        mov ecx, dword ptr [mem_00999838]
        mov edx, dword ptr [mem_00999830]
        lea esi, [edx + 2*ecx]
        jmp L_7B8831
L_7B85B3:
        mov eax, dword ptr [mem_00999838]
        mov ecx, dword ptr [mem_00999840]
        lea esi, [ecx + 2*eax]
        jmp L_7B8831
L_7B85C6:
        mov edx, dword ptr [mem_00999840]
        mov eax, dword ptr [mem_00999838]
        lea esi, [edx + eax]
        shl esi, 1
        jmp L_7B8831
L_7B85DB:
        cmp eax, 8001h
        jg short L_7B8616
        cmp eax, 8000h
        jge L_7B8831
        cmp eax, 4d4dh
        je L_7B8831
        cmp eax, 7001h
        jne L_7B8823
        mov eax, dword ptr [mem_00999830]
        lea esi, [8*eax]
        sub esi, eax
        jmp L_7B8831
L_7B8616:
        sub eax, 0a000h
        je short L_7B8631
        sub eax, 10h
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B8631:
        lea ecx, [esp + 4]
        push 11h
        push ecx
        call ext_007B7A90
        add esp, 8
        jmp L_7B8831
L_7B8645:
        cmp eax, 0a342h
        jg L_7B8741
        je L_7B8831
        cmp eax, 0a326h
        jg L_7B8724
        cmp eax, 0a324h
        jge L_7B8823
        cmp eax, 0a204h
        jg short L_7B86C9
        je L_7B8831
        cmp eax, 0a053h
        jg short L_7B86A8
        cmp eax, 0a052h
        jge L_7B8831
        add eax, 0ffff5fd0h
        cmp eax, 20h
        ja L_7B8823
        xor edx, edx
        mov dl, byte ptr [eax + 07b8a18h]
        jmp dword ptr [4*edx + 07b8a10h]
L_7B86A8:
        cmp eax, 0a084h
        je L_7B8831
        cmp eax, 0a200h
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B86C9:
        cmp eax, 0a300h
        jg short L_7B86FE
        je L_7B857B
        sub eax, 0a210h
        je L_7B8831
        sub eax, 10h
        je L_7B8831
        sub eax, 10h
        je L_7B8831
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp L_7B8831
L_7B86FE:
        cmp eax, 0a310h
        jne L_7B8823
        mov ecx, dword ptr [mem_0099982C]
        mov edx, dword ptr [mem_00999834]
        mov eax, dword ptr [mem_00999830]
        add ecx, edx
        lea esi, [eax + 2*ecx]
        jmp L_7B8831
L_7B8724:
        add eax, 0ffff5cd8h
        cmp eax, 18h
        ja L_7B8823
        xor edx, edx
        mov dl, byte ptr [eax + 07b8a48h]
        jmp dword ptr [4*edx + 07b8a3ch]
L_7B8741:
        cmp eax, 0b007h
        jg short L_7B8768
        cmp eax, 0afffh
        jge L_7B8831
        add eax, 0ffff5cbch
        cmp eax, 8
        ja L_7B8823
        jmp dword ptr [4*eax + 07b8a64h]
L_7B8768:
        cmp eax, 0b020h
        jg L_7B87F7
        je L_7B8823
        add eax, 0ffff4ff8h
        cmp eax, 0dh
        ja L_7B8823
        jmp dword ptr [4*eax + 07b8a88h]
L_7B878E:
        call ext_007B77D0
        lea eax, [esp + 4]
        push 201h
        push eax
        call ext_007B7A90
        add esp, 8
        call ext_007B7830
        jmp L_7B8831
L_7B87AF:
        mov ecx, dword ptr [mem_00999834]
        lea esi, [ecx + ecx]
        jmp short L_7B8831
L_7B87BA:
        lea edx, [esp + 4]
        push 0bh
        push edx
        call ext_007B7A90
        mov eax, dword ptr [mem_00999830]
        add esp, 8
        lea esi, [eax + 2*eax]
        jmp short L_7B8831
L_7B87D3:
        mov esi, dword ptr [mem_00999840]
        jmp short L_7B8831
L_7B87DB:
        lea eax, [esp + 4]
        push 0bh
        push eax
        call ext_007B7A90
        add esp, 8
        jmp short L_7B8831
L_7B87EC:
        mov ecx, dword ptr [mem_00999840]
        lea esi, [ecx + ecx]
        jmp short L_7B8831
L_7B87F7:
        cmp eax, 0b030h
        jg short L_7B8815
        je L_7B83A4
        add eax, 0ffff4fdfh
        cmp eax, 7
        ja short L_7B8823
        jmp dword ptr [4*eax + 07b8ac0h]
L_7B8815:
        cmp eax, 0c23dh
        je short L_7B8831
        cmp eax, 0d000h
        je short L_7B882B
L_7B8823:
        mov esi, dword ptr [ecx + 4]
        sub esi, 6
        jmp short L_7B8831
L_7B882B:
        mov esi, dword ptr [mem_00999834]
L_7B8831:
        call ext_0079EEC0
        add eax, esi
        push eax
        call ext_0079EED0
        add esp, 4
        pop esi
        add esp, 34h
        ret
    }
}

// [0x007B9660] sub_007B9660 (1574 bytes)
extern "C" void ext_0079B140();
extern "C" void ext_0079B850();
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50();
extern "C" void ext_0079B010();
extern "C" void ext_007AEFD0();
extern "C" void ext_007AEFF0();
extern "C" void ext_007AF010();
extern "C" void ext_007AF040();
extern "C" void ext_007AF500();
extern "C" void ext_007B9D00();
extern "C" void ext_007BA200();
extern "C" void ext_007BA270();
extern "C" void ext_007BA300();
extern "C" void ext_007BA3A0();
extern "C" void ext_007BA3E0();
extern "C" void ext_007BA550();
extern "C" void ext_007BA690();
extern "C" void ext_007BA980();
extern "C" void ext_007BAA10();
extern "C" void ext_007BAB60();
extern "C" void ext_00799150();
extern "C" void ext_007994A0();

extern "C" __declspec(naked) void __fastcall fn_007B9660(void* self) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x38]
        xor ebx, ebx
        push edi
        cmp dword ptr [esi + 0x8], ebx
        je L_9C79
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x10
        je L_96AC
        and ah, 0xef
        push esi
        mov dword ptr [esi + 0xc], eax
        call dword ptr [esi + 0x19c]
        add esp, 0x4
        test eax, eax
        jne L_96AC
        mov eax, dword ptr [esi]
        push 0xab1770
        push eax
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
L_96AC:
        push esi
        call dword ptr [esi + 0x1b8]
        mov eax, dword ptr [esi + 0x1e4]
        add esp, 0x4
        cmp eax, ebx
        jle L_96E7
        push esi
        call ext_0079B850
        add esp, 0x4
        test eax, eax
        jne L_96E7
        mov ecx, dword ptr [esi]
        push 0xab1744
        push ecx
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
L_96E7:
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x2
        je L_9714
        mov eax, dword ptr [esi + 0x1d8]
        cmp eax, ebx
        je L_9714
        push eax
        call ext_0079AF50
        add esp, 0x4
        mov dword ptr [esi + 0x1d8], ebx
        mov dword ptr [esi + 0x1e4], ebx
        mov dword ptr [esi + 0x1dc], ebx
L_9714:
        mov eax, dword ptr [esi + 0xc]
        lea ebp, [esi + 0x18]
        and al, 0xaf
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0xc], eax
        xor eax, eax
L_9725:
        mov ecx, eax
        mov edx, 0x1
        and ecx, 0x1f
        shl edx, cl
        mov ecx, eax
        shr ecx, 0x5
        test dword ptr [esi + 4*ecx + 0x18], edx
        je L_9746
        cmp eax, 0x5
        sbb edx, edx
        neg edx
        inc edx
        add ebx, edx
L_9746:
        inc eax
        cmp eax, 0x5f
        jbe L_9725
        lea edi, [ebx + 2*ebx]
        mov dword ptr [esp + 0x1c], ebx
        shl edi, 0x2
        push edi
        mov dword ptr [esp + 0x24], edi
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        jne L_9785
        mov eax, dword ptr [esi]
        push 0xab171c
        push eax
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
L_9785:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        jne L_979D
        push esi
        call ext_007BAB60
        add esp, 0x4
        test eax, eax
        je L_9C3D
L_979D:
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [ecx + edi + 0x6]
        test al, 0x1
        mov dword ptr [esi + 0x174], eax
        je L_97B5
        inc eax
        mov dword ptr [esi + 0x174], eax
L_97B5:
        mov edx, dword ptr [esi + 0x174]
        mov eax, dword ptr [esi + 0x1f8]
        push 0x0
        push edx
        push eax
        call dword ptr [esi + 0x204]
        inc word ptr [esi + 0x168]
        mov edi, dword ptr [esp + 0x1c]
        push 0xc
        lea ecx, [esp + 0x3c]
        push ebp
        push ecx
        call ext_0079B010
        mov eax, dword ptr [esp + 0x44]
        add esp, 0x18
        test eax, 0x80000000
        je L_9814
        cmp word ptr [ebp + 0x78], 0x0
        jne L_9814
        mov edx, eax
        mov eax, dword ptr [esp + 0x20]
        and edx, 0x7fffffff
        dec ebx
        sub eax, 0xc
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], eax
L_9814:
        mov eax, dword ptr [esi + 0x218]
        test eax, eax
        mov dword ptr [esp + 0x24], eax
        jle L_9B54
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x18], 0x0
        add edx, 0xc
        mov dword ptr [esp + 0x3c], edx
L_9839:
        mov eax, dword ptr [esi + 0x214]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, 0x1
        mov ebx, dword ptr [ecx + eax]
        xor eax, eax
        mov ax, word ptr [ebx + 0xc]
        mov ecx, eax
        and ecx, 0x1f
        shl edx, cl
        mov ecx, eax
        shr ecx, 0x5
        test dword ptr [esp + 4*ecx + 0x2c], edx
        je L_9B34
        dec eax
        cmp eax, 0x30
        ja L_9AF2
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b9cc4]
        jmp dword ptr [4*edx + 0x7b9c88]
L_9880:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [ebx]
        and eax, 0x400
        neg eax
        sbb eax, eax
        and eax, 0x33
        add eax, 0x111
        cmp eax, ecx
        jne L_9B34
        mov ecx, dword ptr [ebp + 0xb8]
        jmp L_98CA
L_98A6:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [ebx]
        and eax, 0x400
        neg eax
        sbb eax, eax
        and eax, 0x2e
        add eax, 0x117
        cmp eax, ecx
        jne L_9B34
        mov ecx, dword ptr [ebp + 0xbc]
L_98CA:
        mov edx, dword ptr [ebp + 0xb4]
        push ecx
        push edx
        push edi
        push eax
        push 0x4
        push esi
        call ext_007BA690
        add esp, 0x18
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_98EC:
        mov eax, dword ptr [ebp + 0x38]
        push eax
        push edi
        push 0x116
        push esi
        call ext_007BA200
        add esp, 0x10
        jmp L_9B05
L_9904:
        lea ecx, [ebp + 0x68]
        push ecx
        push 0x3
        push edi
        push 0x140
        push esi
        call ext_007BA3E0
        add esp, 0x14
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9926:
        mov edx, dword ptr [esp + 0x3c]
        mov eax, edi
        add edx, 0xc
        add edi, 0xc
        mov dword ptr [esp + 0x3c], edx
        mov edx, dword ptr [ebp + 0xc]
        push edx
        push eax
        push 0x100
        push esi
        call ext_007BA200
        mov eax, dword ptr [ebp + 0x10]
        push eax
        push edi
        push 0x101
        push esi
        call ext_007BA200
        add esp, 0x20
        jmp L_9B05
L_995E:
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, edi
        add ecx, 0xc
        add edi, 0xc
        mov dword ptr [esp + 0x3c], ecx
        mov ecx, dword ptr [ebp + 0x18]
        push ecx
        push eax
        push 0x142
        push esi
        call ext_007BA200
        mov edx, dword ptr [ebp + 0x1c]
        push edx
        push edi
        push 0x143
        push esi
        call ext_007BA200
        add esp, 0x20
        jmp L_9B05
L_9996:
        lea eax, [ebp + 0x5c]
        push eax
        push 0x1
        push edi
        push 0x11e
        push 0x5
        push esi
        call ext_007BA550
        add esp, 0x18
        test eax, eax
        je L_9C3D
        mov edx, dword ptr [esp + 0x3c]
        lea ecx, [ebp + 0x60]
        push ecx
        push 0x1
        push edx
        push 0x11f
        jmp L_99F6
L_99C7:
        lea eax, [ebp + 0x50]
        push eax
        push 0x1
        push edi
        push 0x11a
        push 0x5
        push esi
        call ext_007BA550
        add esp, 0x18
        test eax, eax
        je L_9C3D
        mov edx, dword ptr [esp + 0x3c]
        lea ecx, [ebp + 0x54]
        push ecx
        push 0x1
        push edx
        push 0x11b
L_99F6:
        push 0x5
        push esi
        call ext_007BA550
        add esp, 0x18
        test eax, eax
        je L_9C3D
        mov eax, dword ptr [esp + 0x3c]
        add edi, 0xc
        add eax, 0xc
        mov dword ptr [esp + 0x3c], eax
        jmp L_9B05
L_9A1C:
        mov eax, dword ptr [ebx]
        push edi
        push eax
        push esi
        call ext_007BA270
        add esp, 0xc
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9A36:
        mov ecx, dword ptr [ebx]
        push edi
        push ecx
        push esi
        call ext_007AF500
        add esp, 0x4
        push eax
        push esi
        call ext_007BA300
        add esp, 0x10
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9A5A:
        mov edx, dword ptr [ebx]
        push edi
        push edx
        push esi
        call ext_007BA3A0
        add esp, 0xc
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9A74:
        push edi
        push esi
        call ext_007BAA10
        add esp, 0x8
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9A88:
        push edi
        push esi
        call ext_007BA980
        add esp, 0x8
        test eax, eax
        je L_9C3D
        jmp L_9B05
L_9A9C:
        push ebx
        push edi
        push esi
        call ext_007B9D00
        add esp, 0xc
        test eax, eax
        je L_9C3D
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jbe L_9B05
        mov ecx, dword ptr [esi + 0xc]
        or ch, 0x20
        mov dword ptr [esi + 0xc], ecx
        mov ax, word ptr [edi + 0x4]
        mov word ptr [esi + 0x178], ax
        mov eax, dword ptr [edi + 0x4]
        cmp eax, 0x1
        jbe L_9ADD
        mov ecx, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x17c], ecx
        jmp L_9B05
L_9ADD:
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esp + 0x10]
        sub edx, eax
        lea eax, [edx + edi + 0xa]
        mov dword ptr [esi + 0x17c], eax
        jmp L_9B05
L_9AF2:
        push ebx
        push edi
        push esi
        call ext_007B9D00
        add esp, 0xc
        test eax, eax
        je L_9C3D
L_9B05:
        mov eax, dword ptr [esp + 0x3c]
        xor ecx, ecx
        mov cx, word ptr [ebx + 0xc]
        add eax, 0xc
        mov edx, ecx
        mov dword ptr [esp + 0x3c], eax
        shr edx, 0x5
        and ecx, 0x1f
        add edi, 0xc
        lea eax, [esp + 4*edx + 0x2c]
        mov edx, 0x1
        shl edx, cl
        mov ecx, dword ptr [eax]
        not edx
        and ecx, edx
        mov dword ptr [eax], ecx
L_9B34:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x18]
        dec eax
        add edx, 0x4
        test eax, eax
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x18], edx
        jg L_9839
        mov ebx, dword ptr [esp + 0x1c]
L_9B54:
        mov eax, dword ptr [esi + 0x14]
        mov ebp, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x28], eax
        mov al, byte ptr [esi + 0xc]
        test al, 0x80
        mov dword ptr [esp + 0x14], ebx
        je L_9BB7
        test bx, bx
        mov edi, ebp
        je L_9B9C
L_9B71:
        push 0x2
        push edi
        call ext_007AF010
        lea ecx, [edi + 0x4]
        push 0x2
        push ecx
        call ext_007AF040
        mov eax, dword ptr [esp + 0x24]
        add esp, 0x10
        add eax, 0xffff
        add edi, 0xc
        test ax, ax
        mov dword ptr [esp + 0x14], eax
        jne L_9B71
L_9B9C:
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], ebx
        push edx
        call ext_007AEFD0
        lea eax, [esp + 0x2c]
        push eax
        call ext_007AEFF0
        add esp, 0x8
L_9BB7:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi + 0x1f8]
        push 0x0
        push ecx
        push edx
        call dword ptr [esi + 0x204]
        mov ecx, dword ptr [esi + 0x1f8]
        lea eax, [esp + 0x20]
        push 0x2
        push eax
        push ecx
        call dword ptr [esi + 0x200]
        add esp, 0x18
        cmp eax, 0x2
        je L_9BF0
        mov edx, dword ptr [esi]
        push 0xab16fc
        push edx
        jmp L_9C35
L_9BF0:
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esi + 0x1f8]
        push edi
        push ebp
        push eax
        call dword ptr [esi + 0x200]
        add esp, 0xc
        cmp eax, edi
        je L_9C11
        push 0xab16d8
        jmp L_9C32
L_9C11:
        mov eax, dword ptr [esi + 0x1f8]
        lea edx, [esp + 0x28]
        push 0x4
        push edx
        push eax
        call dword ptr [esi + 0x200]
        add esp, 0xc
        cmp eax, 0x4
        je L_9C54
        push 0xaafc08
L_9C32:
        mov ecx, dword ptr [esi]
        push ecx
L_9C35:
        call ext_0079B140
        add esp, 0x8
L_9C3D:
        mov edx, dword ptr [esp + 0x10]
        push edx
        call ext_0079AF50
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret
L_9C54:
        push esi
        call ext_00799150
        push ebp
        call ext_0079AF50
        mov ebx, dword ptr [esi + 0xc]
        push esi
        and ebx, 0xfffffff7
        mov dword ptr [esi + 0xc], ebx
        call dword ptr [esi + 0x1c0]
        push esi
        call ext_007994A0
        add esp, 0x10
L_9C79:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x007B6210] sub_007B6210 (3318 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B6210(void* src, void* dst) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov ebx, dword ptr [esi + 0xc]
        test ebx, ebx
        je L_7b6f01
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [edi + 0xc]
        test eax, eax
        jne L_7b6f01
        mov eax, dword ptr [esi]
        cmp eax, 0x4700
        jg L_7b6833
        je L_7b6814
        cmp eax, 0x3070
        jg L_7b63fa
        je L_7b63db
        cmp eax, 0x1430
        jg L_7b6316
        je L_7b62fa
        cmp eax, 0x31
        jg L_7b62b3
        je L_7b6a85
        add eax, -0x2
        cmp eax, 0x2e
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b6f24]
        jmp dword ptr [4*ecx + 0x7b6f08]
    L_7b628d:
        push 0xc
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        pop edi
        mov ecx, dword ptr [edx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        mov edx, dword ptr [edx + 0x8]
        pop ebx
        mov dword ptr [eax + 0x8], edx
        ret
    L_7b62b3:
        cmp eax, 0x1400
        jg L_7b62e6
        je L_7b67fa
        cmp eax, 0x100
        je L_7b67fa
        cmp eax, 0x1100
        je L_7b692e
        cmp eax, 0x1300
        jne L_7b6ed0
        jmp L_7b6a85
    L_7b62e6:
        sub eax, 0x1410
        je L_7b67fa
        sub eax, 0x10
        jne L_7b6ed0
    L_7b62fa:
        push 0x2
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        pop edi
        pop esi
        mov dx, word ptr [ecx]
        pop ebp
        mov word ptr [eax], dx
        pop ebx
        ret
    L_7b6316:
        cmp eax, 0x2302
        jg L_7b6392
        je L_7b63af
        cmp eax, 0x1500
        jg L_7b6352
        je L_7b6b62
        sub eax, 0x1440
        je L_7b67fa
        sub eax, 0x10
        je L_7b67fa
        sub eax, 0x10
        jne L_7b6ed0
        jmp L_7b67fa
    L_7b6352:
        cmp eax, 0x2200
        je L_7b6366
        cmp eax, 0x2300
        jne L_7b6ed0
        jmp short L_7b63af
    L_7b6366:
        push 0x10
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        pop edi
        mov edx, dword ptr [ecx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov edx, dword ptr [ecx + 0x8]
        pop ebx
        mov dword ptr [eax + 0x8], edx
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], ecx
        ret
    L_7b6392:
        add eax, 0xffffcff0
        cmp eax, 0x50
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b6f5c]
        jmp dword ptr [4*ecx + 0x7b6f54]
    L_7b63af:
        push 0x10
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        pop edi
        mov ecx, dword ptr [edx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        mov ecx, dword ptr [edx + 0x8]
        pop ebx
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [edx + 0xc]
        mov dword ptr [eax + 0xc], edx
        ret
    L_7b63db:
        push 0x1c
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x7
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b63fa:
        cmp eax, 0x4182
        jg L_7b66e6
        je L_7b6a1a
        cmp eax, 0x4130
        jg L_7b65ff
        je L_7b6596
        cmp eax, 0x4110
        jg L_7b64e9
        je L_7b6497
        cmp eax, 0x3080
        je L_7b6465
        cmp eax, 0x3d3e
        je L_7b67fa
        cmp eax, 0x4000
        jne L_7b6ed0
        push 0x4
        call dword ptr [mem_00925208]
        mov esi, eax
        mov dword ptr [edi + 0xc], esi
        mov eax, dword ptr [ebx]
        push eax
        call ext_007B2480
        add esp, 0x8
        mov dword ptr [esi], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6465:
        mov ebp, dword ptr [mem_00925208]
        push 0x4
        call ebp
        mov ebx, eax
        or ecx, -0x1
        mov dword ptr [edi + 0xc], ebx
        mov esi, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi]
        mov dword ptr [ebx], eax
        mov edi, dword ptr [esi]
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call ebp
        mov edx, eax
        add esp, 0x8
        mov dword ptr [ebx], edx
        mov edi, dword ptr [esi]
        jmp L_7b695f
    L_7b6497:
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        push 0xc
        mov dword ptr [edi + 0xc], ebp
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp], edx
        mov eax, dword ptr [ecx + 0x4]
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        push ecx
        call dword ptr [mem_0092522C]
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        mov esi, dword ptr [ebx + 0x4]
        mov edi, eax
        add esp, 0xc
        lea ecx, [ecx + 2*ecx]
        shl ecx, 0x2
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b64e9:
        sub eax, 0x4111
        je L_7b6548
        sub eax, 0xf
        jne L_7b6ed0
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        push 0x8
        mov dword ptr [edi + 0xc], ebp
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp], ecx
        mov edx, dword ptr [eax + 0x4]
        xor eax, eax
        mov dword ptr [ebp + 0x4], edx
        mov ax, word ptr [ebx]
        push eax
        call dword ptr [mem_0092522C]
        add esp, 0xc
    L_7b6525:
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        mov esi, dword ptr [ebx + 0x4]
        shl ecx, 0x3
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6548:
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        push 0x2
        mov dword ptr [edi + 0xc], ebp
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp], ecx
        mov edx, dword ptr [eax + 0x4]
        xor eax, eax
        mov dword ptr [ebp + 0x4], edx
        mov ax, word ptr [ebx]
        push eax
        call dword ptr [mem_0092522C]
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        mov esi, dword ptr [ebx + 0x4]
        shl ecx, 1
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        add esp, 0xc
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6596:
        push 0xc
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov eax, dword ptr [esi + 0xc]
        mov ecx, ebp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], eax
        xor ecx, ecx
        mov cx, word ptr [ebx + 0x4]
        shl ecx, 1
        push ecx
        call dword ptr [mem_00925208]
        xor ecx, ecx
        mov dword ptr [ebp + 0x8], eax
        mov cx, word ptr [ebx + 0x4]
        mov esi, dword ptr [ebx + 0x8]
        shl ecx, 1
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        xor eax, eax
        and ecx, 0x3
        rep movsb
        mov edi, dword ptr [ebx]
        or ecx, -0x1
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        add esp, 0xc
        jmp L_7b6958
    L_7b65ff:
        add eax, 0xffffbec0
        cmp eax, 0x41
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b6fcc]
        jmp dword ptr [4*ecx + 0x7b6fb0]
    L_7b661c:
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp], eax
        mov ecx, dword ptr [edx + 0x4]
        xor edx, edx
        mov dword ptr [ebp + 0x4], ecx
        mov dx, word ptr [ebx]
        shl edx, 0x2
        push edx
        call dword ptr [mem_00925208]
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        mov esi, dword ptr [ebx + 0x4]
        add esp, 0x8
        shl ecx, 0x2
        jmp L_7b6ef1
    L_7b665c:
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp], edx
        mov eax, dword ptr [ecx + 0x4]
        xor ecx, ecx
        mov dword ptr [ebp + 0x4], eax
        mov cx, word ptr [ebx]
        shl ecx, 0x3
        push ecx
        call dword ptr [mem_00925208]
        add esp, 0x8
        jmp L_7b6525
    L_7b668e:
        push 0x30
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0xc
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b66ad:
        push 0x1
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        pop edi
        pop esi
        mov dl, byte ptr [ecx]
        pop ebp
        mov byte ptr [eax], dl
        pop ebx
        ret
    L_7b66c7:
        push 0x58
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x16
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b66e6:
        cmp eax, 0x4656
        jg L_7b67e5
        je L_7b67fa
        cmp eax, 0x4641
        jg L_7b67b4
        je L_7b6b62
        sub eax, 0x4190
        je L_7b6742
        sub eax, 0x470
        je L_7b6b62
        sub eax, 0x10
        jne L_7b6ed0
        push 0x14
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x5
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6742:
        push 0x18
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x6
        mov edi, eax
        mov ebp, eax
        add esp, 0x4
        rep movsd
        sub ebp, ebx
        mov dword ptr [esp + 0x14], 0x6
    L_7b6768:
        mov edi, dword ptr [ebx]
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        mov edx, eax
        or ecx, -0x1
        mov dword ptr [ebx + ebp], edx
        mov edi, dword ptr [ebx]
        xor eax, eax
        add esp, 0x4
        repne scasb
        not ecx
        sub edi, ecx
        add ebx, 0x4
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        and ecx, 0x3
        dec eax
        rep movsb
        mov dword ptr [esp + 0x14], eax
        jne L_7b6768
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b67b4:
        sub eax, 0x4653
        je L_7b69c6
        dec eax
        jne L_7b6ed0
        push 0x4
        call dword ptr [mem_00925208]
        mov esi, eax
        mov dword ptr [edi + 0xc], esi
        mov edx, dword ptr [ebx]
        push edx
        call ext_007B2480
        add esp, 0x8
        mov dword ptr [esi], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b67e5:
        add eax, 0xffffb9a9
        cmp eax, 0x4
        ja L_7b6ed0
        jmp dword ptr [4*eax + 0x7b7010]
    L_7b67fa:
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        pop edi
        pop esi
        mov edx, dword ptr [ecx]
        pop ebp
        mov dword ptr [eax], edx
        pop ebx
        ret
    L_7b6814:
        push 0x20
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x8
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6833:
        cmp eax, 0xa358
        jg L_7b6a4e
        je L_7b67fa
        cmp eax, 0xa328
        jg L_7b69fd
        je L_7b6a1a
        cmp eax, 0xa087
        jg L_7b6998
        je L_7b67fa
        cmp eax, 0x7020
        jg L_7b691c
        je L_7b687f
        cmp eax, 0x7001
        jg L_7b68cd
        je L_7b689f
        cmp eax, 0x4720
        jne L_7b6ed0
    L_7b687f:
        push 0x8
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        pop edi
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        ret
    L_7b689f:
        push 0xe
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        pop edi
        mov ecx, dword ptr [edx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        mov ecx, dword ptr [edx + 0x8]
        pop ebx
        mov dword ptr [eax + 0x8], ecx
        mov dx, word ptr [edx + 0xc]
        mov word ptr [eax + 0xc], dx
        ret
    L_7b68cd:
        cmp eax, 0x7011
        jl L_7b6ed0
        cmp eax, 0x7012
        jg L_7b6ed0
        push 0x2c
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0xb
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        xor eax, eax
        rep movsd
        mov edi, dword ptr [ebx + 0x28]
        or ecx, -0x1
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        mov edx, eax
        add esp, 0x8
        mov dword ptr [ebp + 0x28], edx
        mov edi, dword ptr [ebx + 0x28]
        jmp short L_7b695f
    L_7b691c:
        cmp eax, 0x80f0
        je L_7b6981
        cmp eax, 0xa000
        jne L_7b6ed0
    L_7b692e:
        push 0x4
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp], eax
    L_7b6943:
        mov edi, dword ptr [ebx]
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        add esp, 0x8
    L_7b6958:
        mov edx, eax
        mov dword ptr [ebp], edx
        mov edi, dword ptr [ebx]
    L_7b695f:
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6981:
        push 0x4
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp], edx
        jmp short L_7b6943
    L_7b6998:
        cmp eax, 0xa310
        jg L_7b69e0
        je L_7b6b62
        cmp eax, 0xa100
        je L_7b62fa
        cmp eax, 0xa252
        je L_7b62fa
        cmp eax, 0xa300
        jne L_7b6ed0
    L_7b69c6:
        push 0x4
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp], ecx
        jmp L_7b6943
    L_7b69e0:
        add eax, 0xffff5ce0
        cmp eax, 0x6
        ja L_7b6ed0
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b702c]
        jmp dword ptr [4*edx + 0x7b7024]
    L_7b69fd:
        add eax, 0xffff5cd6
        cmp eax, 0x2c
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b7044]
        jmp dword ptr [4*ecx + 0x7b7034]
    L_7b6a1a:
        push 0x8
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp], eax
        mov ecx, dword ptr [edx + 0x4]
        mov dword ptr [ebp + 0x4], ecx
        mov edx, dword ptr [ebx]
        push edx
        call dword ptr [mem_00925208]
        mov dword ptr [ebp + 0x4], eax
        mov ecx, dword ptr [ebx]
        mov esi, dword ptr [ebx + 0x4]
        add esp, 0x8
        jmp L_7b6ef1
    L_7b6a4e:
        cmp eax, 0xb014
        jg L_7b6ba7
        je L_7b6b88
        cmp eax, 0xa368
        jg L_7b6ae3
        je L_7b6ac1
        add eax, 0xffff5ca6
        cmp eax, 0xc
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b7084]
        jmp dword ptr [4*ecx + 0x7b7074]
    L_7b6a85:
        push 0x4
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        pop edi
        pop esi
        mov ecx, dword ptr [edx]
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        ret
    L_7b6a9f:
        push 0x3
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov dx, word ptr [ecx]
        mov word ptr [eax], dx
        pop edi
        mov cl, byte ptr [ecx + 0x2]
        pop esi
        pop ebp
        mov byte ptr [eax + 0x2], cl
        pop ebx
        ret
    L_7b6ac1:
        push 0x3
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov cx, word ptr [edx]
        mov word ptr [eax], cx
        pop edi
        mov dl, byte ptr [edx + 0x2]
        pop esi
        pop ebp
        mov byte ptr [eax + 0x2], dl
        pop ebx
        ret
    L_7b6ae3:
        add eax, 0xffff4ff8
        cmp eax, 0xb
        ja L_7b6ed0
        jmp dword ptr [4*eax + 0x7b7094]
    L_7b6af8:
        push 0xc
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov eax, dword ptr [esi + 0xc]
        mov ecx, ebp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edi, dword ptr [ebx + 0x4]
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        mov edx, eax
        add esp, 0x8
        mov dword ptr [ebp + 0x4], edx
        mov edi, dword ptr [ebx + 0x4]
        jmp L_7b695f
    L_7b6b3d:
        push 0xc
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov dword ptr [edi + 0xc], ebp
        mov edx, dword ptr [esi + 0xc]
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [edx + 0x8]
        mov dword ptr [eax + 0x8], edx
        jmp L_7b6943
    L_7b6b62:
        push 0xc
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0xc]
        add esp, 0x4
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        pop edi
        mov edx, dword ptr [ecx + 0x4]
        pop esi
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov ecx, dword ptr [ecx + 0x8]
        pop ebx
        mov dword ptr [eax + 0x8], ecx
        ret
    L_7b6b88:
        push 0x18
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [esi + 0xc]
        mov ecx, 0x6
        mov edi, eax
        add esp, 0x4
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6ba7:
        add eax, 0xffff4feb
        cmp eax, 0x1b
        ja L_7b6ed0
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b70e8]
        jmp dword ptr [4*ecx + 0x7b70c4]
    L_7b6bc4:
        push 0x2
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0xc], eax
        mov edx, dword ptr [esi + 0xc]
        pop edi
        pop esi
        mov cx, word ptr [edx]
        pop ebp
        mov word ptr [eax], cx
        pop ebx
        ret
    L_7b6be0:
        push 0x18
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x6
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [mem_00925208]
        lea edx, [8*eax + 0]
        sub edx, eax
        shl edx, 0x2
        push edx
        call esi
        mov dword ptr [ebp + 0x10], eax
        mov eax, dword ptr [ebx + 0xc]
        lea eax, [eax + 2*eax]
        shl eax, 0x2
        push eax
        call esi
        mov dword ptr [ebp + 0x14], eax
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x10]
        lea ecx, [8*eax + 0]
        add esp, 0xc
        sub ecx, eax
        shl ecx, 0x2
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x14]
        mov edi, dword ptr [ebp + 0x14]
        lea ecx, [eax + 2*eax]
        shl ecx, 0x2
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6c6b:
        push 0x18
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x6
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [mem_00925208]
        lea ecx, [8*eax + 0]
        sub ecx, eax
        shl ecx, 0x2
        push ecx
        call esi
        mov dword ptr [ebp + 0x10], eax
        mov eax, dword ptr [ebx + 0xc]
        lea edx, [eax + 2*eax]
        shl edx, 0x2
        push edx
        call esi
        mov dword ptr [ebp + 0x14], eax
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x10]
        lea ecx, [8*eax + 0]
        add esp, 0xc
        sub ecx, eax
        shl ecx, 0x2
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0xc]
        lea ecx, [eax + 2*eax]
        jmp L_7b6e58
    L_7b6cdf:
        push 0x18
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x6
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [mem_00925208]
        lea ecx, [8*eax + 0]
        sub ecx, eax
        shl ecx, 0x2
        push ecx
        call esi
        mov dword ptr [ebp + 0x10], eax
        mov edx, dword ptr [ebx + 0xc]
        shl edx, 0x4
        push edx
        call esi
        mov dword ptr [ebp + 0x14], eax
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x10]
        lea ecx, [8*eax + 0]
        add esp, 0xc
        sub ecx, eax
        shl ecx, 0x2
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x14]
        mov edi, dword ptr [ebp + 0x14]
        shl ecx, 0x4
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6d64:
        push 0x18
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x6
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [mem_00925208]
        lea ecx, [8*eax + 0]
        sub ecx, eax
        shl ecx, 0x2
        push ecx
        call esi
        mov dword ptr [ebp + 0x10], eax
        mov eax, dword ptr [ebx + 0xc]
        lea edx, [eax + 2*eax]
        lea eax, [eax + 4*edx]
        push eax
        call esi
        mov dword ptr [ebp + 0x14], eax
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x10]
        lea ecx, [8*eax + 0]
        add esp, 0xc
        sub ecx, eax
        shl ecx, 0x2
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x14]
        mov edi, dword ptr [ebp + 0x14]
        lea ecx, [eax + 2*eax]
        lea ecx, [eax + 4*ecx]
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6def:
        push 0x18
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x6
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [mem_00925208]
        lea ecx, [8*eax + 0]
        sub ecx, eax
        shl ecx, 0x2
        push ecx
        call esi
        mov dword ptr [ebp + 0x10], eax
        mov edx, dword ptr [ebx + 0xc]
        shl edx, 0x2
        push edx
        call esi
        mov dword ptr [ebp + 0x14], eax
        mov eax, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x10]
        lea ecx, [8*eax + 0]
        add esp, 0xc
        sub ecx, eax
        shl ecx, 0x2
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebx + 0xc]
    L_7b6e58:
        mov esi, dword ptr [ebx + 0x14]
        mov edi, dword ptr [ebp + 0x14]
        shl ecx, 0x2
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6e74:
        push 0x14
        call dword ptr [mem_00925208]
        mov ebp, eax
        mov ecx, 0x5
        mov dword ptr [edi + 0xc], ebp
        mov esi, dword ptr [esi + 0xc]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr [ebx + 0xc]
        lea ecx, [8*eax + 0]
        sub ecx, eax
        shl ecx, 0x2
        push ecx
        call dword ptr [mem_00925208]
        mov dword ptr [ebp + 0x10], eax
        mov edx, dword ptr [ebx + 0xc]
        mov esi, dword ptr [ebx + 0x10]
        mov edi, eax
        lea ecx, [8*edx + 0]
        add esp, 0x8
        sub ecx, edx
        shl ecx, 0x2
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_7b6ed0:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0x6
        jbe L_7b6f01
        add eax, -0x6
        push eax
        call dword ptr [mem_00925208]
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esi + 0x4]
        mov esi, dword ptr [esi + 0xc]
        add esp, 0x4
        sub ecx, 0x6
    L_7b6ef1:
        mov edi, eax
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
    L_7b6f01:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007B52A0] sub_007B52A0 (3551 bytes)
extern "C" void ext_0079EA90();
extern "C" void ext_007B7720();
extern "C" void ext_007B7790(unsigned short);
extern "C" void ext_007B7890();
extern "C" void ext_007B78D0();
extern "C" void ext_007B7970();
extern "C" void ext_007B79F0();
extern "C" void ext_007B7A30();
extern "C" void ext_007B7D90();
extern "C" void ext_007B7E40();
extern "C" void ext_007B7EB0();
extern "C" void ext_007B7F90();
extern "C" void ext_007B8090();

extern "C" __declspec(naked) void __cdecl fn_007B52A0(void* self) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_7b54e1
        mov     al, byte ptr [esi + 0x19]
        push    eax
        call    ext_0079EA90
        mov     eax, dword ptr [esi]
        add     esp, 0x4
        cmp     eax, 0x4700
        jg      L_7b5945
        je      L_7b5919
        cmp     eax, 0x3060
        jg      L_7b553a
        je      L_7b5520
        cmp     eax, 0x1420
        jg      L_7b53d9
        je      L_7b53c5
        cmp     eax, 0x30
        jg      L_7b535f
        je      L_7b534b
        cmp     eax, 0x13
        ja      L_7b54c9
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x7b6094]
        jmp     dword ptr [4*ecx + 0x7b6080]
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        call    ext_007B78D0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B7890
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b534b:
        mov     ecx, dword ptr [esi + 0xc]
        mov     dx, word ptr [ecx]
        push    edx
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b535f:
        cmp     eax, 0x1300
        jg      L_7b539e
        je      L_7b5906
        cmp     eax, 0x31
        je      L_7b5d26
        cmp     eax, 0x100
        je      L_7b5408
        cmp     eax, 0x1100
        jne     L_7b54c9
    L_7b538b:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b539e:
        sub     eax, 0x1400
        je      L_7b5d26
        sub     eax, 0x10
        jne     L_7b54c9
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B78D0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b53c5:
        mov     eax, dword ptr [esi + 0xc]
        mov     cx, word ptr [eax]
        push    ecx
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b53d9:
        cmp     eax, 0x2300
        jg      L_7b54ad
        je      L_7b547f
        cmp     eax, 0x1460
        jg      L_7b542e
        je      L_7b5408
        sub     eax, 0x1430
        je      L_7b53c5
        sub     eax, 0x10
        je      L_7b541b
        sub     eax, 0x10
        jne     L_7b54c9
    L_7b5408:
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B78D0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b541b:
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007B7890
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b542e:
        cmp     eax, 0x1500
        je      L_7b546e
        cmp     eax, 0x2200
        jne     L_7b54c9
        mov     esi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x8]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    ext_007B78D0
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b546e:
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        call    ext_007B7D90
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b547f:
        mov     esi, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        call    ext_007B78D0
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b54ad:
        cmp     eax, 0x3030
        jg      L_7b5514
        je      L_7b5520
        sub     eax, 0x2302
        je      L_7b54e6
        sub     eax, 0xd0e
        je      L_7b5520
        sub     eax, 0x10
        je      L_7b5520
    L_7b54c9:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, 0x6
        jbe     L_7b54e1
        mov     ecx, dword ptr [esi + 0xc]
        add     eax, -0x6
        push    ecx
        push    eax
        call    ext_007B7970
        add     esp, 0x8
    L_7b54e1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b54e6:
        mov     esi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x8]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    ext_007B7890
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5514:
        sub     eax, 0x3040
        je      L_7b5520
        sub     eax, 0x10
        jne     L_7b54c9
    L_7b5520:
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        call    ext_007B78D0
        push    esi
        call    ext_007B7D90
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b553a:
        cmp     eax, 0x4181
        jg      L_7b580e
        je      L_7b58a5
        cmp     eax, 0x4120
        jg      L_7b5691
        je      L_7b5655
        cmp     eax, 0x4000
        jg      L_7b55cc
        je      L_7b58a5
        sub     eax, 0x3070
        je      L_7b5597
        sub     eax, 0x10
        je      L_7b58a5
        sub     eax, 0xcbe
        jne     L_7b54c9
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    ext_007B7890
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5597:
        mov     esi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x18]
        push    ecx
        call    ext_007B78D0
        push    esi
        call    ext_007B7D90
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b55cc:
        sub     eax, 0x4110
        je      L_7b5617
        dec     eax
        jne     L_7b54c9
        mov     esi, dword ptr [esi + 0xc]
        mov     cx, word ptr [esi]
        push    ecx
        call    ext_007B7790
        xor     edi, edi
        add     esp, 0x4
        cmp     word ptr [esi], di
        jbe     L_7b54e1
    L_7b55f4:
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, edi
        and     edx, 0xffff
        mov     cx, word ptr [eax + 2*edx]
        push    ecx
        call    ext_007B7790
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi]
        jb      L_7b55f4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5617:
        mov     esi, dword ptr [esi + 0xc]
        mov     dx, word ptr [esi]
        push    edx
        call    ext_007B7790
        xor     edi, edi
        add     esp, 0x4
        cmp     word ptr [esi], di
        jbe     L_7b54e1
    L_7b5631:
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, edi
        and     eax, 0xffff
        lea     eax, [eax + 2*eax]
        lea     edx, [ecx + 4*eax]
        push    edx
        call    ext_007B7D90
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi]
        jb      L_7b5631
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5655:
        mov     esi, dword ptr [esi + 0xc]
        mov     ax, word ptr [esi]
        push    eax
        call    ext_007B7790
        xor     edi, edi
        add     esp, 0x4
        cmp     word ptr [esi], di
        jbe     L_7b54e1
    L_7b566f:
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, edi
        and     ecx, 0xffff
        lea     eax, [edx + 8*ecx]
        push    eax
        call    ext_007B7EB0
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi]
        jb      L_7b566f
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5691:
        add     eax, 0xffffbed0
        cmp     eax, 0x40
        ja      L_7b54c9
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x7b60c4]
        jmp     dword ptr [4*ecx + 0x7b60a8]
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi]
        push    edx
        call    ext_007B79F0
        mov     ax, word ptr [esi + 0x4]
        push    eax
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x4]
        add     esp, 0x8
        test    ax, ax
        je      L_7b54e1
        xor     edi, edi
        test    ax, ax
        jbe     L_7b54e1
    L_7b56de:
        mov     edx, dword ptr [esi + 0x8]
        mov     ecx, edi
        and     ecx, 0xffff
        mov     ax, word ptr [edx + 2*ecx]
        push    eax
        call    ext_007B7790
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi + 0x4]
        jb      L_7b56de
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        xor     edi, edi
        cmp     word ptr [esi], di
        jbe     L_7b54e1
    L_7b5710:
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, edi
        and     ecx, 0xffff
        mov     eax, dword ptr [edx + 4*ecx]
        push    eax
        call    ext_007B7890
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi]
        jb      L_7b5710
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        mov     cx, word ptr [esi]
        push    ecx
        call    ext_007B7790
        xor     edi, edi
        add     esp, 0x4
        cmp     word ptr [esi], di
        jbe     L_7b54e1
    L_7b574c:
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, edi
        and     edx, 0xffff
        lea     ecx, [eax + 8*edx]
        push    ecx
        call    ext_007B7E40
        add     esp, 0x4
        inc     edi
        cmp     di, word ptr [esi]
        jb      L_7b574c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        mov     edi, 0xc
    L_7b5776:
        mov     edx, dword ptr [esi]
        push    edx
        call    ext_007B78D0
        add     esp, 0x4
        add     esi, 0x4
        dec     edi
        jne     L_7b5776
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     eax, dword ptr [esi + 0xc]
        mov     cl, byte ptr [eax]
        push    ecx
        call    ext_007B7720
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        mov     dx, word ptr [esi]
        push    edx
        call    ext_007B7790
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        call    ext_007B78D0
        lea     edx, [esi + 0xc]
        push    edx
        call    ext_007B7D90
        mov     eax, dword ptr [esi + 0x18]
        push    eax
        call    ext_007B78D0
        add     esp, 0x14
        lea     edi, [esi + 0x1c]
        mov     ebx, 0xc
    L_7b57da:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    ext_007B78D0
        add     esp, 0x4
        add     edi, 0x4
        dec     ebx
        jne     L_7b57da
        mov     edx, dword ptr [esi + 0x4c]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x50]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x54]
        push    ecx
        call    ext_007B78D0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b580e:
        cmp     eax, 0x4654
        jg      L_7b58f1
        je      L_7b58de
        cmp     eax, 0x4610
        jg      L_7b5895
        je      L_7b5872
        sub     eax, 0x4182
        je      L_7b5bc2
        sub     eax, 0xe
        je      L_7b5854
        sub     eax, 0x470
        jne     L_7b54c9
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    ext_007B7D90
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5854:
        mov     esi, dword ptr [esi + 0xc]
        mov     edi, 0x6
    L_7b585c:
        mov     edx, dword ptr [esi]
        push    edx
        call    ext_007B79F0
        add     esp, 0x4
        add     esi, 0x4
        dec     edi
        jne     L_7b585c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5872:
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7D90
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    ext_007B78D0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5895:
        sub     eax, 0x4641
        je      L_7b58b8
        sub     eax, 0x12
        jne     L_7b54c9
    L_7b58a5:
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b58b8:
        mov     esi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        call    ext_007B78D0
        mov     ax, word ptr [esi + 0x8]
        push    eax
        call    ext_007B7790
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b58de:
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b58f1:
        add     eax, 0xffffb9aa
        cmp     eax, 0x5
        ja      L_7b54c9
        jmp     dword ptr [4*eax + 0x7b6108]
    L_7b5906:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    ext_007B78D0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5919:
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7D90
        lea     eax, [esi + 0xc]
        push    eax
        call    ext_007B7D90
        mov     ecx, dword ptr [esi + 0x18]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x1c]
        push    edx
        call    ext_007B78D0
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5945:
        cmp     eax, 0xa356
        jg      L_7b5bed
        je      L_7b5408
        cmp     eax, 0xa322
        jg      L_7b5ba5
        cmp     eax, 0xa320
        jge     L_7b5bc2
        cmp     eax, 0x80f0
        jg      L_7b5b09
        je      L_7b54e1
        cmp     eax, 0x7020
        jg      L_7b5ad5
        je      L_7b5aa3
        cmp     eax, 0x7001
        jg      L_7b5a0e
        je      L_7b59be
        cmp     eax, 0x4720
        jne     L_7b54c9
        mov     esi, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        call    ext_007B78D0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b59be:
        mov     esi, dword ptr [esi + 0xc]
        mov     dx, word ptr [esi]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x2]
        push    eax
        call    ext_007B7790
        mov     cx, word ptr [esi + 0x4]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0x6]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x8]
        push    eax
        call    ext_007B7790
        mov     cx, word ptr [esi + 0xa]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0xc]
        push    edx
        call    ext_007B7790
        add     esp, 0x1c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5a0e:
        cmp     eax, 0x7011
        jl      L_7b54c9
        cmp     eax, 0x7012
        jg      L_7b54c9
        mov     esi, dword ptr [esi + 0xc]
        mov     ax, word ptr [esi]
        push    eax
        call    ext_007B7790
        mov     cx, word ptr [esi + 0x2]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0x4]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x6]
        push    eax
        call    ext_007B7790
        mov     cx, word ptr [esi + 0x8]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0xa]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0xc]
        push    eax
        call    ext_007B7790
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    ext_007B78D0
        lea     edx, [esi + 0x14]
        push    edx
        call    ext_007B7D90
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x24]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x28]
        push    0xb
        push    edx
        call    ext_007B7A30
        add     esp, 0x34
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5aa3:
        mov     esi, dword ptr [esi + 0xc]
        mov     ax, word ptr [esi]
        push    eax
        call    ext_007B7790
        mov     cx, word ptr [esi + 0x2]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0x4]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x6]
        push    eax
        call    ext_007B7790
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5ad5:
        sub     eax, 0x8002
        je      L_7b5af6
        dec     eax
        jne     L_7b54c9
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5af6:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5b09:
        cmp     eax, 0xa252
        jg      L_7b5b59
        je      L_7b5b45
        sub     eax, 0xa000
        je      L_7b538b
        sub     eax, 0x87
        je      L_7b5d26
        sub     eax, 0x79
        jne     L_7b54c9
        mov     edx, dword ptr [esi + 0xc]
        mov     ax, word ptr [edx]
        push    eax
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5b45:
        mov     edx, dword ptr [esi + 0xc]
        mov     ax, word ptr [edx]
        push    eax
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5b59:
        sub     eax, 0xa300
        je      L_7b538b
        sub     eax, 0x10
        jne     L_7b54c9
        mov     esi, dword ptr [esi + 0xc]
        mov     cl, byte ptr [esi]
        push    ecx
        call    ext_007B7720
        mov     dl, byte ptr [esi + 0x1]
        push    edx
        call    ext_007B7720
        mov     ax, word ptr [esi + 0x2]
        push    eax
        call    ext_007B7790
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        call    ext_007B7890
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        call    ext_007B7890
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5ba5:
        add     eax, 0xffff5cdc
        cmp     eax, 0x30
        ja      L_7b54c9
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x7b6134]
        jmp     dword ptr [4*edx + 0x7b6120]
    L_7b5bc2:
        mov     esi, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        call    ext_007B7970
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     edx, dword ptr [esi + 0xc]
        mov     ax, word ptr [edx]
        push    eax
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5bed:
        cmp     eax, 0xb008
        jg      L_7b5c67
        je      L_7b5c4b
        add     eax, 0xffff5ca8
        cmp     eax, 0x10
        ja      L_7b54c9
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x7b617c]
        jmp     dword ptr [4*ecx + 0x7b6168]
    L_7b5c13:
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B78D0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5c26:
        mov     esi, dword ptr [esi + 0xc]
        mov     dl, byte ptr [esi]
        push    edx
        call    ext_007B7720
        mov     al, byte ptr [esi + 0x1]
        push    eax
        call    ext_007B7720
        mov     cl, byte ptr [esi + 0x2]
        push    ecx
        call    ext_007B7720
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5c4b:
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi]
        push    edx
        call    ext_007B7890
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    ext_007B7890
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5c67:
        add     eax, 0xffff4ff7
        cmp     eax, 0x27
        ja      L_7b54c9
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x7b61dc]
        jmp     dword ptr [4*ecx + 0x7b6190]
        mov     esi, dword ptr [esi + 0xc]
        mov     dx, word ptr [esi]
        push    edx
        call    ext_007B7790
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    ext_007B79F0
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        call    ext_007B7890
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B7890
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     ecx, dword ptr [esi + 0xc]
        mov     dx, word ptr [ecx]
        push    edx
        call    ext_007B7790
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007B79F0
        mov     cx, word ptr [esi + 0x4]
        push    ecx
        call    ext_007B7790
        mov     dx, word ptr [esi + 0x6]
        push    edx
        call    ext_007B7790
        mov     ax, word ptr [esi + 0x8]
        push    eax
        call    ext_007B7790
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    ext_007B7D90
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edx]
        push    eax
        call    ext_007B79F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_7b5d26:
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007B78D0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7D90
        add     esi, 0xc
        push    esi
        call    ext_007B7D90
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
        xor     edi, edi
    L_7b5d70:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, edi
        add     eax, ecx
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        add     ecx, ebx
        push    ecx
        call    ext_007B7D90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     ebp
        add     edi, 0x1c
        add     ebx, 0xc
        cmp     ebp, eax
        jb      L_7b5d70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jbe     L_7b54e1
        xor     edi, edi
        xor     ebx, ebx
    L_7b5dbb:
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, ebx
        add     edx, eax
        push    edx
        call    ext_007B8090
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [eax + edi]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [edx + edi + 0x4]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + edi + 0x8]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x10
        inc     ebp
        add     ebx, 0x1c
        add     edi, 0xc
        cmp     ebp, eax
        jb      L_7b5dbb
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jbe     L_7b54e1
        xor     edi, edi
        xor     ebx, ebx
    L_7b5e21:
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, edx
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + edi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [eax + edi + 0x4]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [edx + edi + 0x8]
        push    eax
        call    ext_007B78D0
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + edi + 0xc]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x14
        inc     ebp
        add     ebx, 0x1c
        add     edi, 0x10
        cmp     ebp, eax
        jb      L_7b5e21
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jbe     L_7b54e1
        xor     edi, edi
        xor     ebx, ebx
    L_7b5e94:
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, edx
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [edi + ecx]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [edi + eax + 0x4]
        push    ecx
        call    ext_007B78D0
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [edi + edx + 0x8]
        push    eax
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x10
        inc     ebp
        add     ebx, 0x1c
        add     edi, 0xc
        cmp     ebp, eax
        jb      L_7b5e94
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
        xor     edi, edi
    L_7b5efa:
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, edi
        add     ecx, edx
        push    ecx
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, ebx
        add     edx, ecx
        push    edx
        call    ext_007B79F0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     ebp
        add     edi, 0x1c
        add     ebx, 0xd
        cmp     ebp, eax
        jb      L_7b5efa
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     edi, edi
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
    L_7b5f45:
        mov     ebp, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, ebp
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + 4*edi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     edi
        add     ebx, 0x1c
        cmp     edi, eax
        jb      L_7b5f45
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     edi, edi
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
    L_7b5f8c:
        mov     eax, dword ptr [esi + 0x10]
        add     eax, ebx
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + 4*edi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     edi
        add     ebx, 0x1c
        cmp     edi, eax
        jb      L_7b5f8c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     edi, edi
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
    L_7b5fd1:
        mov     ebp, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, ebp
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + 4*edi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     edi
        add     ebx, 0x1c
        cmp     edi, eax
        jb      L_7b5fd1
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     edi, edi
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
    L_7b6018:
        mov     ebp, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, ebp
        push    eax
        call    ext_007B8090
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + 4*edi]
        push    edx
        call    ext_007B78D0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x8
        inc     edi
        add     ebx, 0x1c
        cmp     edi, eax
        jb      L_7b6018
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
        mov     esi, dword ptr [esi + 0xc]
        push    esi
        call    ext_007B7F90
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        xor     edi, edi
        test    eax, eax
        jbe     L_7b54e1
        xor     ebx, ebx
    L_7b605f:
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, ebx
        add     eax, edx
        push    eax
        call    ext_007B8090
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x4
        inc     edi
        add     ebx, 0x1c
        cmp     edi, eax
        jb      L_7b605f
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}

// [0x007B3CF0] sub_007B3CF0 (4613 bytes)
extern "C" void ext_0079EA90();
extern "C" void ext_0079EED0();
extern "C" void ext_007B3380();
extern "C" void ext_007B7750();
extern "C" unsigned short ext_007B77D0();
extern "C" unsigned short ext_007B7830();
extern "C" void ext_007B7910();
extern "C" void ext_007B79B0();
extern "C" void ext_007B7A90();
extern "C" void ext_007B7AF0();
extern "C" void ext_007B7BA0();
extern "C" void ext_007B7DE0();
extern "C" void ext_007B7E70();
extern "C" void ext_007B7F20();
extern "C" void ext_007B8000();
extern "C" void ext_007B81C0();
extern "C" int mem_00925208;
extern "C" int mem_0092522C;

// [0x007B3CF0] sub_007B3CF0 (4613 bytes)
extern "C" __declspec(naked) void* __cdecl fn_007B3CF0(int* s) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        jne L_7B4EEC
        mov al, byte ptr [esi + 0x18]
        push eax
        call ext_0079EA90
        mov ecx, dword ptr [esi + 0x8]
        add ecx, 0x6
        push ecx
        call ext_0079EED0
        mov eax, dword ptr [esi]
        add esp, 0x8
        cmp eax, 0x80f0
        jg L_7B4660
        je L_7B4EEC
        cmp eax, 0x4000
        jg L_7B3FD8
        je L_7B4990
        cmp eax, 0x1460
        jg L_7B3E30
        je L_7B3DF4
        cmp eax, 0x1100
        jg L_7B3DCC
        je L_7B4375
        add eax, -0x2
        cmp eax, 0xfe
        ja L_7B4EC7
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b4f10]
        jmp dword ptr [4*edx + 0x7b4ef8]
L_7B3D7B:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        call ext_007B7910
        fstp dword ptr [edi + 0x8]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3DAB:
        push 0x2
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3DCC:
        cmp eax, 0x1420
        jg L_7B3E1B
        je L_7B3DAB
        cmp eax, 0x1400
        jg L_7B3E14
        je L_7B3DF4
        cmp eax, 0x1200
        je L_7B4EEC
        cmp eax, 0x1300
L_7B3DEE:
        jne L_7B4EC7
L_7B3DF4:
        push 0x4
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3E14:
        cmp eax, 0x1410
        jmp L_7B3DEE
L_7B3E1B:
        sub eax, 0x1430
        je L_7B3DAB
        sub eax, 0x10
        je L_7B48AF
        sub eax, 0x10
        jmp L_7B3DEE
L_7B3E30:
        cmp eax, 0x3030
        jg L_7B3F24
        je L_7B3F52
        cmp eax, 0x2302
        jg L_7B3F0A
        je L_7B3ED2
        cmp eax, 0x2200
        jg L_7B3E8F
        je L_7B3E9A
        cmp eax, 0x1500
        je L_7B3E72
        cmp eax, 0x2100
        je L_7B4EEC
        jmp L_7B4EC7
L_7B3E72:
        push 0xc
        call dword ptr [mem_00925208]
        push eax
        mov dword ptr [esi + 0xc], eax
        call ext_007B7DE0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3E8F:
        cmp eax, 0x2300
        jne L_7B4EC7
L_7B3E9A:
        push 0x10
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        call ext_007B7910
        fstp dword ptr [edi + 0x8]
        call ext_007B7910
        fstp dword ptr [edi + 0xc]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3ED2:
        push 0x10
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        call ext_007B7910
        fstp dword ptr [edi + 0x8]
        call ext_007B7830
        mov dword ptr [edi + 0xc], eax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3F0A:
        sub eax, 0x3000
        je L_7B4EEC
        sub eax, 0x10
        je L_7B3F52
        sub eax, 0x10
        je L_7B3F52
        jmp L_7B4EC7
L_7B3F24:
        cmp eax, 0x3080
        jg L_7B3FB8
        je L_7B4990
        add eax, 0xffffcfc0
        cmp eax, 0x30
        ja L_7B4EC7
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b501c]
        jmp dword ptr [4*ecx + 0x7b5010]
L_7B3F52:
        push 0x10
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi + 0xc]
        push edi
        call ext_007B7DE0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3F79:
        push 0x1c
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi + 0xc]
        call ext_007B7910
        fstp dword ptr [edi + 0x10]
        call ext_007B7910
        fstp dword ptr [edi + 0x14]
        call ext_007B7910
        fstp dword ptr [edi + 0x18]
        push edi
        call ext_007B7DE0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B3FB8:
        sub eax, 0x3d3d
        je L_7B4EEC
        dec eax
        je L_7B48AF
        sub eax, 0x6c
        je L_7B4EEC
        jmp L_7B4EC7
L_7B3FD8:
        cmp eax, 0x4654
        jg L_7B43F4
        je L_7B4990
        cmp eax, 0x4165
        jg L_7B4294
        je L_7B4274
        add eax, 0xffffbf00
        cmp eax, 0x60
        ja L_7B4EC7
        xor edx, edx
        mov dl, byte ptr [eax + 0x7b5074]
        jmp dword ptr [4*edx + 0x7b5050]
L_7B4017:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov bx, ax
        push 0xc
        mov ebp, ebx
        mov word ptr [edi], bx
        and ebp, 0xffff
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0xc
        mov dword ptr [edi + 0x4], eax
        test bx, bx
        jbe L_7B4EEC
        xor ebx, ebx
L_7B4051:
        mov edx, dword ptr [edi + 0x4]
        mov eax, ebx
        add eax, edx
        push eax
        call ext_007B7DE0
        add esp, 0x4
        add ebx, 0xc
        dec ebp
        jne L_7B4051
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4070:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov bx, ax
        push 0x2
        mov ebp, ebx
        mov word ptr [edi], bx
        and ebp, 0xffff
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0xc
        mov dword ptr [edi + 0x4], eax
        test bx, bx
        jbe L_7B4EEC
        xor ebx, ebx
L_7B40AA:
        call ext_007B77D0
        mov ecx, dword ptr [edi + 0x4]
        add ebx, 0x2
        dec ebp
        mov word ptr [ebx + ecx - 0x2], ax
        jne L_7B40AA
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B40C6:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov bx, ax
        push 0x8
        mov ebp, ebx
        mov word ptr [edi], bx
        and ebp, 0xffff
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0xc
        mov dword ptr [edi + 0x4], eax
        test bx, bx
        jbe L_7B4EEC
        xor ebx, ebx
L_7B4100:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, ebx
        add edx, ecx
        push edx
        call ext_007B7F20
        add esp, 0x4
        add ebx, 0x8
        dec ebp
        jne L_7B4100
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B411F:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        push 0x10
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B7AF0
        add esp, 0xc
        call ext_007B77D0
        mov bx, ax
        test bx, bx
        mov word ptr [edi + 0x4], bx
        je L_7B4186
        mov ebp, ebx
        push 0x2
        and ebp, 0xffff
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0x8
        mov dword ptr [edi + 0x8], eax
        test bx, bx
        jbe L_7B4EEC
        xor ebx, ebx
L_7B416A:
        call ext_007B77D0
        mov ecx, dword ptr [edi + 0x8]
        add ebx, 0x2
        dec ebp
        mov word ptr [ebx + ecx - 0x2], ax
        jne L_7B416A
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4186:
        mov dword ptr [edi + 0x8], 0
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4196:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov eax, dword ptr [esi + 0x4]
        sub eax, 0x6
        mov dword ptr [esi + 0xc], edi
        shr eax, 0x2
        mov word ptr [edi], ax
        and eax, 0xffff
        push 0x4
        push eax
        call dword ptr [mem_0092522C]
        xor ebx, ebx
        add esp, 0xc
        cmp word ptr [edi], bx
        mov dword ptr [edi + 0x4], eax
        jbe L_7B4EEC
L_7B41CE:
        call ext_007B7830
        mov ecx, dword ptr [edi + 0x4]
        mov edx, ebx
        and edx, 0xffff
        inc ebx
        mov dword ptr [ecx + 4*edx], eax
        cmp bx, word ptr [edi]
        jb L_7B41CE
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B41F0:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov bx, ax
        push 0x8
        mov ebp, ebx
        mov word ptr [edi], bx
        and ebp, 0xffff
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0xc
        mov dword ptr [edi + 0x4], eax
        test bx, bx
        jbe L_7B4EEC
        xor ebx, ebx
L_7B422A:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, ebx
        add edx, ecx
        push edx
        call ext_007B7E70
        add esp, 0x4
        add ebx, 0x8
        dec ebp
        jne L_7B422A
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4249:
        push 0x30
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        mov edi, eax
        mov ebx, 0xc
L_7B425E:
        call ext_007B7910
        fstp dword ptr [edi]
        add edi, 0x4
        dec ebx
        jne L_7B425E
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4274:
        push 0x1
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7750
        mov byte ptr [edi], al
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4294:
        cmp eax, 0x4600
        jg L_7B4360
        je L_7B3E72
        add eax, 0xffffbe90
        cmp eax, 0x20
        ja L_7B4EC7
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b50ec]
        jmp dword ptr [4*ecx + 0x7b50d8]
L_7B42C2:
        push 0x18
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [esi + 0xc], eax
        mov edi, eax
        mov ebx, 0x6
L_7B42D7:
        push 0x10
        push edi
        call ext_007B7AF0
        add esp, 0x8
        add edi, 0x4
        dec ebx
        jne L_7B42D7
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B42F1:
        push 0x58
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        call ext_007B7910
        fstp dword ptr [edi + 0x8]
        lea edx, [edi + 0xc]
        push edx
        call ext_007B7DE0
        add esp, 0x8
        call ext_007B7910
        fstp dword ptr [edi + 0x18]
        lea ebx, [edi + 0x1c]
        mov ebp, 0xc
L_7B4332:
        call ext_007B7910
        fstp dword ptr [ebx]
        add ebx, 0x4
        dec ebp
        jne L_7B4332
        call ext_007B7910
        fstp dword ptr [edi + 0x4c]
        call ext_007B7910
        fstp dword ptr [edi + 0x50]
        call ext_007B7910
        fstp dword ptr [edi + 0x54]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4360:
        sub eax, 0x4610
        je L_7B43C5
        sub eax, 0x31
        je L_7B4394
        sub eax, 0x12
        jne L_7B4EC7
L_7B4375:
        push 0x4
        call dword ptr [mem_00925208]
        push 0xc
        push eax
        mov dword ptr [esi + 0xc], eax
        call ext_007B7AF0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4394:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        call ext_007B77D0
        mov word ptr [edi + 0x8], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B43C5:
        push 0x14
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B7DE0
        add esp, 0x8
        call ext_007B7910
        fstp dword ptr [edi + 0xc]
        call ext_007B7910
        fstp dword ptr [edi + 0x10]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B43F4:
        cmp eax, 0x4700
        jg L_7B444A
        je L_7B4412
        add eax, 0xffffb9aa
        cmp eax, 0x5
        ja L_7B4EC7
        jmp dword ptr [4*eax + 0x7b5110]
L_7B4412:
        push 0x20
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B7DE0
        lea eax, [edi + 0xc]
        push eax
        call ext_007B7DE0
        add esp, 0xc
        call ext_007B7910
        fstp dword ptr [edi + 0x18]
        call ext_007B7910
        fstp dword ptr [edi + 0x1c]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B444A:
        cmp eax, 0x8000
        jg L_7B45DA
        je L_7B4EEC
        cmp eax, 0x7001
        jg L_7B44FE
        je L_7B44A7
        cmp eax, 0x4720
        je L_7B447F
        cmp eax, 0x4d4d
        je L_7B4EEC
        jmp L_7B4EC7
L_7B447F:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7910
        fstp dword ptr [edi]
        call ext_007B7910
        fstp dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B44A7:
        push 0xe
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        call ext_007B77D0
        mov word ptr [edi + 0x2], ax
        call ext_007B77D0
        mov word ptr [edi + 0x4], ax
        call ext_007B77D0
        mov word ptr [edi + 0x6], ax
        call ext_007B77D0
        mov word ptr [edi + 0x8], ax
        call ext_007B77D0
        mov word ptr [edi + 0xa], ax
        call ext_007B77D0
        mov word ptr [edi + 0xc], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B44FE:
        cmp eax, 0x7011
        jl L_7B4EC7
        cmp eax, 0x7012
        jle L_7B4557
        cmp eax, 0x7020
        jne L_7B4EC7
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        call ext_007B77D0
        mov word ptr [edi + 0x2], ax
        call ext_007B77D0
        mov word ptr [edi + 0x4], ax
        call ext_007B77D0
        mov word ptr [edi + 0x6], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4557:
        push 0x2c
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        call ext_007B77D0
        mov word ptr [edi + 0x2], ax
        call ext_007B77D0
        mov word ptr [edi + 0x4], ax
        call ext_007B77D0
        mov word ptr [edi + 0x6], ax
        call ext_007B77D0
        mov word ptr [edi + 0x8], ax
        call ext_007B77D0
        mov word ptr [edi + 0xa], ax
        call ext_007B77D0
        mov word ptr [edi + 0xc], ax
        call ext_007B7910
        fstp dword ptr [edi + 0x10]
        lea ecx, [edi + 0x14]
        push ecx
        call ext_007B7DE0
        call ext_007B7910
        fstp dword ptr [edi + 0x20]
        call ext_007B7910
        fstp dword ptr [edi + 0x24]
        add edi, 0x28
        push 0xa
        push edi
        call ext_007B7BA0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B45DA:
        add eax, 0xffff7fff
        cmp eax, 0x8
        ja L_7B4EC7
        jmp dword ptr [4*eax + 0x7b5128]
L_7B45EF:
        push esi
        call ext_007B3380
        mov edi, eax
        mov eax, dword ptr [esi + 0x4]
        add eax, -0x6
        push eax
        mov dword ptr [edi], eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi]
        push eax
        push edx
        mov dword ptr [edi + 0x4], eax
        call ext_007B79B0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B461E:
        push 0x4
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0xc], eax
        push ecx
        push eax
        call ext_007B7AF0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B463F:
        push 0x4
        call dword ptr [mem_00925208]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0xc], eax
        push edx
        push eax
        call ext_007B7AF0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4660:
        cmp eax, 0xa348
        jg L_7B47EE
        je L_7B4EEC
        cmp eax, 0xa310
        jg L_7B479B
        je L_7B475A
        cmp eax, 0xa087
        jg L_7B46AE
        je L_7B3DF4
        add eax, 0xffff6000
        cmp eax, 0x84
        ja L_7B4EC7
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b5158]
        jmp dword ptr [4*ecx + 0x7b514c]
L_7B46AE:
        cmp eax, 0xa220
        jg L_7B471C
        je L_7B4EEC
        cmp eax, 0xa204
        jg L_7B470C
        je L_7B4EEC
        cmp eax, 0xa100
        je L_7B46DF
        cmp eax, 0xa200
        je L_7B4EEC
        jmp L_7B4EC7
L_7B46DF:
        push 0x2
        call dword ptr [mem_00925208]
        mov edx, dword ptr [esi + 0x8]
        mov edi, eax
        add edx, 0x6
        mov dword ptr [esi + 0xc], edi
        push edx
        call ext_0079EED0
        add esp, 0x8
        call ext_007B77D0
        mov word ptr [edi], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B470C:
        cmp eax, 0xa210
        je L_7B4EEC
        jmp L_7B4EC7
L_7B471C:
        sub eax, 0xa230
        je L_7B4EEC
        sub eax, 0x22
        je L_7B3DAB
        sub eax, 0xae
        jne L_7B4EC7
        push 0x4
        call dword ptr [mem_00925208]
        push 0x10
        push eax
        mov dword ptr [esi + 0xc], eax
        call ext_007B7AF0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B475A:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7750
        mov byte ptr [edi], al
        call ext_007B7750
        mov byte ptr [edi + 0x1], al
        call ext_007B77D0
        mov word ptr [edi + 0x2], ax
        call ext_007B7830
        mov dword ptr [edi + 0x4], eax
        call ext_007B7830
        mov dword ptr [edi + 0x8], eax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B479B:
        add eax, 0xffff5ce0
        cmp eax, 0x26
        ja L_7B4EC7
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b51ec]
        jmp dword ptr [4*ecx + 0x7b51e0]
L_7B47B8:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        mov eax, dword ptr [esi + 0x4]
        add eax, -0x6
        push 0x1
        mov dword ptr [esi + 0xc], edi
        push eax
        mov dword ptr [edi], eax
        call dword ptr [mem_0092522C]
        mov edx, dword ptr [edi]
        push eax
        push edx
        mov dword ptr [edi + 0x4], eax
        call ext_007B79B0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B47EE:
        cmp eax, 0xb00a
        jg L_7B492E
        je L_7B48F7
        cmp eax, 0xa35c
        jg L_7B484A
        je L_7B3DF4
        add eax, 0xffff5cb6
        cmp eax, 0x10
        ja L_7B4EC7
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x7b5224]
        jmp dword ptr [4*ecx + 0x7b5214]
L_7B4829:
        push 0x2
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        mov word ptr [edi], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B484A:
        cmp eax, 0xb007
        jg L_7B48A1
        cmp eax, 0xafff
        jge L_7B4EEC
        add eax, 0xffff5ca0
        cmp eax, 0x8
        ja L_7B4EC7
        jmp dword ptr [4*eax + 0x7b5238]
L_7B4871:
        push 0x3
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7750
        mov byte ptr [edi], al
        call ext_007B7750
        mov byte ptr [edi + 0x1], al
        call ext_007B7750
        mov byte ptr [edi + 0x2], al
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B48A1:
        sub eax, 0xb008
        je L_7B48CF
        dec eax
        jne L_7B4EC7
L_7B48AF:
        push 0x4
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7830
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B48CF:
        push 0x8
        call dword ptr [mem_00925208]
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esi + 0xc], edi
        call ext_007B7830
        mov dword ptr [edi], eax
        call ext_007B7830
        mov dword ptr [edi + 0x4], eax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B48F7:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        mov dword ptr [esi + 0xc], edi
        call ext_007B77D0
        lea edx, [edi + 0x4]
        push 0x200
        push edx
        mov word ptr [edi], ax
        call ext_007B7AF0
        add esp, 0xc
        call ext_007B7830
        mov dword ptr [edi + 0x8], eax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B492E:
        cmp eax, 0xb020
        jg L_7B4A51
        je L_7B49D7
        add eax, 0xffff4ff0
        cmp eax, 0x5
        ja L_7B4EC7
        jmp dword ptr [4*eax + 0x7b525c]
L_7B4954:
        push 0xc
        call dword ptr [mem_00925208]
        mov edi, eax
        push 0xa
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B7AF0
        add esp, 0xc
        call ext_007B77D0
        mov word ptr [edi + 0x4], ax
        call ext_007B77D0
        mov word ptr [edi + 0x6], ax
        call ext_007B77D0
        mov word ptr [edi + 0x8], ax
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4990:
        push 0x4
        call dword ptr [mem_00925208]
        push 0xa
        push eax
        mov dword ptr [esi + 0xc], eax
        call ext_007B7AF0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B49AF:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B7DE0
        add edi, 0xc
        push edi
        call ext_007B7DE0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B49D7:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0xc
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        xor ebp, ebp
        add esp, 0x18
        cmp ebx, ebp
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x10], ebp
        mov ebx, ebp
L_7B4A1A:
        mov ecx, dword ptr [edi + 0x10]
        mov eax, ebp
        add eax, ecx
        push eax
        call ext_007B81C0
        mov eax, dword ptr [edi + 0x14]
        mov ecx, ebx
        add ecx, eax
        push ecx
        call ext_007B7DE0
        mov eax, dword ptr [esp + 0x20]
        add esp, 0x8
        add ebp, 0x1c
        add ebx, 0xc
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_7B4A1A
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4A51:
        cmp eax, 0xb030
        jg L_7B4EC0
        je L_7B3DAB
        add eax, 0xffff4fdf
        cmp eax, 0x8
        ja L_7B4EC7
        jmp dword ptr [4*eax + 0x7b5274]
L_7B4A77:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebp, dword ptr [edi + 0xc]
        mov ebx, dword ptr [mem_0092522C]
        push 0xc
        push ebp
        call ebx
        push 0x1c
        push ebp
        mov dword ptr [edi + 0x14], eax
        call ebx
        add esp, 0x18
        mov dword ptr [edi + 0x10], eax
        test ebp, ebp
        jbe L_7B4EEC
        xor ebx, ebx
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x10], ebx
        mov ebp, ebx
L_7B4ABA:
        mov eax, dword ptr [edi + 0x10]
        mov edx, ebp
        add edx, eax
        push edx
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov eax, dword ptr [edi + 0x14]
        fstp dword ptr [ebx + eax]
        call ext_007B7910
        mov ecx, dword ptr [edi + 0x14]
        fstp dword ptr [ebx + ecx + 0x4]
        call ext_007B7910
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x18]
        add ebp, 0x1c
        fstp dword ptr [ebx + edx + 0x8]
        add ebx, 0xc
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_7B4ABA
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4B07:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebp, dword ptr [edi + 0xc]
        mov ebx, dword ptr [mem_0092522C]
        push 0x1c
        push ebp
        call ebx
        push 0x10
        push ebp
        mov dword ptr [edi + 0x10], eax
        call ebx
        add esp, 0x18
        mov dword ptr [edi + 0x14], eax
        test ebp, ebp
        jbe L_7B4EEC
        xor ebx, ebx
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x10], ebx
        mov ebp, ebx
L_7B4B4A:
        mov edx, dword ptr [edi + 0x10]
        mov eax, ebp
        add eax, edx
        push eax
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov ecx, dword ptr [edi + 0x14]
        fstp dword ptr [ebx + ecx]
        call ext_007B7910
        mov edx, dword ptr [edi + 0x14]
        fstp dword ptr [ebx + edx + 0x4]
        call ext_007B7910
        mov eax, dword ptr [edi + 0x14]
        fstp dword ptr [ebx + eax + 0x8]
        call ext_007B7910
        mov ecx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x18]
        add ebp, 0x1c
        fstp dword ptr [ebx + ecx + 0xc]
        add ebx, 0x10
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_7B4B4A
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4BA3:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebp, dword ptr [edi + 0xc]
        mov ebx, dword ptr [mem_0092522C]
        push 0x1c
        push ebp
        call ebx
        push 0xc
        push ebp
        mov dword ptr [edi + 0x10], eax
        call ebx
        add esp, 0x18
        mov dword ptr [edi + 0x14], eax
        test ebp, ebp
        jbe L_7B4EEC
        xor ebx, ebx
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x10], ebx
        mov ebp, ebx
L_7B4BE6:
        mov eax, dword ptr [edi + 0x10]
        mov edx, ebp
        add edx, eax
        push edx
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov eax, dword ptr [edi + 0x14]
        fstp dword ptr [eax + ebx]
        call ext_007B7910
        mov ecx, dword ptr [edi + 0x14]
        fstp dword ptr [ecx + ebx + 0x4]
        call ext_007B7910
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x18]
        add ebp, 0x1c
        fstp dword ptr [edx + ebx + 0x8]
        add ebx, 0xc
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_7B4BE6
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4C33:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0xd
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        xor ebp, ebp
        add esp, 0x18
        cmp ebx, ebp
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x10], ebp
        mov ebx, ebp
L_7B4C76:
        mov eax, dword ptr [edi + 0x10]
        add eax, ebp
        push eax
        call ext_007B81C0
        mov ecx, dword ptr [edi + 0x14]
        push 0xa
        add ecx, ebx
        push ecx
        call ext_007B7A90
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        add ebp, 0x1c
        add ebx, 0xd
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L_7B4C76
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4CAB:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0x4
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        add esp, 0x18
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebp
L_7B4CE8:
        mov edx, dword ptr [edi + 0x10]
        mov eax, dword ptr [esp + 0x18]
        add edx, eax
        push edx
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 0x1c
        fstp dword ptr [eax + 4*ebp]
        inc ebp
        mov dword ptr [esp + 0x18], ecx
        cmp ebp, ebx
        jb L_7B4CE8
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4D1E:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0x4
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        add esp, 0x18
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebp
L_7B4D5B:
        mov ecx, dword ptr [edi + 0x10]
        mov eax, dword ptr [esp + 0x18]
        add ecx, eax
        push ecx
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 0x1c
        fstp dword ptr [edx + 4*ebp]
        inc ebp
        mov dword ptr [esp + 0x18], ecx
        cmp ebp, ebx
        jb L_7B4D5B
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4D91:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0x4
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        add esp, 0x18
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebp
L_7B4DCE:
        mov eax, dword ptr [edi + 0x10]
        mov edx, dword ptr [esp + 0x18]
        add eax, edx
        push eax
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov ecx, dword ptr [edi + 0x14]
        inc ebp
        fstp dword ptr [ecx + 4*ebp - 0x4]
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 0x1c
        cmp ebp, ebx
        mov dword ptr [esp + 0x18], ecx
        jb L_7B4DCE
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4E05:
        push 0x18
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [mem_0092522C]
        push 0x1c
        push ebx
        call ebp
        push 0x4
        push ebx
        mov dword ptr [edi + 0x10], eax
        call ebp
        add esp, 0x18
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr [edi + 0x14], eax
        jbe L_7B4EEC
        mov dword ptr [esp + 0x18], ebp
L_7B4E42:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edi + 0x10]
        add edx, eax
        push edx
        call ext_007B81C0
        add esp, 0x4
        call ext_007B7910
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 0x1c
        fstp dword ptr [eax + 4*ebp]
        inc ebp
        mov dword ptr [esp + 0x18], ecx
        cmp ebp, ebx
        jb L_7B4E42
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4E78:
        push 0x14
        call dword ptr [mem_00925208]
        mov edi, eax
        push edi
        mov dword ptr [esi + 0xc], edi
        call ext_007B8000
        mov ebp, dword ptr [edi + 0xc]
        push 0x1c
        push ebp
        call dword ptr [mem_0092522C]
        add esp, 0x10
        mov dword ptr [edi + 0x10], eax
        test ebp, ebp
        jbe L_7B4EEC
        xor ebx, ebx
L_7B4EA3:
        mov ecx, dword ptr [edi + 0x10]
        add ecx, ebx
        push ecx
        call ext_007B81C0
        add esp, 0x4
        add ebx, 0x1c
        dec ebp
        jne L_7B4EA3
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_7B4EC0:
        cmp eax, 0xc23d
        je L_7B4EEC
L_7B4EC7:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0x6
        jbe L_7B4EEC
        add eax, -0x6
        push eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [esi + 0x4]
        push eax
        sub edx, 0x6
        mov dword ptr [esi + 0xc], eax
        push edx
        call ext_007B79B0
        add esp, 0xc
L_7B4EEC:
        mov eax, dword ptr [esi + 0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007B7084] sub_007B7084 (12 bytes)
extern "C" __declspec(naked) void __cdecl fn_007B7084(void) {
    __asm {
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x03
    }
}

// [0x007B5224] sub_007B5224 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_007B5224(void* self) {
    __asm {
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x01
        _emit 0x03
        _emit 0x02
        _emit 0x02
        _emit 0x03
        _emit 0x02
        _emit 0x03
        _emit 0x02
        _emit 0x03
    }
}

// [0x007B6094] sub_007B6094 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_007B6094(void* self) {
    __asm {
        _emit 0x00
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x03
        _emit 0x03
    }
}
