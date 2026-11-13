// Decompiled translation unit: src/leaf/decompiled_7B0000.cpp

extern "C" void ext_00872828();
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
