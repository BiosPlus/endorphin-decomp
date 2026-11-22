// Decompiled translation unit: src/classes/BVHIO.cpp

extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9ED4C;
extern "C" void ext_005576F0();
extern "C" void ext_0055D0F0();
extern "C" void ext_0056E1C0();
extern "C" void ext_00661A10();
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_00924FE8;
extern "C" int mem_009250EC;
extern "C" int mem_00924FC8;
extern "C" int mem_009250DC;
extern "C" int mem_009250D4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009250F0;
extern "C" int mem_00925134;
extern "C" int mem_009250CC;
extern "C" void ext_00401D20();
extern "C" void ext_005557A0();
extern "C" void ext_0056DCA0();
extern "C" void ext_00587920();
extern "C" void ext_0058F200();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FC0;
extern "C" void ext_00403560(); extern "C" void ext_00435D00(); extern "C" void ext_00553760(); extern "C" void ext_0056DE10(); extern "C" void ext_0056E8F0(); extern "C" void ext_00661A40(); extern "C" void ext_00661E80(); extern "C" void ext_00661F70(); extern "C" void ext_00662120(); extern "C" void ext_006A6DD2();
extern "C" int mem_00925008; extern "C" int mem_00924E90; extern "C" int mem_00924E98; extern "C" int mem_00924E5C; extern "C" int mem_00925010; extern "C" int mem_009250E0; extern "C" int mem_00925004; extern "C" int mem_00924FCC; extern "C" int mem_00924ECC;

extern "C" int mem_00925008; extern "C" int mem_00924E90; extern "C" int mem_00924E98; extern "C" int mem_00924E5C; extern "C" int mem_00925010; extern "C" int mem_009250E0; extern "C" int mem_00925004; extern "C" int mem_00924FCC; extern "C" int mem_00924ECC;
extern "C" __declspec(naked) int __fastcall fn_0056DA30(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9ED4C]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640390
        push    eax
        mov     ecx, esi
        call    ext_00553720
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}

// [0x0056E630] BVHIO::vfunc_11 (689 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056E630(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    089ca74h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0d0h
        fldz
        push    ebx
        push    ebp
        fstp    dword ptr [esp + 10h]
        push    esi
        push    edi
        push    1
        push    40h
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0f8h]
        xor     edi, edi
        push    1
        mov     dword ptr [esp + 1ch], edi
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 64h]
        call    dword ptr [mem_009250C4]
        lea     ecx, [esp + 1ch]
        mov     dword ptr [esp + 0e8h], edi
        call    dword ptr [mem_00924FE8]
        mov     esi, dword ptr [mem_009250EC]
        mov     ebx, dword ptr [mem_00924FC8]
        mov     byte ptr [esp + 0e8h], 1
L56E6A0:
        lea     eax, [esp + 1ch]
        push    eax
        lea     ecx, [esp + 58h]
        push    ecx
        call    esi
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx + 4]
        add     esp, 8
        add     ecx, eax
        call    dword ptr [mem_009250DC]
        test    eax, eax
        je      L56E6D3
        lea     eax, [esp + 1ch]
        push    09592d8h
        push    eax
        call    ebx
        add     esp, 8
        test    al, al
        jne     L56E6A0
L56E6D3:
        lea     ecx, [esp + 10h]
        push    ecx
        lea     ecx, [esp + 58h]
        call    dword ptr [mem_009250D4]
        cmp     dword ptr [ebp + 424h], edi
        je      L56E790
        cmp     byte ptr [ebp + 114h], 0
        je      L56E73A
        mov     esi, dword ptr [esp + 10h]
        mov     ecx, dword ptr [ebp + 10ch]
        mov     eax, dword ptr [ebp + 110h]
        mov     edx, dword ptr [ebp + 108h]
        add     eax, 3
        lea     ebx, [esi - 1]
        imul    eax, esi
        imul    ebx, ecx
        mov     ecx, dword ptr [ebp + 424h]
        add     ebx, edx
        mov     edx, dword ptr [ecx]
        add     eax, ebx
        push    eax
        mov     eax, dword ptr [edx + 8]
        push    edi
        call    eax
        mov     ebx, dword ptr [mem_00924FC8]
        mov     esi, dword ptr [mem_009250EC]
        jmp     L56E750
