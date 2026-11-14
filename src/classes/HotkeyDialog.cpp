// Decompiled translation unit: src/classes/HotkeyDialog.cpp

// [0x004201B0] HotkeyDialog::vfunc_63 (299 bytes)
extern "C" void ext_004271F0();
extern "C" void ext_006A5F44();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A63FA();
extern "C" int mem_00924FB0;
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004201B0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x877c82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x40]
        mov esi, ecx
        lea eax, [esi + 0x74]
        push eax
        push 0x433
        push edi
        call ext_006A5F44
        lea ebp, [esi + 0xcc]
        push ebp
        push 0x473
        push edi
        call ext_006A5F44
        lea ebx, [esi + 0x128]
        push ebx
        push 0x474
        push edi
        call ext_006A5F44
        lea ecx, [esi + 0x17c]
        push 0xacdab0
        push ecx
        call dword ptr [mem_00924FB0]
        mov edx, dword ptr [esi + 0xec]
        add esp, 0x8
        push 0x2
        push -1
        push 0x100c
        push edx
        mov byte ptr [esp + 0x50], al
        call dword ptr [mem_00925694]
        add eax, 0x1
        push 0x2
        lea edi, [eax - 0x1]
        mov eax, dword ptr [esi + 0xec]
        push edi
        push 0x100c
        push eax
        call dword ptr [mem_00925694]
        push 0x0
        push edi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebp
        call ext_006A63FA
        mov ecx, eax
        mov dword ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0x2
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esi + 0xc8]
        lea edx, [esp + 0x14]
        push edx
        call ext_004271F0
        cmp byte ptr [esp + 0x40], 0x0
        je L_004202AA
        test al, al
        je L_004202AA
        mov eax, 0x1
        jmp L_004202AC
    L_004202AA:
        xor eax, eax
    L_004202AC:
        push eax
        mov ecx, ebx
        call ext_006A5FDA
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00421AC0] HotkeyDialog::vfunc_66 (275 bytes)
extern "C" void ext_0041FEA0();
extern "C" void ext_0041FEC0();
extern "C" void ext_0041FEF0();
extern "C" void ext_0041FF10();
extern "C" void ext_004216F0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F7A();
extern "C" void ext_006A6418();

extern "C" __declspec(naked) void __fastcall fn_00421AC0(void* self, int edx_unused, void* msg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebx + 0x4]
        cmp eax, 0x203
        push esi
        mov esi, ecx
        jne L_00421AF2
        lea ecx, [esi + 0x128]
        call ext_006A6418
        test eax, eax
        je L_00421AE8
        mov ecx, esi
        call ext_004216F0
    L_00421AE8:
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4
    L_00421AF2:
        cmp eax, 0x100
        push edi
        jne L_00421BC5
        mov eax, dword ptr [ebx + 0x8]
        cmp eax, 0xd
        mov edi, dword ptr [mem_00925694]
        je L_00421B7E
        cmp eax, 0x1b
        je L_00421B47
        cmp eax, 0x71
        jne L_00421BC5
        add esi, 0x74
        mov ecx, esi
        call ext_0041FEA0
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0041FEC0
        push eax
        mov ecx, esi
        call ext_0041FEF0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4
    L_00421B47:
        mov ecx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push ecx
        call edi
        push eax
        call ext_006A5E00
        test eax, eax
        je L_00421B7E
        lea ecx, [esi + 0x74]
        call ext_0041FF10
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x108]
        push ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_00421B7E:
        mov ecx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push ecx
        call edi
        push eax
        call ext_006A5E00
        test eax, eax
        je L_00421BC5
        mov edx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push edx
        call edi
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x108]
        push ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_00421BC5:
        push ebx
        mov ecx, esi
        call ext_006A5F7A
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
