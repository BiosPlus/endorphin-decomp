// Decompiled translation unit: src/NMData/RealChannel.cpp

extern "C" int mem_00925134;

// [0x0051BEF0] NMData::RealChannel::vfunc_16 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051BEF0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x30]
        cmp ebx, dword ptr [esi + 0x34]
        push edi
        lea edi, [esi + 0x2c]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov dword ptr [esi + 0x3c], edi
        pop edi
        mov dword ptr [esi + 0x40], ebx
        pop esi
        pop ebx
        ret
    }
}

// [0x0051AB80] NMData::RealChannel::vfunc_7 (67 bytes)
extern "C" __declspec(naked) float __fastcall fn_0051AB80(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [esi + 0x34]
        sub ecx, eax
        sar ecx, 0x3
        jne L_main
    L_zero:
        fldz
        pop esi
        pop ecx
        ret
    L_main:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esi + 0x34]
        cmp eax, edi
        jbe L_chk1
        call ebx
    L_chk1:
        cmp edi, dword ptr [esi + 0x30]
        ja L_chk2
        call ebx
    L_chk2:
        add edi, -8
        cmp edi, dword ptr [esi + 0x34]
        jb L_chk3
        call ebx
    L_chk3:
        fld dword ptr [edi]
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
    }
}

// [0x0051AED0] NMData::RealChannel::vfunc_8 (31 bytes)
extern "C" void ext_0051AE20();

extern "C" __declspec(naked) void __fastcall fn_0051AED0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_0051AE20
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0051ABD0] NMData::RealChannel::vfunc_13 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051ABD0(void* self, int edx_unused, float f) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x30]
        cmp esi, dword ptr [ecx + 0x34]
        push edi
        lea edi, [ecx + 0x2c]
        jbe L_ok1
        call ebp
    L_ok1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_ok2
        call ebp
    L_ok2:
        test edi, edi
        je L_bad1
        cmp edi, edi
        je L_ok3
    L_bad1:
        call ebp
    L_ok3:
        cmp esi, ebx
        je L_done
        test edi, edi
        jne L_ok4
        call ebp
    L_ok4:
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok5
        call ebp
    L_ok5:
        fld dword ptr [esi + 0x4]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok6
        call ebp
    L_ok6:
        add esi, 0x8
        jmp L_ok1
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0051BF10] NMData::RealChannel::vfunc_3 (60 bytes)
extern "C" void ext_0048EF80();

extern "C" __declspec(naked) void __fastcall fn_0051BF10(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip_a
        call ebp
    skip_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe skip_b
        call ebp
    skip_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0051BA70] NMData::RealChannel::vfunc_6 (160 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051BA70(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        lea esi, [ecx + 0x2c]
    L_51ba7e:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_51ba88
        call ebp
    L_51ba88:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_51ba92
        call ebp
    L_51ba92:
        test esi, esi
        je short L_51ba9a
        cmp esi, esi
        je short L_51ba9c
    L_51ba9a:
        call ebp
    L_51ba9c:
        cmp edi, ebx
        je short L_51bb08
        test esi, esi
        jne short L_51baa6
        call ebp
    L_51baa6:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_51baad
        call ebp
    L_51baad:
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jp short L_51bafa
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne short L_51bafc
        mov edx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x8]
        cmp eax, edx
        je short L_51baf4
        lea ecx, [eax - 0x8]
        mov edi, edi
    L_51bae0:
        mov edi, dword ptr [eax]
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edi
        add eax, 0x8
        add ecx, 0x8
        cmp eax, edx
        jne short L_51bae0
    L_51baf4:
        add dword ptr [esi + 0x8], -0x8
        jmp short L_51ba7e
    L_51bafa:
        fstp st(0)
    L_51bafc:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_51bb03
        call ebp
    L_51bb03:
        add edi, 0x8
        jmp short L_51ba88
    L_51bb08:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x0051C2A0] NMData::RealChannel::vfunc_10 (89 bytes)
extern "C" void ext_0047B170();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0051C2A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x30]
        cmp esi, dword ptr [ecx + 0x34]
        push edi
        lea edi, [ecx + 0x2c]
        jbe short L_ok1
        call ebp
    L_ok1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_ok2
        call ebp
    L_ok2:
        test edi, edi
        je short L_bad1
        cmp edi, edi
        je short L_ok3
    L_bad1:
        call ebp
    L_ok3:
        cmp esi, ebx
        je short L_done
        test edi, edi
        jne short L_ok4
        call ebp
    L_ok4:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_ok5
        call ebp
    L_ok5:
        mov ecx, dword ptr [esp + 0x14]
        push esi
        call ext_0047B170
        cmp esi, dword ptr [edi + 0x8]
        jb short L_ok6
        call ebp
    L_ok6:
        add esi, 0x8
        jmp short L_ok2
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0051C6D0] NMData::RealChannel::vfunc_4 (93 bytes)
extern "C" void ext_0051C640();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0051C6D0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0x44
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_null
        push esi
        mov ecx, eax
        call ext_0051C640
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00660A50();
extern "C" void ext_006721D0();
extern "C" int mem_00B599BC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00928B5D;
extern "C" int mem_00892D49;