L56E73A:
        mov     eax, dword ptr [esp + 10h]
        mov     ecx, dword ptr [ebp + 424h]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 8]
        lea     eax, [eax + 2 * eax]
        push    eax
        push    edi
        call    edx
L56E750:
        push    09592bch
        lea     ecx, [esp + 3ch]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [ebp + 424h]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0ch]
        lea     edx, [esp + 38h]
        push    edx
        mov     byte ptr [esp + 0ech], 2
        call    eax
        lea     ecx, [esp + 38h]
        mov     byte ptr [esp + 0e8h], 1
        call    dword ptr [mem_00924FF4]
        jmp     L56E790
        _emit   08dh
        _emit   049h
        _emit   000h
L56E790:
        lea     ecx, [esp + 1ch]
        push    ecx
        lea     edx, [esp + 58h]
        push    edx
        call    esi
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 4]
        add     esp, 8
        add     ecx, eax
        call    dword ptr [mem_009250DC]
        test    eax, eax
        je      L56E7C3
        lea     edx, [esp + 1ch]
        push    09592b4h
        push    edx
        call    ebx
        add     esp, 8
        test    al, al
        jne     L56E790
L56E7C3:
        lea     eax, [esp + 18h]
        push    eax
        lea     ecx, [esp + 58h]
        call    dword ptr [mem_009250F0]
        mov     ecx, dword ptr [esp + 10h]
        add     ecx, -1
        js      L56E879
        lea     edi, [ebp + 46ch]
L56E7E5:
        lea     ecx, [ebp + 42ch]
        call    ext_0055D0F0
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        mov     dword ptr [esp + 14h], eax
        jbe     L56E802
        call    dword ptr [mem_00925134]
L56E802:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L56E810
        call    dword ptr [mem_00925134]
L56E810:
        cmp     edi, edi
        je      L56E81A
        call    dword ptr [mem_00925134]
L56E81A:
        cmp     esi, ebx
        je      L56E84D
        cmp     esi, dword ptr [edi + 8]
        jb      L56E829
        call    dword ptr [mem_00925134]
L56E829:
        mov     edx, dword ptr [esp + 14h]
        mov     ecx, dword ptr [esi]
        push    edx
        lea     eax, [esp + 58h]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    ext_0056E1C0
        cmp     esi, dword ptr [edi + 8]
        jb      L56E848
        call    dword ptr [mem_00925134]
L56E848:
        add     esi, 4
        jmp     L56E802
L56E84D:
        cmp     dword ptr [ebp + 424h], 0
        je      L56E868
        mov     ecx, dword ptr [ebp + 424h]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 14h]
        mov     edx, dword ptr [edx + 4]
        push    eax
        call    edx
L56E868:
        mov     eax, dword ptr [esp + 10h]
        add     eax, -1
        cmp     dword ptr [esp + 14h], eax
        jle     L56E7E5
L56E879:
        fld     dword ptr [esp + 18h]
        push    ecx
        fld1
        mov     ecx, dword ptr [ebp + 420h]
        fdivrp  st(1), st
        fstp    dword ptr [esp + 18h]
        fld     dword ptr [esp + 18h]
        fstp    dword ptr [esp]
        call    ext_00661A10
        mov     ecx, ebp
        call    ext_005576F0
        lea     ecx, [esp + 1ch]
        mov     byte ptr [esp + 0e8h], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 54h]
        mov     dword ptr [esp + 0e8h], -1
        call    dword ptr [mem_009250CC]
        mov     ecx, dword ptr [esp + 0e0h]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0dch
        ret     4
    }
}

