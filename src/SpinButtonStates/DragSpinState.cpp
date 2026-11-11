// Decompiled translation unit: src/SpinButtonStates/DragSpinState.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A5EC0();
extern "C" void ext_00458860();
extern "C" int mem_0092569C;
extern "C" int mem_009256A0;
extern "C" int mem_009256D8;
extern "C" int mem_009256DC;
extern "C" int mem_009256E0;

// [0x00458810] SpinButtonStates::DragSpinState::vfunc_1 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458810(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_0092569C]
        push 0x0
        mov dword ptr [esi + 0x10], eax
        call dword ptr [mem_009256A0]
        mov esi, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        pop esi
        ret
    }
}

// [0x00458990] SpinButtonStates::DragSpinState::vfunc_5 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458990(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        mov ecx, eax
        shr ecx, 0x10
        movsx edx, cx
        push edi
        movsx eax, ax
        push edx
        push eax
        call dword ptr [mem_009256DC]
        push 0x1
        call dword ptr [mem_009256A0]
        call dword ptr [mem_009256E0]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x8]
        push eax
        call edx
        mov ecx, dword ptr [esi + 0xc]
        push 0x0
        call ext_00458860
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x004585B0] SpinButtonStates::DragSpinState::vfunc_8 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_004585B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x14], 0x0
        je L_cmp
        mov byte ptr [esi + 0x14], 0x0
        pop esi
        ret 0x8
    L_cmp:
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [ecx + 0x18]
        cmp eax, ecx
        push edi
        jle L_less
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov edi, dword ptr [edx]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        push eax
        mov eax, dword ptr [edi + 0x4]
        call eax
        jmp L_pos
    L_less:
        jge L_pos
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi]
        push eax
        call edx
    L_pos:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, eax
        shr ecx, 0x10
        movsx edx, cx
        movsx eax, ax
        push edx
        push eax
        call dword ptr [mem_009256DC]
        pop edi
        mov byte ptr [esi + 0x14], 0x1
        pop esi
        ret 0x8
    }
}
