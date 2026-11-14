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