// [0x0056E310] BVHIO::vfunc_14 (800 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056E310(void* self) {
    __asm {
        push    -1
        push    0x89ca3f
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x204
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x27c]
        mov     edx, dword ptr [eax + 0x84]
        lea     ebx, [ebp + 0x27c]
        push    esi
        push    edi
        mov     ecx, ebx
        call    edx
        mov     ecx, dword ptr [esp + 0x224]
        push    0x1
        push    0x40
        push    0x1
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x44]
        call    dword ptr [mem_009250C4]
        xor     edi, edi
        lea     ecx, [esp + 0xc0]
        mov     dword ptr [esp + 0x21c], edi
        call    ext_0058F200
        mov     dword ptr [esp + 0xc0], 0x92912c
        mov     dword ptr [esp + 0xc4], 0x9290e4
        mov     dword ptr [esp + 0xc8], 0x9290a4
        mov     dword ptr [esp + 0xcc], 0x929054
        mov     dword ptr [esp + 0x210], 0x929040
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x21c], 0x1
        call    dword ptr [mem_00924FE8]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     byte ptr [esp + 0x224], 0x2
        mov     dword ptr [esp + 0x18], edi
        call    dword ptr [mem_009250EC]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx + 0x4]
        add     esp, 0x8
        add     ecx, eax
        call    dword ptr [mem_009250DC]
        test    eax, eax
        je      L_0056E59C
        jmp     L_0056E400
        _emit   0x8d
        _emit   0xa4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_0056E400:
        lea     eax, [esp + 0x18]
        push    0x9592ac
        push    eax
        call    dword ptr [mem_00924FC8]
        add     esp, 0x8
        test    al, al
        je      L_0056E56C
        mov     esi, dword ptr [mem_00924FC0]
        lea     ecx, [esp + 0x18]
        push    0x9592a4
        push    ecx
        call    esi
        add     esp, 0x8
        test    al, al
        je      L_0056E4B9
        add     dword ptr [esp + 0x10], 0x1
        push    0x154
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], esi
        test    esi, esi
        mov     byte ptr [esp + 0x21c], 0x3
        je      L_0056E494
        mov     ecx, esi
        call    ext_0058F200
        mov     dword ptr [esi + 0x150], 0x928eac
        mov     dword ptr [esi], 0x92912c
        mov     dword ptr [esi + 0x4], 0x9290e4
        mov     dword ptr [esi + 0x8], 0x9290a4
        mov     dword ptr [esi + 0xc], 0x929054
        mov     dword ptr [esi + 0x150], 0x929040
        jmp     L_0056E496
    L_0056E494:
        xor     esi, esi
    L_0056E496:
        push    0x1
        push    esi
        lea     ecx, [esp + 0xc8]
        mov     byte ptr [esp + 0x224], 0x2
        call    ext_00587920
        lea     edx, [esp + 0x34]
        mov     edi, esi
        push    edx
        jmp     L_0056E53C
    L_0056E4B9:
        lea     eax, [esp + 0x18]
        push    0x959278
        push    eax
        call    esi
        add     esp, 0x8
        test    al, al
        je      L_0056E544
        push    0x154
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], esi
        test    esi, esi
        mov     byte ptr [esp + 0x21c], 0x4
        je      L_0056E523
        mov     ecx, esi
        call    ext_0058F200
        mov     dword ptr [esi + 0x150], 0x928eac
        mov     dword ptr [esi], 0x92912c
        mov     dword ptr [esi + 0x4], 0x9290e4
        mov     dword ptr [esi + 0x8], 0x9290a4
        mov     dword ptr [esi + 0xc], 0x929054
        mov     dword ptr [esi + 0x150], 0x929040
        jmp     L_0056E525
    L_0056E523:
        xor     esi, esi
    L_0056E525:
        push    0x1
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x224], 0x2
        call    ext_00587920
        lea     ecx, [esp + 0x34]
        push    ecx
    L_0056E53C:
        push    esi
        mov     ecx, ebp
        call    ext_0056DCA0
    L_0056E544:
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    dword ptr [mem_009250EC]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x4]
        add     esp, 0x8
        add     ecx, eax
        call    dword ptr [mem_009250DC]
        test    eax, eax
        jne     L_0056E400
    L_0056E56C:
        cmp     dword ptr [esp + 0x10], 0x1
        jne     L_0056E59C
        mov     eax, dword ptr [esp + 0x140]
        cmp     eax, dword ptr [esp + 0x144]
        mov     edi, dword ptr [mem_00925134]
        mov     esi, eax
        jbe     L_0056E58D
        call    edi
    L_0056E58D:
        cmp     esi, dword ptr [esp + 0x144]
        jb      L_0056E598
        call    edi
    L_0056E598:
        mov     edi, dword ptr [esi]
        jmp     L_0056E5A3
    L_0056E59C:
        lea     edi, [esp + 0xc0]
    L_0056E5A3:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [edx + 0x24]
        mov     ecx, edi
        add     esi, 0x5c
        call    eax
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, ebx
        call    edx
        push    ebx
        push    0x0
        push    0xa2e264
        push    0xa2e2bc
        push    0x0
        push    edi
        call    ext_006A6E9E
        add     esp, 0x14
        push    eax
        mov     ecx, ebp
        call    ext_005557A0
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x21c], 0x1
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc0]
        mov     byte ptr [esp + 0x21c], 0x0
        call    ext_00401D20
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x21c], 0xffffffff
        call    dword ptr [mem_009250CC]
        mov     ecx, dword ptr [esp + 0x214]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x210
        ret     0x4
    }
}