// [0x0051A050] NMData::RealChannel::vfunc_12 (220 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051A050(void* self, int edx_unused, void* arg0) {
    __asm {
        push    -1
        push    offset mem_00892D49
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x2c
        push    esi
        mov     esi, ecx
        call    ext_00660A50
        mov     ecx, [esp + 0x40]
        mov     edx, [eax]
        mov     edx, [edx + 0x14]
        push    0
        push    ecx
        lea     ecx, [esi + 4]
        push    ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     ecx, [esp + 8]
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], 0
        je      L_51a103
        cmp     ecx, dword ptr [mem_00B599BC]
        je      L_51a103
        push    offset mem_00928B5D
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924FE4]
        mov     eax, [esi]
        mov     eax, [eax + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x40], 1
        call    eax
        push    eax
        lea     ecx, [esp + 8]
        mov     byte ptr [esp + 0x3c], 2
        call    ext_006721D0
        mov     ecx, [esp + 0x10]
        test    ecx, ecx
        mov     byte ptr [esp + 0x38], 1
        je      L_51a0f0
        mov     edx, [ecx]
        mov     edx, [edx + 0x78]
        lea     eax, [esp + 0xc]
        push    eax
        call    edx
    L_51a0f0:
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x38], 0
        call    dword ptr [mem_00924FF4]
        mov     ecx, [esp + 8]
    L_51a103:
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], -1
        pop     esi
        je      L_51a11b
        mov     eax, [ecx]
        mov     eax, [eax + 0x78]
        lea     edx, [esp]
        push    edx
        call    eax
    L_51a11b:
        mov     ecx, [esp + 0x2c]
        mov     fs:[0], ecx
        add     esp, 0x38
        ret     4
    }
}

// [0x0051AAB0] NMData::RealChannel::vfunc_2 (200 bytes)
extern "C" void ext_00519FA0();
extern "C" void ext_006404E0();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9ED90;
extern "C" int mem_00925134;
extern "C" int mem_00A9F010;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9F530;
extern "C" int mem_00A9FAEC;
extern "C" int mem_00A9F534;

extern "C" __declspec(naked) void* __fastcall fn_0051AAB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED90]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        mov ebp, eax
        push ebp
        mov ecx, esi
        call ext_00519FA0
        mov edi, dword ptr [esi + 0x30]
        add esi, 0x2c
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_51aae0
        call dword ptr [mem_00925134]
    loc_51aae0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_51aaee
        call dword ptr [mem_00925134]
    loc_51aaee:
        cmp esi, esi
        je loc_51aaf8
        call dword ptr [mem_00925134]
    loc_51aaf8:
        cmp edi, ebx
        je loc_51ab6f
        mov ecx, dword ptr [mem_00A9F010]
        push ecx
        mov ecx, ebp
        call ext_006404E0
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, eax
        jb loc_51ab17
        call dword ptr [mem_00925134]
    loc_51ab17:
        mov edx, dword ptr [mem_00A9FAE8]
        fld dword ptr [edi]
        mov eax, dword ptr [mem_00A9F530]
        push edx
        push eax
        push ecx
        fstp dword ptr [esp]
        push ebx
        call ext_0067EF60
        add esp, 0x10
        cmp edi, dword ptr [esi + 0x8]
        jb loc_51ab3e
        call dword ptr [mem_00925134]
    loc_51ab3e:
        mov ecx, dword ptr [mem_00A9FAEC]
        fld dword ptr [edi + 0x4]
        mov edx, dword ptr [mem_00A9F534]
        push ecx
        push edx
        push ecx
        fstp dword ptr [esp]
        push ebx
        call ext_0067EF60
        add esp, 0x10
        cmp edi, dword ptr [esi + 0x8]
        jb loc_51ab67
        call dword ptr [mem_00925134]
    loc_51ab67:
        add edi, 0x8
        jmp loc_51aae0
    loc_51ab6f:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_0046C0A0();
extern "C" void ext_00519EC0();
extern "C" void ext_0063EFE0();
extern "C" void ext_00665570();
extern "C" void ext_0067EE80();
extern "C" void ext_006A5C5C();
extern "C" int mem_008B4D2A;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_009251F0;
extern "C" int mem_0094539C;
extern "C" int mem_009525BC;
extern "C" int mem_009525C0;
extern "C" int mem_00A9F530;
extern "C" int mem_00A9F534;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;

