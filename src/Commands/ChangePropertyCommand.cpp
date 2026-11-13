// Decompiled translation unit: src/Commands/ChangePropertyCommand.cpp

// [0x006A0460] Commands::ChangePropertyCommand::vfunc_1 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A0460(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b6ba0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov edx, ecx
        mov ecx, dword ptr [edx + 0x14]
        mov esi, dword ptr [ecx]
        lea eax, [edx + 0x10]
        push edi
        mov dword ptr [ebp - 0x10], esp
        add edx, 0x20
        push edx
        push eax
        mov eax, dword ptr [esi + 0xa4]
        mov dword ptr [ebp - 0x4], 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006A04E0] Commands::ChangePropertyCommand::vfunc_2 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A04E0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b6bb0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov edx, ecx
        mov ecx, dword ptr [edx + 0x14]
        mov esi, dword ptr [ecx]
        lea eax, [edx + 0x10]
        push edi
        mov dword ptr [ebp - 0x10], esp
        add edx, 0x18
        push edx
        push eax
        mov eax, dword ptr [esi + 0xa4]
        mov dword ptr [ebp - 0x4], 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006A0560] Commands::ChangePropertyCommand::vfunc_3 (267 bytes)
extern "C" void ext_0041CEB0();
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void __fastcall fn_006A0560(void* self) {
    __asm {
        push -1
        push 0x8b6c04
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xbc
        push esi
        push edi
        push 0x1
        mov esi, ecx
        push 0x2
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924E4C]
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0xd0], 0x1
        call ext_0041CEB0
        mov edi, eax
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0xd0], 0x2
        call ext_0041CEB0
        push edi
        push 0x9441a4
        push eax
        lea edx, [esp + 0x50]
        push 0x98fcc8
        push edx
        mov byte ptr [esp + 0xe0], 0x3
        call ext_00435D00
        mov esi, dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call esi
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call esi
        add esp, 0x8
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xcc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xcc], 0x1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xd4]
        push esi
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x8], 0x1
        mov byte ptr [esp + 0xcc], 0x0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xc4]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc8
        ret 0x4
    }
}
