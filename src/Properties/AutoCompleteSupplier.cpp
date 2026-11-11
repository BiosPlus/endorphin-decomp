// Decompiled translation unit: src/Properties/AutoCompleteSupplier.cpp

// [0x0041CBF0] Properties::AutoCompleteSupplier::vfunc_1 (59 bytes)
extern "C" void ext_00660280();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_0041CBF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00660280
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je null_0041CBF0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
null_0041CBF0:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0041CC30] Properties::AutoCompleteSupplier::vfunc_2 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0041CC30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00660280
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je null_0041CC30
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
null_0041CC30:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
