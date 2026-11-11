// Decompiled translation unit: src/classes/CharacterSelection.cpp

extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004EC9B0] CharacterSelection::vfunc_0_off_18 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EC9B0(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x40
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x0
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], 0x6
        mov dword ptr [ecx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}
