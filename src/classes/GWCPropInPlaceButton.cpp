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

// [0x006B5EA0] GWCPropInPlaceButton::vfunc_0_off_54 (387 bytes)
extern "C" void ext_006AD0C0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006AD940();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" void ext_006B4440();
extern "C" void ext_006B4FA0();
extern "C" int mem_00B5D250;
extern "C" int mem_00B5D200;
extern "C" int mem_00925688;
extern "C" int mem_00925650;
extern "C" int mem_00925694;
extern "C" int mem_00924494;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_006B5EA0(void* self, int edx_unused, void* arg1) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    0x87cee9
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x80]
        cmp     dword ptr [esp + 0x24], eax
        push    edi
        jne     epilogue
        cmp     byte ptr [mem_00B5D250], 0
        jne     epilogue
        mov     ecx, dword ptr [esi + 4]
        push    1
        mov     byte ptr [mem_00B5D250], 1
        call    ext_006AD0C0
        mov     ecx, dword ptr [esi + 0x80]
        lea     eax, [esp + 0x28]
        push    eax
        call    ext_006B4FA0
        mov     ecx, dword ptr [esi + 0x34]
        mov     ebx, dword ptr [mem_00925688]
        push    1
        push    0
        push    ecx
        mov     dword ptr [esp + 0x2c], 0
        call    ebx
        mov     ecx, dword ptr [esi + 4]
        call    ext_006AD1C0
        mov     ecx, dword ptr [esi + 4]
        mov     ebp, eax
        mov     edx, dword ptr [ebp + 0x19c]
        mov     dword ptr [esp + 0x14], edx
        call    ext_006B4440
        push    ecx
        mov     edi, eax
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        mov     dword ptr [esp + 0x14], esp
        push    eax
        call    dword ptr [mem_00924494]
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx + 0xc]
        mov     ecx, edi
        call    eax
        mov     ecx, dword ptr [esi - 0x34]
        mov     edi, dword ptr [mem_00925650]
        push    ecx
        call    edi
        push    eax
        call    ext_006A5E00
        mov     edx, dword ptr [eax + 0x20]
        push    1
        push    0
        push    edx
        call    ebx
        mov     eax, dword ptr [esi - 0x34]
        push    eax
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x10], eax
        call    ext_006B4440
        mov     ecx, eax
        call    ext_006AD940
        mov     ecx, dword ptr [mem_00B5D200]
        mov     edx, dword ptr [esp + 0x10]
        push    0
        push    eax
        mov     eax, dword ptr [edx + 0x20]
        push    ecx
        push    eax
        call    dword ptr [mem_00925694]
        mov     ecx, dword ptr [esi + 0x80]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x68]
        call    eax
        mov     ecx, dword ptr [esi + 0x80]
        test    ecx, ecx
        je      skip_release
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    1
        call    eax
skip_release:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x80], 0
        cmp     dword ptr [ebp + 0x19c], ecx
        mov     byte ptr [mem_00B5D250], 0
        jne     skip_tail
        mov     ecx, dword ptr [esi + 4]
        push    0
        call    ext_006AD0C0
        mov     edx, dword ptr [esi - 0x34]
        push    edx
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, eax
        call    ext_006A60D0
        mov     eax, dword ptr [esi - 0x34]
        push    1
        push    0
        push    eax
        call    ebx
skip_tail:
        lea     ecx, [esp + 0x28]
        call    dword ptr [mem_009242F4]
epilogue:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5F50();
extern "C" void ext_006A60D0();
extern "C" void ext_006AD0C0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" void ext_006B7BA0();
extern "C" void ext_006B7DC0();
extern "C" void ext_006B7DE0();
extern "C" void ext_006B7E30();
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00925694;
extern "C" int mem_00925690;
extern "C" int mem_00925650;
extern "C" int mem_00B5D204;
extern "C" int mem_00925688;
extern "C" int mem_00924300;
extern "C" int mem_00B5D200;

// [0x006B5830] GWCPropInPlaceButton::vfunc_79 (684 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B5830(void* self) {
    __asm {
        push    -1
        push    0x008b7b1c
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x58]
        push    1
        call    ext_006AD0C0
        mov     ecx, dword ptr [esi + 0x58]
        call    ext_006AD1C0
        cmp     byte ptr [esi + 0xdd], 0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax + 0x19c]
        mov     dword ptr [esp + 0xc], eax
        je      L_006B59C9
        cmp     dword ptr [esi + 0xd4], 0
        jne     L_006B5ACA
        push    0x1ac
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        test    eax, eax
        mov     dword ptr [esp + 0x30], 0
        je      L_006B58B1
        push    0
        mov     ecx, eax
        call    ext_006B7BA0
        mov     edi, eax
        jmp     L_006B58B3
