// Decompiled translation unit: src/templates/SymbolPtrMap.cpp

// [0x0047B120] SymbolPtrMap<SearchableMap<NMData::TriggeredEventData *, GetNameFromAttribute<NMData::TriggeredEventData *>>>::vfunc_6 (74 bytes)
extern "C" void ext_00479C80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047B120(void* self) {
    __asm {
        sub esp, 8
        mov ecx, dword ptr [ecx + 0x4]
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 0x8]
        push esi
        lea esi, [ecx + 0x4]
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
