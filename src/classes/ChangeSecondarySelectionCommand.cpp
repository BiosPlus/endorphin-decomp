// Decompiled translation unit: src/classes/ChangeSecondarySelectionCommand.cpp

extern "C" void ext_004AF870();

// [0x004AFE10] ChangeSecondarySelectionCommand::vfunc_1 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFE10(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x74]
        lea eax, [ecx + 0x54]
        push eax
        lea eax, [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push edx
        push eax
        call ext_004AF870
        ret
    }
}
