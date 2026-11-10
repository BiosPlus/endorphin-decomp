// Decompiled translation unit: src/Properties/PropertyIteratorTypes/PropertySourceType.cpp

// [0x00681B50] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_0 (60 bytes)
extern "C" void __cdecl ext_00671F30(void* a1);

extern "C" __declspec(naked) void* __fastcall fn_00681B50(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je no_obj
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x3c]
        push eax
        push esi
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
no_obj:
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00681B90] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_2 (60 bytes)
extern "C" void ext_0046F7D0();

extern "C" __declspec(naked) void* __fastcall fn_00681B90(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je no_obj
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x38]
        push eax
        push esi
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
no_obj:
        push esi
        call ext_0046F7D0
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
