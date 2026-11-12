// Decompiled translation unit: src/VMCSModes/EditMode.cpp

// [0x004F2E20] VMCSModes::EditMode::vfunc_142 (26 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00666120();

extern "C" __declspec(naked) void __fastcall fn_004F2E20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472350
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        pop esi
        jmp ext_00666120
    }
}

// [0x004F2F90] VMCSModes::EditMode::vfunc_109 (137 bytes)
extern "C" void ext_00530290();
extern "C" void ext_006AD190();
extern "C" int mem_009542B8;

extern "C" __declspec(naked) void __fastcall fn_004F2F90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1a4]
        call edx
        test al, al
        je L_done
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        push ebx
        mov ebx, dword ptr [mem_009542B8]
        push edi
        call eax
        mov edi, eax
        test edi, edi
        je L_skip1
        mov ebx, dword ptr [edi + 0x38]
L_skip1:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        mov edx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xd4]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_skip2
        push ebx
        mov ecx, edi
        call ext_00530290
L_skip2:
        pop edi
        pop ebx
L_done:
        pop esi
        ret
    }
}

// [0x004F4C70] VMCSModes::EditMode::vfunc_6 (170 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004F4C70(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 8]
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        mov ebx, 1
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esp + 0x10], bl
        je L_004F4CC0
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F4CBA
        mov ecx, esi
        mov byte ptr [esi + 0x153], bl
        call ext_00472350
L_004F4CBA:
        add dword ptr [mem_00AD89B4], ebx
L_004F4CC0:
        mov ecx, dword ptr [edi + 4]
        push 2
        mov dword ptr [esp + 0x20], 0
        call ext_004667A0
        mov ecx, dword ptr [edi + 4]
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edx + 0x18]
        push eax
        call edx
        test esi, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004F4D06
        sub dword ptr [mem_00AD89B4], ebx
        jne L_004F4D06
        mov ecx, esi
        mov byte ptr [esi + 0x153], 0
        call ext_0046F930
L_004F4D06:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}