L_006B58B1:
        xor     edi, edi
L_006B58B3:
        mov     ecx, dword ptr [esi + 0xd4]
        or      ebx, -1
        cmp     edi, ecx
        mov     dword ptr [esp + 0x30], ebx
        je      L_006B58D1
        test    ecx, ecx
        je      L_006B58D1
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    1
        call    eax
L_006B58D1:
        mov     dword ptr [esi + 0xd4], edi
        lea     eax, [esi + 0x54]
        mov     ecx, edi
        mov     dword ptr [ecx + 0x1a4], eax
        mov     ecx, dword ptr [esi + 0x58]
        call    ext_006B4440
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 8]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     edi, dword ptr [esi + 0xd4]
        push    eax
        lea     ecx, [edi + 0x74]
        mov     dword ptr [esp + 0x34], 1
        call    dword ptr [mem_009244D4]
        push    eax
        lea     ecx, [edi + 0x78]
        call    dword ptr [mem_009244D4]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x30], ebx
        call    dword ptr [mem_009242F4]
        mov     eax, dword ptr [esi + 0x88]
        push    0
        push    0
        push    0xb0
        push    eax
        call    dword ptr [mem_00925694]
        mov     ecx, dword ptr [esi + 0xd4]
        push    eax
        call    ext_006B7DC0
        mov     ecx, dword ptr [esi + 0x58]
        mov     edx, dword ptr [esi + 0xd8]
        push    ecx
        mov     ecx, dword ptr [esi + 0xd4]
        push    edx
        call    ext_006B7DE0
        mov     ecx, dword ptr [esi + 0xd4]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x13c]
        push    esi
        push    0x2af9
        call    edx
        mov     ecx, dword ptr [esi + 0x20]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    dword ptr [mem_00925690]
        mov     ecx, dword ptr [esi + 0xd4]
        lea     edx, [esp + 0x18]
        push    edx
        call    ext_006B7E30
        mov     ecx, dword ptr [esi + 0xd4]
        push    5
        call    ext_006A5E72
        mov     ecx, dword ptr [esi + 0xd4]
        call    ext_006A60D0
        mov     ecx, dword ptr [esi + 0x58]
        push    0
        call    ext_006AD0C0
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     fs:[0], ecx
        add     esp, 0x28
        ret
L_006B59C9:
        mov     eax, dword ptr [esi + 0x20]
        mov     edi, dword ptr [mem_00925650]
        push    ebp
        push    eax
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, dword ptr [esi + 0x58]
        mov     ebx, eax
        call    ext_006B4440
        mov     ecx, eax
        call    ext_006AD940
        mov     ecx, dword ptr [mem_00B5D204]
        mov     edx, dword ptr [ebx + 0x20]
        mov     ebp, dword ptr [mem_00925694]
        push    0
        push    eax
        push    ecx
        push    edx
        call    ebp
        test    eax, eax
        je      L_006B5A9C
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, dword ptr [eax + 0x20]
        push    1
        push    0
        push    ecx
        call    dword ptr [mem_00925688]
        cmp     byte ptr [esi + 0xdc], 0
        je      L_006B5A6F
        mov     ecx, dword ptr [esi + 0x58]
        call    ext_006B4440
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 8]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     ecx, eax
        mov     dword ptr [esp + 0x34], 2
        call    dword ptr [mem_00924300]
        push    eax
        lea     ecx, [esi + 0x68]
        call    ext_006A5F50
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x34], -1
        call    dword ptr [mem_009242F4]
L_006B5A6F:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, dword ptr [esi + 0x58]
        mov     ebx, eax
        call    ext_006B4440
        mov     ecx, eax
        call    ext_006AD940
        mov     ecx, dword ptr [mem_00B5D200]
        mov     edx, dword ptr [ebx + 0x20]
        push    0
        push    eax
        push    ecx
        push    edx
        call    ebp
L_006B5A9C:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [ecx + 0x19c], eax
        pop     ebp
        jne     L_006B5ACA
        mov     ecx, dword ptr [esi + 0x58]
        push    0
        call    ext_006AD0C0
        mov     edx, dword ptr [esi + 0x20]
        push    edx
        call    edi
        push    eax
        call    ext_006A5E00
        mov     ecx, eax
        call    ext_006A60D0
L_006B5ACA:
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x28
        ret
    }
}
