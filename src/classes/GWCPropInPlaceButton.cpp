// Decompiled translation unit: src/classes/GWCPropInPlaceButton.cpp

extern "C" void ext_006A5DA0();
extern "C" void ext_006A5E00();
extern "C" int mem_009255A0;
extern "C" int mem_00925650;

// [0x006B5D60] GWCPropInPlaceButton::vfunc_66 (311 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B5D60(void* self, int edx_unused, void* arg1) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, 0x100
        mov     esi, ecx
        jne     loc_006B5E5A
        cmp     byte ptr [esi + 0xdd], 0
        je      loc_006B5E15
        mov     eax, dword ptr [esi + 0x20]
        push    1
        push    0
        push    0
        push    eax
        push    edi
        call    dword ptr [mem_009255A0]
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, 0x28
        je      loc_006B5DD9
        cmp     eax, 0x26
        je      loc_006B5DD9
        cmp     eax, 9
        je      loc_006B5DD9
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x13c]
        mov     ecx, esi
        call    edx
        mov     esi, dword ptr [esi + 0xd4]
        test    esi, esi
        je      loc_006B5E0E
        lea     eax, [esi + 0x88]
        test    eax, eax
        jne     loc_006B5DCD
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
loc_006B5DCD:
        mov     eax, dword ptr [eax + 0x20]
        mov     dword ptr [edi], eax
        pop     edi
        xor     eax, eax
        pop     esi
        ret     4
loc_006B5DD9:
        mov     eax, dword ptr [esi + 0x20]
        push    ebx
        mov     ebx, dword ptr [mem_00925650]
        push    eax
        call    ebx
        push    eax
        call    ext_006A5E00
        test    eax, eax
        je      loc_006B5E0D
        mov     ecx, dword ptr [esi + 0x20]
        push    ecx
        call    ebx
        push    eax
        call    ext_006A5E00
        test    eax, eax
        jne     loc_006B5E08
        pop     ebx
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
loc_006B5E08:
        mov     eax, dword ptr [eax + 0x20]
        mov     dword ptr [edi], eax
loc_006B5E0D:
        pop     ebx
loc_006B5E0E:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     4
loc_006B5E15:
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, 0x1b
        jne     loc_006B5E38
loc_006B5E1D:
        mov     esi, dword ptr [esi + 0x20]
        push    1
        push    0
        push    0
        push    esi
        push    edi
        call    dword ptr [mem_009255A0]
        pop     edi
        mov     eax, 1
        pop     esi
        ret     4
loc_006B5E38:
        cmp     eax, 0xd
        je      loc_006B5E1D
        cmp     byte ptr [esi + 0xdc], 0
        je      loc_006B5E8C
        lea     eax, [esi + 0x68]
        test    eax, eax
        jne     loc_006B5E87
        push    edi
        mov     dword ptr [edi], eax
        call    ext_006A5DA0
        pop     edi
        pop     esi
        ret     4
loc_006B5E5A:
        cmp     eax, 0x102
        jne     loc_006B5E8C
        cmp     byte ptr [esi + 0xdc], 0
        je      loc_006B5E8C
        cmp     byte ptr [esi + 0xdd], 0
        jne     loc_006B5E8C
        lea     eax, [esi + 0x68]
        test    eax, eax
        jne     loc_006B5E87
        push    edi
        mov     dword ptr [edi], eax
        call    ext_006A5DA0
        pop     edi
        pop     esi
        ret     4
loc_006B5E87:
        mov     eax, dword ptr [eax + 0x20]
        mov     dword ptr [edi], eax
loc_006B5E8C:
        push    edi
        call    ext_006A5DA0
        pop     edi
        pop     esi
        ret     4
    }
}
