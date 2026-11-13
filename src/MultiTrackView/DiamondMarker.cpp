// Decompiled translation unit: src/MultiTrackView/DiamondMarker.cpp

// [0x00440940] MultiTrackView::DiamondMarker::vfunc_3 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_00440940(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 10h]
        push edx
        call eax
        test eax, eax
        jl short L_zero
        cmp eax, 1
        jle short L_three
        cmp eax, 2
        jne short L_zero
        mov eax, 1
        ret 4
    L_three:
        mov eax, 3
        ret 4
    L_zero:
        xor eax, eax
        ret 4
    }
}

// [0x004410E0] MultiTrackView::DiamondMarker::vfunc_4 (318 bytes)
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" int mem_00925628;
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_004410E0(void* self) {
    __asm {
        sub esp, 0Ch
        push ebp
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [ebp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp]
        push eax
        push ecx
        lea edx, [esi + 60h]
        push edx
        call dword ptr [mem_00925628]
        test eax, eax
        jne L_in
        pop esi
        mov eax, 3
        pop ebp
        add esp, 0Ch
        ret 4
    L_in:
        cmp byte ptr [esi + 8Ch], 0
        push ebx
        push edi
        jne L_a
        cmp byte ptr [esi + 8Dh], 0
        je L_ret2
    L_a:
        mov ecx, esi
        call ext_00441020
        mov edx, eax
        mov dword ptr [esp + 20h], edx
        call ext_00441040
        fild dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 48h]
        mov edi, eax
        fsub qword ptr [ecx + 110h]
        mov dword ptr [esp + 10h], edi
        fmul qword ptr [ecx + 120h]
        fadd qword ptr [ecx + 118h]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 14h]
        fld qword ptr [esp + 14h]
        fistp dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 48h]
        fild dword ptr [esp + 10h]
        fsub qword ptr [ecx + 110h]
        fmul qword ptr [ecx + 120h]
        fadd qword ptr [ecx + 118h]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 14h]
        fld qword ptr [esp + 14h]
        fistp dword ptr [esp + 10h]
        mov cl, byte ptr [esi + 8Ch]
        test cl, cl
        je L_c
        cmp edx, edi
        jne L_c
        cmp byte ptr [esi + 89h], 0
        jne L_ret0
    L_c:
        mov bl, byte ptr [esi + 8Dh]
        test bl, bl
        je L_d
        cmp edx, edi
        jne L_d
        cmp byte ptr [esi + 89h], 0
        je L_ret1
    L_d:
        test cl, cl
        mov edx, dword ptr [esp + 20h]
        je L_e
        mov eax, dword ptr [ebp]
        cmp eax, edx
        jl L_e
        lea ecx, [edx + 8]
        cmp eax, ecx
        jg L_e
    L_ret0:
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0Ch
        ret 4
    L_e:
        test bl, bl
        mov ecx, dword ptr [esp + 10h]
        je L_f
        mov eax, dword ptr [ebp]
        cmp eax, ecx
        jg L_f
        lea esi, [ecx - 8]
        cmp eax, esi
        jl L_f
    L_ret1:
        pop edi
        pop ebx
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0Ch
        ret 4
    L_f:
        add ecx, -8
        add edx, 8
    L_ret2:
        pop edi
        pop ebx
        pop esi
        mov eax, 2
        pop ebp
        add esp, 0Ch
        ret 4
    }
}

// [0x00441220] MultiTrackView::DiamondMarker::vfunc_2 (258 bytes)
extern "C" void ext_0041A790();
extern "C" void ext_0041A830();
extern "C" void ext_0066A180();
extern "C" void ext_006A610C();
extern "C" void ext_006A61A8();
extern "C" int mem_00925640;
extern "C" int mem_009240D8;

extern "C" __declspec(naked) void __fastcall fn_00441220(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, edx
        and eax, 0x80000001
        push esi
        push edi
        jns L_44123e
        dec eax
        or eax, -2
        inc eax
    L_44123e:
        mov esi, dword ptr [ecx + 4]
        add eax, edx
        cdq
        sub eax, edx
        mov edx, dword ptr [ecx]
        sar eax, 1
        cmp byte ptr [ebp + 0x89], 0
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x14], esi
        je L_441279
        mov edi, edx
        sub edi, eax
        add eax, esi
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [ecx + 4]
        add esi, eax
        add eax, ecx
        push eax
        push edx
        push ecx
        push edi
        jmp L_441290
    L_441279:
        lea edi, [edx + eax]
        add eax, esi
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [ecx + 4]
        add esi, eax
        add eax, ecx
        push eax
        push edi
        push ecx
        push edx
    L_441290:
        mov dword ptr [esp + 0x28], edi
        mov edi, dword ptr [esp + 0x3c]
        push edi
        mov dword ptr [esp + 0x38], esi
        call dword ptr [mem_00925640]
        cmp byte ptr [ebp + 0x88], 0
        mov eax, dword ptr [ebp + 0x48]
        lea ebx, [eax + 0x1b4]
        je L_4412ba
        mov ecx, dword ptr [ebp + 0x74]
        jmp L_4412bd
    L_4412ba:
        mov ecx, dword ptr [ebp + 0x70]
    L_4412bd:
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [eax + 0xd8]
        push 0
        push 1
        mov dword ptr [esp + 0x34], edx
        call ext_0066A180
        mov esi, dword ptr [esp + 0x38]
        push eax
        push esi
        mov ecx, ebx
        call ext_0041A790
        mov ecx, dword ptr [esp + 0x2c]
        mov ebp, eax
        call ext_0066A180
        push eax
        push esi
        mov ecx, ebx
        call ext_0041A830
        mov ecx, dword ptr [esi + 4]
        mov ebx, eax
        push 3
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_009240D8]
        push ebx
        mov ecx, esi
        call ext_006A61A8
        push ebp
        mov ecx, esi
        call ext_006A610C
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xc
    }
}

