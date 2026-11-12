// Decompiled translation unit: src/classes/ReloadCharacterDialog.cpp

// [0x00449F80] ReloadCharacterDialog::vfunc_63 (43 bytes)
extern "C" void ext_006A6610();

extern "C" __declspec(naked) void __fastcall fn_00449F80(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        lea eax, [esi + 74h]
        push eax
        push 46eh
        push edi
        call ext_006A6610
        add esi, 78h
        push esi
        push 468h
        push edi
        call ext_006A6610
        pop edi
        pop esi
        ret 4
    }
}

// [0x00449EC0] ReloadCharacterDialog::vfunc_86 (154 bytes)
extern "C" void ext_006629B0();
extern "C" void ext_006A5E60();
extern "C" void ext_006A5FB0();
extern "C" void ext_006A608E();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00449EC0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push 0x1
        mov esi, ecx
        call ext_006A608E
        lea ecx, [esi + 0x78]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call ext_006629B0
        add esp, 0x4
        test al, al
        lea ecx, [esp + 0x8]
        sete bl
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        test bl, bl
        je L_00449F42
        push 0x0
        push 0x0
        push 0x933bc8
        call ext_006A5E60
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    L_00449F42:
        mov ecx, esi
        call ext_006A5FB0
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
