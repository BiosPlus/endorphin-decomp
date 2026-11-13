// Decompiled translation unit: src/classes/GWCPropertyDateTimeFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A6004();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B4090();
extern "C" void ext_006B4430();
extern "C" void ext_006B4440();
extern "C" void ext_006B4E30();
extern "C" void ext_008727B4();
extern "C" int mem_00B5D20C;
extern "C" int mem_00925694;
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

// [0x006B1EB0] GWCPropertyDateTimeFeel::vfunc_5 (485 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B1EB0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    0x8b787a
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x4c]
        push    edi
        call    ext_006B4440
        mov     ecx, eax
        call    ext_006B4090
        mov     ecx, dword ptr [ebp + 4]
        xor     edi, edi
        cmp     ecx, edi
        mov     bl, al
        je      loc_006B1EF2
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 4]
        push    1
        call    edx
    loc_006B1EF2:
        push    0x58
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        cmp     eax, edi
        mov     dword ptr [esp + 0x38], edi
        je      loc_006B1F13
        mov     ecx, eax
        call    ext_006B4E30
        mov     esi, eax
        jmp     loc_006B1F15
    loc_006B1F13:
        xor     esi, esi
    loc_006B1F15:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi]
        neg     bl
        push    ecx
        push    edx
        mov     edx, dword ptr [eax + 0x13c]
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        sbb     ebx, ebx
        and     ebx, 9
        or      ebx, 0x40000000
        push    ebx
        mov     dword ptr [esp + 0x48], 0xffffffff
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x38], edi
        mov     dword ptr [esp + 0x3c], edi
        call    edx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edi
        mov     dword ptr [ebp + 4], esi
        mov     eax, dword ptr [mem_00B5D20C]
        mov     edx, dword ptr [ecx + 0x20]
        push    esi
        push    eax
        push    edx
        call    dword ptr [mem_00925694]
        mov     ecx, dword ptr [esp + 0x50]
        call    ext_006B4440
        mov     ecx, eax
        call    ext_006B4430
        push    eax
        mov     ecx, esi
        call    ext_008727B4
        mov     ebx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x48]
        sub     ebx, 1
        push    edx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x30], ebx
        call    dword ptr [mem_00925658]
        push    eax
        call    ext_006A6004
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edi, eax
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], eax
        call    ext_006A7BF0
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, edi
        call    eax
        push    0x9334d0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [mem_009242F0]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [edi + 8]
        push    eax
        push    edx
        call    dword ptr [mem_00924080]
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242F4]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0x30]
        push    ecx
        mov     ecx, edi
        call    edx
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [esi + 0x20]
        push    eax
        push    ecx
        call    dword ptr [mem_00925620]
        mov     edi, dword ptr [esp + 0x44]
        mov     eax, ebx
        sub     eax, dword ptr [esp + 0x1c]
        push    1
        sub     eax, edi
        cdq
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x2c]
        sar     eax, 1
        lea     eax, [eax + edi - 1]
        mov     ecx, ebx
        sub     ecx, eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x48]
        sub     edx, ecx
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    ext_006A5E5A
        mov     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x48]
        push    eax
        sub     esp, 0x10
        mov     dword ptr [esi + 0x54], eax
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], ecx
        mov     ecx, ebp
        mov     dword ptr [eax + 0xc], ebx
        call    ext_006B0C10
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x2c
        ret     0x14
    }
}