extern "C" void ext_00493D90();
extern "C" void ext_00669E40();
extern "C" void ext_0066A180();
extern "C" void ext_0066A310();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A61A8();
extern "C" void ext_006A61AE();
extern "C" int mem_009324A4;
extern "C" int mem_00932478;
extern "C" int mem_009240D8;

// [0x004416E0] MultiTrackView::DiamondMarker::vfunc_1 (699 bytes)
extern "C" __declspec(naked) void __fastcall fn_004416E0(void* self) {
    __asm {
        push -1
        push 0x87b990
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        push ebx
        push ebp
        mov dword ptr [esp + 8], ecx
        mov ecx, dword ptr [esp + 0x7c]
        mov ebp, dword ptr [ecx + 0xc]
        mov eax, ebp
        and eax, 0x80000001
        push esi
        push edi
        jns L_441715
        dec eax
        or eax, -2
        inc eax
    L_441715:
        mov esi, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        lea edx, [esi - 1]
        mov dword ptr [esp + 0x50], edx
        lea edx, [esi + eax - 1]
        lea edi, [esi + 2*eax - 1]
        mov dword ptr [esp + 0x60], edi
        mov dword ptr [esp + 0x58], edx
        mov edi, ecx
        mov dword ptr [esp + 0x68], edx
        lea ebx, [ecx + eax]
        lea edx, [esi + ebp]
        mov ebp, dword ptr [esp + 0x10]
        sub edi, eax
        mov dword ptr [esp + 0x4c], ecx
        mov dword ptr [esp + 0x5c], ecx
        mov ecx, dword ptr [ebp + 0x48]
        mov dword ptr [esp + 0x54], ebx
        mov dword ptr [esp + 0x64], edi
        mov ecx, dword ptr [ecx + 0xfc]
        add eax, edi
        cmp eax, ecx
        mov dword ptr [esp + 0x18], edx
        jge L_441791
        mov eax, dword ptr [esp + 0x7c]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax + 8], ebx
        pop ebp
        mov dword ptr [eax + 0xc], edx
        pop ebx
        mov ecx, dword ptr [esp + 0x5c]
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 0xc

    L_441791:
        lea ecx, [esp + 0x3c]
        call ext_0066A310
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x74], 0
        call ext_0066A310
        sub esp, 0x10
        cmp byte ptr [ebp + 0x88], 0
        mov byte ptr [esp + 0x84], 1
        je L_4417fa
        mov ecx, dword ptr [ebp + 0x74]
        mov eax, dword ptr [ecx]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 0x94]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x24]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x94]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x24]
        jmp L_44186d

    L_4417fa:
        cmp byte ptr [ebp + 0x8b], 0
        jne L_441834
        fld1
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ext_00669E40
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [mem_00932478]
        jmp L_441884

    L_441834:
        mov edx, dword ptr [ebp + 0x70]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 0x94]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x20]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x94]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x20]

    L_44186d:
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp]
        call ext_00669E40
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz

    L_441884:
        fst dword ptr [esp + 8]
        lea ecx, [esp + 0x3c]
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ext_00669E40
        lea ecx, [esp + 0x3c]
        call ext_0066A180
        push eax
        lea ecx, [esp + 0x28]
        call ext_006A61AE
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x74], 2
        call ext_0066A180
        push eax
        push 1
        push 0
        lea ecx, [esp + 0x28]
        call ext_006A6148
        mov ebp, dword ptr [esp + 0x80]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x78], 3
        call ext_006A61A8
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x88], eax
        call ext_006A610C
        push 4
        lea edx, [esp + 0x50]
        mov dword ptr [esp + 0x84], eax
        mov eax, dword ptr [ebp + 4]
        push edx
        push eax
        call dword ptr [mem_009240D8]
        mov ecx, dword ptr [esp + 0x84]
        push ecx
        mov ecx, ebp
        call ext_006A61A8
        mov edx, dword ptr [esp + 0x80]
        push edx
        mov ecx, ebp
        call ext_006A610C
        mov ebp, dword ptr [esp + 0x7c]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [ebp], edi
        mov dword ptr [ebp + 4], esi
        mov dword ptr [ebp + 8], ebx
        mov esi, 0x92a23c
        lea ecx, [esp + 0x1c]
        mov dword ptr [ebp + 0xc], eax
        mov byte ptr [esp + 0x74], 2
        mov dword ptr [esp + 0x1c], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x74], 1
        mov dword ptr [esp + 0x24], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x74], 0
        call ext_00493D90
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x74], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x6c]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 0xc
    }
}
