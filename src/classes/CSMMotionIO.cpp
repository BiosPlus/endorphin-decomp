// Decompiled translation unit: src/classes/CSMMotionIO.cpp

extern "C" void ext_00403560();
extern "C" void ext_00435D00();
extern "C" void ext_00553720();
extern "C" void ext_00553760();
extern "C" void ext_00571E80();
extern "C" void ext_005720D0();
extern "C" void ext_00640390();
extern "C" void ext_00661E80();
extern "C" void ext_00661F70();
extern "C" void ext_00663DB0();
extern "C" void ext_006A6DD2();

extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF0;
extern "C" int mem_009250B4;
extern "C" int mem_009250B8;
extern "C" int mem_009250C0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_009250E0;
extern "C" int mem_00925004;

// [0x005722F0] CSMMotionIO::vfunc_13 (661 bytes)
extern "C" __declspec(naked) void __fastcall fn_005722F0(void* self, int edx_unused, void* arg) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x89d3bf
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x120
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x414]
        mov     eax, dword ptr [eax + 0x5e8]
        test    eax, eax
        jne     loc_572333
        mov     ecx, dword ptr [mem_00924E90]
        mov     edx, dword ptr [mem_00924FA0]
        push    ecx
        push    0x9597b0
        push    edx
        jmp     loc_57234e
    loc_572333:
        call    ext_00553760
        test    al, al
        jne     loc_572376
        mov     eax, dword ptr [mem_00924E90]
        mov     ecx, dword ptr [mem_00924FA0]
        push    eax
        push    0x95978c
        push    ecx
    loc_57234e:
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        pop     esi
        mov     ecx, dword ptr [esp + 0x120]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x12c
        ret     4
    loc_572376:
        push    edi
        mov     edi, dword ptr [esp + 0x138]
        mov     ecx, edi
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ext_00663DB0
        add     esp, 4
        push    1
        lea     ecx, [esp + 0x50]
        call    dword ptr [mem_009250B4]
        push    0x40
        push    0x12
        mov     ecx, edi
        mov     dword ptr [esp + 0x138], 0
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x58]
        call    dword ptr [mem_009250B8]
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [edx + 4]
        lea     ecx, [esp + ecx + 0x4c]
        call    dword ptr [mem_009250C0]
        test    al, al
        je      loc_57245b
        push    0x95977c
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_00924FE4]
        mov     esi, eax
        push    0x95975c
        lea     ecx, [esp + 0xf4]
        mov     byte ptr [esp + 0x134], 1
        call    dword ptr [mem_00924FE4]
        push    edi
        mov     edi, dword ptr [mem_00924FD0]
        push    eax
        lea     eax, [esp + 0xdc]
        push    eax
        mov     byte ptr [esp + 0x13c], 2
        call    edi
        push    esi
        push    eax
        lea     ecx, [esp + 0x120]
        push    ecx
        mov     byte ptr [esp + 0x148], 3
        call    edi
        add     esp, 0x18
        push    eax
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x134], 4
        call    ext_00403560
        push    0x9f8908
        lea     edx, [esp + 0x28]
        push    edx
        mov     dword ptr [esp + 0x2c], 0x9570dc
        call    ext_006A6DD2
    loc_57245b:
        push    ebp
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    ext_00571E80
        mov     ecx, dword ptr [esi + 0x16c]
        add     ecx, 1
        push    ecx
        mov     ecx, dword ptr [esi + 0x420]
        xor     ebp, ebp
        call    ext_00661F70
        cmp     dword ptr [esi + 0x424], ebp
        je      loc_5724e0
        push    0x959740
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [esi + 0x424]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        mov     byte ptr [esp + 0x138], 5
        call    edx
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x134], 0
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [esi + 0x424]
        mov     edx, dword ptr [esi + 0x16c]
        mov     edi, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edi + 8]
        push    edx
        call    eax
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    loc_5724e0:
        add     ebp, 1
        push    ebp
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     ecx, esi
        call    ext_005720D0
        cmp     dword ptr [esi + 0x424], 0
        je      loc_572507
        mov     ecx, dword ptr [esi + 0x424]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    ebp
        call    eax
    loc_572507:
        mov     edi, dword ptr [esi + 0x420]
        cmp     dword ptr [edi + 8], 0
        jne     loc_572519
        call    dword ptr [mem_00925134]
    loc_572519:
        mov     ecx, dword ptr [edi + 8]
        mov     edx, dword ptr [edi + 0xc]
        cmp     edx, dword ptr [ecx + 4]
        jne     loc_57252a
        call    dword ptr [mem_00925134]
    loc_57252a:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [eax + 8]
        add     ecx, 1
        cmp     eax, ecx
        jge     loc_57254c
        mov     ecx, dword ptr [esi + 0x420]
        call    ext_00661E80
        test    al, al
        jne     loc_5724e0
    loc_57254c:
        lea     ecx, [esp + 0x50]
        call    dword ptr [mem_009250E0]
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x134], -1
        call    dword ptr [mem_00925004]
        mov     ecx, dword ptr [esp + 0x12c]
        pop     ebp
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x12c
        ret     4
    }
}

