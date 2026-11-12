// Decompiled translation unit: src/templates/SymbolMap.cpp

// [0x005A2720] SymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::EffectorBaseData>>::vfunc_1 (37 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

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
