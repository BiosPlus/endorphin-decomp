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