// [0x00571DF0] CSMMotionIO::vfunc_3 (37 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00571DF0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92a0d4
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

// [0x00572CC0] CSMMotionIO::vfunc_11 (1157 bytes)
extern "C" int mem_00924FE8;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FC0;
extern "C" int mem_009250C4;
extern "C" int mem_009250D4;
extern "C" int mem_009250DC;
extern "C" int mem_009250EC;
extern "C" int mem_009250F0;
extern "C" int mem_009250CC;
extern "C" int mem_00924FEC;
extern "C" void ext_00555470();
extern "C" void ext_00554EB0();
extern "C" void ext_00539FB0();
extern "C" void ext_00571E20();
extern "C" void ext_0041FF30();
extern "C" void ext_0040ECB0();
extern "C" void ext_00572B90();
extern "C" void ext_004F15A0();
extern "C" void ext_006A5C5C();

// [0x00572CC0] CSMMotionIO::vfunc_11 (1157 bytes)
extern "C" __declspec(naked) void __fastcall fn_00572CC0(void* self, int edx_unused, int a1) {
    __asm {
        push 0FFFFFFFFh
        push 089D489h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 148h
        push ebx
        push ebp
        push esi
        mov dword ptr [esp+70h], ecx
        push edi
        lea ecx, [esp+24h]
        mov dword ptr [esp+20h], 09597D0h
        call ext_00555470
        mov dword ptr [esp+28h], eax
        mov byte ptr [eax+39h], 1
        mov eax, dword ptr [esp+28h]
        mov dword ptr [eax+4], eax
        mov eax, dword ptr [esp+28h]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp+28h]
        xor ebx, ebx
        mov dword ptr [eax+8], eax
        mov dword ptr [esp+2Ch], ebx
        mov dword ptr [esp+160h], ebx
        mov dword ptr [esp+14h], ebx
        mov dword ptr [esp+18h], ebx
        mov dword ptr [esp+1Ch], ebx
        mov ecx, dword ptr [esp+168h]
        push 1
        push 40h
        push 1
        mov byte ptr [esp+16Ch], 1
        mov dword ptr [esp+84h], ebx
        mov dword ptr [esp+44h], ebx
        mov dword ptr [esp+3Ch], ebx
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+98h]
        call dword ptr [mem_009250C4]
        lea ecx, [esp+58h]
        mov byte ptr [esp+160h], 2
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [mem_00924FC8]
        lea eax, [esp+58h]
        push 09597FCh
        push eax
        mov byte ptr [esp+168h], 3
        call esi
        add esp, 8
        test al, al
        je L_572F2D
        mov edi, dword ptr [mem_009250EC]
        mov ebp, dword ptr [mem_00924FC0]
    L_572DA4:
        lea ecx, [esp+58h]
        push ecx
        lea edx, [esp+8Ch]
        push edx
        call edi
        lea eax, [esp+60h]
        push 09597F0h
        push eax
        call ebp
        add esp, 10h
        test al, al
        je L_572DDD
        lea ecx, [esp+38h]
        push ecx
        lea ecx, [esp+8Ch]
        call dword ptr [mem_009250D4]
        jmp L_572F16
    L_572DDD:
        lea edx, [esp+58h]
        push 09597E4h
        push edx
        call ebp
        add esp, 8
        test al, al
        je L_572E07
        lea eax, [esp+30h]
        push eax
        lea ecx, [esp+8Ch]
        call dword ptr [mem_009250D4]
        jmp L_572F16
    L_572E07:
        lea ecx, [esp+58h]
        push 09597DCh
        push ecx
        call ebp
        add esp, 8
        test al, al
        je L_572E31
        lea edx, [esp+78h]
        push edx
        lea ecx, [esp+8Ch]
        call dword ptr [mem_009250D4]
        jmp L_572F16
    L_572E31:
        lea eax, [esp+58h]
        push 09597D4h
        push eax
        call ebp
        add esp, 8
        test al, al
        je L_572F16
        lea ecx, [esp+58h]
        push ecx
        lea edx, [esp+8Ch]
        push edx
        call edi
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx+4]
        add esp, 8
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        je L_572F16
        nop
    L_572E70:
        lea edx, [esp+58h]
        push 09597FCh
        push edx
        call esi
        add esp, 8
        test al, al
        je L_572F16
        lea ecx, [esp+58h]
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_572EEF
        mov dword ptr [esp+4Ch], ebx
        mov dword ptr [esp+50h], ebx
        mov dword ptr [esp+54h], ebx
        lea eax, [esp+48h]
        push eax
        lea ecx, [esp+5Ch]
        push ecx
        lea ecx, [esp+28h]
        mov byte ptr [esp+168h], 4
        call ext_00572B90
        mov eax, dword ptr [esp+4Ch]
        cmp eax, ebx
        mov byte ptr [esp+160h], 3
        je L_572ED5
        push eax
        call ext_006A5C5C
        add esp, 4
    L_572ED5:
        lea edx, [esp+58h]
        push edx
        lea ecx, [esp+14h]
        mov dword ptr [esp+50h], ebx
        mov dword ptr [esp+54h], ebx
        mov dword ptr [esp+58h], ebx
        call ext_0040ECB0
    L_572EEF:
        lea eax, [esp+58h]
        push eax
        lea ecx, [esp+8Ch]
        push ecx
        call edi
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx+4]
        add esp, 8
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        jne L_572E70
    L_572F16:
        lea eax, [esp+58h]
        push 09597FCh
        push eax
        call esi
        add esp, 8
        test al, al
        jne L_572DA4
    L_572F2D:
        fldz
        mov eax, dword ptr [esp+38h]
        cmp eax, dword ptr [esp+30h]
        fst dword ptr [esp+44h]
        fst dword ptr [esp+40h]
        mov dword ptr [esp+34h], eax
        fstp dword ptr [esp+3Ch]
        jg L_57305B
        __asm _emit 08Dh
        __asm _emit 049h
        __asm _emit 000h
    L_572F50:
        lea ecx, [esp+7Ch]
        push ecx
        lea ecx, [esp+8Ch]
        mov dword ptr [esp+80h], ebx
        call dword ptr [mem_009250D4]
        mov ebp, dword ptr [esp+14h]
        mov eax, dword ptr [esp+18h]
        cmp ebp, eax
        mov edi, dword ptr [mem_00925134]
        jbe L_572F81
        call edi
        mov eax, dword ptr [esp+18h]
    L_572F81:
        lea ebx, [esp+10h]
    L_572F85:
        cmp dword ptr [esp+14h], eax
        mov esi, eax
        jbe L_572F8F
        call edi
    L_572F8F:
        test ebx, ebx
        je L_572F9B
        lea edx, [esp+10h]
        cmp ebx, edx
        je L_572F9D
    L_572F9B:
        call edi
    L_572F9D:
        cmp ebp, esi
        je L_573044
        lea esi, [esp+3Ch]
        mov edi, 3
        mov edi, edi
    L_572FB0:
        push esi
        lea ecx, [esp+8Ch]
        call dword ptr [mem_009250F0]
        add esi, 4
        sub edi, 1
        jne L_572FB0
        fld dword ptr [esp+3Ch]
        mov ecx, dword ptr [esp+74h]
        sub esp, 0Ch
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp+8Ch], esp
        fld dword ptr [esp+4Ch]
        add ecx, 5Ch
        fstp dword ptr [eax+4]
        fld dword ptr [esp+50h]
        fstp dword ptr [eax+8]
        lea eax, [esp+54h]
        push eax
        call ext_00554EB0
        test ebx, ebx
        mov esi, dword ptr [mem_00925134]
        jne L_573003
        call esi
    L_573003:
        cmp ebp, dword ptr [ebx+8]
        jb L_57300A
        call esi
    L_57300A:
        mov edx, dword ptr [esp+20h]
        mov eax, dword ptr [edx]
        push ebp
        lea ecx, [esp+24h]
        call eax
        test eax, eax
        je L_573120
        lea ecx, [esp+3Ch]
        push ecx
        mov ecx, eax
        call ext_00539FB0
        cmp ebp, dword ptr [ebx+8]
        jb L_573032
        call esi
    L_573032:
        mov eax, dword ptr [esp+18h]
        mov edi, dword ptr [mem_00925134]
        add ebp, 1Ch
        jmp L_572F85
    L_573044:
        mov eax, dword ptr [esp+34h]
        add eax, 1
        xor ebx, ebx
        cmp eax, dword ptr [esp+30h]
        mov dword ptr [esp+34h], eax
        jle L_572F50
    L_57305B:
        lea ecx, [esp+58h]
        mov byte ptr [esp+160h], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+88h]
        mov byte ptr [esp+160h], 1
        call dword ptr [mem_009250CC]
        mov esi, dword ptr [esp+14h]
        cmp esi, ebx
        mov byte ptr [esp+160h], 0
        je L_5730BC
        mov edi, dword ptr [esp+18h]
        cmp esi, edi
        je L_5730B3
        __asm _emit 08Dh
        __asm _emit 09Bh
        __asm _emit 000h
        __asm _emit 000h
        __asm _emit 000h
        __asm _emit 000h
    L_5730A0:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 1Ch
        cmp esi, edi
        jne L_5730A0
        mov esi, dword ptr [esp+14h]
    L_5730B3:
        push esi
        call ext_006A5C5C
        add esp, 4
    L_5730BC:
        mov eax, dword ptr [esp+28h]
        push eax
        lea ecx, [esp+28h]
        push ecx
        mov dword ptr [esp+1Ch], ebx
        mov dword ptr [esp+20h], ebx
        mov dword ptr [esp+24h], ebx
        mov dword ptr [esp+28h], 09597D0h
        mov edx, dword ptr [eax]
        push edx
        mov esi, ecx
        push esi
        lea eax, [esp+90h]
        push eax
        mov dword ptr [esp+174h], 0FFFFFFFFh
        call ext_004F15A0
        mov ecx, dword ptr [esp+28h]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp+15Ch]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 154h
        ret 4
    L_573120:
        push ebp
        call ext_00571E20
        push eax
        lea ecx, [esp+11Ch]
        call ext_0041FF30
        push 09D3748h
        lea edx, [esp+118h]
        push edx
        call ext_006A6DD2
    }
}
