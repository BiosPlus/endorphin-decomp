// Decompiled translation unit: src/SeverEventTypes/SeverSwitchOffChildren.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_005E12F0();
extern "C" void ext_005EED30();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004C7CD0] SeverEventTypes::SeverSwitchOffChildren::vfunc_0 (575 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7CD0(void* self) {
    __asm {
        push    -1
        push    0x87ba98
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x24
        push    ebx
        push    ebp
        lea     ebp, [ecx + 4]
        push    esi
        mov     esi, [ebp + 4]
        cmp     esi, [ebp + 8]
        push    edi
        mov     [esp + 0x10], ebp
        jbe     L_4C7D01
        call    dword ptr [mem_00925134]
    L_4C7D01:
        mov     ebx, ebp
        mov     edi, esi
    L_4C7D05:
        mov     esi, [ebp + 8]
        cmp     [ebp + 4], esi
        mov     [esp + 0x20], edi
        jbe     L_4C7D17
        call    dword ptr [mem_00925134]
    L_4C7D17:
        test    ebx, ebx
        je      L_4C7D1F
        cmp     ebx, ebp
        je      L_4C7D29
    L_4C7D1F:
        mov     ebp, dword ptr [mem_00925134]
        call    ebp
        jmp     L_4C7D2F
    L_4C7D29:
        mov     ebp, dword ptr [mem_00925134]
    L_4C7D2F:
        cmp     edi, esi
        je      L_4C7EFC
        test    ebx, ebx
        jne     L_4C7D3D
        call    ebp
    L_4C7D3D:
        cmp     edi, [ebx + 8]
        jb      L_4C7D44
        call    ebp
    L_4C7D44:
        mov     ecx, [edi]
        call    ext_005E12F0
        call    ext_00594000
        cmp     edi, [ebx + 8]
        mov     esi, eax
        jb      L_4C7D59
        call    ebp
    L_4C7D59:
        mov     eax, [edi]
        mov     eax, [eax + 0x22c]
        add     esi, 0x168
        push    esi
        push    1
        push    0x2000
        lea     ecx, [eax + 0xc]
        call    ext_00528BF0
        xor     eax, eax
        mov     [esp + 0x28], eax
        mov     [esp + 0x2c], eax
        mov     [esp + 0x30], eax
        cmp     edi, [ebx + 8]
        mov     [esp + 0x3c], eax
        jb      L_4C7D90
        call    ebp
    L_4C7D90:
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, [edi]
        call    ext_005EED30
        mov     esi, [esp + 0x28]
        mov     eax, [esp + 0x2c]
        cmp     esi, eax
        jbe     L_4C7DAE
        call    ebp
        mov     eax, [esp + 0x2c]
    L_4C7DAE:
        lea     ecx, [esp + 0x24]
        mov     ebp, ecx
        mov     [esp + 0x14], ebp
        mov     ebx, esi
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_4C7DC0:
        cmp     [esp + 0x28], eax
        mov     esi, eax
        jbe     L_4C7DCE
        call    dword ptr [mem_00925134]
    L_4C7DCE:
        test    ebp, ebp
        je      L_4C7DDA
        lea     edx, [esp + 0x24]
        cmp     ebp, edx
        je      L_4C7DE4
    L_4C7DDA:
        mov     ebp, dword ptr [mem_00925134]
        call    ebp
        jmp     L_4C7DEA
    L_4C7DE4:
        mov     ebp, dword ptr [mem_00925134]
    L_4C7DEA:
        cmp     ebx, esi
        je      L_4C7EB0
        mov     eax, [esp + 0x10]
        cmp     edi, [eax + 8]
        jb      L_4C7DFD
        call    ebp
    L_4C7DFD:
        mov     eax, [edi]
        mov     ecx, [eax + 0x18c]
        mov     edi, [ecx + 0x5ec]
        mov     esi, [edi + 0x1c]
        add     edi, 0x18
        cmp     esi, [edi + 8]
        jbe     L_4C7E18
        call    ebp
    L_4C7E18:
        mov     ebp, [edi + 8]
        cmp     [edi + 4], ebp
        jbe     L_4C7E26
        call    dword ptr [mem_00925134]
    L_4C7E26:
        cmp     esi, ebp
        je      L_4C7E83
        mov     ebp, [esp + 0x14]
        test    ebp, ebp
        jne     L_4C7E38
        call    dword ptr [mem_00925134]
    L_4C7E38:
        cmp     ebx, [ebp + 8]
        jb      L_4C7E43
        call    dword ptr [mem_00925134]
    L_4C7E43:
        cmp     esi, [edi + 8]
        mov     edx, [ebx]
        mov     ebp, [edx + 0x234]
        jb      L_4C7E56
        call    dword ptr [mem_00925134]
    L_4C7E56:
        mov     eax, [esi]
        cmp     [eax + 4], ebp
        jne     L_4C7E73
        cmp     esi, [edi + 8]
        jb      L_4C7E68
        call    dword ptr [mem_00925134]
    L_4C7E68:
        mov     ecx, [esi]
        mov     edx, [ecx]
        mov     eax, [edx + 0x44]
        push    0
        call    eax
    L_4C7E73:
        cmp     esi, [edi + 8]
        jb      L_4C7E7E
        call    dword ptr [mem_00925134]
    L_4C7E7E:
        add     esi, 4
        jmp     L_4C7E18
    L_4C7E83:
        mov     esi, [esp + 0x14]
        test    esi, esi
        jne     L_4C7E91
        call    dword ptr [mem_00925134]
    L_4C7E91:
        cmp     ebx, [esi + 8]
        jb      L_4C7E9C
        call    dword ptr [mem_00925134]
    L_4C7E9C:
        mov     eax, [esp + 0x2c]
        mov     edi, [esp + 0x20]
        mov     ebp, [esp + 0x14]
        add     ebx, 4
        jmp     L_4C7DC0
    L_4C7EB0:
        mov     ebx, [esp + 0x10]
        cmp     edi, [ebx + 8]
        jb      L_4C7EBB
        call    ebp
    L_4C7EBB:
        mov     eax, [edi]
        mov     byte ptr [eax + 0x17a], 1
        mov     eax, [esp + 0x28]
        test    eax, eax
        mov     dword ptr [esp + 0x3c], -1
        je      L_4C7EDD
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    L_4C7EDD:
        xor     eax, eax
        cmp     edi, [ebx + 8]
        mov     [esp + 0x28], eax
        mov     [esp + 0x2c], eax
        mov     [esp + 0x30], eax
        jb      L_4C7EF2
        call    ebp
    L_4C7EF2:
        add     edi, 4
        mov     ebp, ebx
        jmp     L_4C7D05
    L_4C7EFC:
        mov     ecx, [esp + 0x34]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x30
        ret
    }
}
