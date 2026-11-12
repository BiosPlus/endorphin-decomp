// Decompiled translation unit: src/SeverEventTypes/ReAttach.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_005E12D0();
extern "C" int mem_00925134;

// [0x004C7950] SeverEventTypes::ReAttach::vfunc_0 (310 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7950(void* self) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x8]
        cmp     ebx, dword ptr [ecx + 0xc]
        push    ebp
        push    esi
        push    edi
        lea     edi, [ecx + 0x4]
        mov     dword ptr [esp + 0x10], edi
        jbe     loc_4c796a
        call    dword ptr [mem_00925134]
    loc_4c796a:
        mov     esi, edi
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    loc_4c7970:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     loc_4c797e
        call    dword ptr [mem_00925134]
    loc_4c797e:
        test    esi, esi
        je      loc_4c7986
        cmp     esi, edi
        je      loc_4c7990
    loc_4c7986:
        mov     edi, dword ptr [mem_00925134]
        call    edi
        jmp     loc_4c7996
    loc_4c7990:
        mov     edi, dword ptr [mem_00925134]
    loc_4c7996:
        cmp     ebx, ebp
        je      loc_4c7a80
        test    esi, esi
        jne     loc_4c79a4
        call    edi
    loc_4c79a4:
        cmp     ebx, dword ptr [esi + 0x8]
        jb      loc_4c79ab
        call    edi
    loc_4c79ab:
        mov     ecx, dword ptr [ebx]
        call    ext_005E12D0
        call    ext_00594000
        cmp     ebx, dword ptr [esi + 0x8]
        mov     ebp, dword ptr [mem_00925134]
        mov     edi, eax
        jb      loc_4c79c6
        call    ebp
    loc_4c79c6:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [eax + 0x22c]
        add     edi, 0x168
        push    edi
        push    0
        push    0x2000
        add     ecx, 0xc
        call    ext_00528BF0
        cmp     ebx, dword ptr [esi + 0x8]
        jb      loc_4c79eb
        call    ebp
    loc_4c79eb:
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ecx + 0x18c]
        mov     edi, dword ptr [edx + 0x5ec]
        mov     esi, dword ptr [edi + 0x1c]
        add     edi, 0x18
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_4c7a06
        call    ebp
    loc_4c7a06:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     loc_4c7a14
        call    dword ptr [mem_00925134]
    loc_4c7a14:
        cmp     esi, ebp
        je      loc_4c7a67
        mov     eax, dword ptr [esp + 0x10]
        cmp     ebx, dword ptr [eax + 0x8]
        jb      loc_4c7a27
        call    dword ptr [mem_00925134]
    loc_4c7a27:
        cmp     esi, dword ptr [edi + 0x8]
        mov     eax, dword ptr [ebx]
        mov     ebp, dword ptr [eax + 0x234]
        jb      loc_4c7a3a
        call    dword ptr [mem_00925134]
    loc_4c7a3a:
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx + 0x4], ebp
        jne     loc_4c7a57
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4c7a4c
        call    dword ptr [mem_00925134]
    loc_4c7a4c:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x44]
        push    1
        call    eax
    loc_4c7a57:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4c7a62
        call    dword ptr [mem_00925134]
    loc_4c7a62:
        add     esi, 4
        jmp     loc_4c7a06
    loc_4c7a67:
        mov     esi, dword ptr [esp + 0x10]
        cmp     ebx, dword ptr [esi + 0x8]
        jb      loc_4c7a76
        call    dword ptr [mem_00925134]
    loc_4c7a76:
        add     ebx, 4
        mov     edi, esi
        jmp     loc_4c7970
    loc_4c7a80:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
