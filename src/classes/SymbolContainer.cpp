// Decompiled translation unit: src/classes/SymbolContainer.cpp

// [0x006870A0] SymbolContainer::vfunc_1 (37 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006870A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x28]
        call ext_005DF5C0
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00687100] SymbolContainer::vfunc_6 (71 bytes)
extern "C" void ext_00479C80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00687100(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 0x2c]
        push esi
        lea esi, [ecx + 0x28]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], ecx
        jbe skip_invalid
        call dword ptr [mem_00925134]
skip_invalid:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push ebp
        push esi
        push eax
        push esi
        push ebx
        push edi
        mov ecx, edi
        call ext_00479C80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x4
    }
}
