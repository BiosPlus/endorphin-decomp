// Decompiled translation unit: src/classes/NMFileIO.cpp

// [0x00553720] NMFileIO::vfunc_3 (36 bytes)
extern "C" void ext_00552B00();

extern "C" __declspec(naked) int __fastcall fn_00553720(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x5c]
        call ext_00552B00
        push edi
        lea ecx, [esi + 0x16c]
        call ext_00552B00
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00558D70] NMFileIO::vfunc_1 (280 bytes)
extern "C" void ext_00406FC0();
extern "C" void ext_00427A60();
extern "C" void ext_00554530();
extern "C" int mem_00925134;
extern "C" int mem_00A9EFAC;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_00558D70(void* self, int edx_unused, void* a1) {
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        mov     ebx, ecx
        mov     byte ptr [esp + 0x13], 1
        jbe     loc_558d93
        call    dword ptr [mem_00925134]
    loc_558d93:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     loc_558db6
        call    dword ptr [mem_00925134]
    loc_558db6:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    loc_558dc6:
        call    ext_00427A60
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        je      loc_558dd9
        cmp     ebp, dword ptr [esp + 0x24]
        je      loc_558de3
    loc_558dd9:
        mov     edi, dword ptr [mem_00925134]
        call    edi
        jmp     loc_558de9
    loc_558de3:
        mov     edi, dword ptr [mem_00925134]
    loc_558de9:
        mov     esi, dword ptr [esp + 0x1c]
        cmp     esi, dword ptr [esp + 0x28]
        jae     loc_558e7e
        test    ebp, ebp
        jne     loc_558dfd
        call    edi
    loc_558dfd:
        cmp     esi, dword ptr [ebp + 0x8]
        jb      loc_558e04
        call    edi
    loc_558e04:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [mem_00A9EFAC]
        push    ecx
        add     eax, 4
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      loc_558e67
        cmp     byte ptr [esp + 0x13], 0
        je      loc_558e52
        cmp     esi, dword ptr [ebp + 0x8]
        jb      loc_558e2c
        call    edi
    loc_558e2c:
        mov     edx, dword ptr [esi]
        lea     edi, [ebx + 0x5c]
        push    edx
        mov     ecx, edi
        call    ext_00554530
        push    edi
        lea     ecx, [ebx + 0x16c]
        call    ext_00406FC0
        mov     edi, dword ptr [mem_00925134]
        mov     byte ptr [esp + 0x13], 0
        jmp     loc_558e67
    loc_558e52:
        cmp     esi, dword ptr [ebp + 0x8]
        jb      loc_558e59
        call    edi
    loc_558e59:
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [ebx + 0x16c]
        call    ext_00554530
    loc_558e67:
        cmp     esi, dword ptr [ebp + 0x8]
        jb      loc_558e6e
        call    edi
    loc_558e6e:
        add     esi, 4
        mov     dword ptr [esp + 0x1c], esi
        lea     ecx, [esp + 0x14]
        jmp     loc_558dc6
    loc_558e7e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
