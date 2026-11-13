// Decompiled translation unit: src/classes/CSMMotionIO.cpp

extern "C" void ext_00403560();
extern "C" void ext_00435D00();
extern "C" void ext_00553760();
extern "C" void ext_00571E80();
extern "C" void ext_005720D0();
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
