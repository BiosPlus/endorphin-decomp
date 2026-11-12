// Decompiled translation unit: src/templates/SetType.cpp

// [0x004BBD10] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_12 (78 bytes)
extern "C" void ext_004BB160();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004BBD10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_004BBD2D
        call ebp
    L_004BBD2D:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_004BB160
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je L_004BBD4A
        cmp eax, esi
        je L_004BBD4C
    L_004BBD4A:
        call ebp
    L_004BBD4C:
        xor eax, eax
        cmp dword ptr [edi + 0x4], ebx
        pop edi
        pop esi
        pop ebp
        sete al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}