// [0x0056EAC0] BVHIO::vfunc_13 (899 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056EAC0(void* self) {
__asm {
push -1
push 0x89cad9
mov eax, fs:[0]
push eax
mov fs:[0], esp
sub esp, 0xec
push ebp
push esi
push edi
mov edi, [esp+0x108]
push 1
push 0x40
mov esi, ecx
push 2
mov ecx, edi
call dword ptr [mem_00924FF0]
push eax
lea ecx, [esp+0x3c]
call dword ptr [mem_00925008]
mov eax, [esp+0x2c]
mov ecx, [eax+4]
lea ecx, [esp+ecx+0x2c]
mov dword ptr [esp+0x100], 0
call dword ptr [mem_009250DC]
test eax, eax
je L_fail
mov ecx, [esi+0x420]
call ext_00662120
mov ecx, [esi+0x420]
push 1
call ext_00661F70
cmp dword ptr [esi+0x424], 0
je L_a
push 0x959384
lea ecx, [esp+0x10]
call dword ptr [mem_00924FE4]
mov ecx, [esi+0x424]
mov edx, [ecx]
mov edx, [edx+0xc]
lea eax, [esp+0xc]
push eax
mov byte ptr [esp+0x104], 1
call edx
lea ecx, [esp+0xc]
mov byte ptr [esp+0x100], 0
call dword ptr [mem_00924FF4]
L_a:
mov eax, [mem_00924E90]
push eax
lea ecx, [esp+0x30]
push 0x959378
push ecx
call ext_00435D00
add esp, 8
mov ecx, eax
call dword ptr [mem_00924E98]
mov ebp, [esi+0x414]
lea edx, [esp+0x2c]
push 0x959370
push edx
add ebp, 0x160
call ext_00435D00
sub esp, 0x14
mov ecx, esp
mov [esp+0x44], esp
call dword ptr [mem_00924FE8]
lea eax, [esp+0x48]
push eax
push ebp
mov ecx, esi
call ext_0056DE10
mov ecx, esi
call ext_00553760
test al, al
je L_end
mov ecx, [mem_00924E90]
push ecx
lea edx, [esp+0x30]
push 0x9592ac
push edx
call ext_00435D00
add esp, 8
mov ecx, eax
call dword ptr [mem_00924E98]
mov eax, [esi+0x170]
mov ecx, [esi+0x16c]
mov edx, [mem_00924E90]
sub eax, ecx
push edx
add eax, 1
push eax
lea eax, [esp+0x34]
push 0x959364
push eax
call ext_00435D00
add esp, 8
mov ecx, eax
call dword ptr [mem_00924E5C]
mov ecx, eax
call dword ptr [mem_00924E98]
mov ecx, [mem_00924E90]
push ecx
mov ecx, [esi+0x420]
call ext_00661A40
push ecx
fstp dword ptr [esp]
lea edx, [esp+0x34]
push 0x959354
push edx
call ext_00435D00
add esp, 8
mov ecx, eax
call dword ptr [mem_00925010]
mov ecx, eax
call dword ptr [mem_00924E98]
cmp dword ptr [esi+0x424], 0
je L_b
mov eax, [esi+0x170]
mov ecx, [esi+0x424]
mov edx, [esi+0x16c]
mov edi, [ecx]
push eax
mov eax, [edi+8]
push edx
call eax
push 0x959338
lea ecx, [esp+0x10]
call dword ptr [mem_00924FE4]
mov ecx, [esi+0x424]
mov edx, [ecx]
mov edx, [edx+0xc]
lea eax, [esp+0xc]
push eax
mov byte ptr [esp+0x104], 2
call edx
lea ecx, [esp+0xc]
mov byte ptr [esp+0x100], 0
call dword ptr [mem_00924FF4]
L_b:
mov eax, [esi+0x16c]
mov ecx, [esi+0x420]
add eax, 1
push eax
call ext_00661F70
mov edi, edi
L_loop:
cmp dword ptr [esi+0x424], 0
je L_c
mov edi, [esi+0x420]
cmp dword ptr [edi+8], 0
jne L_1
call dword ptr [mem_00925134]
L_1:
mov ecx, [edi+8]
mov edx, [edi+0xc]
cmp edx, [ecx+4]
jne L_2
call dword ptr [mem_00925134]
L_2:
mov eax, [edi+0xc]
mov eax, [eax+8]
mov ecx, [esi+0x424]
mov edx, [ecx]
push eax
mov eax, [edx+4]
call eax
L_c:
lea ecx, [esp+0x2c]
push ecx
push ebp
mov ecx, esi
call ext_0056E8F0
mov edx, [mem_00924E90]
push edx
lea ecx, [esp+0x30]
call dword ptr [mem_00924E98]
mov edi, [esi+0x420]
cmp dword ptr [edi+8], 0
jne L_3
call dword ptr [mem_00925134]
L_3:
mov eax, [edi+8]
mov ecx, [edi+0xc]
cmp ecx, [eax+4]
jne L_4
call dword ptr [mem_00925134]
L_4:
mov edx, [edi+0xc]
mov ecx, [esi+0x170]
mov eax, [edx+8]
add ecx, 1
cmp eax, ecx
jge L_end
mov ecx, [esi+0x420]
call ext_00661E80
test al, al
jne L_loop
L_end:
lea ecx, [esp+0x2c]
call dword ptr [mem_009250E0]
lea ecx, [esp+0x2c]
mov dword ptr [esp+0x100], 0xffffffff
call dword ptr [mem_00925004]
mov ecx, [esp+0xf8]
pop edi
pop esi
mov fs:[0], ecx
pop ebp
add esp, 0xf8
ret 4
L_fail:
push edi
lea edx, [esp+0x10]
push 0x9592e0
push edx
call dword ptr [mem_00924FCC]
push 0x958ecc
push eax
lea eax, [esp+0xf0]
push eax
mov byte ptr [esp+0x118], 3
call dword ptr [mem_00924ECC]
add esp, 0x18
lea ecx, [esp+0xc]
mov byte ptr [esp+0x100], 5
call dword ptr [mem_00924FF4]
lea ecx, [esp+0xdc]
push ecx
lea ecx, [esp+0xb8]
call ext_00403560
push 0x9f8908
lea edx, [esp+0xb8]
push edx
mov dword ptr [esp+0xbc], 0x9570dc
call ext_006A6DD2
}
}
