// Decompiled translation unit: src/NMData/TransitionEventData.cpp

// [0x004D0CF0] NMData::TransitionEventData::vfunc_81 (67 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" void ext_005AA830();
extern "C" void ext_004C0340();

extern "C" __declspec(naked) void __fastcall fn_004D0CF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        test eax, eax
        mov dword ptr [esi + 0x168], eax
        je L_skip
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        test al, al
        je L_skip
        push 0x0
        lea ecx, [esi + 0x198]
        call ext_005AA830
    L_skip:
        mov ecx, esi
        call ext_004C0340
        pop esi
        ret 0x4
    }
}

// [0x004D2750] NMData::TransitionEventData::vfunc_15 (127 bytes)
extern "C" void ext_004C3410();
extern "C" void ext_004D26F0();
extern "C" void ext_004D2710();
extern "C" void ext_004D2730();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_004D2750(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2ec
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_2ec
        sub eax, 0x2b
        je L_317
        sub eax, 0x68
        je L_37f
        push edx
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_37f:
        push ecx
        push esi
        call ext_004D26F0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_317:
        cmp dword ptr [ecx + 0x190], 0x4
        jne L_else
        push ecx
        push esi
        call ext_004D2730
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_else:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_2ec:
        push ecx
        push esi
        call ext_004D2710
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004D0B80] NMData::TransitionEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F358;

extern "C" __declspec(naked) void __fastcall fn_004D0B80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F358]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004D3240] NMData::TransitionEventData::vfunc_87 (68 bytes)
extern "C" void __fastcall ext_004D2AA0(void*);
extern "C" void __fastcall ext_004D2B40(void*);
extern "C" void __cdecl ext_006A5C5C(void*);

extern "C" void __fastcall fn_004D3240(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 0x18C)) {
        ext_004D2AA0(*(void**)(s + 0x18C));
        void* p = *(void**)(s + 0x18C);
        if (p) {
            ext_004D2B40(p);
            ext_006A5C5C(p);
        }
        *(void**)(s + 0x18C) = 0;
        *(int*)(s + 0x184) = 0x7FFFFFFF;
    }
}

extern "C" void ext_004C2070();
extern "C" void ext_00661650();

// [0x004D0C80] NMData::TransitionEventData::vfunc_14 (86 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004D0C80(void* self, int edx_unused, void* ret_buf, int key) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        cmp edi, 0x40
        mov esi, ecx
        mov dword ptr [esp + 0x8], 0
        jne L_fallback
        mov ecx, dword ptr [esi + 0x168]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne L_fallback
        add esi, 0x198
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fallback:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_004C2070
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x004D3070] NMData::TransitionEventData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004D2F60();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004D3070(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 32ch
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004D3070_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004D2F60
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004D3070_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004D0BB0] NMData::TransitionEventData::vfunc_22 (199 bytes)
extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" void ext_004D0B60();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FAE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F8F8;
extern "C" int mem_00A9EDE8;
extern "C" int mem_00AE5C68;
extern "C" int mem_009473C0;

extern "C" __declspec(naked) void* __fastcall fn_004D0BB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9FAE4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 188h]
        push ecx
        mov edx, eax
        call ext_004D0B60
        add esp, 4
        mov ecx, eax
        mov dword ptr [esp + 10h], edx
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        mov eax, dword ptr [esi + 190h]
        mov edx, dword ptr [mem_00A9F8F8]
        lea ebx, [eax*8]
        sub ebx, eax
        push edx
        mov ecx, edi
        lea ebx, [ebx*4 + mem_00AE5C68]
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        push offset mem_009473C0
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 194h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9EDE8]
        add esp, 8
        push 0
        push eax
        mov ecx, edi
        call ext_00640390
        mov edx, dword ptr [esi + 198h]
        lea ecx, [esi + 198h]
        push eax
        mov eax, dword ptr [edx + 58h]
        call eax
        push edi
        mov ecx, esi
        call ext_004C1DE0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x004D2A20] NMData::TransitionEventData::vfunc_84 (119 bytes)
extern "C" void ext_004D1F00();
extern "C" void ext_004D27D0();
extern "C" void ext_004D2930();

extern "C" __declspec(naked) void __fastcall fn_004D2A20(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x17c], 0
        je L_ret_esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp dword ptr [esi + 0x184], edi
        je L_ret_edi
        mov eax, dword ptr [esi + 0x15c]
        cmp edi, eax
        jne L_check_le
        mov ecx, dword ptr [esi + 0x18c]
        call ext_004D27D0
        mov dword ptr [esi + 0x184], edi
        pop edi
        pop esi
        ret 0x4

    L_check_le:
        jle L_le
        cmp edi, dword ptr [esi + 0x160]
        jge L_ge
        mov ecx, dword ptr [esi + 0x18c]
        call ext_004D1F00
        mov dword ptr [esi + 0x184], edi
        pop edi
        pop esi
        ret 0x4

    L_le:
        cmp edi, dword ptr [esi + 0x160]

    L_ge:
        jne L_store_exit
        mov ecx, dword ptr [esi + 0x18c]
        call ext_004D2930

    L_store_exit:
        mov dword ptr [esi + 0x184], edi

    L_ret_edi:
        pop edi

    L_ret_esi:
        pop esi
        ret 0x4
    }
}

