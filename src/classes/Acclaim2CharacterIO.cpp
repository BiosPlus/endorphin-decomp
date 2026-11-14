// Decompiled translation unit: src/classes/Acclaim2CharacterIO.cpp

// [0x0056B8C0] Acclaim2CharacterIO::vfunc_48 (53 bytes)
extern "C" int mem_00955998;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0056B8C0(void* self) {
    __asm {
        fld dword ptr [mem_00955998]
        fcomp dword ptr [ecx + 0x46c]
        fnstsw ax
        test ah, 0x41
        jp short ret_zero
        add ecx, 0xac
        push 0x9590c0
        push ecx
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short ret_zero
        mov eax, 1
        ret
ret_zero:
        xor eax, eax
        ret
    }
}

// [0x0056B770] Acclaim2CharacterIO::vfunc_3 (131 bytes)
extern "C" void ext_00553720();
extern "C" void ext_0063F530();
extern "C" void ext_00640390();
extern "C" int mem_00A9ECE8;

extern "C" __declspec(naked) void __fastcall fn_0056B770(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr [mem_00A9ECE8]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 1
        push 0
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_56b7ac
        cmp eax, 0xb53b30
        je loc_56b7ac
        cmp eax, 0xb53ab0
        je loc_56b7ac
        cmp eax, 0xb53a70
        je loc_56b7ac
        cmp eax, 0xb53af0
        jne loc_56b7b1
loc_56b7ac:
        mov eax, 0xb53b30
loc_56b7b1:
        cmp eax, 0xb53a34
        je loc_56b7d4
        cmp eax, 0xb53b30
        je loc_56b7d4
        cmp eax, 0xb53ab0
        je loc_56b7d4
        cmp eax, 0xb53a70
        je loc_56b7d4
        cmp eax, 0xb53af0
        jne loc_56b7ec
loc_56b7d4:
        mov ecx, dword ptr [mem_00A9ECE8]
        push 0
        push ecx
        mov ecx, esi
        call ext_00640390
        push eax
        mov ecx, edi
        call ext_00553720
loc_56b7ec:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0056D620] Acclaim2CharacterIO::vfunc_13 (504 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00566FE0();
extern "C" void ext_00567910();
extern "C" void ext_005679D0();
extern "C" void ext_00568460();
extern "C" void ext_0056B360();
extern "C" void ext_0056D3B0();
extern "C" void ext_00584A10();
extern "C" void ext_005A3610();
extern "C" void ext_00662120();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0056D620(void* self, int edx_unused, void* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x89c478
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x420]
        push    edi
        call    ext_00662120
        lea     ebx, [esi + 0x46c]
        mov     ecx, ebx
        call    ext_0056B360
        cmp     dword ptr [esi + 0x4f4], 0x1
        jne     loc_56d666
        fld     dword ptr [mem_00955998]
        fstp    dword ptr [ebx]
loc_56d666:
        mov     eax, dword ptr [esi + 0x414]
        lea     ecx, [eax + 0x4]
        call    ext_00584A10
        push    eax
        lea     ecx, [esi + 0x4c4]
        call    dword ptr [mem_00924FC0 + 0x1c] // 0x924fdc
        fld     dword ptr [esi + 0x190]
        mov     eax, dword ptr [esi + 0x198]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x4a0], eax
        mov     eax, dword ptr [esi + 0x19c]
        fstp    dword ptr [esi + 0x498]
        fld     dword ptr [esi + 0x188]
        mov     dword ptr [esi + 0x4a4], eax
        mov     eax, dword ptr [esi + 0x194]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x49c], eax
        fstp    dword ptr [esi + 0x490]
        lea     eax, [esi + 0x8]
        fld     dword ptr [esi + 0x18c]
        push    eax
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esi + 0x4a8]
        fld     dword ptr [esp + 0x14]
        fstp    dword ptr [esi + 0x494]
        call    dword ptr [mem_00924FC0 + 0x1c]
        mov     ecx, dword ptr [esi + 0x414]
        add     ecx, 0x160
        push    ecx
        mov     ecx, esi
        call    ext_0056D3B0
        fld     dword ptr [mem_00955998]
        fcomp   dword ptr [ebx]
        mov     edi, dword ptr [esi + 0x414]
        add     edi, 0x58c
        fnstsw  ax
        test    ah, 0x41
        jp      loc_56d79a
        mov     eax, dword ptr [edi + 0x4]
        mov     eax, dword ptr [eax]
        push    ebp
        mov     ebp, edi
        mov     ebx, eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebx
loc_56d732:
        test    ebp, ebp
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [esp + 0x20], edx
        je      loc_56d741
        cmp     ebp, edi
        je      loc_56d747
loc_56d741:
        call    dword ptr [mem_00925134]
loc_56d747:
        cmp     ebx, dword ptr [esp + 0x20]
        je      loc_56d799
        test    ebp, ebp
        jne     loc_56d757
        call    dword ptr [mem_00925134]
loc_56d757:
        cmp     ebx, dword ptr [ebp + 0x4]
        jne     loc_56d762
        call    dword ptr [mem_00925134]
loc_56d762:
        mov     ecx, dword ptr [ebx + 0x28]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x70]
        call    edx
        test    al, al
        je      loc_56d786
        cmp     ebx, dword ptr [ebp + 0x4]
        jne     loc_56d77b
        call    dword ptr [mem_00925134]
loc_56d77b:
        mov     eax, dword ptr [ebx + 0x28]
        push    eax
        mov     ecx, esi
        call    ext_0056D3B0
loc_56d786:
        lea     ecx, [esp + 0x14]
        call    ext_00673C20
        mov     ebx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x14]
        jmp     loc_56d732
loc_56d799:
        pop     ebp
loc_56d79a:
        mov     ecx, dword ptr [esi + 0x414]
        mov     byte ptr [esi + 0x4f0], 0x1
        call    ext_005A3610
        lea     edi, [esi + 0x46c]
        push    edi
        lea     ecx, [esp + 0x10]
        call    ext_00566FE0
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], 0x0
        call    ext_005679D0
        mov     ecx, edi
        call    ext_00567910
        mov     edi, dword ptr [esp + 0x30]
        push    edi
        lea     ecx, [esp + 0x10]
        call    ext_00568460
        mov     esi, dword ptr [esi + 0x414]
        push    edi
        lea     ecx, [esi + 0x4ac]
        call    dword ptr [mem_00924FC0 + 0x1c]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    ext_00493D90
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x20
        ret     0x4
    }
}

// [0x0056BD50] Acclaim2CharacterIO::vfunc_14 (694 bytes)
extern "C" void ext_00421C00();
extern "C" void ext_0056B360();
extern "C" void ext_0056B3F0();
extern "C" void ext_0056BC30();
extern "C" void ext_0057BB20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00955998;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0056BD50(void* self, int edx_unused, void* arg) {
    __asm {
        push    -1
        push    0x89c32a
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x46c]
        mov     ecx, edi
        call    ext_0056B360
        push    edi
        lea     ecx, [esp + 0x38]
        call    ext_0057BB20
        mov     eax, dword ptr [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x60], 0
        call    ext_0056B3F0
        mov     edx, dword ptr [esi + 0x27c]
        mov     eax, dword ptr [edx + 0x84]
        lea     ebx, [esi + 0x27c]
        mov     ecx, ebx
        call    eax
        push    0x9590c0
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        mov     edx, dword ptr [ebx]
        mov     edx, dword ptr [edx + 0x5c]
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, ebx
        mov     byte ptr [esp + 0x60], 1
        call    edx
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x5c], 0
        call    dword ptr [mem_00924FF4]
        fld     dword ptr [mem_00955998]
        fcomp   dword ptr [edi]
        fnstsw  ax
        test    ah, 0x41
        jne     loc_56bef6
        mov     eax, dword ptr [esi + 0x484]
        test    eax, eax
        je      loc_56be0c
        mov     ecx, dword ptr [esi + 0x488]
        sub     ecx, eax
        sar     ecx, 2
        jne     loc_56be12
loc_56be0c:
        call    dword ptr [mem_00925134]
loc_56be12:
        mov     eax, dword ptr [esi + 0x484]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        mov     edx, dword ptr [edx + 0x5c]
        add     ecx, 8
        push    ecx
        mov     ecx, ebx
        call    edx
        mov     eax, dword ptr [esi + 0x484]
        test    eax, eax
        je      loc_56be3e
        mov     ecx, dword ptr [esi + 0x488]
        sub     ecx, eax
        sar     ecx, 2
        jne     loc_56be44
loc_56be3e:
        call    dword ptr [mem_00925134]
