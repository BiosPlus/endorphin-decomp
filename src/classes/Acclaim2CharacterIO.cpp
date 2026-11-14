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