// [0x0051BF50] NMData::RealChannel::vfunc_1 (843 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051BF50(void* self) {
    __asm {
        push -0x1
        push offset mem_008B4D2A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x6c
        fld dword ptr [esp + 0x80]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x8c]
        push ecx
        fstp dword ptr [esp]
        mov ebx, ecx
        push edi
        mov dword ptr [esp + 0x1c], ebx
        call ext_00519EC0
        push offset mem_009525C0
        mov ecx, edi
        call ext_0063EFE0
        mov esi, eax
        cmp esi, 0xb53a34
        je L_0051C191
        cmp esi, 0xb53b30
        je L_0051C191
        cmp esi, 0xb53ab0
        je L_0051C191
        cmp esi, 0xb53a70
        je L_0051C191
        cmp esi, 0xb53af0
        je L_0051C191
        push offset mem_0094539C
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_0051C01C
        cmp eax, 0xb53b30
        je L_0051C01C
        cmp eax, 0xb53ab0
        je L_0051C01C
        cmp eax, 0xb53a70
        je L_0051C01C
        cmp eax, 0xb53af0
        je L_0051C01C
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x94]
        push ecx
        call ext_0046C0A0
        add esp, 0x8
    L_0051C01C:
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FE8]
        lea edx, [esp + 0x44]
        push esi
        xor edi, edi
        push edx
        mov dword ptr [esp + 0x8c], edi
        call ext_004275E0
        add esp, 0x8
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x3c], edi
        mov dword ptr [esp + 0x40], edi
        mov bl, 0x1
        push offset mem_009525BC
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x88], bl
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x64]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        mov byte ptr [esp + 0x90], 0x2
        call ext_00665570
        add esp, 0xc
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x84], bl
        call dword ptr [mem_00924FF4]
        fldz
        mov esi, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x10]
        cmp esi, dword ptr [esp + 0x3c]
        mov ebx, dword ptr [mem_00925134]
        jbe L_0051C0A9
        call ebx
    L_0051C0A9:
        lea eax, [esp + 0x34]
        mov ebp, eax
        nop
    L_0051C0B0:
        mov edi, dword ptr [esp + 0x3c]
        cmp dword ptr [esp + 0x38], edi
        jbe L_0051C0BC
        call ebx
    L_0051C0BC:
        test ebp, ebp
        je L_0051C0C8
        lea eax, [esp + 0x34]
        cmp ebp, eax
        je L_0051C0CA
    L_0051C0C8:
        call ebx
    L_0051C0CA:
        cmp esi, edi
        je L_0051C12F
        test ebp, ebp
        jne L_0051C0D4
        call ebx
    L_0051C0D4:
        cmp esi, dword ptr [ebp + 0x8]
        jb L_0051C0DB
        call ebx
    L_0051C0DB:
        mov edi, dword ptr [esp + 0x14]
        mov ebx, dword ptr [edi]
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        mov edx, dword ptr [ebx + 0x14]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [esp + 0x18]
        mov ecx, edi
        fstp dword ptr [esp]
        call edx
        cmp esi, dword ptr [ebp + 0x8]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        jb L_0051C124
        call dword ptr [mem_00925134]
    L_0051C124:
        mov ebx, dword ptr [mem_00925134]
        add esi, 0x1c
        jmp L_0051C0B0
    L_0051C12F:
        mov esi, dword ptr [esp + 0x38]
        test esi, esi
        mov byte ptr [esp + 0x84], 0x0
        je L_0051C163
        mov edi, dword ptr [esp + 0x3c]
        cmp esi, edi
        je L_0051C156
    L_0051C147:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne L_0051C147
    L_0051C156:
        mov eax, dword ptr [esp + 0x38]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0051C163:
        xor eax, eax
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x40], eax
        mov dword ptr [esp + 0x84], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x8c]
    L_0051C191:
        lea esi, [edi + 0x24]
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0051C1A2
        call dword ptr [mem_00925134]
    L_0051C1A2:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_0051C1C5
        call dword ptr [mem_00925134]
    L_0051C1C5:
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], edi
        lea ecx, [esp + 0x28]
    L_0051C1D5:
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x20]
        test ebp, ebp
        je L_0051C1E8
        cmp ebp, dword ptr [esp + 0x2c]
        je L_0051C1F2
    L_0051C1E8:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_0051C1F8
    L_0051C1F2:
        mov esi, dword ptr [mem_00925134]
    L_0051C1F8:
        mov edi, dword ptr [esp + 0x24]
        cmp edi, dword ptr [esp + 0x30]
        jae L_0051C286
        test ebp, ebp
        jne L_0051C20C
        call esi
    L_0051C20C:
        cmp edi, dword ptr [ebp + 0x8]
        jb L_0051C213
        call esi
    L_0051C213:
        mov ecx, dword ptr [mem_00A9FAE8]
        mov edx, dword ptr [mem_00A9F530]
        mov esi, dword ptr [edi]
        push ecx
        push edx
        push esi
        call ext_0067EE80
        fstp dword ptr [esp + 0x98]
        mov eax, dword ptr [mem_00A9FAEC]
        mov ecx, dword ptr [mem_00A9F534]
        push eax
        push ecx
        push esi
        call ext_0067EE80
        fstp dword ptr [esp + 0xa8]
        fld dword ptr [esp + 0xa8]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xa4]
        add esp, 0x10
        mov ecx, ebx
        fstp dword ptr [esp]
        call eax
        cmp edi, dword ptr [ebp + 0x8]
        jb L_0051C276
        call dword ptr [mem_00925134]
    L_0051C276:
        add edi, 0x4
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
        jmp L_0051C1D5
    L_0051C286:
        mov ecx, dword ptr [esp + 0x7c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x78
        ret 0x8
    }
}