loc_56be44:
        mov     eax, dword ptr [esi + 0x484]
        mov     edi, dword ptr [eax]
        mov     ebp, dword ptr [edi + 0x28]
        add     edi, 0x24
        cmp     ebp, dword ptr [edi + 8]
        jbe     loc_56be5d
        call    dword ptr [mem_00925134]
loc_56be5d:
        mov     dword ptr [esp + 0x10], edi
        mov     ebx, ebp
loc_56be63:
        mov     eax, dword ptr [esi + 0x484]
        test    eax, eax
        je      loc_56be7a
        mov     edx, dword ptr [esi + 0x488]
        sub     edx, eax
        sar     edx, 2
        jne     loc_56be80
loc_56be7a:
        call    dword ptr [mem_00925134]
loc_56be80:
        mov     eax, dword ptr [esi + 0x484]
        mov     edi, dword ptr [eax]
        mov     ebp, dword ptr [edi + 0x2c]
        add     edi, 0x24
        cmp     dword ptr [edi + 4], ebp
        jbe     loc_56be99
        call    dword ptr [mem_00925134]
loc_56be99:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      loc_56bea5
        cmp     eax, edi
        je      loc_56beb3
loc_56bea5:
        mov     edi, dword ptr [mem_00925134]
        call    edi
        mov     eax, dword ptr [esp + 0x10]
        jmp     short loc_56beb9
loc_56beb3:
        mov     edi, dword ptr [mem_00925134]
loc_56beb9:
        cmp     ebx, ebp
        je      loc_56bf84
        test    eax, eax
        jne     loc_56becb
        call    edi
        mov     eax, dword ptr [esp + 0x10]
loc_56becb:
        cmp     ebx, dword ptr [eax + 8]
        jb      loc_56bed2
        call    edi
loc_56bed2:
        mov     eax, dword ptr [ebx]
        push    eax
        lea     eax, [esi + 0x27c]
        push    eax
        mov     ecx, esi
        call    ext_0056BC30
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ebx, dword ptr [ecx + 8]
        jb      loc_56beee
        call    edi
loc_56beee:
        add     ebx, 4
        jmp     loc_56be63
loc_56bef6:
        push    0x9590c0
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        mov     edx, dword ptr [ebx]
        mov     edx, dword ptr [edx + 0x5c]
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, ebx
        mov     byte ptr [esp + 0x60], 2
        call    edx
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x5c], 0
        call    dword ptr [mem_00924FF4]
        mov     edi, dword ptr [esi + 0x484]
        cmp     edi, dword ptr [esi + 0x488]
        jbe     loc_56bf40
        call    dword ptr [mem_00925134]
        jmp     short loc_56bf40
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
loc_56bf40:
        mov     ebp, dword ptr [esi + 0x488]
        cmp     dword ptr [esi + 0x484], ebp
        jbe     loc_56bf54
        call    dword ptr [mem_00925134]
loc_56bf54:
        cmp     edi, ebp
        je      loc_56bf84
        cmp     edi, dword ptr [esi + 0x488]
        jb      loc_56bf66
        call    dword ptr [mem_00925134]
loc_56bf66:
        mov     eax, dword ptr [edi]
        push    eax
        push    ebx
        mov     ecx, esi
        call    ext_0056BC30
        cmp     edi, dword ptr [esi + 0x488]
        jb      loc_56bf7f
        call    dword ptr [mem_00925134]
loc_56bf7f:
        add     edi, 4
        jmp     short loc_56bf40
loc_56bf84:
        fld     dword ptr [esi + 0x494]
        mov     eax, dword ptr [esi + 0x49c]
        fstp    dword ptr [esp + 0x64]
        mov     dword ptr [esi + 0x84], eax
        fld     dword ptr [esp + 0x64]
        mov     eax, dword ptr [esi + 0x4a0]
        fstp    dword ptr [esi + 0x7c]
        mov     dword ptr [esi + 0x88], eax
        fld     dword ptr [esi + 0x498]
        mov     eax, dword ptr [esi + 0x4a4]
        fstp    dword ptr [esp + 0x64]
        lea     ecx, [esp + 0x34]
        fld     dword ptr [esp + 0x64]
        mov     dword ptr [esi + 0x8c], eax
        fstp    dword ptr [esi + 0x80]
        mov     dword ptr [esp + 0x5c], -1
        fld     dword ptr [esi + 0x490]
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fstp    dword ptr [esi + 0x78]
        call    ext_00421C00
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x50
        ret     4
    }
}
