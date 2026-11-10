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
