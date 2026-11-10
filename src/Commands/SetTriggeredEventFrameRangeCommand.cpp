// Decompiled translation unit: src/Commands/SetTriggeredEventFrameRangeCommand.cpp

extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

// [0x0048F920] Commands::SetTriggeredEventFrameRangeCommand::vfunc_0 (86 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0048F920(void* self, int edx_unused, unsigned int flags) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 40h]
        push edi
        xor edi, edi
        cmp eax, edi
        je short L_skip40
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip40:
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 48h], edi
        mov eax, dword ptr [esi + 30h]
        cmp eax, edi
        je short L_skip30
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip30:
        mov ecx, esi
        mov dword ptr [esi + 30h], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 38h], edi
        call ext_00665810
        test byte ptr [esp + 0Ch], 1
        je short L_noself
        push esi
        call ext_006A5C5C
        add esp, 4
    L_noself:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}
