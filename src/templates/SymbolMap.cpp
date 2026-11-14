// Decompiled translation unit: src/templates/SymbolMap.cpp

// [0x005A2720] SymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::EffectorBaseData>>::vfunc_1 (37 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" void ext_00479C80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005A2720(void* self) {
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
        mov ecx, dword ptr [esi + 0x4]
        call ext_005DF5C0
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005A62B0] SymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::EffectorBaseData>>::vfunc_6 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A62B0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 4]
        mov ebp, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 14h], ecx
        jbe short L_ok_005A62B0
        call dword ptr [mem_00925134]
L_ok_005A62B0:
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 14h]
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
        ret 4
    }
}
