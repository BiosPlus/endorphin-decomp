// Decompiled translation unit: src/NMData/TaskManager.cpp

extern "C" void ext_0050D7C0();

// [0x0050D8B0] NMData::TaskManager::vfunc_1_off_8 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050D8B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0xF8 // add ecx, -0x8
        call ext_0050D7C0
        ret 0x8
    }
}

// [0x0050AC30] NMData::TaskManager::vfunc_13 (231 bytes)
// Thiscall, ret 8 (a1, name). Frame has an EH state slot (fs:[0] record) and a
// std::string temporary. Returns a1 in eax.
//   if (name == *mem_00A9F308) { std::string t(lit_928b5d); this->sub10->vfunc_13(a1, t); }
//   else if (name == *mem_00A9F30C) { static guard; a1->ext_0055DA20(static, &this->m24); }
//   else ext_0046F7D0(a1);
extern "C" void ext_0046F7D0();
extern "C" void ext_0050A170();
extern "C" void ext_0055DA20();
extern "C" int mem_00A9F308;
extern "C" int mem_00A9F30C;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00AEBCC0;
extern "C" int mem_00AEBCBC;

extern "C" __declspec(naked) void* __fastcall fn_0050AC30(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        mov eax, dword ptr [mem_00A9F308]
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x40]
        push eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0
        call ebx
        add esp, 0x8
        test al, al
        je short tm_b2
        push 0x928b5d
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edx + 0x34]
        lea ecx, [esi + 0x10]
        mov esi, dword ptr [esp + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        push esi
        mov dword ptr [esp + 0x3c], 0
        call edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        jmp short tm_tail
    tm_b2:
        mov eax, dword ptr [mem_00A9F30C]
        push eax
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je short tm_b3
        mov eax, 0x1
        test byte ptr [mem_00AEBCC0], al
        jne short tm_acdc
        or dword ptr [mem_00AEBCC0], eax
        call ext_0050A170
        mov dword ptr [mem_00AEBCBC], eax
    tm_acdc:
        mov ecx, dword ptr [mem_00AEBCBC]
        add esi, 0x24
        push esi
        mov esi, dword ptr [esp + 0x40]
        push ecx
        mov ecx, esi
        call ext_0055DA20
        jmp short tm_tail
    tm_b3:
        mov esi, dword ptr [esp + 0x3c]
        push esi
        call ext_0046F7D0
        add esp, 0x4
    tm_tail:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x8
    }
}

extern "C" void ext_00427550();
extern "C" void ext_0050A9D0();
extern "C" void ext_0050AFA0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" int mem_00A9F308;
extern "C" int mem_00A9F300;
extern "C" int mem_00A9F30C;
extern "C" int mem_00A9F438;
extern "C" int mem_00A40EF8[];

// [0x0050B710] NMData::TaskManager::vfunc_3_off_4 (106 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0050B710(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr [mem_00A9F308]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 0xc]
        call ext_0050A9D0
        mov ecx, dword ptr [mem_00A9F300]
        mov edx, dword ptr [mem_00A9F30C]
        push 0
        push ecx
        push edx
        lea eax, [esi + 0x20]
        push edi
        push eax
        call ext_0050AFA0
        mov ecx, dword ptr [mem_00A9F438]
        add esp, 0x14
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [edx * 4 + mem_00A40EF8]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x0050DAC0] NMData::TaskManager::vfunc_1_off_4 (283 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00508800();
extern "C" void ext_0050D0B0();
extern "C" void ext_0050D8C0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_0050DAC0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [mem_00A9F308]
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        push 1
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_50db14
        cmp eax, 0xb53b30
        je loc_50db14
        cmp eax, 0xb53ab0
        je loc_50db14
        cmp eax, 0xb53a70
        je loc_50db14
        cmp eax, 0xb53af0
        jne loc_50db19
    loc_50db14:
        mov eax, 0xb53b30
    loc_50db19:
        push eax
        lea ecx, [esi + 0xc]
        call ext_0050D0B0
        mov ecx, dword ptr [mem_00A9F30C]
        push 1
        push 0
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_50db57
        cmp eax, 0xb53b30
        je loc_50db57
        cmp eax, 0xb53ab0
        je loc_50db57
        cmp eax, 0xb53a70
        je loc_50db57
        cmp eax, 0xb53af0
        jne loc_50db5c
    loc_50db57:
        mov eax, 0xb53b30
    loc_50db5c:
        mov edx, dword ptr [mem_00A9F300]
        push 1
        push edx
        lea ecx, [esi + 0x20]
        push ecx
        push eax
        call ext_0050D8C0
        add esp, 0x10
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [mem_00A9F438]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call ext_0063EFE0
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_004275E0
        add esp, 0x8
        lea ecx, [esp + 0x8]
        add esi, -4
        push ecx
        mov ecx, esi
        call ext_00508800
        mov ecx, esi
        call ext_0050D7C0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 4
    }
}


// [0x0050D820] NMData::TaskManager::vfunc_0_off_8 (138 bytes)
extern "C" void ext_0050B960();
extern "C" void ext_0050C7D0();
extern "C" void ext_0050D4B0();
extern "C" void ext_0050D7C0();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_0050D820(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x892200
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x0
        lea eax, [esi + 0x8]
        push eax
        lea ecx, [esp + 0x14]
        call ext_0050D4B0
        mov edi, eax
        mov ebx, dword ptr [esp + 0x34]
        lea ecx, [edi + 0x4]
        push ecx
        lea ecx, [ebx + 0x4]
        mov dword ptr [esp + 0x30], 0x0
        call ext_0050C7D0
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [ebx + 0x14], edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x2c], 0x1
        call ext_0050B960
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_0065F440
        lea ecx, [esi - 0x8]
        call ext_0050D7C0
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x8
    }
}
