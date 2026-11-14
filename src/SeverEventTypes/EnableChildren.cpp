// Decompiled translation unit: src/SeverEventTypes/EnableChildren.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_0059A140();
extern "C" void ext_005EED30();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004C8740] SeverEventTypes::EnableChildren::vfunc_0 (642 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C8740(void* self) {
    __asm {
        push    -1
        push    0x87ba98
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x2c
        push    ebx
        push    ebp
        lea     ebp, [ecx + 4]
        push    esi
        mov     esi, [ebp + 4]
        cmp     esi, [ebp + 8]
        push    edi
        mov     [esp + 0x10], ebp
        jbe     L_4C8771
        call    dword ptr [mem_00925134]
    L_4C8771:
        mov     edi, ebp
        mov     ebx, esi
    L_4C8775:
        mov     esi, [ebp + 8]
        cmp     [ebp + 4], esi
        mov     [esp + 0x20], ebx
        jbe     L_4C8787
        call    dword ptr [mem_00925134]
    L_4C8787:
        test    edi, edi
        je      L_4C878F
        cmp     edi, ebp
        je      L_4C8795
    L_4C878F:
        call    dword ptr [mem_00925134]
    L_4C8795:
        cmp     ebx, esi
        je      L_4C89AF
        call    ext_00594000
        xor     ebp, ebp
        cmp     edi, ebp
        mov     esi, eax
        jne     L_4C87B0
        call    dword ptr [mem_00925134]
    L_4C87B0:
        cmp     ebx, [edi + 8]
        jb      L_4C87BB
        call    dword ptr [mem_00925134]
    L_4C87BB:
        mov     eax, [ebx]
        mov     eax, [eax + 0x22c]
        add     esi, 0x168
        push    esi
        push    1
        push    0x2000
        lea     ecx, [eax + 0xc]
        call    ext_00528BF0
        mov     [esp + 0x30], ebp
        mov     [esp + 0x34], ebp
        mov     [esp + 0x38], ebp
        cmp     ebx, [edi + 8]
        mov     [esp + 0x44], ebp
        jb      L_4C87F4
        call    dword ptr [mem_00925134]
    L_4C87F4:
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, [ebx]
        call    ext_005EED30
        cmp     ebx, [edi + 8]
        jb      L_4C880B
        call    dword ptr [mem_00925134]
    L_4C880B:
        mov     esi, [esp + 0x30]
        cmp     esi, ebp
        mov     edx, [esp + 0x34]
        je      L_4C883A
        mov     ecx, [esp + 0x38]
        mov     eax, edx
        sub     eax, esi
        sub     ecx, esi
        sar     eax, 2
        sar     ecx, 2
        cmp     eax, ecx
        jae     L_4C883A
        mov     ecx, [ebx]
        mov     eax, edx
        add     eax, 4
        mov     [edx], ecx
        mov     [esp + 0x34], eax
        jmp     L_4C885D
    L_4C883A:
        cmp     esi, edx
        mov     edi, edx
        jbe     L_4C8846
        call    dword ptr [mem_00925134]
    L_4C8846:
        push    ebx
        lea     eax, [esp + 0x30]
        push    edi
        push    eax
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, eax
        call    ext_0059A140
        mov     eax, [esp + 0x34]
    L_4C885D:
        mov     esi, [esp + 0x30]
        cmp     esi, eax
        jbe     L_4C886F
        call    dword ptr [mem_00925134]
        mov     eax, [esp + 0x34]
    L_4C886F:
        lea     ecx, [esp + 0x2c]
        mov     edi, ecx
        mov     [esp + 0x14], edi
        mov     ebp, esi
        jmp     L_4C8880
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_4C8880:
        cmp     [esp + 0x30], eax
        mov     esi, eax
        jbe     L_4C888E
        call    dword ptr [mem_00925134]
    L_4C888E:
        test    edi, edi
        je      L_4C889A
        lea     eax, [esp + 0x2c]
        cmp     edi, eax
        je      L_4C88A0
    L_4C889A:
        call    dword ptr [mem_00925134]
    L_4C88A0:
        cmp     ebp, esi
        je      L_4C896F
        mov     eax, [esp + 0x10]
        cmp     ebx, [eax + 8]
        jb      L_4C88B7
        call    dword ptr [mem_00925134]
    L_4C88B7:
        mov     ecx, [ebx]
        mov     edx, [ecx + 0x18c]
        mov     edi, [edx + 0x5ec]
        mov     esi, [edi + 0x1c]
        add     edi, 0x18
        cmp     esi, [edi + 8]
        jbe     L_4C88D6
        call    dword ptr [mem_00925134]
    L_4C88D6:
        mov     ebx, [edi + 8]
        cmp     [edi + 4], ebx
        jbe     L_4C88E4
        call    dword ptr [mem_00925134]
    L_4C88E4:
        cmp     esi, ebx
        je      L_4C8942
        mov     ebx, [esp + 0x14]
        test    ebx, ebx
        jne     L_4C88F6
        call    dword ptr [mem_00925134]
    L_4C88F6:
        cmp     ebp, [ebx + 8]
        jb      L_4C8901
        call    dword ptr [mem_00925134]
    L_4C8901:
        cmp     esi, [edi + 8]
        mov     eax, [ebp]
        mov     ebx, [eax + 0x234]
        jb      L_4C8915
        call    dword ptr [mem_00925134]
    L_4C8915:
        mov     ecx, [esi]
        cmp     [ecx + 4], ebx
        jne     L_4C8932
        cmp     esi, [edi + 8]
        jb      L_4C8927
        call    dword ptr [mem_00925134]
    L_4C8927:
        mov     ecx, [esi]
        mov     edx, [ecx]
        mov     eax, [edx + 0x44]
        push    1
        call    eax
    L_4C8932:
        cmp     esi, [edi + 8]
        jb      L_4C893D
        call    dword ptr [mem_00925134]
    L_4C893D:
        add     esi, 4
        jmp     L_4C88D6
    L_4C8942:
        mov     esi, [esp + 0x14]
        test    esi, esi
        jne     L_4C8950
        call    dword ptr [mem_00925134]
    L_4C8950:
        cmp     ebp, [esi + 8]
        jb      L_4C895B
        call    dword ptr [mem_00925134]
    L_4C895B:
        mov     eax, [esp + 0x34]
        mov     ebx, [esp + 0x20]
        mov     edi, [esp + 0x14]
        add     ebp, 4
        jmp     L_4C8880
    L_4C896F:
        mov     eax, [esp + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x44], -1
        je      L_4C8988
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    L_4C8988:
        mov     edi, [esp + 0x10]
        xor     eax, eax
        cmp     ebx, [edi + 8]
        mov     [esp + 0x30], eax
        mov     [esp + 0x34], eax
        mov     [esp + 0x38], eax
        jb      L_4C89A5
        call    dword ptr [mem_00925134]
    L_4C89A5:
        add     ebx, 4
        mov     ebp, edi
        jmp     L_4C8775
    L_4C89AF:
        mov     ecx, [esp + 0x3c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x38
        ret
    }
}
