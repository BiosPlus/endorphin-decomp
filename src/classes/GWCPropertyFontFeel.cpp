// Decompiled translation unit: src/classes/GWCPropertyFontFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B5AE0();
extern "C" void ext_006B6070();
extern "C" int mem_00B5D20C;
extern "C" int mem_00925694;
extern "C" int mem_008B789A;
extern "C" int mem_0092F680;

// [0x006B20F0] GWCPropertyFontFeel::vfunc_5 (312 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B20F0(void* self) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    offset mem_008B789A
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        jne     L_006b21a0
        push    0xe4
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2c], ebx
        je      L_006b213f
        mov     ecx, eax
        call    ext_006B6070
        mov     edi, eax
        jmp     L_006b2141
    L_006b213f:
        xor     edi, edi
    L_006b2141:
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x2c], -1
        mov     dword ptr [esp + 0x10], edi
        call    ext_006A7BF0
        cmp     eax, ebx
        jne     L_006b215d
        xor     eax, eax
        jmp     L_006b2160
    L_006b215d:
        mov     eax, dword ptr [eax + 4]
    L_006b2160:
        push    eax
        lea     ecx, [edi + 0x5c]
        call    ext_006A5FFE
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edx
        mov     edx, dword ptr [eax + 0x5c]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x40000000
        push    offset mem_0092F680
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x3c], ebx
        call    edx
        mov     dword ptr [esi + 4], edi
        jmp     L_006b21a4
    L_006b21a0:
        mov     dword ptr [esp + 0x10], eax
    L_006b21a4:
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [mem_00B5D20C]
        mov     edx, dword ptr [esi + 0xc]
        push    ebx
        push    eax
        mov     eax, dword ptr [edx + 0x20]
        push    ecx
        push    eax
        call    dword ptr [mem_00925694]
        mov     edi, dword ptr [esp + 0x40]
        mov     ebx, dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x3c]
        sub     edi, 1
        push    1
        mov     ecx, edi
        sub     ecx, ebx
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     edx, ebp
        push    edx
        push    ebx
        push    ebp
        call    ext_006A5E5A
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    ext_006B5AE0
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x3c]
        push    ecx
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], edx
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edi
        call    ext_006B0C10
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x20
        ret     0x14
    }
}
