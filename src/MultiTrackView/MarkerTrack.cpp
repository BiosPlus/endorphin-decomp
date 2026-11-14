// Decompiled translation unit: src/MultiTrackView/MarkerTrack.cpp

// [0x0043BD40] MultiTrackView::MarkerTrack::vfunc_2 (414 bytes)
extern "C" void ext_0043B450();
extern "C" void ext_0043B4D0();
extern "C" void ext_0043F2C0();
extern "C" void ext_00441020();
extern "C" int mem_00925134;
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_0043BD40(void* self, int edx_unused, int a1, int* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x87b27b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xb8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x28]
        call ext_0043B450
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov esi, dword ptr [edi + 0x18]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [edi + 0x28]
        lea ebx, [edi + 0x14]
        mov dword ptr [esp + 0x2c], edx
        mov edx, dword ptr [eax + 0x8]
        sub ecx, 0x2
        cmp esi, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0xcc], 0x0
        mov dword ptr [esp + 0x34], ecx
        mov dword ptr [esp + 0x30], edx
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x24], eax
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebx, ebx
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp esi, dword ptr [esp + 0x24]
        je L_endloop
        cmp esi, dword ptr [ebx + 0x8]
        jb L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov ecx, dword ptr [edi + 0x24]
        mov esi, dword ptr [esi]
        fld qword ptr [ecx + 0xe8]
        fcomp qword ptr [esi + 0x58]
        fnstsw ax
        test ah, 0x41
        jp L_else
        fld qword ptr [ecx + 0xf0]
        fcomp qword ptr [esi + 0x50]
        fnstsw ax
        test ah, 0x1
        jne L_else
        mov ecx, esi
        call ext_00441020
        mov dword ptr [esp + 0x1c], eax
        fild dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi + 0x24]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x1c]
        fld qword ptr [esp + 0x1c]
        fistp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x24]
        push esi
        mov dword ptr [esp + 0x2c], eax
        call ext_0043F2C0
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x4]
        lea eax, [esp + 0x28]
        push eax
        push ecx
        lea eax, [esp + 0xb8]
        push eax
        mov ecx, esi
        mov byte ptr [esi + 0x8a], 0x1
        call edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x60], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x64], edx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x68], ecx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esi + 0x6c], edx
        jmp L_join
    L_else:
        mov byte ptr [esi + 0x8a], 0x0
    L_join:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, dword ptr [ebx + 0x8]
        jb L_chk5
        call dword ptr [mem_00925134]
    L_chk5:
        add dword ptr [esp + 0x18], 0x4
        mov esi, dword ptr [esp + 0x18]
        jmp L_chk2
    L_endloop:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xcc], 0xffffffff
        call ext_0043B4D0
        mov ecx, dword ptr [esp + 0xc4]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x0043C160] MultiTrackView::MarkerTrack::vfunc_1 (1203 bytes)
extern "C" void ext_00412690();
extern "C" void ext_00412D70();
extern "C" void ext_00419EF0();
extern "C" void ext_0041AEE0();
extern "C" void ext_0043B420();
extern "C" void ext_00493D90();
extern "C" void ext_0066A180();
extern "C" void ext_006A6142();
extern "C" int mem_0092431C;
extern "C" int mem_00924300;

