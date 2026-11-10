// Decompiled translation unit: src/classes/InitialVariableValues.cpp

extern "C" int mem_00925134;
extern "C" int mem_00924FE0;

// [0x005272C0] InitialVariableValues::vfunc_25 (76 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005272C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x8], 0x0
        je short invalid_index
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short index_ok
    invalid_index:
        call dword ptr [mem_00925134]
    index_ok:
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
