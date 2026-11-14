// Decompiled translation unit: src/leaf/decompiled_7B0000.cpp

extern "C" void ext_00872828();
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

// [0x007BB140] sub_007BB140 (143 bytes)
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

// [0x007B3380] sub_007B3380 (1440 bytes)
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

// [0x007B7E40] sub_007B7E40 (48 bytes)
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

// [0x007BA6D0] sub_007BA6D0 (48 bytes)
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

// [0x007BA690] sub_007BA690 (64 bytes)
extern "C" void ext_007BAA40();

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

// [0x007B7D40] sub_007B7D40 (80 bytes)
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

// [0x007B23E0] sub_007B23E0 (80 bytes)
extern "C" void ext_006A5C5C();
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

// [0x007B22B0] sub_007B22B0 (96 bytes)
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

// [0x007B3250] sub_007B3250 (111 bytes)
extern "C" void ext_007AA510();
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

// [0x007B2B60] sub_007B2B60 (111 bytes)
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
