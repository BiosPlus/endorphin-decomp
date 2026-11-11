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
