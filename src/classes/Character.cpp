// Decompiled translation unit: src/classes/Character.cpp

// [0x006248E0] Character::vfunc_1 (106 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00B4B18C;
extern "C" int mem_00924FC0;
extern "C" int mem_00B4B190;

extern "C" __declspec(naked) void* __fastcall fn_006248E0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        sub esp, 0x1c
        mov edi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push esi
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x48]
        call ext_005DF5C0
        test eax, eax
        jne L_found
        mov eax, dword ptr [mem_00B4B18C]
        mov ebx, dword ptr [mem_00924FC0]
        push eax
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_second
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    L_second:
        mov ecx, dword ptr [mem_00B4B190]
        push ecx
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_none
        lea eax, [edi + 0x38]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    L_none:
        xor eax, eax
    L_found:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}