extern "C" __declspec(naked) void __fastcall fn_0043C160(void* self) {
    __asm {
        push    -0x1
        push    0x0087ba58
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x30
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x4c]
        mov     ebx, dword ptr [ebp + 0x4]
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        mov     al, byte ptr [eax + 0x37]
        test    al, al
        mov     esi, dword ptr [edi + 0x28]
        mov     dword ptr [esp + 0x14], esi
        je      L_43c19f
        call    ext_0043B420
        test    al, al
        je      L_43c200
    L_43c19f:
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0xc]
        mov     dword ptr [esp + 0x10], 0x796662
        call    eax
        test    al, al
        je      L_43c1bf
        mov     dword ptr [esp + 0x10], 0x675753
        jmp     L_43c1d4
    L_43c1bf:
        mov     ecx, dword ptr [edi + 0x10]
        push    edi
        call    ext_00412D70
        test    al, 0x1
        je      L_43c1d4
        mov     dword ptr [esp + 0x10], 0x6d5c58
    L_43c1d4:
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [esi + ebx]
        mov     esi, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     eax, ecx
        sub     edx, ebx
        push    edx
        sub     eax, ecx
        push    eax
        push    ebx
        push    ecx
        mov     ecx, esi
        call    ext_006A6142
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x2c], ecx
        jmp     L_43c204
    L_43c200:
        mov     esi, dword ptr [esp + 0x50]
    L_43c204:
        mov     edx, dword ptr [edi + 0x10]
        mov     al, byte ptr [edx + 0x35]
        test    al, al
        je      L_43c267
        mov     ecx, edi
        call    ext_0043B420
        test    al, al
        jne     L_43c222
        mov     eax, dword ptr [edi + 0x10]
        cmp     byte ptr [eax + 0x37], 0x0
        jne     L_43c267
    L_43c222:
        mov     eax, dword ptr [edi + 0x24]
        mov     edx, dword ptr [eax + 0xfc]
        mov     ecx, dword ptr [ebp]
        add     edx, ecx
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [esp + 0x14]
        lea     ecx, [ebx - 0x1]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [edx + ebx + 0x1]
        push    0x3
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [eax + 0xc8]
        push    0x0
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        push    esi
        lea     ecx, [eax + 0x1b4]
        call    ext_00419EF0
    L_43c267:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        call    edx
        test    al, al
        je      L_43c2cb
        mov     ecx, edi
        call    ext_0043B420
        test    al, al
        jne     L_43c289
        mov     eax, dword ptr [edi + 0x10]
        cmp     byte ptr [eax + 0x37], 0x0
        jne     L_43c2cb
    L_43c289:
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esp + 0x14]
        add     eax, ecx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x20], ecx
        lea     eax, [edx + ebx + 0x1]
        push    0x3
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [edi + 0x24]
        lea     ecx, [ebx - 0x1]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [eax + 0xcc]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    esi
        lea     ecx, [eax + 0x1b4]
        call    ext_00419EF0
    L_43c2cb:
        mov     edx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [edx + 0xd0]
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [eax + 0xc]
        fstp    dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [edi + 0x10]
        cmp     byte ptr [ecx + 0x35], 0x0
        mov     dword ptr [esp + 0x48], 0x0
        jne     L_43c30b
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        call    edx
        test    al, al
        je      L_43c32f
    L_43c30b:
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0xd4]
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [eax + 0xc]
        fstp    dword ptr [esp + 0x3c]
    L_43c32f:
        mov     ecx, edi
        call    ext_0043B420
        test    al, al
        je      L_43c4b9
        mov     esi, dword ptr [edi + 0x24]
        push    0x0
        push    0x1
        lea     ecx, [esp + 0x38]
        add     esi, 0x1b4
        call    ext_0066A180
        push    eax
        mov     ecx, esi
        call    ext_0041AEE0
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp]
        lea     ebx, [ecx + 0x2]
        add     ecx, 0xa
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x24], ecx
        lea     ebp, [edx + 0x2]
        lea     ecx, [esp + 0x18]
        lea     esi, [eax + 0x8]
        add     edx, 0xa
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x20], ebx
        call    ext_00412690
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], eax
        call    ext_00412690
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x28], eax
        call    ext_00412690
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], ebx
        call    ext_00412690
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     eax, dword ptr [esp + 0x14]
        add     eax, ebx
        cdq
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x10]
        sar     eax, 1
        add     edx, -0x1
        lea     ecx, [ebp + 0x2]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    ext_00412690
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     eax, dword ptr [edi + 0x10]
        cmp     byte ptr [eax + 0x37], 0x0
        je      L_43c4b1
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [edx + ebp]
        cdq
        sub     eax, edx
        sar     eax, 1
        add     ecx, -0x2
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x24], ecx
        add     ebx, 0x1
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_00412690
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    ext_00412690
    L_43c4b1:
        mov     esi, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [esp + 0x54]
    L_43c4b9:
        mov     edx, dword ptr [edi + 0x10]
        cmp     byte ptr [edx + 0x37], 0x0
        je      L_43c4cd
        mov     ecx, edi
        call    ext_0043B420
        test    al, al
        je      L_43c4df
    L_43c4cd:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0xc]
        call    edx
        test    al, al
        jne     L_43c4df
        mov     bl, 0x1
        jmp     L_43c4e1
    L_43c4df:
        xor     bl, bl
    L_43c4e1:
        mov     ecx, edi
        call    ext_0043B420
        test    bl, bl
        mov     byte ptr [esp + 0x50], al
        je      L_43c5ed
        test    al, al
        mov     dword ptr [esp + 0x54], 0x0
        je      L_43c534
        mov     ecx, dword ptr [edi + 0x10]
        cmp     byte ptr [ecx + 0x35], 0x0
        jne     L_43c51e
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        call    edx
        test    al, al
        jne     L_43c51e
        mov     eax, dword ptr [edi + 0x24]
        add     eax, 0x220
        jmp     L_43c526
    L_43c51e:
        mov     eax, dword ptr [edi + 0x24]
        add     eax, 0x218
    L_43c526:
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, esi
        call    eax
        mov     dword ptr [esp + 0x54], eax
    L_43c534:
        mov     ecx, dword ptr [edi + 0x10]
        cmp     byte ptr [ecx + 0x35], 0x0
        jne     L_43c553
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x8]
        call    eax
        test    al, al
        jne     L_43c553
        mov     ecx, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [ecx + 0xd0]
        jmp     L_43c55c
    L_43c553:
        mov     eax, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [eax + 0xd4]
    L_43c55c:
        mov     ebx, dword ptr [esi]
        call    ext_0066A180
        mov     edx, dword ptr [ebx + 0x38]
        push    eax
        mov     ecx, esi
        call    edx
        mov     ebx, dword ptr [ebp]
        mov     ebp, dword ptr [ebp + 0x4]
        mov     ecx, edi
        add     ebx, 0xf
        call    ext_0043B420
        test    al, al
        jne     L_43c582
        add     ebx, 0x9
    L_43c582:
        mov     ecx, edi
        call    ext_0043B420
        test    al, al
        je      L_43c5b0
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi]
        add     edi, 0x1c
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [mem_0092431C]
        push    eax
        mov     ecx, edi
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [esp + 0x18]
        jmp     L_43c5ce
    L_43c5b0:
        mov     ecx, dword ptr [esi]
        add     edi, 0x8
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, edi
        call    dword ptr [mem_0092431C]
        push    eax
        mov     ecx, edi
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [esp + 0x18]
    L_43c5ce:
        push    eax
        mov     eax, dword ptr [edx + 0x64]
        push    ebp
        push    ebx
        mov     ecx, esi
        call    eax
        cmp     byte ptr [esp + 0x50], 0x0
        je      L_43c5ed
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esp + 0x54]
        mov     edx, dword ptr [edx + 0x30]
        push    eax
        mov     ecx, esi
        call    edx
    L_43c5ed:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x48], 0xffffffff
        call    ext_00493D90
        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x3c
        ret     0x8
    }
}
