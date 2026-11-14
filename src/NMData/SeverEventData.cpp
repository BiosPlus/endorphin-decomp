// Decompiled translation unit: src/NMData/SeverEventData.cpp

extern "C" void ext_00437AD0();
extern "C" void ext_004C7F50();

// [0x004C8160] NMData::SeverEventData::vfunc_87 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C8160(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x19c]
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_004C817B
        call ext_00437AD0
        push 0x0
        mov ecx, esi
        call ext_004C7F50
L_004C817B:
        pop esi
        ret
    }
}

// [0x004C7870] NMData::SeverEventData::vfunc_84 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7870(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x19c]
        test ecx, ecx
        je short L_004C7897
        cmp byte ptr [eax + 0x17c], 0x0
        je short L_004C7897
        mov edx, dword ptr [esp + 0x4]
        cmp edx, dword ptr [eax + 0x15c]
        jne short L_004C7897
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
L_004C7897:
        ret 0x4
    }
}

// [0x004C7190] NMData::SeverEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F274;
extern "C" __declspec(naked) void __fastcall fn_004C7190(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F274]
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

// [0x004C8340] NMData::SeverEventData::vfunc_90 (251 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_004C2760();
extern "C" void ext_00594000();
extern "C" void ext_00599EA0();
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004C8340(void* self) {
    __asm {
        push -1
        push 0x88bc71
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push ebx
        push ebp
        xor ebp, ebp
        mov ebx, ecx
        mov dword ptr [esp + 0x10], ebp
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0x18], ebp
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x13c]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x44], ebp
        call edx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_004026E0
        call ext_00594000
        cmp eax, ebp
        je L_004C842A
        push esi
        mov esi, dword ptr [ebx + 0x168]
        cmp esi, ebp
        jne L_004C83B6
        call ext_00594000
        mov ecx, eax
        call ext_00599EA0
        jmp L_004C83F5
L_004C83B6:
        mov eax, dword ptr [esi + 0x334]
        cmp eax, ebp
        je L_004C8429
        mov ecx, dword ptr [esi + 0x338]
        sub ecx, eax
        sar ecx, 2
        je L_004C8429
        push edi
        mov edi, eax
        cmp edi, dword ptr [esi + 0x338]
        jbe L_004C83E4
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi + 0x338]
L_004C83E4:
        jb L_004C83EC
        call dword ptr [mem_00925134]
L_004C83EC:
        mov edi, dword ptr [edi]
        mov eax, dword ptr [edi + 0x22c]
        pop edi
L_004C83F5:
        cmp eax, ebp
        je L_004C8429
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x48], 1
        call ext_004C2760
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
L_004C8429:
        pop esi
L_004C842A:
        mov ecx, dword ptr [esp + 0x38]
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret
    }
}

extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" void ext_00640110();
extern "C" int mem_00A9F96C;
extern "C" int mem_00924FF0;

// [0x004C71C0] NMData::SeverEventData::vfunc_22 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004C71C0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_004C1DE0
        mov eax, dword ptr [mem_00A9F96C]
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x180]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004CA1C0] NMData::SeverEventData::vfunc_88 (94 bytes)
extern "C" void ext_004CA1A0();
extern "C" void ext_004C9560();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004CA1C0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        push edi
        call ext_004CA1A0
        mov esi, dword ptr [edi + 0x19c]
        mov ebx, eax
        add esp, 4
        cmp ebx, esi
        je L_004CA20C
        test esi, esi
        je L_004CA20C
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je L_004CA1EE
        push eax
        call ext_006A5C5C
        add esp, 4
L_004CA1EE:
        push esi
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [esi + 0xc], 0
        mov dword ptr [esi + 0x10], 0
        call ext_006A5C5C
        add esp, 4
L_004CA20C:
        push edi
        mov ecx, ebx
        mov dword ptr [edi + 0x19c], ebx
        call ext_004C9560
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x004C8180] NMData::SeverEventData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004C7FA0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004C8180(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 1a0h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004C8180_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004C7FA0
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004C8180_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004C8210] NMData::SeverEventData::vfunc_21 (295 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0049F540();
extern "C" void ext_004C24C0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00AE29D0;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F96C;
extern "C" int mem_00A9F680;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00A9F0C4;

extern "C" __declspec(naked) void __fastcall fn_004C8210(void* self, int edx_unused, int a1) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    esi
        mov     edi, ecx
        call    ext_004C24C0
        mov     eax, dword ptr [mem_00AE29D0]
        test    eax, eax
        je      L_004C8247
        cmp     dword ptr [eax + 0x538], 0x5
        jge     L_004C8247
        mov     eax, dword ptr [mem_00A9F838]
        push    eax
        mov     ecx, esi
        call    ext_0063EFE0
        push    eax
        lea     ecx, [edi + 0x180]
        push    ecx
        jmp     L_004C825D
    L_004C8247:
        mov     edx, dword ptr [mem_00A9F96C]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        push    eax
        lea     eax, [edi + 0x180]
        push    eax
    L_004C825D:
        call    ext_004275E0
        mov     ecx, dword ptr [mem_00A9F680]
        add     esp, 0x8
        push    ecx
        mov     ecx, esi
        call    ext_0063EFE0
        cmp     eax, 0xb53a34
        je      L_004C82BC
        cmp     eax, 0xb53b30
        je      L_004C82BC
        cmp     eax, 0xb53ab0
        je      L_004C82BC
        cmp     eax, 0xb53a70
        je      L_004C82BC
        cmp     eax, 0xb53af0
        je      L_004C82BC
        mov     edx, dword ptr [mem_00A9F680]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        mov     dword ptr [esp + 0xc], eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [edi + 0x15c]
        push    ecx
        call    ext_0053F5F0
        add     esp, 0x8
    L_004C82BC:
        mov     edx, dword ptr [mem_00A9F0C0]
        push    0x1
        push    0x0
        push    edx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_004C82F1
        cmp     eax, 0xb53b30
        je      L_004C82F1
        cmp     eax, 0xb53ab0
        je      L_004C82F1
        cmp     eax, 0xb53a70
        je      L_004C82F1
        cmp     eax, 0xb53af0
        jne     L_004C82F6
    L_004C82F1:
        mov     eax, 0xb53b30
    L_004C82F6:
        cmp     eax, 0xb53a34
        je      L_004C8332
        cmp     eax, 0xb53b30
        je      L_004C8332
        cmp     eax, 0xb53ab0
        je      L_004C8332
        cmp     eax, 0xb53a70
        je      L_004C8332
        cmp     eax, 0xb53af0
        je      L_004C8332
        mov     ecx, dword ptr [mem_00A9F0C4]
        push    0x0
        push    ecx
        add     edi, 0x16c
        push    edi
        push    eax
        call    ext_0049F540
        add     esp, 0x10
    L_004C8332:
        pop     edi
        pop     esi
        ret     0x4
    }
}
