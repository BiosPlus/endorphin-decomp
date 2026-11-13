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