// [0x004D37E0] NMData::TransitionEventData::vfunc_88 (149 bytes)
extern "C" void ext_004D2BE0();
extern "C" void ext_004D3370();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004D37E0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x1d4
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        mov dword ptr [esp + 0x18], 0x0
        je L_null
        mov ecx, eax
        call ext_004D2BE0
        mov ebx, eax
        jmp L_cont
    L_null:
        xor ebx, ebx
    L_cont:
        mov edi, dword ptr [esi + 0x18c]
        cmp ebx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        je L_skip
        test edi, edi
        je L_skip
        mov ecx, edi
        call ext_004D2B40
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        push esi
        mov ecx, ebx
        mov dword ptr [esi + 0x18c], ebx
        call ext_004D3370
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [esi + 0x184], 0x7fffffff
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004D0E10] NMData::TransitionEventData::vfunc_21 (510 bytes)
extern "C" void ext_004C24C0();
extern "C" void ext_004275E0();
extern "C" void ext_004D0B20();
extern "C" void ext_004D0D40();
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F2F8;

extern "C" __declspec(naked) void __fastcall fn_004D0E10(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        push edi
        mov ebp, ecx
        call ext_004C24C0
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9FAE4]
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x54], ebx
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        call ext_004275E0
        lea edx, [esp + 0x34]
        push edx
        call ext_004D0B20
        mov dword ptr [ebp + 0x188], eax
        mov eax, dword ptr [mem_00A9F8F8]
        add esp, 0xc
        push eax
        mov ecx, edi
        call ext_0063EFE0
        mov esi, eax
        cmp esi, 0xb53a34
        je short L_004D0EAA
        cmp esi, 0xb53b30
        je short L_004D0EAA
        cmp esi, 0xb53ab0
        je short L_004D0EAA
        cmp esi, 0xb53a70
        je short L_004D0EAA
        cmp esi, 0xb53af0
        jne short L_004D0EB2
    L_004D0EAA:
        mov dword ptr [ebp + 0x190], ebx
        jmp short L_004D0EE9
    L_004D0EB2:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x10]
        push esi
        push ecx
        mov byte ptr [esp + 0x58], 1
        call ext_004275E0
        add esp, 8
        lea edx, [esp + 0x10]
        push edx
        mov ecx, ebp
        call ext_004D0D40
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x50], bl
        call dword ptr [mem_00924FF4]
    L_004D0EE9:
        push 0x9473c0
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_004D0F18
        cmp eax, 0xb53b30
        je short L_004D0F18
        cmp eax, 0xb53ab0
        je short L_004D0F18
        cmp eax, 0xb53a70
        je short L_004D0F18
        cmp eax, 0xb53af0
        jne short L_004D0F22
    L_004D0F18:
        fld1
        fstp dword ptr [ebp + 0x194]
        jmp short L_004D0F3A
    L_004D0F22:
        mov dword ptr [esp + 0x58], eax
        lea eax, [esp + 0x58]
        push eax
        lea ecx, [ebp + 0x194]
        push ecx
        call ext_0046C0A0
        add esp, 8
    L_004D0F3A:
        mov edx, dword ptr [mem_00A9EDE8]
        push 1
        push ebx
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_004D0F6E
        cmp eax, 0xb53b30
        je short L_004D0F6E
        cmp eax, 0xb53ab0
        je short L_004D0F6E
        cmp eax, 0xb53a70
        je short L_004D0F6E
        cmp eax, 0xb53af0
        jne short L_004D0F73
    L_004D0F6E:
        mov eax, 0xb53b30
    L_004D0F73:
        cmp eax, 0xb53a34
        je short L_004D0FE1
        cmp eax, 0xb53b30
        je short L_004D0FE1
        cmp eax, 0xb53ab0
        je short L_004D0FE1
        cmp eax, 0xb53a70
        je short L_004D0FE1
        cmp eax, 0xb53af0
        je short L_004D0FE1
        mov ecx, dword ptr [mem_00A9F2F8]
        push 1
        push ebx
        push ecx
        mov ecx, eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_004D0FCA
        cmp eax, 0xb53b30
        je short L_004D0FCA
        cmp eax, 0xb53ab0
        je short L_004D0FCA
        cmp eax, 0xb53a70
        je short L_004D0FCA
        cmp eax, 0xb53af0
        jne short L_004D0FCF
    L_004D0FCA:
        mov eax, 0xb53b30
    L_004D0FCF:
        mov edx, dword ptr [ebp + 0x198]
        lea ecx, [ebp + 0x198]
        push eax
        mov eax, dword ptr [edx + 0x54]
        call eax
    L_004D0FE1:
        lea ecx, [esp + 0x2c]
        mov dword ptr [ebp + 0x164], ebx
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}
