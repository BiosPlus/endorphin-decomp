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

// [0x0056DA30] BVHIO::vfunc_3 (38 bytes)
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
