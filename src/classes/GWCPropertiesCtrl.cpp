// Decompiled translation unit: src/classes/GWCPropertiesCtrl.cpp

// [0x006A7A60] GWCPropertiesCtrl::vfunc_22 (37 bytes)
extern "C" void ext_006A5CE0();
extern "C" void ext_006A5EA2();

extern "C" __declspec(naked) void __fastcall fn_006A7A60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5CE0
        push 0x0
        push 0x2000000
        push 0x0
        mov ecx, esi
        call ext_006A5EA2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x174]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x006A83E0] GWCPropertiesCtrl::vfunc_93 (225 bytes)
extern "C" void ext_004077E0();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A6190();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_00872778();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_006A83E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b70a8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0xe8], -1
        jne L_006A84B1
        push esi
        push 0
        call dword ptr [mem_00925658]
        mov esi, eax
        test esi, esi
        je L_006A84B0
        push ebx
        lea ecx, [esp + 0x18]
        call ext_006A61A2
        push esi
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x34], 0
        call ext_006A6190
        lea eax, [edi + 0xdc]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A5EC6
        push 0x990ad4
        lea ecx, [esp + 0x10]
        mov ebx, eax
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x20]
        call ext_004077E0
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esp + 0x14]
        add eax, 4
        push ebx
        lea ecx, [esp + 0x1c]
        mov dword ptr [edi + 0xe8], eax
        call ext_006A5EC6
        lea ecx, [esp + 0x18]
        call ext_00872778
        push esi
        push 0
        call dword ptr [mem_00925620]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x30], -1
        call ext_006A619C
        pop ebx
    L_006A84B0:
        pop esi
    L_006A84B1:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
