// Decompiled translation unit: src/NMData/SecondaryTwistAndSwingConstraint.cpp

// [0x0061F990] NMData::SecondaryTwistAndSwingConstraint::vfunc_15 (102 bytes)
extern "C" void ext_005DF1F0();
extern "C" void ext_0061EFD0();
extern "C" void ext_0061EFF0();
extern "C" void ext_0061F010();

extern "C" __declspec(naked) int __fastcall fn_0061F990(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x33b
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_33b
        sub eax, 0x3
        je L_3
        sub eax, 0x18
        je L_18
        push edx
        push esi
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_18:
        push ecx
        push esi
        call ext_0061EFD0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_3:
        push ecx
        push esi
        call ext_0061F010
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_33b:
        push ecx
        push esi
        call ext_0061EFF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611830] NMData::SecondaryTwistAndSwingConstraint::vfunc_14 (54 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_00611830(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x159
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00612A20] NMData::SecondaryTwistAndSwingConstraint::vfunc_21 (310 bytes)
extern "C" void ext_00593910();
extern "C" void ext_00612650();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00A9F24C;
extern "C" int mem_00B40640;
extern "C" int mem_00A9F34C;

extern "C" __declspec(naked) void __fastcall fn_00612A20(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        mov     esi, ecx
        call    ext_00612650
        mov     eax, dword ptr [mem_00A9F24C]
        push    0x1
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_612a65
        cmp     eax, 0xb53b30
        je      loc_612a65
        cmp     eax, 0xb53ab0
        je      loc_612a65
        cmp     eax, 0xb53a70
        je      loc_612a65
        cmp     eax, 0xb53af0
        jne     loc_612a6c
    loc_612a65:
        mov     edi, 0xb53b30
        jmp     loc_612a6e
    loc_612a6c:
        mov     edi, eax
    loc_612a6e:
        cmp     edi, 0xb53a34
        je      loc_612b4e
        cmp     edi, 0xb53b30
        je      loc_612b4e
        cmp     edi, 0xb53ab0
        je      loc_612b4e
        cmp     edi, 0xb53a70
        je      loc_612b4e
        cmp     edi, 0xb53af0
        je      loc_612b4e
        push    ebx
        mov     ebx, dword ptr [esi]
        lea     ecx, [esp + 0xc]
        push    edi
        push    ecx
        call    ext_0067EFD0
        mov     edx, dword ptr [ebx + 0xf4]
        add     esp, 0x8
        push    eax
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [eax + 0xc]
        lea     ebx, [esi + 0x4]
        push    ecx
        mov     ecx, ebx
        call    edx
        mov     eax, dword ptr [mem_00A9F34C]
        push    0x1
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_612b0e
        cmp     eax, 0xb53b30
        je      loc_612b0e
        cmp     eax, 0xb53ab0
        je      loc_612b0e
        cmp     eax, 0xb53a70
        je      loc_612b0e
        cmp     eax, 0xb53af0
        jne     loc_612b13
    loc_612b0e:
        mov     eax, 0xb53b30
    loc_612b13:
        cmp     eax, 0xb53a34
        je      loc_612b3e
        cmp     eax, 0xb53b30
        je      loc_612b3e
        cmp     eax, 0xb53ab0
        je      loc_612b3e
        cmp     eax, 0xb53a70
        je      loc_612b3e
        cmp     eax, 0xb53af0
        je      loc_612b3e
        push    edi
        mov     ecx, esi
        call    ext_00593910
    loc_612b3e:
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [mem_00B40640]
        mov     edx, dword ptr [edx + 0xc]
        push    eax
        mov     ecx, ebx
        call    edx
        pop     ebx
    loc_612b4e:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}

// [0x0061EAB0] NMData::SecondaryTwistAndSwingConstraint::vfunc_17_off_C (99 bytes)
extern "C" void ext_0061D750();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0061EAB0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 164h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_0061EAB0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_0061D750
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_0061EAB0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}
