// Decompiled translation unit: src/templates/SymbolMapWithChildNameValidation.cpp

// [0x005A27B0] SymbolMapWithChildNameValidation<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::DesiredPoseData>>::vfunc_1 (51 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005A27B0(void* self) {
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
        test eax, eax
        je loc_null
        add eax, 4
        pop esi
        pop ecx
        ret 0x4
    loc_null:
        xor eax, eax
        pop esi
        pop ecx
        ret 0x4
    }
}
