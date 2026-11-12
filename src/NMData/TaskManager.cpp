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
